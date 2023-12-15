FROM gcc:latest
WORKDIR /usr/src/myapp
COPY main.cpp .
RUN g++ -o fibonacci main.cpp
ENTRYPOINT  ["./fibonacci"]