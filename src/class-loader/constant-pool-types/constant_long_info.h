/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */


#ifndef JET_CONSTANT_LONG_INFO_H
#define JET_CONSTANT_LONG_INFO_H

#include "../../lvm/base/def.h"
#include "constant_pool_item.h"

class constant_long_info : public constant_pool_item {
public:
    u4 high_bytes;
    u4 low_bytes;
};

#endif //JET_CONSTANT_LONG_INFO_H
