/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#ifndef JET_CONSTANT_DOUBLE_INFO_H
#define JET_CONSTANT_DOUBLE_INFO_H

#include "constant_pool_item.h"
#include "../../vm/base/def.h"

class constant_double_info : public constant_pool_item {
public:
    u4 high_bytes;
    u4 low_bytes;
};

#endif //JET_CONSTANT_DOUBLE_INFO_H
