project(panda)
cmake_minimum_required(VERSION 2.8)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m64")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -m64")

include_directories(
    bootstrap/include
    src/c
)

add_executable(bootstrap
#    bootstrap/src/Array.c
#    bootstrap/src/Collection.c
#    bootstrap/src/CollectionView.c
#    bootstrap/src/CollectionWriter.c
#    bootstrap/src/HashMap.c
#    bootstrap/src/IdentityMap.c
#    bootstrap/src/ImmutableArray.c
#    bootstrap/src/Iterable.c
#    bootstrap/src/Iterator.c
#    bootstrap/src/Key.c
#    bootstrap/src/List.c
#    bootstrap/src/ListView.c
#    bootstrap/src/ListWriter.c
#    bootstrap/src/Map.c
#    bootstrap/src/MapView.c
#    bootstrap/src/MapWriter.c
#    bootstrap/src/Set.c
#    bootstrap/src/Stack.c
#    bootstrap/src/Bit.c
#    bootstrap/src/Char8.c
#    bootstrap/src/Char16.c
#    bootstrap/src/Char32.c
#    bootstrap/src/Class.c
#    bootstrap/src/Comparable.c
#    bootstrap/src/Equatable.c
#    bootstrap/src/Immutable.c
#    bootstrap/src/Int16.c
#    bootstrap/src/Int32.c
#    bootstrap/src/Int64.c
#    bootstrap/src/Int8.c
#    bootstrap/src/UInt16.c
#    bootstrap/src/UInt32.c
#    bootstrap/src/UInt64.c
#    bootstrap/src/UInt8.c
#    bootstrap/src/MutableString.c
#    bootstrap/src/Object.c
#    bootstrap/src/Panda.c
#    bootstrap/src/Range.c
#    bootstrap/src/String.c
#    bootstrap/src/System.c
#    bootstrap/src/Value.c
#    bootstrap/src/Console.c
#    bootstrap/src/File.c
#    bootstrap/src/FileInputStream.c
#    bootstrap/src/FileOutputStream.c
#    bootstrap/src/IndentedOutputStream.c
#    bootstrap/src/InputStream.c
#    bootstrap/src/LineNumberInputStream.c
#    bootstrap/src/MemoryInputStream.c
#    bootstrap/src/MemoryOutputStream.c
#    bootstrap/src/OutputStream.c
#    bootstrap/src/PushbackInputStream.c
#    bootstrap/src/Random.c
#    bootstrap/src/XorShift128Plus.c
#    bootstrap/src/Alias.c
#    bootstrap/src/Annotations.c
#    bootstrap/src/ASTNode.c
#    bootstrap/src/CCodeGenerator.c
#    bootstrap/src/ClassDecl.c
#    bootstrap/src/CodeGenerator.c
#    bootstrap/src/Compiler.c
#    bootstrap/src/ErrorReporter.c
#    bootstrap/src/FieldDecl.c
#    bootstrap/src/HCodeGenerator.c
#    bootstrap/src/IRNode.c
#    bootstrap/src/LLVMCodeGenerator.c
#    bootstrap/src/Main.c
#    bootstrap/src/MethodDecl.c
#    bootstrap/src/Methods.c
#    bootstrap/src/MethodRef.c
#    bootstrap/src/Position.c
#    bootstrap/src/Scanner.c
#    bootstrap/src/Symbol.c
#    bootstrap/src/SymbolTable.c
#    bootstrap/src/Type.c
#    bootstrap/src/Variable.c
#    bootstrap/src/Parser.c
#    bootstrap/src/Lexer.c
#    bootstrap/src/Token.c
#    bootstrap/src/DFA.c
#    bootstrap/src/RawToken.c
#    src/c/pandalib.c


    bootstrap/src/panda/collections/Array.c
    bootstrap/src/panda/collections/Array/ArrayIterator.c
    bootstrap/src/panda/collections/Collection.c
    bootstrap/src/panda/collections/CollectionView.c
    bootstrap/src/panda/collections/CollectionWriter.c
    bootstrap/src/panda/collections/HashMap.c
    bootstrap/src/panda/collections/HashMap/Entry.c
    bootstrap/src/panda/collections/HashMap/EntryIterator.c
    bootstrap/src/panda/collections/HashMap/KeyIterator.c
    bootstrap/src/panda/collections/HashMap/ValueIterator.c
    bootstrap/src/panda/collections/IdentityMap.c
    bootstrap/src/panda/collections/IdentityMap/Entry.c
    bootstrap/src/panda/collections/ImmutableArray.c
    bootstrap/src/panda/collections/ImmutableArray/ImmutableArrayIterator.c
    bootstrap/src/panda/collections/Iterable.c
    bootstrap/src/panda/collections/Iterator.c
    bootstrap/src/panda/collections/Key.c
    bootstrap/src/panda/collections/List.c
    bootstrap/src/panda/collections/ListView.c
    bootstrap/src/panda/collections/ListWriter.c
    bootstrap/src/panda/collections/Map.c
    bootstrap/src/panda/collections/MapView.c
    bootstrap/src/panda/collections/MapWriter.c
    bootstrap/src/panda/collections/Set.c
    bootstrap/src/panda/collections/Stack.c
    bootstrap/src/panda/collections/Stack/StackIterator.c
    bootstrap/src/panda/core/Bit.c
    bootstrap/src/panda/core/Char8.c
    bootstrap/src/panda/core/Char16.c
    bootstrap/src/panda/core/Char32.c
    bootstrap/src/panda/core/Class.c
    bootstrap/src/panda/core/Comparable.c
    bootstrap/src/panda/core/Equatable.c
    bootstrap/src/panda/core/Immutable.c
    bootstrap/src/panda/core/Int16.c
    bootstrap/src/panda/core/Int32.c
    bootstrap/src/panda/core/Int64.c
    bootstrap/src/panda/core/Int8.c
    bootstrap/src/panda/core/UInt16.c
    bootstrap/src/panda/core/UInt32.c
    bootstrap/src/panda/core/UInt64.c
    bootstrap/src/panda/core/UInt8.c
    bootstrap/src/panda/core/MutableString.c
    bootstrap/src/panda/core/Object.c
    bootstrap/src/panda/core/Panda.c
    bootstrap/src/panda/core/Range.c
    bootstrap/src/panda/core/SpecializedRange.LTpanda/core/String/Index.GT.c
    bootstrap/src/panda/core/SpecializedRange.LTpanda/core/String/Index.Q.GT.c
    bootstrap/src/panda/core/SpecializedRange.LTpanda/core/Int64.GT.c
    bootstrap/src/panda/core/SpecializedRange.LTpanda/core/Int64.Q.GT.c
    bootstrap/src/panda/core/SpecializedRange.LTpanda/core/Object.Q.GT.c
    bootstrap/src/panda/core/String.c
    bootstrap/src/panda/core/String/Index.c
    bootstrap/src/panda/core/String/UTF8Iterator.c
    bootstrap/src/panda/core/String/UTF16Iterator.c
    bootstrap/src/panda/core/String/UTF32Iterator.c
    bootstrap/src/panda/core/String/UTF8List.c
    bootstrap/src/panda/core/System.c
    bootstrap/src/panda/core/System/Process.c
    bootstrap/src/panda/core/Value.c
    bootstrap/src/panda/io/Console.c
    bootstrap/src/panda/io/File.c
    bootstrap/src/panda/io/FileInputStream.c
    bootstrap/src/panda/io/FileOutputStream.c
    bootstrap/src/panda/io/IndentedOutputStream.c
    bootstrap/src/panda/io/InputStream.c
    bootstrap/src/panda/io/InputStream/LineIterator.c
    bootstrap/src/panda/io/LineNumberInputStream.c
    bootstrap/src/panda/io/MemoryInputStream.c
    bootstrap/src/panda/io/MemoryOutputStream.c
    bootstrap/src/panda/io/OutputStream.c
    bootstrap/src/panda/io/PushbackInputStream.c
    bootstrap/src/panda/math/Random.c
    bootstrap/src/panda/math/XorShift128Plus.c
    bootstrap/src/org/pandalanguage/pandac/Alias.c
    bootstrap/src/org/pandalanguage/pandac/Annotations.c
    bootstrap/src/org/pandalanguage/pandac/ASTNode.c
    bootstrap/src/org/pandalanguage/pandac/CCodeGenerator.c
    bootstrap/src/org/pandalanguage/pandac/CCodeGenerator/ClassConstant.c
    bootstrap/src/org/pandalanguage/pandac/CCodeGenerator/LoopDescriptor.c
    bootstrap/src/org/pandalanguage/pandac/CCodeGenerator/MethodShim.c
    bootstrap/src/org/pandalanguage/pandac/ClassDecl.c
    bootstrap/src/org/pandalanguage/pandac/ClassDecl/GenericParameter.c
    bootstrap/src/org/pandalanguage/pandac/CodeGenerator.c
    bootstrap/src/org/pandalanguage/pandac/Compiler.c
    bootstrap/src/org/pandalanguage/pandac/Compiler/CompileTargetResult.c
    bootstrap/src/org/pandalanguage/pandac/Compiler/Settings.c
    bootstrap/src/org/pandalanguage/pandac/ErrorReporter.c
    bootstrap/src/org/pandalanguage/pandac/FieldDecl.c
    bootstrap/src/org/pandalanguage/pandac/HCodeGenerator.c
    bootstrap/src/org/pandalanguage/pandac/IRNode.c
    bootstrap/src/org/pandalanguage/pandac/LLVMCodeGenerator.c
    bootstrap/src/org/pandalanguage/pandac/LLVMCodeGenerator/ClassConstant.c
    bootstrap/src/org/pandalanguage/pandac/LLVMCodeGenerator/InlineContext.c
    bootstrap/src/org/pandalanguage/pandac/LLVMCodeGenerator/LoopDescriptor.c
    bootstrap/src/org/pandalanguage/pandac/LLVMCodeGenerator/MethodShim.c
    bootstrap/src/org/pandalanguage/pandac/LLVMCodeGenerator/Pair.c
    bootstrap/src/org/pandalanguage/pandac/Main.c
    bootstrap/src/org/pandalanguage/pandac/Main/Arguments.c
    bootstrap/src/org/pandalanguage/pandac/MethodDecl.c
    bootstrap/src/org/pandalanguage/pandac/MethodDecl/Parameter.c
    bootstrap/src/org/pandalanguage/pandac/Methods.c
    bootstrap/src/org/pandalanguage/pandac/MethodRef.c
    bootstrap/src/org/pandalanguage/pandac/Position.c
    bootstrap/src/org/pandalanguage/pandac/Scanner.c
    bootstrap/src/org/pandalanguage/pandac/Symbol.c
    bootstrap/src/org/pandalanguage/pandac/SymbolTable.c
    bootstrap/src/org/pandalanguage/pandac/Type.c
    bootstrap/src/org/pandalanguage/pandac/Variable.c
    bootstrap/src/org/pandalanguage/pandac/parser/Parser.c
    bootstrap/src/org/pandalanguage/pandac/parser/Lexer.c
    bootstrap/src/org/pandalanguage/pandac/parser/Token.c
    bootstrap/src/org/pandalanguage/plex/runtime/DFA.c
    bootstrap/src/org/pandalanguage/plex/runtime/RawToken.c
    src/c/pandalib.c
)

