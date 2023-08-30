//
// Created by Danil on 30.08.2023.
//

#include "init_method_engine.h"

method init_method_engine::init_method(const methods& mt) {
    method t = method();
    t.access_flags = mt.access_flags;
    t.name_index = mt.name_index;
    t.signature_index = mt.signature_index;
    t.attributes_count = mt.attributes_count;
    t.attributes = mt.attributes;
    return t;
}
