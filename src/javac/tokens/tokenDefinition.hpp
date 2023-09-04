/*
 * PROJECT:     LegoshiVM - javac
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */
#pragma once
#include <regex>

enum tokenType {
    keywords,
    massiveDecl,
    identifier,
    flags,
    integer,
    internals_starts,
    internals_ends,
    logical_operation,
    operation
};
