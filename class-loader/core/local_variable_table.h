/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */


#ifndef LEGOSHIVM_LOCAL_VARIABLE_TABLE_H
#define LEGOSHIVM_LOCAL_VARIABLE_TABLE_H


#include "../../vm/base/def.h"
#include "../utility/abstract_data.h"

class local_variable_table : public abstract_data{
public:
    u2 start_pc;
    u2 length;
    u2 name_index;
    u2 signature_index;
    u2 slot;
};


#endif //LEGOSHIVM_LOCAL_VARIABLE_TABLE_H
