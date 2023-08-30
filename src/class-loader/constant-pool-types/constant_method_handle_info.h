/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#ifndef JET_CONSTANT_METHOD_HANDLE_INFO_H
#define JET_CONSTANT_METHOD_HANDLE_INFO_H

#include "constant_pool_item.h"
#include "../../vm/base/def.h"

class constant_method_handle_info : public constant_pool_item {
public:
    u1 reference_kind;
    u2 reference_index;
};

#endif //JET_CONSTANT_METHOD_HANDLE_INFO_H
