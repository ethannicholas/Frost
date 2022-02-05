project(frost)
cmake_minimum_required(VERSION 3.13)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fPIC")
set(OPTIMIZATION 0)
set(SAFETY 3)
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
set(SYSTEM_LIBRARIES m Threads::Threads)

find_package(LLVM REQUIRED CONFIG)
if(DEFINED ENV{ICU_DIR})
    set(ICU_LIBRARIES $ENV{ICU_DIR}/lib/libicuuc.dylib $ENV{ICU_DIR}/lib/libicui18n.dylib)
    set(ICU_INCLUDE_DIRS $ENV{ICU_DIR}/include)
else()
    find_package(ICU COMPONENTS uc i18n REQUIRED)
    message(WARNING "ICU_DIR environment variable was not set, attempting to find it manually")
endif()

file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/frostc/Config.frost"
    "package org.frostlang.frostc\n"
    "class Config {\n"
    "@class function frostSourceDir():String { return \"${CMAKE_SOURCE_DIR}/src\" }\n"
    "@class function frostLibDir():String { return \"${CMAKE_CURRENT_BINARY_DIR}\" }\n"
    "@class function llvmTriple():String { return \"${LLVM_HOST_TARGET}\" }\n"
    "@class function icuLibraries():String { return \"${ICU_LIBRARIES}\" }\n"
    "}"
)

file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/config.c"
    "#include <string.h>\n"
    "#include <inttypes.h>\n"
    "intptr_t frostNewString(const char* s, int length)\n;"
    "static intptr_t configString(const char* s) { return frostNewString(s, strlen(s)); }"
    "intptr_t org$frostlang$frostc$Config$frostSourceDir$R$frost$core$String() { return configString(\"${CMAKE_SOURCE_DIR}/src\"); }\n"
    "intptr_t org$frostlang$frostc$Config$frostLibDir$R$frost$core$String() { return configString(\"${CMAKE_CURRENT_BINARY_DIR}\"); }\n"
    "intptr_t org$frostlang$frostc$Config$llvmTriple$R$frost$core$String() { return configString(\"${LLVM_HOST_TARGET}\"); }\n"
    "intptr_t org$frostlang$frostc$Config$icuLibraries$R$frost$core$String() { return configString(\"${ICU_LIBRARIES}\"); }\n"
)

set(BOOTSTRAP_ARGS "-O${OPTIMIZATION}" "-S${SAFETY}" "-g")
include_directories(
    ${CMAKE_SOURCE_DIR}
    ${ICU_INCLUDE_DIRS}
)

