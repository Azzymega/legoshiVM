/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
*/
#ifndef LEGOSHIVM_JVM_TYPES_H
#define LEGOSHIVM_JVM_TYPES_H

#include <string>

enum jvm_type {
    jint,
    jdouble,
    jfloat,
    jstring,
    jchar,
    jobject
};

typedef std::wstring jString;

#endif //LEGOSHIVM_JVM_TYPES_H
