/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#ifndef LEGOSHIVM_TAGS_H
#define LEGOSHIVM_TAGS_H

enum CONSTANT_POOL_TAGS {
    CONSTANT_Class = 7,
    CONSTANT_Fieldref = 9,
    CONSTANT_Methodref = 10,
    CONSTANT_InterfaceMethodref = 11,
    CONSTANT_String	= 8,
    CONSTANT_Integer = 3,
    CONSTANT_Float = 4,
    CONSTANT_Long = 5,
    CONSTANT_Double = 6,
    CONSTANT_NameAndType = 12,
    CONSTANT_Utf8 = 1,
    CONSTANT_Unicode = 2
};

enum attributes {
    constant_value,
    code,
    stack_map_table,
    exceptions,
    inner_classes,
    enclosing_method,
    synthetic,
    signature,
    source_file,
    source_debug_extension,
    line_number_table,
    local_variable_table,
    local_variable_type_table,
    deprecated,
    runtime_visible_annotations,
    runtime_invisible_annotations,
    runtime_visible_parameter_annotations,
    runtime_invisible_parameter_annotations,
    annotation_default,
    bootstrap_method
};

#endif //LEGOSHIVM_TAGS_H
