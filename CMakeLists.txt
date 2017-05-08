project(panda CXX)
cmake_minimum_required(VERSION 3.4)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(src/parser)

add_executable(parsergenerator
    src/parser/generator/Main.cpp
    src/parser/generator/ParserGenerator.cpp
    src/parser/generator/ParserGeneratorParser.cpp
    src/parser/runtime/GLRParser.cpp
)