file(MAKE_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/regex")

file(MAKE_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/docs")

add_executable(bootstrap
    ${CMAKE_CURRENT_BINARY_DIR}/config.c
    bootstrap/bootstrap.c
    bootstrap/frostlib.c
)
target_link_libraries(bootstrap ${SYSTEM_LIBRARIES} ${ICU_LIBRARIES})
set_target_properties(bootstrap PROPERTIES LINKER_LANGUAGE CXX)

function(compile_frost_sources out_var)
    set(result)
    foreach(input ${ARGN})
        file(RELATIVE_PATH relative "${CMAKE_CURRENT_SOURCE_DIR}/src" ${input})
        get_filename_component(outputDir ${relative} DIRECTORY)
        get_filename_component(outputName ${input} NAME_WE)
        file(MAKE_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/out/${outputDir}")
        set(output "${CMAKE_CURRENT_BINARY_DIR}/out/${outputDir}/${outputName}.o")
        add_custom_command(
            OUTPUT ${output}
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/bootstrap ${BOOTSTRAP_ARGS} -f o -o ${output}
                    ${input}
            DEPENDS ${input} bootstrap
            WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        )
        list(APPEND result ${output})
    endforeach()
    set(${out_var} "${result}" PARENT_SCOPE)
endfunction()

set(public_source
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/Array.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/Collection.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/CollectionView.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/CollectionWriter.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/DefaultHashMap.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/HashKey.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/HashMap.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/HashSet.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/IdentityMap.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/IdentitySet.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/ImmutableArray.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/Iterable.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/Iterator.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/List.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/ListView.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/ListWriter.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/Map.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/MapView.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/MapWriter.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/Stack.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Bit.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Char8.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Char16.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Char32.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Class.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Comparable.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Equatable.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Error.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Formattable.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Immutable.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Int16.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Int32.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Int64.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Int8.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Int.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Tuple2.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Tuple3.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Tuple4.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Tuple5.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Tuple6.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Tuple7.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Tuple8.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Tuple9.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Tuple10.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Tuple11.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Tuple12.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Tuple13.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Tuple14.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Tuple15.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Tuple16.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/EquatableTuple2.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/EquatableTuple3.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/EquatableTuple4.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/EquatableTuple5.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/EquatableTuple6.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/EquatableTuple7.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/EquatableTuple8.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/EquatableTuple9.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/EquatableTuple10.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/EquatableTuple11.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/EquatableTuple12.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/EquatableTuple13.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/EquatableTuple14.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/EquatableTuple15.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/EquatableTuple16.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/KeyTuple2.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/KeyTuple3.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/KeyTuple4.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/KeyTuple5.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/KeyTuple6.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/KeyTuple7.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/KeyTuple8.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/KeyTuple9.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/KeyTuple10.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/KeyTuple11.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/KeyTuple12.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/KeyTuple13.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/KeyTuple14.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/KeyTuple15.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/KeyTuple16.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/UInt16.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/UInt32.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/UInt64.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/UInt8.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/UInt.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Matcher.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Maybe.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/MutableString.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Object.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Real32.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Real64.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/RegularExpression.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/String.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/System.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Value.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Weak.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/io/ByteOrder.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/io/Console.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/io/File.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/io/IndentedOutputStream.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/io/InputStream.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/io/LineNumberInputStream.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/io/MemoryInputStream.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/io/MemoryOutputStream.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/io/OutputStream.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/io/PushbackInputStream.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/json/JSON.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/json/JSONParser.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/math/Random.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/math/XorShift128Plus.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/threads/Lock.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/threads/Notifier.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/threads/MessageQueue.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/threads/ScopedLock.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/threads/Thread.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/time/Timer.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/unsafe/Pointer.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/unsafe/UnsafeMessageQueue.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/frostlang/json/Lexer.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/frostlang/json/Position.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/frostlang/json/Token.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/frostlang/frost/IntBitIterator.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/frostlang/frost/Int8List.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/frostlang/frost/Int16List.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/frostlang/frost/Int32List.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/frostlang/frost/Int64List.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/frostlang/frost/IntList.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/frostlang/frost/UInt8List.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/frostlang/frost/UInt16List.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/frostlang/frost/UInt32List.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/frostlang/frost/UInt64List.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/frostlang/frost/UIntList.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/frostlang/plex/runtime/DFA.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/frostlang/plex/runtime/RawToken.frost
)

set(core_source
    ${public_source}
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/MergeSort.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Method.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/MutableMethod.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Frost.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/io/FileInputStream.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/io/FileOutputStream.frost
)

compile_frost_sources(frost_objects
    ${core_source}
)

add_library(frost
    src/c/frostlib.c
    ${frost_objects}
)

add_custom_command(
    OUTPUT writeNumbers
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/frostc -o writeNumbers
            ${CMAKE_CURRENT_SOURCE_DIR}/src/tools/WriteNumbers.frost
    DEPENDS frostc src/tools/WriteNumbers.frost
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_command(
    OUTPUT src/frost/core/Int8.frost
           src/frost/core/Int16.frost
           src/frost/core/Int32.frost
           src/frost/core/Int64.frost
           src/frost/core/UInt8.frost
           src/frost/core/UInt16.frost
           src/frost/core/UInt32.frost
           src/frost/core/UInt64.frost
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/writeNumbers
    DEPENDS writeNumbers
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_command(
    OUTPUT writeTuples
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/frostc -o writeTuples
            ${CMAKE_CURRENT_SOURCE_DIR}/src/tools/WriteTuples.frost
    DEPENDS frostc src/tools/WriteTuples.frost
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_command(
    OUTPUT src/frost/core/Tuple2.frost
           src/frost/core/Tuple3.frost
           src/frost/core/Tuple4.frost
           src/frost/core/Tuple5.frost
           src/frost/core/Tuple6.frost
           src/frost/core/Tuple7.frost
           src/frost/core/Tuple8.frost
           src/frost/core/Tuple9.frost
           src/frost/core/Tuple10.frost
           src/frost/core/Tuple11.frost
           src/frost/core/Tuple12.frost
           src/frost/core/Tuple13.frost
           src/frost/core/Tuple14.frost
           src/frost/core/Tuple15.frost
           src/frost/core/Tuple16.frost
           src/frost/core/EquatableTuple2.frost
           src/frost/core/EquatableTuple3.frost
           src/frost/core/EquatableTuple4.frost
           src/frost/core/EquatableTuple5.frost
           src/frost/core/EquatableTuple6.frost
           src/frost/core/EquatableTuple7.frost
           src/frost/core/EquatableTuple8.frost
           src/frost/core/EquatableTuple9.frost
           src/frost/core/EquatableTuple10.frost
           src/frost/core/EquatableTuple11.frost
           src/frost/core/EquatableTuple12.frost
           src/frost/core/EquatableTuple13.frost
           src/frost/core/EquatableTuple14.frost
           src/frost/core/EquatableTuple15.frost
           src/frost/core/EquatableTuple16.frost
           src/frost/core/KeyTuple2.frost
           src/frost/core/KeyTuple3.frost
           src/frost/core/KeyTuple4.frost
           src/frost/core/KeyTuple5.frost
           src/frost/core/KeyTuple6.frost
           src/frost/core/KeyTuple7.frost
           src/frost/core/KeyTuple8.frost
           src/frost/core/KeyTuple9.frost
           src/frost/core/KeyTuple10.frost
           src/frost/core/KeyTuple11.frost
           src/frost/core/KeyTuple12.frost
           src/frost/core/KeyTuple13.frost
           src/frost/core/KeyTuple14.frost
           src/frost/core/KeyTuple15.frost
           src/frost/core/KeyTuple16.frost
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/writeTuples
    DEPENDS writeTuples
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_command(
    OUTPUT writeOperators
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/frostc -o writeOperators
            ${CMAKE_CURRENT_SOURCE_DIR}/src/tools/WriteOperators.frost
    # it doesn't really depend upon stubs, but it isn't safe to run this while stubs are being
    # generated
    DEPENDS src/tools/WriteOperators.frost frostc stubs
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_command(
    OUTPUT test/tests/Operators.frost
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
    DEPENDS src/frost/core/Int8.frost
            src/frost/core/Int16.frost
            src/frost/core/Int32.frost
            src/frost/core/Int64.frost
            src/frost/core/UInt8.frost
            src/frost/core/UInt16.frost
            src/frost/core/UInt32.frost
            src/frost/core/UInt64.frost
            src/frost/core/Real32.frost
            src/frost/core/Real64.frost
            src/frost/core/Tuple2.frost
            src/frost/core/Tuple3.frost
            src/frost/core/Tuple4.frost
            src/frost/core/Tuple5.frost
            src/frost/core/Tuple6.frost
            src/frost/core/Tuple7.frost
            src/frost/core/Tuple8.frost
            src/frost/core/Tuple9.frost
            src/frost/core/Tuple10.frost
            src/frost/core/Tuple11.frost
            src/frost/core/Tuple12.frost
            src/frost/core/Tuple13.frost
            src/frost/core/Tuple14.frost
            src/frost/core/Tuple15.frost
            src/frost/core/Tuple16.frost
            src/frost/core/EquatableTuple2.frost
            src/frost/core/EquatableTuple3.frost
            src/frost/core/EquatableTuple4.frost
            src/frost/core/EquatableTuple5.frost
            src/frost/core/EquatableTuple6.frost
            src/frost/core/EquatableTuple7.frost
            src/frost/core/EquatableTuple8.frost
            src/frost/core/EquatableTuple9.frost
            src/frost/core/EquatableTuple10.frost
            src/frost/core/EquatableTuple11.frost
            src/frost/core/EquatableTuple12.frost
            src/frost/core/EquatableTuple13.frost
            src/frost/core/EquatableTuple14.frost
            src/frost/core/EquatableTuple15.frost
            src/frost/core/EquatableTuple16.frost
            src/frost/core/KeyTuple2.frost
            src/frost/core/KeyTuple3.frost
            src/frost/core/KeyTuple4.frost
            src/frost/core/KeyTuple5.frost
            src/frost/core/KeyTuple6.frost
            src/frost/core/KeyTuple7.frost
            src/frost/core/KeyTuple8.frost
            src/frost/core/KeyTuple9.frost
            src/frost/core/KeyTuple10.frost
            src/frost/core/KeyTuple11.frost
            src/frost/core/KeyTuple12.frost
            src/frost/core/KeyTuple13.frost
            src/frost/core/KeyTuple14.frost
            src/frost/core/KeyTuple15.frost
            src/frost/core/KeyTuple16.frost
            src/parser/org/frostlang/json/Lexer.frost
            src/parser/org/frostlang/json/Token.frost
            test/tests/Operators.frost
            test/tests/Operators.expected
            Operators.c
)

function(compile_plex_sources out_var)
    set(result)
    foreach(input ${ARGN})
        set(input "${CMAKE_CURRENT_SOURCE_DIR}/${input}")
        get_filename_component(output ${input} NAME_WE)
        set(output "${CMAKE_CURRENT_BINARY_DIR}/${output}.o")
        add_custom_command(
            OUTPUT ${output}
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/bootstrap ${BOOTSTRAP_ARGS}
                    -I ${CMAKE_CURRENT_SOURCE_DIR}/src/parser -f o -o ${output} ${input}
            DEPENDS bootstrap ${input}
            WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        )
        list(APPEND result ${output})
    endforeach()
    set(${out_var} "${result}" PARENT_SCOPE)
endfunction()

compile_plex_sources(plex_objects
    src/parser/org/frostlang/plex/AcceptState.frost
    src/parser/org/frostlang/plex/Any.frost
    src/parser/org/frostlang/plex/AnyState.frost
    src/parser/org/frostlang/plex/CharSet.frost
    src/parser/org/frostlang/plex/Concat.frost
    src/parser/org/frostlang/plex/DFAState.frost
    src/parser/org/frostlang/plex/DFAStateLabel.frost
    src/parser/org/frostlang/plex/NFA.frost
    src/parser/org/frostlang/plex/NFAtoDFA.frost
    src/parser/org/frostlang/plex/Node.frost
    src/parser/org/frostlang/plex/Option.frost
    src/parser/org/frostlang/plex/PLex.frost
    src/parser/org/frostlang/plex/Plus.frost
    src/parser/org/frostlang/plex/Regex.frost
    src/parser/org/frostlang/plex/RemappedState.frost
    src/parser/org/frostlang/plex/SingleCharState.frost
    src/parser/org/frostlang/plex/SetNode.frost
    src/parser/org/frostlang/plex/SingleChar.frost
    src/parser/org/frostlang/plex/SingleCharState.frost
    src/parser/org/frostlang/plex/Star.frost
    src/parser/org/frostlang/plex/State.frost
    src/parser/org/frostlang/plex/TableState.frost
    src/parser/org/frostlang/plex/Union.frost
)

add_executable(plex
    ${plex_objects}
)
target_link_libraries(plex frost ${SYSTEM_LIBRARIES} ${ICU_LIBRARIES})
set_target_properties(plex PROPERTIES LINKER_LANGUAGE CXX)

add_custom_command(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/frostc/parser/Lexer.frost
           ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/frostc/parser/Token.frost
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/plex ${CMAKE_CURRENT_SOURCE_DIR}/src/parser/Frost.plex
            org.frostlang.frostc.parser.Token
            ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/frostc/parser/Token.frost
            org.frostlang.frostc.parser.Lexer
            ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/frostc/parser/Lexer.frost
            org.frostlang.frostc.Position
    DEPENDS plex src/parser/Frost.plex
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_target(make_lexer
    DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/frostc/parser/Lexer.frost
            ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/frostc/parser/Token.frost
)

add_custom_command(
    OUTPUT src/parser/org/frostlang/json/Lexer.frost
           src/parser/org/frostlang/json/Token.frost
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/plex ${CMAKE_CURRENT_SOURCE_DIR}/src/parser/JSON.plex
            org.frostlang.json.Token
            ${CMAKE_CURRENT_SOURCE_DIR}/src/org/frostlang/json/Token.frost
            org.frostlang.json.Lexer
            ${CMAKE_CURRENT_SOURCE_DIR}/src/org/frostlang/json/Lexer.frost
            org.frostlang.json.Position
    DEPENDS plex src/parser/JSON.plex
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_target(make_json_lexer
    DEPENDS src/parser/org/frostlang/json/Lexer.frost
            src/parser/org/frostlang/json/Token.frost
)

add_custom_command(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/regex/RegexLexer.frost
           ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/regex/RegexToken.frost
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/plex ${CMAKE_CURRENT_SOURCE_DIR}/src/parser/Regex.plex
            org.frostlang.regex.RegexToken
            ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/regex/RegexToken.frost
            org.frostlang.regex.RegexLexer
            ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/regex/RegexLexer.frost
            org.frostlang.frostc.Position
    DEPENDS plex src/parser/Regex.plex
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_target(make_regex_lexer
    DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/regex/RegexLexer.frost
            ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/regex/RegexToken.frost
)

function(compile_frostc_sources out_var)
    set(result)
    foreach(input ${ARGN})
        file(RELATIVE_PATH relative "${CMAKE_CURRENT_SOURCE_DIR}/src" ${input})
        get_filename_component(outputDir ${relative} DIRECTORY)
        get_filename_component(output ${input} NAME_WE)
        set(output "${CMAKE_CURRENT_BINARY_DIR}/out/${outputDir}/${output}.o")
        add_custom_command(
            OUTPUT ${output}
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/bootstrap ${BOOTSTRAP_ARGS}
                    -I ${CMAKE_CURRENT_SOURCE_DIR}/src/parser
                    -I ${CMAKE_CURRENT_BINARY_DIR}
                    -I ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc
                    -f o -o ${output} ${input}
            DEPENDS bootstrap ${input}
                    make_lexer
                    make_json_lexer
                    make_regex_lexer
            WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        )
        list(APPEND result ${output})
    endforeach()
    set(${out_var} "${result}" PARENT_SCOPE)
endfunction()

set(frostc_source
    ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/frostc/parser/Lexer.frost
    ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/frostc/parser/Token.frost
    ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/regex/RegexLexer.frost
    ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/regex/RegexToken.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Alias.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Annotations.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/ASTNode.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Bench.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/CBackend.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Code.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/CodeGenerator.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/ChoiceCase.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/ClassDecl.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Backend.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Compiler.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/ErrorReporter.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/expression/And.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/expression/AtPre.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/expression/AtReturn.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/expression/Binary.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/expression/Call.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/expression/Closure.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/expression/Dot.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/expression/Identifier.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/expression/Or.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/expression/RangeExpression.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/expression/Tuple.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/expression/Unary.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/FieldDecl.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/FixedArray.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Interpreter.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/HTMLProcessor.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/IR.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/LinkedList.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/LLVMBackend.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/lvalue/LValue.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/MethodDecl.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/MethodPosition.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/MethodRef.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Methods.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Position.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Scanner.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/StubBackend.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Symbol.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/SymbolTable.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Type.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Variable.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/frostdoc/DummyBackend.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/parser/Parser.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/pass/Analyzer.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/pass/RemoveRefUnrefPairs.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/statement/Assert.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/statement/Assignment.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/statement/Break.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/statement/Continue.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/statement/Do.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/statement/For.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/statement/If.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/statement/InnerMethod.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/statement/Loop.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/statement/Match.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/statement/Return.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/statement/Try.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/statement/Var.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/statement/While.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/regex/RegexParser.frost
)

compile_frostc_sources(frostc_objects
    ${frostc_source}
    ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/frostc/Config.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Main.frost
)

add_custom_target(make_frostc_objects
    DEPENDS ${frostc_objects}
)

add_executable(frostc
    ${frostc_objects}
)
add_dependencies(frostc make_frostc_objects)
target_link_libraries(frostc frost ${SYSTEM_LIBRARIES} ${ICU_LIBRARIES})
set_target_properties(frostc PROPERTIES LINKER_LANGUAGE CXX)

function(create_stubs out_var)
    set(result)
    foreach(input ${ARGN})
        file(RELATIVE_PATH relative "${CMAKE_CURRENT_SOURCE_DIR}/src" ${input})
        get_filename_component(outputPath ${relative} DIRECTORY)
        get_filename_component(outputName ${relative} NAME_WE)
        set(output "${CMAKE_CURRENT_BINARY_DIR}/stubs/${outputPath}/${outputName}.stub")
        add_custom_command(
            OUTPUT ${output}
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/frostc -fstub --no-stubs ${input} -o${output}
            DEPENDS ${input} frostc
        )
        list(APPEND result ${output})
    endforeach()
    set(${out_var} "${result}" PARENT_SCOPE)
endfunction()

create_stubs(frost_stubs
    ${public_source}
)

add_custom_target(stubs ALL
    DEPENDS ${frost_stubs}
)

add_custom_command(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/bootstrap.c
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/frostc ${core_source} ${frostc_source}
            ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Main.frost
            -I${CMAKE_CURRENT_BINARY_DIR} -S${SAFETY} -O${OPTIMIZATION}
            -fc --no-stubs -m32 --bootstrap -o ${CMAKE_CURRENT_BINARY_DIR}/bootstrap.c
    DEPENDS ${core_source} ${frostc_source}
            ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Main.frost
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_target(update_bootstrap
    DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/bootstrap.c
)

add_custom_command(
    TARGET update_bootstrap POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_BINARY_DIR}/bootstrap.c
            ${CMAKE_CURRENT_SOURCE_DIR}/bootstrap
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/src/c/frostlib.c
            ${CMAKE_CURRENT_SOURCE_DIR}/bootstrap
)

add_custom_target(frostrun
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/frostc -O${OPTIMIZATION} -S${SAFETY}
            ${CMAKE_CURRENT_SOURCE_DIR}/src/tools/FrostRun.frost
            -o${CMAKE_CURRENT_BINARY_DIR}/frostrun
    DEPENDS frostc src/tools/FrostRun.frost
)

compile_frost_sources(test_extras_objects
    ${CMAKE_CURRENT_SOURCE_DIR}/test/extras/Algorithms.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/test/extras/IntCode.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/test/extras/MD5.frost
)

add_library(test_extras
    ${test_extras_objects}
)
set_target_properties(test_extras PROPERTIES LINKER_LANGUAGE CXX)

add_custom_command(
    OUTPUT TestRunner
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/frostc -O${OPTIMIZATION} -S${SAFETY}
            -I${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/test/TestRunner.frost
            -o${CMAKE_CURRENT_BINARY_DIR}/TestRunner
    DEPENDS frostc test_extras test/TestRunner.frost
)

add_custom_target(run_tests
    DEPENDS TestRunner
)

add_custom_command(
    TARGET run_tests POST_BUILD
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/TestRunner ${CMAKE_CURRENT_SOURCE_DIR}
            ${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_C_COMPILER} ${ICU_LIBRARIES}
)

compile_frostc_sources(frostmd_objects
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/frostdoc/FrostMDMain.frost
    ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/frostc/Config.frost
    ${frostc_source}
)

add_executable(frostmd
    ${frostmd_objects}
)
add_dependencies(frostmd make_frostc_objects stubs)
target_link_libraries(frostmd frost ${SYSTEM_LIBRARIES} ${ICU_LIBRARIES})
set_target_properties(frostmd PROPERTIES LINKER_LANGUAGE CXX)

function(run_markdown out_var)
    set(result)
    foreach(input ${ARGN})
        set(input "${CMAKE_CURRENT_SOURCE_DIR}/${input}")
        get_filename_component(output ${input} NAME_WE)
        set(output "${CMAKE_CURRENT_BINARY_DIR}/docs/${output}.html")
        add_custom_command(
            OUTPUT ${output}
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/frostmd ${CMAKE_CURRENT_SOURCE_DIR}/docs
                    ${CMAKE_CURRENT_SOURCE_DIR}/test ${input} ${output}
            DEPENDS frostmd ${input}
        )
        list(APPEND result ${output})
    endforeach()
    set(${out_var} "${result}" PARENT_SCOPE)
endfunction()

run_markdown(markdown_html
    docs/annotations.md
    docs/arrayLiterals.md
    docs/bareCode.md
    docs/basicTypes.md
    docs/choices.md
    docs/classes.md
    docs/comments.md
    docs/constants.md
    docs/currentStatus.md
    docs/defaultValues.md
    docs/defines.md
    docs/documentationComments.md
    docs/errorHandling.md
    docs/expressions.md
    docs/fields.md
    docs/frostc.md
    docs/functions.md
    docs/generics.md
    docs/gettingStarted.md
    docs/identifiers.md
    docs/immutability.md
    docs/implicitCasting.md
    docs/index.md
    docs/initMethods.md
    docs/inlineMethods.md
    docs/innerMethods.md
    docs/interfaces.md
    docs/keywords.md
    docs/main.md
    docs/memoryManagement.md
    docs/methodReferences.md
    docs/methods.md
    docs/nonNullability.md
    docs/null.md
    docs/operatorOverloading.md
    docs/operators.md
    docs/overview.md
    docs/packages.md
    docs/programs.md
    docs/properties.md
    docs/safetyViolations.md
    docs/self.md
    docs/statements.md
    docs/stringInterpolation.md
    docs/super.md
    docs/threads.md
    docs/tuples.md
    docs/types.md
    docs/values.md
    docs/variables.md
    docs/variablesAndConstants.md
    docs/weakReferences.md
)

compile_frostc_sources(frostdoc_objects
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/frostdoc/FrostDoc.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/frostdoc/FrostDocMain.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/frostdoc/TableOfContentsNode.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/frostdoc/XMLWriter.frost
    ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/frostc/Config.frost
    ${frostc_source}
)

add_executable(frostdoc
    ${frostdoc_objects}
)
add_dependencies(frostdoc make_frostc_objects stubs)
target_link_libraries(frostdoc frost ${SYSTEM_LIBRARIES} ${ICU_LIBRARIES})
set_target_properties(frostdoc PROPERTIES LINKER_LANGUAGE CXX)

function(syntax_highlight out_var)
    set(result)
    foreach(input ${ARGN})
        file(RELATIVE_PATH relative "${CMAKE_CURRENT_SOURCE_DIR}/src" ${input})
        get_filename_component(outputPath ${relative} DIRECTORY)
        get_filename_component(outputName ${relative} NAME_WE)
        set(output "${CMAKE_CURRENT_BINARY_DIR}/docs/source/${outputPath}/${outputName}.html")
        string(REGEX REPLACE "[A-Za-z]+" ".." root ${outputPath})
        add_custom_command(
            OUTPUT ${output}
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/frostc -f html ${input} -o ${output} --root ../${root}
            DEPENDS ${input} frostc
        )
        list(APPEND result ${output})
    endforeach()
    set(${out_var} "${result}" PARENT_SCOPE)
endfunction()

syntax_highlight(frost_source_html
    ${public_source}
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/Range.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/core/SteppedRange.frost
)

add_custom_target(docs
    COMMAND frostdoc ${CMAKE_CURRENT_SOURCE_DIR}/src/frost ${CMAKE_CURRENT_BINARY_DIR}/docs api
            ${CMAKE_CURRENT_SOURCE_DIR}/test ${CMAKE_CURRENT_SOURCE_DIR}/docs

    DEPENDS frostdoc ${public_source} ${markdown_html} ${frost_source_html}
)
