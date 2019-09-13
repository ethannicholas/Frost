project(frost)
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

file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/frostc/Config.frost"
    "package org.frostlang.frostc\n"
    "class Config {\n"
    "@class function frostSourceDir():String { return \"${CMAKE_SOURCE_DIR}/src\" }\n"
    "@class function frostLibDir():String { return \"${CMAKE_CURRENT_BINARY_DIR}\" }\n"
    "@class function llvmDir():String { return \"${LLVM_ROOT_DIR}\" }\n"
    "@class function llvmTriple():String { return \"${LLVM_HOST_TARGET}\" }\n"
    "@class function icuLibraries():String { return \"${ICU_LIBRARIES}\" }\n"
    "}")

file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/config.c"
    "#include <string.h>\n"
    "#include \"frost/core/String.h\"\n"
    "frost$core$String* frostNewString(const char* s, int length)\n;"
    "static frost$core$String* configString(const char* s) { return frostNewString(s, strlen(s)); }"
    "frost$core$String* org$frostlang$frostc$Config$frostSourceDir$R$frost$core$String() { return configString(\"${CMAKE_SOURCE_DIR}/src\"); }\n"
    "frost$core$String* org$frostlang$frostc$Config$frostLibDir$R$frost$core$String() { return configString(\"${CMAKE_CURRENT_BINARY_DIR}\"); }\n"
    "frost$core$String* org$frostlang$frostc$Config$llvmDir$R$frost$core$String() { return configString(\"${LLVM_ROOT_DIR}\"); }\n"
    "frost$core$String* org$frostlang$frostc$Config$llvmTriple$R$frost$core$String() { return configString(\"${LLVM_HOST_TARGET}\"); }\n"
    "frost$core$String* org$frostlang$frostc$Config$icuLibraries$R$frost$core$String() { return configString(\"${ICU_LIBRARIES}\"); }\n"
)

set(BOOTSTRAP_ARGS "-O" ${OPTIMIZATION} "-S" ${SAFETY})
include_directories(
    bootstrap/include
    ${ICU_INCLUDE_DIRS}
)

