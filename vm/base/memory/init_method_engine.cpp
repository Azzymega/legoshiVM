//
// Created by Danil on 30.08.2023.
//

#include "init_method_engine.h"

method* init_method_engine::init_method(const methods& mt, class_file* file) {
    method* t = new method();
    t->runtime_link = file;
    t->access_flags = mt.access_flags;
    t->name = mt.name;
    t->name_index = mt.name_index;
    t->signature_index = mt.signature_index;
    t->attributes_count = mt.attributes_count;
    t->attributes = mt.attributes;
    return t;
}
