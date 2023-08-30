/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */


#ifndef LEGOSHIVM_CODE_H
#define LEGOSHIVM_CODE_H


#include <vector>
#include "../../lvm/base/def.h"
#include "../core/exception_table.h"
#include "attribute.h"

class code : public attribute {
public:
    u2 max_stack;
    u2 max_locals;
    u4 code_length;
    std::vector<u1> code;
    u2 exception_table_length;
    std::vector<exception_table> exception_table;
    u2 attribute_count;
    std::vector<attribute*> attributes;
};


#endif //LEGOSHIVM_CODE_H
