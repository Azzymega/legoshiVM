/*
 * PROJECT:     LegoshiVM - javac
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */
#pragma once
#include "../core/compilerTypes.hpp"
#include "attributeStructure.hpp"

enum fieldFlags {
    ACC_PUBLICF = 0x0001,
    ACC_PRIVATEF = 0x0002,
    ACC_PROTECTEDF = 0x0004,
    ACC_STATICF = 0x0008,
    ACC_FINALF = 0x0010,
    ACC_VOLATILEF = 0x0040,
    ACC_TRANSIENTF = 0x0080,
    ACC_SYNTHETICF = 0x1000,
    ACC_ENUMF = 0x4000
};

struct field_t {
    u2 access_flags;
    u2 name_index;
    u2 descriptor_index;
    u2 attributes_count;
    std::vector<attribute> attributes;
};