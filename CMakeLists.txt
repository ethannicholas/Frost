project(panda)
cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_definitions(-DLLVM_DIR=${LLVM_DIR})

include_directories(
    src/pandac
    src/parser
)

add_executable(pandac
    src/parser/lex.panda.cpp
    src/parser/PandaParser.cpp
    src/pandac/Compiler.cpp
    src/pandac/LLVMCodeGenerator.cpp
    src/pandac/Main.cpp
    src/pandac/MethodRef.cpp
    src/pandac/Operator.cpp
    src/pandac/Scanner.cpp
    src/pandac/SymbolTable.cpp
)

add_executable(testrunner
    test/TestRunner.cpp
)
