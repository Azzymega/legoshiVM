/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#ifndef LEGOSHIVM_SOURCE_FILE_H
#define LEGOSHIVM_SOURCE_FILE_H


#include "attribute.h"

class source_file : public attribute {
protected:
    u2 source_file_index;
public:
    void resolve_file_index(u2 data);
};


#endif //LEGOSHIVM_SOURCE_FILE_H
