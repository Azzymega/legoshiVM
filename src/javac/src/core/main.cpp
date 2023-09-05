/*
 * PROJECT:     LegoshiVM - javac
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */
#include "compilerTypes.hpp"
#include "../io/ioService.hpp"
#include "../bytecodeStructure/classFileStructure.hpp"
#include "../tokens/lexMachine.hpp"
#include "../draco/syntax/class.hpp"
#include <vector>

int main(){
    std::vector<u1> data;
    ioService serv;
    //std::cout << "enter path\n";
    std::string path = "D:\\VSCodeProjects\\lvm\\legoshiVM\\build\\Debug\\j.java";
    serv.openReaderStream(path);
    data = serv.read();
    lexMachine machine(data);
    std::vector<token> tokens = machine.returnTokens();
    ClassFile* fl = new ClassFile();
    classSyn anlz = classSyn();
    anlz.initStatement(tokens);
    anlz.translateIntoBinary(fl);
    serv.openWriteStream("D:\\VSCodeProjects\\lvm\\legoshiVM\\build\\Debug\\j.class"); // пофиксить константный пул
    serv.write(fl);
    return 0;
}