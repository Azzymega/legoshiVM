/*
 * PROJECT:     LegoshiVM - javac
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */
#pragma once
#include <vector>
#include <string>
#include "../core/compilerTypes.hpp"
#include "token.hpp"
#include <regex>

struct constLexData {
    std::string keywordRegex = "assert|break|case|catch|char|class|const|continue|default|do|else|enum|extends|final|finally|for|if|goto|implements|import|instanceof|interface|native|new|package|private|protected|public|return|static|strictfp|super|switch|synchronized|this|throw|throws|transient|try|void|volatile|while";
    std::string integerRegex = "[0-9]+";
    std::string internalsStartRegex = "\\(|\\{|\\[";
    std::string internalsEndsRegex = "\\)|\\}|\\]";
    std::string indentifierRegex = "[a-zA-Z_][a-zA-Z_0-9]*";
    std::string operationRegex = "[+\\-*/><!;,=(){}\\[\\]]";
    std::string logicRegex = "&&|\\||\\|==|!=|>=|<=";
    std::string flagsRegex = "public|abstract|private|protected|static|final|synchronized|volatile|transient|native|interface|abtract";
    std::string massiveDeclRegex = "\\[\\]";
};

class lexMachine
{
private:
    constLexData internalData;
    std::vector<std::string> parserOutput;
    std::vector<token> tokenizerOutput;
    void parseBytes(std::vector<u1> bytes);
    void tokenize(std::vector<std::string> parserOutput);
public:
    lexMachine(std::vector<u1> bytes);
    ~lexMachine();
    std::vector<token> returnTokens();
};