# FROM ubuntu:18.04
#FROM nexus3.o-ran-sc.org:10002/o-ran-sc/bldr-ubuntu18-c-go:1.9.0 as build-kpimon
FROM golang:1.22.3-bookworm

RUN apt-get update && apt-get -y install g++ tar vim

WORKDIR /opt
# Install RMR client
#COPY bin/rmr* ./
#RUN dpkg -i rmr_4.8.0_amd64.deb; dpkg -i rmr-dev_4.8.0_amd64.deb; rm rmr*

# Install RMR client
ARG RMRVERSION=4.9.0
RUN wget --content-disposition https://packagecloud.io/o-ran-sc/release/packages/debian/stretch/rmr_${RMRVERSION}_amd64.deb/download.deb \
    && dpkg -i rmr_${RMRVERSION}_amd64.deb \
    && wget --content-disposition https://packagecloud.io/o-ran-sc/release/packages/debian/stretch/rmr-dev_${RMRVERSION}_amd64.deb/download.deb \
    && dpkg -i rmr-dev_${RMRVERSION}_amd64.deb \
    && rm -f rmr_${RMRVERSION}_amd64.deb rmr-dev_${RMRVERSION}_amd64.deb

COPY f1ap/ f1ap/

# "COMPILING F1AP Wrapper and F1AP Parser "
RUN cd f1ap && \
    gcc -c -fPIC -Iheaders/ lib/*.c wrapper.c && \
     gcc *.o -shared -o libf1apwrapper.so&& \
    cp libf1apwrapper.so /usr/local/lib/ && \
    mkdir /usr/local/include/f1ap && \
    cp wrapper.h headers/*.h /usr/local/include/f1ap && \
    ldconfig

COPY e2ap/ e2ap/

# "COMPILING E2AP Wrapper"
RUN cd e2ap && \
    gcc -c -fPIC -Iheaders/ lib/*.c wrapper.c && \
    gcc *.o -shared -o libe2apwrapper.so && \
    cp libe2apwrapper.so /usr/local/lib/ && \
    mkdir /usr/local/include/e2ap && \
    cp wrapper.h headers/*.h /usr/local/include/e2ap && \
    ldconfig

COPY asn1c/ asn1c/
COPY e2sm/ e2sm/
    
# "COMPILING E2SM Wrapper"
RUN cd e2sm && \
    gcc -c -fPIC -I/opt/asn1c/ /opt/asn1c/*.c wrapper.c && \
     gcc *.o -shared -o libe2smwrapper.so&& \
    cp libe2smwrapper.so /usr/local/lib/ && \
    mkdir /usr/local/include/kpimon && \
    cp wrapper.h /opt/asn1c/*.h /usr/local/include/kpimon && \
    ldconfig

# Setup running environment
COPY control/ control/
COPY f1apPackage/ f1apPackage/
COPY isolation/ isolation/
COPY ./go.mod ./go.mod
COPY ./kpimon.go ./kpimon.go
COPY testfile1.txt testfile1.txt
COPY testfile2.txt testfile2.txt

ENV DEFAULTPATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
ENV PATH=$DEFAULTPATH:/usr/local/go/bin:/opt/go/bin:/root/go/bin
COPY go.sum go.sum

RUN go build ./kpimon.go
COPY f1apHelper/ f1apHelper/
RUN go build f1apHelper/f1apServer.go

COPY config-file.yaml .
ENV CFG_FILE=/opt/config-file.yaml
COPY routes.txt .
ENV RMR_SEED_RT=/opt/routes.txt
ENV  RMR_SRC_ID=service-ricxapp-kpimon-go-rmr.ricxapp:4560
ENV LD_LIBRARY_PATH=/usr/local/lib
ENV C_INCLUDE_PATH=/usr/local/include
COPY entripoint.sh entripoint.sh
ENTRYPOINT ["env","LD_LIBRARY_PATH=/usr/local/lib","./entripoint.sh"]
#ENTRYPOINT ["env","LD_LIBRARY_PATH=/usr/local/lib","f1apHelper/f1apServer","./kpimon"]
