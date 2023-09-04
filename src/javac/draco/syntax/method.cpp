#include "method.hpp"

void method::initStatement(std::vector<token> statement)
{
    for (size_t i = 0; i < statement.size(); i++)
    {
        if (statement[i].type == tokenType::flags)
        {
            this->flags.push_back(statement[i]);
        }
        else {
            this->methodType = statement[i++];
            this->methodName = statement[i++];
            code.max_locals = 10;//fix
            code.max_stack = 10;//fix
            std::vector<u1> bytecode;
            for (size_t j = i; j < statement.size(); j++)
            {
                if (statement[i].type == tokenType::internals_ends)
                {
                    i = j++;
                    break;
                }
                else {
                    this->methodParams.push_back(statement[i]);
                }
            }
            for (; i < statement.size(); i++)
            {
                if (statement[i+2].type == tokenType::logical_operation)
                {
                    assigment* assig = new assigment();
                    std::vector<token> st;
                    for (size_t x = i; x < i+4; x++)
                    {
                        st.push_back(statement[x]);
                    }
                    assig->initStatement(st);
                    this->codeStatements.push_back(assig);
                    i+=4;
                }
                else {
                    call* call = new class call();
                    std::vector<token> st;
                    st.push_back(statement[i]);
                    st.push_back(statement[i+1]);
                    call->initStatement(st);
                    this->codeStatements.push_back(call);
                    break;              
                }
                break;
            }
        }
    }
}

void method::translateIntoBinary(ClassFile *file)
{ // Переписать !!!!
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
    for (size_t i = 0; i < this->methodName.internals.size(); i++)
    {
        info.info.push_back(methodName.internals.at(i));
    }
    file->constantPool.push_back(info);
    int mtIndex = file->constantPoolAmount;
    mt.attributes_count = 1;
    cpinfo info;
    info.tag == CONSTANT_Utf8;
    info.info.push_back('C');
    info.info.push_back('o');
    info.info.push_back('d');
    info.info.push_back('e');
    file->constantPool.push_back(info);
    call_Index = file->constantPoolAmount;
    file->constantPoolAmount++;
    this->code.attribute_name_index = call_Index;
    std::vector<u1> call = this->codeStatements[0]->translateIntoBinary(file,this);
    this->code.attribute_length = 2+2+4+call.size();
    this->code.code_length = call.size();
    attribute at;
    at.attribute_name_index = this->code.attribute_name_index;
    at.attribute_length = this->code.attribute_length;
    at.info.push_back(code.max_stack);
    at.info.push_back(code.max_locals);
    at.info.push_back(code.code_length);
    for (size_t i = 0; i < code.attribute_length; i++)
    {
        at.info.push_back(code.code[i]);
    }
    mt.attributes.push_back(at);
    mt.descriptor_index = mtIndex;
    mt.name_index = mtIndex;
    file->methods.push_back(mt);
}
