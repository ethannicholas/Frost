#include "org/frostlang/frostc/CCodeGenerator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/CodeGenerator.h"
#include "frost/io/File.h"
#include "org/frostlang/frostc/HCodeGenerator.h"
#include "frost/core/Frost.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/io/MemoryOutputStream.h"
#include "frost/collections/HashSet.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/io/IndentedOutputStream.h"
#include "frost/io/OutputStream.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/IdentityMap.h"
#include "frost/collections/Stack.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Bit.h"
#include "frost/core/Error.h"
#include "frost/collections/Key.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/MutableString.h"
#include "frost/core/Equatable.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/LLVMCodeGenerator.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/CCodeGenerator/ClassConstant.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/CCodeGenerator/MethodShim.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "org/frostlang/frostc/CCodeGenerator/OpClass.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "org/frostlang/frostc/ClassDecl/Kind.h"
#include "frost/core/Real64.h"
#include "frost/core/Char8.h"
#include "frost/core/UInt8.h"
#include "frost/core/Formattable.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "frost/core/Maybe.h"
#include "frost/io/Console.h"
#include "frost/core/System.h"


struct { frost$core$Class* cl; ITable* next; void* methods[6]; } org$frostlang$frostc$CCodeGenerator$_org$frostlang$frostc$CodeGenerator = { (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class, NULL, { org$frostlang$frostc$CCodeGenerator$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$CCodeGenerator$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$CCodeGenerator$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$CCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$CCodeGenerator$finish} };

static frost$core$String $s1;
org$frostlang$frostc$CCodeGenerator$class_type org$frostlang$frostc$CCodeGenerator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$CCodeGenerator$_org$frostlang$frostc$CodeGenerator, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$cleanup, org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit, org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$nextLabel$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$alignment$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$sizeOfWrapper$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$writeType$org$frostlang$frostc$Type, org$frostlang$frostc$CCodeGenerator$typeName$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$nullableType$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getITable$org$frostlang$frostc$ClassDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$createMethodShim$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$MethodShim, org$frostlang$frostc$CCodeGenerator$getWrapperITable$org$frostlang$frostc$ClassDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit, org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant, org$frostlang$frostc$CCodeGenerator$getWrapperClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant, org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$Variable$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$FieldDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$opClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$OpClass, org$frostlang$frostc$CCodeGenerator$getBinaryReference$org$frostlang$frostc$Type$frost$core$String$org$frostlang$frostc$expression$Binary$Operator$frost$core$String$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getVirtualMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getInterfaceMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getMethodReference$frost$core$String$Q$org$frostlang$frostc$MethodDecl$frost$core$Bit$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$wrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$unwrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$toNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$toNonNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getIntReference$frost$core$UInt64$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getRealReference$org$frostlang$frostc$Type$frost$core$Real64$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getBitReference$frost$core$Bit$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getNullReference$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getChoiceFieldOffset$org$frostlang$frostc$ChoiceCase$frost$core$Int64$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$writeIsNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writeIsNonNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit, org$frostlang$frostc$CCodeGenerator$writeBinary$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type, org$frostlang$frostc$CCodeGenerator$writeBranch$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$CCodeGenerator$writeCast$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type, org$frostlang$frostc$CCodeGenerator$writeConditionalBranch$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$CCodeGenerator$writeConstruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$CCodeGenerator$writeCreateStruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT, org$frostlang$frostc$CCodeGenerator$writeDynamicCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT, org$frostlang$frostc$CCodeGenerator$writeExtractField$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl, org$frostlang$frostc$CCodeGenerator$writeGetChoiceFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$writeGetFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl, org$frostlang$frostc$CCodeGenerator$writeGetInterfaceMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int64$org$frostlang$frostc$Type, org$frostlang$frostc$CCodeGenerator$writeGetVirtualMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$core$Int64$org$frostlang$frostc$Type, org$frostlang$frostc$CCodeGenerator$writeLoad$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writeNegate$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writeNot$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writePointerAlloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type, org$frostlang$frostc$CCodeGenerator$writePointerDestroy$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writePointerGetIndex$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writePointerOffset$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writePointerRealloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writePointerSetIndex$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writeReturn$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$CCodeGenerator$writeStaticCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT, org$frostlang$frostc$CCodeGenerator$writeStore$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writeStatement$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Statement, org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$CCodeGenerator$writeIR$org$frostlang$frostc$IR, org$frostlang$frostc$CCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$CCodeGenerator$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$CCodeGenerator$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$CCodeGenerator$finish} };

typedef frost$core$Error* (*$fn153)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn237)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn248)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn259)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn270)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn300)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn329)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn391)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn481)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn485)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn490)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn564)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn603)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn665)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn732)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn760)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn764)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn769)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn811)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn842)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn846)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn851)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn877)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn927)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn933)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn970)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn987)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn1037)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1074)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1104)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1164)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1200)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1244)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1256)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1274)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1292)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn1330)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1367)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1383)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Bit (*$fn1399)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1414)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1438)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1463)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1516)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1520)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1525)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn1567)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1603)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1607)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1612)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1638)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1719)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1899)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1903)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1908)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1934)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2008)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn2136)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2165)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Error* (*$fn2201)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2444)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2454)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2473)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn2502)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2526)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Error* (*$fn2597)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2613)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2634)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2647)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn2665)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2689)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn2727)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn2768)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn2809)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2828)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn2842)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2850)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2881)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2895)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2902)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2921)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2935)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2957)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn2968)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn2976)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3011)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3022)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn3033)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn3045)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3050)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3067)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3079)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn3097)(frost$core$Object*);
typedef frost$core$Bit (*$fn3118)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3249)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3276)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn3323)(frost$core$Object*);
typedef frost$core$String* (*$fn3327)(frost$core$Object*);
typedef frost$core$Error* (*$fn3380)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn3386)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3390)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3395)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn3404)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Error* (*$fn3414)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn3422)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3431)(frost$collections$Key*);
typedef frost$core$Error* (*$fn3438)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn3459)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn3509)(frost$core$Object*);
typedef frost$core$String* (*$fn3521)(frost$core$Object*);
typedef frost$core$Bit (*$fn3706)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn3726)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn3742)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3752)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn3782)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn3798)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3808)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn3843)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4012)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4033)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4043)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4062)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn4083)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn4123)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4156)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4202)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn4211)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn4215)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn4220)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn4235)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4248)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4265)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn4283)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn4300)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4317)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn4326)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn4330)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn4335)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn4342)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4353)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4366)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4408)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4477)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4520)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4549)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4567)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4592)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4609)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4637)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4682)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4700)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4715)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4731)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4746)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4762)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4777)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4819)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4844)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4860)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4882)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4906)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4925)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4947)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn4962)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn4974)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn4985)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn5015)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5053)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5074)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5079)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn5104)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn5122)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5138)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5154)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5169)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn5179)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn5183)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn5188)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn5195)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5206)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5219)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5243)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5314)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5639)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn5655)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn5699)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5715)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5723)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn5755)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn5804)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn5818)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn5920)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5944)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn5961)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn5965)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn5970)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn5992)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn6010)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn6027)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6036)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6044)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn6131)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn6159)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6168)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6177)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6186)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6195)(frost$io$OutputStream*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 35, -2345644890872423107, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x74\x79\x70\x65\x20", 16, 7914278075631058822, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s274 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s275 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x63\x4d\x65\x74\x68\x6f\x64\x54\x79\x70\x65\x28\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x73\x65\x6c\x66\x54\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 163, 3276100450823531157, NULL };
static frost$core$String $s288 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6e", 3, 1407949, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20", 8, 23394968824372186, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x28\x2a", 3, 1360815, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x28", 2, 14382, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s324 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static frost$core$String $s421 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6c", 2, 13945, NULL };
static frost$core$String $s436 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s593 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s616 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static frost$core$String $s620 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s633 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s637 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s647 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s657 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static frost$core$String $s659 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s691 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s719 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static frost$core$String $s738 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x69\x73\x20\x6e\x6f\x74\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 16, 538313452881261501, NULL };
static frost$core$String $s739 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s746 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static frost$core$String $s754 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s756 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s792 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x5f", 2, 13932, NULL };
static frost$core$String $s799 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s805 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static frost$core$String $s807 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x6e\x65\x78\x74\x3b\x20", 19, -82469649542869656, NULL };
static frost$core$String $s815 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static frost$core$String $s817 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s821 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s827 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s829 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s833 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static frost$core$String $s836 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s838 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s856 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s858 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s865 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s871 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static frost$core$String $s880 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s884 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static frost$core$String $s886 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s923 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s943 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s947 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s952 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x73\x68\x69\x6d", 5, 14375831170, NULL };
static frost$core$String $s962 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x5f\x61\x74\x74\x72\x69\x62\x75\x74\x65\x5f\x5f\x28\x28\x77\x65\x61\x6b\x29\x29\x20", 22, 985746977287669079, NULL };
static frost$core$String $s964 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s968 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s979 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s980 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s982 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1018 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1026 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1030 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x70", 2, 13545, NULL };
static frost$core$String $s1035 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1047 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1049 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1076 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s1095 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static frost$core$String $s1132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70", 1, 213, NULL };
static frost$core$String $s1134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x4f\x62\x6a\x65\x63\x74\x2a\x29\x20", 21, 439094005818830454, NULL };
static frost$core$String $s1196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s1198 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x46\x72\x6f\x73\x74\x24\x75\x6e\x72\x65\x66\x24\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x4f\x62\x6a\x65\x63\x74\x24\x51\x28", 43, 2176290240124383769, NULL };
static frost$core$String $s1254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20", 10, -868402795326672399, NULL };
static frost$core$String $s1272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1328 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1369 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s1408 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x73\x75\x6c\x74", 6, 2270301397372, NULL };
static frost$core$String $s1410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static frost$core$String $s1412 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s1440 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1492 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1501 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1502 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x63\x72\x65\x61\x74\x65\x4d\x65\x74\x68\x6f\x64\x53\x68\x69\x6d\x28\x72\x61\x77\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2c\x20\x65\x66\x66\x65\x63\x74\x69\x76\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x4d\x65\x74\x68\x6f\x64\x53\x68\x69\x6d", 206, -7873525039119771459, NULL };
static frost$core$String $s1510 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1512 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1548 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5f", 9, 1496394141948660801, NULL };
static frost$core$String $s1555 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1561 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static frost$core$String $s1563 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 21, 7276812015398014858, NULL };
static frost$core$String $s1571 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static frost$core$String $s1573 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s1577 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s1582 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x26", 3, 1451812, NULL };
static frost$core$String $s1590 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1594 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static frost$core$String $s1597 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1599 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1617 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1619 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1626 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1632 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static frost$core$String $s1651 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static frost$core$String $s1653 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1667 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1760 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static frost$core$String $s1761 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2904858913866490275, NULL };
static frost$core$String $s1794 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static frost$core$String $s1795 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static frost$core$String $s1818 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s1820 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1823 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1825 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1839 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s1842 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1850 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 329606069570935975, NULL };
static frost$core$String $s1852 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static frost$core$String $s1858 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static frost$core$String $s1864 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s1870 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s1872 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1877 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x30\x2c\x20", 5, 15122221901, NULL };
static frost$core$String $s1882 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1886 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1890 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static frost$core$String $s1893 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1895 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1919 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1923 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1925 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1928 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static frost$core$String $s1955 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1973 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1980 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static frost$core$String $s1994 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2904858913866490275, NULL };
static frost$core$String $s1996 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2904858913866490275, NULL };
static frost$core$String $s2002 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x65\x78\x74\x65\x72\x6e\x61\x6c\x20\x67\x6c\x6f\x62\x61\x6c\x20", 19, 7395979908803736066, NULL };
static frost$core$String $s2006 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2036 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static frost$core$String $s2037 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static frost$core$String $s2056 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s2058 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2075 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s2078 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2086 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 329606069570935975, NULL };
static frost$core$String $s2088 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static frost$core$String $s2094 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static frost$core$String $s2100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s2106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s2108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x30\x2c\x20", 5, 15122221901, NULL };
static frost$core$String $s2118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static frost$core$String $s2129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20\x7d\x3b", 4, 233187142, NULL };
static frost$core$String $s2234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static frost$core$String $s2248 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2274 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2286 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24", 1, 137, NULL };
static frost$core$String $s2300 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2329 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s2331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s2335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s2337 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s2341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s2343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s2347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2349 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2353 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2355 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2359 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s2361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s2365 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s2367 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s2371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s2373 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s2377 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s2379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s2383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s2385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s2392 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s2394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s2398 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s2400 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s2405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s2407 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s2412 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s2414 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s2419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s2421 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s2426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s2428 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s2434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s2436 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s2438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2446 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static frost$core$String $s2452 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2461 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s2464 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2468 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2471 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s2482 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2560 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2567 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s2569 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s2572 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static frost$core$String $s2577 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x29", 2, 19635, NULL };
static frost$core$String $s2590 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static frost$core$String $s2592 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s2595 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static frost$core$String $s2603 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static frost$core$String $s2605 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, -2219903404419143126, NULL };
static frost$core$String $s2611 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s2628 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s2632 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static frost$core$String $s2649 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s2741 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2753 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2757 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s2761 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static frost$core$String $s2766 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s2783 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2794 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6c\x6c\x69\x6e\x67\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20", 17, 6273213310080951380, NULL };
static frost$core$String $s2796 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x61\x20\x74\x61\x72\x67\x65\x74", 17, 4566770767977439161, NULL };
static frost$core$String $s2797 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2836 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2840 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s2846 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static frost$core$String $s2848 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static frost$core$String $s2875 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s2879 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s2897 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s2904 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static frost$core$String $s2919 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c\x3b", 8, 14324497440495800, NULL };
static frost$core$String $s2937 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s2951 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2955 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s2972 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static frost$core$String $s2974 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static frost$core$String $s2990 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s2994 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s2998 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 17, 6191911388433222465, NULL };
static frost$core$String $s3000 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20", 22, -4321982028467046391, NULL };
static frost$core$String $s3006 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s3008 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x29\x3b", 15, -9084967859609473468, NULL };
static frost$core$String $s3017 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e\x76\x61\x6c\x75\x65\x20\x3d\x20", 10, -5658520382000078270, NULL };
static frost$core$String $s3020 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s3047 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s3052 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static frost$core$String $s3065 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x3b", 8, 14324500803727928, NULL };
static frost$core$String $s3081 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s3085 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3087 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3091 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3099 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2d\x3e\x76\x61\x6c\x75\x65", 8, 15272754413107790, NULL };
static frost$core$String $s3133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s3135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c\x20\x3f\x20", 11, 7728168270859090233, NULL };
static frost$core$String $s3139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x20\x28", 4, 137624963, NULL };
static frost$core$String $s3143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x30\x20\x7d\x29", 19, 3502995608209124108, NULL };
static frost$core$String $s3151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static frost$core$String $s3156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x74\x72\x75\x65\x20\x7d\x29", 9, 1573697403055851823, NULL };
static frost$core$String $s3159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static frost$core$String $s3170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3198 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3305 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3308 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3320 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75", 1, 218, NULL };
static frost$core$String $s3332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s3338 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x30", 2, 14895, NULL };
static frost$core$String $s3341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s3342 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s3343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s3344 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s3357 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x73", 2, 13952, NULL };
static frost$core$String $s3359 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3367 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 329606069570935975, NULL };
static frost$core$String $s3369 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s3373 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x24\x63\x6c\x61\x73\x73\x2c\x20", 46, -2509429713584291557, NULL };
static frost$core$String $s3375 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x30\x2c\x20", 5, 15122221901, NULL };
static frost$core$String $s3378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x68\x61\x72\x38\x2a\x29\x20\x22", 21, 309785060753825527, NULL };
static frost$core$String $s3406 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x78", 1, 221, NULL };
static frost$core$String $s3408 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x30\x3e\x32", 3, 1526261, NULL };
static frost$core$String $s3410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x78", 2, 19613, NULL };
static frost$core$String $s3412 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22\x2c\x20", 3, 1381611, NULL };
static frost$core$String $s3428 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s3436 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x4e\x55\x4c\x4c\x20\x7d\x3b", 9, 1573656756204980508, NULL };
static frost$core$String $s3443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s3445 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3464 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x74\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3a\x20", 14, 4299600041167827879, NULL };
static frost$core$String $s3466 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3467 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3480 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3489 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3491 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x66\x61\x6c\x73\x65\x20\x7d\x29", 23, 6429304196845160675, NULL };
static frost$core$String $s3495 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3497 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x4e\x55\x4c\x4c\x29", 7, 151080389671230, NULL };
static frost$core$String $s3533 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x26\x6c\x6f\x63\x61\x6c", 7, 150085078960302, NULL };
static frost$core$String $s3535 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3574 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x61\x72\x61\x6d", 5, 22265977430, NULL };
static frost$core$String $s3576 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3607 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x64\x20", 3, 2111538, NULL };
static frost$core$String $s3609 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x68\x61\x73\x20\x6e\x6f\x74\x20\x62\x65\x65\x6e\x20\x64\x65\x66\x69\x6e\x65\x64", 21, -4672138024147032761, NULL };
static frost$core$String $s3610 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3621 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x20\x72\x65\x66\x3a\x20", 15, -4631094845120441450, NULL };
static frost$core$String $s3623 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3639 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3711 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s3716 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s3734 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3755 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s3757 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s3760 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21", 1, 134, NULL };
static frost$core$String $s3762 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static frost$core$String $s3767 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x3d\x20\x4e\x55\x4c\x4c", 8, 14324797439511602, NULL };
static frost$core$String $s3790 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3811 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s3813 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s3817 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static frost$core$String $s3822 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c", 8, 14295074875294774, NULL };
static frost$core$String $s3874 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s3876 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s3880 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s3882 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s3886 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s3888 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s3895 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s3897 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s3901 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s3903 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s3907 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s3909 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s3913 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s3915 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s3922 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s3924 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s3931 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s3933 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s3940 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s3942 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s3949 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s3951 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s3958 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s3960 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s3964 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s3966 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s3970 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s3972 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s3976 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s3978 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s3982 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s3984 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s3986 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3994 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s3998 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4002 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4006 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4010 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4015 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4029 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static frost$core$String $s4031 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4036 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4050 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static frost$core$String $s4052 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static frost$core$String $s4056 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static frost$core$String $s4060 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4065 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4074 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4080 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 16, -1641588070395923110, NULL };
static frost$core$String $s4090 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s4092 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4098 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s4100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x52\x4f\x53\x54\x5f\x41\x53\x53\x45\x52\x54\x28", 13, -7497314830958463460, NULL };
static frost$core$String $s4115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x3d\x20\x73\x69\x7a\x65\x6f\x66\x28", 11, 1457907249863020283, NULL };
static frost$core$String $s4121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static frost$core$String $s4135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s4144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x66\x72\x6f\x73\x74\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 19, 1107787609391233434, NULL };
static frost$core$String $s4149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s4171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s4200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s4206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x3b", 2, 22885, NULL };
static frost$core$String $s4262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4298 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s4321 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4323 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4359 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4368 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s4376 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4393 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4397 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4401 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s4406 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4433 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static frost$core$String $s4436 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4456 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static frost$core$String $s4460 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s4464 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x29\x20\x28", 4, 147754556, NULL };
static frost$core$String $s4468 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e\x24\x64\x61\x74\x61\x20", 8, 15719379260890086, NULL };
static frost$core$String $s4472 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b\x20", 2, 14576, NULL };
static frost$core$String $s4474 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s4492 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4505 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static frost$core$String $s4509 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x26", 4, 137655564, NULL };
static frost$core$String $s4513 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static frost$core$String $s4518 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4531 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4541 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static frost$core$String $s4543 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4547 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static frost$core$String $s4557 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static frost$core$String $s4559 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, -2219903404419143126, NULL };
static frost$core$String $s4565 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s4586 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4590 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static frost$core$String $s4611 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s4623 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4627 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4631 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static frost$core$String $s4635 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s4652 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4663 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4667 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s4671 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s4675 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static frost$core$String $s4679 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s4693 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4705 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4709 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x2a", 4, 137655568, NULL };
static frost$core$String $s4713 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4724 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4736 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4740 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x2d", 4, 137655571, NULL };
static frost$core$String $s4744 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4755 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4767 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4771 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x21", 4, 137655559, NULL };
static frost$core$String $s4775 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4786 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4800 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static frost$core$String $s4804 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x28\x28", 5, 13903212206, NULL };
static frost$core$String $s4808 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x29\x20\x66\x72\x6f\x73\x74\x41\x6c\x6c\x6f\x63\x28", 14, 1479774152278083113, NULL };
static frost$core$String $s4812 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static frost$core$String $s4816 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static frost$core$String $s4832 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4840 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x46\x72\x65\x65\x28", 10, 1903662118626742793, NULL };
static frost$core$String $s4842 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s4849 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4868 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4872 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4876 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s4880 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s4895 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4911 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4915 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4919 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static frost$core$String $s4923 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4938 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4965 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x69\x7a\x65\x20\x66\x6f\x72\x20\x74\x79\x70\x65\x20", 22, 6026307984013519672, NULL };
static frost$core$String $s4967 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4968 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4979 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4983 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s4990 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x66\x72\x6f\x73\x74\x52\x65\x61\x6c\x6c\x6f\x63\x28", 15, -7010250365195627110, NULL };
static frost$core$String $s4994 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4998 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static frost$core$String $s5003 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5007 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static frost$core$String $s5012 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s5030 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5043 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s5047 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x20\x3d\x20", 4, 200211019, NULL };
static frost$core$String $s5051 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5062 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5070 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static frost$core$String $s5072 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5081 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x3b", 7, 229300545255632, NULL };
static frost$core$String $s5083 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5096 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5098 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s5152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s5165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s5167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s5229 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s5237 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s5241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5310 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x2f\x20", 3, 1514527, NULL };
static frost$core$String $s5312 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5641 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x62\x6f\x72\x74\x28\x29\x3b\x20\x2f\x2f\x20\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 23, 8273563093259754029, NULL };
static frost$core$String $s5643 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5645 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5678 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 21864007024, NULL };
static frost$core$String $s5680 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5693 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5697 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5717 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c", 7, 141826707331641, NULL };
static frost$core$String $s5725 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5792 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5802 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x3b", 2, 16118, NULL };
static frost$core$String $s5807 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x30", 1, 149, NULL };
static frost$core$String $s5811 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x30", 1, 149, NULL };
static frost$core$String $s5890 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5914 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5918 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s5923 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5925 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5937 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x70\x61\x72\x61\x6d", 6, 1409599243562, NULL };
static frost$core$String $s5942 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5954 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5956 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5978 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5985 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x70\x61\x72\x61\x6d", 6, 1409599243562, NULL };
static frost$core$String $s5990 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6003 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s6005 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s6012 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s6046 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s6058 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s6066 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s6067 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x77\x72\x69\x74\x65\x28\x6d\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2c\x20\x69\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x29", 137, -8068718440467774474, NULL };
static frost$core$String $s6073 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s6107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x63", 2, 14946, NULL };

void org$frostlang$frostc$CCodeGenerator$init$frost$io$File(org$frostlang$frostc$CCodeGenerator* param0, frost$io$File* param1) {

// line 59
FROST_ASSERT(152 == sizeof(org$frostlang$frostc$HCodeGenerator));
org$frostlang$frostc$HCodeGenerator* $tmp2 = (org$frostlang$frostc$HCodeGenerator*) frostObjectAlloc(152, (frost$core$Class*) &org$frostlang$frostc$HCodeGenerator$class);
org$frostlang$frostc$HCodeGenerator$init$frost$io$File$org$frostlang$frostc$CCodeGenerator($tmp2, param1, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
org$frostlang$frostc$HCodeGenerator** $tmp3 = &param0->hCodeGenRetain;
org$frostlang$frostc$HCodeGenerator* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
org$frostlang$frostc$HCodeGenerator** $tmp5 = &param0->hCodeGenRetain;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// line 60
org$frostlang$frostc$HCodeGenerator** $tmp6 = &param0->hCodeGenRetain;
org$frostlang$frostc$HCodeGenerator* $tmp7 = *$tmp6;
org$frostlang$frostc$CCodeGenerator$init$frost$io$File$org$frostlang$frostc$HCodeGenerator(param0, param1, $tmp7);
return;

}
void org$frostlang$frostc$CCodeGenerator$init$frost$io$File$org$frostlang$frostc$HCodeGenerator(org$frostlang$frostc$CCodeGenerator* param0, frost$io$File* param1, org$frostlang$frostc$HCodeGenerator* param2) {

// line 41
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp8 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp8, ((frost$core$Object*) ((org$frostlang$frostc$Compiler*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$Weak** $tmp9 = &param0->compiler;
frost$core$Weak* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$Weak** $tmp11 = &param0->compiler;
*$tmp11 = $tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// line 47
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
frost$io$MemoryOutputStream* $tmp12 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$io$MemoryOutputStream** $tmp13 = &param0->strings;
frost$io$MemoryOutputStream* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$io$MemoryOutputStream** $tmp15 = &param0->strings;
*$tmp15 = $tmp12;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
// line 49
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
frost$collections$HashSet* $tmp16 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$collections$HashSet** $tmp17 = &param0->imports;
frost$collections$HashSet* $tmp18 = *$tmp17;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$collections$HashSet** $tmp19 = &param0->imports;
*$tmp19 = $tmp16;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
// line 56
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl** $tmp20 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp21 = *$tmp20;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
org$frostlang$frostc$ClassDecl** $tmp22 = &param0->currentClass;
*$tmp22 = ((org$frostlang$frostc$ClassDecl*) NULL);
// line 189
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
frost$io$MemoryOutputStream* $tmp23 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp23);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$io$MemoryOutputStream** $tmp24 = &param0->includes;
frost$io$MemoryOutputStream* $tmp25 = *$tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$io$MemoryOutputStream** $tmp26 = &param0->includes;
*$tmp26 = $tmp23;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
// line 191
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
frost$io$MemoryOutputStream* $tmp27 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp27);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$io$MemoryOutputStream** $tmp28 = &param0->declarations;
frost$io$MemoryOutputStream* $tmp29 = *$tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$io$MemoryOutputStream** $tmp30 = &param0->declarations;
*$tmp30 = $tmp27;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// line 193
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
frost$io$MemoryOutputStream* $tmp31 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp31);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
frost$io$MemoryOutputStream** $tmp32 = &param0->types;
frost$io$MemoryOutputStream* $tmp33 = *$tmp32;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$io$MemoryOutputStream** $tmp34 = &param0->types;
*$tmp34 = $tmp31;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
// line 195
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
frost$io$MemoryOutputStream* $tmp35 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp35);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$io$MemoryOutputStream** $tmp36 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp37 = *$tmp36;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$io$MemoryOutputStream** $tmp38 = &param0->methodsBuffer;
*$tmp38 = $tmp35;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// line 197
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp39 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream** $tmp40 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp41 = *$tmp40;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp39, ((frost$io$OutputStream*) $tmp41));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$io$IndentedOutputStream** $tmp42 = &param0->methods;
frost$io$IndentedOutputStream* $tmp43 = *$tmp42;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$io$IndentedOutputStream** $tmp44 = &param0->methods;
*$tmp44 = $tmp39;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
// line 199
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
frost$io$MemoryOutputStream* $tmp45 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp45);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
frost$io$MemoryOutputStream** $tmp46 = &param0->methodHeaderBuffer;
frost$io$MemoryOutputStream* $tmp47 = *$tmp46;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
frost$io$MemoryOutputStream** $tmp48 = &param0->methodHeaderBuffer;
*$tmp48 = $tmp45;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
// line 201
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp49 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream** $tmp50 = &param0->methodHeaderBuffer;
frost$io$MemoryOutputStream* $tmp51 = *$tmp50;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp49, ((frost$io$OutputStream*) $tmp51));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$io$IndentedOutputStream** $tmp52 = &param0->methodHeader;
frost$io$IndentedOutputStream* $tmp53 = *$tmp52;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$io$IndentedOutputStream** $tmp54 = &param0->methodHeader;
*$tmp54 = $tmp49;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// line 203
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
frost$io$MemoryOutputStream* $tmp55 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp55);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$io$MemoryOutputStream** $tmp56 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp57 = *$tmp56;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$io$MemoryOutputStream** $tmp58 = &param0->shimsBuffer;
*$tmp58 = $tmp55;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
// line 205
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp59 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream** $tmp60 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp61 = *$tmp60;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp59, ((frost$io$OutputStream*) $tmp61));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$io$IndentedOutputStream** $tmp62 = &param0->shims;
frost$io$IndentedOutputStream* $tmp63 = *$tmp62;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$io$IndentedOutputStream** $tmp64 = &param0->shims;
*$tmp64 = $tmp59;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// line 207
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
frost$collections$HashSet* $tmp65 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp65);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$collections$HashSet** $tmp66 = &param0->declared;
frost$collections$HashSet* $tmp67 = *$tmp66;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$collections$HashSet** $tmp68 = &param0->declared;
*$tmp68 = $tmp65;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// line 209
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
frost$collections$HashSet* $tmp69 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp69);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$collections$HashSet** $tmp70 = &param0->writtenTypes;
frost$collections$HashSet* $tmp71 = *$tmp70;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$collections$HashSet** $tmp72 = &param0->writtenTypes;
*$tmp72 = $tmp69;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// line 211
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
frost$collections$HashSet* $tmp73 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp73);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
frost$collections$HashSet** $tmp74 = &param0->writtenWrappers;
frost$collections$HashSet* $tmp75 = *$tmp74;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$collections$HashSet** $tmp76 = &param0->writtenWrappers;
*$tmp76 = $tmp73;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// line 213
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp77 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp77);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
frost$collections$HashMap** $tmp78 = &param0->classConstants;
frost$collections$HashMap* $tmp79 = *$tmp78;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
frost$collections$HashMap** $tmp80 = &param0->classConstants;
*$tmp80 = $tmp77;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
// line 215
FROST_ASSERT(56 == sizeof(frost$collections$IdentityMap));
frost$collections$IdentityMap* $tmp81 = (frost$collections$IdentityMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$IdentityMap$class);
frost$collections$IdentityMap$init($tmp81);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$collections$IdentityMap** $tmp82 = &param0->variableNames;
frost$collections$IdentityMap* $tmp83 = *$tmp82;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$collections$IdentityMap** $tmp84 = &param0->variableNames;
*$tmp84 = $tmp81;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
// line 223
FROST_ASSERT(24 == sizeof(frost$collections$Stack));
frost$collections$Stack* $tmp85 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp85);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$collections$Stack** $tmp86 = &param0->enclosingContexts;
frost$collections$Stack* $tmp87 = *$tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$collections$Stack** $tmp88 = &param0->enclosingContexts;
*$tmp88 = $tmp85;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// line 225
frost$core$Int64 $tmp89 = (frost$core$Int64) {0};
frost$core$Int64* $tmp90 = &param0->varCount;
*$tmp90 = $tmp89;
// line 227
FROST_ASSERT(56 == sizeof(frost$collections$IdentityMap));
frost$collections$IdentityMap* $tmp91 = (frost$collections$IdentityMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$IdentityMap$class);
frost$collections$IdentityMap$init($tmp91);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$collections$IdentityMap** $tmp92 = &param0->methodShims;
frost$collections$IdentityMap* $tmp93 = *$tmp92;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$collections$IdentityMap** $tmp94 = &param0->methodShims;
*$tmp94 = $tmp91;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// line 229
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp95 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp95);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$collections$HashMap** $tmp96 = &param0->refs;
frost$collections$HashMap* $tmp97 = *$tmp96;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$collections$HashMap** $tmp98 = &param0->refs;
*$tmp98 = $tmp95;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
// line 64
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp99 = &param0->outDir;
frost$io$File* $tmp100 = *$tmp99;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$io$File** $tmp101 = &param0->outDir;
*$tmp101 = param1;
// line 65
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp102 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
frost$io$MemoryOutputStream* $tmp103 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp103);
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp102, ((frost$io$OutputStream*) $tmp103));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$io$IndentedOutputStream** $tmp104 = &param0->out;
frost$io$IndentedOutputStream* $tmp105 = *$tmp104;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
frost$io$IndentedOutputStream** $tmp106 = &param0->out;
*$tmp106 = $tmp102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// line 66
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp107 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp107, ((frost$core$Object*) param2));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$core$Weak** $tmp108 = &param0->hCodeGen;
frost$core$Weak* $tmp109 = *$tmp108;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$core$Weak** $tmp110 = &param0->hCodeGen;
*$tmp110 = $tmp107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
return;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1) {

// line 70
frost$core$Weak** $tmp111 = &param0->hCodeGen;
frost$core$Weak* $tmp112 = *$tmp111;
frost$core$Object* $tmp113 = frost$core$Weak$get$R$frost$core$Weak$T($tmp112);
frost$core$String* $tmp114 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(((org$frostlang$frostc$HCodeGenerator*) $tmp113), param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$Frost$unref$frost$core$Object$Q($tmp113);
return $tmp114;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

// line 74
frost$core$Weak** $tmp115 = &param0->hCodeGen;
frost$core$Weak* $tmp116 = *$tmp115;
frost$core$Object* $tmp117 = frost$core$Weak$get$R$frost$core$Weak$T($tmp116);
frost$core$String* $tmp118 = org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(((org$frostlang$frostc$HCodeGenerator*) $tmp117), param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
frost$core$Frost$unref$frost$core$Object$Q($tmp117);
return $tmp118;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 78
frost$core$Weak** $tmp119 = &param0->hCodeGen;
frost$core$Weak* $tmp120 = *$tmp119;
frost$core$Object* $tmp121 = frost$core$Weak$get$R$frost$core$Weak$T($tmp120);
frost$core$Int64 $tmp122 = org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(((org$frostlang$frostc$HCodeGenerator*) $tmp121), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp121);
return $tmp122;

}
frost$core$Bit org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

// line 82
org$frostlang$frostc$ClassDecl** $tmp123 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp124 = *$tmp123;
bool $tmp125 = param1 != $tmp124;
frost$core$Bit $tmp126 = frost$core$Bit$init$builtin_bit($tmp125);
return $tmp126;

}
void org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 86
*(&local0) = ((frost$core$Error*) NULL);
// line 87
frost$core$String** $tmp127 = &param1->name;
frost$core$String* $tmp128 = *$tmp127;
frost$core$Bit $tmp129 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp128, &$s130);
bool $tmp131 = $tmp129.value;
if ($tmp131) goto block3; else goto block4;
block3:;
// line 88
frost$core$Error* $tmp132 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local0) = ((frost$core$Error*) NULL);
return;
block4:;
// line 90
frost$core$Weak** $tmp133 = &param0->hCodeGen;
frost$core$Weak* $tmp134 = *$tmp133;
frost$core$Object* $tmp135 = frost$core$Weak$get$R$frost$core$Weak$T($tmp134);
frost$core$String* $tmp136 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(((org$frostlang$frostc$HCodeGenerator*) $tmp135), param1, &$s137);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$String* $tmp138 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local1) = $tmp136;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Frost$unref$frost$core$Object$Q($tmp135);
// line 91
frost$collections$HashSet** $tmp139 = &param0->imports;
frost$collections$HashSet* $tmp140 = *$tmp139;
frost$core$String* $tmp141 = *(&local1);
frost$core$Bit $tmp142 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp140, ((frost$collections$Key*) $tmp141));
frost$core$Bit $tmp143 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp142);
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block5; else goto block6;
block5:;
// line 92
frost$io$MemoryOutputStream** $tmp145 = &param0->includes;
frost$io$MemoryOutputStream* $tmp146 = *$tmp145;
frost$core$String* $tmp147 = *(&local1);
frost$core$String* $tmp148 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s149, $tmp147);
frost$core$String* $tmp150 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp148, &$s151);
$fn153 $tmp152 = ($fn153) ((frost$io$OutputStream*) $tmp146)->$class->vtable[19];
frost$core$Error* $tmp154 = $tmp152(((frost$io$OutputStream*) $tmp146), $tmp150);
if ($tmp154 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local0) = $tmp154;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$String* $tmp155 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
// line 93
frost$collections$HashSet** $tmp156 = &param0->imports;
frost$collections$HashSet* $tmp157 = *$tmp156;
frost$core$String* $tmp158 = *(&local1);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp157, ((frost$collections$Key*) $tmp158));
goto block6;
block6:;
frost$core$String* $tmp159 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 97
frost$core$Int64 $tmp160 = (frost$core$Int64) {97};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s161, $tmp160);
abort(); // unreachable
block2:;
frost$core$Error* $tmp162 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// line 102
frost$core$Bit* $tmp163 = &param1->resolved;
frost$core$Bit $tmp164 = *$tmp163;
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp166 = (frost$core$Int64) {102};
frost$core$String* $tmp167 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s168, ((frost$core$Object*) param1));
frost$core$String* $tmp169 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp167, &$s170);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s171, $tmp166, $tmp169);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
abort(); // unreachable
block1:;
// line 103
frost$core$Bit $tmp172 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(param1);
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block3; else goto block4;
block3:;
// line 104
frost$core$Weak** $tmp174 = &param0->compiler;
frost$core$Weak* $tmp175 = *$tmp174;
frost$core$Object* $tmp176 = frost$core$Weak$get$R$frost$core$Weak$T($tmp175);
org$frostlang$frostc$ClassDecl* $tmp177 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp176), param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
org$frostlang$frostc$ClassDecl* $tmp178 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
*(&local0) = $tmp177;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$Frost$unref$frost$core$Object$Q($tmp176);
// line 105
org$frostlang$frostc$ClassDecl* $tmp179 = *(&local0);
frost$core$Bit $tmp180 = frost$core$Bit$init$builtin_bit($tmp179 != NULL);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp182 = (frost$core$Int64) {105};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s183, $tmp182);
abort(); // unreachable
block5:;
// line 106
org$frostlang$frostc$ClassDecl* $tmp184 = *(&local0);
org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(param0, $tmp184);
org$frostlang$frostc$ClassDecl* $tmp185 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block4;
block4:;
// line 108
org$frostlang$frostc$Type$Kind* $tmp186 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp187 = *$tmp186;
frost$core$Int64 $tmp188 = $tmp187.$rawValue;
frost$core$Int64 $tmp189 = (frost$core$Int64) {16};
frost$core$Bit $tmp190 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp188, $tmp189);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp192 = (frost$core$Int64) {15};
frost$core$Bit $tmp193 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp188, $tmp192);
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block8; else goto block10;
block8:;
// line 110
org$frostlang$frostc$Type* $tmp195 = org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
frost$core$String* $tmp196 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp195);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
return $tmp196;
block10:;
frost$core$Int64 $tmp197 = (frost$core$Int64) {18};
frost$core$Bit $tmp198 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp188, $tmp197);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp200 = (frost$core$Int64) {17};
frost$core$Bit $tmp201 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp188, $tmp200);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block11; else goto block13;
block11:;
// line 113
org$frostlang$frostc$Type* $tmp203 = org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
frost$core$String* $tmp204 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp203);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
return $tmp204;
block13:;
frost$core$Int64 $tmp205 = (frost$core$Int64) {11};
frost$core$Bit $tmp206 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp188, $tmp205);
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block14; else goto block7;
block14:;
// line 116
org$frostlang$frostc$FixedArray* $tmp208 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp209 = (frost$core$Int64) {0};
frost$core$Object* $tmp210 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp208, $tmp209);
frost$core$String** $tmp211 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp210))->name;
frost$core$String* $tmp212 = *$tmp211;
frost$core$Bit $tmp213 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp212, &$s214);
bool $tmp215 = $tmp213.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp210);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
if ($tmp215) goto block17; else goto block16;
block17:;
org$frostlang$frostc$FixedArray* $tmp216 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp217 = (frost$core$Int64) {1};
frost$core$Object* $tmp218 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp216, $tmp217);
frost$core$Bit $tmp219 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp218));
bool $tmp220 = $tmp219.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp218);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
if ($tmp220) goto block15; else goto block16;
block15:;
// line 117
org$frostlang$frostc$FixedArray* $tmp221 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp222 = (frost$core$Int64) {1};
frost$core$Object* $tmp223 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp221, $tmp222);
frost$core$String* $tmp224 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp223), ((org$frostlang$frostc$Type*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$Frost$unref$frost$core$Object$Q($tmp223);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
return $tmp224;
block16:;
goto block7;
block7:;
// line 121
frost$core$Weak** $tmp225 = &param0->hCodeGen;
frost$core$Weak* $tmp226 = *$tmp225;
frost$core$Object* $tmp227 = frost$core$Weak$get$R$frost$core$Weak$T($tmp226);
frost$core$String* $tmp228 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(((org$frostlang$frostc$HCodeGenerator*) $tmp227), param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$core$Frost$unref$frost$core$Object$Q($tmp227);
return $tmp228;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$Type* param2) {

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$Int64 local3;
frost$core$Error* local4 = NULL;
org$frostlang$frostc$Type$Kind* $tmp229 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp230 = *$tmp229;
org$frostlang$frostc$Type$Kind$wrapper* $tmp231;
$tmp231 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp231->value = $tmp230;
frost$core$Int64 $tmp232 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp233 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp232);
org$frostlang$frostc$Type$Kind$wrapper* $tmp234;
$tmp234 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp234->value = $tmp233;
ITable* $tmp235 = ((frost$core$Equatable*) $tmp231)->$class->itable;
while ($tmp235->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp235 = $tmp235->next;
}
$fn237 $tmp236 = $tmp235->methods[0];
frost$core$Bit $tmp238 = $tmp236(((frost$core$Equatable*) $tmp231), ((frost$core$Equatable*) $tmp234));
bool $tmp239 = $tmp238.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp234)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp231)));
if ($tmp239) goto block1; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp240 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp241 = *$tmp240;
org$frostlang$frostc$Type$Kind$wrapper* $tmp242;
$tmp242 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp242->value = $tmp241;
frost$core$Int64 $tmp243 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp244 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp243);
org$frostlang$frostc$Type$Kind$wrapper* $tmp245;
$tmp245 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp245->value = $tmp244;
ITable* $tmp246 = ((frost$core$Equatable*) $tmp242)->$class->itable;
while ($tmp246->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp246 = $tmp246->next;
}
$fn248 $tmp247 = $tmp246->methods[0];
frost$core$Bit $tmp249 = $tmp247(((frost$core$Equatable*) $tmp242), ((frost$core$Equatable*) $tmp245));
bool $tmp250 = $tmp249.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp245)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp242)));
if ($tmp250) goto block1; else goto block4;
block4:;
org$frostlang$frostc$Type$Kind* $tmp251 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp252 = *$tmp251;
org$frostlang$frostc$Type$Kind$wrapper* $tmp253;
$tmp253 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp253->value = $tmp252;
frost$core$Int64 $tmp254 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp255 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp254);
org$frostlang$frostc$Type$Kind$wrapper* $tmp256;
$tmp256 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp256->value = $tmp255;
ITable* $tmp257 = ((frost$core$Equatable*) $tmp253)->$class->itable;
while ($tmp257->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp257 = $tmp257->next;
}
$fn259 $tmp258 = $tmp257->methods[0];
frost$core$Bit $tmp260 = $tmp258(((frost$core$Equatable*) $tmp253), ((frost$core$Equatable*) $tmp256));
bool $tmp261 = $tmp260.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp256)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp253)));
if ($tmp261) goto block1; else goto block3;
block3:;
org$frostlang$frostc$Type$Kind* $tmp262 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp263 = *$tmp262;
org$frostlang$frostc$Type$Kind$wrapper* $tmp264;
$tmp264 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp264->value = $tmp263;
frost$core$Int64 $tmp265 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp266 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp265);
org$frostlang$frostc$Type$Kind$wrapper* $tmp267;
$tmp267 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp267->value = $tmp266;
ITable* $tmp268 = ((frost$core$Equatable*) $tmp264)->$class->itable;
while ($tmp268->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp268 = $tmp268->next;
}
$fn270 $tmp269 = $tmp268->methods[0];
frost$core$Bit $tmp271 = $tmp269(((frost$core$Equatable*) $tmp264), ((frost$core$Equatable*) $tmp267));
bool $tmp272 = $tmp271.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp267)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp264)));
if ($tmp272) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp273 = (frost$core$Int64) {126};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s274, $tmp273, &$s275);
abort(); // unreachable
block1:;
// line 127
frost$core$Int64* $tmp276 = &param0->varCount;
frost$core$Int64 $tmp277 = *$tmp276;
frost$core$Int64 $tmp278 = (frost$core$Int64) {1};
int64_t $tmp279 = $tmp277.value;
int64_t $tmp280 = $tmp278.value;
int64_t $tmp281 = $tmp279 + $tmp280;
frost$core$Int64 $tmp282 = (frost$core$Int64) {$tmp281};
frost$core$Int64* $tmp283 = &param0->varCount;
*$tmp283 = $tmp282;
// line 128
frost$core$Int64* $tmp284 = &param0->varCount;
frost$core$Int64 $tmp285 = *$tmp284;
frost$core$Int64$wrapper* $tmp286;
$tmp286 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp286->value = $tmp285;
frost$core$String* $tmp287 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s288, ((frost$core$Object*) $tmp286));
frost$core$String* $tmp289 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp287, &$s290);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
frost$core$String* $tmp291 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
*(&local0) = $tmp289;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
// line 129
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp292 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp292, &$s293);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
frost$core$MutableString* $tmp294 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
*(&local1) = $tmp292;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
// line 130
frost$core$MutableString* $tmp295 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp296 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
org$frostlang$frostc$FixedArray* $tmp297 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
ITable* $tmp298 = ((frost$collections$CollectionView*) $tmp297)->$class->itable;
while ($tmp298->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp298 = $tmp298->next;
}
$fn300 $tmp299 = $tmp298->methods[0];
frost$core$Int64 $tmp301 = $tmp299(((frost$collections$CollectionView*) $tmp297));
frost$core$Int64 $tmp302 = (frost$core$Int64) {1};
int64_t $tmp303 = $tmp301.value;
int64_t $tmp304 = $tmp302.value;
int64_t $tmp305 = $tmp303 - $tmp304;
frost$core$Int64 $tmp306 = (frost$core$Int64) {$tmp305};
frost$core$Object* $tmp307 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp296, $tmp306);
frost$core$String* $tmp308 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp307));
frost$core$MutableString$append$frost$core$String($tmp295, $tmp308);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
frost$core$Frost$unref$frost$core$Object$Q($tmp307);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
// line 131
frost$core$MutableString* $tmp309 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp309, &$s310);
// line 132
frost$core$MutableString* $tmp311 = *(&local1);
frost$core$String* $tmp312 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp311, $tmp312);
// line 133
frost$core$MutableString* $tmp313 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp313, &$s314);
// line 134
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s315));
frost$core$String* $tmp316 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
*(&local2) = &$s317;
// line 135
frost$core$Bit $tmp318 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block6; else goto block7;
block6:;
// line 136
frost$core$MutableString* $tmp320 = *(&local1);
frost$core$String* $tmp321 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param2);
frost$core$MutableString$append$frost$core$String($tmp320, $tmp321);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
// line 137
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s322));
frost$core$String* $tmp323 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local2) = &$s324;
goto block7;
block7:;
// line 139
frost$core$Int64 $tmp325 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp326 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
ITable* $tmp327 = ((frost$collections$CollectionView*) $tmp326)->$class->itable;
while ($tmp327->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp327 = $tmp327->next;
}
$fn329 $tmp328 = $tmp327->methods[0];
frost$core$Int64 $tmp330 = $tmp328(((frost$collections$CollectionView*) $tmp326));
frost$core$Int64 $tmp331 = (frost$core$Int64) {1};
int64_t $tmp332 = $tmp330.value;
int64_t $tmp333 = $tmp331.value;
int64_t $tmp334 = $tmp332 - $tmp333;
frost$core$Int64 $tmp335 = (frost$core$Int64) {$tmp334};
frost$core$Bit $tmp336 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp337 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp325, $tmp335, $tmp336);
frost$core$Int64 $tmp338 = $tmp337.min;
*(&local3) = $tmp338;
frost$core$Int64 $tmp339 = $tmp337.max;
frost$core$Bit $tmp340 = $tmp337.inclusive;
bool $tmp341 = $tmp340.value;
frost$core$Int64 $tmp342 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp343 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp342);
if ($tmp341) goto block11; else goto block12;
block11:;
int64_t $tmp344 = $tmp338.value;
int64_t $tmp345 = $tmp339.value;
bool $tmp346 = $tmp344 <= $tmp345;
frost$core$Bit $tmp347 = (frost$core$Bit) {$tmp346};
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block8; else goto block9;
block12:;
int64_t $tmp349 = $tmp338.value;
int64_t $tmp350 = $tmp339.value;
bool $tmp351 = $tmp349 < $tmp350;
frost$core$Bit $tmp352 = (frost$core$Bit) {$tmp351};
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block8; else goto block9;
block8:;
// line 140
frost$core$MutableString* $tmp354 = *(&local1);
frost$core$String* $tmp355 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp354, $tmp355);
// line 141
frost$core$MutableString* $tmp356 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp357 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp358 = *(&local3);
frost$core$Object* $tmp359 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp357, $tmp358);
frost$core$String* $tmp360 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp359));
frost$core$MutableString$append$frost$core$String($tmp356, $tmp360);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
frost$core$Frost$unref$frost$core$Object$Q($tmp359);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
// line 142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s361));
frost$core$String* $tmp362 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local2) = &$s363;
goto block10;
block10:;
frost$core$Int64 $tmp364 = *(&local3);
int64_t $tmp365 = $tmp339.value;
int64_t $tmp366 = $tmp364.value;
int64_t $tmp367 = $tmp365 - $tmp366;
frost$core$Int64 $tmp368 = (frost$core$Int64) {$tmp367};
frost$core$UInt64 $tmp369 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp368);
if ($tmp341) goto block14; else goto block15;
block14:;
uint64_t $tmp370 = $tmp369.value;
uint64_t $tmp371 = $tmp343.value;
bool $tmp372 = $tmp370 >= $tmp371;
frost$core$Bit $tmp373 = (frost$core$Bit) {$tmp372};
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block13; else goto block9;
block15:;
uint64_t $tmp375 = $tmp369.value;
uint64_t $tmp376 = $tmp343.value;
bool $tmp377 = $tmp375 > $tmp376;
frost$core$Bit $tmp378 = (frost$core$Bit) {$tmp377};
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block13; else goto block9;
block13:;
int64_t $tmp380 = $tmp364.value;
int64_t $tmp381 = $tmp342.value;
int64_t $tmp382 = $tmp380 + $tmp381;
frost$core$Int64 $tmp383 = (frost$core$Int64) {$tmp382};
*(&local3) = $tmp383;
goto block8;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
// line 144
frost$core$MutableString* $tmp384 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp384, &$s385);
// line 145
*(&local4) = ((frost$core$Error*) NULL);
// line 146
frost$io$MemoryOutputStream** $tmp386 = &param0->types;
frost$io$MemoryOutputStream* $tmp387 = *$tmp386;
frost$core$MutableString* $tmp388 = *(&local1);
frost$core$String* $tmp389 = frost$core$MutableString$finish$R$frost$core$String($tmp388);
$fn391 $tmp390 = ($fn391) ((frost$io$OutputStream*) $tmp387)->$class->vtable[19];
frost$core$Error* $tmp392 = $tmp390(((frost$io$OutputStream*) $tmp387), $tmp389);
if ($tmp392 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
*(&local4) = $tmp392;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
goto block16;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
goto block17;
block16:;
// line 149
frost$core$Int64 $tmp393 = (frost$core$Int64) {149};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s394, $tmp393);
abort(); // unreachable
block17:;
frost$core$Error* $tmp395 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local4) = ((frost$core$Error*) NULL);
// line 151
frost$core$String* $tmp396 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
frost$core$String* $tmp397 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp398 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp399 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local0) = ((frost$core$String*) NULL);
return $tmp396;

}
void org$frostlang$frostc$CCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Compiler* param1) {

// line 156
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp400 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp400, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
frost$core$Weak** $tmp401 = &param0->compiler;
frost$core$Weak* $tmp402 = *$tmp401;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
frost$core$Weak** $tmp403 = &param0->compiler;
*$tmp403 = $tmp400;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
// line 157
frost$core$Weak** $tmp404 = &param0->hCodeGen;
frost$core$Weak* $tmp405 = *$tmp404;
frost$core$Object* $tmp406 = frost$core$Weak$get$R$frost$core$Weak$T($tmp405);
org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(((org$frostlang$frostc$HCodeGenerator*) $tmp406), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp406);
return;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0) {

// line 234
frost$core$Int64* $tmp407 = &param0->varCount;
frost$core$Int64 $tmp408 = *$tmp407;
frost$core$Int64 $tmp409 = (frost$core$Int64) {1};
int64_t $tmp410 = $tmp408.value;
int64_t $tmp411 = $tmp409.value;
int64_t $tmp412 = $tmp410 + $tmp411;
frost$core$Int64 $tmp413 = (frost$core$Int64) {$tmp412};
frost$core$Int64* $tmp414 = &param0->varCount;
*$tmp414 = $tmp413;
// line 235
frost$core$Int64* $tmp415 = &param0->varCount;
frost$core$Int64 $tmp416 = *$tmp415;
frost$core$Int64$wrapper* $tmp417;
$tmp417 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp417->value = $tmp416;
frost$core$String* $tmp418 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s419, ((frost$core$Object*) $tmp417));
frost$core$String* $tmp420 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp418, &$s421);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
return $tmp420;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$nextLabel$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0) {

// line 239
frost$core$Int64* $tmp422 = &param0->varCount;
frost$core$Int64 $tmp423 = *$tmp422;
frost$core$Int64 $tmp424 = (frost$core$Int64) {1};
int64_t $tmp425 = $tmp423.value;
int64_t $tmp426 = $tmp424.value;
int64_t $tmp427 = $tmp425 + $tmp426;
frost$core$Int64 $tmp428 = (frost$core$Int64) {$tmp427};
frost$core$Int64* $tmp429 = &param0->varCount;
*$tmp429 = $tmp428;
// line 240
frost$core$Int64* $tmp430 = &param0->varCount;
frost$core$Int64 $tmp431 = *$tmp430;
frost$core$Int64$wrapper* $tmp432;
$tmp432 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp432->value = $tmp431;
frost$core$String* $tmp433 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s434, ((frost$core$Object*) $tmp432));
frost$core$String* $tmp435 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp433, &$s436);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
return $tmp435;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 244
frost$core$Weak** $tmp437 = &param0->hCodeGen;
frost$core$Weak* $tmp438 = *$tmp437;
frost$core$Object* $tmp439 = frost$core$Weak$get$R$frost$core$Weak$T($tmp438);
org$frostlang$frostc$LLVMCodeGenerator** $tmp440 = &((org$frostlang$frostc$HCodeGenerator*) $tmp439)->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp441 = *$tmp440;
frost$core$Int64 $tmp442 = org$frostlang$frostc$LLVMCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64($tmp441, param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp439);
return $tmp442;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$alignment$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 248
frost$core$Weak** $tmp443 = &param0->hCodeGen;
frost$core$Weak* $tmp444 = *$tmp443;
frost$core$Object* $tmp445 = frost$core$Weak$get$R$frost$core$Weak$T($tmp444);
org$frostlang$frostc$LLVMCodeGenerator** $tmp446 = &((org$frostlang$frostc$HCodeGenerator*) $tmp445)->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp447 = *$tmp446;
frost$core$Int64 $tmp448 = org$frostlang$frostc$LLVMCodeGenerator$alignment$org$frostlang$frostc$Type$R$frost$core$Int64($tmp447, param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp445);
return $tmp448;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 252
frost$core$Weak** $tmp449 = &param0->hCodeGen;
frost$core$Weak* $tmp450 = *$tmp449;
frost$core$Object* $tmp451 = frost$core$Weak$get$R$frost$core$Weak$T($tmp450);
org$frostlang$frostc$LLVMCodeGenerator** $tmp452 = &((org$frostlang$frostc$HCodeGenerator*) $tmp451)->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp453 = *$tmp452;
frost$core$Int64 $tmp454 = org$frostlang$frostc$LLVMCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64($tmp453, param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp451);
return $tmp454;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$sizeOfWrapper$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
frost$core$Bit local1;
frost$core$Int64 local2;
org$frostlang$frostc$FieldDecl* local3 = NULL;
frost$core$Int64 local4;
frost$core$Int64 local5;
// line 256
frost$core$Weak** $tmp455 = &param0->compiler;
frost$core$Weak* $tmp456 = *$tmp455;
frost$core$Object* $tmp457 = frost$core$Weak$get$R$frost$core$Weak$T($tmp456);
org$frostlang$frostc$ClassDecl* $tmp458 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp457), param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
org$frostlang$frostc$ClassDecl* $tmp459 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
*(&local0) = $tmp458;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
frost$core$Frost$unref$frost$core$Object$Q($tmp457);
// line 257
org$frostlang$frostc$ClassDecl* $tmp460 = *(&local0);
frost$core$Bit $tmp461 = frost$core$Bit$init$builtin_bit($tmp460 != NULL);
bool $tmp462 = $tmp461.value;
if ($tmp462) goto block1; else goto block2;
block1:;
frost$core$Weak** $tmp463 = &param0->compiler;
frost$core$Weak* $tmp464 = *$tmp463;
frost$core$Object* $tmp465 = frost$core$Weak$get$R$frost$core$Weak$T($tmp464);
org$frostlang$frostc$ClassDecl* $tmp466 = *(&local0);
frost$core$Bit $tmp467 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp465), $tmp466);
frost$core$Frost$unref$frost$core$Object$Q($tmp465);
*(&local1) = $tmp467;
goto block3;
block2:;
*(&local1) = $tmp461;
goto block3;
block3:;
frost$core$Bit $tmp468 = *(&local1);
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp470 = (frost$core$Int64) {257};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s471, $tmp470);
abort(); // unreachable
block4:;
// line 258
org$frostlang$frostc$Type* $tmp472 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Int64 $tmp473 = org$frostlang$frostc$CCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp472);
*(&local2) = $tmp473;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
// line 259
frost$core$Weak** $tmp474 = &param0->compiler;
frost$core$Weak* $tmp475 = *$tmp474;
frost$core$Object* $tmp476 = frost$core$Weak$get$R$frost$core$Weak$T($tmp475);
org$frostlang$frostc$ClassDecl* $tmp477 = *(&local0);
frost$collections$ListView* $tmp478 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp476), $tmp477);
ITable* $tmp479 = ((frost$collections$Iterable*) $tmp478)->$class->itable;
while ($tmp479->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp479 = $tmp479->next;
}
$fn481 $tmp480 = $tmp479->methods[0];
frost$collections$Iterator* $tmp482 = $tmp480(((frost$collections$Iterable*) $tmp478));
goto block6;
block6:;
ITable* $tmp483 = $tmp482->$class->itable;
while ($tmp483->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp483 = $tmp483->next;
}
$fn485 $tmp484 = $tmp483->methods[0];
frost$core$Bit $tmp486 = $tmp484($tmp482);
bool $tmp487 = $tmp486.value;
if ($tmp487) goto block8; else goto block7;
block7:;
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp488 = $tmp482->$class->itable;
while ($tmp488->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp488 = $tmp488->next;
}
$fn490 $tmp489 = $tmp488->methods[1];
frost$core$Object* $tmp491 = $tmp489($tmp482);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp491)));
org$frostlang$frostc$FieldDecl* $tmp492 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) $tmp491);
// line 260
frost$core$Weak** $tmp493 = &param0->compiler;
frost$core$Weak* $tmp494 = *$tmp493;
frost$core$Object* $tmp495 = frost$core$Weak$get$R$frost$core$Weak$T($tmp494);
org$frostlang$frostc$FieldDecl* $tmp496 = *(&local3);
frost$core$Bit $tmp497 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp495), $tmp496);
frost$core$Frost$unref$frost$core$Object$Q($tmp495);
// line 261
org$frostlang$frostc$FieldDecl* $tmp498 = *(&local3);
org$frostlang$frostc$Type** $tmp499 = &$tmp498->type;
org$frostlang$frostc$Type* $tmp500 = *$tmp499;
org$frostlang$frostc$Type* $tmp501 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp502 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp500, $tmp501);
bool $tmp503 = $tmp502.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
if ($tmp503) goto block9; else goto block11;
block9:;
// line 263
frost$core$Int64 $tmp504 = *(&local2);
frost$core$Weak** $tmp505 = &param0->hCodeGen;
frost$core$Weak* $tmp506 = *$tmp505;
frost$core$Object* $tmp507 = frost$core$Weak$get$R$frost$core$Weak$T($tmp506);
org$frostlang$frostc$LLVMCodeGenerator** $tmp508 = &((org$frostlang$frostc$HCodeGenerator*) $tmp507)->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp509 = *$tmp508;
org$frostlang$frostc$ClassDecl* $tmp510 = *(&local0);
frost$core$Int64 $tmp511 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64($tmp509, $tmp510);
int64_t $tmp512 = $tmp504.value;
int64_t $tmp513 = $tmp511.value;
int64_t $tmp514 = $tmp512 + $tmp513;
frost$core$Int64 $tmp515 = (frost$core$Int64) {$tmp514};
*(&local2) = $tmp515;
frost$core$Frost$unref$frost$core$Object$Q($tmp507);
goto block10;
block11:;
// line 1
// line 266
org$frostlang$frostc$FieldDecl* $tmp516 = *(&local3);
org$frostlang$frostc$Type** $tmp517 = &$tmp516->type;
org$frostlang$frostc$Type* $tmp518 = *$tmp517;
frost$core$Int64 $tmp519 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp518);
*(&local4) = $tmp519;
// line 267
frost$core$Int64 $tmp520 = *(&local2);
frost$core$Int64 $tmp521 = *(&local4);
frost$core$Int64 $tmp522 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp520, $tmp521);
*(&local5) = $tmp522;
// line 268
frost$core$Int64 $tmp523 = *(&local5);
frost$core$Int64 $tmp524 = (frost$core$Int64) {0};
int64_t $tmp525 = $tmp523.value;
int64_t $tmp526 = $tmp524.value;
bool $tmp527 = $tmp525 != $tmp526;
frost$core$Bit $tmp528 = (frost$core$Bit) {$tmp527};
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block12; else goto block13;
block12:;
// line 269
frost$core$Int64 $tmp530 = *(&local2);
frost$core$Int64 $tmp531 = *(&local4);
frost$core$Int64 $tmp532 = *(&local5);
int64_t $tmp533 = $tmp531.value;
int64_t $tmp534 = $tmp532.value;
int64_t $tmp535 = $tmp533 - $tmp534;
frost$core$Int64 $tmp536 = (frost$core$Int64) {$tmp535};
int64_t $tmp537 = $tmp530.value;
int64_t $tmp538 = $tmp536.value;
int64_t $tmp539 = $tmp537 + $tmp538;
frost$core$Int64 $tmp540 = (frost$core$Int64) {$tmp539};
*(&local2) = $tmp540;
goto block13;
block13:;
// line 271
frost$core$Int64 $tmp541 = *(&local2);
frost$core$Int64 $tmp542 = *(&local4);
frost$core$Int64 $tmp543 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp541, $tmp542);
frost$core$Int64 $tmp544 = (frost$core$Int64) {0};
frost$core$Bit $tmp545 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp543, $tmp544);
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp547 = (frost$core$Int64) {271};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s548, $tmp547);
abort(); // unreachable
block14:;
// line 272
frost$core$Int64 $tmp549 = *(&local2);
frost$core$Int64 $tmp550 = *(&local4);
int64_t $tmp551 = $tmp549.value;
int64_t $tmp552 = $tmp550.value;
int64_t $tmp553 = $tmp551 + $tmp552;
frost$core$Int64 $tmp554 = (frost$core$Int64) {$tmp553};
*(&local2) = $tmp554;
goto block10;
block10:;
frost$core$Frost$unref$frost$core$Object$Q($tmp491);
org$frostlang$frostc$FieldDecl* $tmp555 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
frost$core$Frost$unref$frost$core$Object$Q($tmp476);
// line 275
org$frostlang$frostc$Type$Kind* $tmp556 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp557 = *$tmp556;
org$frostlang$frostc$Type$Kind$wrapper* $tmp558;
$tmp558 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp558->value = $tmp557;
frost$core$Int64 $tmp559 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp560 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp559);
org$frostlang$frostc$Type$Kind$wrapper* $tmp561;
$tmp561 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp561->value = $tmp560;
ITable* $tmp562 = ((frost$core$Equatable*) $tmp558)->$class->itable;
while ($tmp562->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp562 = $tmp562->next;
}
$fn564 $tmp563 = $tmp562->methods[0];
frost$core$Bit $tmp565 = $tmp563(((frost$core$Equatable*) $tmp558), ((frost$core$Equatable*) $tmp561));
bool $tmp566 = $tmp565.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp561)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp558)));
if ($tmp566) goto block16; else goto block17;
block16:;
// line 276
frost$core$Int64 $tmp567 = *(&local2);
frost$core$Int64 $tmp568 = (frost$core$Int64) {1};
int64_t $tmp569 = $tmp567.value;
int64_t $tmp570 = $tmp568.value;
int64_t $tmp571 = $tmp569 + $tmp570;
frost$core$Int64 $tmp572 = (frost$core$Int64) {$tmp571};
*(&local2) = $tmp572;
goto block17;
block17:;
// line 278
frost$core$Int64 $tmp573 = *(&local2);
org$frostlang$frostc$ClassDecl* $tmp574 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp573;

}
void org$frostlang$frostc$CCodeGenerator$writeType$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 282
frost$collections$HashSet** $tmp575 = &param0->writtenTypes;
frost$collections$HashSet* $tmp576 = *$tmp575;
frost$core$String** $tmp577 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp578 = *$tmp577;
frost$core$Bit $tmp579 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp576, ((frost$collections$Key*) $tmp578));
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block1; else goto block2;
block1:;
// line 283
return;
block2:;
return;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$typeName$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 288
frost$core$String** $tmp581 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp582 = *$tmp581;
frost$core$String* $tmp583 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp582);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
return $tmp583;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// line 292
frost$core$Weak** $tmp584 = &param0->compiler;
frost$core$Weak* $tmp585 = *$tmp584;
frost$core$Object* $tmp586 = frost$core$Weak$get$R$frost$core$Weak$T($tmp585);
org$frostlang$frostc$ClassDecl* $tmp587 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp586), param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
org$frostlang$frostc$ClassDecl* $tmp588 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
*(&local0) = $tmp587;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
frost$core$Frost$unref$frost$core$Object$Q($tmp586);
// line 293
org$frostlang$frostc$ClassDecl* $tmp589 = *(&local0);
frost$core$Bit $tmp590 = frost$core$Bit$init$builtin_bit($tmp589 != NULL);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp592 = (frost$core$Int64) {293};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s593, $tmp592);
abort(); // unreachable
block1:;
// line 294
org$frostlang$frostc$ClassDecl* $tmp594 = *(&local0);
org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(param0, $tmp594);
// line 295
org$frostlang$frostc$Type$Kind* $tmp595 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp596 = *$tmp595;
org$frostlang$frostc$Type$Kind$wrapper* $tmp597;
$tmp597 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp597->value = $tmp596;
frost$core$Int64 $tmp598 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp599 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp598);
org$frostlang$frostc$Type$Kind$wrapper* $tmp600;
$tmp600 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp600->value = $tmp599;
ITable* $tmp601 = ((frost$core$Equatable*) $tmp597)->$class->itable;
while ($tmp601->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp601 = $tmp601->next;
}
$fn603 $tmp602 = $tmp601->methods[0];
frost$core$Bit $tmp604 = $tmp602(((frost$core$Equatable*) $tmp597), ((frost$core$Equatable*) $tmp600));
bool $tmp605 = $tmp604.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp600)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp597)));
if ($tmp605) goto block3; else goto block4;
block3:;
// line 296
org$frostlang$frostc$FixedArray* $tmp606 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp607 = (frost$core$Int64) {0};
frost$core$Object* $tmp608 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp606, $tmp607);
frost$core$String* $tmp609 = org$frostlang$frostc$CCodeGenerator$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp608));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
frost$core$Frost$unref$frost$core$Object$Q($tmp608);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
org$frostlang$frostc$ClassDecl* $tmp610 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp609;
block4:;
// line 298
frost$core$String** $tmp611 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp612 = *$tmp611;
frost$core$String* $tmp613 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp612);
frost$core$String* $tmp614 = frost$core$String$get_asString$R$frost$core$String($tmp613);
frost$core$String* $tmp615 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp614, &$s616);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
org$frostlang$frostc$ClassDecl* $tmp617 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp615;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 302
frost$core$String* $tmp618 = org$frostlang$frostc$CCodeGenerator$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp619 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp618, &$s620);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
return $tmp619;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

org$frostlang$frostc$Type* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$Int64 local2;
// line 306
frost$core$Weak** $tmp621 = &param0->compiler;
frost$core$Weak* $tmp622 = *$tmp621;
frost$core$Object* $tmp623 = frost$core$Weak$get$R$frost$core$Weak$T($tmp622);
org$frostlang$frostc$Type* $tmp624 = org$frostlang$frostc$Compiler$inheritedType$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp623), param1);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
org$frostlang$frostc$Type* $tmp625 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
*(&local0) = $tmp624;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
frost$core$Frost$unref$frost$core$Object$Q($tmp623);
// line 307
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp626 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp626);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
frost$core$MutableString* $tmp627 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
*(&local1) = $tmp626;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
// line 308
frost$core$MutableString* $tmp628 = *(&local1);
org$frostlang$frostc$Type* $tmp629 = *(&local0);
org$frostlang$frostc$Type* $tmp630 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp629);
frost$core$String* $tmp631 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp630);
frost$core$MutableString$append$frost$core$String($tmp628, $tmp631);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
// line 309
frost$core$MutableString* $tmp632 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp632, &$s633);
// line 310
frost$core$Bit $tmp634 = org$frostlang$frostc$MethodDecl$isInstance$R$frost$core$Bit(param1);
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp636 = (frost$core$Int64) {310};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s637, $tmp636);
abort(); // unreachable
block1:;
// line 311
frost$core$MutableString* $tmp638 = *(&local1);
frost$core$Weak** $tmp639 = &param1->owner;
frost$core$Weak* $tmp640 = *$tmp639;
frost$core$Object* $tmp641 = frost$core$Weak$get$R$frost$core$Weak$T($tmp640);
frost$core$String** $tmp642 = &((org$frostlang$frostc$ClassDecl*) $tmp641)->name;
frost$core$String* $tmp643 = *$tmp642;
frost$core$String* $tmp644 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp643);
frost$core$String* $tmp645 = frost$core$String$get_asString$R$frost$core$String($tmp644);
frost$core$String* $tmp646 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp645, &$s647);
frost$core$MutableString$append$frost$core$String($tmp638, $tmp646);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
frost$core$Frost$unref$frost$core$Object$Q($tmp641);
// line 312
frost$core$Weak** $tmp648 = &param0->compiler;
frost$core$Weak* $tmp649 = *$tmp648;
frost$core$Object* $tmp650 = frost$core$Weak$get$R$frost$core$Weak$T($tmp649);
frost$core$Weak** $tmp651 = &param1->owner;
frost$core$Weak* $tmp652 = *$tmp651;
frost$core$Object* $tmp653 = frost$core$Weak$get$R$frost$core$Weak$T($tmp652);
frost$core$Bit $tmp654 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp650), ((org$frostlang$frostc$ClassDecl*) $tmp653));
bool $tmp655 = $tmp654.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp653);
frost$core$Frost$unref$frost$core$Object$Q($tmp650);
if ($tmp655) goto block3; else goto block4;
block3:;
// line 313
frost$core$MutableString* $tmp656 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp656, &$s657);
goto block4;
block4:;
// line 315
frost$core$MutableString* $tmp658 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp658, &$s659);
// line 316
frost$core$Int64 $tmp660 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp661 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp662 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp661);
ITable* $tmp663 = ((frost$collections$CollectionView*) $tmp662)->$class->itable;
while ($tmp663->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp663 = $tmp663->next;
}
$fn665 $tmp664 = $tmp663->methods[0];
frost$core$Int64 $tmp666 = $tmp664(((frost$collections$CollectionView*) $tmp662));
frost$core$Int64 $tmp667 = (frost$core$Int64) {1};
int64_t $tmp668 = $tmp666.value;
int64_t $tmp669 = $tmp667.value;
int64_t $tmp670 = $tmp668 - $tmp669;
frost$core$Int64 $tmp671 = (frost$core$Int64) {$tmp670};
frost$core$Bit $tmp672 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp673 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp660, $tmp671, $tmp672);
frost$core$Int64 $tmp674 = $tmp673.min;
*(&local2) = $tmp674;
frost$core$Int64 $tmp675 = $tmp673.max;
frost$core$Bit $tmp676 = $tmp673.inclusive;
bool $tmp677 = $tmp676.value;
frost$core$Int64 $tmp678 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp679 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp678);
if ($tmp677) goto block8; else goto block9;
block8:;
int64_t $tmp680 = $tmp674.value;
int64_t $tmp681 = $tmp675.value;
bool $tmp682 = $tmp680 <= $tmp681;
frost$core$Bit $tmp683 = (frost$core$Bit) {$tmp682};
bool $tmp684 = $tmp683.value;
if ($tmp684) goto block5; else goto block6;
block9:;
int64_t $tmp685 = $tmp674.value;
int64_t $tmp686 = $tmp675.value;
bool $tmp687 = $tmp685 < $tmp686;
frost$core$Bit $tmp688 = (frost$core$Bit) {$tmp687};
bool $tmp689 = $tmp688.value;
if ($tmp689) goto block5; else goto block6;
block5:;
// line 317
frost$core$MutableString* $tmp690 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp690, &$s691);
// line 318
frost$core$MutableString* $tmp692 = *(&local1);
org$frostlang$frostc$Type* $tmp693 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp694 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp693);
frost$core$Int64 $tmp695 = *(&local2);
frost$core$Object* $tmp696 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp694, $tmp695);
frost$core$String* $tmp697 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp696));
frost$core$MutableString$append$frost$core$String($tmp692, $tmp697);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
frost$core$Frost$unref$frost$core$Object$Q($tmp696);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
goto block7;
block7:;
frost$core$Int64 $tmp698 = *(&local2);
int64_t $tmp699 = $tmp675.value;
int64_t $tmp700 = $tmp698.value;
int64_t $tmp701 = $tmp699 - $tmp700;
frost$core$Int64 $tmp702 = (frost$core$Int64) {$tmp701};
frost$core$UInt64 $tmp703 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp702);
if ($tmp677) goto block11; else goto block12;
block11:;
uint64_t $tmp704 = $tmp703.value;
uint64_t $tmp705 = $tmp679.value;
bool $tmp706 = $tmp704 >= $tmp705;
frost$core$Bit $tmp707 = (frost$core$Bit) {$tmp706};
bool $tmp708 = $tmp707.value;
if ($tmp708) goto block10; else goto block6;
block12:;
uint64_t $tmp709 = $tmp703.value;
uint64_t $tmp710 = $tmp679.value;
bool $tmp711 = $tmp709 > $tmp710;
frost$core$Bit $tmp712 = (frost$core$Bit) {$tmp711};
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block10; else goto block6;
block10:;
int64_t $tmp714 = $tmp698.value;
int64_t $tmp715 = $tmp678.value;
int64_t $tmp716 = $tmp714 + $tmp715;
frost$core$Int64 $tmp717 = (frost$core$Int64) {$tmp716};
*(&local2) = $tmp717;
goto block5;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
// line 320
frost$core$MutableString* $tmp718 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp718, &$s719);
// line 321
frost$core$MutableString* $tmp720 = *(&local1);
frost$core$String* $tmp721 = frost$core$MutableString$finish$R$frost$core$String($tmp720);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
frost$core$MutableString* $tmp722 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local1) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$Type* $tmp723 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp721;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$nullableType$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 325
org$frostlang$frostc$Type$Kind* $tmp724 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp725 = *$tmp724;
org$frostlang$frostc$Type$Kind$wrapper* $tmp726;
$tmp726 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp726->value = $tmp725;
frost$core$Int64 $tmp727 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp728 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp727);
org$frostlang$frostc$Type$Kind$wrapper* $tmp729;
$tmp729 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp729->value = $tmp728;
ITable* $tmp730 = ((frost$core$Equatable*) $tmp726)->$class->itable;
while ($tmp730->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp730 = $tmp730->next;
}
$fn732 $tmp731 = $tmp730->methods[0];
frost$core$Bit $tmp733 = $tmp731(((frost$core$Equatable*) $tmp726), ((frost$core$Equatable*) $tmp729));
bool $tmp734 = $tmp733.value;
if ($tmp734) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp735 = (frost$core$Int64) {325};
frost$core$String* $tmp736 = org$frostlang$frostc$Type$get_asString$R$frost$core$String(param1);
frost$core$String* $tmp737 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp736, &$s738);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s739, $tmp735, $tmp737);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp729)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp726)));
// line 326
org$frostlang$frostc$FixedArray* $tmp740 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp741 = (frost$core$Int64) {0};
frost$core$Object* $tmp742 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp740, $tmp741);
frost$core$String* $tmp743 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp742));
frost$core$String* $tmp744 = frost$core$String$get_asString$R$frost$core$String($tmp743);
frost$core$String* $tmp745 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp744, &$s746);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
frost$core$Frost$unref$frost$core$Object$Q($tmp742);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
return $tmp745;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getITable$org$frostlang$frostc$ClassDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$collections$HashSet* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$ClassDecl* local3 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local4 = NULL;
frost$collections$ListView* local5 = NULL;
frost$core$String* local6 = NULL;
frost$core$MutableString* local7 = NULL;
frost$core$String* local8 = NULL;
org$frostlang$frostc$MethodDecl* local9 = NULL;
frost$core$Error* local10 = NULL;
// line 330
frost$core$Weak** $tmp747 = &param0->compiler;
frost$core$Weak* $tmp748 = *$tmp747;
frost$core$Object* $tmp749 = frost$core$Weak$get$R$frost$core$Weak$T($tmp748);
org$frostlang$frostc$Type** $tmp750 = &param1->type;
org$frostlang$frostc$Type* $tmp751 = *$tmp750;
frost$collections$HashSet* $tmp752 = org$frostlang$frostc$Compiler$allInterfaces$org$frostlang$frostc$Type$R$frost$collections$HashSet$LTorg$frostlang$frostc$Type$GT(((org$frostlang$frostc$Compiler*) $tmp749), $tmp751);
*(&local0) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
frost$collections$HashSet* $tmp753 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
*(&local0) = $tmp752;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
frost$core$Frost$unref$frost$core$Object$Q($tmp749);
// line 331
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s754));
frost$core$String* $tmp755 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local1) = &$s756;
// line 332
frost$collections$HashSet* $tmp757 = *(&local0);
ITable* $tmp758 = ((frost$collections$Iterable*) $tmp757)->$class->itable;
while ($tmp758->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp758 = $tmp758->next;
}
$fn760 $tmp759 = $tmp758->methods[0];
frost$collections$Iterator* $tmp761 = $tmp759(((frost$collections$Iterable*) $tmp757));
goto block1;
block1:;
ITable* $tmp762 = $tmp761->$class->itable;
while ($tmp762->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp762 = $tmp762->next;
}
$fn764 $tmp763 = $tmp762->methods[0];
frost$core$Bit $tmp765 = $tmp763($tmp761);
bool $tmp766 = $tmp765.value;
if ($tmp766) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp767 = $tmp761->$class->itable;
while ($tmp767->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp767 = $tmp767->next;
}
$fn769 $tmp768 = $tmp767->methods[1];
frost$core$Object* $tmp770 = $tmp768($tmp761);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp770)));
org$frostlang$frostc$Type* $tmp771 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp770);
// line 333
frost$core$Weak** $tmp772 = &param0->compiler;
frost$core$Weak* $tmp773 = *$tmp772;
frost$core$Object* $tmp774 = frost$core$Weak$get$R$frost$core$Weak$T($tmp773);
org$frostlang$frostc$Type* $tmp775 = *(&local2);
org$frostlang$frostc$ClassDecl* $tmp776 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp774), $tmp775);
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
org$frostlang$frostc$ClassDecl* $tmp777 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
*(&local3) = $tmp776;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
frost$core$Frost$unref$frost$core$Object$Q($tmp774);
// line 334
org$frostlang$frostc$ClassDecl* $tmp778 = *(&local3);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp779 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp778);
*(&local4) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp780 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
*(&local4) = $tmp779;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
// line 335
frost$core$Weak** $tmp781 = &param0->compiler;
frost$core$Weak* $tmp782 = *$tmp781;
frost$core$Object* $tmp783 = frost$core$Weak$get$R$frost$core$Weak$T($tmp782);
org$frostlang$frostc$Type* $tmp784 = *(&local2);
frost$collections$ListView* $tmp785 = org$frostlang$frostc$Compiler$interfaceMethods$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp783), param1, $tmp784);
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$collections$ListView* $tmp786 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
*(&local5) = $tmp785;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q($tmp783);
// line 336
frost$core$String** $tmp787 = &param1->name;
frost$core$String* $tmp788 = *$tmp787;
frost$core$String* $tmp789 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp788);
frost$core$String* $tmp790 = frost$core$String$get_asString$R$frost$core$String($tmp789);
frost$core$String* $tmp791 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp790, &$s792);
org$frostlang$frostc$ClassDecl* $tmp793 = *(&local3);
frost$core$String** $tmp794 = &$tmp793->name;
frost$core$String* $tmp795 = *$tmp794;
frost$core$String* $tmp796 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp795);
frost$core$String* $tmp797 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp791, $tmp796);
frost$core$String* $tmp798 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp797, &$s799);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
frost$core$String* $tmp800 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
*(&local6) = $tmp798;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
// line 337
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp801 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Type* $tmp802 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp803 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp802);
frost$core$String* $tmp804 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s805, $tmp803);
frost$core$String* $tmp806 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp804, &$s807);
frost$collections$ListView* $tmp808 = *(&local5);
ITable* $tmp809 = ((frost$collections$CollectionView*) $tmp808)->$class->itable;
while ($tmp809->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp809 = $tmp809->next;
}
$fn811 $tmp810 = $tmp809->methods[0];
frost$core$Int64 $tmp812 = $tmp810(((frost$collections$CollectionView*) $tmp808));
frost$core$Int64$wrapper* $tmp813;
$tmp813 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp813->value = $tmp812;
frost$core$String* $tmp814 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s815, ((frost$core$Object*) $tmp813));
frost$core$String* $tmp816 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp814, &$s817);
frost$core$String* $tmp818 = *(&local6);
frost$core$String* $tmp819 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp816, $tmp818);
frost$core$String* $tmp820 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp819, &$s821);
frost$core$String* $tmp822 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp806, $tmp820);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp823 = *(&local4);
frost$core$String** $tmp824 = &$tmp823->name;
frost$core$String* $tmp825 = *$tmp824;
frost$core$String* $tmp826 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s827, $tmp825);
frost$core$String* $tmp828 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp826, &$s829);
frost$core$String* $tmp830 = *(&local1);
frost$core$String* $tmp831 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp828, $tmp830);
frost$core$String* $tmp832 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp831, &$s833);
frost$core$String* $tmp834 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp822, $tmp832);
frost$core$MutableString$init$frost$core$String($tmp801, $tmp834);
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
frost$core$MutableString* $tmp835 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
*(&local7) = $tmp801;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
// line 340
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s836));
frost$core$String* $tmp837 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
*(&local8) = &$s838;
// line 341
frost$collections$ListView* $tmp839 = *(&local5);
ITable* $tmp840 = ((frost$collections$Iterable*) $tmp839)->$class->itable;
while ($tmp840->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp840 = $tmp840->next;
}
$fn842 $tmp841 = $tmp840->methods[0];
frost$collections$Iterator* $tmp843 = $tmp841(((frost$collections$Iterable*) $tmp839));
goto block4;
block4:;
ITable* $tmp844 = $tmp843->$class->itable;
while ($tmp844->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp844 = $tmp844->next;
}
$fn846 $tmp845 = $tmp844->methods[0];
frost$core$Bit $tmp847 = $tmp845($tmp843);
bool $tmp848 = $tmp847.value;
if ($tmp848) goto block6; else goto block5;
block5:;
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp849 = $tmp843->$class->itable;
while ($tmp849->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp849 = $tmp849->next;
}
$fn851 $tmp850 = $tmp849->methods[1];
frost$core$Object* $tmp852 = $tmp850($tmp843);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp852)));
org$frostlang$frostc$MethodDecl* $tmp853 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
*(&local9) = ((org$frostlang$frostc$MethodDecl*) $tmp852);
// line 342
frost$core$MutableString* $tmp854 = *(&local7);
frost$core$String* $tmp855 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp854, $tmp855);
// line 343
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s856));
frost$core$String* $tmp857 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
*(&local8) = &$s858;
// line 344
org$frostlang$frostc$MethodDecl* $tmp859 = *(&local9);
org$frostlang$frostc$Annotations** $tmp860 = &$tmp859->annotations;
org$frostlang$frostc$Annotations* $tmp861 = *$tmp860;
frost$core$Bit $tmp862 = org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit($tmp861);
bool $tmp863 = $tmp862.value;
if ($tmp863) goto block7; else goto block9;
block7:;
// line 345
frost$core$MutableString* $tmp864 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp864, &$s865);
goto block8;
block9:;
// line 1
// line 348
frost$core$MutableString* $tmp866 = *(&local7);
org$frostlang$frostc$MethodDecl* $tmp867 = *(&local9);
frost$core$String* $tmp868 = org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, $tmp867);
frost$core$MutableString$append$frost$core$String($tmp866, $tmp868);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
goto block8;
block8:;
frost$core$Frost$unref$frost$core$Object$Q($tmp852);
org$frostlang$frostc$MethodDecl* $tmp869 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
// line 351
frost$core$MutableString* $tmp870 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp870, &$s871);
// line 352
*(&local10) = ((frost$core$Error*) NULL);
// line 353
frost$io$MemoryOutputStream** $tmp872 = &param0->types;
frost$io$MemoryOutputStream* $tmp873 = *$tmp872;
frost$core$MutableString* $tmp874 = *(&local7);
frost$core$String* $tmp875 = frost$core$MutableString$finish$R$frost$core$String($tmp874);
$fn877 $tmp876 = ($fn877) ((frost$io$OutputStream*) $tmp873)->$class->vtable[19];
frost$core$Error* $tmp878 = $tmp876(((frost$io$OutputStream*) $tmp873), $tmp875);
if ($tmp878 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
*(&local10) = $tmp878;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
goto block10;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
goto block11;
block10:;
// line 356
frost$core$Int64 $tmp879 = (frost$core$Int64) {356};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s880, $tmp879);
abort(); // unreachable
block11:;
frost$core$Error* $tmp881 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
*(&local10) = ((frost$core$Error*) NULL);
// line 358
frost$core$String* $tmp882 = *(&local6);
frost$core$String* $tmp883 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s884, $tmp882);
frost$core$String* $tmp885 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp883, &$s886);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
frost$core$String* $tmp887 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
*(&local1) = $tmp885;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
frost$core$String* $tmp888 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp889 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp890 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
*(&local6) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp891 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp892 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
*(&local4) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
org$frostlang$frostc$ClassDecl* $tmp893 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp770);
org$frostlang$frostc$Type* $tmp894 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
// line 360
frost$core$String* $tmp895 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
frost$core$String* $tmp896 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
*(&local1) = ((frost$core$String*) NULL);
frost$collections$HashSet* $tmp897 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
*(&local0) = ((frost$collections$HashSet*) NULL);
return $tmp895;

}
org$frostlang$frostc$CCodeGenerator$MethodShim* org$frostlang$frostc$CCodeGenerator$createMethodShim$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$MethodShim(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1, org$frostlang$frostc$Type* param2) {

org$frostlang$frostc$CCodeGenerator$MethodShim* local0 = NULL;
frost$core$Error* local1 = NULL;
org$frostlang$frostc$CCodeGenerator$MethodShim* local2 = NULL;
frost$io$IndentedOutputStream* local3 = NULL;
frost$io$MemoryOutputStream* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
frost$core$String* local6 = NULL;
frost$core$MutableString* local7 = NULL;
frost$core$String* local8 = NULL;
frost$core$Int64 local9;
frost$core$String* local10 = NULL;
frost$io$MemoryOutputStream* local11 = NULL;
frost$collections$Array* local12 = NULL;
frost$core$Int64 local13;
frost$core$String* local14 = NULL;
org$frostlang$frostc$Type* local15 = NULL;
frost$core$String* local16 = NULL;
frost$core$Int64 local17;
org$frostlang$frostc$CCodeGenerator$MethodShim* local18 = NULL;
frost$io$IndentedOutputStream** $tmp898 = &param0->out;
frost$io$IndentedOutputStream* $tmp899 = *$tmp898;
// line 365
*(&local1) = ((frost$core$Error*) NULL);
// line 366
frost$collections$IdentityMap** $tmp900 = &param0->methodShims;
frost$collections$IdentityMap* $tmp901 = *$tmp900;
frost$core$Object* $tmp902 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp901, ((frost$core$Object*) param1));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CCodeGenerator$MethodShim*) $tmp902)));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp903 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) $tmp902);
frost$core$Frost$unref$frost$core$Object$Q($tmp902);
// line 367
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp904 = *(&local2);
frost$core$Bit $tmp905 = frost$core$Bit$init$builtin_bit($tmp904 != NULL);
bool $tmp906 = $tmp905.value;
if ($tmp906) goto block6; else goto block7;
block6:;
// line 368
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp907 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp908 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Error* $tmp909 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
*(&local1) = ((frost$core$Error*) NULL);
*(&local0) = $tmp907;
goto block1;
block7:;
// line 370
frost$io$IndentedOutputStream** $tmp910 = &param0->out;
frost$io$IndentedOutputStream* $tmp911 = *$tmp910;
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
frost$io$IndentedOutputStream* $tmp912 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
*(&local3) = $tmp911;
// line 371
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
frost$io$MemoryOutputStream* $tmp913 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp913);
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
frost$io$MemoryOutputStream* $tmp914 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
*(&local4) = $tmp913;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
// line 372
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp915 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream* $tmp916 = *(&local4);
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp915, ((frost$io$OutputStream*) $tmp916));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
frost$io$IndentedOutputStream** $tmp917 = &param0->out;
frost$io$IndentedOutputStream* $tmp918 = *$tmp917;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
frost$io$IndentedOutputStream** $tmp919 = &param0->out;
*$tmp919 = $tmp915;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
// line 373
frost$core$Bit $tmp920 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(param2);
bool $tmp921 = $tmp920.value;
if ($tmp921) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp922 = (frost$core$Int64) {373};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s923, $tmp922);
abort(); // unreachable
block8:;
// line 374
org$frostlang$frostc$FixedArray* $tmp924 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
ITable* $tmp925 = ((frost$collections$CollectionView*) $tmp924)->$class->itable;
while ($tmp925->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp925 = $tmp925->next;
}
$fn927 $tmp926 = $tmp925->methods[0];
frost$core$Int64 $tmp928 = $tmp926(((frost$collections$CollectionView*) $tmp924));
frost$collections$Array** $tmp929 = &param1->parameters;
frost$collections$Array* $tmp930 = *$tmp929;
ITable* $tmp931 = ((frost$collections$CollectionView*) $tmp930)->$class->itable;
while ($tmp931->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp931 = $tmp931->next;
}
$fn933 $tmp932 = $tmp931->methods[0];
frost$core$Int64 $tmp934 = $tmp932(((frost$collections$CollectionView*) $tmp930));
frost$core$Int64 $tmp935 = (frost$core$Int64) {2};
int64_t $tmp936 = $tmp934.value;
int64_t $tmp937 = $tmp935.value;
int64_t $tmp938 = $tmp936 + $tmp937;
frost$core$Int64 $tmp939 = (frost$core$Int64) {$tmp938};
frost$core$Bit $tmp940 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp928, $tmp939);
bool $tmp941 = $tmp940.value;
if ($tmp941) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp942 = (frost$core$Int64) {374};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s943, $tmp942);
abort(); // unreachable
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
// line 375
frost$core$Bit $tmp944 = org$frostlang$frostc$MethodDecl$isInstance$R$frost$core$Bit(param1);
bool $tmp945 = $tmp944.value;
if ($tmp945) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp946 = (frost$core$Int64) {375};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s947, $tmp946);
abort(); // unreachable
block12:;
// line 376
org$frostlang$frostc$Type* $tmp948 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type(param2);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
org$frostlang$frostc$Type* $tmp949 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
*(&local5) = $tmp948;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
// line 377
frost$core$String* $tmp950 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp951 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp950, &$s952);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
frost$core$String* $tmp953 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
*(&local6) = $tmp951;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
// line 378
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp954 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Type* $tmp955 = *(&local5);
frost$core$String* $tmp956 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp955);
frost$core$MutableString$init$frost$core$String($tmp954, $tmp956);
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
frost$core$MutableString* $tmp957 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
*(&local7) = $tmp954;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
// line 379
frost$io$IndentedOutputStream** $tmp958 = &param0->out;
frost$io$IndentedOutputStream* $tmp959 = *$tmp958;
frost$core$MutableString* $tmp960 = *(&local7);
frost$core$String* $tmp961 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s962, ((frost$core$Object*) $tmp960));
frost$core$String* $tmp963 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp961, &$s964);
frost$core$String* $tmp965 = *(&local6);
frost$core$String* $tmp966 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp963, $tmp965);
frost$core$String* $tmp967 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp966, &$s968);
$fn970 $tmp969 = ($fn970) ((frost$io$OutputStream*) $tmp959)->$class->vtable[17];
frost$core$Error* $tmp971 = $tmp969(((frost$io$OutputStream*) $tmp959), $tmp967);
if ($tmp971 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
*(&local1) = $tmp971;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
frost$core$MutableString* $tmp972 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp973 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp974 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp975 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp976 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp977 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
// line 380
frost$core$MutableString* $tmp978 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp978, &$s979);
// line 381
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s980));
frost$core$String* $tmp981 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
*(&local8) = &$s982;
// line 382
frost$core$Int64 $tmp983 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp984 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
ITable* $tmp985 = ((frost$collections$CollectionView*) $tmp984)->$class->itable;
while ($tmp985->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp985 = $tmp985->next;
}
$fn987 $tmp986 = $tmp985->methods[0];
frost$core$Int64 $tmp988 = $tmp986(((frost$collections$CollectionView*) $tmp984));
frost$core$Int64 $tmp989 = (frost$core$Int64) {1};
int64_t $tmp990 = $tmp988.value;
int64_t $tmp991 = $tmp989.value;
int64_t $tmp992 = $tmp990 - $tmp991;
frost$core$Int64 $tmp993 = (frost$core$Int64) {$tmp992};
frost$core$Bit $tmp994 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp995 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp983, $tmp993, $tmp994);
frost$core$Int64 $tmp996 = $tmp995.min;
*(&local9) = $tmp996;
frost$core$Int64 $tmp997 = $tmp995.max;
frost$core$Bit $tmp998 = $tmp995.inclusive;
bool $tmp999 = $tmp998.value;
frost$core$Int64 $tmp1000 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1001 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1000);
if ($tmp999) goto block19; else goto block20;
block19:;
int64_t $tmp1002 = $tmp996.value;
int64_t $tmp1003 = $tmp997.value;
bool $tmp1004 = $tmp1002 <= $tmp1003;
frost$core$Bit $tmp1005 = (frost$core$Bit) {$tmp1004};
bool $tmp1006 = $tmp1005.value;
if ($tmp1006) goto block16; else goto block17;
block20:;
int64_t $tmp1007 = $tmp996.value;
int64_t $tmp1008 = $tmp997.value;
bool $tmp1009 = $tmp1007 < $tmp1008;
frost$core$Bit $tmp1010 = (frost$core$Bit) {$tmp1009};
bool $tmp1011 = $tmp1010.value;
if ($tmp1011) goto block16; else goto block17;
block16:;
// line 383
org$frostlang$frostc$FixedArray* $tmp1012 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp1013 = *(&local9);
frost$core$Object* $tmp1014 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1012, $tmp1013);
frost$core$String* $tmp1015 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp1014));
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
frost$core$String* $tmp1016 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
*(&local10) = $tmp1015;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
frost$core$Frost$unref$frost$core$Object$Q($tmp1014);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
// line 384
frost$core$MutableString* $tmp1017 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp1017, &$s1018);
// line 385
frost$core$MutableString* $tmp1019 = *(&local7);
frost$core$String* $tmp1020 = *(&local10);
frost$core$MutableString$append$frost$core$String($tmp1019, $tmp1020);
// line 386
frost$io$IndentedOutputStream** $tmp1021 = &param0->out;
frost$io$IndentedOutputStream* $tmp1022 = *$tmp1021;
frost$core$String* $tmp1023 = *(&local8);
frost$core$String* $tmp1024 = frost$core$String$get_asString$R$frost$core$String($tmp1023);
frost$core$String* $tmp1025 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1024, &$s1026);
frost$core$String* $tmp1027 = *(&local10);
frost$core$String* $tmp1028 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1025, $tmp1027);
frost$core$String* $tmp1029 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1028, &$s1030);
frost$core$Int64 $tmp1031 = *(&local9);
frost$core$Int64$wrapper* $tmp1032;
$tmp1032 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1032->value = $tmp1031;
frost$core$String* $tmp1033 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1029, ((frost$core$Object*) $tmp1032));
frost$core$String* $tmp1034 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1033, &$s1035);
$fn1037 $tmp1036 = ($fn1037) ((frost$io$OutputStream*) $tmp1022)->$class->vtable[17];
frost$core$Error* $tmp1038 = $tmp1036(((frost$io$OutputStream*) $tmp1022), $tmp1034);
if ($tmp1038 == NULL) goto block21; else goto block22;
block22:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
*(&local1) = $tmp1038;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
frost$core$String* $tmp1039 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
frost$core$String* $tmp1040 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1041 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1042 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1043 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1044 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1045 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1046 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
// line 387
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1047));
frost$core$String* $tmp1048 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
*(&local8) = &$s1049;
frost$core$String* $tmp1050 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
*(&local10) = ((frost$core$String*) NULL);
goto block18;
block18:;
frost$core$Int64 $tmp1051 = *(&local9);
int64_t $tmp1052 = $tmp997.value;
int64_t $tmp1053 = $tmp1051.value;
int64_t $tmp1054 = $tmp1052 - $tmp1053;
frost$core$Int64 $tmp1055 = (frost$core$Int64) {$tmp1054};
frost$core$UInt64 $tmp1056 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1055);
if ($tmp999) goto block24; else goto block25;
block24:;
uint64_t $tmp1057 = $tmp1056.value;
uint64_t $tmp1058 = $tmp1001.value;
bool $tmp1059 = $tmp1057 >= $tmp1058;
frost$core$Bit $tmp1060 = (frost$core$Bit) {$tmp1059};
bool $tmp1061 = $tmp1060.value;
if ($tmp1061) goto block23; else goto block17;
block25:;
uint64_t $tmp1062 = $tmp1056.value;
uint64_t $tmp1063 = $tmp1001.value;
bool $tmp1064 = $tmp1062 > $tmp1063;
frost$core$Bit $tmp1065 = (frost$core$Bit) {$tmp1064};
bool $tmp1066 = $tmp1065.value;
if ($tmp1066) goto block23; else goto block17;
block23:;
int64_t $tmp1067 = $tmp1051.value;
int64_t $tmp1068 = $tmp1000.value;
int64_t $tmp1069 = $tmp1067 + $tmp1068;
frost$core$Int64 $tmp1070 = (frost$core$Int64) {$tmp1069};
*(&local9) = $tmp1070;
goto block16;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
// line 389
frost$io$IndentedOutputStream** $tmp1071 = &param0->out;
frost$io$IndentedOutputStream* $tmp1072 = *$tmp1071;
$fn1074 $tmp1073 = ($fn1074) ((frost$io$OutputStream*) $tmp1072)->$class->vtable[19];
frost$core$Error* $tmp1075 = $tmp1073(((frost$io$OutputStream*) $tmp1072), &$s1076);
if ($tmp1075 == NULL) goto block26; else goto block27;
block27:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
*(&local1) = $tmp1075;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
frost$core$String* $tmp1077 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1078 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1079 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1080 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1081 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1081));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1082 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1083 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
// line 390
frost$io$IndentedOutputStream** $tmp1084 = &param0->out;
frost$io$IndentedOutputStream* $tmp1085 = *$tmp1084;
frost$core$Int64* $tmp1086 = &$tmp1085->level;
frost$core$Int64 $tmp1087 = *$tmp1086;
frost$core$Int64 $tmp1088 = (frost$core$Int64) {1};
int64_t $tmp1089 = $tmp1087.value;
int64_t $tmp1090 = $tmp1088.value;
int64_t $tmp1091 = $tmp1089 + $tmp1090;
frost$core$Int64 $tmp1092 = (frost$core$Int64) {$tmp1091};
frost$core$Int64* $tmp1093 = &$tmp1085->level;
*$tmp1093 = $tmp1092;
// line 391
frost$core$MutableString* $tmp1094 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp1094, &$s1095);
// line 392
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
frost$io$MemoryOutputStream* $tmp1096 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp1096);
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
frost$io$MemoryOutputStream* $tmp1097 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
*(&local11) = $tmp1096;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
// line 393
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1098 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1098);
*(&local12) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
frost$collections$Array* $tmp1099 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
*(&local12) = $tmp1098;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
// line 394
frost$core$Int64 $tmp1100 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp1101 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
ITable* $tmp1102 = ((frost$collections$CollectionView*) $tmp1101)->$class->itable;
while ($tmp1102->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1102 = $tmp1102->next;
}
$fn1104 $tmp1103 = $tmp1102->methods[0];
frost$core$Int64 $tmp1105 = $tmp1103(((frost$collections$CollectionView*) $tmp1101));
frost$core$Int64 $tmp1106 = (frost$core$Int64) {1};
int64_t $tmp1107 = $tmp1105.value;
int64_t $tmp1108 = $tmp1106.value;
int64_t $tmp1109 = $tmp1107 - $tmp1108;
frost$core$Int64 $tmp1110 = (frost$core$Int64) {$tmp1109};
frost$core$Bit $tmp1111 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1112 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1100, $tmp1110, $tmp1111);
frost$core$Int64 $tmp1113 = $tmp1112.min;
*(&local13) = $tmp1113;
frost$core$Int64 $tmp1114 = $tmp1112.max;
frost$core$Bit $tmp1115 = $tmp1112.inclusive;
bool $tmp1116 = $tmp1115.value;
frost$core$Int64 $tmp1117 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1118 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1117);
if ($tmp1116) goto block31; else goto block32;
block31:;
int64_t $tmp1119 = $tmp1113.value;
int64_t $tmp1120 = $tmp1114.value;
bool $tmp1121 = $tmp1119 <= $tmp1120;
frost$core$Bit $tmp1122 = (frost$core$Bit) {$tmp1121};
bool $tmp1123 = $tmp1122.value;
if ($tmp1123) goto block28; else goto block29;
block32:;
int64_t $tmp1124 = $tmp1113.value;
int64_t $tmp1125 = $tmp1114.value;
bool $tmp1126 = $tmp1124 < $tmp1125;
frost$core$Bit $tmp1127 = (frost$core$Bit) {$tmp1126};
bool $tmp1128 = $tmp1127.value;
if ($tmp1128) goto block28; else goto block29;
block28:;
// line 395
frost$core$Int64 $tmp1129 = *(&local13);
frost$core$Int64$wrapper* $tmp1130;
$tmp1130 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1130->value = $tmp1129;
frost$core$String* $tmp1131 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1132, ((frost$core$Object*) $tmp1130));
frost$core$String* $tmp1133 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1131, &$s1134);
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
frost$core$String* $tmp1135 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
*(&local14) = $tmp1133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
// line 396
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
// line 397
frost$core$Int64 $tmp1136 = *(&local13);
frost$core$Int64 $tmp1137 = (frost$core$Int64) {0};
frost$core$Bit $tmp1138 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1136, $tmp1137);
bool $tmp1139 = $tmp1138.value;
if ($tmp1139) goto block33; else goto block35;
block33:;
// line 398
frost$core$Weak** $tmp1140 = &param1->owner;
frost$core$Weak* $tmp1141 = *$tmp1140;
frost$core$Object* $tmp1142 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1141);
org$frostlang$frostc$Type** $tmp1143 = &((org$frostlang$frostc$ClassDecl*) $tmp1142)->type;
org$frostlang$frostc$Type* $tmp1144 = *$tmp1143;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
org$frostlang$frostc$Type* $tmp1145 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
*(&local15) = $tmp1144;
frost$core$Frost$unref$frost$core$Object$Q($tmp1142);
goto block34;
block35:;
// line 1
// line 401
frost$collections$Array** $tmp1146 = &param1->parameters;
frost$collections$Array* $tmp1147 = *$tmp1146;
frost$core$Int64 $tmp1148 = *(&local13);
frost$core$Int64 $tmp1149 = (frost$core$Int64) {1};
int64_t $tmp1150 = $tmp1148.value;
int64_t $tmp1151 = $tmp1149.value;
int64_t $tmp1152 = $tmp1150 - $tmp1151;
frost$core$Int64 $tmp1153 = (frost$core$Int64) {$tmp1152};
frost$core$Object* $tmp1154 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1147, $tmp1153);
org$frostlang$frostc$Type** $tmp1155 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1154)->type;
org$frostlang$frostc$Type* $tmp1156 = *$tmp1155;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
org$frostlang$frostc$Type* $tmp1157 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
*(&local15) = $tmp1156;
frost$core$Frost$unref$frost$core$Object$Q($tmp1154);
goto block34;
block34:;
// line 403
org$frostlang$frostc$Type* $tmp1158 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp1159 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp1160 = *(&local13);
frost$core$Object* $tmp1161 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1159, $tmp1160);
ITable* $tmp1162 = ((frost$core$Equatable*) $tmp1158)->$class->itable;
while ($tmp1162->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1162 = $tmp1162->next;
}
$fn1164 $tmp1163 = $tmp1162->methods[1];
frost$core$Bit $tmp1165 = $tmp1163(((frost$core$Equatable*) $tmp1158), ((frost$core$Equatable*) ((org$frostlang$frostc$Type*) $tmp1161)));
bool $tmp1166 = $tmp1165.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1161);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
if ($tmp1166) goto block36; else goto block38;
block36:;
// line 404
frost$core$String* $tmp1167 = *(&local14);
org$frostlang$frostc$FixedArray* $tmp1168 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp1169 = *(&local13);
frost$core$Object* $tmp1170 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1168, $tmp1169);
org$frostlang$frostc$Type* $tmp1171 = *(&local15);
frost$core$String* $tmp1172 = org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1167, ((org$frostlang$frostc$Type*) $tmp1170), $tmp1171);
*(&local16) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
frost$core$String* $tmp1173 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
*(&local16) = $tmp1172;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
frost$core$Frost$unref$frost$core$Object$Q($tmp1170);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
// line 405
frost$collections$Array* $tmp1174 = *(&local12);
frost$core$String* $tmp1175 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp1174, ((frost$core$Object*) $tmp1175));
// line 406
frost$core$Weak** $tmp1176 = &param0->compiler;
frost$core$Weak* $tmp1177 = *$tmp1176;
frost$core$Object* $tmp1178 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1177);
org$frostlang$frostc$FixedArray* $tmp1179 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp1180 = *(&local13);
frost$core$Object* $tmp1181 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1179, $tmp1180);
frost$core$Bit $tmp1182 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1178), ((org$frostlang$frostc$Type*) $tmp1181));
bool $tmp1183 = $tmp1182.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1181);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
frost$core$Frost$unref$frost$core$Object$Q($tmp1178);
if ($tmp1183) goto block41; else goto block40;
block41:;
frost$core$Weak** $tmp1184 = &param0->compiler;
frost$core$Weak* $tmp1185 = *$tmp1184;
frost$core$Object* $tmp1186 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1185);
org$frostlang$frostc$Type* $tmp1187 = *(&local15);
frost$core$Bit $tmp1188 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1186), $tmp1187);
frost$core$Bit $tmp1189 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1188);
bool $tmp1190 = $tmp1189.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1186);
if ($tmp1190) goto block39; else goto block40;
block39:;
// line 407
frost$io$MemoryOutputStream* $tmp1191 = *(&local11);
frost$core$String* $tmp1192 = *(&local16);
frost$core$String* $tmp1193 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1194, $tmp1192);
frost$core$String* $tmp1195 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1193, &$s1196);
frost$core$String* $tmp1197 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1198, $tmp1195);
$fn1200 $tmp1199 = ($fn1200) ((frost$io$OutputStream*) $tmp1191)->$class->vtable[19];
frost$core$Error* $tmp1201 = $tmp1199(((frost$io$OutputStream*) $tmp1191), $tmp1197);
if ($tmp1201 == NULL) goto block42; else goto block43;
block43:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1201));
*(&local1) = $tmp1201;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
frost$core$String* $tmp1202 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
*(&local16) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1203 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1204 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
frost$collections$Array* $tmp1205 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1206 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1207 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1208 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1209 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1210 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1211 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1212 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1213 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block42:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
goto block40;
block40:;
frost$core$String* $tmp1214 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
*(&local16) = ((frost$core$String*) NULL);
goto block37;
block38:;
// line 1
// line 412
frost$collections$Array* $tmp1215 = *(&local12);
frost$core$String* $tmp1216 = *(&local14);
frost$collections$Array$add$frost$collections$Array$T($tmp1215, ((frost$core$Object*) $tmp1216));
goto block37;
block37:;
org$frostlang$frostc$Type* $tmp1217 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1217));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1218 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
*(&local14) = ((frost$core$String*) NULL);
goto block30;
block30:;
frost$core$Int64 $tmp1219 = *(&local13);
int64_t $tmp1220 = $tmp1114.value;
int64_t $tmp1221 = $tmp1219.value;
int64_t $tmp1222 = $tmp1220 - $tmp1221;
frost$core$Int64 $tmp1223 = (frost$core$Int64) {$tmp1222};
frost$core$UInt64 $tmp1224 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1223);
if ($tmp1116) goto block45; else goto block46;
block45:;
uint64_t $tmp1225 = $tmp1224.value;
uint64_t $tmp1226 = $tmp1118.value;
bool $tmp1227 = $tmp1225 >= $tmp1226;
frost$core$Bit $tmp1228 = (frost$core$Bit) {$tmp1227};
bool $tmp1229 = $tmp1228.value;
if ($tmp1229) goto block44; else goto block29;
block46:;
uint64_t $tmp1230 = $tmp1224.value;
uint64_t $tmp1231 = $tmp1118.value;
bool $tmp1232 = $tmp1230 > $tmp1231;
frost$core$Bit $tmp1233 = (frost$core$Bit) {$tmp1232};
bool $tmp1234 = $tmp1233.value;
if ($tmp1234) goto block44; else goto block29;
block44:;
int64_t $tmp1235 = $tmp1219.value;
int64_t $tmp1236 = $tmp1117.value;
int64_t $tmp1237 = $tmp1235 + $tmp1236;
frost$core$Int64 $tmp1238 = (frost$core$Int64) {$tmp1237};
*(&local13) = $tmp1238;
goto block28;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
// line 415
org$frostlang$frostc$Type** $tmp1239 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1240 = *$tmp1239;
org$frostlang$frostc$Type* $tmp1241 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp1242 = ((frost$core$Equatable*) $tmp1240)->$class->itable;
while ($tmp1242->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1242 = $tmp1242->next;
}
$fn1244 $tmp1243 = $tmp1242->methods[1];
frost$core$Bit $tmp1245 = $tmp1243(((frost$core$Equatable*) $tmp1240), ((frost$core$Equatable*) $tmp1241));
bool $tmp1246 = $tmp1245.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
if ($tmp1246) goto block47; else goto block48;
block47:;
// line 416
frost$io$IndentedOutputStream** $tmp1247 = &param0->out;
frost$io$IndentedOutputStream* $tmp1248 = *$tmp1247;
org$frostlang$frostc$Type** $tmp1249 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1250 = *$tmp1249;
frost$core$String* $tmp1251 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1250);
frost$core$String* $tmp1252 = frost$core$String$get_asString$R$frost$core$String($tmp1251);
frost$core$String* $tmp1253 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1252, &$s1254);
$fn1256 $tmp1255 = ($fn1256) ((frost$io$OutputStream*) $tmp1248)->$class->vtable[17];
frost$core$Error* $tmp1257 = $tmp1255(((frost$io$OutputStream*) $tmp1248), $tmp1253);
if ($tmp1257 == NULL) goto block49; else goto block50;
block50:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
*(&local1) = $tmp1257;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
frost$collections$Array* $tmp1258 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1259 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1260 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1261 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1262 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1263 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1264 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1265 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1266 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
goto block48;
block48:;
// line 418
frost$io$IndentedOutputStream** $tmp1267 = &param0->out;
frost$io$IndentedOutputStream* $tmp1268 = *$tmp1267;
frost$core$String* $tmp1269 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1270 = frost$core$String$get_asString$R$frost$core$String($tmp1269);
frost$core$String* $tmp1271 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1270, &$s1272);
$fn1274 $tmp1273 = ($fn1274) ((frost$io$OutputStream*) $tmp1268)->$class->vtable[17];
frost$core$Error* $tmp1275 = $tmp1273(((frost$io$OutputStream*) $tmp1268), $tmp1271);
if ($tmp1275 == NULL) goto block51; else goto block52;
block52:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
*(&local1) = $tmp1275;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
frost$collections$Array* $tmp1276 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1277 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1278 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1279 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1280 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1281 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1282 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1283 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1284 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block51:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
// line 419
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1285));
frost$core$String* $tmp1286 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
*(&local8) = &$s1287;
// line 420
frost$core$Int64 $tmp1288 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp1289 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
ITable* $tmp1290 = ((frost$collections$CollectionView*) $tmp1289)->$class->itable;
while ($tmp1290->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1290 = $tmp1290->next;
}
$fn1292 $tmp1291 = $tmp1290->methods[0];
frost$core$Int64 $tmp1293 = $tmp1291(((frost$collections$CollectionView*) $tmp1289));
frost$core$Int64 $tmp1294 = (frost$core$Int64) {1};
int64_t $tmp1295 = $tmp1293.value;
int64_t $tmp1296 = $tmp1294.value;
int64_t $tmp1297 = $tmp1295 - $tmp1296;
frost$core$Int64 $tmp1298 = (frost$core$Int64) {$tmp1297};
frost$core$Bit $tmp1299 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1300 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1288, $tmp1298, $tmp1299);
frost$core$Int64 $tmp1301 = $tmp1300.min;
*(&local17) = $tmp1301;
frost$core$Int64 $tmp1302 = $tmp1300.max;
frost$core$Bit $tmp1303 = $tmp1300.inclusive;
bool $tmp1304 = $tmp1303.value;
frost$core$Int64 $tmp1305 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1306 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1305);
if ($tmp1304) goto block56; else goto block57;
block56:;
int64_t $tmp1307 = $tmp1301.value;
int64_t $tmp1308 = $tmp1302.value;
bool $tmp1309 = $tmp1307 <= $tmp1308;
frost$core$Bit $tmp1310 = (frost$core$Bit) {$tmp1309};
bool $tmp1311 = $tmp1310.value;
if ($tmp1311) goto block53; else goto block54;
block57:;
int64_t $tmp1312 = $tmp1301.value;
int64_t $tmp1313 = $tmp1302.value;
bool $tmp1314 = $tmp1312 < $tmp1313;
frost$core$Bit $tmp1315 = (frost$core$Bit) {$tmp1314};
bool $tmp1316 = $tmp1315.value;
if ($tmp1316) goto block53; else goto block54;
block53:;
// line 421
frost$io$IndentedOutputStream** $tmp1317 = &param0->out;
frost$io$IndentedOutputStream* $tmp1318 = *$tmp1317;
frost$core$String* $tmp1319 = *(&local8);
frost$core$String* $tmp1320 = frost$core$String$get_asString$R$frost$core$String($tmp1319);
frost$core$String* $tmp1321 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1320, &$s1322);
frost$collections$Array* $tmp1323 = *(&local12);
frost$core$Int64 $tmp1324 = *(&local17);
frost$core$Object* $tmp1325 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1323, $tmp1324);
frost$core$String* $tmp1326 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1321, ((frost$core$String*) $tmp1325));
frost$core$String* $tmp1327 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1326, &$s1328);
$fn1330 $tmp1329 = ($fn1330) ((frost$io$OutputStream*) $tmp1318)->$class->vtable[17];
frost$core$Error* $tmp1331 = $tmp1329(((frost$io$OutputStream*) $tmp1318), $tmp1327);
if ($tmp1331 == NULL) goto block58; else goto block59;
block59:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
*(&local1) = $tmp1331;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
frost$core$Frost$unref$frost$core$Object$Q($tmp1325);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
frost$collections$Array* $tmp1332 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1333 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1334 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1335 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1336 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1337 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1338 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1339 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1340 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block58:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
frost$core$Frost$unref$frost$core$Object$Q($tmp1325);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
// line 422
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1341));
frost$core$String* $tmp1342 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
*(&local8) = &$s1343;
goto block55;
block55:;
frost$core$Int64 $tmp1344 = *(&local17);
int64_t $tmp1345 = $tmp1302.value;
int64_t $tmp1346 = $tmp1344.value;
int64_t $tmp1347 = $tmp1345 - $tmp1346;
frost$core$Int64 $tmp1348 = (frost$core$Int64) {$tmp1347};
frost$core$UInt64 $tmp1349 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1348);
if ($tmp1304) goto block61; else goto block62;
block61:;
uint64_t $tmp1350 = $tmp1349.value;
uint64_t $tmp1351 = $tmp1306.value;
bool $tmp1352 = $tmp1350 >= $tmp1351;
frost$core$Bit $tmp1353 = (frost$core$Bit) {$tmp1352};
bool $tmp1354 = $tmp1353.value;
if ($tmp1354) goto block60; else goto block54;
block62:;
uint64_t $tmp1355 = $tmp1349.value;
uint64_t $tmp1356 = $tmp1306.value;
bool $tmp1357 = $tmp1355 > $tmp1356;
frost$core$Bit $tmp1358 = (frost$core$Bit) {$tmp1357};
bool $tmp1359 = $tmp1358.value;
if ($tmp1359) goto block60; else goto block54;
block60:;
int64_t $tmp1360 = $tmp1344.value;
int64_t $tmp1361 = $tmp1305.value;
int64_t $tmp1362 = $tmp1360 + $tmp1361;
frost$core$Int64 $tmp1363 = (frost$core$Int64) {$tmp1362};
*(&local17) = $tmp1363;
goto block53;
block54:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
// line 424
frost$io$IndentedOutputStream** $tmp1364 = &param0->out;
frost$io$IndentedOutputStream* $tmp1365 = *$tmp1364;
$fn1367 $tmp1366 = ($fn1367) ((frost$io$OutputStream*) $tmp1365)->$class->vtable[19];
frost$core$Error* $tmp1368 = $tmp1366(((frost$io$OutputStream*) $tmp1365), &$s1369);
if ($tmp1368 == NULL) goto block63; else goto block64;
block64:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
*(&local1) = $tmp1368;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
frost$collections$Array* $tmp1370 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1371 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1372 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1373 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1374 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1375 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1376 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1377 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1378 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block63:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
// line 425
frost$io$IndentedOutputStream** $tmp1379 = &param0->out;
frost$io$IndentedOutputStream* $tmp1380 = *$tmp1379;
frost$io$MemoryOutputStream* $tmp1381 = *(&local11);
$fn1383 $tmp1382 = ($fn1383) ((frost$io$OutputStream*) $tmp1380)->$class->vtable[20];
frost$core$Error* $tmp1384 = $tmp1382(((frost$io$OutputStream*) $tmp1380), ((frost$core$Object*) $tmp1381));
if ($tmp1384 == NULL) goto block65; else goto block66;
block66:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
*(&local1) = $tmp1384;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
frost$collections$Array* $tmp1385 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1386 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1387 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1387));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1388 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1389 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1390 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1391 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1392 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1393 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1393));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block65:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
// line 426
org$frostlang$frostc$Type** $tmp1394 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1395 = *$tmp1394;
org$frostlang$frostc$Type* $tmp1396 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp1397 = ((frost$core$Equatable*) $tmp1395)->$class->itable;
while ($tmp1397->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1397 = $tmp1397->next;
}
$fn1399 $tmp1398 = $tmp1397->methods[1];
frost$core$Bit $tmp1400 = $tmp1398(((frost$core$Equatable*) $tmp1395), ((frost$core$Equatable*) $tmp1396));
bool $tmp1401 = $tmp1400.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
if ($tmp1401) goto block67; else goto block68;
block67:;
// line 427
frost$io$IndentedOutputStream** $tmp1402 = &param0->out;
frost$io$IndentedOutputStream* $tmp1403 = *$tmp1402;
org$frostlang$frostc$Type** $tmp1404 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1405 = *$tmp1404;
org$frostlang$frostc$Type* $tmp1406 = *(&local5);
frost$core$String* $tmp1407 = org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(param0, &$s1408, $tmp1405, $tmp1406);
frost$core$String* $tmp1409 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1410, $tmp1407);
frost$core$String* $tmp1411 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1409, &$s1412);
$fn1414 $tmp1413 = ($fn1414) ((frost$io$OutputStream*) $tmp1403)->$class->vtable[19];
frost$core$Error* $tmp1415 = $tmp1413(((frost$io$OutputStream*) $tmp1403), $tmp1411);
if ($tmp1415 == NULL) goto block69; else goto block70;
block70:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
*(&local1) = $tmp1415;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
frost$collections$Array* $tmp1416 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1417 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1418 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1419 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1420 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1420));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1421 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1422 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1423 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1424 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block69:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
goto block68;
block68:;
// line 430
frost$io$IndentedOutputStream** $tmp1425 = &param0->out;
frost$io$IndentedOutputStream* $tmp1426 = *$tmp1425;
frost$core$Int64* $tmp1427 = &$tmp1426->level;
frost$core$Int64 $tmp1428 = *$tmp1427;
frost$core$Int64 $tmp1429 = (frost$core$Int64) {1};
int64_t $tmp1430 = $tmp1428.value;
int64_t $tmp1431 = $tmp1429.value;
int64_t $tmp1432 = $tmp1430 - $tmp1431;
frost$core$Int64 $tmp1433 = (frost$core$Int64) {$tmp1432};
frost$core$Int64* $tmp1434 = &$tmp1426->level;
*$tmp1434 = $tmp1433;
// line 431
frost$io$IndentedOutputStream** $tmp1435 = &param0->out;
frost$io$IndentedOutputStream* $tmp1436 = *$tmp1435;
$fn1438 $tmp1437 = ($fn1438) ((frost$io$OutputStream*) $tmp1436)->$class->vtable[19];
frost$core$Error* $tmp1439 = $tmp1437(((frost$io$OutputStream*) $tmp1436), &$s1440);
if ($tmp1439 == NULL) goto block71; else goto block72;
block72:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
*(&local1) = $tmp1439;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
frost$collections$Array* $tmp1441 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1442 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1442));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1443 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1444 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1445 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1446 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1447 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1448 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1449 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block71:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
// line 432
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$CCodeGenerator$MethodShim));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1450 = (org$frostlang$frostc$CCodeGenerator$MethodShim*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$MethodShim$class);
frost$core$String* $tmp1451 = *(&local6);
frost$core$MutableString* $tmp1452 = *(&local7);
frost$core$String* $tmp1453 = frost$core$MutableString$finish$R$frost$core$String($tmp1452);
org$frostlang$frostc$CCodeGenerator$MethodShim$init$frost$core$String$frost$core$String($tmp1450, $tmp1451, $tmp1453);
*(&local18) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1454 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
*(&local18) = $tmp1450;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
// line 433
frost$collections$IdentityMap** $tmp1455 = &param0->methodShims;
frost$collections$IdentityMap* $tmp1456 = *$tmp1455;
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1457 = *(&local18);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V($tmp1456, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp1457));
// line 434
frost$io$IndentedOutputStream** $tmp1458 = &param0->shims;
frost$io$IndentedOutputStream* $tmp1459 = *$tmp1458;
frost$io$MemoryOutputStream* $tmp1460 = *(&local4);
frost$core$String* $tmp1461 = frost$io$MemoryOutputStream$finish$R$frost$core$String($tmp1460);
$fn1463 $tmp1462 = ($fn1463) ((frost$io$OutputStream*) $tmp1459)->$class->vtable[17];
frost$core$Error* $tmp1464 = $tmp1462(((frost$io$OutputStream*) $tmp1459), $tmp1461);
if ($tmp1464 == NULL) goto block73; else goto block74;
block74:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
*(&local1) = $tmp1464;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1465 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
*(&local18) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$collections$Array* $tmp1466 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1467 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1468 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1469 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1469));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1470 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1471 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1472 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1473 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1474 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
// line 435
frost$io$IndentedOutputStream* $tmp1475 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
frost$io$IndentedOutputStream** $tmp1476 = &param0->out;
frost$io$IndentedOutputStream* $tmp1477 = *$tmp1476;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
frost$io$IndentedOutputStream** $tmp1478 = &param0->out;
*$tmp1478 = $tmp1475;
// line 436
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1479 = *(&local18);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1479));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1480 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
*(&local18) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$collections$Array* $tmp1481 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1482 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1483 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1484 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1485 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1485));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1486 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1486));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1487 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1487));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1488 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1488));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1489 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Error* $tmp1490 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
*(&local1) = ((frost$core$Error*) NULL);
*(&local0) = $tmp1479;
goto block1;
block4:;
// line 439
frost$core$Int64 $tmp1491 = (frost$core$Int64) {439};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1492, $tmp1491);
abort(); // unreachable
block5:;
frost$core$Error* $tmp1493 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
*(&local1) = ((frost$core$Error*) NULL);
goto block75;
block75:;
block1:;
frost$io$IndentedOutputStream** $tmp1494 = &param0->out;
frost$io$IndentedOutputStream* $tmp1495 = *$tmp1494;
bool $tmp1496 = $tmp1495 == $tmp899;
frost$core$Bit $tmp1497 = frost$core$Bit$init$builtin_bit($tmp1496);
bool $tmp1498 = $tmp1497.value;
if ($tmp1498) goto block2; else goto block3;
block2:;
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1499 = *(&local0);
return $tmp1499;
block3:;
frost$core$Int64 $tmp1500 = (frost$core$Int64) {364};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1501, $tmp1500, &$s1502);
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getWrapperITable$org$frostlang$frostc$ClassDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
frost$collections$HashSet* local1 = NULL;
frost$core$String* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$ClassDecl* local4 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local5 = NULL;
frost$collections$ListView* local6 = NULL;
frost$core$String* local7 = NULL;
frost$core$MutableString* local8 = NULL;
frost$core$String* local9 = NULL;
org$frostlang$frostc$MethodDecl* local10 = NULL;
// line 444
*(&local0) = ((frost$core$Error*) NULL);
// line 445
frost$core$Weak** $tmp1503 = &param0->compiler;
frost$core$Weak* $tmp1504 = *$tmp1503;
frost$core$Object* $tmp1505 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1504);
org$frostlang$frostc$Type** $tmp1506 = &param1->type;
org$frostlang$frostc$Type* $tmp1507 = *$tmp1506;
frost$collections$HashSet* $tmp1508 = org$frostlang$frostc$Compiler$allInterfaces$org$frostlang$frostc$Type$R$frost$collections$HashSet$LTorg$frostlang$frostc$Type$GT(((org$frostlang$frostc$Compiler*) $tmp1505), $tmp1507);
*(&local1) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1508));
frost$collections$HashSet* $tmp1509 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
*(&local1) = $tmp1508;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1508));
frost$core$Frost$unref$frost$core$Object$Q($tmp1505);
// line 446
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1510));
frost$core$String* $tmp1511 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1511));
*(&local2) = &$s1512;
// line 447
frost$collections$HashSet* $tmp1513 = *(&local1);
ITable* $tmp1514 = ((frost$collections$Iterable*) $tmp1513)->$class->itable;
while ($tmp1514->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1514 = $tmp1514->next;
}
$fn1516 $tmp1515 = $tmp1514->methods[0];
frost$collections$Iterator* $tmp1517 = $tmp1515(((frost$collections$Iterable*) $tmp1513));
goto block3;
block3:;
ITable* $tmp1518 = $tmp1517->$class->itable;
while ($tmp1518->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1518 = $tmp1518->next;
}
$fn1520 $tmp1519 = $tmp1518->methods[0];
frost$core$Bit $tmp1521 = $tmp1519($tmp1517);
bool $tmp1522 = $tmp1521.value;
if ($tmp1522) goto block5; else goto block4;
block4:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp1523 = $tmp1517->$class->itable;
while ($tmp1523->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1523 = $tmp1523->next;
}
$fn1525 $tmp1524 = $tmp1523->methods[1];
frost$core$Object* $tmp1526 = $tmp1524($tmp1517);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1526)));
org$frostlang$frostc$Type* $tmp1527 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp1526);
// line 448
frost$core$Weak** $tmp1528 = &param0->compiler;
frost$core$Weak* $tmp1529 = *$tmp1528;
frost$core$Object* $tmp1530 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1529);
org$frostlang$frostc$Type* $tmp1531 = *(&local3);
org$frostlang$frostc$ClassDecl* $tmp1532 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1530), $tmp1531);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
org$frostlang$frostc$ClassDecl* $tmp1533 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1533));
*(&local4) = $tmp1532;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
frost$core$Frost$unref$frost$core$Object$Q($tmp1530);
// line 449
org$frostlang$frostc$ClassDecl* $tmp1534 = *(&local4);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1535 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp1534);
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1536 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
*(&local5) = $tmp1535;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
// line 450
frost$core$Weak** $tmp1537 = &param0->compiler;
frost$core$Weak* $tmp1538 = *$tmp1537;
frost$core$Object* $tmp1539 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1538);
org$frostlang$frostc$Type* $tmp1540 = *(&local3);
frost$collections$ListView* $tmp1541 = org$frostlang$frostc$Compiler$interfaceMethods$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1539), param1, $tmp1540);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1541));
frost$collections$ListView* $tmp1542 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1542));
*(&local6) = $tmp1541;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1541));
frost$core$Frost$unref$frost$core$Object$Q($tmp1539);
// line 451
frost$core$String** $tmp1543 = &param1->name;
frost$core$String* $tmp1544 = *$tmp1543;
frost$core$String* $tmp1545 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1544);
frost$core$String* $tmp1546 = frost$core$String$get_asString$R$frost$core$String($tmp1545);
frost$core$String* $tmp1547 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1546, &$s1548);
org$frostlang$frostc$ClassDecl* $tmp1549 = *(&local4);
frost$core$String** $tmp1550 = &$tmp1549->name;
frost$core$String* $tmp1551 = *$tmp1550;
frost$core$String* $tmp1552 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1551);
frost$core$String* $tmp1553 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1547, $tmp1552);
frost$core$String* $tmp1554 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1553, &$s1555);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1554));
frost$core$String* $tmp1556 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
*(&local7) = $tmp1554;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1554));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1553));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1547));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1546));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1545));
// line 452
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1557 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Type* $tmp1558 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp1559 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1558);
frost$core$String* $tmp1560 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1561, $tmp1559);
frost$core$String* $tmp1562 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1560, &$s1563);
frost$collections$ListView* $tmp1564 = *(&local6);
ITable* $tmp1565 = ((frost$collections$CollectionView*) $tmp1564)->$class->itable;
while ($tmp1565->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1565 = $tmp1565->next;
}
$fn1567 $tmp1566 = $tmp1565->methods[0];
frost$core$Int64 $tmp1568 = $tmp1566(((frost$collections$CollectionView*) $tmp1564));
frost$core$Int64$wrapper* $tmp1569;
$tmp1569 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1569->value = $tmp1568;
frost$core$String* $tmp1570 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1571, ((frost$core$Object*) $tmp1569));
frost$core$String* $tmp1572 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1570, &$s1573);
frost$core$String* $tmp1574 = *(&local7);
frost$core$String* $tmp1575 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1572, $tmp1574);
frost$core$String* $tmp1576 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1575, &$s1577);
frost$core$String* $tmp1578 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1562, $tmp1576);
org$frostlang$frostc$Type* $tmp1579 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp1580 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1579);
frost$core$String* $tmp1581 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1582, $tmp1580);
frost$core$String* $tmp1583 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1581, &$s1584);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1585 = *(&local5);
frost$core$String** $tmp1586 = &$tmp1585->name;
frost$core$String* $tmp1587 = *$tmp1586;
frost$core$String* $tmp1588 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1583, $tmp1587);
frost$core$String* $tmp1589 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1588, &$s1590);
frost$core$String* $tmp1591 = *(&local2);
frost$core$String* $tmp1592 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1589, $tmp1591);
frost$core$String* $tmp1593 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1592, &$s1594);
frost$core$String* $tmp1595 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1578, $tmp1593);
frost$core$MutableString$init$frost$core$String($tmp1557, $tmp1595);
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
frost$core$MutableString* $tmp1596 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
*(&local8) = $tmp1557;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1589));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1588));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1583));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1581));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1578));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1576));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1572));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1569));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1558));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
// line 455
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1597));
frost$core$String* $tmp1598 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1598));
*(&local9) = &$s1599;
// line 456
frost$collections$ListView* $tmp1600 = *(&local6);
ITable* $tmp1601 = ((frost$collections$Iterable*) $tmp1600)->$class->itable;
while ($tmp1601->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1601 = $tmp1601->next;
}
$fn1603 $tmp1602 = $tmp1601->methods[0];
frost$collections$Iterator* $tmp1604 = $tmp1602(((frost$collections$Iterable*) $tmp1600));
goto block6;
block6:;
ITable* $tmp1605 = $tmp1604->$class->itable;
while ($tmp1605->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1605 = $tmp1605->next;
}
$fn1607 $tmp1606 = $tmp1605->methods[0];
frost$core$Bit $tmp1608 = $tmp1606($tmp1604);
bool $tmp1609 = $tmp1608.value;
if ($tmp1609) goto block8; else goto block7;
block7:;
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp1610 = $tmp1604->$class->itable;
while ($tmp1610->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1610 = $tmp1610->next;
}
$fn1612 $tmp1611 = $tmp1610->methods[1];
frost$core$Object* $tmp1613 = $tmp1611($tmp1604);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1613)));
org$frostlang$frostc$MethodDecl* $tmp1614 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) $tmp1613);
// line 457
frost$core$MutableString* $tmp1615 = *(&local8);
frost$core$String* $tmp1616 = *(&local9);
frost$core$MutableString$append$frost$core$String($tmp1615, $tmp1616);
// line 458
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1617));
frost$core$String* $tmp1618 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
*(&local9) = &$s1619;
// line 459
org$frostlang$frostc$MethodDecl* $tmp1620 = *(&local10);
org$frostlang$frostc$Annotations** $tmp1621 = &$tmp1620->annotations;
org$frostlang$frostc$Annotations* $tmp1622 = *$tmp1621;
frost$core$Bit $tmp1623 = org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit($tmp1622);
bool $tmp1624 = $tmp1623.value;
if ($tmp1624) goto block9; else goto block11;
block9:;
// line 460
frost$core$MutableString* $tmp1625 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp1625, &$s1626);
goto block10;
block11:;
// line 1
// line 463
frost$core$MutableString* $tmp1627 = *(&local8);
org$frostlang$frostc$MethodDecl* $tmp1628 = *(&local10);
frost$core$String* $tmp1629 = org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, $tmp1628);
frost$core$MutableString$append$frost$core$String($tmp1627, $tmp1629);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1629));
goto block10;
block10:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1613);
org$frostlang$frostc$MethodDecl* $tmp1630 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1630));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
// line 466
frost$core$MutableString* $tmp1631 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp1631, &$s1632);
// line 467
frost$io$MemoryOutputStream** $tmp1633 = &param0->types;
frost$io$MemoryOutputStream* $tmp1634 = *$tmp1633;
frost$core$MutableString* $tmp1635 = *(&local8);
frost$core$String* $tmp1636 = frost$core$MutableString$finish$R$frost$core$String($tmp1635);
$fn1638 $tmp1637 = ($fn1638) ((frost$io$OutputStream*) $tmp1634)->$class->vtable[19];
frost$core$Error* $tmp1639 = $tmp1637(((frost$io$OutputStream*) $tmp1634), $tmp1636);
if ($tmp1639 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
*(&local0) = $tmp1639;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1636));
frost$core$String* $tmp1640 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1641 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1641));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1642 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1642));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1643 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1644 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1644));
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1645 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1645));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1526);
org$frostlang$frostc$Type* $tmp1646 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1646));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
frost$core$String* $tmp1647 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1647));
*(&local2) = ((frost$core$String*) NULL);
frost$collections$HashSet* $tmp1648 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
*(&local1) = ((frost$collections$HashSet*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1636));
// line 468
frost$core$String* $tmp1649 = *(&local7);
frost$core$String* $tmp1650 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1651, $tmp1649);
frost$core$String* $tmp1652 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1650, &$s1653);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
frost$core$String* $tmp1654 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1654));
*(&local2) = $tmp1652;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
frost$core$String* $tmp1655 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1655));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1656 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1656));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1657 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1658 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1659 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1659));
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1660 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1660));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1526);
org$frostlang$frostc$Type* $tmp1661 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1661));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
// line 470
frost$core$String* $tmp1662 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
frost$core$String* $tmp1663 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1663));
*(&local2) = ((frost$core$String*) NULL);
frost$collections$HashSet* $tmp1664 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1664));
*(&local1) = ((frost$collections$HashSet*) NULL);
frost$core$Error* $tmp1665 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1665));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp1662;
block1:;
// line 473
frost$core$Int64 $tmp1666 = (frost$core$Int64) {473};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1667, $tmp1666);
abort(); // unreachable
block2:;
frost$core$Error* $tmp1668 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1668));
*(&local0) = ((frost$core$Error*) NULL);
goto block14;
block14:;

}
frost$core$Bit org$frostlang$frostc$CCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

// line 478
frost$core$Weak** $tmp1669 = &param0->hCodeGen;
frost$core$Weak* $tmp1670 = *$tmp1669;
frost$core$Object* $tmp1671 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1670);
frost$core$Bit $tmp1672 = org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$HCodeGenerator*) $tmp1671), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp1671);
return $tmp1672;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$CCodeGenerator$MethodShim* local4 = NULL;
// line 482
frost$core$Weak** $tmp1673 = &param0->compiler;
frost$core$Weak* $tmp1674 = *$tmp1673;
frost$core$Object* $tmp1675 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1674);
frost$core$Bit $tmp1676 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1675), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp1675);
// line 483
frost$core$Weak** $tmp1677 = &param1->owner;
frost$core$Weak* $tmp1678 = *$tmp1677;
frost$core$Object* $tmp1679 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1678);
frost$core$Bit $tmp1680 = org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp1679));
bool $tmp1681 = $tmp1680.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1679);
if ($tmp1681) goto block1; else goto block2;
block1:;
// line 484
org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param1);
goto block2;
block2:;
// line 486
*(&local0) = ((frost$core$String*) NULL);
// line 487
frost$core$Weak** $tmp1682 = &param0->compiler;
frost$core$Weak* $tmp1683 = *$tmp1682;
frost$core$Object* $tmp1684 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1683);
frost$core$Weak** $tmp1685 = &param1->owner;
frost$core$Weak* $tmp1686 = *$tmp1685;
frost$core$Object* $tmp1687 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1686);
org$frostlang$frostc$Type** $tmp1688 = &((org$frostlang$frostc$ClassDecl*) $tmp1687)->type;
org$frostlang$frostc$Type* $tmp1689 = *$tmp1688;
frost$core$Bit $tmp1690 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp1691 = org$frostlang$frostc$Compiler$declaredTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp1684), param1, $tmp1689, $tmp1690);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
org$frostlang$frostc$Type* $tmp1692 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1692));
*(&local1) = $tmp1691;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
frost$core$Frost$unref$frost$core$Object$Q($tmp1687);
frost$core$Frost$unref$frost$core$Object$Q($tmp1684);
// line 488
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
// line 489
frost$core$Weak** $tmp1693 = &param0->compiler;
frost$core$Weak* $tmp1694 = *$tmp1693;
frost$core$Object* $tmp1695 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1694);
frost$core$Weak** $tmp1696 = &param1->owner;
frost$core$Weak* $tmp1697 = *$tmp1696;
frost$core$Object* $tmp1698 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1697);
frost$core$Bit $tmp1699 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1695), ((org$frostlang$frostc$ClassDecl*) $tmp1698));
bool $tmp1700 = $tmp1699.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1698);
frost$core$Frost$unref$frost$core$Object$Q($tmp1695);
if ($tmp1700) goto block3; else goto block5;
block3:;
// line 490
org$frostlang$frostc$Type* $tmp1701 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
org$frostlang$frostc$Type* $tmp1702 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1702));
*(&local2) = $tmp1701;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
goto block4;
block5:;
// line 1
// line 493
frost$core$Weak** $tmp1703 = &param1->owner;
frost$core$Weak* $tmp1704 = *$tmp1703;
frost$core$Object* $tmp1705 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1704);
org$frostlang$frostc$Type** $tmp1706 = &((org$frostlang$frostc$ClassDecl*) $tmp1705)->type;
org$frostlang$frostc$Type* $tmp1707 = *$tmp1706;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
org$frostlang$frostc$Type* $tmp1708 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1708));
*(&local2) = $tmp1707;
frost$core$Frost$unref$frost$core$Object$Q($tmp1705);
goto block4;
block4:;
// line 495
frost$core$Weak** $tmp1709 = &param0->compiler;
frost$core$Weak* $tmp1710 = *$tmp1709;
frost$core$Object* $tmp1711 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1710);
org$frostlang$frostc$Type* $tmp1712 = *(&local2);
org$frostlang$frostc$Type* $tmp1713 = org$frostlang$frostc$Compiler$inheritedTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp1711), param1, $tmp1712);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1713));
org$frostlang$frostc$Type* $tmp1714 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
*(&local3) = $tmp1713;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1713));
frost$core$Frost$unref$frost$core$Object$Q($tmp1711);
// line 496
org$frostlang$frostc$Type* $tmp1715 = *(&local1);
org$frostlang$frostc$Type* $tmp1716 = *(&local3);
ITable* $tmp1717 = ((frost$core$Equatable*) $tmp1715)->$class->itable;
while ($tmp1717->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1717 = $tmp1717->next;
}
$fn1719 $tmp1718 = $tmp1717->methods[1];
frost$core$Bit $tmp1720 = $tmp1718(((frost$core$Equatable*) $tmp1715), ((frost$core$Equatable*) $tmp1716));
bool $tmp1721 = $tmp1720.value;
if ($tmp1721) goto block6; else goto block8;
block6:;
// line 497
org$frostlang$frostc$Type* $tmp1722 = *(&local3);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1723 = org$frostlang$frostc$CCodeGenerator$createMethodShim$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$MethodShim(param0, param1, $tmp1722);
*(&local4) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1724 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1724));
*(&local4) = $tmp1723;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
// line 498
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1725 = *(&local4);
frost$core$String** $tmp1726 = &$tmp1725->name;
frost$core$String* $tmp1727 = *$tmp1726;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1727));
frost$core$String* $tmp1728 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1728));
*(&local0) = $tmp1727;
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1729 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
*(&local4) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block7;
block8:;
// line 1
// line 501
frost$core$String* $tmp1730 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1730));
frost$core$String* $tmp1731 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
*(&local0) = $tmp1730;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1730));
goto block7;
block7:;
// line 503
frost$core$String* $tmp1732 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
org$frostlang$frostc$Type* $tmp1733 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1733));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1734 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1735 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1736 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1732;

}
org$frostlang$frostc$CCodeGenerator$ClassConstant* org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local1 = NULL;
frost$core$String* local2 = NULL;
frost$collections$ListView* local3 = NULL;
frost$core$String* local4 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local5 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local6 = NULL;
frost$core$String* local7 = NULL;
frost$core$MutableString* local8 = NULL;
frost$core$String* local9 = NULL;
org$frostlang$frostc$MethodDecl* local10 = NULL;
// line 507
*(&local0) = ((frost$core$Error*) NULL);
// line 508
frost$collections$HashMap** $tmp1737 = &param0->classConstants;
frost$collections$HashMap* $tmp1738 = *$tmp1737;
frost$core$String** $tmp1739 = &param1->name;
frost$core$String* $tmp1740 = *$tmp1739;
frost$core$Object* $tmp1741 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1738, ((frost$collections$Key*) $tmp1740));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp1741)));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1742 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1742));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp1741);
frost$core$Frost$unref$frost$core$Object$Q($tmp1741);
// line 509
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1743 = *(&local1);
frost$core$Bit $tmp1744 = frost$core$Bit$init$builtin_bit($tmp1743 == NULL);
bool $tmp1745 = $tmp1744.value;
if ($tmp1745) goto block3; else goto block4;
block3:;
// line 510
org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(param0, param1);
// line 511
frost$core$Weak** $tmp1746 = &param0->compiler;
frost$core$Weak* $tmp1747 = *$tmp1746;
frost$core$Object* $tmp1748 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1747);
frost$core$Bit $tmp1749 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1748), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp1748);
// line 512
*(&local2) = ((frost$core$String*) NULL);
// line 513
frost$core$Bit $tmp1750 = org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, param1);
bool $tmp1751 = $tmp1750.value;
if ($tmp1751) goto block5; else goto block6;
block5:;
// line 514
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$CCodeGenerator$ClassConstant));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1752 = (org$frostlang$frostc$CCodeGenerator$ClassConstant*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$ClassConstant$class);
org$frostlang$frostc$Type** $tmp1753 = &param1->type;
org$frostlang$frostc$Type* $tmp1754 = *$tmp1753;
frost$core$String** $tmp1755 = &((org$frostlang$frostc$Symbol*) $tmp1754)->name;
frost$core$String* $tmp1756 = *$tmp1755;
frost$core$String* $tmp1757 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1756);
frost$core$String* $tmp1758 = frost$core$String$get_asString$R$frost$core$String($tmp1757);
frost$core$String* $tmp1759 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1758, &$s1760);
org$frostlang$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String($tmp1752, $tmp1759, &$s1761);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1752));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1762 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1762));
*(&local1) = $tmp1752;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1758));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1757));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1752));
// line 516
frost$collections$HashMap** $tmp1763 = &param0->classConstants;
frost$collections$HashMap* $tmp1764 = *$tmp1763;
frost$core$String** $tmp1765 = &param1->name;
frost$core$String* $tmp1766 = *$tmp1765;
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1767 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1764, ((frost$collections$Key*) $tmp1766), ((frost$core$Object*) $tmp1767));
// line 517
frost$collections$HashMap** $tmp1768 = &param0->classConstants;
frost$collections$HashMap* $tmp1769 = *$tmp1768;
frost$core$String** $tmp1770 = &param1->name;
frost$core$String* $tmp1771 = *$tmp1770;
frost$core$Object* $tmp1772 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1769, ((frost$collections$Key*) $tmp1771));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp1772)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1772);
frost$core$String* $tmp1773 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1773));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1774 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1774));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Error* $tmp1775 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
*(&local0) = ((frost$core$Error*) NULL);
return ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp1772);
block6:;
// line 519
frost$core$Weak** $tmp1776 = &param0->compiler;
frost$core$Weak* $tmp1777 = *$tmp1776;
frost$core$Object* $tmp1778 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1777);
frost$collections$Stack** $tmp1779 = &((org$frostlang$frostc$Compiler*) $tmp1778)->currentClass;
frost$collections$Stack* $tmp1780 = *$tmp1779;
frost$collections$Stack$push$frost$collections$Stack$T($tmp1780, ((frost$core$Object*) param1));
frost$core$Frost$unref$frost$core$Object$Q($tmp1778);
// line 520
frost$core$Weak** $tmp1781 = &param0->compiler;
frost$core$Weak* $tmp1782 = *$tmp1781;
frost$core$Object* $tmp1783 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1782);
frost$collections$ListView* $tmp1784 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1783), param1);
*(&local3) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1784));
frost$collections$ListView* $tmp1785 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1785));
*(&local3) = $tmp1784;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1784));
frost$core$Frost$unref$frost$core$Object$Q($tmp1783);
// line 521
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$CCodeGenerator$ClassConstant));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1786 = (org$frostlang$frostc$CCodeGenerator$ClassConstant*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$ClassConstant$class);
org$frostlang$frostc$Type** $tmp1787 = &param1->type;
org$frostlang$frostc$Type* $tmp1788 = *$tmp1787;
frost$core$String** $tmp1789 = &((org$frostlang$frostc$Symbol*) $tmp1788)->name;
frost$core$String* $tmp1790 = *$tmp1789;
frost$core$String* $tmp1791 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1790);
frost$core$String* $tmp1792 = frost$core$String$get_asString$R$frost$core$String($tmp1791);
frost$core$String* $tmp1793 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1792, &$s1794);
org$frostlang$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String($tmp1786, $tmp1793, &$s1795);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1786));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1796 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1796));
*(&local1) = $tmp1786;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1793));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1792));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1786));
// line 522
frost$collections$HashMap** $tmp1797 = &param0->classConstants;
frost$collections$HashMap* $tmp1798 = *$tmp1797;
frost$core$String** $tmp1799 = &param1->name;
frost$core$String* $tmp1800 = *$tmp1799;
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1801 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1798, ((frost$collections$Key*) $tmp1800), ((frost$core$Object*) $tmp1801));
// line 523
*(&local4) = ((frost$core$String*) NULL);
// line 524
org$frostlang$frostc$Type** $tmp1802 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp1803 = *$tmp1802;
frost$core$Bit $tmp1804 = frost$core$Bit$init$builtin_bit($tmp1803 != NULL);
bool $tmp1805 = $tmp1804.value;
if ($tmp1805) goto block7; else goto block9;
block7:;
// line 525
frost$core$Weak** $tmp1806 = &param0->compiler;
frost$core$Weak* $tmp1807 = *$tmp1806;
frost$core$Object* $tmp1808 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1807);
org$frostlang$frostc$Type** $tmp1809 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp1810 = *$tmp1809;
org$frostlang$frostc$ClassDecl* $tmp1811 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1808), $tmp1810);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1812 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp1811);
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1812));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1813 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1813));
*(&local5) = $tmp1812;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1811));
frost$core$Frost$unref$frost$core$Object$Q($tmp1808);
// line 526
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1814 = *(&local5);
frost$core$String** $tmp1815 = &$tmp1814->name;
frost$core$String* $tmp1816 = *$tmp1815;
frost$core$String* $tmp1817 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1818, $tmp1816);
frost$core$String* $tmp1819 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1817, &$s1820);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
frost$core$String* $tmp1821 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1821));
*(&local4) = $tmp1819;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1817));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1822 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1822));
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block8;
block9:;
// line 1
// line 529
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1823));
frost$core$String* $tmp1824 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1824));
*(&local4) = &$s1825;
goto block8;
block8:;
// line 531
frost$core$Weak** $tmp1826 = &param0->compiler;
frost$core$Weak* $tmp1827 = *$tmp1826;
frost$core$Object* $tmp1828 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1827);
org$frostlang$frostc$Type* $tmp1829 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp1830 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1828), $tmp1829);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1831 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp1830);
*(&local6) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1832 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
*(&local6) = $tmp1831;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1829));
frost$core$Frost$unref$frost$core$Object$Q($tmp1828);
// line 532
frost$core$String** $tmp1833 = &param1->name;
frost$core$String* $tmp1834 = *$tmp1833;
frost$core$String* $tmp1835 = org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(param0, $tmp1834);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
frost$core$String* $tmp1836 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1836));
*(&local7) = $tmp1835;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
// line 533
frost$core$String* $tmp1837 = *(&local7);
frost$core$Bit $tmp1838 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1837, &$s1839);
bool $tmp1840 = $tmp1838.value;
if ($tmp1840) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp1841 = (frost$core$Int64) {533};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1842, $tmp1841);
abort(); // unreachable
block10:;
// line 534
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1843 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp1844 = *(&local7);
frost$core$Int64 $tmp1845 = (frost$core$Int64) {1};
frost$core$Bit $tmp1846 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp1847 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp1845, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp1846);
frost$core$String* $tmp1848 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp1844, $tmp1847);
frost$core$String* $tmp1849 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1850, $tmp1848);
frost$core$String* $tmp1851 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1849, &$s1852);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1853 = *(&local1);
frost$core$String** $tmp1854 = &$tmp1853->name;
frost$core$String* $tmp1855 = *$tmp1854;
frost$core$String* $tmp1856 = frost$core$String$get_asString$R$frost$core$String($tmp1855);
frost$core$String* $tmp1857 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1856, &$s1858);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1859 = *(&local1);
frost$core$String** $tmp1860 = &$tmp1859->name;
frost$core$String* $tmp1861 = *$tmp1860;
frost$core$String* $tmp1862 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1857, $tmp1861);
frost$core$String* $tmp1863 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1862, &$s1864);
frost$core$String* $tmp1865 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1851, $tmp1863);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1866 = *(&local6);
frost$core$String** $tmp1867 = &$tmp1866->name;
frost$core$String* $tmp1868 = *$tmp1867;
frost$core$String* $tmp1869 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1870, $tmp1868);
frost$core$String* $tmp1871 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1869, &$s1872);
frost$core$Int64 $tmp1873 = (frost$core$Int64) {18446744073709550617};
frost$core$Int64$wrapper* $tmp1874;
$tmp1874 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1874->value = $tmp1873;
frost$core$String* $tmp1875 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1871, ((frost$core$Object*) $tmp1874));
frost$core$String* $tmp1876 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1875, &$s1877);
frost$core$String* $tmp1878 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1865, $tmp1876);
frost$core$String* $tmp1879 = *(&local7);
frost$core$String* $tmp1880 = frost$core$String$get_asString$R$frost$core$String($tmp1879);
frost$core$String* $tmp1881 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1880, &$s1882);
frost$core$String* $tmp1883 = *(&local4);
frost$core$String* $tmp1884 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1881, $tmp1883);
frost$core$String* $tmp1885 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1884, &$s1886);
frost$core$String* $tmp1887 = org$frostlang$frostc$CCodeGenerator$getITable$org$frostlang$frostc$ClassDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1888 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1885, $tmp1887);
frost$core$String* $tmp1889 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1888, &$s1890);
frost$core$String* $tmp1891 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1878, $tmp1889);
frost$core$MutableString$init$frost$core$String($tmp1843, $tmp1891);
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1843));
frost$core$MutableString* $tmp1892 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
*(&local8) = $tmp1843;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1889));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1888));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1885));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1884));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1881));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1875));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1869));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1865));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1849));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1848));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1843));
// line 538
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1893));
frost$core$String* $tmp1894 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1894));
*(&local9) = &$s1895;
// line 539
frost$collections$ListView* $tmp1896 = *(&local3);
ITable* $tmp1897 = ((frost$collections$Iterable*) $tmp1896)->$class->itable;
while ($tmp1897->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1897 = $tmp1897->next;
}
$fn1899 $tmp1898 = $tmp1897->methods[0];
frost$collections$Iterator* $tmp1900 = $tmp1898(((frost$collections$Iterable*) $tmp1896));
goto block12;
block12:;
ITable* $tmp1901 = $tmp1900->$class->itable;
while ($tmp1901->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1901 = $tmp1901->next;
}
$fn1903 $tmp1902 = $tmp1901->methods[0];
frost$core$Bit $tmp1904 = $tmp1902($tmp1900);
bool $tmp1905 = $tmp1904.value;
if ($tmp1905) goto block14; else goto block13;
block13:;
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp1906 = $tmp1900->$class->itable;
while ($tmp1906->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1906 = $tmp1906->next;
}
$fn1908 $tmp1907 = $tmp1906->methods[1];
frost$core$Object* $tmp1909 = $tmp1907($tmp1900);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1909)));
org$frostlang$frostc$MethodDecl* $tmp1910 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) $tmp1909);
// line 540
frost$core$MutableString* $tmp1911 = *(&local8);
frost$core$String* $tmp1912 = *(&local9);
frost$core$MutableString$append$frost$core$String($tmp1911, $tmp1912);
// line 541
org$frostlang$frostc$MethodDecl* $tmp1913 = *(&local10);
org$frostlang$frostc$Annotations** $tmp1914 = &$tmp1913->annotations;
org$frostlang$frostc$Annotations* $tmp1915 = *$tmp1914;
frost$core$Bit $tmp1916 = org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit($tmp1915);
bool $tmp1917 = $tmp1916.value;
if ($tmp1917) goto block15; else goto block17;
block15:;
// line 542
frost$core$MutableString* $tmp1918 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp1918, &$s1919);
goto block16;
block17:;
// line 1
// line 545
frost$core$MutableString* $tmp1920 = *(&local8);
org$frostlang$frostc$MethodDecl* $tmp1921 = *(&local10);
frost$core$String* $tmp1922 = org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, $tmp1921);
frost$core$MutableString$append$frost$core$String($tmp1920, $tmp1922);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
goto block16;
block16:;
// line 547
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1923));
frost$core$String* $tmp1924 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1924));
*(&local9) = &$s1925;
frost$core$Frost$unref$frost$core$Object$Q($tmp1909);
org$frostlang$frostc$MethodDecl* $tmp1926 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1926));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1900));
// line 549
frost$core$MutableString* $tmp1927 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp1927, &$s1928);
// line 550
frost$io$MemoryOutputStream** $tmp1929 = &param0->types;
frost$io$MemoryOutputStream* $tmp1930 = *$tmp1929;
frost$core$MutableString* $tmp1931 = *(&local8);
frost$core$String* $tmp1932 = frost$core$MutableString$finish$R$frost$core$String($tmp1931);
$fn1934 $tmp1933 = ($fn1934) ((frost$io$OutputStream*) $tmp1930)->$class->vtable[19];
frost$core$Error* $tmp1935 = $tmp1933(((frost$io$OutputStream*) $tmp1930), $tmp1932);
if ($tmp1935 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1935));
*(&local0) = $tmp1935;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1935));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1932));
frost$core$String* $tmp1936 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1936));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1937 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1937));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1938 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1939 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1939));
*(&local6) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp1940 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1940));
*(&local4) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1941 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1941));
*(&local3) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp1942 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1942));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1943 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1943));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1935));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1932));
// line 551
frost$core$Weak** $tmp1944 = &param0->compiler;
frost$core$Weak* $tmp1945 = *$tmp1944;
frost$core$Object* $tmp1946 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1945);
frost$collections$Stack** $tmp1947 = &((org$frostlang$frostc$Compiler*) $tmp1946)->currentClass;
frost$collections$Stack* $tmp1948 = *$tmp1947;
frost$core$Int64 $tmp1949 = (frost$core$Int64) {0};
frost$core$Object* $tmp1950 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp1948, $tmp1949);
bool $tmp1951 = ((org$frostlang$frostc$ClassDecl*) $tmp1950) == param1;
frost$core$Bit $tmp1952 = frost$core$Bit$init$builtin_bit($tmp1951);
bool $tmp1953 = $tmp1952.value;
if ($tmp1953) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp1954 = (frost$core$Int64) {551};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1955, $tmp1954);
abort(); // unreachable
block20:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1950);
frost$core$Frost$unref$frost$core$Object$Q($tmp1946);
// line 552
frost$core$Weak** $tmp1956 = &param0->compiler;
frost$core$Weak* $tmp1957 = *$tmp1956;
frost$core$Object* $tmp1958 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1957);
frost$collections$Stack** $tmp1959 = &((org$frostlang$frostc$Compiler*) $tmp1958)->currentClass;
frost$collections$Stack* $tmp1960 = *$tmp1959;
frost$core$Object* $tmp1961 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp1960);
frost$core$Frost$unref$frost$core$Object$Q($tmp1961);
frost$core$Frost$unref$frost$core$Object$Q($tmp1958);
frost$core$String* $tmp1962 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1962));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1963 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1963));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1964 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1964));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1965 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1965));
*(&local6) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp1966 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1966));
*(&local4) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1967 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1967));
*(&local3) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp1968 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1968));
*(&local2) = ((frost$core$String*) NULL);
goto block4;
block4:;
// line 554
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1969 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1969));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1970 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Error* $tmp1971 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1971));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp1969;
block1:;
// line 557
frost$core$Int64 $tmp1972 = (frost$core$Int64) {557};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1973, $tmp1972);
abort(); // unreachable
block2:;
frost$core$Error* $tmp1974 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1974));
*(&local0) = ((frost$core$Error*) NULL);
goto block22;
block22:;

}
org$frostlang$frostc$CCodeGenerator$ClassConstant* org$frostlang$frostc$CCodeGenerator$getWrapperClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$ClassDecl* local4 = NULL;
frost$collections$ListView* local5 = NULL;
frost$collections$ListView* local6 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local7 = NULL;
frost$core$String* local8 = NULL;
frost$core$String* local9 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local10 = NULL;
frost$core$String* local11 = NULL;
frost$core$MutableString* local12 = NULL;
frost$core$String* local13 = NULL;
frost$core$Int64 local14;
// line 562
*(&local0) = ((frost$core$Error*) NULL);
// line 563
frost$core$String** $tmp1975 = &param1->name;
frost$core$String* $tmp1976 = *$tmp1975;
frost$core$String* $tmp1977 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1976);
frost$core$String* $tmp1978 = frost$core$String$get_asString$R$frost$core$String($tmp1977);
frost$core$String* $tmp1979 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1978, &$s1980);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
frost$core$String* $tmp1981 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1981));
*(&local1) = $tmp1979;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1977));
// line 564
frost$collections$HashMap** $tmp1982 = &param0->classConstants;
frost$collections$HashMap* $tmp1983 = *$tmp1982;
frost$core$String* $tmp1984 = *(&local1);
frost$core$Object* $tmp1985 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1983, ((frost$collections$Key*) $tmp1984));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp1985)));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1986 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1986));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp1985);
frost$core$Frost$unref$frost$core$Object$Q($tmp1985);
// line 565
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1987 = *(&local2);
frost$core$Bit $tmp1988 = frost$core$Bit$init$builtin_bit($tmp1987 == NULL);
bool $tmp1989 = $tmp1988.value;
if ($tmp1989) goto block3; else goto block4;
block3:;
// line 566
frost$core$Bit $tmp1990 = org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, param1);
bool $tmp1991 = $tmp1990.value;
if ($tmp1991) goto block5; else goto block7;
block5:;
// line 567
org$frostlang$frostc$Type* $tmp1992 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp1993 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1992);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1992));
// line 568
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1994));
frost$core$String* $tmp1995 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
*(&local3) = &$s1996;
// line 569
frost$io$MemoryOutputStream** $tmp1997 = &param0->types;
frost$io$MemoryOutputStream* $tmp1998 = *$tmp1997;
frost$core$String* $tmp1999 = *(&local1);
frost$core$String* $tmp2000 = frost$core$String$get_asString$R$frost$core$String($tmp1999);
frost$core$String* $tmp2001 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2000, &$s2002);
frost$core$String* $tmp2003 = *(&local3);
frost$core$String* $tmp2004 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2001, $tmp2003);
frost$core$String* $tmp2005 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2004, &$s2006);
$fn2008 $tmp2007 = ($fn2008) ((frost$io$OutputStream*) $tmp1998)->$class->vtable[19];
frost$core$Error* $tmp2009 = $tmp2007(((frost$io$OutputStream*) $tmp1998), $tmp2005);
if ($tmp2009 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
*(&local0) = $tmp2009;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2004));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
frost$core$String* $tmp2010 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2010));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2011 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2011));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2012 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2012));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2004));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
// line 570
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$CCodeGenerator$ClassConstant));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2013 = (org$frostlang$frostc$CCodeGenerator$ClassConstant*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$ClassConstant$class);
frost$core$String* $tmp2014 = *(&local1);
frost$core$String* $tmp2015 = *(&local3);
org$frostlang$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String($tmp2013, $tmp2014, $tmp2015);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2016 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2016));
*(&local2) = $tmp2013;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
frost$core$String* $tmp2017 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2017));
*(&local3) = ((frost$core$String*) NULL);
goto block6;
block7:;
// line 1
// line 573
frost$core$Weak** $tmp2018 = &param0->compiler;
frost$core$Weak* $tmp2019 = *$tmp2018;
frost$core$Object* $tmp2020 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2019);
org$frostlang$frostc$Type* $tmp2021 = org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp2022 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2020), $tmp2021);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2022));
org$frostlang$frostc$ClassDecl* $tmp2023 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2023));
*(&local4) = $tmp2022;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2022));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2021));
frost$core$Frost$unref$frost$core$Object$Q($tmp2020);
// line 574
frost$core$Weak** $tmp2024 = &param0->compiler;
frost$core$Weak* $tmp2025 = *$tmp2024;
frost$core$Object* $tmp2026 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2025);
org$frostlang$frostc$ClassDecl* $tmp2027 = *(&local4);
frost$collections$ListView* $tmp2028 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2026), $tmp2027);
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
frost$collections$ListView* $tmp2029 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2029));
*(&local5) = $tmp2028;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
frost$core$Frost$unref$frost$core$Object$Q($tmp2026);
// line 575
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$CCodeGenerator$ClassConstant));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2030 = (org$frostlang$frostc$CCodeGenerator$ClassConstant*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$ClassConstant$class);
frost$core$String** $tmp2031 = &param1->name;
frost$core$String* $tmp2032 = *$tmp2031;
frost$core$String* $tmp2033 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp2032);
frost$core$String* $tmp2034 = frost$core$String$get_asString$R$frost$core$String($tmp2033);
frost$core$String* $tmp2035 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2034, &$s2036);
org$frostlang$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String($tmp2030, $tmp2035, &$s2037);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2038 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2038));
*(&local2) = $tmp2030;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2033));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
// line 576
frost$core$Weak** $tmp2039 = &param0->compiler;
frost$core$Weak* $tmp2040 = *$tmp2039;
frost$core$Object* $tmp2041 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2040);
frost$collections$ListView* $tmp2042 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2041), param1);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2042));
frost$collections$ListView* $tmp2043 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2043));
*(&local6) = $tmp2042;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2042));
frost$core$Frost$unref$frost$core$Object$Q($tmp2041);
// line 577
frost$core$Weak** $tmp2044 = &param0->compiler;
frost$core$Weak* $tmp2045 = *$tmp2044;
frost$core$Object* $tmp2046 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2045);
org$frostlang$frostc$Type** $tmp2047 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp2048 = *$tmp2047;
org$frostlang$frostc$ClassDecl* $tmp2049 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2046), $tmp2048);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2050 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp2049);
*(&local7) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2050));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2051 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2051));
*(&local7) = $tmp2050;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2050));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2049));
frost$core$Frost$unref$frost$core$Object$Q($tmp2046);
// line 578
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2052 = *(&local7);
frost$core$String** $tmp2053 = &$tmp2052->name;
frost$core$String* $tmp2054 = *$tmp2053;
frost$core$String* $tmp2055 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2056, $tmp2054);
frost$core$String* $tmp2057 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2055, &$s2058);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2057));
frost$core$String* $tmp2059 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2059));
*(&local8) = $tmp2057;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2055));
// line 579
frost$core$String* $tmp2060 = org$frostlang$frostc$CCodeGenerator$getWrapperITable$org$frostlang$frostc$ClassDecl$R$frost$core$String(param0, param1);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
frost$core$String* $tmp2061 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
*(&local9) = $tmp2060;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
// line 580
frost$core$Weak** $tmp2062 = &param0->compiler;
frost$core$Weak* $tmp2063 = *$tmp2062;
frost$core$Object* $tmp2064 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2063);
org$frostlang$frostc$Type* $tmp2065 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp2066 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2064), $tmp2065);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2067 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp2066);
*(&local10) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2067));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2068 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2068));
*(&local10) = $tmp2067;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2067));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2066));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
frost$core$Frost$unref$frost$core$Object$Q($tmp2064);
// line 581
frost$core$String** $tmp2069 = &param1->name;
frost$core$String* $tmp2070 = *$tmp2069;
frost$core$String* $tmp2071 = org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(param0, $tmp2070);
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2071));
frost$core$String* $tmp2072 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2072));
*(&local11) = $tmp2071;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2071));
// line 582
frost$core$String* $tmp2073 = *(&local11);
frost$core$Bit $tmp2074 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2073, &$s2075);
bool $tmp2076 = $tmp2074.value;
if ($tmp2076) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp2077 = (frost$core$Int64) {582};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2078, $tmp2077);
abort(); // unreachable
block10:;
// line 583
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2079 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp2080 = *(&local11);
frost$core$Int64 $tmp2081 = (frost$core$Int64) {1};
frost$core$Bit $tmp2082 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp2083 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp2081, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp2082);
frost$core$String* $tmp2084 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp2080, $tmp2083);
frost$core$String* $tmp2085 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2086, $tmp2084);
frost$core$String* $tmp2087 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2085, &$s2088);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2089 = *(&local2);
frost$core$String** $tmp2090 = &$tmp2089->name;
frost$core$String* $tmp2091 = *$tmp2090;
frost$core$String* $tmp2092 = frost$core$String$get_asString$R$frost$core$String($tmp2091);
frost$core$String* $tmp2093 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2092, &$s2094);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2095 = *(&local2);
frost$core$String** $tmp2096 = &$tmp2095->name;
frost$core$String* $tmp2097 = *$tmp2096;
frost$core$String* $tmp2098 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2093, $tmp2097);
frost$core$String* $tmp2099 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2098, &$s2100);
frost$core$String* $tmp2101 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2087, $tmp2099);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2102 = *(&local10);
frost$core$String** $tmp2103 = &$tmp2102->name;
frost$core$String* $tmp2104 = *$tmp2103;
frost$core$String* $tmp2105 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2106, $tmp2104);
frost$core$String* $tmp2107 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2105, &$s2108);
frost$core$Int64 $tmp2109 = (frost$core$Int64) {18446744073709550617};
frost$core$Int64$wrapper* $tmp2110;
$tmp2110 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2110->value = $tmp2109;
frost$core$String* $tmp2111 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2107, ((frost$core$Object*) $tmp2110));
frost$core$String* $tmp2112 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2111, &$s2113);
frost$core$String* $tmp2114 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2101, $tmp2112);
frost$core$String* $tmp2115 = *(&local11);
frost$core$String* $tmp2116 = frost$core$String$get_asString$R$frost$core$String($tmp2115);
frost$core$String* $tmp2117 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2116, &$s2118);
frost$core$String* $tmp2119 = *(&local8);
frost$core$String* $tmp2120 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2117, $tmp2119);
frost$core$String* $tmp2121 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2120, &$s2122);
frost$core$String* $tmp2123 = *(&local9);
frost$core$String* $tmp2124 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2121, $tmp2123);
frost$core$String* $tmp2125 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2124, &$s2126);
frost$core$String* $tmp2127 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2114, $tmp2125);
frost$core$MutableString$init$frost$core$String($tmp2079, $tmp2127);
*(&local12) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2079));
frost$core$MutableString* $tmp2128 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
*(&local12) = $tmp2079;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2124));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2099));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2098));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2093));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2092));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2087));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2085));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2079));
// line 587
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2129));
frost$core$String* $tmp2130 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2130));
*(&local13) = &$s2131;
// line 588
frost$core$Int64 $tmp2132 = (frost$core$Int64) {0};
frost$collections$ListView* $tmp2133 = *(&local5);
ITable* $tmp2134 = ((frost$collections$CollectionView*) $tmp2133)->$class->itable;
while ($tmp2134->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2134 = $tmp2134->next;
}
$fn2136 $tmp2135 = $tmp2134->methods[0];
frost$core$Int64 $tmp2137 = $tmp2135(((frost$collections$CollectionView*) $tmp2133));
frost$core$Bit $tmp2138 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2139 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2132, $tmp2137, $tmp2138);
frost$core$Int64 $tmp2140 = $tmp2139.min;
*(&local14) = $tmp2140;
frost$core$Int64 $tmp2141 = $tmp2139.max;
frost$core$Bit $tmp2142 = $tmp2139.inclusive;
bool $tmp2143 = $tmp2142.value;
frost$core$Int64 $tmp2144 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2145 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2144);
if ($tmp2143) goto block15; else goto block16;
block15:;
int64_t $tmp2146 = $tmp2140.value;
int64_t $tmp2147 = $tmp2141.value;
bool $tmp2148 = $tmp2146 <= $tmp2147;
frost$core$Bit $tmp2149 = (frost$core$Bit) {$tmp2148};
bool $tmp2150 = $tmp2149.value;
if ($tmp2150) goto block12; else goto block13;
block16:;
int64_t $tmp2151 = $tmp2140.value;
int64_t $tmp2152 = $tmp2141.value;
bool $tmp2153 = $tmp2151 < $tmp2152;
frost$core$Bit $tmp2154 = (frost$core$Bit) {$tmp2153};
bool $tmp2155 = $tmp2154.value;
if ($tmp2155) goto block12; else goto block13;
block12:;
// line 589
frost$core$MutableString* $tmp2156 = *(&local12);
frost$core$String* $tmp2157 = *(&local13);
frost$core$String* $tmp2158 = frost$core$String$get_asString$R$frost$core$String($tmp2157);
frost$core$String* $tmp2159 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2158, &$s2160);
frost$collections$ListView* $tmp2161 = *(&local6);
frost$core$Int64 $tmp2162 = *(&local14);
ITable* $tmp2163 = $tmp2161->$class->itable;
while ($tmp2163->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2163 = $tmp2163->next;
}
$fn2165 $tmp2164 = $tmp2163->methods[0];
frost$core$Object* $tmp2166 = $tmp2164($tmp2161, $tmp2162);
frost$core$String* $tmp2167 = org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, ((org$frostlang$frostc$MethodDecl*) $tmp2166));
frost$core$String* $tmp2168 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2159, $tmp2167);
frost$core$String* $tmp2169 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2168, &$s2170);
frost$core$MutableString$append$frost$core$String($tmp2156, $tmp2169);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2167));
frost$core$Frost$unref$frost$core$Object$Q($tmp2166);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2158));
// line 590
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2171));
frost$core$String* $tmp2172 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2172));
*(&local13) = &$s2173;
goto block14;
block14:;
frost$core$Int64 $tmp2174 = *(&local14);
int64_t $tmp2175 = $tmp2141.value;
int64_t $tmp2176 = $tmp2174.value;
int64_t $tmp2177 = $tmp2175 - $tmp2176;
frost$core$Int64 $tmp2178 = (frost$core$Int64) {$tmp2177};
frost$core$UInt64 $tmp2179 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2178);
if ($tmp2143) goto block18; else goto block19;
block18:;
uint64_t $tmp2180 = $tmp2179.value;
uint64_t $tmp2181 = $tmp2145.value;
bool $tmp2182 = $tmp2180 >= $tmp2181;
frost$core$Bit $tmp2183 = (frost$core$Bit) {$tmp2182};
bool $tmp2184 = $tmp2183.value;
if ($tmp2184) goto block17; else goto block13;
block19:;
uint64_t $tmp2185 = $tmp2179.value;
uint64_t $tmp2186 = $tmp2145.value;
bool $tmp2187 = $tmp2185 > $tmp2186;
frost$core$Bit $tmp2188 = (frost$core$Bit) {$tmp2187};
bool $tmp2189 = $tmp2188.value;
if ($tmp2189) goto block17; else goto block13;
block17:;
int64_t $tmp2190 = $tmp2174.value;
int64_t $tmp2191 = $tmp2144.value;
int64_t $tmp2192 = $tmp2190 + $tmp2191;
frost$core$Int64 $tmp2193 = (frost$core$Int64) {$tmp2192};
*(&local14) = $tmp2193;
goto block12;
block13:;
// line 592
frost$core$MutableString* $tmp2194 = *(&local12);
frost$core$MutableString$append$frost$core$String($tmp2194, &$s2195);
// line 593
frost$io$MemoryOutputStream** $tmp2196 = &param0->types;
frost$io$MemoryOutputStream* $tmp2197 = *$tmp2196;
frost$core$MutableString* $tmp2198 = *(&local12);
frost$core$String* $tmp2199 = frost$core$MutableString$finish$R$frost$core$String($tmp2198);
$fn2201 $tmp2200 = ($fn2201) ((frost$io$OutputStream*) $tmp2197)->$class->vtable[17];
frost$core$Error* $tmp2202 = $tmp2200(((frost$io$OutputStream*) $tmp2197), $tmp2199);
if ($tmp2202 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2202));
*(&local0) = $tmp2202;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2199));
frost$core$String* $tmp2203 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2203));
*(&local13) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2204 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2204));
*(&local12) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2205 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2206 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2206));
*(&local10) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2207 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2207));
*(&local9) = ((frost$core$String*) NULL);
frost$core$String* $tmp2208 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2209 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2209));
*(&local7) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$collections$ListView* $tmp2210 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2210));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp2211 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2211));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2212 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2212));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2213 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2213));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2214 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2214));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2199));
frost$core$String* $tmp2215 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2215));
*(&local13) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2216 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2216));
*(&local12) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2217 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2217));
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2218 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
*(&local10) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2219 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2219));
*(&local9) = ((frost$core$String*) NULL);
frost$core$String* $tmp2220 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2220));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2221 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2221));
*(&local7) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$collections$ListView* $tmp2222 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2222));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp2223 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2223));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2224 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block6;
block6:;
// line 595
frost$collections$HashMap** $tmp2225 = &param0->classConstants;
frost$collections$HashMap* $tmp2226 = *$tmp2225;
frost$core$String* $tmp2227 = *(&local1);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2228 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2226, ((frost$collections$Key*) $tmp2227), ((frost$core$Object*) $tmp2228));
goto block4;
block4:;
// line 597
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2229 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2229));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2230 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2231 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2231));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp2232 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp2229;
block1:;
// line 600
frost$core$Int64 $tmp2233 = (frost$core$Int64) {600};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2234, $tmp2233);
abort(); // unreachable
block2:;
frost$core$Error* $tmp2235 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2235));
*(&local0) = ((frost$core$Error*) NULL);
goto block22;
block22:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$Variable$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Variable* param1) {

frost$core$String* local0 = NULL;
// line 605
org$frostlang$frostc$Variable$Storage** $tmp2236 = &param1->storage;
org$frostlang$frostc$Variable$Storage* $tmp2237 = *$tmp2236;
frost$core$Int64* $tmp2238 = &$tmp2237->$rawValue;
frost$core$Int64 $tmp2239 = *$tmp2238;
frost$core$Int64 $tmp2240 = (frost$core$Int64) {1};
frost$core$Bit $tmp2241 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2239, $tmp2240);
bool $tmp2242 = $tmp2241.value;
if ($tmp2242) goto block2; else goto block1;
block2:;
// line 607
frost$core$String** $tmp2243 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp2244 = *$tmp2243;
frost$core$String* $tmp2245 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2246, $tmp2244);
frost$core$String* $tmp2247 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2245, &$s2248);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2245));
return $tmp2247;
block1:;
// line 610
frost$collections$IdentityMap** $tmp2249 = &param0->variableNames;
frost$collections$IdentityMap* $tmp2250 = *$tmp2249;
frost$core$Object* $tmp2251 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp2250, ((frost$core$Object*) param1));
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp2251)));
frost$core$String* $tmp2252 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
*(&local0) = ((frost$core$String*) $tmp2251);
frost$core$Frost$unref$frost$core$Object$Q($tmp2251);
// line 611
frost$core$String* $tmp2253 = *(&local0);
frost$core$Bit $tmp2254 = frost$core$Bit$init$builtin_bit($tmp2253 == NULL);
bool $tmp2255 = $tmp2254.value;
if ($tmp2255) goto block3; else goto block4;
block3:;
// line 612
frost$core$Int64* $tmp2256 = &param0->varCount;
frost$core$Int64 $tmp2257 = *$tmp2256;
frost$core$Int64 $tmp2258 = (frost$core$Int64) {1};
int64_t $tmp2259 = $tmp2257.value;
int64_t $tmp2260 = $tmp2258.value;
int64_t $tmp2261 = $tmp2259 + $tmp2260;
frost$core$Int64 $tmp2262 = (frost$core$Int64) {$tmp2261};
frost$core$Int64* $tmp2263 = &param0->varCount;
*$tmp2263 = $tmp2262;
// line 613
frost$core$String** $tmp2264 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp2265 = *$tmp2264;
frost$core$String* $tmp2266 = frost$core$String$get_asString$R$frost$core$String($tmp2265);
frost$core$String* $tmp2267 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2266, &$s2268);
frost$core$Int64* $tmp2269 = &param0->varCount;
frost$core$Int64 $tmp2270 = *$tmp2269;
frost$core$Int64$wrapper* $tmp2271;
$tmp2271 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2271->value = $tmp2270;
frost$core$String* $tmp2272 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2267, ((frost$core$Object*) $tmp2271));
frost$core$String* $tmp2273 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2272, &$s2274);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
frost$core$String* $tmp2275 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2275));
*(&local0) = $tmp2273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
// line 614
frost$collections$IdentityMap** $tmp2276 = &param0->variableNames;
frost$collections$IdentityMap* $tmp2277 = *$tmp2276;
frost$core$String* $tmp2278 = *(&local0);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V($tmp2277, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp2278));
goto block4;
block4:;
// line 616
frost$core$String* $tmp2279 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2279));
frost$core$String* $tmp2280 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2280));
*(&local0) = ((frost$core$String*) NULL);
return $tmp2279;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$FieldDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$FieldDecl* param1) {

// line 620
org$frostlang$frostc$Annotations** $tmp2281 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp2282 = *$tmp2281;
frost$core$Bit $tmp2283 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp2282);
bool $tmp2284 = $tmp2283.value;
if ($tmp2284) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2285 = (frost$core$Int64) {620};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2286, $tmp2285);
abort(); // unreachable
block1:;
// line 621
frost$core$Weak** $tmp2287 = &param1->owner;
frost$core$Weak* $tmp2288 = *$tmp2287;
frost$core$Object* $tmp2289 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2288);
frost$core$String** $tmp2290 = &((org$frostlang$frostc$ClassDecl*) $tmp2289)->name;
frost$core$String* $tmp2291 = *$tmp2290;
frost$core$String* $tmp2292 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp2291);
frost$core$String* $tmp2293 = frost$core$String$get_asString$R$frost$core$String($tmp2292);
frost$core$String* $tmp2294 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2293, &$s2295);
frost$core$String** $tmp2296 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp2297 = *$tmp2296;
frost$core$String* $tmp2298 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2294, $tmp2297);
frost$core$String* $tmp2299 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2298, &$s2300);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2292));
frost$core$Frost$unref$frost$core$Object$Q($tmp2289);
return $tmp2299;

}
org$frostlang$frostc$CCodeGenerator$OpClass org$frostlang$frostc$CCodeGenerator$opClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$OpClass(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 632
org$frostlang$frostc$Type$Kind* $tmp2301 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp2302 = *$tmp2301;
frost$core$Int64 $tmp2303 = $tmp2302.$rawValue;
frost$core$Int64 $tmp2304 = (frost$core$Int64) {2};
frost$core$Bit $tmp2305 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2303, $tmp2304);
bool $tmp2306 = $tmp2305.value;
if ($tmp2306) goto block2; else goto block3;
block2:;
// line 634
frost$core$Int64 $tmp2307 = (frost$core$Int64) {0};
org$frostlang$frostc$CCodeGenerator$OpClass $tmp2308 = org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int64($tmp2307);
return $tmp2308;
block3:;
frost$core$Int64 $tmp2309 = (frost$core$Int64) {3};
frost$core$Bit $tmp2310 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2303, $tmp2309);
bool $tmp2311 = $tmp2310.value;
if ($tmp2311) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp2312 = (frost$core$Int64) {8};
frost$core$Bit $tmp2313 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2303, $tmp2312);
bool $tmp2314 = $tmp2313.value;
if ($tmp2314) goto block4; else goto block6;
block4:;
// line 637
frost$core$Int64 $tmp2315 = (frost$core$Int64) {1};
org$frostlang$frostc$CCodeGenerator$OpClass $tmp2316 = org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int64($tmp2315);
return $tmp2316;
block6:;
frost$core$Int64 $tmp2317 = (frost$core$Int64) {9};
frost$core$Bit $tmp2318 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2303, $tmp2317);
bool $tmp2319 = $tmp2318.value;
if ($tmp2319) goto block7; else goto block8;
block7:;
// line 640
frost$core$Int64 $tmp2320 = (frost$core$Int64) {2};
org$frostlang$frostc$CCodeGenerator$OpClass $tmp2321 = org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int64($tmp2320);
return $tmp2321;
block8:;
// line 643
frost$core$Int64 $tmp2322 = (frost$core$Int64) {3};
org$frostlang$frostc$CCodeGenerator$OpClass $tmp2323 = org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int64($tmp2322);
return $tmp2323;
block1:;
goto block9;
block9:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getBinaryReference$org$frostlang$frostc$Type$frost$core$String$org$frostlang$frostc$expression$Binary$Operator$frost$core$String$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$String* param2, org$frostlang$frostc$expression$Binary$Operator param3, frost$core$String* param4, frost$io$IndentedOutputStream* param5) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Bit local2;
frost$core$String* local3 = NULL;
// line 650
*(&local0) = ((frost$core$Error*) NULL);
// line 651
*(&local1) = ((frost$core$String*) NULL);
// line 652
frost$core$Bit $tmp2324 = frost$core$Bit$init$builtin_bit(false);
*(&local2) = $tmp2324;
// line 653
frost$core$Int64 $tmp2325 = param3.$rawValue;
frost$core$Int64 $tmp2326 = (frost$core$Int64) {0};
frost$core$Bit $tmp2327 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2325, $tmp2326);
bool $tmp2328 = $tmp2327.value;
if ($tmp2328) goto block4; else goto block5;
block4:;
// line 655
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2329));
frost$core$String* $tmp2330 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2330));
*(&local1) = &$s2331;
goto block3;
block5:;
frost$core$Int64 $tmp2332 = (frost$core$Int64) {1};
frost$core$Bit $tmp2333 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2325, $tmp2332);
bool $tmp2334 = $tmp2333.value;
if ($tmp2334) goto block6; else goto block7;
block6:;
// line 658
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2335));
frost$core$String* $tmp2336 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2336));
*(&local1) = &$s2337;
goto block3;
block7:;
frost$core$Int64 $tmp2338 = (frost$core$Int64) {2};
frost$core$Bit $tmp2339 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2325, $tmp2338);
bool $tmp2340 = $tmp2339.value;
if ($tmp2340) goto block8; else goto block9;
block8:;
// line 661
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2341));
frost$core$String* $tmp2342 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2342));
*(&local1) = &$s2343;
goto block3;
block9:;
frost$core$Int64 $tmp2344 = (frost$core$Int64) {4};
frost$core$Bit $tmp2345 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2325, $tmp2344);
bool $tmp2346 = $tmp2345.value;
if ($tmp2346) goto block10; else goto block11;
block10:;
// line 664
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2347));
frost$core$String* $tmp2348 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2348));
*(&local1) = &$s2349;
goto block3;
block11:;
frost$core$Int64 $tmp2350 = (frost$core$Int64) {3};
frost$core$Bit $tmp2351 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2325, $tmp2350);
bool $tmp2352 = $tmp2351.value;
if ($tmp2352) goto block12; else goto block13;
block12:;
// line 667
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2353));
frost$core$String* $tmp2354 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2354));
*(&local1) = &$s2355;
goto block3;
block13:;
frost$core$Int64 $tmp2356 = (frost$core$Int64) {5};
frost$core$Bit $tmp2357 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2325, $tmp2356);
bool $tmp2358 = $tmp2357.value;
if ($tmp2358) goto block14; else goto block15;
block14:;
// line 670
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2359));
frost$core$String* $tmp2360 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2360));
*(&local1) = &$s2361;
goto block3;
block15:;
frost$core$Int64 $tmp2362 = (frost$core$Int64) {18};
frost$core$Bit $tmp2363 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2325, $tmp2362);
bool $tmp2364 = $tmp2363.value;
if ($tmp2364) goto block16; else goto block17;
block16:;
// line 673
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2365));
frost$core$String* $tmp2366 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2366));
*(&local1) = &$s2367;
goto block3;
block17:;
frost$core$Int64 $tmp2368 = (frost$core$Int64) {19};
frost$core$Bit $tmp2369 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2325, $tmp2368);
bool $tmp2370 = $tmp2369.value;
if ($tmp2370) goto block18; else goto block19;
block18:;
// line 676
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2371));
frost$core$String* $tmp2372 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
*(&local1) = &$s2373;
goto block3;
block19:;
frost$core$Int64 $tmp2374 = (frost$core$Int64) {15};
frost$core$Bit $tmp2375 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2325, $tmp2374);
bool $tmp2376 = $tmp2375.value;
if ($tmp2376) goto block20; else goto block21;
block20:;
// line 679
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2377));
frost$core$String* $tmp2378 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2378));
*(&local1) = &$s2379;
goto block3;
block21:;
frost$core$Int64 $tmp2380 = (frost$core$Int64) {13};
frost$core$Bit $tmp2381 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2325, $tmp2380);
bool $tmp2382 = $tmp2381.value;
if ($tmp2382) goto block22; else goto block23;
block22:;
// line 682
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2383));
frost$core$String* $tmp2384 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
*(&local1) = &$s2385;
goto block3;
block23:;
frost$core$Int64 $tmp2386 = (frost$core$Int64) {16};
frost$core$Bit $tmp2387 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2325, $tmp2386);
bool $tmp2388 = $tmp2387.value;
if ($tmp2388) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp2389 = (frost$core$Int64) {17};
frost$core$Bit $tmp2390 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2325, $tmp2389);
bool $tmp2391 = $tmp2390.value;
if ($tmp2391) goto block24; else goto block26;
block24:;
// line 685
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2392));
frost$core$String* $tmp2393 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2393));
*(&local1) = &$s2394;
goto block3;
block26:;
frost$core$Int64 $tmp2395 = (frost$core$Int64) {6};
frost$core$Bit $tmp2396 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2325, $tmp2395);
bool $tmp2397 = $tmp2396.value;
if ($tmp2397) goto block27; else goto block28;
block27:;
// line 688
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2398));
frost$core$String* $tmp2399 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2399));
*(&local1) = &$s2400;
// line 689
frost$core$Bit $tmp2401 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2401;
goto block3;
block28:;
frost$core$Int64 $tmp2402 = (frost$core$Int64) {7};
frost$core$Bit $tmp2403 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2325, $tmp2402);
bool $tmp2404 = $tmp2403.value;
if ($tmp2404) goto block29; else goto block30;
block29:;
// line 692
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2405));
frost$core$String* $tmp2406 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2406));
*(&local1) = &$s2407;
// line 693
frost$core$Bit $tmp2408 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2408;
goto block3;
block30:;
frost$core$Int64 $tmp2409 = (frost$core$Int64) {8};
frost$core$Bit $tmp2410 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2325, $tmp2409);
bool $tmp2411 = $tmp2410.value;
if ($tmp2411) goto block31; else goto block32;
block31:;
// line 696
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2412));
frost$core$String* $tmp2413 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2413));
*(&local1) = &$s2414;
// line 697
frost$core$Bit $tmp2415 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2415;
goto block3;
block32:;
frost$core$Int64 $tmp2416 = (frost$core$Int64) {9};
frost$core$Bit $tmp2417 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2325, $tmp2416);
bool $tmp2418 = $tmp2417.value;
if ($tmp2418) goto block33; else goto block34;
block33:;
// line 700
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2419));
frost$core$String* $tmp2420 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2420));
*(&local1) = &$s2421;
// line 701
frost$core$Bit $tmp2422 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2422;
goto block3;
block34:;
frost$core$Int64 $tmp2423 = (frost$core$Int64) {10};
frost$core$Bit $tmp2424 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2325, $tmp2423);
bool $tmp2425 = $tmp2424.value;
if ($tmp2425) goto block35; else goto block36;
block35:;
// line 704
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2426));
frost$core$String* $tmp2427 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2427));
*(&local1) = &$s2428;
// line 705
frost$core$Bit $tmp2429 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2429;
goto block3;
block36:;
frost$core$Int64 $tmp2430 = (frost$core$Int64) {11};
frost$core$Bit $tmp2431 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2325, $tmp2430);
bool $tmp2432 = $tmp2431.value;
if ($tmp2432) goto block37; else goto block38;
block37:;
// line 708
frost$core$Bit $tmp2433 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2433;
// line 709
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2434));
frost$core$String* $tmp2435 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2435));
*(&local1) = &$s2436;
goto block3;
block38:;
// line 712
frost$core$Int64 $tmp2437 = (frost$core$Int64) {712};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2438, $tmp2437);
abort(); // unreachable
block3:;
// line 715
frost$core$String* $tmp2439 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
frost$core$String* $tmp2440 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2440));
*(&local3) = $tmp2439;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
// line 716
frost$core$Bit $tmp2441 = *(&local2);
bool $tmp2442 = $tmp2441.value;
if ($tmp2442) goto block39; else goto block41;
block39:;
// line 717
$fn2444 $tmp2443 = ($fn2444) ((frost$io$OutputStream*) param5)->$class->vtable[17];
frost$core$Error* $tmp2445 = $tmp2443(((frost$io$OutputStream*) param5), &$s2446);
if ($tmp2445 == NULL) goto block42; else goto block43;
block43:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2445));
*(&local0) = $tmp2445;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2445));
frost$core$String* $tmp2447 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2447));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2448 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block42:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2445));
goto block40;
block41:;
// line 1
// line 720
frost$core$String* $tmp2449 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp2450 = frost$core$String$get_asString$R$frost$core$String($tmp2449);
frost$core$String* $tmp2451 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2450, &$s2452);
$fn2454 $tmp2453 = ($fn2454) ((frost$io$OutputStream*) param5)->$class->vtable[17];
frost$core$Error* $tmp2455 = $tmp2453(((frost$io$OutputStream*) param5), $tmp2451);
if ($tmp2455 == NULL) goto block44; else goto block45;
block45:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
*(&local0) = $tmp2455;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2450));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2449));
frost$core$String* $tmp2456 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2456));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2457 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2457));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block44:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2450));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2449));
goto block40;
block40:;
// line 722
frost$core$String* $tmp2458 = *(&local3);
frost$core$String* $tmp2459 = frost$core$String$get_asString$R$frost$core$String($tmp2458);
frost$core$String* $tmp2460 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2459, &$s2461);
frost$core$String* $tmp2462 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2460, param2);
frost$core$String* $tmp2463 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2462, &$s2464);
frost$core$String* $tmp2465 = *(&local1);
frost$core$String* $tmp2466 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2463, $tmp2465);
frost$core$String* $tmp2467 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2466, &$s2468);
frost$core$String* $tmp2469 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2467, param4);
frost$core$String* $tmp2470 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2469, &$s2471);
$fn2473 $tmp2472 = ($fn2473) ((frost$io$OutputStream*) param5)->$class->vtable[19];
frost$core$Error* $tmp2474 = $tmp2472(((frost$io$OutputStream*) param5), $tmp2470);
if ($tmp2474 == NULL) goto block46; else goto block47;
block47:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2474));
*(&local0) = $tmp2474;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2469));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2467));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2466));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2460));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2459));
frost$core$String* $tmp2475 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2475));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2476 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2476));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block46:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2469));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2467));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2466));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2460));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2459));
// line 723
frost$core$String* $tmp2477 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2477));
frost$core$String* $tmp2478 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2478));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2479 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2479));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp2480 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2480));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp2477;
block1:;
// line 726
frost$core$Int64 $tmp2481 = (frost$core$Int64) {726};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2482, $tmp2481);
abort(); // unreachable
block2:;
frost$core$Error* $tmp2483 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2483));
*(&local0) = ((frost$core$Error*) NULL);
goto block48;
block48:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getVirtualMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$MethodDecl* param2, frost$io$IndentedOutputStream* param3) {

org$frostlang$frostc$CCodeGenerator$ClassConstant* local0 = NULL;
frost$core$Int64 local1;
frost$collections$ListView* local2 = NULL;
frost$core$Int64 local3;
// line 731
frost$core$Weak** $tmp2484 = &param2->owner;
frost$core$Weak* $tmp2485 = *$tmp2484;
frost$core$Object* $tmp2486 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2485);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2487 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, ((org$frostlang$frostc$ClassDecl*) $tmp2486));
*(&local0) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2487));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2488 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2488));
*(&local0) = $tmp2487;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2487));
frost$core$Frost$unref$frost$core$Object$Q($tmp2486);
// line 732
frost$core$Int64 $tmp2489 = (frost$core$Int64) {18446744073709551615};
*(&local1) = $tmp2489;
// line 733
frost$core$Weak** $tmp2490 = &param0->compiler;
frost$core$Weak* $tmp2491 = *$tmp2490;
frost$core$Object* $tmp2492 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2491);
frost$core$Weak** $tmp2493 = &param2->owner;
frost$core$Weak* $tmp2494 = *$tmp2493;
frost$core$Object* $tmp2495 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2494);
frost$collections$ListView* $tmp2496 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2492), ((org$frostlang$frostc$ClassDecl*) $tmp2495));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2496));
frost$collections$ListView* $tmp2497 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2497));
*(&local2) = $tmp2496;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2496));
frost$core$Frost$unref$frost$core$Object$Q($tmp2495);
frost$core$Frost$unref$frost$core$Object$Q($tmp2492);
// line 734
frost$core$Int64 $tmp2498 = (frost$core$Int64) {0};
frost$collections$ListView* $tmp2499 = *(&local2);
ITable* $tmp2500 = ((frost$collections$CollectionView*) $tmp2499)->$class->itable;
while ($tmp2500->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2500 = $tmp2500->next;
}
$fn2502 $tmp2501 = $tmp2500->methods[0];
frost$core$Int64 $tmp2503 = $tmp2501(((frost$collections$CollectionView*) $tmp2499));
frost$core$Bit $tmp2504 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2505 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2498, $tmp2503, $tmp2504);
frost$core$Int64 $tmp2506 = $tmp2505.min;
*(&local3) = $tmp2506;
frost$core$Int64 $tmp2507 = $tmp2505.max;
frost$core$Bit $tmp2508 = $tmp2505.inclusive;
bool $tmp2509 = $tmp2508.value;
frost$core$Int64 $tmp2510 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2511 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2510);
if ($tmp2509) goto block4; else goto block5;
block4:;
int64_t $tmp2512 = $tmp2506.value;
int64_t $tmp2513 = $tmp2507.value;
bool $tmp2514 = $tmp2512 <= $tmp2513;
frost$core$Bit $tmp2515 = (frost$core$Bit) {$tmp2514};
bool $tmp2516 = $tmp2515.value;
if ($tmp2516) goto block1; else goto block2;
block5:;
int64_t $tmp2517 = $tmp2506.value;
int64_t $tmp2518 = $tmp2507.value;
bool $tmp2519 = $tmp2517 < $tmp2518;
frost$core$Bit $tmp2520 = (frost$core$Bit) {$tmp2519};
bool $tmp2521 = $tmp2520.value;
if ($tmp2521) goto block1; else goto block2;
block1:;
// line 735
frost$collections$ListView* $tmp2522 = *(&local2);
frost$core$Int64 $tmp2523 = *(&local3);
ITable* $tmp2524 = $tmp2522->$class->itable;
while ($tmp2524->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2524 = $tmp2524->next;
}
$fn2526 $tmp2525 = $tmp2524->methods[0];
frost$core$Object* $tmp2527 = $tmp2525($tmp2522, $tmp2523);
bool $tmp2528 = ((org$frostlang$frostc$MethodDecl*) $tmp2527) == param2;
frost$core$Bit $tmp2529 = frost$core$Bit$init$builtin_bit($tmp2528);
bool $tmp2530 = $tmp2529.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2527);
if ($tmp2530) goto block6; else goto block7;
block6:;
// line 736
frost$core$Int64 $tmp2531 = *(&local3);
*(&local1) = $tmp2531;
// line 737
goto block2;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp2532 = *(&local3);
int64_t $tmp2533 = $tmp2507.value;
int64_t $tmp2534 = $tmp2532.value;
int64_t $tmp2535 = $tmp2533 - $tmp2534;
frost$core$Int64 $tmp2536 = (frost$core$Int64) {$tmp2535};
frost$core$UInt64 $tmp2537 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2536);
if ($tmp2509) goto block9; else goto block10;
block9:;
uint64_t $tmp2538 = $tmp2537.value;
uint64_t $tmp2539 = $tmp2511.value;
bool $tmp2540 = $tmp2538 >= $tmp2539;
frost$core$Bit $tmp2541 = (frost$core$Bit) {$tmp2540};
bool $tmp2542 = $tmp2541.value;
if ($tmp2542) goto block8; else goto block2;
block10:;
uint64_t $tmp2543 = $tmp2537.value;
uint64_t $tmp2544 = $tmp2511.value;
bool $tmp2545 = $tmp2543 > $tmp2544;
frost$core$Bit $tmp2546 = (frost$core$Bit) {$tmp2545};
bool $tmp2547 = $tmp2546.value;
if ($tmp2547) goto block8; else goto block2;
block8:;
int64_t $tmp2548 = $tmp2532.value;
int64_t $tmp2549 = $tmp2510.value;
int64_t $tmp2550 = $tmp2548 + $tmp2549;
frost$core$Int64 $tmp2551 = (frost$core$Int64) {$tmp2550};
*(&local3) = $tmp2551;
goto block1;
block2:;
// line 740
frost$core$Int64 $tmp2552 = *(&local1);
frost$core$Int64 $tmp2553 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2554 = $tmp2552.value;
int64_t $tmp2555 = $tmp2553.value;
bool $tmp2556 = $tmp2554 != $tmp2555;
frost$core$Bit $tmp2557 = (frost$core$Bit) {$tmp2556};
bool $tmp2558 = $tmp2557.value;
if ($tmp2558) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp2559 = (frost$core$Int64) {740};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2560, $tmp2559);
abort(); // unreachable
block11:;
// line 741
frost$core$Weak** $tmp2561 = &param0->compiler;
frost$core$Weak* $tmp2562 = *$tmp2561;
frost$core$Object* $tmp2563 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2562);
org$frostlang$frostc$Type* $tmp2564 = org$frostlang$frostc$Compiler$inheritedTypeWithSelf$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp2563), param2);
frost$core$String* $tmp2565 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, $tmp2564, ((org$frostlang$frostc$Type*) NULL));
frost$core$String* $tmp2566 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2567, $tmp2565);
frost$core$String* $tmp2568 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2566, &$s2569);
frost$core$String* $tmp2570 = frost$core$String$get_asString$R$frost$core$String(param1);
frost$core$String* $tmp2571 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2570, &$s2572);
frost$core$Int64 $tmp2573 = *(&local1);
frost$core$Int64$wrapper* $tmp2574;
$tmp2574 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2574->value = $tmp2573;
frost$core$String* $tmp2575 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2571, ((frost$core$Object*) $tmp2574));
frost$core$String* $tmp2576 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2575, &$s2577);
frost$core$String* $tmp2578 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2568, $tmp2576);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2578));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2578));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2576));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2574));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2571));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2568));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2566));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2565));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
frost$core$Frost$unref$frost$core$Object$Q($tmp2563);
frost$collections$ListView* $tmp2579 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2579));
*(&local2) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2580 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2580));
*(&local0) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
return $tmp2578;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getInterfaceMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$MethodDecl* param2, frost$io$IndentedOutputStream* param3) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$Int64 local3;
frost$collections$ListView* local4 = NULL;
frost$core$Int64 local5;
frost$core$String* local6 = NULL;
frost$core$String* local7 = NULL;
// line 747
*(&local0) = ((frost$core$Error*) NULL);
// line 748
frost$core$Weak** $tmp2581 = &param2->owner;
frost$core$Weak* $tmp2582 = *$tmp2581;
frost$core$Object* $tmp2583 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2582);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2584 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, ((org$frostlang$frostc$ClassDecl*) $tmp2583));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2584));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2585 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2585));
*(&local1) = $tmp2584;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2584));
frost$core$Frost$unref$frost$core$Object$Q($tmp2583);
// line 749
frost$core$String* $tmp2586 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2586));
frost$core$String* $tmp2587 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2587));
*(&local2) = $tmp2586;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2586));
// line 750
frost$core$String* $tmp2588 = *(&local2);
frost$core$String* $tmp2589 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2590, $tmp2588);
frost$core$String* $tmp2591 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2589, &$s2592);
frost$core$String* $tmp2593 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2591, param1);
frost$core$String* $tmp2594 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2593, &$s2595);
$fn2597 $tmp2596 = ($fn2597) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2598 = $tmp2596(((frost$io$OutputStream*) param3), $tmp2594);
if ($tmp2598 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2598));
*(&local0) = $tmp2598;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2598));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2591));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2589));
frost$core$String* $tmp2599 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2599));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2600 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2600));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2598));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2591));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2589));
// line 751
frost$core$String* $tmp2601 = *(&local2);
frost$core$String* $tmp2602 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2603, $tmp2601);
frost$core$String* $tmp2604 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2602, &$s2605);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2606 = *(&local1);
frost$core$String** $tmp2607 = &$tmp2606->name;
frost$core$String* $tmp2608 = *$tmp2607;
frost$core$String* $tmp2609 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2604, $tmp2608);
frost$core$String* $tmp2610 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2609, &$s2611);
$fn2613 $tmp2612 = ($fn2613) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2614 = $tmp2612(((frost$io$OutputStream*) param3), $tmp2610);
if ($tmp2614 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2614));
*(&local0) = $tmp2614;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2610));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2609));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2604));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2602));
frost$core$String* $tmp2615 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2615));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2616 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2616));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2610));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2609));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2604));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2602));
// line 752
frost$core$Int64* $tmp2617 = &param3->level;
frost$core$Int64 $tmp2618 = *$tmp2617;
frost$core$Int64 $tmp2619 = (frost$core$Int64) {1};
int64_t $tmp2620 = $tmp2618.value;
int64_t $tmp2621 = $tmp2619.value;
int64_t $tmp2622 = $tmp2620 + $tmp2621;
frost$core$Int64 $tmp2623 = (frost$core$Int64) {$tmp2622};
frost$core$Int64* $tmp2624 = &param3->level;
*$tmp2624 = $tmp2623;
// line 753
frost$core$String* $tmp2625 = *(&local2);
frost$core$String* $tmp2626 = frost$core$String$get_asString$R$frost$core$String($tmp2625);
frost$core$String* $tmp2627 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2626, &$s2628);
frost$core$String* $tmp2629 = *(&local2);
frost$core$String* $tmp2630 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2627, $tmp2629);
frost$core$String* $tmp2631 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2630, &$s2632);
$fn2634 $tmp2633 = ($fn2634) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2635 = $tmp2633(((frost$io$OutputStream*) param3), $tmp2631);
if ($tmp2635 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2635));
*(&local0) = $tmp2635;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2631));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2626));
frost$core$String* $tmp2636 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2636));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2637 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2637));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2631));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2626));
// line 754
frost$core$Int64* $tmp2638 = &param3->level;
frost$core$Int64 $tmp2639 = *$tmp2638;
frost$core$Int64 $tmp2640 = (frost$core$Int64) {1};
int64_t $tmp2641 = $tmp2639.value;
int64_t $tmp2642 = $tmp2640.value;
int64_t $tmp2643 = $tmp2641 - $tmp2642;
frost$core$Int64 $tmp2644 = (frost$core$Int64) {$tmp2643};
frost$core$Int64* $tmp2645 = &param3->level;
*$tmp2645 = $tmp2644;
// line 755
$fn2647 $tmp2646 = ($fn2647) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2648 = $tmp2646(((frost$io$OutputStream*) param3), &$s2649);
if ($tmp2648 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2648));
*(&local0) = $tmp2648;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2648));
frost$core$String* $tmp2650 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2650));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2651 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2651));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2648));
// line 756
frost$core$Int64 $tmp2652 = (frost$core$Int64) {18446744073709551615};
*(&local3) = $tmp2652;
// line 757
frost$core$Weak** $tmp2653 = &param0->compiler;
frost$core$Weak* $tmp2654 = *$tmp2653;
frost$core$Object* $tmp2655 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2654);
frost$core$Weak** $tmp2656 = &param2->owner;
frost$core$Weak* $tmp2657 = *$tmp2656;
frost$core$Object* $tmp2658 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2657);
frost$collections$ListView* $tmp2659 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2655), ((org$frostlang$frostc$ClassDecl*) $tmp2658));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2659));
frost$collections$ListView* $tmp2660 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2660));
*(&local4) = $tmp2659;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2659));
frost$core$Frost$unref$frost$core$Object$Q($tmp2658);
frost$core$Frost$unref$frost$core$Object$Q($tmp2655);
// line 758
frost$core$Int64 $tmp2661 = (frost$core$Int64) {0};
frost$collections$ListView* $tmp2662 = *(&local4);
ITable* $tmp2663 = ((frost$collections$CollectionView*) $tmp2662)->$class->itable;
while ($tmp2663->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2663 = $tmp2663->next;
}
$fn2665 $tmp2664 = $tmp2663->methods[0];
frost$core$Int64 $tmp2666 = $tmp2664(((frost$collections$CollectionView*) $tmp2662));
frost$core$Bit $tmp2667 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2668 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2661, $tmp2666, $tmp2667);
frost$core$Int64 $tmp2669 = $tmp2668.min;
*(&local5) = $tmp2669;
frost$core$Int64 $tmp2670 = $tmp2668.max;
frost$core$Bit $tmp2671 = $tmp2668.inclusive;
bool $tmp2672 = $tmp2671.value;
frost$core$Int64 $tmp2673 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2674 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2673);
if ($tmp2672) goto block14; else goto block15;
block14:;
int64_t $tmp2675 = $tmp2669.value;
int64_t $tmp2676 = $tmp2670.value;
bool $tmp2677 = $tmp2675 <= $tmp2676;
frost$core$Bit $tmp2678 = (frost$core$Bit) {$tmp2677};
bool $tmp2679 = $tmp2678.value;
if ($tmp2679) goto block11; else goto block12;
block15:;
int64_t $tmp2680 = $tmp2669.value;
int64_t $tmp2681 = $tmp2670.value;
bool $tmp2682 = $tmp2680 < $tmp2681;
frost$core$Bit $tmp2683 = (frost$core$Bit) {$tmp2682};
bool $tmp2684 = $tmp2683.value;
if ($tmp2684) goto block11; else goto block12;
block11:;
// line 759
frost$collections$ListView* $tmp2685 = *(&local4);
frost$core$Int64 $tmp2686 = *(&local5);
ITable* $tmp2687 = $tmp2685->$class->itable;
while ($tmp2687->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2687 = $tmp2687->next;
}
$fn2689 $tmp2688 = $tmp2687->methods[0];
frost$core$Object* $tmp2690 = $tmp2688($tmp2685, $tmp2686);
bool $tmp2691 = ((org$frostlang$frostc$MethodDecl*) $tmp2690) == param2;
frost$core$Bit $tmp2692 = frost$core$Bit$init$builtin_bit($tmp2691);
bool $tmp2693 = $tmp2692.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2690);
if ($tmp2693) goto block16; else goto block17;
block16:;
// line 760
frost$core$Int64 $tmp2694 = *(&local5);
*(&local3) = $tmp2694;
// line 761
goto block12;
block17:;
goto block13;
block13:;
frost$core$Int64 $tmp2695 = *(&local5);
int64_t $tmp2696 = $tmp2670.value;
int64_t $tmp2697 = $tmp2695.value;
int64_t $tmp2698 = $tmp2696 - $tmp2697;
frost$core$Int64 $tmp2699 = (frost$core$Int64) {$tmp2698};
frost$core$UInt64 $tmp2700 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2699);
if ($tmp2672) goto block19; else goto block20;
block19:;
uint64_t $tmp2701 = $tmp2700.value;
uint64_t $tmp2702 = $tmp2674.value;
bool $tmp2703 = $tmp2701 >= $tmp2702;
frost$core$Bit $tmp2704 = (frost$core$Bit) {$tmp2703};
bool $tmp2705 = $tmp2704.value;
if ($tmp2705) goto block18; else goto block12;
block20:;
uint64_t $tmp2706 = $tmp2700.value;
uint64_t $tmp2707 = $tmp2674.value;
bool $tmp2708 = $tmp2706 > $tmp2707;
frost$core$Bit $tmp2709 = (frost$core$Bit) {$tmp2708};
bool $tmp2710 = $tmp2709.value;
if ($tmp2710) goto block18; else goto block12;
block18:;
int64_t $tmp2711 = $tmp2695.value;
int64_t $tmp2712 = $tmp2673.value;
int64_t $tmp2713 = $tmp2711 + $tmp2712;
frost$core$Int64 $tmp2714 = (frost$core$Int64) {$tmp2713};
*(&local5) = $tmp2714;
goto block11;
block12:;
// line 764
frost$core$Int64 $tmp2715 = *(&local3);
frost$core$Weak** $tmp2716 = &param0->compiler;
frost$core$Weak* $tmp2717 = *$tmp2716;
frost$core$Object* $tmp2718 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2717);
frost$core$Weak** $tmp2719 = &param0->compiler;
frost$core$Weak* $tmp2720 = *$tmp2719;
frost$core$Object* $tmp2721 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2720);
org$frostlang$frostc$Type* $tmp2722 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp2723 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2721), $tmp2722);
frost$collections$ListView* $tmp2724 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2718), $tmp2723);
ITable* $tmp2725 = ((frost$collections$CollectionView*) $tmp2724)->$class->itable;
while ($tmp2725->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2725 = $tmp2725->next;
}
$fn2727 $tmp2726 = $tmp2725->methods[0];
frost$core$Int64 $tmp2728 = $tmp2726(((frost$collections$CollectionView*) $tmp2724));
int64_t $tmp2729 = $tmp2715.value;
int64_t $tmp2730 = $tmp2728.value;
int64_t $tmp2731 = $tmp2729 - $tmp2730;
frost$core$Int64 $tmp2732 = (frost$core$Int64) {$tmp2731};
*(&local3) = $tmp2732;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2724));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2723));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2722));
frost$core$Frost$unref$frost$core$Object$Q($tmp2721);
frost$core$Frost$unref$frost$core$Object$Q($tmp2718);
// line 765
frost$core$Int64 $tmp2733 = *(&local3);
frost$core$Int64 $tmp2734 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2735 = $tmp2733.value;
int64_t $tmp2736 = $tmp2734.value;
bool $tmp2737 = $tmp2735 != $tmp2736;
frost$core$Bit $tmp2738 = (frost$core$Bit) {$tmp2737};
bool $tmp2739 = $tmp2738.value;
if ($tmp2739) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp2740 = (frost$core$Int64) {765};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2741, $tmp2740);
abort(); // unreachable
block21:;
// line 766
frost$core$String* $tmp2742 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2742));
frost$core$String* $tmp2743 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2743));
*(&local6) = $tmp2742;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2742));
// line 767
frost$core$Weak** $tmp2744 = &param0->compiler;
frost$core$Weak* $tmp2745 = *$tmp2744;
frost$core$Object* $tmp2746 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2745);
org$frostlang$frostc$Type* $tmp2747 = org$frostlang$frostc$Compiler$inheritedTypeWithSelf$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp2746), param2);
frost$core$String* $tmp2748 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, $tmp2747, ((org$frostlang$frostc$Type*) NULL));
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2748));
frost$core$String* $tmp2749 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2749));
*(&local7) = $tmp2748;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2747));
frost$core$Frost$unref$frost$core$Object$Q($tmp2746);
// line 768
frost$core$String* $tmp2750 = *(&local7);
frost$core$String* $tmp2751 = frost$core$String$get_asString$R$frost$core$String($tmp2750);
frost$core$String* $tmp2752 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2751, &$s2753);
frost$core$String* $tmp2754 = *(&local6);
frost$core$String* $tmp2755 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2752, $tmp2754);
frost$core$String* $tmp2756 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2755, &$s2757);
frost$core$String* $tmp2758 = *(&local2);
frost$core$String* $tmp2759 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2756, $tmp2758);
frost$core$String* $tmp2760 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2759, &$s2761);
frost$core$Int64 $tmp2762 = *(&local3);
frost$core$Int64$wrapper* $tmp2763;
$tmp2763 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2763->value = $tmp2762;
frost$core$String* $tmp2764 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2760, ((frost$core$Object*) $tmp2763));
frost$core$String* $tmp2765 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2764, &$s2766);
$fn2768 $tmp2767 = ($fn2768) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2769 = $tmp2767(((frost$io$OutputStream*) param3), $tmp2765);
if ($tmp2769 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2769));
*(&local0) = $tmp2769;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2769));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2760));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2755));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2752));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2751));
frost$core$String* $tmp2770 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2770));
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp2771 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2771));
*(&local6) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp2772 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2772));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp2773 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2773));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2774 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2774));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2769));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2760));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2755));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2752));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2751));
// line 769
frost$core$String* $tmp2775 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2775));
frost$core$String* $tmp2776 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2776));
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp2777 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2777));
*(&local6) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp2778 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2778));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp2779 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2780 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2780));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Error* $tmp2781 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2781));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp2775;
block1:;
// line 772
frost$core$Int64 $tmp2782 = (frost$core$Int64) {772};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2783, $tmp2782);
abort(); // unreachable
block2:;
frost$core$Error* $tmp2784 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2784));
*(&local0) = ((frost$core$Error*) NULL);
goto block25;
block25:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getMethodReference$frost$core$String$Q$org$frostlang$frostc$MethodDecl$frost$core$Bit$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$MethodDecl* param2, frost$core$Bit param3, frost$io$IndentedOutputStream* param4) {

// line 778
frost$core$Bit $tmp2785 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp2786 = $tmp2785.value;
if ($tmp2786) goto block4; else goto block3;
block4:;
frost$core$Bit $tmp2787 = org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit(param2);
bool $tmp2788 = $tmp2787.value;
if ($tmp2788) goto block1; else goto block3;
block1:;
// line 779
frost$core$Bit $tmp2789 = frost$core$Bit$init$builtin_bit(param1 != NULL);
bool $tmp2790 = $tmp2789.value;
if ($tmp2790) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp2791 = (frost$core$Int64) {779};
frost$core$String* $tmp2792 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param2);
frost$core$String* $tmp2793 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2794, $tmp2792);
frost$core$String* $tmp2795 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2793, &$s2796);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2797, $tmp2791, $tmp2795);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2793));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2792));
abort(); // unreachable
block5:;
// line 780
frost$core$Weak** $tmp2798 = &param2->owner;
frost$core$Weak* $tmp2799 = *$tmp2798;
frost$core$Object* $tmp2800 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2799);
org$frostlang$frostc$ClassDecl$Kind* $tmp2801 = &((org$frostlang$frostc$ClassDecl*) $tmp2800)->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp2802 = *$tmp2801;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2803;
$tmp2803 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2803->value = $tmp2802;
frost$core$Int64 $tmp2804 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp2805 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2804);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2806;
$tmp2806 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2806->value = $tmp2805;
ITable* $tmp2807 = ((frost$core$Equatable*) $tmp2803)->$class->itable;
while ($tmp2807->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2807 = $tmp2807->next;
}
$fn2809 $tmp2808 = $tmp2807->methods[0];
frost$core$Bit $tmp2810 = $tmp2808(((frost$core$Equatable*) $tmp2803), ((frost$core$Equatable*) $tmp2806));
bool $tmp2811 = $tmp2810.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2806)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2803)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2800);
if ($tmp2811) goto block7; else goto block9;
block7:;
// line 781
frost$core$String* $tmp2812 = org$frostlang$frostc$CCodeGenerator$getInterfaceMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
return $tmp2812;
block9:;
// line 1
// line 784
frost$core$String* $tmp2813 = org$frostlang$frostc$CCodeGenerator$getVirtualMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
return $tmp2813;
block8:;
goto block2;
block3:;
// line 1
// line 788
frost$core$Weak** $tmp2814 = &param2->owner;
frost$core$Weak* $tmp2815 = *$tmp2814;
frost$core$Object* $tmp2816 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2815);
frost$core$Bit $tmp2817 = org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp2816));
bool $tmp2818 = $tmp2817.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2816);
if ($tmp2818) goto block10; else goto block11;
block10:;
// line 789
org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param2);
goto block11;
block11:;
// line 791
frost$core$String* $tmp2819 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2819));
return $tmp2819;
block2:;
goto block12;
block12:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3, frost$io$IndentedOutputStream* param4) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
// line 796
*(&local0) = ((frost$core$Error*) NULL);
// line 797
org$frostlang$frostc$Type$Kind* $tmp2820 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp2821 = *$tmp2820;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2822;
$tmp2822 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2822->value = $tmp2821;
frost$core$Int64 $tmp2823 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp2824 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2823);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2825;
$tmp2825 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2825->value = $tmp2824;
ITable* $tmp2826 = ((frost$core$Equatable*) $tmp2822)->$class->itable;
while ($tmp2826->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2826 = $tmp2826->next;
}
$fn2828 $tmp2827 = $tmp2826->methods[0];
frost$core$Bit $tmp2829 = $tmp2827(((frost$core$Equatable*) $tmp2822), ((frost$core$Equatable*) $tmp2825));
bool $tmp2830 = $tmp2829.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2825)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2822)));
if ($tmp2830) goto block3; else goto block4;
block3:;
// line 799
frost$core$String* $tmp2831 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2831));
frost$core$String* $tmp2832 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
*(&local1) = $tmp2831;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2831));
// line 800
frost$core$String* $tmp2833 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp2834 = frost$core$String$get_asString$R$frost$core$String($tmp2833);
frost$core$String* $tmp2835 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2834, &$s2836);
frost$core$String* $tmp2837 = *(&local1);
frost$core$String* $tmp2838 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2835, $tmp2837);
frost$core$String* $tmp2839 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2838, &$s2840);
$fn2842 $tmp2841 = ($fn2842) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp2843 = $tmp2841(((frost$io$OutputStream*) param4), $tmp2839);
if ($tmp2843 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2843));
*(&local0) = $tmp2843;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2843));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2838));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2835));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
frost$core$String* $tmp2844 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2844));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2843));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2838));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2835));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
// line 801
frost$core$String* $tmp2845 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2846, param1);
frost$core$String* $tmp2847 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2845, &$s2848);
$fn2850 $tmp2849 = ($fn2850) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp2851 = $tmp2849(((frost$io$OutputStream*) param4), $tmp2847);
if ($tmp2851 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2851));
*(&local0) = $tmp2851;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2847));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2845));
frost$core$String* $tmp2852 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2852));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2847));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2845));
// line 802
frost$core$Int64* $tmp2853 = &param4->level;
frost$core$Int64 $tmp2854 = *$tmp2853;
frost$core$Int64 $tmp2855 = (frost$core$Int64) {1};
int64_t $tmp2856 = $tmp2854.value;
int64_t $tmp2857 = $tmp2855.value;
int64_t $tmp2858 = $tmp2856 + $tmp2857;
frost$core$Int64 $tmp2859 = (frost$core$Int64) {$tmp2858};
frost$core$Int64* $tmp2860 = &param4->level;
*$tmp2860 = $tmp2859;
// line 803
org$frostlang$frostc$FixedArray* $tmp2861 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp2862 = (frost$core$Int64) {0};
frost$core$Object* $tmp2863 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2861, $tmp2862);
frost$core$String* $tmp2864 = org$frostlang$frostc$CCodeGenerator$toNonNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, ((org$frostlang$frostc$Type*) $tmp2863), param4);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2864));
frost$core$String* $tmp2865 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2865));
*(&local2) = $tmp2864;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2864));
frost$core$Frost$unref$frost$core$Object$Q($tmp2863);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2861));
// line 804
frost$core$String* $tmp2866 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp2867 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp2868 = (frost$core$Int64) {0};
frost$core$Object* $tmp2869 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2867, $tmp2868);
frost$core$String* $tmp2870 = org$frostlang$frostc$CCodeGenerator$wrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, $tmp2866, ((org$frostlang$frostc$Type*) $tmp2869), param3, param4);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2870));
frost$core$String* $tmp2871 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2871));
*(&local3) = $tmp2870;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2870));
frost$core$Frost$unref$frost$core$Object$Q($tmp2869);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
// line 805
frost$core$String* $tmp2872 = *(&local1);
frost$core$String* $tmp2873 = frost$core$String$get_asString$R$frost$core$String($tmp2872);
frost$core$String* $tmp2874 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2873, &$s2875);
frost$core$String* $tmp2876 = *(&local3);
frost$core$String* $tmp2877 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2874, $tmp2876);
frost$core$String* $tmp2878 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2877, &$s2879);
$fn2881 $tmp2880 = ($fn2881) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp2882 = $tmp2880(((frost$io$OutputStream*) param4), $tmp2878);
if ($tmp2882 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2882));
*(&local0) = $tmp2882;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2877));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2873));
frost$core$String* $tmp2883 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2883));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2884 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2884));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp2885 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2885));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2877));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2873));
// line 806
frost$core$Int64* $tmp2886 = &param4->level;
frost$core$Int64 $tmp2887 = *$tmp2886;
frost$core$Int64 $tmp2888 = (frost$core$Int64) {1};
int64_t $tmp2889 = $tmp2887.value;
int64_t $tmp2890 = $tmp2888.value;
int64_t $tmp2891 = $tmp2889 - $tmp2890;
frost$core$Int64 $tmp2892 = (frost$core$Int64) {$tmp2891};
frost$core$Int64* $tmp2893 = &param4->level;
*$tmp2893 = $tmp2892;
// line 807
$fn2895 $tmp2894 = ($fn2895) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp2896 = $tmp2894(((frost$io$OutputStream*) param4), &$s2897);
if ($tmp2896 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2896));
*(&local0) = $tmp2896;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2896));
frost$core$String* $tmp2898 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2899 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp2900 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2900));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2896));
// line 808
$fn2902 $tmp2901 = ($fn2902) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp2903 = $tmp2901(((frost$io$OutputStream*) param4), &$s2904);
if ($tmp2903 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2903));
*(&local0) = $tmp2903;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2903));
frost$core$String* $tmp2905 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2905));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2906 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2906));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp2907 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2907));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2903));
// line 809
frost$core$Int64* $tmp2908 = &param4->level;
frost$core$Int64 $tmp2909 = *$tmp2908;
frost$core$Int64 $tmp2910 = (frost$core$Int64) {1};
int64_t $tmp2911 = $tmp2909.value;
int64_t $tmp2912 = $tmp2910.value;
int64_t $tmp2913 = $tmp2911 + $tmp2912;
frost$core$Int64 $tmp2914 = (frost$core$Int64) {$tmp2913};
frost$core$Int64* $tmp2915 = &param4->level;
*$tmp2915 = $tmp2914;
// line 810
frost$core$String* $tmp2916 = *(&local1);
frost$core$String* $tmp2917 = frost$core$String$get_asString$R$frost$core$String($tmp2916);
frost$core$String* $tmp2918 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2917, &$s2919);
$fn2921 $tmp2920 = ($fn2921) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp2922 = $tmp2920(((frost$io$OutputStream*) param4), $tmp2918);
if ($tmp2922 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2922));
*(&local0) = $tmp2922;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2918));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2917));
frost$core$String* $tmp2923 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2923));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2924 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2924));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp2925 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2925));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2918));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2917));
// line 811
frost$core$Int64* $tmp2926 = &param4->level;
frost$core$Int64 $tmp2927 = *$tmp2926;
frost$core$Int64 $tmp2928 = (frost$core$Int64) {1};
int64_t $tmp2929 = $tmp2927.value;
int64_t $tmp2930 = $tmp2928.value;
int64_t $tmp2931 = $tmp2929 - $tmp2930;
frost$core$Int64 $tmp2932 = (frost$core$Int64) {$tmp2931};
frost$core$Int64* $tmp2933 = &param4->level;
*$tmp2933 = $tmp2932;
// line 812
$fn2935 $tmp2934 = ($fn2935) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp2936 = $tmp2934(((frost$io$OutputStream*) param4), &$s2937);
if ($tmp2936 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2936));
*(&local0) = $tmp2936;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2936));
frost$core$String* $tmp2938 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2938));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2939 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2939));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp2940 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2940));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2936));
// line 813
frost$core$String* $tmp2941 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2941));
frost$core$String* $tmp2942 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2942));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2943 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2943));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp2944 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp2945 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2945));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp2941;
block4:;
// line 815
frost$core$String* $tmp2946 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2946));
frost$core$String* $tmp2947 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2947));
*(&local4) = $tmp2946;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2946));
// line 816
frost$core$String* $tmp2948 = org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(param0, param2);
frost$core$String* $tmp2949 = frost$core$String$get_asString$R$frost$core$String($tmp2948);
frost$core$String* $tmp2950 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2949, &$s2951);
frost$core$String* $tmp2952 = *(&local4);
frost$core$String* $tmp2953 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2950, $tmp2952);
frost$core$String* $tmp2954 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2953, &$s2955);
$fn2957 $tmp2956 = ($fn2957) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp2958 = $tmp2956(((frost$io$OutputStream*) param4), $tmp2954);
if ($tmp2958 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2958));
*(&local0) = $tmp2958;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2958));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2954));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2953));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2950));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2949));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
frost$core$String* $tmp2959 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2959));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2958));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2954));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2953));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2950));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2949));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
// line 817
org$frostlang$frostc$Type$Kind* $tmp2960 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp2961 = *$tmp2960;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2962;
$tmp2962 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2962->value = $tmp2961;
frost$core$Int64 $tmp2963 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp2964 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2963);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2965;
$tmp2965 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2965->value = $tmp2964;
ITable* $tmp2966 = ((frost$core$Equatable*) $tmp2962)->$class->itable;
while ($tmp2966->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2966 = $tmp2966->next;
}
$fn2968 $tmp2967 = $tmp2966->methods[0];
frost$core$Bit $tmp2969 = $tmp2967(((frost$core$Equatable*) $tmp2962), ((frost$core$Equatable*) $tmp2965));
bool $tmp2970 = $tmp2969.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2965)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2962)));
if ($tmp2970) goto block21; else goto block22;
block21:;
// line 818
frost$core$String* $tmp2971 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2972, param1);
frost$core$String* $tmp2973 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2971, &$s2974);
$fn2976 $tmp2975 = ($fn2976) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp2977 = $tmp2975(((frost$io$OutputStream*) param4), $tmp2973);
if ($tmp2977 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2977));
*(&local0) = $tmp2977;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2973));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2971));
frost$core$String* $tmp2978 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2978));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2973));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2971));
// line 819
frost$core$Int64* $tmp2979 = &param4->level;
frost$core$Int64 $tmp2980 = *$tmp2979;
frost$core$Int64 $tmp2981 = (frost$core$Int64) {1};
int64_t $tmp2982 = $tmp2980.value;
int64_t $tmp2983 = $tmp2981.value;
int64_t $tmp2984 = $tmp2982 + $tmp2983;
frost$core$Int64 $tmp2985 = (frost$core$Int64) {$tmp2984};
frost$core$Int64* $tmp2986 = &param4->level;
*$tmp2986 = $tmp2985;
goto block22;
block22:;
// line 821
frost$core$String* $tmp2987 = *(&local4);
frost$core$String* $tmp2988 = frost$core$String$get_asString$R$frost$core$String($tmp2987);
frost$core$String* $tmp2989 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2988, &$s2990);
frost$core$String* $tmp2991 = org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(param0, param2);
frost$core$String* $tmp2992 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2989, $tmp2991);
frost$core$String* $tmp2993 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2992, &$s2994);
frost$core$Int64 $tmp2995 = org$frostlang$frostc$CCodeGenerator$sizeOfWrapper$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param2);
frost$core$Int64$wrapper* $tmp2996;
$tmp2996 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2996->value = $tmp2995;
frost$core$String* $tmp2997 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2998, ((frost$core$Object*) $tmp2996));
frost$core$String* $tmp2999 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2997, &$s3000);
frost$core$String* $tmp3001 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2993, $tmp2999);
frost$core$String** $tmp3002 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp3003 = *$tmp3002;
frost$core$String* $tmp3004 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp3003);
frost$core$String* $tmp3005 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3006, $tmp3004);
frost$core$String* $tmp3007 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3005, &$s3008);
frost$core$String* $tmp3009 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3001, $tmp3007);
$fn3011 $tmp3010 = ($fn3011) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3012 = $tmp3010(((frost$io$OutputStream*) param4), $tmp3009);
if ($tmp3012 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3012));
*(&local0) = $tmp3012;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3012));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3007));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3005));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3004));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2997));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2996));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2992));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2991));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2988));
frost$core$String* $tmp3013 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3012));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3007));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3005));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3004));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2997));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2996));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2992));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2991));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2988));
// line 824
frost$core$String* $tmp3014 = *(&local4);
frost$core$String* $tmp3015 = frost$core$String$get_asString$R$frost$core$String($tmp3014);
frost$core$String* $tmp3016 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3015, &$s3017);
frost$core$String* $tmp3018 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3016, param1);
frost$core$String* $tmp3019 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3018, &$s3020);
$fn3022 $tmp3021 = ($fn3022) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3023 = $tmp3021(((frost$io$OutputStream*) param4), $tmp3019);
if ($tmp3023 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3023));
*(&local0) = $tmp3023;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3018));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3015));
frost$core$String* $tmp3024 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3024));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3018));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3015));
// line 825
org$frostlang$frostc$Type$Kind* $tmp3025 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp3026 = *$tmp3025;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3027;
$tmp3027 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3027->value = $tmp3026;
frost$core$Int64 $tmp3028 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3029 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3028);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3030;
$tmp3030 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3030->value = $tmp3029;
ITable* $tmp3031 = ((frost$core$Equatable*) $tmp3027)->$class->itable;
while ($tmp3031->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3031 = $tmp3031->next;
}
$fn3033 $tmp3032 = $tmp3031->methods[0];
frost$core$Bit $tmp3034 = $tmp3032(((frost$core$Equatable*) $tmp3027), ((frost$core$Equatable*) $tmp3030));
bool $tmp3035 = $tmp3034.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3030)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3027)));
if ($tmp3035) goto block29; else goto block30;
block29:;
// line 826
frost$core$Int64* $tmp3036 = &param4->level;
frost$core$Int64 $tmp3037 = *$tmp3036;
frost$core$Int64 $tmp3038 = (frost$core$Int64) {1};
int64_t $tmp3039 = $tmp3037.value;
int64_t $tmp3040 = $tmp3038.value;
int64_t $tmp3041 = $tmp3039 - $tmp3040;
frost$core$Int64 $tmp3042 = (frost$core$Int64) {$tmp3041};
frost$core$Int64* $tmp3043 = &param4->level;
*$tmp3043 = $tmp3042;
// line 827
$fn3045 $tmp3044 = ($fn3045) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3046 = $tmp3044(((frost$io$OutputStream*) param4), &$s3047);
if ($tmp3046 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3046));
*(&local0) = $tmp3046;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3046));
frost$core$String* $tmp3048 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3048));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3046));
// line 828
$fn3050 $tmp3049 = ($fn3050) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3051 = $tmp3049(((frost$io$OutputStream*) param4), &$s3052);
if ($tmp3051 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3051));
*(&local0) = $tmp3051;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3051));
frost$core$String* $tmp3053 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3053));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3051));
// line 829
frost$core$Int64* $tmp3054 = &param4->level;
frost$core$Int64 $tmp3055 = *$tmp3054;
frost$core$Int64 $tmp3056 = (frost$core$Int64) {1};
int64_t $tmp3057 = $tmp3055.value;
int64_t $tmp3058 = $tmp3056.value;
int64_t $tmp3059 = $tmp3057 + $tmp3058;
frost$core$Int64 $tmp3060 = (frost$core$Int64) {$tmp3059};
frost$core$Int64* $tmp3061 = &param4->level;
*$tmp3061 = $tmp3060;
// line 830
frost$core$String* $tmp3062 = *(&local4);
frost$core$String* $tmp3063 = frost$core$String$get_asString$R$frost$core$String($tmp3062);
frost$core$String* $tmp3064 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3063, &$s3065);
$fn3067 $tmp3066 = ($fn3067) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3068 = $tmp3066(((frost$io$OutputStream*) param4), $tmp3064);
if ($tmp3068 == NULL) goto block35; else goto block36;
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3068));
*(&local0) = $tmp3068;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3063));
frost$core$String* $tmp3069 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3069));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3063));
// line 831
frost$core$Int64* $tmp3070 = &param4->level;
frost$core$Int64 $tmp3071 = *$tmp3070;
frost$core$Int64 $tmp3072 = (frost$core$Int64) {1};
int64_t $tmp3073 = $tmp3071.value;
int64_t $tmp3074 = $tmp3072.value;
int64_t $tmp3075 = $tmp3073 - $tmp3074;
frost$core$Int64 $tmp3076 = (frost$core$Int64) {$tmp3075};
frost$core$Int64* $tmp3077 = &param4->level;
*$tmp3077 = $tmp3076;
// line 832
$fn3079 $tmp3078 = ($fn3079) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3080 = $tmp3078(((frost$io$OutputStream*) param4), &$s3081);
if ($tmp3080 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3080));
*(&local0) = $tmp3080;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3080));
frost$core$String* $tmp3082 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3082));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3080));
goto block30;
block30:;
// line 834
frost$core$String* $tmp3083 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3084 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3085, $tmp3083);
frost$core$String* $tmp3086 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3084, &$s3087);
frost$core$String* $tmp3088 = *(&local4);
frost$core$String* $tmp3089 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3086, $tmp3088);
frost$core$String* $tmp3090 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3089, &$s3091);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3089));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3086));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3084));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3083));
frost$core$String* $tmp3092 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3092));
*(&local4) = ((frost$core$String*) NULL);
frost$core$Error* $tmp3093 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3093));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp3090;
block1:;
// line 837
frost$core$Int64 $tmp3094 = (frost$core$Int64) {837};
frost$core$Error* $tmp3095 = *(&local0);
$fn3097 $tmp3096 = ($fn3097) ((frost$core$Object*) $tmp3095)->$class->vtable[0];
frost$core$String* $tmp3098 = $tmp3096(((frost$core$Object*) $tmp3095));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3099, $tmp3094, $tmp3098);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3098));
abort(); // unreachable
block2:;
frost$core$Error* $tmp3100 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3100));
*(&local0) = ((frost$core$Error*) NULL);
goto block39;
block39:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$unwrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3, frost$io$IndentedOutputStream* param4) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 842
frost$core$String* $tmp3101 = org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3102 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3103, $tmp3101);
frost$core$String* $tmp3104 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3102, &$s3105);
frost$core$String* $tmp3106 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3104, param1);
frost$core$String* $tmp3107 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3106, &$s3108);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3107));
frost$core$String* $tmp3109 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3109));
*(&local0) = $tmp3107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3101));
// line 843
org$frostlang$frostc$Type$Kind* $tmp3110 = &param3->typeKind;
org$frostlang$frostc$Type$Kind $tmp3111 = *$tmp3110;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3112;
$tmp3112 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3112->value = $tmp3111;
frost$core$Int64 $tmp3113 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3114 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3113);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3115;
$tmp3115 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3115->value = $tmp3114;
ITable* $tmp3116 = ((frost$core$Equatable*) $tmp3112)->$class->itable;
while ($tmp3116->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3116 = $tmp3116->next;
}
$fn3118 $tmp3117 = $tmp3116->methods[0];
frost$core$Bit $tmp3119 = $tmp3117(((frost$core$Equatable*) $tmp3112), ((frost$core$Equatable*) $tmp3115));
bool $tmp3120 = $tmp3119.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3115)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3112)));
if ($tmp3120) goto block1; else goto block2;
block1:;
// line 845
org$frostlang$frostc$FixedArray* $tmp3121 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param3);
frost$core$Int64 $tmp3122 = (frost$core$Int64) {0};
frost$core$Object* $tmp3123 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3121, $tmp3122);
frost$core$String* $tmp3124 = org$frostlang$frostc$CCodeGenerator$unwrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, ((org$frostlang$frostc$Type*) $tmp3123), param4);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3124));
frost$core$String* $tmp3125 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3125));
*(&local1) = $tmp3124;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3124));
frost$core$Frost$unref$frost$core$Object$Q($tmp3123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3121));
// line 846
frost$core$String* $tmp3126 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp3127 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param3);
frost$core$Int64 $tmp3128 = (frost$core$Int64) {0};
frost$core$Object* $tmp3129 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3127, $tmp3128);
frost$core$String* $tmp3130 = org$frostlang$frostc$CCodeGenerator$toNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, $tmp3126, ((org$frostlang$frostc$Type*) $tmp3129), param3, param4);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3130));
frost$core$String* $tmp3131 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3131));
*(&local2) = $tmp3130;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3130));
frost$core$Frost$unref$frost$core$Object$Q($tmp3129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3127));
// line 847
frost$core$String* $tmp3132 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3133, param1);
frost$core$String* $tmp3134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3132, &$s3135);
frost$core$String* $tmp3136 = *(&local2);
frost$core$String* $tmp3137 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3134, $tmp3136);
frost$core$String* $tmp3138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3137, &$s3139);
frost$core$String* $tmp3140 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3141 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3138, $tmp3140);
frost$core$String* $tmp3142 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3141, &$s3143);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3132));
frost$core$String* $tmp3144 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3144));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3145 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3145));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp3146 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3146));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3142;
block2:;
// line 849
frost$core$String* $tmp3147 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3147));
frost$core$String* $tmp3148 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3148));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3147;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$toNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3, frost$io$IndentedOutputStream* param4) {

// line 854
frost$core$String* $tmp3149 = org$frostlang$frostc$CCodeGenerator$nullableType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3150 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3151, $tmp3149);
frost$core$String* $tmp3152 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3150, &$s3153);
frost$core$String* $tmp3154 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3152, param1);
frost$core$String* $tmp3155 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3154, &$s3156);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3149));
return $tmp3155;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$toNonNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3, frost$io$IndentedOutputStream* param4) {

// line 859
frost$core$String* $tmp3157 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3158 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3159, $tmp3157);
frost$core$String* $tmp3160 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3158, &$s3161);
frost$core$String* $tmp3162 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3160, param1);
frost$core$String* $tmp3163 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3162, &$s3164);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3157));
return $tmp3163;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// line 863
frost$core$Bit $tmp3165 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(param3);
bool $tmp3166 = $tmp3165.value;
if ($tmp3166) goto block1; else goto block3;
block1:;
// line 864
frost$core$Bit $tmp3167 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(param2);
bool $tmp3168 = $tmp3167.value;
if ($tmp3168) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp3169 = (frost$core$Int64) {864};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3170, $tmp3169);
abort(); // unreachable
block4:;
// line 865
frost$core$String* $tmp3171 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3172 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3173, $tmp3171);
frost$core$String* $tmp3174 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3172, &$s3175);
frost$core$String* $tmp3176 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3174, param1);
frost$core$String* $tmp3177 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3176, &$s3178);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3171));
return $tmp3177;
block3:;
// line 1
// line 868
frost$core$Weak** $tmp3179 = &param0->compiler;
frost$core$Weak* $tmp3180 = *$tmp3179;
frost$core$Object* $tmp3181 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3180);
org$frostlang$frostc$ClassDecl* $tmp3182 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3181), param2);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3182));
org$frostlang$frostc$ClassDecl* $tmp3183 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3183));
*(&local0) = $tmp3182;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3182));
frost$core$Frost$unref$frost$core$Object$Q($tmp3181);
// line 869
org$frostlang$frostc$ClassDecl* $tmp3184 = *(&local0);
frost$core$Bit $tmp3185 = frost$core$Bit$init$builtin_bit($tmp3184 != NULL);
bool $tmp3186 = $tmp3185.value;
if ($tmp3186) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3187 = (frost$core$Int64) {869};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3188, $tmp3187);
abort(); // unreachable
block6:;
// line 870
frost$core$Weak** $tmp3189 = &param0->compiler;
frost$core$Weak* $tmp3190 = *$tmp3189;
frost$core$Object* $tmp3191 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3190);
org$frostlang$frostc$ClassDecl* $tmp3192 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3191), param3);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3192));
org$frostlang$frostc$ClassDecl* $tmp3193 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3193));
*(&local1) = $tmp3192;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3192));
frost$core$Frost$unref$frost$core$Object$Q($tmp3191);
// line 871
org$frostlang$frostc$ClassDecl* $tmp3194 = *(&local1);
frost$core$Bit $tmp3195 = frost$core$Bit$init$builtin_bit($tmp3194 != NULL);
bool $tmp3196 = $tmp3195.value;
if ($tmp3196) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp3197 = (frost$core$Int64) {871};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3198, $tmp3197);
abort(); // unreachable
block8:;
// line 872
frost$core$Weak** $tmp3199 = &param0->compiler;
frost$core$Weak* $tmp3200 = *$tmp3199;
frost$core$Object* $tmp3201 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3200);
org$frostlang$frostc$ClassDecl* $tmp3202 = *(&local0);
frost$core$Bit $tmp3203 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3201), $tmp3202);
bool $tmp3204 = $tmp3203.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3201);
if ($tmp3204) goto block13; else goto block12;
block13:;
frost$core$Weak** $tmp3205 = &param0->compiler;
frost$core$Weak* $tmp3206 = *$tmp3205;
frost$core$Object* $tmp3207 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3206);
org$frostlang$frostc$ClassDecl* $tmp3208 = *(&local1);
frost$core$Bit $tmp3209 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3207), $tmp3208);
frost$core$Bit $tmp3210 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3209);
bool $tmp3211 = $tmp3210.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3207);
if ($tmp3211) goto block10; else goto block12;
block10:;
// line 873
frost$io$IndentedOutputStream** $tmp3212 = &param0->out;
frost$io$IndentedOutputStream* $tmp3213 = *$tmp3212;
frost$core$String* $tmp3214 = org$frostlang$frostc$CCodeGenerator$wrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param3, $tmp3213);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3214));
org$frostlang$frostc$ClassDecl* $tmp3215 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3215));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3216 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3216));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3214;
block12:;
// line 875
frost$core$Weak** $tmp3217 = &param0->compiler;
frost$core$Weak* $tmp3218 = *$tmp3217;
frost$core$Object* $tmp3219 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3218);
org$frostlang$frostc$ClassDecl* $tmp3220 = *(&local0);
frost$core$Bit $tmp3221 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3219), $tmp3220);
frost$core$Bit $tmp3222 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3221);
bool $tmp3223 = $tmp3222.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3219);
if ($tmp3223) goto block17; else goto block16;
block17:;
frost$core$Weak** $tmp3224 = &param0->compiler;
frost$core$Weak* $tmp3225 = *$tmp3224;
frost$core$Object* $tmp3226 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3225);
org$frostlang$frostc$ClassDecl* $tmp3227 = *(&local1);
frost$core$Bit $tmp3228 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3226), $tmp3227);
bool $tmp3229 = $tmp3228.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3226);
if ($tmp3229) goto block14; else goto block16;
block14:;
// line 876
frost$io$IndentedOutputStream** $tmp3230 = &param0->out;
frost$io$IndentedOutputStream* $tmp3231 = *$tmp3230;
frost$core$String* $tmp3232 = org$frostlang$frostc$CCodeGenerator$unwrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param3, $tmp3231);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3232));
org$frostlang$frostc$ClassDecl* $tmp3233 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3233));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3234 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3234));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3232;
block16:;
// line 878
frost$core$Weak** $tmp3235 = &param0->compiler;
frost$core$Weak* $tmp3236 = *$tmp3235;
frost$core$Object* $tmp3237 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3236);
org$frostlang$frostc$ClassDecl* $tmp3238 = *(&local0);
frost$core$Bit $tmp3239 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3237), $tmp3238);
bool $tmp3240 = $tmp3239.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3237);
if ($tmp3240) goto block22; else goto block20;
block22:;
org$frostlang$frostc$Type$Kind* $tmp3241 = &param3->typeKind;
org$frostlang$frostc$Type$Kind $tmp3242 = *$tmp3241;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3243;
$tmp3243 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3243->value = $tmp3242;
frost$core$Int64 $tmp3244 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3245 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3244);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3246;
$tmp3246 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3246->value = $tmp3245;
ITable* $tmp3247 = ((frost$core$Equatable*) $tmp3243)->$class->itable;
while ($tmp3247->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3247 = $tmp3247->next;
}
$fn3249 $tmp3248 = $tmp3247->methods[0];
frost$core$Bit $tmp3250 = $tmp3248(((frost$core$Equatable*) $tmp3243), ((frost$core$Equatable*) $tmp3246));
bool $tmp3251 = $tmp3250.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3246)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3243)));
if ($tmp3251) goto block21; else goto block20;
block21:;
org$frostlang$frostc$FixedArray* $tmp3252 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param3);
frost$core$Int64 $tmp3253 = (frost$core$Int64) {0};
frost$core$Object* $tmp3254 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3252, $tmp3253);
frost$core$Bit $tmp3255 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp3254), param2);
bool $tmp3256 = $tmp3255.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3254);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3252));
if ($tmp3256) goto block18; else goto block20;
block18:;
// line 880
frost$io$IndentedOutputStream** $tmp3257 = &param0->out;
frost$io$IndentedOutputStream* $tmp3258 = *$tmp3257;
frost$core$String* $tmp3259 = org$frostlang$frostc$CCodeGenerator$toNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param3, $tmp3258);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3259));
org$frostlang$frostc$ClassDecl* $tmp3260 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3260));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3261 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3261));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3259;
block20:;
// line 882
frost$core$Weak** $tmp3262 = &param0->compiler;
frost$core$Weak* $tmp3263 = *$tmp3262;
frost$core$Object* $tmp3264 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3263);
org$frostlang$frostc$ClassDecl* $tmp3265 = *(&local1);
frost$core$Bit $tmp3266 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3264), $tmp3265);
bool $tmp3267 = $tmp3266.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3264);
if ($tmp3267) goto block26; else goto block24;
block26:;
org$frostlang$frostc$Type$Kind* $tmp3268 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp3269 = *$tmp3268;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3270;
$tmp3270 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3270->value = $tmp3269;
frost$core$Int64 $tmp3271 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3272 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3271);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3273;
$tmp3273 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3273->value = $tmp3272;
ITable* $tmp3274 = ((frost$core$Equatable*) $tmp3270)->$class->itable;
while ($tmp3274->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3274 = $tmp3274->next;
}
$fn3276 $tmp3275 = $tmp3274->methods[0];
frost$core$Bit $tmp3277 = $tmp3275(((frost$core$Equatable*) $tmp3270), ((frost$core$Equatable*) $tmp3273));
bool $tmp3278 = $tmp3277.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3273)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3270)));
if ($tmp3278) goto block25; else goto block24;
block25:;
org$frostlang$frostc$FixedArray* $tmp3279 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp3280 = (frost$core$Int64) {0};
frost$core$Object* $tmp3281 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3279, $tmp3280);
frost$core$Bit $tmp3282 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp3281), param3);
bool $tmp3283 = $tmp3282.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3281);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3279));
if ($tmp3283) goto block23; else goto block24;
block23:;
// line 884
frost$io$IndentedOutputStream** $tmp3284 = &param0->out;
frost$io$IndentedOutputStream* $tmp3285 = *$tmp3284;
frost$core$String* $tmp3286 = org$frostlang$frostc$CCodeGenerator$toNonNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param3, $tmp3285);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3286));
org$frostlang$frostc$ClassDecl* $tmp3287 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3287));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3288 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3288));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3286;
block24:;
goto block19;
block19:;
goto block15;
block15:;
goto block11;
block11:;
org$frostlang$frostc$ClassDecl* $tmp3289 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3289));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3290 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3290));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block2;
block2:;
// line 887
frost$core$String* $tmp3291 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param2);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3291));
frost$core$String* $tmp3292 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3292));
*(&local2) = $tmp3291;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3291));
// line 888
frost$core$String* $tmp3293 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3293));
frost$core$String* $tmp3294 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3294));
*(&local3) = $tmp3293;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3293));
// line 889
frost$core$String* $tmp3295 = *(&local2);
frost$core$String* $tmp3296 = *(&local3);
frost$core$Bit $tmp3297 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3295, $tmp3296);
bool $tmp3298 = $tmp3297.value;
if ($tmp3298) goto block27; else goto block28;
block27:;
// line 890
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String* $tmp3299 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3299));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3300 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3300));
*(&local2) = ((frost$core$String*) NULL);
return param1;
block28:;
// line 892
frost$core$String* $tmp3301 = *(&local3);
frost$core$String* $tmp3302 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3303, $tmp3301);
frost$core$String* $tmp3304 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3302, &$s3305);
frost$core$String* $tmp3306 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3304, param1);
frost$core$String* $tmp3307 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3306, &$s3308);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3302));
frost$core$String* $tmp3309 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3309));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3310 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3310));
*(&local2) = ((frost$core$String*) NULL);
return $tmp3307;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getIntReference$frost$core$UInt64$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$UInt64 param1) {

// line 896
frost$core$Int64 $tmp3311 = (frost$core$Int64) {9223372036854775807};
frost$core$UInt64 $tmp3312 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3311);
uint64_t $tmp3313 = param1.value;
uint64_t $tmp3314 = $tmp3312.value;
bool $tmp3315 = $tmp3313 > $tmp3314;
frost$core$Bit $tmp3316 = (frost$core$Bit) {$tmp3315};
bool $tmp3317 = $tmp3316.value;
if ($tmp3317) goto block1; else goto block2;
block1:;
// line 897
frost$core$UInt64$wrapper* $tmp3318;
$tmp3318 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp3318->value = param1;
frost$core$String* $tmp3319 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp3318), &$s3320);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3318));
return $tmp3319;
block2:;
// line 899
frost$core$UInt64$wrapper* $tmp3321;
$tmp3321 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp3321->value = param1;
$fn3323 $tmp3322 = ($fn3323) ((frost$core$Object*) $tmp3321)->$class->vtable[0];
frost$core$String* $tmp3324 = $tmp3322(((frost$core$Object*) $tmp3321));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3321));
return $tmp3324;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getRealReference$org$frostlang$frostc$Type$frost$core$Real64$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$Real64 param2) {

frost$core$String* local0 = NULL;
// line 903
frost$core$Real64$wrapper* $tmp3325;
$tmp3325 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp3325->value = param2;
$fn3327 $tmp3326 = ($fn3327) ((frost$core$Object*) $tmp3325)->$class->vtable[0];
frost$core$String* $tmp3328 = $tmp3326(((frost$core$Object*) $tmp3325));
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3328));
frost$core$String* $tmp3329 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3329));
*(&local0) = $tmp3328;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3325));
// line 904
frost$core$String* $tmp3330 = *(&local0);
frost$core$Bit $tmp3331 = frost$core$String$contains$frost$core$String$R$frost$core$Bit($tmp3330, &$s3332);
bool $tmp3333 = $tmp3331.value;
if ($tmp3333) goto block1; else goto block2;
block1:;
// line 905
frost$core$String* $tmp3334 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3334));
frost$core$String* $tmp3335 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3335));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3334;
block2:;
// line 907
frost$core$String* $tmp3336 = *(&local0);
frost$core$String* $tmp3337 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3336, &$s3338);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3337));
frost$core$String* $tmp3339 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3339));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3337;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getBitReference$frost$core$Bit$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$Bit param1, frost$io$IndentedOutputStream* param2) {

// line 911
bool $tmp3340 = param1.value;
if ($tmp3340) goto block1; else goto block2;
block1:;
// line 912
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3341));
return &$s3342;
block2:;
// line 914
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3343));
return &$s3344;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Char8 local2;
// line 918
*(&local0) = ((frost$core$Error*) NULL);
// line 919
frost$core$Int64* $tmp3345 = &param0->varCount;
frost$core$Int64 $tmp3346 = *$tmp3345;
frost$core$Int64 $tmp3347 = (frost$core$Int64) {1};
int64_t $tmp3348 = $tmp3346.value;
int64_t $tmp3349 = $tmp3347.value;
int64_t $tmp3350 = $tmp3348 + $tmp3349;
frost$core$Int64 $tmp3351 = (frost$core$Int64) {$tmp3350};
frost$core$Int64* $tmp3352 = &param0->varCount;
*$tmp3352 = $tmp3351;
// line 920
frost$core$Int64* $tmp3353 = &param0->varCount;
frost$core$Int64 $tmp3354 = *$tmp3353;
frost$core$Int64$wrapper* $tmp3355;
$tmp3355 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3355->value = $tmp3354;
frost$core$String* $tmp3356 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3357, ((frost$core$Object*) $tmp3355));
frost$core$String* $tmp3358 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3356, &$s3359);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3358));
frost$core$String* $tmp3360 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3360));
*(&local1) = $tmp3358;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3355));
// line 921
org$frostlang$frostc$Type* $tmp3361 = org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type();
frost$core$String* $tmp3362 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp3361);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3362));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3361));
// line 922
frost$io$MemoryOutputStream** $tmp3363 = &param0->strings;
frost$io$MemoryOutputStream* $tmp3364 = *$tmp3363;
frost$core$String* $tmp3365 = *(&local1);
frost$core$String* $tmp3366 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3367, $tmp3365);
frost$core$String* $tmp3368 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3366, &$s3369);
frost$core$Int64 $tmp3370 = (frost$core$Int64) {18446744073709550617};
frost$core$Int64$wrapper* $tmp3371;
$tmp3371 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3371->value = $tmp3370;
frost$core$String* $tmp3372 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3373, ((frost$core$Object*) $tmp3371));
frost$core$String* $tmp3374 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3372, &$s3375);
frost$core$String* $tmp3376 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3368, $tmp3374);
frost$core$String* $tmp3377 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3376, &$s3378);
$fn3380 $tmp3379 = ($fn3380) ((frost$io$OutputStream*) $tmp3364)->$class->vtable[17];
frost$core$Error* $tmp3381 = $tmp3379(((frost$io$OutputStream*) $tmp3364), $tmp3377);
if ($tmp3381 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3381));
*(&local0) = $tmp3381;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3381));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3366));
frost$core$String* $tmp3382 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3382));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3381));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3366));
// line 925
frost$collections$ListView* $tmp3383 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(param1);
ITable* $tmp3384 = ((frost$collections$Iterable*) $tmp3383)->$class->itable;
while ($tmp3384->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3384 = $tmp3384->next;
}
$fn3386 $tmp3385 = $tmp3384->methods[0];
frost$collections$Iterator* $tmp3387 = $tmp3385(((frost$collections$Iterable*) $tmp3383));
goto block5;
block5:;
ITable* $tmp3388 = $tmp3387->$class->itable;
while ($tmp3388->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3388 = $tmp3388->next;
}
$fn3390 $tmp3389 = $tmp3388->methods[0];
frost$core$Bit $tmp3391 = $tmp3389($tmp3387);
bool $tmp3392 = $tmp3391.value;
if ($tmp3392) goto block7; else goto block6;
block6:;
ITable* $tmp3393 = $tmp3387->$class->itable;
while ($tmp3393->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3393 = $tmp3393->next;
}
$fn3395 $tmp3394 = $tmp3393->methods[1];
frost$core$Object* $tmp3396 = $tmp3394($tmp3387);
*(&local2) = ((frost$core$Char8$wrapper*) $tmp3396)->value;
// line 926
frost$io$MemoryOutputStream** $tmp3397 = &param0->strings;
frost$io$MemoryOutputStream* $tmp3398 = *$tmp3397;
frost$core$Char8 $tmp3399 = *(&local2);
frost$core$UInt8 $tmp3400 = frost$core$Char8$get_asUInt8$R$frost$core$UInt8($tmp3399);
frost$core$UInt8$wrapper* $tmp3401;
$tmp3401 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp3401->value = $tmp3400;
ITable* $tmp3402 = ((frost$core$Formattable*) $tmp3401)->$class->itable;
while ($tmp3402->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp3402 = $tmp3402->next;
}
$fn3404 $tmp3403 = $tmp3402->methods[0];
frost$core$String* $tmp3405 = $tmp3403(((frost$core$Formattable*) $tmp3401), &$s3406);
frost$core$String* $tmp3407 = frost$core$Frost$align$frost$core$String$frost$core$String$R$frost$core$String($tmp3405, &$s3408);
frost$core$String* $tmp3409 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3410, $tmp3407);
frost$core$String* $tmp3411 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3409, &$s3412);
$fn3414 $tmp3413 = ($fn3414) ((frost$io$OutputStream*) $tmp3398)->$class->vtable[17];
frost$core$Error* $tmp3415 = $tmp3413(((frost$io$OutputStream*) $tmp3398), $tmp3411);
if ($tmp3415 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3415));
*(&local0) = $tmp3415;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp3401)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3396);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3383));
frost$core$String* $tmp3416 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3416));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp3401)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3396);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3383));
// line 928
frost$io$MemoryOutputStream** $tmp3417 = &param0->strings;
frost$io$MemoryOutputStream* $tmp3418 = *$tmp3417;
frost$collections$ListView* $tmp3419 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(param1);
ITable* $tmp3420 = ((frost$collections$CollectionView*) $tmp3419)->$class->itable;
while ($tmp3420->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3420 = $tmp3420->next;
}
$fn3422 $tmp3421 = $tmp3420->methods[0];
frost$core$Int64 $tmp3423 = $tmp3421(((frost$collections$CollectionView*) $tmp3419));
frost$core$Int64$wrapper* $tmp3424;
$tmp3424 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3424->value = $tmp3423;
frost$core$String* $tmp3425 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3426, ((frost$core$Object*) $tmp3424));
frost$core$String* $tmp3427 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3425, &$s3428);
ITable* $tmp3429 = ((frost$collections$Key*) param1)->$class->itable;
while ($tmp3429->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp3429 = $tmp3429->next;
}
$fn3431 $tmp3430 = $tmp3429->methods[0];
frost$core$Int64 $tmp3432 = $tmp3430(((frost$collections$Key*) param1));
frost$core$Int64$wrapper* $tmp3433;
$tmp3433 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3433->value = $tmp3432;
frost$core$String* $tmp3434 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3427, ((frost$core$Object*) $tmp3433));
frost$core$String* $tmp3435 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3434, &$s3436);
$fn3438 $tmp3437 = ($fn3438) ((frost$io$OutputStream*) $tmp3418)->$class->vtable[19];
frost$core$Error* $tmp3439 = $tmp3437(((frost$io$OutputStream*) $tmp3418), $tmp3435);
if ($tmp3439 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3439));
*(&local0) = $tmp3439;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3419));
frost$core$String* $tmp3440 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3440));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3419));
// line 929
frost$core$String* $tmp3441 = *(&local1);
frost$core$String* $tmp3442 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3443, $tmp3441);
frost$core$String* $tmp3444 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3442, &$s3445);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3442));
frost$core$String* $tmp3446 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3446));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp3447 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3447));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp3444;
block1:;
// line 932
frost$core$Int64 $tmp3448 = (frost$core$Int64) {932};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3449, $tmp3448);
abort(); // unreachable
block2:;
frost$core$Error* $tmp3450 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3450));
*(&local0) = ((frost$core$Error*) NULL);
goto block12;
block12:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getNullReference$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// line 937
org$frostlang$frostc$Type$Kind* $tmp3451 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp3452 = *$tmp3451;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3453;
$tmp3453 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3453->value = $tmp3452;
frost$core$Int64 $tmp3454 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3455 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3454);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3456;
$tmp3456 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3456->value = $tmp3455;
ITable* $tmp3457 = ((frost$core$Equatable*) $tmp3453)->$class->itable;
while ($tmp3457->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3457 = $tmp3457->next;
}
$fn3459 $tmp3458 = $tmp3457->methods[0];
frost$core$Bit $tmp3460 = $tmp3458(((frost$core$Equatable*) $tmp3453), ((frost$core$Equatable*) $tmp3456));
bool $tmp3461 = $tmp3460.value;
if ($tmp3461) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp3462 = (frost$core$Int64) {937};
frost$core$String* $tmp3463 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3464, ((frost$core$Object*) param1));
frost$core$String* $tmp3465 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3463, &$s3466);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3467, $tmp3462, $tmp3465);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3465));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3463));
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3456)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3453)));
// line 938
frost$core$Weak** $tmp3468 = &param0->compiler;
frost$core$Weak* $tmp3469 = *$tmp3468;
frost$core$Object* $tmp3470 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3469);
org$frostlang$frostc$FixedArray* $tmp3471 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp3472 = (frost$core$Int64) {0};
frost$core$Object* $tmp3473 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3471, $tmp3472);
org$frostlang$frostc$ClassDecl* $tmp3474 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3470), ((org$frostlang$frostc$Type*) $tmp3473));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3474));
org$frostlang$frostc$ClassDecl* $tmp3475 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3475));
*(&local0) = $tmp3474;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3474));
frost$core$Frost$unref$frost$core$Object$Q($tmp3473);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3471));
frost$core$Frost$unref$frost$core$Object$Q($tmp3470);
// line 939
org$frostlang$frostc$ClassDecl* $tmp3476 = *(&local0);
frost$core$Bit $tmp3477 = frost$core$Bit$init$builtin_bit($tmp3476 != NULL);
bool $tmp3478 = $tmp3477.value;
if ($tmp3478) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp3479 = (frost$core$Int64) {939};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3480, $tmp3479);
abort(); // unreachable
block3:;
// line 940
frost$core$Weak** $tmp3481 = &param0->compiler;
frost$core$Weak* $tmp3482 = *$tmp3481;
frost$core$Object* $tmp3483 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3482);
org$frostlang$frostc$ClassDecl* $tmp3484 = *(&local0);
frost$core$Bit $tmp3485 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3483), $tmp3484);
bool $tmp3486 = $tmp3485.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3483);
if ($tmp3486) goto block5; else goto block7;
block5:;
// line 941
frost$core$String* $tmp3487 = org$frostlang$frostc$CCodeGenerator$nullableType$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp3488 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3489, $tmp3487);
frost$core$String* $tmp3490 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3488, &$s3491);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3488));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3487));
org$frostlang$frostc$ClassDecl* $tmp3492 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3492));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3490;
block7:;
// line 1
// line 944
frost$core$String* $tmp3493 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp3494 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3495, $tmp3493);
frost$core$String* $tmp3496 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3494, &$s3497);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3496));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3496));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3493));
org$frostlang$frostc$ClassDecl* $tmp3498 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3498));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3496;
block6:;
goto block8;
block8:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1) {

frost$core$Bit local0;
frost$core$UInt64 local1;
frost$core$Int64 local2;
org$frostlang$frostc$MethodDecl* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
frost$core$Int64 local5;
frost$core$Real64 local6;
org$frostlang$frostc$Type* local7 = NULL;
org$frostlang$frostc$IR$Statement$ID local8;
frost$core$String* local9 = NULL;
// line 949
frost$core$Int64* $tmp3499 = &param1->$rawValue;
frost$core$Int64 $tmp3500 = *$tmp3499;
frost$core$Int64 $tmp3501 = (frost$core$Int64) {0};
frost$core$Bit $tmp3502 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3500, $tmp3501);
bool $tmp3503 = $tmp3502.value;
if ($tmp3503) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp3504 = (frost$core$Bit*) (param1->$data + 0);
frost$core$Bit $tmp3505 = *$tmp3504;
*(&local0) = $tmp3505;
// line 951
frost$core$Bit $tmp3506 = *(&local0);
frost$core$Bit$wrapper* $tmp3507;
$tmp3507 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp3507->value = $tmp3506;
$fn3509 $tmp3508 = ($fn3509) ((frost$core$Object*) $tmp3507)->$class->vtable[0];
frost$core$String* $tmp3510 = $tmp3508(((frost$core$Object*) $tmp3507));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3507));
return $tmp3510;
block3:;
frost$core$Int64 $tmp3511 = (frost$core$Int64) {1};
frost$core$Bit $tmp3512 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3500, $tmp3511);
bool $tmp3513 = $tmp3512.value;
if ($tmp3513) goto block4; else goto block5;
block4:;
frost$core$UInt64* $tmp3514 = (frost$core$UInt64*) (param1->$data + 0);
frost$core$UInt64 $tmp3515 = *$tmp3514;
*(&local1) = $tmp3515;
org$frostlang$frostc$Type** $tmp3516 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3517 = *$tmp3516;
// line 954
frost$core$UInt64 $tmp3518 = *(&local1);
frost$core$UInt64$wrapper* $tmp3519;
$tmp3519 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp3519->value = $tmp3518;
$fn3521 $tmp3520 = ($fn3521) ((frost$core$Object*) $tmp3519)->$class->vtable[0];
frost$core$String* $tmp3522 = $tmp3520(((frost$core$Object*) $tmp3519));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3522));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3522));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3519));
return $tmp3522;
block5:;
frost$core$Int64 $tmp3523 = (frost$core$Int64) {2};
frost$core$Bit $tmp3524 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3500, $tmp3523);
bool $tmp3525 = $tmp3524.value;
if ($tmp3525) goto block6; else goto block7;
block6:;
frost$core$Int64* $tmp3526 = (frost$core$Int64*) (param1->$data + 0);
frost$core$Int64 $tmp3527 = *$tmp3526;
*(&local2) = $tmp3527;
org$frostlang$frostc$Type** $tmp3528 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3529 = *$tmp3528;
// line 957
frost$core$Int64 $tmp3530 = *(&local2);
frost$core$Int64$wrapper* $tmp3531;
$tmp3531 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3531->value = $tmp3530;
frost$core$String* $tmp3532 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3533, ((frost$core$Object*) $tmp3531));
frost$core$String* $tmp3534 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3532, &$s3535);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3534));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3534));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3532));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3531));
return $tmp3534;
block7:;
frost$core$Int64 $tmp3536 = (frost$core$Int64) {3};
frost$core$Bit $tmp3537 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3500, $tmp3536);
bool $tmp3538 = $tmp3537.value;
if ($tmp3538) goto block8; else goto block9;
block8:;
org$frostlang$frostc$MethodDecl** $tmp3539 = (org$frostlang$frostc$MethodDecl**) (param1->$data + 0);
org$frostlang$frostc$MethodDecl* $tmp3540 = *$tmp3539;
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3540));
org$frostlang$frostc$MethodDecl* $tmp3541 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3541));
*(&local3) = $tmp3540;
org$frostlang$frostc$Type** $tmp3542 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3543 = *$tmp3542;
// line 960
org$frostlang$frostc$MethodDecl* $tmp3544 = *(&local3);
frost$core$Weak** $tmp3545 = &$tmp3544->owner;
frost$core$Weak* $tmp3546 = *$tmp3545;
frost$core$Object* $tmp3547 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3546);
frost$core$Bit* $tmp3548 = &((org$frostlang$frostc$ClassDecl*) $tmp3547)->external;
frost$core$Bit $tmp3549 = *$tmp3548;
bool $tmp3550 = $tmp3549.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3547);
if ($tmp3550) goto block10; else goto block11;
block10:;
// line 961
org$frostlang$frostc$MethodDecl* $tmp3551 = *(&local3);
org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, $tmp3551);
goto block11;
block11:;
// line 963
org$frostlang$frostc$MethodDecl* $tmp3552 = *(&local3);
frost$core$String* $tmp3553 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, $tmp3552);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3553));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3553));
org$frostlang$frostc$MethodDecl* $tmp3554 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3554));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
return $tmp3553;
block9:;
frost$core$Int64 $tmp3555 = (frost$core$Int64) {4};
frost$core$Bit $tmp3556 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3500, $tmp3555);
bool $tmp3557 = $tmp3556.value;
if ($tmp3557) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Type** $tmp3558 = (org$frostlang$frostc$Type**) (param1->$data + 0);
org$frostlang$frostc$Type* $tmp3559 = *$tmp3558;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3559));
org$frostlang$frostc$Type* $tmp3560 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3560));
*(&local4) = $tmp3559;
// line 966
org$frostlang$frostc$Type* $tmp3561 = *(&local4);
frost$core$String* $tmp3562 = org$frostlang$frostc$CCodeGenerator$getNullReference$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp3561);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3562));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3562));
org$frostlang$frostc$Type* $tmp3563 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3563));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp3562;
block13:;
frost$core$Int64 $tmp3564 = (frost$core$Int64) {5};
frost$core$Bit $tmp3565 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3500, $tmp3564);
bool $tmp3566 = $tmp3565.value;
if ($tmp3566) goto block14; else goto block15;
block14:;
frost$core$Int64* $tmp3567 = (frost$core$Int64*) (param1->$data + 0);
frost$core$Int64 $tmp3568 = *$tmp3567;
*(&local5) = $tmp3568;
org$frostlang$frostc$Type** $tmp3569 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3570 = *$tmp3569;
// line 969
frost$core$Int64 $tmp3571 = *(&local5);
frost$core$Int64$wrapper* $tmp3572;
$tmp3572 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3572->value = $tmp3571;
frost$core$String* $tmp3573 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3574, ((frost$core$Object*) $tmp3572));
frost$core$String* $tmp3575 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3573, &$s3576);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3573));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3572));
return $tmp3575;
block15:;
frost$core$Int64 $tmp3577 = (frost$core$Int64) {6};
frost$core$Bit $tmp3578 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3500, $tmp3577);
bool $tmp3579 = $tmp3578.value;
if ($tmp3579) goto block16; else goto block17;
block16:;
frost$core$Real64* $tmp3580 = (frost$core$Real64*) (param1->$data + 0);
frost$core$Real64 $tmp3581 = *$tmp3580;
*(&local6) = $tmp3581;
org$frostlang$frostc$Type** $tmp3582 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3583 = *$tmp3582;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3583));
org$frostlang$frostc$Type* $tmp3584 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3584));
*(&local7) = $tmp3583;
// line 972
org$frostlang$frostc$Type* $tmp3585 = *(&local7);
frost$core$Real64 $tmp3586 = *(&local6);
frost$core$String* $tmp3587 = org$frostlang$frostc$CCodeGenerator$getRealReference$org$frostlang$frostc$Type$frost$core$Real64$R$frost$core$String(param0, $tmp3585, $tmp3586);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3587));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3587));
org$frostlang$frostc$Type* $tmp3588 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3588));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return $tmp3587;
block17:;
frost$core$Int64 $tmp3589 = (frost$core$Int64) {7};
frost$core$Bit $tmp3590 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3500, $tmp3589);
bool $tmp3591 = $tmp3590.value;
if ($tmp3591) goto block18; else goto block19;
block18:;
org$frostlang$frostc$IR$Statement$ID* $tmp3592 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp3593 = *$tmp3592;
*(&local8) = $tmp3593;
org$frostlang$frostc$Type** $tmp3594 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3595 = *$tmp3594;
// line 975
frost$collections$HashMap** $tmp3596 = &param0->refs;
frost$collections$HashMap* $tmp3597 = *$tmp3596;
org$frostlang$frostc$IR$Statement$ID $tmp3598 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3599;
$tmp3599 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3599->value = $tmp3598;
frost$core$Object* $tmp3600 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp3597, ((frost$collections$Key*) $tmp3599));
frost$core$Bit $tmp3601 = frost$core$Bit$init$builtin_bit(((frost$core$String*) $tmp3600) != NULL);
bool $tmp3602 = $tmp3601.value;
if ($tmp3602) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp3603 = (frost$core$Int64) {975};
org$frostlang$frostc$IR$Statement$ID $tmp3604 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3605;
$tmp3605 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3605->value = $tmp3604;
frost$core$String* $tmp3606 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3607, ((frost$core$Object*) $tmp3605));
frost$core$String* $tmp3608 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3606, &$s3609);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3610, $tmp3603, $tmp3608);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3605));
abort(); // unreachable
block20:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3600);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp3599)));
// line 976
frost$collections$HashMap** $tmp3611 = &param0->refs;
frost$collections$HashMap* $tmp3612 = *$tmp3611;
org$frostlang$frostc$IR$Statement$ID $tmp3613 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3614;
$tmp3614 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3614->value = $tmp3613;
frost$core$Object* $tmp3615 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp3612, ((frost$collections$Key*) $tmp3614));
frost$core$Bit $tmp3616 = frost$core$Bit$init$builtin_bit(((frost$core$String*) $tmp3615) == NULL);
bool $tmp3617 = $tmp3616.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3615);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp3614)));
if ($tmp3617) goto block22; else goto block23;
block22:;
// line 977
org$frostlang$frostc$IR$Statement$ID $tmp3618 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3619;
$tmp3619 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3619->value = $tmp3618;
frost$core$String* $tmp3620 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3621, ((frost$core$Object*) $tmp3619));
frost$core$String* $tmp3622 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3620, &$s3623);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3622));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3622));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3619));
return $tmp3622;
block23:;
// line 979
frost$collections$HashMap** $tmp3624 = &param0->refs;
frost$collections$HashMap* $tmp3625 = *$tmp3624;
org$frostlang$frostc$IR$Statement$ID $tmp3626 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3627;
$tmp3627 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3627->value = $tmp3626;
frost$core$Object* $tmp3628 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp3625, ((frost$collections$Key*) $tmp3627));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp3628)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3628);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp3627)));
return ((frost$core$String*) $tmp3628);
block19:;
frost$core$Int64 $tmp3629 = (frost$core$Int64) {8};
frost$core$Bit $tmp3630 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3500, $tmp3629);
bool $tmp3631 = $tmp3630.value;
if ($tmp3631) goto block24; else goto block25;
block24:;
frost$core$String** $tmp3632 = (frost$core$String**) (param1->$data + 0);
frost$core$String* $tmp3633 = *$tmp3632;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3633));
frost$core$String* $tmp3634 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3634));
*(&local9) = $tmp3633;
// line 982
frost$core$String* $tmp3635 = *(&local9);
frost$core$String* $tmp3636 = org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(param0, $tmp3635);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3636));
frost$core$String* $tmp3637 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3637));
*(&local9) = ((frost$core$String*) NULL);
return $tmp3636;
block25:;
// line 985
frost$core$Int64 $tmp3638 = (frost$core$Int64) {985};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3639, $tmp3638);
abort(); // unreachable
block1:;
goto block26;
block26:;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$getChoiceFieldOffset$org$frostlang$frostc$ChoiceCase$frost$core$Int64$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ChoiceCase* param1, frost$core$Int64 param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 991
frost$core$Int64 $tmp3640 = (frost$core$Int64) {0};
*(&local0) = $tmp3640;
// line 992
frost$core$Int64 $tmp3641 = (frost$core$Int64) {0};
frost$core$Bit $tmp3642 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp3643 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp3641, param2, $tmp3642);
frost$core$Int64 $tmp3644 = $tmp3643.min;
*(&local1) = $tmp3644;
frost$core$Int64 $tmp3645 = $tmp3643.max;
frost$core$Bit $tmp3646 = $tmp3643.inclusive;
bool $tmp3647 = $tmp3646.value;
frost$core$Int64 $tmp3648 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp3649 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3648);
if ($tmp3647) goto block4; else goto block5;
block4:;
int64_t $tmp3650 = $tmp3644.value;
int64_t $tmp3651 = $tmp3645.value;
bool $tmp3652 = $tmp3650 <= $tmp3651;
frost$core$Bit $tmp3653 = (frost$core$Bit) {$tmp3652};
bool $tmp3654 = $tmp3653.value;
if ($tmp3654) goto block1; else goto block2;
block5:;
int64_t $tmp3655 = $tmp3644.value;
int64_t $tmp3656 = $tmp3645.value;
bool $tmp3657 = $tmp3655 < $tmp3656;
frost$core$Bit $tmp3658 = (frost$core$Bit) {$tmp3657};
bool $tmp3659 = $tmp3658.value;
if ($tmp3659) goto block1; else goto block2;
block1:;
// line 994
frost$core$Int64 $tmp3660 = *(&local0);
frost$collections$Array** $tmp3661 = &param1->fields;
frost$collections$Array* $tmp3662 = *$tmp3661;
frost$core$Int64 $tmp3663 = *(&local1);
frost$core$Object* $tmp3664 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3662, $tmp3663);
frost$core$Int64 $tmp3665 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, ((org$frostlang$frostc$Type*) $tmp3664));
int64_t $tmp3666 = $tmp3660.value;
int64_t $tmp3667 = $tmp3665.value;
int64_t $tmp3668 = $tmp3666 + $tmp3667;
frost$core$Int64 $tmp3669 = (frost$core$Int64) {$tmp3668};
*(&local0) = $tmp3669;
frost$core$Frost$unref$frost$core$Object$Q($tmp3664);
goto block3;
block3:;
frost$core$Int64 $tmp3670 = *(&local1);
int64_t $tmp3671 = $tmp3645.value;
int64_t $tmp3672 = $tmp3670.value;
int64_t $tmp3673 = $tmp3671 - $tmp3672;
frost$core$Int64 $tmp3674 = (frost$core$Int64) {$tmp3673};
frost$core$UInt64 $tmp3675 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3674);
if ($tmp3647) goto block7; else goto block8;
block7:;
uint64_t $tmp3676 = $tmp3675.value;
uint64_t $tmp3677 = $tmp3649.value;
bool $tmp3678 = $tmp3676 >= $tmp3677;
frost$core$Bit $tmp3679 = (frost$core$Bit) {$tmp3678};
bool $tmp3680 = $tmp3679.value;
if ($tmp3680) goto block6; else goto block2;
block8:;
uint64_t $tmp3681 = $tmp3675.value;
uint64_t $tmp3682 = $tmp3649.value;
bool $tmp3683 = $tmp3681 > $tmp3682;
frost$core$Bit $tmp3684 = (frost$core$Bit) {$tmp3683};
bool $tmp3685 = $tmp3684.value;
if ($tmp3685) goto block6; else goto block2;
block6:;
int64_t $tmp3686 = $tmp3670.value;
int64_t $tmp3687 = $tmp3648.value;
int64_t $tmp3688 = $tmp3686 + $tmp3687;
frost$core$Int64 $tmp3689 = (frost$core$Int64) {$tmp3688};
*(&local1) = $tmp3689;
goto block1;
block2:;
// line 996
frost$core$Int64 $tmp3690 = *(&local0);
return $tmp3690;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
// line 1000
frost$core$Weak** $tmp3691 = &param1->owner;
frost$core$Weak* $tmp3692 = *$tmp3691;
frost$core$Object* $tmp3693 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3692);
org$frostlang$frostc$Type** $tmp3694 = &((org$frostlang$frostc$ClassDecl*) $tmp3693)->type;
org$frostlang$frostc$Type* $tmp3695 = *$tmp3694;
frost$core$String* $tmp3696 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp3695);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3696));
frost$core$String* $tmp3697 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3697));
*(&local0) = $tmp3696;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3696));
frost$core$Frost$unref$frost$core$Object$Q($tmp3693);
// line 1001
org$frostlang$frostc$MethodDecl$Kind* $tmp3698 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3699 = *$tmp3698;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3700;
$tmp3700 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3700->value = $tmp3699;
frost$core$Int64 $tmp3701 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp3702 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp3701);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3703;
$tmp3703 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3703->value = $tmp3702;
ITable* $tmp3704 = ((frost$core$Equatable*) $tmp3700)->$class->itable;
while ($tmp3704->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3704 = $tmp3704->next;
}
$fn3706 $tmp3705 = $tmp3704->methods[0];
frost$core$Bit $tmp3707 = $tmp3705(((frost$core$Equatable*) $tmp3700), ((frost$core$Equatable*) $tmp3703));
bool $tmp3708 = $tmp3707.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3703)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3700)));
if ($tmp3708) goto block3; else goto block2;
block3:;
frost$core$String* $tmp3709 = *(&local0);
frost$core$Bit $tmp3710 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp3709, &$s3711);
frost$core$Bit $tmp3712 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3710);
bool $tmp3713 = $tmp3712.value;
if ($tmp3713) goto block1; else goto block2;
block1:;
// line 1002
frost$core$String* $tmp3714 = *(&local0);
frost$core$String* $tmp3715 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3714, &$s3716);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3715));
frost$core$String* $tmp3717 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3717));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3715;
block2:;
// line 1004
frost$core$String* $tmp3718 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3718));
frost$core$String* $tmp3719 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3719));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3718;

}
void org$frostlang$frostc$CCodeGenerator$writeIsNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1008
frost$core$String* $tmp3720 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3720));
frost$core$String* $tmp3721 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3721));
*(&local0) = $tmp3720;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3720));
// line 1009
frost$core$Weak** $tmp3722 = &param0->compiler;
frost$core$Weak* $tmp3723 = *$tmp3722;
frost$core$Object* $tmp3724 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3723);
$fn3726 $tmp3725 = ($fn3726) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3727 = $tmp3725(param2);
org$frostlang$frostc$ClassDecl* $tmp3728 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3724), $tmp3727);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3728));
org$frostlang$frostc$ClassDecl* $tmp3729 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3729));
*(&local1) = $tmp3728;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3728));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3727));
frost$core$Frost$unref$frost$core$Object$Q($tmp3724);
// line 1010
org$frostlang$frostc$ClassDecl* $tmp3730 = *(&local1);
frost$core$Bit $tmp3731 = frost$core$Bit$init$builtin_bit($tmp3730 != NULL);
bool $tmp3732 = $tmp3731.value;
if ($tmp3732) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp3733 = (frost$core$Int64) {1010};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3734, $tmp3733);
abort(); // unreachable
block1:;
// line 1011
*(&local2) = ((frost$core$String*) NULL);
// line 1012
frost$core$Weak** $tmp3735 = &param0->compiler;
frost$core$Weak* $tmp3736 = *$tmp3735;
frost$core$Object* $tmp3737 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3736);
org$frostlang$frostc$ClassDecl* $tmp3738 = *(&local1);
frost$core$Bit $tmp3739 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3737), $tmp3738);
bool $tmp3740 = $tmp3739.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3737);
if ($tmp3740) goto block3; else goto block5;
block3:;
// line 1013
$fn3742 $tmp3741 = ($fn3742) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3743 = $tmp3741(param2);
org$frostlang$frostc$Type$Kind* $tmp3744 = &$tmp3743->typeKind;
org$frostlang$frostc$Type$Kind $tmp3745 = *$tmp3744;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3746;
$tmp3746 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3746->value = $tmp3745;
frost$core$Int64 $tmp3747 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3748 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3747);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3749;
$tmp3749 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3749->value = $tmp3748;
ITable* $tmp3750 = ((frost$core$Equatable*) $tmp3746)->$class->itable;
while ($tmp3750->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3750 = $tmp3750->next;
}
$fn3752 $tmp3751 = $tmp3750->methods[1];
frost$core$Bit $tmp3753 = $tmp3751(((frost$core$Equatable*) $tmp3746), ((frost$core$Equatable*) $tmp3749));
bool $tmp3754 = $tmp3753.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3749)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3746)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3743));
if ($tmp3754) goto block6; else goto block8;
block6:;
// line 1014
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3755));
frost$core$String* $tmp3756 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3756));
*(&local2) = &$s3757;
goto block7;
block8:;
// line 1
// line 1017
frost$core$String* $tmp3758 = *(&local0);
frost$core$String* $tmp3759 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3760, $tmp3758);
frost$core$String* $tmp3761 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3759, &$s3762);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3761));
frost$core$String* $tmp3763 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3763));
*(&local2) = $tmp3761;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3759));
goto block7;
block7:;
goto block4;
block5:;
// line 1
// line 1021
frost$core$String* $tmp3764 = *(&local0);
frost$core$String* $tmp3765 = frost$core$String$get_asString$R$frost$core$String($tmp3764);
frost$core$String* $tmp3766 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3765, &$s3767);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3766));
frost$core$String* $tmp3768 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3768));
*(&local2) = $tmp3766;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3765));
goto block4;
block4:;
// line 1023
frost$collections$HashMap** $tmp3769 = &param0->refs;
frost$collections$HashMap* $tmp3770 = *$tmp3769;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3771;
$tmp3771 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3771->value = param1;
frost$core$String* $tmp3772 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp3770, ((frost$collections$Key*) $tmp3771), ((frost$core$Object*) $tmp3772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp3771)));
frost$core$String* $tmp3773 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3773));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3774 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3774));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp3775 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3775));
*(&local0) = ((frost$core$String*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeIsNonNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1027
frost$core$String* $tmp3776 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3776));
frost$core$String* $tmp3777 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3777));
*(&local0) = $tmp3776;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3776));
// line 1028
frost$core$Weak** $tmp3778 = &param0->compiler;
frost$core$Weak* $tmp3779 = *$tmp3778;
frost$core$Object* $tmp3780 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3779);
$fn3782 $tmp3781 = ($fn3782) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3783 = $tmp3781(param2);
org$frostlang$frostc$ClassDecl* $tmp3784 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3780), $tmp3783);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3784));
org$frostlang$frostc$ClassDecl* $tmp3785 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3785));
*(&local1) = $tmp3784;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3783));
frost$core$Frost$unref$frost$core$Object$Q($tmp3780);
// line 1029
org$frostlang$frostc$ClassDecl* $tmp3786 = *(&local1);
frost$core$Bit $tmp3787 = frost$core$Bit$init$builtin_bit($tmp3786 != NULL);
bool $tmp3788 = $tmp3787.value;
if ($tmp3788) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp3789 = (frost$core$Int64) {1029};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3790, $tmp3789);
abort(); // unreachable
block1:;
// line 1030
*(&local2) = ((frost$core$String*) NULL);
// line 1031
frost$core$Weak** $tmp3791 = &param0->compiler;
frost$core$Weak* $tmp3792 = *$tmp3791;
frost$core$Object* $tmp3793 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3792);
org$frostlang$frostc$ClassDecl* $tmp3794 = *(&local1);
frost$core$Bit $tmp3795 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3793), $tmp3794);
bool $tmp3796 = $tmp3795.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3793);
if ($tmp3796) goto block3; else goto block5;
block3:;
// line 1032
$fn3798 $tmp3797 = ($fn3798) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3799 = $tmp3797(param2);
org$frostlang$frostc$Type$Kind* $tmp3800 = &$tmp3799->typeKind;
org$frostlang$frostc$Type$Kind $tmp3801 = *$tmp3800;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3802;
$tmp3802 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3802->value = $tmp3801;
frost$core$Int64 $tmp3803 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3804 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3803);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3805;
$tmp3805 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3805->value = $tmp3804;
ITable* $tmp3806 = ((frost$core$Equatable*) $tmp3802)->$class->itable;
while ($tmp3806->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3806 = $tmp3806->next;
}
$fn3808 $tmp3807 = $tmp3806->methods[1];
frost$core$Bit $tmp3809 = $tmp3807(((frost$core$Equatable*) $tmp3802), ((frost$core$Equatable*) $tmp3805));
bool $tmp3810 = $tmp3809.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3805)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3802)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3799));
if ($tmp3810) goto block6; else goto block8;
block6:;
// line 1033
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3811));
frost$core$String* $tmp3812 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3812));
*(&local2) = &$s3813;
goto block7;
block8:;
// line 1
// line 1036
frost$core$String* $tmp3814 = *(&local0);
frost$core$String* $tmp3815 = frost$core$String$get_asString$R$frost$core$String($tmp3814);
frost$core$String* $tmp3816 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3815, &$s3817);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3816));
frost$core$String* $tmp3818 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3818));
*(&local2) = $tmp3816;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3815));
goto block7;
block7:;
goto block4;
block5:;
// line 1
// line 1040
frost$core$String* $tmp3819 = *(&local0);
frost$core$String* $tmp3820 = frost$core$String$get_asString$R$frost$core$String($tmp3819);
frost$core$String* $tmp3821 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3820, &$s3822);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3821));
frost$core$String* $tmp3823 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3823));
*(&local2) = $tmp3821;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3821));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3820));
goto block4;
block4:;
// line 1042
frost$collections$HashMap** $tmp3824 = &param0->refs;
frost$collections$HashMap* $tmp3825 = *$tmp3824;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3826;
$tmp3826 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3826->value = param1;
frost$core$String* $tmp3827 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp3825, ((frost$collections$Key*) $tmp3826), ((frost$core$Object*) $tmp3827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp3826)));
frost$core$String* $tmp3828 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3828));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3829 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3829));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp3830 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3830));
*(&local0) = ((frost$core$String*) NULL);
return;

}
frost$core$Bit org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1) {

// line 1046
frost$core$Int64* $tmp3831 = &param1->$rawValue;
frost$core$Int64 $tmp3832 = *$tmp3831;
frost$core$Int64 $tmp3833 = (frost$core$Int64) {4};
frost$core$Bit $tmp3834 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3832, $tmp3833);
bool $tmp3835 = $tmp3834.value;
if ($tmp3835) goto block2; else goto block1;
block2:;
// line 1048
frost$core$Bit $tmp3836 = frost$core$Bit$init$builtin_bit(true);
return $tmp3836;
block1:;
// line 1051
frost$core$Bit $tmp3837 = frost$core$Bit$init$builtin_bit(false);
return $tmp3837;

}
void org$frostlang$frostc$CCodeGenerator$writeBinary$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$expression$Binary$Operator param3, org$frostlang$frostc$IR$Value* param4, org$frostlang$frostc$Type* param5) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$Error* local4 = NULL;
// line 1056
frost$core$String* $tmp3838 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3838));
frost$core$String* $tmp3839 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3839));
*(&local0) = $tmp3838;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3838));
// line 1057
frost$core$String* $tmp3840 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param4);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3840));
frost$core$String* $tmp3841 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3841));
*(&local1) = $tmp3840;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3840));
// line 1058
$fn3843 $tmp3842 = ($fn3843) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3844 = $tmp3842(param2);
frost$core$Bit $tmp3845 = org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit($tmp3844);
bool $tmp3846 = $tmp3845.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3844));
if ($tmp3846) goto block1; else goto block2;
block1:;
// line 1059
frost$core$Int64 $tmp3847 = param3.$rawValue;
frost$core$Int64 $tmp3848 = (frost$core$Int64) {21};
frost$core$Bit $tmp3849 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3847, $tmp3848);
bool $tmp3850 = $tmp3849.value;
if ($tmp3850) goto block4; else goto block5;
block4:;
// line 1061
frost$core$Bit $tmp3851 = org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, param2);
bool $tmp3852 = $tmp3851.value;
if ($tmp3852) goto block6; else goto block7;
block6:;
// line 1062
org$frostlang$frostc$CCodeGenerator$writeIsNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, param4);
// line 1063
frost$core$String* $tmp3853 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3853));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp3854 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3854));
*(&local0) = ((frost$core$String*) NULL);
return;
block7:;
// line 1065
frost$core$Bit $tmp3855 = org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, param4);
bool $tmp3856 = $tmp3855.value;
if ($tmp3856) goto block8; else goto block9;
block8:;
// line 1066
org$frostlang$frostc$CCodeGenerator$writeIsNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, param2);
// line 1067
frost$core$String* $tmp3857 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3857));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp3858 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3858));
*(&local0) = ((frost$core$String*) NULL);
return;
block9:;
goto block3;
block5:;
frost$core$Int64 $tmp3859 = (frost$core$Int64) {22};
frost$core$Bit $tmp3860 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3847, $tmp3859);
bool $tmp3861 = $tmp3860.value;
if ($tmp3861) goto block10; else goto block3;
block10:;
// line 1071
frost$core$Bit $tmp3862 = org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, param2);
bool $tmp3863 = $tmp3862.value;
if ($tmp3863) goto block11; else goto block12;
block11:;
// line 1072
org$frostlang$frostc$CCodeGenerator$writeIsNonNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, param4);
// line 1073
frost$core$String* $tmp3864 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3864));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp3865 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3865));
*(&local0) = ((frost$core$String*) NULL);
return;
block12:;
// line 1075
frost$core$Bit $tmp3866 = org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, param4);
bool $tmp3867 = $tmp3866.value;
if ($tmp3867) goto block13; else goto block14;
block13:;
// line 1076
org$frostlang$frostc$CCodeGenerator$writeIsNonNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, param2);
// line 1077
frost$core$String* $tmp3868 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3868));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp3869 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3869));
*(&local0) = ((frost$core$String*) NULL);
return;
block14:;
goto block3;
block3:;
goto block2;
block2:;
// line 1082
*(&local2) = ((frost$core$String*) NULL);
// line 1083
frost$core$Int64 $tmp3870 = param3.$rawValue;
frost$core$Int64 $tmp3871 = (frost$core$Int64) {0};
frost$core$Bit $tmp3872 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3870, $tmp3871);
bool $tmp3873 = $tmp3872.value;
if ($tmp3873) goto block16; else goto block17;
block16:;
// line 1085
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3874));
frost$core$String* $tmp3875 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3875));
*(&local2) = &$s3876;
goto block15;
block17:;
frost$core$Int64 $tmp3877 = (frost$core$Int64) {1};
frost$core$Bit $tmp3878 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3870, $tmp3877);
bool $tmp3879 = $tmp3878.value;
if ($tmp3879) goto block18; else goto block19;
block18:;
// line 1088
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3880));
frost$core$String* $tmp3881 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3881));
*(&local2) = &$s3882;
goto block15;
block19:;
frost$core$Int64 $tmp3883 = (frost$core$Int64) {2};
frost$core$Bit $tmp3884 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3870, $tmp3883);
bool $tmp3885 = $tmp3884.value;
if ($tmp3885) goto block20; else goto block21;
block20:;
// line 1091
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3886));
frost$core$String* $tmp3887 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3887));
*(&local2) = &$s3888;
goto block15;
block21:;
frost$core$Int64 $tmp3889 = (frost$core$Int64) {3};
frost$core$Bit $tmp3890 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3870, $tmp3889);
bool $tmp3891 = $tmp3890.value;
if ($tmp3891) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp3892 = (frost$core$Int64) {4};
frost$core$Bit $tmp3893 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3870, $tmp3892);
bool $tmp3894 = $tmp3893.value;
if ($tmp3894) goto block22; else goto block24;
block22:;
// line 1094
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3895));
frost$core$String* $tmp3896 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3896));
*(&local2) = &$s3897;
goto block15;
block24:;
frost$core$Int64 $tmp3898 = (frost$core$Int64) {5};
frost$core$Bit $tmp3899 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3870, $tmp3898);
bool $tmp3900 = $tmp3899.value;
if ($tmp3900) goto block25; else goto block26;
block25:;
// line 1097
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3901));
frost$core$String* $tmp3902 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3902));
*(&local2) = &$s3903;
goto block15;
block26:;
frost$core$Int64 $tmp3904 = (frost$core$Int64) {18};
frost$core$Bit $tmp3905 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3870, $tmp3904);
bool $tmp3906 = $tmp3905.value;
if ($tmp3906) goto block27; else goto block28;
block27:;
// line 1100
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3907));
frost$core$String* $tmp3908 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3908));
*(&local2) = &$s3909;
goto block15;
block28:;
frost$core$Int64 $tmp3910 = (frost$core$Int64) {19};
frost$core$Bit $tmp3911 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3870, $tmp3910);
bool $tmp3912 = $tmp3911.value;
if ($tmp3912) goto block29; else goto block30;
block29:;
// line 1103
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3913));
frost$core$String* $tmp3914 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3914));
*(&local2) = &$s3915;
goto block15;
block30:;
frost$core$Int64 $tmp3916 = (frost$core$Int64) {14};
frost$core$Bit $tmp3917 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3870, $tmp3916);
bool $tmp3918 = $tmp3917.value;
if ($tmp3918) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp3919 = (frost$core$Int64) {15};
frost$core$Bit $tmp3920 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3870, $tmp3919);
bool $tmp3921 = $tmp3920.value;
if ($tmp3921) goto block31; else goto block33;
block31:;
// line 1106
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3922));
frost$core$String* $tmp3923 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3923));
*(&local2) = &$s3924;
goto block15;
block33:;
frost$core$Int64 $tmp3925 = (frost$core$Int64) {12};
frost$core$Bit $tmp3926 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3870, $tmp3925);
bool $tmp3927 = $tmp3926.value;
if ($tmp3927) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp3928 = (frost$core$Int64) {13};
frost$core$Bit $tmp3929 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3870, $tmp3928);
bool $tmp3930 = $tmp3929.value;
if ($tmp3930) goto block34; else goto block36;
block34:;
// line 1109
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3931));
frost$core$String* $tmp3932 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3932));
*(&local2) = &$s3933;
goto block15;
block36:;
frost$core$Int64 $tmp3934 = (frost$core$Int64) {16};
frost$core$Bit $tmp3935 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3870, $tmp3934);
bool $tmp3936 = $tmp3935.value;
if ($tmp3936) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp3937 = (frost$core$Int64) {17};
frost$core$Bit $tmp3938 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3870, $tmp3937);
bool $tmp3939 = $tmp3938.value;
if ($tmp3939) goto block37; else goto block39;
block37:;
// line 1112
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3940));
frost$core$String* $tmp3941 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3941));
*(&local2) = &$s3942;
goto block15;
block39:;
frost$core$Int64 $tmp3943 = (frost$core$Int64) {6};
frost$core$Bit $tmp3944 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3870, $tmp3943);
bool $tmp3945 = $tmp3944.value;
if ($tmp3945) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp3946 = (frost$core$Int64) {21};
frost$core$Bit $tmp3947 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3870, $tmp3946);
bool $tmp3948 = $tmp3947.value;
if ($tmp3948) goto block40; else goto block42;
block40:;
// line 1115
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3949));
frost$core$String* $tmp3950 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3950));
*(&local2) = &$s3951;
goto block15;
block42:;
frost$core$Int64 $tmp3952 = (frost$core$Int64) {7};
frost$core$Bit $tmp3953 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3870, $tmp3952);
bool $tmp3954 = $tmp3953.value;
if ($tmp3954) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp3955 = (frost$core$Int64) {22};
frost$core$Bit $tmp3956 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3870, $tmp3955);
bool $tmp3957 = $tmp3956.value;
if ($tmp3957) goto block43; else goto block45;
block43:;
// line 1118
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3958));
frost$core$String* $tmp3959 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3959));
*(&local2) = &$s3960;
goto block15;
block45:;
frost$core$Int64 $tmp3961 = (frost$core$Int64) {8};
frost$core$Bit $tmp3962 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3870, $tmp3961);
bool $tmp3963 = $tmp3962.value;
if ($tmp3963) goto block46; else goto block47;
block46:;
// line 1121
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3964));
frost$core$String* $tmp3965 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3965));
*(&local2) = &$s3966;
goto block15;
block47:;
frost$core$Int64 $tmp3967 = (frost$core$Int64) {9};
frost$core$Bit $tmp3968 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3870, $tmp3967);
bool $tmp3969 = $tmp3968.value;
if ($tmp3969) goto block48; else goto block49;
block48:;
// line 1124
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3970));
frost$core$String* $tmp3971 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3971));
*(&local2) = &$s3972;
goto block15;
block49:;
frost$core$Int64 $tmp3973 = (frost$core$Int64) {10};
frost$core$Bit $tmp3974 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3870, $tmp3973);
bool $tmp3975 = $tmp3974.value;
if ($tmp3975) goto block50; else goto block51;
block50:;
// line 1127
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3976));
frost$core$String* $tmp3977 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3977));
*(&local2) = &$s3978;
goto block15;
block51:;
frost$core$Int64 $tmp3979 = (frost$core$Int64) {11};
frost$core$Bit $tmp3980 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3870, $tmp3979);
bool $tmp3981 = $tmp3980.value;
if ($tmp3981) goto block52; else goto block53;
block52:;
// line 1130
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3982));
frost$core$String* $tmp3983 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3983));
*(&local2) = &$s3984;
goto block15;
block53:;
// line 1133
frost$core$Int64 $tmp3985 = (frost$core$Int64) {1133};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3986, $tmp3985);
abort(); // unreachable
block15:;
// line 1136
frost$core$String* $tmp3987 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3987));
frost$core$String* $tmp3988 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3988));
*(&local3) = $tmp3987;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3987));
// line 1137
*(&local4) = ((frost$core$Error*) NULL);
// line 1138
frost$io$IndentedOutputStream** $tmp3989 = &param0->out;
frost$io$IndentedOutputStream* $tmp3990 = *$tmp3989;
frost$core$String* $tmp3991 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param5);
frost$core$String* $tmp3992 = frost$core$String$get_asString$R$frost$core$String($tmp3991);
frost$core$String* $tmp3993 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3992, &$s3994);
frost$core$String* $tmp3995 = *(&local3);
frost$core$String* $tmp3996 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3993, $tmp3995);
frost$core$String* $tmp3997 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3996, &$s3998);
frost$core$String* $tmp3999 = *(&local0);
frost$core$String* $tmp4000 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3997, $tmp3999);
frost$core$String* $tmp4001 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4000, &$s4002);
frost$core$String* $tmp4003 = *(&local2);
frost$core$String* $tmp4004 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4001, $tmp4003);
frost$core$String* $tmp4005 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4004, &$s4006);
frost$core$String* $tmp4007 = *(&local1);
frost$core$String* $tmp4008 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4005, $tmp4007);
frost$core$String* $tmp4009 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4008, &$s4010);
$fn4012 $tmp4011 = ($fn4012) ((frost$io$OutputStream*) $tmp3990)->$class->vtable[19];
frost$core$Error* $tmp4013 = $tmp4011(((frost$io$OutputStream*) $tmp3990), $tmp4009);
if ($tmp4013 == NULL) goto block56; else goto block57;
block57:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4013));
*(&local4) = $tmp4013;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4013));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4008));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4005));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4004));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4000));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3997));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3996));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3992));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3991));
goto block54;
block56:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4013));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4008));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4005));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4004));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4000));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3997));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3996));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3992));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3991));
goto block55;
block54:;
// line 1141
frost$core$Int64 $tmp4014 = (frost$core$Int64) {1141};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4015, $tmp4014);
abort(); // unreachable
block55:;
frost$core$Error* $tmp4016 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4016));
*(&local4) = ((frost$core$Error*) NULL);
// line 1143
frost$collections$HashMap** $tmp4017 = &param0->refs;
frost$collections$HashMap* $tmp4018 = *$tmp4017;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4019;
$tmp4019 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4019->value = param1;
frost$core$String* $tmp4020 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4018, ((frost$collections$Key*) $tmp4019), ((frost$core$Object*) $tmp4020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4019)));
frost$core$String* $tmp4021 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4021));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4022 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4022));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4023 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4023));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp4024 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4024));
*(&local0) = ((frost$core$String*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeBranch$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Block$ID param1) {

frost$core$Error* local0 = NULL;
// line 1147
*(&local0) = ((frost$core$Error*) NULL);
// line 1148
frost$io$IndentedOutputStream** $tmp4025 = &param0->out;
frost$io$IndentedOutputStream* $tmp4026 = *$tmp4025;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp4027;
$tmp4027 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp4027->value = param1;
frost$core$String* $tmp4028 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s4029, ((frost$core$Object*) $tmp4027));
frost$core$String* $tmp4030 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4028, &$s4031);
$fn4033 $tmp4032 = ($fn4033) ((frost$io$OutputStream*) $tmp4026)->$class->vtable[19];
frost$core$Error* $tmp4034 = $tmp4032(((frost$io$OutputStream*) $tmp4026), $tmp4030);
if ($tmp4034 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4034));
*(&local0) = $tmp4034;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4030));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4028));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4027));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4030));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4028));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4027));
goto block2;
block1:;
// line 1151
frost$core$Int64 $tmp4035 = (frost$core$Int64) {1151};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4036, $tmp4035);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4037 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4037));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeCast$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$Type* param3) {

// line 1156
frost$collections$HashMap** $tmp4038 = &param0->refs;
frost$collections$HashMap* $tmp4039 = *$tmp4038;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4040;
$tmp4040 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4040->value = param1;
frost$core$String* $tmp4041 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
$fn4043 $tmp4042 = ($fn4043) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4044 = $tmp4042(param2);
frost$core$String* $tmp4045 = org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4041, $tmp4044, param3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4039, ((frost$collections$Key*) $tmp4040), ((frost$core$Object*) $tmp4045));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4045));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4044));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4040)));
return;

}
void org$frostlang$frostc$CCodeGenerator$writeConditionalBranch$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1, org$frostlang$frostc$IR$Block$ID param2, org$frostlang$frostc$IR$Block$ID param3) {

frost$core$Error* local0 = NULL;
// line 1160
*(&local0) = ((frost$core$Error*) NULL);
// line 1161
frost$io$IndentedOutputStream** $tmp4046 = &param0->out;
frost$io$IndentedOutputStream* $tmp4047 = *$tmp4046;
frost$core$String* $tmp4048 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
frost$core$String* $tmp4049 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4050, $tmp4048);
frost$core$String* $tmp4051 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4049, &$s4052);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp4053;
$tmp4053 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp4053->value = param2;
frost$core$String* $tmp4054 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp4051, ((frost$core$Object*) $tmp4053));
frost$core$String* $tmp4055 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4054, &$s4056);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp4057;
$tmp4057 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp4057->value = param3;
frost$core$String* $tmp4058 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp4055, ((frost$core$Object*) $tmp4057));
frost$core$String* $tmp4059 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4058, &$s4060);
$fn4062 $tmp4061 = ($fn4062) ((frost$io$OutputStream*) $tmp4047)->$class->vtable[19];
frost$core$Error* $tmp4063 = $tmp4061(((frost$io$OutputStream*) $tmp4047), $tmp4059);
if ($tmp4063 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4063));
*(&local0) = $tmp4063;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4063));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4058));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4055));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4051));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4048));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4063));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4058));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4055));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4051));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4048));
goto block2;
block1:;
// line 1164
frost$core$Int64 $tmp4064 = (frost$core$Int64) {1164};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4065, $tmp4064);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4066 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4066));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeConstruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$ClassDecl* param2) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
// line 1169
*(&local0) = ((frost$core$Error*) NULL);
// line 1170
frost$core$Weak** $tmp4067 = &param0->compiler;
frost$core$Weak* $tmp4068 = *$tmp4067;
frost$core$Object* $tmp4069 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4068);
frost$core$Bit $tmp4070 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4069), param2);
frost$core$Bit $tmp4071 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp4070);
bool $tmp4072 = $tmp4071.value;
if ($tmp4072) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp4073 = (frost$core$Int64) {1170};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4074, $tmp4073);
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q($tmp4069);
// line 1171
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4075 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, param2);
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4075));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4076 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4076));
*(&local1) = $tmp4075;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4075));
// line 1172
*(&local2) = ((frost$core$String*) NULL);
// line 1173
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4077 = *(&local1);
frost$core$String** $tmp4078 = &$tmp4077->type;
frost$core$String* $tmp4079 = *$tmp4078;
ITable* $tmp4081 = ((frost$core$Equatable*) $tmp4079)->$class->itable;
while ($tmp4081->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4081 = $tmp4081->next;
}
$fn4083 $tmp4082 = $tmp4081->methods[1];
frost$core$Bit $tmp4084 = $tmp4082(((frost$core$Equatable*) $tmp4079), ((frost$core$Equatable*) &$s4080));
bool $tmp4085 = $tmp4084.value;
if ($tmp4085) goto block5; else goto block7;
block5:;
// line 1174
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4086 = *(&local1);
frost$core$String** $tmp4087 = &$tmp4086->name;
frost$core$String* $tmp4088 = *$tmp4087;
frost$core$String* $tmp4089 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4090, $tmp4088);
frost$core$String* $tmp4091 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4089, &$s4092);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4091));
frost$core$String* $tmp4093 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4093));
*(&local2) = $tmp4091;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4091));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4089));
goto block6;
block7:;
// line 1
// line 1177
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4094 = *(&local1);
frost$core$String** $tmp4095 = &$tmp4094->name;
frost$core$String* $tmp4096 = *$tmp4095;
frost$core$String* $tmp4097 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4098, $tmp4096);
frost$core$String* $tmp4099 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4097, &$s4100);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4099));
frost$core$String* $tmp4101 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4101));
*(&local2) = $tmp4099;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4099));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4097));
goto block6;
block6:;
// line 1179
frost$core$String* $tmp4102 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4102));
frost$core$String* $tmp4103 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4103));
*(&local3) = $tmp4102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4102));
// line 1180
org$frostlang$frostc$Type** $tmp4104 = &param2->type;
org$frostlang$frostc$Type* $tmp4105 = *$tmp4104;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4105));
org$frostlang$frostc$Type* $tmp4106 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4106));
*(&local4) = $tmp4105;
// line 1181
frost$io$IndentedOutputStream** $tmp4107 = &param0->out;
frost$io$IndentedOutputStream* $tmp4108 = *$tmp4107;
org$frostlang$frostc$Type* $tmp4109 = *(&local4);
frost$core$Int64 $tmp4110 = org$frostlang$frostc$CCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp4109);
frost$core$Int64$wrapper* $tmp4111;
$tmp4111 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp4111->value = $tmp4110;
frost$core$String* $tmp4112 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s4113, ((frost$core$Object*) $tmp4111));
frost$core$String* $tmp4114 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4112, &$s4115);
frost$core$String** $tmp4116 = &param2->name;
frost$core$String* $tmp4117 = *$tmp4116;
frost$core$String* $tmp4118 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp4117);
frost$core$String* $tmp4119 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4114, $tmp4118);
frost$core$String* $tmp4120 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4119, &$s4121);
$fn4123 $tmp4122 = ($fn4123) ((frost$io$OutputStream*) $tmp4108)->$class->vtable[19];
frost$core$Error* $tmp4124 = $tmp4122(((frost$io$OutputStream*) $tmp4108), $tmp4120);
if ($tmp4124 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4124));
*(&local0) = $tmp4124;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4124));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4111));
org$frostlang$frostc$Type* $tmp4125 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4125));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4126 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4126));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4127 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4127));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4128 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4128));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4124));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4111));
// line 1182
frost$io$IndentedOutputStream** $tmp4129 = &param0->out;
frost$io$IndentedOutputStream* $tmp4130 = *$tmp4129;
org$frostlang$frostc$Type* $tmp4131 = *(&local4);
frost$core$String* $tmp4132 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4131);
frost$core$String* $tmp4133 = frost$core$String$get_asString$R$frost$core$String($tmp4132);
frost$core$String* $tmp4134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4133, &$s4135);
frost$core$String* $tmp4136 = *(&local3);
frost$core$String* $tmp4137 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4134, $tmp4136);
frost$core$String* $tmp4138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4137, &$s4139);
org$frostlang$frostc$Type* $tmp4140 = *(&local4);
frost$core$String* $tmp4141 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4140);
frost$core$String* $tmp4142 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4138, $tmp4141);
frost$core$String* $tmp4143 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4142, &$s4144);
org$frostlang$frostc$Type* $tmp4145 = *(&local4);
frost$core$Int64 $tmp4146 = org$frostlang$frostc$CCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp4145);
frost$core$String* $tmp4147 = frost$core$Int64$get_asString$R$frost$core$String($tmp4146);
frost$core$String* $tmp4148 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4147, &$s4149);
frost$core$String* $tmp4150 = *(&local2);
frost$core$String* $tmp4151 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4148, $tmp4150);
frost$core$String* $tmp4152 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4151, &$s4153);
frost$core$String* $tmp4154 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4143, $tmp4152);
$fn4156 $tmp4155 = ($fn4156) ((frost$io$OutputStream*) $tmp4130)->$class->vtable[19];
frost$core$Error* $tmp4157 = $tmp4155(((frost$io$OutputStream*) $tmp4130), $tmp4154);
if ($tmp4157 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4157));
*(&local0) = $tmp4157;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4132));
org$frostlang$frostc$Type* $tmp4158 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4158));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4159 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4159));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4160 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4160));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4161 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4161));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4132));
// line 1184
frost$collections$HashMap** $tmp4162 = &param0->refs;
frost$collections$HashMap* $tmp4163 = *$tmp4162;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4164;
$tmp4164 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4164->value = param1;
frost$core$String* $tmp4165 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4163, ((frost$collections$Key*) $tmp4164), ((frost$core$Object*) $tmp4165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4164)));
org$frostlang$frostc$Type* $tmp4166 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4166));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4167 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4167));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4168 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4168));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4169 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4169));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block2;
block1:;
// line 1187
frost$core$Int64 $tmp4170 = (frost$core$Int64) {1187};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4171, $tmp4170);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4172 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4172));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeCreateStruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$ClassDecl* param2, org$frostlang$frostc$FixedArray* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
// line 1192
*(&local0) = ((frost$core$Error*) NULL);
// line 1193
frost$core$Weak** $tmp4173 = &param0->compiler;
frost$core$Weak* $tmp4174 = *$tmp4173;
frost$core$Object* $tmp4175 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4174);
frost$core$Bit $tmp4176 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4175), param2);
bool $tmp4177 = $tmp4176.value;
if ($tmp4177) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp4178 = (frost$core$Int64) {1193};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4179, $tmp4178);
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q($tmp4175);
// line 1194
frost$core$String* $tmp4180 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4180));
frost$core$String* $tmp4181 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4181));
*(&local1) = $tmp4180;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4180));
// line 1195
org$frostlang$frostc$Type** $tmp4182 = &param2->type;
org$frostlang$frostc$Type* $tmp4183 = *$tmp4182;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4183));
org$frostlang$frostc$Type* $tmp4184 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4184));
*(&local2) = $tmp4183;
// line 1196
frost$io$IndentedOutputStream** $tmp4185 = &param0->out;
frost$io$IndentedOutputStream* $tmp4186 = *$tmp4185;
org$frostlang$frostc$Type* $tmp4187 = *(&local2);
frost$core$String* $tmp4188 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4187);
frost$core$String* $tmp4189 = frost$core$String$get_asString$R$frost$core$String($tmp4188);
frost$core$String* $tmp4190 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4189, &$s4191);
frost$core$String* $tmp4192 = *(&local1);
frost$core$String* $tmp4193 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4190, $tmp4192);
frost$core$String* $tmp4194 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4193, &$s4195);
org$frostlang$frostc$Type* $tmp4196 = *(&local2);
frost$core$String* $tmp4197 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4196);
frost$core$String* $tmp4198 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4194, $tmp4197);
frost$core$String* $tmp4199 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4198, &$s4200);
$fn4202 $tmp4201 = ($fn4202) ((frost$io$OutputStream*) $tmp4186)->$class->vtable[17];
frost$core$Error* $tmp4203 = $tmp4201(((frost$io$OutputStream*) $tmp4186), $tmp4199);
if ($tmp4203 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4203));
*(&local0) = $tmp4203;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4188));
org$frostlang$frostc$Type* $tmp4204 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4204));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4205 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4205));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4188));
// line 1197
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4206));
frost$core$String* $tmp4207 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4207));
*(&local3) = &$s4208;
// line 1198
ITable* $tmp4209 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp4209->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp4209 = $tmp4209->next;
}
$fn4211 $tmp4210 = $tmp4209->methods[0];
frost$collections$Iterator* $tmp4212 = $tmp4210(((frost$collections$Iterable*) param3));
goto block7;
block7:;
ITable* $tmp4213 = $tmp4212->$class->itable;
while ($tmp4213->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4213 = $tmp4213->next;
}
$fn4215 $tmp4214 = $tmp4213->methods[0];
frost$core$Bit $tmp4216 = $tmp4214($tmp4212);
bool $tmp4217 = $tmp4216.value;
if ($tmp4217) goto block9; else goto block8;
block8:;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
ITable* $tmp4218 = $tmp4212->$class->itable;
while ($tmp4218->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4218 = $tmp4218->next;
}
$fn4220 $tmp4219 = $tmp4218->methods[1];
frost$core$Object* $tmp4221 = $tmp4219($tmp4212);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) $tmp4221)));
org$frostlang$frostc$IR$Value* $tmp4222 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4222));
*(&local4) = ((org$frostlang$frostc$IR$Value*) $tmp4221);
// line 1199
frost$io$IndentedOutputStream** $tmp4223 = &param0->out;
frost$io$IndentedOutputStream* $tmp4224 = *$tmp4223;
frost$core$String* $tmp4225 = *(&local3);
frost$core$String* $tmp4226 = frost$core$String$get_asString$R$frost$core$String($tmp4225);
frost$core$String* $tmp4227 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4226, &$s4228);
org$frostlang$frostc$IR$Value* $tmp4229 = *(&local4);
frost$core$String* $tmp4230 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, $tmp4229);
frost$core$String* $tmp4231 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4227, $tmp4230);
frost$core$String* $tmp4232 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4231, &$s4233);
$fn4235 $tmp4234 = ($fn4235) ((frost$io$OutputStream*) $tmp4224)->$class->vtable[17];
frost$core$Error* $tmp4236 = $tmp4234(((frost$io$OutputStream*) $tmp4224), $tmp4232);
if ($tmp4236 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4236));
*(&local0) = $tmp4236;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4226));
frost$core$Frost$unref$frost$core$Object$Q($tmp4221);
org$frostlang$frostc$IR$Value* $tmp4237 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4237));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4212));
frost$core$String* $tmp4238 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4238));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4239 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4239));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4240 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4240));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4226));
// line 1200
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4241));
frost$core$String* $tmp4242 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4242));
*(&local3) = &$s4243;
frost$core$Frost$unref$frost$core$Object$Q($tmp4221);
org$frostlang$frostc$IR$Value* $tmp4244 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4244));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block7;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4212));
// line 1202
frost$io$IndentedOutputStream** $tmp4245 = &param0->out;
frost$io$IndentedOutputStream* $tmp4246 = *$tmp4245;
$fn4248 $tmp4247 = ($fn4248) ((frost$io$OutputStream*) $tmp4246)->$class->vtable[19];
frost$core$Error* $tmp4249 = $tmp4247(((frost$io$OutputStream*) $tmp4246), &$s4250);
if ($tmp4249 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4249));
*(&local0) = $tmp4249;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4249));
frost$core$String* $tmp4251 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4251));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4252 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4252));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4253 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4253));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4249));
// line 1203
frost$collections$HashMap** $tmp4254 = &param0->refs;
frost$collections$HashMap* $tmp4255 = *$tmp4254;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4256;
$tmp4256 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4256->value = param1;
frost$core$String* $tmp4257 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4255, ((frost$collections$Key*) $tmp4256), ((frost$core$Object*) $tmp4257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4256)));
frost$core$String* $tmp4258 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4258));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4259 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4259));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4260 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4260));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1206
frost$core$Int64 $tmp4261 = (frost$core$Int64) {1206};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4262, $tmp4261);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4263 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4263));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeDynamicCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, frost$collections$ListView* param3) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
org$frostlang$frostc$IR$Value* local5 = NULL;
// line 1211
*(&local0) = ((frost$core$Error*) NULL);
// line 1212
$fn4265 $tmp4264 = ($fn4265) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4266 = $tmp4264(param2);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4266));
org$frostlang$frostc$Type* $tmp4267 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4267));
*(&local1) = $tmp4266;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4266));
// line 1213
org$frostlang$frostc$Type* $tmp4268 = *(&local1);
frost$core$Bit $tmp4269 = org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit($tmp4268);
bool $tmp4270 = $tmp4269.value;
if ($tmp4270) goto block3; else goto block4;
block3:;
// line 1214
org$frostlang$frostc$Type* $tmp4271 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp4272 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp4271);
frost$core$Int64 $tmp4273 = (frost$core$Int64) {1};
frost$core$Object* $tmp4274 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp4272, $tmp4273);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp4274)));
org$frostlang$frostc$Type* $tmp4275 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4275));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp4274);
frost$core$Frost$unref$frost$core$Object$Q($tmp4274);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4272));
goto block4;
block4:;
// line 1216
org$frostlang$frostc$Type* $tmp4276 = *(&local1);
org$frostlang$frostc$Type* $tmp4277 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp4276);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4277));
org$frostlang$frostc$Type* $tmp4278 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4278));
*(&local2) = $tmp4277;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4277));
// line 1217
org$frostlang$frostc$Type* $tmp4279 = *(&local2);
org$frostlang$frostc$Type* $tmp4280 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp4281 = ((frost$core$Equatable*) $tmp4279)->$class->itable;
while ($tmp4281->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4281 = $tmp4281->next;
}
$fn4283 $tmp4282 = $tmp4281->methods[1];
frost$core$Bit $tmp4284 = $tmp4282(((frost$core$Equatable*) $tmp4279), ((frost$core$Equatable*) $tmp4280));
bool $tmp4285 = $tmp4284.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4280));
if ($tmp4285) goto block5; else goto block6;
block5:;
// line 1218
frost$core$String* $tmp4286 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4286));
frost$core$String* $tmp4287 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4287));
*(&local3) = $tmp4286;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4286));
// line 1219
frost$io$IndentedOutputStream** $tmp4288 = &param0->out;
frost$io$IndentedOutputStream* $tmp4289 = *$tmp4288;
org$frostlang$frostc$Type* $tmp4290 = *(&local2);
frost$core$String* $tmp4291 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4290);
frost$core$String* $tmp4292 = frost$core$String$get_asString$R$frost$core$String($tmp4291);
frost$core$String* $tmp4293 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4292, &$s4294);
frost$core$String* $tmp4295 = *(&local3);
frost$core$String* $tmp4296 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4293, $tmp4295);
frost$core$String* $tmp4297 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4296, &$s4298);
$fn4300 $tmp4299 = ($fn4300) ((frost$io$OutputStream*) $tmp4289)->$class->vtable[17];
frost$core$Error* $tmp4301 = $tmp4299(((frost$io$OutputStream*) $tmp4289), $tmp4297);
if ($tmp4301 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4301));
*(&local0) = $tmp4301;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4291));
frost$core$String* $tmp4302 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4302));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4303 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4303));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4304 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4304));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4291));
// line 1220
frost$collections$HashMap** $tmp4305 = &param0->refs;
frost$collections$HashMap* $tmp4306 = *$tmp4305;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4307;
$tmp4307 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4307->value = param1;
frost$core$String* $tmp4308 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4306, ((frost$collections$Key*) $tmp4307), ((frost$core$Object*) $tmp4308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4307)));
frost$core$String* $tmp4309 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4309));
*(&local3) = ((frost$core$String*) NULL);
goto block6;
block6:;
// line 1222
frost$io$IndentedOutputStream** $tmp4310 = &param0->out;
frost$io$IndentedOutputStream* $tmp4311 = *$tmp4310;
frost$core$String* $tmp4312 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4313 = frost$core$String$get_asString$R$frost$core$String($tmp4312);
frost$core$String* $tmp4314 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4313, &$s4315);
$fn4317 $tmp4316 = ($fn4317) ((frost$io$OutputStream*) $tmp4311)->$class->vtable[17];
frost$core$Error* $tmp4318 = $tmp4316(((frost$io$OutputStream*) $tmp4311), $tmp4314);
if ($tmp4318 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4318));
*(&local0) = $tmp4318;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4312));
org$frostlang$frostc$Type* $tmp4319 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4319));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4320 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4320));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4312));
// line 1223
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4321));
frost$core$String* $tmp4322 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4322));
*(&local4) = &$s4323;
// line 1224
ITable* $tmp4324 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp4324->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp4324 = $tmp4324->next;
}
$fn4326 $tmp4325 = $tmp4324->methods[0];
frost$collections$Iterator* $tmp4327 = $tmp4325(((frost$collections$Iterable*) param3));
goto block11;
block11:;
ITable* $tmp4328 = $tmp4327->$class->itable;
while ($tmp4328->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4328 = $tmp4328->next;
}
$fn4330 $tmp4329 = $tmp4328->methods[0];
frost$core$Bit $tmp4331 = $tmp4329($tmp4327);
bool $tmp4332 = $tmp4331.value;
if ($tmp4332) goto block13; else goto block12;
block12:;
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
ITable* $tmp4333 = $tmp4327->$class->itable;
while ($tmp4333->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4333 = $tmp4333->next;
}
$fn4335 $tmp4334 = $tmp4333->methods[1];
frost$core$Object* $tmp4336 = $tmp4334($tmp4327);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) $tmp4336)));
org$frostlang$frostc$IR$Value* $tmp4337 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4337));
*(&local5) = ((org$frostlang$frostc$IR$Value*) $tmp4336);
// line 1225
frost$io$IndentedOutputStream** $tmp4338 = &param0->out;
frost$io$IndentedOutputStream* $tmp4339 = *$tmp4338;
frost$core$String* $tmp4340 = *(&local4);
$fn4342 $tmp4341 = ($fn4342) ((frost$io$OutputStream*) $tmp4339)->$class->vtable[17];
frost$core$Error* $tmp4343 = $tmp4341(((frost$io$OutputStream*) $tmp4339), $tmp4340);
if ($tmp4343 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4343));
*(&local0) = $tmp4343;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4343));
frost$core$Frost$unref$frost$core$Object$Q($tmp4336);
org$frostlang$frostc$IR$Value* $tmp4344 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4344));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4327));
frost$core$String* $tmp4345 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4345));
*(&local4) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4346 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4346));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4347 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4347));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4343));
// line 1226
frost$io$IndentedOutputStream** $tmp4348 = &param0->out;
frost$io$IndentedOutputStream* $tmp4349 = *$tmp4348;
org$frostlang$frostc$IR$Value* $tmp4350 = *(&local5);
frost$core$String* $tmp4351 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, $tmp4350);
$fn4353 $tmp4352 = ($fn4353) ((frost$io$OutputStream*) $tmp4349)->$class->vtable[17];
frost$core$Error* $tmp4354 = $tmp4352(((frost$io$OutputStream*) $tmp4349), $tmp4351);
if ($tmp4354 == NULL) goto block16; else goto block17;
block17:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4354));
*(&local0) = $tmp4354;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4351));
frost$core$Frost$unref$frost$core$Object$Q($tmp4336);
org$frostlang$frostc$IR$Value* $tmp4355 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4355));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4327));
frost$core$String* $tmp4356 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4356));
*(&local4) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4357 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4357));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4358 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4358));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4351));
// line 1227
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4359));
frost$core$String* $tmp4360 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4360));
*(&local4) = &$s4361;
frost$core$Frost$unref$frost$core$Object$Q($tmp4336);
org$frostlang$frostc$IR$Value* $tmp4362 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4362));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block11;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4327));
// line 1229
frost$io$IndentedOutputStream** $tmp4363 = &param0->out;
frost$io$IndentedOutputStream* $tmp4364 = *$tmp4363;
$fn4366 $tmp4365 = ($fn4366) ((frost$io$OutputStream*) $tmp4364)->$class->vtable[19];
frost$core$Error* $tmp4367 = $tmp4365(((frost$io$OutputStream*) $tmp4364), &$s4368);
if ($tmp4367 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4367));
*(&local0) = $tmp4367;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4367));
frost$core$String* $tmp4369 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4369));
*(&local4) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4370 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4370));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4371 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4371));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4367));
frost$core$String* $tmp4372 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4372));
*(&local4) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4373 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4373));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4374 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4374));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block2;
block1:;
// line 1232
frost$core$Int64 $tmp4375 = (frost$core$Int64) {1232};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4376, $tmp4375);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4377 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4377));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeExtractField$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FieldDecl* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1237
*(&local0) = ((frost$core$Error*) NULL);
// line 1238
frost$core$Weak** $tmp4378 = &param0->compiler;
frost$core$Weak* $tmp4379 = *$tmp4378;
frost$core$Object* $tmp4380 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4379);
frost$core$Bit $tmp4381 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4380), param3);
frost$core$Frost$unref$frost$core$Object$Q($tmp4380);
// line 1239
frost$core$String* $tmp4382 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4382));
frost$core$String* $tmp4383 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4383));
*(&local1) = $tmp4382;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4382));
// line 1240
frost$core$String* $tmp4384 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4384));
frost$core$String* $tmp4385 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4385));
*(&local2) = $tmp4384;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4384));
// line 1241
frost$io$IndentedOutputStream** $tmp4386 = &param0->out;
frost$io$IndentedOutputStream* $tmp4387 = *$tmp4386;
org$frostlang$frostc$Type** $tmp4388 = &param3->type;
org$frostlang$frostc$Type* $tmp4389 = *$tmp4388;
frost$core$String* $tmp4390 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4389);
frost$core$String* $tmp4391 = frost$core$String$get_asString$R$frost$core$String($tmp4390);
frost$core$String* $tmp4392 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4391, &$s4393);
frost$core$String* $tmp4394 = *(&local2);
frost$core$String* $tmp4395 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4392, $tmp4394);
frost$core$String* $tmp4396 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4395, &$s4397);
frost$core$String* $tmp4398 = *(&local1);
frost$core$String* $tmp4399 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4396, $tmp4398);
frost$core$String* $tmp4400 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4399, &$s4401);
frost$core$String** $tmp4402 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp4403 = *$tmp4402;
frost$core$String* $tmp4404 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4400, $tmp4403);
frost$core$String* $tmp4405 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4404, &$s4406);
$fn4408 $tmp4407 = ($fn4408) ((frost$io$OutputStream*) $tmp4387)->$class->vtable[19];
frost$core$Error* $tmp4409 = $tmp4407(((frost$io$OutputStream*) $tmp4387), $tmp4405);
if ($tmp4409 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4409));
*(&local0) = $tmp4409;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4399));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4390));
frost$core$String* $tmp4410 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4410));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4411 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4411));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4399));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4390));
// line 1242
frost$collections$HashMap** $tmp4412 = &param0->refs;
frost$collections$HashMap* $tmp4413 = *$tmp4412;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4414;
$tmp4414 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4414->value = param1;
frost$core$String* $tmp4415 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4413, ((frost$collections$Key*) $tmp4414), ((frost$core$Object*) $tmp4415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4414)));
frost$core$String* $tmp4416 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4416));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4417 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4417));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1245
frost$core$Int64 $tmp4418 = (frost$core$Int64) {1245};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4419, $tmp4418);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4420 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4420));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeGetChoiceFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$ChoiceCase* param3, frost$core$Int64 param4) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$FieldDecl* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$Int64 local3;
frost$core$String* local4 = NULL;
frost$core$String* local5 = NULL;
// line 1251
*(&local0) = ((frost$core$Error*) NULL);
// line 1252
frost$core$Weak** $tmp4421 = &param3->owner;
frost$core$Weak* $tmp4422 = *$tmp4421;
frost$core$Object* $tmp4423 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4422);
frost$collections$Array** $tmp4424 = &((org$frostlang$frostc$ClassDecl*) $tmp4423)->fields;
frost$collections$Array* $tmp4425 = *$tmp4424;
frost$core$Int64 $tmp4426 = (frost$core$Int64) {1};
frost$core$Object* $tmp4427 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp4425, $tmp4426);
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp4427)));
org$frostlang$frostc$FieldDecl* $tmp4428 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4428));
*(&local1) = ((org$frostlang$frostc$FieldDecl*) $tmp4427);
frost$core$Frost$unref$frost$core$Object$Q($tmp4427);
frost$core$Frost$unref$frost$core$Object$Q($tmp4423);
// line 1253
org$frostlang$frostc$FieldDecl* $tmp4429 = *(&local1);
frost$core$String** $tmp4430 = &((org$frostlang$frostc$Symbol*) $tmp4429)->name;
frost$core$String* $tmp4431 = *$tmp4430;
frost$core$Bit $tmp4432 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp4431, &$s4433);
bool $tmp4434 = $tmp4432.value;
if ($tmp4434) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp4435 = (frost$core$Int64) {1253};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4436, $tmp4435);
abort(); // unreachable
block3:;
// line 1254
frost$core$String* $tmp4437 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4437));
frost$core$String* $tmp4438 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4438));
*(&local2) = $tmp4437;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4437));
// line 1255
frost$core$Weak** $tmp4439 = &param0->compiler;
frost$core$Weak* $tmp4440 = *$tmp4439;
frost$core$Object* $tmp4441 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4440);
org$frostlang$frostc$FieldDecl* $tmp4442 = *(&local1);
frost$core$Int64 $tmp4443 = org$frostlang$frostc$Compiler$getIndex$org$frostlang$frostc$FieldDecl$R$frost$core$Int64(((org$frostlang$frostc$Compiler*) $tmp4441), $tmp4442);
*(&local3) = $tmp4443;
frost$core$Frost$unref$frost$core$Object$Q($tmp4441);
// line 1256
frost$core$String* $tmp4444 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4444));
frost$core$String* $tmp4445 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4445));
*(&local4) = $tmp4444;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4444));
// line 1257
frost$collections$Array** $tmp4446 = &param3->fields;
frost$collections$Array* $tmp4447 = *$tmp4446;
frost$core$Object* $tmp4448 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp4447, param4);
frost$core$String* $tmp4449 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp4448));
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4449));
frost$core$String* $tmp4450 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4450));
*(&local5) = $tmp4449;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4449));
frost$core$Frost$unref$frost$core$Object$Q($tmp4448);
// line 1258
frost$io$IndentedOutputStream** $tmp4451 = &param0->out;
frost$io$IndentedOutputStream* $tmp4452 = *$tmp4451;
frost$core$String* $tmp4453 = *(&local5);
frost$core$String* $tmp4454 = frost$core$String$get_asString$R$frost$core$String($tmp4453);
frost$core$String* $tmp4455 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4454, &$s4456);
frost$core$String* $tmp4457 = *(&local4);
frost$core$String* $tmp4458 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4455, $tmp4457);
frost$core$String* $tmp4459 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4458, &$s4460);
frost$core$String* $tmp4461 = *(&local5);
frost$core$String* $tmp4462 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4459, $tmp4461);
frost$core$String* $tmp4463 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4462, &$s4464);
frost$core$String* $tmp4465 = *(&local2);
frost$core$String* $tmp4466 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4463, $tmp4465);
frost$core$String* $tmp4467 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4466, &$s4468);
frost$core$Int64 $tmp4469 = org$frostlang$frostc$CCodeGenerator$getChoiceFieldOffset$org$frostlang$frostc$ChoiceCase$frost$core$Int64$R$frost$core$Int64(param0, param3, param4);
frost$core$Int64$wrapper* $tmp4470;
$tmp4470 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp4470->value = $tmp4469;
frost$core$String* $tmp4471 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s4472, ((frost$core$Object*) $tmp4470));
frost$core$String* $tmp4473 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4471, &$s4474);
frost$core$String* $tmp4475 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4467, $tmp4473);
$fn4477 $tmp4476 = ($fn4477) ((frost$io$OutputStream*) $tmp4452)->$class->vtable[19];
frost$core$Error* $tmp4478 = $tmp4476(((frost$io$OutputStream*) $tmp4452), $tmp4475);
if ($tmp4478 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4478));
*(&local0) = $tmp4478;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4473));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4467));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4466));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4458));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4454));
frost$core$String* $tmp4479 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4479));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp4480 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4480));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4481 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4481));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$FieldDecl* $tmp4482 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4482));
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4473));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4467));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4466));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4458));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4454));
// line 1260
frost$collections$HashMap** $tmp4483 = &param0->refs;
frost$collections$HashMap* $tmp4484 = *$tmp4483;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4485;
$tmp4485 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4485->value = param1;
frost$core$String* $tmp4486 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4484, ((frost$collections$Key*) $tmp4485), ((frost$core$Object*) $tmp4486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4485)));
frost$core$String* $tmp4487 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4487));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp4488 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4488));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4489 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4489));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$FieldDecl* $tmp4490 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4490));
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block2;
block1:;
// line 1263
frost$core$Int64 $tmp4491 = (frost$core$Int64) {1263};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4492, $tmp4491);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4493 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4493));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeGetFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FieldDecl* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1268
*(&local0) = ((frost$core$Error*) NULL);
// line 1269
frost$core$String* $tmp4494 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4494));
frost$core$String* $tmp4495 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4495));
*(&local1) = $tmp4494;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4494));
// line 1270
frost$core$String* $tmp4496 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4496));
frost$core$String* $tmp4497 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4497));
*(&local2) = $tmp4496;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4496));
// line 1271
frost$io$IndentedOutputStream** $tmp4498 = &param0->out;
frost$io$IndentedOutputStream* $tmp4499 = *$tmp4498;
org$frostlang$frostc$Type** $tmp4500 = &param3->type;
org$frostlang$frostc$Type* $tmp4501 = *$tmp4500;
frost$core$String* $tmp4502 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4501);
frost$core$String* $tmp4503 = frost$core$String$get_asString$R$frost$core$String($tmp4502);
frost$core$String* $tmp4504 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4503, &$s4505);
frost$core$String* $tmp4506 = *(&local2);
frost$core$String* $tmp4507 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4504, $tmp4506);
frost$core$String* $tmp4508 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4507, &$s4509);
frost$core$String* $tmp4510 = *(&local1);
frost$core$String* $tmp4511 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4508, $tmp4510);
frost$core$String* $tmp4512 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4511, &$s4513);
frost$core$String** $tmp4514 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp4515 = *$tmp4514;
frost$core$String* $tmp4516 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4512, $tmp4515);
frost$core$String* $tmp4517 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4516, &$s4518);
$fn4520 $tmp4519 = ($fn4520) ((frost$io$OutputStream*) $tmp4499)->$class->vtable[19];
frost$core$Error* $tmp4521 = $tmp4519(((frost$io$OutputStream*) $tmp4499), $tmp4517);
if ($tmp4521 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4521));
*(&local0) = $tmp4521;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4521));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4516));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4512));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4507));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4504));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4502));
frost$core$String* $tmp4522 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4522));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4523 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4523));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4521));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4516));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4512));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4507));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4504));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4502));
// line 1272
frost$collections$HashMap** $tmp4524 = &param0->refs;
frost$collections$HashMap* $tmp4525 = *$tmp4524;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4526;
$tmp4526 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4526->value = param1;
frost$core$String* $tmp4527 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4525, ((frost$collections$Key*) $tmp4526), ((frost$core$Object*) $tmp4527));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4526)));
frost$core$String* $tmp4528 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4528));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4529 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4529));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1275
frost$core$Int64 $tmp4530 = (frost$core$Int64) {1275};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4531, $tmp4530);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4532 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4532));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeGetInterfaceMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$ClassDecl* param3, frost$core$Int64 param4, org$frostlang$frostc$Type* param5) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
// line 1281
*(&local0) = ((frost$core$Error*) NULL);
// line 1282
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4533 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, param3);
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4533));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4534 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4534));
*(&local1) = $tmp4533;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4533));
// line 1283
frost$core$String* $tmp4535 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4535));
frost$core$String* $tmp4536 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4536));
*(&local2) = $tmp4535;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4535));
// line 1284
frost$io$IndentedOutputStream** $tmp4537 = &param0->out;
frost$io$IndentedOutputStream* $tmp4538 = *$tmp4537;
frost$core$String* $tmp4539 = *(&local2);
frost$core$String* $tmp4540 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4541, $tmp4539);
frost$core$String* $tmp4542 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4540, &$s4543);
frost$core$String* $tmp4544 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4545 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4542, $tmp4544);
frost$core$String* $tmp4546 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4545, &$s4547);
$fn4549 $tmp4548 = ($fn4549) ((frost$io$OutputStream*) $tmp4538)->$class->vtable[19];
frost$core$Error* $tmp4550 = $tmp4548(((frost$io$OutputStream*) $tmp4538), $tmp4546);
if ($tmp4550 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4550));
*(&local0) = $tmp4550;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4546));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4545));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4544));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4540));
frost$core$String* $tmp4551 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4551));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4552 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4552));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4546));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4545));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4544));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4540));
// line 1285
frost$io$IndentedOutputStream** $tmp4553 = &param0->out;
frost$io$IndentedOutputStream* $tmp4554 = *$tmp4553;
frost$core$String* $tmp4555 = *(&local2);
frost$core$String* $tmp4556 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4557, $tmp4555);
frost$core$String* $tmp4558 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4556, &$s4559);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4560 = *(&local1);
frost$core$String** $tmp4561 = &$tmp4560->name;
frost$core$String* $tmp4562 = *$tmp4561;
frost$core$String* $tmp4563 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4558, $tmp4562);
frost$core$String* $tmp4564 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4563, &$s4565);
$fn4567 $tmp4566 = ($fn4567) ((frost$io$OutputStream*) $tmp4554)->$class->vtable[19];
frost$core$Error* $tmp4568 = $tmp4566(((frost$io$OutputStream*) $tmp4554), $tmp4564);
if ($tmp4568 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4568));
*(&local0) = $tmp4568;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4568));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4563));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4558));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4556));
frost$core$String* $tmp4569 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4569));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4570 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4570));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4568));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4563));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4558));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4556));
// line 1286
frost$io$IndentedOutputStream** $tmp4571 = &param0->out;
frost$io$IndentedOutputStream* $tmp4572 = *$tmp4571;
frost$core$Int64* $tmp4573 = &$tmp4572->level;
frost$core$Int64 $tmp4574 = *$tmp4573;
frost$core$Int64 $tmp4575 = (frost$core$Int64) {1};
int64_t $tmp4576 = $tmp4574.value;
int64_t $tmp4577 = $tmp4575.value;
int64_t $tmp4578 = $tmp4576 + $tmp4577;
frost$core$Int64 $tmp4579 = (frost$core$Int64) {$tmp4578};
frost$core$Int64* $tmp4580 = &$tmp4572->level;
*$tmp4580 = $tmp4579;
// line 1287
frost$io$IndentedOutputStream** $tmp4581 = &param0->out;
frost$io$IndentedOutputStream* $tmp4582 = *$tmp4581;
frost$core$String* $tmp4583 = *(&local2);
frost$core$String* $tmp4584 = frost$core$String$get_asString$R$frost$core$String($tmp4583);
frost$core$String* $tmp4585 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4584, &$s4586);
frost$core$String* $tmp4587 = *(&local2);
frost$core$String* $tmp4588 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4585, $tmp4587);
frost$core$String* $tmp4589 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4588, &$s4590);
$fn4592 $tmp4591 = ($fn4592) ((frost$io$OutputStream*) $tmp4582)->$class->vtable[19];
frost$core$Error* $tmp4593 = $tmp4591(((frost$io$OutputStream*) $tmp4582), $tmp4589);
if ($tmp4593 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4593));
*(&local0) = $tmp4593;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4589));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4588));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4585));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4584));
frost$core$String* $tmp4594 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4594));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4595 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4595));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4589));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4588));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4585));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4584));
// line 1288
frost$io$IndentedOutputStream** $tmp4596 = &param0->out;
frost$io$IndentedOutputStream* $tmp4597 = *$tmp4596;
frost$core$Int64* $tmp4598 = &$tmp4597->level;
frost$core$Int64 $tmp4599 = *$tmp4598;
frost$core$Int64 $tmp4600 = (frost$core$Int64) {1};
int64_t $tmp4601 = $tmp4599.value;
int64_t $tmp4602 = $tmp4600.value;
int64_t $tmp4603 = $tmp4601 - $tmp4602;
frost$core$Int64 $tmp4604 = (frost$core$Int64) {$tmp4603};
frost$core$Int64* $tmp4605 = &$tmp4597->level;
*$tmp4605 = $tmp4604;
// line 1289
frost$io$IndentedOutputStream** $tmp4606 = &param0->out;
frost$io$IndentedOutputStream* $tmp4607 = *$tmp4606;
$fn4609 $tmp4608 = ($fn4609) ((frost$io$OutputStream*) $tmp4607)->$class->vtable[19];
frost$core$Error* $tmp4610 = $tmp4608(((frost$io$OutputStream*) $tmp4607), &$s4611);
if ($tmp4610 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4610));
*(&local0) = $tmp4610;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4610));
frost$core$String* $tmp4612 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4612));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4613 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4613));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4610));
// line 1290
frost$core$String* $tmp4614 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4614));
frost$core$String* $tmp4615 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4615));
*(&local3) = $tmp4614;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4614));
// line 1291
frost$core$String* $tmp4616 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, param5, ((org$frostlang$frostc$Type*) NULL));
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4616));
frost$core$String* $tmp4617 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4617));
*(&local4) = $tmp4616;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4616));
// line 1292
frost$io$IndentedOutputStream** $tmp4618 = &param0->out;
frost$io$IndentedOutputStream* $tmp4619 = *$tmp4618;
frost$core$String* $tmp4620 = *(&local4);
frost$core$String* $tmp4621 = frost$core$String$get_asString$R$frost$core$String($tmp4620);
frost$core$String* $tmp4622 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4621, &$s4623);
frost$core$String* $tmp4624 = *(&local3);
frost$core$String* $tmp4625 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4622, $tmp4624);
frost$core$String* $tmp4626 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4625, &$s4627);
frost$core$String* $tmp4628 = *(&local2);
frost$core$String* $tmp4629 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4626, $tmp4628);
frost$core$String* $tmp4630 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4629, &$s4631);
frost$core$Int64$wrapper* $tmp4632;
$tmp4632 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp4632->value = param4;
frost$core$String* $tmp4633 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp4630, ((frost$core$Object*) $tmp4632));
frost$core$String* $tmp4634 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4633, &$s4635);
$fn4637 $tmp4636 = ($fn4637) ((frost$io$OutputStream*) $tmp4619)->$class->vtable[19];
frost$core$Error* $tmp4638 = $tmp4636(((frost$io$OutputStream*) $tmp4619), $tmp4634);
if ($tmp4638 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4638));
*(&local0) = $tmp4638;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4638));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4634));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4632));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4622));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4621));
frost$core$String* $tmp4639 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4639));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4640 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4640));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4641 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4641));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4642 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4642));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4638));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4634));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4632));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4622));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4621));
// line 1293
frost$collections$HashMap** $tmp4643 = &param0->refs;
frost$collections$HashMap* $tmp4644 = *$tmp4643;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4645;
$tmp4645 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4645->value = param1;
frost$core$String* $tmp4646 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4644, ((frost$collections$Key*) $tmp4645), ((frost$core$Object*) $tmp4646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4645)));
frost$core$String* $tmp4647 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4647));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4648 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4648));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4649 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4649));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4650 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4650));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block2;
block1:;
// line 1296
frost$core$Int64 $tmp4651 = (frost$core$Int64) {1296};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4652, $tmp4651);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4653 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4653));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeGetVirtualMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, frost$core$Int64 param3, org$frostlang$frostc$Type* param4) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1301
*(&local0) = ((frost$core$Error*) NULL);
// line 1302
frost$core$String* $tmp4654 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4654));
frost$core$String* $tmp4655 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4655));
*(&local1) = $tmp4654;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4654));
// line 1303
frost$core$String* $tmp4656 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, param4, ((org$frostlang$frostc$Type*) NULL));
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4656));
frost$core$String* $tmp4657 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4657));
*(&local2) = $tmp4656;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4656));
// line 1304
frost$io$IndentedOutputStream** $tmp4658 = &param0->out;
frost$io$IndentedOutputStream* $tmp4659 = *$tmp4658;
frost$core$String* $tmp4660 = *(&local2);
frost$core$String* $tmp4661 = frost$core$String$get_asString$R$frost$core$String($tmp4660);
frost$core$String* $tmp4662 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4661, &$s4663);
frost$core$String* $tmp4664 = *(&local1);
frost$core$String* $tmp4665 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4662, $tmp4664);
frost$core$String* $tmp4666 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4665, &$s4667);
frost$core$String* $tmp4668 = *(&local2);
frost$core$String* $tmp4669 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4666, $tmp4668);
frost$core$String* $tmp4670 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4669, &$s4671);
frost$core$String* $tmp4672 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4673 = frost$core$String$get_asString$R$frost$core$String($tmp4672);
frost$core$String* $tmp4674 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4673, &$s4675);
frost$core$Int64$wrapper* $tmp4676;
$tmp4676 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp4676->value = param3;
frost$core$String* $tmp4677 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp4674, ((frost$core$Object*) $tmp4676));
frost$core$String* $tmp4678 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4677, &$s4679);
frost$core$String* $tmp4680 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4670, $tmp4678);
$fn4682 $tmp4681 = ($fn4682) ((frost$io$OutputStream*) $tmp4659)->$class->vtable[19];
frost$core$Error* $tmp4683 = $tmp4681(((frost$io$OutputStream*) $tmp4659), $tmp4680);
if ($tmp4683 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4683));
*(&local0) = $tmp4683;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4680));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4676));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4673));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4672));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4669));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4666));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4665));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4661));
frost$core$String* $tmp4684 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4684));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4685 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4685));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4680));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4676));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4673));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4672));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4669));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4666));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4665));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4661));
// line 1306
frost$collections$HashMap** $tmp4686 = &param0->refs;
frost$collections$HashMap* $tmp4687 = *$tmp4686;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4688;
$tmp4688 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4688->value = param1;
frost$core$String* $tmp4689 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4687, ((frost$collections$Key*) $tmp4688), ((frost$core$Object*) $tmp4689));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4688)));
frost$core$String* $tmp4690 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4690));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4691 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4691));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1309
frost$core$Int64 $tmp4692 = (frost$core$Int64) {1309};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4693, $tmp4692);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4694 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4694));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeLoad$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 1314
*(&local0) = ((frost$core$Error*) NULL);
// line 1315
frost$core$String* $tmp4695 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4695));
frost$core$String* $tmp4696 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4696));
*(&local1) = $tmp4695;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4695));
// line 1316
frost$io$IndentedOutputStream** $tmp4697 = &param0->out;
frost$io$IndentedOutputStream* $tmp4698 = *$tmp4697;
$fn4700 $tmp4699 = ($fn4700) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4701 = $tmp4699(param2);
frost$core$String* $tmp4702 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4701);
frost$core$String* $tmp4703 = frost$core$String$get_asString$R$frost$core$String($tmp4702);
frost$core$String* $tmp4704 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4703, &$s4705);
frost$core$String* $tmp4706 = *(&local1);
frost$core$String* $tmp4707 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4704, $tmp4706);
frost$core$String* $tmp4708 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4707, &$s4709);
frost$core$String* $tmp4710 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4711 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4708, $tmp4710);
frost$core$String* $tmp4712 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4711, &$s4713);
$fn4715 $tmp4714 = ($fn4715) ((frost$io$OutputStream*) $tmp4698)->$class->vtable[19];
frost$core$Error* $tmp4716 = $tmp4714(((frost$io$OutputStream*) $tmp4698), $tmp4712);
if ($tmp4716 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4716));
*(&local0) = $tmp4716;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4708));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4704));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4702));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4701));
frost$core$String* $tmp4717 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4717));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4708));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4704));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4702));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4701));
// line 1317
frost$collections$HashMap** $tmp4718 = &param0->refs;
frost$collections$HashMap* $tmp4719 = *$tmp4718;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4720;
$tmp4720 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4720->value = param1;
frost$core$String* $tmp4721 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4719, ((frost$collections$Key*) $tmp4720), ((frost$core$Object*) $tmp4721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4720)));
frost$core$String* $tmp4722 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4722));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1320
frost$core$Int64 $tmp4723 = (frost$core$Int64) {1320};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4724, $tmp4723);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4725 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4725));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeNegate$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 1325
*(&local0) = ((frost$core$Error*) NULL);
// line 1326
frost$core$String* $tmp4726 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4726));
frost$core$String* $tmp4727 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4727));
*(&local1) = $tmp4726;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4726));
// line 1327
frost$io$IndentedOutputStream** $tmp4728 = &param0->out;
frost$io$IndentedOutputStream* $tmp4729 = *$tmp4728;
$fn4731 $tmp4730 = ($fn4731) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4732 = $tmp4730(param2);
frost$core$String* $tmp4733 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4732);
frost$core$String* $tmp4734 = frost$core$String$get_asString$R$frost$core$String($tmp4733);
frost$core$String* $tmp4735 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4734, &$s4736);
frost$core$String* $tmp4737 = *(&local1);
frost$core$String* $tmp4738 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4735, $tmp4737);
frost$core$String* $tmp4739 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4738, &$s4740);
frost$core$String* $tmp4741 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4742 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4739, $tmp4741);
frost$core$String* $tmp4743 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4742, &$s4744);
$fn4746 $tmp4745 = ($fn4746) ((frost$io$OutputStream*) $tmp4729)->$class->vtable[19];
frost$core$Error* $tmp4747 = $tmp4745(((frost$io$OutputStream*) $tmp4729), $tmp4743);
if ($tmp4747 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4747));
*(&local0) = $tmp4747;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4747));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4743));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4742));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4741));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4739));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4738));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4735));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4732));
frost$core$String* $tmp4748 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4748));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4747));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4743));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4742));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4741));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4739));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4738));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4735));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4732));
// line 1328
frost$collections$HashMap** $tmp4749 = &param0->refs;
frost$collections$HashMap* $tmp4750 = *$tmp4749;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4751;
$tmp4751 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4751->value = param1;
frost$core$String* $tmp4752 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4750, ((frost$collections$Key*) $tmp4751), ((frost$core$Object*) $tmp4752));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4751)));
frost$core$String* $tmp4753 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4753));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1331
frost$core$Int64 $tmp4754 = (frost$core$Int64) {1331};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4755, $tmp4754);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4756 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4756));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeNot$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 1336
*(&local0) = ((frost$core$Error*) NULL);
// line 1337
frost$core$String* $tmp4757 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4757));
frost$core$String* $tmp4758 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4758));
*(&local1) = $tmp4757;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4757));
// line 1338
frost$io$IndentedOutputStream** $tmp4759 = &param0->out;
frost$io$IndentedOutputStream* $tmp4760 = *$tmp4759;
$fn4762 $tmp4761 = ($fn4762) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4763 = $tmp4761(param2);
frost$core$String* $tmp4764 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4763);
frost$core$String* $tmp4765 = frost$core$String$get_asString$R$frost$core$String($tmp4764);
frost$core$String* $tmp4766 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4765, &$s4767);
frost$core$String* $tmp4768 = *(&local1);
frost$core$String* $tmp4769 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4766, $tmp4768);
frost$core$String* $tmp4770 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4769, &$s4771);
frost$core$String* $tmp4772 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4773 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4770, $tmp4772);
frost$core$String* $tmp4774 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4773, &$s4775);
$fn4777 $tmp4776 = ($fn4777) ((frost$io$OutputStream*) $tmp4760)->$class->vtable[19];
frost$core$Error* $tmp4778 = $tmp4776(((frost$io$OutputStream*) $tmp4760), $tmp4774);
if ($tmp4778 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4778));
*(&local0) = $tmp4778;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4774));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4773));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4769));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4763));
frost$core$String* $tmp4779 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4779));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4774));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4773));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4769));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4763));
// line 1339
frost$collections$HashMap** $tmp4780 = &param0->refs;
frost$collections$HashMap* $tmp4781 = *$tmp4780;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4782;
$tmp4782 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4782->value = param1;
frost$core$String* $tmp4783 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4781, ((frost$collections$Key*) $tmp4782), ((frost$core$Object*) $tmp4783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4782)));
frost$core$String* $tmp4784 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4784));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1342
frost$core$Int64 $tmp4785 = (frost$core$Int64) {1342};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4786, $tmp4785);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4787 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4787));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerAlloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$Type* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Int64 local2;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
// line 1347
*(&local0) = ((frost$core$Error*) NULL);
// line 1348
frost$core$String* $tmp4788 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4788));
frost$core$String* $tmp4789 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4789));
*(&local1) = $tmp4788;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4788));
// line 1349
frost$core$Int64 $tmp4790 = org$frostlang$frostc$CCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param3);
*(&local2) = $tmp4790;
// line 1350
frost$core$String* $tmp4791 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4791));
frost$core$String* $tmp4792 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4792));
*(&local3) = $tmp4791;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4791));
// line 1351
frost$core$String* $tmp4793 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4793));
frost$core$String* $tmp4794 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4794));
*(&local4) = $tmp4793;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4793));
// line 1352
frost$io$IndentedOutputStream** $tmp4795 = &param0->out;
frost$io$IndentedOutputStream* $tmp4796 = *$tmp4795;
frost$core$String* $tmp4797 = *(&local3);
frost$core$String* $tmp4798 = frost$core$String$get_asString$R$frost$core$String($tmp4797);
frost$core$String* $tmp4799 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4798, &$s4800);
frost$core$String* $tmp4801 = *(&local4);
frost$core$String* $tmp4802 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4799, $tmp4801);
frost$core$String* $tmp4803 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4802, &$s4804);
frost$core$String* $tmp4805 = *(&local3);
frost$core$String* $tmp4806 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4803, $tmp4805);
frost$core$String* $tmp4807 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4806, &$s4808);
frost$core$String* $tmp4809 = *(&local1);
frost$core$String* $tmp4810 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4807, $tmp4809);
frost$core$String* $tmp4811 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4810, &$s4812);
frost$core$Int64 $tmp4813 = *(&local2);
frost$core$String* $tmp4814 = frost$core$Int64$get_asString$R$frost$core$String($tmp4813);
frost$core$String* $tmp4815 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4814, &$s4816);
frost$core$String* $tmp4817 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4811, $tmp4815);
$fn4819 $tmp4818 = ($fn4819) ((frost$io$OutputStream*) $tmp4796)->$class->vtable[19];
frost$core$Error* $tmp4820 = $tmp4818(((frost$io$OutputStream*) $tmp4796), $tmp4817);
if ($tmp4820 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4820));
*(&local0) = $tmp4820;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4817));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4810));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4798));
frost$core$String* $tmp4821 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4821));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4822 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4822));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4823 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4823));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4817));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4810));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4798));
// line 1354
frost$collections$HashMap** $tmp4824 = &param0->refs;
frost$collections$HashMap* $tmp4825 = *$tmp4824;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4826;
$tmp4826 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4826->value = param1;
frost$core$String* $tmp4827 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4825, ((frost$collections$Key*) $tmp4826), ((frost$core$Object*) $tmp4827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4826)));
frost$core$String* $tmp4828 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4828));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4829 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4829));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4830 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4830));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1357
frost$core$Int64 $tmp4831 = (frost$core$Int64) {1357};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4832, $tmp4831);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4833 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4833));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerDestroy$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 1362
*(&local0) = ((frost$core$Error*) NULL);
// line 1363
frost$core$String* $tmp4834 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4834));
frost$core$String* $tmp4835 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4835));
*(&local1) = $tmp4834;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4834));
// line 1364
frost$io$IndentedOutputStream** $tmp4836 = &param0->out;
frost$io$IndentedOutputStream* $tmp4837 = *$tmp4836;
frost$core$String* $tmp4838 = *(&local1);
frost$core$String* $tmp4839 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4840, $tmp4838);
frost$core$String* $tmp4841 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4839, &$s4842);
$fn4844 $tmp4843 = ($fn4844) ((frost$io$OutputStream*) $tmp4837)->$class->vtable[19];
frost$core$Error* $tmp4845 = $tmp4843(((frost$io$OutputStream*) $tmp4837), $tmp4841);
if ($tmp4845 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4845));
*(&local0) = $tmp4845;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4845));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4841));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4839));
frost$core$String* $tmp4846 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4846));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4845));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4841));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4839));
frost$core$String* $tmp4847 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4847));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1367
frost$core$Int64 $tmp4848 = (frost$core$Int64) {1367};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4849, $tmp4848);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4850 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4850));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerGetIndex$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$IR$Value* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// line 1372
*(&local0) = ((frost$core$Error*) NULL);
// line 1373
frost$core$String* $tmp4851 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4851));
frost$core$String* $tmp4852 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4852));
*(&local1) = $tmp4851;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4851));
// line 1374
frost$core$String* $tmp4853 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param3);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4853));
frost$core$String* $tmp4854 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4854));
*(&local2) = $tmp4853;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4853));
// line 1375
frost$core$String* $tmp4855 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4855));
frost$core$String* $tmp4856 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4856));
*(&local3) = $tmp4855;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4855));
// line 1376
frost$io$IndentedOutputStream** $tmp4857 = &param0->out;
frost$io$IndentedOutputStream* $tmp4858 = *$tmp4857;
$fn4860 $tmp4859 = ($fn4860) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4861 = $tmp4859(param2);
org$frostlang$frostc$FixedArray* $tmp4862 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp4861);
frost$core$Int64 $tmp4863 = (frost$core$Int64) {1};
frost$core$Object* $tmp4864 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp4862, $tmp4863);
frost$core$String* $tmp4865 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp4864));
frost$core$String* $tmp4866 = frost$core$String$get_asString$R$frost$core$String($tmp4865);
frost$core$String* $tmp4867 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4866, &$s4868);
frost$core$String* $tmp4869 = *(&local3);
frost$core$String* $tmp4870 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4867, $tmp4869);
frost$core$String* $tmp4871 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4870, &$s4872);
frost$core$String* $tmp4873 = *(&local1);
frost$core$String* $tmp4874 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4871, $tmp4873);
frost$core$String* $tmp4875 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4874, &$s4876);
frost$core$String* $tmp4877 = *(&local2);
frost$core$String* $tmp4878 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4875, $tmp4877);
frost$core$String* $tmp4879 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4878, &$s4880);
$fn4882 $tmp4881 = ($fn4882) ((frost$io$OutputStream*) $tmp4858)->$class->vtable[19];
frost$core$Error* $tmp4883 = $tmp4881(((frost$io$OutputStream*) $tmp4858), $tmp4879);
if ($tmp4883 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4883));
*(&local0) = $tmp4883;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4879));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4875));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4871));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4870));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4866));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4865));
frost$core$Frost$unref$frost$core$Object$Q($tmp4864);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4861));
frost$core$String* $tmp4884 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4884));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4885 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4885));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4886 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4886));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4879));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4875));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4871));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4870));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4866));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4865));
frost$core$Frost$unref$frost$core$Object$Q($tmp4864);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4861));
// line 1377
frost$collections$HashMap** $tmp4887 = &param0->refs;
frost$collections$HashMap* $tmp4888 = *$tmp4887;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4889;
$tmp4889 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4889->value = param1;
frost$core$String* $tmp4890 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4888, ((frost$collections$Key*) $tmp4889), ((frost$core$Object*) $tmp4890));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4889)));
frost$core$String* $tmp4891 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4891));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4892 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4892));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4893 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4893));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1380
frost$core$Int64 $tmp4894 = (frost$core$Int64) {1380};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4895, $tmp4894);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4896 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4896));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerOffset$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$IR$Value* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// line 1385
*(&local0) = ((frost$core$Error*) NULL);
// line 1386
frost$core$String* $tmp4897 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4897));
frost$core$String* $tmp4898 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4898));
*(&local1) = $tmp4897;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4897));
// line 1387
frost$core$String* $tmp4899 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param3);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4899));
frost$core$String* $tmp4900 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4900));
*(&local2) = $tmp4899;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4899));
// line 1388
frost$core$String* $tmp4901 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4901));
frost$core$String* $tmp4902 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4902));
*(&local3) = $tmp4901;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4901));
// line 1389
frost$io$IndentedOutputStream** $tmp4903 = &param0->out;
frost$io$IndentedOutputStream* $tmp4904 = *$tmp4903;
$fn4906 $tmp4905 = ($fn4906) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4907 = $tmp4905(param2);
frost$core$String* $tmp4908 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4907);
frost$core$String* $tmp4909 = frost$core$String$get_asString$R$frost$core$String($tmp4908);
frost$core$String* $tmp4910 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4909, &$s4911);
frost$core$String* $tmp4912 = *(&local3);
frost$core$String* $tmp4913 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4910, $tmp4912);
frost$core$String* $tmp4914 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4913, &$s4915);
frost$core$String* $tmp4916 = *(&local1);
frost$core$String* $tmp4917 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4914, $tmp4916);
frost$core$String* $tmp4918 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4917, &$s4919);
frost$core$String* $tmp4920 = *(&local2);
frost$core$String* $tmp4921 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4918, $tmp4920);
frost$core$String* $tmp4922 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4921, &$s4923);
$fn4925 $tmp4924 = ($fn4925) ((frost$io$OutputStream*) $tmp4904)->$class->vtable[19];
frost$core$Error* $tmp4926 = $tmp4924(((frost$io$OutputStream*) $tmp4904), $tmp4922);
if ($tmp4926 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4926));
*(&local0) = $tmp4926;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4918));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4913));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4909));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4908));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4907));
frost$core$String* $tmp4927 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4927));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4928 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4928));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4929 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4929));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4918));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4913));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4909));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4908));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4907));
// line 1390
frost$collections$HashMap** $tmp4930 = &param0->refs;
frost$collections$HashMap* $tmp4931 = *$tmp4930;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4932;
$tmp4932 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4932->value = param1;
frost$core$String* $tmp4933 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4931, ((frost$collections$Key*) $tmp4932), ((frost$core$Object*) $tmp4933));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4932)));
frost$core$String* $tmp4934 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4934));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4935 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4935));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4936 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4936));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1393
frost$core$Int64 $tmp4937 = (frost$core$Int64) {1393};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4938, $tmp4937);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4939 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4939));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerRealloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$IR$Value* param4) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$Int64 local4;
frost$core$String* local5 = NULL;
// line 1399
*(&local0) = ((frost$core$Error*) NULL);
// line 1400
frost$core$String* $tmp4940 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4940));
frost$core$String* $tmp4941 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4941));
*(&local1) = $tmp4940;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4940));
// line 1401
frost$core$String* $tmp4942 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param3);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4942));
frost$core$String* $tmp4943 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4943));
*(&local2) = $tmp4942;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4942));
// line 1402
frost$core$String* $tmp4944 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param4);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4944));
frost$core$String* $tmp4945 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4945));
*(&local3) = $tmp4944;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4944));
// line 1403
$fn4947 $tmp4946 = ($fn4947) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4948 = $tmp4946(param2);
org$frostlang$frostc$FixedArray* $tmp4949 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp4948);
frost$core$Int64 $tmp4950 = (frost$core$Int64) {1};
frost$core$Object* $tmp4951 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp4949, $tmp4950);
frost$core$Int64 $tmp4952 = org$frostlang$frostc$CCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64(param0, ((org$frostlang$frostc$Type*) $tmp4951));
*(&local4) = $tmp4952;
frost$core$Frost$unref$frost$core$Object$Q($tmp4951);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4949));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4948));
// line 1404
frost$core$Int64 $tmp4953 = *(&local4);
frost$core$Int64 $tmp4954 = (frost$core$Int64) {0};
int64_t $tmp4955 = $tmp4953.value;
int64_t $tmp4956 = $tmp4954.value;
bool $tmp4957 = $tmp4955 > $tmp4956;
frost$core$Bit $tmp4958 = (frost$core$Bit) {$tmp4957};
bool $tmp4959 = $tmp4958.value;
if ($tmp4959) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp4960 = (frost$core$Int64) {1404};
$fn4962 $tmp4961 = ($fn4962) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4963 = $tmp4961(param2);
frost$core$String* $tmp4964 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s4965, ((frost$core$Object*) $tmp4963));
frost$core$String* $tmp4966 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4964, &$s4967);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4968, $tmp4960, $tmp4966);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4966));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4964));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4963));
abort(); // unreachable
block3:;
// line 1405
frost$core$String* $tmp4969 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4969));
frost$core$String* $tmp4970 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4970));
*(&local5) = $tmp4969;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4969));
// line 1406
frost$io$IndentedOutputStream** $tmp4971 = &param0->out;
frost$io$IndentedOutputStream* $tmp4972 = *$tmp4971;
$fn4974 $tmp4973 = ($fn4974) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4975 = $tmp4973(param2);
frost$core$String* $tmp4976 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4975);
frost$core$String* $tmp4977 = frost$core$String$get_asString$R$frost$core$String($tmp4976);
frost$core$String* $tmp4978 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4977, &$s4979);
frost$core$String* $tmp4980 = *(&local5);
frost$core$String* $tmp4981 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4978, $tmp4980);
frost$core$String* $tmp4982 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4981, &$s4983);
$fn4985 $tmp4984 = ($fn4985) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4986 = $tmp4984(param2);
frost$core$String* $tmp4987 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4986);
frost$core$String* $tmp4988 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4982, $tmp4987);
frost$core$String* $tmp4989 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4988, &$s4990);
frost$core$String* $tmp4991 = *(&local1);
frost$core$String* $tmp4992 = frost$core$String$get_asString$R$frost$core$String($tmp4991);
frost$core$String* $tmp4993 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4992, &$s4994);
frost$core$String* $tmp4995 = *(&local2);
frost$core$String* $tmp4996 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4993, $tmp4995);
frost$core$String* $tmp4997 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4996, &$s4998);
frost$core$Int64 $tmp4999 = *(&local4);
frost$core$Int64$wrapper* $tmp5000;
$tmp5000 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp5000->value = $tmp4999;
frost$core$String* $tmp5001 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp4997, ((frost$core$Object*) $tmp5000));
frost$core$String* $tmp5002 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5001, &$s5003);
frost$core$String* $tmp5004 = *(&local3);
frost$core$String* $tmp5005 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5002, $tmp5004);
frost$core$String* $tmp5006 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5005, &$s5007);
frost$core$Int64 $tmp5008 = *(&local4);
frost$core$Int64$wrapper* $tmp5009;
$tmp5009 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp5009->value = $tmp5008;
frost$core$String* $tmp5010 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp5006, ((frost$core$Object*) $tmp5009));
frost$core$String* $tmp5011 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5010, &$s5012);
frost$core$String* $tmp5013 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4989, $tmp5011);
$fn5015 $tmp5014 = ($fn5015) ((frost$io$OutputStream*) $tmp4972)->$class->vtable[19];
frost$core$Error* $tmp5016 = $tmp5014(((frost$io$OutputStream*) $tmp4972), $tmp5013);
if ($tmp5016 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5016));
*(&local0) = $tmp5016;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5013));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5011));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5010));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5006));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5005));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5002));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5000));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4997));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4996));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4992));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4988));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4986));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4981));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4978));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4976));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4975));
frost$core$String* $tmp5017 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5017));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp5018 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5018));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5019 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5019));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5020 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5020));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5013));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5011));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5010));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5006));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5005));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5002));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5000));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4997));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4996));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4992));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4988));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4986));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4981));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4978));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4976));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4975));
// line 1408
frost$collections$HashMap** $tmp5021 = &param0->refs;
frost$collections$HashMap* $tmp5022 = *$tmp5021;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5023;
$tmp5023 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5023->value = param1;
frost$core$String* $tmp5024 = *(&local5);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5022, ((frost$collections$Key*) $tmp5023), ((frost$core$Object*) $tmp5024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5023)));
frost$core$String* $tmp5025 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5025));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp5026 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5026));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5027 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5027));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5028 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5028));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1411
frost$core$Int64 $tmp5029 = (frost$core$Int64) {1411};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5030, $tmp5029);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5031 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5031));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerSetIndex$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$IR$Value* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// line 1416
*(&local0) = ((frost$core$Error*) NULL);
// line 1417
frost$core$String* $tmp5032 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5032));
frost$core$String* $tmp5033 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5033));
*(&local1) = $tmp5032;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5032));
// line 1418
frost$core$String* $tmp5034 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param3);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5034));
frost$core$String* $tmp5035 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5035));
*(&local2) = $tmp5034;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5034));
// line 1419
frost$core$String* $tmp5036 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5036));
frost$core$String* $tmp5037 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5037));
*(&local3) = $tmp5036;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5036));
// line 1420
frost$io$IndentedOutputStream** $tmp5038 = &param0->out;
frost$io$IndentedOutputStream* $tmp5039 = *$tmp5038;
frost$core$String* $tmp5040 = *(&local1);
frost$core$String* $tmp5041 = frost$core$String$get_asString$R$frost$core$String($tmp5040);
frost$core$String* $tmp5042 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5041, &$s5043);
frost$core$String* $tmp5044 = *(&local2);
frost$core$String* $tmp5045 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5042, $tmp5044);
frost$core$String* $tmp5046 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5045, &$s5047);
frost$core$String* $tmp5048 = *(&local3);
frost$core$String* $tmp5049 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5046, $tmp5048);
frost$core$String* $tmp5050 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5049, &$s5051);
$fn5053 $tmp5052 = ($fn5053) ((frost$io$OutputStream*) $tmp5039)->$class->vtable[19];
frost$core$Error* $tmp5054 = $tmp5052(((frost$io$OutputStream*) $tmp5039), $tmp5050);
if ($tmp5054 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5054));
*(&local0) = $tmp5054;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5050));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5046));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5045));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5042));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5041));
frost$core$String* $tmp5055 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5055));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5056 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5056));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5057 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5057));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5050));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5046));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5045));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5042));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5041));
frost$core$String* $tmp5058 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5058));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5059 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5059));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5060 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5060));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1423
frost$core$Int64 $tmp5061 = (frost$core$Int64) {1423};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5062, $tmp5061);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5063 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5063));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeReturn$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1) {

frost$core$Error* local0 = NULL;
// line 1428
*(&local0) = ((frost$core$Error*) NULL);
// line 1429
frost$core$Bit $tmp5064 = frost$core$Bit$init$builtin_bit(param1 != NULL);
bool $tmp5065 = $tmp5064.value;
if ($tmp5065) goto block3; else goto block5;
block3:;
// line 1430
frost$io$IndentedOutputStream** $tmp5066 = &param0->out;
frost$io$IndentedOutputStream* $tmp5067 = *$tmp5066;
frost$core$String* $tmp5068 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
frost$core$String* $tmp5069 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5070, $tmp5068);
frost$core$String* $tmp5071 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5069, &$s5072);
$fn5074 $tmp5073 = ($fn5074) ((frost$io$OutputStream*) $tmp5067)->$class->vtable[19];
frost$core$Error* $tmp5075 = $tmp5073(((frost$io$OutputStream*) $tmp5067), $tmp5071);
if ($tmp5075 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5075));
*(&local0) = $tmp5075;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5075));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5069));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5068));
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5075));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5069));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5068));
goto block4;
block5:;
// line 1
// line 1433
frost$io$IndentedOutputStream** $tmp5076 = &param0->out;
frost$io$IndentedOutputStream* $tmp5077 = *$tmp5076;
$fn5079 $tmp5078 = ($fn5079) ((frost$io$OutputStream*) $tmp5077)->$class->vtable[19];
frost$core$Error* $tmp5080 = $tmp5078(((frost$io$OutputStream*) $tmp5077), &$s5081);
if ($tmp5080 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5080));
*(&local0) = $tmp5080;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5080));
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5080));
goto block4;
block4:;
goto block2;
block1:;
// line 1437
frost$core$Int64 $tmp5082 = (frost$core$Int64) {1437};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5083, $tmp5082);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5084 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5084));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeStaticCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$MethodDecl* param2, frost$collections$ListView* param3) {

frost$core$Error* local0 = NULL;
frost$core$Bit local1;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
org$frostlang$frostc$IR$Value* local5 = NULL;
// line 1442
*(&local0) = ((frost$core$Error*) NULL);
// line 1443
frost$core$Weak** $tmp5085 = &param2->owner;
frost$core$Weak* $tmp5086 = *$tmp5085;
frost$core$Object* $tmp5087 = frost$core$Weak$get$R$frost$core$Weak$T($tmp5086);
frost$core$Bit* $tmp5088 = &((org$frostlang$frostc$ClassDecl*) $tmp5087)->external;
frost$core$Bit $tmp5089 = *$tmp5088;
bool $tmp5090 = $tmp5089.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp5087);
if ($tmp5090) goto block3; else goto block4;
block3:;
// line 1444
org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param2);
goto block4;
block4:;
// line 1446
frost$core$Bit $tmp5091 = org$frostlang$frostc$CCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, param2);
*(&local1) = $tmp5091;
// line 1447
org$frostlang$frostc$Type** $tmp5092 = &param2->returnType;
org$frostlang$frostc$Type* $tmp5093 = *$tmp5092;
frost$core$String* $tmp5094 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5093);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5094));
frost$core$String* $tmp5095 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5095));
*(&local2) = $tmp5094;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5094));
// line 1448
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s5096));
frost$core$String* $tmp5097 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5097));
*(&local3) = &$s5098;
// line 1449
*(&local4) = ((frost$core$String*) NULL);
// line 1450
org$frostlang$frostc$Type** $tmp5099 = &param2->returnType;
org$frostlang$frostc$Type* $tmp5100 = *$tmp5099;
org$frostlang$frostc$Type* $tmp5101 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp5102 = ((frost$core$Equatable*) $tmp5100)->$class->itable;
while ($tmp5102->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5102 = $tmp5102->next;
}
$fn5104 $tmp5103 = $tmp5102->methods[1];
frost$core$Bit $tmp5105 = $tmp5103(((frost$core$Equatable*) $tmp5100), ((frost$core$Equatable*) $tmp5101));
bool $tmp5106 = $tmp5105.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5101));
if ($tmp5106) goto block5; else goto block6;
block5:;
// line 1451
frost$core$String* $tmp5107 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5107));
frost$core$String* $tmp5108 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5108));
*(&local4) = $tmp5107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5107));
// line 1452
frost$core$Bit $tmp5109 = *(&local1);
bool $tmp5110 = $tmp5109.value;
if ($tmp5110) goto block7; else goto block9;
block7:;
// line 1453
frost$io$IndentedOutputStream** $tmp5111 = &param0->out;
frost$io$IndentedOutputStream* $tmp5112 = *$tmp5111;
frost$core$String* $tmp5113 = *(&local2);
frost$core$String* $tmp5114 = frost$core$String$get_asString$R$frost$core$String($tmp5113);
frost$core$String* $tmp5115 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5114, &$s5116);
frost$core$String* $tmp5117 = *(&local4);
frost$core$String* $tmp5118 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5115, $tmp5117);
frost$core$String* $tmp5119 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5118, &$s5120);
$fn5122 $tmp5121 = ($fn5122) ((frost$io$OutputStream*) $tmp5112)->$class->vtable[19];
frost$core$Error* $tmp5123 = $tmp5121(((frost$io$OutputStream*) $tmp5112), $tmp5119);
if ($tmp5123 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5123));
*(&local0) = $tmp5123;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5114));
frost$core$String* $tmp5124 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5124));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5125 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5125));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5126 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5126));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5114));
goto block8;
block9:;
// line 1
// line 1456
frost$io$IndentedOutputStream** $tmp5127 = &param0->out;
frost$io$IndentedOutputStream* $tmp5128 = *$tmp5127;
frost$core$String* $tmp5129 = *(&local2);
frost$core$String* $tmp5130 = frost$core$String$get_asString$R$frost$core$String($tmp5129);
frost$core$String* $tmp5131 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5130, &$s5132);
frost$core$String* $tmp5133 = *(&local4);
frost$core$String* $tmp5134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5131, $tmp5133);
frost$core$String* $tmp5135 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5134, &$s5136);
$fn5138 $tmp5137 = ($fn5138) ((frost$io$OutputStream*) $tmp5128)->$class->vtable[17];
frost$core$Error* $tmp5139 = $tmp5137(((frost$io$OutputStream*) $tmp5128), $tmp5135);
if ($tmp5139 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5139));
*(&local0) = $tmp5139;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5130));
frost$core$String* $tmp5140 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5140));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5141 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5141));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5142 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5142));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5130));
goto block8;
block8:;
// line 1458
frost$collections$HashMap** $tmp5143 = &param0->refs;
frost$collections$HashMap* $tmp5144 = *$tmp5143;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5145;
$tmp5145 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5145->value = param1;
frost$core$String* $tmp5146 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5144, ((frost$collections$Key*) $tmp5145), ((frost$core$Object*) $tmp5146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5145)));
goto block6;
block6:;
// line 1460
frost$io$IndentedOutputStream** $tmp5147 = &param0->out;
frost$io$IndentedOutputStream* $tmp5148 = *$tmp5147;
frost$core$String* $tmp5149 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param2);
frost$core$String* $tmp5150 = frost$core$String$get_asString$R$frost$core$String($tmp5149);
frost$core$String* $tmp5151 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5150, &$s5152);
$fn5154 $tmp5153 = ($fn5154) ((frost$io$OutputStream*) $tmp5148)->$class->vtable[17];
frost$core$Error* $tmp5155 = $tmp5153(((frost$io$OutputStream*) $tmp5148), $tmp5151);
if ($tmp5155 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5155));
*(&local0) = $tmp5155;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5149));
frost$core$String* $tmp5156 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5156));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5157 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5157));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5158 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5158));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5149));
// line 1461
frost$core$Bit $tmp5159 = *(&local1);
bool $tmp5160 = $tmp5159.value;
if ($tmp5160) goto block16; else goto block17;
block16:;
// line 1462
frost$io$IndentedOutputStream** $tmp5161 = &param0->out;
frost$io$IndentedOutputStream* $tmp5162 = *$tmp5161;
frost$core$String* $tmp5163 = *(&local4);
frost$core$String* $tmp5164 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5165, $tmp5163);
frost$core$String* $tmp5166 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5164, &$s5167);
$fn5169 $tmp5168 = ($fn5169) ((frost$io$OutputStream*) $tmp5162)->$class->vtable[17];
frost$core$Error* $tmp5170 = $tmp5168(((frost$io$OutputStream*) $tmp5162), $tmp5166);
if ($tmp5170 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5170));
*(&local0) = $tmp5170;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5164));
frost$core$String* $tmp5171 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5171));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5172 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5172));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5173 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5173));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5164));
// line 1463
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s5174));
frost$core$String* $tmp5175 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5175));
*(&local3) = &$s5176;
goto block17;
block17:;
// line 1465
ITable* $tmp5177 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp5177->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp5177 = $tmp5177->next;
}
$fn5179 $tmp5178 = $tmp5177->methods[0];
frost$collections$Iterator* $tmp5180 = $tmp5178(((frost$collections$Iterable*) param3));
goto block20;
block20:;
ITable* $tmp5181 = $tmp5180->$class->itable;
while ($tmp5181->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp5181 = $tmp5181->next;
}
$fn5183 $tmp5182 = $tmp5181->methods[0];
frost$core$Bit $tmp5184 = $tmp5182($tmp5180);
bool $tmp5185 = $tmp5184.value;
if ($tmp5185) goto block22; else goto block21;
block21:;
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
ITable* $tmp5186 = $tmp5180->$class->itable;
while ($tmp5186->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp5186 = $tmp5186->next;
}
$fn5188 $tmp5187 = $tmp5186->methods[1];
frost$core$Object* $tmp5189 = $tmp5187($tmp5180);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) $tmp5189)));
org$frostlang$frostc$IR$Value* $tmp5190 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5190));
*(&local5) = ((org$frostlang$frostc$IR$Value*) $tmp5189);
// line 1466
frost$io$IndentedOutputStream** $tmp5191 = &param0->out;
frost$io$IndentedOutputStream* $tmp5192 = *$tmp5191;
frost$core$String* $tmp5193 = *(&local3);
$fn5195 $tmp5194 = ($fn5195) ((frost$io$OutputStream*) $tmp5192)->$class->vtable[17];
frost$core$Error* $tmp5196 = $tmp5194(((frost$io$OutputStream*) $tmp5192), $tmp5193);
if ($tmp5196 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5196));
*(&local0) = $tmp5196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5196));
frost$core$Frost$unref$frost$core$Object$Q($tmp5189);
org$frostlang$frostc$IR$Value* $tmp5197 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5197));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5180));
frost$core$String* $tmp5198 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5198));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5199 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5199));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5200 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5200));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5196));
// line 1467
frost$io$IndentedOutputStream** $tmp5201 = &param0->out;
frost$io$IndentedOutputStream* $tmp5202 = *$tmp5201;
org$frostlang$frostc$IR$Value* $tmp5203 = *(&local5);
frost$core$String* $tmp5204 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, $tmp5203);
$fn5206 $tmp5205 = ($fn5206) ((frost$io$OutputStream*) $tmp5202)->$class->vtable[17];
frost$core$Error* $tmp5207 = $tmp5205(((frost$io$OutputStream*) $tmp5202), $tmp5204);
if ($tmp5207 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5207));
*(&local0) = $tmp5207;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5204));
frost$core$Frost$unref$frost$core$Object$Q($tmp5189);
org$frostlang$frostc$IR$Value* $tmp5208 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5208));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5180));
frost$core$String* $tmp5209 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5209));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5210 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5210));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5211 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5211));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5204));
// line 1468
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s5212));
frost$core$String* $tmp5213 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5213));
*(&local3) = &$s5214;
frost$core$Frost$unref$frost$core$Object$Q($tmp5189);
org$frostlang$frostc$IR$Value* $tmp5215 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5215));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block20;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5180));
// line 1470
frost$io$IndentedOutputStream** $tmp5216 = &param0->out;
frost$io$IndentedOutputStream* $tmp5217 = *$tmp5216;
$fn5219 $tmp5218 = ($fn5219) ((frost$io$OutputStream*) $tmp5217)->$class->vtable[19];
frost$core$Error* $tmp5220 = $tmp5218(((frost$io$OutputStream*) $tmp5217), &$s5221);
if ($tmp5220 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5220));
*(&local0) = $tmp5220;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5220));
frost$core$String* $tmp5222 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5222));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5223 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5223));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5224 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5224));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5220));
frost$core$String* $tmp5225 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5225));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5226 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5226));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5227 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5227));
*(&local2) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1473
frost$core$Int64 $tmp5228 = (frost$core$Int64) {1473};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5229, $tmp5228);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5230 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5230));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeStore$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Error* local0 = NULL;
// line 1478
*(&local0) = ((frost$core$Error*) NULL);
// line 1479
frost$io$IndentedOutputStream** $tmp5231 = &param0->out;
frost$io$IndentedOutputStream* $tmp5232 = *$tmp5231;
frost$core$String* $tmp5233 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp5234 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5235, $tmp5233);
frost$core$String* $tmp5236 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5234, &$s5237);
frost$core$String* $tmp5238 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
frost$core$String* $tmp5239 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5236, $tmp5238);
frost$core$String* $tmp5240 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5239, &$s5241);
$fn5243 $tmp5242 = ($fn5243) ((frost$io$OutputStream*) $tmp5232)->$class->vtable[19];
frost$core$Error* $tmp5244 = $tmp5242(((frost$io$OutputStream*) $tmp5232), $tmp5240);
if ($tmp5244 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5244));
*(&local0) = $tmp5244;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5233));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5233));
goto block2;
block1:;
// line 1482
frost$core$Int64 $tmp5245 = (frost$core$Int64) {1482};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5246, $tmp5245);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5247 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5247));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeStatement$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Statement(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Statement* param2) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$Position local1;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$expression$Binary$Operator local3;
org$frostlang$frostc$IR$Value* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$Position local6;
org$frostlang$frostc$IR$Block$ID local7;
org$frostlang$frostc$Position local8;
org$frostlang$frostc$IR$Value* local9 = NULL;
org$frostlang$frostc$Type* local10 = NULL;
frost$core$String* local11 = NULL;
org$frostlang$frostc$Position local12;
org$frostlang$frostc$IR$Value* local13 = NULL;
org$frostlang$frostc$IR$Block$ID local14;
org$frostlang$frostc$IR$Block$ID local15;
org$frostlang$frostc$Position local16;
org$frostlang$frostc$ClassDecl* local17 = NULL;
org$frostlang$frostc$Position local18;
org$frostlang$frostc$ClassDecl* local19 = NULL;
org$frostlang$frostc$FixedArray* local20 = NULL;
org$frostlang$frostc$Position local21;
org$frostlang$frostc$IR$Value* local22 = NULL;
org$frostlang$frostc$FixedArray* local23 = NULL;
org$frostlang$frostc$Position local24;
org$frostlang$frostc$IR$Value* local25 = NULL;
org$frostlang$frostc$FieldDecl* local26 = NULL;
org$frostlang$frostc$Position local27;
org$frostlang$frostc$IR$Value* local28 = NULL;
org$frostlang$frostc$ChoiceCase* local29 = NULL;
frost$core$Int64 local30;
org$frostlang$frostc$Position local31;
org$frostlang$frostc$IR$Value* local32 = NULL;
org$frostlang$frostc$FieldDecl* local33 = NULL;
org$frostlang$frostc$Position local34;
org$frostlang$frostc$IR$Value* local35 = NULL;
org$frostlang$frostc$ClassDecl* local36 = NULL;
frost$core$Int64 local37;
org$frostlang$frostc$Type* local38 = NULL;
org$frostlang$frostc$Position local39;
org$frostlang$frostc$IR$Value* local40 = NULL;
frost$core$Int64 local41;
org$frostlang$frostc$Type* local42 = NULL;
org$frostlang$frostc$Position local43;
org$frostlang$frostc$IR$Value* local44 = NULL;
org$frostlang$frostc$Position local45;
org$frostlang$frostc$IR$Value* local46 = NULL;
org$frostlang$frostc$Position local47;
org$frostlang$frostc$IR$Value* local48 = NULL;
org$frostlang$frostc$Position local49;
org$frostlang$frostc$IR$Value* local50 = NULL;
org$frostlang$frostc$Type* local51 = NULL;
org$frostlang$frostc$Position local52;
org$frostlang$frostc$IR$Value* local53 = NULL;
org$frostlang$frostc$Position local54;
org$frostlang$frostc$IR$Value* local55 = NULL;
org$frostlang$frostc$IR$Value* local56 = NULL;
org$frostlang$frostc$Position local57;
org$frostlang$frostc$IR$Value* local58 = NULL;
org$frostlang$frostc$IR$Value* local59 = NULL;
org$frostlang$frostc$Position local60;
org$frostlang$frostc$IR$Value* local61 = NULL;
org$frostlang$frostc$IR$Value* local62 = NULL;
org$frostlang$frostc$IR$Value* local63 = NULL;
org$frostlang$frostc$Position local64;
org$frostlang$frostc$IR$Value* local65 = NULL;
org$frostlang$frostc$IR$Value* local66 = NULL;
org$frostlang$frostc$IR$Value* local67 = NULL;
org$frostlang$frostc$Position local68;
org$frostlang$frostc$IR$Value* local69 = NULL;
org$frostlang$frostc$Position local70;
org$frostlang$frostc$MethodDecl* local71 = NULL;
org$frostlang$frostc$FixedArray* local72 = NULL;
org$frostlang$frostc$Position local73;
org$frostlang$frostc$IR$Value* local74 = NULL;
org$frostlang$frostc$IR$Value* local75 = NULL;
org$frostlang$frostc$Position local76;
// line 1487
*(&local0) = ((frost$core$Error*) NULL);
// line 1488
frost$core$Int64* $tmp5248 = &param2->$rawValue;
frost$core$Int64 $tmp5249 = *$tmp5248;
frost$core$Int64 $tmp5250 = (frost$core$Int64) {0};
frost$core$Bit $tmp5251 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5250);
bool $tmp5252 = $tmp5251.value;
if ($tmp5252) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp5253 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5254 = *$tmp5253;
*(&local1) = $tmp5254;
org$frostlang$frostc$IR$Value** $tmp5255 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5256 = *$tmp5255;
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5256));
org$frostlang$frostc$IR$Value* $tmp5257 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5257));
*(&local2) = $tmp5256;
org$frostlang$frostc$expression$Binary$Operator* $tmp5258 = (org$frostlang$frostc$expression$Binary$Operator*) (param2->$data + 24);
org$frostlang$frostc$expression$Binary$Operator $tmp5259 = *$tmp5258;
*(&local3) = $tmp5259;
org$frostlang$frostc$IR$Value** $tmp5260 = (org$frostlang$frostc$IR$Value**) (param2->$data + 32);
org$frostlang$frostc$IR$Value* $tmp5261 = *$tmp5260;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5261));
org$frostlang$frostc$IR$Value* $tmp5262 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5262));
*(&local4) = $tmp5261;
org$frostlang$frostc$Type** $tmp5263 = (org$frostlang$frostc$Type**) (param2->$data + 40);
org$frostlang$frostc$Type* $tmp5264 = *$tmp5263;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5264));
org$frostlang$frostc$Type* $tmp5265 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5265));
*(&local5) = $tmp5264;
// line 1490
org$frostlang$frostc$IR$Value* $tmp5266 = *(&local2);
org$frostlang$frostc$expression$Binary$Operator $tmp5267 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp5268 = *(&local4);
org$frostlang$frostc$Type* $tmp5269 = *(&local5);
org$frostlang$frostc$CCodeGenerator$writeBinary$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(param0, param1, $tmp5266, $tmp5267, $tmp5268, $tmp5269);
org$frostlang$frostc$Type* $tmp5270 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5270));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp5271 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5271));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5272 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5272));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block5:;
frost$core$Int64 $tmp5273 = (frost$core$Int64) {1};
frost$core$Bit $tmp5274 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5273);
bool $tmp5275 = $tmp5274.value;
if ($tmp5275) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp5276 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5277 = *$tmp5276;
*(&local6) = $tmp5277;
org$frostlang$frostc$IR$Block$ID* $tmp5278 = (org$frostlang$frostc$IR$Block$ID*) (param2->$data + 16);
org$frostlang$frostc$IR$Block$ID $tmp5279 = *$tmp5278;
*(&local7) = $tmp5279;
// line 1493
org$frostlang$frostc$IR$Block$ID $tmp5280 = *(&local7);
org$frostlang$frostc$CCodeGenerator$writeBranch$org$frostlang$frostc$IR$Block$ID(param0, $tmp5280);
goto block3;
block7:;
frost$core$Int64 $tmp5281 = (frost$core$Int64) {2};
frost$core$Bit $tmp5282 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5281);
bool $tmp5283 = $tmp5282.value;
if ($tmp5283) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp5284 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5285 = *$tmp5284;
*(&local8) = $tmp5285;
org$frostlang$frostc$IR$Value** $tmp5286 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5287 = *$tmp5286;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5287));
org$frostlang$frostc$IR$Value* $tmp5288 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5288));
*(&local9) = $tmp5287;
org$frostlang$frostc$Type** $tmp5289 = (org$frostlang$frostc$Type**) (param2->$data + 24);
org$frostlang$frostc$Type* $tmp5290 = *$tmp5289;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5290));
org$frostlang$frostc$Type* $tmp5291 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5291));
*(&local10) = $tmp5290;
frost$core$Bit* $tmp5292 = (frost$core$Bit*) (param2->$data + 32);
frost$core$Bit $tmp5293 = *$tmp5292;
// line 1496
org$frostlang$frostc$IR$Value* $tmp5294 = *(&local9);
org$frostlang$frostc$Type* $tmp5295 = *(&local10);
org$frostlang$frostc$CCodeGenerator$writeCast$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(param0, param1, $tmp5294, $tmp5295);
org$frostlang$frostc$Type* $tmp5296 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5296));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp5297 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5297));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block9:;
frost$core$Int64 $tmp5298 = (frost$core$Int64) {3};
frost$core$Bit $tmp5299 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5298);
bool $tmp5300 = $tmp5299.value;
if ($tmp5300) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp5301 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5302 = *$tmp5301;
frost$core$String** $tmp5303 = (frost$core$String**) (param2->$data + 16);
frost$core$String* $tmp5304 = *$tmp5303;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5304));
frost$core$String* $tmp5305 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5305));
*(&local11) = $tmp5304;
// line 1499
frost$io$IndentedOutputStream** $tmp5306 = &param0->out;
frost$io$IndentedOutputStream* $tmp5307 = *$tmp5306;
frost$core$String* $tmp5308 = *(&local11);
frost$core$String* $tmp5309 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5310, $tmp5308);
frost$core$String* $tmp5311 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5309, &$s5312);
$fn5314 $tmp5313 = ($fn5314) ((frost$io$OutputStream*) $tmp5307)->$class->vtable[19];
frost$core$Error* $tmp5315 = $tmp5313(((frost$io$OutputStream*) $tmp5307), $tmp5311);
if ($tmp5315 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5315));
*(&local0) = $tmp5315;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5309));
frost$core$String* $tmp5316 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5316));
*(&local11) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5309));
frost$core$String* $tmp5317 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5317));
*(&local11) = ((frost$core$String*) NULL);
goto block3;
block11:;
frost$core$Int64 $tmp5318 = (frost$core$Int64) {5};
frost$core$Bit $tmp5319 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5318);
bool $tmp5320 = $tmp5319.value;
if ($tmp5320) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp5321 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5322 = *$tmp5321;
*(&local12) = $tmp5322;
org$frostlang$frostc$IR$Value** $tmp5323 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5324 = *$tmp5323;
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5324));
org$frostlang$frostc$IR$Value* $tmp5325 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5325));
*(&local13) = $tmp5324;
org$frostlang$frostc$IR$Block$ID* $tmp5326 = (org$frostlang$frostc$IR$Block$ID*) (param2->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp5327 = *$tmp5326;
*(&local14) = $tmp5327;
org$frostlang$frostc$IR$Block$ID* $tmp5328 = (org$frostlang$frostc$IR$Block$ID*) (param2->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp5329 = *$tmp5328;
*(&local15) = $tmp5329;
// line 1502
org$frostlang$frostc$IR$Value* $tmp5330 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp5331 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp5332 = *(&local15);
org$frostlang$frostc$CCodeGenerator$writeConditionalBranch$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(param0, $tmp5330, $tmp5331, $tmp5332);
org$frostlang$frostc$IR$Value* $tmp5333 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5333));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block15:;
frost$core$Int64 $tmp5334 = (frost$core$Int64) {6};
frost$core$Bit $tmp5335 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5334);
bool $tmp5336 = $tmp5335.value;
if ($tmp5336) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp5337 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5338 = *$tmp5337;
*(&local16) = $tmp5338;
org$frostlang$frostc$ClassDecl** $tmp5339 = (org$frostlang$frostc$ClassDecl**) (param2->$data + 16);
org$frostlang$frostc$ClassDecl* $tmp5340 = *$tmp5339;
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5340));
org$frostlang$frostc$ClassDecl* $tmp5341 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5341));
*(&local17) = $tmp5340;
// line 1505
org$frostlang$frostc$ClassDecl* $tmp5342 = *(&local17);
org$frostlang$frostc$CCodeGenerator$writeConstruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl(param0, param1, $tmp5342);
org$frostlang$frostc$ClassDecl* $tmp5343 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5343));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block3;
block17:;
frost$core$Int64 $tmp5344 = (frost$core$Int64) {7};
frost$core$Bit $tmp5345 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5344);
bool $tmp5346 = $tmp5345.value;
if ($tmp5346) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp5347 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5348 = *$tmp5347;
*(&local18) = $tmp5348;
org$frostlang$frostc$ClassDecl** $tmp5349 = (org$frostlang$frostc$ClassDecl**) (param2->$data + 16);
org$frostlang$frostc$ClassDecl* $tmp5350 = *$tmp5349;
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5350));
org$frostlang$frostc$ClassDecl* $tmp5351 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5351));
*(&local19) = $tmp5350;
org$frostlang$frostc$FixedArray** $tmp5352 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp5353 = *$tmp5352;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5353));
org$frostlang$frostc$FixedArray* $tmp5354 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5354));
*(&local20) = $tmp5353;
// line 1508
org$frostlang$frostc$ClassDecl* $tmp5355 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp5356 = *(&local20);
org$frostlang$frostc$CCodeGenerator$writeCreateStruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(param0, param1, $tmp5355, $tmp5356);
org$frostlang$frostc$FixedArray* $tmp5357 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5357));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ClassDecl* $tmp5358 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5358));
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block3;
block19:;
frost$core$Int64 $tmp5359 = (frost$core$Int64) {8};
frost$core$Bit $tmp5360 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5359);
bool $tmp5361 = $tmp5360.value;
if ($tmp5361) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp5362 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5363 = *$tmp5362;
*(&local21) = $tmp5363;
org$frostlang$frostc$IR$Value** $tmp5364 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5365 = *$tmp5364;
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5365));
org$frostlang$frostc$IR$Value* $tmp5366 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5366));
*(&local22) = $tmp5365;
org$frostlang$frostc$FixedArray** $tmp5367 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp5368 = *$tmp5367;
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5368));
org$frostlang$frostc$FixedArray* $tmp5369 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5369));
*(&local23) = $tmp5368;
// line 1511
org$frostlang$frostc$IR$Value* $tmp5370 = *(&local22);
org$frostlang$frostc$FixedArray* $tmp5371 = *(&local23);
org$frostlang$frostc$CCodeGenerator$writeDynamicCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT(param0, param1, $tmp5370, ((frost$collections$ListView*) $tmp5371));
org$frostlang$frostc$FixedArray* $tmp5372 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5372));
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp5373 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5373));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block21:;
frost$core$Int64 $tmp5374 = (frost$core$Int64) {9};
frost$core$Bit $tmp5375 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5374);
bool $tmp5376 = $tmp5375.value;
if ($tmp5376) goto block22; else goto block23;
block22:;
goto block3;
block23:;
frost$core$Int64 $tmp5377 = (frost$core$Int64) {10};
frost$core$Bit $tmp5378 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5377);
bool $tmp5379 = $tmp5378.value;
if ($tmp5379) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp5380 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5381 = *$tmp5380;
*(&local24) = $tmp5381;
org$frostlang$frostc$IR$Value** $tmp5382 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5383 = *$tmp5382;
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5383));
org$frostlang$frostc$IR$Value* $tmp5384 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5384));
*(&local25) = $tmp5383;
org$frostlang$frostc$FieldDecl** $tmp5385 = (org$frostlang$frostc$FieldDecl**) (param2->$data + 24);
org$frostlang$frostc$FieldDecl* $tmp5386 = *$tmp5385;
*(&local26) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5386));
org$frostlang$frostc$FieldDecl* $tmp5387 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5387));
*(&local26) = $tmp5386;
// line 1516
org$frostlang$frostc$IR$Value* $tmp5388 = *(&local25);
org$frostlang$frostc$FieldDecl* $tmp5389 = *(&local26);
org$frostlang$frostc$CCodeGenerator$writeExtractField$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(param0, param1, $tmp5388, $tmp5389);
org$frostlang$frostc$FieldDecl* $tmp5390 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5390));
*(&local26) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp5391 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5391));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block25:;
frost$core$Int64 $tmp5392 = (frost$core$Int64) {4};
frost$core$Bit $tmp5393 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5392);
bool $tmp5394 = $tmp5393.value;
if ($tmp5394) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp5395 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5396 = *$tmp5395;
*(&local27) = $tmp5396;
org$frostlang$frostc$IR$Value** $tmp5397 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5398 = *$tmp5397;
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5398));
org$frostlang$frostc$IR$Value* $tmp5399 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5399));
*(&local28) = $tmp5398;
org$frostlang$frostc$ChoiceCase** $tmp5400 = (org$frostlang$frostc$ChoiceCase**) (param2->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp5401 = *$tmp5400;
*(&local29) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5401));
org$frostlang$frostc$ChoiceCase* $tmp5402 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5402));
*(&local29) = $tmp5401;
frost$core$Int64* $tmp5403 = (frost$core$Int64*) (param2->$data + 32);
frost$core$Int64 $tmp5404 = *$tmp5403;
*(&local30) = $tmp5404;
// line 1519
org$frostlang$frostc$IR$Value* $tmp5405 = *(&local28);
org$frostlang$frostc$ChoiceCase* $tmp5406 = *(&local29);
frost$core$Int64 $tmp5407 = *(&local30);
org$frostlang$frostc$CCodeGenerator$writeGetChoiceFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64(param0, param1, $tmp5405, $tmp5406, $tmp5407);
org$frostlang$frostc$ChoiceCase* $tmp5408 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5408));
*(&local29) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$IR$Value* $tmp5409 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5409));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block27:;
frost$core$Int64 $tmp5410 = (frost$core$Int64) {11};
frost$core$Bit $tmp5411 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5410);
bool $tmp5412 = $tmp5411.value;
if ($tmp5412) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp5413 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5414 = *$tmp5413;
*(&local31) = $tmp5414;
org$frostlang$frostc$IR$Value** $tmp5415 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5416 = *$tmp5415;
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5416));
org$frostlang$frostc$IR$Value* $tmp5417 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5417));
*(&local32) = $tmp5416;
org$frostlang$frostc$FieldDecl** $tmp5418 = (org$frostlang$frostc$FieldDecl**) (param2->$data + 24);
org$frostlang$frostc$FieldDecl* $tmp5419 = *$tmp5418;
*(&local33) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5419));
org$frostlang$frostc$FieldDecl* $tmp5420 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5420));
*(&local33) = $tmp5419;
// line 1522
org$frostlang$frostc$IR$Value* $tmp5421 = *(&local32);
org$frostlang$frostc$FieldDecl* $tmp5422 = *(&local33);
org$frostlang$frostc$CCodeGenerator$writeGetFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(param0, param1, $tmp5421, $tmp5422);
org$frostlang$frostc$FieldDecl* $tmp5423 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5423));
*(&local33) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp5424 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5424));
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block29:;
frost$core$Int64 $tmp5425 = (frost$core$Int64) {13};
frost$core$Bit $tmp5426 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5425);
bool $tmp5427 = $tmp5426.value;
if ($tmp5427) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp5428 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5429 = *$tmp5428;
*(&local34) = $tmp5429;
org$frostlang$frostc$IR$Value** $tmp5430 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5431 = *$tmp5430;
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5431));
org$frostlang$frostc$IR$Value* $tmp5432 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5432));
*(&local35) = $tmp5431;
org$frostlang$frostc$ClassDecl** $tmp5433 = (org$frostlang$frostc$ClassDecl**) (param2->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp5434 = *$tmp5433;
*(&local36) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5434));
org$frostlang$frostc$ClassDecl* $tmp5435 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5435));
*(&local36) = $tmp5434;
frost$core$Int64* $tmp5436 = (frost$core$Int64*) (param2->$data + 32);
frost$core$Int64 $tmp5437 = *$tmp5436;
*(&local37) = $tmp5437;
org$frostlang$frostc$Type** $tmp5438 = (org$frostlang$frostc$Type**) (param2->$data + 40);
org$frostlang$frostc$Type* $tmp5439 = *$tmp5438;
*(&local38) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5439));
org$frostlang$frostc$Type* $tmp5440 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5440));
*(&local38) = $tmp5439;
// line 1525
org$frostlang$frostc$IR$Value* $tmp5441 = *(&local35);
org$frostlang$frostc$ClassDecl* $tmp5442 = *(&local36);
frost$core$Int64 $tmp5443 = *(&local37);
org$frostlang$frostc$Type* $tmp5444 = *(&local38);
org$frostlang$frostc$CCodeGenerator$writeGetInterfaceMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int64$org$frostlang$frostc$Type(param0, param1, $tmp5441, $tmp5442, $tmp5443, $tmp5444);
org$frostlang$frostc$Type* $tmp5445 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5445));
*(&local38) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ClassDecl* $tmp5446 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5446));
*(&local36) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp5447 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5447));
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block31:;
frost$core$Int64 $tmp5448 = (frost$core$Int64) {12};
frost$core$Bit $tmp5449 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5448);
bool $tmp5450 = $tmp5449.value;
if ($tmp5450) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp5451 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5452 = *$tmp5451;
*(&local39) = $tmp5452;
org$frostlang$frostc$IR$Value** $tmp5453 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5454 = *$tmp5453;
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5454));
org$frostlang$frostc$IR$Value* $tmp5455 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5455));
*(&local40) = $tmp5454;
frost$core$Int64* $tmp5456 = (frost$core$Int64*) (param2->$data + 24);
frost$core$Int64 $tmp5457 = *$tmp5456;
*(&local41) = $tmp5457;
org$frostlang$frostc$Type** $tmp5458 = (org$frostlang$frostc$Type**) (param2->$data + 32);
org$frostlang$frostc$Type* $tmp5459 = *$tmp5458;
*(&local42) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5459));
org$frostlang$frostc$Type* $tmp5460 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5460));
*(&local42) = $tmp5459;
// line 1528
org$frostlang$frostc$IR$Value* $tmp5461 = *(&local40);
frost$core$Int64 $tmp5462 = *(&local41);
org$frostlang$frostc$Type* $tmp5463 = *(&local42);
org$frostlang$frostc$CCodeGenerator$writeGetVirtualMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$core$Int64$org$frostlang$frostc$Type(param0, param1, $tmp5461, $tmp5462, $tmp5463);
org$frostlang$frostc$Type* $tmp5464 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5464));
*(&local42) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp5465 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5465));
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block33:;
frost$core$Int64 $tmp5466 = (frost$core$Int64) {14};
frost$core$Bit $tmp5467 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5466);
bool $tmp5468 = $tmp5467.value;
if ($tmp5468) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Position* $tmp5469 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5470 = *$tmp5469;
*(&local43) = $tmp5470;
org$frostlang$frostc$IR$Value** $tmp5471 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5472 = *$tmp5471;
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5472));
org$frostlang$frostc$IR$Value* $tmp5473 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5473));
*(&local44) = $tmp5472;
// line 1531
org$frostlang$frostc$IR$Value* $tmp5474 = *(&local44);
org$frostlang$frostc$CCodeGenerator$writeLoad$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, $tmp5474);
org$frostlang$frostc$IR$Value* $tmp5475 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5475));
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block35:;
frost$core$Int64 $tmp5476 = (frost$core$Int64) {15};
frost$core$Bit $tmp5477 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5476);
bool $tmp5478 = $tmp5477.value;
if ($tmp5478) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Position* $tmp5479 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5480 = *$tmp5479;
*(&local45) = $tmp5480;
org$frostlang$frostc$IR$Value** $tmp5481 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5482 = *$tmp5481;
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5482));
org$frostlang$frostc$IR$Value* $tmp5483 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5483));
*(&local46) = $tmp5482;
// line 1534
org$frostlang$frostc$IR$Value* $tmp5484 = *(&local46);
org$frostlang$frostc$CCodeGenerator$writeNegate$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, $tmp5484);
org$frostlang$frostc$IR$Value* $tmp5485 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5485));
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block37:;
frost$core$Int64 $tmp5486 = (frost$core$Int64) {16};
frost$core$Bit $tmp5487 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5486);
bool $tmp5488 = $tmp5487.value;
if ($tmp5488) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp5489 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5490 = *$tmp5489;
*(&local47) = $tmp5490;
org$frostlang$frostc$IR$Value** $tmp5491 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5492 = *$tmp5491;
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5492));
org$frostlang$frostc$IR$Value* $tmp5493 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5493));
*(&local48) = $tmp5492;
// line 1537
org$frostlang$frostc$IR$Value* $tmp5494 = *(&local48);
org$frostlang$frostc$CCodeGenerator$writeNot$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, $tmp5494);
org$frostlang$frostc$IR$Value* $tmp5495 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5495));
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block39:;
frost$core$Int64 $tmp5496 = (frost$core$Int64) {17};
frost$core$Bit $tmp5497 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5496);
bool $tmp5498 = $tmp5497.value;
if ($tmp5498) goto block40; else goto block41;
block40:;
org$frostlang$frostc$Position* $tmp5499 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5500 = *$tmp5499;
*(&local49) = $tmp5500;
org$frostlang$frostc$IR$Value** $tmp5501 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5502 = *$tmp5501;
*(&local50) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5502));
org$frostlang$frostc$IR$Value* $tmp5503 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5503));
*(&local50) = $tmp5502;
org$frostlang$frostc$Type** $tmp5504 = (org$frostlang$frostc$Type**) (param2->$data + 24);
org$frostlang$frostc$Type* $tmp5505 = *$tmp5504;
*(&local51) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5505));
org$frostlang$frostc$Type* $tmp5506 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5506));
*(&local51) = $tmp5505;
// line 1540
org$frostlang$frostc$IR$Value* $tmp5507 = *(&local50);
org$frostlang$frostc$Type* $tmp5508 = *(&local51);
org$frostlang$frostc$CCodeGenerator$writePointerAlloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(param0, param1, $tmp5507, $tmp5508);
org$frostlang$frostc$Type* $tmp5509 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5509));
*(&local51) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp5510 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5510));
*(&local50) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block41:;
frost$core$Int64 $tmp5511 = (frost$core$Int64) {18};
frost$core$Bit $tmp5512 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5511);
bool $tmp5513 = $tmp5512.value;
if ($tmp5513) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp5514 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5515 = *$tmp5514;
*(&local52) = $tmp5515;
org$frostlang$frostc$IR$Value** $tmp5516 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5517 = *$tmp5516;
*(&local53) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5517));
org$frostlang$frostc$IR$Value* $tmp5518 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5518));
*(&local53) = $tmp5517;
// line 1543
org$frostlang$frostc$IR$Value* $tmp5519 = *(&local53);
org$frostlang$frostc$CCodeGenerator$writePointerDestroy$org$frostlang$frostc$IR$Value(param0, $tmp5519);
org$frostlang$frostc$IR$Value* $tmp5520 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5520));
*(&local53) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block43:;
frost$core$Int64 $tmp5521 = (frost$core$Int64) {20};
frost$core$Bit $tmp5522 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5521);
bool $tmp5523 = $tmp5522.value;
if ($tmp5523) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp5524 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5525 = *$tmp5524;
*(&local54) = $tmp5525;
org$frostlang$frostc$IR$Value** $tmp5526 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5527 = *$tmp5526;
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5527));
org$frostlang$frostc$IR$Value* $tmp5528 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5528));
*(&local55) = $tmp5527;
org$frostlang$frostc$IR$Value** $tmp5529 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5530 = *$tmp5529;
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5530));
org$frostlang$frostc$IR$Value* $tmp5531 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5531));
*(&local56) = $tmp5530;
// line 1546
org$frostlang$frostc$IR$Value* $tmp5532 = *(&local55);
org$frostlang$frostc$IR$Value* $tmp5533 = *(&local56);
org$frostlang$frostc$CCodeGenerator$writePointerGetIndex$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, param1, $tmp5532, $tmp5533);
org$frostlang$frostc$IR$Value* $tmp5534 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5534));
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5535 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5535));
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block45:;
frost$core$Int64 $tmp5536 = (frost$core$Int64) {21};
frost$core$Bit $tmp5537 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5536);
bool $tmp5538 = $tmp5537.value;
if ($tmp5538) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp5539 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5540 = *$tmp5539;
*(&local57) = $tmp5540;
org$frostlang$frostc$IR$Value** $tmp5541 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5542 = *$tmp5541;
*(&local58) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5542));
org$frostlang$frostc$IR$Value* $tmp5543 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5543));
*(&local58) = $tmp5542;
org$frostlang$frostc$IR$Value** $tmp5544 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5545 = *$tmp5544;
*(&local59) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5545));
org$frostlang$frostc$IR$Value* $tmp5546 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5546));
*(&local59) = $tmp5545;
// line 1549
org$frostlang$frostc$IR$Value* $tmp5547 = *(&local58);
org$frostlang$frostc$IR$Value* $tmp5548 = *(&local59);
org$frostlang$frostc$CCodeGenerator$writePointerOffset$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, param1, $tmp5547, $tmp5548);
org$frostlang$frostc$IR$Value* $tmp5549 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5549));
*(&local59) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5550 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5550));
*(&local58) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block47:;
frost$core$Int64 $tmp5551 = (frost$core$Int64) {22};
frost$core$Bit $tmp5552 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5551);
bool $tmp5553 = $tmp5552.value;
if ($tmp5553) goto block48; else goto block49;
block48:;
org$frostlang$frostc$Position* $tmp5554 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5555 = *$tmp5554;
*(&local60) = $tmp5555;
org$frostlang$frostc$IR$Value** $tmp5556 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5557 = *$tmp5556;
*(&local61) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5557));
org$frostlang$frostc$IR$Value* $tmp5558 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5558));
*(&local61) = $tmp5557;
org$frostlang$frostc$IR$Value** $tmp5559 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5560 = *$tmp5559;
*(&local62) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5560));
org$frostlang$frostc$IR$Value* $tmp5561 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5561));
*(&local62) = $tmp5560;
org$frostlang$frostc$IR$Value** $tmp5562 = (org$frostlang$frostc$IR$Value**) (param2->$data + 32);
org$frostlang$frostc$IR$Value* $tmp5563 = *$tmp5562;
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5563));
org$frostlang$frostc$IR$Value* $tmp5564 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5564));
*(&local63) = $tmp5563;
// line 1552
org$frostlang$frostc$IR$Value* $tmp5565 = *(&local61);
org$frostlang$frostc$IR$Value* $tmp5566 = *(&local62);
org$frostlang$frostc$IR$Value* $tmp5567 = *(&local63);
org$frostlang$frostc$CCodeGenerator$writePointerRealloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, param1, $tmp5565, $tmp5566, $tmp5567);
org$frostlang$frostc$IR$Value* $tmp5568 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5568));
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5569 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5569));
*(&local62) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5570 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5570));
*(&local61) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block49:;
frost$core$Int64 $tmp5571 = (frost$core$Int64) {24};
frost$core$Bit $tmp5572 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5571);
bool $tmp5573 = $tmp5572.value;
if ($tmp5573) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Position* $tmp5574 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5575 = *$tmp5574;
*(&local64) = $tmp5575;
org$frostlang$frostc$IR$Value** $tmp5576 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5577 = *$tmp5576;
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5577));
org$frostlang$frostc$IR$Value* $tmp5578 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5578));
*(&local65) = $tmp5577;
org$frostlang$frostc$IR$Value** $tmp5579 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5580 = *$tmp5579;
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5580));
org$frostlang$frostc$IR$Value* $tmp5581 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5581));
*(&local66) = $tmp5580;
org$frostlang$frostc$IR$Value** $tmp5582 = (org$frostlang$frostc$IR$Value**) (param2->$data + 32);
org$frostlang$frostc$IR$Value* $tmp5583 = *$tmp5582;
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5583));
org$frostlang$frostc$IR$Value* $tmp5584 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5584));
*(&local67) = $tmp5583;
// line 1555
org$frostlang$frostc$IR$Value* $tmp5585 = *(&local65);
org$frostlang$frostc$IR$Value* $tmp5586 = *(&local66);
org$frostlang$frostc$IR$Value* $tmp5587 = *(&local67);
org$frostlang$frostc$CCodeGenerator$writePointerSetIndex$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, $tmp5585, $tmp5586, $tmp5587);
org$frostlang$frostc$IR$Value* $tmp5588 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5588));
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5589 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5589));
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5590 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5590));
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block51:;
frost$core$Int64 $tmp5591 = (frost$core$Int64) {25};
frost$core$Bit $tmp5592 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5591);
bool $tmp5593 = $tmp5592.value;
if ($tmp5593) goto block52; else goto block53;
block52:;
org$frostlang$frostc$Position* $tmp5594 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5595 = *$tmp5594;
*(&local68) = $tmp5595;
org$frostlang$frostc$IR$Value** $tmp5596 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5597 = *$tmp5596;
*(&local69) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5597));
org$frostlang$frostc$IR$Value* $tmp5598 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5598));
*(&local69) = $tmp5597;
// line 1558
org$frostlang$frostc$IR$Value* $tmp5599 = *(&local69);
org$frostlang$frostc$CCodeGenerator$writeReturn$org$frostlang$frostc$IR$Value$Q(param0, $tmp5599);
org$frostlang$frostc$IR$Value* $tmp5600 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5600));
*(&local69) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block53:;
frost$core$Int64 $tmp5601 = (frost$core$Int64) {26};
frost$core$Bit $tmp5602 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5601);
bool $tmp5603 = $tmp5602.value;
if ($tmp5603) goto block54; else goto block55;
block54:;
org$frostlang$frostc$Position* $tmp5604 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5605 = *$tmp5604;
*(&local70) = $tmp5605;
org$frostlang$frostc$MethodDecl** $tmp5606 = (org$frostlang$frostc$MethodDecl**) (param2->$data + 16);
org$frostlang$frostc$MethodDecl* $tmp5607 = *$tmp5606;
*(&local71) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5607));
org$frostlang$frostc$MethodDecl* $tmp5608 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5608));
*(&local71) = $tmp5607;
org$frostlang$frostc$FixedArray** $tmp5609 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp5610 = *$tmp5609;
*(&local72) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5610));
org$frostlang$frostc$FixedArray* $tmp5611 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5611));
*(&local72) = $tmp5610;
// line 1561
org$frostlang$frostc$MethodDecl* $tmp5612 = *(&local71);
org$frostlang$frostc$FixedArray* $tmp5613 = *(&local72);
org$frostlang$frostc$CCodeGenerator$writeStaticCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT(param0, param1, $tmp5612, ((frost$collections$ListView*) $tmp5613));
org$frostlang$frostc$FixedArray* $tmp5614 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5614));
*(&local72) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp5615 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5615));
*(&local71) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block3;
block55:;
frost$core$Int64 $tmp5616 = (frost$core$Int64) {27};
frost$core$Bit $tmp5617 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5616);
bool $tmp5618 = $tmp5617.value;
if ($tmp5618) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp5619 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5620 = *$tmp5619;
*(&local73) = $tmp5620;
org$frostlang$frostc$IR$Value** $tmp5621 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5622 = *$tmp5621;
*(&local74) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5622));
org$frostlang$frostc$IR$Value* $tmp5623 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5623));
*(&local74) = $tmp5622;
org$frostlang$frostc$IR$Value** $tmp5624 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5625 = *$tmp5624;
*(&local75) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5625));
org$frostlang$frostc$IR$Value* $tmp5626 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5626));
*(&local75) = $tmp5625;
// line 1564
org$frostlang$frostc$IR$Value* $tmp5627 = *(&local74);
org$frostlang$frostc$IR$Value* $tmp5628 = *(&local75);
org$frostlang$frostc$CCodeGenerator$writeStore$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, $tmp5627, $tmp5628);
org$frostlang$frostc$IR$Value* $tmp5629 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5629));
*(&local75) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5630 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5630));
*(&local74) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block57:;
frost$core$Int64 $tmp5631 = (frost$core$Int64) {28};
frost$core$Bit $tmp5632 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5249, $tmp5631);
bool $tmp5633 = $tmp5632.value;
if ($tmp5633) goto block58; else goto block59;
block58:;
org$frostlang$frostc$Position* $tmp5634 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5635 = *$tmp5634;
*(&local76) = $tmp5635;
// line 1567
frost$io$IndentedOutputStream** $tmp5636 = &param0->out;
frost$io$IndentedOutputStream* $tmp5637 = *$tmp5636;
$fn5639 $tmp5638 = ($fn5639) ((frost$io$OutputStream*) $tmp5637)->$class->vtable[19];
frost$core$Error* $tmp5640 = $tmp5638(((frost$io$OutputStream*) $tmp5637), &$s5641);
if ($tmp5640 == NULL) goto block60; else goto block61;
block61:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5640));
*(&local0) = $tmp5640;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5640));
goto block1;
block60:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5640));
goto block3;
block59:;
// line 1570
frost$core$Int64 $tmp5642 = (frost$core$Int64) {1570};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5643, $tmp5642);
abort(); // unreachable
block3:;
goto block2;
block1:;
// line 1575
frost$core$Int64 $tmp5644 = (frost$core$Int64) {1575};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5645, $tmp5644);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5646 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5646));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

// line 1581
frost$core$Weak** $tmp5647 = &param1->owner;
frost$core$Weak* $tmp5648 = *$tmp5647;
frost$core$Object* $tmp5649 = frost$core$Weak$get$R$frost$core$Weak$T($tmp5648);
org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(param0, ((org$frostlang$frostc$ClassDecl*) $tmp5649));
frost$core$Frost$unref$frost$core$Object$Q($tmp5649);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeIR$org$frostlang$frostc$IR(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR* param1) {

frost$core$Error* local0 = NULL;
frost$core$Int64 local1;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$Int64 local4;
org$frostlang$frostc$IR$Block* local5 = NULL;
frost$core$Int64 local6;
// line 1585
*(&local0) = ((frost$core$Error*) NULL);
// line 1586
frost$core$Int64 $tmp5650 = (frost$core$Int64) {0};
frost$collections$Array** $tmp5651 = &param1->locals;
frost$collections$Array* $tmp5652 = *$tmp5651;
ITable* $tmp5653 = ((frost$collections$CollectionView*) $tmp5652)->$class->itable;
while ($tmp5653->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5653 = $tmp5653->next;
}
$fn5655 $tmp5654 = $tmp5653->methods[0];
frost$core$Int64 $tmp5656 = $tmp5654(((frost$collections$CollectionView*) $tmp5652));
frost$core$Bit $tmp5657 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp5658 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp5650, $tmp5656, $tmp5657);
frost$core$Int64 $tmp5659 = $tmp5658.min;
*(&local1) = $tmp5659;
frost$core$Int64 $tmp5660 = $tmp5658.max;
frost$core$Bit $tmp5661 = $tmp5658.inclusive;
bool $tmp5662 = $tmp5661.value;
frost$core$Int64 $tmp5663 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp5664 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp5663);
if ($tmp5662) goto block6; else goto block7;
block6:;
int64_t $tmp5665 = $tmp5659.value;
int64_t $tmp5666 = $tmp5660.value;
bool $tmp5667 = $tmp5665 <= $tmp5666;
frost$core$Bit $tmp5668 = (frost$core$Bit) {$tmp5667};
bool $tmp5669 = $tmp5668.value;
if ($tmp5669) goto block3; else goto block4;
block7:;
int64_t $tmp5670 = $tmp5659.value;
int64_t $tmp5671 = $tmp5660.value;
bool $tmp5672 = $tmp5670 < $tmp5671;
frost$core$Bit $tmp5673 = (frost$core$Bit) {$tmp5672};
bool $tmp5674 = $tmp5673.value;
if ($tmp5674) goto block3; else goto block4;
block3:;
// line 1587
frost$core$Int64 $tmp5675 = *(&local1);
frost$core$Int64$wrapper* $tmp5676;
$tmp5676 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp5676->value = $tmp5675;
frost$core$String* $tmp5677 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s5678, ((frost$core$Object*) $tmp5676));
frost$core$String* $tmp5679 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5677, &$s5680);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5679));
frost$core$String* $tmp5681 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5681));
*(&local2) = $tmp5679;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5676));
// line 1588
frost$collections$Array** $tmp5682 = &param1->locals;
frost$collections$Array* $tmp5683 = *$tmp5682;
frost$core$Int64 $tmp5684 = *(&local1);
frost$core$Object* $tmp5685 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp5683, $tmp5684);
frost$core$String* $tmp5686 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp5685));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5686));
frost$core$String* $tmp5687 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5687));
*(&local3) = $tmp5686;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5686));
frost$core$Frost$unref$frost$core$Object$Q($tmp5685);
// line 1589
frost$io$IndentedOutputStream** $tmp5688 = &param0->out;
frost$io$IndentedOutputStream* $tmp5689 = *$tmp5688;
frost$core$String* $tmp5690 = *(&local3);
frost$core$String* $tmp5691 = frost$core$String$get_asString$R$frost$core$String($tmp5690);
frost$core$String* $tmp5692 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5691, &$s5693);
frost$core$String* $tmp5694 = *(&local2);
frost$core$String* $tmp5695 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5692, $tmp5694);
frost$core$String* $tmp5696 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5695, &$s5697);
$fn5699 $tmp5698 = ($fn5699) ((frost$io$OutputStream*) $tmp5689)->$class->vtable[17];
frost$core$Error* $tmp5700 = $tmp5698(((frost$io$OutputStream*) $tmp5689), $tmp5696);
if ($tmp5700 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5700));
*(&local0) = $tmp5700;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5691));
frost$core$String* $tmp5701 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5701));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5702 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5702));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5691));
// line 1590
frost$core$Weak** $tmp5703 = &param0->compiler;
frost$core$Weak* $tmp5704 = *$tmp5703;
frost$core$Object* $tmp5705 = frost$core$Weak$get$R$frost$core$Weak$T($tmp5704);
frost$collections$Array** $tmp5706 = &param1->locals;
frost$collections$Array* $tmp5707 = *$tmp5706;
frost$core$Int64 $tmp5708 = *(&local1);
frost$core$Object* $tmp5709 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp5707, $tmp5708);
frost$core$Bit $tmp5710 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp5705), ((org$frostlang$frostc$Type*) $tmp5709));
bool $tmp5711 = $tmp5710.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp5709);
frost$core$Frost$unref$frost$core$Object$Q($tmp5705);
if ($tmp5711) goto block10; else goto block11;
block10:;
// line 1591
frost$io$IndentedOutputStream** $tmp5712 = &param0->out;
frost$io$IndentedOutputStream* $tmp5713 = *$tmp5712;
$fn5715 $tmp5714 = ($fn5715) ((frost$io$OutputStream*) $tmp5713)->$class->vtable[17];
frost$core$Error* $tmp5716 = $tmp5714(((frost$io$OutputStream*) $tmp5713), &$s5717);
if ($tmp5716 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5716));
*(&local0) = $tmp5716;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5716));
frost$core$String* $tmp5718 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5718));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5719 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5719));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5716));
goto block11;
block11:;
// line 1593
frost$io$IndentedOutputStream** $tmp5720 = &param0->out;
frost$io$IndentedOutputStream* $tmp5721 = *$tmp5720;
$fn5723 $tmp5722 = ($fn5723) ((frost$io$OutputStream*) $tmp5721)->$class->vtable[19];
frost$core$Error* $tmp5724 = $tmp5722(((frost$io$OutputStream*) $tmp5721), &$s5725);
if ($tmp5724 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5724));
*(&local0) = $tmp5724;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5724));
frost$core$String* $tmp5726 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5726));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5727 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5727));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5724));
frost$core$String* $tmp5728 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5728));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5729 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5729));
*(&local2) = ((frost$core$String*) NULL);
goto block5;
block5:;
frost$core$Int64 $tmp5730 = *(&local1);
int64_t $tmp5731 = $tmp5660.value;
int64_t $tmp5732 = $tmp5730.value;
int64_t $tmp5733 = $tmp5731 - $tmp5732;
frost$core$Int64 $tmp5734 = (frost$core$Int64) {$tmp5733};
frost$core$UInt64 $tmp5735 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp5734);
if ($tmp5662) goto block17; else goto block18;
block17:;
uint64_t $tmp5736 = $tmp5735.value;
uint64_t $tmp5737 = $tmp5664.value;
bool $tmp5738 = $tmp5736 >= $tmp5737;
frost$core$Bit $tmp5739 = (frost$core$Bit) {$tmp5738};
bool $tmp5740 = $tmp5739.value;
if ($tmp5740) goto block16; else goto block4;
block18:;
uint64_t $tmp5741 = $tmp5735.value;
uint64_t $tmp5742 = $tmp5664.value;
bool $tmp5743 = $tmp5741 > $tmp5742;
frost$core$Bit $tmp5744 = (frost$core$Bit) {$tmp5743};
bool $tmp5745 = $tmp5744.value;
if ($tmp5745) goto block16; else goto block4;
block16:;
int64_t $tmp5746 = $tmp5730.value;
int64_t $tmp5747 = $tmp5663.value;
int64_t $tmp5748 = $tmp5746 + $tmp5747;
frost$core$Int64 $tmp5749 = (frost$core$Int64) {$tmp5748};
*(&local1) = $tmp5749;
goto block3;
block4:;
// line 1595
frost$core$Int64 $tmp5750 = (frost$core$Int64) {0};
frost$collections$Array** $tmp5751 = &param1->blocks;
frost$collections$Array* $tmp5752 = *$tmp5751;
ITable* $tmp5753 = ((frost$collections$CollectionView*) $tmp5752)->$class->itable;
while ($tmp5753->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5753 = $tmp5753->next;
}
$fn5755 $tmp5754 = $tmp5753->methods[0];
frost$core$Int64 $tmp5756 = $tmp5754(((frost$collections$CollectionView*) $tmp5752));
frost$core$Bit $tmp5757 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp5758 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp5750, $tmp5756, $tmp5757);
frost$core$Int64 $tmp5759 = $tmp5758.min;
*(&local4) = $tmp5759;
frost$core$Int64 $tmp5760 = $tmp5758.max;
frost$core$Bit $tmp5761 = $tmp5758.inclusive;
bool $tmp5762 = $tmp5761.value;
frost$core$Int64 $tmp5763 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp5764 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp5763);
if ($tmp5762) goto block22; else goto block23;
block22:;
int64_t $tmp5765 = $tmp5759.value;
int64_t $tmp5766 = $tmp5760.value;
bool $tmp5767 = $tmp5765 <= $tmp5766;
frost$core$Bit $tmp5768 = (frost$core$Bit) {$tmp5767};
bool $tmp5769 = $tmp5768.value;
if ($tmp5769) goto block19; else goto block20;
block23:;
int64_t $tmp5770 = $tmp5759.value;
int64_t $tmp5771 = $tmp5760.value;
bool $tmp5772 = $tmp5770 < $tmp5771;
frost$core$Bit $tmp5773 = (frost$core$Bit) {$tmp5772};
bool $tmp5774 = $tmp5773.value;
if ($tmp5774) goto block19; else goto block20;
block19:;
// line 1596
frost$collections$Array** $tmp5775 = &param1->blocks;
frost$collections$Array* $tmp5776 = *$tmp5775;
frost$core$Int64 $tmp5777 = *(&local4);
frost$core$Object* $tmp5778 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp5776, $tmp5777);
*(&local5) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp5778)));
org$frostlang$frostc$IR$Block* $tmp5779 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5779));
*(&local5) = ((org$frostlang$frostc$IR$Block*) $tmp5778);
frost$core$Frost$unref$frost$core$Object$Q($tmp5778);
// line 1597
frost$core$Int64 $tmp5780 = *(&local4);
frost$core$Int64 $tmp5781 = (frost$core$Int64) {0};
int64_t $tmp5782 = $tmp5780.value;
int64_t $tmp5783 = $tmp5781.value;
bool $tmp5784 = $tmp5782 != $tmp5783;
frost$core$Bit $tmp5785 = (frost$core$Bit) {$tmp5784};
bool $tmp5786 = $tmp5785.value;
if ($tmp5786) goto block24; else goto block26;
block24:;
// line 1598
org$frostlang$frostc$IR$Block* $tmp5787 = *(&local5);
org$frostlang$frostc$IR$Block$ID* $tmp5788 = &$tmp5787->id;
org$frostlang$frostc$IR$Block$ID $tmp5789 = *$tmp5788;
frost$core$String* $tmp5790 = org$frostlang$frostc$IR$Block$ID$get_asString$R$frost$core$String($tmp5789);
frost$core$String* $tmp5791 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5790, &$s5792);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5791));
frost$core$String** $tmp5793 = &param0->currentBlock;
frost$core$String* $tmp5794 = *$tmp5793;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5794));
frost$core$String** $tmp5795 = &param0->currentBlock;
*$tmp5795 = $tmp5791;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5790));
// line 1599
frost$io$IndentedOutputStream** $tmp5796 = &param0->out;
frost$io$IndentedOutputStream* $tmp5797 = *$tmp5796;
frost$core$String** $tmp5798 = &param0->currentBlock;
frost$core$String* $tmp5799 = *$tmp5798;
frost$core$String* $tmp5800 = frost$core$String$get_asString$R$frost$core$String($tmp5799);
frost$core$String* $tmp5801 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5800, &$s5802);
$fn5804 $tmp5803 = ($fn5804) ((frost$io$OutputStream*) $tmp5797)->$class->vtable[19];
frost$core$Error* $tmp5805 = $tmp5803(((frost$io$OutputStream*) $tmp5797), $tmp5801);
if ($tmp5805 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5805));
*(&local0) = $tmp5805;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5801));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5800));
org$frostlang$frostc$IR$Block* $tmp5806 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5806));
*(&local5) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5801));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5800));
goto block25;
block26:;
// line 1
// line 1602
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s5807));
frost$core$String** $tmp5808 = &param0->currentBlock;
frost$core$String* $tmp5809 = *$tmp5808;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5809));
frost$core$String** $tmp5810 = &param0->currentBlock;
*$tmp5810 = &$s5811;
goto block25;
block25:;
// line 1604
frost$core$Int64 $tmp5812 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block* $tmp5813 = *(&local5);
frost$collections$Array** $tmp5814 = &$tmp5813->statements;
frost$collections$Array* $tmp5815 = *$tmp5814;
ITable* $tmp5816 = ((frost$collections$CollectionView*) $tmp5815)->$class->itable;
while ($tmp5816->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5816 = $tmp5816->next;
}
$fn5818 $tmp5817 = $tmp5816->methods[0];
frost$core$Int64 $tmp5819 = $tmp5817(((frost$collections$CollectionView*) $tmp5815));
frost$core$Bit $tmp5820 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp5821 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp5812, $tmp5819, $tmp5820);
frost$core$Int64 $tmp5822 = $tmp5821.min;
*(&local6) = $tmp5822;
frost$core$Int64 $tmp5823 = $tmp5821.max;
frost$core$Bit $tmp5824 = $tmp5821.inclusive;
bool $tmp5825 = $tmp5824.value;
frost$core$Int64 $tmp5826 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp5827 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp5826);
if ($tmp5825) goto block32; else goto block33;
block32:;
int64_t $tmp5828 = $tmp5822.value;
int64_t $tmp5829 = $tmp5823.value;
bool $tmp5830 = $tmp5828 <= $tmp5829;
frost$core$Bit $tmp5831 = (frost$core$Bit) {$tmp5830};
bool $tmp5832 = $tmp5831.value;
if ($tmp5832) goto block29; else goto block30;
block33:;
int64_t $tmp5833 = $tmp5822.value;
int64_t $tmp5834 = $tmp5823.value;
bool $tmp5835 = $tmp5833 < $tmp5834;
frost$core$Bit $tmp5836 = (frost$core$Bit) {$tmp5835};
bool $tmp5837 = $tmp5836.value;
if ($tmp5837) goto block29; else goto block30;
block29:;
// line 1605
org$frostlang$frostc$IR$Block* $tmp5838 = *(&local5);
frost$collections$Array** $tmp5839 = &$tmp5838->ids;
frost$collections$Array* $tmp5840 = *$tmp5839;
frost$core$Int64 $tmp5841 = *(&local6);
frost$core$Object* $tmp5842 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp5840, $tmp5841);
org$frostlang$frostc$IR$Block* $tmp5843 = *(&local5);
frost$collections$Array** $tmp5844 = &$tmp5843->statements;
frost$collections$Array* $tmp5845 = *$tmp5844;
frost$core$Int64 $tmp5846 = *(&local6);
frost$core$Object* $tmp5847 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp5845, $tmp5846);
org$frostlang$frostc$CCodeGenerator$writeStatement$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Statement(param0, ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp5842)->value, ((org$frostlang$frostc$IR$Statement*) $tmp5847));
frost$core$Frost$unref$frost$core$Object$Q($tmp5847);
frost$core$Frost$unref$frost$core$Object$Q($tmp5842);
goto block31;
block31:;
frost$core$Int64 $tmp5848 = *(&local6);
int64_t $tmp5849 = $tmp5823.value;
int64_t $tmp5850 = $tmp5848.value;
int64_t $tmp5851 = $tmp5849 - $tmp5850;
frost$core$Int64 $tmp5852 = (frost$core$Int64) {$tmp5851};
frost$core$UInt64 $tmp5853 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp5852);
if ($tmp5825) goto block35; else goto block36;
block35:;
uint64_t $tmp5854 = $tmp5853.value;
uint64_t $tmp5855 = $tmp5827.value;
bool $tmp5856 = $tmp5854 >= $tmp5855;
frost$core$Bit $tmp5857 = (frost$core$Bit) {$tmp5856};
bool $tmp5858 = $tmp5857.value;
if ($tmp5858) goto block34; else goto block30;
block36:;
uint64_t $tmp5859 = $tmp5853.value;
uint64_t $tmp5860 = $tmp5827.value;
bool $tmp5861 = $tmp5859 > $tmp5860;
frost$core$Bit $tmp5862 = (frost$core$Bit) {$tmp5861};
bool $tmp5863 = $tmp5862.value;
if ($tmp5863) goto block34; else goto block30;
block34:;
int64_t $tmp5864 = $tmp5848.value;
int64_t $tmp5865 = $tmp5826.value;
int64_t $tmp5866 = $tmp5864 + $tmp5865;
frost$core$Int64 $tmp5867 = (frost$core$Int64) {$tmp5866};
*(&local6) = $tmp5867;
goto block29;
block30:;
org$frostlang$frostc$IR$Block* $tmp5868 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5868));
*(&local5) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block21;
block21:;
frost$core$Int64 $tmp5869 = *(&local4);
int64_t $tmp5870 = $tmp5760.value;
int64_t $tmp5871 = $tmp5869.value;
int64_t $tmp5872 = $tmp5870 - $tmp5871;
frost$core$Int64 $tmp5873 = (frost$core$Int64) {$tmp5872};
frost$core$UInt64 $tmp5874 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp5873);
if ($tmp5762) goto block38; else goto block39;
block38:;
uint64_t $tmp5875 = $tmp5874.value;
uint64_t $tmp5876 = $tmp5764.value;
bool $tmp5877 = $tmp5875 >= $tmp5876;
frost$core$Bit $tmp5878 = (frost$core$Bit) {$tmp5877};
bool $tmp5879 = $tmp5878.value;
if ($tmp5879) goto block37; else goto block20;
block39:;
uint64_t $tmp5880 = $tmp5874.value;
uint64_t $tmp5881 = $tmp5764.value;
bool $tmp5882 = $tmp5880 > $tmp5881;
frost$core$Bit $tmp5883 = (frost$core$Bit) {$tmp5882};
bool $tmp5884 = $tmp5883.value;
if ($tmp5884) goto block37; else goto block20;
block37:;
int64_t $tmp5885 = $tmp5869.value;
int64_t $tmp5886 = $tmp5763.value;
int64_t $tmp5887 = $tmp5885 + $tmp5886;
frost$core$Int64 $tmp5888 = (frost$core$Int64) {$tmp5887};
*(&local4) = $tmp5888;
goto block19;
block20:;
goto block2;
block1:;
// line 1610
frost$core$Int64 $tmp5889 = (frost$core$Int64) {1610};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5890, $tmp5889);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5891 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5891));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1, org$frostlang$frostc$IR* param2) {

frost$core$Error* local0 = NULL;
frost$io$IndentedOutputStream* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$Int64 local3;
org$frostlang$frostc$MethodDecl$Parameter* local4 = NULL;
frost$io$MemoryOutputStream* local5 = NULL;
frost$io$IndentedOutputStream** $tmp5892 = &param0->out;
frost$io$IndentedOutputStream* $tmp5893 = *$tmp5892;
// line 1617
*(&local0) = ((frost$core$Error*) NULL);
// line 1618
frost$io$IndentedOutputStream** $tmp5894 = &param0->out;
frost$io$IndentedOutputStream* $tmp5895 = *$tmp5894;
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5895));
frost$io$IndentedOutputStream* $tmp5896 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5896));
*(&local1) = $tmp5895;
// line 1619
frost$io$IndentedOutputStream** $tmp5897 = &param0->methods;
frost$io$IndentedOutputStream* $tmp5898 = *$tmp5897;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5898));
frost$io$IndentedOutputStream** $tmp5899 = &param0->out;
frost$io$IndentedOutputStream* $tmp5900 = *$tmp5899;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5900));
frost$io$IndentedOutputStream** $tmp5901 = &param0->out;
*$tmp5901 = $tmp5898;
// line 1620
frost$io$MemoryOutputStream** $tmp5902 = &param0->methodHeaderBuffer;
frost$io$MemoryOutputStream* $tmp5903 = *$tmp5902;
frost$io$MemoryOutputStream$clear($tmp5903);
// line 1621
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR** $tmp5904 = &param0->ir;
org$frostlang$frostc$IR* $tmp5905 = *$tmp5904;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5905));
org$frostlang$frostc$IR** $tmp5906 = &param0->ir;
*$tmp5906 = param2;
// line 1622
frost$io$IndentedOutputStream** $tmp5907 = &param0->out;
frost$io$IndentedOutputStream* $tmp5908 = *$tmp5907;
org$frostlang$frostc$Type** $tmp5909 = &param1->returnType;
org$frostlang$frostc$Type* $tmp5910 = *$tmp5909;
frost$core$String* $tmp5911 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5910);
frost$core$String* $tmp5912 = frost$core$String$get_asString$R$frost$core$String($tmp5911);
frost$core$String* $tmp5913 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5912, &$s5914);
frost$core$String* $tmp5915 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp5916 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5913, $tmp5915);
frost$core$String* $tmp5917 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5916, &$s5918);
$fn5920 $tmp5919 = ($fn5920) ((frost$io$OutputStream*) $tmp5908)->$class->vtable[17];
frost$core$Error* $tmp5921 = $tmp5919(((frost$io$OutputStream*) $tmp5908), $tmp5917);
if ($tmp5921 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5921));
*(&local0) = $tmp5921;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5916));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5913));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5912));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5911));
frost$io$IndentedOutputStream* $tmp5922 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5922));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5916));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5913));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5912));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5911));
// line 1623
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s5923));
frost$core$String* $tmp5924 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5924));
*(&local2) = &$s5925;
// line 1624
frost$core$Int64 $tmp5926 = (frost$core$Int64) {0};
*(&local3) = $tmp5926;
// line 1625
frost$core$Weak** $tmp5927 = &param0->compiler;
frost$core$Weak* $tmp5928 = *$tmp5927;
frost$core$Object* $tmp5929 = frost$core$Weak$get$R$frost$core$Weak$T($tmp5928);
frost$core$Bit $tmp5930 = org$frostlang$frostc$Compiler$hasSelfParam$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp5929), param1);
bool $tmp5931 = $tmp5930.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp5929);
if ($tmp5931) goto block8; else goto block9;
block8:;
// line 1626
frost$io$IndentedOutputStream** $tmp5932 = &param0->out;
frost$io$IndentedOutputStream* $tmp5933 = *$tmp5932;
frost$core$String* $tmp5934 = org$frostlang$frostc$CCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp5935 = frost$core$String$get_asString$R$frost$core$String($tmp5934);
frost$core$String* $tmp5936 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5935, &$s5937);
frost$core$Int64 $tmp5938 = *(&local3);
frost$core$Int64$wrapper* $tmp5939;
$tmp5939 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp5939->value = $tmp5938;
frost$core$String* $tmp5940 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp5936, ((frost$core$Object*) $tmp5939));
frost$core$String* $tmp5941 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5940, &$s5942);
$fn5944 $tmp5943 = ($fn5944) ((frost$io$OutputStream*) $tmp5933)->$class->vtable[17];
frost$core$Error* $tmp5945 = $tmp5943(((frost$io$OutputStream*) $tmp5933), $tmp5941);
if ($tmp5945 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5945));
*(&local0) = $tmp5945;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5945));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5940));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5936));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5935));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5934));
frost$core$String* $tmp5946 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5946));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp5947 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5947));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5945));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5940));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5936));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5935));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5934));
// line 1627
frost$core$Int64 $tmp5948 = *(&local3);
frost$core$Int64 $tmp5949 = (frost$core$Int64) {1};
int64_t $tmp5950 = $tmp5948.value;
int64_t $tmp5951 = $tmp5949.value;
int64_t $tmp5952 = $tmp5950 + $tmp5951;
frost$core$Int64 $tmp5953 = (frost$core$Int64) {$tmp5952};
*(&local3) = $tmp5953;
// line 1628
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s5954));
frost$core$String* $tmp5955 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5955));
*(&local2) = &$s5956;
goto block9;
block9:;
// line 1630
frost$collections$Array** $tmp5957 = &param1->parameters;
frost$collections$Array* $tmp5958 = *$tmp5957;
ITable* $tmp5959 = ((frost$collections$Iterable*) $tmp5958)->$class->itable;
while ($tmp5959->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp5959 = $tmp5959->next;
}
$fn5961 $tmp5960 = $tmp5959->methods[0];
frost$collections$Iterator* $tmp5962 = $tmp5960(((frost$collections$Iterable*) $tmp5958));
goto block12;
block12:;
ITable* $tmp5963 = $tmp5962->$class->itable;
while ($tmp5963->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp5963 = $tmp5963->next;
}
$fn5965 $tmp5964 = $tmp5963->methods[0];
frost$core$Bit $tmp5966 = $tmp5964($tmp5962);
bool $tmp5967 = $tmp5966.value;
if ($tmp5967) goto block14; else goto block13;
block13:;
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp5968 = $tmp5962->$class->itable;
while ($tmp5968->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp5968 = $tmp5968->next;
}
$fn5970 $tmp5969 = $tmp5968->methods[1];
frost$core$Object* $tmp5971 = $tmp5969($tmp5962);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp5971)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp5972 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5972));
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp5971);
// line 1631
frost$io$IndentedOutputStream** $tmp5973 = &param0->out;
frost$io$IndentedOutputStream* $tmp5974 = *$tmp5973;
frost$core$String* $tmp5975 = *(&local2);
frost$core$String* $tmp5976 = frost$core$String$get_asString$R$frost$core$String($tmp5975);
frost$core$String* $tmp5977 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5976, &$s5978);
org$frostlang$frostc$MethodDecl$Parameter* $tmp5979 = *(&local4);
org$frostlang$frostc$Type** $tmp5980 = &$tmp5979->type;
org$frostlang$frostc$Type* $tmp5981 = *$tmp5980;
frost$core$String* $tmp5982 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5981);
frost$core$String* $tmp5983 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5977, $tmp5982);
frost$core$String* $tmp5984 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5983, &$s5985);
frost$core$Int64 $tmp5986 = *(&local3);
frost$core$Int64$wrapper* $tmp5987;
$tmp5987 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp5987->value = $tmp5986;
frost$core$String* $tmp5988 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp5984, ((frost$core$Object*) $tmp5987));
frost$core$String* $tmp5989 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5988, &$s5990);
$fn5992 $tmp5991 = ($fn5992) ((frost$io$OutputStream*) $tmp5974)->$class->vtable[17];
frost$core$Error* $tmp5993 = $tmp5991(((frost$io$OutputStream*) $tmp5974), $tmp5989);
if ($tmp5993 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5993));
*(&local0) = $tmp5993;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5988));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5984));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5983));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5976));
frost$core$Frost$unref$frost$core$Object$Q($tmp5971);
org$frostlang$frostc$MethodDecl$Parameter* $tmp5994 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5994));
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5962));
frost$core$String* $tmp5995 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5995));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp5996 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5996));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5988));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5984));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5983));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5976));
// line 1632
frost$core$Int64 $tmp5997 = *(&local3);
frost$core$Int64 $tmp5998 = (frost$core$Int64) {1};
int64_t $tmp5999 = $tmp5997.value;
int64_t $tmp6000 = $tmp5998.value;
int64_t $tmp6001 = $tmp5999 + $tmp6000;
frost$core$Int64 $tmp6002 = (frost$core$Int64) {$tmp6001};
*(&local3) = $tmp6002;
// line 1633
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6003));
frost$core$String* $tmp6004 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6004));
*(&local2) = &$s6005;
frost$core$Frost$unref$frost$core$Object$Q($tmp5971);
org$frostlang$frostc$MethodDecl$Parameter* $tmp6006 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6006));
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5962));
// line 1635
frost$io$IndentedOutputStream** $tmp6007 = &param0->out;
frost$io$IndentedOutputStream* $tmp6008 = *$tmp6007;
$fn6010 $tmp6009 = ($fn6010) ((frost$io$OutputStream*) $tmp6008)->$class->vtable[19];
frost$core$Error* $tmp6011 = $tmp6009(((frost$io$OutputStream*) $tmp6008), &$s6012);
if ($tmp6011 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6011));
*(&local0) = $tmp6011;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6011));
frost$core$String* $tmp6013 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6013));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6014 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6014));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6011));
// line 1636
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
frost$io$MemoryOutputStream* $tmp6015 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp6015);
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6015));
frost$io$MemoryOutputStream* $tmp6016 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6016));
*(&local5) = $tmp6015;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6015));
// line 1637
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp6017 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream* $tmp6018 = *(&local5);
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp6017, ((frost$io$OutputStream*) $tmp6018));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6017));
frost$io$IndentedOutputStream** $tmp6019 = &param0->out;
frost$io$IndentedOutputStream* $tmp6020 = *$tmp6019;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6020));
frost$io$IndentedOutputStream** $tmp6021 = &param0->out;
*$tmp6021 = $tmp6017;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6017));
// line 1638
org$frostlang$frostc$CCodeGenerator$writeIR$org$frostlang$frostc$IR(param0, param2);
// line 1639
frost$io$IndentedOutputStream** $tmp6022 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6023 = *$tmp6022;
frost$io$MemoryOutputStream** $tmp6024 = &param0->methodHeaderBuffer;
frost$io$MemoryOutputStream* $tmp6025 = *$tmp6024;
$fn6027 $tmp6026 = ($fn6027) ((frost$io$OutputStream*) $tmp6023)->$class->vtable[20];
frost$core$Error* $tmp6028 = $tmp6026(((frost$io$OutputStream*) $tmp6023), ((frost$core$Object*) $tmp6025));
if ($tmp6028 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6028));
*(&local0) = $tmp6028;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6028));
frost$io$MemoryOutputStream* $tmp6029 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6029));
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp6030 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6030));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6031 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6031));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6028));
// line 1640
frost$io$IndentedOutputStream** $tmp6032 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6033 = *$tmp6032;
frost$io$MemoryOutputStream* $tmp6034 = *(&local5);
$fn6036 $tmp6035 = ($fn6036) ((frost$io$OutputStream*) $tmp6033)->$class->vtable[20];
frost$core$Error* $tmp6037 = $tmp6035(((frost$io$OutputStream*) $tmp6033), ((frost$core$Object*) $tmp6034));
if ($tmp6037 == NULL) goto block21; else goto block22;
block22:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6037));
*(&local0) = $tmp6037;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6037));
frost$io$MemoryOutputStream* $tmp6038 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6038));
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp6039 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6039));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6040 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6040));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6037));
// line 1641
frost$io$IndentedOutputStream** $tmp6041 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6042 = *$tmp6041;
$fn6044 $tmp6043 = ($fn6044) ((frost$io$OutputStream*) $tmp6042)->$class->vtable[19];
frost$core$Error* $tmp6045 = $tmp6043(((frost$io$OutputStream*) $tmp6042), &$s6046);
if ($tmp6045 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6045));
*(&local0) = $tmp6045;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6045));
frost$io$MemoryOutputStream* $tmp6047 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6047));
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp6048 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6048));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6049 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6049));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6045));
// line 1642
frost$io$IndentedOutputStream* $tmp6050 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6050));
frost$io$IndentedOutputStream** $tmp6051 = &param0->out;
frost$io$IndentedOutputStream* $tmp6052 = *$tmp6051;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6052));
frost$io$IndentedOutputStream** $tmp6053 = &param0->out;
*$tmp6053 = $tmp6050;
frost$io$MemoryOutputStream* $tmp6054 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6054));
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp6055 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6055));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6056 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6056));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block5;
block4:;
// line 1645
frost$core$Int64 $tmp6057 = (frost$core$Int64) {1645};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s6058, $tmp6057);
abort(); // unreachable
block5:;
frost$core$Error* $tmp6059 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6059));
*(&local0) = ((frost$core$Error*) NULL);
goto block1;
block1:;
frost$io$IndentedOutputStream** $tmp6060 = &param0->out;
frost$io$IndentedOutputStream* $tmp6061 = *$tmp6060;
bool $tmp6062 = $tmp6061 == $tmp5893;
frost$core$Bit $tmp6063 = frost$core$Bit$init$builtin_bit($tmp6062);
bool $tmp6064 = $tmp6063.value;
if ($tmp6064) goto block2; else goto block3;
block2:;
return;
block3:;
frost$core$Int64 $tmp6065 = (frost$core$Int64) {1616};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s6066, $tmp6065, &$s6067);
abort(); // unreachable

}
void org$frostlang$frostc$CCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
frost$io$File* local1 = NULL;
// line 1651
*(&local0) = ((frost$core$Error*) NULL);
// line 1652
org$frostlang$frostc$ClassDecl** $tmp6068 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp6069 = *$tmp6068;
frost$core$Bit $tmp6070 = frost$core$Bit$init$builtin_bit($tmp6069 == NULL);
bool $tmp6071 = $tmp6070.value;
if ($tmp6071) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp6072 = (frost$core$Int64) {1652};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s6073, $tmp6072);
abort(); // unreachable
block3:;
// line 1653
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$ClassDecl** $tmp6074 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp6075 = *$tmp6074;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6075));
org$frostlang$frostc$ClassDecl** $tmp6076 = &param0->currentClass;
*$tmp6076 = param1;
// line 1654
frost$collections$HashSet** $tmp6077 = &param0->imports;
frost$collections$HashSet* $tmp6078 = *$tmp6077;
frost$collections$HashSet$clear($tmp6078);
// line 1655
frost$io$MemoryOutputStream** $tmp6079 = &param0->strings;
frost$io$MemoryOutputStream* $tmp6080 = *$tmp6079;
frost$io$MemoryOutputStream$clear($tmp6080);
// line 1656
frost$io$MemoryOutputStream** $tmp6081 = &param0->declarations;
frost$io$MemoryOutputStream* $tmp6082 = *$tmp6081;
frost$io$MemoryOutputStream$clear($tmp6082);
// line 1657
frost$io$MemoryOutputStream** $tmp6083 = &param0->types;
frost$io$MemoryOutputStream* $tmp6084 = *$tmp6083;
frost$io$MemoryOutputStream$clear($tmp6084);
// line 1658
frost$io$MemoryOutputStream** $tmp6085 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp6086 = *$tmp6085;
frost$io$MemoryOutputStream$clear($tmp6086);
// line 1659
frost$io$MemoryOutputStream** $tmp6087 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp6088 = *$tmp6087;
frost$io$MemoryOutputStream$clear($tmp6088);
// line 1660
frost$collections$HashSet** $tmp6089 = &param0->declared;
frost$collections$HashSet* $tmp6090 = *$tmp6089;
frost$collections$HashSet$clear($tmp6090);
// line 1661
frost$collections$HashSet** $tmp6091 = &param0->writtenTypes;
frost$collections$HashSet* $tmp6092 = *$tmp6091;
frost$collections$HashSet$clear($tmp6092);
// line 1662
frost$collections$HashSet** $tmp6093 = &param0->writtenWrappers;
frost$collections$HashSet* $tmp6094 = *$tmp6093;
frost$collections$HashSet$clear($tmp6094);
// line 1663
frost$collections$HashMap** $tmp6095 = &param0->classConstants;
frost$collections$HashMap* $tmp6096 = *$tmp6095;
frost$collections$HashMap$clear($tmp6096);
// line 1664
frost$collections$IdentityMap** $tmp6097 = &param0->variableNames;
frost$collections$IdentityMap* $tmp6098 = *$tmp6097;
frost$collections$IdentityMap$clear($tmp6098);
// line 1665
frost$core$Int64 $tmp6099 = (frost$core$Int64) {0};
frost$core$Int64* $tmp6100 = &param0->varCount;
*$tmp6100 = $tmp6099;
// line 1666
frost$collections$IdentityMap** $tmp6101 = &param0->methodShims;
frost$collections$IdentityMap* $tmp6102 = *$tmp6101;
frost$collections$IdentityMap$clear($tmp6102);
// line 1667
frost$core$Weak** $tmp6103 = &param0->hCodeGen;
frost$core$Weak* $tmp6104 = *$tmp6103;
frost$core$Object* $tmp6105 = frost$core$Weak$get$R$frost$core$Weak$T($tmp6104);
frost$io$File* $tmp6106 = org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(((org$frostlang$frostc$HCodeGenerator*) $tmp6105), param1, &$s6107);
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6106));
frost$io$File* $tmp6108 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6108));
*(&local1) = $tmp6106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6106));
frost$core$Frost$unref$frost$core$Object$Q($tmp6105);
// line 1668
frost$io$File* $tmp6109 = *(&local1);
frost$io$File* $tmp6110 = frost$io$File$get_parent$R$frost$io$File$Q($tmp6109);
frost$core$Error* $tmp6111 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp6110);
if ($tmp6111 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6111));
*(&local0) = $tmp6111;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6110));
frost$io$File* $tmp6112 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6112));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6110));
// line 1669
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp6113 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp6114 = *(&local1);
frost$core$Maybe* $tmp6115 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp6114);
frost$core$Int64* $tmp6116 = &$tmp6115->$rawValue;
frost$core$Int64 $tmp6117 = *$tmp6116;
int64_t $tmp6118 = $tmp6117.value;
bool $tmp6119 = $tmp6118 == 0;
if ($tmp6119) goto block7; else goto block8;
block8:;
frost$core$Error** $tmp6120 = (frost$core$Error**) ($tmp6115->$data + 0);
frost$core$Error* $tmp6121 = *$tmp6120;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6121));
*(&local0) = $tmp6121;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6113));
frost$io$File* $tmp6122 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6122));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block7:;
frost$core$Object** $tmp6123 = (frost$core$Object**) ($tmp6115->$data + 0);
frost$core$Object* $tmp6124 = *$tmp6123;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp6113, ((frost$io$OutputStream*) $tmp6124));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6113));
frost$io$IndentedOutputStream** $tmp6125 = &param0->out;
frost$io$IndentedOutputStream* $tmp6126 = *$tmp6125;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6126));
frost$io$IndentedOutputStream** $tmp6127 = &param0->out;
*$tmp6127 = $tmp6113;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6113));
// line 1670
frost$io$IndentedOutputStream** $tmp6128 = &param0->out;
frost$io$IndentedOutputStream* $tmp6129 = *$tmp6128;
$fn6131 $tmp6130 = ($fn6131) ((frost$io$OutputStream*) $tmp6129)->$class->vtable[22];
frost$core$Error* $tmp6132 = $tmp6130(((frost$io$OutputStream*) $tmp6129));
if ($tmp6132 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6132));
*(&local0) = $tmp6132;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6132));
frost$io$File* $tmp6133 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6133));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6132));
// line 1671
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp6134 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, param1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6134));
// line 1672
frost$core$Weak** $tmp6135 = &param0->compiler;
frost$core$Weak* $tmp6136 = *$tmp6135;
frost$core$Object* $tmp6137 = frost$core$Weak$get$R$frost$core$Weak$T($tmp6136);
frost$core$Bit $tmp6138 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp6137), param1);
bool $tmp6139 = $tmp6138.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp6137);
if ($tmp6139) goto block11; else goto block12;
block11:;
// line 1673
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp6140 = org$frostlang$frostc$CCodeGenerator$getWrapperClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, param1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6140));
goto block12;
block12:;
frost$io$File* $tmp6141 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6141));
*(&local1) = ((frost$io$File*) NULL);
goto block2;
block1:;
// line 1677
frost$core$Weak** $tmp6142 = &param0->compiler;
frost$core$Weak* $tmp6143 = *$tmp6142;
frost$core$Object* $tmp6144 = frost$core$Weak$get$R$frost$core$Weak$T($tmp6143);
org$frostlang$frostc$Position* $tmp6145 = &param1->position;
org$frostlang$frostc$Position $tmp6146 = *$tmp6145;
frost$core$Error* $tmp6147 = *(&local0);
frost$core$String** $tmp6148 = &$tmp6147->message;
frost$core$String* $tmp6149 = *$tmp6148;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp6144), $tmp6146, $tmp6149);
frost$core$Frost$unref$frost$core$Object$Q($tmp6144);
goto block2;
block2:;
frost$core$Error* $tmp6150 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6150));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$end$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

// line 1683
org$frostlang$frostc$CCodeGenerator$finish(param0);
// line 1684
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl** $tmp6151 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp6152 = *$tmp6151;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6152));
org$frostlang$frostc$ClassDecl** $tmp6153 = &param0->currentClass;
*$tmp6153 = ((org$frostlang$frostc$ClassDecl*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$finish(org$frostlang$frostc$CCodeGenerator* param0) {

frost$core$Error* local0 = NULL;
// line 1689
*(&local0) = ((frost$core$Error*) NULL);
// line 1690
frost$io$IndentedOutputStream** $tmp6154 = &param0->out;
frost$io$IndentedOutputStream* $tmp6155 = *$tmp6154;
frost$io$MemoryOutputStream** $tmp6156 = &param0->includes;
frost$io$MemoryOutputStream* $tmp6157 = *$tmp6156;
$fn6159 $tmp6158 = ($fn6159) ((frost$io$OutputStream*) $tmp6155)->$class->vtable[20];
frost$core$Error* $tmp6160 = $tmp6158(((frost$io$OutputStream*) $tmp6155), ((frost$core$Object*) $tmp6157));
if ($tmp6160 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6160));
*(&local0) = $tmp6160;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6160));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6160));
// line 1691
frost$io$MemoryOutputStream** $tmp6161 = &param0->includes;
frost$io$MemoryOutputStream* $tmp6162 = *$tmp6161;
frost$io$MemoryOutputStream$clear($tmp6162);
// line 1692
frost$io$IndentedOutputStream** $tmp6163 = &param0->out;
frost$io$IndentedOutputStream* $tmp6164 = *$tmp6163;
frost$io$MemoryOutputStream** $tmp6165 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp6166 = *$tmp6165;
$fn6168 $tmp6167 = ($fn6168) ((frost$io$OutputStream*) $tmp6164)->$class->vtable[20];
frost$core$Error* $tmp6169 = $tmp6167(((frost$io$OutputStream*) $tmp6164), ((frost$core$Object*) $tmp6166));
if ($tmp6169 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6169));
*(&local0) = $tmp6169;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6169));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6169));
// line 1693
frost$io$MemoryOutputStream** $tmp6170 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp6171 = *$tmp6170;
frost$io$MemoryOutputStream$clear($tmp6171);
// line 1694
frost$io$IndentedOutputStream** $tmp6172 = &param0->out;
frost$io$IndentedOutputStream* $tmp6173 = *$tmp6172;
frost$io$MemoryOutputStream** $tmp6174 = &param0->types;
frost$io$MemoryOutputStream* $tmp6175 = *$tmp6174;
$fn6177 $tmp6176 = ($fn6177) ((frost$io$OutputStream*) $tmp6173)->$class->vtable[20];
frost$core$Error* $tmp6178 = $tmp6176(((frost$io$OutputStream*) $tmp6173), ((frost$core$Object*) $tmp6175));
if ($tmp6178 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6178));
*(&local0) = $tmp6178;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6178));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6178));
// line 1695
frost$io$MemoryOutputStream** $tmp6179 = &param0->types;
frost$io$MemoryOutputStream* $tmp6180 = *$tmp6179;
frost$io$MemoryOutputStream$clear($tmp6180);
// line 1696
frost$io$IndentedOutputStream** $tmp6181 = &param0->out;
frost$io$IndentedOutputStream* $tmp6182 = *$tmp6181;
frost$io$MemoryOutputStream** $tmp6183 = &param0->strings;
frost$io$MemoryOutputStream* $tmp6184 = *$tmp6183;
$fn6186 $tmp6185 = ($fn6186) ((frost$io$OutputStream*) $tmp6182)->$class->vtable[20];
frost$core$Error* $tmp6187 = $tmp6185(((frost$io$OutputStream*) $tmp6182), ((frost$core$Object*) $tmp6184));
if ($tmp6187 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6187));
*(&local0) = $tmp6187;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6187));
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6187));
// line 1697
frost$io$MemoryOutputStream** $tmp6188 = &param0->strings;
frost$io$MemoryOutputStream* $tmp6189 = *$tmp6188;
frost$io$MemoryOutputStream$clear($tmp6189);
// line 1698
frost$io$IndentedOutputStream** $tmp6190 = &param0->out;
frost$io$IndentedOutputStream* $tmp6191 = *$tmp6190;
frost$io$MemoryOutputStream** $tmp6192 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp6193 = *$tmp6192;
$fn6195 $tmp6194 = ($fn6195) ((frost$io$OutputStream*) $tmp6191)->$class->vtable[20];
frost$core$Error* $tmp6196 = $tmp6194(((frost$io$OutputStream*) $tmp6191), ((frost$core$Object*) $tmp6193));
if ($tmp6196 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6196));
*(&local0) = $tmp6196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6196));
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6196));
// line 1699
frost$io$MemoryOutputStream** $tmp6197 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp6198 = *$tmp6197;
frost$io$MemoryOutputStream$clear($tmp6198);
goto block2;
block1:;
// line 1702
frost$core$Error* $tmp6199 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp6199));
// line 1703
frost$core$Int64 $tmp6200 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp6200);
goto block2;
block2:;
frost$core$Error* $tmp6201 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6201));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$cleanup(org$frostlang$frostc$CCodeGenerator* param0) {

// line 12
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp6202 = &param0->compiler;
frost$core$Weak* $tmp6203 = *$tmp6202;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6203));
frost$io$File** $tmp6204 = &param0->outDir;
frost$io$File* $tmp6205 = *$tmp6204;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6205));
frost$io$IndentedOutputStream** $tmp6206 = &param0->out;
frost$io$IndentedOutputStream* $tmp6207 = *$tmp6206;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6207));
frost$io$MemoryOutputStream** $tmp6208 = &param0->strings;
frost$io$MemoryOutputStream* $tmp6209 = *$tmp6208;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6209));
frost$collections$HashSet** $tmp6210 = &param0->imports;
frost$collections$HashSet* $tmp6211 = *$tmp6210;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6211));
frost$core$Weak** $tmp6212 = &param0->hCodeGen;
frost$core$Weak* $tmp6213 = *$tmp6212;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6213));
org$frostlang$frostc$HCodeGenerator** $tmp6214 = &param0->hCodeGenRetain;
org$frostlang$frostc$HCodeGenerator* $tmp6215 = *$tmp6214;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6215));
org$frostlang$frostc$ClassDecl** $tmp6216 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp6217 = *$tmp6216;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6217));
frost$io$MemoryOutputStream** $tmp6218 = &param0->includes;
frost$io$MemoryOutputStream* $tmp6219 = *$tmp6218;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6219));
frost$io$MemoryOutputStream** $tmp6220 = &param0->declarations;
frost$io$MemoryOutputStream* $tmp6221 = *$tmp6220;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6221));
frost$io$MemoryOutputStream** $tmp6222 = &param0->types;
frost$io$MemoryOutputStream* $tmp6223 = *$tmp6222;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6223));
frost$io$MemoryOutputStream** $tmp6224 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp6225 = *$tmp6224;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6225));
frost$io$IndentedOutputStream** $tmp6226 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6227 = *$tmp6226;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6227));
frost$io$MemoryOutputStream** $tmp6228 = &param0->methodHeaderBuffer;
frost$io$MemoryOutputStream* $tmp6229 = *$tmp6228;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6229));
frost$io$IndentedOutputStream** $tmp6230 = &param0->methodHeader;
frost$io$IndentedOutputStream* $tmp6231 = *$tmp6230;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6231));
frost$io$MemoryOutputStream** $tmp6232 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp6233 = *$tmp6232;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6233));
frost$io$IndentedOutputStream** $tmp6234 = &param0->shims;
frost$io$IndentedOutputStream* $tmp6235 = *$tmp6234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6235));
frost$collections$HashSet** $tmp6236 = &param0->declared;
frost$collections$HashSet* $tmp6237 = *$tmp6236;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6237));
frost$collections$HashSet** $tmp6238 = &param0->writtenTypes;
frost$collections$HashSet* $tmp6239 = *$tmp6238;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6239));
frost$collections$HashSet** $tmp6240 = &param0->writtenWrappers;
frost$collections$HashSet* $tmp6241 = *$tmp6240;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6241));
frost$collections$HashMap** $tmp6242 = &param0->classConstants;
frost$collections$HashMap* $tmp6243 = *$tmp6242;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6243));
frost$collections$IdentityMap** $tmp6244 = &param0->variableNames;
frost$collections$IdentityMap* $tmp6245 = *$tmp6244;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6245));
frost$core$String** $tmp6246 = &param0->currentBlock;
frost$core$String* $tmp6247 = *$tmp6246;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6247));
org$frostlang$frostc$MethodDecl** $tmp6248 = &param0->currentMethod;
org$frostlang$frostc$MethodDecl* $tmp6249 = *$tmp6248;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6249));
frost$core$String** $tmp6250 = &param0->returnValueVar;
frost$core$String* $tmp6251 = *$tmp6250;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6251));
frost$collections$Stack** $tmp6252 = &param0->enclosingContexts;
frost$collections$Stack* $tmp6253 = *$tmp6252;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6253));
frost$collections$IdentityMap** $tmp6254 = &param0->methodShims;
frost$collections$IdentityMap* $tmp6255 = *$tmp6254;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6255));
frost$collections$HashMap** $tmp6256 = &param0->refs;
frost$collections$HashMap* $tmp6257 = *$tmp6256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6257));
org$frostlang$frostc$IR** $tmp6258 = &param0->ir;
org$frostlang$frostc$IR* $tmp6259 = *$tmp6258;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6259));
return;

}

