/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#ifndef LEGOSHIVM_LINE_NUMBER_TABLE_H
#define LEGOSHIVM_LINE_NUMBER_TABLE_H


#include "../../vm/base/def.h"
#include "../utility/abstract_data.h"

class line_number_table : public abstract_data{
public:
    u2 start_pc;
    u2 line_number;
};


#endif //LEGOSHIVM_LINE_NUMBER_TABLE_H
