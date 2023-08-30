//
// Created by Danil on 30.08.2023.
//

#ifndef LEGOSHIVM_JAVAC_MAIN_H
#define LEGOSHIVM_JAVAC_MAIN_H


#include <iostream>
#include "../class-loader/io/loader.h"
#include "../class-loader/class_file.h"
#include "../class-loader/engine/class_machine.h"

int main(int argc, char* argv[]){
    loader ld;
    if (argv[1] == nullptr){
        std::cout << "[JAVAP_ERROR] Class file is missing" << std::endl;
    }
    else{
        ld.load(argv[1]);
        class_file file = class_file();
        class_machine machine = class_machine();
        file = *static_cast<class_file*>(machine.perform_analyzing(&ld));
        std::cout << "MAGIC = 0xCAFEBABE" << std::endl;
        std::cout << "Minor Version = " << file.minor_version << std::endl;
        std::cout << "Major Version = " << file.major_version << std::endl;
        std::cout << "Flags = " << file.access_flags << std::endl;
        std::cout << "This class = " << file.this_class << std::endl;
        std::cout << "Super class = " << file.super_class << std::endl;
        std::cout << "Constant pool count = " << file.constant_pool_count << std::endl;
        for (int i = 0; i < file.constant_pool_count; ++i) {
            std::cout << "Constant pool #"<< i <<" = " << file.constant_pool[i] << std::endl;
        }
        std::cout << "Interface count = " << file.interfaces_count << std::endl;
        for (int i = 0; i < file.interfaces_count; ++i) {
            std::cout << "Interface #"<< i <<" = " << file.interfaces[i] << std::endl;
        }
        std::cout << "Field count = " << file.fields_count << std::endl;
        for (int i = 0; i < file.fields_count; ++i) {
            std::cout << "Field #"<< i <<" = " << file.fields[i].name_index << std::endl;
        }
        std::cout << "Method count = " << file.methods_count << std::endl;
        for (int i = 0; i < file.methods_count; ++i) {
            std::cout << "Method #"<< i <<" = " << file.methods[i].name_index << std::endl;
        }
        std::cout << "Attribute count = " << file.attributes_count << std::endl;
        for (int i = 0; i < file.attributes_count; ++i) {
            std::cout << "Attribute #"<< i <<" = " << file.attributes[i] << std::endl;
        }
    }
}


#endif //LEGOSHIVM_JAVAC_MAIN_H
