//
// Created by Danil on 27.08.2023.
//

#ifndef LEGOSHIVM_CLASS_FILE_H
#define LEGOSHIVM_CLASS_FILE_H


#include <vector>
#include "../vm/base/def.h"
#include "constant-pool-types/constant_pool_item.h"
#include "field-method/field.h"
#include "field-method/methods.h"

class class_file : public abstract_data{
public:
    u4 magic;
    u2 minor_version;
    u2 major_version;
    u2 constant_pool_count;
    std::vector<constant_pool_item*> constant_pool;
    u2 access_flags;
    u2 this_class;
    u2 super_class;
    u2 interfaces_count;
    std::vector<u2> interfaces;
    u2 fields_count;
    std::vector<field> fields;
    u2 methods_count;
    std::vector<methods> methods;
    u2 attributes_count;
    std::vector<attribute*> attributes;
};


#endif //LEGOSHIVM_CLASS_FILE_H
