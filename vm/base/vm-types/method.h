/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
*/
#ifndef LEGOSHIVM_METHOD_H
#define LEGOSHIVM_METHOD_H


#include <vector>
#include <stack>
#include "../../type-system/basic_primitive_type.h"
#include "../def.h"
#include "../../../class-loader/class_file.h"
#include "../../../class-loader/attributes/attribute.h"

class method {
public:
    method();

    std::string name;
    class_file* runtime_link{};
    explicit method(method* mt);
    u2 access_flags{};
    u2 name_index{};
    u2 signature_index{};
    u2 attributes_count{};
    std::vector<attribute*> attributes;
    std::vector<basic_primitive_type*> vars;
    std::stack<basic_primitive_type*> operands;
};


#endif //LEGOSHIVM_METHOD_H
