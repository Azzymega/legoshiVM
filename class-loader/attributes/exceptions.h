//
// Created by Danil on 28.08.2023.
//

#ifndef LEGOSHIVM_EXCEPTIONS_H
#define LEGOSHIVM_EXCEPTIONS_H


#include <vector>
#include "../../vm/base/def.h"
#include "attribute.h"

class exceptions : public attribute {
public:
    u2 attribute_name_index;
    u4 attribute_length;
    u2 number_of_exceptions;
    std::vector<u2> exception_index_table;
};


#endif //LEGOSHIVM_EXCEPTIONS_H
