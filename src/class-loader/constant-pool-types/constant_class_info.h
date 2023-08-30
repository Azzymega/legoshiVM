/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#ifndef JET_CONSTANT_CLASS_INFO_H
#define JET_CONSTANT_CLASS_INFO_H


#include "../../lvm/base/def.h"
#include "constant_pool_item.h"

class constant_class_info : public constant_pool_item {
public:
    u2 name_index;
};

#endif //JET_CONSTANT_CLASS_INFO_H
