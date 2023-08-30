/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
*/
#ifndef LEGOSHIVM_VM_POOL_H
#define LEGOSHIVM_VM_POOL_H


#include <map>
#include <string>
#include "../def.h"
#include "../vm-types/method.h"
#include "../../../class-loader/class_file.h"
#include "name_and_type.h"

class vm_pool {
public:
    u2 access_flags;
    vm_pool* super;
    std::vector<method> methods;
    std::vector<field> fields;
    std::vector<u2> interfaces;
    std::string class_name;
    std::map<u2,method*> method_refs;
    std::map<u2,vm_pool*> class_refs;
    std::map<u2,std::string*> string_refs;
    std::map<u2,name_and_type*> name_and_type_refs;
    std::map<u2,std::string*> raw_utf8_refs;
};


#endif //LEGOSHIVM_VM_POOL_H
