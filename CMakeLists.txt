cmake_minimum_required(VERSION 3.25)
project(LegoshiVM)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "/EHsc")
add_library(lvm SHARED src/class-loader/class_file.cpp src/class-loader/class_file.h
        src/class-loader/core/tags.h src/class-loader/core/flags.h src/class-loader/constant-pool-types/constant_class_info.h
        src/class-loader/constant-pool-types/constant_double_info.h src/class-loader/constant-pool-types/constant_field_ref_info.h
        src/class-loader/constant-pool-types/constant_float_info.h src/class-loader/constant-pool-types/constant_integer_info.h
        src/class-loader/constant-pool-types/constant_interface_method_ref_info.h src/class-loader/constant-pool-types/constant_invoke_dynamic_info.h
        src/class-loader/constant-pool-types/constant_long_info.h src/class-loader/constant-pool-types/constant_method_handle_info.h
        src/class-loader/constant-pool-types/constant_method_ref_info.h src/class-loader/constant-pool-types/constant_method_type_info.h
        src/class-loader/constant-pool-types/constant_name_and_type_info.h src/class-loader/constant-pool-types/constant_string_info.h
        src/class-loader/constant-pool-types/constant_utf8_info.h src/class-loader/constant-pool-types/constant_pool_item.cpp
        src/class-loader/constant-pool-types/constant_pool_item.h src/class-loader/attributes/attribute.cpp
        src/class-loader/attributes/attribute.h src/class-loader/attributes/source_file.cpp src/class-loader/attributes/source_file.h
        src/class-loader/attributes/constant_value.cpp src/class-loader/attributes/constant_value.h
        src/class-loader/core/exception_table.h src/class-loader/attributes/code.cpp src/class-loader/attributes/code.h
        src/class-loader/field-method/field.cpp src/class-loader/field-method/field.h src/class-loader/field-method/methods.cpp
        src/class-loader/field-method/methods.h src/class-loader/attribute_factory.cpp src/class-loader/attribute_factory.h
        src/class-loader/engine/class_machine.cpp src/class-loader/engine/class_machine.h src/class-loader/utility/class_metadata.cpp
        src/class-loader/utility/class_metadata.h src/class-loader/io/loader.cpp src/class-loader/io/loader.h
        src/class-loader/engine/sub-engines/class_mt_engine.cpp src/class-loader/engine/sub-engines/class_mt_engine.h
        src/class-loader/utility/abstract_data.cpp src/class-loader/utility/abstract_data.h
        src/class-loader/engine/abstract_engine.cpp src/class-loader/engine/abstract_engine.h
        src/class-loader/utility/class_constant_pool.cpp src/class-loader/utility/class_constant_pool.h
        src/class-loader/engine/sub-engines/class_const_pool_engine.cpp
        src/class-loader/engine/sub-engines/class_const_pool_engine.h
        src/class-loader/engine/sub-engines/class_item_engine.cpp
        src/class-loader/engine/sub-engines/class_item_engine.h
        src/class-loader/attributes/exceptions.cpp src/class-loader/attributes/exceptions.h
        src/class-loader/core/line_number_table.cpp src/class-loader/core/line_number_table.h
        src/class-loader/attributes/line_number_table_attr.cpp src/class-loader/attributes/line_number_table_attr.h
        src/class-loader/core/local_variable_table.cpp src/class-loader/core/local_variable_table.h
        src/class-loader/attributes/local_variable_table_attr.cpp src/class-loader/attributes/local_variable_table_attr.h
        src/class-loader/engine/sub-engines/class_attribute_engine.cpp
        src/class-loader/engine/sub-engines/class_attribute_engine.h
        src/class-loader/engine/sub-engines/class_exception_table_engine.cpp
        src/class-loader/engine/sub-engines/class_exception_table_engine.h
        src/class-loader/engine/sub-engines/class_line_number_table_engine.cpp
        src/class-loader/engine/sub-engines/class_line_number_table_engine.h
        src/class-loader/engine/sub-engines/class_local_variable_table_engine.cpp
        src/class-loader/engine/sub-engines/class_local_variable_table_engine.h
        src/class-loader/engine/sub-engines/class_field_engine.cpp
        src/class-loader/engine/sub-engines/class_field_engine.h
        src/class-loader/engine/sub-engines/class_method_engine.cpp
        src/class-loader/engine/sub-engines/class_method_engine.h src/class-loader/engine/sub-engines/class_interface_engine.cpp
        src/class-loader/engine/sub-engines/class_interface_engine.h src/class-loader/field-method/interface.cpp
        src/class-loader/field-method/interface.h src/lvm/type-system/basic_primitive_type.cpp
        src/lvm/type-system/basic_primitive_type.h src/lvm/type-system/types/value/byte.cpp
        src/lvm/type-system/types/value/byte.h src/lvm/base/def.h src/lvm/type-system/types/value/short.cpp
        src/lvm/type-system/types/value/short.h src/lvm/type-system/types/value/int.cpp
        src/lvm/type-system/types/value/int.h src/lvm/type-system/types/value/long.cpp
        src/lvm/type-system/types/value/long.h src/lvm/type-system/types/value/float.cpp
        src/lvm/type-system/types/value/float.h src/lvm/type-system/types/value/double.cpp
        src/lvm/type-system/types/value/double.h src/lvm/type-system/types/value/char.cpp
        src/lvm/type-system/types/value/char.h src/lvm/type-system/types/reference/object.cpp
        src/lvm/type-system/types/reference/object.h src/lvm/type-system/types/reference/return_address.cpp
        src/lvm/type-system/types/reference/return_address.h src/lvm/base/lvm.cpp src/lvm/base/lvm.h
        src/lvm/base/vm-types/method.cpp src/lvm/base/vm-types/method.h src/lvm/heap/heap_controller.cpp
        src/lvm/heap/heap_controller.h  src/lvm/base/memory.cpp src/lvm/base/memory.h src/lvm/base/memory/load_lvm_frames.cpp
        src/lvm/base/memory/load_lvm_frames.h src/lvm/base/thread.cpp src/lvm/base/thread.h src/lvm/base/memory/init_lvm.cpp
        src/lvm/base/memory/init_lvm.h src/lvm/native_calls/jdirect_call_manager.cpp src/lvm/native_calls/jdirect_call_manager.h
        src/lvm/native_calls/jvm_types.h src/lvm/base/memory/vm_pool.cpp src/lvm/base/memory/vm_pool.h src/lvm/base/memory/name_and_type.cpp
        src/lvm/base/memory/name_and_type.h src/lvm/base/memory/init_vm_pool_engine.cpp src/lvm/base/memory/init_vm_pool_engine.h
        src/lvm/base/memory/init_method_engine.cpp src/lvm/base/memory/init_method_engine.h src/lvm/interpretor/interpreter.cpp src/lvm/interpretor/interpretor.h)
add_subdirectory(src/javac)
add_executable(java src/java/main.cpp)
add_executable(javap src/javap/javap_main.cpp src/javap/javap_main.h)
add_executable(mainTest test/mainTest.cpp)
target_link_libraries(java PRIVATE lvm)
target_link_libraries(javap PRIVATE lvm)
target_link_libraries(mainTest PRIVATE lvm)