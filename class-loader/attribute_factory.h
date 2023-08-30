/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#ifndef LEGOSHIVM_ATTRIBUTE_FACTORY_H
#define LEGOSHIVM_ATTRIBUTE_FACTORY_H


#include <string>
#include "attributes/attribute.h"

class attribute_factory {
public:
    attribute* return_typed_attribute(attribute* attr, std::string attr_name);
};


#endif //LEGOSHIVM_ATTRIBUTE_FACTORY_H
