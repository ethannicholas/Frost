project(panda)
cmake_minimum_required(VERSION 2.8)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m64 -fPIC")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -m64 -fPIC")
set(OPTIMIZATION 3)
set(SAFETY 3)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/third-party/FindICU")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/third-party/FindLLVM")
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
set(SYSTEM_LIBRARIES m Threads::Threads)

find_package(LLVM 4.0 REQUIRED)
find_package(ICU COMPONENTS uc i18n REQUIRED)

file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/org/pandalanguage/pandac/Config.panda"
    "package org.pandalanguage.pandac\n"
    "class Config {\n"
    "@class function pandaSourceDir():String { return \"${CMAKE_SOURCE_DIR}/src\" }\n"
    "@class function pandaLibDir():String { return \"${CMAKE_CURRENT_BINARY_DIR}\" }\n"
    "@class function llvmDir():String { return \"${LLVM_ROOT_DIR}\" }\n"
    "@class function llvmTriple():String { return \"${LLVM_HOST_TARGET}\" }\n"
    "@class function icuLibraries():String { return \"${ICU_LIBRARIES}\" }\n"
    "}")

file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/config.c"
    "#include <string.h>\n"
    "#include \"panda/core/String.h\"\n"
    "panda$core$String* pandaNewString(const char* s, int length)\n;"
    "static panda$core$String* configString(const char* s) { return pandaNewString(s, strlen(s)); }"
    "panda$core$String* org$pandalanguage$pandac$Config$pandaSourceDir$R$panda$core$String() { return configString(\"${CMAKE_SOURCE_DIR}/src\"); }\n"
    "panda$core$String* org$pandalanguage$pandac$Config$pandaLibDir$R$panda$core$String() { return configString(\"${CMAKE_CURRENT_BINARY_DIR}\"); }\n"
    "panda$core$String* org$pandalanguage$pandac$Config$llvmDir$R$panda$core$String() { return configString(\"${LLVM_ROOT_DIR}\"); }\n"
    "panda$core$String* org$pandalanguage$pandac$Config$llvmTriple$R$panda$core$String() { return configString(\"${LLVM_HOST_TARGET}\"); }\n"
    "panda$core$String* org$pandalanguage$pandac$Config$icuLibraries$R$panda$core$String() { return configString(\"${ICU_LIBRARIES}\"); }\n"
)

set(BOOTSTRAP_ARGS "-O" ${OPTIMIZATION} "-S" ${SAFETY})
include_directories(
    bootstrap/include
    ${ICU_INCLUDE_DIRS}
)

