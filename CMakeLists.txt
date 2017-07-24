project(panda)
cmake_minimum_required(VERSION 2.8)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m64")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -m64")

add_definitions(-DLLVM_DIR=${LLVM_DIR})

include_directories(
    src/pandac
    src/parser
)

add_library(panda
    src/c/pandalib.c
)

add_executable(pandac
    src/parser/lex.panda.cpp
    src/parser/PandaParser.cpp
    src/pandac/Compiler.cpp
    src/pandac/LLVMCodeGenerator.cpp
    src/pandac/Main.cpp
    src/pandac/Method.cpp
    src/pandac/MethodRef.cpp
    src/pandac/Operator.cpp
    src/pandac/Scanner.cpp
    src/pandac/SymbolTable.cpp
)

add_executable(testrunner
    test/TestRunner.cpp
)
