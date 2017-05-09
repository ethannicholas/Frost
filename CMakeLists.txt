project(panda CXX)
cmake_minimum_required(VERSION 3.4)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(
    src/parser
)

add_executable(parsergenerator
    src/parser/generator/Main.cpp
    src/parser/generator/ParserGenerator.cpp
    src/parser/generator/ParserGeneratorParser.cpp
    src/parser/runtime/GLRParser.cpp
)

add_custom_command(
    OUTPUT
        PandaParser.h
        PandaParser.cpp
    DEPENDS
        parsergenerator
    COMMAND
        parsergenerator
        src/parser/generator/panda.grammar
        PandaParser
        ${CMAKE_CURRENT_BINARY_DIR}/PandaParser.h
        ${CMAKE_CURRENT_BINARY_DIR}/PandaParser.cpp
    WORKING_DIRECTORY
        ${CMAKE_CURRENT_SOURCE_DIR}
)

include_directories(
    src/pandac
    ${CMAKE_CURRENT_BINARY_DIR}
)

add_executable(pandac
    PandaParser.cpp
    src/parser/runtime/GLRParser.cpp
    src/pandac/Main.cpp
)