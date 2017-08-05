project(panda)
cmake_minimum_required(VERSION 2.8)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m64")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -m64")

add_definitions(-DLLVM_DIR=${LLVM_DIR})

include_directories(
    src/pandac
    src/parser
)

add_executable(pandac
    src/parser/lex.panda.cpp
    src/parser/PandaParser.cpp
    src/pandac/Class.cpp
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

function(compile_panda_sources out_var)
    set(result)
    foreach(input ${ARGN})
        set(input "${CMAKE_CURRENT_SOURCE_DIR}/${input}")
        get_filename_component(output ${input} NAME_WE)
        set(output "${CMAKE_CURRENT_BINARY_DIR}/${output}.o")
        add_custom_command(OUTPUT ${output}
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/pandac -f o -o ${output} ${input}
            DEPENDS ${input} pandac
            WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        )
        list(APPEND result ${output})
    endforeach()
    set(${out_var} "${result}" PARENT_SCOPE)
endfunction()

compile_panda_sources(panda_objects
    src/panda/collections/Array.panda
    src/panda/collections/Collection.panda
    src/panda/collections/CollectionView.panda
    src/panda/collections/CollectionWriter.panda
    src/panda/collections/HashMap.panda
    src/panda/collections/ImmutableArray.panda
    src/panda/collections/Iterable.panda
    src/panda/collections/Iterator.panda
    src/panda/collections/List.panda
    src/panda/collections/ListView.panda
    src/panda/collections/ListWriter.panda
    src/panda/collections/Map.panda
    src/panda/collections/MapView.panda
    src/panda/collections/MapWriter.panda
    src/panda/collections/Stack.panda
    src/panda/core/Bit.panda
    src/panda/core/Char8.panda
    src/panda/core/Char16.panda
    src/panda/core/Char32.panda
    src/panda/core/Class.panda
    src/panda/core/Immutable.panda
    src/panda/core/Int16.panda
    src/panda/core/Int32.panda
    src/panda/core/Int64.panda
    src/panda/core/Int8.panda
    src/panda/core/MutableString.panda
    src/panda/core/Object.panda
    src/panda/core/Panda.panda
    src/panda/core/Range.panda
    src/panda/core/String.panda
    src/panda/core/System.panda
    src/panda/core/Value.panda
    src/panda/io/Console.panda
    src/panda/io/File.panda
    src/panda/io/FileInputStream.panda
    src/panda/io/FileOutputStream.panda
    src/panda/io/IndentedOutputStream.panda
    src/panda/io/InputStream.panda
    src/panda/io/LineNumberInputStream.panda
    src/panda/io/MemoryInputStream.panda
    src/panda/io/OutputStream.panda
    src/panda/math/Random.panda
    src/panda/math/XorShift128Plus.panda
)

add_library(panda
    src/c/pandalib.c
    ${panda_objects}
)

add_custom_command(
    OUTPUT writeInts
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/pandac -o writeInts ${CMAKE_CURRENT_SOURCE_DIR}/src/tools/WriteInts.panda
    DEPENDS src/tools/WriteInts.panda pandac
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_command(
    OUTPUT src/panda/core/Int8.panda src/panda/core/Int16.panda src/panda/core/Int32.panda src/panda/core/Int64.panda
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/writeInts
    DEPENDS writeInts pandac
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_target(generate_code
    DEPENDS src/panda/core/Int8.panda src/panda/core/Int16.panda src/panda/core/Int32.panda src/panda/core/Int64.panda
)