//
// Created by Danil on 28.08.2023.
//

#ifndef LEGOSHIVM_LOCAL_VARIABLE_TABLE_ATTR_H
#define LEGOSHIVM_LOCAL_VARIABLE_TABLE_ATTR_H

#include "../../vm/base/def.h"
#include "attribute.h"
#include "../core/local_variable_table.h"

class local_variable_table_attr : public attribute {
public:
    u2 local_variable_table_length;
    std::vector<class local_variable_table> local_variable_table;
};


#endif //LEGOSHIVM_LOCAL_VARIABLE_TABLE_ATTR_H
