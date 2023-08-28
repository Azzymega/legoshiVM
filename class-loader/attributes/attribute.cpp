//
// Created by Danil on 27.08.2023.
//

#include "attribute.h"

void attribute::resolve_name(u2 data) {
    this->attribute_name = data;
}

void attribute::resolve_length(u4 data) {
    this->attribute_length = data;
}
