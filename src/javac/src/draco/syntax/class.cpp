#include "class.hpp"

void classSyn::initStatement(std::vector<token> statement)
{
    for (size_t i = 2; i < statement.size(); i++)
    {
        if (statement[i].type == tokenType::flags)
        {
            this->flags.push_back(statement[i]);
            continue;
        }
        i++;
        this->className = statement[i];
        i++;
        i++;
        std::vector<token> methodTokens;
        for (; i < statement.size(); i++)
        {
            if (statement[i].type == tokenType::internals_ends)
            {
                break;
            }
            else{
                methodTokens.push_back(statement[i]);
            }
        }
        method mt = method();
        mt.initStatement(methodTokens);
        this->methods.push_back(mt);
    }
}

void classSyn::translateIntoBinary(ClassFile *file)
{
    file->magic = 0xCAFEBABE;
    file->minorVersion = 0;
    file->majorVersion = 55;
    file->constantPoolAmount = 0;
    file->AccessFlags16 = classFlags::ACC_PUBLICC;
    file->CurrentClass = 0;
    file->SuperClass = 0;
    file->InterfaceCount = 0;
    file->FieldCount = 0;
    this->methods[0].translateIntoBinary(file);
}
