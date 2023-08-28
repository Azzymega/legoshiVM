//
// Created by Danil on 27.08.2023.
//

#include "class_metadata.h"

void class_metadata::resolve_maj_ver(u2 data) {
    this->major_version = data;
}

void class_metadata::resolve_min_ver(u2 data) {
    this->minor_version = data;
}

void class_metadata::resolve_reserved(u4 data) {
    this->reserved_jvm_numbers = data;
}

void class_metadata::resolve_acc_flags(u2 data) {
    this->access_flags = data;
}

void class_metadata::resolve_this(u2 data) {
    this->this_class = data;
}

void class_metadata::resolve_super(u2 data) {
    this->super_class = data;
}