file(MAKE_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/regex")

file(MAKE_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/docs")

add_library(c_frost
    bootstrap/src/org/frostlang/frostc/CCodeGenerator.c
    bootstrap/src/org/frostlang/frostc/CCodeGenerator/_Closure2.c
    bootstrap/src/org/frostlang/frostc/Scanner.c
    bootstrap/src/org/frostlang/frostc/ClassDecl.c
    bootstrap/src/org/frostlang/frostc/LLVMCodeGenerator/OpClass.c
    bootstrap/src/org/frostlang/frostc/LLVMCodeGenerator/MethodShim.c
    bootstrap/src/org/frostlang/frostc/LLVMCodeGenerator/ClassConstant.c
    bootstrap/src/org/frostlang/frostc/HTMLProcessor.c
    bootstrap/src/org/frostlang/frostc/CodeGenerator.c
    bootstrap/src/org/frostlang/frostc/MethodDecl.c
    bootstrap/src/org/frostlang/frostc/Pair.c
    bootstrap/src/org/frostlang/frostc/Variable/Storage.c
    bootstrap/src/org/frostlang/frostc/Variable/Kind.c
    bootstrap/src/org/frostlang/frostc/pass/MergeBlocks.c
    bootstrap/src/org/frostlang/frostc/pass/RemoveUnreachableBlocks.c
    bootstrap/src/org/frostlang/frostc/pass/Analyzer.c
    bootstrap/src/org/frostlang/frostc/pass/Analyzer/DataFlowValue.c
    bootstrap/src/org/frostlang/frostc/pass/Analyzer/State.c
    bootstrap/src/org/frostlang/frostc/pass/Analyzer/BlockExit.c
    bootstrap/src/org/frostlang/frostc/pass/RemoveAsserts.c
    bootstrap/src/org/frostlang/frostc/IR/Block.c
    bootstrap/src/org/frostlang/frostc/IR/Statement/ID.c
    bootstrap/src/org/frostlang/frostc/IR/Value.c
    bootstrap/src/org/frostlang/frostc/IR/Statement.c
    bootstrap/src/org/frostlang/frostc/IR/Block/ID.c
    bootstrap/src/org/frostlang/frostc/HCodeGenerator.c
    bootstrap/src/org/frostlang/frostc/Methods.c
    bootstrap/src/org/frostlang/frostc/statement/While.c
    bootstrap/src/org/frostlang/frostc/statement/Match.c
    bootstrap/src/org/frostlang/frostc/statement/Loop.c
    bootstrap/src/org/frostlang/frostc/statement/Break.c
    bootstrap/src/org/frostlang/frostc/statement/Continue.c
    bootstrap/src/org/frostlang/frostc/statement/InnerMethod.c
    bootstrap/src/org/frostlang/frostc/statement/If.c
    bootstrap/src/org/frostlang/frostc/statement/Try.c
    bootstrap/src/org/frostlang/frostc/statement/Assert.c
    bootstrap/src/org/frostlang/frostc/statement/Do.c
    bootstrap/src/org/frostlang/frostc/statement/Assignment.c
    bootstrap/src/org/frostlang/frostc/statement/For.c
    bootstrap/src/org/frostlang/frostc/statement/Var.c
    bootstrap/src/org/frostlang/frostc/statement/Return.c
    bootstrap/src/org/frostlang/frostc/ASTNode/_Closure2.c
    bootstrap/src/org/frostlang/frostc/ASTNode/_Closure4.c
    bootstrap/src/org/frostlang/frostc/MethodRef.c
    bootstrap/src/org/frostlang/frostc/Symbol/Kind.c
    bootstrap/src/org/frostlang/frostc/Position.c
    bootstrap/src/org/frostlang/frostc/parser/Token/Kind.c
    bootstrap/src/org/frostlang/frostc/parser/SyntaxHighlighter/Kind.c
    bootstrap/src/org/frostlang/frostc/parser/SyntaxHighlighter.c
    bootstrap/src/org/frostlang/frostc/parser/Lexer.c
    bootstrap/src/org/frostlang/frostc/parser/Token.c
    bootstrap/src/org/frostlang/frostc/parser/Parser/AutoSyntaxHighlight.c
    bootstrap/src/org/frostlang/frostc/parser/Parser.c
    bootstrap/src/org/frostlang/frostc/Annotations/Expression.c
    bootstrap/src/org/frostlang/frostc/Annotations/Flag.c
    bootstrap/src/org/frostlang/frostc/lvalue/IndexLValue.c
    bootstrap/src/org/frostlang/frostc/lvalue/LValue.c
    bootstrap/src/org/frostlang/frostc/lvalue/VariableLValue.c
    bootstrap/src/org/frostlang/frostc/lvalue/ChoiceFieldLValue.c
    bootstrap/src/org/frostlang/frostc/lvalue/FieldLValue.c
    bootstrap/src/org/frostlang/frostc/Type/Kind.c
    bootstrap/src/org/frostlang/frostc/FixedArray/FixedArrayIterator.c
    bootstrap/src/org/frostlang/frostc/Main.c
    bootstrap/src/org/frostlang/frostc/Type.c
    bootstrap/src/org/frostlang/frostc/Symbol.c
    bootstrap/src/org/frostlang/frostc/Config.c
    bootstrap/src/org/frostlang/frostc/Alias.c
    bootstrap/src/org/frostlang/frostc/Compiler.c
    bootstrap/src/org/frostlang/frostc/ClassDecl/GenericParameter.c
    bootstrap/src/org/frostlang/frostc/ClassDecl/Resolution.c
    bootstrap/src/org/frostlang/frostc/ClassDecl/Kind.c
    bootstrap/src/org/frostlang/frostc/StubCodeGenerator.c
    bootstrap/src/org/frostlang/frostc/Annotations.c
    bootstrap/src/org/frostlang/frostc/FieldDecl/Kind.c
    bootstrap/src/org/frostlang/frostc/ChoiceCase.c
    bootstrap/src/org/frostlang/frostc/CCodeGenerator/EnclosingContext.c
    bootstrap/src/org/frostlang/frostc/CCodeGenerator/AutoContext.c
    bootstrap/src/org/frostlang/frostc/CCodeGenerator/OpClass.c
    bootstrap/src/org/frostlang/frostc/CCodeGenerator/MethodShim.c
    bootstrap/src/org/frostlang/frostc/CCodeGenerator/ClassConstant.c
    bootstrap/src/org/frostlang/frostc/MethodDecl/GenericParameter.c
    bootstrap/src/org/frostlang/frostc/MethodDecl/Parameter.c
    bootstrap/src/org/frostlang/frostc/MethodDecl/Kind.c
    bootstrap/src/org/frostlang/frostc/FieldDecl.c
    bootstrap/src/org/frostlang/frostc/Bench.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure20.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure24.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/LinkDefinition.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure30.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/CodeReplacer.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure12.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure18.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure2.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure6.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure16.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure22.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure28.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure26.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure9.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure32.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/HTMLToken.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure14.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure4.c
    bootstrap/src/org/frostlang/frostc/frostdoc/DummyCodeGenerator.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Protector.c
    bootstrap/src/org/frostlang/frostc/frostdoc/LinkResolver.c
    bootstrap/src/org/frostlang/frostc/IR.c
    bootstrap/src/org/frostlang/frostc/LinkedList.c
    bootstrap/src/org/frostlang/frostc/LinkedList/LinkedListIterator.c
    bootstrap/src/org/frostlang/frostc/LinkedList/Node.c
    bootstrap/src/org/frostlang/frostc/expression/Or.c
    bootstrap/src/org/frostlang/frostc/expression/Unary/Operator.c
    bootstrap/src/org/frostlang/frostc/expression/Dot.c
    bootstrap/src/org/frostlang/frostc/expression/Tuple.c
    bootstrap/src/org/frostlang/frostc/expression/AtPre.c
    bootstrap/src/org/frostlang/frostc/expression/Tuple/_Closure2.c
    bootstrap/src/org/frostlang/frostc/expression/Tuple/_Closure4.c
    bootstrap/src/org/frostlang/frostc/expression/ArrayLiteral.c
    bootstrap/src/org/frostlang/frostc/expression/Closure.c
    bootstrap/src/org/frostlang/frostc/expression/Binary.c
    bootstrap/src/org/frostlang/frostc/expression/IntLiteral.c
    bootstrap/src/org/frostlang/frostc/expression/Unary.c
    bootstrap/src/org/frostlang/frostc/expression/And.c
    bootstrap/src/org/frostlang/frostc/expression/AtReturn.c
    bootstrap/src/org/frostlang/frostc/expression/Binary/_Closure2.c
    bootstrap/src/org/frostlang/frostc/expression/Binary/Operator.c
    bootstrap/src/org/frostlang/frostc/expression/Call.c
    bootstrap/src/org/frostlang/frostc/expression/Call/_Closure2.c
    bootstrap/src/org/frostlang/frostc/expression/Call/ImplicationsResult.c
    bootstrap/src/org/frostlang/frostc/expression/Identifier.c
    bootstrap/src/org/frostlang/frostc/ASTNode.c
    bootstrap/src/org/frostlang/frostc/Main/Format.c
    bootstrap/src/org/frostlang/frostc/Main/Arguments.c
    bootstrap/src/org/frostlang/frostc/LLVMCodeGenerator.c
    bootstrap/src/org/frostlang/frostc/SymbolTable.c
    bootstrap/src/org/frostlang/frostc/StubCodeGenerator/_Closure12.c
    bootstrap/src/org/frostlang/frostc/StubCodeGenerator/_Closure8.c
    bootstrap/src/org/frostlang/frostc/StubCodeGenerator/_Closure2.c
    bootstrap/src/org/frostlang/frostc/StubCodeGenerator/_Closure6.c
    bootstrap/src/org/frostlang/frostc/StubCodeGenerator/_Closure10.c
    bootstrap/src/org/frostlang/frostc/StubCodeGenerator/_Closure4.c
    bootstrap/src/org/frostlang/frostc/Compiler/_Closure11.c
    bootstrap/src/org/frostlang/frostc/Compiler/EnclosingContext.c
    bootstrap/src/org/frostlang/frostc/Compiler/Target.c
    bootstrap/src/org/frostlang/frostc/Compiler/AutoContext.c
    bootstrap/src/org/frostlang/frostc/Compiler/_Closure15.c
    bootstrap/src/org/frostlang/frostc/Compiler/CoercionKey.c
    bootstrap/src/org/frostlang/frostc/Compiler/AutoScope.c
    bootstrap/src/org/frostlang/frostc/Compiler/TypeContext.c
    bootstrap/src/org/frostlang/frostc/Compiler/Resolution.c
    bootstrap/src/org/frostlang/frostc/Compiler/AutoAtPreFlag.c
    bootstrap/src/org/frostlang/frostc/Compiler/_Closure2.c
    bootstrap/src/org/frostlang/frostc/Compiler/Capture.c
    bootstrap/src/org/frostlang/frostc/Compiler/InlineReturn.c
    bootstrap/src/org/frostlang/frostc/Compiler/_Closure13.c
    bootstrap/src/org/frostlang/frostc/Compiler/AutoUnrefs.c
    bootstrap/src/org/frostlang/frostc/Compiler/Settings.c
    bootstrap/src/org/frostlang/frostc/Compiler/_Closure9.c
    bootstrap/src/org/frostlang/frostc/Compiler/_Closure17.c
    bootstrap/src/org/frostlang/frostc/Compiler/Message.c
    bootstrap/src/org/frostlang/frostc/Compiler/BinaryKey.c
    bootstrap/src/org/frostlang/frostc/FixedArray.c
    bootstrap/src/org/frostlang/frostc/Variable.c
    bootstrap/src/org/frostlang/frost/UInt8List.c
    bootstrap/src/org/frostlang/frost/UInt16List.c
    bootstrap/src/org/frostlang/frost/Int32List.c
    bootstrap/src/org/frostlang/frost/Int16List.c
    bootstrap/src/org/frostlang/frost/UInt32List.c
    bootstrap/src/org/frostlang/frost/UIntList.c
    bootstrap/src/org/frostlang/frost/Int8List.c
    bootstrap/src/org/frostlang/frost/IntList.c
    bootstrap/src/org/frostlang/frost/Int64List.c
    bootstrap/src/org/frostlang/frost/IntBitIterator.c
    bootstrap/src/org/frostlang/frost/UInt64List.c
    bootstrap/src/org/frostlang/regex/RegexToken/Kind.c
    bootstrap/src/org/frostlang/regex/RegexParser.c
    bootstrap/src/org/frostlang/regex/RegexLexer.c
    bootstrap/src/org/frostlang/regex/RegexToken.c
    bootstrap/src/org/frostlang/json/Token/Kind.c
    bootstrap/src/org/frostlang/json/Lexer.c
    bootstrap/src/org/frostlang/json/Token.c
    bootstrap/src/org/frostlang/json/Position.c
    bootstrap/src/org/frostlang/plex/runtime/RawToken.c
    bootstrap/src/org/frostlang/plex/runtime/DFA.c
    bootstrap/src/frost/core/EquatableTuple8.c
    bootstrap/src/frost/core/Weak.c
    bootstrap/src/frost/core/EquatableTuple2.c
    bootstrap/src/frost/core/KeyTuple14.c
    bootstrap/src/frost/core/Tuple16.c
    bootstrap/src/frost/core/Tuple4.c
    bootstrap/src/frost/core/MutableMethod.c
    bootstrap/src/frost/core/UInt16.c
    bootstrap/src/frost/core/Equatable.c
    bootstrap/src/frost/core/EquatableTuple6.c
    bootstrap/src/frost/core/KeyTuple10.c
    bootstrap/src/frost/core/Tuple12.c
    bootstrap/src/frost/core/Immutable.c
    bootstrap/src/frost/core/Comparable.c
    bootstrap/src/frost/core/Int32.c
    bootstrap/src/frost/core/EquatableTuple11.c
    bootstrap/src/frost/core/UInt.c
    bootstrap/src/frost/core/Object.c
    bootstrap/src/frost/core/KeyTuple5.c
    bootstrap/src/frost/core/Class.c
    bootstrap/src/frost/core/EquatableTuple15.c
    bootstrap/src/frost/core/Range.LTfrost/core/UInt8.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/UInt16.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/Int64.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/Int32.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/Int.Q.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/Int.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/UInt32.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/Int16.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/Int8.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/UInt64.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/MutableString/Index.Q.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/MutableString/Index.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/String/Index.Q.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/String/Index.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/UInt.GT.c
    bootstrap/src/frost/core/Tuple7.c
    bootstrap/src/frost/core/Tuple15.c
    bootstrap/src/frost/core/Tuple11.c
    bootstrap/src/frost/core/EquatableTuple5.c
    bootstrap/src/frost/core/KeyTuple13.c
    bootstrap/src/frost/core/System.c
    bootstrap/src/frost/core/Real64.c
    bootstrap/src/frost/core/Tuple9.c
    bootstrap/src/frost/core/Tuple3.c
    bootstrap/src/frost/core/Int8.c
    bootstrap/src/frost/core/KeyTuple6.c
    bootstrap/src/frost/core/String.c
    bootstrap/src/frost/core/UInt64.c
    bootstrap/src/frost/core/EquatableTuple12.c
    bootstrap/src/frost/core/UInt8.c
    bootstrap/src/frost/core/Char32.c
    bootstrap/src/frost/core/EquatableTuple16.c
    bootstrap/src/frost/core/KeyTuple2.c
    bootstrap/src/frost/core/KeyTuple8.c
    bootstrap/src/frost/core/Tuple6.c
    bootstrap/src/frost/core/Tuple14.c
    bootstrap/src/frost/core/Frost.c
    bootstrap/src/frost/core/KeyTuple16.c
    bootstrap/src/frost/core/System/Process.c
    bootstrap/src/frost/core/Tuple10.c
    bootstrap/src/frost/core/EquatableTuple4.c
    bootstrap/src/frost/core/KeyTuple12.c
    bootstrap/src/frost/core/Tuple2.c
    bootstrap/src/frost/core/Error.c
    bootstrap/src/frost/core/Maybe.c
    bootstrap/src/frost/core/Formattable.c
    bootstrap/src/frost/core/Tuple8.c
    bootstrap/src/frost/core/KeyTuple7.c
    bootstrap/src/frost/core/Matcher.c
    bootstrap/src/frost/core/Int64.c
    bootstrap/src/frost/core/EquatableTuple13.c
    bootstrap/src/frost/core/MutableString/Index.c
    bootstrap/src/frost/core/MutableString.c
    bootstrap/src/frost/core/KeyTuple9.c
    bootstrap/src/frost/core/Char16.c
    bootstrap/src/frost/core/KeyTuple3.c
    bootstrap/src/frost/core/EquatableTuple3.c
    bootstrap/src/frost/core/KeyTuple15.c
    bootstrap/src/frost/core/Bit.c
    bootstrap/src/frost/core/EquatableTuple9.c
    bootstrap/src/frost/core/String/Match.c
    bootstrap/src/frost/core/String/MatchIterator.c
    bootstrap/src/frost/core/String/RegexMatchIterator.c
    bootstrap/src/frost/core/String/UTF32Iterator.c
    bootstrap/src/frost/core/String/Index.c
    bootstrap/src/frost/core/String/UTF16Iterator.c
    bootstrap/src/frost/core/String/UTF8List.c
    bootstrap/src/frost/core/String/UTF8Iterator.c
    bootstrap/src/frost/core/SteppedRange.LTfrost/core/Int16.Cfrost/core/Int16.GT.c
    bootstrap/src/frost/core/SteppedRange.LTfrost/core/Int32.Cfrost/core/Int32.GT.c
    bootstrap/src/frost/core/SteppedRange.LTfrost/core/UInt64.Cfrost/core/UInt64.GT.c
    bootstrap/src/frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.c
    bootstrap/src/frost/core/SteppedRange.LTfrost/core/UInt32.Cfrost/core/UInt32.GT.c
    bootstrap/src/frost/core/SteppedRange.LTfrost/core/UInt16.Cfrost/core/UInt16.GT.c
    bootstrap/src/frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.c
    bootstrap/src/frost/core/SteppedRange.LTfrost/core/String/Index.Q.Cfrost/core/Int.GT.c
    bootstrap/src/frost/core/SteppedRange.LTfrost/core/UInt.Cfrost/core/UInt.GT.c
    bootstrap/src/frost/core/SteppedRange.LTfrost/core/Int.Q.Cfrost/core/Int.GT.c
    bootstrap/src/frost/core/SteppedRange.LTfrost/core/Int8.Cfrost/core/Int8.GT.c
    bootstrap/src/frost/core/SteppedRange.LTfrost/core/UInt8.Cfrost/core/UInt8.GT.c
    bootstrap/src/frost/core/RegularExpression.c
    bootstrap/src/frost/core/Tuple5.c
    bootstrap/src/frost/core/Method.c
    bootstrap/src/frost/core/Int16.c
    bootstrap/src/frost/core/UInt32.c
    bootstrap/src/frost/core/EquatableTuple7.c
    bootstrap/src/frost/core/KeyTuple11.c
    bootstrap/src/frost/core/Char8.c
    bootstrap/src/frost/core/Tuple13.c
    bootstrap/src/frost/core/EquatableTuple10.c
    bootstrap/src/frost/core/Real32.c
    bootstrap/src/frost/core/Int.c
    bootstrap/src/frost/core/Value.c
    bootstrap/src/frost/core/KeyTuple4.c
    bootstrap/src/frost/core/EquatableTuple14.c
    bootstrap/src/frost/io/MemoryInputStream.c
    bootstrap/src/frost/io/InputStream.c
    bootstrap/src/frost/io/PushbackInputStream.c
    bootstrap/src/frost/io/IndentedOutputStream.c
    bootstrap/src/frost/io/MemoryOutputStream.c
    bootstrap/src/frost/io/LineNumberInputStream.c
    bootstrap/src/frost/io/FileInputStream.c
    bootstrap/src/frost/io/Console.c
    bootstrap/src/frost/io/FileOutputStream.c
    bootstrap/src/frost/io/OutputStream.c
    bootstrap/src/frost/io/InputStream/LineIterator.c
    bootstrap/src/frost/io/ByteOrder.c
    bootstrap/src/frost/io/File.c
    bootstrap/src/frost/math/Random.c
    bootstrap/src/frost/math/XorShift128Plus.c
    bootstrap/src/frost/json/JSON.c
    bootstrap/src/frost/json/JSON/PathKey.c
    bootstrap/src/frost/json/JSONParser.c
    bootstrap/src/frost/threads/Thread.c
    bootstrap/src/frost/threads/MessageQueue.c
    bootstrap/src/frost/threads/ScopedLock.c
    bootstrap/src/frost/threads/Notifier.c
    bootstrap/src/frost/threads/MessageQueue/Message.c
    bootstrap/src/frost/threads/Lock.c
    bootstrap/src/frost/unsafe/UnsafeMessageQueue.c
    bootstrap/src/frost/unsafe/UnsafeMessageQueue/Message.c
    bootstrap/src/frost/collections/ImmutableArray/ImmutableArrayIterator.c
    bootstrap/src/frost/collections/ListView.c
    bootstrap/src/frost/collections/List.c
    bootstrap/src/frost/collections/IdentityMap/EntryIterator.c
    bootstrap/src/frost/collections/IdentityMap/Entry.c
    bootstrap/src/frost/collections/MapWriter.c
    bootstrap/src/frost/collections/MergeSort.c
    bootstrap/src/frost/collections/Array.c
    bootstrap/src/frost/collections/Stack.c
    bootstrap/src/frost/collections/HashSet.c
    bootstrap/src/frost/collections/SpecializedArray.LTorg/frostlang/frostc/parser/Token.GT.c
    bootstrap/src/frost/collections/SpecializedArray.LTorg/frostlang/regex/RegexToken.GT.c
    bootstrap/src/frost/collections/MapView.c
    bootstrap/src/frost/collections/CollectionWriter.c
    bootstrap/src/frost/collections/Collection.c
    bootstrap/src/frost/collections/ImmutableArray.c
    bootstrap/src/frost/collections/Iterable.c
    bootstrap/src/frost/collections/Iterator.c
    bootstrap/src/frost/collections/ListWriter.c
    bootstrap/src/frost/collections/HashMap/EntryIterator.c
    bootstrap/src/frost/collections/HashMap/Entry.c
    bootstrap/src/frost/collections/Iterator/MapIterator.c
    bootstrap/src/frost/collections/Iterator/FilterIterator.c
    bootstrap/src/frost/collections/Iterator/EnumerationIterator.c
    bootstrap/src/frost/collections/Iterator/RangeIterator.c
    bootstrap/src/frost/collections/ListView/CombinationIterator.c
    bootstrap/src/frost/collections/ListView/PermutationIterator.c
    bootstrap/src/frost/collections/ListView/PowerSetIterator.c
    bootstrap/src/frost/collections/ListView/ListIterator.c
    bootstrap/src/frost/collections/CollectionView.c
    bootstrap/src/frost/collections/Map.c
    bootstrap/src/frost/collections/IdentityMap.c
    bootstrap/src/frost/collections/IdentitySet.c
    bootstrap/src/frost/collections/IdentitySet/_Closure2.c
    bootstrap/src/frost/collections/Stack/StackIterator.c
    bootstrap/src/frost/collections/HashKey.c
    bootstrap/src/frost/collections/HashMap.c
    bootstrap/src/frost/time/Timer.c
    bootstrap/src/frostlib.c
)

add_executable(bootstrap
    ${CMAKE_CURRENT_BINARY_DIR}/config.c
    bootstrap/src/org/frostlang/json/Lexer.c
    bootstrap/src/org/frostlang/json/Position.c
    bootstrap/src/org/frostlang/json/Token.c
    bootstrap/src/org/frostlang/json/Token/Kind.c
    bootstrap/src/org/frostlang/frost/Int16List.c
    bootstrap/src/org/frostlang/frost/Int32List.c
    bootstrap/src/org/frostlang/frost/Int64List.c
    bootstrap/src/org/frostlang/frost/Int8List.c
    bootstrap/src/org/frostlang/frost/IntBitIterator.c
    bootstrap/src/org/frostlang/frost/UInt16List.c
    bootstrap/src/org/frostlang/frost/UInt32List.c
    bootstrap/src/org/frostlang/frost/UInt64List.c
    bootstrap/src/org/frostlang/frost/UInt8List.c
    bootstrap/src/org/frostlang/frostc/Alias.c
    bootstrap/src/org/frostlang/frostc/Annotations.c
    bootstrap/src/org/frostlang/frostc/Annotations/Expression.c
    bootstrap/src/org/frostlang/frostc/Annotations/Flag.c
    bootstrap/src/org/frostlang/frostc/ASTNode.c
    bootstrap/src/org/frostlang/frostc/ASTNode/_Closure2.c
    bootstrap/src/org/frostlang/frostc/ASTNode/_Closure4.c
    bootstrap/src/org/frostlang/frostc/CCodeGenerator.c
    bootstrap/src/org/frostlang/frostc/CCodeGenerator/AutoContext.c
    bootstrap/src/org/frostlang/frostc/CCodeGenerator/ClassConstant.c
    bootstrap/src/org/frostlang/frostc/CCodeGenerator/EnclosingContext.c
    bootstrap/src/org/frostlang/frostc/CCodeGenerator/MethodShim.c
    bootstrap/src/org/frostlang/frostc/CCodeGenerator/OpClass.c
    bootstrap/src/org/frostlang/frostc/ChoiceCase.c
    bootstrap/src/org/frostlang/frostc/ClassDecl.c
    bootstrap/src/org/frostlang/frostc/ClassDecl/GenericParameter.c
    bootstrap/src/org/frostlang/frostc/ClassDecl/Kind.c
    bootstrap/src/org/frostlang/frostc/ClassDecl/Resolution.c
    bootstrap/src/org/frostlang/frostc/CodeGenerator.c
    bootstrap/src/org/frostlang/frostc/Compiler.c
    bootstrap/src/org/frostlang/frostc/Compiler/_Closure2.c
    bootstrap/src/org/frostlang/frostc/Compiler/_Closure9.c
    bootstrap/src/org/frostlang/frostc/Compiler/_Closure11.c
    bootstrap/src/org/frostlang/frostc/Compiler/_Closure13.c
    bootstrap/src/org/frostlang/frostc/Compiler/_Closure15.c
    bootstrap/src/org/frostlang/frostc/Compiler/_Closure17.c
    bootstrap/src/org/frostlang/frostc/Compiler/AutoAtPreFlag.c
    bootstrap/src/org/frostlang/frostc/Compiler/AutoContext.c
    bootstrap/src/org/frostlang/frostc/Compiler/AutoScope.c
    bootstrap/src/org/frostlang/frostc/Compiler/AutoUnrefs.c
    bootstrap/src/org/frostlang/frostc/Compiler/BinaryKey.c
    bootstrap/src/org/frostlang/frostc/Compiler/Capture.c
    bootstrap/src/org/frostlang/frostc/Compiler/CoercionKey.c
    bootstrap/src/org/frostlang/frostc/Compiler/EnclosingContext.c
    bootstrap/src/org/frostlang/frostc/Compiler/InlineReturn.c
    bootstrap/src/org/frostlang/frostc/Compiler/Message.c
    bootstrap/src/org/frostlang/frostc/Compiler/Resolution.c
    bootstrap/src/org/frostlang/frostc/Compiler/Settings.c
    bootstrap/src/org/frostlang/frostc/Compiler/Target.c
    bootstrap/src/org/frostlang/frostc/Compiler/TypeContext.c
    bootstrap/src/org/frostlang/frostc/expression/And.c
    bootstrap/src/org/frostlang/frostc/expression/ArrayLiteral.c
    bootstrap/src/org/frostlang/frostc/expression/AtPre.c
    bootstrap/src/org/frostlang/frostc/expression/AtReturn.c
    bootstrap/src/org/frostlang/frostc/expression/Binary.c
    bootstrap/src/org/frostlang/frostc/expression/Binary/Operator.c
    bootstrap/src/org/frostlang/frostc/expression/Binary/_Closure2.c
    bootstrap/src/org/frostlang/frostc/expression/Call.c
    bootstrap/src/org/frostlang/frostc/expression/Closure.c
    bootstrap/src/org/frostlang/frostc/expression/Dot.c
    bootstrap/src/org/frostlang/frostc/expression/Identifier.c
    bootstrap/src/org/frostlang/frostc/expression/IntLiteral.c
    bootstrap/src/org/frostlang/frostc/expression/Or.c
    bootstrap/src/org/frostlang/frostc/expression/Tuple.c
    bootstrap/src/org/frostlang/frostc/expression/Tuple/_Closure2.c
    bootstrap/src/org/frostlang/frostc/expression/Tuple/_Closure4.c
    bootstrap/src/org/frostlang/frostc/expression/Unary.c
    bootstrap/src/org/frostlang/frostc/expression/Unary/Operator.c
    bootstrap/src/org/frostlang/frostc/FieldDecl.c
    bootstrap/src/org/frostlang/frostc/FieldDecl/Kind.c
    bootstrap/src/org/frostlang/frostc/FixedArray.c
    bootstrap/src/org/frostlang/frostc/FixedArray/FixedArrayIterator.c
    bootstrap/src/org/frostlang/frostc/HCodeGenerator.c
    bootstrap/src/org/frostlang/frostc/HTMLProcessor.c
    bootstrap/src/org/frostlang/frostc/IR.c
    bootstrap/src/org/frostlang/frostc/IR/Block.c
    bootstrap/src/org/frostlang/frostc/IR/Block/ID.c
    bootstrap/src/org/frostlang/frostc/IR/Statement.c
    bootstrap/src/org/frostlang/frostc/IR/Statement/ID.c
    bootstrap/src/org/frostlang/frostc/IR/Value.c
    bootstrap/src/org/frostlang/frostc/LLVMCodeGenerator.c
    bootstrap/src/org/frostlang/frostc/LLVMCodeGenerator/ClassConstant.c
    bootstrap/src/org/frostlang/frostc/LLVMCodeGenerator/MethodShim.c
    bootstrap/src/org/frostlang/frostc/LLVMCodeGenerator/OpClass.c
    bootstrap/src/org/frostlang/frostc/lvalue/ChoiceFieldLValue.c
    bootstrap/src/org/frostlang/frostc/lvalue/FieldLValue.c
    bootstrap/src/org/frostlang/frostc/lvalue/IndexLValue.c
    bootstrap/src/org/frostlang/frostc/lvalue/LValue.c
    bootstrap/src/org/frostlang/frostc/lvalue/VariableLValue.c
    bootstrap/src/org/frostlang/frostc/Main.c
    bootstrap/src/org/frostlang/frostc/Main/Arguments.c
    bootstrap/src/org/frostlang/frostc/Main/Format.c
    bootstrap/src/org/frostlang/frostc/MethodDecl.c
    bootstrap/src/org/frostlang/frostc/MethodDecl/GenericParameter.c
    bootstrap/src/org/frostlang/frostc/MethodDecl/Kind.c
    bootstrap/src/org/frostlang/frostc/MethodDecl/Parameter.c
    bootstrap/src/org/frostlang/frostc/MethodRef.c
    bootstrap/src/org/frostlang/frostc/Methods.c
    bootstrap/src/org/frostlang/frostc/Pair.c
    bootstrap/src/org/frostlang/frostc/Position.c
    bootstrap/src/org/frostlang/frostc/Scanner.c
    bootstrap/src/org/frostlang/frostc/StubCodeGenerator.c
    bootstrap/src/org/frostlang/frostc/StubCodeGenerator/_Closure2.c
    bootstrap/src/org/frostlang/frostc/StubCodeGenerator/_Closure4.c
    bootstrap/src/org/frostlang/frostc/StubCodeGenerator/_Closure6.c
    bootstrap/src/org/frostlang/frostc/StubCodeGenerator/_Closure8.c
    bootstrap/src/org/frostlang/frostc/StubCodeGenerator/_Closure10.c
    bootstrap/src/org/frostlang/frostc/StubCodeGenerator/_Closure12.c
    bootstrap/src/org/frostlang/frostc/Symbol.c
    bootstrap/src/org/frostlang/frostc/Symbol/Kind.c
    bootstrap/src/org/frostlang/frostc/SymbolTable.c
    bootstrap/src/org/frostlang/frostc/Type.c
    bootstrap/src/org/frostlang/frostc/Type/Kind.c
    bootstrap/src/org/frostlang/frostc/Variable.c
    bootstrap/src/org/frostlang/frostc/Variable/Kind.c
    bootstrap/src/org/frostlang/frostc/Variable/Storage.c
    bootstrap/src/org/frostlang/frostc/frostdoc/DummyCodeGenerator.c
    bootstrap/src/org/frostlang/frostc/frostdoc/LinkResolver.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure12.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure14.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure16.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure18.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure2.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure20.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure22.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure24.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure26.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure28.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure30.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure32.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure4.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure6.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure9.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/_Closure4.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/CodeReplacer.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/HTMLToken.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Markdown/LinkDefinition.c
    bootstrap/src/org/frostlang/frostc/frostdoc/Protector.c
    bootstrap/src/org/frostlang/frostc/parser/Lexer.c
    bootstrap/src/org/frostlang/frostc/parser/Parser.c
    bootstrap/src/org/frostlang/frostc/parser/Parser/AutoSyntaxHighlight.c
    bootstrap/src/org/frostlang/frostc/parser/SyntaxHighlighter.c
    bootstrap/src/org/frostlang/frostc/parser/SyntaxHighlighter/Kind.c
    bootstrap/src/org/frostlang/frostc/parser/Token.c
    bootstrap/src/org/frostlang/frostc/parser/Token/Kind.c
    bootstrap/src/org/frostlang/frostc/pass/Analyzer.c
    bootstrap/src/org/frostlang/frostc/pass/Analyzer/BlockExit.c
    bootstrap/src/org/frostlang/frostc/pass/Analyzer/DataFlowValue.c
    bootstrap/src/org/frostlang/frostc/pass/Analyzer/Definition.c
    bootstrap/src/org/frostlang/frostc/pass/Analyzer/State.c
    bootstrap/src/org/frostlang/frostc/pass/MergeBlocks.c
    bootstrap/src/org/frostlang/frostc/pass/RemoveAsserts.c
    bootstrap/src/org/frostlang/frostc/pass/RemoveUnreachableBlocks.c
    bootstrap/src/org/frostlang/frostc/statement/Assert.c
    bootstrap/src/org/frostlang/frostc/statement/Assignment.c
    bootstrap/src/org/frostlang/frostc/statement/Break.c
    bootstrap/src/org/frostlang/frostc/statement/Continue.c
    bootstrap/src/org/frostlang/frostc/statement/Do.c
    bootstrap/src/org/frostlang/frostc/statement/For.c
    bootstrap/src/org/frostlang/frostc/statement/If.c
    bootstrap/src/org/frostlang/frostc/statement/InnerMethod.c
    bootstrap/src/org/frostlang/frostc/statement/Loop.c
    bootstrap/src/org/frostlang/frostc/statement/Match.c
    bootstrap/src/org/frostlang/frostc/statement/Return.c
    bootstrap/src/org/frostlang/frostc/statement/Try.c
    bootstrap/src/org/frostlang/frostc/statement/Var.c
    bootstrap/src/org/frostlang/frostc/statement/While.c
    bootstrap/src/org/frostlang/plex/runtime/DFA.c
    bootstrap/src/org/frostlang/plex/runtime/RawToken.c
    bootstrap/src/org/frostlang/regex/RegexLexer.c
    bootstrap/src/org/frostlang/regex/RegexParser.c
    bootstrap/src/org/frostlang/regex/RegexToken.c
    bootstrap/src/org/frostlang/regex/RegexToken/Kind.c
    bootstrap/src/frost/collections/Array.c
    bootstrap/src/frost/collections/Collection.c
    bootstrap/src/frost/collections/CollectionView.c
    bootstrap/src/frost/collections/CollectionWriter.c
    bootstrap/src/frost/collections/HashMap.c
    bootstrap/src/frost/collections/HashMap/Entry.c
    bootstrap/src/frost/collections/HashMap/EntryIterator.c
    bootstrap/src/frost/collections/HashSet.c
    bootstrap/src/frost/collections/HashSet/_Closure2.c
    bootstrap/src/frost/collections/IdentityMap.c
    bootstrap/src/frost/collections/IdentityMap/Entry.c
    bootstrap/src/frost/collections/IdentityMap/EntryIterator.c
    bootstrap/src/frost/collections/ImmutableArray.c
    bootstrap/src/frost/collections/ImmutableArray/ImmutableArrayIterator.c
    bootstrap/src/frost/collections/Iterable.c
    bootstrap/src/frost/collections/Iterator.c
    bootstrap/src/frost/collections/Iterator/EnumerationIterator.c
    bootstrap/src/frost/collections/Iterator/FilterIterator.c
    bootstrap/src/frost/collections/Iterator/MapIterator.c
    bootstrap/src/frost/collections/Iterator/RangeIterator.c
    bootstrap/src/frost/collections/List.c
    bootstrap/src/frost/collections/ListView.c
    bootstrap/src/frost/collections/ListView/ListIterator.c
    bootstrap/src/frost/collections/ListWriter.c
    bootstrap/src/frost/collections/Map.c
    bootstrap/src/frost/collections/MapView.c
    bootstrap/src/frost/collections/MapWriter.c
    bootstrap/src/frost/collections/SpecializedArray.LTorg/frostlang/frostc/parser/Token.GT.c
    bootstrap/src/frost/collections/SpecializedArray.LTorg/frostlang/regex/RegexToken.GT.c
    bootstrap/src/frost/collections/Stack.c
    bootstrap/src/frost/collections/Stack/StackIterator.c
    bootstrap/src/frost/core/Bit.c
    bootstrap/src/frost/core/Char16.c
    bootstrap/src/frost/core/Char32.c
    bootstrap/src/frost/core/Char8.c
    bootstrap/src/frost/core/Class.c
    bootstrap/src/frost/core/Comparable.c
    bootstrap/src/frost/core/Equatable.c
    bootstrap/src/frost/core/Error.c
    bootstrap/src/frost/core/Formattable.c
    bootstrap/src/frost/core/Immutable.c
    bootstrap/src/frost/core/Int16.c
    bootstrap/src/frost/core/Int32.c
    bootstrap/src/frost/core/Int64.c
    bootstrap/src/frost/core/Int8.c
    bootstrap/src/frost/core/Matcher.c
    bootstrap/src/frost/core/Maybe.c
    bootstrap/src/frost/core/Method.c
    bootstrap/src/frost/core/MutableMethod.c
    bootstrap/src/frost/core/MutableString.c
    bootstrap/src/frost/core/MutableString/Index.c
    bootstrap/src/frost/core/Object.c
    bootstrap/src/frost/core/Frost.c
    bootstrap/src/frost/core/Range.LTfrost/core/Int16.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/Int32.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/Int64.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/Int8.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/MutableString/Index.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/MutableString/Index.Q.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/String/Index.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/String/Index.Q.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/UInt16.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/UInt32.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/UInt64.GT.c
    bootstrap/src/frost/core/Range.LTfrost/core/UInt8.GT.c
    bootstrap/src/frost/core/Real32.c
    bootstrap/src/frost/core/Real64.c
    bootstrap/src/frost/core/RegularExpression.c
    bootstrap/src/frost/core/SteppedRange.LTfrost/core/Int16.Cfrost/core/Int16.GT.c
    bootstrap/src/frost/core/SteppedRange.LTfrost/core/Int32.Cfrost/core/Int32.GT.c
    bootstrap/src/frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.c
    bootstrap/src/frost/core/SteppedRange.LTfrost/core/Int8.Cfrost/core/Int8.GT.c
    bootstrap/src/frost/core/SteppedRange.LTfrost/core/UInt16.Cfrost/core/UInt16.GT.c
    bootstrap/src/frost/core/SteppedRange.LTfrost/core/UInt32.Cfrost/core/UInt32.GT.c
    bootstrap/src/frost/core/SteppedRange.LTfrost/core/UInt64.Cfrost/core/UInt64.GT.c
    bootstrap/src/frost/core/SteppedRange.LTfrost/core/UInt8.Cfrost/core/UInt8.GT.c
    bootstrap/src/frost/core/String.c
    bootstrap/src/frost/core/String/Index.c
    bootstrap/src/frost/core/String/Match.c
    bootstrap/src/frost/core/String/MatchIterator.c
    bootstrap/src/frost/core/String/RegexMatchIterator.c
    bootstrap/src/frost/core/String/UTF16Iterator.c
    bootstrap/src/frost/core/String/UTF32Iterator.c
    bootstrap/src/frost/core/String/UTF8Iterator.c
    bootstrap/src/frost/core/String/UTF8List.c
    bootstrap/src/frost/core/System.c
    bootstrap/src/frost/core/System/Process.c
    bootstrap/src/frost/core/Tuple2.c
    bootstrap/src/frost/core/Tuple3.c
    bootstrap/src/frost/core/Tuple4.c
    bootstrap/src/frost/core/Tuple5.c
    bootstrap/src/frost/core/Tuple6.c
    bootstrap/src/frost/core/Tuple7.c
    bootstrap/src/frost/core/Tuple8.c
    bootstrap/src/frost/core/Tuple9.c
    bootstrap/src/frost/core/Tuple10.c
    bootstrap/src/frost/core/Tuple11.c
    bootstrap/src/frost/core/Tuple12.c
    bootstrap/src/frost/core/Tuple13.c
    bootstrap/src/frost/core/Tuple14.c
    bootstrap/src/frost/core/Tuple15.c
    bootstrap/src/frost/core/Tuple16.c
    bootstrap/src/frost/core/UInt16.c
    bootstrap/src/frost/core/UInt32.c
    bootstrap/src/frost/core/UInt64.c
    bootstrap/src/frost/core/UInt8.c
    bootstrap/src/frost/core/Value.c
    bootstrap/src/frost/core/Weak.c
    bootstrap/src/frost/io/ByteOrder.c
    bootstrap/src/frost/io/Console.c
    bootstrap/src/frost/io/File.c
    bootstrap/src/frost/io/FileInputStream.c
    bootstrap/src/frost/io/FileOutputStream.c
    bootstrap/src/frost/io/IndentedOutputStream.c
    bootstrap/src/frost/io/InputStream.c
    bootstrap/src/frost/io/InputStream/LineIterator.c
    bootstrap/src/frost/io/LineNumberInputStream.c
    bootstrap/src/frost/io/MemoryInputStream.c
    bootstrap/src/frost/io/MemoryOutputStream.c
    bootstrap/src/frost/io/OutputStream.c
    bootstrap/src/frost/io/PushbackInputStream.c
    bootstrap/src/frost/json/JSON.c
    bootstrap/src/frost/json/JSON/PathKey.c
    bootstrap/src/frost/json/JSONParser.c
    bootstrap/src/frost/math/Random.c
    bootstrap/src/frost/math/XorShift128Plus.c
    bootstrap/src/frost/threads/Lock.c
    bootstrap/src/frost/threads/MessageQueue.c
    bootstrap/src/frost/threads/MessageQueue/Message.c
    bootstrap/src/frost/threads/Notifier.c
    bootstrap/src/frost/threads/ScopedLock.c
    bootstrap/src/frost/threads/Thread.c
    bootstrap/src/frost/unsafe/UnsafeMessageQueue.c
    bootstrap/src/frost/unsafe/UnsafeMessageQueue/Message.c
    bootstrap/src/frostlib.c
)
target_link_libraries(bootstrap ${SYSTEM_LIBRARIES} c_frost ${ICU_LIBRARIES})
set_target_properties(bootstrap PROPERTIES LINKER_LANGUAGE CXX)

function(compile_frost_sources out_var)
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
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/Array.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/Collection.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/CollectionView.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frost/collections/CollectionWriter.frost
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
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/bootstrap ${BOOTSTRAP_ARGS} -o writeNumbers
            ${CMAKE_CURRENT_SOURCE_DIR}/src/tools/WriteNumbers.frost
    DEPENDS bootstrap src/tools/WriteNumbers.frost
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
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/bootstrap ${BOOTSTRAP_ARGS} -o writeTuples
            ${CMAKE_CURRENT_SOURCE_DIR}/src/tools/WriteTuples.frost
    DEPENDS bootstrap src/tools/WriteTuples.frost
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
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/bootstrap ${BOOTSTRAP_ARGS} -o writeOperators
            ${CMAKE_CURRENT_SOURCE_DIR}/src/tools/WriteOperators.frost
    DEPENDS src/tools/WriteOperators.frost frostc
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

function(compile_frostc_sources out_var)
    set(result)
    foreach(input ${ARGN})
        get_filename_component(outputDir ${input} DIRECTORY)
        get_filename_component(output ${input} NAME_WE)
        set(output "${CMAKE_CURRENT_BINARY_DIR}/${outputDir}/${output}.o")
        add_custom_command(
            OUTPUT ${output}
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/bootstrap ${BOOTSTRAP_ARGS}
                    -I ${CMAKE_CURRENT_SOURCE_DIR}/src/parser
                    -I ${CMAKE_CURRENT_BINARY_DIR}
                    -I ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc
                    -f o -o ${output} ${input}
            DEPENDS bootstrap ${input}
                    ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/frostc/parser/Token.frost
            WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        )
        list(APPEND result ${output})
    endforeach()
    set(${out_var} "${result}" PARENT_SCOPE)
endfunction()

set(frostc_source
    ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/frostc/Config.frost
    ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/frostc/parser/Lexer.frost
    ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/frostc/parser/Token.frost
    ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/regex/RegexLexer.frost
    ${CMAKE_CURRENT_BINARY_DIR}/org/frostlang/regex/RegexToken.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Alias.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Annotations.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/ASTNode.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Bench.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/CCodeGenerator.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Compiler.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/ChoiceCase.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/ClassDecl.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/CodeGenerator.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Compiler.frost
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
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/expression/Tuple.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/expression/Unary.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/FieldDecl.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/FixedArray.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/HCodeGenerator.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/HTMLProcessor.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/IR.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/LinkedList.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/lvalue/LValue.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/MethodDecl.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/MethodRef.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Methods.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Pair.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Position.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Scanner.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Symbol.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/SymbolTable.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Type.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Variable.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/frostdoc/DummyCodeGenerator.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/parser/Parser.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/pass/Analyzer.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost
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
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Main.frost
)

add_executable(frostc
    ${frostc_objects}
)
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
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/frostc -f stub ${input} -o ${output}
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

function(create_headers out_var)
    set(result)
    foreach(rawInput ${ARGN})
        if (${rawInput} MATCHES "^${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/.*")
            file(RELATIVE_PATH input "${CMAKE_CURRENT_SOURCE_DIR}/src/frostc" ${rawInput})
            set(working "${CMAKE_CURRENT_SOURCE_DIR}/src/frostc")
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
        file(RELATIVE_PATH frostcInc ${working} "${CMAKE_CURRENT_SOURCE_DIR}/src/frostc")
        if (frostcInc STREQUAL "")
            set(frostcInc ".")
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
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/frostc -O ${OPTIMIZATION} -S ${SAFETY} -f h
                    -I ${CMAKE_CURRENT_SOURCE_DIR}/src -I ${frostcInc} -I ${parserInc}
                    -I ${buildInc} -o ${CMAKE_CURRENT_BINARY_DIR}/updated_bootstrap/include ${input}
            DEPENDS ${rawInput} frostc
            WORKING_DIRECTORY ${working}
        )
        list(APPEND result ${output})
    endforeach()
    set(${out_var} "${result}" PARENT_SCOPE)
endfunction()

create_headers(updated_frostc_headers
    ${core_source}
    ${frostc_source}
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Main.frost
)

function(compile_frost_sources_to_c out_var)
    set(result)
    foreach(rawInput ${ARGN})
        if (${rawInput} MATCHES "^${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/.*")
            file(RELATIVE_PATH input "${CMAKE_CURRENT_SOURCE_DIR}/src/frostc" ${rawInput})
            set(working "${CMAKE_CURRENT_SOURCE_DIR}/src/frostc")
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
        file(RELATIVE_PATH frostcInc ${working} "${CMAKE_CURRENT_SOURCE_DIR}/src/frostc")
        if (frostcInc STREQUAL "")
            set(frostcInc ".")
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
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/frostc -O ${OPTIMIZATION} -S ${SAFETY} -f c
                    -I ${CMAKE_CURRENT_SOURCE_DIR}/src -I ${frostcInc} -I ${parserInc}
                    -I ${buildInc} -o ${CMAKE_CURRENT_BINARY_DIR}/updated_bootstrap/src ${input}
            DEPENDS ${rawInput} frostc
            WORKING_DIRECTORY ${working}
        )
        list(APPEND result ${output})
    endforeach()
    set(${out_var} "${result}" PARENT_SCOPE)
