/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */


#ifndef LEGOSHIVM_EXCEPTIONS_H
#define LEGOSHIVM_EXCEPTIONS_H


#include <vector>
#include "../../lvm/base/def.h"
#include "attribute.h"

class exceptions : public attribute {
public:
    u2 attribute_name_index;
    u4 attribute_length;
    u2 number_of_exceptions;
    std::vector<u2> exception_index_table;
};


#endif //LEGOSHIVM_EXCEPTIONS_H
