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
#include "../bytecodeStructure/methodStructure.hpp"
#include "../tokens/token.hpp"

class abstractCodeStatement {
public:
    virtual void initStatement(std::vector<token> statement) = 0;
    virtual std::vector<u1> translateIntoBinary(ClassFile* file, method_t* method) = 0;
};