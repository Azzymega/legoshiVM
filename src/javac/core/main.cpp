/*
 * PROJECT:     LegoshiVM - javac
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */
#include "compilerTypes.hpp"
#include "../io/ioService.hpp"
#include "../tokens/lexMachine.hpp"
#include <vector>

int main(){
    std::vector<u1> data;
    ioService serv;
    //std::cout << "enter path\n";
    std::string path = "D:/VSCodeProjects/VBvms/build/Debug/j.java";
    serv.openReaderStream(path);
    data = serv.read();
    lexMachine machine(data);
    std::vector<token> tokens = machine.returnTokens();
    for (std::size_t i = 0; i < tokens.size(); i++)
    {
        std::cout << std::to_string(tokens[i].type) + " " + tokens[i].internals + "\n";
    }
    
    return 0;
}