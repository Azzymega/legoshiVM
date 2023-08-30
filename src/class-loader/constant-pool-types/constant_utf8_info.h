/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#ifndef JET_CONSTANT_UTF8_INFO_H
#define JET_CONSTANT_UTF8_INFO_H

#include <string>
#include "constant_pool_item.h"
#include "../../lvm/base/def.h"

class constant_utf8_info : public constant_pool_item {
public:
    u2 length;
    std::string* string;
};

#endif //JET_CONSTANT_UTF8_INFO_H
