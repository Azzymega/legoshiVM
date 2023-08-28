//
// Created by Danil on 27.08.2023.
//

#include <iostream>
#include <utility>
#include "loader.h"

loader::loader(std::string path) {
    this->loaded_bytes = 0;
    this->path = std::move(path);
}

void loader::load() {
    this->load_stream.open(path,std::ios::binary);
    if (load_stream.is_open()){
        std::cout << "Stream Opened" << std::endl;
        while (!load_stream.eof()){
            uint8_t data;
            load_stream >> data >> std::noskipws;
            bytecode.push_back(data);
        }
        load_stream.close();
    }
    else {
        std::cout << "Loader failed to load" << std::endl;
    }
}

void loader::load_bytecode(void *dest, u4 length) {
    memcpy(static_cast<char *>(dest),&bytecode[loaded_bytes],length);
    loaded_bytes += length;
}

u1 loader::init_u1() {
    u1 temp = 0;
    memcpy(&temp,&bytecode[loaded_bytes],sizeof(u1));
    loaded_bytes += sizeof(u1);
    if (temp > 200){
        return temp >> 4;
    }
    else{
        return temp;
    }
}

u2 loader::init_u2() {
    u2 temp = 0;
    memcpy(&temp,&bytecode[loaded_bytes],sizeof(u2));
    loaded_bytes += sizeof(u2);
    return temp >> 8;
}

u4 loader::init_u4() {
    u4 temp = 0;
    memcpy(&temp,&bytecode[loaded_bytes],sizeof(u4));
    loaded_bytes += sizeof(u4);
    return temp >> 16;
}
