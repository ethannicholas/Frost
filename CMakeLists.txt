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
    src/panda/collections/Key.panda
    src/panda/collections/List.panda
    src/panda/collections/ListView.panda
    src/panda/collections/ListWriter.panda
    src/panda/collections/Map.panda
    src/panda/collections/MapView.panda
    src/panda/collections/MapWriter.panda
    src/panda/collections/Set.panda
    src/panda/collections/Stack.panda
    src/panda/core/Bit.panda
    src/panda/core/Char8.panda
    src/panda/core/Char16.panda
    src/panda/core/Char32.panda
    src/panda/core/Class.panda
    src/panda/core/Comparable.panda
    src/panda/core/Equatable.panda
    src/panda/core/Immutable.panda
    src/panda/core/Int16.panda
    src/panda/core/Int32.panda
    src/panda/core/Int64.panda
    src/panda/core/Int8.panda
    src/panda/core/UInt16.panda
    src/panda/core/UInt32.panda
    src/panda/core/UInt64.panda
    src/panda/core/UInt8.panda
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
    src/panda/io/MemoryOutputStream.panda
    src/panda/io/OutputStream.panda
    src/panda/io/PushbackInputStream.panda
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
    OUTPUT src/panda/core/Int8.panda
           src/panda/core/Int16.panda
           src/panda/core/Int32.panda
           src/panda/core/Int64.panda
           src/panda/core/UInt8.panda
           src/panda/core/UInt16.panda
           src/panda/core/UInt32.panda
           src/panda/core/UInt64.panda
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/writeInts
    DEPENDS writeInts
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_command(
    OUTPUT writeOperators
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/pandac -o writeOperators ${CMAKE_CURRENT_SOURCE_DIR}/src/tools/WriteOperators.panda
    DEPENDS src/tools/WriteOperators.panda pandac panda
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_command(
    OUTPUT test/tests/Operators.panda
           Operators.c
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/writeOperators
    DEPENDS writeOperators
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_executable(operators
    Operators.c
)

add_custom_command(
    OUTPUT test/tests/Operators.expected
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/operators
    DEPENDS operators
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_target(generate_code
    DEPENDS src/panda/core/Int8.panda
            src/panda/core/Int16.panda
            src/panda/core/Int32.panda
            src/panda/core/Int64.panda
            src/panda/core/UInt8.panda
            src/panda/core/UInt16.panda
            src/panda/core/UInt32.panda
            src/panda/core/UInt64.panda
            test/tests/Operators.panda
            test/tests/Operators.expected
            Operators.c
)

function(compile_plex_sources out_var)
    set(result)
    foreach(input ${ARGN})
        set(input "${CMAKE_CURRENT_SOURCE_DIR}/${input}")
        get_filename_component(output ${input} NAME_WE)
        set(output "${CMAKE_CURRENT_BINARY_DIR}/${output}.o")
        add_custom_command(OUTPUT ${output}
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/pandac -i ${CMAKE_CURRENT_SOURCE_DIR}/src/plex -f o -o ${output} ${input}
            DEPENDS ${input} pandac
            WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        )
        list(APPEND result ${output})
    endforeach()
    set(${out_var} "${result}" PARENT_SCOPE)
endfunction()

compile_plex_sources(plex_objects
    src/plex/org/pandalanguage/plex/AcceptState.panda
    src/plex/org/pandalanguage/plex/Any.panda
    src/plex/org/pandalanguage/plex/AnyState.panda
    src/plex/org/pandalanguage/plex/CharSet.panda
    src/plex/org/pandalanguage/plex/Concat.panda
    src/plex/org/pandalanguage/plex/DFAState.panda
    src/plex/org/pandalanguage/plex/DFAStateLabel.panda
    src/plex/org/pandalanguage/plex/NFA.panda
    src/plex/org/pandalanguage/plex/NFAtoDFA.panda
    src/plex/org/pandalanguage/plex/Node.panda
    src/plex/org/pandalanguage/plex/Option.panda
    src/plex/org/pandalanguage/plex/PLex.panda
    src/plex/org/pandalanguage/plex/Plus.panda
    src/plex/org/pandalanguage/plex/Regex.panda
    src/plex/org/pandalanguage/plex/RemappedState.panda
    src/plex/org/pandalanguage/plex/SingleCharState.panda
    src/plex/org/pandalanguage/plex/SetNode.panda
    src/plex/org/pandalanguage/plex/SingleChar.panda
    src/plex/org/pandalanguage/plex/SingleCharState.panda
    src/plex/org/pandalanguage/plex/Star.panda
    src/plex/org/pandalanguage/plex/State.panda
    src/plex/org/pandalanguage/plex/TableState.panda
    src/plex/org/pandalanguage/plex/Union.panda
    src/plex/org/pandalanguage/plex/runtime/DFA.panda
    src/plex/org/pandalanguage/plex/runtime/RawToken.panda
)

add_executable(plex
    ${plex_objects}
)
target_link_libraries(plex panda)
set_target_properties(plex PROPERTIES LINKER_LANGUAGE CXX)

add_custom_command(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/org/pandalanguage/pandac/parser/Lexer.panda
           ${CMAKE_CURRENT_BINARY_DIR}/org/pandalanguage/pandac/parser/Token.panda
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/plex
    DEPENDS plex src/plex/Panda.plex
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

function(compile_pandac_sources out_var)
    set(result)
    foreach(input ${ARGN})
        get_filename_component(output ${input} NAME_WE)
        set(output "${CMAKE_CURRENT_BINARY_DIR}/${output}.o")
        add_custom_command(OUTPUT ${output}
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/pandac -i ${CMAKE_CURRENT_SOURCE_DIR}/src/plex -i ${CMAKE_CURRENT_BINARY_DIR} -i ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac -f o -o ${output} ${input}
            DEPENDS ${input} pandac
            WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        )
        list(APPEND result ${output})
    endforeach()
    set(${out_var} "${result}" PARENT_SCOPE)
endfunction()

compile_pandac_sources(pandac_objects
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/Alias.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/Annotations.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/ASTNode.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/ClassDecl.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/CodeGenerator.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/Compiler.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/ErrorReporter.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/FieldDecl.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/IRNode.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/LLVMCodeGenerator.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/Main.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/MethodDecl.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/Methods.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/MethodRef.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/Position.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/Scanner.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/Symbol.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/SymbolTable.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/Type.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/parser/Parser.panda
    ${CMAKE_CURRENT_BINARY_DIR}/org/pandalanguage/pandac/parser/Lexer.panda
    ${CMAKE_CURRENT_BINARY_DIR}/org/pandalanguage/pandac/parser/Token.panda
)

add_executable(pandac2
    ${pandac_objects}
    ${CMAKE_CURRENT_BINARY_DIR}/DFA.o
    ${CMAKE_CURRENT_BINARY_DIR}/Position.o
    ${CMAKE_CURRENT_BINARY_DIR}/RawToken.o
)
target_link_libraries(pandac2 panda)
set_target_properties(pandac2 PROPERTIES LINKER_LANGUAGE CXX)