endfunction()

compile_frost_sources_to_c(updated_frostc_c
    ${core_source}
    ${frostc_source}
    ${CMAKE_CURRENT_SOURCE_DIR}/src/frostc/org/frostlang/frostc/Main.frost
)

add_custom_target(update_bootstrap
    DEPENDS ${updated_frostc_headers} ${updated_frostc_c}
)

add_custom_command(
    TARGET update_bootstrap POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E remove_directory ${CMAKE_CURRENT_SOURCE_DIR}/bootstrap
    COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_CURRENT_BINARY_DIR}/updated_bootstrap
            ${CMAKE_CURRENT_SOURCE_DIR}/bootstrap
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/src/c/frost_c.h
            ${CMAKE_CURRENT_SOURCE_DIR}/bootstrap/include
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/src/c/frostlib.c
            ${CMAKE_CURRENT_SOURCE_DIR}/bootstrap/src
)

add_custom_target(frostrun
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/frostc -O ${OPTIMIZATION} -S ${SAFETY}
            ${CMAKE_CURRENT_SOURCE_DIR}/src/tools/FrostRun.frost
            -o ${CMAKE_CURRENT_BINARY_DIR}/frostrun
    DEPENDS frostc src/tools/FrostRun.frost
)

compile_frost_sources(test_extras_objects
    ${CMAKE_CURRENT_SOURCE_DIR}/test/extras/Algorithms.frost
    ${CMAKE_CURRENT_SOURCE_DIR}/test/extras/MD5.frost
)

add_library(test_extras
    ${test_extras_objects}
)
set_target_properties(test_extras PROPERTIES LINKER_LANGUAGE CXX)

add_custom_command(
    OUTPUT TestRunner
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/frostc -O ${OPTIMIZATION} -S ${SAFETY}
            -I ${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/test/TestRunner.frost
            -o ${CMAKE_CURRENT_BINARY_DIR}/TestRunner
    DEPENDS frostc test/TestRunner.frost
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
    ${frostc_source}
)

add_executable(frostmd
    ${frostmd_objects}
)
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
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/frostmd ${CMAKE_CURRENT_SOURCE_DIR}/docs ${input}
                    ${output}
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
    ${frostc_source}
)

add_executable(frostdoc
    ${frostdoc_objects}
)
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
)

add_custom_target(docs
    COMMAND frostdoc ${CMAKE_CURRENT_SOURCE_DIR}/src/frost ${CMAKE_CURRENT_BINARY_DIR}/docs api
            ${CMAKE_CURRENT_SOURCE_DIR}/docs
    DEPENDS frostdoc ${public_source} ${markdown_html} ${frost_source_html}
)
