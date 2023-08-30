/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#ifndef JET_CONSTANT_FIELD_REF_INFO_H
#define JET_CONSTANT_FIELD_REF_INFO_H

#include "../../lvm/base/def.h"
#include "constant_pool_item.h"

class constant_field_ref_info : public constant_pool_item {
public:
    u2 class_index;
    u2 name_and_type_index;
};
#endif //JET_CONSTANT_FIELD_REF_INFO_H