file(MAKE_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/org/pandalanguage/regex")

file(MAKE_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/docs")

add_library(c_panda
    bootstrap/src/panda/collections/Array.c
    bootstrap/src/panda/collections/Collection.c
    bootstrap/src/panda/collections/CollectionView.c
    bootstrap/src/panda/collections/CollectionWriter.c
    bootstrap/src/panda/collections/HashMap.c
    bootstrap/src/panda/collections/HashMap/Entry.c
    bootstrap/src/panda/collections/HashMap/EntryIterator.c
    bootstrap/src/panda/collections/HashMap/KeyIterator.c
    bootstrap/src/panda/collections/HashMap/ValueIterator.c
    bootstrap/src/panda/collections/HashSet.c
    bootstrap/src/panda/collections/IdentityMap.c
    bootstrap/src/panda/collections/IdentityMap/Entry.c
    bootstrap/src/panda/collections/ImmutableArray.c
    bootstrap/src/panda/collections/ImmutableArray/ImmutableArrayIterator.c
    bootstrap/src/panda/collections/ImmutableHashMap.c
    bootstrap/src/panda/collections/ImmutableHashMap/Entry.c
    bootstrap/src/panda/collections/ImmutableHashMap/EntryIterator.c
    bootstrap/src/panda/collections/ImmutableHashMap/KeyIterator.c
    bootstrap/src/panda/collections/ImmutableHashMap/ValueIterator.c
    bootstrap/src/panda/collections/Iterable.c
    bootstrap/src/panda/collections/Iterator.c
    bootstrap/src/panda/collections/Iterator/FilterIterator.c
    bootstrap/src/panda/collections/Iterator/RangeIterator.c
    bootstrap/src/panda/collections/Key.c
    bootstrap/src/panda/collections/List.c
    bootstrap/src/panda/collections/ListView.c
    bootstrap/src/panda/collections/ListView/ListIterator.c
    bootstrap/src/panda/collections/ListWriter.c
    bootstrap/src/panda/collections/Map.c
    bootstrap/src/panda/collections/MapView.c
    bootstrap/src/panda/collections/MapWriter.c
    bootstrap/src/panda/collections/Stack.c
    bootstrap/src/panda/collections/Stack/StackIterator.c
    bootstrap/src/panda/collections/SpecializedArray.LTorg/pandalanguage/pandac/parser/Token.GT.c
    bootstrap/src/panda/collections/SpecializedArrayIterator.LTorg/pandalanguage/pandac/parser/Token.GT.c
    bootstrap/src/panda/collections/SpecializedArray.LTorg/pandalanguage/regex/RegexToken.GT.c
    bootstrap/src/panda/collections/SpecializedArrayIterator.LTorg/pandalanguage/regex/RegexToken.GT.c
    bootstrap/src/panda/core/Bit.c
    bootstrap/src/panda/core/Char8.c
    bootstrap/src/panda/core/Char16.c
    bootstrap/src/panda/core/Char32.c
    bootstrap/src/panda/core/Class.c
    bootstrap/src/panda/core/Comparable.c
    bootstrap/src/panda/core/Equatable.c
    bootstrap/src/panda/core/Formattable.c
    bootstrap/src/panda/core/Immutable.c
    bootstrap/src/panda/core/Int16.c
    bootstrap/src/panda/core/Int32.c
    bootstrap/src/panda/core/Int64.c
    bootstrap/src/panda/core/Int8.c
    bootstrap/src/panda/core/Matcher.c
    bootstrap/src/panda/core/Method.c
    bootstrap/src/panda/core/MutableMethod.c
    bootstrap/src/panda/core/MutableString.c
    bootstrap/src/panda/core/MutableString/Index.c
    bootstrap/src/panda/core/Real32.c
    bootstrap/src/panda/core/Real64.c
    bootstrap/src/panda/core/RegularExpression.c
    bootstrap/src/panda/core/Object.c
    bootstrap/src/panda/core/Panda.c
    bootstrap/src/panda/core/Range.LTpanda/core/String/Index.Q.GT.c
    bootstrap/src/panda/core/Range.LTpanda/core/String/Index.GT.c
    bootstrap/src/panda/core/Range.LTpanda/core/MutableString/Index.Q.GT.c
    bootstrap/src/panda/core/Range.LTpanda/core/MutableString/Index.GT.c
    bootstrap/src/panda/core/Range.LTpanda/core/Int64.Q.GT.c
    bootstrap/src/panda/core/Range.LTpanda/core/Int64.GT.c
    bootstrap/src/panda/core/SteppedRange.LTpanda/core/String/Index.Q.Cpanda/core/Int64.GT.c
    bootstrap/src/panda/core/SteppedRange.LTpanda/core/Int8.Cpanda/core/Int8.GT.c
    bootstrap/src/panda/core/SteppedRange.LTpanda/core/Int16.Cpanda/core/Int16.GT.c
    bootstrap/src/panda/core/SteppedRange.LTpanda/core/Int32.Cpanda/core/Int32.GT.c
    bootstrap/src/panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.c
    bootstrap/src/panda/core/SteppedRange.LTpanda/core/UInt8.Cpanda/core/UInt8.GT.c
    bootstrap/src/panda/core/SteppedRange.LTpanda/core/UInt16.Cpanda/core/UInt16.GT.c
    bootstrap/src/panda/core/SteppedRange.LTpanda/core/UInt32.Cpanda/core/UInt32.GT.c
    bootstrap/src/panda/core/SteppedRange.LTpanda/core/UInt64.Cpanda/core/UInt64.GT.c
    bootstrap/src/panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.c
    bootstrap/src/panda/core/String.c
    bootstrap/src/panda/core/String/Index.c
    bootstrap/src/panda/core/String/Match.c
    bootstrap/src/panda/core/String/MatchIterator.c
    bootstrap/src/panda/core/String/RegexMatchIterator.c
    bootstrap/src/panda/core/String/UTF8Iterator.c
    bootstrap/src/panda/core/String/UTF16Iterator.c
    bootstrap/src/panda/core/String/UTF32Iterator.c
    bootstrap/src/panda/core/String/UTF8List.c
    bootstrap/src/panda/core/System.c
    bootstrap/src/panda/core/System/Process.c
    bootstrap/src/panda/core/UInt16.c
    bootstrap/src/panda/core/UInt32.c
    bootstrap/src/panda/core/UInt64.c
    bootstrap/src/panda/core/UInt8.c
    bootstrap/src/panda/core/Value.c
    bootstrap/src/panda/core/Weak.c
    bootstrap/src/panda/io/Console.c
    bootstrap/src/panda/io/File.c
    bootstrap/src/panda/io/FileInputStream.c
    bootstrap/src/panda/io/FileOutputStream.c
    bootstrap/src/panda/io/IndentedOutputStream.c
    bootstrap/src/panda/io/InputStream.c
    bootstrap/src/panda/io/InputStream/ByteOrder.c
    bootstrap/src/panda/io/InputStream/LineIterator.c
    bootstrap/src/panda/io/LineNumberInputStream.c
    bootstrap/src/panda/io/MemoryInputStream.c
    bootstrap/src/panda/io/MemoryOutputStream.c
    bootstrap/src/panda/io/OutputStream.c
    bootstrap/src/panda/io/OutputStream/ByteOrder.c
    bootstrap/src/panda/io/PushbackInputStream.c
    bootstrap/src/panda/json/JSON.c
    bootstrap/src/panda/json/JSONParser.c
    bootstrap/src/panda/math/MersenneTwister.c
    bootstrap/src/panda/math/Random.c
    bootstrap/src/panda/math/XorShift128Plus.c
    bootstrap/src/panda/threads/Lock.c
    bootstrap/src/panda/threads/MessageQueue.c
    bootstrap/src/panda/threads/MessageQueue/Message.c
    bootstrap/src/panda/threads/Notifier.c
    bootstrap/src/panda/threads/ScopedLock.c
    bootstrap/src/panda/threads/Thread.c
    bootstrap/src/org/pandalanguage/json/Lexer.c
    bootstrap/src/org/pandalanguage/json/Position.c
    bootstrap/src/org/pandalanguage/json/Token.c
    bootstrap/src/org/pandalanguage/json/Token/Kind.c
    bootstrap/src/org/pandalanguage/panda/IntBitIterator.c
    bootstrap/src/org/pandalanguage/panda/Int8List.c
    bootstrap/src/org/pandalanguage/panda/Int16List.c
    bootstrap/src/org/pandalanguage/panda/Int32List.c
    bootstrap/src/org/pandalanguage/panda/Int64List.c
    bootstrap/src/org/pandalanguage/panda/UInt8List.c
    bootstrap/src/org/pandalanguage/panda/UInt16List.c
    bootstrap/src/org/pandalanguage/panda/UInt32List.c
    bootstrap/src/org/pandalanguage/panda/UInt64List.c
    bootstrap/src/pandalib.c
)

add_executable(bootstrap
    ${CMAKE_CURRENT_BINARY_DIR}/config.c
    bootstrap/src/org/pandalanguage/pandac/Alias.c
    bootstrap/src/org/pandalanguage/pandac/Annotations.c
    bootstrap/src/org/pandalanguage/pandac/Annotations/Expression.c
    bootstrap/src/org/pandalanguage/pandac/ASTNode.c
    bootstrap/src/org/pandalanguage/pandac/CCodeGenerator.c
    bootstrap/src/org/pandalanguage/pandac/CCodeGenerator/AutoContext.c
    bootstrap/src/org/pandalanguage/pandac/CCodeGenerator/ClassConstant.c
    bootstrap/src/org/pandalanguage/pandac/CCodeGenerator/EnclosingContext.c
    bootstrap/src/org/pandalanguage/pandac/CCodeGenerator/ExtraEffect.c
    bootstrap/src/org/pandalanguage/pandac/CCodeGenerator/MethodShim.c
    bootstrap/src/org/pandalanguage/pandac/CCodeGenerator/OpClass.c
    bootstrap/src/org/pandalanguage/pandac/ChoiceEntry.c
    bootstrap/src/org/pandalanguage/pandac/ClassDecl.c
    bootstrap/src/org/pandalanguage/pandac/ClassDecl/GenericParameter.c
    bootstrap/src/org/pandalanguage/pandac/ClassDecl/Kind.c
    bootstrap/src/org/pandalanguage/pandac/ClassDecl/Resolution.c
    bootstrap/src/org/pandalanguage/pandac/CodeGenerator.c
    bootstrap/src/org/pandalanguage/pandac/Compiler.c
    bootstrap/src/org/pandalanguage/pandac/Compiler/_Closure1.c
    bootstrap/src/org/pandalanguage/pandac/Compiler/AutoAtPreFlag.c
    bootstrap/src/org/pandalanguage/pandac/Compiler/AutoSymbolTable.c
    bootstrap/src/org/pandalanguage/pandac/Compiler/CompileTargetResult.c
    bootstrap/src/org/pandalanguage/pandac/Compiler/Error.c
    bootstrap/src/org/pandalanguage/pandac/Compiler/Resolution.c
    bootstrap/src/org/pandalanguage/pandac/Compiler/Settings.c
    bootstrap/src/org/pandalanguage/pandac/FieldDecl.c
    bootstrap/src/org/pandalanguage/pandac/FieldDecl/Kind.c
    bootstrap/src/org/pandalanguage/pandac/HCodeGenerator.c
    bootstrap/src/org/pandalanguage/pandac/HTMLProcessor.c
    bootstrap/src/org/pandalanguage/pandac/IRNode.c
    bootstrap/src/org/pandalanguage/pandac/LLVMCodeGenerator.c
    bootstrap/src/org/pandalanguage/pandac/LLVMCodeGenerator/AutoContext.c
    bootstrap/src/org/pandalanguage/pandac/LLVMCodeGenerator/ClassConstant.c
    bootstrap/src/org/pandalanguage/pandac/LLVMCodeGenerator/InlineContext.c
    bootstrap/src/org/pandalanguage/pandac/LLVMCodeGenerator/EnclosingContext.c
    bootstrap/src/org/pandalanguage/pandac/LLVMCodeGenerator/ExtraEffect.c
    bootstrap/src/org/pandalanguage/pandac/LLVMCodeGenerator/MethodShim.c
    bootstrap/src/org/pandalanguage/pandac/Main.c
    bootstrap/src/org/pandalanguage/pandac/Main/Arguments.c
    bootstrap/src/org/pandalanguage/pandac/Main/Format.c
    bootstrap/src/org/pandalanguage/pandac/MethodDecl.c
    bootstrap/src/org/pandalanguage/pandac/MethodDecl/Kind.c
    bootstrap/src/org/pandalanguage/pandac/MethodDecl/Parameter.c
    bootstrap/src/org/pandalanguage/pandac/Methods.c
    bootstrap/src/org/pandalanguage/pandac/MethodRef.c
    bootstrap/src/org/pandalanguage/pandac/Pair.c
    bootstrap/src/org/pandalanguage/pandac/Position.c
    bootstrap/src/org/pandalanguage/pandac/Scanner.c
    bootstrap/src/org/pandalanguage/pandac/Symbol.c
    bootstrap/src/org/pandalanguage/pandac/Symbol/Kind.c
    bootstrap/src/org/pandalanguage/pandac/SymbolTable.c
    bootstrap/src/org/pandalanguage/pandac/Type.c
    bootstrap/src/org/pandalanguage/pandac/Type/Kind.c
    bootstrap/src/org/pandalanguage/pandac/Variable.c
    bootstrap/src/org/pandalanguage/pandac/Variable/Kind.c
    bootstrap/src/org/pandalanguage/pandac/Variable/Storage.c
    bootstrap/src/org/pandalanguage/pandac/pandadoc/LinkResolver.c
    bootstrap/src/org/pandalanguage/pandac/pandadoc/Markdown.c
    bootstrap/src/org/pandalanguage/pandac/pandadoc/Markdown/CodeReplacer.c
    bootstrap/src/org/pandalanguage/pandac/pandadoc/Markdown/HTMLToken.c
    bootstrap/src/org/pandalanguage/pandac/pandadoc/Markdown/LinkDefinition.c
    bootstrap/src/org/pandalanguage/pandac/pandadoc/PandaDoc.c
    bootstrap/src/org/pandalanguage/pandac/pandadoc/PandaDoc/XMLWriter.c
    bootstrap/src/org/pandalanguage/pandac/pandadoc/Protector.c
    bootstrap/src/org/pandalanguage/pandac/parser/Parser.c
    bootstrap/src/org/pandalanguage/pandac/parser/Parser/AutoSyntaxHighlight.c
    bootstrap/src/org/pandalanguage/pandac/parser/Lexer.c
    bootstrap/src/org/pandalanguage/pandac/parser/SyntaxHighlighter.c
    bootstrap/src/org/pandalanguage/pandac/parser/SyntaxHighlighter/Kind.c
    bootstrap/src/org/pandalanguage/pandac/parser/Token.c
    bootstrap/src/org/pandalanguage/pandac/parser/Token/Kind.c
    bootstrap/src/org/pandalanguage/plex/runtime/DFA.c
    bootstrap/src/org/pandalanguage/plex/runtime/RawToken.c
    bootstrap/src/org/pandalanguage/regex/RegexParser.c
    bootstrap/src/org/pandalanguage/regex/RegexLexer.c
    bootstrap/src/org/pandalanguage/regex/RegexToken.c
    bootstrap/src/org/pandalanguage/regex/RegexToken/Kind.c
)
target_link_libraries(bootstrap ${SYSTEM_LIBRARIES} c_panda ${ICU_LIBRARIES})
set_target_properties(bootstrap PROPERTIES LINKER_LANGUAGE CXX)

function(compile_panda_sources out_var)
    set(result)
    foreach(input ${ARGN})
        get_filename_component(outputDir ${input} DIRECTORY)
        get_filename_component(outputName ${input} NAME_WE)
        set(output "${CMAKE_CURRENT_BINARY_DIR}/${outputDir}/${outputName}.o")
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
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/Array.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/Collection.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/CollectionView.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/CollectionWriter.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/HashMap.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/HashSet.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/IdentityMap.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/ImmutableArray.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/ImmutableHashMap.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/Iterable.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/Iterator.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/Key.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/List.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/ListView.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/ListWriter.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/Map.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/MapView.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/MapWriter.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/collections/Stack.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Bit.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Char8.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Char16.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Char32.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Class.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Comparable.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Equatable.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Formattable.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Immutable.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Int16.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Int32.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Int64.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Int8.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/UInt16.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/UInt32.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/UInt64.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/UInt8.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Matcher.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/MutableString.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Object.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Real32.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Real64.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/RegularExpression.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/String.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/System.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Value.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Weak.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/io/Console.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/io/File.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/io/IndentedOutputStream.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/io/InputStream.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/io/LineNumberInputStream.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/io/MemoryInputStream.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/io/MemoryOutputStream.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/io/OutputStream.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/io/PushbackInputStream.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/json/JSON.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/json/JSONParser.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/math/MersenneTwister.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/math/Random.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/math/XorShift128Plus.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/threads/Lock.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/threads/Notifier.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/threads/MessageQueue.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/threads/ScopedLock.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/threads/Thread.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/unsafe/UnsafeMessageQueue.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/pandalanguage/json/Lexer.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/pandalanguage/json/Position.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/pandalanguage/json/Token.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/pandalanguage/panda/IntBitIterator.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/pandalanguage/panda/Int8List.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/pandalanguage/panda/Int16List.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/pandalanguage/panda/Int32List.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/pandalanguage/panda/Int64List.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/pandalanguage/panda/UInt8List.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/pandalanguage/panda/UInt16List.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/pandalanguage/panda/UInt32List.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/pandalanguage/panda/UInt64List.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/pandalanguage/plex/runtime/DFA.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/org/pandalanguage/plex/runtime/RawToken.panda
)

set(core_source
    ${public_source}
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Method.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/MutableMethod.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/core/Panda.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/io/FileInputStream.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/panda/io/FileOutputStream.panda
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
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/bootstrap ${BOOTSTRAP_ARGS} -o writeInts
            ${CMAKE_CURRENT_SOURCE_DIR}/src/tools/WriteInts.panda
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
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/bootstrap ${BOOTSTRAP_ARGS} -o writeOperators
            ${CMAKE_CURRENT_SOURCE_DIR}/src/tools/WriteOperators.panda
    DEPENDS src/tools/WriteOperators.panda pandac
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
            src/parser/org/pandalanguage/json/Lexer.panda
            src/parser/org/pandalanguage/json/Token.panda
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
        add_custom_command(
            OUTPUT ${output}
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/bootstrap ${BOOTSTRAP_ARGS}
                    -i ${CMAKE_CURRENT_SOURCE_DIR}/src/parser -f o -o ${output} ${input}
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
)

add_executable(plex
    ${plex_objects}
)
target_link_libraries(plex panda ${SYSTEM_LIBRARIES} ${ICU_LIBRARIES})
set_target_properties(plex PROPERTIES LINKER_LANGUAGE CXX)

add_custom_command(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/org/pandalanguage/pandac/parser/Lexer.panda
           ${CMAKE_CURRENT_BINARY_DIR}/org/pandalanguage/pandac/parser/Token.panda
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/plex ${CMAKE_CURRENT_SOURCE_DIR}/src/parser/Panda.plex
            org.pandalanguage.pandac.parser.Token
            ${CMAKE_CURRENT_BINARY_DIR}/org/pandalanguage/pandac/parser/Token.panda
            org.pandalanguage.pandac.parser.Lexer
            ${CMAKE_CURRENT_BINARY_DIR}/org/pandalanguage/pandac/parser/Lexer.panda
            org.pandalanguage.pandac.Position
    DEPENDS plex src/parser/Panda.plex
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_command(
    OUTPUT src/parser/org/pandalanguage/json/Lexer.panda
           src/parser/org/pandalanguage/json/Token.panda
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/plex ${CMAKE_CURRENT_SOURCE_DIR}/src/parser/JSON.plex
            org.pandalanguage.json.Token
            ${CMAKE_CURRENT_SOURCE_DIR}/src/org/pandalanguage/json/Token.panda
            org.pandalanguage.json.Lexer
            ${CMAKE_CURRENT_SOURCE_DIR}/src/org/pandalanguage/json/Lexer.panda
            org.pandalanguage.json.Position
    DEPENDS plex src/parser/JSON.plex
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_command(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/org/pandalanguage/regex/RegexLexer.panda
           ${CMAKE_CURRENT_BINARY_DIR}/org/pandalanguage/regex/RegexToken.panda
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/plex ${CMAKE_CURRENT_SOURCE_DIR}/src/parser/Regex.plex
            org.pandalanguage.regex.RegexToken
            ${CMAKE_CURRENT_BINARY_DIR}/org/pandalanguage/regex/RegexToken.panda
            org.pandalanguage.regex.RegexLexer
            ${CMAKE_CURRENT_BINARY_DIR}/org/pandalanguage/regex/RegexLexer.panda
            org.pandalanguage.pandac.Position
    DEPENDS plex src/parser/Regex.plex
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

function(compile_pandac_sources out_var)
    set(result)
    foreach(input ${ARGN})
        get_filename_component(outputDir ${input} DIRECTORY)
        get_filename_component(output ${input} NAME_WE)
        set(output "${CMAKE_CURRENT_BINARY_DIR}/${outputDir}/${output}.o")
        add_custom_command(
            OUTPUT ${output}
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/bootstrap ${BOOTSTRAP_ARGS}
                    -i ${CMAKE_CURRENT_SOURCE_DIR}/src/parser
                    -i ${CMAKE_CURRENT_BINARY_DIR}
                    -i ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac
                    -f o -o ${output} ${input}
            DEPENDS bootstrap ${input}
                    ${CMAKE_CURRENT_BINARY_DIR}/org/pandalanguage/pandac/parser/Token.panda
            WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        )
        list(APPEND result ${output})
    endforeach()
    set(${out_var} "${result}" PARENT_SCOPE)
endfunction()

set(pandac_source
    ${CMAKE_CURRENT_BINARY_DIR}/org/pandalanguage/pandac/Config.panda
    ${CMAKE_CURRENT_BINARY_DIR}/org/pandalanguage/pandac/parser/Lexer.panda
    ${CMAKE_CURRENT_BINARY_DIR}/org/pandalanguage/pandac/parser/Token.panda
    ${CMAKE_CURRENT_BINARY_DIR}/org/pandalanguage/regex/RegexLexer.panda
    ${CMAKE_CURRENT_BINARY_DIR}/org/pandalanguage/regex/RegexToken.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/Alias.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/Annotations.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/ASTNode.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/CCodeGenerator.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/ChoiceEntry.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/ClassDecl.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/CodeGenerator.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/Compiler.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/FieldDecl.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/HCodeGenerator.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/HTMLProcessor.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/IRNode.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/LLVMCodeGenerator.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/MethodDecl.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/Methods.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/MethodRef.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/Pair.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/Position.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/Scanner.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/Symbol.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/SymbolTable.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/Type.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/Variable.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/pandadoc/LinkResolver.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/pandadoc/Markdown.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/parser/Parser.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/parser/SyntaxHighlighter.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/regex/RegexParser.panda
)

compile_pandac_sources(pandac_objects
    ${pandac_source}
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/Main.panda
)

add_executable(pandac
    ${pandac_objects}
)
target_link_libraries(pandac panda ${SYSTEM_LIBRARIES} ${ICU_LIBRARIES})
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
        add_custom_command(
            OUTPUT ${output}
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/pandac -O ${OPTIMIZATION} -S ${SAFETY} -f h
                    -i ${CMAKE_CURRENT_SOURCE_DIR}/src -i ${pandacInc} -i ${parserInc}
                    -i ${buildInc} -o ${CMAKE_CURRENT_BINARY_DIR}/updated_bootstrap/include ${input}
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
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/Main.panda
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
        get_filename_component(outputDir ${input} DIRECTORY)
        get_filename_component(outputName ${input} NAME_WE)
        set(output "${CMAKE_CURRENT_BINARY_DIR}/updated_bootstrap/src/${outputDir}/${outputName}.c")
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
        add_custom_command(
            OUTPUT ${output}
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/pandac -O ${OPTIMIZATION} -S ${SAFETY} -f c
                    -i ${CMAKE_CURRENT_SOURCE_DIR}/src -i ${pandacInc} -i ${parserInc}
                    -i ${buildInc} -o ${CMAKE_CURRENT_BINARY_DIR}/updated_bootstrap/src ${input}
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
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/Main.panda
)

add_custom_target(update_bootstrap
    DEPENDS ${updated_pandac_headers} ${updated_pandac_c}
)

add_custom_command(
    TARGET update_bootstrap POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E remove_directory ${CMAKE_CURRENT_SOURCE_DIR}/bootstrap
    COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_CURRENT_BINARY_DIR}/updated_bootstrap
            ${CMAKE_CURRENT_SOURCE_DIR}/bootstrap
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/src/c/panda_c.h
            ${CMAKE_CURRENT_SOURCE_DIR}/bootstrap/include
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/src/c/pandalib.c
            ${CMAKE_CURRENT_SOURCE_DIR}/bootstrap/src
)

add_custom_target(pandarun
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/pandac -O ${OPTIMIZATION} -S ${SAFETY}
            ${CMAKE_CURRENT_SOURCE_DIR}/src/tools/PandaRun.panda
            -o ${CMAKE_CURRENT_BINARY_DIR}/pandarun
)

add_custom_command(
    OUTPUT TestRunner
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/pandac -O ${OPTIMIZATION} -S ${SAFETY}
            -i ${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/test/TestRunner.panda
            -o ${CMAKE_CURRENT_BINARY_DIR}/TestRunner
    DEPENDS pandac test/TestRunner.panda
)

add_custom_target(run_tests
    DEPENDS TestRunner
)

add_custom_command(
    TARGET run_tests POST_BUILD
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/TestRunner ${CMAKE_CURRENT_SOURCE_DIR}
            ${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_C_COMPILER} ${ICU_LIBRARIES}
)

compile_pandac_sources(pandamd_objects
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/pandadoc/PandaMDMain.panda
    ${pandac_source}
)

add_executable(pandamd
    ${pandamd_objects}
)
target_link_libraries(pandamd panda ${SYSTEM_LIBRARIES} ${ICU_LIBRARIES})
set_target_properties(pandamd PROPERTIES LINKER_LANGUAGE CXX)

function(run_markdown out_var)
    set(result)
    foreach(input ${ARGN})
        set(input "${CMAKE_CURRENT_SOURCE_DIR}/${input}")
        get_filename_component(output ${input} NAME_WE)
        set(output "${CMAKE_CURRENT_BINARY_DIR}/docs/${output}.html")
        add_custom_command(
            OUTPUT ${output}
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/pandamd ${input} ${output}
            DEPENDS pandamd ${input}
        )
        list(APPEND result ${output})
    endforeach()
    set(${out_var} "${result}" PARENT_SCOPE)
endfunction()

run_markdown(markdown_html
    docs/annotations.md
    docs/arrayLiterals.md
    docs/bareCode.md
    docs/classes.md
    docs/comments.md
    docs/constants.md
    docs/defines.md
    docs/documentationComments.md
    docs/errorHandling.md
    docs/expressions.md
    docs/functions.md
    docs/gettingStarted.md
    docs/immutability.md
    docs/index.md
    docs/initMethods.md
    docs/inlineMethods.md
    docs/innerMethods.md
    docs/interfaces.md
    docs/keywords.md
    docs/main.md
    docs/memoryManagement.md
    docs/methods.md
    docs/methodReferences.md
    docs/null.md
    docs/operators.md
    docs/operatorOverloading.md
    docs/overview.md
    docs/packages.md
    docs/programs.md
    docs/properties.md
    docs/self.md
    docs/super.md
    docs/statements.md
    docs/stringInterpolation.md
    docs/tuples.md
    docs/types.md
    docs/values.md
    docs/variablesAndConstants.md
    docs/variables.md
    docs/weakReferences.md
)

compile_pandac_sources(pandadoc_objects
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/pandadoc/PandaDoc.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/pandadoc/PandaDocMain.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/pandadoc/TableOfContentsNode.panda
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pandac/org/pandalanguage/pandac/pandadoc/XMLWriter.panda
    ${pandac_source}
)

add_executable(pandadoc
    ${pandadoc_objects}
)
target_link_libraries(pandadoc panda ${SYSTEM_LIBRARIES} ${ICU_LIBRARIES})
set_target_properties(pandadoc PROPERTIES LINKER_LANGUAGE CXX)

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
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/pandac -f html ${input} -o ${output} --root ../${root}
            DEPENDS ${input} pandac
        )
        list(APPEND result ${output})
    endforeach()
    set(${out_var} "${result}" PARENT_SCOPE)
endfunction()

syntax_highlight(panda_source_html
    ${public_source}
)

add_custom_target(docs
    COMMAND pandadoc ${CMAKE_CURRENT_SOURCE_DIR}/src/panda ${CMAKE_CURRENT_BINARY_DIR}/docs api
    DEPENDS pandadoc ${public_source} ${markdown_html} ${panda_source_html}
)
