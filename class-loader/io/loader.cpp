//
// Created by Danil on 27.08.2023.
//

#include <iostream>
#include <utility>
#include "loader.h"

loader::loader() {
    this->loaded_bytes = 0;
}

void loader::load(std::string class_path) {
    this->loaded_bytes = 0;
    this->bytecode.clear();
    this->path = class_path;
    this->load_stream.open(path,std::ios::binary);
    if (load_stream.is_open()){
        std::cout << "[LOADING] Loader opened. Reading "<< class_path <<"." << std::endl;
        while (!load_stream.eof()){
            uint8_t data;
            load_stream >> data >> std::noskipws;
            bytecode.push_back(data);
        }
        load_stream.close();
    }
    else {
        std::cout << "[ERROR] Loader failed to load" << std::endl;
    }
}

void loader::load_bytecode(void *dest, u4 length) {
    memcpy(static_cast<char *>(dest),&bytecode[loaded_bytes],length);
    loaded_bytes += length;
}

u1 loader::init_u1() {
    u1 temp[1];
    temp[0] = bytecode[loaded_bytes];
    loaded_bytes += sizeof(u1);
    return temp[0];
}

u2 loader::init_u2() {
    u2 temp[2];
    temp[0] = bytecode[loaded_bytes];
    temp[1] = bytecode[loaded_bytes+1];
    loaded_bytes += sizeof(u2);
    return temp[0] >> 8 | temp[1];
}

u4 loader::init_u4() {
    u2 temp[4];
    temp[0] = bytecode[loaded_bytes];
    temp[1] = bytecode[loaded_bytes+1];
    temp[2] = bytecode[loaded_bytes+2];
    temp[3] = bytecode[loaded_bytes+3];
    loaded_bytes += sizeof(u4);
    return temp[0] >> 24 | temp[1] >> 16 | temp[2] >> 8 | temp[3];
}

void loader::set_bytes_amount(u4 bytes) {
    this->loaded_bytes = bytes;
}

u4 loader::return_bytes() const {
    return loaded_bytes;
}
