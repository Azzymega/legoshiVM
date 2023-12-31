/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
*/
#include "method.h"

method::method(method *mt) {
    method t;
    t.operands = mt->operands;
    t.name = mt->name;
    t.runtime_link = mt->runtime_link;
    t.name_index = mt->name_index;
    t.vars = mt->vars;
    t.signature_index = mt->signature_index;
    t.attributes = mt->attributes;
    t.attributes_count = mt->attributes_count;
    t.access_flags = mt->access_flags;
}

method::method() = default;
