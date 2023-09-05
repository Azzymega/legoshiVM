/*
 * PROJECT:     LegoshiVM - javac
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */
#pragma once
#include <iostream>
#include "../core/compilerTypes.hpp"
#include <fstream>
#include "../bytecodeStructure/classFileStructure.hpp"
#include <vector>
#include <string>

/**
 * @brief ioService class
 * need for i/
 * o purposes of compiler
 */
class ioService
{
private:
    std::ifstream readerStream;
    std::ofstream writerStream;
public:
    /**
     * @brief write function
     * write a class-file with a specified priviously place
     */
    void write(ClassFile* file);
    /**
     * @brief read funtcion
     * read a file from selected location and return a byte array
     * @return std::vector<u1> 
     */
    std::vector<u1> read();
    /**
     * @brief open reader stream function
     * open read stream from path
     * @param readPath 
     */
    void openReaderStream(std::string readPath);
    /**
     * @brief open writer stream function
     * open wirte stream from path
     * @param writePath 
     */
    void openWriteStream(std::string writePath);
    /**
     * @brief Construct a new io Service object
     * 
     */
    ioService();
    /**
     * @brief Destroy the io Service object
     * 
     */
    ~ioService();
};

