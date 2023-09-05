cmake_minimum_required(VERSION 3.15)
project(javac)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_CXX_FLAGS "/Zi")
set(CMAKE_CXX_FLAGS "/EHsc")
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
file(GLOB_RECURSE helloworld_SRC
     "src/*.cpp"
)
add_executable(javac ${helloworld_SRC})