/*
 * PROJECT:     LegoshiVM - javac
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */
#pragma once
#include "../core/compilerTypes.hpp"
#include <vector>

/**
 * @brief attribute structure borrowed from JVM
 * abstract attribute from JVM class-file standard
 */
struct attribute {
   /**
    * @brief attribute name index from constant pool
    * constant pool index for UTF-8 string
    */
   u2 attribute_name_index;
   /**
    * @brief attribute length in u_int32t
    * attribute bytecode length
    */
   u4 attribute_length;
   /**
    * @brief info vector
    * attribute bytecode holder
    */
   std::vector<u1> info;
};