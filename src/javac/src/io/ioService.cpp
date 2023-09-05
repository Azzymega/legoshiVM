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

void ioService::write(ClassFile* file) {
    writerStream << file->magic;
    writerStream << file->minorVersion;
    writerStream << file->majorVersion;
    writerStream << file->constantPoolAmount;
    for (size_t i = 0; i < file->constantPool.size(); i++)
    {
        writerStream << file->constantPool[i].tag;
        for (size_t x = 0; x < file->constantPool[i].info.size(); x++)
        {
            writerStream << file->constantPool[i].info[x];
        }
    }
    writerStream << file->AccessFlags16;
    writerStream << file->CurrentClass;
    writerStream << file->SuperClass;
    writerStream << file->InterfaceCount;
    writerStream << file->FieldCount;
    writerStream << file->MethodCount;
    writerStream << file->methods[0].access_flags;
    writerStream << file->methods[0].name_index;
    writerStream << file->methods[0].descriptor_index;
    writerStream << file->methods[0].attributes_count;
    for (size_t i = 0; i < file->methods[0].attributes_count; i++)
    {
        writerStream << file->methods[0].attributes[i].attribute_name_index;
        writerStream << file->methods[0].attributes[i].attribute_length;
        for (size_t x = 0; x < file->methods[0].attributes[i].attribute_length; x++)
        {
            writerStream << file->methods[0].attributes[i].info[x];
        }
    }
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