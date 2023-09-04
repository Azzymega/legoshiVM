/*
 * PROJECT:     LegoshiVM - javac
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */
#pragma once
#include <vector>
#include <string>
#include "../core/compilerTypes.hpp"
#include "../bytecodeStructure/classFileStructure.hpp"
#include "../tokens/token.hpp"

class abstractStatement {
public:
    virtual void initStatement(std::vector<token> statement) = 0;
    virtual void translateIntoBinary(ClassFile* file) = 0;
};