function(compile_panda_sources out_var)
    set(result)
    foreach(input ${ARGN})
        get_filename_component(output ${input} NAME_WE)
        set(output "${CMAKE_CURRENT_BINARY_DIR}/${output}.o")
        add_custom_command(OUTPUT ${output}
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/bootstrap -f o -o ${output} ${input}
            DEPENDS ${input} bootstrap
            WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        )
        list(APPEND result ${output})
    endforeach()
    set(${out_var} "${result}" PARENT_SCOPE)
endfunction()

set(core_source
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
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/SpecializedRange.panda
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

compile_panda_sources(panda_objects
    ${core_source}
)

add_library(panda
    src/c/pandalib.c
    ${panda_objects}
)

add_custom_command(
    OUTPUT writeInts
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/bootstrap -o writeInts ${CMAKE_CURRENT_SOURCE_DIR}/src/tools/WriteInts.panda
    DEPENDS bootstrap src/tools/WriteInts.panda
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
    DEPENDS bootstrap src/tools/WriteOperators.panda panda
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
            DEPENDS bootstrap ${input}
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
            DEPENDS bootstrap ${input}
            WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        )
        list(APPEND result ${output})
    endforeach()
    set(${out_var} "${result}" PARENT_SCOPE)
endfunction()

set(pandac_source
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

compile_pandac_sources(pandac_objects
    ${pandac_source}
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
        if (${rawInput} MATCHES "^${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/.*")
            file(RELATIVE_PATH input "${CMAKE_CURRENT_SOURCE_DIR}/src/pandac" ${rawInput})
            set(working "${CMAKE_CURRENT_SOURCE_DIR}/src/pandac")
        elseif (${rawInput} MATCHES "^${CMAKE_CURRENT_SOURCE_DIR}/src/parser/.*")
            file(RELATIVE_PATH input "${CMAKE_CURRENT_SOURCE_DIR}/src/parser" ${rawInput})
            set(working "${CMAKE_CURRENT_SOURCE_DIR}/src/parser")
        elseif (${rawInput} MATCHES "^${CMAKE_CURRENT_SOURCE_DIR}/src/.*")
            file(RELATIVE_PATH input "${CMAKE_CURRENT_SOURCE_DIR}/src" ${rawInput})
            set(working "${CMAKE_CURRENT_SOURCE_DIR}/src")
        else()
            file(RELATIVE_PATH input "${CMAKE_CURRENT_BINARY_DIR}" ${rawInput})
            set(working "${CMAKE_CURRENT_BINARY_DIR}")
        endif()
        get_filename_component(outputDir ${input} DIRECTORY)
        get_filename_component(outputName ${input} NAME_WE)
        set(output "${CMAKE_CURRENT_BINARY_DIR}/updated_bootstrap/include/${outputDir}/${outputName}.h")
        file(RELATIVE_PATH pandacInc ${working} "${CMAKE_CURRENT_SOURCE_DIR}/src/pandac")
        if (pandacInc STREQUAL "")
            set(pandacInc ".")
        endif()
        file(RELATIVE_PATH parserInc ${working} "${CMAKE_CURRENT_SOURCE_DIR}/src/parser")
        if (parserInc STREQUAL "")
            set(parserInc ".")
        endif()
        file(RELATIVE_PATH buildInc ${working} "${CMAKE_CURRENT_BINARY_DIR}")
        if (buildInc STREQUAL "")
            set(buildInc ".")
        endif()
        add_custom_command(OUTPUT ${output}
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/pandac -f h -i ${CMAKE_CURRENT_SOURCE_DIR}/src -i ${pandacInc} -i ${parserInc} -i ${buildInc} -o ${CMAKE_CURRENT_BINARY_DIR}/updated_bootstrap/include ${input}
            DEPENDS ${rawInput} pandac
            WORKING_DIRECTORY ${working}
        )
        list(APPEND result ${output})
    endforeach()
    set(${out_var} "${result}" PARENT_SCOPE)
endfunction()

create_headers(updated_pandac_headers
    ${core_source}
    ${pandac_source}
    ${CMAKE_CURRENT_SOURCE_DIR}/src/parser/org/pandalanguage/plex/runtime/DFA.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/parser/org/pandalanguage/plex/runtime/RawToken.panda
)

function(compile_panda_sources_to_c out_var)
    set(result)
    foreach(rawInput ${ARGN})
        if (${rawInput} MATCHES "^${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/.*")
            file(RELATIVE_PATH input "${CMAKE_CURRENT_SOURCE_DIR}/src/pandac" ${rawInput})
            set(working "${CMAKE_CURRENT_SOURCE_DIR}/src/pandac")
        elseif (${rawInput} MATCHES "^${CMAKE_CURRENT_SOURCE_DIR}/src/parser/.*")
            file(RELATIVE_PATH input "${CMAKE_CURRENT_SOURCE_DIR}/src/parser" ${rawInput})
            set(working "${CMAKE_CURRENT_SOURCE_DIR}/src/parser")
        elseif (${rawInput} MATCHES "^${CMAKE_CURRENT_SOURCE_DIR}/src/.*")
            file(RELATIVE_PATH input "${CMAKE_CURRENT_SOURCE_DIR}/src" ${rawInput})
            set(working "${CMAKE_CURRENT_SOURCE_DIR}/src")
        else()
            file(RELATIVE_PATH input "${CMAKE_CURRENT_BINARY_DIR}" ${rawInput})
            set(working "${CMAKE_CURRENT_BINARY_DIR}")
        endif()
        get_filename_component(output ${input} NAME_WE)
        set(output "${CMAKE_CURRENT_BINARY_DIR}/updated_bootstrap/src/${output}.c")
        file(RELATIVE_PATH pandacInc ${working} "${CMAKE_CURRENT_SOURCE_DIR}/src/pandac")
        if (pandacInc STREQUAL "")
            set(pandacInc ".")
        endif()
        file(RELATIVE_PATH parserInc ${working} "${CMAKE_CURRENT_SOURCE_DIR}/src/parser")
        if (parserInc STREQUAL "")
            set(parserInc ".")
        endif()
        file(RELATIVE_PATH buildInc ${working} "${CMAKE_CURRENT_BINARY_DIR}")
        if (buildInc STREQUAL "")
            set(buildInc ".")
        endif()
        add_custom_command(OUTPUT ${output}
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/pandac -f c -i ${CMAKE_CURRENT_SOURCE_DIR}/src -i ${pandacInc} -i ${parserInc} -i ${buildInc} -o ${CMAKE_CURRENT_BINARY_DIR}/updated_bootstrap/src ${input}
            DEPENDS ${rawInput} pandac
            WORKING_DIRECTORY ${working}
        )
        list(APPEND result ${output})
    endforeach()
    set(${out_var} "${result}" PARENT_SCOPE)
endfunction()

compile_panda_sources_to_c(updated_pandac_c
    ${core_source}
    ${pandac_source}
    ${CMAKE_CURRENT_SOURCE_DIR}/src/parser/org/pandalanguage/plex/runtime/DFA.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/parser/org/pandalanguage/plex/runtime/RawToken.panda
)

add_custom_target(update_bootstrap
    DEPENDS ${updated_pandac_headers} ${updated_pandac_c}
)

add_custom_command(
    TARGET update_bootstrap POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E remove_directory ${CMAKE_CURRENT_SOURCE_DIR}/bootstrap
    COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_CURRENT_BINARY_DIR}/updated_bootstrap ${CMAKE_CURRENT_SOURCE_DIR}/bootstrap
)
