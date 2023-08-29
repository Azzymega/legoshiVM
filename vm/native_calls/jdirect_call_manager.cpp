//
// Created by Danil on 29.08.2023.
//

#include <iostream>
#include "jdirect_call_manager.h"

void jdirect_call_manager::load_library(const std::string& library_name) {
    this->library = LoadLibrary(library_name.c_str());
    if (!library){
        std::cout << "[ERROR] Native call fails" << std::endl;
    }
}

void jdirect_call_manager::execute_call(const std::string& library_name, const std::string &proc_name, void *return_address,
                                        void *argument_pointer, jvm_type arg_type) {
    //load_library(library_name); // дописать
}

void jdirect_call_manager::pre_def_call(std::string name, char *data, u4 arg_size) {
    if (name == "out"){
        for (size_t i = 0; i < arg_size; ++i) {
            std::cout << data[i];
            std::cout << std::endl;
        }
    }
}

jdirect_call_manager::jdirect_call_manager() = default;
