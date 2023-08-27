//
// Created by Danil on 25.08.2023.
//

#ifndef JET_EXCEPTION_TABLE_H
#define JET_EXCEPTION_TABLE_H


#include "../../vm/base/def.h"

class exception_table {
    u2 start_pc;
    u2 end_pc;
    u2 handler_pc;
    u2 catch_type;
};

#endif //JET_EXCEPTION_TABLE_H
