/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

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
    void set_bytes_amount(u4 bytes);
    u4 return_bytes() const;
    explicit loader();
    void load(std::string class_path);
    void load_bytecode(void* dest, u4 length); // legacy, unsafe
    u1 init_u1();
    u2 init_u2();
    u4 init_u4();
};


#endif //LEGOSHIVM_LOADER_H
