/*
 * PROJECT:     LegoshiVM - javac
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */
#pragma once
#include "tokenDefinition.hpp"
#include <string>

struct token {
    tokenType type;
    std::string internals;
};