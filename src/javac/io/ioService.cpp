/*
 * PROJECT:     LegoshiVM - javac
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */
#include "ioService.hpp"

ioService::ioService() = default;

ioService::~ioService() = default;

void ioService::openReaderStream(std::string path){
    this->readerStream.open(path,std::ios::binary);
}

void ioService::openWriteStream(std::string path){
    this->writerStream.open(path,std::ios::binary);
}

std::vector<u1> ioService::read() {
    std::vector<u1> bytes;
    if (this->readerStream.is_open()){
        while (!this->readerStream.eof())
        {
            char c;
            this->readerStream >> c >> std::noskipws;
            bytes.push_back(c);
        }
    }
    else {
        std::cout << "Loading fails";
    }
    return bytes;
}