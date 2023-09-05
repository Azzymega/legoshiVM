/*
 * PROJECT:     LegoshiVM - javac
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */
#include "lexMachine.hpp"

void lexMachine::parseBytes(std::vector<u1> bytes)
{
    std::string token;
    for (std::size_t i = 0; i < bytes.size(); i++)
    {
        if (bytes[i] == '"')
        {
            token.push_back(bytes[i]);
            i++;
            for (; i < bytes.size(); i++)
            {
                token.push_back(bytes[i]);
                if (token.at(token.size()-1) == '"')
                {
                    this->parserOutput.push_back(token);
                    i++;
                    token.clear();
                    break;
                }
                
            }
            
        }
        if (bytes[i] == '[' && bytes[i+1] == ']')
        {
            this->parserOutput.push_back(token);
            token.clear();
            token.push_back(bytes[i]);
            i++;
            token.push_back(bytes[i]);
            this->parserOutput.push_back(token);
            token.clear();
        }
        else if ( token.size() > 1 && (bytes[i] == '(' || bytes[i] == '{' || bytes[i] == '[' || bytes[i] == ')' || bytes[i] == '}' || bytes[i] == ']' ))
        {
            this->parserOutput.push_back(token);
            token.clear();
            token.push_back((char)bytes[i]);
            this->parserOutput.push_back(token);
            token.clear();
        }
        else if (isspace(bytes[i]) || bytes[i] == ';')
        {
            if (token.empty())
            {
                continue;
            }
            else 
            {
                this->parserOutput.push_back(token);
                token.clear();
            }
        }
        else
        {
            token.push_back(bytes[i]);
        }
    }
    
}

void lexMachine::tokenize(std::vector<std::string> parserOutput)
{
    std::regex keywordRegex(this->internalData.keywordRegex);
    std::regex integerRegex(this->internalData.integerRegex);
    std::regex identifierRegex(this->internalData.indentifierRegex);
    std::regex internalsStartRegex(this->internalData.internalsStartRegex);
    std::regex internalsEndRegex(this->internalData.internalsEndsRegex);
    std::regex operationRegex(this->internalData.operationRegex);
    std::regex logicalRegex(this->internalData.logicRegex);
    std::regex flagsRegex(this->internalData.flagsRegex);
    std::regex massiveDeclRegex(this->internalData.massiveDeclRegex);
    std::regex paramsStartRegex(this->internalData.paramsStartRegex);
    std::regex paramsEndRegex(this->internalData.paramsEndRegex);
    for (std::size_t i = 0; i < parserOutput.size(); i++)
    {
        if (std::regex_search(parserOutput[i],massiveDeclRegex))
        {
            this->tokenizerOutput.push_back(token{tokenType::massiveDecl, parserOutput[i]});
        }
        else if (std::regex_search(parserOutput[i],paramsStartRegex))
        {
            this->tokenizerOutput.push_back(token{tokenType::paramsStart, parserOutput[i]});
        }
        else if (std::regex_search(parserOutput[i],paramsEndRegex))
        {
            this->tokenizerOutput.push_back(token{tokenType::paramsEnd, parserOutput[i]});
        }
        else if (std::regex_search(parserOutput[i],flagsRegex))
        {
            this->tokenizerOutput.push_back(token{tokenType::flags, parserOutput[i]});
        }
        else if (std::regex_search(parserOutput[i],internalsStartRegex))
        {
            this->tokenizerOutput.push_back(token{tokenType::internals_starts, parserOutput[i]});
        }
        else if (std::regex_search(parserOutput[i],logicalRegex))
        {
            this->tokenizerOutput.push_back(token{tokenType::logical_operation, parserOutput[i]});
        }
        else if (std::regex_search(parserOutput[i],internalsEndRegex))
        {
            this->tokenizerOutput.push_back(token{tokenType::internals_ends, parserOutput[i]});
        }
        else if (std::regex_search(parserOutput[i],keywordRegex))
        {
            this->tokenizerOutput.push_back(token{tokenType::keywords, parserOutput[i]});
        }
        else if (std::regex_search(parserOutput[i],integerRegex))
        {
            this->tokenizerOutput.push_back(token{tokenType::integer, parserOutput[i]});
        }
        else if (std::regex_search(parserOutput[i],identifierRegex))
        {
            this->tokenizerOutput.push_back(token{tokenType::identifier, parserOutput[i]});
        }
        else if (std::regex_search(parserOutput[i],operationRegex))
        {
            this->tokenizerOutput.push_back(token{tokenType::operation, parserOutput[i]});
        }
    }
       
}

lexMachine::lexMachine(std::vector<u1> bytes)
{
    this->parseBytes(bytes);
    this->tokenize(this->parserOutput);
}

lexMachine::~lexMachine()
{
}

std::vector<token> lexMachine::returnTokens()
{
    return this->tokenizerOutput;
}
