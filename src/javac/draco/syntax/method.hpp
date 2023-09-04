/*
 * PROJECT:     LegoshiVM - javac
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */
#pragma once
#include "../abstractStatement.hpp"
#include <vector>
#include "field.hpp"
#include "../../bytecodeStructure/codeAttributeStructure.hpp"
#include "../code/assigment.hpp"
#include "../code/call.hpp"

class method : public abstractStatement {
private:
    std::vector<token> flags;
    token methodType;
    token methodName;
    std::vector<token> methodParams;
    std::vector<abstractCodeStatement*> codeStatements;
    code_attribute code;
public:
    void initStatement (std::vector<token> statement) override;
    void translateIntoBinary(ClassFile* file) override;
};