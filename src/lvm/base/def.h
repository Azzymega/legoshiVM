/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
*/
#ifndef LEGOSHIVM_DEF_H
#define LEGOSHIVM_DEF_H
#include <cstdint>

typedef uint8_t u1;
typedef uint16_t u2;
typedef uint32_t u4;
typedef uint64_t u8;
typedef wchar_t uc2;

enum jvm_opcodes {
    aload_0 = 42,
    invokespecial = 183,
    ldc = 18,
    invokestatic = 184,
    return_op = 177
};

#endif //LEGOSHIVM_DEF_H
