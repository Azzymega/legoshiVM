/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#ifndef LEGOSHIVM_FLAGS_H
#define LEGOSHIVM_FLAGS_H
enum ACC_FLAGS {
    ACC_PUBLIC = 0x0001,
    ACC_PRIVATE = 0x0002,
    ACC_PROTECTED = 0x0004,
    ACC_STATIC = 0x0008,
    ACC_FINAL = 0x0010,
    ACC_SYNCHRONIZED = 0x0020,
    ACC_VOLATILE = 0x0040,
    ACC_TRANSIENT = 0x0080,
    ACC_NATIVE = 0x0100,
    ACC_INTERFACE = 0x0200,
    ACC_ABSTRACT = 0x0400
};
#endif //LEGOSHIVM_FLAGS_H
