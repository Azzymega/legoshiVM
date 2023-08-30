/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#ifndef JET_CONSTANT_NAME_AND_TYPE_INFO_H
#define JET_CONSTANT_NAME_AND_TYPE_INFO_H

#include "constant_pool_item.h"
#include "../../vm/base/def.h"

class constant_name_and_type_info : public constant_pool_item {
public:
    u2 name_index;
    u2 descriptor_index;
};

#endif //JET_CONSTANT_NAME_AND_TYPE_INFO_H
