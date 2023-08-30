/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#ifndef JET_CONSTANT_METHOD_REF_INFO_H
#define JET_CONSTANT_METHOD_REF_INFO_H

#include "constant_pool_item.h"
#include "../../lvm/base/def.h"

class constant_method_ref_info : public constant_pool_item {
public:
    u2 class_index;
    u2 name_and_type_index;
};
#endif //JET_CONSTANT_METHOD_REF_INFO_H
