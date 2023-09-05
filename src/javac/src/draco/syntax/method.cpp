#include "method.hpp"

void method::initStatement(std::vector<token> statement)
{
    for (size_t i = 0; i < statement.size(); i++)
    {
        if (statement[i].type == tokenType::flags)
        {
            this->flags.push_back(statement[i]);
            continue;
        }
        this->methodType = statement[i];
        i++;
        this->methodName = statement[i];
        i++;
        i++;
        for (;i < statement.size(); i++)
        {
            if (statement[i].type == tokenType::paramsEnd)
            {
                i++;
                break;
            }
            this->methodParams.push_back(statement[i]);
        }
        for (; i < statement.size(); i++)
        {
            this->codeStatements.push_back(statement[i]);

        }
        break;
    }
}

void method::initCode(ClassFile *file, method_t* mt) 
{
    cpinfo info;
    info.tag = cptype::CONSTANT_Utf8;
    int codeIndex;
    const char codeAttrName[4] = {'C','o','d','e'};
    for (size_t i = 0; i < 4; i++)
    {
        info.info.push_back(codeAttrName[i]);
    }
    file->constantPool.push_back(info);
    codeIndex = file->constantPoolAmount;
    this->code.attribute_name_index = codeIndex;
    file->constantPoolAmount++;
    code.max_locals = 10;
    code.max_stack = 10;
    call cl = call();
    for (size_t i = 0; i < codeStatements.size(); i++)
    {
        if (codeStatements[i+2].type == tokenType::logical_operation)
        {
            std::vector<token> call;
            call.push_back(codeStatements[i]);
            call.push_back(codeStatements[i++]);
            call.push_back(codeStatements[i++]);
            call.push_back(codeStatements[i++]);
            cl.initStatement(call);
        }
        break;
    }
    std::vector<u1> code = cl.translateIntoBinary(file,mt);
    this->code.code = code;
    this->code.attribute_length = 2+2+4+code.size();
    this->code.code_length = code.size();
}

void method::translateIntoBinary(ClassFile *file)
{
    file->MethodCount++;
    method_t mt = method_t();
    mt.access_flags = methodFlags::ACC_PUBLIC;
    cpinfo info;
    info.tag = cptype::CONSTANT_Utf8;
    int codeIndex;
    for (size_t i = 0; i < this->methodType.internals.size(); i++)
    {
        info.info.push_back(methodType.internals.at(i));
    }
    file->constantPool.push_back(info);
    codeIndex = file->constantPoolAmount;
    info.tag = cptype::CONSTANT_Utf8;
    int call_Index;
    attribute at;
    initCode(file,&mt);
    at.attribute_name_index = this->code.attribute_name_index;
    at.attribute_length = this->code.attribute_length;
    at.info.push_back(code.max_stack);
    at.info.push_back(code.max_locals);
    at.info.push_back(code.code_length);
    for (size_t i = 0; i < code.code.size(); i++)
    {
        at.info.push_back(code.code[i]);
    }
    mt.attributes.push_back(at);
    mt.descriptor_index = 3;
    mt.name_index = 3;
    file->methods.push_back(mt);
}
