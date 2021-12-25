FROM drogonframework/drogon

RUN mkdir -p /drogonproj
WORKDIR /drogonproj
RUN cd /drogonproj

VOLUME drogonfly:/drogonproj

RUN drogon_ctl create project drogonfly

WORKDIR /drogonproj/drogonfly/controllers
RUN cd /drogonproj/drogonfly/controllers

COPY main.cc /drogonproj/drogonfly
COPY Allocator.h /drogonproj/drogonfly/controllers/
COPY Allocator.cc /drogonproj/drogonfly/controllers/

WORKDIR /drogonproj/drogonfly/build
RUN cd /drogonproj/drogonfly/build
RUN cmake ..
RUN make

EXPOSE 80

CMD ./drogonfly




