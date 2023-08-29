//
// Created by Danil on 29.08.2023.
//

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
