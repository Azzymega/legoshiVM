/*
 * PROJECT:     LegoshiVM - javac
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */
#pragma once
#include "../abstractStatement.hpp"
#include <vector>
#include "../../bytecodeStructure/fieldFileStructure.hpp"

class field : public abstractStatement {
private:
    std::vector<token> flags;
    token fieldType;
    token fieldName;
public:
    void initStatement (std::vector<token> statement) override;
    void translateIntoBinary(ClassFile* file) override;
};