/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#ifndef LEGOSHIVM_LINE_NUMBER_TABLE_ATTR_H
#define LEGOSHIVM_LINE_NUMBER_TABLE_ATTR_H

#include "../../lvm/base/def.h"
#include "attribute.h"
#include "../core/line_number_table.h"

class line_number_table_attr : public attribute {
public:
    u2 line_number_table_length;
    std::vector<class line_number_table> line_number_table;
};


#endif //LEGOSHIVM_LINE_NUMBER_TABLE_ATTR_H
