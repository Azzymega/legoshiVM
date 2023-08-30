/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#ifndef JET_CONSTANT_FLOAT_INFO_H
#define JET_CONSTANT_FLOAT_INFO_H


#include "constant_pool_item.h"
#include "../../lvm/base/def.h"

class constant_float_info : public constant_pool_item {
public:
    u4 bytes;
};
#endif //JET_CONSTANT_FLOAT_INFO_H
