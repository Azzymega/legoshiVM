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

enum classFlags {
    ACC_PUBLICC = 0x0001,
    ACC_FINALC = 0x0010,
    ACC_SUPERC = 0x0020,
    ACC_INTERFACEC = 0x0040,
    ACC_ABSTRACTC = 0x0400,
    ACC_SYNTHETICC = 0x1000,
    ACC_ANNOTATIONC = 0x2000,
    ACC_ENUMC = 0x4000
};

struct ClassFile {
    u4 magic;
    u2 minorVersion;
    u2 majorVersion;
    u2 constantPoolAmount;
    std::vector<cpinfo> constantPool;
    u2 AccessFlags16;
    u2 CurrentClass;
    u2 SuperClass;
    u2 InterfaceCount;
    std::vector<u2> interfaces;
    u2 FieldCount;
    std::vector<field_t> fields;
    u2 MethodCount;
    std::vector<method_t> methods;
    u2 AttributeCount;
    std::vector<attribute> attributes;
};