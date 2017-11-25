project(panda)
cmake_minimum_required(VERSION 2.8)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m64")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -m64")

function(compile_panda_sources out_var)
    set(result)
    foreach(input ${ARGN})
        set(input "${CMAKE_CURRENT_SOURCE_DIR}/${input}")
        get_filename_component(output ${input} NAME_WE)
        set(output "${CMAKE_CURRENT_BINARY_DIR}/${output}.o")
        add_custom_command(OUTPUT ${output}
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/bootstrap -f o -o ${output} ${input}
            DEPENDS ${input}
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
    src/panda/collections/IdentityMap.panda
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
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/bootstrap -o writeInts ${CMAKE_CURRENT_SOURCE_DIR}/src/tools/WriteInts.panda
    DEPENDS src/tools/WriteInts.panda
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
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/bootstrap -o writeOperators ${CMAKE_CURRENT_SOURCE_DIR}/src/tools/WriteOperators.panda
    DEPENDS src/tools/WriteOperators.panda panda
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
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/bootstrap -i ${CMAKE_CURRENT_SOURCE_DIR}/src/parser -f o -o ${output} ${input}
            DEPENDS ${input}
            WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        )
        list(APPEND result ${output})
    endforeach()
    set(${out_var} "${result}" PARENT_SCOPE)
endfunction()

compile_plex_sources(plex_objects
    src/parser/org/pandalanguage/plex/AcceptState.panda
    src/parser/org/pandalanguage/plex/Any.panda
    src/parser/org/pandalanguage/plex/AnyState.panda
    src/parser/org/pandalanguage/plex/CharSet.panda
    src/parser/org/pandalanguage/plex/Concat.panda
    src/parser/org/pandalanguage/plex/DFAState.panda
    src/parser/org/pandalanguage/plex/DFAStateLabel.panda
    src/parser/org/pandalanguage/plex/NFA.panda
    src/parser/org/pandalanguage/plex/NFAtoDFA.panda
    src/parser/org/pandalanguage/plex/Node.panda
    src/parser/org/pandalanguage/plex/Option.panda
    src/parser/org/pandalanguage/plex/PLex.panda
    src/parser/org/pandalanguage/plex/Plus.panda
    src/parser/org/pandalanguage/plex/Regex.panda
    src/parser/org/pandalanguage/plex/RemappedState.panda
    src/parser/org/pandalanguage/plex/SingleCharState.panda
    src/parser/org/pandalanguage/plex/SetNode.panda
    src/parser/org/pandalanguage/plex/SingleChar.panda
    src/parser/org/pandalanguage/plex/SingleCharState.panda
    src/parser/org/pandalanguage/plex/Star.panda
    src/parser/org/pandalanguage/plex/State.panda
    src/parser/org/pandalanguage/plex/TableState.panda
    src/parser/org/pandalanguage/plex/Union.panda
    src/parser/org/pandalanguage/plex/runtime/DFA.panda
    src/parser/org/pandalanguage/plex/runtime/RawToken.panda
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
    DEPENDS plex src/parser/Panda.plex
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

function(compile_pandac_sources out_var)
    set(result)
    foreach(input ${ARGN})
        get_filename_component(output ${input} NAME_WE)
        set(output "${CMAKE_CURRENT_BINARY_DIR}/${output}.o")
        add_custom_command(OUTPUT ${output}
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/bootstrap -i ${CMAKE_CURRENT_SOURCE_DIR}/src/parser -i ${CMAKE_CURRENT_BINARY_DIR} -i ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac -f o -o ${output} ${input}
            DEPENDS ${input}
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
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/CCodeGenerator.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/ClassDecl.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/CodeGenerator.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/Compiler.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/ErrorReporter.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/FieldDecl.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/HCodeGenerator.panda
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
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/Variable.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/parser/Parser.panda
    ${CMAKE_CURRENT_BINARY_DIR}/org/pandalanguage/pandac/parser/Lexer.panda
    ${CMAKE_CURRENT_BINARY_DIR}/org/pandalanguage/pandac/parser/Token.panda
)

add_executable(pandac
    ${pandac_objects}
    ${CMAKE_CURRENT_BINARY_DIR}/DFA.o
    ${CMAKE_CURRENT_BINARY_DIR}/Position.o
    ${CMAKE_CURRENT_BINARY_DIR}/RawToken.o
)
target_link_libraries(pandac panda)
set_target_properties(pandac PROPERTIES LINKER_LANGUAGE CXX)

function(create_headers out_var)
    set(result)
    foreach(rawInput ${ARGN})
        file(RELATIVE_PATH input "${CMAKE_CURRENT_SOURCE_DIR}/src" ${rawInput})
        get_filename_component(outputDir ${input} DIRECTORY)
        get_filename_component(outputName ${input} NAME_WE)
        set(output "${CMAKE_CURRENT_BINARY_DIR}/include/${outputDir}/${outputName}.h")
        add_custom_command(OUTPUT ${output}
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/pandac -f h -o ${output} ${input}
            DEPENDS ${rawInput} pandac
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/src
        )
        list(APPEND result ${output})
    endforeach()
    set(${out_var} "${result}" PARENT_SCOPE)
endfunction()

create_headers(pandac_headers
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/Array.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/Collection.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/CollectionView.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/CollectionWriter.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/HashMap.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/IdentityMap.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/ImmutableArray.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/Iterable.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/Iterator.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/Key.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/List.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/ListView.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/ListWriter.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/Map.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/MapView.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/MapWriter.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/Set.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/Stack.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Bit.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Char8.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Char16.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Char32.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Class.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Comparable.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Equatable.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Immutable.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Int16.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Int32.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Int64.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Int8.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/UInt16.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/UInt32.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/UInt64.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/UInt8.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/MutableString.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Object.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Panda.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Range.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/String.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/System.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Value.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/io/Console.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/io/File.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/io/FileInputStream.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/io/FileOutputStream.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/io/IndentedOutputStream.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/io/InputStream.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/io/LineNumberInputStream.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/io/MemoryInputStream.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/io/MemoryOutputStream.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/io/OutputStream.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/io/PushbackInputStream.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/math/Random.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/math/XorShift128Plus.panda
)

add_custom_target(bootstrap
    DEPENDS ${pandac_headers}
)
