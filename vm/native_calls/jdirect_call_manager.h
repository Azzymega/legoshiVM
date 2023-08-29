//
// Created by Danil on 29.08.2023.
//

#ifndef LEGOSHIVM_JDIRECT_CALL_MANAGER_H
#define LEGOSHIVM_JDIRECT_CALL_MANAGER_H

#include <string>
#include "windows.h"
#include "jvm_types.h"
#include "../base/def.h"

class jdirect_call_manager {
private:
    HMODULE library{};
    void load_library(const std::string& library_name);
public:
    jdirect_call_manager();
    void execute_call(const std::string& library_name,const std::string& proc_name,void* return_address,void* argument_pointer, jvm_type arg_type);
    void pre_def_call(std::string name,char* data, u4 arg_size);
};


#endif //LEGOSHIVM_JDIRECT_CALL_MANAGER_H
