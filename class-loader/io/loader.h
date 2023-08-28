//
// Created by Danil on 27.08.2023.
//

#ifndef LEGOSHIVM_LOADER_H
#define LEGOSHIVM_LOADER_H


#include <string>
#include <fstream>
#include <vector>
#include "../../vm/base/def.h"

class loader {
private:
    u4 loaded_bytes;
    std::string path;
    std::ifstream load_stream;
    std::vector<u1> bytecode;
public:
    explicit loader(std::string path);
    void load();
    void load_bytecode(void* dest, u4 length); // legacy, unsafe
    u1 init_u1();
    u2 init_u2();
    u4 init_u4();
};


#endif //LEGOSHIVM_LOADER_H
