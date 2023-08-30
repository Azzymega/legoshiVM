/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#ifndef JET_EXCEPTION_TABLE_H
#define JET_EXCEPTION_TABLE_H


#include "../../vm/base/def.h"
#include "../attributes/attribute.h"

class exception_table : public abstract_data {
public:
    u2 start_pc;
    u2 end_pc;
    u2 handler_pc;
    u2 catch_type;
};

#endif //JET_EXCEPTION_TABLE_H
