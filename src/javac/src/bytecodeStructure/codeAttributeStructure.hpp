/*
 * PROJECT:     LegoshiVM - javac
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */
#pragma once
#include "../core/compilerTypes.hpp"
#include "constantPoolInfo.hpp"
#include "attributeStructure.hpp"
#include "methodStructure.hpp"
#include "fieldFileStructure.hpp"
#include <vector>

struct code_attribute {
    u2 attribute_name_index;
    u4 attribute_length;
    u2 max_stack;
    u2 max_locals;
    u4 code_length;
    std::vector<u1> code;
    u2 attributes_count;
    std::vector<attribute*> attributes;
};