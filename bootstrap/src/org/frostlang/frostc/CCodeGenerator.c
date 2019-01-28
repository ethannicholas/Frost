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
#include "org/frostlang/frostc/ChoiceCase.h"
#include "frost/collections/Array.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/LLVMCodeGenerator.h"
#include "org/frostlang/frostc/CCodeGenerator/ClassConstant.h"
#include "org/frostlang/frostc/CCodeGenerator/MethodShim.h"
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
org$frostlang$frostc$CCodeGenerator$class_type org$frostlang$frostc$CCodeGenerator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$CCodeGenerator$_org$frostlang$frostc$CodeGenerator, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$cleanup, org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit, org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$nextLabel$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$alignment$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$sizeOfWrapper$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$writeType$org$frostlang$frostc$Type, org$frostlang$frostc$CCodeGenerator$typeName$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$nullableType$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getITable$org$frostlang$frostc$ClassDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$createMethodShim$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$MethodShim, org$frostlang$frostc$CCodeGenerator$getWrapperITable$org$frostlang$frostc$ClassDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit, org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant, org$frostlang$frostc$CCodeGenerator$getWrapperClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant, org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$Variable$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$FieldDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$opClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$OpClass, org$frostlang$frostc$CCodeGenerator$getBinaryReference$org$frostlang$frostc$Type$frost$core$String$org$frostlang$frostc$expression$Binary$Operator$frost$core$String$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getVirtualMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getInterfaceMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getMethodReference$frost$core$String$Q$org$frostlang$frostc$MethodDecl$frost$core$Bit$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$wrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$unwrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$toNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$toNonNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getIntReference$frost$core$UInt64$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getRealReference$org$frostlang$frostc$Type$frost$core$Real64$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getBitReference$frost$core$Bit$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getNullReference$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getChoiceFieldOffset$org$frostlang$frostc$ChoiceCase$frost$core$Int64$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$writeIsNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writeIsNonNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit, org$frostlang$frostc$CCodeGenerator$writeBinary$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type, org$frostlang$frostc$CCodeGenerator$writeBranch$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$CCodeGenerator$writeCast$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type, org$frostlang$frostc$CCodeGenerator$writeConditionalBranch$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$CCodeGenerator$writeConstruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$CCodeGenerator$writeCreateStruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT, org$frostlang$frostc$CCodeGenerator$writeDynamicCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT, org$frostlang$frostc$CCodeGenerator$writeExtractField$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl, org$frostlang$frostc$CCodeGenerator$writeGetChoiceFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$writeGetFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl, org$frostlang$frostc$CCodeGenerator$writeGetInterfaceMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int64$org$frostlang$frostc$Type, org$frostlang$frostc$CCodeGenerator$writeGetVirtualMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$core$Int64$org$frostlang$frostc$Type, org$frostlang$frostc$CCodeGenerator$writeLoad$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writeNegate$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writeNot$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writePointerAlloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type, org$frostlang$frostc$CCodeGenerator$writePointerDestroy$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writePointerGetIndex$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writePointerOffset$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writePointerRealloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writePointerSetIndex$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writeReturn$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$CCodeGenerator$writeStaticCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT, org$frostlang$frostc$CCodeGenerator$writeStore$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writeStatement$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Statement, org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$CCodeGenerator$writeIR$org$frostlang$frostc$IR, org$frostlang$frostc$CCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$CCodeGenerator$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$CCodeGenerator$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$CCodeGenerator$finish} };

typedef frost$core$Error* (*$fn157)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn241)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn252)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn263)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn274)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn304)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn333)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn395)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn452)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn456)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn461)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn474)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn478)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn483)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn573)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn577)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn582)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn662)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn724)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn728)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn733)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn807)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn846)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn908)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn975)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1003)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1007)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1012)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn1054)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1085)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1089)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1094)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1120)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1170)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1176)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn1213)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1230)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn1280)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1317)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1347)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1407)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1443)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1487)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1499)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1517)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1535)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn1573)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1610)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1626)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Bit (*$fn1642)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1657)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1681)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1706)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1759)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1763)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1768)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn1810)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1846)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1850)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1855)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1881)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1962)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2142)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2146)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2151)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn2177)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2251)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn2379)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2408)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Error* (*$fn2444)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2687)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2697)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2716)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn2745)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2769)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Error* (*$fn2840)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2856)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2877)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2890)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn2908)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2932)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn2970)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn3011)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn3052)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3071)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn3085)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3093)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3124)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3138)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3145)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3164)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3178)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3200)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn3211)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn3219)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3254)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3265)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn3276)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn3288)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3293)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3310)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3322)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn3340)(frost$core$Object*);
typedef frost$core$Bit (*$fn3361)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3492)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3519)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn3566)(frost$core$Object*);
typedef frost$core$String* (*$fn3570)(frost$core$Object*);
typedef frost$core$Error* (*$fn3623)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn3629)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3633)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3638)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn3647)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Error* (*$fn3657)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn3665)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3674)(frost$collections$Key*);
typedef frost$core$Error* (*$fn3681)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn3702)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn3752)(frost$core$Object*);
typedef frost$core$String* (*$fn3764)(frost$core$Object*);
typedef frost$core$Bit (*$fn3949)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn3969)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn3985)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3995)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn4025)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn4041)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn4051)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn4086)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4255)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4276)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4286)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4305)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn4326)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn4377)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4423)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn4432)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn4436)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn4441)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn4456)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4469)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4486)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn4504)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn4521)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4538)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn4547)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn4551)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn4556)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn4563)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4574)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4587)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4629)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4698)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4741)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4770)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4788)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4813)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4830)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4858)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4903)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4921)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4936)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4952)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4967)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4983)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4998)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5040)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5065)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn5081)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn5103)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn5127)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn5146)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn5168)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn5180)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn5192)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn5203)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn5233)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5271)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5292)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5297)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn5322)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn5340)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5356)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5372)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5387)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn5397)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn5401)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn5406)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn5413)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5424)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5437)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5461)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5532)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5857)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn5873)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn5917)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5933)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5941)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn5973)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn6022)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn6036)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn6138)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn6162)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn6179)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn6183)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn6188)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn6210)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn6228)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn6245)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6254)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6262)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn6349)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn6377)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6386)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6395)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6404)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6413)(frost$io$OutputStream*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 35, -2345644890872423107, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x74\x79\x70\x65\x20", 16, 7914278075631058822, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x63\x4d\x65\x74\x68\x6f\x64\x54\x79\x70\x65\x28\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x73\x65\x6c\x66\x54\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 163, 3276100450823531157, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6e", 3, 1407949, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20", 8, 23394968824372186, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x28\x2a", 3, 1360815, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x28", 2, 14382, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s321 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s328 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s365 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s367 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6c", 2, 13945, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s507 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s513 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x38", 1, 157, NULL };
static frost$core$String $s519 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x31\x36", 2, 15204, NULL };
static frost$core$String $s525 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x33\x32", 2, 15402, NULL };
static frost$core$String $s531 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x36\x34", 2, 15707, NULL };
static frost$core$String $s534 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s561 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s646 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s714 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s791 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s836 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s859 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static frost$core$String $s863 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s876 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s880 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s890 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s900 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static frost$core$String $s902 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s934 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s962 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static frost$core$String $s981 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x69\x73\x20\x6e\x6f\x74\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 16, 538313452881261501, NULL };
static frost$core$String $s982 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s989 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static frost$core$String $s997 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s999 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1035 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x5f", 2, 13932, NULL };
static frost$core$String $s1042 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1048 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static frost$core$String $s1050 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x6e\x65\x78\x74\x3b\x20", 19, -82469649542869656, NULL };
static frost$core$String $s1058 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static frost$core$String $s1060 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s1064 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s1070 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s1072 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1076 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static frost$core$String $s1079 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1081 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1099 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static frost$core$String $s1123 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static frost$core$String $s1129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1186 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1190 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x68\x69\x6d", 5, 14375831170, NULL };
static frost$core$String $s1205 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x5f\x61\x74\x74\x72\x69\x62\x75\x74\x65\x5f\x5f\x28\x28\x77\x65\x61\x6b\x29\x29\x20", 22, 985746977287669079, NULL };
static frost$core$String $s1207 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1211 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1222 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1223 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1225 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1261 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1269 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1273 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x70", 2, 13545, NULL };
static frost$core$String $s1278 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1290 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1292 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1319 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s1338 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static frost$core$String $s1375 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70", 1, 213, NULL };
static frost$core$String $s1377 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1437 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x4f\x62\x6a\x65\x63\x74\x2a\x29\x20", 21, 439094005818830454, NULL };
static frost$core$String $s1439 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s1441 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x46\x72\x6f\x73\x74\x24\x75\x6e\x72\x65\x66\x24\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x4f\x62\x6a\x65\x63\x74\x24\x51\x28", 43, 2176290240124383769, NULL };
static frost$core$String $s1497 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20", 10, -868402795326672399, NULL };
static frost$core$String $s1515 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1528 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1530 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1565 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1571 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1584 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1586 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1612 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s1651 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x73\x75\x6c\x74", 6, 2270301397372, NULL };
static frost$core$String $s1653 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static frost$core$String $s1655 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s1683 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1735 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1744 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1745 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x63\x72\x65\x61\x74\x65\x4d\x65\x74\x68\x6f\x64\x53\x68\x69\x6d\x28\x72\x61\x77\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2c\x20\x65\x66\x66\x65\x63\x74\x69\x76\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x4d\x65\x74\x68\x6f\x64\x53\x68\x69\x6d", 206, -7873525039119771459, NULL };
static frost$core$String $s1753 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1755 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1791 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5f", 9, 1496394141948660801, NULL };
static frost$core$String $s1798 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1804 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static frost$core$String $s1806 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 21, 7276812015398014858, NULL };
static frost$core$String $s1814 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static frost$core$String $s1816 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s1820 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s1825 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1827 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x26", 3, 1451812, NULL };
static frost$core$String $s1833 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1837 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static frost$core$String $s1840 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1842 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1860 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1862 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1869 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1875 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static frost$core$String $s1894 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static frost$core$String $s1896 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1910 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2003 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static frost$core$String $s2004 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2904858913866490275, NULL };
static frost$core$String $s2037 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static frost$core$String $s2038 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static frost$core$String $s2061 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s2063 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2066 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s2068 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s2082 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s2085 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2093 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 329606069570935975, NULL };
static frost$core$String $s2095 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static frost$core$String $s2101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static frost$core$String $s2107 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s2113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s2115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2125 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2133 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static frost$core$String $s2136 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2138 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2162 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s2166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static frost$core$String $s2198 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2223 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static frost$core$String $s2237 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2904858913866490275, NULL };
static frost$core$String $s2239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2904858913866490275, NULL };
static frost$core$String $s2245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x65\x78\x74\x65\x72\x6e\x61\x6c\x20\x67\x6c\x6f\x62\x61\x6c\x20", 19, 7395979908803736066, NULL };
static frost$core$String $s2249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2279 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static frost$core$String $s2280 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static frost$core$String $s2299 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s2301 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2318 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s2321 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2329 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 329606069570935975, NULL };
static frost$core$String $s2331 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static frost$core$String $s2337 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static frost$core$String $s2343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s2349 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s2351 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2356 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2361 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2365 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static frost$core$String $s2372 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2374 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2403 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2413 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2414 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2416 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2438 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20\x7d\x3b", 4, 233187142, NULL };
static frost$core$String $s2477 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2489 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static frost$core$String $s2491 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2511 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2517 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2529 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2538 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24", 1, 137, NULL };
static frost$core$String $s2543 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2572 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s2574 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s2578 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s2580 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s2584 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s2586 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s2590 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2592 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2596 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2598 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2602 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s2604 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s2608 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s2610 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s2614 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s2616 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s2620 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s2622 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s2626 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s2628 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s2635 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s2637 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s2641 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s2643 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s2648 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s2650 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s2655 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s2657 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s2662 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s2664 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s2669 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s2671 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s2677 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s2679 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s2681 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2689 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static frost$core$String $s2695 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2704 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s2707 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2711 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2714 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s2725 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2803 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2810 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s2812 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s2815 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static frost$core$String $s2820 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x29", 2, 19635, NULL };
static frost$core$String $s2833 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static frost$core$String $s2835 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s2838 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static frost$core$String $s2846 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static frost$core$String $s2848 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, -2219903404419143126, NULL };
static frost$core$String $s2854 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s2871 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s2875 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static frost$core$String $s2892 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s2984 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2996 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s3000 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s3004 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static frost$core$String $s3009 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s3026 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3037 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6c\x6c\x69\x6e\x67\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20", 17, 6273213310080951380, NULL };
static frost$core$String $s3039 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x61\x20\x74\x61\x72\x67\x65\x74", 17, 4566770767977439161, NULL };
static frost$core$String $s3040 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3079 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s3083 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s3089 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static frost$core$String $s3091 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static frost$core$String $s3118 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s3122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s3140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s3147 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static frost$core$String $s3162 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c\x3b", 8, 14324497440495800, NULL };
static frost$core$String $s3180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s3194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s3198 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s3215 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static frost$core$String $s3217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static frost$core$String $s3233 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s3237 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 17, 6191911388433222465, NULL };
static frost$core$String $s3243 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20", 22, -4321982028467046391, NULL };
static frost$core$String $s3249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s3251 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x29\x3b", 15, -9084967859609473468, NULL };
static frost$core$String $s3260 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x76\x61\x6c\x75\x65\x20\x3d\x20", 10, -5658520382000078270, NULL };
static frost$core$String $s3263 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s3290 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s3295 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static frost$core$String $s3308 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x3b", 8, 14324500803727928, NULL };
static frost$core$String $s3324 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s3328 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3330 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3334 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3342 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3346 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3348 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3351 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2d\x3e\x76\x61\x6c\x75\x65", 8, 15272754413107790, NULL };
static frost$core$String $s3376 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s3378 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c\x20\x3f\x20", 11, 7728168270859090233, NULL };
static frost$core$String $s3382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3a\x20\x28", 4, 137624963, NULL };
static frost$core$String $s3386 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x30\x20\x7d\x29", 19, 3502995608209124108, NULL };
static frost$core$String $s3394 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3396 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static frost$core$String $s3399 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x74\x72\x75\x65\x20\x7d\x29", 9, 1573697403055851823, NULL };
static frost$core$String $s3402 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3404 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3407 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static frost$core$String $s3413 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3416 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3418 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3421 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3431 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3441 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3546 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3548 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3551 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3563 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75", 1, 218, NULL };
static frost$core$String $s3575 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s3581 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x30", 2, 14895, NULL };
static frost$core$String $s3584 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s3585 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s3586 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s3587 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s3600 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73", 2, 13952, NULL };
static frost$core$String $s3602 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3610 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 329606069570935975, NULL };
static frost$core$String $s3612 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s3616 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x24\x63\x6c\x61\x73\x73\x2c\x20", 46, -2509429713584291557, NULL };
static frost$core$String $s3618 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s3621 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x68\x61\x72\x38\x2a\x29\x20\x22", 21, 309785060753825527, NULL };
static frost$core$String $s3649 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x78", 1, 221, NULL };
static frost$core$String $s3651 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30\x3e\x32", 3, 1526261, NULL };
static frost$core$String $s3653 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x78", 2, 19613, NULL };
static frost$core$String $s3655 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3669 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22\x2c\x20", 3, 1381611, NULL };
static frost$core$String $s3671 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s3679 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x4e\x55\x4c\x4c\x20\x7d\x3b", 9, 1573656756204980508, NULL };
static frost$core$String $s3686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s3688 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3692 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3707 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3a\x20", 14, 4299600041167827879, NULL };
static frost$core$String $s3709 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3710 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3723 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3732 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3734 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x66\x61\x6c\x73\x65\x20\x7d\x29", 23, 6429304196845160675, NULL };
static frost$core$String $s3738 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3740 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x4e\x55\x4c\x4c\x29", 7, 151080389671230, NULL };
static frost$core$String $s3776 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x26\x6c\x6f\x63\x61\x6c", 7, 150085078960302, NULL };
static frost$core$String $s3778 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3817 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x61\x72\x61\x6d", 5, 22265977430, NULL };
static frost$core$String $s3819 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3850 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x64\x20", 3, 2111538, NULL };
static frost$core$String $s3852 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x68\x61\x73\x20\x6e\x6f\x74\x20\x62\x65\x65\x6e\x20\x64\x65\x66\x69\x6e\x65\x64", 21, -4672138024147032761, NULL };
static frost$core$String $s3853 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3864 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x20\x72\x65\x66\x3a\x20", 15, -4631094845120441450, NULL };
static frost$core$String $s3866 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3882 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3954 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s3959 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s3977 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3998 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s4000 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s4003 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21", 1, 134, NULL };
static frost$core$String $s4005 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static frost$core$String $s4010 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x3d\x20\x4e\x55\x4c\x4c", 8, 14324797439511602, NULL };
static frost$core$String $s4033 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4054 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s4056 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s4060 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static frost$core$String $s4065 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c", 8, 14295074875294774, NULL };
static frost$core$String $s4117 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s4119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s4123 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s4125 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s4129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s4131 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s4138 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s4140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s4144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s4146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s4150 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s4152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s4156 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s4158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s4165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s4167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s4174 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s4176 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s4183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s4185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s4192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s4194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s4201 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s4203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s4207 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s4209 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s4213 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s4215 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s4219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s4221 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s4225 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s4227 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s4229 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4237 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4272 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static frost$core$String $s4274 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4279 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4293 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static frost$core$String $s4295 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static frost$core$String $s4299 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static frost$core$String $s4303 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4308 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4317 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 16, -1641588070395923110, NULL };
static frost$core$String $s4333 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s4335 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4341 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s4343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4356 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4360 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s4365 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x66\x72\x6f\x73\x74\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 19, 1107787609391233434, NULL };
static frost$core$String $s4370 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4374 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s4392 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4400 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4416 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s4421 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s4427 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4429 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4449 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4454 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4462 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4464 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4471 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x3b", 2, 22885, NULL };
static frost$core$String $s4483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4515 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4519 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4536 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s4542 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4544 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4580 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4582 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4589 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s4597 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4614 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4618 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4622 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s4627 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4640 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4654 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static frost$core$String $s4657 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4677 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static frost$core$String $s4681 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s4685 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x29\x20\x28", 4, 147754556, NULL };
static frost$core$String $s4689 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x64\x61\x74\x61\x20", 8, 15719379260890086, NULL };
static frost$core$String $s4693 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b\x20", 2, 14576, NULL };
static frost$core$String $s4695 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s4713 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4726 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static frost$core$String $s4730 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x26", 4, 137655564, NULL };
static frost$core$String $s4734 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static frost$core$String $s4739 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4752 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4762 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static frost$core$String $s4764 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4768 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static frost$core$String $s4778 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static frost$core$String $s4780 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, -2219903404419143126, NULL };
static frost$core$String $s4786 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s4807 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4811 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static frost$core$String $s4832 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s4844 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4848 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4852 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static frost$core$String $s4856 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s4873 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4884 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4888 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s4892 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s4896 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static frost$core$String $s4900 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s4914 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4926 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4930 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x2a", 4, 137655568, NULL };
static frost$core$String $s4934 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4945 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4957 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4961 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x2d", 4, 137655571, NULL };
static frost$core$String $s4965 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4976 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4988 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4992 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x21", 4, 137655559, NULL };
static frost$core$String $s4996 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5007 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5021 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static frost$core$String $s5025 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28\x28", 5, 13903212206, NULL };
static frost$core$String $s5029 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x29\x20\x66\x72\x6f\x73\x74\x41\x6c\x6c\x6f\x63\x28", 14, 1479774152278083113, NULL };
static frost$core$String $s5033 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static frost$core$String $s5037 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static frost$core$String $s5053 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5061 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x46\x72\x65\x65\x28", 10, 1903662118626742793, NULL };
static frost$core$String $s5063 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s5070 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5089 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5093 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s5097 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s5101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s5116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5136 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s5140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static frost$core$String $s5144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x69\x7a\x65\x20\x66\x6f\x72\x20\x74\x79\x70\x65\x20", 22, 6026307984013519672, NULL };
static frost$core$String $s5185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5186 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5197 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5201 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s5208 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x66\x72\x6f\x73\x74\x52\x65\x61\x6c\x6c\x6f\x63\x28", 15, -7010250365195627110, NULL };
static frost$core$String $s5212 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static frost$core$String $s5221 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5225 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static frost$core$String $s5230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s5248 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5261 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s5265 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x20\x3d\x20", 4, 200211019, NULL };
static frost$core$String $s5269 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5280 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5288 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static frost$core$String $s5290 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5299 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x3b", 7, 229300545255632, NULL };
static frost$core$String $s5301 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5314 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5316 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5334 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5338 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5350 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5354 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s5370 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s5383 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s5385 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5392 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5394 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5430 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5432 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5439 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s5447 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5453 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s5455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s5459 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5464 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5528 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x2f\x20", 3, 1514527, NULL };
static frost$core$String $s5530 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5859 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x62\x6f\x72\x74\x28\x29\x3b\x20\x2f\x2f\x20\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 23, 8273563093259754029, NULL };
static frost$core$String $s5861 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5863 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5896 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 21864007024, NULL };
static frost$core$String $s5898 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5911 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5915 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5935 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c", 7, 141826707331641, NULL };
static frost$core$String $s5943 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s6010 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6020 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x3b", 2, 16118, NULL };
static frost$core$String $s6025 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30", 1, 149, NULL };
static frost$core$String $s6029 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30", 1, 149, NULL };
static frost$core$String $s6108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s6132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s6136 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s6141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6155 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x70\x61\x72\x61\x6d", 6, 1409599243562, NULL };
static frost$core$String $s6160 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6172 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s6174 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s6196 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x70\x61\x72\x61\x6d", 6, 1409599243562, NULL };
static frost$core$String $s6208 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6221 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s6223 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s6230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s6264 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s6276 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s6284 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s6285 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x77\x72\x69\x74\x65\x28\x6d\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2c\x20\x69\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x29", 137, -8068718440467774474, NULL };
static frost$core$String $s6291 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s6325 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x63", 2, 14946, NULL };

void org$frostlang$frostc$CCodeGenerator$init$frost$io$File(org$frostlang$frostc$CCodeGenerator* param0, frost$io$File* param1) {

// line 59
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
frost$core$Weak* $tmp8 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp8, ((frost$core$Object*) ((org$frostlang$frostc$Compiler*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$Weak** $tmp9 = &param0->compiler;
frost$core$Weak* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$Weak** $tmp11 = &param0->compiler;
*$tmp11 = $tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// line 47
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
frost$collections$IdentityMap* $tmp95 = (frost$collections$IdentityMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$IdentityMap$class);
frost$collections$IdentityMap$init($tmp95);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$collections$IdentityMap** $tmp96 = &param0->choiceDataSizes;
frost$collections$IdentityMap* $tmp97 = *$tmp96;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$collections$IdentityMap** $tmp98 = &param0->choiceDataSizes;
*$tmp98 = $tmp95;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
// line 231
frost$collections$HashMap* $tmp99 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp99);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$collections$HashMap** $tmp100 = &param0->refs;
frost$collections$HashMap* $tmp101 = *$tmp100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$collections$HashMap** $tmp102 = &param0->refs;
*$tmp102 = $tmp99;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
// line 64
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp103 = &param0->outDir;
frost$io$File* $tmp104 = *$tmp103;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$io$File** $tmp105 = &param0->outDir;
*$tmp105 = param1;
// line 65
frost$io$IndentedOutputStream* $tmp106 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream* $tmp107 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp107);
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp106, ((frost$io$OutputStream*) $tmp107));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$io$IndentedOutputStream** $tmp108 = &param0->out;
frost$io$IndentedOutputStream* $tmp109 = *$tmp108;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$io$IndentedOutputStream** $tmp110 = &param0->out;
*$tmp110 = $tmp106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
// line 66
frost$core$Weak* $tmp111 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp111, ((frost$core$Object*) param2));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
frost$core$Weak** $tmp112 = &param0->hCodeGen;
frost$core$Weak* $tmp113 = *$tmp112;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$Weak** $tmp114 = &param0->hCodeGen;
*$tmp114 = $tmp111;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
return;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1) {

// line 70
frost$core$Weak** $tmp115 = &param0->hCodeGen;
frost$core$Weak* $tmp116 = *$tmp115;
frost$core$Object* $tmp117 = frost$core$Weak$get$R$frost$core$Weak$T($tmp116);
frost$core$String* $tmp118 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(((org$frostlang$frostc$HCodeGenerator*) $tmp117), param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
frost$core$Frost$unref$frost$core$Object$Q($tmp117);
return $tmp118;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

// line 74
frost$core$Weak** $tmp119 = &param0->hCodeGen;
frost$core$Weak* $tmp120 = *$tmp119;
frost$core$Object* $tmp121 = frost$core$Weak$get$R$frost$core$Weak$T($tmp120);
frost$core$String* $tmp122 = org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(((org$frostlang$frostc$HCodeGenerator*) $tmp121), param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q($tmp121);
return $tmp122;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 78
frost$core$Weak** $tmp123 = &param0->hCodeGen;
frost$core$Weak* $tmp124 = *$tmp123;
frost$core$Object* $tmp125 = frost$core$Weak$get$R$frost$core$Weak$T($tmp124);
frost$core$Int64 $tmp126 = org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(((org$frostlang$frostc$HCodeGenerator*) $tmp125), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp125);
return $tmp126;

}
frost$core$Bit org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

// line 82
org$frostlang$frostc$ClassDecl** $tmp127 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp128 = *$tmp127;
bool $tmp129 = param1 != $tmp128;
frost$core$Bit $tmp130 = frost$core$Bit$init$builtin_bit($tmp129);
return $tmp130;

}
void org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 86
*(&local0) = ((frost$core$Error*) NULL);
// line 87
frost$core$String** $tmp131 = &param1->name;
frost$core$String* $tmp132 = *$tmp131;
frost$core$Bit $tmp133 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp132, &$s134);
bool $tmp135 = $tmp133.value;
if ($tmp135) goto block3; else goto block4;
block3:;
// line 88
frost$core$Error* $tmp136 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local0) = ((frost$core$Error*) NULL);
return;
block4:;
// line 90
frost$core$Weak** $tmp137 = &param0->hCodeGen;
frost$core$Weak* $tmp138 = *$tmp137;
frost$core$Object* $tmp139 = frost$core$Weak$get$R$frost$core$Weak$T($tmp138);
frost$core$String* $tmp140 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(((org$frostlang$frostc$HCodeGenerator*) $tmp139), param1, &$s141);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$String* $tmp142 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
*(&local1) = $tmp140;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q($tmp139);
// line 91
frost$collections$HashSet** $tmp143 = &param0->imports;
frost$collections$HashSet* $tmp144 = *$tmp143;
frost$core$String* $tmp145 = *(&local1);
frost$core$Bit $tmp146 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp144, ((frost$collections$Key*) $tmp145));
frost$core$Bit $tmp147 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp146);
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block5; else goto block6;
block5:;
// line 92
frost$io$MemoryOutputStream** $tmp149 = &param0->includes;
frost$io$MemoryOutputStream* $tmp150 = *$tmp149;
frost$core$String* $tmp151 = *(&local1);
frost$core$String* $tmp152 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s153, $tmp151);
frost$core$String* $tmp154 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp152, &$s155);
$fn157 $tmp156 = ($fn157) ((frost$io$OutputStream*) $tmp150)->$class->vtable[19];
frost$core$Error* $tmp158 = $tmp156(((frost$io$OutputStream*) $tmp150), $tmp154);
if ($tmp158 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local0) = $tmp158;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$String* $tmp159 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// line 93
frost$collections$HashSet** $tmp160 = &param0->imports;
frost$collections$HashSet* $tmp161 = *$tmp160;
frost$core$String* $tmp162 = *(&local1);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp161, ((frost$collections$Key*) $tmp162));
goto block6;
block6:;
frost$core$String* $tmp163 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 97
frost$core$Int64 $tmp164 = (frost$core$Int64) {97};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s165, $tmp164);
abort(); // unreachable
block2:;
frost$core$Error* $tmp166 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// line 102
frost$core$Bit* $tmp167 = &param1->resolved;
frost$core$Bit $tmp168 = *$tmp167;
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp170 = (frost$core$Int64) {102};
frost$core$String* $tmp171 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s172, ((frost$core$Object*) param1));
frost$core$String* $tmp173 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp171, &$s174);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s175, $tmp170, $tmp173);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
abort(); // unreachable
block1:;
// line 103
frost$core$Bit $tmp176 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(param1);
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block3; else goto block4;
block3:;
// line 104
frost$core$Weak** $tmp178 = &param0->compiler;
frost$core$Weak* $tmp179 = *$tmp178;
frost$core$Object* $tmp180 = frost$core$Weak$get$R$frost$core$Weak$T($tmp179);
org$frostlang$frostc$ClassDecl* $tmp181 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp180), param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
org$frostlang$frostc$ClassDecl* $tmp182 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local0) = $tmp181;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q($tmp180);
// line 105
org$frostlang$frostc$ClassDecl* $tmp183 = *(&local0);
frost$core$Bit $tmp184 = frost$core$Bit$init$builtin_bit($tmp183 != NULL);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp186 = (frost$core$Int64) {105};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s187, $tmp186);
abort(); // unreachable
block5:;
// line 106
org$frostlang$frostc$ClassDecl* $tmp188 = *(&local0);
org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(param0, $tmp188);
org$frostlang$frostc$ClassDecl* $tmp189 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block4;
block4:;
// line 108
org$frostlang$frostc$Type$Kind* $tmp190 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp191 = *$tmp190;
frost$core$Int64 $tmp192 = $tmp191.$rawValue;
frost$core$Int64 $tmp193 = (frost$core$Int64) {15};
frost$core$Bit $tmp194 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp192, $tmp193);
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp196 = (frost$core$Int64) {14};
frost$core$Bit $tmp197 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp192, $tmp196);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block8; else goto block10;
block8:;
// line 110
org$frostlang$frostc$Type* $tmp199 = org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
frost$core$String* $tmp200 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp199);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
return $tmp200;
block10:;
frost$core$Int64 $tmp201 = (frost$core$Int64) {17};
frost$core$Bit $tmp202 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp192, $tmp201);
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp204 = (frost$core$Int64) {16};
frost$core$Bit $tmp205 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp192, $tmp204);
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block11; else goto block13;
block11:;
// line 113
org$frostlang$frostc$Type* $tmp207 = org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
frost$core$String* $tmp208 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp207);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
return $tmp208;
block13:;
frost$core$Int64 $tmp209 = (frost$core$Int64) {10};
frost$core$Bit $tmp210 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp192, $tmp209);
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block14; else goto block7;
block14:;
// line 116
org$frostlang$frostc$FixedArray* $tmp212 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp213 = (frost$core$Int64) {0};
frost$core$Object* $tmp214 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp212, $tmp213);
frost$core$String** $tmp215 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp214))->name;
frost$core$String* $tmp216 = *$tmp215;
frost$core$Bit $tmp217 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp216, &$s218);
bool $tmp219 = $tmp217.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp214);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
if ($tmp219) goto block17; else goto block16;
block17:;
org$frostlang$frostc$FixedArray* $tmp220 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp221 = (frost$core$Int64) {1};
frost$core$Object* $tmp222 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp220, $tmp221);
frost$core$Bit $tmp223 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp222));
bool $tmp224 = $tmp223.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp222);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
if ($tmp224) goto block15; else goto block16;
block15:;
// line 117
org$frostlang$frostc$FixedArray* $tmp225 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp226 = (frost$core$Int64) {1};
frost$core$Object* $tmp227 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp225, $tmp226);
frost$core$String* $tmp228 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp227), ((org$frostlang$frostc$Type*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$core$Frost$unref$frost$core$Object$Q($tmp227);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
return $tmp228;
block16:;
goto block7;
block7:;
// line 121
frost$core$Weak** $tmp229 = &param0->hCodeGen;
frost$core$Weak* $tmp230 = *$tmp229;
frost$core$Object* $tmp231 = frost$core$Weak$get$R$frost$core$Weak$T($tmp230);
frost$core$String* $tmp232 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(((org$frostlang$frostc$HCodeGenerator*) $tmp231), param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$core$Frost$unref$frost$core$Object$Q($tmp231);
return $tmp232;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$Type* param2) {

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$Int64 local3;
frost$core$Error* local4 = NULL;
org$frostlang$frostc$Type$Kind* $tmp233 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp234 = *$tmp233;
org$frostlang$frostc$Type$Kind$wrapper* $tmp235;
$tmp235 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp235->value = $tmp234;
frost$core$Int64 $tmp236 = (frost$core$Int64) {14};
org$frostlang$frostc$Type$Kind $tmp237 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp236);
org$frostlang$frostc$Type$Kind$wrapper* $tmp238;
$tmp238 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp238->value = $tmp237;
ITable* $tmp239 = ((frost$core$Equatable*) $tmp235)->$class->itable;
while ($tmp239->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp239 = $tmp239->next;
}
$fn241 $tmp240 = $tmp239->methods[0];
frost$core$Bit $tmp242 = $tmp240(((frost$core$Equatable*) $tmp235), ((frost$core$Equatable*) $tmp238));
bool $tmp243 = $tmp242.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp238)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp235)));
if ($tmp243) goto block1; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp244 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp245 = *$tmp244;
org$frostlang$frostc$Type$Kind$wrapper* $tmp246;
$tmp246 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp246->value = $tmp245;
frost$core$Int64 $tmp247 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp248 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp247);
org$frostlang$frostc$Type$Kind$wrapper* $tmp249;
$tmp249 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp249->value = $tmp248;
ITable* $tmp250 = ((frost$core$Equatable*) $tmp246)->$class->itable;
while ($tmp250->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp250 = $tmp250->next;
}
$fn252 $tmp251 = $tmp250->methods[0];
frost$core$Bit $tmp253 = $tmp251(((frost$core$Equatable*) $tmp246), ((frost$core$Equatable*) $tmp249));
bool $tmp254 = $tmp253.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp249)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp246)));
if ($tmp254) goto block1; else goto block4;
block4:;
org$frostlang$frostc$Type$Kind* $tmp255 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp256 = *$tmp255;
org$frostlang$frostc$Type$Kind$wrapper* $tmp257;
$tmp257 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp257->value = $tmp256;
frost$core$Int64 $tmp258 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp259 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp258);
org$frostlang$frostc$Type$Kind$wrapper* $tmp260;
$tmp260 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp260->value = $tmp259;
ITable* $tmp261 = ((frost$core$Equatable*) $tmp257)->$class->itable;
while ($tmp261->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp261 = $tmp261->next;
}
$fn263 $tmp262 = $tmp261->methods[0];
frost$core$Bit $tmp264 = $tmp262(((frost$core$Equatable*) $tmp257), ((frost$core$Equatable*) $tmp260));
bool $tmp265 = $tmp264.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp260)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp257)));
if ($tmp265) goto block1; else goto block3;
block3:;
org$frostlang$frostc$Type$Kind* $tmp266 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp267 = *$tmp266;
org$frostlang$frostc$Type$Kind$wrapper* $tmp268;
$tmp268 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp268->value = $tmp267;
frost$core$Int64 $tmp269 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp270 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp269);
org$frostlang$frostc$Type$Kind$wrapper* $tmp271;
$tmp271 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp271->value = $tmp270;
ITable* $tmp272 = ((frost$core$Equatable*) $tmp268)->$class->itable;
while ($tmp272->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp272 = $tmp272->next;
}
$fn274 $tmp273 = $tmp272->methods[0];
frost$core$Bit $tmp275 = $tmp273(((frost$core$Equatable*) $tmp268), ((frost$core$Equatable*) $tmp271));
bool $tmp276 = $tmp275.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp271)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp268)));
if ($tmp276) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp277 = (frost$core$Int64) {126};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s278, $tmp277, &$s279);
abort(); // unreachable
block1:;
// line 127
frost$core$Int64* $tmp280 = &param0->varCount;
frost$core$Int64 $tmp281 = *$tmp280;
frost$core$Int64 $tmp282 = (frost$core$Int64) {1};
int64_t $tmp283 = $tmp281.value;
int64_t $tmp284 = $tmp282.value;
int64_t $tmp285 = $tmp283 + $tmp284;
frost$core$Int64 $tmp286 = (frost$core$Int64) {$tmp285};
frost$core$Int64* $tmp287 = &param0->varCount;
*$tmp287 = $tmp286;
// line 128
frost$core$Int64* $tmp288 = &param0->varCount;
frost$core$Int64 $tmp289 = *$tmp288;
frost$core$Int64$wrapper* $tmp290;
$tmp290 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp290->value = $tmp289;
frost$core$String* $tmp291 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s292, ((frost$core$Object*) $tmp290));
frost$core$String* $tmp293 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp291, &$s294);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$String* $tmp295 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local0) = $tmp293;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
// line 129
frost$core$MutableString* $tmp296 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp296, &$s297);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$core$MutableString* $tmp298 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local1) = $tmp296;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
// line 130
frost$core$MutableString* $tmp299 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp300 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
org$frostlang$frostc$FixedArray* $tmp301 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
ITable* $tmp302 = ((frost$collections$CollectionView*) $tmp301)->$class->itable;
while ($tmp302->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp302 = $tmp302->next;
}
$fn304 $tmp303 = $tmp302->methods[0];
frost$core$Int64 $tmp305 = $tmp303(((frost$collections$CollectionView*) $tmp301));
frost$core$Int64 $tmp306 = (frost$core$Int64) {1};
int64_t $tmp307 = $tmp305.value;
int64_t $tmp308 = $tmp306.value;
int64_t $tmp309 = $tmp307 - $tmp308;
frost$core$Int64 $tmp310 = (frost$core$Int64) {$tmp309};
frost$core$Object* $tmp311 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp300, $tmp310);
frost$core$String* $tmp312 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp311));
frost$core$MutableString$append$frost$core$String($tmp299, $tmp312);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
frost$core$Frost$unref$frost$core$Object$Q($tmp311);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
// line 131
frost$core$MutableString* $tmp313 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp313, &$s314);
// line 132
frost$core$MutableString* $tmp315 = *(&local1);
frost$core$String* $tmp316 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp315, $tmp316);
// line 133
frost$core$MutableString* $tmp317 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp317, &$s318);
// line 134
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s319));
frost$core$String* $tmp320 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
*(&local2) = &$s321;
// line 135
frost$core$Bit $tmp322 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block6; else goto block7;
block6:;
// line 136
frost$core$MutableString* $tmp324 = *(&local1);
frost$core$String* $tmp325 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param2);
frost$core$MutableString$append$frost$core$String($tmp324, $tmp325);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
// line 137
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s326));
frost$core$String* $tmp327 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
*(&local2) = &$s328;
goto block7;
block7:;
// line 139
frost$core$Int64 $tmp329 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp330 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
ITable* $tmp331 = ((frost$collections$CollectionView*) $tmp330)->$class->itable;
while ($tmp331->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp331 = $tmp331->next;
}
$fn333 $tmp332 = $tmp331->methods[0];
frost$core$Int64 $tmp334 = $tmp332(((frost$collections$CollectionView*) $tmp330));
frost$core$Int64 $tmp335 = (frost$core$Int64) {1};
int64_t $tmp336 = $tmp334.value;
int64_t $tmp337 = $tmp335.value;
int64_t $tmp338 = $tmp336 - $tmp337;
frost$core$Int64 $tmp339 = (frost$core$Int64) {$tmp338};
frost$core$Bit $tmp340 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp341 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp329, $tmp339, $tmp340);
frost$core$Int64 $tmp342 = $tmp341.min;
*(&local3) = $tmp342;
frost$core$Int64 $tmp343 = $tmp341.max;
frost$core$Bit $tmp344 = $tmp341.inclusive;
bool $tmp345 = $tmp344.value;
frost$core$Int64 $tmp346 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp347 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp346);
if ($tmp345) goto block11; else goto block12;
block11:;
int64_t $tmp348 = $tmp342.value;
int64_t $tmp349 = $tmp343.value;
bool $tmp350 = $tmp348 <= $tmp349;
frost$core$Bit $tmp351 = (frost$core$Bit) {$tmp350};
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block8; else goto block9;
block12:;
int64_t $tmp353 = $tmp342.value;
int64_t $tmp354 = $tmp343.value;
bool $tmp355 = $tmp353 < $tmp354;
frost$core$Bit $tmp356 = (frost$core$Bit) {$tmp355};
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block8; else goto block9;
block8:;
// line 140
frost$core$MutableString* $tmp358 = *(&local1);
frost$core$String* $tmp359 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp358, $tmp359);
// line 141
frost$core$MutableString* $tmp360 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp361 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp362 = *(&local3);
frost$core$Object* $tmp363 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp361, $tmp362);
frost$core$String* $tmp364 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp363));
frost$core$MutableString$append$frost$core$String($tmp360, $tmp364);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
frost$core$Frost$unref$frost$core$Object$Q($tmp363);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
// line 142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s365));
frost$core$String* $tmp366 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
*(&local2) = &$s367;
goto block10;
block10:;
frost$core$Int64 $tmp368 = *(&local3);
int64_t $tmp369 = $tmp343.value;
int64_t $tmp370 = $tmp368.value;
int64_t $tmp371 = $tmp369 - $tmp370;
frost$core$Int64 $tmp372 = (frost$core$Int64) {$tmp371};
frost$core$UInt64 $tmp373 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp372);
if ($tmp345) goto block14; else goto block15;
block14:;
uint64_t $tmp374 = $tmp373.value;
uint64_t $tmp375 = $tmp347.value;
bool $tmp376 = $tmp374 >= $tmp375;
frost$core$Bit $tmp377 = (frost$core$Bit) {$tmp376};
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block13; else goto block9;
block15:;
uint64_t $tmp379 = $tmp373.value;
uint64_t $tmp380 = $tmp347.value;
bool $tmp381 = $tmp379 > $tmp380;
frost$core$Bit $tmp382 = (frost$core$Bit) {$tmp381};
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block13; else goto block9;
block13:;
int64_t $tmp384 = $tmp368.value;
int64_t $tmp385 = $tmp346.value;
int64_t $tmp386 = $tmp384 + $tmp385;
frost$core$Int64 $tmp387 = (frost$core$Int64) {$tmp386};
*(&local3) = $tmp387;
goto block8;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
// line 144
frost$core$MutableString* $tmp388 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp388, &$s389);
// line 145
*(&local4) = ((frost$core$Error*) NULL);
// line 146
frost$io$MemoryOutputStream** $tmp390 = &param0->types;
frost$io$MemoryOutputStream* $tmp391 = *$tmp390;
frost$core$MutableString* $tmp392 = *(&local1);
frost$core$String* $tmp393 = frost$core$MutableString$finish$R$frost$core$String($tmp392);
$fn395 $tmp394 = ($fn395) ((frost$io$OutputStream*) $tmp391)->$class->vtable[19];
frost$core$Error* $tmp396 = $tmp394(((frost$io$OutputStream*) $tmp391), $tmp393);
if ($tmp396 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
*(&local4) = $tmp396;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
goto block16;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
goto block17;
block16:;
// line 149
frost$core$Int64 $tmp397 = (frost$core$Int64) {149};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s398, $tmp397);
abort(); // unreachable
block17:;
frost$core$Error* $tmp399 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local4) = ((frost$core$Error*) NULL);
// line 151
frost$core$String* $tmp400 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
frost$core$String* $tmp401 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp402 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp403 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
*(&local0) = ((frost$core$String*) NULL);
return $tmp400;

}
void org$frostlang$frostc$CCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Compiler* param1) {

// line 156
frost$core$Weak* $tmp404 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp404, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
frost$core$Weak** $tmp405 = &param0->compiler;
frost$core$Weak* $tmp406 = *$tmp405;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
frost$core$Weak** $tmp407 = &param0->compiler;
*$tmp407 = $tmp404;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
// line 157
frost$core$Weak** $tmp408 = &param0->hCodeGen;
frost$core$Weak* $tmp409 = *$tmp408;
frost$core$Object* $tmp410 = frost$core$Weak$get$R$frost$core$Weak$T($tmp409);
org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(((org$frostlang$frostc$HCodeGenerator*) $tmp410), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp410);
return;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0) {

// line 236
frost$core$Int64* $tmp411 = &param0->varCount;
frost$core$Int64 $tmp412 = *$tmp411;
frost$core$Int64 $tmp413 = (frost$core$Int64) {1};
int64_t $tmp414 = $tmp412.value;
int64_t $tmp415 = $tmp413.value;
int64_t $tmp416 = $tmp414 + $tmp415;
frost$core$Int64 $tmp417 = (frost$core$Int64) {$tmp416};
frost$core$Int64* $tmp418 = &param0->varCount;
*$tmp418 = $tmp417;
// line 237
frost$core$Int64* $tmp419 = &param0->varCount;
frost$core$Int64 $tmp420 = *$tmp419;
frost$core$Int64$wrapper* $tmp421;
$tmp421 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp421->value = $tmp420;
frost$core$String* $tmp422 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s423, ((frost$core$Object*) $tmp421));
frost$core$String* $tmp424 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp422, &$s425);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
return $tmp424;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$nextLabel$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0) {

// line 241
frost$core$Int64* $tmp426 = &param0->varCount;
frost$core$Int64 $tmp427 = *$tmp426;
frost$core$Int64 $tmp428 = (frost$core$Int64) {1};
int64_t $tmp429 = $tmp427.value;
int64_t $tmp430 = $tmp428.value;
int64_t $tmp431 = $tmp429 + $tmp430;
frost$core$Int64 $tmp432 = (frost$core$Int64) {$tmp431};
frost$core$Int64* $tmp433 = &param0->varCount;
*$tmp433 = $tmp432;
// line 242
frost$core$Int64* $tmp434 = &param0->varCount;
frost$core$Int64 $tmp435 = *$tmp434;
frost$core$Int64$wrapper* $tmp436;
$tmp436 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp436->value = $tmp435;
frost$core$String* $tmp437 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s438, ((frost$core$Object*) $tmp436));
frost$core$String* $tmp439 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp437, &$s440);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
return $tmp439;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Int64$nullable local0;
org$frostlang$frostc$ChoiceCase* local1 = NULL;
frost$core$Int64 local2;
org$frostlang$frostc$Type* local3 = NULL;
// line 246
frost$collections$IdentityMap** $tmp441 = &param0->choiceDataSizes;
frost$collections$IdentityMap* $tmp442 = *$tmp441;
frost$core$Object* $tmp443 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp442, ((frost$core$Object*) param1));
*(&local0) = ($tmp443 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp443)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 });
frost$core$Frost$unref$frost$core$Object$Q($tmp443);
// line 247
frost$core$Int64$nullable $tmp444 = *(&local0);
frost$core$Bit $tmp445 = frost$core$Bit$init$builtin_bit(!$tmp444.nonnull);
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block1; else goto block2;
block1:;
// line 248
frost$core$Int64 $tmp447 = (frost$core$Int64) {0};
*(&local0) = ((frost$core$Int64$nullable) { $tmp447, true });
// line 249
frost$collections$Array** $tmp448 = &param1->choiceCases;
frost$collections$Array* $tmp449 = *$tmp448;
ITable* $tmp450 = ((frost$collections$Iterable*) $tmp449)->$class->itable;
while ($tmp450->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp450 = $tmp450->next;
}
$fn452 $tmp451 = $tmp450->methods[0];
frost$collections$Iterator* $tmp453 = $tmp451(((frost$collections$Iterable*) $tmp449));
goto block3;
block3:;
ITable* $tmp454 = $tmp453->$class->itable;
while ($tmp454->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp454 = $tmp454->next;
}
$fn456 $tmp455 = $tmp454->methods[0];
frost$core$Bit $tmp457 = $tmp455($tmp453);
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block5; else goto block4;
block4:;
*(&local1) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp459 = $tmp453->$class->itable;
while ($tmp459->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp459 = $tmp459->next;
}
$fn461 $tmp460 = $tmp459->methods[1];
frost$core$Object* $tmp462 = $tmp460($tmp453);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp462)));
org$frostlang$frostc$ChoiceCase* $tmp463 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
*(&local1) = ((org$frostlang$frostc$ChoiceCase*) $tmp462);
// line 250
frost$core$Weak** $tmp464 = &param0->compiler;
frost$core$Weak* $tmp465 = *$tmp464;
frost$core$Object* $tmp466 = frost$core$Weak$get$R$frost$core$Weak$T($tmp465);
org$frostlang$frostc$ChoiceCase* $tmp467 = *(&local1);
org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ChoiceCase(((org$frostlang$frostc$Compiler*) $tmp466), $tmp467);
frost$core$Frost$unref$frost$core$Object$Q($tmp466);
// line 251
frost$core$Int64 $tmp468 = (frost$core$Int64) {0};
*(&local2) = $tmp468;
// line 252
org$frostlang$frostc$ChoiceCase* $tmp469 = *(&local1);
frost$collections$Array** $tmp470 = &$tmp469->fields;
frost$collections$Array* $tmp471 = *$tmp470;
ITable* $tmp472 = ((frost$collections$Iterable*) $tmp471)->$class->itable;
while ($tmp472->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp472 = $tmp472->next;
}
$fn474 $tmp473 = $tmp472->methods[0];
frost$collections$Iterator* $tmp475 = $tmp473(((frost$collections$Iterable*) $tmp471));
goto block6;
block6:;
ITable* $tmp476 = $tmp475->$class->itable;
while ($tmp476->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp476 = $tmp476->next;
}
$fn478 $tmp477 = $tmp476->methods[0];
frost$core$Bit $tmp479 = $tmp477($tmp475);
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block8; else goto block7;
block7:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp481 = $tmp475->$class->itable;
while ($tmp481->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp481 = $tmp481->next;
}
$fn483 $tmp482 = $tmp481->methods[1];
frost$core$Object* $tmp484 = $tmp482($tmp475);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp484)));
org$frostlang$frostc$Type* $tmp485 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp484);
// line 254
frost$core$Int64 $tmp486 = *(&local2);
org$frostlang$frostc$Type* $tmp487 = *(&local3);
frost$core$Int64 $tmp488 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp487);
int64_t $tmp489 = $tmp486.value;
int64_t $tmp490 = $tmp488.value;
int64_t $tmp491 = $tmp489 + $tmp490;
frost$core$Int64 $tmp492 = (frost$core$Int64) {$tmp491};
*(&local2) = $tmp492;
frost$core$Frost$unref$frost$core$Object$Q($tmp484);
org$frostlang$frostc$Type* $tmp493 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
// line 256
frost$core$Int64$nullable $tmp494 = *(&local0);
frost$core$Int64 $tmp495 = *(&local2);
frost$core$Int64 $tmp496 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64) $tmp494.value), $tmp495);
*(&local0) = ((frost$core$Int64$nullable) { $tmp496, true });
frost$core$Frost$unref$frost$core$Object$Q($tmp462);
org$frostlang$frostc$ChoiceCase* $tmp497 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
*(&local1) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
// line 258
frost$collections$IdentityMap** $tmp498 = &param0->choiceDataSizes;
frost$collections$IdentityMap* $tmp499 = *$tmp498;
frost$core$Int64$nullable $tmp500 = *(&local0);
frost$core$Int64$wrapper* $tmp501;
$tmp501 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp501->value = ((frost$core$Int64) $tmp500.value);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V($tmp499, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
goto block2;
block2:;
// line 260
frost$core$Int64$nullable $tmp502 = *(&local0);
return ((frost$core$Int64) $tmp502.value);

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
frost$core$Int64 local1;
org$frostlang$frostc$FieldDecl* local2 = NULL;
frost$core$Int64 local3;
frost$core$Int64 local4;
// line 264
frost$core$Bit* $tmp503 = &param1->resolved;
frost$core$Bit $tmp504 = *$tmp503;
bool $tmp505 = $tmp504.value;
if ($tmp505) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp506 = (frost$core$Int64) {264};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s507, $tmp506);
abort(); // unreachable
block1:;
// line 265
frost$core$Bit $tmp508 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(param1);
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block3; else goto block4;
block3:;
// line 266
frost$core$String** $tmp510 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp511 = *$tmp510;
frost$core$Bit $tmp512 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp511, &$s513);
bool $tmp514 = $tmp512.value;
if ($tmp514) goto block5; else goto block6;
block5:;
// line 267
frost$core$Int64 $tmp515 = (frost$core$Int64) {1};
return $tmp515;
block6:;
// line 269
frost$core$String** $tmp516 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp517 = *$tmp516;
frost$core$Bit $tmp518 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp517, &$s519);
bool $tmp520 = $tmp518.value;
if ($tmp520) goto block7; else goto block8;
block7:;
// line 270
frost$core$Int64 $tmp521 = (frost$core$Int64) {2};
return $tmp521;
block8:;
// line 272
frost$core$String** $tmp522 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp523 = *$tmp522;
frost$core$Bit $tmp524 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp523, &$s525);
bool $tmp526 = $tmp524.value;
if ($tmp526) goto block9; else goto block10;
block9:;
// line 273
frost$core$Int64 $tmp527 = (frost$core$Int64) {4};
return $tmp527;
block10:;
// line 275
frost$core$String** $tmp528 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp529 = *$tmp528;
frost$core$Bit $tmp530 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp529, &$s531);
bool $tmp532 = $tmp530.value;
if ($tmp532) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp533 = (frost$core$Int64) {275};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s534, $tmp533);
abort(); // unreachable
block11:;
// line 276
frost$core$Int64 $tmp535 = (frost$core$Int64) {8};
return $tmp535;
block4:;
// line 278
org$frostlang$frostc$Type* $tmp536 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp537 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param1, $tmp536);
bool $tmp538 = $tmp537.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
if ($tmp538) goto block13; else goto block14;
block13:;
// line 279
frost$core$Int64 $tmp539 = (frost$core$Int64) {1};
return $tmp539;
block14:;
// line 281
frost$core$Weak** $tmp540 = &param0->compiler;
frost$core$Weak* $tmp541 = *$tmp540;
frost$core$Object* $tmp542 = frost$core$Weak$get$R$frost$core$Weak$T($tmp541);
org$frostlang$frostc$ClassDecl* $tmp543 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp542), param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
org$frostlang$frostc$ClassDecl* $tmp544 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
*(&local0) = $tmp543;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
frost$core$Frost$unref$frost$core$Object$Q($tmp542);
// line 282
org$frostlang$frostc$ClassDecl* $tmp545 = *(&local0);
frost$core$Bit $tmp546 = frost$core$Bit$init$builtin_bit($tmp545 != NULL);
bool $tmp547 = $tmp546.value;
if ($tmp547) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp548 = (frost$core$Int64) {282};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s549, $tmp548);
abort(); // unreachable
block15:;
// line 283
frost$core$Weak** $tmp550 = &param0->compiler;
frost$core$Weak* $tmp551 = *$tmp550;
frost$core$Object* $tmp552 = frost$core$Weak$get$R$frost$core$Weak$T($tmp551);
org$frostlang$frostc$ClassDecl* $tmp553 = *(&local0);
frost$core$Bit $tmp554 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp552), $tmp553);
frost$core$Bit $tmp555 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp554);
bool $tmp556 = $tmp555.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp552);
if ($tmp556) goto block17; else goto block19;
block19:;
org$frostlang$frostc$ClassDecl* $tmp557 = *(&local0);
frost$core$String** $tmp558 = &$tmp557->name;
frost$core$String* $tmp559 = *$tmp558;
frost$core$Bit $tmp560 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp559, &$s561);
bool $tmp562 = $tmp560.value;
if ($tmp562) goto block17; else goto block18;
block17:;
// line 284
frost$core$Int64 $tmp563 = (frost$core$Int64) {8};
org$frostlang$frostc$ClassDecl* $tmp564 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp563;
block18:;
// line 286
frost$core$Int64 $tmp565 = (frost$core$Int64) {0};
*(&local1) = $tmp565;
// line 287
frost$core$Weak** $tmp566 = &param0->compiler;
frost$core$Weak* $tmp567 = *$tmp566;
frost$core$Object* $tmp568 = frost$core$Weak$get$R$frost$core$Weak$T($tmp567);
org$frostlang$frostc$ClassDecl* $tmp569 = *(&local0);
frost$collections$ListView* $tmp570 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp568), $tmp569);
ITable* $tmp571 = ((frost$collections$Iterable*) $tmp570)->$class->itable;
while ($tmp571->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp571 = $tmp571->next;
}
$fn573 $tmp572 = $tmp571->methods[0];
frost$collections$Iterator* $tmp574 = $tmp572(((frost$collections$Iterable*) $tmp570));
goto block20;
block20:;
ITable* $tmp575 = $tmp574->$class->itable;
while ($tmp575->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp575 = $tmp575->next;
}
$fn577 $tmp576 = $tmp575->methods[0];
frost$core$Bit $tmp578 = $tmp576($tmp574);
bool $tmp579 = $tmp578.value;
if ($tmp579) goto block22; else goto block21;
block21:;
*(&local2) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp580 = $tmp574->$class->itable;
while ($tmp580->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp580 = $tmp580->next;
}
$fn582 $tmp581 = $tmp580->methods[1];
frost$core$Object* $tmp583 = $tmp581($tmp574);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp583)));
org$frostlang$frostc$FieldDecl* $tmp584 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
*(&local2) = ((org$frostlang$frostc$FieldDecl*) $tmp583);
// line 288
org$frostlang$frostc$FieldDecl* $tmp585 = *(&local2);
org$frostlang$frostc$Annotations** $tmp586 = &$tmp585->annotations;
org$frostlang$frostc$Annotations* $tmp587 = *$tmp586;
frost$core$Bit $tmp588 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp587);
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block23; else goto block24;
block23:;
// line 289
frost$core$Frost$unref$frost$core$Object$Q($tmp583);
org$frostlang$frostc$FieldDecl* $tmp590 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
*(&local2) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block20;
block24:;
// line 291
frost$core$Weak** $tmp591 = &param0->compiler;
frost$core$Weak* $tmp592 = *$tmp591;
frost$core$Object* $tmp593 = frost$core$Weak$get$R$frost$core$Weak$T($tmp592);
org$frostlang$frostc$FieldDecl* $tmp594 = *(&local2);
frost$core$Bit $tmp595 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp593), $tmp594);
frost$core$Frost$unref$frost$core$Object$Q($tmp593);
// line 292
org$frostlang$frostc$FieldDecl* $tmp596 = *(&local2);
org$frostlang$frostc$Type** $tmp597 = &$tmp596->type;
org$frostlang$frostc$Type* $tmp598 = *$tmp597;
org$frostlang$frostc$Type* $tmp599 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp600 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp598, $tmp599);
bool $tmp601 = $tmp600.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
if ($tmp601) goto block25; else goto block27;
block25:;
// line 294
frost$core$Int64 $tmp602 = *(&local1);
frost$core$Weak** $tmp603 = &param0->hCodeGen;
frost$core$Weak* $tmp604 = *$tmp603;
frost$core$Object* $tmp605 = frost$core$Weak$get$R$frost$core$Weak$T($tmp604);
org$frostlang$frostc$LLVMCodeGenerator** $tmp606 = &((org$frostlang$frostc$HCodeGenerator*) $tmp605)->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp607 = *$tmp606;
org$frostlang$frostc$ClassDecl* $tmp608 = *(&local0);
frost$core$Int64 $tmp609 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64($tmp607, $tmp608);
int64_t $tmp610 = $tmp602.value;
int64_t $tmp611 = $tmp609.value;
int64_t $tmp612 = $tmp610 + $tmp611;
frost$core$Int64 $tmp613 = (frost$core$Int64) {$tmp612};
*(&local1) = $tmp613;
frost$core$Frost$unref$frost$core$Object$Q($tmp605);
goto block26;
block27:;
// line 1
// line 297
org$frostlang$frostc$FieldDecl* $tmp614 = *(&local2);
org$frostlang$frostc$Type** $tmp615 = &$tmp614->type;
org$frostlang$frostc$Type* $tmp616 = *$tmp615;
frost$core$Int64 $tmp617 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp616);
*(&local3) = $tmp617;
// line 298
frost$core$Int64 $tmp618 = *(&local1);
frost$core$Int64 $tmp619 = *(&local3);
frost$core$Int64 $tmp620 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp618, $tmp619);
*(&local4) = $tmp620;
// line 299
frost$core$Int64 $tmp621 = *(&local4);
frost$core$Int64 $tmp622 = (frost$core$Int64) {0};
int64_t $tmp623 = $tmp621.value;
int64_t $tmp624 = $tmp622.value;
bool $tmp625 = $tmp623 != $tmp624;
frost$core$Bit $tmp626 = (frost$core$Bit) {$tmp625};
bool $tmp627 = $tmp626.value;
if ($tmp627) goto block28; else goto block29;
block28:;
// line 300
frost$core$Int64 $tmp628 = *(&local1);
frost$core$Int64 $tmp629 = *(&local3);
frost$core$Int64 $tmp630 = *(&local4);
int64_t $tmp631 = $tmp629.value;
int64_t $tmp632 = $tmp630.value;
int64_t $tmp633 = $tmp631 - $tmp632;
frost$core$Int64 $tmp634 = (frost$core$Int64) {$tmp633};
int64_t $tmp635 = $tmp628.value;
int64_t $tmp636 = $tmp634.value;
int64_t $tmp637 = $tmp635 + $tmp636;
frost$core$Int64 $tmp638 = (frost$core$Int64) {$tmp637};
*(&local1) = $tmp638;
goto block29;
block29:;
// line 302
frost$core$Int64 $tmp639 = *(&local1);
frost$core$Int64 $tmp640 = *(&local3);
frost$core$Int64 $tmp641 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp639, $tmp640);
frost$core$Int64 $tmp642 = (frost$core$Int64) {0};
frost$core$Bit $tmp643 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp641, $tmp642);
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp645 = (frost$core$Int64) {302};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s646, $tmp645);
abort(); // unreachable
block30:;
// line 303
frost$core$Int64 $tmp647 = *(&local1);
frost$core$Int64 $tmp648 = *(&local3);
int64_t $tmp649 = $tmp647.value;
int64_t $tmp650 = $tmp648.value;
int64_t $tmp651 = $tmp649 + $tmp650;
frost$core$Int64 $tmp652 = (frost$core$Int64) {$tmp651};
*(&local1) = $tmp652;
goto block26;
block26:;
frost$core$Frost$unref$frost$core$Object$Q($tmp583);
org$frostlang$frostc$FieldDecl* $tmp653 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
*(&local2) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block20;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
frost$core$Frost$unref$frost$core$Object$Q($tmp568);
// line 306
org$frostlang$frostc$Type$Kind* $tmp654 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp655 = *$tmp654;
org$frostlang$frostc$Type$Kind$wrapper* $tmp656;
$tmp656 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp656->value = $tmp655;
frost$core$Int64 $tmp657 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp658 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp657);
org$frostlang$frostc$Type$Kind$wrapper* $tmp659;
$tmp659 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp659->value = $tmp658;
ITable* $tmp660 = ((frost$core$Equatable*) $tmp656)->$class->itable;
while ($tmp660->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp660 = $tmp660->next;
}
$fn662 $tmp661 = $tmp660->methods[0];
frost$core$Bit $tmp663 = $tmp661(((frost$core$Equatable*) $tmp656), ((frost$core$Equatable*) $tmp659));
bool $tmp664 = $tmp663.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp659)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp656)));
if ($tmp664) goto block32; else goto block33;
block32:;
// line 307
frost$core$Int64 $tmp665 = *(&local1);
frost$core$Int64 $tmp666 = (frost$core$Int64) {1};
int64_t $tmp667 = $tmp665.value;
int64_t $tmp668 = $tmp666.value;
int64_t $tmp669 = $tmp667 + $tmp668;
frost$core$Int64 $tmp670 = (frost$core$Int64) {$tmp669};
*(&local1) = $tmp670;
goto block33;
block33:;
// line 309
frost$core$Int64 $tmp671 = *(&local1);
org$frostlang$frostc$ClassDecl* $tmp672 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp671;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$alignment$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 313
frost$core$Int64 $tmp673 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param1);
frost$core$Int64 $tmp674 = (frost$core$Int64) {8};
frost$core$Int64 $tmp675 = frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64($tmp673, $tmp674);
return $tmp675;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 317
frost$core$Int64 $tmp676 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp676;
// line 318
frost$core$Int64 $tmp677 = org$frostlang$frostc$CCodeGenerator$alignment$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param1);
*(&local1) = $tmp677;
// line 319
frost$core$Int64 $tmp678 = *(&local0);
frost$core$Int64 $tmp679 = *(&local1);
frost$core$Int64 $tmp680 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp678, $tmp679);
frost$core$Int64 $tmp681 = (frost$core$Int64) {0};
frost$core$Bit $tmp682 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp680, $tmp681);
bool $tmp683 = $tmp682.value;
if ($tmp683) goto block1; else goto block2;
block1:;
// line 320
frost$core$Int64 $tmp684 = *(&local0);
return $tmp684;
block2:;
// line 322
frost$core$Int64 $tmp685 = *(&local0);
frost$core$Int64 $tmp686 = *(&local1);
int64_t $tmp687 = $tmp685.value;
int64_t $tmp688 = $tmp686.value;
int64_t $tmp689 = $tmp687 + $tmp688;
frost$core$Int64 $tmp690 = (frost$core$Int64) {$tmp689};
frost$core$Int64 $tmp691 = *(&local0);
frost$core$Int64 $tmp692 = *(&local1);
frost$core$Int64 $tmp693 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp691, $tmp692);
int64_t $tmp694 = $tmp690.value;
int64_t $tmp695 = $tmp693.value;
int64_t $tmp696 = $tmp694 - $tmp695;
frost$core$Int64 $tmp697 = (frost$core$Int64) {$tmp696};
return $tmp697;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$sizeOfWrapper$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
frost$core$Bit local1;
frost$core$Int64 local2;
org$frostlang$frostc$FieldDecl* local3 = NULL;
frost$core$Int64 local4;
frost$core$Int64 local5;
// line 326
frost$core$Weak** $tmp698 = &param0->compiler;
frost$core$Weak* $tmp699 = *$tmp698;
frost$core$Object* $tmp700 = frost$core$Weak$get$R$frost$core$Weak$T($tmp699);
org$frostlang$frostc$ClassDecl* $tmp701 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp700), param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
org$frostlang$frostc$ClassDecl* $tmp702 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
*(&local0) = $tmp701;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
frost$core$Frost$unref$frost$core$Object$Q($tmp700);
// line 327
org$frostlang$frostc$ClassDecl* $tmp703 = *(&local0);
frost$core$Bit $tmp704 = frost$core$Bit$init$builtin_bit($tmp703 != NULL);
bool $tmp705 = $tmp704.value;
if ($tmp705) goto block1; else goto block2;
block1:;
frost$core$Weak** $tmp706 = &param0->compiler;
frost$core$Weak* $tmp707 = *$tmp706;
frost$core$Object* $tmp708 = frost$core$Weak$get$R$frost$core$Weak$T($tmp707);
org$frostlang$frostc$ClassDecl* $tmp709 = *(&local0);
frost$core$Bit $tmp710 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp708), $tmp709);
frost$core$Frost$unref$frost$core$Object$Q($tmp708);
*(&local1) = $tmp710;
goto block3;
block2:;
*(&local1) = $tmp704;
goto block3;
block3:;
frost$core$Bit $tmp711 = *(&local1);
bool $tmp712 = $tmp711.value;
if ($tmp712) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp713 = (frost$core$Int64) {327};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s714, $tmp713);
abort(); // unreachable
block4:;
// line 328
org$frostlang$frostc$Type* $tmp715 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Int64 $tmp716 = org$frostlang$frostc$CCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp715);
*(&local2) = $tmp716;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
// line 329
frost$core$Weak** $tmp717 = &param0->compiler;
frost$core$Weak* $tmp718 = *$tmp717;
frost$core$Object* $tmp719 = frost$core$Weak$get$R$frost$core$Weak$T($tmp718);
org$frostlang$frostc$ClassDecl* $tmp720 = *(&local0);
frost$collections$ListView* $tmp721 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp719), $tmp720);
ITable* $tmp722 = ((frost$collections$Iterable*) $tmp721)->$class->itable;
while ($tmp722->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp722 = $tmp722->next;
}
$fn724 $tmp723 = $tmp722->methods[0];
frost$collections$Iterator* $tmp725 = $tmp723(((frost$collections$Iterable*) $tmp721));
goto block6;
block6:;
ITable* $tmp726 = $tmp725->$class->itable;
while ($tmp726->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp726 = $tmp726->next;
}
$fn728 $tmp727 = $tmp726->methods[0];
frost$core$Bit $tmp729 = $tmp727($tmp725);
bool $tmp730 = $tmp729.value;
if ($tmp730) goto block8; else goto block7;
block7:;
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp731 = $tmp725->$class->itable;
while ($tmp731->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp731 = $tmp731->next;
}
$fn733 $tmp732 = $tmp731->methods[1];
frost$core$Object* $tmp734 = $tmp732($tmp725);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp734)));
org$frostlang$frostc$FieldDecl* $tmp735 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) $tmp734);
// line 330
frost$core$Weak** $tmp736 = &param0->compiler;
frost$core$Weak* $tmp737 = *$tmp736;
frost$core$Object* $tmp738 = frost$core$Weak$get$R$frost$core$Weak$T($tmp737);
org$frostlang$frostc$FieldDecl* $tmp739 = *(&local3);
frost$core$Bit $tmp740 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp738), $tmp739);
frost$core$Frost$unref$frost$core$Object$Q($tmp738);
// line 331
org$frostlang$frostc$FieldDecl* $tmp741 = *(&local3);
org$frostlang$frostc$Type** $tmp742 = &$tmp741->type;
org$frostlang$frostc$Type* $tmp743 = *$tmp742;
org$frostlang$frostc$Type* $tmp744 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp745 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp743, $tmp744);
bool $tmp746 = $tmp745.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
if ($tmp746) goto block9; else goto block11;
block9:;
// line 333
frost$core$Int64 $tmp747 = *(&local2);
frost$core$Weak** $tmp748 = &param0->hCodeGen;
frost$core$Weak* $tmp749 = *$tmp748;
frost$core$Object* $tmp750 = frost$core$Weak$get$R$frost$core$Weak$T($tmp749);
org$frostlang$frostc$LLVMCodeGenerator** $tmp751 = &((org$frostlang$frostc$HCodeGenerator*) $tmp750)->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp752 = *$tmp751;
org$frostlang$frostc$ClassDecl* $tmp753 = *(&local0);
frost$core$Int64 $tmp754 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64($tmp752, $tmp753);
int64_t $tmp755 = $tmp747.value;
int64_t $tmp756 = $tmp754.value;
int64_t $tmp757 = $tmp755 + $tmp756;
frost$core$Int64 $tmp758 = (frost$core$Int64) {$tmp757};
*(&local2) = $tmp758;
frost$core$Frost$unref$frost$core$Object$Q($tmp750);
goto block10;
block11:;
// line 1
// line 336
org$frostlang$frostc$FieldDecl* $tmp759 = *(&local3);
org$frostlang$frostc$Type** $tmp760 = &$tmp759->type;
org$frostlang$frostc$Type* $tmp761 = *$tmp760;
frost$core$Int64 $tmp762 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp761);
*(&local4) = $tmp762;
// line 337
frost$core$Int64 $tmp763 = *(&local2);
frost$core$Int64 $tmp764 = *(&local4);
frost$core$Int64 $tmp765 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp763, $tmp764);
*(&local5) = $tmp765;
// line 338
frost$core$Int64 $tmp766 = *(&local5);
frost$core$Int64 $tmp767 = (frost$core$Int64) {0};
int64_t $tmp768 = $tmp766.value;
int64_t $tmp769 = $tmp767.value;
bool $tmp770 = $tmp768 != $tmp769;
frost$core$Bit $tmp771 = (frost$core$Bit) {$tmp770};
bool $tmp772 = $tmp771.value;
if ($tmp772) goto block12; else goto block13;
block12:;
// line 339
frost$core$Int64 $tmp773 = *(&local2);
frost$core$Int64 $tmp774 = *(&local4);
frost$core$Int64 $tmp775 = *(&local5);
int64_t $tmp776 = $tmp774.value;
int64_t $tmp777 = $tmp775.value;
int64_t $tmp778 = $tmp776 - $tmp777;
frost$core$Int64 $tmp779 = (frost$core$Int64) {$tmp778};
int64_t $tmp780 = $tmp773.value;
int64_t $tmp781 = $tmp779.value;
int64_t $tmp782 = $tmp780 + $tmp781;
frost$core$Int64 $tmp783 = (frost$core$Int64) {$tmp782};
*(&local2) = $tmp783;
goto block13;
block13:;
// line 341
frost$core$Int64 $tmp784 = *(&local2);
frost$core$Int64 $tmp785 = *(&local4);
frost$core$Int64 $tmp786 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp784, $tmp785);
frost$core$Int64 $tmp787 = (frost$core$Int64) {0};
frost$core$Bit $tmp788 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp786, $tmp787);
bool $tmp789 = $tmp788.value;
if ($tmp789) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp790 = (frost$core$Int64) {341};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s791, $tmp790);
abort(); // unreachable
block14:;
// line 342
frost$core$Int64 $tmp792 = *(&local2);
frost$core$Int64 $tmp793 = *(&local4);
int64_t $tmp794 = $tmp792.value;
int64_t $tmp795 = $tmp793.value;
int64_t $tmp796 = $tmp794 + $tmp795;
frost$core$Int64 $tmp797 = (frost$core$Int64) {$tmp796};
*(&local2) = $tmp797;
goto block10;
block10:;
frost$core$Frost$unref$frost$core$Object$Q($tmp734);
org$frostlang$frostc$FieldDecl* $tmp798 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
frost$core$Frost$unref$frost$core$Object$Q($tmp719);
// line 345
org$frostlang$frostc$Type$Kind* $tmp799 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp800 = *$tmp799;
org$frostlang$frostc$Type$Kind$wrapper* $tmp801;
$tmp801 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp801->value = $tmp800;
frost$core$Int64 $tmp802 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp803 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp802);
org$frostlang$frostc$Type$Kind$wrapper* $tmp804;
$tmp804 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp804->value = $tmp803;
ITable* $tmp805 = ((frost$core$Equatable*) $tmp801)->$class->itable;
while ($tmp805->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp805 = $tmp805->next;
}
$fn807 $tmp806 = $tmp805->methods[0];
frost$core$Bit $tmp808 = $tmp806(((frost$core$Equatable*) $tmp801), ((frost$core$Equatable*) $tmp804));
bool $tmp809 = $tmp808.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp804)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp801)));
if ($tmp809) goto block16; else goto block17;
block16:;
// line 346
frost$core$Int64 $tmp810 = *(&local2);
frost$core$Int64 $tmp811 = (frost$core$Int64) {1};
int64_t $tmp812 = $tmp810.value;
int64_t $tmp813 = $tmp811.value;
int64_t $tmp814 = $tmp812 + $tmp813;
frost$core$Int64 $tmp815 = (frost$core$Int64) {$tmp814};
*(&local2) = $tmp815;
goto block17;
block17:;
// line 348
frost$core$Int64 $tmp816 = *(&local2);
org$frostlang$frostc$ClassDecl* $tmp817 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp816;

}
void org$frostlang$frostc$CCodeGenerator$writeType$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 352
frost$collections$HashSet** $tmp818 = &param0->writtenTypes;
frost$collections$HashSet* $tmp819 = *$tmp818;
frost$core$String** $tmp820 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp821 = *$tmp820;
frost$core$Bit $tmp822 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp819, ((frost$collections$Key*) $tmp821));
bool $tmp823 = $tmp822.value;
if ($tmp823) goto block1; else goto block2;
block1:;
// line 353
return;
block2:;
return;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$typeName$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 358
frost$core$String** $tmp824 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp825 = *$tmp824;
frost$core$String* $tmp826 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp825);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
return $tmp826;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// line 362
frost$core$Weak** $tmp827 = &param0->compiler;
frost$core$Weak* $tmp828 = *$tmp827;
frost$core$Object* $tmp829 = frost$core$Weak$get$R$frost$core$Weak$T($tmp828);
org$frostlang$frostc$ClassDecl* $tmp830 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp829), param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
org$frostlang$frostc$ClassDecl* $tmp831 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
*(&local0) = $tmp830;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$Frost$unref$frost$core$Object$Q($tmp829);
// line 363
org$frostlang$frostc$ClassDecl* $tmp832 = *(&local0);
frost$core$Bit $tmp833 = frost$core$Bit$init$builtin_bit($tmp832 != NULL);
bool $tmp834 = $tmp833.value;
if ($tmp834) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp835 = (frost$core$Int64) {363};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s836, $tmp835);
abort(); // unreachable
block1:;
// line 364
org$frostlang$frostc$ClassDecl* $tmp837 = *(&local0);
org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(param0, $tmp837);
// line 365
org$frostlang$frostc$Type$Kind* $tmp838 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp839 = *$tmp838;
org$frostlang$frostc$Type$Kind$wrapper* $tmp840;
$tmp840 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp840->value = $tmp839;
frost$core$Int64 $tmp841 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp842 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp841);
org$frostlang$frostc$Type$Kind$wrapper* $tmp843;
$tmp843 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp843->value = $tmp842;
ITable* $tmp844 = ((frost$core$Equatable*) $tmp840)->$class->itable;
while ($tmp844->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp844 = $tmp844->next;
}
$fn846 $tmp845 = $tmp844->methods[0];
frost$core$Bit $tmp847 = $tmp845(((frost$core$Equatable*) $tmp840), ((frost$core$Equatable*) $tmp843));
bool $tmp848 = $tmp847.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp843)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp840)));
if ($tmp848) goto block3; else goto block4;
block3:;
// line 366
org$frostlang$frostc$FixedArray* $tmp849 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp850 = (frost$core$Int64) {0};
frost$core$Object* $tmp851 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp849, $tmp850);
frost$core$String* $tmp852 = org$frostlang$frostc$CCodeGenerator$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp851));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
frost$core$Frost$unref$frost$core$Object$Q($tmp851);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
org$frostlang$frostc$ClassDecl* $tmp853 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp852;
block4:;
// line 368
frost$core$String** $tmp854 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp855 = *$tmp854;
frost$core$String* $tmp856 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp855);
frost$core$String* $tmp857 = frost$core$String$get_asString$R$frost$core$String($tmp856);
frost$core$String* $tmp858 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp857, &$s859);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
org$frostlang$frostc$ClassDecl* $tmp860 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp858;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 372
frost$core$String* $tmp861 = org$frostlang$frostc$CCodeGenerator$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp862 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp861, &$s863);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
return $tmp862;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

org$frostlang$frostc$Type* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$Int64 local2;
// line 376
frost$core$Weak** $tmp864 = &param0->compiler;
frost$core$Weak* $tmp865 = *$tmp864;
frost$core$Object* $tmp866 = frost$core$Weak$get$R$frost$core$Weak$T($tmp865);
org$frostlang$frostc$Type* $tmp867 = org$frostlang$frostc$Compiler$inheritedType$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp866), param1);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
org$frostlang$frostc$Type* $tmp868 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
*(&local0) = $tmp867;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
frost$core$Frost$unref$frost$core$Object$Q($tmp866);
// line 377
frost$core$MutableString* $tmp869 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp869);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
frost$core$MutableString* $tmp870 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
*(&local1) = $tmp869;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
// line 378
frost$core$MutableString* $tmp871 = *(&local1);
org$frostlang$frostc$Type* $tmp872 = *(&local0);
org$frostlang$frostc$Type* $tmp873 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp872);
frost$core$String* $tmp874 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp873);
frost$core$MutableString$append$frost$core$String($tmp871, $tmp874);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
// line 379
frost$core$MutableString* $tmp875 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp875, &$s876);
// line 380
frost$core$Bit $tmp877 = org$frostlang$frostc$MethodDecl$isInstance$R$frost$core$Bit(param1);
bool $tmp878 = $tmp877.value;
if ($tmp878) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp879 = (frost$core$Int64) {380};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s880, $tmp879);
abort(); // unreachable
block1:;
// line 381
frost$core$MutableString* $tmp881 = *(&local1);
frost$core$Weak** $tmp882 = &param1->owner;
frost$core$Weak* $tmp883 = *$tmp882;
frost$core$Object* $tmp884 = frost$core$Weak$get$R$frost$core$Weak$T($tmp883);
frost$core$String** $tmp885 = &((org$frostlang$frostc$ClassDecl*) $tmp884)->name;
frost$core$String* $tmp886 = *$tmp885;
frost$core$String* $tmp887 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp886);
frost$core$String* $tmp888 = frost$core$String$get_asString$R$frost$core$String($tmp887);
frost$core$String* $tmp889 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp888, &$s890);
frost$core$MutableString$append$frost$core$String($tmp881, $tmp889);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
frost$core$Frost$unref$frost$core$Object$Q($tmp884);
// line 382
frost$core$Weak** $tmp891 = &param0->compiler;
frost$core$Weak* $tmp892 = *$tmp891;
frost$core$Object* $tmp893 = frost$core$Weak$get$R$frost$core$Weak$T($tmp892);
frost$core$Weak** $tmp894 = &param1->owner;
frost$core$Weak* $tmp895 = *$tmp894;
frost$core$Object* $tmp896 = frost$core$Weak$get$R$frost$core$Weak$T($tmp895);
frost$core$Bit $tmp897 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp893), ((org$frostlang$frostc$ClassDecl*) $tmp896));
bool $tmp898 = $tmp897.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp896);
frost$core$Frost$unref$frost$core$Object$Q($tmp893);
if ($tmp898) goto block3; else goto block4;
block3:;
// line 383
frost$core$MutableString* $tmp899 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp899, &$s900);
goto block4;
block4:;
// line 385
frost$core$MutableString* $tmp901 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp901, &$s902);
// line 386
frost$core$Int64 $tmp903 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp904 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp905 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp904);
ITable* $tmp906 = ((frost$collections$CollectionView*) $tmp905)->$class->itable;
while ($tmp906->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp906 = $tmp906->next;
}
$fn908 $tmp907 = $tmp906->methods[0];
frost$core$Int64 $tmp909 = $tmp907(((frost$collections$CollectionView*) $tmp905));
frost$core$Int64 $tmp910 = (frost$core$Int64) {1};
int64_t $tmp911 = $tmp909.value;
int64_t $tmp912 = $tmp910.value;
int64_t $tmp913 = $tmp911 - $tmp912;
frost$core$Int64 $tmp914 = (frost$core$Int64) {$tmp913};
frost$core$Bit $tmp915 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp916 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp903, $tmp914, $tmp915);
frost$core$Int64 $tmp917 = $tmp916.min;
*(&local2) = $tmp917;
frost$core$Int64 $tmp918 = $tmp916.max;
frost$core$Bit $tmp919 = $tmp916.inclusive;
bool $tmp920 = $tmp919.value;
frost$core$Int64 $tmp921 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp922 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp921);
if ($tmp920) goto block8; else goto block9;
block8:;
int64_t $tmp923 = $tmp917.value;
int64_t $tmp924 = $tmp918.value;
bool $tmp925 = $tmp923 <= $tmp924;
frost$core$Bit $tmp926 = (frost$core$Bit) {$tmp925};
bool $tmp927 = $tmp926.value;
if ($tmp927) goto block5; else goto block6;
block9:;
int64_t $tmp928 = $tmp917.value;
int64_t $tmp929 = $tmp918.value;
bool $tmp930 = $tmp928 < $tmp929;
frost$core$Bit $tmp931 = (frost$core$Bit) {$tmp930};
bool $tmp932 = $tmp931.value;
if ($tmp932) goto block5; else goto block6;
block5:;
// line 387
frost$core$MutableString* $tmp933 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp933, &$s934);
// line 388
frost$core$MutableString* $tmp935 = *(&local1);
org$frostlang$frostc$Type* $tmp936 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp937 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp936);
frost$core$Int64 $tmp938 = *(&local2);
frost$core$Object* $tmp939 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp937, $tmp938);
frost$core$String* $tmp940 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp939));
frost$core$MutableString$append$frost$core$String($tmp935, $tmp940);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
frost$core$Frost$unref$frost$core$Object$Q($tmp939);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
goto block7;
block7:;
frost$core$Int64 $tmp941 = *(&local2);
int64_t $tmp942 = $tmp918.value;
int64_t $tmp943 = $tmp941.value;
int64_t $tmp944 = $tmp942 - $tmp943;
frost$core$Int64 $tmp945 = (frost$core$Int64) {$tmp944};
frost$core$UInt64 $tmp946 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp945);
if ($tmp920) goto block11; else goto block12;
block11:;
uint64_t $tmp947 = $tmp946.value;
uint64_t $tmp948 = $tmp922.value;
bool $tmp949 = $tmp947 >= $tmp948;
frost$core$Bit $tmp950 = (frost$core$Bit) {$tmp949};
bool $tmp951 = $tmp950.value;
if ($tmp951) goto block10; else goto block6;
block12:;
uint64_t $tmp952 = $tmp946.value;
uint64_t $tmp953 = $tmp922.value;
bool $tmp954 = $tmp952 > $tmp953;
frost$core$Bit $tmp955 = (frost$core$Bit) {$tmp954};
bool $tmp956 = $tmp955.value;
if ($tmp956) goto block10; else goto block6;
block10:;
int64_t $tmp957 = $tmp941.value;
int64_t $tmp958 = $tmp921.value;
int64_t $tmp959 = $tmp957 + $tmp958;
frost$core$Int64 $tmp960 = (frost$core$Int64) {$tmp959};
*(&local2) = $tmp960;
goto block5;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
// line 390
frost$core$MutableString* $tmp961 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp961, &$s962);
// line 391
frost$core$MutableString* $tmp963 = *(&local1);
frost$core$String* $tmp964 = frost$core$MutableString$finish$R$frost$core$String($tmp963);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
frost$core$MutableString* $tmp965 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
*(&local1) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$Type* $tmp966 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp964;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$nullableType$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 395
org$frostlang$frostc$Type$Kind* $tmp967 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp968 = *$tmp967;
org$frostlang$frostc$Type$Kind$wrapper* $tmp969;
$tmp969 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp969->value = $tmp968;
frost$core$Int64 $tmp970 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp971 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp970);
org$frostlang$frostc$Type$Kind$wrapper* $tmp972;
$tmp972 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp972->value = $tmp971;
ITable* $tmp973 = ((frost$core$Equatable*) $tmp969)->$class->itable;
while ($tmp973->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp973 = $tmp973->next;
}
$fn975 $tmp974 = $tmp973->methods[0];
frost$core$Bit $tmp976 = $tmp974(((frost$core$Equatable*) $tmp969), ((frost$core$Equatable*) $tmp972));
bool $tmp977 = $tmp976.value;
if ($tmp977) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp978 = (frost$core$Int64) {395};
frost$core$String* $tmp979 = org$frostlang$frostc$Type$get_asString$R$frost$core$String(param1);
frost$core$String* $tmp980 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp979, &$s981);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s982, $tmp978, $tmp980);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp972)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp969)));
// line 396
org$frostlang$frostc$FixedArray* $tmp983 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp984 = (frost$core$Int64) {0};
frost$core$Object* $tmp985 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp983, $tmp984);
frost$core$String* $tmp986 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp985));
frost$core$String* $tmp987 = frost$core$String$get_asString$R$frost$core$String($tmp986);
frost$core$String* $tmp988 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp987, &$s989);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
frost$core$Frost$unref$frost$core$Object$Q($tmp985);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
return $tmp988;

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
// line 400
frost$core$Weak** $tmp990 = &param0->compiler;
frost$core$Weak* $tmp991 = *$tmp990;
frost$core$Object* $tmp992 = frost$core$Weak$get$R$frost$core$Weak$T($tmp991);
org$frostlang$frostc$Type** $tmp993 = &param1->type;
org$frostlang$frostc$Type* $tmp994 = *$tmp993;
frost$collections$HashSet* $tmp995 = org$frostlang$frostc$Compiler$allInterfaces$org$frostlang$frostc$Type$R$frost$collections$HashSet$LTorg$frostlang$frostc$Type$GT(((org$frostlang$frostc$Compiler*) $tmp992), $tmp994);
*(&local0) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
frost$collections$HashSet* $tmp996 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
*(&local0) = $tmp995;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
frost$core$Frost$unref$frost$core$Object$Q($tmp992);
// line 401
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s997));
frost$core$String* $tmp998 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
*(&local1) = &$s999;
// line 402
frost$collections$HashSet* $tmp1000 = *(&local0);
ITable* $tmp1001 = ((frost$collections$Iterable*) $tmp1000)->$class->itable;
while ($tmp1001->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1001 = $tmp1001->next;
}
$fn1003 $tmp1002 = $tmp1001->methods[0];
frost$collections$Iterator* $tmp1004 = $tmp1002(((frost$collections$Iterable*) $tmp1000));
goto block1;
block1:;
ITable* $tmp1005 = $tmp1004->$class->itable;
while ($tmp1005->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1005 = $tmp1005->next;
}
$fn1007 $tmp1006 = $tmp1005->methods[0];
frost$core$Bit $tmp1008 = $tmp1006($tmp1004);
bool $tmp1009 = $tmp1008.value;
if ($tmp1009) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp1010 = $tmp1004->$class->itable;
while ($tmp1010->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1010 = $tmp1010->next;
}
$fn1012 $tmp1011 = $tmp1010->methods[1];
frost$core$Object* $tmp1013 = $tmp1011($tmp1004);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1013)));
org$frostlang$frostc$Type* $tmp1014 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp1013);
// line 403
frost$core$Weak** $tmp1015 = &param0->compiler;
frost$core$Weak* $tmp1016 = *$tmp1015;
frost$core$Object* $tmp1017 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1016);
org$frostlang$frostc$Type* $tmp1018 = *(&local2);
org$frostlang$frostc$ClassDecl* $tmp1019 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1017), $tmp1018);
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
org$frostlang$frostc$ClassDecl* $tmp1020 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
*(&local3) = $tmp1019;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
frost$core$Frost$unref$frost$core$Object$Q($tmp1017);
// line 404
org$frostlang$frostc$ClassDecl* $tmp1021 = *(&local3);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1022 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp1021);
*(&local4) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1023 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
*(&local4) = $tmp1022;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
// line 405
frost$core$Weak** $tmp1024 = &param0->compiler;
frost$core$Weak* $tmp1025 = *$tmp1024;
frost$core$Object* $tmp1026 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1025);
org$frostlang$frostc$Type* $tmp1027 = *(&local2);
frost$collections$ListView* $tmp1028 = org$frostlang$frostc$Compiler$interfaceMethods$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1026), param1, $tmp1027);
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
frost$collections$ListView* $tmp1029 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
*(&local5) = $tmp1028;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
frost$core$Frost$unref$frost$core$Object$Q($tmp1026);
// line 406
frost$core$String** $tmp1030 = &param1->name;
frost$core$String* $tmp1031 = *$tmp1030;
frost$core$String* $tmp1032 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1031);
frost$core$String* $tmp1033 = frost$core$String$get_asString$R$frost$core$String($tmp1032);
frost$core$String* $tmp1034 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1033, &$s1035);
org$frostlang$frostc$ClassDecl* $tmp1036 = *(&local3);
frost$core$String** $tmp1037 = &$tmp1036->name;
frost$core$String* $tmp1038 = *$tmp1037;
frost$core$String* $tmp1039 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1038);
frost$core$String* $tmp1040 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1034, $tmp1039);
frost$core$String* $tmp1041 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1040, &$s1042);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
frost$core$String* $tmp1043 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
*(&local6) = $tmp1041;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
// line 407
frost$core$MutableString* $tmp1044 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Type* $tmp1045 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp1046 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1045);
frost$core$String* $tmp1047 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1048, $tmp1046);
frost$core$String* $tmp1049 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1047, &$s1050);
frost$collections$ListView* $tmp1051 = *(&local5);
ITable* $tmp1052 = ((frost$collections$CollectionView*) $tmp1051)->$class->itable;
while ($tmp1052->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1052 = $tmp1052->next;
}
$fn1054 $tmp1053 = $tmp1052->methods[0];
frost$core$Int64 $tmp1055 = $tmp1053(((frost$collections$CollectionView*) $tmp1051));
frost$core$Int64$wrapper* $tmp1056;
$tmp1056 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1056->value = $tmp1055;
frost$core$String* $tmp1057 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1058, ((frost$core$Object*) $tmp1056));
frost$core$String* $tmp1059 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1057, &$s1060);
frost$core$String* $tmp1061 = *(&local6);
frost$core$String* $tmp1062 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1059, $tmp1061);
frost$core$String* $tmp1063 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1062, &$s1064);
frost$core$String* $tmp1065 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1049, $tmp1063);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1066 = *(&local4);
frost$core$String** $tmp1067 = &$tmp1066->name;
frost$core$String* $tmp1068 = *$tmp1067;
frost$core$String* $tmp1069 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1070, $tmp1068);
frost$core$String* $tmp1071 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1069, &$s1072);
frost$core$String* $tmp1073 = *(&local1);
frost$core$String* $tmp1074 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1071, $tmp1073);
frost$core$String* $tmp1075 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1074, &$s1076);
frost$core$String* $tmp1077 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1065, $tmp1075);
frost$core$MutableString$init$frost$core$String($tmp1044, $tmp1077);
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
frost$core$MutableString* $tmp1078 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
*(&local7) = $tmp1044;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
// line 410
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1079));
frost$core$String* $tmp1080 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
*(&local8) = &$s1081;
// line 411
frost$collections$ListView* $tmp1082 = *(&local5);
ITable* $tmp1083 = ((frost$collections$Iterable*) $tmp1082)->$class->itable;
while ($tmp1083->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1083 = $tmp1083->next;
}
$fn1085 $tmp1084 = $tmp1083->methods[0];
frost$collections$Iterator* $tmp1086 = $tmp1084(((frost$collections$Iterable*) $tmp1082));
goto block4;
block4:;
ITable* $tmp1087 = $tmp1086->$class->itable;
while ($tmp1087->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1087 = $tmp1087->next;
}
$fn1089 $tmp1088 = $tmp1087->methods[0];
frost$core$Bit $tmp1090 = $tmp1088($tmp1086);
bool $tmp1091 = $tmp1090.value;
if ($tmp1091) goto block6; else goto block5;
block5:;
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp1092 = $tmp1086->$class->itable;
while ($tmp1092->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1092 = $tmp1092->next;
}
$fn1094 $tmp1093 = $tmp1092->methods[1];
frost$core$Object* $tmp1095 = $tmp1093($tmp1086);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1095)));
org$frostlang$frostc$MethodDecl* $tmp1096 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
*(&local9) = ((org$frostlang$frostc$MethodDecl*) $tmp1095);
// line 412
frost$core$MutableString* $tmp1097 = *(&local7);
frost$core$String* $tmp1098 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp1097, $tmp1098);
// line 413
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1099));
frost$core$String* $tmp1100 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
*(&local8) = &$s1101;
// line 414
org$frostlang$frostc$MethodDecl* $tmp1102 = *(&local9);
org$frostlang$frostc$Annotations** $tmp1103 = &$tmp1102->annotations;
org$frostlang$frostc$Annotations* $tmp1104 = *$tmp1103;
frost$core$Bit $tmp1105 = org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit($tmp1104);
bool $tmp1106 = $tmp1105.value;
if ($tmp1106) goto block7; else goto block9;
block7:;
// line 415
frost$core$MutableString* $tmp1107 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp1107, &$s1108);
goto block8;
block9:;
// line 1
// line 418
frost$core$MutableString* $tmp1109 = *(&local7);
org$frostlang$frostc$MethodDecl* $tmp1110 = *(&local9);
frost$core$String* $tmp1111 = org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, $tmp1110);
frost$core$MutableString$append$frost$core$String($tmp1109, $tmp1111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1111));
goto block8;
block8:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1095);
org$frostlang$frostc$MethodDecl* $tmp1112 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
// line 421
frost$core$MutableString* $tmp1113 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp1113, &$s1114);
// line 422
*(&local10) = ((frost$core$Error*) NULL);
// line 423
frost$io$MemoryOutputStream** $tmp1115 = &param0->types;
frost$io$MemoryOutputStream* $tmp1116 = *$tmp1115;
frost$core$MutableString* $tmp1117 = *(&local7);
frost$core$String* $tmp1118 = frost$core$MutableString$finish$R$frost$core$String($tmp1117);
$fn1120 $tmp1119 = ($fn1120) ((frost$io$OutputStream*) $tmp1116)->$class->vtable[19];
frost$core$Error* $tmp1121 = $tmp1119(((frost$io$OutputStream*) $tmp1116), $tmp1118);
if ($tmp1121 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1121));
*(&local10) = $tmp1121;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
goto block10;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
goto block11;
block10:;
// line 426
frost$core$Int64 $tmp1122 = (frost$core$Int64) {426};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1123, $tmp1122);
abort(); // unreachable
block11:;
frost$core$Error* $tmp1124 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1124));
*(&local10) = ((frost$core$Error*) NULL);
// line 428
frost$core$String* $tmp1125 = *(&local6);
frost$core$String* $tmp1126 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1127, $tmp1125);
frost$core$String* $tmp1128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1126, &$s1129);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
frost$core$String* $tmp1130 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
*(&local1) = $tmp1128;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
frost$core$String* $tmp1131 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1132 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1133 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
*(&local6) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1134 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1135 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
*(&local4) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1136 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1013);
org$frostlang$frostc$Type* $tmp1137 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
// line 430
frost$core$String* $tmp1138 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
frost$core$String* $tmp1139 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
*(&local1) = ((frost$core$String*) NULL);
frost$collections$HashSet* $tmp1140 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
*(&local0) = ((frost$collections$HashSet*) NULL);
return $tmp1138;

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
frost$io$IndentedOutputStream** $tmp1141 = &param0->out;
frost$io$IndentedOutputStream* $tmp1142 = *$tmp1141;
// line 435
*(&local1) = ((frost$core$Error*) NULL);
// line 436
frost$collections$IdentityMap** $tmp1143 = &param0->methodShims;
frost$collections$IdentityMap* $tmp1144 = *$tmp1143;
frost$core$Object* $tmp1145 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp1144, ((frost$core$Object*) param1));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CCodeGenerator$MethodShim*) $tmp1145)));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1146 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) $tmp1145);
frost$core$Frost$unref$frost$core$Object$Q($tmp1145);
// line 437
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1147 = *(&local2);
frost$core$Bit $tmp1148 = frost$core$Bit$init$builtin_bit($tmp1147 != NULL);
bool $tmp1149 = $tmp1148.value;
if ($tmp1149) goto block6; else goto block7;
block6:;
// line 438
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1150 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1151 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Error* $tmp1152 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
*(&local1) = ((frost$core$Error*) NULL);
*(&local0) = $tmp1150;
goto block1;
block7:;
// line 440
frost$io$IndentedOutputStream** $tmp1153 = &param0->out;
frost$io$IndentedOutputStream* $tmp1154 = *$tmp1153;
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
frost$io$IndentedOutputStream* $tmp1155 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
*(&local3) = $tmp1154;
// line 441
frost$io$MemoryOutputStream* $tmp1156 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp1156);
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
frost$io$MemoryOutputStream* $tmp1157 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
*(&local4) = $tmp1156;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
// line 442
frost$io$IndentedOutputStream* $tmp1158 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream* $tmp1159 = *(&local4);
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp1158, ((frost$io$OutputStream*) $tmp1159));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
frost$io$IndentedOutputStream** $tmp1160 = &param0->out;
frost$io$IndentedOutputStream* $tmp1161 = *$tmp1160;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
frost$io$IndentedOutputStream** $tmp1162 = &param0->out;
*$tmp1162 = $tmp1158;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
// line 443
frost$core$Bit $tmp1163 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(param2);
bool $tmp1164 = $tmp1163.value;
if ($tmp1164) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp1165 = (frost$core$Int64) {443};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1166, $tmp1165);
abort(); // unreachable
block8:;
// line 444
org$frostlang$frostc$FixedArray* $tmp1167 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
ITable* $tmp1168 = ((frost$collections$CollectionView*) $tmp1167)->$class->itable;
while ($tmp1168->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1168 = $tmp1168->next;
}
$fn1170 $tmp1169 = $tmp1168->methods[0];
frost$core$Int64 $tmp1171 = $tmp1169(((frost$collections$CollectionView*) $tmp1167));
frost$collections$Array** $tmp1172 = &param1->parameters;
frost$collections$Array* $tmp1173 = *$tmp1172;
ITable* $tmp1174 = ((frost$collections$CollectionView*) $tmp1173)->$class->itable;
while ($tmp1174->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1174 = $tmp1174->next;
}
$fn1176 $tmp1175 = $tmp1174->methods[0];
frost$core$Int64 $tmp1177 = $tmp1175(((frost$collections$CollectionView*) $tmp1173));
frost$core$Int64 $tmp1178 = (frost$core$Int64) {2};
int64_t $tmp1179 = $tmp1177.value;
int64_t $tmp1180 = $tmp1178.value;
int64_t $tmp1181 = $tmp1179 + $tmp1180;
frost$core$Int64 $tmp1182 = (frost$core$Int64) {$tmp1181};
frost$core$Bit $tmp1183 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1171, $tmp1182);
bool $tmp1184 = $tmp1183.value;
if ($tmp1184) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp1185 = (frost$core$Int64) {444};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1186, $tmp1185);
abort(); // unreachable
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
// line 445
frost$core$Bit $tmp1187 = org$frostlang$frostc$MethodDecl$isInstance$R$frost$core$Bit(param1);
bool $tmp1188 = $tmp1187.value;
if ($tmp1188) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp1189 = (frost$core$Int64) {445};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1190, $tmp1189);
abort(); // unreachable
block12:;
// line 446
org$frostlang$frostc$Type* $tmp1191 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type(param2);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
org$frostlang$frostc$Type* $tmp1192 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
*(&local5) = $tmp1191;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
// line 447
frost$core$String* $tmp1193 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1194 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1193, &$s1195);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
frost$core$String* $tmp1196 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
*(&local6) = $tmp1194;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
// line 448
frost$core$MutableString* $tmp1197 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Type* $tmp1198 = *(&local5);
frost$core$String* $tmp1199 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1198);
frost$core$MutableString$init$frost$core$String($tmp1197, $tmp1199);
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
frost$core$MutableString* $tmp1200 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
*(&local7) = $tmp1197;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
// line 449
frost$io$IndentedOutputStream** $tmp1201 = &param0->out;
frost$io$IndentedOutputStream* $tmp1202 = *$tmp1201;
frost$core$MutableString* $tmp1203 = *(&local7);
frost$core$String* $tmp1204 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1205, ((frost$core$Object*) $tmp1203));
frost$core$String* $tmp1206 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1204, &$s1207);
frost$core$String* $tmp1208 = *(&local6);
frost$core$String* $tmp1209 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1206, $tmp1208);
frost$core$String* $tmp1210 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1209, &$s1211);
$fn1213 $tmp1212 = ($fn1213) ((frost$io$OutputStream*) $tmp1202)->$class->vtable[17];
frost$core$Error* $tmp1214 = $tmp1212(((frost$io$OutputStream*) $tmp1202), $tmp1210);
if ($tmp1214 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
*(&local1) = $tmp1214;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
frost$core$MutableString* $tmp1215 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1216 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1217 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1217));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1218 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1219 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1220 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
// line 450
frost$core$MutableString* $tmp1221 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp1221, &$s1222);
// line 451
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1223));
frost$core$String* $tmp1224 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
*(&local8) = &$s1225;
// line 452
frost$core$Int64 $tmp1226 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp1227 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
ITable* $tmp1228 = ((frost$collections$CollectionView*) $tmp1227)->$class->itable;
while ($tmp1228->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1228 = $tmp1228->next;
}
$fn1230 $tmp1229 = $tmp1228->methods[0];
frost$core$Int64 $tmp1231 = $tmp1229(((frost$collections$CollectionView*) $tmp1227));
frost$core$Int64 $tmp1232 = (frost$core$Int64) {1};
int64_t $tmp1233 = $tmp1231.value;
int64_t $tmp1234 = $tmp1232.value;
int64_t $tmp1235 = $tmp1233 - $tmp1234;
frost$core$Int64 $tmp1236 = (frost$core$Int64) {$tmp1235};
frost$core$Bit $tmp1237 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1238 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1226, $tmp1236, $tmp1237);
frost$core$Int64 $tmp1239 = $tmp1238.min;
*(&local9) = $tmp1239;
frost$core$Int64 $tmp1240 = $tmp1238.max;
frost$core$Bit $tmp1241 = $tmp1238.inclusive;
bool $tmp1242 = $tmp1241.value;
frost$core$Int64 $tmp1243 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1244 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1243);
if ($tmp1242) goto block19; else goto block20;
block19:;
int64_t $tmp1245 = $tmp1239.value;
int64_t $tmp1246 = $tmp1240.value;
bool $tmp1247 = $tmp1245 <= $tmp1246;
frost$core$Bit $tmp1248 = (frost$core$Bit) {$tmp1247};
bool $tmp1249 = $tmp1248.value;
if ($tmp1249) goto block16; else goto block17;
block20:;
int64_t $tmp1250 = $tmp1239.value;
int64_t $tmp1251 = $tmp1240.value;
bool $tmp1252 = $tmp1250 < $tmp1251;
frost$core$Bit $tmp1253 = (frost$core$Bit) {$tmp1252};
bool $tmp1254 = $tmp1253.value;
if ($tmp1254) goto block16; else goto block17;
block16:;
// line 453
org$frostlang$frostc$FixedArray* $tmp1255 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp1256 = *(&local9);
frost$core$Object* $tmp1257 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1255, $tmp1256);
frost$core$String* $tmp1258 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp1257));
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
frost$core$String* $tmp1259 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
*(&local10) = $tmp1258;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
frost$core$Frost$unref$frost$core$Object$Q($tmp1257);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
// line 454
frost$core$MutableString* $tmp1260 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp1260, &$s1261);
// line 455
frost$core$MutableString* $tmp1262 = *(&local7);
frost$core$String* $tmp1263 = *(&local10);
frost$core$MutableString$append$frost$core$String($tmp1262, $tmp1263);
// line 456
frost$io$IndentedOutputStream** $tmp1264 = &param0->out;
frost$io$IndentedOutputStream* $tmp1265 = *$tmp1264;
frost$core$String* $tmp1266 = *(&local8);
frost$core$String* $tmp1267 = frost$core$String$get_asString$R$frost$core$String($tmp1266);
frost$core$String* $tmp1268 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1267, &$s1269);
frost$core$String* $tmp1270 = *(&local10);
frost$core$String* $tmp1271 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1268, $tmp1270);
frost$core$String* $tmp1272 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1271, &$s1273);
frost$core$Int64 $tmp1274 = *(&local9);
frost$core$Int64$wrapper* $tmp1275;
$tmp1275 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1275->value = $tmp1274;
frost$core$String* $tmp1276 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1272, ((frost$core$Object*) $tmp1275));
frost$core$String* $tmp1277 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1276, &$s1278);
$fn1280 $tmp1279 = ($fn1280) ((frost$io$OutputStream*) $tmp1265)->$class->vtable[17];
frost$core$Error* $tmp1281 = $tmp1279(((frost$io$OutputStream*) $tmp1265), $tmp1277);
if ($tmp1281 == NULL) goto block21; else goto block22;
block22:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
*(&local1) = $tmp1281;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
frost$core$String* $tmp1282 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
frost$core$String* $tmp1283 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1284 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1285 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1286 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1287 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1288 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1289 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
// line 457
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1290));
frost$core$String* $tmp1291 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
*(&local8) = &$s1292;
frost$core$String* $tmp1293 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
*(&local10) = ((frost$core$String*) NULL);
goto block18;
block18:;
frost$core$Int64 $tmp1294 = *(&local9);
int64_t $tmp1295 = $tmp1240.value;
int64_t $tmp1296 = $tmp1294.value;
int64_t $tmp1297 = $tmp1295 - $tmp1296;
frost$core$Int64 $tmp1298 = (frost$core$Int64) {$tmp1297};
frost$core$UInt64 $tmp1299 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1298);
if ($tmp1242) goto block24; else goto block25;
block24:;
uint64_t $tmp1300 = $tmp1299.value;
uint64_t $tmp1301 = $tmp1244.value;
bool $tmp1302 = $tmp1300 >= $tmp1301;
frost$core$Bit $tmp1303 = (frost$core$Bit) {$tmp1302};
bool $tmp1304 = $tmp1303.value;
if ($tmp1304) goto block23; else goto block17;
block25:;
uint64_t $tmp1305 = $tmp1299.value;
uint64_t $tmp1306 = $tmp1244.value;
bool $tmp1307 = $tmp1305 > $tmp1306;
frost$core$Bit $tmp1308 = (frost$core$Bit) {$tmp1307};
bool $tmp1309 = $tmp1308.value;
if ($tmp1309) goto block23; else goto block17;
block23:;
int64_t $tmp1310 = $tmp1294.value;
int64_t $tmp1311 = $tmp1243.value;
int64_t $tmp1312 = $tmp1310 + $tmp1311;
frost$core$Int64 $tmp1313 = (frost$core$Int64) {$tmp1312};
*(&local9) = $tmp1313;
goto block16;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
// line 459
frost$io$IndentedOutputStream** $tmp1314 = &param0->out;
frost$io$IndentedOutputStream* $tmp1315 = *$tmp1314;
$fn1317 $tmp1316 = ($fn1317) ((frost$io$OutputStream*) $tmp1315)->$class->vtable[19];
frost$core$Error* $tmp1318 = $tmp1316(((frost$io$OutputStream*) $tmp1315), &$s1319);
if ($tmp1318 == NULL) goto block26; else goto block27;
block27:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
*(&local1) = $tmp1318;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
frost$core$String* $tmp1320 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1321 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1322 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1323 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1324 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1325 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1326 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
// line 460
frost$io$IndentedOutputStream** $tmp1327 = &param0->out;
frost$io$IndentedOutputStream* $tmp1328 = *$tmp1327;
frost$core$Int64* $tmp1329 = &$tmp1328->level;
frost$core$Int64 $tmp1330 = *$tmp1329;
frost$core$Int64 $tmp1331 = (frost$core$Int64) {1};
int64_t $tmp1332 = $tmp1330.value;
int64_t $tmp1333 = $tmp1331.value;
int64_t $tmp1334 = $tmp1332 + $tmp1333;
frost$core$Int64 $tmp1335 = (frost$core$Int64) {$tmp1334};
frost$core$Int64* $tmp1336 = &$tmp1328->level;
*$tmp1336 = $tmp1335;
// line 461
frost$core$MutableString* $tmp1337 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp1337, &$s1338);
// line 462
frost$io$MemoryOutputStream* $tmp1339 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp1339);
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
frost$io$MemoryOutputStream* $tmp1340 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
*(&local11) = $tmp1339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
// line 463
frost$collections$Array* $tmp1341 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1341);
*(&local12) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
frost$collections$Array* $tmp1342 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
*(&local12) = $tmp1341;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
// line 464
frost$core$Int64 $tmp1343 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp1344 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
ITable* $tmp1345 = ((frost$collections$CollectionView*) $tmp1344)->$class->itable;
while ($tmp1345->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1345 = $tmp1345->next;
}
$fn1347 $tmp1346 = $tmp1345->methods[0];
frost$core$Int64 $tmp1348 = $tmp1346(((frost$collections$CollectionView*) $tmp1344));
frost$core$Int64 $tmp1349 = (frost$core$Int64) {1};
int64_t $tmp1350 = $tmp1348.value;
int64_t $tmp1351 = $tmp1349.value;
int64_t $tmp1352 = $tmp1350 - $tmp1351;
frost$core$Int64 $tmp1353 = (frost$core$Int64) {$tmp1352};
frost$core$Bit $tmp1354 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1355 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1343, $tmp1353, $tmp1354);
frost$core$Int64 $tmp1356 = $tmp1355.min;
*(&local13) = $tmp1356;
frost$core$Int64 $tmp1357 = $tmp1355.max;
frost$core$Bit $tmp1358 = $tmp1355.inclusive;
bool $tmp1359 = $tmp1358.value;
frost$core$Int64 $tmp1360 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1361 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1360);
if ($tmp1359) goto block31; else goto block32;
block31:;
int64_t $tmp1362 = $tmp1356.value;
int64_t $tmp1363 = $tmp1357.value;
bool $tmp1364 = $tmp1362 <= $tmp1363;
frost$core$Bit $tmp1365 = (frost$core$Bit) {$tmp1364};
bool $tmp1366 = $tmp1365.value;
if ($tmp1366) goto block28; else goto block29;
block32:;
int64_t $tmp1367 = $tmp1356.value;
int64_t $tmp1368 = $tmp1357.value;
bool $tmp1369 = $tmp1367 < $tmp1368;
frost$core$Bit $tmp1370 = (frost$core$Bit) {$tmp1369};
bool $tmp1371 = $tmp1370.value;
if ($tmp1371) goto block28; else goto block29;
block28:;
// line 465
frost$core$Int64 $tmp1372 = *(&local13);
frost$core$Int64$wrapper* $tmp1373;
$tmp1373 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1373->value = $tmp1372;
frost$core$String* $tmp1374 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1375, ((frost$core$Object*) $tmp1373));
frost$core$String* $tmp1376 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1374, &$s1377);
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
frost$core$String* $tmp1378 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
*(&local14) = $tmp1376;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
// line 466
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
// line 467
frost$core$Int64 $tmp1379 = *(&local13);
frost$core$Int64 $tmp1380 = (frost$core$Int64) {0};
frost$core$Bit $tmp1381 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1379, $tmp1380);
bool $tmp1382 = $tmp1381.value;
if ($tmp1382) goto block33; else goto block35;
block33:;
// line 468
frost$core$Weak** $tmp1383 = &param1->owner;
frost$core$Weak* $tmp1384 = *$tmp1383;
frost$core$Object* $tmp1385 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1384);
org$frostlang$frostc$Type** $tmp1386 = &((org$frostlang$frostc$ClassDecl*) $tmp1385)->type;
org$frostlang$frostc$Type* $tmp1387 = *$tmp1386;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1387));
org$frostlang$frostc$Type* $tmp1388 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
*(&local15) = $tmp1387;
frost$core$Frost$unref$frost$core$Object$Q($tmp1385);
goto block34;
block35:;
// line 1
// line 471
frost$collections$Array** $tmp1389 = &param1->parameters;
frost$collections$Array* $tmp1390 = *$tmp1389;
frost$core$Int64 $tmp1391 = *(&local13);
frost$core$Int64 $tmp1392 = (frost$core$Int64) {1};
int64_t $tmp1393 = $tmp1391.value;
int64_t $tmp1394 = $tmp1392.value;
int64_t $tmp1395 = $tmp1393 - $tmp1394;
frost$core$Int64 $tmp1396 = (frost$core$Int64) {$tmp1395};
frost$core$Object* $tmp1397 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1390, $tmp1396);
org$frostlang$frostc$Type** $tmp1398 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1397)->type;
org$frostlang$frostc$Type* $tmp1399 = *$tmp1398;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
org$frostlang$frostc$Type* $tmp1400 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
*(&local15) = $tmp1399;
frost$core$Frost$unref$frost$core$Object$Q($tmp1397);
goto block34;
block34:;
// line 473
org$frostlang$frostc$Type* $tmp1401 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp1402 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp1403 = *(&local13);
frost$core$Object* $tmp1404 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1402, $tmp1403);
ITable* $tmp1405 = ((frost$core$Equatable*) $tmp1401)->$class->itable;
while ($tmp1405->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1405 = $tmp1405->next;
}
$fn1407 $tmp1406 = $tmp1405->methods[1];
frost$core$Bit $tmp1408 = $tmp1406(((frost$core$Equatable*) $tmp1401), ((frost$core$Equatable*) ((org$frostlang$frostc$Type*) $tmp1404)));
bool $tmp1409 = $tmp1408.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1404);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
if ($tmp1409) goto block36; else goto block38;
block36:;
// line 474
frost$core$String* $tmp1410 = *(&local14);
org$frostlang$frostc$FixedArray* $tmp1411 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp1412 = *(&local13);
frost$core$Object* $tmp1413 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1411, $tmp1412);
org$frostlang$frostc$Type* $tmp1414 = *(&local15);
frost$core$String* $tmp1415 = org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1410, ((org$frostlang$frostc$Type*) $tmp1413), $tmp1414);
*(&local16) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
frost$core$String* $tmp1416 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
*(&local16) = $tmp1415;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
frost$core$Frost$unref$frost$core$Object$Q($tmp1413);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
// line 475
frost$collections$Array* $tmp1417 = *(&local12);
frost$core$String* $tmp1418 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp1417, ((frost$core$Object*) $tmp1418));
// line 476
frost$core$Weak** $tmp1419 = &param0->compiler;
frost$core$Weak* $tmp1420 = *$tmp1419;
frost$core$Object* $tmp1421 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1420);
org$frostlang$frostc$FixedArray* $tmp1422 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp1423 = *(&local13);
frost$core$Object* $tmp1424 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1422, $tmp1423);
frost$core$Bit $tmp1425 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1421), ((org$frostlang$frostc$Type*) $tmp1424));
bool $tmp1426 = $tmp1425.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1424);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
frost$core$Frost$unref$frost$core$Object$Q($tmp1421);
if ($tmp1426) goto block41; else goto block40;
block41:;
frost$core$Weak** $tmp1427 = &param0->compiler;
frost$core$Weak* $tmp1428 = *$tmp1427;
frost$core$Object* $tmp1429 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1428);
org$frostlang$frostc$Type* $tmp1430 = *(&local15);
frost$core$Bit $tmp1431 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1429), $tmp1430);
frost$core$Bit $tmp1432 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1431);
bool $tmp1433 = $tmp1432.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1429);
if ($tmp1433) goto block39; else goto block40;
block39:;
// line 477
frost$io$MemoryOutputStream* $tmp1434 = *(&local11);
frost$core$String* $tmp1435 = *(&local16);
frost$core$String* $tmp1436 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1437, $tmp1435);
frost$core$String* $tmp1438 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1436, &$s1439);
frost$core$String* $tmp1440 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1441, $tmp1438);
$fn1443 $tmp1442 = ($fn1443) ((frost$io$OutputStream*) $tmp1434)->$class->vtable[19];
frost$core$Error* $tmp1444 = $tmp1442(((frost$io$OutputStream*) $tmp1434), $tmp1440);
if ($tmp1444 == NULL) goto block42; else goto block43;
block43:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
*(&local1) = $tmp1444;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
frost$core$String* $tmp1445 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
*(&local16) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1446 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1447 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
frost$collections$Array* $tmp1448 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1449 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1450 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1451 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1452 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1453 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1454 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1455 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1456 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block42:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
goto block40;
block40:;
frost$core$String* $tmp1457 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
*(&local16) = ((frost$core$String*) NULL);
goto block37;
block38:;
// line 1
// line 482
frost$collections$Array* $tmp1458 = *(&local12);
frost$core$String* $tmp1459 = *(&local14);
frost$collections$Array$add$frost$collections$Array$T($tmp1458, ((frost$core$Object*) $tmp1459));
goto block37;
block37:;
org$frostlang$frostc$Type* $tmp1460 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1461 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
*(&local14) = ((frost$core$String*) NULL);
goto block30;
block30:;
frost$core$Int64 $tmp1462 = *(&local13);
int64_t $tmp1463 = $tmp1357.value;
int64_t $tmp1464 = $tmp1462.value;
int64_t $tmp1465 = $tmp1463 - $tmp1464;
frost$core$Int64 $tmp1466 = (frost$core$Int64) {$tmp1465};
frost$core$UInt64 $tmp1467 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1466);
if ($tmp1359) goto block45; else goto block46;
block45:;
uint64_t $tmp1468 = $tmp1467.value;
uint64_t $tmp1469 = $tmp1361.value;
bool $tmp1470 = $tmp1468 >= $tmp1469;
frost$core$Bit $tmp1471 = (frost$core$Bit) {$tmp1470};
bool $tmp1472 = $tmp1471.value;
if ($tmp1472) goto block44; else goto block29;
block46:;
uint64_t $tmp1473 = $tmp1467.value;
uint64_t $tmp1474 = $tmp1361.value;
bool $tmp1475 = $tmp1473 > $tmp1474;
frost$core$Bit $tmp1476 = (frost$core$Bit) {$tmp1475};
bool $tmp1477 = $tmp1476.value;
if ($tmp1477) goto block44; else goto block29;
block44:;
int64_t $tmp1478 = $tmp1462.value;
int64_t $tmp1479 = $tmp1360.value;
int64_t $tmp1480 = $tmp1478 + $tmp1479;
frost$core$Int64 $tmp1481 = (frost$core$Int64) {$tmp1480};
*(&local13) = $tmp1481;
goto block28;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
// line 485
org$frostlang$frostc$Type** $tmp1482 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1483 = *$tmp1482;
org$frostlang$frostc$Type* $tmp1484 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp1485 = ((frost$core$Equatable*) $tmp1483)->$class->itable;
while ($tmp1485->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1485 = $tmp1485->next;
}
$fn1487 $tmp1486 = $tmp1485->methods[1];
frost$core$Bit $tmp1488 = $tmp1486(((frost$core$Equatable*) $tmp1483), ((frost$core$Equatable*) $tmp1484));
bool $tmp1489 = $tmp1488.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
if ($tmp1489) goto block47; else goto block48;
block47:;
// line 486
frost$io$IndentedOutputStream** $tmp1490 = &param0->out;
frost$io$IndentedOutputStream* $tmp1491 = *$tmp1490;
org$frostlang$frostc$Type** $tmp1492 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1493 = *$tmp1492;
frost$core$String* $tmp1494 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1493);
frost$core$String* $tmp1495 = frost$core$String$get_asString$R$frost$core$String($tmp1494);
frost$core$String* $tmp1496 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1495, &$s1497);
$fn1499 $tmp1498 = ($fn1499) ((frost$io$OutputStream*) $tmp1491)->$class->vtable[17];
frost$core$Error* $tmp1500 = $tmp1498(((frost$io$OutputStream*) $tmp1491), $tmp1496);
if ($tmp1500 == NULL) goto block49; else goto block50;
block50:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
*(&local1) = $tmp1500;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
frost$collections$Array* $tmp1501 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1502 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1503 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1503));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1504 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1504));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1505 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1506 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1506));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1507 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1508 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1508));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1509 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
goto block48;
block48:;
// line 488
frost$io$IndentedOutputStream** $tmp1510 = &param0->out;
frost$io$IndentedOutputStream* $tmp1511 = *$tmp1510;
frost$core$String* $tmp1512 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1513 = frost$core$String$get_asString$R$frost$core$String($tmp1512);
frost$core$String* $tmp1514 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1513, &$s1515);
$fn1517 $tmp1516 = ($fn1517) ((frost$io$OutputStream*) $tmp1511)->$class->vtable[17];
frost$core$Error* $tmp1518 = $tmp1516(((frost$io$OutputStream*) $tmp1511), $tmp1514);
if ($tmp1518 == NULL) goto block51; else goto block52;
block52:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
*(&local1) = $tmp1518;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
frost$collections$Array* $tmp1519 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1520 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1520));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1521 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1522 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1522));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1523 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1524 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1525 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1525));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1526 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1526));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1527 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block51:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
// line 489
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1528));
frost$core$String* $tmp1529 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
*(&local8) = &$s1530;
// line 490
frost$core$Int64 $tmp1531 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp1532 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
ITable* $tmp1533 = ((frost$collections$CollectionView*) $tmp1532)->$class->itable;
while ($tmp1533->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1533 = $tmp1533->next;
}
$fn1535 $tmp1534 = $tmp1533->methods[0];
frost$core$Int64 $tmp1536 = $tmp1534(((frost$collections$CollectionView*) $tmp1532));
frost$core$Int64 $tmp1537 = (frost$core$Int64) {1};
int64_t $tmp1538 = $tmp1536.value;
int64_t $tmp1539 = $tmp1537.value;
int64_t $tmp1540 = $tmp1538 - $tmp1539;
frost$core$Int64 $tmp1541 = (frost$core$Int64) {$tmp1540};
frost$core$Bit $tmp1542 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1543 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1531, $tmp1541, $tmp1542);
frost$core$Int64 $tmp1544 = $tmp1543.min;
*(&local17) = $tmp1544;
frost$core$Int64 $tmp1545 = $tmp1543.max;
frost$core$Bit $tmp1546 = $tmp1543.inclusive;
bool $tmp1547 = $tmp1546.value;
frost$core$Int64 $tmp1548 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1549 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1548);
if ($tmp1547) goto block56; else goto block57;
block56:;
int64_t $tmp1550 = $tmp1544.value;
int64_t $tmp1551 = $tmp1545.value;
bool $tmp1552 = $tmp1550 <= $tmp1551;
frost$core$Bit $tmp1553 = (frost$core$Bit) {$tmp1552};
bool $tmp1554 = $tmp1553.value;
if ($tmp1554) goto block53; else goto block54;
block57:;
int64_t $tmp1555 = $tmp1544.value;
int64_t $tmp1556 = $tmp1545.value;
bool $tmp1557 = $tmp1555 < $tmp1556;
frost$core$Bit $tmp1558 = (frost$core$Bit) {$tmp1557};
bool $tmp1559 = $tmp1558.value;
if ($tmp1559) goto block53; else goto block54;
block53:;
// line 491
frost$io$IndentedOutputStream** $tmp1560 = &param0->out;
frost$io$IndentedOutputStream* $tmp1561 = *$tmp1560;
frost$core$String* $tmp1562 = *(&local8);
frost$core$String* $tmp1563 = frost$core$String$get_asString$R$frost$core$String($tmp1562);
frost$core$String* $tmp1564 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1563, &$s1565);
frost$collections$Array* $tmp1566 = *(&local12);
frost$core$Int64 $tmp1567 = *(&local17);
frost$core$Object* $tmp1568 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1566, $tmp1567);
frost$core$String* $tmp1569 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1564, ((frost$core$String*) $tmp1568));
frost$core$String* $tmp1570 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1569, &$s1571);
$fn1573 $tmp1572 = ($fn1573) ((frost$io$OutputStream*) $tmp1561)->$class->vtable[17];
frost$core$Error* $tmp1574 = $tmp1572(((frost$io$OutputStream*) $tmp1561), $tmp1570);
if ($tmp1574 == NULL) goto block58; else goto block59;
block59:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
*(&local1) = $tmp1574;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1569));
frost$core$Frost$unref$frost$core$Object$Q($tmp1568);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1563));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
frost$collections$Array* $tmp1575 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1576 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1576));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1577 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1578 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1578));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1579 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1580 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1581 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1581));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1582 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1582));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1583 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1583));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block58:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1569));
frost$core$Frost$unref$frost$core$Object$Q($tmp1568);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1563));
// line 492
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1584));
frost$core$String* $tmp1585 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
*(&local8) = &$s1586;
goto block55;
block55:;
frost$core$Int64 $tmp1587 = *(&local17);
int64_t $tmp1588 = $tmp1545.value;
int64_t $tmp1589 = $tmp1587.value;
int64_t $tmp1590 = $tmp1588 - $tmp1589;
frost$core$Int64 $tmp1591 = (frost$core$Int64) {$tmp1590};
frost$core$UInt64 $tmp1592 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1591);
if ($tmp1547) goto block61; else goto block62;
block61:;
uint64_t $tmp1593 = $tmp1592.value;
uint64_t $tmp1594 = $tmp1549.value;
bool $tmp1595 = $tmp1593 >= $tmp1594;
frost$core$Bit $tmp1596 = (frost$core$Bit) {$tmp1595};
bool $tmp1597 = $tmp1596.value;
if ($tmp1597) goto block60; else goto block54;
block62:;
uint64_t $tmp1598 = $tmp1592.value;
uint64_t $tmp1599 = $tmp1549.value;
bool $tmp1600 = $tmp1598 > $tmp1599;
frost$core$Bit $tmp1601 = (frost$core$Bit) {$tmp1600};
bool $tmp1602 = $tmp1601.value;
if ($tmp1602) goto block60; else goto block54;
block60:;
int64_t $tmp1603 = $tmp1587.value;
int64_t $tmp1604 = $tmp1548.value;
int64_t $tmp1605 = $tmp1603 + $tmp1604;
frost$core$Int64 $tmp1606 = (frost$core$Int64) {$tmp1605};
*(&local17) = $tmp1606;
goto block53;
block54:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
// line 494
frost$io$IndentedOutputStream** $tmp1607 = &param0->out;
frost$io$IndentedOutputStream* $tmp1608 = *$tmp1607;
$fn1610 $tmp1609 = ($fn1610) ((frost$io$OutputStream*) $tmp1608)->$class->vtable[19];
frost$core$Error* $tmp1611 = $tmp1609(((frost$io$OutputStream*) $tmp1608), &$s1612);
if ($tmp1611 == NULL) goto block63; else goto block64;
block64:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1611));
*(&local1) = $tmp1611;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1611));
frost$collections$Array* $tmp1613 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1613));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1614 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1615 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1615));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1616 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1616));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1617 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1618 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1619 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1619));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1620 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1621 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1621));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block63:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1611));
// line 495
frost$io$IndentedOutputStream** $tmp1622 = &param0->out;
frost$io$IndentedOutputStream* $tmp1623 = *$tmp1622;
frost$io$MemoryOutputStream* $tmp1624 = *(&local11);
$fn1626 $tmp1625 = ($fn1626) ((frost$io$OutputStream*) $tmp1623)->$class->vtable[20];
frost$core$Error* $tmp1627 = $tmp1625(((frost$io$OutputStream*) $tmp1623), ((frost$core$Object*) $tmp1624));
if ($tmp1627 == NULL) goto block65; else goto block66;
block66:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1627));
*(&local1) = $tmp1627;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1627));
frost$collections$Array* $tmp1628 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1628));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1629 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1629));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1630 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1630));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1631 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1631));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1632 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1632));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1633 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1634 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1635 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1636 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1636));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block65:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1627));
// line 496
org$frostlang$frostc$Type** $tmp1637 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1638 = *$tmp1637;
org$frostlang$frostc$Type* $tmp1639 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp1640 = ((frost$core$Equatable*) $tmp1638)->$class->itable;
while ($tmp1640->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1640 = $tmp1640->next;
}
$fn1642 $tmp1641 = $tmp1640->methods[1];
frost$core$Bit $tmp1643 = $tmp1641(((frost$core$Equatable*) $tmp1638), ((frost$core$Equatable*) $tmp1639));
bool $tmp1644 = $tmp1643.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
if ($tmp1644) goto block67; else goto block68;
block67:;
// line 497
frost$io$IndentedOutputStream** $tmp1645 = &param0->out;
frost$io$IndentedOutputStream* $tmp1646 = *$tmp1645;
org$frostlang$frostc$Type** $tmp1647 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1648 = *$tmp1647;
org$frostlang$frostc$Type* $tmp1649 = *(&local5);
frost$core$String* $tmp1650 = org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(param0, &$s1651, $tmp1648, $tmp1649);
frost$core$String* $tmp1652 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1653, $tmp1650);
frost$core$String* $tmp1654 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1652, &$s1655);
$fn1657 $tmp1656 = ($fn1657) ((frost$io$OutputStream*) $tmp1646)->$class->vtable[19];
frost$core$Error* $tmp1658 = $tmp1656(((frost$io$OutputStream*) $tmp1646), $tmp1654);
if ($tmp1658 == NULL) goto block69; else goto block70;
block70:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
*(&local1) = $tmp1658;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
frost$collections$Array* $tmp1659 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1659));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1660 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1660));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1661 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1661));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1662 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1663 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1663));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1664 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1664));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1665 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1665));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1666 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1667 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1667));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block69:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
goto block68;
block68:;
// line 500
frost$io$IndentedOutputStream** $tmp1668 = &param0->out;
frost$io$IndentedOutputStream* $tmp1669 = *$tmp1668;
frost$core$Int64* $tmp1670 = &$tmp1669->level;
frost$core$Int64 $tmp1671 = *$tmp1670;
frost$core$Int64 $tmp1672 = (frost$core$Int64) {1};
int64_t $tmp1673 = $tmp1671.value;
int64_t $tmp1674 = $tmp1672.value;
int64_t $tmp1675 = $tmp1673 - $tmp1674;
frost$core$Int64 $tmp1676 = (frost$core$Int64) {$tmp1675};
frost$core$Int64* $tmp1677 = &$tmp1669->level;
*$tmp1677 = $tmp1676;
// line 501
frost$io$IndentedOutputStream** $tmp1678 = &param0->out;
frost$io$IndentedOutputStream* $tmp1679 = *$tmp1678;
$fn1681 $tmp1680 = ($fn1681) ((frost$io$OutputStream*) $tmp1679)->$class->vtable[19];
frost$core$Error* $tmp1682 = $tmp1680(((frost$io$OutputStream*) $tmp1679), &$s1683);
if ($tmp1682 == NULL) goto block71; else goto block72;
block72:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1682));
*(&local1) = $tmp1682;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1682));
frost$collections$Array* $tmp1684 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1685 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1686 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1686));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1687 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1688 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1688));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1689 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1689));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1690 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1690));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1691 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1692 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1692));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block71:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1682));
// line 502
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1693 = (org$frostlang$frostc$CCodeGenerator$MethodShim*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$MethodShim$class);
frost$core$String* $tmp1694 = *(&local6);
frost$core$MutableString* $tmp1695 = *(&local7);
frost$core$String* $tmp1696 = frost$core$MutableString$finish$R$frost$core$String($tmp1695);
org$frostlang$frostc$CCodeGenerator$MethodShim$init$frost$core$String$frost$core$String($tmp1693, $tmp1694, $tmp1696);
*(&local18) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1693));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1697 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1697));
*(&local18) = $tmp1693;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1693));
// line 503
frost$collections$IdentityMap** $tmp1698 = &param0->methodShims;
frost$collections$IdentityMap* $tmp1699 = *$tmp1698;
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1700 = *(&local18);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V($tmp1699, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp1700));
// line 504
frost$io$IndentedOutputStream** $tmp1701 = &param0->shims;
frost$io$IndentedOutputStream* $tmp1702 = *$tmp1701;
frost$io$MemoryOutputStream* $tmp1703 = *(&local4);
frost$core$String* $tmp1704 = frost$io$MemoryOutputStream$finish$R$frost$core$String($tmp1703);
$fn1706 $tmp1705 = ($fn1706) ((frost$io$OutputStream*) $tmp1702)->$class->vtable[17];
frost$core$Error* $tmp1707 = $tmp1705(((frost$io$OutputStream*) $tmp1702), $tmp1704);
if ($tmp1707 == NULL) goto block73; else goto block74;
block74:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
*(&local1) = $tmp1707;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1708 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1708));
*(&local18) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$collections$Array* $tmp1709 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1710 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1711 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1711));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1712 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1712));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1713 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1713));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1714 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1715 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1716 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1716));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1717 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
// line 505
frost$io$IndentedOutputStream* $tmp1718 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1718));
frost$io$IndentedOutputStream** $tmp1719 = &param0->out;
frost$io$IndentedOutputStream* $tmp1720 = *$tmp1719;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
frost$io$IndentedOutputStream** $tmp1721 = &param0->out;
*$tmp1721 = $tmp1718;
// line 506
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1722 = *(&local18);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1722));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1723 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
*(&local18) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$collections$Array* $tmp1724 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1724));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1725 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1726 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1726));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1727 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1727));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1728 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1728));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1729 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1730 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1730));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1731 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1732 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Error* $tmp1733 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1733));
*(&local1) = ((frost$core$Error*) NULL);
*(&local0) = $tmp1722;
goto block1;
block4:;
// line 509
frost$core$Int64 $tmp1734 = (frost$core$Int64) {509};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1735, $tmp1734);
abort(); // unreachable
block5:;
frost$core$Error* $tmp1736 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
*(&local1) = ((frost$core$Error*) NULL);
goto block75;
block75:;
block1:;
frost$io$IndentedOutputStream** $tmp1737 = &param0->out;
frost$io$IndentedOutputStream* $tmp1738 = *$tmp1737;
bool $tmp1739 = $tmp1738 == $tmp1142;
frost$core$Bit $tmp1740 = frost$core$Bit$init$builtin_bit($tmp1739);
bool $tmp1741 = $tmp1740.value;
if ($tmp1741) goto block2; else goto block3;
block2:;
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1742 = *(&local0);
return $tmp1742;
block3:;
frost$core$Int64 $tmp1743 = (frost$core$Int64) {434};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1744, $tmp1743, &$s1745);
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
// line 514
*(&local0) = ((frost$core$Error*) NULL);
// line 515
frost$core$Weak** $tmp1746 = &param0->compiler;
frost$core$Weak* $tmp1747 = *$tmp1746;
frost$core$Object* $tmp1748 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1747);
org$frostlang$frostc$Type** $tmp1749 = &param1->type;
org$frostlang$frostc$Type* $tmp1750 = *$tmp1749;
frost$collections$HashSet* $tmp1751 = org$frostlang$frostc$Compiler$allInterfaces$org$frostlang$frostc$Type$R$frost$collections$HashSet$LTorg$frostlang$frostc$Type$GT(((org$frostlang$frostc$Compiler*) $tmp1748), $tmp1750);
*(&local1) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1751));
frost$collections$HashSet* $tmp1752 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1752));
*(&local1) = $tmp1751;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1751));
frost$core$Frost$unref$frost$core$Object$Q($tmp1748);
// line 516
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1753));
frost$core$String* $tmp1754 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1754));
*(&local2) = &$s1755;
// line 517
frost$collections$HashSet* $tmp1756 = *(&local1);
ITable* $tmp1757 = ((frost$collections$Iterable*) $tmp1756)->$class->itable;
while ($tmp1757->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1757 = $tmp1757->next;
}
$fn1759 $tmp1758 = $tmp1757->methods[0];
frost$collections$Iterator* $tmp1760 = $tmp1758(((frost$collections$Iterable*) $tmp1756));
goto block3;
block3:;
ITable* $tmp1761 = $tmp1760->$class->itable;
while ($tmp1761->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1761 = $tmp1761->next;
}
$fn1763 $tmp1762 = $tmp1761->methods[0];
frost$core$Bit $tmp1764 = $tmp1762($tmp1760);
bool $tmp1765 = $tmp1764.value;
if ($tmp1765) goto block5; else goto block4;
block4:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp1766 = $tmp1760->$class->itable;
while ($tmp1766->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1766 = $tmp1766->next;
}
$fn1768 $tmp1767 = $tmp1766->methods[1];
frost$core$Object* $tmp1769 = $tmp1767($tmp1760);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1769)));
org$frostlang$frostc$Type* $tmp1770 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp1769);
// line 518
frost$core$Weak** $tmp1771 = &param0->compiler;
frost$core$Weak* $tmp1772 = *$tmp1771;
frost$core$Object* $tmp1773 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1772);
org$frostlang$frostc$Type* $tmp1774 = *(&local3);
org$frostlang$frostc$ClassDecl* $tmp1775 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1773), $tmp1774);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
org$frostlang$frostc$ClassDecl* $tmp1776 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
*(&local4) = $tmp1775;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
frost$core$Frost$unref$frost$core$Object$Q($tmp1773);
// line 519
org$frostlang$frostc$ClassDecl* $tmp1777 = *(&local4);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1778 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp1777);
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1778));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1779 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1779));
*(&local5) = $tmp1778;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1778));
// line 520
frost$core$Weak** $tmp1780 = &param0->compiler;
frost$core$Weak* $tmp1781 = *$tmp1780;
frost$core$Object* $tmp1782 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1781);
org$frostlang$frostc$Type* $tmp1783 = *(&local3);
frost$collections$ListView* $tmp1784 = org$frostlang$frostc$Compiler$interfaceMethods$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1782), param1, $tmp1783);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1784));
frost$collections$ListView* $tmp1785 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1785));
*(&local6) = $tmp1784;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1784));
frost$core$Frost$unref$frost$core$Object$Q($tmp1782);
// line 521
frost$core$String** $tmp1786 = &param1->name;
frost$core$String* $tmp1787 = *$tmp1786;
frost$core$String* $tmp1788 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1787);
frost$core$String* $tmp1789 = frost$core$String$get_asString$R$frost$core$String($tmp1788);
frost$core$String* $tmp1790 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1789, &$s1791);
org$frostlang$frostc$ClassDecl* $tmp1792 = *(&local4);
frost$core$String** $tmp1793 = &$tmp1792->name;
frost$core$String* $tmp1794 = *$tmp1793;
frost$core$String* $tmp1795 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1794);
frost$core$String* $tmp1796 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1790, $tmp1795);
frost$core$String* $tmp1797 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1796, &$s1798);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1797));
frost$core$String* $tmp1799 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1799));
*(&local7) = $tmp1797;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1797));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1796));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1789));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
// line 522
frost$core$MutableString* $tmp1800 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Type* $tmp1801 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp1802 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1801);
frost$core$String* $tmp1803 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1804, $tmp1802);
frost$core$String* $tmp1805 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1803, &$s1806);
frost$collections$ListView* $tmp1807 = *(&local6);
ITable* $tmp1808 = ((frost$collections$CollectionView*) $tmp1807)->$class->itable;
while ($tmp1808->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1808 = $tmp1808->next;
}
$fn1810 $tmp1809 = $tmp1808->methods[0];
frost$core$Int64 $tmp1811 = $tmp1809(((frost$collections$CollectionView*) $tmp1807));
frost$core$Int64$wrapper* $tmp1812;
$tmp1812 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1812->value = $tmp1811;
frost$core$String* $tmp1813 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1814, ((frost$core$Object*) $tmp1812));
frost$core$String* $tmp1815 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1813, &$s1816);
frost$core$String* $tmp1817 = *(&local7);
frost$core$String* $tmp1818 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1815, $tmp1817);
frost$core$String* $tmp1819 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1818, &$s1820);
frost$core$String* $tmp1821 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1805, $tmp1819);
org$frostlang$frostc$Type* $tmp1822 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp1823 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1822);
frost$core$String* $tmp1824 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1825, $tmp1823);
frost$core$String* $tmp1826 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1824, &$s1827);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1828 = *(&local5);
frost$core$String** $tmp1829 = &$tmp1828->name;
frost$core$String* $tmp1830 = *$tmp1829;
frost$core$String* $tmp1831 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1826, $tmp1830);
frost$core$String* $tmp1832 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1831, &$s1833);
frost$core$String* $tmp1834 = *(&local2);
frost$core$String* $tmp1835 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1832, $tmp1834);
frost$core$String* $tmp1836 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1835, &$s1837);
frost$core$String* $tmp1838 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1821, $tmp1836);
frost$core$MutableString$init$frost$core$String($tmp1800, $tmp1838);
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
frost$core$MutableString* $tmp1839 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1839));
*(&local8) = $tmp1800;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1838));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1822));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1821));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
// line 525
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1840));
frost$core$String* $tmp1841 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1841));
*(&local9) = &$s1842;
// line 526
frost$collections$ListView* $tmp1843 = *(&local6);
ITable* $tmp1844 = ((frost$collections$Iterable*) $tmp1843)->$class->itable;
while ($tmp1844->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1844 = $tmp1844->next;
}
$fn1846 $tmp1845 = $tmp1844->methods[0];
frost$collections$Iterator* $tmp1847 = $tmp1845(((frost$collections$Iterable*) $tmp1843));
goto block6;
block6:;
ITable* $tmp1848 = $tmp1847->$class->itable;
while ($tmp1848->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1848 = $tmp1848->next;
}
$fn1850 $tmp1849 = $tmp1848->methods[0];
frost$core$Bit $tmp1851 = $tmp1849($tmp1847);
bool $tmp1852 = $tmp1851.value;
if ($tmp1852) goto block8; else goto block7;
block7:;
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp1853 = $tmp1847->$class->itable;
while ($tmp1853->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1853 = $tmp1853->next;
}
$fn1855 $tmp1854 = $tmp1853->methods[1];
frost$core$Object* $tmp1856 = $tmp1854($tmp1847);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1856)));
org$frostlang$frostc$MethodDecl* $tmp1857 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) $tmp1856);
// line 527
frost$core$MutableString* $tmp1858 = *(&local8);
frost$core$String* $tmp1859 = *(&local9);
frost$core$MutableString$append$frost$core$String($tmp1858, $tmp1859);
// line 528
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1860));
frost$core$String* $tmp1861 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
*(&local9) = &$s1862;
// line 529
org$frostlang$frostc$MethodDecl* $tmp1863 = *(&local10);
org$frostlang$frostc$Annotations** $tmp1864 = &$tmp1863->annotations;
org$frostlang$frostc$Annotations* $tmp1865 = *$tmp1864;
frost$core$Bit $tmp1866 = org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit($tmp1865);
bool $tmp1867 = $tmp1866.value;
if ($tmp1867) goto block9; else goto block11;
block9:;
// line 530
frost$core$MutableString* $tmp1868 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp1868, &$s1869);
goto block10;
block11:;
// line 1
// line 533
frost$core$MutableString* $tmp1870 = *(&local8);
org$frostlang$frostc$MethodDecl* $tmp1871 = *(&local10);
frost$core$String* $tmp1872 = org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, $tmp1871);
frost$core$MutableString$append$frost$core$String($tmp1870, $tmp1872);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1872));
goto block10;
block10:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1856);
org$frostlang$frostc$MethodDecl* $tmp1873 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1847));
// line 536
frost$core$MutableString* $tmp1874 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp1874, &$s1875);
// line 537
frost$io$MemoryOutputStream** $tmp1876 = &param0->types;
frost$io$MemoryOutputStream* $tmp1877 = *$tmp1876;
frost$core$MutableString* $tmp1878 = *(&local8);
frost$core$String* $tmp1879 = frost$core$MutableString$finish$R$frost$core$String($tmp1878);
$fn1881 $tmp1880 = ($fn1881) ((frost$io$OutputStream*) $tmp1877)->$class->vtable[19];
frost$core$Error* $tmp1882 = $tmp1880(((frost$io$OutputStream*) $tmp1877), $tmp1879);
if ($tmp1882 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
*(&local0) = $tmp1882;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1879));
frost$core$String* $tmp1883 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1883));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1884 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1884));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1885 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1885));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1886 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1887 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1888 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1888));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1769);
org$frostlang$frostc$Type* $tmp1889 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1889));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1760));
frost$core$String* $tmp1890 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
*(&local2) = ((frost$core$String*) NULL);
frost$collections$HashSet* $tmp1891 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
*(&local1) = ((frost$collections$HashSet*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1879));
// line 538
frost$core$String* $tmp1892 = *(&local7);
frost$core$String* $tmp1893 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1894, $tmp1892);
frost$core$String* $tmp1895 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1893, &$s1896);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
frost$core$String* $tmp1897 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1897));
*(&local2) = $tmp1895;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1893));
frost$core$String* $tmp1898 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1898));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1899 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1899));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1900 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1900));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1901 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1902 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1902));
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1903 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1769);
org$frostlang$frostc$Type* $tmp1904 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1760));
// line 540
frost$core$String* $tmp1905 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
frost$core$String* $tmp1906 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
*(&local2) = ((frost$core$String*) NULL);
frost$collections$HashSet* $tmp1907 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
*(&local1) = ((frost$collections$HashSet*) NULL);
frost$core$Error* $tmp1908 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1908));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp1905;
block1:;
// line 543
frost$core$Int64 $tmp1909 = (frost$core$Int64) {543};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1910, $tmp1909);
abort(); // unreachable
block2:;
frost$core$Error* $tmp1911 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
*(&local0) = ((frost$core$Error*) NULL);
goto block14;
block14:;

}
frost$core$Bit org$frostlang$frostc$CCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

// line 548
frost$core$Weak** $tmp1912 = &param0->hCodeGen;
frost$core$Weak* $tmp1913 = *$tmp1912;
frost$core$Object* $tmp1914 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1913);
frost$core$Bit $tmp1915 = org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$HCodeGenerator*) $tmp1914), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp1914);
return $tmp1915;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$CCodeGenerator$MethodShim* local4 = NULL;
// line 552
frost$core$Weak** $tmp1916 = &param0->compiler;
frost$core$Weak* $tmp1917 = *$tmp1916;
frost$core$Object* $tmp1918 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1917);
frost$core$Bit $tmp1919 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1918), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp1918);
// line 553
frost$core$Weak** $tmp1920 = &param1->owner;
frost$core$Weak* $tmp1921 = *$tmp1920;
frost$core$Object* $tmp1922 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1921);
frost$core$Bit $tmp1923 = org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp1922));
bool $tmp1924 = $tmp1923.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1922);
if ($tmp1924) goto block1; else goto block2;
block1:;
// line 554
org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param1);
goto block2;
block2:;
// line 556
*(&local0) = ((frost$core$String*) NULL);
// line 557
frost$core$Weak** $tmp1925 = &param0->compiler;
frost$core$Weak* $tmp1926 = *$tmp1925;
frost$core$Object* $tmp1927 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1926);
frost$core$Weak** $tmp1928 = &param1->owner;
frost$core$Weak* $tmp1929 = *$tmp1928;
frost$core$Object* $tmp1930 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1929);
org$frostlang$frostc$Type** $tmp1931 = &((org$frostlang$frostc$ClassDecl*) $tmp1930)->type;
org$frostlang$frostc$Type* $tmp1932 = *$tmp1931;
frost$core$Bit $tmp1933 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp1934 = org$frostlang$frostc$Compiler$declaredTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp1927), param1, $tmp1932, $tmp1933);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1934));
org$frostlang$frostc$Type* $tmp1935 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1935));
*(&local1) = $tmp1934;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1934));
frost$core$Frost$unref$frost$core$Object$Q($tmp1930);
frost$core$Frost$unref$frost$core$Object$Q($tmp1927);
// line 558
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
// line 559
frost$core$Weak** $tmp1936 = &param0->compiler;
frost$core$Weak* $tmp1937 = *$tmp1936;
frost$core$Object* $tmp1938 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1937);
frost$core$Weak** $tmp1939 = &param1->owner;
frost$core$Weak* $tmp1940 = *$tmp1939;
frost$core$Object* $tmp1941 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1940);
frost$core$Bit $tmp1942 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1938), ((org$frostlang$frostc$ClassDecl*) $tmp1941));
bool $tmp1943 = $tmp1942.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1941);
frost$core$Frost$unref$frost$core$Object$Q($tmp1938);
if ($tmp1943) goto block3; else goto block5;
block3:;
// line 560
org$frostlang$frostc$Type* $tmp1944 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
org$frostlang$frostc$Type* $tmp1945 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1945));
*(&local2) = $tmp1944;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
goto block4;
block5:;
// line 1
// line 563
frost$core$Weak** $tmp1946 = &param1->owner;
frost$core$Weak* $tmp1947 = *$tmp1946;
frost$core$Object* $tmp1948 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1947);
org$frostlang$frostc$Type** $tmp1949 = &((org$frostlang$frostc$ClassDecl*) $tmp1948)->type;
org$frostlang$frostc$Type* $tmp1950 = *$tmp1949;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1950));
org$frostlang$frostc$Type* $tmp1951 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1951));
*(&local2) = $tmp1950;
frost$core$Frost$unref$frost$core$Object$Q($tmp1948);
goto block4;
block4:;
// line 565
frost$core$Weak** $tmp1952 = &param0->compiler;
frost$core$Weak* $tmp1953 = *$tmp1952;
frost$core$Object* $tmp1954 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1953);
org$frostlang$frostc$Type* $tmp1955 = *(&local2);
org$frostlang$frostc$Type* $tmp1956 = org$frostlang$frostc$Compiler$inheritedTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp1954), param1, $tmp1955);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1956));
org$frostlang$frostc$Type* $tmp1957 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1957));
*(&local3) = $tmp1956;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1956));
frost$core$Frost$unref$frost$core$Object$Q($tmp1954);
// line 566
org$frostlang$frostc$Type* $tmp1958 = *(&local1);
org$frostlang$frostc$Type* $tmp1959 = *(&local3);
ITable* $tmp1960 = ((frost$core$Equatable*) $tmp1958)->$class->itable;
while ($tmp1960->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1960 = $tmp1960->next;
}
$fn1962 $tmp1961 = $tmp1960->methods[1];
frost$core$Bit $tmp1963 = $tmp1961(((frost$core$Equatable*) $tmp1958), ((frost$core$Equatable*) $tmp1959));
bool $tmp1964 = $tmp1963.value;
if ($tmp1964) goto block6; else goto block8;
block6:;
// line 567
org$frostlang$frostc$Type* $tmp1965 = *(&local3);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1966 = org$frostlang$frostc$CCodeGenerator$createMethodShim$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$MethodShim(param0, param1, $tmp1965);
*(&local4) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1966));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1967 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1967));
*(&local4) = $tmp1966;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1966));
// line 568
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1968 = *(&local4);
frost$core$String** $tmp1969 = &$tmp1968->name;
frost$core$String* $tmp1970 = *$tmp1969;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
frost$core$String* $tmp1971 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1971));
*(&local0) = $tmp1970;
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1972 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1972));
*(&local4) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block7;
block8:;
// line 1
// line 571
frost$core$String* $tmp1973 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1973));
frost$core$String* $tmp1974 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1974));
*(&local0) = $tmp1973;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1973));
goto block7;
block7:;
// line 573
frost$core$String* $tmp1975 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1975));
org$frostlang$frostc$Type* $tmp1976 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1976));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1977 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1977));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1978 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1979 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1975;

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
// line 577
*(&local0) = ((frost$core$Error*) NULL);
// line 578
frost$collections$HashMap** $tmp1980 = &param0->classConstants;
frost$collections$HashMap* $tmp1981 = *$tmp1980;
frost$core$String** $tmp1982 = &param1->name;
frost$core$String* $tmp1983 = *$tmp1982;
frost$core$Object* $tmp1984 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1981, ((frost$collections$Key*) $tmp1983));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp1984)));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1985 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1985));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp1984);
frost$core$Frost$unref$frost$core$Object$Q($tmp1984);
// line 579
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1986 = *(&local1);
frost$core$Bit $tmp1987 = frost$core$Bit$init$builtin_bit($tmp1986 == NULL);
bool $tmp1988 = $tmp1987.value;
if ($tmp1988) goto block3; else goto block4;
block3:;
// line 580
org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(param0, param1);
// line 581
frost$core$Weak** $tmp1989 = &param0->compiler;
frost$core$Weak* $tmp1990 = *$tmp1989;
frost$core$Object* $tmp1991 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1990);
frost$core$Bit $tmp1992 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1991), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp1991);
// line 582
*(&local2) = ((frost$core$String*) NULL);
// line 583
frost$core$Bit $tmp1993 = org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, param1);
bool $tmp1994 = $tmp1993.value;
if ($tmp1994) goto block5; else goto block6;
block5:;
// line 584
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1995 = (org$frostlang$frostc$CCodeGenerator$ClassConstant*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$ClassConstant$class);
org$frostlang$frostc$Type** $tmp1996 = &param1->type;
org$frostlang$frostc$Type* $tmp1997 = *$tmp1996;
frost$core$String** $tmp1998 = &((org$frostlang$frostc$Symbol*) $tmp1997)->name;
frost$core$String* $tmp1999 = *$tmp1998;
frost$core$String* $tmp2000 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1999);
frost$core$String* $tmp2001 = frost$core$String$get_asString$R$frost$core$String($tmp2000);
frost$core$String* $tmp2002 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2001, &$s2003);
org$frostlang$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String($tmp1995, $tmp2002, &$s2004);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2005 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
*(&local1) = $tmp1995;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2002));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
// line 586
frost$collections$HashMap** $tmp2006 = &param0->classConstants;
frost$collections$HashMap* $tmp2007 = *$tmp2006;
frost$core$String** $tmp2008 = &param1->name;
frost$core$String* $tmp2009 = *$tmp2008;
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2010 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2007, ((frost$collections$Key*) $tmp2009), ((frost$core$Object*) $tmp2010));
// line 587
frost$collections$HashMap** $tmp2011 = &param0->classConstants;
frost$collections$HashMap* $tmp2012 = *$tmp2011;
frost$core$String** $tmp2013 = &param1->name;
frost$core$String* $tmp2014 = *$tmp2013;
frost$core$Object* $tmp2015 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2012, ((frost$collections$Key*) $tmp2014));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp2015)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2015);
frost$core$String* $tmp2016 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2016));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2017 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2017));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Error* $tmp2018 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2018));
*(&local0) = ((frost$core$Error*) NULL);
return ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp2015);
block6:;
// line 589
frost$core$Weak** $tmp2019 = &param0->compiler;
frost$core$Weak* $tmp2020 = *$tmp2019;
frost$core$Object* $tmp2021 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2020);
frost$collections$Stack** $tmp2022 = &((org$frostlang$frostc$Compiler*) $tmp2021)->currentClass;
frost$collections$Stack* $tmp2023 = *$tmp2022;
frost$collections$Stack$push$frost$collections$Stack$T($tmp2023, ((frost$core$Object*) param1));
frost$core$Frost$unref$frost$core$Object$Q($tmp2021);
// line 590
frost$core$Weak** $tmp2024 = &param0->compiler;
frost$core$Weak* $tmp2025 = *$tmp2024;
frost$core$Object* $tmp2026 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2025);
frost$collections$ListView* $tmp2027 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2026), param1);
*(&local3) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2027));
frost$collections$ListView* $tmp2028 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
*(&local3) = $tmp2027;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2027));
frost$core$Frost$unref$frost$core$Object$Q($tmp2026);
// line 591
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2029 = (org$frostlang$frostc$CCodeGenerator$ClassConstant*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$ClassConstant$class);
org$frostlang$frostc$Type** $tmp2030 = &param1->type;
org$frostlang$frostc$Type* $tmp2031 = *$tmp2030;
frost$core$String** $tmp2032 = &((org$frostlang$frostc$Symbol*) $tmp2031)->name;
frost$core$String* $tmp2033 = *$tmp2032;
frost$core$String* $tmp2034 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp2033);
frost$core$String* $tmp2035 = frost$core$String$get_asString$R$frost$core$String($tmp2034);
frost$core$String* $tmp2036 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2035, &$s2037);
org$frostlang$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String($tmp2029, $tmp2036, &$s2038);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2029));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2039 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2039));
*(&local1) = $tmp2029;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2029));
// line 592
frost$collections$HashMap** $tmp2040 = &param0->classConstants;
frost$collections$HashMap* $tmp2041 = *$tmp2040;
frost$core$String** $tmp2042 = &param1->name;
frost$core$String* $tmp2043 = *$tmp2042;
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2044 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2041, ((frost$collections$Key*) $tmp2043), ((frost$core$Object*) $tmp2044));
// line 593
*(&local4) = ((frost$core$String*) NULL);
// line 594
org$frostlang$frostc$Type** $tmp2045 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp2046 = *$tmp2045;
frost$core$Bit $tmp2047 = frost$core$Bit$init$builtin_bit($tmp2046 != NULL);
bool $tmp2048 = $tmp2047.value;
if ($tmp2048) goto block7; else goto block9;
block7:;
// line 595
frost$core$Weak** $tmp2049 = &param0->compiler;
frost$core$Weak* $tmp2050 = *$tmp2049;
frost$core$Object* $tmp2051 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2050);
org$frostlang$frostc$Type** $tmp2052 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp2053 = *$tmp2052;
org$frostlang$frostc$ClassDecl* $tmp2054 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2051), $tmp2053);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2055 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp2054);
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2055));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2056 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2056));
*(&local5) = $tmp2055;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2055));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2054));
frost$core$Frost$unref$frost$core$Object$Q($tmp2051);
// line 596
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2057 = *(&local5);
frost$core$String** $tmp2058 = &$tmp2057->name;
frost$core$String* $tmp2059 = *$tmp2058;
frost$core$String* $tmp2060 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2061, $tmp2059);
frost$core$String* $tmp2062 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2060, &$s2063);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
frost$core$String* $tmp2064 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
*(&local4) = $tmp2062;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2065 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block8;
block9:;
// line 1
// line 599
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2066));
frost$core$String* $tmp2067 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2067));
*(&local4) = &$s2068;
goto block8;
block8:;
// line 601
frost$core$Weak** $tmp2069 = &param0->compiler;
frost$core$Weak* $tmp2070 = *$tmp2069;
frost$core$Object* $tmp2071 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2070);
org$frostlang$frostc$Type* $tmp2072 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp2073 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2071), $tmp2072);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2074 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp2073);
*(&local6) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2074));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2075 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
*(&local6) = $tmp2074;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2074));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2073));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2072));
frost$core$Frost$unref$frost$core$Object$Q($tmp2071);
// line 602
frost$core$String** $tmp2076 = &param1->name;
frost$core$String* $tmp2077 = *$tmp2076;
frost$core$String* $tmp2078 = org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(param0, $tmp2077);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
frost$core$String* $tmp2079 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2079));
*(&local7) = $tmp2078;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
// line 603
frost$core$String* $tmp2080 = *(&local7);
frost$core$Bit $tmp2081 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2080, &$s2082);
bool $tmp2083 = $tmp2081.value;
if ($tmp2083) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp2084 = (frost$core$Int64) {603};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2085, $tmp2084);
abort(); // unreachable
block10:;
// line 604
frost$core$MutableString* $tmp2086 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp2087 = *(&local7);
frost$core$Int64 $tmp2088 = (frost$core$Int64) {1};
frost$core$Bit $tmp2089 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp2090 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp2088, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp2089);
frost$core$String* $tmp2091 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp2087, $tmp2090);
frost$core$String* $tmp2092 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2093, $tmp2091);
frost$core$String* $tmp2094 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2092, &$s2095);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2096 = *(&local1);
frost$core$String** $tmp2097 = &$tmp2096->name;
frost$core$String* $tmp2098 = *$tmp2097;
frost$core$String* $tmp2099 = frost$core$String$get_asString$R$frost$core$String($tmp2098);
frost$core$String* $tmp2100 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2099, &$s2101);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2102 = *(&local1);
frost$core$String** $tmp2103 = &$tmp2102->name;
frost$core$String* $tmp2104 = *$tmp2103;
frost$core$String* $tmp2105 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2100, $tmp2104);
frost$core$String* $tmp2106 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2105, &$s2107);
frost$core$String* $tmp2108 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2094, $tmp2106);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2109 = *(&local6);
frost$core$String** $tmp2110 = &$tmp2109->name;
frost$core$String* $tmp2111 = *$tmp2110;
frost$core$String* $tmp2112 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2113, $tmp2111);
frost$core$String* $tmp2114 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2112, &$s2115);
frost$core$Int64 $tmp2116 = (frost$core$Int64) {18446744073709550617};
frost$core$Int64$wrapper* $tmp2117;
$tmp2117 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2117->value = $tmp2116;
frost$core$String* $tmp2118 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2114, ((frost$core$Object*) $tmp2117));
frost$core$String* $tmp2119 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2118, &$s2120);
frost$core$String* $tmp2121 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2108, $tmp2119);
frost$core$String* $tmp2122 = *(&local7);
frost$core$String* $tmp2123 = frost$core$String$get_asString$R$frost$core$String($tmp2122);
frost$core$String* $tmp2124 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2123, &$s2125);
frost$core$String* $tmp2126 = *(&local4);
frost$core$String* $tmp2127 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2124, $tmp2126);
frost$core$String* $tmp2128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2127, &$s2129);
frost$core$String* $tmp2130 = org$frostlang$frostc$CCodeGenerator$getITable$org$frostlang$frostc$ClassDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp2131 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2128, $tmp2130);
frost$core$String* $tmp2132 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2131, &$s2133);
frost$core$String* $tmp2134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2121, $tmp2132);
frost$core$MutableString$init$frost$core$String($tmp2086, $tmp2134);
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2086));
frost$core$MutableString* $tmp2135 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2135));
*(&local8) = $tmp2086;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2124));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2099));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2092));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2091));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2086));
// line 608
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2136));
frost$core$String* $tmp2137 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
*(&local9) = &$s2138;
// line 609
frost$collections$ListView* $tmp2139 = *(&local3);
ITable* $tmp2140 = ((frost$collections$Iterable*) $tmp2139)->$class->itable;
while ($tmp2140->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2140 = $tmp2140->next;
}
$fn2142 $tmp2141 = $tmp2140->methods[0];
frost$collections$Iterator* $tmp2143 = $tmp2141(((frost$collections$Iterable*) $tmp2139));
goto block12;
block12:;
ITable* $tmp2144 = $tmp2143->$class->itable;
while ($tmp2144->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2144 = $tmp2144->next;
}
$fn2146 $tmp2145 = $tmp2144->methods[0];
frost$core$Bit $tmp2147 = $tmp2145($tmp2143);
bool $tmp2148 = $tmp2147.value;
if ($tmp2148) goto block14; else goto block13;
block13:;
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp2149 = $tmp2143->$class->itable;
while ($tmp2149->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2149 = $tmp2149->next;
}
$fn2151 $tmp2150 = $tmp2149->methods[1];
frost$core$Object* $tmp2152 = $tmp2150($tmp2143);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp2152)));
org$frostlang$frostc$MethodDecl* $tmp2153 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) $tmp2152);
// line 610
frost$core$MutableString* $tmp2154 = *(&local8);
frost$core$String* $tmp2155 = *(&local9);
frost$core$MutableString$append$frost$core$String($tmp2154, $tmp2155);
// line 611
org$frostlang$frostc$MethodDecl* $tmp2156 = *(&local10);
org$frostlang$frostc$Annotations** $tmp2157 = &$tmp2156->annotations;
org$frostlang$frostc$Annotations* $tmp2158 = *$tmp2157;
frost$core$Bit $tmp2159 = org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit($tmp2158);
bool $tmp2160 = $tmp2159.value;
if ($tmp2160) goto block15; else goto block17;
block15:;
// line 612
frost$core$MutableString* $tmp2161 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp2161, &$s2162);
goto block16;
block17:;
// line 1
// line 615
frost$core$MutableString* $tmp2163 = *(&local8);
org$frostlang$frostc$MethodDecl* $tmp2164 = *(&local10);
frost$core$String* $tmp2165 = org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, $tmp2164);
frost$core$MutableString$append$frost$core$String($tmp2163, $tmp2165);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2165));
goto block16;
block16:;
// line 617
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2166));
frost$core$String* $tmp2167 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2167));
*(&local9) = &$s2168;
frost$core$Frost$unref$frost$core$Object$Q($tmp2152);
org$frostlang$frostc$MethodDecl* $tmp2169 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2169));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2143));
// line 619
frost$core$MutableString* $tmp2170 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp2170, &$s2171);
// line 620
frost$io$MemoryOutputStream** $tmp2172 = &param0->types;
frost$io$MemoryOutputStream* $tmp2173 = *$tmp2172;
frost$core$MutableString* $tmp2174 = *(&local8);
frost$core$String* $tmp2175 = frost$core$MutableString$finish$R$frost$core$String($tmp2174);
$fn2177 $tmp2176 = ($fn2177) ((frost$io$OutputStream*) $tmp2173)->$class->vtable[19];
frost$core$Error* $tmp2178 = $tmp2176(((frost$io$OutputStream*) $tmp2173), $tmp2175);
if ($tmp2178 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2178));
*(&local0) = $tmp2178;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2175));
frost$core$String* $tmp2179 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2179));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2180 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2180));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2181 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2181));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2182 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
*(&local6) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2183 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2183));
*(&local4) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp2184 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2184));
*(&local3) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp2185 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2186 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2186));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2175));
// line 621
frost$core$Weak** $tmp2187 = &param0->compiler;
frost$core$Weak* $tmp2188 = *$tmp2187;
frost$core$Object* $tmp2189 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2188);
frost$collections$Stack** $tmp2190 = &((org$frostlang$frostc$Compiler*) $tmp2189)->currentClass;
frost$collections$Stack* $tmp2191 = *$tmp2190;
frost$core$Int64 $tmp2192 = (frost$core$Int64) {0};
frost$core$Object* $tmp2193 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp2191, $tmp2192);
bool $tmp2194 = ((org$frostlang$frostc$ClassDecl*) $tmp2193) == param1;
frost$core$Bit $tmp2195 = frost$core$Bit$init$builtin_bit($tmp2194);
bool $tmp2196 = $tmp2195.value;
if ($tmp2196) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp2197 = (frost$core$Int64) {621};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2198, $tmp2197);
abort(); // unreachable
block20:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2193);
frost$core$Frost$unref$frost$core$Object$Q($tmp2189);
// line 622
frost$core$Weak** $tmp2199 = &param0->compiler;
frost$core$Weak* $tmp2200 = *$tmp2199;
frost$core$Object* $tmp2201 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2200);
frost$collections$Stack** $tmp2202 = &((org$frostlang$frostc$Compiler*) $tmp2201)->currentClass;
frost$collections$Stack* $tmp2203 = *$tmp2202;
frost$core$Object* $tmp2204 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2203);
frost$core$Frost$unref$frost$core$Object$Q($tmp2204);
frost$core$Frost$unref$frost$core$Object$Q($tmp2201);
frost$core$String* $tmp2205 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2206 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2206));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2207 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2207));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2208 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
*(&local6) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2209 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2209));
*(&local4) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp2210 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2210));
*(&local3) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp2211 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2211));
*(&local2) = ((frost$core$String*) NULL);
goto block4;
block4:;
// line 624
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2212 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2212));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2213 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2213));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Error* $tmp2214 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2214));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp2212;
block1:;
// line 627
frost$core$Int64 $tmp2215 = (frost$core$Int64) {627};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2216, $tmp2215);
abort(); // unreachable
block2:;
frost$core$Error* $tmp2217 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2217));
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
// line 632
*(&local0) = ((frost$core$Error*) NULL);
// line 633
frost$core$String** $tmp2218 = &param1->name;
frost$core$String* $tmp2219 = *$tmp2218;
frost$core$String* $tmp2220 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp2219);
frost$core$String* $tmp2221 = frost$core$String$get_asString$R$frost$core$String($tmp2220);
frost$core$String* $tmp2222 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2221, &$s2223);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2222));
frost$core$String* $tmp2224 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
*(&local1) = $tmp2222;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2220));
// line 634
frost$collections$HashMap** $tmp2225 = &param0->classConstants;
frost$collections$HashMap* $tmp2226 = *$tmp2225;
frost$core$String* $tmp2227 = *(&local1);
frost$core$Object* $tmp2228 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2226, ((frost$collections$Key*) $tmp2227));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp2228)));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2229 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2229));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp2228);
frost$core$Frost$unref$frost$core$Object$Q($tmp2228);
// line 635
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2230 = *(&local2);
frost$core$Bit $tmp2231 = frost$core$Bit$init$builtin_bit($tmp2230 == NULL);
bool $tmp2232 = $tmp2231.value;
if ($tmp2232) goto block3; else goto block4;
block3:;
// line 636
frost$core$Bit $tmp2233 = org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, param1);
bool $tmp2234 = $tmp2233.value;
if ($tmp2234) goto block5; else goto block7;
block5:;
// line 637
org$frostlang$frostc$Type* $tmp2235 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp2236 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp2235);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2235));
// line 638
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2237));
frost$core$String* $tmp2238 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2238));
*(&local3) = &$s2239;
// line 639
frost$io$MemoryOutputStream** $tmp2240 = &param0->types;
frost$io$MemoryOutputStream* $tmp2241 = *$tmp2240;
frost$core$String* $tmp2242 = *(&local1);
frost$core$String* $tmp2243 = frost$core$String$get_asString$R$frost$core$String($tmp2242);
frost$core$String* $tmp2244 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2243, &$s2245);
frost$core$String* $tmp2246 = *(&local3);
frost$core$String* $tmp2247 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2244, $tmp2246);
frost$core$String* $tmp2248 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2247, &$s2249);
$fn2251 $tmp2250 = ($fn2251) ((frost$io$OutputStream*) $tmp2241)->$class->vtable[19];
frost$core$Error* $tmp2252 = $tmp2250(((frost$io$OutputStream*) $tmp2241), $tmp2248);
if ($tmp2252 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
*(&local0) = $tmp2252;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2243));
frost$core$String* $tmp2253 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2253));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2254 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2254));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2255 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2255));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2243));
// line 640
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2256 = (org$frostlang$frostc$CCodeGenerator$ClassConstant*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$ClassConstant$class);
frost$core$String* $tmp2257 = *(&local1);
frost$core$String* $tmp2258 = *(&local3);
org$frostlang$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String($tmp2256, $tmp2257, $tmp2258);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2256));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2259 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2259));
*(&local2) = $tmp2256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2256));
frost$core$String* $tmp2260 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
*(&local3) = ((frost$core$String*) NULL);
goto block6;
block7:;
// line 1
// line 643
frost$core$Weak** $tmp2261 = &param0->compiler;
frost$core$Weak* $tmp2262 = *$tmp2261;
frost$core$Object* $tmp2263 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2262);
org$frostlang$frostc$Type* $tmp2264 = org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp2265 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2263), $tmp2264);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
org$frostlang$frostc$ClassDecl* $tmp2266 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
*(&local4) = $tmp2265;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2264));
frost$core$Frost$unref$frost$core$Object$Q($tmp2263);
// line 644
frost$core$Weak** $tmp2267 = &param0->compiler;
frost$core$Weak* $tmp2268 = *$tmp2267;
frost$core$Object* $tmp2269 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2268);
org$frostlang$frostc$ClassDecl* $tmp2270 = *(&local4);
frost$collections$ListView* $tmp2271 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2269), $tmp2270);
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2271));
frost$collections$ListView* $tmp2272 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2272));
*(&local5) = $tmp2271;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2271));
frost$core$Frost$unref$frost$core$Object$Q($tmp2269);
// line 645
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2273 = (org$frostlang$frostc$CCodeGenerator$ClassConstant*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$ClassConstant$class);
frost$core$String** $tmp2274 = &param1->name;
frost$core$String* $tmp2275 = *$tmp2274;
frost$core$String* $tmp2276 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp2275);
frost$core$String* $tmp2277 = frost$core$String$get_asString$R$frost$core$String($tmp2276);
frost$core$String* $tmp2278 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2277, &$s2279);
org$frostlang$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String($tmp2273, $tmp2278, &$s2280);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2281 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2281));
*(&local2) = $tmp2273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
// line 646
frost$core$Weak** $tmp2282 = &param0->compiler;
frost$core$Weak* $tmp2283 = *$tmp2282;
frost$core$Object* $tmp2284 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2283);
frost$collections$ListView* $tmp2285 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2284), param1);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2285));
frost$collections$ListView* $tmp2286 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2286));
*(&local6) = $tmp2285;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2285));
frost$core$Frost$unref$frost$core$Object$Q($tmp2284);
// line 647
frost$core$Weak** $tmp2287 = &param0->compiler;
frost$core$Weak* $tmp2288 = *$tmp2287;
frost$core$Object* $tmp2289 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2288);
org$frostlang$frostc$Type** $tmp2290 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp2291 = *$tmp2290;
org$frostlang$frostc$ClassDecl* $tmp2292 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2289), $tmp2291);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2293 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp2292);
*(&local7) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2293));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2294 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2294));
*(&local7) = $tmp2293;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2292));
frost$core$Frost$unref$frost$core$Object$Q($tmp2289);
// line 648
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2295 = *(&local7);
frost$core$String** $tmp2296 = &$tmp2295->name;
frost$core$String* $tmp2297 = *$tmp2296;
frost$core$String* $tmp2298 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2299, $tmp2297);
frost$core$String* $tmp2300 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2298, &$s2301);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
frost$core$String* $tmp2302 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2302));
*(&local8) = $tmp2300;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2298));
// line 649
frost$core$String* $tmp2303 = org$frostlang$frostc$CCodeGenerator$getWrapperITable$org$frostlang$frostc$ClassDecl$R$frost$core$String(param0, param1);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
frost$core$String* $tmp2304 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2304));
*(&local9) = $tmp2303;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
// line 650
frost$core$Weak** $tmp2305 = &param0->compiler;
frost$core$Weak* $tmp2306 = *$tmp2305;
frost$core$Object* $tmp2307 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2306);
org$frostlang$frostc$Type* $tmp2308 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp2309 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2307), $tmp2308);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2310 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp2309);
*(&local10) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2310));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2311 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2311));
*(&local10) = $tmp2310;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2310));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2309));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2308));
frost$core$Frost$unref$frost$core$Object$Q($tmp2307);
// line 651
frost$core$String** $tmp2312 = &param1->name;
frost$core$String* $tmp2313 = *$tmp2312;
frost$core$String* $tmp2314 = org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(param0, $tmp2313);
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2314));
frost$core$String* $tmp2315 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2315));
*(&local11) = $tmp2314;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2314));
// line 652
frost$core$String* $tmp2316 = *(&local11);
frost$core$Bit $tmp2317 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2316, &$s2318);
bool $tmp2319 = $tmp2317.value;
if ($tmp2319) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp2320 = (frost$core$Int64) {652};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2321, $tmp2320);
abort(); // unreachable
block10:;
// line 653
frost$core$MutableString* $tmp2322 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp2323 = *(&local11);
frost$core$Int64 $tmp2324 = (frost$core$Int64) {1};
frost$core$Bit $tmp2325 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp2326 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp2324, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp2325);
frost$core$String* $tmp2327 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp2323, $tmp2326);
frost$core$String* $tmp2328 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2329, $tmp2327);
frost$core$String* $tmp2330 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2328, &$s2331);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2332 = *(&local2);
frost$core$String** $tmp2333 = &$tmp2332->name;
frost$core$String* $tmp2334 = *$tmp2333;
frost$core$String* $tmp2335 = frost$core$String$get_asString$R$frost$core$String($tmp2334);
frost$core$String* $tmp2336 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2335, &$s2337);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2338 = *(&local2);
frost$core$String** $tmp2339 = &$tmp2338->name;
frost$core$String* $tmp2340 = *$tmp2339;
frost$core$String* $tmp2341 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2336, $tmp2340);
frost$core$String* $tmp2342 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2341, &$s2343);
frost$core$String* $tmp2344 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2330, $tmp2342);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2345 = *(&local10);
frost$core$String** $tmp2346 = &$tmp2345->name;
frost$core$String* $tmp2347 = *$tmp2346;
frost$core$String* $tmp2348 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2349, $tmp2347);
frost$core$String* $tmp2350 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2348, &$s2351);
frost$core$Int64 $tmp2352 = (frost$core$Int64) {18446744073709550617};
frost$core$Int64$wrapper* $tmp2353;
$tmp2353 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2353->value = $tmp2352;
frost$core$String* $tmp2354 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2350, ((frost$core$Object*) $tmp2353));
frost$core$String* $tmp2355 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2354, &$s2356);
frost$core$String* $tmp2357 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2344, $tmp2355);
frost$core$String* $tmp2358 = *(&local11);
frost$core$String* $tmp2359 = frost$core$String$get_asString$R$frost$core$String($tmp2358);
frost$core$String* $tmp2360 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2359, &$s2361);
frost$core$String* $tmp2362 = *(&local8);
frost$core$String* $tmp2363 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2360, $tmp2362);
frost$core$String* $tmp2364 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2363, &$s2365);
frost$core$String* $tmp2366 = *(&local9);
frost$core$String* $tmp2367 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2364, $tmp2366);
frost$core$String* $tmp2368 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2367, &$s2369);
frost$core$String* $tmp2370 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2357, $tmp2368);
frost$core$MutableString$init$frost$core$String($tmp2322, $tmp2370);
*(&local12) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2322));
frost$core$MutableString* $tmp2371 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2371));
*(&local12) = $tmp2322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2367));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2348));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2330));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2322));
// line 657
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2372));
frost$core$String* $tmp2373 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2373));
*(&local13) = &$s2374;
// line 658
frost$core$Int64 $tmp2375 = (frost$core$Int64) {0};
frost$collections$ListView* $tmp2376 = *(&local5);
ITable* $tmp2377 = ((frost$collections$CollectionView*) $tmp2376)->$class->itable;
while ($tmp2377->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2377 = $tmp2377->next;
}
$fn2379 $tmp2378 = $tmp2377->methods[0];
frost$core$Int64 $tmp2380 = $tmp2378(((frost$collections$CollectionView*) $tmp2376));
frost$core$Bit $tmp2381 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2382 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2375, $tmp2380, $tmp2381);
frost$core$Int64 $tmp2383 = $tmp2382.min;
*(&local14) = $tmp2383;
frost$core$Int64 $tmp2384 = $tmp2382.max;
frost$core$Bit $tmp2385 = $tmp2382.inclusive;
bool $tmp2386 = $tmp2385.value;
frost$core$Int64 $tmp2387 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2388 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2387);
if ($tmp2386) goto block15; else goto block16;
block15:;
int64_t $tmp2389 = $tmp2383.value;
int64_t $tmp2390 = $tmp2384.value;
bool $tmp2391 = $tmp2389 <= $tmp2390;
frost$core$Bit $tmp2392 = (frost$core$Bit) {$tmp2391};
bool $tmp2393 = $tmp2392.value;
if ($tmp2393) goto block12; else goto block13;
block16:;
int64_t $tmp2394 = $tmp2383.value;
int64_t $tmp2395 = $tmp2384.value;
bool $tmp2396 = $tmp2394 < $tmp2395;
frost$core$Bit $tmp2397 = (frost$core$Bit) {$tmp2396};
bool $tmp2398 = $tmp2397.value;
if ($tmp2398) goto block12; else goto block13;
block12:;
// line 659
frost$core$MutableString* $tmp2399 = *(&local12);
frost$core$String* $tmp2400 = *(&local13);
frost$core$String* $tmp2401 = frost$core$String$get_asString$R$frost$core$String($tmp2400);
frost$core$String* $tmp2402 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2401, &$s2403);
frost$collections$ListView* $tmp2404 = *(&local6);
frost$core$Int64 $tmp2405 = *(&local14);
ITable* $tmp2406 = $tmp2404->$class->itable;
while ($tmp2406->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2406 = $tmp2406->next;
}
$fn2408 $tmp2407 = $tmp2406->methods[0];
frost$core$Object* $tmp2409 = $tmp2407($tmp2404, $tmp2405);
frost$core$String* $tmp2410 = org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, ((org$frostlang$frostc$MethodDecl*) $tmp2409));
frost$core$String* $tmp2411 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2402, $tmp2410);
frost$core$String* $tmp2412 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2411, &$s2413);
frost$core$MutableString$append$frost$core$String($tmp2399, $tmp2412);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2410));
frost$core$Frost$unref$frost$core$Object$Q($tmp2409);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2401));
// line 660
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2414));
frost$core$String* $tmp2415 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2415));
*(&local13) = &$s2416;
goto block14;
block14:;
frost$core$Int64 $tmp2417 = *(&local14);
int64_t $tmp2418 = $tmp2384.value;
int64_t $tmp2419 = $tmp2417.value;
int64_t $tmp2420 = $tmp2418 - $tmp2419;
frost$core$Int64 $tmp2421 = (frost$core$Int64) {$tmp2420};
frost$core$UInt64 $tmp2422 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2421);
if ($tmp2386) goto block18; else goto block19;
block18:;
uint64_t $tmp2423 = $tmp2422.value;
uint64_t $tmp2424 = $tmp2388.value;
bool $tmp2425 = $tmp2423 >= $tmp2424;
frost$core$Bit $tmp2426 = (frost$core$Bit) {$tmp2425};
bool $tmp2427 = $tmp2426.value;
if ($tmp2427) goto block17; else goto block13;
block19:;
uint64_t $tmp2428 = $tmp2422.value;
uint64_t $tmp2429 = $tmp2388.value;
bool $tmp2430 = $tmp2428 > $tmp2429;
frost$core$Bit $tmp2431 = (frost$core$Bit) {$tmp2430};
bool $tmp2432 = $tmp2431.value;
if ($tmp2432) goto block17; else goto block13;
block17:;
int64_t $tmp2433 = $tmp2417.value;
int64_t $tmp2434 = $tmp2387.value;
int64_t $tmp2435 = $tmp2433 + $tmp2434;
frost$core$Int64 $tmp2436 = (frost$core$Int64) {$tmp2435};
*(&local14) = $tmp2436;
goto block12;
block13:;
// line 662
frost$core$MutableString* $tmp2437 = *(&local12);
frost$core$MutableString$append$frost$core$String($tmp2437, &$s2438);
// line 663
frost$io$MemoryOutputStream** $tmp2439 = &param0->types;
frost$io$MemoryOutputStream* $tmp2440 = *$tmp2439;
frost$core$MutableString* $tmp2441 = *(&local12);
frost$core$String* $tmp2442 = frost$core$MutableString$finish$R$frost$core$String($tmp2441);
$fn2444 $tmp2443 = ($fn2444) ((frost$io$OutputStream*) $tmp2440)->$class->vtable[17];
frost$core$Error* $tmp2445 = $tmp2443(((frost$io$OutputStream*) $tmp2440), $tmp2442);
if ($tmp2445 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2445));
*(&local0) = $tmp2445;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2442));
frost$core$String* $tmp2446 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2446));
*(&local13) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2447 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2447));
*(&local12) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2448 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2449 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2449));
*(&local10) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2450 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2450));
*(&local9) = ((frost$core$String*) NULL);
frost$core$String* $tmp2451 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2451));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2452 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2452));
*(&local7) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$collections$ListView* $tmp2453 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2453));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp2454 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2454));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2455 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2456 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2456));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2457 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2457));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2442));
frost$core$String* $tmp2458 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2458));
*(&local13) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2459 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2459));
*(&local12) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2460 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2460));
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2461 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2461));
*(&local10) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2462 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2462));
*(&local9) = ((frost$core$String*) NULL);
frost$core$String* $tmp2463 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2463));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2464 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2464));
*(&local7) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$collections$ListView* $tmp2465 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2465));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp2466 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2466));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2467 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2467));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block6;
block6:;
// line 665
frost$collections$HashMap** $tmp2468 = &param0->classConstants;
frost$collections$HashMap* $tmp2469 = *$tmp2468;
frost$core$String* $tmp2470 = *(&local1);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2471 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2469, ((frost$collections$Key*) $tmp2470), ((frost$core$Object*) $tmp2471));
goto block4;
block4:;
// line 667
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2472 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2472));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2473 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2474 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2474));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp2475 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2475));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp2472;
block1:;
// line 670
frost$core$Int64 $tmp2476 = (frost$core$Int64) {670};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2477, $tmp2476);
abort(); // unreachable
block2:;
frost$core$Error* $tmp2478 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2478));
*(&local0) = ((frost$core$Error*) NULL);
goto block22;
block22:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$Variable$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Variable* param1) {

frost$core$String* local0 = NULL;
// line 675
org$frostlang$frostc$Variable$Storage** $tmp2479 = &param1->storage;
org$frostlang$frostc$Variable$Storage* $tmp2480 = *$tmp2479;
frost$core$Int64* $tmp2481 = &$tmp2480->$rawValue;
frost$core$Int64 $tmp2482 = *$tmp2481;
frost$core$Int64 $tmp2483 = (frost$core$Int64) {1};
frost$core$Bit $tmp2484 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2482, $tmp2483);
bool $tmp2485 = $tmp2484.value;
if ($tmp2485) goto block2; else goto block1;
block2:;
// line 677
frost$core$String** $tmp2486 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp2487 = *$tmp2486;
frost$core$String* $tmp2488 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2489, $tmp2487);
frost$core$String* $tmp2490 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2488, &$s2491);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2488));
return $tmp2490;
block1:;
// line 680
frost$collections$IdentityMap** $tmp2492 = &param0->variableNames;
frost$collections$IdentityMap* $tmp2493 = *$tmp2492;
frost$core$Object* $tmp2494 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp2493, ((frost$core$Object*) param1));
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp2494)));
frost$core$String* $tmp2495 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2495));
*(&local0) = ((frost$core$String*) $tmp2494);
frost$core$Frost$unref$frost$core$Object$Q($tmp2494);
// line 681
frost$core$String* $tmp2496 = *(&local0);
frost$core$Bit $tmp2497 = frost$core$Bit$init$builtin_bit($tmp2496 == NULL);
bool $tmp2498 = $tmp2497.value;
if ($tmp2498) goto block3; else goto block4;
block3:;
// line 682
frost$core$Int64* $tmp2499 = &param0->varCount;
frost$core$Int64 $tmp2500 = *$tmp2499;
frost$core$Int64 $tmp2501 = (frost$core$Int64) {1};
int64_t $tmp2502 = $tmp2500.value;
int64_t $tmp2503 = $tmp2501.value;
int64_t $tmp2504 = $tmp2502 + $tmp2503;
frost$core$Int64 $tmp2505 = (frost$core$Int64) {$tmp2504};
frost$core$Int64* $tmp2506 = &param0->varCount;
*$tmp2506 = $tmp2505;
// line 683
frost$core$String** $tmp2507 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp2508 = *$tmp2507;
frost$core$String* $tmp2509 = frost$core$String$get_asString$R$frost$core$String($tmp2508);
frost$core$String* $tmp2510 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2509, &$s2511);
frost$core$Int64* $tmp2512 = &param0->varCount;
frost$core$Int64 $tmp2513 = *$tmp2512;
frost$core$Int64$wrapper* $tmp2514;
$tmp2514 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2514->value = $tmp2513;
frost$core$String* $tmp2515 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2510, ((frost$core$Object*) $tmp2514));
frost$core$String* $tmp2516 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2515, &$s2517);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2516));
frost$core$String* $tmp2518 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2518));
*(&local0) = $tmp2516;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2516));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2509));
// line 684
frost$collections$IdentityMap** $tmp2519 = &param0->variableNames;
frost$collections$IdentityMap* $tmp2520 = *$tmp2519;
frost$core$String* $tmp2521 = *(&local0);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V($tmp2520, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp2521));
goto block4;
block4:;
// line 686
frost$core$String* $tmp2522 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2522));
frost$core$String* $tmp2523 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2523));
*(&local0) = ((frost$core$String*) NULL);
return $tmp2522;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$FieldDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$FieldDecl* param1) {

// line 690
org$frostlang$frostc$Annotations** $tmp2524 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp2525 = *$tmp2524;
frost$core$Bit $tmp2526 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp2525);
bool $tmp2527 = $tmp2526.value;
if ($tmp2527) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2528 = (frost$core$Int64) {690};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2529, $tmp2528);
abort(); // unreachable
block1:;
// line 691
frost$core$Weak** $tmp2530 = &param1->owner;
frost$core$Weak* $tmp2531 = *$tmp2530;
frost$core$Object* $tmp2532 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2531);
frost$core$String** $tmp2533 = &((org$frostlang$frostc$ClassDecl*) $tmp2532)->name;
frost$core$String* $tmp2534 = *$tmp2533;
frost$core$String* $tmp2535 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp2534);
frost$core$String* $tmp2536 = frost$core$String$get_asString$R$frost$core$String($tmp2535);
frost$core$String* $tmp2537 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2536, &$s2538);
frost$core$String** $tmp2539 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp2540 = *$tmp2539;
frost$core$String* $tmp2541 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2537, $tmp2540);
frost$core$String* $tmp2542 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2541, &$s2543);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2541));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2537));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
frost$core$Frost$unref$frost$core$Object$Q($tmp2532);
return $tmp2542;

}
org$frostlang$frostc$CCodeGenerator$OpClass org$frostlang$frostc$CCodeGenerator$opClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$OpClass(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 702
org$frostlang$frostc$Type$Kind* $tmp2544 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp2545 = *$tmp2544;
frost$core$Int64 $tmp2546 = $tmp2545.$rawValue;
frost$core$Int64 $tmp2547 = (frost$core$Int64) {2};
frost$core$Bit $tmp2548 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2546, $tmp2547);
bool $tmp2549 = $tmp2548.value;
if ($tmp2549) goto block2; else goto block3;
block2:;
// line 704
frost$core$Int64 $tmp2550 = (frost$core$Int64) {0};
org$frostlang$frostc$CCodeGenerator$OpClass $tmp2551 = org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int64($tmp2550);
return $tmp2551;
block3:;
frost$core$Int64 $tmp2552 = (frost$core$Int64) {3};
frost$core$Bit $tmp2553 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2546, $tmp2552);
bool $tmp2554 = $tmp2553.value;
if ($tmp2554) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp2555 = (frost$core$Int64) {8};
frost$core$Bit $tmp2556 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2546, $tmp2555);
bool $tmp2557 = $tmp2556.value;
if ($tmp2557) goto block4; else goto block6;
block4:;
// line 707
frost$core$Int64 $tmp2558 = (frost$core$Int64) {1};
org$frostlang$frostc$CCodeGenerator$OpClass $tmp2559 = org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int64($tmp2558);
return $tmp2559;
block6:;
frost$core$Int64 $tmp2560 = (frost$core$Int64) {9};
frost$core$Bit $tmp2561 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2546, $tmp2560);
bool $tmp2562 = $tmp2561.value;
if ($tmp2562) goto block7; else goto block8;
block7:;
// line 710
frost$core$Int64 $tmp2563 = (frost$core$Int64) {2};
org$frostlang$frostc$CCodeGenerator$OpClass $tmp2564 = org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int64($tmp2563);
return $tmp2564;
block8:;
// line 713
frost$core$Int64 $tmp2565 = (frost$core$Int64) {3};
org$frostlang$frostc$CCodeGenerator$OpClass $tmp2566 = org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int64($tmp2565);
return $tmp2566;
block1:;
goto block9;
block9:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getBinaryReference$org$frostlang$frostc$Type$frost$core$String$org$frostlang$frostc$expression$Binary$Operator$frost$core$String$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$String* param2, org$frostlang$frostc$expression$Binary$Operator param3, frost$core$String* param4, frost$io$IndentedOutputStream* param5) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Bit local2;
frost$core$String* local3 = NULL;
// line 720
*(&local0) = ((frost$core$Error*) NULL);
// line 721
*(&local1) = ((frost$core$String*) NULL);
// line 722
frost$core$Bit $tmp2567 = frost$core$Bit$init$builtin_bit(false);
*(&local2) = $tmp2567;
// line 723
frost$core$Int64 $tmp2568 = param3.$rawValue;
frost$core$Int64 $tmp2569 = (frost$core$Int64) {0};
frost$core$Bit $tmp2570 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2568, $tmp2569);
bool $tmp2571 = $tmp2570.value;
if ($tmp2571) goto block4; else goto block5;
block4:;
// line 725
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2572));
frost$core$String* $tmp2573 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2573));
*(&local1) = &$s2574;
goto block3;
block5:;
frost$core$Int64 $tmp2575 = (frost$core$Int64) {1};
frost$core$Bit $tmp2576 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2568, $tmp2575);
bool $tmp2577 = $tmp2576.value;
if ($tmp2577) goto block6; else goto block7;
block6:;
// line 728
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2578));
frost$core$String* $tmp2579 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2579));
*(&local1) = &$s2580;
goto block3;
block7:;
frost$core$Int64 $tmp2581 = (frost$core$Int64) {2};
frost$core$Bit $tmp2582 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2568, $tmp2581);
bool $tmp2583 = $tmp2582.value;
if ($tmp2583) goto block8; else goto block9;
block8:;
// line 731
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2584));
frost$core$String* $tmp2585 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2585));
*(&local1) = &$s2586;
goto block3;
block9:;
frost$core$Int64 $tmp2587 = (frost$core$Int64) {4};
frost$core$Bit $tmp2588 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2568, $tmp2587);
bool $tmp2589 = $tmp2588.value;
if ($tmp2589) goto block10; else goto block11;
block10:;
// line 734
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2590));
frost$core$String* $tmp2591 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2591));
*(&local1) = &$s2592;
goto block3;
block11:;
frost$core$Int64 $tmp2593 = (frost$core$Int64) {3};
frost$core$Bit $tmp2594 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2568, $tmp2593);
bool $tmp2595 = $tmp2594.value;
if ($tmp2595) goto block12; else goto block13;
block12:;
// line 737
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2596));
frost$core$String* $tmp2597 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2597));
*(&local1) = &$s2598;
goto block3;
block13:;
frost$core$Int64 $tmp2599 = (frost$core$Int64) {5};
frost$core$Bit $tmp2600 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2568, $tmp2599);
bool $tmp2601 = $tmp2600.value;
if ($tmp2601) goto block14; else goto block15;
block14:;
// line 740
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2602));
frost$core$String* $tmp2603 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2603));
*(&local1) = &$s2604;
goto block3;
block15:;
frost$core$Int64 $tmp2605 = (frost$core$Int64) {18};
frost$core$Bit $tmp2606 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2568, $tmp2605);
bool $tmp2607 = $tmp2606.value;
if ($tmp2607) goto block16; else goto block17;
block16:;
// line 743
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2608));
frost$core$String* $tmp2609 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2609));
*(&local1) = &$s2610;
goto block3;
block17:;
frost$core$Int64 $tmp2611 = (frost$core$Int64) {19};
frost$core$Bit $tmp2612 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2568, $tmp2611);
bool $tmp2613 = $tmp2612.value;
if ($tmp2613) goto block18; else goto block19;
block18:;
// line 746
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2614));
frost$core$String* $tmp2615 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2615));
*(&local1) = &$s2616;
goto block3;
block19:;
frost$core$Int64 $tmp2617 = (frost$core$Int64) {15};
frost$core$Bit $tmp2618 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2568, $tmp2617);
bool $tmp2619 = $tmp2618.value;
if ($tmp2619) goto block20; else goto block21;
block20:;
// line 749
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2620));
frost$core$String* $tmp2621 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2621));
*(&local1) = &$s2622;
goto block3;
block21:;
frost$core$Int64 $tmp2623 = (frost$core$Int64) {13};
frost$core$Bit $tmp2624 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2568, $tmp2623);
bool $tmp2625 = $tmp2624.value;
if ($tmp2625) goto block22; else goto block23;
block22:;
// line 752
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2626));
frost$core$String* $tmp2627 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2627));
*(&local1) = &$s2628;
goto block3;
block23:;
frost$core$Int64 $tmp2629 = (frost$core$Int64) {16};
frost$core$Bit $tmp2630 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2568, $tmp2629);
bool $tmp2631 = $tmp2630.value;
if ($tmp2631) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp2632 = (frost$core$Int64) {17};
frost$core$Bit $tmp2633 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2568, $tmp2632);
bool $tmp2634 = $tmp2633.value;
if ($tmp2634) goto block24; else goto block26;
block24:;
// line 755
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2635));
frost$core$String* $tmp2636 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2636));
*(&local1) = &$s2637;
goto block3;
block26:;
frost$core$Int64 $tmp2638 = (frost$core$Int64) {6};
frost$core$Bit $tmp2639 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2568, $tmp2638);
bool $tmp2640 = $tmp2639.value;
if ($tmp2640) goto block27; else goto block28;
block27:;
// line 758
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2641));
frost$core$String* $tmp2642 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2642));
*(&local1) = &$s2643;
// line 759
frost$core$Bit $tmp2644 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2644;
goto block3;
block28:;
frost$core$Int64 $tmp2645 = (frost$core$Int64) {7};
frost$core$Bit $tmp2646 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2568, $tmp2645);
bool $tmp2647 = $tmp2646.value;
if ($tmp2647) goto block29; else goto block30;
block29:;
// line 762
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2648));
frost$core$String* $tmp2649 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2649));
*(&local1) = &$s2650;
// line 763
frost$core$Bit $tmp2651 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2651;
goto block3;
block30:;
frost$core$Int64 $tmp2652 = (frost$core$Int64) {8};
frost$core$Bit $tmp2653 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2568, $tmp2652);
bool $tmp2654 = $tmp2653.value;
if ($tmp2654) goto block31; else goto block32;
block31:;
// line 766
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2655));
frost$core$String* $tmp2656 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2656));
*(&local1) = &$s2657;
// line 767
frost$core$Bit $tmp2658 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2658;
goto block3;
block32:;
frost$core$Int64 $tmp2659 = (frost$core$Int64) {9};
frost$core$Bit $tmp2660 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2568, $tmp2659);
bool $tmp2661 = $tmp2660.value;
if ($tmp2661) goto block33; else goto block34;
block33:;
// line 770
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2662));
frost$core$String* $tmp2663 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2663));
*(&local1) = &$s2664;
// line 771
frost$core$Bit $tmp2665 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2665;
goto block3;
block34:;
frost$core$Int64 $tmp2666 = (frost$core$Int64) {10};
frost$core$Bit $tmp2667 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2568, $tmp2666);
bool $tmp2668 = $tmp2667.value;
if ($tmp2668) goto block35; else goto block36;
block35:;
// line 774
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2669));
frost$core$String* $tmp2670 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2670));
*(&local1) = &$s2671;
// line 775
frost$core$Bit $tmp2672 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2672;
goto block3;
block36:;
frost$core$Int64 $tmp2673 = (frost$core$Int64) {11};
frost$core$Bit $tmp2674 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2568, $tmp2673);
bool $tmp2675 = $tmp2674.value;
if ($tmp2675) goto block37; else goto block38;
block37:;
// line 778
frost$core$Bit $tmp2676 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2676;
// line 779
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2677));
frost$core$String* $tmp2678 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2678));
*(&local1) = &$s2679;
goto block3;
block38:;
// line 782
frost$core$Int64 $tmp2680 = (frost$core$Int64) {782};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2681, $tmp2680);
abort(); // unreachable
block3:;
// line 785
frost$core$String* $tmp2682 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
frost$core$String* $tmp2683 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2683));
*(&local3) = $tmp2682;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
// line 786
frost$core$Bit $tmp2684 = *(&local2);
bool $tmp2685 = $tmp2684.value;
if ($tmp2685) goto block39; else goto block41;
block39:;
// line 787
$fn2687 $tmp2686 = ($fn2687) ((frost$io$OutputStream*) param5)->$class->vtable[17];
frost$core$Error* $tmp2688 = $tmp2686(((frost$io$OutputStream*) param5), &$s2689);
if ($tmp2688 == NULL) goto block42; else goto block43;
block43:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2688));
*(&local0) = $tmp2688;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2688));
frost$core$String* $tmp2690 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2690));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2691 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2691));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block42:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2688));
goto block40;
block41:;
// line 1
// line 790
frost$core$String* $tmp2692 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp2693 = frost$core$String$get_asString$R$frost$core$String($tmp2692);
frost$core$String* $tmp2694 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2693, &$s2695);
$fn2697 $tmp2696 = ($fn2697) ((frost$io$OutputStream*) param5)->$class->vtable[17];
frost$core$Error* $tmp2698 = $tmp2696(((frost$io$OutputStream*) param5), $tmp2694);
if ($tmp2698 == NULL) goto block44; else goto block45;
block45:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2698));
*(&local0) = $tmp2698;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2698));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2693));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2692));
frost$core$String* $tmp2699 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2699));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2700 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2700));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block44:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2698));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2693));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2692));
goto block40;
block40:;
// line 792
frost$core$String* $tmp2701 = *(&local3);
frost$core$String* $tmp2702 = frost$core$String$get_asString$R$frost$core$String($tmp2701);
frost$core$String* $tmp2703 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2702, &$s2704);
frost$core$String* $tmp2705 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2703, param2);
frost$core$String* $tmp2706 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2705, &$s2707);
frost$core$String* $tmp2708 = *(&local1);
frost$core$String* $tmp2709 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2706, $tmp2708);
frost$core$String* $tmp2710 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2709, &$s2711);
frost$core$String* $tmp2712 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2710, param4);
frost$core$String* $tmp2713 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2712, &$s2714);
$fn2716 $tmp2715 = ($fn2716) ((frost$io$OutputStream*) param5)->$class->vtable[19];
frost$core$Error* $tmp2717 = $tmp2715(((frost$io$OutputStream*) param5), $tmp2713);
if ($tmp2717 == NULL) goto block46; else goto block47;
block47:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2717));
*(&local0) = $tmp2717;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2717));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2713));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2709));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2706));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2702));
frost$core$String* $tmp2718 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2718));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2719 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2719));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block46:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2717));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2713));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2709));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2706));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2702));
// line 793
frost$core$String* $tmp2720 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2720));
frost$core$String* $tmp2721 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2721));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2722 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2722));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp2723 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2723));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp2720;
block1:;
// line 796
frost$core$Int64 $tmp2724 = (frost$core$Int64) {796};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2725, $tmp2724);
abort(); // unreachable
block2:;
frost$core$Error* $tmp2726 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2726));
*(&local0) = ((frost$core$Error*) NULL);
goto block48;
block48:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getVirtualMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$MethodDecl* param2, frost$io$IndentedOutputStream* param3) {

org$frostlang$frostc$CCodeGenerator$ClassConstant* local0 = NULL;
frost$core$Int64 local1;
frost$collections$ListView* local2 = NULL;
frost$core$Int64 local3;
// line 801
frost$core$Weak** $tmp2727 = &param2->owner;
frost$core$Weak* $tmp2728 = *$tmp2727;
frost$core$Object* $tmp2729 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2728);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2730 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, ((org$frostlang$frostc$ClassDecl*) $tmp2729));
*(&local0) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2730));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2731 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
*(&local0) = $tmp2730;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2730));
frost$core$Frost$unref$frost$core$Object$Q($tmp2729);
// line 802
frost$core$Int64 $tmp2732 = (frost$core$Int64) {18446744073709551615};
*(&local1) = $tmp2732;
// line 803
frost$core$Weak** $tmp2733 = &param0->compiler;
frost$core$Weak* $tmp2734 = *$tmp2733;
frost$core$Object* $tmp2735 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2734);
frost$core$Weak** $tmp2736 = &param2->owner;
frost$core$Weak* $tmp2737 = *$tmp2736;
frost$core$Object* $tmp2738 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2737);
frost$collections$ListView* $tmp2739 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2735), ((org$frostlang$frostc$ClassDecl*) $tmp2738));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2739));
frost$collections$ListView* $tmp2740 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2740));
*(&local2) = $tmp2739;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2739));
frost$core$Frost$unref$frost$core$Object$Q($tmp2738);
frost$core$Frost$unref$frost$core$Object$Q($tmp2735);
// line 804
frost$core$Int64 $tmp2741 = (frost$core$Int64) {0};
frost$collections$ListView* $tmp2742 = *(&local2);
ITable* $tmp2743 = ((frost$collections$CollectionView*) $tmp2742)->$class->itable;
while ($tmp2743->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2743 = $tmp2743->next;
}
$fn2745 $tmp2744 = $tmp2743->methods[0];
frost$core$Int64 $tmp2746 = $tmp2744(((frost$collections$CollectionView*) $tmp2742));
frost$core$Bit $tmp2747 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2748 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2741, $tmp2746, $tmp2747);
frost$core$Int64 $tmp2749 = $tmp2748.min;
*(&local3) = $tmp2749;
frost$core$Int64 $tmp2750 = $tmp2748.max;
frost$core$Bit $tmp2751 = $tmp2748.inclusive;
bool $tmp2752 = $tmp2751.value;
frost$core$Int64 $tmp2753 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2754 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2753);
if ($tmp2752) goto block4; else goto block5;
block4:;
int64_t $tmp2755 = $tmp2749.value;
int64_t $tmp2756 = $tmp2750.value;
bool $tmp2757 = $tmp2755 <= $tmp2756;
frost$core$Bit $tmp2758 = (frost$core$Bit) {$tmp2757};
bool $tmp2759 = $tmp2758.value;
if ($tmp2759) goto block1; else goto block2;
block5:;
int64_t $tmp2760 = $tmp2749.value;
int64_t $tmp2761 = $tmp2750.value;
bool $tmp2762 = $tmp2760 < $tmp2761;
frost$core$Bit $tmp2763 = (frost$core$Bit) {$tmp2762};
bool $tmp2764 = $tmp2763.value;
if ($tmp2764) goto block1; else goto block2;
block1:;
// line 805
frost$collections$ListView* $tmp2765 = *(&local2);
frost$core$Int64 $tmp2766 = *(&local3);
ITable* $tmp2767 = $tmp2765->$class->itable;
while ($tmp2767->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2767 = $tmp2767->next;
}
$fn2769 $tmp2768 = $tmp2767->methods[0];
frost$core$Object* $tmp2770 = $tmp2768($tmp2765, $tmp2766);
bool $tmp2771 = ((org$frostlang$frostc$MethodDecl*) $tmp2770) == param2;
frost$core$Bit $tmp2772 = frost$core$Bit$init$builtin_bit($tmp2771);
bool $tmp2773 = $tmp2772.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2770);
if ($tmp2773) goto block6; else goto block7;
block6:;
// line 806
frost$core$Int64 $tmp2774 = *(&local3);
*(&local1) = $tmp2774;
// line 807
goto block2;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp2775 = *(&local3);
int64_t $tmp2776 = $tmp2750.value;
int64_t $tmp2777 = $tmp2775.value;
int64_t $tmp2778 = $tmp2776 - $tmp2777;
frost$core$Int64 $tmp2779 = (frost$core$Int64) {$tmp2778};
frost$core$UInt64 $tmp2780 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2779);
if ($tmp2752) goto block9; else goto block10;
block9:;
uint64_t $tmp2781 = $tmp2780.value;
uint64_t $tmp2782 = $tmp2754.value;
bool $tmp2783 = $tmp2781 >= $tmp2782;
frost$core$Bit $tmp2784 = (frost$core$Bit) {$tmp2783};
bool $tmp2785 = $tmp2784.value;
if ($tmp2785) goto block8; else goto block2;
block10:;
uint64_t $tmp2786 = $tmp2780.value;
uint64_t $tmp2787 = $tmp2754.value;
bool $tmp2788 = $tmp2786 > $tmp2787;
frost$core$Bit $tmp2789 = (frost$core$Bit) {$tmp2788};
bool $tmp2790 = $tmp2789.value;
if ($tmp2790) goto block8; else goto block2;
block8:;
int64_t $tmp2791 = $tmp2775.value;
int64_t $tmp2792 = $tmp2753.value;
int64_t $tmp2793 = $tmp2791 + $tmp2792;
frost$core$Int64 $tmp2794 = (frost$core$Int64) {$tmp2793};
*(&local3) = $tmp2794;
goto block1;
block2:;
// line 810
frost$core$Int64 $tmp2795 = *(&local1);
frost$core$Int64 $tmp2796 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2797 = $tmp2795.value;
int64_t $tmp2798 = $tmp2796.value;
bool $tmp2799 = $tmp2797 != $tmp2798;
frost$core$Bit $tmp2800 = (frost$core$Bit) {$tmp2799};
bool $tmp2801 = $tmp2800.value;
if ($tmp2801) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp2802 = (frost$core$Int64) {810};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2803, $tmp2802);
abort(); // unreachable
block11:;
// line 811
frost$core$Weak** $tmp2804 = &param0->compiler;
frost$core$Weak* $tmp2805 = *$tmp2804;
frost$core$Object* $tmp2806 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2805);
org$frostlang$frostc$Type* $tmp2807 = org$frostlang$frostc$Compiler$inheritedTypeWithSelf$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp2806), param2);
frost$core$String* $tmp2808 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, $tmp2807, ((org$frostlang$frostc$Type*) NULL));
frost$core$String* $tmp2809 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2810, $tmp2808);
frost$core$String* $tmp2811 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2809, &$s2812);
frost$core$String* $tmp2813 = frost$core$String$get_asString$R$frost$core$String(param1);
frost$core$String* $tmp2814 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2813, &$s2815);
frost$core$Int64 $tmp2816 = *(&local1);
frost$core$Int64$wrapper* $tmp2817;
$tmp2817 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2817->value = $tmp2816;
frost$core$String* $tmp2818 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2814, ((frost$core$Object*) $tmp2817));
frost$core$String* $tmp2819 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2818, &$s2820);
frost$core$String* $tmp2821 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2811, $tmp2819);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2821));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2821));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2818));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2817));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2807));
frost$core$Frost$unref$frost$core$Object$Q($tmp2806);
frost$collections$ListView* $tmp2822 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2822));
*(&local2) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2823 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2823));
*(&local0) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
return $tmp2821;

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
// line 817
*(&local0) = ((frost$core$Error*) NULL);
// line 818
frost$core$Weak** $tmp2824 = &param2->owner;
frost$core$Weak* $tmp2825 = *$tmp2824;
frost$core$Object* $tmp2826 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2825);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2827 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, ((org$frostlang$frostc$ClassDecl*) $tmp2826));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2828 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2828));
*(&local1) = $tmp2827;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
frost$core$Frost$unref$frost$core$Object$Q($tmp2826);
// line 819
frost$core$String* $tmp2829 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2829));
frost$core$String* $tmp2830 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
*(&local2) = $tmp2829;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2829));
// line 820
frost$core$String* $tmp2831 = *(&local2);
frost$core$String* $tmp2832 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2833, $tmp2831);
frost$core$String* $tmp2834 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2832, &$s2835);
frost$core$String* $tmp2836 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2834, param1);
frost$core$String* $tmp2837 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2836, &$s2838);
$fn2840 $tmp2839 = ($fn2840) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2841 = $tmp2839(((frost$io$OutputStream*) param3), $tmp2837);
if ($tmp2841 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2841));
*(&local0) = $tmp2841;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2841));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
frost$core$String* $tmp2842 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2842));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2843 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2843));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2841));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
// line 821
frost$core$String* $tmp2844 = *(&local2);
frost$core$String* $tmp2845 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2846, $tmp2844);
frost$core$String* $tmp2847 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2845, &$s2848);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2849 = *(&local1);
frost$core$String** $tmp2850 = &$tmp2849->name;
frost$core$String* $tmp2851 = *$tmp2850;
frost$core$String* $tmp2852 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2847, $tmp2851);
frost$core$String* $tmp2853 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2852, &$s2854);
$fn2856 $tmp2855 = ($fn2856) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2857 = $tmp2855(((frost$io$OutputStream*) param3), $tmp2853);
if ($tmp2857 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2857));
*(&local0) = $tmp2857;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2857));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2853));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2847));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2845));
frost$core$String* $tmp2858 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2858));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2859 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2859));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2857));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2853));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2847));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2845));
// line 822
frost$core$Int64* $tmp2860 = &param3->level;
frost$core$Int64 $tmp2861 = *$tmp2860;
frost$core$Int64 $tmp2862 = (frost$core$Int64) {1};
int64_t $tmp2863 = $tmp2861.value;
int64_t $tmp2864 = $tmp2862.value;
int64_t $tmp2865 = $tmp2863 + $tmp2864;
frost$core$Int64 $tmp2866 = (frost$core$Int64) {$tmp2865};
frost$core$Int64* $tmp2867 = &param3->level;
*$tmp2867 = $tmp2866;
// line 823
frost$core$String* $tmp2868 = *(&local2);
frost$core$String* $tmp2869 = frost$core$String$get_asString$R$frost$core$String($tmp2868);
frost$core$String* $tmp2870 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2869, &$s2871);
frost$core$String* $tmp2872 = *(&local2);
frost$core$String* $tmp2873 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2870, $tmp2872);
frost$core$String* $tmp2874 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2873, &$s2875);
$fn2877 $tmp2876 = ($fn2877) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2878 = $tmp2876(((frost$io$OutputStream*) param3), $tmp2874);
if ($tmp2878 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2878));
*(&local0) = $tmp2878;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2870));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2869));
frost$core$String* $tmp2879 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2879));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2880 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2880));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2870));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2869));
// line 824
frost$core$Int64* $tmp2881 = &param3->level;
frost$core$Int64 $tmp2882 = *$tmp2881;
frost$core$Int64 $tmp2883 = (frost$core$Int64) {1};
int64_t $tmp2884 = $tmp2882.value;
int64_t $tmp2885 = $tmp2883.value;
int64_t $tmp2886 = $tmp2884 - $tmp2885;
frost$core$Int64 $tmp2887 = (frost$core$Int64) {$tmp2886};
frost$core$Int64* $tmp2888 = &param3->level;
*$tmp2888 = $tmp2887;
// line 825
$fn2890 $tmp2889 = ($fn2890) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2891 = $tmp2889(((frost$io$OutputStream*) param3), &$s2892);
if ($tmp2891 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
*(&local0) = $tmp2891;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
frost$core$String* $tmp2893 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2894 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2894));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
// line 826
frost$core$Int64 $tmp2895 = (frost$core$Int64) {18446744073709551615};
*(&local3) = $tmp2895;
// line 827
frost$core$Weak** $tmp2896 = &param0->compiler;
frost$core$Weak* $tmp2897 = *$tmp2896;
frost$core$Object* $tmp2898 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2897);
frost$core$Weak** $tmp2899 = &param2->owner;
frost$core$Weak* $tmp2900 = *$tmp2899;
frost$core$Object* $tmp2901 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2900);
frost$collections$ListView* $tmp2902 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2898), ((org$frostlang$frostc$ClassDecl*) $tmp2901));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
frost$collections$ListView* $tmp2903 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2903));
*(&local4) = $tmp2902;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
frost$core$Frost$unref$frost$core$Object$Q($tmp2901);
frost$core$Frost$unref$frost$core$Object$Q($tmp2898);
// line 828
frost$core$Int64 $tmp2904 = (frost$core$Int64) {0};
frost$collections$ListView* $tmp2905 = *(&local4);
ITable* $tmp2906 = ((frost$collections$CollectionView*) $tmp2905)->$class->itable;
while ($tmp2906->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2906 = $tmp2906->next;
}
$fn2908 $tmp2907 = $tmp2906->methods[0];
frost$core$Int64 $tmp2909 = $tmp2907(((frost$collections$CollectionView*) $tmp2905));
frost$core$Bit $tmp2910 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2911 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2904, $tmp2909, $tmp2910);
frost$core$Int64 $tmp2912 = $tmp2911.min;
*(&local5) = $tmp2912;
frost$core$Int64 $tmp2913 = $tmp2911.max;
frost$core$Bit $tmp2914 = $tmp2911.inclusive;
bool $tmp2915 = $tmp2914.value;
frost$core$Int64 $tmp2916 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2917 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2916);
if ($tmp2915) goto block14; else goto block15;
block14:;
int64_t $tmp2918 = $tmp2912.value;
int64_t $tmp2919 = $tmp2913.value;
bool $tmp2920 = $tmp2918 <= $tmp2919;
frost$core$Bit $tmp2921 = (frost$core$Bit) {$tmp2920};
bool $tmp2922 = $tmp2921.value;
if ($tmp2922) goto block11; else goto block12;
block15:;
int64_t $tmp2923 = $tmp2912.value;
int64_t $tmp2924 = $tmp2913.value;
bool $tmp2925 = $tmp2923 < $tmp2924;
frost$core$Bit $tmp2926 = (frost$core$Bit) {$tmp2925};
bool $tmp2927 = $tmp2926.value;
if ($tmp2927) goto block11; else goto block12;
block11:;
// line 829
frost$collections$ListView* $tmp2928 = *(&local4);
frost$core$Int64 $tmp2929 = *(&local5);
ITable* $tmp2930 = $tmp2928->$class->itable;
while ($tmp2930->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2930 = $tmp2930->next;
}
$fn2932 $tmp2931 = $tmp2930->methods[0];
frost$core$Object* $tmp2933 = $tmp2931($tmp2928, $tmp2929);
bool $tmp2934 = ((org$frostlang$frostc$MethodDecl*) $tmp2933) == param2;
frost$core$Bit $tmp2935 = frost$core$Bit$init$builtin_bit($tmp2934);
bool $tmp2936 = $tmp2935.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2933);
if ($tmp2936) goto block16; else goto block17;
block16:;
// line 830
frost$core$Int64 $tmp2937 = *(&local5);
*(&local3) = $tmp2937;
// line 831
goto block12;
block17:;
goto block13;
block13:;
frost$core$Int64 $tmp2938 = *(&local5);
int64_t $tmp2939 = $tmp2913.value;
int64_t $tmp2940 = $tmp2938.value;
int64_t $tmp2941 = $tmp2939 - $tmp2940;
frost$core$Int64 $tmp2942 = (frost$core$Int64) {$tmp2941};
frost$core$UInt64 $tmp2943 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2942);
if ($tmp2915) goto block19; else goto block20;
block19:;
uint64_t $tmp2944 = $tmp2943.value;
uint64_t $tmp2945 = $tmp2917.value;
bool $tmp2946 = $tmp2944 >= $tmp2945;
frost$core$Bit $tmp2947 = (frost$core$Bit) {$tmp2946};
bool $tmp2948 = $tmp2947.value;
if ($tmp2948) goto block18; else goto block12;
block20:;
uint64_t $tmp2949 = $tmp2943.value;
uint64_t $tmp2950 = $tmp2917.value;
bool $tmp2951 = $tmp2949 > $tmp2950;
frost$core$Bit $tmp2952 = (frost$core$Bit) {$tmp2951};
bool $tmp2953 = $tmp2952.value;
if ($tmp2953) goto block18; else goto block12;
block18:;
int64_t $tmp2954 = $tmp2938.value;
int64_t $tmp2955 = $tmp2916.value;
int64_t $tmp2956 = $tmp2954 + $tmp2955;
frost$core$Int64 $tmp2957 = (frost$core$Int64) {$tmp2956};
*(&local5) = $tmp2957;
goto block11;
block12:;
// line 834
frost$core$Int64 $tmp2958 = *(&local3);
frost$core$Weak** $tmp2959 = &param0->compiler;
frost$core$Weak* $tmp2960 = *$tmp2959;
frost$core$Object* $tmp2961 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2960);
frost$core$Weak** $tmp2962 = &param0->compiler;
frost$core$Weak* $tmp2963 = *$tmp2962;
frost$core$Object* $tmp2964 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2963);
org$frostlang$frostc$Type* $tmp2965 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp2966 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2964), $tmp2965);
frost$collections$ListView* $tmp2967 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2961), $tmp2966);
ITable* $tmp2968 = ((frost$collections$CollectionView*) $tmp2967)->$class->itable;
while ($tmp2968->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2968 = $tmp2968->next;
}
$fn2970 $tmp2969 = $tmp2968->methods[0];
frost$core$Int64 $tmp2971 = $tmp2969(((frost$collections$CollectionView*) $tmp2967));
int64_t $tmp2972 = $tmp2958.value;
int64_t $tmp2973 = $tmp2971.value;
int64_t $tmp2974 = $tmp2972 - $tmp2973;
frost$core$Int64 $tmp2975 = (frost$core$Int64) {$tmp2974};
*(&local3) = $tmp2975;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2967));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2966));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2965));
frost$core$Frost$unref$frost$core$Object$Q($tmp2964);
frost$core$Frost$unref$frost$core$Object$Q($tmp2961);
// line 835
frost$core$Int64 $tmp2976 = *(&local3);
frost$core$Int64 $tmp2977 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2978 = $tmp2976.value;
int64_t $tmp2979 = $tmp2977.value;
bool $tmp2980 = $tmp2978 != $tmp2979;
frost$core$Bit $tmp2981 = (frost$core$Bit) {$tmp2980};
bool $tmp2982 = $tmp2981.value;
if ($tmp2982) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp2983 = (frost$core$Int64) {835};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2984, $tmp2983);
abort(); // unreachable
block21:;
// line 836
frost$core$String* $tmp2985 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2985));
frost$core$String* $tmp2986 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2986));
*(&local6) = $tmp2985;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2985));
// line 837
frost$core$Weak** $tmp2987 = &param0->compiler;
frost$core$Weak* $tmp2988 = *$tmp2987;
frost$core$Object* $tmp2989 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2988);
org$frostlang$frostc$Type* $tmp2990 = org$frostlang$frostc$Compiler$inheritedTypeWithSelf$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp2989), param2);
frost$core$String* $tmp2991 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, $tmp2990, ((org$frostlang$frostc$Type*) NULL));
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2991));
frost$core$String* $tmp2992 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2992));
*(&local7) = $tmp2991;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2991));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2990));
frost$core$Frost$unref$frost$core$Object$Q($tmp2989);
// line 838
frost$core$String* $tmp2993 = *(&local7);
frost$core$String* $tmp2994 = frost$core$String$get_asString$R$frost$core$String($tmp2993);
frost$core$String* $tmp2995 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2994, &$s2996);
frost$core$String* $tmp2997 = *(&local6);
frost$core$String* $tmp2998 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2995, $tmp2997);
frost$core$String* $tmp2999 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2998, &$s3000);
frost$core$String* $tmp3001 = *(&local2);
frost$core$String* $tmp3002 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2999, $tmp3001);
frost$core$String* $tmp3003 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3002, &$s3004);
frost$core$Int64 $tmp3005 = *(&local3);
frost$core$Int64$wrapper* $tmp3006;
$tmp3006 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3006->value = $tmp3005;
frost$core$String* $tmp3007 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3003, ((frost$core$Object*) $tmp3006));
frost$core$String* $tmp3008 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3007, &$s3009);
$fn3011 $tmp3010 = ($fn3011) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp3012 = $tmp3010(((frost$io$OutputStream*) param3), $tmp3008);
if ($tmp3012 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3012));
*(&local0) = $tmp3012;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3012));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3008));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3007));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3006));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3003));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3002));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2998));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2995));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2994));
frost$core$String* $tmp3013 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp3014 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3014));
*(&local6) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp3015 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3015));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp3016 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3016));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp3017 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3017));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3012));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3008));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3007));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3006));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3003));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3002));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2998));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2995));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2994));
// line 839
frost$core$String* $tmp3018 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3018));
frost$core$String* $tmp3019 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3019));
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp3020 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3020));
*(&local6) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp3021 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3021));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp3022 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3022));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp3023 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3023));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Error* $tmp3024 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3024));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp3018;
block1:;
// line 842
frost$core$Int64 $tmp3025 = (frost$core$Int64) {842};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3026, $tmp3025);
abort(); // unreachable
block2:;
frost$core$Error* $tmp3027 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3027));
*(&local0) = ((frost$core$Error*) NULL);
goto block25;
block25:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getMethodReference$frost$core$String$Q$org$frostlang$frostc$MethodDecl$frost$core$Bit$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$MethodDecl* param2, frost$core$Bit param3, frost$io$IndentedOutputStream* param4) {

// line 848
frost$core$Bit $tmp3028 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp3029 = $tmp3028.value;
if ($tmp3029) goto block4; else goto block3;
block4:;
frost$core$Bit $tmp3030 = org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit(param2);
bool $tmp3031 = $tmp3030.value;
if ($tmp3031) goto block1; else goto block3;
block1:;
// line 849
frost$core$Bit $tmp3032 = frost$core$Bit$init$builtin_bit(param1 != NULL);
bool $tmp3033 = $tmp3032.value;
if ($tmp3033) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp3034 = (frost$core$Int64) {849};
frost$core$String* $tmp3035 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param2);
frost$core$String* $tmp3036 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3037, $tmp3035);
frost$core$String* $tmp3038 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3036, &$s3039);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3040, $tmp3034, $tmp3038);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3038));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3035));
abort(); // unreachable
block5:;
// line 850
frost$core$Weak** $tmp3041 = &param2->owner;
frost$core$Weak* $tmp3042 = *$tmp3041;
frost$core$Object* $tmp3043 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3042);
org$frostlang$frostc$ClassDecl$Kind* $tmp3044 = &((org$frostlang$frostc$ClassDecl*) $tmp3043)->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp3045 = *$tmp3044;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3046;
$tmp3046 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3046->value = $tmp3045;
frost$core$Int64 $tmp3047 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp3048 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp3047);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3049;
$tmp3049 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3049->value = $tmp3048;
ITable* $tmp3050 = ((frost$core$Equatable*) $tmp3046)->$class->itable;
while ($tmp3050->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3050 = $tmp3050->next;
}
$fn3052 $tmp3051 = $tmp3050->methods[0];
frost$core$Bit $tmp3053 = $tmp3051(((frost$core$Equatable*) $tmp3046), ((frost$core$Equatable*) $tmp3049));
bool $tmp3054 = $tmp3053.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3049)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3046)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3043);
if ($tmp3054) goto block7; else goto block9;
block7:;
// line 851
frost$core$String* $tmp3055 = org$frostlang$frostc$CCodeGenerator$getInterfaceMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3055));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3055));
return $tmp3055;
block9:;
// line 1
// line 854
frost$core$String* $tmp3056 = org$frostlang$frostc$CCodeGenerator$getVirtualMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3056));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3056));
return $tmp3056;
block8:;
goto block2;
block3:;
// line 1
// line 858
frost$core$Weak** $tmp3057 = &param2->owner;
frost$core$Weak* $tmp3058 = *$tmp3057;
frost$core$Object* $tmp3059 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3058);
frost$core$Bit $tmp3060 = org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp3059));
bool $tmp3061 = $tmp3060.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3059);
if ($tmp3061) goto block10; else goto block11;
block10:;
// line 859
org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param2);
goto block11;
block11:;
// line 861
frost$core$String* $tmp3062 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3062));
return $tmp3062;
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
// line 866
*(&local0) = ((frost$core$Error*) NULL);
// line 867
org$frostlang$frostc$Type$Kind* $tmp3063 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp3064 = *$tmp3063;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3065;
$tmp3065 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3065->value = $tmp3064;
frost$core$Int64 $tmp3066 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3067 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3066);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3068;
$tmp3068 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3068->value = $tmp3067;
ITable* $tmp3069 = ((frost$core$Equatable*) $tmp3065)->$class->itable;
while ($tmp3069->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3069 = $tmp3069->next;
}
$fn3071 $tmp3070 = $tmp3069->methods[0];
frost$core$Bit $tmp3072 = $tmp3070(((frost$core$Equatable*) $tmp3065), ((frost$core$Equatable*) $tmp3068));
bool $tmp3073 = $tmp3072.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3068)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3065)));
if ($tmp3073) goto block3; else goto block4;
block3:;
// line 869
frost$core$String* $tmp3074 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3074));
frost$core$String* $tmp3075 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3075));
*(&local1) = $tmp3074;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3074));
// line 870
frost$core$String* $tmp3076 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3077 = frost$core$String$get_asString$R$frost$core$String($tmp3076);
frost$core$String* $tmp3078 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3077, &$s3079);
frost$core$String* $tmp3080 = *(&local1);
frost$core$String* $tmp3081 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3078, $tmp3080);
frost$core$String* $tmp3082 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3081, &$s3083);
$fn3085 $tmp3084 = ($fn3085) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3086 = $tmp3084(((frost$io$OutputStream*) param4), $tmp3082);
if ($tmp3086 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3086));
*(&local0) = $tmp3086;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3086));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3081));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3078));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3077));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3076));
frost$core$String* $tmp3087 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3087));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3086));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3081));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3078));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3077));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3076));
// line 871
frost$core$String* $tmp3088 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3089, param1);
frost$core$String* $tmp3090 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3088, &$s3091);
$fn3093 $tmp3092 = ($fn3093) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3094 = $tmp3092(((frost$io$OutputStream*) param4), $tmp3090);
if ($tmp3094 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3094));
*(&local0) = $tmp3094;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3094));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3088));
frost$core$String* $tmp3095 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3095));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3094));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3088));
// line 872
frost$core$Int64* $tmp3096 = &param4->level;
frost$core$Int64 $tmp3097 = *$tmp3096;
frost$core$Int64 $tmp3098 = (frost$core$Int64) {1};
int64_t $tmp3099 = $tmp3097.value;
int64_t $tmp3100 = $tmp3098.value;
int64_t $tmp3101 = $tmp3099 + $tmp3100;
frost$core$Int64 $tmp3102 = (frost$core$Int64) {$tmp3101};
frost$core$Int64* $tmp3103 = &param4->level;
*$tmp3103 = $tmp3102;
// line 873
org$frostlang$frostc$FixedArray* $tmp3104 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp3105 = (frost$core$Int64) {0};
frost$core$Object* $tmp3106 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3104, $tmp3105);
frost$core$String* $tmp3107 = org$frostlang$frostc$CCodeGenerator$toNonNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, ((org$frostlang$frostc$Type*) $tmp3106), param4);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3107));
frost$core$String* $tmp3108 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3108));
*(&local2) = $tmp3107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3107));
frost$core$Frost$unref$frost$core$Object$Q($tmp3106);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3104));
// line 874
frost$core$String* $tmp3109 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3110 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp3111 = (frost$core$Int64) {0};
frost$core$Object* $tmp3112 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3110, $tmp3111);
frost$core$String* $tmp3113 = org$frostlang$frostc$CCodeGenerator$wrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, $tmp3109, ((org$frostlang$frostc$Type*) $tmp3112), param3, param4);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3113));
frost$core$String* $tmp3114 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3114));
*(&local3) = $tmp3113;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3113));
frost$core$Frost$unref$frost$core$Object$Q($tmp3112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3110));
// line 875
frost$core$String* $tmp3115 = *(&local1);
frost$core$String* $tmp3116 = frost$core$String$get_asString$R$frost$core$String($tmp3115);
frost$core$String* $tmp3117 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3116, &$s3118);
frost$core$String* $tmp3119 = *(&local3);
frost$core$String* $tmp3120 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3117, $tmp3119);
frost$core$String* $tmp3121 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3120, &$s3122);
$fn3124 $tmp3123 = ($fn3124) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3125 = $tmp3123(((frost$io$OutputStream*) param4), $tmp3121);
if ($tmp3125 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3125));
*(&local0) = $tmp3125;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3116));
frost$core$String* $tmp3126 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3126));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3127 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3127));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3128 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3128));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3116));
// line 876
frost$core$Int64* $tmp3129 = &param4->level;
frost$core$Int64 $tmp3130 = *$tmp3129;
frost$core$Int64 $tmp3131 = (frost$core$Int64) {1};
int64_t $tmp3132 = $tmp3130.value;
int64_t $tmp3133 = $tmp3131.value;
int64_t $tmp3134 = $tmp3132 - $tmp3133;
frost$core$Int64 $tmp3135 = (frost$core$Int64) {$tmp3134};
frost$core$Int64* $tmp3136 = &param4->level;
*$tmp3136 = $tmp3135;
// line 877
$fn3138 $tmp3137 = ($fn3138) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3139 = $tmp3137(((frost$io$OutputStream*) param4), &$s3140);
if ($tmp3139 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3139));
*(&local0) = $tmp3139;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3139));
frost$core$String* $tmp3141 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3141));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3142 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3142));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3143 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3143));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3139));
// line 878
$fn3145 $tmp3144 = ($fn3145) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3146 = $tmp3144(((frost$io$OutputStream*) param4), &$s3147);
if ($tmp3146 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3146));
*(&local0) = $tmp3146;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3146));
frost$core$String* $tmp3148 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3148));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3149 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3149));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3150 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3150));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3146));
// line 879
frost$core$Int64* $tmp3151 = &param4->level;
frost$core$Int64 $tmp3152 = *$tmp3151;
frost$core$Int64 $tmp3153 = (frost$core$Int64) {1};
int64_t $tmp3154 = $tmp3152.value;
int64_t $tmp3155 = $tmp3153.value;
int64_t $tmp3156 = $tmp3154 + $tmp3155;
frost$core$Int64 $tmp3157 = (frost$core$Int64) {$tmp3156};
frost$core$Int64* $tmp3158 = &param4->level;
*$tmp3158 = $tmp3157;
// line 880
frost$core$String* $tmp3159 = *(&local1);
frost$core$String* $tmp3160 = frost$core$String$get_asString$R$frost$core$String($tmp3159);
frost$core$String* $tmp3161 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3160, &$s3162);
$fn3164 $tmp3163 = ($fn3164) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3165 = $tmp3163(((frost$io$OutputStream*) param4), $tmp3161);
if ($tmp3165 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3165));
*(&local0) = $tmp3165;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3160));
frost$core$String* $tmp3166 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3166));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3167 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3167));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3168 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3168));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3160));
// line 881
frost$core$Int64* $tmp3169 = &param4->level;
frost$core$Int64 $tmp3170 = *$tmp3169;
frost$core$Int64 $tmp3171 = (frost$core$Int64) {1};
int64_t $tmp3172 = $tmp3170.value;
int64_t $tmp3173 = $tmp3171.value;
int64_t $tmp3174 = $tmp3172 - $tmp3173;
frost$core$Int64 $tmp3175 = (frost$core$Int64) {$tmp3174};
frost$core$Int64* $tmp3176 = &param4->level;
*$tmp3176 = $tmp3175;
// line 882
$fn3178 $tmp3177 = ($fn3178) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3179 = $tmp3177(((frost$io$OutputStream*) param4), &$s3180);
if ($tmp3179 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3179));
*(&local0) = $tmp3179;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3179));
frost$core$String* $tmp3181 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3181));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3182 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3182));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3183 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3183));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3179));
// line 883
frost$core$String* $tmp3184 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3184));
frost$core$String* $tmp3185 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3185));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3186 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3186));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3187 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3187));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp3188 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3188));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp3184;
block4:;
// line 885
frost$core$String* $tmp3189 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
frost$core$String* $tmp3190 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3190));
*(&local4) = $tmp3189;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
// line 886
frost$core$String* $tmp3191 = org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(param0, param2);
frost$core$String* $tmp3192 = frost$core$String$get_asString$R$frost$core$String($tmp3191);
frost$core$String* $tmp3193 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3192, &$s3194);
frost$core$String* $tmp3195 = *(&local4);
frost$core$String* $tmp3196 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3193, $tmp3195);
frost$core$String* $tmp3197 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3196, &$s3198);
$fn3200 $tmp3199 = ($fn3200) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3201 = $tmp3199(((frost$io$OutputStream*) param4), $tmp3197);
if ($tmp3201 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3201));
*(&local0) = $tmp3201;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3191));
frost$core$String* $tmp3202 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3202));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3191));
// line 887
org$frostlang$frostc$Type$Kind* $tmp3203 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp3204 = *$tmp3203;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3205;
$tmp3205 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3205->value = $tmp3204;
frost$core$Int64 $tmp3206 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3207 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3206);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3208;
$tmp3208 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3208->value = $tmp3207;
ITable* $tmp3209 = ((frost$core$Equatable*) $tmp3205)->$class->itable;
while ($tmp3209->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3209 = $tmp3209->next;
}
$fn3211 $tmp3210 = $tmp3209->methods[0];
frost$core$Bit $tmp3212 = $tmp3210(((frost$core$Equatable*) $tmp3205), ((frost$core$Equatable*) $tmp3208));
bool $tmp3213 = $tmp3212.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3208)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3205)));
if ($tmp3213) goto block21; else goto block22;
block21:;
// line 888
frost$core$String* $tmp3214 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3215, param1);
frost$core$String* $tmp3216 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3214, &$s3217);
$fn3219 $tmp3218 = ($fn3219) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3220 = $tmp3218(((frost$io$OutputStream*) param4), $tmp3216);
if ($tmp3220 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3220));
*(&local0) = $tmp3220;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3214));
frost$core$String* $tmp3221 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3221));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3214));
// line 889
frost$core$Int64* $tmp3222 = &param4->level;
frost$core$Int64 $tmp3223 = *$tmp3222;
frost$core$Int64 $tmp3224 = (frost$core$Int64) {1};
int64_t $tmp3225 = $tmp3223.value;
int64_t $tmp3226 = $tmp3224.value;
int64_t $tmp3227 = $tmp3225 + $tmp3226;
frost$core$Int64 $tmp3228 = (frost$core$Int64) {$tmp3227};
frost$core$Int64* $tmp3229 = &param4->level;
*$tmp3229 = $tmp3228;
goto block22;
block22:;
// line 891
frost$core$String* $tmp3230 = *(&local4);
frost$core$String* $tmp3231 = frost$core$String$get_asString$R$frost$core$String($tmp3230);
frost$core$String* $tmp3232 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3231, &$s3233);
frost$core$String* $tmp3234 = org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(param0, param2);
frost$core$String* $tmp3235 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3232, $tmp3234);
frost$core$String* $tmp3236 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3235, &$s3237);
frost$core$Int64 $tmp3238 = org$frostlang$frostc$CCodeGenerator$sizeOfWrapper$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param2);
frost$core$Int64$wrapper* $tmp3239;
$tmp3239 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3239->value = $tmp3238;
frost$core$String* $tmp3240 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3241, ((frost$core$Object*) $tmp3239));
frost$core$String* $tmp3242 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3240, &$s3243);
frost$core$String* $tmp3244 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3236, $tmp3242);
frost$core$String** $tmp3245 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp3246 = *$tmp3245;
frost$core$String* $tmp3247 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp3246);
frost$core$String* $tmp3248 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3249, $tmp3247);
frost$core$String* $tmp3250 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3248, &$s3251);
frost$core$String* $tmp3252 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3244, $tmp3250);
$fn3254 $tmp3253 = ($fn3254) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3255 = $tmp3253(((frost$io$OutputStream*) param4), $tmp3252);
if ($tmp3255 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3255));
*(&local0) = $tmp3255;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3231));
frost$core$String* $tmp3256 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3256));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3231));
// line 894
frost$core$String* $tmp3257 = *(&local4);
frost$core$String* $tmp3258 = frost$core$String$get_asString$R$frost$core$String($tmp3257);
frost$core$String* $tmp3259 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3258, &$s3260);
frost$core$String* $tmp3261 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3259, param1);
frost$core$String* $tmp3262 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3261, &$s3263);
$fn3265 $tmp3264 = ($fn3265) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3266 = $tmp3264(((frost$io$OutputStream*) param4), $tmp3262);
if ($tmp3266 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3266));
*(&local0) = $tmp3266;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3266));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3258));
frost$core$String* $tmp3267 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3267));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3266));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3258));
// line 895
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
if ($tmp3278) goto block29; else goto block30;
block29:;
// line 896
frost$core$Int64* $tmp3279 = &param4->level;
frost$core$Int64 $tmp3280 = *$tmp3279;
frost$core$Int64 $tmp3281 = (frost$core$Int64) {1};
int64_t $tmp3282 = $tmp3280.value;
int64_t $tmp3283 = $tmp3281.value;
int64_t $tmp3284 = $tmp3282 - $tmp3283;
frost$core$Int64 $tmp3285 = (frost$core$Int64) {$tmp3284};
frost$core$Int64* $tmp3286 = &param4->level;
*$tmp3286 = $tmp3285;
// line 897
$fn3288 $tmp3287 = ($fn3288) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3289 = $tmp3287(((frost$io$OutputStream*) param4), &$s3290);
if ($tmp3289 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3289));
*(&local0) = $tmp3289;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3289));
frost$core$String* $tmp3291 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3291));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3289));
// line 898
$fn3293 $tmp3292 = ($fn3293) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3294 = $tmp3292(((frost$io$OutputStream*) param4), &$s3295);
if ($tmp3294 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3294));
*(&local0) = $tmp3294;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3294));
frost$core$String* $tmp3296 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3296));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3294));
// line 899
frost$core$Int64* $tmp3297 = &param4->level;
frost$core$Int64 $tmp3298 = *$tmp3297;
frost$core$Int64 $tmp3299 = (frost$core$Int64) {1};
int64_t $tmp3300 = $tmp3298.value;
int64_t $tmp3301 = $tmp3299.value;
int64_t $tmp3302 = $tmp3300 + $tmp3301;
frost$core$Int64 $tmp3303 = (frost$core$Int64) {$tmp3302};
frost$core$Int64* $tmp3304 = &param4->level;
*$tmp3304 = $tmp3303;
// line 900
frost$core$String* $tmp3305 = *(&local4);
frost$core$String* $tmp3306 = frost$core$String$get_asString$R$frost$core$String($tmp3305);
frost$core$String* $tmp3307 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3306, &$s3308);
$fn3310 $tmp3309 = ($fn3310) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3311 = $tmp3309(((frost$io$OutputStream*) param4), $tmp3307);
if ($tmp3311 == NULL) goto block35; else goto block36;
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3311));
*(&local0) = $tmp3311;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3306));
frost$core$String* $tmp3312 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3312));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3306));
// line 901
frost$core$Int64* $tmp3313 = &param4->level;
frost$core$Int64 $tmp3314 = *$tmp3313;
frost$core$Int64 $tmp3315 = (frost$core$Int64) {1};
int64_t $tmp3316 = $tmp3314.value;
int64_t $tmp3317 = $tmp3315.value;
int64_t $tmp3318 = $tmp3316 - $tmp3317;
frost$core$Int64 $tmp3319 = (frost$core$Int64) {$tmp3318};
frost$core$Int64* $tmp3320 = &param4->level;
*$tmp3320 = $tmp3319;
// line 902
$fn3322 $tmp3321 = ($fn3322) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3323 = $tmp3321(((frost$io$OutputStream*) param4), &$s3324);
if ($tmp3323 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3323));
*(&local0) = $tmp3323;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3323));
frost$core$String* $tmp3325 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3325));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3323));
goto block30;
block30:;
// line 904
frost$core$String* $tmp3326 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3327 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3328, $tmp3326);
frost$core$String* $tmp3329 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3327, &$s3330);
frost$core$String* $tmp3331 = *(&local4);
frost$core$String* $tmp3332 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3329, $tmp3331);
frost$core$String* $tmp3333 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3332, &$s3334);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3326));
frost$core$String* $tmp3335 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3335));
*(&local4) = ((frost$core$String*) NULL);
frost$core$Error* $tmp3336 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3336));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp3333;
block1:;
// line 907
frost$core$Int64 $tmp3337 = (frost$core$Int64) {907};
frost$core$Error* $tmp3338 = *(&local0);
$fn3340 $tmp3339 = ($fn3340) ((frost$core$Object*) $tmp3338)->$class->vtable[0];
frost$core$String* $tmp3341 = $tmp3339(((frost$core$Object*) $tmp3338));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3342, $tmp3337, $tmp3341);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3341));
abort(); // unreachable
block2:;
frost$core$Error* $tmp3343 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3343));
*(&local0) = ((frost$core$Error*) NULL);
goto block39;
block39:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$unwrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3, frost$io$IndentedOutputStream* param4) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 912
frost$core$String* $tmp3344 = org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3345 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3346, $tmp3344);
frost$core$String* $tmp3347 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3345, &$s3348);
frost$core$String* $tmp3349 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3347, param1);
frost$core$String* $tmp3350 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3349, &$s3351);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3350));
frost$core$String* $tmp3352 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3352));
*(&local0) = $tmp3350;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3349));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3344));
// line 913
org$frostlang$frostc$Type$Kind* $tmp3353 = &param3->typeKind;
org$frostlang$frostc$Type$Kind $tmp3354 = *$tmp3353;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3355;
$tmp3355 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3355->value = $tmp3354;
frost$core$Int64 $tmp3356 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3357 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3356);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3358;
$tmp3358 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3358->value = $tmp3357;
ITable* $tmp3359 = ((frost$core$Equatable*) $tmp3355)->$class->itable;
while ($tmp3359->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3359 = $tmp3359->next;
}
$fn3361 $tmp3360 = $tmp3359->methods[0];
frost$core$Bit $tmp3362 = $tmp3360(((frost$core$Equatable*) $tmp3355), ((frost$core$Equatable*) $tmp3358));
bool $tmp3363 = $tmp3362.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3358)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3355)));
if ($tmp3363) goto block1; else goto block2;
block1:;
// line 915
org$frostlang$frostc$FixedArray* $tmp3364 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param3);
frost$core$Int64 $tmp3365 = (frost$core$Int64) {0};
frost$core$Object* $tmp3366 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3364, $tmp3365);
frost$core$String* $tmp3367 = org$frostlang$frostc$CCodeGenerator$unwrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, ((org$frostlang$frostc$Type*) $tmp3366), param4);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3367));
frost$core$String* $tmp3368 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3368));
*(&local1) = $tmp3367;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3367));
frost$core$Frost$unref$frost$core$Object$Q($tmp3366);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3364));
// line 916
frost$core$String* $tmp3369 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp3370 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param3);
frost$core$Int64 $tmp3371 = (frost$core$Int64) {0};
frost$core$Object* $tmp3372 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3370, $tmp3371);
frost$core$String* $tmp3373 = org$frostlang$frostc$CCodeGenerator$toNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, $tmp3369, ((org$frostlang$frostc$Type*) $tmp3372), param3, param4);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3373));
frost$core$String* $tmp3374 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3374));
*(&local2) = $tmp3373;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3373));
frost$core$Frost$unref$frost$core$Object$Q($tmp3372);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3370));
// line 917
frost$core$String* $tmp3375 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3376, param1);
frost$core$String* $tmp3377 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3375, &$s3378);
frost$core$String* $tmp3379 = *(&local2);
frost$core$String* $tmp3380 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3377, $tmp3379);
frost$core$String* $tmp3381 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3380, &$s3382);
frost$core$String* $tmp3383 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3384 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3381, $tmp3383);
frost$core$String* $tmp3385 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3384, &$s3386);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3381));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3375));
frost$core$String* $tmp3387 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3387));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3388 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3388));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp3389 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3389));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3385;
block2:;
// line 919
frost$core$String* $tmp3390 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3390));
frost$core$String* $tmp3391 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3391));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3390;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$toNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3, frost$io$IndentedOutputStream* param4) {

// line 924
frost$core$String* $tmp3392 = org$frostlang$frostc$CCodeGenerator$nullableType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3393 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3394, $tmp3392);
frost$core$String* $tmp3395 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3393, &$s3396);
frost$core$String* $tmp3397 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3395, param1);
frost$core$String* $tmp3398 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3397, &$s3399);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3393));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3392));
return $tmp3398;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$toNonNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3, frost$io$IndentedOutputStream* param4) {

// line 929
frost$core$String* $tmp3400 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3401 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3402, $tmp3400);
frost$core$String* $tmp3403 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3401, &$s3404);
frost$core$String* $tmp3405 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3403, param1);
frost$core$String* $tmp3406 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3405, &$s3407);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3400));
return $tmp3406;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// line 933
frost$core$Bit $tmp3408 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(param3);
bool $tmp3409 = $tmp3408.value;
if ($tmp3409) goto block1; else goto block3;
block1:;
// line 934
frost$core$Bit $tmp3410 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(param2);
bool $tmp3411 = $tmp3410.value;
if ($tmp3411) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp3412 = (frost$core$Int64) {934};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3413, $tmp3412);
abort(); // unreachable
block4:;
// line 935
frost$core$String* $tmp3414 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3415 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3416, $tmp3414);
frost$core$String* $tmp3417 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3415, &$s3418);
frost$core$String* $tmp3419 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3417, param1);
frost$core$String* $tmp3420 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3419, &$s3421);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3419));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3417));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3414));
return $tmp3420;
block3:;
// line 1
// line 938
frost$core$Weak** $tmp3422 = &param0->compiler;
frost$core$Weak* $tmp3423 = *$tmp3422;
frost$core$Object* $tmp3424 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3423);
org$frostlang$frostc$ClassDecl* $tmp3425 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3424), param2);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3425));
org$frostlang$frostc$ClassDecl* $tmp3426 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3426));
*(&local0) = $tmp3425;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3425));
frost$core$Frost$unref$frost$core$Object$Q($tmp3424);
// line 939
org$frostlang$frostc$ClassDecl* $tmp3427 = *(&local0);
frost$core$Bit $tmp3428 = frost$core$Bit$init$builtin_bit($tmp3427 != NULL);
bool $tmp3429 = $tmp3428.value;
if ($tmp3429) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3430 = (frost$core$Int64) {939};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3431, $tmp3430);
abort(); // unreachable
block6:;
// line 940
frost$core$Weak** $tmp3432 = &param0->compiler;
frost$core$Weak* $tmp3433 = *$tmp3432;
frost$core$Object* $tmp3434 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3433);
org$frostlang$frostc$ClassDecl* $tmp3435 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3434), param3);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3435));
org$frostlang$frostc$ClassDecl* $tmp3436 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3436));
*(&local1) = $tmp3435;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3435));
frost$core$Frost$unref$frost$core$Object$Q($tmp3434);
// line 941
org$frostlang$frostc$ClassDecl* $tmp3437 = *(&local1);
frost$core$Bit $tmp3438 = frost$core$Bit$init$builtin_bit($tmp3437 != NULL);
bool $tmp3439 = $tmp3438.value;
if ($tmp3439) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp3440 = (frost$core$Int64) {941};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3441, $tmp3440);
abort(); // unreachable
block8:;
// line 942
frost$core$Weak** $tmp3442 = &param0->compiler;
frost$core$Weak* $tmp3443 = *$tmp3442;
frost$core$Object* $tmp3444 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3443);
org$frostlang$frostc$ClassDecl* $tmp3445 = *(&local0);
frost$core$Bit $tmp3446 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3444), $tmp3445);
bool $tmp3447 = $tmp3446.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3444);
if ($tmp3447) goto block13; else goto block12;
block13:;
frost$core$Weak** $tmp3448 = &param0->compiler;
frost$core$Weak* $tmp3449 = *$tmp3448;
frost$core$Object* $tmp3450 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3449);
org$frostlang$frostc$ClassDecl* $tmp3451 = *(&local1);
frost$core$Bit $tmp3452 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3450), $tmp3451);
frost$core$Bit $tmp3453 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3452);
bool $tmp3454 = $tmp3453.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3450);
if ($tmp3454) goto block10; else goto block12;
block10:;
// line 943
frost$io$IndentedOutputStream** $tmp3455 = &param0->out;
frost$io$IndentedOutputStream* $tmp3456 = *$tmp3455;
frost$core$String* $tmp3457 = org$frostlang$frostc$CCodeGenerator$wrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param3, $tmp3456);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3457));
org$frostlang$frostc$ClassDecl* $tmp3458 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3458));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3459 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3459));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3457;
block12:;
// line 945
frost$core$Weak** $tmp3460 = &param0->compiler;
frost$core$Weak* $tmp3461 = *$tmp3460;
frost$core$Object* $tmp3462 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3461);
org$frostlang$frostc$ClassDecl* $tmp3463 = *(&local0);
frost$core$Bit $tmp3464 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3462), $tmp3463);
frost$core$Bit $tmp3465 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3464);
bool $tmp3466 = $tmp3465.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3462);
if ($tmp3466) goto block17; else goto block16;
block17:;
frost$core$Weak** $tmp3467 = &param0->compiler;
frost$core$Weak* $tmp3468 = *$tmp3467;
frost$core$Object* $tmp3469 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3468);
org$frostlang$frostc$ClassDecl* $tmp3470 = *(&local1);
frost$core$Bit $tmp3471 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3469), $tmp3470);
bool $tmp3472 = $tmp3471.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3469);
if ($tmp3472) goto block14; else goto block16;
block14:;
// line 946
frost$io$IndentedOutputStream** $tmp3473 = &param0->out;
frost$io$IndentedOutputStream* $tmp3474 = *$tmp3473;
frost$core$String* $tmp3475 = org$frostlang$frostc$CCodeGenerator$unwrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param3, $tmp3474);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3475));
org$frostlang$frostc$ClassDecl* $tmp3476 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3476));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3477 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3477));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3475;
block16:;
// line 948
frost$core$Weak** $tmp3478 = &param0->compiler;
frost$core$Weak* $tmp3479 = *$tmp3478;
frost$core$Object* $tmp3480 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3479);
org$frostlang$frostc$ClassDecl* $tmp3481 = *(&local0);
frost$core$Bit $tmp3482 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3480), $tmp3481);
bool $tmp3483 = $tmp3482.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3480);
if ($tmp3483) goto block22; else goto block20;
block22:;
org$frostlang$frostc$Type$Kind* $tmp3484 = &param3->typeKind;
org$frostlang$frostc$Type$Kind $tmp3485 = *$tmp3484;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3486;
$tmp3486 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3486->value = $tmp3485;
frost$core$Int64 $tmp3487 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3488 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3487);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3489;
$tmp3489 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3489->value = $tmp3488;
ITable* $tmp3490 = ((frost$core$Equatable*) $tmp3486)->$class->itable;
while ($tmp3490->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3490 = $tmp3490->next;
}
$fn3492 $tmp3491 = $tmp3490->methods[0];
frost$core$Bit $tmp3493 = $tmp3491(((frost$core$Equatable*) $tmp3486), ((frost$core$Equatable*) $tmp3489));
bool $tmp3494 = $tmp3493.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3489)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3486)));
if ($tmp3494) goto block21; else goto block20;
block21:;
org$frostlang$frostc$FixedArray* $tmp3495 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param3);
frost$core$Int64 $tmp3496 = (frost$core$Int64) {0};
frost$core$Object* $tmp3497 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3495, $tmp3496);
frost$core$Bit $tmp3498 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp3497), param2);
bool $tmp3499 = $tmp3498.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3497);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3495));
if ($tmp3499) goto block18; else goto block20;
block18:;
// line 950
frost$io$IndentedOutputStream** $tmp3500 = &param0->out;
frost$io$IndentedOutputStream* $tmp3501 = *$tmp3500;
frost$core$String* $tmp3502 = org$frostlang$frostc$CCodeGenerator$toNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param3, $tmp3501);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3502));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3502));
org$frostlang$frostc$ClassDecl* $tmp3503 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3503));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3504 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3504));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3502;
block20:;
// line 952
frost$core$Weak** $tmp3505 = &param0->compiler;
frost$core$Weak* $tmp3506 = *$tmp3505;
frost$core$Object* $tmp3507 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3506);
org$frostlang$frostc$ClassDecl* $tmp3508 = *(&local1);
frost$core$Bit $tmp3509 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3507), $tmp3508);
bool $tmp3510 = $tmp3509.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3507);
if ($tmp3510) goto block26; else goto block24;
block26:;
org$frostlang$frostc$Type$Kind* $tmp3511 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp3512 = *$tmp3511;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3513;
$tmp3513 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3513->value = $tmp3512;
frost$core$Int64 $tmp3514 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3515 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3514);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3516;
$tmp3516 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3516->value = $tmp3515;
ITable* $tmp3517 = ((frost$core$Equatable*) $tmp3513)->$class->itable;
while ($tmp3517->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3517 = $tmp3517->next;
}
$fn3519 $tmp3518 = $tmp3517->methods[0];
frost$core$Bit $tmp3520 = $tmp3518(((frost$core$Equatable*) $tmp3513), ((frost$core$Equatable*) $tmp3516));
bool $tmp3521 = $tmp3520.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3516)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3513)));
if ($tmp3521) goto block25; else goto block24;
block25:;
org$frostlang$frostc$FixedArray* $tmp3522 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp3523 = (frost$core$Int64) {0};
frost$core$Object* $tmp3524 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3522, $tmp3523);
frost$core$Bit $tmp3525 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp3524), param3);
bool $tmp3526 = $tmp3525.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3524);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3522));
if ($tmp3526) goto block23; else goto block24;
block23:;
// line 954
frost$io$IndentedOutputStream** $tmp3527 = &param0->out;
frost$io$IndentedOutputStream* $tmp3528 = *$tmp3527;
frost$core$String* $tmp3529 = org$frostlang$frostc$CCodeGenerator$toNonNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param3, $tmp3528);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3529));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3529));
org$frostlang$frostc$ClassDecl* $tmp3530 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3530));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3531 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3531));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3529;
block24:;
goto block19;
block19:;
goto block15;
block15:;
goto block11;
block11:;
org$frostlang$frostc$ClassDecl* $tmp3532 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3532));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3533 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3533));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block2;
block2:;
// line 957
frost$core$String* $tmp3534 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param2);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3534));
frost$core$String* $tmp3535 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3535));
*(&local2) = $tmp3534;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3534));
// line 958
frost$core$String* $tmp3536 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3536));
frost$core$String* $tmp3537 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3537));
*(&local3) = $tmp3536;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3536));
// line 959
frost$core$String* $tmp3538 = *(&local2);
frost$core$String* $tmp3539 = *(&local3);
frost$core$Bit $tmp3540 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3538, $tmp3539);
bool $tmp3541 = $tmp3540.value;
if ($tmp3541) goto block27; else goto block28;
block27:;
// line 960
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String* $tmp3542 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3542));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3543 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3543));
*(&local2) = ((frost$core$String*) NULL);
return param1;
block28:;
// line 962
frost$core$String* $tmp3544 = *(&local3);
frost$core$String* $tmp3545 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3546, $tmp3544);
frost$core$String* $tmp3547 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3545, &$s3548);
frost$core$String* $tmp3549 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3547, param1);
frost$core$String* $tmp3550 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3549, &$s3551);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3549));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3547));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3545));
frost$core$String* $tmp3552 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3552));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3553 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3553));
*(&local2) = ((frost$core$String*) NULL);
return $tmp3550;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getIntReference$frost$core$UInt64$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$UInt64 param1) {

// line 966
frost$core$Int64 $tmp3554 = (frost$core$Int64) {9223372036854775807};
frost$core$UInt64 $tmp3555 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3554);
uint64_t $tmp3556 = param1.value;
uint64_t $tmp3557 = $tmp3555.value;
bool $tmp3558 = $tmp3556 > $tmp3557;
frost$core$Bit $tmp3559 = (frost$core$Bit) {$tmp3558};
bool $tmp3560 = $tmp3559.value;
if ($tmp3560) goto block1; else goto block2;
block1:;
// line 967
frost$core$UInt64$wrapper* $tmp3561;
$tmp3561 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp3561->value = param1;
frost$core$String* $tmp3562 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp3561), &$s3563);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3562));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3562));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3561));
return $tmp3562;
block2:;
// line 969
frost$core$UInt64$wrapper* $tmp3564;
$tmp3564 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp3564->value = param1;
$fn3566 $tmp3565 = ($fn3566) ((frost$core$Object*) $tmp3564)->$class->vtable[0];
frost$core$String* $tmp3567 = $tmp3565(((frost$core$Object*) $tmp3564));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3567));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3567));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3564));
return $tmp3567;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getRealReference$org$frostlang$frostc$Type$frost$core$Real64$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$Real64 param2) {

frost$core$String* local0 = NULL;
// line 973
frost$core$Real64$wrapper* $tmp3568;
$tmp3568 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp3568->value = param2;
$fn3570 $tmp3569 = ($fn3570) ((frost$core$Object*) $tmp3568)->$class->vtable[0];
frost$core$String* $tmp3571 = $tmp3569(((frost$core$Object*) $tmp3568));
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3571));
frost$core$String* $tmp3572 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3572));
*(&local0) = $tmp3571;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3571));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3568));
// line 974
frost$core$String* $tmp3573 = *(&local0);
frost$core$Bit $tmp3574 = frost$core$String$contains$frost$core$String$R$frost$core$Bit($tmp3573, &$s3575);
bool $tmp3576 = $tmp3574.value;
if ($tmp3576) goto block1; else goto block2;
block1:;
// line 975
frost$core$String* $tmp3577 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3577));
frost$core$String* $tmp3578 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3578));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3577;
block2:;
// line 977
frost$core$String* $tmp3579 = *(&local0);
frost$core$String* $tmp3580 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3579, &$s3581);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3580));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3580));
frost$core$String* $tmp3582 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3582));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3580;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getBitReference$frost$core$Bit$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$Bit param1, frost$io$IndentedOutputStream* param2) {

// line 981
bool $tmp3583 = param1.value;
if ($tmp3583) goto block1; else goto block2;
block1:;
// line 982
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3584));
return &$s3585;
block2:;
// line 984
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3586));
return &$s3587;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Char8 local2;
// line 988
*(&local0) = ((frost$core$Error*) NULL);
// line 989
frost$core$Int64* $tmp3588 = &param0->varCount;
frost$core$Int64 $tmp3589 = *$tmp3588;
frost$core$Int64 $tmp3590 = (frost$core$Int64) {1};
int64_t $tmp3591 = $tmp3589.value;
int64_t $tmp3592 = $tmp3590.value;
int64_t $tmp3593 = $tmp3591 + $tmp3592;
frost$core$Int64 $tmp3594 = (frost$core$Int64) {$tmp3593};
frost$core$Int64* $tmp3595 = &param0->varCount;
*$tmp3595 = $tmp3594;
// line 990
frost$core$Int64* $tmp3596 = &param0->varCount;
frost$core$Int64 $tmp3597 = *$tmp3596;
frost$core$Int64$wrapper* $tmp3598;
$tmp3598 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3598->value = $tmp3597;
frost$core$String* $tmp3599 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3600, ((frost$core$Object*) $tmp3598));
frost$core$String* $tmp3601 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3599, &$s3602);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3601));
frost$core$String* $tmp3603 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3603));
*(&local1) = $tmp3601;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3601));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3599));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3598));
// line 991
org$frostlang$frostc$Type* $tmp3604 = org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type();
frost$core$String* $tmp3605 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp3604);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3605));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3604));
// line 992
frost$io$MemoryOutputStream** $tmp3606 = &param0->strings;
frost$io$MemoryOutputStream* $tmp3607 = *$tmp3606;
frost$core$String* $tmp3608 = *(&local1);
frost$core$String* $tmp3609 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3610, $tmp3608);
frost$core$String* $tmp3611 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3609, &$s3612);
frost$core$Int64 $tmp3613 = (frost$core$Int64) {18446744073709550617};
frost$core$Int64$wrapper* $tmp3614;
$tmp3614 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3614->value = $tmp3613;
frost$core$String* $tmp3615 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3616, ((frost$core$Object*) $tmp3614));
frost$core$String* $tmp3617 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3615, &$s3618);
frost$core$String* $tmp3619 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3611, $tmp3617);
frost$core$String* $tmp3620 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3619, &$s3621);
$fn3623 $tmp3622 = ($fn3623) ((frost$io$OutputStream*) $tmp3607)->$class->vtable[17];
frost$core$Error* $tmp3624 = $tmp3622(((frost$io$OutputStream*) $tmp3607), $tmp3620);
if ($tmp3624 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3624));
*(&local0) = $tmp3624;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3624));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3617));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3615));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3611));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3609));
frost$core$String* $tmp3625 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3625));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3624));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3617));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3615));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3611));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3609));
// line 995
frost$collections$ListView* $tmp3626 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(param1);
ITable* $tmp3627 = ((frost$collections$Iterable*) $tmp3626)->$class->itable;
while ($tmp3627->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3627 = $tmp3627->next;
}
$fn3629 $tmp3628 = $tmp3627->methods[0];
frost$collections$Iterator* $tmp3630 = $tmp3628(((frost$collections$Iterable*) $tmp3626));
goto block5;
block5:;
ITable* $tmp3631 = $tmp3630->$class->itable;
while ($tmp3631->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3631 = $tmp3631->next;
}
$fn3633 $tmp3632 = $tmp3631->methods[0];
frost$core$Bit $tmp3634 = $tmp3632($tmp3630);
bool $tmp3635 = $tmp3634.value;
if ($tmp3635) goto block7; else goto block6;
block6:;
ITable* $tmp3636 = $tmp3630->$class->itable;
while ($tmp3636->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3636 = $tmp3636->next;
}
$fn3638 $tmp3637 = $tmp3636->methods[1];
frost$core$Object* $tmp3639 = $tmp3637($tmp3630);
*(&local2) = ((frost$core$Char8$wrapper*) $tmp3639)->value;
// line 996
frost$io$MemoryOutputStream** $tmp3640 = &param0->strings;
frost$io$MemoryOutputStream* $tmp3641 = *$tmp3640;
frost$core$Char8 $tmp3642 = *(&local2);
frost$core$UInt8 $tmp3643 = frost$core$Char8$get_asUInt8$R$frost$core$UInt8($tmp3642);
frost$core$UInt8$wrapper* $tmp3644;
$tmp3644 = (frost$core$UInt8$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp3644->value = $tmp3643;
ITable* $tmp3645 = ((frost$core$Formattable*) $tmp3644)->$class->itable;
while ($tmp3645->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp3645 = $tmp3645->next;
}
$fn3647 $tmp3646 = $tmp3645->methods[0];
frost$core$String* $tmp3648 = $tmp3646(((frost$core$Formattable*) $tmp3644), &$s3649);
frost$core$String* $tmp3650 = frost$core$Frost$align$frost$core$String$frost$core$String$R$frost$core$String($tmp3648, &$s3651);
frost$core$String* $tmp3652 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3653, $tmp3650);
frost$core$String* $tmp3654 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3652, &$s3655);
$fn3657 $tmp3656 = ($fn3657) ((frost$io$OutputStream*) $tmp3641)->$class->vtable[17];
frost$core$Error* $tmp3658 = $tmp3656(((frost$io$OutputStream*) $tmp3641), $tmp3654);
if ($tmp3658 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3658));
*(&local0) = $tmp3658;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3650));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3648));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp3644)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3639);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3626));
frost$core$String* $tmp3659 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3659));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3650));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3648));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp3644)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3639);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3626));
// line 998
frost$io$MemoryOutputStream** $tmp3660 = &param0->strings;
frost$io$MemoryOutputStream* $tmp3661 = *$tmp3660;
frost$collections$ListView* $tmp3662 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(param1);
ITable* $tmp3663 = ((frost$collections$CollectionView*) $tmp3662)->$class->itable;
while ($tmp3663->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3663 = $tmp3663->next;
}
$fn3665 $tmp3664 = $tmp3663->methods[0];
frost$core$Int64 $tmp3666 = $tmp3664(((frost$collections$CollectionView*) $tmp3662));
frost$core$Int64$wrapper* $tmp3667;
$tmp3667 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3667->value = $tmp3666;
frost$core$String* $tmp3668 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3669, ((frost$core$Object*) $tmp3667));
frost$core$String* $tmp3670 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3668, &$s3671);
ITable* $tmp3672 = ((frost$collections$Key*) param1)->$class->itable;
while ($tmp3672->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp3672 = $tmp3672->next;
}
$fn3674 $tmp3673 = $tmp3672->methods[0];
frost$core$Int64 $tmp3675 = $tmp3673(((frost$collections$Key*) param1));
frost$core$Int64$wrapper* $tmp3676;
$tmp3676 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3676->value = $tmp3675;
frost$core$String* $tmp3677 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3670, ((frost$core$Object*) $tmp3676));
frost$core$String* $tmp3678 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3677, &$s3679);
$fn3681 $tmp3680 = ($fn3681) ((frost$io$OutputStream*) $tmp3661)->$class->vtable[19];
frost$core$Error* $tmp3682 = $tmp3680(((frost$io$OutputStream*) $tmp3661), $tmp3678);
if ($tmp3682 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3682));
*(&local0) = $tmp3682;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3676));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3667));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3662));
frost$core$String* $tmp3683 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3683));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3676));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3667));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3662));
// line 999
frost$core$String* $tmp3684 = *(&local1);
frost$core$String* $tmp3685 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3686, $tmp3684);
frost$core$String* $tmp3687 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3685, &$s3688);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3685));
frost$core$String* $tmp3689 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3689));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp3690 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3690));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp3687;
block1:;
// line 1002
frost$core$Int64 $tmp3691 = (frost$core$Int64) {1002};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3692, $tmp3691);
abort(); // unreachable
block2:;
frost$core$Error* $tmp3693 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3693));
*(&local0) = ((frost$core$Error*) NULL);
goto block12;
block12:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getNullReference$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// line 1007
org$frostlang$frostc$Type$Kind* $tmp3694 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp3695 = *$tmp3694;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3696;
$tmp3696 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3696->value = $tmp3695;
frost$core$Int64 $tmp3697 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3698 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3697);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3699;
$tmp3699 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3699->value = $tmp3698;
ITable* $tmp3700 = ((frost$core$Equatable*) $tmp3696)->$class->itable;
while ($tmp3700->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3700 = $tmp3700->next;
}
$fn3702 $tmp3701 = $tmp3700->methods[0];
frost$core$Bit $tmp3703 = $tmp3701(((frost$core$Equatable*) $tmp3696), ((frost$core$Equatable*) $tmp3699));
bool $tmp3704 = $tmp3703.value;
if ($tmp3704) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp3705 = (frost$core$Int64) {1007};
frost$core$String* $tmp3706 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3707, ((frost$core$Object*) param1));
frost$core$String* $tmp3708 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3706, &$s3709);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3710, $tmp3705, $tmp3708);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3708));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3706));
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3699)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3696)));
// line 1008
frost$core$Weak** $tmp3711 = &param0->compiler;
frost$core$Weak* $tmp3712 = *$tmp3711;
frost$core$Object* $tmp3713 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3712);
org$frostlang$frostc$FixedArray* $tmp3714 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp3715 = (frost$core$Int64) {0};
frost$core$Object* $tmp3716 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3714, $tmp3715);
org$frostlang$frostc$ClassDecl* $tmp3717 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3713), ((org$frostlang$frostc$Type*) $tmp3716));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3717));
org$frostlang$frostc$ClassDecl* $tmp3718 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3718));
*(&local0) = $tmp3717;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3717));
frost$core$Frost$unref$frost$core$Object$Q($tmp3716);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3714));
frost$core$Frost$unref$frost$core$Object$Q($tmp3713);
// line 1009
org$frostlang$frostc$ClassDecl* $tmp3719 = *(&local0);
frost$core$Bit $tmp3720 = frost$core$Bit$init$builtin_bit($tmp3719 != NULL);
bool $tmp3721 = $tmp3720.value;
if ($tmp3721) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp3722 = (frost$core$Int64) {1009};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3723, $tmp3722);
abort(); // unreachable
block3:;
// line 1010
frost$core$Weak** $tmp3724 = &param0->compiler;
frost$core$Weak* $tmp3725 = *$tmp3724;
frost$core$Object* $tmp3726 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3725);
org$frostlang$frostc$ClassDecl* $tmp3727 = *(&local0);
frost$core$Bit $tmp3728 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3726), $tmp3727);
bool $tmp3729 = $tmp3728.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3726);
if ($tmp3729) goto block5; else goto block7;
block5:;
// line 1011
frost$core$String* $tmp3730 = org$frostlang$frostc$CCodeGenerator$nullableType$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp3731 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3732, $tmp3730);
frost$core$String* $tmp3733 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3731, &$s3734);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3730));
org$frostlang$frostc$ClassDecl* $tmp3735 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3735));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3733;
block7:;
// line 1
// line 1014
frost$core$String* $tmp3736 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp3737 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3738, $tmp3736);
frost$core$String* $tmp3739 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3737, &$s3740);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3739));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3739));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3736));
org$frostlang$frostc$ClassDecl* $tmp3741 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3741));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3739;
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
// line 1019
frost$core$Int64* $tmp3742 = &param1->$rawValue;
frost$core$Int64 $tmp3743 = *$tmp3742;
frost$core$Int64 $tmp3744 = (frost$core$Int64) {0};
frost$core$Bit $tmp3745 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3743, $tmp3744);
bool $tmp3746 = $tmp3745.value;
if ($tmp3746) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp3747 = (frost$core$Bit*) (param1->$data + 0);
frost$core$Bit $tmp3748 = *$tmp3747;
*(&local0) = $tmp3748;
// line 1021
frost$core$Bit $tmp3749 = *(&local0);
frost$core$Bit$wrapper* $tmp3750;
$tmp3750 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp3750->value = $tmp3749;
$fn3752 $tmp3751 = ($fn3752) ((frost$core$Object*) $tmp3750)->$class->vtable[0];
frost$core$String* $tmp3753 = $tmp3751(((frost$core$Object*) $tmp3750));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3753));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3753));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3750));
return $tmp3753;
block3:;
frost$core$Int64 $tmp3754 = (frost$core$Int64) {1};
frost$core$Bit $tmp3755 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3743, $tmp3754);
bool $tmp3756 = $tmp3755.value;
if ($tmp3756) goto block4; else goto block5;
block4:;
frost$core$UInt64* $tmp3757 = (frost$core$UInt64*) (param1->$data + 0);
frost$core$UInt64 $tmp3758 = *$tmp3757;
*(&local1) = $tmp3758;
org$frostlang$frostc$Type** $tmp3759 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3760 = *$tmp3759;
// line 1024
frost$core$UInt64 $tmp3761 = *(&local1);
frost$core$UInt64$wrapper* $tmp3762;
$tmp3762 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp3762->value = $tmp3761;
$fn3764 $tmp3763 = ($fn3764) ((frost$core$Object*) $tmp3762)->$class->vtable[0];
frost$core$String* $tmp3765 = $tmp3763(((frost$core$Object*) $tmp3762));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3762));
return $tmp3765;
block5:;
frost$core$Int64 $tmp3766 = (frost$core$Int64) {2};
frost$core$Bit $tmp3767 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3743, $tmp3766);
bool $tmp3768 = $tmp3767.value;
if ($tmp3768) goto block6; else goto block7;
block6:;
frost$core$Int64* $tmp3769 = (frost$core$Int64*) (param1->$data + 0);
frost$core$Int64 $tmp3770 = *$tmp3769;
*(&local2) = $tmp3770;
org$frostlang$frostc$Type** $tmp3771 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3772 = *$tmp3771;
// line 1027
frost$core$Int64 $tmp3773 = *(&local2);
frost$core$Int64$wrapper* $tmp3774;
$tmp3774 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3774->value = $tmp3773;
frost$core$String* $tmp3775 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3776, ((frost$core$Object*) $tmp3774));
frost$core$String* $tmp3777 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3775, &$s3778);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3774));
return $tmp3777;
block7:;
frost$core$Int64 $tmp3779 = (frost$core$Int64) {3};
frost$core$Bit $tmp3780 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3743, $tmp3779);
bool $tmp3781 = $tmp3780.value;
if ($tmp3781) goto block8; else goto block9;
block8:;
org$frostlang$frostc$MethodDecl** $tmp3782 = (org$frostlang$frostc$MethodDecl**) (param1->$data + 0);
org$frostlang$frostc$MethodDecl* $tmp3783 = *$tmp3782;
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3783));
org$frostlang$frostc$MethodDecl* $tmp3784 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3784));
*(&local3) = $tmp3783;
org$frostlang$frostc$Type** $tmp3785 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3786 = *$tmp3785;
// line 1030
org$frostlang$frostc$MethodDecl* $tmp3787 = *(&local3);
frost$core$Weak** $tmp3788 = &$tmp3787->owner;
frost$core$Weak* $tmp3789 = *$tmp3788;
frost$core$Object* $tmp3790 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3789);
frost$core$Bit* $tmp3791 = &((org$frostlang$frostc$ClassDecl*) $tmp3790)->external;
frost$core$Bit $tmp3792 = *$tmp3791;
bool $tmp3793 = $tmp3792.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3790);
if ($tmp3793) goto block10; else goto block11;
block10:;
// line 1031
org$frostlang$frostc$MethodDecl* $tmp3794 = *(&local3);
org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, $tmp3794);
goto block11;
block11:;
// line 1033
org$frostlang$frostc$MethodDecl* $tmp3795 = *(&local3);
frost$core$String* $tmp3796 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, $tmp3795);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3796));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3796));
org$frostlang$frostc$MethodDecl* $tmp3797 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3797));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
return $tmp3796;
block9:;
frost$core$Int64 $tmp3798 = (frost$core$Int64) {4};
frost$core$Bit $tmp3799 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3743, $tmp3798);
bool $tmp3800 = $tmp3799.value;
if ($tmp3800) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Type** $tmp3801 = (org$frostlang$frostc$Type**) (param1->$data + 0);
org$frostlang$frostc$Type* $tmp3802 = *$tmp3801;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3802));
org$frostlang$frostc$Type* $tmp3803 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3803));
*(&local4) = $tmp3802;
// line 1036
org$frostlang$frostc$Type* $tmp3804 = *(&local4);
frost$core$String* $tmp3805 = org$frostlang$frostc$CCodeGenerator$getNullReference$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp3804);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3805));
org$frostlang$frostc$Type* $tmp3806 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3806));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp3805;
block13:;
frost$core$Int64 $tmp3807 = (frost$core$Int64) {5};
frost$core$Bit $tmp3808 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3743, $tmp3807);
bool $tmp3809 = $tmp3808.value;
if ($tmp3809) goto block14; else goto block15;
block14:;
frost$core$Int64* $tmp3810 = (frost$core$Int64*) (param1->$data + 0);
frost$core$Int64 $tmp3811 = *$tmp3810;
*(&local5) = $tmp3811;
org$frostlang$frostc$Type** $tmp3812 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3813 = *$tmp3812;
// line 1039
frost$core$Int64 $tmp3814 = *(&local5);
frost$core$Int64$wrapper* $tmp3815;
$tmp3815 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3815->value = $tmp3814;
frost$core$String* $tmp3816 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3817, ((frost$core$Object*) $tmp3815));
frost$core$String* $tmp3818 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3816, &$s3819);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3818));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3818));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3815));
return $tmp3818;
block15:;
frost$core$Int64 $tmp3820 = (frost$core$Int64) {6};
frost$core$Bit $tmp3821 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3743, $tmp3820);
bool $tmp3822 = $tmp3821.value;
if ($tmp3822) goto block16; else goto block17;
block16:;
frost$core$Real64* $tmp3823 = (frost$core$Real64*) (param1->$data + 0);
frost$core$Real64 $tmp3824 = *$tmp3823;
*(&local6) = $tmp3824;
org$frostlang$frostc$Type** $tmp3825 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3826 = *$tmp3825;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3826));
org$frostlang$frostc$Type* $tmp3827 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3827));
*(&local7) = $tmp3826;
// line 1042
org$frostlang$frostc$Type* $tmp3828 = *(&local7);
frost$core$Real64 $tmp3829 = *(&local6);
frost$core$String* $tmp3830 = org$frostlang$frostc$CCodeGenerator$getRealReference$org$frostlang$frostc$Type$frost$core$Real64$R$frost$core$String(param0, $tmp3828, $tmp3829);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3830));
org$frostlang$frostc$Type* $tmp3831 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3831));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return $tmp3830;
block17:;
frost$core$Int64 $tmp3832 = (frost$core$Int64) {7};
frost$core$Bit $tmp3833 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3743, $tmp3832);
bool $tmp3834 = $tmp3833.value;
if ($tmp3834) goto block18; else goto block19;
block18:;
org$frostlang$frostc$IR$Statement$ID* $tmp3835 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp3836 = *$tmp3835;
*(&local8) = $tmp3836;
org$frostlang$frostc$Type** $tmp3837 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3838 = *$tmp3837;
// line 1045
frost$collections$HashMap** $tmp3839 = &param0->refs;
frost$collections$HashMap* $tmp3840 = *$tmp3839;
org$frostlang$frostc$IR$Statement$ID $tmp3841 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3842;
$tmp3842 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3842->value = $tmp3841;
frost$core$Object* $tmp3843 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp3840, ((frost$collections$Key*) $tmp3842));
frost$core$Bit $tmp3844 = frost$core$Bit$init$builtin_bit(((frost$core$String*) $tmp3843) != NULL);
bool $tmp3845 = $tmp3844.value;
if ($tmp3845) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp3846 = (frost$core$Int64) {1045};
org$frostlang$frostc$IR$Statement$ID $tmp3847 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3848;
$tmp3848 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3848->value = $tmp3847;
frost$core$String* $tmp3849 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3850, ((frost$core$Object*) $tmp3848));
frost$core$String* $tmp3851 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3849, &$s3852);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3853, $tmp3846, $tmp3851);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3849));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3848));
abort(); // unreachable
block20:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3843);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp3842)));
// line 1046
frost$collections$HashMap** $tmp3854 = &param0->refs;
frost$collections$HashMap* $tmp3855 = *$tmp3854;
org$frostlang$frostc$IR$Statement$ID $tmp3856 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3857;
$tmp3857 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3857->value = $tmp3856;
frost$core$Object* $tmp3858 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp3855, ((frost$collections$Key*) $tmp3857));
frost$core$Bit $tmp3859 = frost$core$Bit$init$builtin_bit(((frost$core$String*) $tmp3858) == NULL);
bool $tmp3860 = $tmp3859.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3858);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp3857)));
if ($tmp3860) goto block22; else goto block23;
block22:;
// line 1047
org$frostlang$frostc$IR$Statement$ID $tmp3861 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3862;
$tmp3862 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3862->value = $tmp3861;
frost$core$String* $tmp3863 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3864, ((frost$core$Object*) $tmp3862));
frost$core$String* $tmp3865 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3863, &$s3866);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3865));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3865));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3862));
return $tmp3865;
block23:;
// line 1049
frost$collections$HashMap** $tmp3867 = &param0->refs;
frost$collections$HashMap* $tmp3868 = *$tmp3867;
org$frostlang$frostc$IR$Statement$ID $tmp3869 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3870;
$tmp3870 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3870->value = $tmp3869;
frost$core$Object* $tmp3871 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp3868, ((frost$collections$Key*) $tmp3870));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp3871)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3871);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp3870)));
return ((frost$core$String*) $tmp3871);
block19:;
frost$core$Int64 $tmp3872 = (frost$core$Int64) {8};
frost$core$Bit $tmp3873 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3743, $tmp3872);
bool $tmp3874 = $tmp3873.value;
if ($tmp3874) goto block24; else goto block25;
block24:;
frost$core$String** $tmp3875 = (frost$core$String**) (param1->$data + 0);
frost$core$String* $tmp3876 = *$tmp3875;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3876));
frost$core$String* $tmp3877 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3877));
*(&local9) = $tmp3876;
// line 1052
frost$core$String* $tmp3878 = *(&local9);
frost$core$String* $tmp3879 = org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(param0, $tmp3878);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3879));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3879));
frost$core$String* $tmp3880 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3880));
*(&local9) = ((frost$core$String*) NULL);
return $tmp3879;
block25:;
// line 1055
frost$core$Int64 $tmp3881 = (frost$core$Int64) {1055};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3882, $tmp3881);
abort(); // unreachable
block1:;
goto block26;
block26:;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$getChoiceFieldOffset$org$frostlang$frostc$ChoiceCase$frost$core$Int64$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ChoiceCase* param1, frost$core$Int64 param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 1061
frost$core$Int64 $tmp3883 = (frost$core$Int64) {0};
*(&local0) = $tmp3883;
// line 1062
frost$core$Int64 $tmp3884 = (frost$core$Int64) {0};
frost$core$Bit $tmp3885 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp3886 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp3884, param2, $tmp3885);
frost$core$Int64 $tmp3887 = $tmp3886.min;
*(&local1) = $tmp3887;
frost$core$Int64 $tmp3888 = $tmp3886.max;
frost$core$Bit $tmp3889 = $tmp3886.inclusive;
bool $tmp3890 = $tmp3889.value;
frost$core$Int64 $tmp3891 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp3892 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3891);
if ($tmp3890) goto block4; else goto block5;
block4:;
int64_t $tmp3893 = $tmp3887.value;
int64_t $tmp3894 = $tmp3888.value;
bool $tmp3895 = $tmp3893 <= $tmp3894;
frost$core$Bit $tmp3896 = (frost$core$Bit) {$tmp3895};
bool $tmp3897 = $tmp3896.value;
if ($tmp3897) goto block1; else goto block2;
block5:;
int64_t $tmp3898 = $tmp3887.value;
int64_t $tmp3899 = $tmp3888.value;
bool $tmp3900 = $tmp3898 < $tmp3899;
frost$core$Bit $tmp3901 = (frost$core$Bit) {$tmp3900};
bool $tmp3902 = $tmp3901.value;
if ($tmp3902) goto block1; else goto block2;
block1:;
// line 1064
frost$core$Int64 $tmp3903 = *(&local0);
frost$collections$Array** $tmp3904 = &param1->fields;
frost$collections$Array* $tmp3905 = *$tmp3904;
frost$core$Int64 $tmp3906 = *(&local1);
frost$core$Object* $tmp3907 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3905, $tmp3906);
frost$core$Int64 $tmp3908 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, ((org$frostlang$frostc$Type*) $tmp3907));
int64_t $tmp3909 = $tmp3903.value;
int64_t $tmp3910 = $tmp3908.value;
int64_t $tmp3911 = $tmp3909 + $tmp3910;
frost$core$Int64 $tmp3912 = (frost$core$Int64) {$tmp3911};
*(&local0) = $tmp3912;
frost$core$Frost$unref$frost$core$Object$Q($tmp3907);
goto block3;
block3:;
frost$core$Int64 $tmp3913 = *(&local1);
int64_t $tmp3914 = $tmp3888.value;
int64_t $tmp3915 = $tmp3913.value;
int64_t $tmp3916 = $tmp3914 - $tmp3915;
frost$core$Int64 $tmp3917 = (frost$core$Int64) {$tmp3916};
frost$core$UInt64 $tmp3918 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3917);
if ($tmp3890) goto block7; else goto block8;
block7:;
uint64_t $tmp3919 = $tmp3918.value;
uint64_t $tmp3920 = $tmp3892.value;
bool $tmp3921 = $tmp3919 >= $tmp3920;
frost$core$Bit $tmp3922 = (frost$core$Bit) {$tmp3921};
bool $tmp3923 = $tmp3922.value;
if ($tmp3923) goto block6; else goto block2;
block8:;
uint64_t $tmp3924 = $tmp3918.value;
uint64_t $tmp3925 = $tmp3892.value;
bool $tmp3926 = $tmp3924 > $tmp3925;
frost$core$Bit $tmp3927 = (frost$core$Bit) {$tmp3926};
bool $tmp3928 = $tmp3927.value;
if ($tmp3928) goto block6; else goto block2;
block6:;
int64_t $tmp3929 = $tmp3913.value;
int64_t $tmp3930 = $tmp3891.value;
int64_t $tmp3931 = $tmp3929 + $tmp3930;
frost$core$Int64 $tmp3932 = (frost$core$Int64) {$tmp3931};
*(&local1) = $tmp3932;
goto block1;
block2:;
// line 1066
frost$core$Int64 $tmp3933 = *(&local0);
return $tmp3933;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
// line 1070
frost$core$Weak** $tmp3934 = &param1->owner;
frost$core$Weak* $tmp3935 = *$tmp3934;
frost$core$Object* $tmp3936 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3935);
org$frostlang$frostc$Type** $tmp3937 = &((org$frostlang$frostc$ClassDecl*) $tmp3936)->type;
org$frostlang$frostc$Type* $tmp3938 = *$tmp3937;
frost$core$String* $tmp3939 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp3938);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3939));
frost$core$String* $tmp3940 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3940));
*(&local0) = $tmp3939;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3939));
frost$core$Frost$unref$frost$core$Object$Q($tmp3936);
// line 1071
org$frostlang$frostc$MethodDecl$Kind* $tmp3941 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3942 = *$tmp3941;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3943;
$tmp3943 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3943->value = $tmp3942;
frost$core$Int64 $tmp3944 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp3945 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp3944);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3946;
$tmp3946 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3946->value = $tmp3945;
ITable* $tmp3947 = ((frost$core$Equatable*) $tmp3943)->$class->itable;
while ($tmp3947->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3947 = $tmp3947->next;
}
$fn3949 $tmp3948 = $tmp3947->methods[0];
frost$core$Bit $tmp3950 = $tmp3948(((frost$core$Equatable*) $tmp3943), ((frost$core$Equatable*) $tmp3946));
bool $tmp3951 = $tmp3950.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3946)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3943)));
if ($tmp3951) goto block3; else goto block2;
block3:;
frost$core$String* $tmp3952 = *(&local0);
frost$core$Bit $tmp3953 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp3952, &$s3954);
frost$core$Bit $tmp3955 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3953);
bool $tmp3956 = $tmp3955.value;
if ($tmp3956) goto block1; else goto block2;
block1:;
// line 1072
frost$core$String* $tmp3957 = *(&local0);
frost$core$String* $tmp3958 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3957, &$s3959);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3958));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3958));
frost$core$String* $tmp3960 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3960));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3958;
block2:;
// line 1074
frost$core$String* $tmp3961 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3961));
frost$core$String* $tmp3962 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3962));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3961;

}
void org$frostlang$frostc$CCodeGenerator$writeIsNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1078
frost$core$String* $tmp3963 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3963));
frost$core$String* $tmp3964 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3964));
*(&local0) = $tmp3963;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3963));
// line 1079
frost$core$Weak** $tmp3965 = &param0->compiler;
frost$core$Weak* $tmp3966 = *$tmp3965;
frost$core$Object* $tmp3967 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3966);
$fn3969 $tmp3968 = ($fn3969) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3970 = $tmp3968(param2);
org$frostlang$frostc$ClassDecl* $tmp3971 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3967), $tmp3970);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3971));
org$frostlang$frostc$ClassDecl* $tmp3972 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3972));
*(&local1) = $tmp3971;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3971));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3970));
frost$core$Frost$unref$frost$core$Object$Q($tmp3967);
// line 1080
org$frostlang$frostc$ClassDecl* $tmp3973 = *(&local1);
frost$core$Bit $tmp3974 = frost$core$Bit$init$builtin_bit($tmp3973 != NULL);
bool $tmp3975 = $tmp3974.value;
if ($tmp3975) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp3976 = (frost$core$Int64) {1080};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3977, $tmp3976);
abort(); // unreachable
block1:;
// line 1081
*(&local2) = ((frost$core$String*) NULL);
// line 1082
frost$core$Weak** $tmp3978 = &param0->compiler;
frost$core$Weak* $tmp3979 = *$tmp3978;
frost$core$Object* $tmp3980 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3979);
org$frostlang$frostc$ClassDecl* $tmp3981 = *(&local1);
frost$core$Bit $tmp3982 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3980), $tmp3981);
bool $tmp3983 = $tmp3982.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3980);
if ($tmp3983) goto block3; else goto block5;
block3:;
// line 1083
$fn3985 $tmp3984 = ($fn3985) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3986 = $tmp3984(param2);
org$frostlang$frostc$Type$Kind* $tmp3987 = &$tmp3986->typeKind;
org$frostlang$frostc$Type$Kind $tmp3988 = *$tmp3987;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3989;
$tmp3989 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3989->value = $tmp3988;
frost$core$Int64 $tmp3990 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3991 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3990);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3992;
$tmp3992 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3992->value = $tmp3991;
ITable* $tmp3993 = ((frost$core$Equatable*) $tmp3989)->$class->itable;
while ($tmp3993->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3993 = $tmp3993->next;
}
$fn3995 $tmp3994 = $tmp3993->methods[1];
frost$core$Bit $tmp3996 = $tmp3994(((frost$core$Equatable*) $tmp3989), ((frost$core$Equatable*) $tmp3992));
bool $tmp3997 = $tmp3996.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3992)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3989)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3986));
if ($tmp3997) goto block6; else goto block8;
block6:;
// line 1084
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3998));
frost$core$String* $tmp3999 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3999));
*(&local2) = &$s4000;
goto block7;
block8:;
// line 1
// line 1087
frost$core$String* $tmp4001 = *(&local0);
frost$core$String* $tmp4002 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4003, $tmp4001);
frost$core$String* $tmp4004 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4002, &$s4005);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4004));
frost$core$String* $tmp4006 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4006));
*(&local2) = $tmp4004;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4004));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4002));
goto block7;
block7:;
goto block4;
block5:;
// line 1
// line 1091
frost$core$String* $tmp4007 = *(&local0);
frost$core$String* $tmp4008 = frost$core$String$get_asString$R$frost$core$String($tmp4007);
frost$core$String* $tmp4009 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4008, &$s4010);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4009));
frost$core$String* $tmp4011 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4011));
*(&local2) = $tmp4009;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4008));
goto block4;
block4:;
// line 1093
frost$collections$HashMap** $tmp4012 = &param0->refs;
frost$collections$HashMap* $tmp4013 = *$tmp4012;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4014;
$tmp4014 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4014->value = param1;
frost$core$String* $tmp4015 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4013, ((frost$collections$Key*) $tmp4014), ((frost$core$Object*) $tmp4015));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4014)));
frost$core$String* $tmp4016 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4016));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp4017 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4017));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp4018 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4018));
*(&local0) = ((frost$core$String*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeIsNonNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1097
frost$core$String* $tmp4019 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4019));
frost$core$String* $tmp4020 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4020));
*(&local0) = $tmp4019;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4019));
// line 1098
frost$core$Weak** $tmp4021 = &param0->compiler;
frost$core$Weak* $tmp4022 = *$tmp4021;
frost$core$Object* $tmp4023 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4022);
$fn4025 $tmp4024 = ($fn4025) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4026 = $tmp4024(param2);
org$frostlang$frostc$ClassDecl* $tmp4027 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp4023), $tmp4026);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4027));
org$frostlang$frostc$ClassDecl* $tmp4028 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4028));
*(&local1) = $tmp4027;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4027));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4026));
frost$core$Frost$unref$frost$core$Object$Q($tmp4023);
// line 1099
org$frostlang$frostc$ClassDecl* $tmp4029 = *(&local1);
frost$core$Bit $tmp4030 = frost$core$Bit$init$builtin_bit($tmp4029 != NULL);
bool $tmp4031 = $tmp4030.value;
if ($tmp4031) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp4032 = (frost$core$Int64) {1099};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4033, $tmp4032);
abort(); // unreachable
block1:;
// line 1100
*(&local2) = ((frost$core$String*) NULL);
// line 1101
frost$core$Weak** $tmp4034 = &param0->compiler;
frost$core$Weak* $tmp4035 = *$tmp4034;
frost$core$Object* $tmp4036 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4035);
org$frostlang$frostc$ClassDecl* $tmp4037 = *(&local1);
frost$core$Bit $tmp4038 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4036), $tmp4037);
bool $tmp4039 = $tmp4038.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp4036);
if ($tmp4039) goto block3; else goto block5;
block3:;
// line 1102
$fn4041 $tmp4040 = ($fn4041) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4042 = $tmp4040(param2);
org$frostlang$frostc$Type$Kind* $tmp4043 = &$tmp4042->typeKind;
org$frostlang$frostc$Type$Kind $tmp4044 = *$tmp4043;
org$frostlang$frostc$Type$Kind$wrapper* $tmp4045;
$tmp4045 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4045->value = $tmp4044;
frost$core$Int64 $tmp4046 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp4047 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp4046);
org$frostlang$frostc$Type$Kind$wrapper* $tmp4048;
$tmp4048 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4048->value = $tmp4047;
ITable* $tmp4049 = ((frost$core$Equatable*) $tmp4045)->$class->itable;
while ($tmp4049->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4049 = $tmp4049->next;
}
$fn4051 $tmp4050 = $tmp4049->methods[1];
frost$core$Bit $tmp4052 = $tmp4050(((frost$core$Equatable*) $tmp4045), ((frost$core$Equatable*) $tmp4048));
bool $tmp4053 = $tmp4052.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4048)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4045)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4042));
if ($tmp4053) goto block6; else goto block8;
block6:;
// line 1103
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4054));
frost$core$String* $tmp4055 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4055));
*(&local2) = &$s4056;
goto block7;
block8:;
// line 1
// line 1106
frost$core$String* $tmp4057 = *(&local0);
frost$core$String* $tmp4058 = frost$core$String$get_asString$R$frost$core$String($tmp4057);
frost$core$String* $tmp4059 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4058, &$s4060);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4059));
frost$core$String* $tmp4061 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4061));
*(&local2) = $tmp4059;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4058));
goto block7;
block7:;
goto block4;
block5:;
// line 1
// line 1110
frost$core$String* $tmp4062 = *(&local0);
frost$core$String* $tmp4063 = frost$core$String$get_asString$R$frost$core$String($tmp4062);
frost$core$String* $tmp4064 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4063, &$s4065);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4064));
frost$core$String* $tmp4066 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4066));
*(&local2) = $tmp4064;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4063));
goto block4;
block4:;
// line 1112
frost$collections$HashMap** $tmp4067 = &param0->refs;
frost$collections$HashMap* $tmp4068 = *$tmp4067;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4069;
$tmp4069 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4069->value = param1;
frost$core$String* $tmp4070 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4068, ((frost$collections$Key*) $tmp4069), ((frost$core$Object*) $tmp4070));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4069)));
frost$core$String* $tmp4071 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4071));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp4072 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4072));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp4073 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4073));
*(&local0) = ((frost$core$String*) NULL);
return;

}
frost$core$Bit org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1) {

// line 1116
frost$core$Int64* $tmp4074 = &param1->$rawValue;
frost$core$Int64 $tmp4075 = *$tmp4074;
frost$core$Int64 $tmp4076 = (frost$core$Int64) {4};
frost$core$Bit $tmp4077 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4075, $tmp4076);
bool $tmp4078 = $tmp4077.value;
if ($tmp4078) goto block2; else goto block1;
block2:;
// line 1118
frost$core$Bit $tmp4079 = frost$core$Bit$init$builtin_bit(true);
return $tmp4079;
block1:;
// line 1121
frost$core$Bit $tmp4080 = frost$core$Bit$init$builtin_bit(false);
return $tmp4080;

}
void org$frostlang$frostc$CCodeGenerator$writeBinary$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$expression$Binary$Operator param3, org$frostlang$frostc$IR$Value* param4, org$frostlang$frostc$Type* param5) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$Error* local4 = NULL;
// line 1126
frost$core$String* $tmp4081 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4081));
frost$core$String* $tmp4082 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4082));
*(&local0) = $tmp4081;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4081));
// line 1127
frost$core$String* $tmp4083 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param4);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4083));
frost$core$String* $tmp4084 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4084));
*(&local1) = $tmp4083;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4083));
// line 1128
$fn4086 $tmp4085 = ($fn4086) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4087 = $tmp4085(param2);
frost$core$Bit $tmp4088 = org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit($tmp4087);
bool $tmp4089 = $tmp4088.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4087));
if ($tmp4089) goto block1; else goto block2;
block1:;
// line 1129
frost$core$Int64 $tmp4090 = param3.$rawValue;
frost$core$Int64 $tmp4091 = (frost$core$Int64) {21};
frost$core$Bit $tmp4092 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4090, $tmp4091);
bool $tmp4093 = $tmp4092.value;
if ($tmp4093) goto block4; else goto block5;
block4:;
// line 1131
frost$core$Bit $tmp4094 = org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, param2);
bool $tmp4095 = $tmp4094.value;
if ($tmp4095) goto block6; else goto block7;
block6:;
// line 1132
org$frostlang$frostc$CCodeGenerator$writeIsNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, param4);
// line 1133
frost$core$String* $tmp4096 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4096));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp4097 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4097));
*(&local0) = ((frost$core$String*) NULL);
return;
block7:;
// line 1135
frost$core$Bit $tmp4098 = org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, param4);
bool $tmp4099 = $tmp4098.value;
if ($tmp4099) goto block8; else goto block9;
block8:;
// line 1136
org$frostlang$frostc$CCodeGenerator$writeIsNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, param2);
// line 1137
frost$core$String* $tmp4100 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4100));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp4101 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4101));
*(&local0) = ((frost$core$String*) NULL);
return;
block9:;
goto block3;
block5:;
frost$core$Int64 $tmp4102 = (frost$core$Int64) {22};
frost$core$Bit $tmp4103 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4090, $tmp4102);
bool $tmp4104 = $tmp4103.value;
if ($tmp4104) goto block10; else goto block3;
block10:;
// line 1141
frost$core$Bit $tmp4105 = org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, param2);
bool $tmp4106 = $tmp4105.value;
if ($tmp4106) goto block11; else goto block12;
block11:;
// line 1142
org$frostlang$frostc$CCodeGenerator$writeIsNonNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, param4);
// line 1143
frost$core$String* $tmp4107 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4107));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp4108 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4108));
*(&local0) = ((frost$core$String*) NULL);
return;
block12:;
// line 1145
frost$core$Bit $tmp4109 = org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, param4);
bool $tmp4110 = $tmp4109.value;
if ($tmp4110) goto block13; else goto block14;
block13:;
// line 1146
org$frostlang$frostc$CCodeGenerator$writeIsNonNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, param2);
// line 1147
frost$core$String* $tmp4111 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4111));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp4112 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4112));
*(&local0) = ((frost$core$String*) NULL);
return;
block14:;
goto block3;
block3:;
goto block2;
block2:;
// line 1152
*(&local2) = ((frost$core$String*) NULL);
// line 1153
frost$core$Int64 $tmp4113 = param3.$rawValue;
frost$core$Int64 $tmp4114 = (frost$core$Int64) {0};
frost$core$Bit $tmp4115 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4113, $tmp4114);
bool $tmp4116 = $tmp4115.value;
if ($tmp4116) goto block16; else goto block17;
block16:;
// line 1155
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4117));
frost$core$String* $tmp4118 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4118));
*(&local2) = &$s4119;
goto block15;
block17:;
frost$core$Int64 $tmp4120 = (frost$core$Int64) {1};
frost$core$Bit $tmp4121 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4113, $tmp4120);
bool $tmp4122 = $tmp4121.value;
if ($tmp4122) goto block18; else goto block19;
block18:;
// line 1158
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4123));
frost$core$String* $tmp4124 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4124));
*(&local2) = &$s4125;
goto block15;
block19:;
frost$core$Int64 $tmp4126 = (frost$core$Int64) {2};
frost$core$Bit $tmp4127 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4113, $tmp4126);
bool $tmp4128 = $tmp4127.value;
if ($tmp4128) goto block20; else goto block21;
block20:;
// line 1161
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4129));
frost$core$String* $tmp4130 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4130));
*(&local2) = &$s4131;
goto block15;
block21:;
frost$core$Int64 $tmp4132 = (frost$core$Int64) {3};
frost$core$Bit $tmp4133 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4113, $tmp4132);
bool $tmp4134 = $tmp4133.value;
if ($tmp4134) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp4135 = (frost$core$Int64) {4};
frost$core$Bit $tmp4136 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4113, $tmp4135);
bool $tmp4137 = $tmp4136.value;
if ($tmp4137) goto block22; else goto block24;
block22:;
// line 1164
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4138));
frost$core$String* $tmp4139 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4139));
*(&local2) = &$s4140;
goto block15;
block24:;
frost$core$Int64 $tmp4141 = (frost$core$Int64) {5};
frost$core$Bit $tmp4142 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4113, $tmp4141);
bool $tmp4143 = $tmp4142.value;
if ($tmp4143) goto block25; else goto block26;
block25:;
// line 1167
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4144));
frost$core$String* $tmp4145 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4145));
*(&local2) = &$s4146;
goto block15;
block26:;
frost$core$Int64 $tmp4147 = (frost$core$Int64) {18};
frost$core$Bit $tmp4148 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4113, $tmp4147);
bool $tmp4149 = $tmp4148.value;
if ($tmp4149) goto block27; else goto block28;
block27:;
// line 1170
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4150));
frost$core$String* $tmp4151 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4151));
*(&local2) = &$s4152;
goto block15;
block28:;
frost$core$Int64 $tmp4153 = (frost$core$Int64) {19};
frost$core$Bit $tmp4154 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4113, $tmp4153);
bool $tmp4155 = $tmp4154.value;
if ($tmp4155) goto block29; else goto block30;
block29:;
// line 1173
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4156));
frost$core$String* $tmp4157 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4157));
*(&local2) = &$s4158;
goto block15;
block30:;
frost$core$Int64 $tmp4159 = (frost$core$Int64) {14};
frost$core$Bit $tmp4160 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4113, $tmp4159);
bool $tmp4161 = $tmp4160.value;
if ($tmp4161) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp4162 = (frost$core$Int64) {15};
frost$core$Bit $tmp4163 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4113, $tmp4162);
bool $tmp4164 = $tmp4163.value;
if ($tmp4164) goto block31; else goto block33;
block31:;
// line 1176
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4165));
frost$core$String* $tmp4166 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4166));
*(&local2) = &$s4167;
goto block15;
block33:;
frost$core$Int64 $tmp4168 = (frost$core$Int64) {12};
frost$core$Bit $tmp4169 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4113, $tmp4168);
bool $tmp4170 = $tmp4169.value;
if ($tmp4170) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp4171 = (frost$core$Int64) {13};
frost$core$Bit $tmp4172 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4113, $tmp4171);
bool $tmp4173 = $tmp4172.value;
if ($tmp4173) goto block34; else goto block36;
block34:;
// line 1179
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4174));
frost$core$String* $tmp4175 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4175));
*(&local2) = &$s4176;
goto block15;
block36:;
frost$core$Int64 $tmp4177 = (frost$core$Int64) {16};
frost$core$Bit $tmp4178 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4113, $tmp4177);
bool $tmp4179 = $tmp4178.value;
if ($tmp4179) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp4180 = (frost$core$Int64) {17};
frost$core$Bit $tmp4181 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4113, $tmp4180);
bool $tmp4182 = $tmp4181.value;
if ($tmp4182) goto block37; else goto block39;
block37:;
// line 1182
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4183));
frost$core$String* $tmp4184 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4184));
*(&local2) = &$s4185;
goto block15;
block39:;
frost$core$Int64 $tmp4186 = (frost$core$Int64) {6};
frost$core$Bit $tmp4187 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4113, $tmp4186);
bool $tmp4188 = $tmp4187.value;
if ($tmp4188) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp4189 = (frost$core$Int64) {21};
frost$core$Bit $tmp4190 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4113, $tmp4189);
bool $tmp4191 = $tmp4190.value;
if ($tmp4191) goto block40; else goto block42;
block40:;
// line 1185
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4192));
frost$core$String* $tmp4193 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4193));
*(&local2) = &$s4194;
goto block15;
block42:;
frost$core$Int64 $tmp4195 = (frost$core$Int64) {7};
frost$core$Bit $tmp4196 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4113, $tmp4195);
bool $tmp4197 = $tmp4196.value;
if ($tmp4197) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp4198 = (frost$core$Int64) {22};
frost$core$Bit $tmp4199 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4113, $tmp4198);
bool $tmp4200 = $tmp4199.value;
if ($tmp4200) goto block43; else goto block45;
block43:;
// line 1188
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4201));
frost$core$String* $tmp4202 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4202));
*(&local2) = &$s4203;
goto block15;
block45:;
frost$core$Int64 $tmp4204 = (frost$core$Int64) {8};
frost$core$Bit $tmp4205 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4113, $tmp4204);
bool $tmp4206 = $tmp4205.value;
if ($tmp4206) goto block46; else goto block47;
block46:;
// line 1191
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4207));
frost$core$String* $tmp4208 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4208));
*(&local2) = &$s4209;
goto block15;
block47:;
frost$core$Int64 $tmp4210 = (frost$core$Int64) {9};
frost$core$Bit $tmp4211 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4113, $tmp4210);
bool $tmp4212 = $tmp4211.value;
if ($tmp4212) goto block48; else goto block49;
block48:;
// line 1194
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4213));
frost$core$String* $tmp4214 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4214));
*(&local2) = &$s4215;
goto block15;
block49:;
frost$core$Int64 $tmp4216 = (frost$core$Int64) {10};
frost$core$Bit $tmp4217 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4113, $tmp4216);
bool $tmp4218 = $tmp4217.value;
if ($tmp4218) goto block50; else goto block51;
block50:;
// line 1197
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4219));
frost$core$String* $tmp4220 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4220));
*(&local2) = &$s4221;
goto block15;
block51:;
frost$core$Int64 $tmp4222 = (frost$core$Int64) {11};
frost$core$Bit $tmp4223 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4113, $tmp4222);
bool $tmp4224 = $tmp4223.value;
if ($tmp4224) goto block52; else goto block53;
block52:;
// line 1200
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4225));
frost$core$String* $tmp4226 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4226));
*(&local2) = &$s4227;
goto block15;
block53:;
// line 1203
frost$core$Int64 $tmp4228 = (frost$core$Int64) {1203};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4229, $tmp4228);
abort(); // unreachable
block15:;
// line 1206
frost$core$String* $tmp4230 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4230));
frost$core$String* $tmp4231 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4231));
*(&local3) = $tmp4230;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4230));
// line 1207
*(&local4) = ((frost$core$Error*) NULL);
// line 1208
frost$io$IndentedOutputStream** $tmp4232 = &param0->out;
frost$io$IndentedOutputStream* $tmp4233 = *$tmp4232;
frost$core$String* $tmp4234 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param5);
frost$core$String* $tmp4235 = frost$core$String$get_asString$R$frost$core$String($tmp4234);
frost$core$String* $tmp4236 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4235, &$s4237);
frost$core$String* $tmp4238 = *(&local3);
frost$core$String* $tmp4239 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4236, $tmp4238);
frost$core$String* $tmp4240 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4239, &$s4241);
frost$core$String* $tmp4242 = *(&local0);
frost$core$String* $tmp4243 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4240, $tmp4242);
frost$core$String* $tmp4244 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4243, &$s4245);
frost$core$String* $tmp4246 = *(&local2);
frost$core$String* $tmp4247 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4244, $tmp4246);
frost$core$String* $tmp4248 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4247, &$s4249);
frost$core$String* $tmp4250 = *(&local1);
frost$core$String* $tmp4251 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4248, $tmp4250);
frost$core$String* $tmp4252 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4251, &$s4253);
$fn4255 $tmp4254 = ($fn4255) ((frost$io$OutputStream*) $tmp4233)->$class->vtable[19];
frost$core$Error* $tmp4256 = $tmp4254(((frost$io$OutputStream*) $tmp4233), $tmp4252);
if ($tmp4256 == NULL) goto block56; else goto block57;
block57:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4256));
*(&local4) = $tmp4256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4234));
goto block54;
block56:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4234));
goto block55;
block54:;
// line 1211
frost$core$Int64 $tmp4257 = (frost$core$Int64) {1211};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4258, $tmp4257);
abort(); // unreachable
block55:;
frost$core$Error* $tmp4259 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4259));
*(&local4) = ((frost$core$Error*) NULL);
// line 1213
frost$collections$HashMap** $tmp4260 = &param0->refs;
frost$collections$HashMap* $tmp4261 = *$tmp4260;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4262;
$tmp4262 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4262->value = param1;
frost$core$String* $tmp4263 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4261, ((frost$collections$Key*) $tmp4262), ((frost$core$Object*) $tmp4263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4262)));
frost$core$String* $tmp4264 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4264));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4265 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4265));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4266 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4266));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp4267 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4267));
*(&local0) = ((frost$core$String*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeBranch$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Block$ID param1) {

frost$core$Error* local0 = NULL;
// line 1217
*(&local0) = ((frost$core$Error*) NULL);
// line 1218
frost$io$IndentedOutputStream** $tmp4268 = &param0->out;
frost$io$IndentedOutputStream* $tmp4269 = *$tmp4268;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp4270;
$tmp4270 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp4270->value = param1;
frost$core$String* $tmp4271 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s4272, ((frost$core$Object*) $tmp4270));
frost$core$String* $tmp4273 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4271, &$s4274);
$fn4276 $tmp4275 = ($fn4276) ((frost$io$OutputStream*) $tmp4269)->$class->vtable[19];
frost$core$Error* $tmp4277 = $tmp4275(((frost$io$OutputStream*) $tmp4269), $tmp4273);
if ($tmp4277 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4277));
*(&local0) = $tmp4277;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4270));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4270));
goto block2;
block1:;
// line 1221
frost$core$Int64 $tmp4278 = (frost$core$Int64) {1221};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4279, $tmp4278);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4280 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4280));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeCast$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$Type* param3) {

// line 1226
frost$collections$HashMap** $tmp4281 = &param0->refs;
frost$collections$HashMap* $tmp4282 = *$tmp4281;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4283;
$tmp4283 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4283->value = param1;
frost$core$String* $tmp4284 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
$fn4286 $tmp4285 = ($fn4286) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4287 = $tmp4285(param2);
frost$core$String* $tmp4288 = org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4284, $tmp4287, param3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4282, ((frost$collections$Key*) $tmp4283), ((frost$core$Object*) $tmp4288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4283)));
return;

}
void org$frostlang$frostc$CCodeGenerator$writeConditionalBranch$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1, org$frostlang$frostc$IR$Block$ID param2, org$frostlang$frostc$IR$Block$ID param3) {

frost$core$Error* local0 = NULL;
// line 1230
*(&local0) = ((frost$core$Error*) NULL);
// line 1231
frost$io$IndentedOutputStream** $tmp4289 = &param0->out;
frost$io$IndentedOutputStream* $tmp4290 = *$tmp4289;
frost$core$String* $tmp4291 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
frost$core$String* $tmp4292 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4293, $tmp4291);
frost$core$String* $tmp4294 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4292, &$s4295);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp4296;
$tmp4296 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp4296->value = param2;
frost$core$String* $tmp4297 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp4294, ((frost$core$Object*) $tmp4296));
frost$core$String* $tmp4298 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4297, &$s4299);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp4300;
$tmp4300 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp4300->value = param3;
frost$core$String* $tmp4301 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp4298, ((frost$core$Object*) $tmp4300));
frost$core$String* $tmp4302 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4301, &$s4303);
$fn4305 $tmp4304 = ($fn4305) ((frost$io$OutputStream*) $tmp4290)->$class->vtable[19];
frost$core$Error* $tmp4306 = $tmp4304(((frost$io$OutputStream*) $tmp4290), $tmp4302);
if ($tmp4306 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4306));
*(&local0) = $tmp4306;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4291));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4291));
goto block2;
block1:;
// line 1234
frost$core$Int64 $tmp4307 = (frost$core$Int64) {1234};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4308, $tmp4307);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4309 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4309));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeConstruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$ClassDecl* param2) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
// line 1239
*(&local0) = ((frost$core$Error*) NULL);
// line 1240
frost$core$Weak** $tmp4310 = &param0->compiler;
frost$core$Weak* $tmp4311 = *$tmp4310;
frost$core$Object* $tmp4312 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4311);
frost$core$Bit $tmp4313 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4312), param2);
frost$core$Bit $tmp4314 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp4313);
bool $tmp4315 = $tmp4314.value;
if ($tmp4315) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp4316 = (frost$core$Int64) {1240};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4317, $tmp4316);
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q($tmp4312);
// line 1241
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4318 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, param2);
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4318));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4319 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4319));
*(&local1) = $tmp4318;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4318));
// line 1242
*(&local2) = ((frost$core$String*) NULL);
// line 1243
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4320 = *(&local1);
frost$core$String** $tmp4321 = &$tmp4320->type;
frost$core$String* $tmp4322 = *$tmp4321;
ITable* $tmp4324 = ((frost$core$Equatable*) $tmp4322)->$class->itable;
while ($tmp4324->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4324 = $tmp4324->next;
}
$fn4326 $tmp4325 = $tmp4324->methods[1];
frost$core$Bit $tmp4327 = $tmp4325(((frost$core$Equatable*) $tmp4322), ((frost$core$Equatable*) &$s4323));
bool $tmp4328 = $tmp4327.value;
if ($tmp4328) goto block5; else goto block7;
block5:;
// line 1244
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4329 = *(&local1);
frost$core$String** $tmp4330 = &$tmp4329->name;
frost$core$String* $tmp4331 = *$tmp4330;
frost$core$String* $tmp4332 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4333, $tmp4331);
frost$core$String* $tmp4334 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4332, &$s4335);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4334));
frost$core$String* $tmp4336 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4336));
*(&local2) = $tmp4334;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4332));
goto block6;
block7:;
// line 1
// line 1247
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4337 = *(&local1);
frost$core$String** $tmp4338 = &$tmp4337->name;
frost$core$String* $tmp4339 = *$tmp4338;
frost$core$String* $tmp4340 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4341, $tmp4339);
frost$core$String* $tmp4342 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4340, &$s4343);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4342));
frost$core$String* $tmp4344 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4344));
*(&local2) = $tmp4342;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4340));
goto block6;
block6:;
// line 1249
frost$core$String* $tmp4345 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4345));
frost$core$String* $tmp4346 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4346));
*(&local3) = $tmp4345;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4345));
// line 1250
org$frostlang$frostc$Type** $tmp4347 = &param2->type;
org$frostlang$frostc$Type* $tmp4348 = *$tmp4347;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4348));
org$frostlang$frostc$Type* $tmp4349 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4349));
*(&local4) = $tmp4348;
// line 1251
frost$io$IndentedOutputStream** $tmp4350 = &param0->out;
frost$io$IndentedOutputStream* $tmp4351 = *$tmp4350;
org$frostlang$frostc$Type* $tmp4352 = *(&local4);
frost$core$String* $tmp4353 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4352);
frost$core$String* $tmp4354 = frost$core$String$get_asString$R$frost$core$String($tmp4353);
frost$core$String* $tmp4355 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4354, &$s4356);
frost$core$String* $tmp4357 = *(&local3);
frost$core$String* $tmp4358 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4355, $tmp4357);
frost$core$String* $tmp4359 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4358, &$s4360);
org$frostlang$frostc$Type* $tmp4361 = *(&local4);
frost$core$String* $tmp4362 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4361);
frost$core$String* $tmp4363 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4359, $tmp4362);
frost$core$String* $tmp4364 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4363, &$s4365);
org$frostlang$frostc$Type* $tmp4366 = *(&local4);
frost$core$Int64 $tmp4367 = org$frostlang$frostc$CCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp4366);
frost$core$String* $tmp4368 = frost$core$Int64$get_asString$R$frost$core$String($tmp4367);
frost$core$String* $tmp4369 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4368, &$s4370);
frost$core$String* $tmp4371 = *(&local2);
frost$core$String* $tmp4372 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4369, $tmp4371);
frost$core$String* $tmp4373 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4372, &$s4374);
frost$core$String* $tmp4375 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4364, $tmp4373);
$fn4377 $tmp4376 = ($fn4377) ((frost$io$OutputStream*) $tmp4351)->$class->vtable[19];
frost$core$Error* $tmp4378 = $tmp4376(((frost$io$OutputStream*) $tmp4351), $tmp4375);
if ($tmp4378 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4378));
*(&local0) = $tmp4378;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4362));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4353));
org$frostlang$frostc$Type* $tmp4379 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4379));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4380 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4380));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4381 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4381));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4382 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4382));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4362));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4353));
// line 1253
frost$collections$HashMap** $tmp4383 = &param0->refs;
frost$collections$HashMap* $tmp4384 = *$tmp4383;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4385;
$tmp4385 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4385->value = param1;
frost$core$String* $tmp4386 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4384, ((frost$collections$Key*) $tmp4385), ((frost$core$Object*) $tmp4386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4385)));
org$frostlang$frostc$Type* $tmp4387 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4387));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4388 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4388));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4389 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4389));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4390 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4390));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block2;
block1:;
// line 1256
frost$core$Int64 $tmp4391 = (frost$core$Int64) {1256};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4392, $tmp4391);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4393 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4393));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeCreateStruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$ClassDecl* param2, org$frostlang$frostc$FixedArray* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
// line 1261
*(&local0) = ((frost$core$Error*) NULL);
// line 1262
frost$core$Weak** $tmp4394 = &param0->compiler;
frost$core$Weak* $tmp4395 = *$tmp4394;
frost$core$Object* $tmp4396 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4395);
frost$core$Bit $tmp4397 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4396), param2);
bool $tmp4398 = $tmp4397.value;
if ($tmp4398) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp4399 = (frost$core$Int64) {1262};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4400, $tmp4399);
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q($tmp4396);
// line 1263
frost$core$String* $tmp4401 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4401));
frost$core$String* $tmp4402 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4402));
*(&local1) = $tmp4401;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4401));
// line 1264
org$frostlang$frostc$Type** $tmp4403 = &param2->type;
org$frostlang$frostc$Type* $tmp4404 = *$tmp4403;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4404));
org$frostlang$frostc$Type* $tmp4405 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4405));
*(&local2) = $tmp4404;
// line 1265
frost$io$IndentedOutputStream** $tmp4406 = &param0->out;
frost$io$IndentedOutputStream* $tmp4407 = *$tmp4406;
org$frostlang$frostc$Type* $tmp4408 = *(&local2);
frost$core$String* $tmp4409 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4408);
frost$core$String* $tmp4410 = frost$core$String$get_asString$R$frost$core$String($tmp4409);
frost$core$String* $tmp4411 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4410, &$s4412);
frost$core$String* $tmp4413 = *(&local1);
frost$core$String* $tmp4414 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4411, $tmp4413);
frost$core$String* $tmp4415 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4414, &$s4416);
org$frostlang$frostc$Type* $tmp4417 = *(&local2);
frost$core$String* $tmp4418 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4417);
frost$core$String* $tmp4419 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4415, $tmp4418);
frost$core$String* $tmp4420 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4419, &$s4421);
$fn4423 $tmp4422 = ($fn4423) ((frost$io$OutputStream*) $tmp4407)->$class->vtable[17];
frost$core$Error* $tmp4424 = $tmp4422(((frost$io$OutputStream*) $tmp4407), $tmp4420);
if ($tmp4424 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4424));
*(&local0) = $tmp4424;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4419));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4418));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4409));
org$frostlang$frostc$Type* $tmp4425 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4425));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4426 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4426));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4419));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4418));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4409));
// line 1266
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4427));
frost$core$String* $tmp4428 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4428));
*(&local3) = &$s4429;
// line 1267
ITable* $tmp4430 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp4430->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp4430 = $tmp4430->next;
}
$fn4432 $tmp4431 = $tmp4430->methods[0];
frost$collections$Iterator* $tmp4433 = $tmp4431(((frost$collections$Iterable*) param3));
goto block7;
block7:;
ITable* $tmp4434 = $tmp4433->$class->itable;
while ($tmp4434->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4434 = $tmp4434->next;
}
$fn4436 $tmp4435 = $tmp4434->methods[0];
frost$core$Bit $tmp4437 = $tmp4435($tmp4433);
bool $tmp4438 = $tmp4437.value;
if ($tmp4438) goto block9; else goto block8;
block8:;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
ITable* $tmp4439 = $tmp4433->$class->itable;
while ($tmp4439->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4439 = $tmp4439->next;
}
$fn4441 $tmp4440 = $tmp4439->methods[1];
frost$core$Object* $tmp4442 = $tmp4440($tmp4433);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) $tmp4442)));
org$frostlang$frostc$IR$Value* $tmp4443 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4443));
*(&local4) = ((org$frostlang$frostc$IR$Value*) $tmp4442);
// line 1268
frost$io$IndentedOutputStream** $tmp4444 = &param0->out;
frost$io$IndentedOutputStream* $tmp4445 = *$tmp4444;
frost$core$String* $tmp4446 = *(&local3);
frost$core$String* $tmp4447 = frost$core$String$get_asString$R$frost$core$String($tmp4446);
frost$core$String* $tmp4448 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4447, &$s4449);
org$frostlang$frostc$IR$Value* $tmp4450 = *(&local4);
frost$core$String* $tmp4451 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, $tmp4450);
frost$core$String* $tmp4452 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4448, $tmp4451);
frost$core$String* $tmp4453 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4452, &$s4454);
$fn4456 $tmp4455 = ($fn4456) ((frost$io$OutputStream*) $tmp4445)->$class->vtable[17];
frost$core$Error* $tmp4457 = $tmp4455(((frost$io$OutputStream*) $tmp4445), $tmp4453);
if ($tmp4457 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4457));
*(&local0) = $tmp4457;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4447));
frost$core$Frost$unref$frost$core$Object$Q($tmp4442);
org$frostlang$frostc$IR$Value* $tmp4458 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4458));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4433));
frost$core$String* $tmp4459 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4459));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4460 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4460));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4461 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4461));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4447));
// line 1269
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4462));
frost$core$String* $tmp4463 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4463));
*(&local3) = &$s4464;
frost$core$Frost$unref$frost$core$Object$Q($tmp4442);
org$frostlang$frostc$IR$Value* $tmp4465 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4465));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block7;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4433));
// line 1271
frost$io$IndentedOutputStream** $tmp4466 = &param0->out;
frost$io$IndentedOutputStream* $tmp4467 = *$tmp4466;
$fn4469 $tmp4468 = ($fn4469) ((frost$io$OutputStream*) $tmp4467)->$class->vtable[19];
frost$core$Error* $tmp4470 = $tmp4468(((frost$io$OutputStream*) $tmp4467), &$s4471);
if ($tmp4470 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4470));
*(&local0) = $tmp4470;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4470));
frost$core$String* $tmp4472 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4472));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4473 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4473));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4474 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4474));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4470));
// line 1272
frost$collections$HashMap** $tmp4475 = &param0->refs;
frost$collections$HashMap* $tmp4476 = *$tmp4475;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4477;
$tmp4477 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4477->value = param1;
frost$core$String* $tmp4478 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4476, ((frost$collections$Key*) $tmp4477), ((frost$core$Object*) $tmp4478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4477)));
frost$core$String* $tmp4479 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4479));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4480 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4480));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4481 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4481));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1275
frost$core$Int64 $tmp4482 = (frost$core$Int64) {1275};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4483, $tmp4482);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4484 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4484));
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
// line 1280
*(&local0) = ((frost$core$Error*) NULL);
// line 1281
$fn4486 $tmp4485 = ($fn4486) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4487 = $tmp4485(param2);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4487));
org$frostlang$frostc$Type* $tmp4488 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4488));
*(&local1) = $tmp4487;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4487));
// line 1282
org$frostlang$frostc$Type* $tmp4489 = *(&local1);
frost$core$Bit $tmp4490 = org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit($tmp4489);
bool $tmp4491 = $tmp4490.value;
if ($tmp4491) goto block3; else goto block4;
block3:;
// line 1283
org$frostlang$frostc$Type* $tmp4492 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp4493 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp4492);
frost$core$Int64 $tmp4494 = (frost$core$Int64) {1};
frost$core$Object* $tmp4495 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp4493, $tmp4494);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp4495)));
org$frostlang$frostc$Type* $tmp4496 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4496));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp4495);
frost$core$Frost$unref$frost$core$Object$Q($tmp4495);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4493));
goto block4;
block4:;
// line 1285
org$frostlang$frostc$Type* $tmp4497 = *(&local1);
org$frostlang$frostc$Type* $tmp4498 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp4497);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4498));
org$frostlang$frostc$Type* $tmp4499 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4499));
*(&local2) = $tmp4498;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4498));
// line 1286
org$frostlang$frostc$Type* $tmp4500 = *(&local2);
org$frostlang$frostc$Type* $tmp4501 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp4502 = ((frost$core$Equatable*) $tmp4500)->$class->itable;
while ($tmp4502->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4502 = $tmp4502->next;
}
$fn4504 $tmp4503 = $tmp4502->methods[1];
frost$core$Bit $tmp4505 = $tmp4503(((frost$core$Equatable*) $tmp4500), ((frost$core$Equatable*) $tmp4501));
bool $tmp4506 = $tmp4505.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4501));
if ($tmp4506) goto block5; else goto block6;
block5:;
// line 1287
frost$core$String* $tmp4507 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4507));
frost$core$String* $tmp4508 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4508));
*(&local3) = $tmp4507;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4507));
// line 1288
frost$io$IndentedOutputStream** $tmp4509 = &param0->out;
frost$io$IndentedOutputStream* $tmp4510 = *$tmp4509;
org$frostlang$frostc$Type* $tmp4511 = *(&local2);
frost$core$String* $tmp4512 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4511);
frost$core$String* $tmp4513 = frost$core$String$get_asString$R$frost$core$String($tmp4512);
frost$core$String* $tmp4514 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4513, &$s4515);
frost$core$String* $tmp4516 = *(&local3);
frost$core$String* $tmp4517 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4514, $tmp4516);
frost$core$String* $tmp4518 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4517, &$s4519);
$fn4521 $tmp4520 = ($fn4521) ((frost$io$OutputStream*) $tmp4510)->$class->vtable[17];
frost$core$Error* $tmp4522 = $tmp4520(((frost$io$OutputStream*) $tmp4510), $tmp4518);
if ($tmp4522 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4522));
*(&local0) = $tmp4522;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4522));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4518));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4513));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4512));
frost$core$String* $tmp4523 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4523));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4524 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4524));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4525 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4525));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4522));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4518));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4513));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4512));
// line 1289
frost$collections$HashMap** $tmp4526 = &param0->refs;
frost$collections$HashMap* $tmp4527 = *$tmp4526;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4528;
$tmp4528 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4528->value = param1;
frost$core$String* $tmp4529 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4527, ((frost$collections$Key*) $tmp4528), ((frost$core$Object*) $tmp4529));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4528)));
frost$core$String* $tmp4530 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4530));
*(&local3) = ((frost$core$String*) NULL);
goto block6;
block6:;
// line 1291
frost$io$IndentedOutputStream** $tmp4531 = &param0->out;
frost$io$IndentedOutputStream* $tmp4532 = *$tmp4531;
frost$core$String* $tmp4533 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4534 = frost$core$String$get_asString$R$frost$core$String($tmp4533);
frost$core$String* $tmp4535 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4534, &$s4536);
$fn4538 $tmp4537 = ($fn4538) ((frost$io$OutputStream*) $tmp4532)->$class->vtable[17];
frost$core$Error* $tmp4539 = $tmp4537(((frost$io$OutputStream*) $tmp4532), $tmp4535);
if ($tmp4539 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4539));
*(&local0) = $tmp4539;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4539));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4535));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4534));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4533));
org$frostlang$frostc$Type* $tmp4540 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4540));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4541 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4541));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4539));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4535));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4534));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4533));
// line 1292
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4542));
frost$core$String* $tmp4543 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4543));
*(&local4) = &$s4544;
// line 1293
ITable* $tmp4545 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp4545->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp4545 = $tmp4545->next;
}
$fn4547 $tmp4546 = $tmp4545->methods[0];
frost$collections$Iterator* $tmp4548 = $tmp4546(((frost$collections$Iterable*) param3));
goto block11;
block11:;
ITable* $tmp4549 = $tmp4548->$class->itable;
while ($tmp4549->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4549 = $tmp4549->next;
}
$fn4551 $tmp4550 = $tmp4549->methods[0];
frost$core$Bit $tmp4552 = $tmp4550($tmp4548);
bool $tmp4553 = $tmp4552.value;
if ($tmp4553) goto block13; else goto block12;
block12:;
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
ITable* $tmp4554 = $tmp4548->$class->itable;
while ($tmp4554->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4554 = $tmp4554->next;
}
$fn4556 $tmp4555 = $tmp4554->methods[1];
frost$core$Object* $tmp4557 = $tmp4555($tmp4548);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) $tmp4557)));
org$frostlang$frostc$IR$Value* $tmp4558 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4558));
*(&local5) = ((org$frostlang$frostc$IR$Value*) $tmp4557);
// line 1294
frost$io$IndentedOutputStream** $tmp4559 = &param0->out;
frost$io$IndentedOutputStream* $tmp4560 = *$tmp4559;
frost$core$String* $tmp4561 = *(&local4);
$fn4563 $tmp4562 = ($fn4563) ((frost$io$OutputStream*) $tmp4560)->$class->vtable[17];
frost$core$Error* $tmp4564 = $tmp4562(((frost$io$OutputStream*) $tmp4560), $tmp4561);
if ($tmp4564 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4564));
*(&local0) = $tmp4564;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4564));
frost$core$Frost$unref$frost$core$Object$Q($tmp4557);
org$frostlang$frostc$IR$Value* $tmp4565 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4565));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4548));
frost$core$String* $tmp4566 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4566));
*(&local4) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4567 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4567));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4568 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4568));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4564));
// line 1295
frost$io$IndentedOutputStream** $tmp4569 = &param0->out;
frost$io$IndentedOutputStream* $tmp4570 = *$tmp4569;
org$frostlang$frostc$IR$Value* $tmp4571 = *(&local5);
frost$core$String* $tmp4572 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, $tmp4571);
$fn4574 $tmp4573 = ($fn4574) ((frost$io$OutputStream*) $tmp4570)->$class->vtable[17];
frost$core$Error* $tmp4575 = $tmp4573(((frost$io$OutputStream*) $tmp4570), $tmp4572);
if ($tmp4575 == NULL) goto block16; else goto block17;
block17:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4575));
*(&local0) = $tmp4575;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4572));
frost$core$Frost$unref$frost$core$Object$Q($tmp4557);
org$frostlang$frostc$IR$Value* $tmp4576 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4576));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4548));
frost$core$String* $tmp4577 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4577));
*(&local4) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4578 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4578));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4579 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4579));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4572));
// line 1296
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4580));
frost$core$String* $tmp4581 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4581));
*(&local4) = &$s4582;
frost$core$Frost$unref$frost$core$Object$Q($tmp4557);
org$frostlang$frostc$IR$Value* $tmp4583 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4583));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block11;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4548));
// line 1298
frost$io$IndentedOutputStream** $tmp4584 = &param0->out;
frost$io$IndentedOutputStream* $tmp4585 = *$tmp4584;
$fn4587 $tmp4586 = ($fn4587) ((frost$io$OutputStream*) $tmp4585)->$class->vtable[19];
frost$core$Error* $tmp4588 = $tmp4586(((frost$io$OutputStream*) $tmp4585), &$s4589);
if ($tmp4588 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4588));
*(&local0) = $tmp4588;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4588));
frost$core$String* $tmp4590 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4590));
*(&local4) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4591 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4591));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4592 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4592));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4588));
frost$core$String* $tmp4593 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4593));
*(&local4) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4594 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4594));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4595 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4595));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block2;
block1:;
// line 1301
frost$core$Int64 $tmp4596 = (frost$core$Int64) {1301};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4597, $tmp4596);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4598 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4598));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeExtractField$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FieldDecl* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1306
*(&local0) = ((frost$core$Error*) NULL);
// line 1307
frost$core$Weak** $tmp4599 = &param0->compiler;
frost$core$Weak* $tmp4600 = *$tmp4599;
frost$core$Object* $tmp4601 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4600);
frost$core$Bit $tmp4602 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4601), param3);
frost$core$Frost$unref$frost$core$Object$Q($tmp4601);
// line 1308
frost$core$String* $tmp4603 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4603));
frost$core$String* $tmp4604 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4604));
*(&local1) = $tmp4603;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4603));
// line 1309
frost$core$String* $tmp4605 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4605));
frost$core$String* $tmp4606 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4606));
*(&local2) = $tmp4605;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4605));
// line 1310
frost$io$IndentedOutputStream** $tmp4607 = &param0->out;
frost$io$IndentedOutputStream* $tmp4608 = *$tmp4607;
org$frostlang$frostc$Type** $tmp4609 = &param3->type;
org$frostlang$frostc$Type* $tmp4610 = *$tmp4609;
frost$core$String* $tmp4611 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4610);
frost$core$String* $tmp4612 = frost$core$String$get_asString$R$frost$core$String($tmp4611);
frost$core$String* $tmp4613 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4612, &$s4614);
frost$core$String* $tmp4615 = *(&local2);
frost$core$String* $tmp4616 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4613, $tmp4615);
frost$core$String* $tmp4617 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4616, &$s4618);
frost$core$String* $tmp4619 = *(&local1);
frost$core$String* $tmp4620 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4617, $tmp4619);
frost$core$String* $tmp4621 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4620, &$s4622);
frost$core$String** $tmp4623 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp4624 = *$tmp4623;
frost$core$String* $tmp4625 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4621, $tmp4624);
frost$core$String* $tmp4626 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4625, &$s4627);
$fn4629 $tmp4628 = ($fn4629) ((frost$io$OutputStream*) $tmp4608)->$class->vtable[19];
frost$core$Error* $tmp4630 = $tmp4628(((frost$io$OutputStream*) $tmp4608), $tmp4626);
if ($tmp4630 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4630));
*(&local0) = $tmp4630;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4621));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4617));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4616));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4612));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4611));
frost$core$String* $tmp4631 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4631));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4632 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4632));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4621));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4617));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4616));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4612));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4611));
// line 1311
frost$collections$HashMap** $tmp4633 = &param0->refs;
frost$collections$HashMap* $tmp4634 = *$tmp4633;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4635;
$tmp4635 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4635->value = param1;
frost$core$String* $tmp4636 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4634, ((frost$collections$Key*) $tmp4635), ((frost$core$Object*) $tmp4636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4635)));
frost$core$String* $tmp4637 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4637));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4638 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4638));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1314
frost$core$Int64 $tmp4639 = (frost$core$Int64) {1314};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4640, $tmp4639);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4641 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4641));
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
// line 1320
*(&local0) = ((frost$core$Error*) NULL);
// line 1321
frost$core$Weak** $tmp4642 = &param3->owner;
frost$core$Weak* $tmp4643 = *$tmp4642;
frost$core$Object* $tmp4644 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4643);
frost$collections$Array** $tmp4645 = &((org$frostlang$frostc$ClassDecl*) $tmp4644)->fields;
frost$collections$Array* $tmp4646 = *$tmp4645;
frost$core$Int64 $tmp4647 = (frost$core$Int64) {1};
frost$core$Object* $tmp4648 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp4646, $tmp4647);
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp4648)));
org$frostlang$frostc$FieldDecl* $tmp4649 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4649));
*(&local1) = ((org$frostlang$frostc$FieldDecl*) $tmp4648);
frost$core$Frost$unref$frost$core$Object$Q($tmp4648);
frost$core$Frost$unref$frost$core$Object$Q($tmp4644);
// line 1322
org$frostlang$frostc$FieldDecl* $tmp4650 = *(&local1);
frost$core$String** $tmp4651 = &((org$frostlang$frostc$Symbol*) $tmp4650)->name;
frost$core$String* $tmp4652 = *$tmp4651;
frost$core$Bit $tmp4653 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp4652, &$s4654);
bool $tmp4655 = $tmp4653.value;
if ($tmp4655) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp4656 = (frost$core$Int64) {1322};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4657, $tmp4656);
abort(); // unreachable
block3:;
// line 1323
frost$core$String* $tmp4658 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4658));
frost$core$String* $tmp4659 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4659));
*(&local2) = $tmp4658;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4658));
// line 1324
frost$core$Weak** $tmp4660 = &param0->compiler;
frost$core$Weak* $tmp4661 = *$tmp4660;
frost$core$Object* $tmp4662 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4661);
org$frostlang$frostc$FieldDecl* $tmp4663 = *(&local1);
frost$core$Int64 $tmp4664 = org$frostlang$frostc$Compiler$getIndex$org$frostlang$frostc$FieldDecl$R$frost$core$Int64(((org$frostlang$frostc$Compiler*) $tmp4662), $tmp4663);
*(&local3) = $tmp4664;
frost$core$Frost$unref$frost$core$Object$Q($tmp4662);
// line 1325
frost$core$String* $tmp4665 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4665));
frost$core$String* $tmp4666 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4666));
*(&local4) = $tmp4665;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4665));
// line 1326
frost$collections$Array** $tmp4667 = &param3->fields;
frost$collections$Array* $tmp4668 = *$tmp4667;
frost$core$Object* $tmp4669 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp4668, param4);
frost$core$String* $tmp4670 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp4669));
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4670));
frost$core$String* $tmp4671 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4671));
*(&local5) = $tmp4670;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4670));
frost$core$Frost$unref$frost$core$Object$Q($tmp4669);
// line 1327
frost$io$IndentedOutputStream** $tmp4672 = &param0->out;
frost$io$IndentedOutputStream* $tmp4673 = *$tmp4672;
frost$core$String* $tmp4674 = *(&local5);
frost$core$String* $tmp4675 = frost$core$String$get_asString$R$frost$core$String($tmp4674);
frost$core$String* $tmp4676 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4675, &$s4677);
frost$core$String* $tmp4678 = *(&local4);
frost$core$String* $tmp4679 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4676, $tmp4678);
frost$core$String* $tmp4680 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4679, &$s4681);
frost$core$String* $tmp4682 = *(&local5);
frost$core$String* $tmp4683 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4680, $tmp4682);
frost$core$String* $tmp4684 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4683, &$s4685);
frost$core$String* $tmp4686 = *(&local2);
frost$core$String* $tmp4687 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4684, $tmp4686);
frost$core$String* $tmp4688 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4687, &$s4689);
frost$core$Int64 $tmp4690 = org$frostlang$frostc$CCodeGenerator$getChoiceFieldOffset$org$frostlang$frostc$ChoiceCase$frost$core$Int64$R$frost$core$Int64(param0, param3, param4);
frost$core$Int64$wrapper* $tmp4691;
$tmp4691 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp4691->value = $tmp4690;
frost$core$String* $tmp4692 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s4693, ((frost$core$Object*) $tmp4691));
frost$core$String* $tmp4694 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4692, &$s4695);
frost$core$String* $tmp4696 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4688, $tmp4694);
$fn4698 $tmp4697 = ($fn4698) ((frost$io$OutputStream*) $tmp4673)->$class->vtable[19];
frost$core$Error* $tmp4699 = $tmp4697(((frost$io$OutputStream*) $tmp4673), $tmp4696);
if ($tmp4699 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4699));
*(&local0) = $tmp4699;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4699));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4691));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4688));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4684));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4680));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4676));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4675));
frost$core$String* $tmp4700 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4700));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp4701 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4701));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4702 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4702));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$FieldDecl* $tmp4703 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4703));
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4699));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4691));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4688));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4684));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4680));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4676));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4675));
// line 1329
frost$collections$HashMap** $tmp4704 = &param0->refs;
frost$collections$HashMap* $tmp4705 = *$tmp4704;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4706;
$tmp4706 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4706->value = param1;
frost$core$String* $tmp4707 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4705, ((frost$collections$Key*) $tmp4706), ((frost$core$Object*) $tmp4707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4706)));
frost$core$String* $tmp4708 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4708));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp4709 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4709));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4710 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4710));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$FieldDecl* $tmp4711 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4711));
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block2;
block1:;
// line 1332
frost$core$Int64 $tmp4712 = (frost$core$Int64) {1332};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4713, $tmp4712);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4714 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4714));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeGetFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FieldDecl* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1337
*(&local0) = ((frost$core$Error*) NULL);
// line 1338
frost$core$String* $tmp4715 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4715));
frost$core$String* $tmp4716 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4716));
*(&local1) = $tmp4715;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4715));
// line 1339
frost$core$String* $tmp4717 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4717));
frost$core$String* $tmp4718 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4718));
*(&local2) = $tmp4717;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4717));
// line 1340
frost$io$IndentedOutputStream** $tmp4719 = &param0->out;
frost$io$IndentedOutputStream* $tmp4720 = *$tmp4719;
org$frostlang$frostc$Type** $tmp4721 = &param3->type;
org$frostlang$frostc$Type* $tmp4722 = *$tmp4721;
frost$core$String* $tmp4723 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4722);
frost$core$String* $tmp4724 = frost$core$String$get_asString$R$frost$core$String($tmp4723);
frost$core$String* $tmp4725 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4724, &$s4726);
frost$core$String* $tmp4727 = *(&local2);
frost$core$String* $tmp4728 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4725, $tmp4727);
frost$core$String* $tmp4729 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4728, &$s4730);
frost$core$String* $tmp4731 = *(&local1);
frost$core$String* $tmp4732 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4729, $tmp4731);
frost$core$String* $tmp4733 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4732, &$s4734);
frost$core$String** $tmp4735 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp4736 = *$tmp4735;
frost$core$String* $tmp4737 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4733, $tmp4736);
frost$core$String* $tmp4738 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4737, &$s4739);
$fn4741 $tmp4740 = ($fn4741) ((frost$io$OutputStream*) $tmp4720)->$class->vtable[19];
frost$core$Error* $tmp4742 = $tmp4740(((frost$io$OutputStream*) $tmp4720), $tmp4738);
if ($tmp4742 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4742));
*(&local0) = $tmp4742;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4742));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4738));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4728));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4724));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4723));
frost$core$String* $tmp4743 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4743));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4744 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4744));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4742));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4738));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4728));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4724));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4723));
// line 1341
frost$collections$HashMap** $tmp4745 = &param0->refs;
frost$collections$HashMap* $tmp4746 = *$tmp4745;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4747;
$tmp4747 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4747->value = param1;
frost$core$String* $tmp4748 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4746, ((frost$collections$Key*) $tmp4747), ((frost$core$Object*) $tmp4748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4747)));
frost$core$String* $tmp4749 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4749));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4750 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4750));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1344
frost$core$Int64 $tmp4751 = (frost$core$Int64) {1344};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4752, $tmp4751);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4753 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4753));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeGetInterfaceMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$ClassDecl* param3, frost$core$Int64 param4, org$frostlang$frostc$Type* param5) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
// line 1350
*(&local0) = ((frost$core$Error*) NULL);
// line 1351
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4754 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, param3);
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4754));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4755 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4755));
*(&local1) = $tmp4754;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4754));
// line 1352
frost$core$String* $tmp4756 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4756));
frost$core$String* $tmp4757 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4757));
*(&local2) = $tmp4756;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4756));
// line 1353
frost$io$IndentedOutputStream** $tmp4758 = &param0->out;
frost$io$IndentedOutputStream* $tmp4759 = *$tmp4758;
frost$core$String* $tmp4760 = *(&local2);
frost$core$String* $tmp4761 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4762, $tmp4760);
frost$core$String* $tmp4763 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4761, &$s4764);
frost$core$String* $tmp4765 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4766 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4763, $tmp4765);
frost$core$String* $tmp4767 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4766, &$s4768);
$fn4770 $tmp4769 = ($fn4770) ((frost$io$OutputStream*) $tmp4759)->$class->vtable[19];
frost$core$Error* $tmp4771 = $tmp4769(((frost$io$OutputStream*) $tmp4759), $tmp4767);
if ($tmp4771 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4771));
*(&local0) = $tmp4771;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4771));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4761));
frost$core$String* $tmp4772 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4772));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4773 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4773));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4771));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4761));
// line 1354
frost$io$IndentedOutputStream** $tmp4774 = &param0->out;
frost$io$IndentedOutputStream* $tmp4775 = *$tmp4774;
frost$core$String* $tmp4776 = *(&local2);
frost$core$String* $tmp4777 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4778, $tmp4776);
frost$core$String* $tmp4779 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4777, &$s4780);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4781 = *(&local1);
frost$core$String** $tmp4782 = &$tmp4781->name;
frost$core$String* $tmp4783 = *$tmp4782;
frost$core$String* $tmp4784 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4779, $tmp4783);
frost$core$String* $tmp4785 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4784, &$s4786);
$fn4788 $tmp4787 = ($fn4788) ((frost$io$OutputStream*) $tmp4775)->$class->vtable[19];
frost$core$Error* $tmp4789 = $tmp4787(((frost$io$OutputStream*) $tmp4775), $tmp4785);
if ($tmp4789 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4789));
*(&local0) = $tmp4789;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4789));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4777));
frost$core$String* $tmp4790 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4790));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4791 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4791));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4789));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4777));
// line 1355
frost$io$IndentedOutputStream** $tmp4792 = &param0->out;
frost$io$IndentedOutputStream* $tmp4793 = *$tmp4792;
frost$core$Int64* $tmp4794 = &$tmp4793->level;
frost$core$Int64 $tmp4795 = *$tmp4794;
frost$core$Int64 $tmp4796 = (frost$core$Int64) {1};
int64_t $tmp4797 = $tmp4795.value;
int64_t $tmp4798 = $tmp4796.value;
int64_t $tmp4799 = $tmp4797 + $tmp4798;
frost$core$Int64 $tmp4800 = (frost$core$Int64) {$tmp4799};
frost$core$Int64* $tmp4801 = &$tmp4793->level;
*$tmp4801 = $tmp4800;
// line 1356
frost$io$IndentedOutputStream** $tmp4802 = &param0->out;
frost$io$IndentedOutputStream* $tmp4803 = *$tmp4802;
frost$core$String* $tmp4804 = *(&local2);
frost$core$String* $tmp4805 = frost$core$String$get_asString$R$frost$core$String($tmp4804);
frost$core$String* $tmp4806 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4805, &$s4807);
frost$core$String* $tmp4808 = *(&local2);
frost$core$String* $tmp4809 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4806, $tmp4808);
frost$core$String* $tmp4810 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4809, &$s4811);
$fn4813 $tmp4812 = ($fn4813) ((frost$io$OutputStream*) $tmp4803)->$class->vtable[19];
frost$core$Error* $tmp4814 = $tmp4812(((frost$io$OutputStream*) $tmp4803), $tmp4810);
if ($tmp4814 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4814));
*(&local0) = $tmp4814;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4810));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4805));
frost$core$String* $tmp4815 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4815));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4816 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4816));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4810));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4805));
// line 1357
frost$io$IndentedOutputStream** $tmp4817 = &param0->out;
frost$io$IndentedOutputStream* $tmp4818 = *$tmp4817;
frost$core$Int64* $tmp4819 = &$tmp4818->level;
frost$core$Int64 $tmp4820 = *$tmp4819;
frost$core$Int64 $tmp4821 = (frost$core$Int64) {1};
int64_t $tmp4822 = $tmp4820.value;
int64_t $tmp4823 = $tmp4821.value;
int64_t $tmp4824 = $tmp4822 - $tmp4823;
frost$core$Int64 $tmp4825 = (frost$core$Int64) {$tmp4824};
frost$core$Int64* $tmp4826 = &$tmp4818->level;
*$tmp4826 = $tmp4825;
// line 1358
frost$io$IndentedOutputStream** $tmp4827 = &param0->out;
frost$io$IndentedOutputStream* $tmp4828 = *$tmp4827;
$fn4830 $tmp4829 = ($fn4830) ((frost$io$OutputStream*) $tmp4828)->$class->vtable[19];
frost$core$Error* $tmp4831 = $tmp4829(((frost$io$OutputStream*) $tmp4828), &$s4832);
if ($tmp4831 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4831));
*(&local0) = $tmp4831;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4831));
frost$core$String* $tmp4833 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4833));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4834 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4834));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4831));
// line 1359
frost$core$String* $tmp4835 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4835));
frost$core$String* $tmp4836 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4836));
*(&local3) = $tmp4835;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4835));
// line 1360
frost$core$String* $tmp4837 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, param5, ((org$frostlang$frostc$Type*) NULL));
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4837));
frost$core$String* $tmp4838 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4838));
*(&local4) = $tmp4837;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4837));
// line 1361
frost$io$IndentedOutputStream** $tmp4839 = &param0->out;
frost$io$IndentedOutputStream* $tmp4840 = *$tmp4839;
frost$core$String* $tmp4841 = *(&local4);
frost$core$String* $tmp4842 = frost$core$String$get_asString$R$frost$core$String($tmp4841);
frost$core$String* $tmp4843 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4842, &$s4844);
frost$core$String* $tmp4845 = *(&local3);
frost$core$String* $tmp4846 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4843, $tmp4845);
frost$core$String* $tmp4847 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4846, &$s4848);
frost$core$String* $tmp4849 = *(&local2);
frost$core$String* $tmp4850 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4847, $tmp4849);
frost$core$String* $tmp4851 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4850, &$s4852);
frost$core$Int64$wrapper* $tmp4853;
$tmp4853 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp4853->value = param4;
frost$core$String* $tmp4854 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp4851, ((frost$core$Object*) $tmp4853));
frost$core$String* $tmp4855 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4854, &$s4856);
$fn4858 $tmp4857 = ($fn4858) ((frost$io$OutputStream*) $tmp4840)->$class->vtable[19];
frost$core$Error* $tmp4859 = $tmp4857(((frost$io$OutputStream*) $tmp4840), $tmp4855);
if ($tmp4859 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4859));
*(&local0) = $tmp4859;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4853));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4847));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4843));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4842));
frost$core$String* $tmp4860 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4860));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4861 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4861));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4862 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4862));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4863 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4863));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4853));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4847));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4843));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4842));
// line 1362
frost$collections$HashMap** $tmp4864 = &param0->refs;
frost$collections$HashMap* $tmp4865 = *$tmp4864;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4866;
$tmp4866 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4866->value = param1;
frost$core$String* $tmp4867 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4865, ((frost$collections$Key*) $tmp4866), ((frost$core$Object*) $tmp4867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4866)));
frost$core$String* $tmp4868 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4868));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4869 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4869));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4870 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4870));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4871 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4871));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block2;
block1:;
// line 1365
frost$core$Int64 $tmp4872 = (frost$core$Int64) {1365};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4873, $tmp4872);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4874 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4874));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeGetVirtualMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, frost$core$Int64 param3, org$frostlang$frostc$Type* param4) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1370
*(&local0) = ((frost$core$Error*) NULL);
// line 1371
frost$core$String* $tmp4875 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4875));
frost$core$String* $tmp4876 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4876));
*(&local1) = $tmp4875;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4875));
// line 1372
frost$core$String* $tmp4877 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, param4, ((org$frostlang$frostc$Type*) NULL));
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4877));
frost$core$String* $tmp4878 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4878));
*(&local2) = $tmp4877;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4877));
// line 1373
frost$io$IndentedOutputStream** $tmp4879 = &param0->out;
frost$io$IndentedOutputStream* $tmp4880 = *$tmp4879;
frost$core$String* $tmp4881 = *(&local2);
frost$core$String* $tmp4882 = frost$core$String$get_asString$R$frost$core$String($tmp4881);
frost$core$String* $tmp4883 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4882, &$s4884);
frost$core$String* $tmp4885 = *(&local1);
frost$core$String* $tmp4886 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4883, $tmp4885);
frost$core$String* $tmp4887 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4886, &$s4888);
frost$core$String* $tmp4889 = *(&local2);
frost$core$String* $tmp4890 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4887, $tmp4889);
frost$core$String* $tmp4891 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4890, &$s4892);
frost$core$String* $tmp4893 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4894 = frost$core$String$get_asString$R$frost$core$String($tmp4893);
frost$core$String* $tmp4895 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4894, &$s4896);
frost$core$Int64$wrapper* $tmp4897;
$tmp4897 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp4897->value = param3;
frost$core$String* $tmp4898 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp4895, ((frost$core$Object*) $tmp4897));
frost$core$String* $tmp4899 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4898, &$s4900);
frost$core$String* $tmp4901 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4891, $tmp4899);
$fn4903 $tmp4902 = ($fn4903) ((frost$io$OutputStream*) $tmp4880)->$class->vtable[19];
frost$core$Error* $tmp4904 = $tmp4902(((frost$io$OutputStream*) $tmp4880), $tmp4901);
if ($tmp4904 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4904));
*(&local0) = $tmp4904;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4901));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4899));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4898));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4894));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4890));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4882));
frost$core$String* $tmp4905 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4905));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4906 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4906));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4901));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4899));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4898));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4894));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4890));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4882));
// line 1375
frost$collections$HashMap** $tmp4907 = &param0->refs;
frost$collections$HashMap* $tmp4908 = *$tmp4907;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4909;
$tmp4909 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4909->value = param1;
frost$core$String* $tmp4910 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4908, ((frost$collections$Key*) $tmp4909), ((frost$core$Object*) $tmp4910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4909)));
frost$core$String* $tmp4911 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4911));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4912 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4912));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1378
frost$core$Int64 $tmp4913 = (frost$core$Int64) {1378};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4914, $tmp4913);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4915 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4915));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeLoad$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 1383
*(&local0) = ((frost$core$Error*) NULL);
// line 1384
frost$core$String* $tmp4916 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4916));
frost$core$String* $tmp4917 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4917));
*(&local1) = $tmp4916;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4916));
// line 1385
frost$io$IndentedOutputStream** $tmp4918 = &param0->out;
frost$io$IndentedOutputStream* $tmp4919 = *$tmp4918;
$fn4921 $tmp4920 = ($fn4921) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4922 = $tmp4920(param2);
frost$core$String* $tmp4923 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4922);
frost$core$String* $tmp4924 = frost$core$String$get_asString$R$frost$core$String($tmp4923);
frost$core$String* $tmp4925 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4924, &$s4926);
frost$core$String* $tmp4927 = *(&local1);
frost$core$String* $tmp4928 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4925, $tmp4927);
frost$core$String* $tmp4929 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4928, &$s4930);
frost$core$String* $tmp4931 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4932 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4929, $tmp4931);
frost$core$String* $tmp4933 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4932, &$s4934);
$fn4936 $tmp4935 = ($fn4936) ((frost$io$OutputStream*) $tmp4919)->$class->vtable[19];
frost$core$Error* $tmp4937 = $tmp4935(((frost$io$OutputStream*) $tmp4919), $tmp4933);
if ($tmp4937 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4937));
*(&local0) = $tmp4937;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4937));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4933));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4932));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4931));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4929));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4928));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4925));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4924));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4923));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4922));
frost$core$String* $tmp4938 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4938));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4937));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4933));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4932));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4931));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4929));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4928));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4925));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4924));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4923));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4922));
// line 1386
frost$collections$HashMap** $tmp4939 = &param0->refs;
frost$collections$HashMap* $tmp4940 = *$tmp4939;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4941;
$tmp4941 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4941->value = param1;
frost$core$String* $tmp4942 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4940, ((frost$collections$Key*) $tmp4941), ((frost$core$Object*) $tmp4942));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4941)));
frost$core$String* $tmp4943 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4943));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1389
frost$core$Int64 $tmp4944 = (frost$core$Int64) {1389};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4945, $tmp4944);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4946 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4946));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeNegate$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 1394
*(&local0) = ((frost$core$Error*) NULL);
// line 1395
frost$core$String* $tmp4947 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4947));
frost$core$String* $tmp4948 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4948));
*(&local1) = $tmp4947;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4947));
// line 1396
frost$io$IndentedOutputStream** $tmp4949 = &param0->out;
frost$io$IndentedOutputStream* $tmp4950 = *$tmp4949;
$fn4952 $tmp4951 = ($fn4952) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4953 = $tmp4951(param2);
frost$core$String* $tmp4954 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4953);
frost$core$String* $tmp4955 = frost$core$String$get_asString$R$frost$core$String($tmp4954);
frost$core$String* $tmp4956 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4955, &$s4957);
frost$core$String* $tmp4958 = *(&local1);
frost$core$String* $tmp4959 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4956, $tmp4958);
frost$core$String* $tmp4960 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4959, &$s4961);
frost$core$String* $tmp4962 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4963 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4960, $tmp4962);
frost$core$String* $tmp4964 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4963, &$s4965);
$fn4967 $tmp4966 = ($fn4967) ((frost$io$OutputStream*) $tmp4950)->$class->vtable[19];
frost$core$Error* $tmp4968 = $tmp4966(((frost$io$OutputStream*) $tmp4950), $tmp4964);
if ($tmp4968 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4968));
*(&local0) = $tmp4968;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4968));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4964));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4963));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4960));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4959));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4956));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4955));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4954));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4953));
frost$core$String* $tmp4969 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4969));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4968));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4964));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4963));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4960));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4959));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4956));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4955));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4954));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4953));
// line 1397
frost$collections$HashMap** $tmp4970 = &param0->refs;
frost$collections$HashMap* $tmp4971 = *$tmp4970;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4972;
$tmp4972 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4972->value = param1;
frost$core$String* $tmp4973 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4971, ((frost$collections$Key*) $tmp4972), ((frost$core$Object*) $tmp4973));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4972)));
frost$core$String* $tmp4974 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4974));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1400
frost$core$Int64 $tmp4975 = (frost$core$Int64) {1400};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4976, $tmp4975);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4977 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4977));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeNot$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 1405
*(&local0) = ((frost$core$Error*) NULL);
// line 1406
frost$core$String* $tmp4978 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4978));
frost$core$String* $tmp4979 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4979));
*(&local1) = $tmp4978;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4978));
// line 1407
frost$io$IndentedOutputStream** $tmp4980 = &param0->out;
frost$io$IndentedOutputStream* $tmp4981 = *$tmp4980;
$fn4983 $tmp4982 = ($fn4983) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4984 = $tmp4982(param2);
frost$core$String* $tmp4985 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4984);
frost$core$String* $tmp4986 = frost$core$String$get_asString$R$frost$core$String($tmp4985);
frost$core$String* $tmp4987 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4986, &$s4988);
frost$core$String* $tmp4989 = *(&local1);
frost$core$String* $tmp4990 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4987, $tmp4989);
frost$core$String* $tmp4991 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4990, &$s4992);
frost$core$String* $tmp4993 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4994 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4991, $tmp4993);
frost$core$String* $tmp4995 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4994, &$s4996);
$fn4998 $tmp4997 = ($fn4998) ((frost$io$OutputStream*) $tmp4981)->$class->vtable[19];
frost$core$Error* $tmp4999 = $tmp4997(((frost$io$OutputStream*) $tmp4981), $tmp4995);
if ($tmp4999 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4999));
*(&local0) = $tmp4999;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4995));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4994));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4991));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4990));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4986));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4985));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4984));
frost$core$String* $tmp5000 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5000));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4995));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4994));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4991));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4990));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4986));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4985));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4984));
// line 1408
frost$collections$HashMap** $tmp5001 = &param0->refs;
frost$collections$HashMap* $tmp5002 = *$tmp5001;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5003;
$tmp5003 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5003->value = param1;
frost$core$String* $tmp5004 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5002, ((frost$collections$Key*) $tmp5003), ((frost$core$Object*) $tmp5004));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5003)));
frost$core$String* $tmp5005 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5005));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1411
frost$core$Int64 $tmp5006 = (frost$core$Int64) {1411};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5007, $tmp5006);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5008 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5008));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerAlloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$Type* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Int64 local2;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
// line 1416
*(&local0) = ((frost$core$Error*) NULL);
// line 1417
frost$core$String* $tmp5009 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5009));
frost$core$String* $tmp5010 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5010));
*(&local1) = $tmp5009;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5009));
// line 1418
frost$core$Int64 $tmp5011 = org$frostlang$frostc$CCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param3);
*(&local2) = $tmp5011;
// line 1419
frost$core$String* $tmp5012 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5012));
frost$core$String* $tmp5013 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5013));
*(&local3) = $tmp5012;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5012));
// line 1420
frost$core$String* $tmp5014 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5014));
frost$core$String* $tmp5015 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5015));
*(&local4) = $tmp5014;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5014));
// line 1421
frost$io$IndentedOutputStream** $tmp5016 = &param0->out;
frost$io$IndentedOutputStream* $tmp5017 = *$tmp5016;
frost$core$String* $tmp5018 = *(&local3);
frost$core$String* $tmp5019 = frost$core$String$get_asString$R$frost$core$String($tmp5018);
frost$core$String* $tmp5020 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5019, &$s5021);
frost$core$String* $tmp5022 = *(&local4);
frost$core$String* $tmp5023 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5020, $tmp5022);
frost$core$String* $tmp5024 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5023, &$s5025);
frost$core$String* $tmp5026 = *(&local3);
frost$core$String* $tmp5027 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5024, $tmp5026);
frost$core$String* $tmp5028 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5027, &$s5029);
frost$core$String* $tmp5030 = *(&local1);
frost$core$String* $tmp5031 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5028, $tmp5030);
frost$core$String* $tmp5032 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5031, &$s5033);
frost$core$Int64 $tmp5034 = *(&local2);
frost$core$String* $tmp5035 = frost$core$Int64$get_asString$R$frost$core$String($tmp5034);
frost$core$String* $tmp5036 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5035, &$s5037);
frost$core$String* $tmp5038 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5032, $tmp5036);
$fn5040 $tmp5039 = ($fn5040) ((frost$io$OutputStream*) $tmp5017)->$class->vtable[19];
frost$core$Error* $tmp5041 = $tmp5039(((frost$io$OutputStream*) $tmp5017), $tmp5038);
if ($tmp5041 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5041));
*(&local0) = $tmp5041;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5038));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5028));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5027));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5019));
frost$core$String* $tmp5042 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5042));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5043 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5043));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5044 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5044));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5038));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5028));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5027));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5019));
// line 1423
frost$collections$HashMap** $tmp5045 = &param0->refs;
frost$collections$HashMap* $tmp5046 = *$tmp5045;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5047;
$tmp5047 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5047->value = param1;
frost$core$String* $tmp5048 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5046, ((frost$collections$Key*) $tmp5047), ((frost$core$Object*) $tmp5048));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5047)));
frost$core$String* $tmp5049 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5049));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5050 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5050));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5051 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5051));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1426
frost$core$Int64 $tmp5052 = (frost$core$Int64) {1426};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5053, $tmp5052);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5054 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5054));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerDestroy$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 1431
*(&local0) = ((frost$core$Error*) NULL);
// line 1432
frost$core$String* $tmp5055 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5055));
frost$core$String* $tmp5056 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5056));
*(&local1) = $tmp5055;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5055));
// line 1433
frost$io$IndentedOutputStream** $tmp5057 = &param0->out;
frost$io$IndentedOutputStream* $tmp5058 = *$tmp5057;
frost$core$String* $tmp5059 = *(&local1);
frost$core$String* $tmp5060 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5061, $tmp5059);
frost$core$String* $tmp5062 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5060, &$s5063);
$fn5065 $tmp5064 = ($fn5065) ((frost$io$OutputStream*) $tmp5058)->$class->vtable[19];
frost$core$Error* $tmp5066 = $tmp5064(((frost$io$OutputStream*) $tmp5058), $tmp5062);
if ($tmp5066 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5066));
*(&local0) = $tmp5066;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5066));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5060));
frost$core$String* $tmp5067 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5067));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5066));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5060));
frost$core$String* $tmp5068 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5068));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1436
frost$core$Int64 $tmp5069 = (frost$core$Int64) {1436};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5070, $tmp5069);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5071 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5071));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerGetIndex$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$IR$Value* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// line 1441
*(&local0) = ((frost$core$Error*) NULL);
// line 1442
frost$core$String* $tmp5072 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5072));
frost$core$String* $tmp5073 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5073));
*(&local1) = $tmp5072;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5072));
// line 1443
frost$core$String* $tmp5074 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param3);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5074));
frost$core$String* $tmp5075 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5075));
*(&local2) = $tmp5074;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5074));
// line 1444
frost$core$String* $tmp5076 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5076));
frost$core$String* $tmp5077 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5077));
*(&local3) = $tmp5076;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5076));
// line 1445
frost$io$IndentedOutputStream** $tmp5078 = &param0->out;
frost$io$IndentedOutputStream* $tmp5079 = *$tmp5078;
$fn5081 $tmp5080 = ($fn5081) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5082 = $tmp5080(param2);
org$frostlang$frostc$FixedArray* $tmp5083 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp5082);
frost$core$Int64 $tmp5084 = (frost$core$Int64) {1};
frost$core$Object* $tmp5085 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp5083, $tmp5084);
frost$core$String* $tmp5086 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp5085));
frost$core$String* $tmp5087 = frost$core$String$get_asString$R$frost$core$String($tmp5086);
frost$core$String* $tmp5088 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5087, &$s5089);
frost$core$String* $tmp5090 = *(&local3);
frost$core$String* $tmp5091 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5088, $tmp5090);
frost$core$String* $tmp5092 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5091, &$s5093);
frost$core$String* $tmp5094 = *(&local1);
frost$core$String* $tmp5095 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5092, $tmp5094);
frost$core$String* $tmp5096 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5095, &$s5097);
frost$core$String* $tmp5098 = *(&local2);
frost$core$String* $tmp5099 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5096, $tmp5098);
frost$core$String* $tmp5100 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5099, &$s5101);
$fn5103 $tmp5102 = ($fn5103) ((frost$io$OutputStream*) $tmp5079)->$class->vtable[19];
frost$core$Error* $tmp5104 = $tmp5102(((frost$io$OutputStream*) $tmp5079), $tmp5100);
if ($tmp5104 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5104));
*(&local0) = $tmp5104;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5099));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5096));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5095));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5092));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5091));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5088));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5087));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5086));
frost$core$Frost$unref$frost$core$Object$Q($tmp5085);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5083));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5082));
frost$core$String* $tmp5105 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5105));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5106 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5106));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5107 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5107));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5099));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5096));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5095));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5092));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5091));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5088));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5087));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5086));
frost$core$Frost$unref$frost$core$Object$Q($tmp5085);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5083));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5082));
// line 1446
frost$collections$HashMap** $tmp5108 = &param0->refs;
frost$collections$HashMap* $tmp5109 = *$tmp5108;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5110;
$tmp5110 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5110->value = param1;
frost$core$String* $tmp5111 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5109, ((frost$collections$Key*) $tmp5110), ((frost$core$Object*) $tmp5111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5110)));
frost$core$String* $tmp5112 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5112));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5113 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5113));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5114 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5114));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1449
frost$core$Int64 $tmp5115 = (frost$core$Int64) {1449};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5116, $tmp5115);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5117 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5117));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerOffset$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$IR$Value* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// line 1454
*(&local0) = ((frost$core$Error*) NULL);
// line 1455
frost$core$String* $tmp5118 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5118));
frost$core$String* $tmp5119 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5119));
*(&local1) = $tmp5118;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5118));
// line 1456
frost$core$String* $tmp5120 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param3);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5120));
frost$core$String* $tmp5121 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5121));
*(&local2) = $tmp5120;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5120));
// line 1457
frost$core$String* $tmp5122 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5122));
frost$core$String* $tmp5123 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5123));
*(&local3) = $tmp5122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5122));
// line 1458
frost$io$IndentedOutputStream** $tmp5124 = &param0->out;
frost$io$IndentedOutputStream* $tmp5125 = *$tmp5124;
$fn5127 $tmp5126 = ($fn5127) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5128 = $tmp5126(param2);
frost$core$String* $tmp5129 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5128);
frost$core$String* $tmp5130 = frost$core$String$get_asString$R$frost$core$String($tmp5129);
frost$core$String* $tmp5131 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5130, &$s5132);
frost$core$String* $tmp5133 = *(&local3);
frost$core$String* $tmp5134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5131, $tmp5133);
frost$core$String* $tmp5135 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5134, &$s5136);
frost$core$String* $tmp5137 = *(&local1);
frost$core$String* $tmp5138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5135, $tmp5137);
frost$core$String* $tmp5139 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5138, &$s5140);
frost$core$String* $tmp5141 = *(&local2);
frost$core$String* $tmp5142 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5139, $tmp5141);
frost$core$String* $tmp5143 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5142, &$s5144);
$fn5146 $tmp5145 = ($fn5146) ((frost$io$OutputStream*) $tmp5125)->$class->vtable[19];
frost$core$Error* $tmp5147 = $tmp5145(((frost$io$OutputStream*) $tmp5125), $tmp5143);
if ($tmp5147 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5147));
*(&local0) = $tmp5147;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5128));
frost$core$String* $tmp5148 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5148));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5149 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5149));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5150 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5150));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5128));
// line 1459
frost$collections$HashMap** $tmp5151 = &param0->refs;
frost$collections$HashMap* $tmp5152 = *$tmp5151;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5153;
$tmp5153 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5153->value = param1;
frost$core$String* $tmp5154 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5152, ((frost$collections$Key*) $tmp5153), ((frost$core$Object*) $tmp5154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5153)));
frost$core$String* $tmp5155 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5155));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5156 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5156));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5157 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5157));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1462
frost$core$Int64 $tmp5158 = (frost$core$Int64) {1462};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5159, $tmp5158);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5160 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5160));
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
// line 1468
*(&local0) = ((frost$core$Error*) NULL);
// line 1469
frost$core$String* $tmp5161 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5161));
frost$core$String* $tmp5162 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5162));
*(&local1) = $tmp5161;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5161));
// line 1470
frost$core$String* $tmp5163 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param3);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5163));
frost$core$String* $tmp5164 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5164));
*(&local2) = $tmp5163;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5163));
// line 1471
frost$core$String* $tmp5165 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param4);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5165));
frost$core$String* $tmp5166 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5166));
*(&local3) = $tmp5165;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5165));
// line 1472
$fn5168 $tmp5167 = ($fn5168) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5169 = $tmp5167(param2);
frost$core$Int64 $tmp5170 = org$frostlang$frostc$CCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp5169);
*(&local4) = $tmp5170;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5169));
// line 1473
frost$core$Int64 $tmp5171 = *(&local4);
frost$core$Int64 $tmp5172 = (frost$core$Int64) {0};
int64_t $tmp5173 = $tmp5171.value;
int64_t $tmp5174 = $tmp5172.value;
bool $tmp5175 = $tmp5173 > $tmp5174;
frost$core$Bit $tmp5176 = (frost$core$Bit) {$tmp5175};
bool $tmp5177 = $tmp5176.value;
if ($tmp5177) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp5178 = (frost$core$Int64) {1473};
$fn5180 $tmp5179 = ($fn5180) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5181 = $tmp5179(param2);
frost$core$String* $tmp5182 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s5183, ((frost$core$Object*) $tmp5181));
frost$core$String* $tmp5184 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5182, &$s5185);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s5186, $tmp5178, $tmp5184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5181));
abort(); // unreachable
block3:;
// line 1474
frost$core$String* $tmp5187 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5187));
frost$core$String* $tmp5188 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5188));
*(&local5) = $tmp5187;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5187));
// line 1475
frost$io$IndentedOutputStream** $tmp5189 = &param0->out;
frost$io$IndentedOutputStream* $tmp5190 = *$tmp5189;
$fn5192 $tmp5191 = ($fn5192) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5193 = $tmp5191(param2);
frost$core$String* $tmp5194 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5193);
frost$core$String* $tmp5195 = frost$core$String$get_asString$R$frost$core$String($tmp5194);
frost$core$String* $tmp5196 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5195, &$s5197);
frost$core$String* $tmp5198 = *(&local5);
frost$core$String* $tmp5199 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5196, $tmp5198);
frost$core$String* $tmp5200 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5199, &$s5201);
$fn5203 $tmp5202 = ($fn5203) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5204 = $tmp5202(param2);
frost$core$String* $tmp5205 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5204);
frost$core$String* $tmp5206 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5200, $tmp5205);
frost$core$String* $tmp5207 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5206, &$s5208);
frost$core$String* $tmp5209 = *(&local1);
frost$core$String* $tmp5210 = frost$core$String$get_asString$R$frost$core$String($tmp5209);
frost$core$String* $tmp5211 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5210, &$s5212);
frost$core$String* $tmp5213 = *(&local2);
frost$core$String* $tmp5214 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5211, $tmp5213);
frost$core$String* $tmp5215 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5214, &$s5216);
frost$core$Int64 $tmp5217 = *(&local4);
frost$core$Int64$wrapper* $tmp5218;
$tmp5218 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp5218->value = $tmp5217;
frost$core$String* $tmp5219 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp5215, ((frost$core$Object*) $tmp5218));
frost$core$String* $tmp5220 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5219, &$s5221);
frost$core$String* $tmp5222 = *(&local3);
frost$core$String* $tmp5223 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5220, $tmp5222);
frost$core$String* $tmp5224 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5223, &$s5225);
frost$core$Int64 $tmp5226 = *(&local4);
frost$core$Int64$wrapper* $tmp5227;
$tmp5227 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp5227->value = $tmp5226;
frost$core$String* $tmp5228 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp5224, ((frost$core$Object*) $tmp5227));
frost$core$String* $tmp5229 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5228, &$s5230);
frost$core$String* $tmp5231 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5207, $tmp5229);
$fn5233 $tmp5232 = ($fn5233) ((frost$io$OutputStream*) $tmp5190)->$class->vtable[19];
frost$core$Error* $tmp5234 = $tmp5232(((frost$io$OutputStream*) $tmp5190), $tmp5231);
if ($tmp5234 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5234));
*(&local0) = $tmp5234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5193));
frost$core$String* $tmp5235 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5235));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp5236 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5236));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5237 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5237));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5238 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5238));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5193));
// line 1477
frost$collections$HashMap** $tmp5239 = &param0->refs;
frost$collections$HashMap* $tmp5240 = *$tmp5239;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5241;
$tmp5241 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5241->value = param1;
frost$core$String* $tmp5242 = *(&local5);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5240, ((frost$collections$Key*) $tmp5241), ((frost$core$Object*) $tmp5242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5241)));
frost$core$String* $tmp5243 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5243));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp5244 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5244));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5245 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5245));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5246 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5246));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1480
frost$core$Int64 $tmp5247 = (frost$core$Int64) {1480};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5248, $tmp5247);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5249 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5249));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerSetIndex$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$IR$Value* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// line 1485
*(&local0) = ((frost$core$Error*) NULL);
// line 1486
frost$core$String* $tmp5250 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5250));
frost$core$String* $tmp5251 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5251));
*(&local1) = $tmp5250;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5250));
// line 1487
frost$core$String* $tmp5252 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param3);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5252));
frost$core$String* $tmp5253 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5253));
*(&local2) = $tmp5252;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5252));
// line 1488
frost$core$String* $tmp5254 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5254));
frost$core$String* $tmp5255 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5255));
*(&local3) = $tmp5254;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5254));
// line 1489
frost$io$IndentedOutputStream** $tmp5256 = &param0->out;
frost$io$IndentedOutputStream* $tmp5257 = *$tmp5256;
frost$core$String* $tmp5258 = *(&local1);
frost$core$String* $tmp5259 = frost$core$String$get_asString$R$frost$core$String($tmp5258);
frost$core$String* $tmp5260 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5259, &$s5261);
frost$core$String* $tmp5262 = *(&local2);
frost$core$String* $tmp5263 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5260, $tmp5262);
frost$core$String* $tmp5264 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5263, &$s5265);
frost$core$String* $tmp5266 = *(&local3);
frost$core$String* $tmp5267 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5264, $tmp5266);
frost$core$String* $tmp5268 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5267, &$s5269);
$fn5271 $tmp5270 = ($fn5271) ((frost$io$OutputStream*) $tmp5257)->$class->vtable[19];
frost$core$Error* $tmp5272 = $tmp5270(((frost$io$OutputStream*) $tmp5257), $tmp5268);
if ($tmp5272 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5272));
*(&local0) = $tmp5272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5259));
frost$core$String* $tmp5273 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5273));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5274 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5274));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5275 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5275));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5259));
frost$core$String* $tmp5276 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5276));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5277 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5277));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5278 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5278));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1492
frost$core$Int64 $tmp5279 = (frost$core$Int64) {1492};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5280, $tmp5279);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5281 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5281));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeReturn$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1) {

frost$core$Error* local0 = NULL;
// line 1497
*(&local0) = ((frost$core$Error*) NULL);
// line 1498
frost$core$Bit $tmp5282 = frost$core$Bit$init$builtin_bit(param1 != NULL);
bool $tmp5283 = $tmp5282.value;
if ($tmp5283) goto block3; else goto block5;
block3:;
// line 1499
frost$io$IndentedOutputStream** $tmp5284 = &param0->out;
frost$io$IndentedOutputStream* $tmp5285 = *$tmp5284;
frost$core$String* $tmp5286 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
frost$core$String* $tmp5287 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5288, $tmp5286);
frost$core$String* $tmp5289 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5287, &$s5290);
$fn5292 $tmp5291 = ($fn5292) ((frost$io$OutputStream*) $tmp5285)->$class->vtable[19];
frost$core$Error* $tmp5293 = $tmp5291(((frost$io$OutputStream*) $tmp5285), $tmp5289);
if ($tmp5293 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5293));
*(&local0) = $tmp5293;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5286));
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5286));
goto block4;
block5:;
// line 1
// line 1502
frost$io$IndentedOutputStream** $tmp5294 = &param0->out;
frost$io$IndentedOutputStream* $tmp5295 = *$tmp5294;
$fn5297 $tmp5296 = ($fn5297) ((frost$io$OutputStream*) $tmp5295)->$class->vtable[19];
frost$core$Error* $tmp5298 = $tmp5296(((frost$io$OutputStream*) $tmp5295), &$s5299);
if ($tmp5298 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5298));
*(&local0) = $tmp5298;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5298));
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5298));
goto block4;
block4:;
goto block2;
block1:;
// line 1506
frost$core$Int64 $tmp5300 = (frost$core$Int64) {1506};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5301, $tmp5300);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5302 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5302));
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
// line 1511
*(&local0) = ((frost$core$Error*) NULL);
// line 1512
frost$core$Weak** $tmp5303 = &param2->owner;
frost$core$Weak* $tmp5304 = *$tmp5303;
frost$core$Object* $tmp5305 = frost$core$Weak$get$R$frost$core$Weak$T($tmp5304);
frost$core$Bit* $tmp5306 = &((org$frostlang$frostc$ClassDecl*) $tmp5305)->external;
frost$core$Bit $tmp5307 = *$tmp5306;
bool $tmp5308 = $tmp5307.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp5305);
if ($tmp5308) goto block3; else goto block4;
block3:;
// line 1513
org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param2);
goto block4;
block4:;
// line 1515
frost$core$Bit $tmp5309 = org$frostlang$frostc$CCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, param2);
*(&local1) = $tmp5309;
// line 1516
org$frostlang$frostc$Type** $tmp5310 = &param2->returnType;
org$frostlang$frostc$Type* $tmp5311 = *$tmp5310;
frost$core$String* $tmp5312 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5311);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5312));
frost$core$String* $tmp5313 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5313));
*(&local2) = $tmp5312;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5312));
// line 1517
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s5314));
frost$core$String* $tmp5315 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5315));
*(&local3) = &$s5316;
// line 1518
*(&local4) = ((frost$core$String*) NULL);
// line 1519
org$frostlang$frostc$Type** $tmp5317 = &param2->returnType;
org$frostlang$frostc$Type* $tmp5318 = *$tmp5317;
org$frostlang$frostc$Type* $tmp5319 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp5320 = ((frost$core$Equatable*) $tmp5318)->$class->itable;
while ($tmp5320->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5320 = $tmp5320->next;
}
$fn5322 $tmp5321 = $tmp5320->methods[1];
frost$core$Bit $tmp5323 = $tmp5321(((frost$core$Equatable*) $tmp5318), ((frost$core$Equatable*) $tmp5319));
bool $tmp5324 = $tmp5323.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5319));
if ($tmp5324) goto block5; else goto block6;
block5:;
// line 1520
frost$core$String* $tmp5325 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5325));
frost$core$String* $tmp5326 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5326));
*(&local4) = $tmp5325;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5325));
// line 1521
frost$core$Bit $tmp5327 = *(&local1);
bool $tmp5328 = $tmp5327.value;
if ($tmp5328) goto block7; else goto block9;
block7:;
// line 1522
frost$io$IndentedOutputStream** $tmp5329 = &param0->out;
frost$io$IndentedOutputStream* $tmp5330 = *$tmp5329;
frost$core$String* $tmp5331 = *(&local2);
frost$core$String* $tmp5332 = frost$core$String$get_asString$R$frost$core$String($tmp5331);
frost$core$String* $tmp5333 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5332, &$s5334);
frost$core$String* $tmp5335 = *(&local4);
frost$core$String* $tmp5336 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5333, $tmp5335);
frost$core$String* $tmp5337 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5336, &$s5338);
$fn5340 $tmp5339 = ($fn5340) ((frost$io$OutputStream*) $tmp5330)->$class->vtable[19];
frost$core$Error* $tmp5341 = $tmp5339(((frost$io$OutputStream*) $tmp5330), $tmp5337);
if ($tmp5341 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5341));
*(&local0) = $tmp5341;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5332));
frost$core$String* $tmp5342 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5342));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5343 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5343));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5344 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5344));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5332));
goto block8;
block9:;
// line 1
// line 1525
frost$io$IndentedOutputStream** $tmp5345 = &param0->out;
frost$io$IndentedOutputStream* $tmp5346 = *$tmp5345;
frost$core$String* $tmp5347 = *(&local2);
frost$core$String* $tmp5348 = frost$core$String$get_asString$R$frost$core$String($tmp5347);
frost$core$String* $tmp5349 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5348, &$s5350);
frost$core$String* $tmp5351 = *(&local4);
frost$core$String* $tmp5352 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5349, $tmp5351);
frost$core$String* $tmp5353 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5352, &$s5354);
$fn5356 $tmp5355 = ($fn5356) ((frost$io$OutputStream*) $tmp5346)->$class->vtable[17];
frost$core$Error* $tmp5357 = $tmp5355(((frost$io$OutputStream*) $tmp5346), $tmp5353);
if ($tmp5357 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5357));
*(&local0) = $tmp5357;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5349));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5348));
frost$core$String* $tmp5358 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5358));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5359 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5359));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5360 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5360));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5349));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5348));
goto block8;
block8:;
// line 1527
frost$collections$HashMap** $tmp5361 = &param0->refs;
frost$collections$HashMap* $tmp5362 = *$tmp5361;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5363;
$tmp5363 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5363->value = param1;
frost$core$String* $tmp5364 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5362, ((frost$collections$Key*) $tmp5363), ((frost$core$Object*) $tmp5364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5363)));
goto block6;
block6:;
// line 1529
frost$io$IndentedOutputStream** $tmp5365 = &param0->out;
frost$io$IndentedOutputStream* $tmp5366 = *$tmp5365;
frost$core$String* $tmp5367 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param2);
frost$core$String* $tmp5368 = frost$core$String$get_asString$R$frost$core$String($tmp5367);
frost$core$String* $tmp5369 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5368, &$s5370);
$fn5372 $tmp5371 = ($fn5372) ((frost$io$OutputStream*) $tmp5366)->$class->vtable[17];
frost$core$Error* $tmp5373 = $tmp5371(((frost$io$OutputStream*) $tmp5366), $tmp5369);
if ($tmp5373 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5373));
*(&local0) = $tmp5373;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5367));
frost$core$String* $tmp5374 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5374));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5375 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5375));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5376 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5376));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5367));
// line 1530
frost$core$Bit $tmp5377 = *(&local1);
bool $tmp5378 = $tmp5377.value;
if ($tmp5378) goto block16; else goto block17;
block16:;
// line 1531
frost$io$IndentedOutputStream** $tmp5379 = &param0->out;
frost$io$IndentedOutputStream* $tmp5380 = *$tmp5379;
frost$core$String* $tmp5381 = *(&local4);
frost$core$String* $tmp5382 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5383, $tmp5381);
frost$core$String* $tmp5384 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5382, &$s5385);
$fn5387 $tmp5386 = ($fn5387) ((frost$io$OutputStream*) $tmp5380)->$class->vtable[17];
frost$core$Error* $tmp5388 = $tmp5386(((frost$io$OutputStream*) $tmp5380), $tmp5384);
if ($tmp5388 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5388));
*(&local0) = $tmp5388;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5382));
frost$core$String* $tmp5389 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5389));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5390 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5390));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5391 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5391));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5382));
// line 1532
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s5392));
frost$core$String* $tmp5393 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5393));
*(&local3) = &$s5394;
goto block17;
block17:;
// line 1534
ITable* $tmp5395 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp5395->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp5395 = $tmp5395->next;
}
$fn5397 $tmp5396 = $tmp5395->methods[0];
frost$collections$Iterator* $tmp5398 = $tmp5396(((frost$collections$Iterable*) param3));
goto block20;
block20:;
ITable* $tmp5399 = $tmp5398->$class->itable;
while ($tmp5399->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp5399 = $tmp5399->next;
}
$fn5401 $tmp5400 = $tmp5399->methods[0];
frost$core$Bit $tmp5402 = $tmp5400($tmp5398);
bool $tmp5403 = $tmp5402.value;
if ($tmp5403) goto block22; else goto block21;
block21:;
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
ITable* $tmp5404 = $tmp5398->$class->itable;
while ($tmp5404->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp5404 = $tmp5404->next;
}
$fn5406 $tmp5405 = $tmp5404->methods[1];
frost$core$Object* $tmp5407 = $tmp5405($tmp5398);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) $tmp5407)));
org$frostlang$frostc$IR$Value* $tmp5408 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5408));
*(&local5) = ((org$frostlang$frostc$IR$Value*) $tmp5407);
// line 1535
frost$io$IndentedOutputStream** $tmp5409 = &param0->out;
frost$io$IndentedOutputStream* $tmp5410 = *$tmp5409;
frost$core$String* $tmp5411 = *(&local3);
$fn5413 $tmp5412 = ($fn5413) ((frost$io$OutputStream*) $tmp5410)->$class->vtable[17];
frost$core$Error* $tmp5414 = $tmp5412(((frost$io$OutputStream*) $tmp5410), $tmp5411);
if ($tmp5414 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5414));
*(&local0) = $tmp5414;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5414));
frost$core$Frost$unref$frost$core$Object$Q($tmp5407);
org$frostlang$frostc$IR$Value* $tmp5415 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5415));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5398));
frost$core$String* $tmp5416 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5416));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5417 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5417));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5418 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5418));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5414));
// line 1536
frost$io$IndentedOutputStream** $tmp5419 = &param0->out;
frost$io$IndentedOutputStream* $tmp5420 = *$tmp5419;
org$frostlang$frostc$IR$Value* $tmp5421 = *(&local5);
frost$core$String* $tmp5422 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, $tmp5421);
$fn5424 $tmp5423 = ($fn5424) ((frost$io$OutputStream*) $tmp5420)->$class->vtable[17];
frost$core$Error* $tmp5425 = $tmp5423(((frost$io$OutputStream*) $tmp5420), $tmp5422);
if ($tmp5425 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5425));
*(&local0) = $tmp5425;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5422));
frost$core$Frost$unref$frost$core$Object$Q($tmp5407);
org$frostlang$frostc$IR$Value* $tmp5426 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5426));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5398));
frost$core$String* $tmp5427 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5427));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5428 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5428));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5429 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5429));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5422));
// line 1537
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s5430));
frost$core$String* $tmp5431 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5431));
*(&local3) = &$s5432;
frost$core$Frost$unref$frost$core$Object$Q($tmp5407);
org$frostlang$frostc$IR$Value* $tmp5433 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5433));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block20;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5398));
// line 1539
frost$io$IndentedOutputStream** $tmp5434 = &param0->out;
frost$io$IndentedOutputStream* $tmp5435 = *$tmp5434;
$fn5437 $tmp5436 = ($fn5437) ((frost$io$OutputStream*) $tmp5435)->$class->vtable[19];
frost$core$Error* $tmp5438 = $tmp5436(((frost$io$OutputStream*) $tmp5435), &$s5439);
if ($tmp5438 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5438));
*(&local0) = $tmp5438;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5438));
frost$core$String* $tmp5440 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5440));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5441 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5441));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5442 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5442));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5438));
frost$core$String* $tmp5443 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5443));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5444 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5444));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5445 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5445));
*(&local2) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1542
frost$core$Int64 $tmp5446 = (frost$core$Int64) {1542};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5447, $tmp5446);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5448 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5448));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeStore$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Error* local0 = NULL;
// line 1547
*(&local0) = ((frost$core$Error*) NULL);
// line 1548
frost$io$IndentedOutputStream** $tmp5449 = &param0->out;
frost$io$IndentedOutputStream* $tmp5450 = *$tmp5449;
frost$core$String* $tmp5451 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp5452 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5453, $tmp5451);
frost$core$String* $tmp5454 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5452, &$s5455);
frost$core$String* $tmp5456 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
frost$core$String* $tmp5457 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5454, $tmp5456);
frost$core$String* $tmp5458 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5457, &$s5459);
$fn5461 $tmp5460 = ($fn5461) ((frost$io$OutputStream*) $tmp5450)->$class->vtable[19];
frost$core$Error* $tmp5462 = $tmp5460(((frost$io$OutputStream*) $tmp5450), $tmp5458);
if ($tmp5462 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5462));
*(&local0) = $tmp5462;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5458));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5456));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5451));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5458));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5456));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5451));
goto block2;
block1:;
// line 1551
frost$core$Int64 $tmp5463 = (frost$core$Int64) {1551};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5464, $tmp5463);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5465 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5465));
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
// line 1556
*(&local0) = ((frost$core$Error*) NULL);
// line 1557
frost$core$Int64* $tmp5466 = &param2->$rawValue;
frost$core$Int64 $tmp5467 = *$tmp5466;
frost$core$Int64 $tmp5468 = (frost$core$Int64) {0};
frost$core$Bit $tmp5469 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5468);
bool $tmp5470 = $tmp5469.value;
if ($tmp5470) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp5471 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5472 = *$tmp5471;
*(&local1) = $tmp5472;
org$frostlang$frostc$IR$Value** $tmp5473 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5474 = *$tmp5473;
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5474));
org$frostlang$frostc$IR$Value* $tmp5475 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5475));
*(&local2) = $tmp5474;
org$frostlang$frostc$expression$Binary$Operator* $tmp5476 = (org$frostlang$frostc$expression$Binary$Operator*) (param2->$data + 24);
org$frostlang$frostc$expression$Binary$Operator $tmp5477 = *$tmp5476;
*(&local3) = $tmp5477;
org$frostlang$frostc$IR$Value** $tmp5478 = (org$frostlang$frostc$IR$Value**) (param2->$data + 32);
org$frostlang$frostc$IR$Value* $tmp5479 = *$tmp5478;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5479));
org$frostlang$frostc$IR$Value* $tmp5480 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5480));
*(&local4) = $tmp5479;
org$frostlang$frostc$Type** $tmp5481 = (org$frostlang$frostc$Type**) (param2->$data + 40);
org$frostlang$frostc$Type* $tmp5482 = *$tmp5481;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5482));
org$frostlang$frostc$Type* $tmp5483 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5483));
*(&local5) = $tmp5482;
// line 1559
org$frostlang$frostc$IR$Value* $tmp5484 = *(&local2);
org$frostlang$frostc$expression$Binary$Operator $tmp5485 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp5486 = *(&local4);
org$frostlang$frostc$Type* $tmp5487 = *(&local5);
org$frostlang$frostc$CCodeGenerator$writeBinary$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(param0, param1, $tmp5484, $tmp5485, $tmp5486, $tmp5487);
org$frostlang$frostc$Type* $tmp5488 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5488));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp5489 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5489));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5490 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5490));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block5:;
frost$core$Int64 $tmp5491 = (frost$core$Int64) {1};
frost$core$Bit $tmp5492 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5491);
bool $tmp5493 = $tmp5492.value;
if ($tmp5493) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp5494 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5495 = *$tmp5494;
*(&local6) = $tmp5495;
org$frostlang$frostc$IR$Block$ID* $tmp5496 = (org$frostlang$frostc$IR$Block$ID*) (param2->$data + 16);
org$frostlang$frostc$IR$Block$ID $tmp5497 = *$tmp5496;
*(&local7) = $tmp5497;
// line 1562
org$frostlang$frostc$IR$Block$ID $tmp5498 = *(&local7);
org$frostlang$frostc$CCodeGenerator$writeBranch$org$frostlang$frostc$IR$Block$ID(param0, $tmp5498);
goto block3;
block7:;
frost$core$Int64 $tmp5499 = (frost$core$Int64) {2};
frost$core$Bit $tmp5500 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5499);
bool $tmp5501 = $tmp5500.value;
if ($tmp5501) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp5502 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5503 = *$tmp5502;
*(&local8) = $tmp5503;
org$frostlang$frostc$IR$Value** $tmp5504 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5505 = *$tmp5504;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5505));
org$frostlang$frostc$IR$Value* $tmp5506 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5506));
*(&local9) = $tmp5505;
org$frostlang$frostc$Type** $tmp5507 = (org$frostlang$frostc$Type**) (param2->$data + 24);
org$frostlang$frostc$Type* $tmp5508 = *$tmp5507;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5508));
org$frostlang$frostc$Type* $tmp5509 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5509));
*(&local10) = $tmp5508;
frost$core$Bit* $tmp5510 = (frost$core$Bit*) (param2->$data + 32);
frost$core$Bit $tmp5511 = *$tmp5510;
// line 1565
org$frostlang$frostc$IR$Value* $tmp5512 = *(&local9);
org$frostlang$frostc$Type* $tmp5513 = *(&local10);
org$frostlang$frostc$CCodeGenerator$writeCast$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(param0, param1, $tmp5512, $tmp5513);
org$frostlang$frostc$Type* $tmp5514 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5514));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp5515 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5515));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block9:;
frost$core$Int64 $tmp5516 = (frost$core$Int64) {3};
frost$core$Bit $tmp5517 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5516);
bool $tmp5518 = $tmp5517.value;
if ($tmp5518) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp5519 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5520 = *$tmp5519;
frost$core$String** $tmp5521 = (frost$core$String**) (param2->$data + 16);
frost$core$String* $tmp5522 = *$tmp5521;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5522));
frost$core$String* $tmp5523 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5523));
*(&local11) = $tmp5522;
// line 1568
frost$io$IndentedOutputStream** $tmp5524 = &param0->out;
frost$io$IndentedOutputStream* $tmp5525 = *$tmp5524;
frost$core$String* $tmp5526 = *(&local11);
frost$core$String* $tmp5527 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5528, $tmp5526);
frost$core$String* $tmp5529 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5527, &$s5530);
$fn5532 $tmp5531 = ($fn5532) ((frost$io$OutputStream*) $tmp5525)->$class->vtable[19];
frost$core$Error* $tmp5533 = $tmp5531(((frost$io$OutputStream*) $tmp5525), $tmp5529);
if ($tmp5533 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5533));
*(&local0) = $tmp5533;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5533));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5529));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5527));
frost$core$String* $tmp5534 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5534));
*(&local11) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5533));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5529));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5527));
frost$core$String* $tmp5535 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5535));
*(&local11) = ((frost$core$String*) NULL);
goto block3;
block11:;
frost$core$Int64 $tmp5536 = (frost$core$Int64) {5};
frost$core$Bit $tmp5537 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5536);
bool $tmp5538 = $tmp5537.value;
if ($tmp5538) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp5539 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5540 = *$tmp5539;
*(&local12) = $tmp5540;
org$frostlang$frostc$IR$Value** $tmp5541 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5542 = *$tmp5541;
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5542));
org$frostlang$frostc$IR$Value* $tmp5543 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5543));
*(&local13) = $tmp5542;
org$frostlang$frostc$IR$Block$ID* $tmp5544 = (org$frostlang$frostc$IR$Block$ID*) (param2->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp5545 = *$tmp5544;
*(&local14) = $tmp5545;
org$frostlang$frostc$IR$Block$ID* $tmp5546 = (org$frostlang$frostc$IR$Block$ID*) (param2->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp5547 = *$tmp5546;
*(&local15) = $tmp5547;
// line 1571
org$frostlang$frostc$IR$Value* $tmp5548 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp5549 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp5550 = *(&local15);
org$frostlang$frostc$CCodeGenerator$writeConditionalBranch$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(param0, $tmp5548, $tmp5549, $tmp5550);
org$frostlang$frostc$IR$Value* $tmp5551 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5551));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block15:;
frost$core$Int64 $tmp5552 = (frost$core$Int64) {6};
frost$core$Bit $tmp5553 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5552);
bool $tmp5554 = $tmp5553.value;
if ($tmp5554) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp5555 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5556 = *$tmp5555;
*(&local16) = $tmp5556;
org$frostlang$frostc$ClassDecl** $tmp5557 = (org$frostlang$frostc$ClassDecl**) (param2->$data + 16);
org$frostlang$frostc$ClassDecl* $tmp5558 = *$tmp5557;
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5558));
org$frostlang$frostc$ClassDecl* $tmp5559 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5559));
*(&local17) = $tmp5558;
// line 1574
org$frostlang$frostc$ClassDecl* $tmp5560 = *(&local17);
org$frostlang$frostc$CCodeGenerator$writeConstruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl(param0, param1, $tmp5560);
org$frostlang$frostc$ClassDecl* $tmp5561 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5561));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block3;
block17:;
frost$core$Int64 $tmp5562 = (frost$core$Int64) {7};
frost$core$Bit $tmp5563 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5562);
bool $tmp5564 = $tmp5563.value;
if ($tmp5564) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp5565 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5566 = *$tmp5565;
*(&local18) = $tmp5566;
org$frostlang$frostc$ClassDecl** $tmp5567 = (org$frostlang$frostc$ClassDecl**) (param2->$data + 16);
org$frostlang$frostc$ClassDecl* $tmp5568 = *$tmp5567;
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5568));
org$frostlang$frostc$ClassDecl* $tmp5569 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5569));
*(&local19) = $tmp5568;
org$frostlang$frostc$FixedArray** $tmp5570 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp5571 = *$tmp5570;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5571));
org$frostlang$frostc$FixedArray* $tmp5572 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5572));
*(&local20) = $tmp5571;
// line 1577
org$frostlang$frostc$ClassDecl* $tmp5573 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp5574 = *(&local20);
org$frostlang$frostc$CCodeGenerator$writeCreateStruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(param0, param1, $tmp5573, $tmp5574);
org$frostlang$frostc$FixedArray* $tmp5575 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5575));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ClassDecl* $tmp5576 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5576));
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block3;
block19:;
frost$core$Int64 $tmp5577 = (frost$core$Int64) {8};
frost$core$Bit $tmp5578 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5577);
bool $tmp5579 = $tmp5578.value;
if ($tmp5579) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp5580 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5581 = *$tmp5580;
*(&local21) = $tmp5581;
org$frostlang$frostc$IR$Value** $tmp5582 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5583 = *$tmp5582;
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5583));
org$frostlang$frostc$IR$Value* $tmp5584 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5584));
*(&local22) = $tmp5583;
org$frostlang$frostc$FixedArray** $tmp5585 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp5586 = *$tmp5585;
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5586));
org$frostlang$frostc$FixedArray* $tmp5587 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5587));
*(&local23) = $tmp5586;
// line 1580
org$frostlang$frostc$IR$Value* $tmp5588 = *(&local22);
org$frostlang$frostc$FixedArray* $tmp5589 = *(&local23);
org$frostlang$frostc$CCodeGenerator$writeDynamicCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT(param0, param1, $tmp5588, ((frost$collections$ListView*) $tmp5589));
org$frostlang$frostc$FixedArray* $tmp5590 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5590));
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp5591 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5591));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block21:;
frost$core$Int64 $tmp5592 = (frost$core$Int64) {9};
frost$core$Bit $tmp5593 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5592);
bool $tmp5594 = $tmp5593.value;
if ($tmp5594) goto block22; else goto block23;
block22:;
goto block3;
block23:;
frost$core$Int64 $tmp5595 = (frost$core$Int64) {10};
frost$core$Bit $tmp5596 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5595);
bool $tmp5597 = $tmp5596.value;
if ($tmp5597) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp5598 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5599 = *$tmp5598;
*(&local24) = $tmp5599;
org$frostlang$frostc$IR$Value** $tmp5600 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5601 = *$tmp5600;
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5601));
org$frostlang$frostc$IR$Value* $tmp5602 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5602));
*(&local25) = $tmp5601;
org$frostlang$frostc$FieldDecl** $tmp5603 = (org$frostlang$frostc$FieldDecl**) (param2->$data + 24);
org$frostlang$frostc$FieldDecl* $tmp5604 = *$tmp5603;
*(&local26) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5604));
org$frostlang$frostc$FieldDecl* $tmp5605 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5605));
*(&local26) = $tmp5604;
// line 1585
org$frostlang$frostc$IR$Value* $tmp5606 = *(&local25);
org$frostlang$frostc$FieldDecl* $tmp5607 = *(&local26);
org$frostlang$frostc$CCodeGenerator$writeExtractField$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(param0, param1, $tmp5606, $tmp5607);
org$frostlang$frostc$FieldDecl* $tmp5608 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5608));
*(&local26) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp5609 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5609));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block25:;
frost$core$Int64 $tmp5610 = (frost$core$Int64) {4};
frost$core$Bit $tmp5611 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5610);
bool $tmp5612 = $tmp5611.value;
if ($tmp5612) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp5613 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5614 = *$tmp5613;
*(&local27) = $tmp5614;
org$frostlang$frostc$IR$Value** $tmp5615 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5616 = *$tmp5615;
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5616));
org$frostlang$frostc$IR$Value* $tmp5617 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5617));
*(&local28) = $tmp5616;
org$frostlang$frostc$ChoiceCase** $tmp5618 = (org$frostlang$frostc$ChoiceCase**) (param2->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp5619 = *$tmp5618;
*(&local29) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5619));
org$frostlang$frostc$ChoiceCase* $tmp5620 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5620));
*(&local29) = $tmp5619;
frost$core$Int64* $tmp5621 = (frost$core$Int64*) (param2->$data + 32);
frost$core$Int64 $tmp5622 = *$tmp5621;
*(&local30) = $tmp5622;
// line 1588
org$frostlang$frostc$IR$Value* $tmp5623 = *(&local28);
org$frostlang$frostc$ChoiceCase* $tmp5624 = *(&local29);
frost$core$Int64 $tmp5625 = *(&local30);
org$frostlang$frostc$CCodeGenerator$writeGetChoiceFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64(param0, param1, $tmp5623, $tmp5624, $tmp5625);
org$frostlang$frostc$ChoiceCase* $tmp5626 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5626));
*(&local29) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$IR$Value* $tmp5627 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5627));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block27:;
frost$core$Int64 $tmp5628 = (frost$core$Int64) {11};
frost$core$Bit $tmp5629 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5628);
bool $tmp5630 = $tmp5629.value;
if ($tmp5630) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp5631 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5632 = *$tmp5631;
*(&local31) = $tmp5632;
org$frostlang$frostc$IR$Value** $tmp5633 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5634 = *$tmp5633;
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5634));
org$frostlang$frostc$IR$Value* $tmp5635 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5635));
*(&local32) = $tmp5634;
org$frostlang$frostc$FieldDecl** $tmp5636 = (org$frostlang$frostc$FieldDecl**) (param2->$data + 24);
org$frostlang$frostc$FieldDecl* $tmp5637 = *$tmp5636;
*(&local33) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5637));
org$frostlang$frostc$FieldDecl* $tmp5638 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5638));
*(&local33) = $tmp5637;
// line 1591
org$frostlang$frostc$IR$Value* $tmp5639 = *(&local32);
org$frostlang$frostc$FieldDecl* $tmp5640 = *(&local33);
org$frostlang$frostc$CCodeGenerator$writeGetFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(param0, param1, $tmp5639, $tmp5640);
org$frostlang$frostc$FieldDecl* $tmp5641 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5641));
*(&local33) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp5642 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5642));
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block29:;
frost$core$Int64 $tmp5643 = (frost$core$Int64) {13};
frost$core$Bit $tmp5644 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5643);
bool $tmp5645 = $tmp5644.value;
if ($tmp5645) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp5646 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5647 = *$tmp5646;
*(&local34) = $tmp5647;
org$frostlang$frostc$IR$Value** $tmp5648 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5649 = *$tmp5648;
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5649));
org$frostlang$frostc$IR$Value* $tmp5650 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5650));
*(&local35) = $tmp5649;
org$frostlang$frostc$ClassDecl** $tmp5651 = (org$frostlang$frostc$ClassDecl**) (param2->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp5652 = *$tmp5651;
*(&local36) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5652));
org$frostlang$frostc$ClassDecl* $tmp5653 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5653));
*(&local36) = $tmp5652;
frost$core$Int64* $tmp5654 = (frost$core$Int64*) (param2->$data + 32);
frost$core$Int64 $tmp5655 = *$tmp5654;
*(&local37) = $tmp5655;
org$frostlang$frostc$Type** $tmp5656 = (org$frostlang$frostc$Type**) (param2->$data + 40);
org$frostlang$frostc$Type* $tmp5657 = *$tmp5656;
*(&local38) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5657));
org$frostlang$frostc$Type* $tmp5658 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5658));
*(&local38) = $tmp5657;
// line 1594
org$frostlang$frostc$IR$Value* $tmp5659 = *(&local35);
org$frostlang$frostc$ClassDecl* $tmp5660 = *(&local36);
frost$core$Int64 $tmp5661 = *(&local37);
org$frostlang$frostc$Type* $tmp5662 = *(&local38);
org$frostlang$frostc$CCodeGenerator$writeGetInterfaceMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int64$org$frostlang$frostc$Type(param0, param1, $tmp5659, $tmp5660, $tmp5661, $tmp5662);
org$frostlang$frostc$Type* $tmp5663 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5663));
*(&local38) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ClassDecl* $tmp5664 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5664));
*(&local36) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp5665 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5665));
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block31:;
frost$core$Int64 $tmp5666 = (frost$core$Int64) {12};
frost$core$Bit $tmp5667 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5666);
bool $tmp5668 = $tmp5667.value;
if ($tmp5668) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp5669 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5670 = *$tmp5669;
*(&local39) = $tmp5670;
org$frostlang$frostc$IR$Value** $tmp5671 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5672 = *$tmp5671;
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5672));
org$frostlang$frostc$IR$Value* $tmp5673 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5673));
*(&local40) = $tmp5672;
frost$core$Int64* $tmp5674 = (frost$core$Int64*) (param2->$data + 24);
frost$core$Int64 $tmp5675 = *$tmp5674;
*(&local41) = $tmp5675;
org$frostlang$frostc$Type** $tmp5676 = (org$frostlang$frostc$Type**) (param2->$data + 32);
org$frostlang$frostc$Type* $tmp5677 = *$tmp5676;
*(&local42) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5677));
org$frostlang$frostc$Type* $tmp5678 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5678));
*(&local42) = $tmp5677;
// line 1597
org$frostlang$frostc$IR$Value* $tmp5679 = *(&local40);
frost$core$Int64 $tmp5680 = *(&local41);
org$frostlang$frostc$Type* $tmp5681 = *(&local42);
org$frostlang$frostc$CCodeGenerator$writeGetVirtualMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$core$Int64$org$frostlang$frostc$Type(param0, param1, $tmp5679, $tmp5680, $tmp5681);
org$frostlang$frostc$Type* $tmp5682 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5682));
*(&local42) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp5683 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5683));
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block33:;
frost$core$Int64 $tmp5684 = (frost$core$Int64) {14};
frost$core$Bit $tmp5685 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5684);
bool $tmp5686 = $tmp5685.value;
if ($tmp5686) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Position* $tmp5687 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5688 = *$tmp5687;
*(&local43) = $tmp5688;
org$frostlang$frostc$IR$Value** $tmp5689 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5690 = *$tmp5689;
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5690));
org$frostlang$frostc$IR$Value* $tmp5691 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5691));
*(&local44) = $tmp5690;
// line 1600
org$frostlang$frostc$IR$Value* $tmp5692 = *(&local44);
org$frostlang$frostc$CCodeGenerator$writeLoad$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, $tmp5692);
org$frostlang$frostc$IR$Value* $tmp5693 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5693));
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block35:;
frost$core$Int64 $tmp5694 = (frost$core$Int64) {15};
frost$core$Bit $tmp5695 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5694);
bool $tmp5696 = $tmp5695.value;
if ($tmp5696) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Position* $tmp5697 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5698 = *$tmp5697;
*(&local45) = $tmp5698;
org$frostlang$frostc$IR$Value** $tmp5699 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5700 = *$tmp5699;
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5700));
org$frostlang$frostc$IR$Value* $tmp5701 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5701));
*(&local46) = $tmp5700;
// line 1603
org$frostlang$frostc$IR$Value* $tmp5702 = *(&local46);
org$frostlang$frostc$CCodeGenerator$writeNegate$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, $tmp5702);
org$frostlang$frostc$IR$Value* $tmp5703 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5703));
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block37:;
frost$core$Int64 $tmp5704 = (frost$core$Int64) {16};
frost$core$Bit $tmp5705 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5704);
bool $tmp5706 = $tmp5705.value;
if ($tmp5706) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp5707 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5708 = *$tmp5707;
*(&local47) = $tmp5708;
org$frostlang$frostc$IR$Value** $tmp5709 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5710 = *$tmp5709;
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5710));
org$frostlang$frostc$IR$Value* $tmp5711 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5711));
*(&local48) = $tmp5710;
// line 1606
org$frostlang$frostc$IR$Value* $tmp5712 = *(&local48);
org$frostlang$frostc$CCodeGenerator$writeNot$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, $tmp5712);
org$frostlang$frostc$IR$Value* $tmp5713 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5713));
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block39:;
frost$core$Int64 $tmp5714 = (frost$core$Int64) {17};
frost$core$Bit $tmp5715 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5714);
bool $tmp5716 = $tmp5715.value;
if ($tmp5716) goto block40; else goto block41;
block40:;
org$frostlang$frostc$Position* $tmp5717 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5718 = *$tmp5717;
*(&local49) = $tmp5718;
org$frostlang$frostc$IR$Value** $tmp5719 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5720 = *$tmp5719;
*(&local50) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5720));
org$frostlang$frostc$IR$Value* $tmp5721 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5721));
*(&local50) = $tmp5720;
org$frostlang$frostc$Type** $tmp5722 = (org$frostlang$frostc$Type**) (param2->$data + 24);
org$frostlang$frostc$Type* $tmp5723 = *$tmp5722;
*(&local51) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5723));
org$frostlang$frostc$Type* $tmp5724 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5724));
*(&local51) = $tmp5723;
// line 1609
org$frostlang$frostc$IR$Value* $tmp5725 = *(&local50);
org$frostlang$frostc$Type* $tmp5726 = *(&local51);
org$frostlang$frostc$CCodeGenerator$writePointerAlloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(param0, param1, $tmp5725, $tmp5726);
org$frostlang$frostc$Type* $tmp5727 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5727));
*(&local51) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp5728 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5728));
*(&local50) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block41:;
frost$core$Int64 $tmp5729 = (frost$core$Int64) {18};
frost$core$Bit $tmp5730 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5729);
bool $tmp5731 = $tmp5730.value;
if ($tmp5731) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp5732 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5733 = *$tmp5732;
*(&local52) = $tmp5733;
org$frostlang$frostc$IR$Value** $tmp5734 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5735 = *$tmp5734;
*(&local53) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5735));
org$frostlang$frostc$IR$Value* $tmp5736 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5736));
*(&local53) = $tmp5735;
// line 1612
org$frostlang$frostc$IR$Value* $tmp5737 = *(&local53);
org$frostlang$frostc$CCodeGenerator$writePointerDestroy$org$frostlang$frostc$IR$Value(param0, $tmp5737);
org$frostlang$frostc$IR$Value* $tmp5738 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5738));
*(&local53) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block43:;
frost$core$Int64 $tmp5739 = (frost$core$Int64) {20};
frost$core$Bit $tmp5740 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5739);
bool $tmp5741 = $tmp5740.value;
if ($tmp5741) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp5742 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5743 = *$tmp5742;
*(&local54) = $tmp5743;
org$frostlang$frostc$IR$Value** $tmp5744 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5745 = *$tmp5744;
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5745));
org$frostlang$frostc$IR$Value* $tmp5746 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5746));
*(&local55) = $tmp5745;
org$frostlang$frostc$IR$Value** $tmp5747 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5748 = *$tmp5747;
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5748));
org$frostlang$frostc$IR$Value* $tmp5749 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5749));
*(&local56) = $tmp5748;
// line 1615
org$frostlang$frostc$IR$Value* $tmp5750 = *(&local55);
org$frostlang$frostc$IR$Value* $tmp5751 = *(&local56);
org$frostlang$frostc$CCodeGenerator$writePointerGetIndex$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, param1, $tmp5750, $tmp5751);
org$frostlang$frostc$IR$Value* $tmp5752 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5752));
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5753 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5753));
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block45:;
frost$core$Int64 $tmp5754 = (frost$core$Int64) {21};
frost$core$Bit $tmp5755 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5754);
bool $tmp5756 = $tmp5755.value;
if ($tmp5756) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp5757 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5758 = *$tmp5757;
*(&local57) = $tmp5758;
org$frostlang$frostc$IR$Value** $tmp5759 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5760 = *$tmp5759;
*(&local58) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5760));
org$frostlang$frostc$IR$Value* $tmp5761 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5761));
*(&local58) = $tmp5760;
org$frostlang$frostc$IR$Value** $tmp5762 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5763 = *$tmp5762;
*(&local59) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5763));
org$frostlang$frostc$IR$Value* $tmp5764 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5764));
*(&local59) = $tmp5763;
// line 1618
org$frostlang$frostc$IR$Value* $tmp5765 = *(&local58);
org$frostlang$frostc$IR$Value* $tmp5766 = *(&local59);
org$frostlang$frostc$CCodeGenerator$writePointerOffset$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, param1, $tmp5765, $tmp5766);
org$frostlang$frostc$IR$Value* $tmp5767 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5767));
*(&local59) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5768 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5768));
*(&local58) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block47:;
frost$core$Int64 $tmp5769 = (frost$core$Int64) {22};
frost$core$Bit $tmp5770 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5769);
bool $tmp5771 = $tmp5770.value;
if ($tmp5771) goto block48; else goto block49;
block48:;
org$frostlang$frostc$Position* $tmp5772 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5773 = *$tmp5772;
*(&local60) = $tmp5773;
org$frostlang$frostc$IR$Value** $tmp5774 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5775 = *$tmp5774;
*(&local61) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5775));
org$frostlang$frostc$IR$Value* $tmp5776 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5776));
*(&local61) = $tmp5775;
org$frostlang$frostc$IR$Value** $tmp5777 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5778 = *$tmp5777;
*(&local62) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5778));
org$frostlang$frostc$IR$Value* $tmp5779 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5779));
*(&local62) = $tmp5778;
org$frostlang$frostc$IR$Value** $tmp5780 = (org$frostlang$frostc$IR$Value**) (param2->$data + 32);
org$frostlang$frostc$IR$Value* $tmp5781 = *$tmp5780;
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5781));
org$frostlang$frostc$IR$Value* $tmp5782 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5782));
*(&local63) = $tmp5781;
// line 1621
org$frostlang$frostc$IR$Value* $tmp5783 = *(&local61);
org$frostlang$frostc$IR$Value* $tmp5784 = *(&local62);
org$frostlang$frostc$IR$Value* $tmp5785 = *(&local63);
org$frostlang$frostc$CCodeGenerator$writePointerRealloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, param1, $tmp5783, $tmp5784, $tmp5785);
org$frostlang$frostc$IR$Value* $tmp5786 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5786));
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5787 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5787));
*(&local62) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5788 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5788));
*(&local61) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block49:;
frost$core$Int64 $tmp5789 = (frost$core$Int64) {24};
frost$core$Bit $tmp5790 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5789);
bool $tmp5791 = $tmp5790.value;
if ($tmp5791) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Position* $tmp5792 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5793 = *$tmp5792;
*(&local64) = $tmp5793;
org$frostlang$frostc$IR$Value** $tmp5794 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5795 = *$tmp5794;
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5795));
org$frostlang$frostc$IR$Value* $tmp5796 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5796));
*(&local65) = $tmp5795;
org$frostlang$frostc$IR$Value** $tmp5797 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5798 = *$tmp5797;
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5798));
org$frostlang$frostc$IR$Value* $tmp5799 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5799));
*(&local66) = $tmp5798;
org$frostlang$frostc$IR$Value** $tmp5800 = (org$frostlang$frostc$IR$Value**) (param2->$data + 32);
org$frostlang$frostc$IR$Value* $tmp5801 = *$tmp5800;
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5801));
org$frostlang$frostc$IR$Value* $tmp5802 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5802));
*(&local67) = $tmp5801;
// line 1624
org$frostlang$frostc$IR$Value* $tmp5803 = *(&local65);
org$frostlang$frostc$IR$Value* $tmp5804 = *(&local66);
org$frostlang$frostc$IR$Value* $tmp5805 = *(&local67);
org$frostlang$frostc$CCodeGenerator$writePointerSetIndex$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, $tmp5803, $tmp5804, $tmp5805);
org$frostlang$frostc$IR$Value* $tmp5806 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5806));
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5807 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5807));
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5808 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5808));
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block51:;
frost$core$Int64 $tmp5809 = (frost$core$Int64) {25};
frost$core$Bit $tmp5810 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5809);
bool $tmp5811 = $tmp5810.value;
if ($tmp5811) goto block52; else goto block53;
block52:;
org$frostlang$frostc$Position* $tmp5812 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5813 = *$tmp5812;
*(&local68) = $tmp5813;
org$frostlang$frostc$IR$Value** $tmp5814 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5815 = *$tmp5814;
*(&local69) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5815));
org$frostlang$frostc$IR$Value* $tmp5816 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5816));
*(&local69) = $tmp5815;
// line 1627
org$frostlang$frostc$IR$Value* $tmp5817 = *(&local69);
org$frostlang$frostc$CCodeGenerator$writeReturn$org$frostlang$frostc$IR$Value$Q(param0, $tmp5817);
org$frostlang$frostc$IR$Value* $tmp5818 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5818));
*(&local69) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block53:;
frost$core$Int64 $tmp5819 = (frost$core$Int64) {26};
frost$core$Bit $tmp5820 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5819);
bool $tmp5821 = $tmp5820.value;
if ($tmp5821) goto block54; else goto block55;
block54:;
org$frostlang$frostc$Position* $tmp5822 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5823 = *$tmp5822;
*(&local70) = $tmp5823;
org$frostlang$frostc$MethodDecl** $tmp5824 = (org$frostlang$frostc$MethodDecl**) (param2->$data + 16);
org$frostlang$frostc$MethodDecl* $tmp5825 = *$tmp5824;
*(&local71) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5825));
org$frostlang$frostc$MethodDecl* $tmp5826 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5826));
*(&local71) = $tmp5825;
org$frostlang$frostc$FixedArray** $tmp5827 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp5828 = *$tmp5827;
*(&local72) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5828));
org$frostlang$frostc$FixedArray* $tmp5829 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5829));
*(&local72) = $tmp5828;
// line 1630
org$frostlang$frostc$MethodDecl* $tmp5830 = *(&local71);
org$frostlang$frostc$FixedArray* $tmp5831 = *(&local72);
org$frostlang$frostc$CCodeGenerator$writeStaticCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT(param0, param1, $tmp5830, ((frost$collections$ListView*) $tmp5831));
org$frostlang$frostc$FixedArray* $tmp5832 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5832));
*(&local72) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp5833 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5833));
*(&local71) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block3;
block55:;
frost$core$Int64 $tmp5834 = (frost$core$Int64) {27};
frost$core$Bit $tmp5835 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5834);
bool $tmp5836 = $tmp5835.value;
if ($tmp5836) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp5837 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5838 = *$tmp5837;
*(&local73) = $tmp5838;
org$frostlang$frostc$IR$Value** $tmp5839 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5840 = *$tmp5839;
*(&local74) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5840));
org$frostlang$frostc$IR$Value* $tmp5841 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5841));
*(&local74) = $tmp5840;
org$frostlang$frostc$IR$Value** $tmp5842 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5843 = *$tmp5842;
*(&local75) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5843));
org$frostlang$frostc$IR$Value* $tmp5844 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5844));
*(&local75) = $tmp5843;
// line 1633
org$frostlang$frostc$IR$Value* $tmp5845 = *(&local74);
org$frostlang$frostc$IR$Value* $tmp5846 = *(&local75);
org$frostlang$frostc$CCodeGenerator$writeStore$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, $tmp5845, $tmp5846);
org$frostlang$frostc$IR$Value* $tmp5847 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5847));
*(&local75) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5848 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5848));
*(&local74) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block57:;
frost$core$Int64 $tmp5849 = (frost$core$Int64) {28};
frost$core$Bit $tmp5850 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5467, $tmp5849);
bool $tmp5851 = $tmp5850.value;
if ($tmp5851) goto block58; else goto block59;
block58:;
org$frostlang$frostc$Position* $tmp5852 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5853 = *$tmp5852;
*(&local76) = $tmp5853;
// line 1636
frost$io$IndentedOutputStream** $tmp5854 = &param0->out;
frost$io$IndentedOutputStream* $tmp5855 = *$tmp5854;
$fn5857 $tmp5856 = ($fn5857) ((frost$io$OutputStream*) $tmp5855)->$class->vtable[19];
frost$core$Error* $tmp5858 = $tmp5856(((frost$io$OutputStream*) $tmp5855), &$s5859);
if ($tmp5858 == NULL) goto block60; else goto block61;
block61:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5858));
*(&local0) = $tmp5858;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5858));
goto block1;
block60:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5858));
goto block3;
block59:;
// line 1639
frost$core$Int64 $tmp5860 = (frost$core$Int64) {1639};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5861, $tmp5860);
abort(); // unreachable
block3:;
goto block2;
block1:;
// line 1644
frost$core$Int64 $tmp5862 = (frost$core$Int64) {1644};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5863, $tmp5862);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5864 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5864));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

// line 1650
frost$core$Weak** $tmp5865 = &param1->owner;
frost$core$Weak* $tmp5866 = *$tmp5865;
frost$core$Object* $tmp5867 = frost$core$Weak$get$R$frost$core$Weak$T($tmp5866);
org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(param0, ((org$frostlang$frostc$ClassDecl*) $tmp5867));
frost$core$Frost$unref$frost$core$Object$Q($tmp5867);
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
// line 1654
*(&local0) = ((frost$core$Error*) NULL);
// line 1655
frost$core$Int64 $tmp5868 = (frost$core$Int64) {0};
frost$collections$Array** $tmp5869 = &param1->locals;
frost$collections$Array* $tmp5870 = *$tmp5869;
ITable* $tmp5871 = ((frost$collections$CollectionView*) $tmp5870)->$class->itable;
while ($tmp5871->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5871 = $tmp5871->next;
}
$fn5873 $tmp5872 = $tmp5871->methods[0];
frost$core$Int64 $tmp5874 = $tmp5872(((frost$collections$CollectionView*) $tmp5870));
frost$core$Bit $tmp5875 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp5876 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp5868, $tmp5874, $tmp5875);
frost$core$Int64 $tmp5877 = $tmp5876.min;
*(&local1) = $tmp5877;
frost$core$Int64 $tmp5878 = $tmp5876.max;
frost$core$Bit $tmp5879 = $tmp5876.inclusive;
bool $tmp5880 = $tmp5879.value;
frost$core$Int64 $tmp5881 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp5882 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp5881);
if ($tmp5880) goto block6; else goto block7;
block6:;
int64_t $tmp5883 = $tmp5877.value;
int64_t $tmp5884 = $tmp5878.value;
bool $tmp5885 = $tmp5883 <= $tmp5884;
frost$core$Bit $tmp5886 = (frost$core$Bit) {$tmp5885};
bool $tmp5887 = $tmp5886.value;
if ($tmp5887) goto block3; else goto block4;
block7:;
int64_t $tmp5888 = $tmp5877.value;
int64_t $tmp5889 = $tmp5878.value;
bool $tmp5890 = $tmp5888 < $tmp5889;
frost$core$Bit $tmp5891 = (frost$core$Bit) {$tmp5890};
bool $tmp5892 = $tmp5891.value;
if ($tmp5892) goto block3; else goto block4;
block3:;
// line 1656
frost$core$Int64 $tmp5893 = *(&local1);
frost$core$Int64$wrapper* $tmp5894;
$tmp5894 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp5894->value = $tmp5893;
frost$core$String* $tmp5895 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s5896, ((frost$core$Object*) $tmp5894));
frost$core$String* $tmp5897 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5895, &$s5898);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5897));
frost$core$String* $tmp5899 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5899));
*(&local2) = $tmp5897;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5894));
// line 1657
frost$collections$Array** $tmp5900 = &param1->locals;
frost$collections$Array* $tmp5901 = *$tmp5900;
frost$core$Int64 $tmp5902 = *(&local1);
frost$core$Object* $tmp5903 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp5901, $tmp5902);
frost$core$String* $tmp5904 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp5903));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5904));
frost$core$String* $tmp5905 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5905));
*(&local3) = $tmp5904;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5904));
frost$core$Frost$unref$frost$core$Object$Q($tmp5903);
// line 1658
frost$io$IndentedOutputStream** $tmp5906 = &param0->out;
frost$io$IndentedOutputStream* $tmp5907 = *$tmp5906;
frost$core$String* $tmp5908 = *(&local3);
frost$core$String* $tmp5909 = frost$core$String$get_asString$R$frost$core$String($tmp5908);
frost$core$String* $tmp5910 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5909, &$s5911);
frost$core$String* $tmp5912 = *(&local2);
frost$core$String* $tmp5913 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5910, $tmp5912);
frost$core$String* $tmp5914 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5913, &$s5915);
$fn5917 $tmp5916 = ($fn5917) ((frost$io$OutputStream*) $tmp5907)->$class->vtable[17];
frost$core$Error* $tmp5918 = $tmp5916(((frost$io$OutputStream*) $tmp5907), $tmp5914);
if ($tmp5918 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5918));
*(&local0) = $tmp5918;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5918));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5913));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5909));
frost$core$String* $tmp5919 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5919));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5920 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5920));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5918));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5913));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5909));
// line 1659
frost$core$Weak** $tmp5921 = &param0->compiler;
frost$core$Weak* $tmp5922 = *$tmp5921;
frost$core$Object* $tmp5923 = frost$core$Weak$get$R$frost$core$Weak$T($tmp5922);
frost$collections$Array** $tmp5924 = &param1->locals;
frost$collections$Array* $tmp5925 = *$tmp5924;
frost$core$Int64 $tmp5926 = *(&local1);
frost$core$Object* $tmp5927 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp5925, $tmp5926);
frost$core$Bit $tmp5928 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp5923), ((org$frostlang$frostc$Type*) $tmp5927));
bool $tmp5929 = $tmp5928.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp5927);
frost$core$Frost$unref$frost$core$Object$Q($tmp5923);
if ($tmp5929) goto block10; else goto block11;
block10:;
// line 1660
frost$io$IndentedOutputStream** $tmp5930 = &param0->out;
frost$io$IndentedOutputStream* $tmp5931 = *$tmp5930;
$fn5933 $tmp5932 = ($fn5933) ((frost$io$OutputStream*) $tmp5931)->$class->vtable[17];
frost$core$Error* $tmp5934 = $tmp5932(((frost$io$OutputStream*) $tmp5931), &$s5935);
if ($tmp5934 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5934));
*(&local0) = $tmp5934;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5934));
frost$core$String* $tmp5936 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5936));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5937 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5937));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5934));
goto block11;
block11:;
// line 1662
frost$io$IndentedOutputStream** $tmp5938 = &param0->out;
frost$io$IndentedOutputStream* $tmp5939 = *$tmp5938;
$fn5941 $tmp5940 = ($fn5941) ((frost$io$OutputStream*) $tmp5939)->$class->vtable[19];
frost$core$Error* $tmp5942 = $tmp5940(((frost$io$OutputStream*) $tmp5939), &$s5943);
if ($tmp5942 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5942));
*(&local0) = $tmp5942;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5942));
frost$core$String* $tmp5944 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5944));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5945 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5945));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5942));
frost$core$String* $tmp5946 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5946));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5947 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5947));
*(&local2) = ((frost$core$String*) NULL);
goto block5;
block5:;
frost$core$Int64 $tmp5948 = *(&local1);
int64_t $tmp5949 = $tmp5878.value;
int64_t $tmp5950 = $tmp5948.value;
int64_t $tmp5951 = $tmp5949 - $tmp5950;
frost$core$Int64 $tmp5952 = (frost$core$Int64) {$tmp5951};
frost$core$UInt64 $tmp5953 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp5952);
if ($tmp5880) goto block17; else goto block18;
block17:;
uint64_t $tmp5954 = $tmp5953.value;
uint64_t $tmp5955 = $tmp5882.value;
bool $tmp5956 = $tmp5954 >= $tmp5955;
frost$core$Bit $tmp5957 = (frost$core$Bit) {$tmp5956};
bool $tmp5958 = $tmp5957.value;
if ($tmp5958) goto block16; else goto block4;
block18:;
uint64_t $tmp5959 = $tmp5953.value;
uint64_t $tmp5960 = $tmp5882.value;
bool $tmp5961 = $tmp5959 > $tmp5960;
frost$core$Bit $tmp5962 = (frost$core$Bit) {$tmp5961};
bool $tmp5963 = $tmp5962.value;
if ($tmp5963) goto block16; else goto block4;
block16:;
int64_t $tmp5964 = $tmp5948.value;
int64_t $tmp5965 = $tmp5881.value;
int64_t $tmp5966 = $tmp5964 + $tmp5965;
frost$core$Int64 $tmp5967 = (frost$core$Int64) {$tmp5966};
*(&local1) = $tmp5967;
goto block3;
block4:;
// line 1664
frost$core$Int64 $tmp5968 = (frost$core$Int64) {0};
frost$collections$Array** $tmp5969 = &param1->blocks;
frost$collections$Array* $tmp5970 = *$tmp5969;
ITable* $tmp5971 = ((frost$collections$CollectionView*) $tmp5970)->$class->itable;
while ($tmp5971->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5971 = $tmp5971->next;
}
$fn5973 $tmp5972 = $tmp5971->methods[0];
frost$core$Int64 $tmp5974 = $tmp5972(((frost$collections$CollectionView*) $tmp5970));
frost$core$Bit $tmp5975 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp5976 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp5968, $tmp5974, $tmp5975);
frost$core$Int64 $tmp5977 = $tmp5976.min;
*(&local4) = $tmp5977;
frost$core$Int64 $tmp5978 = $tmp5976.max;
frost$core$Bit $tmp5979 = $tmp5976.inclusive;
bool $tmp5980 = $tmp5979.value;
frost$core$Int64 $tmp5981 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp5982 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp5981);
if ($tmp5980) goto block22; else goto block23;
block22:;
int64_t $tmp5983 = $tmp5977.value;
int64_t $tmp5984 = $tmp5978.value;
bool $tmp5985 = $tmp5983 <= $tmp5984;
frost$core$Bit $tmp5986 = (frost$core$Bit) {$tmp5985};
bool $tmp5987 = $tmp5986.value;
if ($tmp5987) goto block19; else goto block20;
block23:;
int64_t $tmp5988 = $tmp5977.value;
int64_t $tmp5989 = $tmp5978.value;
bool $tmp5990 = $tmp5988 < $tmp5989;
frost$core$Bit $tmp5991 = (frost$core$Bit) {$tmp5990};
bool $tmp5992 = $tmp5991.value;
if ($tmp5992) goto block19; else goto block20;
block19:;
// line 1665
frost$collections$Array** $tmp5993 = &param1->blocks;
frost$collections$Array* $tmp5994 = *$tmp5993;
frost$core$Int64 $tmp5995 = *(&local4);
frost$core$Object* $tmp5996 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp5994, $tmp5995);
*(&local5) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp5996)));
org$frostlang$frostc$IR$Block* $tmp5997 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5997));
*(&local5) = ((org$frostlang$frostc$IR$Block*) $tmp5996);
frost$core$Frost$unref$frost$core$Object$Q($tmp5996);
// line 1666
frost$core$Int64 $tmp5998 = *(&local4);
frost$core$Int64 $tmp5999 = (frost$core$Int64) {0};
int64_t $tmp6000 = $tmp5998.value;
int64_t $tmp6001 = $tmp5999.value;
bool $tmp6002 = $tmp6000 != $tmp6001;
frost$core$Bit $tmp6003 = (frost$core$Bit) {$tmp6002};
bool $tmp6004 = $tmp6003.value;
if ($tmp6004) goto block24; else goto block26;
block24:;
// line 1667
org$frostlang$frostc$IR$Block* $tmp6005 = *(&local5);
org$frostlang$frostc$IR$Block$ID* $tmp6006 = &$tmp6005->id;
org$frostlang$frostc$IR$Block$ID $tmp6007 = *$tmp6006;
frost$core$String* $tmp6008 = org$frostlang$frostc$IR$Block$ID$get_asString$R$frost$core$String($tmp6007);
frost$core$String* $tmp6009 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6008, &$s6010);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6009));
frost$core$String** $tmp6011 = &param0->currentBlock;
frost$core$String* $tmp6012 = *$tmp6011;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6012));
frost$core$String** $tmp6013 = &param0->currentBlock;
*$tmp6013 = $tmp6009;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6008));
// line 1668
frost$io$IndentedOutputStream** $tmp6014 = &param0->out;
frost$io$IndentedOutputStream* $tmp6015 = *$tmp6014;
frost$core$String** $tmp6016 = &param0->currentBlock;
frost$core$String* $tmp6017 = *$tmp6016;
frost$core$String* $tmp6018 = frost$core$String$get_asString$R$frost$core$String($tmp6017);
frost$core$String* $tmp6019 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6018, &$s6020);
$fn6022 $tmp6021 = ($fn6022) ((frost$io$OutputStream*) $tmp6015)->$class->vtable[19];
frost$core$Error* $tmp6023 = $tmp6021(((frost$io$OutputStream*) $tmp6015), $tmp6019);
if ($tmp6023 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6023));
*(&local0) = $tmp6023;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6018));
org$frostlang$frostc$IR$Block* $tmp6024 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6024));
*(&local5) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6018));
goto block25;
block26:;
// line 1
// line 1671
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6025));
frost$core$String** $tmp6026 = &param0->currentBlock;
frost$core$String* $tmp6027 = *$tmp6026;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6027));
frost$core$String** $tmp6028 = &param0->currentBlock;
*$tmp6028 = &$s6029;
goto block25;
block25:;
// line 1673
frost$core$Int64 $tmp6030 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block* $tmp6031 = *(&local5);
frost$collections$Array** $tmp6032 = &$tmp6031->statements;
frost$collections$Array* $tmp6033 = *$tmp6032;
ITable* $tmp6034 = ((frost$collections$CollectionView*) $tmp6033)->$class->itable;
while ($tmp6034->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp6034 = $tmp6034->next;
}
$fn6036 $tmp6035 = $tmp6034->methods[0];
frost$core$Int64 $tmp6037 = $tmp6035(((frost$collections$CollectionView*) $tmp6033));
frost$core$Bit $tmp6038 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp6039 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp6030, $tmp6037, $tmp6038);
frost$core$Int64 $tmp6040 = $tmp6039.min;
*(&local6) = $tmp6040;
frost$core$Int64 $tmp6041 = $tmp6039.max;
frost$core$Bit $tmp6042 = $tmp6039.inclusive;
bool $tmp6043 = $tmp6042.value;
frost$core$Int64 $tmp6044 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp6045 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp6044);
if ($tmp6043) goto block32; else goto block33;
block32:;
int64_t $tmp6046 = $tmp6040.value;
int64_t $tmp6047 = $tmp6041.value;
bool $tmp6048 = $tmp6046 <= $tmp6047;
frost$core$Bit $tmp6049 = (frost$core$Bit) {$tmp6048};
bool $tmp6050 = $tmp6049.value;
if ($tmp6050) goto block29; else goto block30;
block33:;
int64_t $tmp6051 = $tmp6040.value;
int64_t $tmp6052 = $tmp6041.value;
bool $tmp6053 = $tmp6051 < $tmp6052;
frost$core$Bit $tmp6054 = (frost$core$Bit) {$tmp6053};
bool $tmp6055 = $tmp6054.value;
if ($tmp6055) goto block29; else goto block30;
block29:;
// line 1674
org$frostlang$frostc$IR$Block* $tmp6056 = *(&local5);
frost$collections$Array** $tmp6057 = &$tmp6056->ids;
frost$collections$Array* $tmp6058 = *$tmp6057;
frost$core$Int64 $tmp6059 = *(&local6);
frost$core$Object* $tmp6060 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp6058, $tmp6059);
org$frostlang$frostc$IR$Block* $tmp6061 = *(&local5);
frost$collections$Array** $tmp6062 = &$tmp6061->statements;
frost$collections$Array* $tmp6063 = *$tmp6062;
frost$core$Int64 $tmp6064 = *(&local6);
frost$core$Object* $tmp6065 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp6063, $tmp6064);
org$frostlang$frostc$CCodeGenerator$writeStatement$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Statement(param0, ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp6060)->value, ((org$frostlang$frostc$IR$Statement*) $tmp6065));
frost$core$Frost$unref$frost$core$Object$Q($tmp6065);
frost$core$Frost$unref$frost$core$Object$Q($tmp6060);
goto block31;
block31:;
frost$core$Int64 $tmp6066 = *(&local6);
int64_t $tmp6067 = $tmp6041.value;
int64_t $tmp6068 = $tmp6066.value;
int64_t $tmp6069 = $tmp6067 - $tmp6068;
frost$core$Int64 $tmp6070 = (frost$core$Int64) {$tmp6069};
frost$core$UInt64 $tmp6071 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp6070);
if ($tmp6043) goto block35; else goto block36;
block35:;
uint64_t $tmp6072 = $tmp6071.value;
uint64_t $tmp6073 = $tmp6045.value;
bool $tmp6074 = $tmp6072 >= $tmp6073;
frost$core$Bit $tmp6075 = (frost$core$Bit) {$tmp6074};
bool $tmp6076 = $tmp6075.value;
if ($tmp6076) goto block34; else goto block30;
block36:;
uint64_t $tmp6077 = $tmp6071.value;
uint64_t $tmp6078 = $tmp6045.value;
bool $tmp6079 = $tmp6077 > $tmp6078;
frost$core$Bit $tmp6080 = (frost$core$Bit) {$tmp6079};
bool $tmp6081 = $tmp6080.value;
if ($tmp6081) goto block34; else goto block30;
block34:;
int64_t $tmp6082 = $tmp6066.value;
int64_t $tmp6083 = $tmp6044.value;
int64_t $tmp6084 = $tmp6082 + $tmp6083;
frost$core$Int64 $tmp6085 = (frost$core$Int64) {$tmp6084};
*(&local6) = $tmp6085;
goto block29;
block30:;
org$frostlang$frostc$IR$Block* $tmp6086 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6086));
*(&local5) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block21;
block21:;
frost$core$Int64 $tmp6087 = *(&local4);
int64_t $tmp6088 = $tmp5978.value;
int64_t $tmp6089 = $tmp6087.value;
int64_t $tmp6090 = $tmp6088 - $tmp6089;
frost$core$Int64 $tmp6091 = (frost$core$Int64) {$tmp6090};
frost$core$UInt64 $tmp6092 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp6091);
if ($tmp5980) goto block38; else goto block39;
block38:;
uint64_t $tmp6093 = $tmp6092.value;
uint64_t $tmp6094 = $tmp5982.value;
bool $tmp6095 = $tmp6093 >= $tmp6094;
frost$core$Bit $tmp6096 = (frost$core$Bit) {$tmp6095};
bool $tmp6097 = $tmp6096.value;
if ($tmp6097) goto block37; else goto block20;
block39:;
uint64_t $tmp6098 = $tmp6092.value;
uint64_t $tmp6099 = $tmp5982.value;
bool $tmp6100 = $tmp6098 > $tmp6099;
frost$core$Bit $tmp6101 = (frost$core$Bit) {$tmp6100};
bool $tmp6102 = $tmp6101.value;
if ($tmp6102) goto block37; else goto block20;
block37:;
int64_t $tmp6103 = $tmp6087.value;
int64_t $tmp6104 = $tmp5981.value;
int64_t $tmp6105 = $tmp6103 + $tmp6104;
frost$core$Int64 $tmp6106 = (frost$core$Int64) {$tmp6105};
*(&local4) = $tmp6106;
goto block19;
block20:;
goto block2;
block1:;
// line 1679
frost$core$Int64 $tmp6107 = (frost$core$Int64) {1679};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s6108, $tmp6107);
abort(); // unreachable
block2:;
frost$core$Error* $tmp6109 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6109));
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
frost$io$IndentedOutputStream** $tmp6110 = &param0->out;
frost$io$IndentedOutputStream* $tmp6111 = *$tmp6110;
// line 1686
*(&local0) = ((frost$core$Error*) NULL);
// line 1687
frost$io$IndentedOutputStream** $tmp6112 = &param0->out;
frost$io$IndentedOutputStream* $tmp6113 = *$tmp6112;
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6113));
frost$io$IndentedOutputStream* $tmp6114 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6114));
*(&local1) = $tmp6113;
// line 1688
frost$io$IndentedOutputStream** $tmp6115 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6116 = *$tmp6115;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6116));
frost$io$IndentedOutputStream** $tmp6117 = &param0->out;
frost$io$IndentedOutputStream* $tmp6118 = *$tmp6117;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6118));
frost$io$IndentedOutputStream** $tmp6119 = &param0->out;
*$tmp6119 = $tmp6116;
// line 1689
frost$io$MemoryOutputStream** $tmp6120 = &param0->methodHeaderBuffer;
frost$io$MemoryOutputStream* $tmp6121 = *$tmp6120;
frost$io$MemoryOutputStream$clear($tmp6121);
// line 1690
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR** $tmp6122 = &param0->ir;
org$frostlang$frostc$IR* $tmp6123 = *$tmp6122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6123));
org$frostlang$frostc$IR** $tmp6124 = &param0->ir;
*$tmp6124 = param2;
// line 1691
frost$io$IndentedOutputStream** $tmp6125 = &param0->out;
frost$io$IndentedOutputStream* $tmp6126 = *$tmp6125;
org$frostlang$frostc$Type** $tmp6127 = &param1->returnType;
org$frostlang$frostc$Type* $tmp6128 = *$tmp6127;
frost$core$String* $tmp6129 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp6128);
frost$core$String* $tmp6130 = frost$core$String$get_asString$R$frost$core$String($tmp6129);
frost$core$String* $tmp6131 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6130, &$s6132);
frost$core$String* $tmp6133 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp6134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6131, $tmp6133);
frost$core$String* $tmp6135 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6134, &$s6136);
$fn6138 $tmp6137 = ($fn6138) ((frost$io$OutputStream*) $tmp6126)->$class->vtable[17];
frost$core$Error* $tmp6139 = $tmp6137(((frost$io$OutputStream*) $tmp6126), $tmp6135);
if ($tmp6139 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6139));
*(&local0) = $tmp6139;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6129));
frost$io$IndentedOutputStream* $tmp6140 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6140));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6129));
// line 1692
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6141));
frost$core$String* $tmp6142 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6142));
*(&local2) = &$s6143;
// line 1693
frost$core$Int64 $tmp6144 = (frost$core$Int64) {0};
*(&local3) = $tmp6144;
// line 1694
frost$core$Weak** $tmp6145 = &param0->compiler;
frost$core$Weak* $tmp6146 = *$tmp6145;
frost$core$Object* $tmp6147 = frost$core$Weak$get$R$frost$core$Weak$T($tmp6146);
frost$core$Bit $tmp6148 = org$frostlang$frostc$Compiler$hasSelfParam$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp6147), param1);
bool $tmp6149 = $tmp6148.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp6147);
if ($tmp6149) goto block8; else goto block9;
block8:;
// line 1695
frost$io$IndentedOutputStream** $tmp6150 = &param0->out;
frost$io$IndentedOutputStream* $tmp6151 = *$tmp6150;
frost$core$String* $tmp6152 = org$frostlang$frostc$CCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp6153 = frost$core$String$get_asString$R$frost$core$String($tmp6152);
frost$core$String* $tmp6154 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6153, &$s6155);
frost$core$Int64 $tmp6156 = *(&local3);
frost$core$Int64$wrapper* $tmp6157;
$tmp6157 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp6157->value = $tmp6156;
frost$core$String* $tmp6158 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp6154, ((frost$core$Object*) $tmp6157));
frost$core$String* $tmp6159 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6158, &$s6160);
$fn6162 $tmp6161 = ($fn6162) ((frost$io$OutputStream*) $tmp6151)->$class->vtable[17];
frost$core$Error* $tmp6163 = $tmp6161(((frost$io$OutputStream*) $tmp6151), $tmp6159);
if ($tmp6163 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6163));
*(&local0) = $tmp6163;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6152));
frost$core$String* $tmp6164 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6164));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6165 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6165));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6152));
// line 1696
frost$core$Int64 $tmp6166 = *(&local3);
frost$core$Int64 $tmp6167 = (frost$core$Int64) {1};
int64_t $tmp6168 = $tmp6166.value;
int64_t $tmp6169 = $tmp6167.value;
int64_t $tmp6170 = $tmp6168 + $tmp6169;
frost$core$Int64 $tmp6171 = (frost$core$Int64) {$tmp6170};
*(&local3) = $tmp6171;
// line 1697
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6172));
frost$core$String* $tmp6173 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6173));
*(&local2) = &$s6174;
goto block9;
block9:;
// line 1699
frost$collections$Array** $tmp6175 = &param1->parameters;
frost$collections$Array* $tmp6176 = *$tmp6175;
ITable* $tmp6177 = ((frost$collections$Iterable*) $tmp6176)->$class->itable;
while ($tmp6177->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp6177 = $tmp6177->next;
}
$fn6179 $tmp6178 = $tmp6177->methods[0];
frost$collections$Iterator* $tmp6180 = $tmp6178(((frost$collections$Iterable*) $tmp6176));
goto block12;
block12:;
ITable* $tmp6181 = $tmp6180->$class->itable;
while ($tmp6181->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp6181 = $tmp6181->next;
}
$fn6183 $tmp6182 = $tmp6181->methods[0];
frost$core$Bit $tmp6184 = $tmp6182($tmp6180);
bool $tmp6185 = $tmp6184.value;
if ($tmp6185) goto block14; else goto block13;
block13:;
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp6186 = $tmp6180->$class->itable;
while ($tmp6186->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp6186 = $tmp6186->next;
}
$fn6188 $tmp6187 = $tmp6186->methods[1];
frost$core$Object* $tmp6189 = $tmp6187($tmp6180);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp6189)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp6190 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6190));
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp6189);
// line 1700
frost$io$IndentedOutputStream** $tmp6191 = &param0->out;
frost$io$IndentedOutputStream* $tmp6192 = *$tmp6191;
frost$core$String* $tmp6193 = *(&local2);
frost$core$String* $tmp6194 = frost$core$String$get_asString$R$frost$core$String($tmp6193);
frost$core$String* $tmp6195 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6194, &$s6196);
org$frostlang$frostc$MethodDecl$Parameter* $tmp6197 = *(&local4);
org$frostlang$frostc$Type** $tmp6198 = &$tmp6197->type;
org$frostlang$frostc$Type* $tmp6199 = *$tmp6198;
frost$core$String* $tmp6200 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp6199);
frost$core$String* $tmp6201 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6195, $tmp6200);
frost$core$String* $tmp6202 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6201, &$s6203);
frost$core$Int64 $tmp6204 = *(&local3);
frost$core$Int64$wrapper* $tmp6205;
$tmp6205 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp6205->value = $tmp6204;
frost$core$String* $tmp6206 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp6202, ((frost$core$Object*) $tmp6205));
frost$core$String* $tmp6207 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6206, &$s6208);
$fn6210 $tmp6209 = ($fn6210) ((frost$io$OutputStream*) $tmp6192)->$class->vtable[17];
frost$core$Error* $tmp6211 = $tmp6209(((frost$io$OutputStream*) $tmp6192), $tmp6207);
if ($tmp6211 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6211));
*(&local0) = $tmp6211;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6194));
frost$core$Frost$unref$frost$core$Object$Q($tmp6189);
org$frostlang$frostc$MethodDecl$Parameter* $tmp6212 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6212));
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6180));
frost$core$String* $tmp6213 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6213));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6214 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6214));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6194));
// line 1701
frost$core$Int64 $tmp6215 = *(&local3);
frost$core$Int64 $tmp6216 = (frost$core$Int64) {1};
int64_t $tmp6217 = $tmp6215.value;
int64_t $tmp6218 = $tmp6216.value;
int64_t $tmp6219 = $tmp6217 + $tmp6218;
frost$core$Int64 $tmp6220 = (frost$core$Int64) {$tmp6219};
*(&local3) = $tmp6220;
// line 1702
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6221));
frost$core$String* $tmp6222 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6222));
*(&local2) = &$s6223;
frost$core$Frost$unref$frost$core$Object$Q($tmp6189);
org$frostlang$frostc$MethodDecl$Parameter* $tmp6224 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6224));
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6180));
// line 1704
frost$io$IndentedOutputStream** $tmp6225 = &param0->out;
frost$io$IndentedOutputStream* $tmp6226 = *$tmp6225;
$fn6228 $tmp6227 = ($fn6228) ((frost$io$OutputStream*) $tmp6226)->$class->vtable[19];
frost$core$Error* $tmp6229 = $tmp6227(((frost$io$OutputStream*) $tmp6226), &$s6230);
if ($tmp6229 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6229));
*(&local0) = $tmp6229;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6229));
frost$core$String* $tmp6231 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6231));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6232 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6232));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6229));
// line 1705
frost$io$MemoryOutputStream* $tmp6233 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp6233);
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6233));
frost$io$MemoryOutputStream* $tmp6234 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6234));
*(&local5) = $tmp6233;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6233));
// line 1706
frost$io$IndentedOutputStream* $tmp6235 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream* $tmp6236 = *(&local5);
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp6235, ((frost$io$OutputStream*) $tmp6236));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6235));
frost$io$IndentedOutputStream** $tmp6237 = &param0->out;
frost$io$IndentedOutputStream* $tmp6238 = *$tmp6237;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6238));
frost$io$IndentedOutputStream** $tmp6239 = &param0->out;
*$tmp6239 = $tmp6235;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6235));
// line 1707
org$frostlang$frostc$CCodeGenerator$writeIR$org$frostlang$frostc$IR(param0, param2);
// line 1708
frost$io$IndentedOutputStream** $tmp6240 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6241 = *$tmp6240;
frost$io$MemoryOutputStream** $tmp6242 = &param0->methodHeaderBuffer;
frost$io$MemoryOutputStream* $tmp6243 = *$tmp6242;
$fn6245 $tmp6244 = ($fn6245) ((frost$io$OutputStream*) $tmp6241)->$class->vtable[20];
frost$core$Error* $tmp6246 = $tmp6244(((frost$io$OutputStream*) $tmp6241), ((frost$core$Object*) $tmp6243));
if ($tmp6246 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6246));
*(&local0) = $tmp6246;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6246));
frost$io$MemoryOutputStream* $tmp6247 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6247));
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp6248 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6248));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6249 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6249));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6246));
// line 1709
frost$io$IndentedOutputStream** $tmp6250 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6251 = *$tmp6250;
frost$io$MemoryOutputStream* $tmp6252 = *(&local5);
$fn6254 $tmp6253 = ($fn6254) ((frost$io$OutputStream*) $tmp6251)->$class->vtable[20];
frost$core$Error* $tmp6255 = $tmp6253(((frost$io$OutputStream*) $tmp6251), ((frost$core$Object*) $tmp6252));
if ($tmp6255 == NULL) goto block21; else goto block22;
block22:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6255));
*(&local0) = $tmp6255;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6255));
frost$io$MemoryOutputStream* $tmp6256 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6256));
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp6257 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6257));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6258 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6258));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6255));
// line 1710
frost$io$IndentedOutputStream** $tmp6259 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6260 = *$tmp6259;
$fn6262 $tmp6261 = ($fn6262) ((frost$io$OutputStream*) $tmp6260)->$class->vtable[19];
frost$core$Error* $tmp6263 = $tmp6261(((frost$io$OutputStream*) $tmp6260), &$s6264);
if ($tmp6263 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6263));
*(&local0) = $tmp6263;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6263));
frost$io$MemoryOutputStream* $tmp6265 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6265));
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp6266 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6266));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6267 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6267));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6263));
// line 1711
frost$io$IndentedOutputStream* $tmp6268 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6268));
frost$io$IndentedOutputStream** $tmp6269 = &param0->out;
frost$io$IndentedOutputStream* $tmp6270 = *$tmp6269;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6270));
frost$io$IndentedOutputStream** $tmp6271 = &param0->out;
*$tmp6271 = $tmp6268;
frost$io$MemoryOutputStream* $tmp6272 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6272));
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp6273 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6273));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6274 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6274));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block5;
block4:;
// line 1714
frost$core$Int64 $tmp6275 = (frost$core$Int64) {1714};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s6276, $tmp6275);
abort(); // unreachable
block5:;
frost$core$Error* $tmp6277 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6277));
*(&local0) = ((frost$core$Error*) NULL);
goto block1;
block1:;
frost$io$IndentedOutputStream** $tmp6278 = &param0->out;
frost$io$IndentedOutputStream* $tmp6279 = *$tmp6278;
bool $tmp6280 = $tmp6279 == $tmp6111;
frost$core$Bit $tmp6281 = frost$core$Bit$init$builtin_bit($tmp6280);
bool $tmp6282 = $tmp6281.value;
if ($tmp6282) goto block2; else goto block3;
block2:;
return;
block3:;
frost$core$Int64 $tmp6283 = (frost$core$Int64) {1685};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s6284, $tmp6283, &$s6285);
abort(); // unreachable

}
void org$frostlang$frostc$CCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
frost$io$File* local1 = NULL;
// line 1720
*(&local0) = ((frost$core$Error*) NULL);
// line 1721
org$frostlang$frostc$ClassDecl** $tmp6286 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp6287 = *$tmp6286;
frost$core$Bit $tmp6288 = frost$core$Bit$init$builtin_bit($tmp6287 == NULL);
bool $tmp6289 = $tmp6288.value;
if ($tmp6289) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp6290 = (frost$core$Int64) {1721};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s6291, $tmp6290);
abort(); // unreachable
block3:;
// line 1722
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$ClassDecl** $tmp6292 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp6293 = *$tmp6292;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6293));
org$frostlang$frostc$ClassDecl** $tmp6294 = &param0->currentClass;
*$tmp6294 = param1;
// line 1723
frost$collections$HashSet** $tmp6295 = &param0->imports;
frost$collections$HashSet* $tmp6296 = *$tmp6295;
frost$collections$HashSet$clear($tmp6296);
// line 1724
frost$io$MemoryOutputStream** $tmp6297 = &param0->strings;
frost$io$MemoryOutputStream* $tmp6298 = *$tmp6297;
frost$io$MemoryOutputStream$clear($tmp6298);
// line 1725
frost$io$MemoryOutputStream** $tmp6299 = &param0->declarations;
frost$io$MemoryOutputStream* $tmp6300 = *$tmp6299;
frost$io$MemoryOutputStream$clear($tmp6300);
// line 1726
frost$io$MemoryOutputStream** $tmp6301 = &param0->types;
frost$io$MemoryOutputStream* $tmp6302 = *$tmp6301;
frost$io$MemoryOutputStream$clear($tmp6302);
// line 1727
frost$io$MemoryOutputStream** $tmp6303 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp6304 = *$tmp6303;
frost$io$MemoryOutputStream$clear($tmp6304);
// line 1728
frost$io$MemoryOutputStream** $tmp6305 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp6306 = *$tmp6305;
frost$io$MemoryOutputStream$clear($tmp6306);
// line 1729
frost$collections$HashSet** $tmp6307 = &param0->declared;
frost$collections$HashSet* $tmp6308 = *$tmp6307;
frost$collections$HashSet$clear($tmp6308);
// line 1730
frost$collections$HashSet** $tmp6309 = &param0->writtenTypes;
frost$collections$HashSet* $tmp6310 = *$tmp6309;
frost$collections$HashSet$clear($tmp6310);
// line 1731
frost$collections$HashSet** $tmp6311 = &param0->writtenWrappers;
frost$collections$HashSet* $tmp6312 = *$tmp6311;
frost$collections$HashSet$clear($tmp6312);
// line 1732
frost$collections$HashMap** $tmp6313 = &param0->classConstants;
frost$collections$HashMap* $tmp6314 = *$tmp6313;
frost$collections$HashMap$clear($tmp6314);
// line 1733
frost$collections$IdentityMap** $tmp6315 = &param0->variableNames;
frost$collections$IdentityMap* $tmp6316 = *$tmp6315;
frost$collections$IdentityMap$clear($tmp6316);
// line 1734
frost$core$Int64 $tmp6317 = (frost$core$Int64) {0};
frost$core$Int64* $tmp6318 = &param0->varCount;
*$tmp6318 = $tmp6317;
// line 1735
frost$collections$IdentityMap** $tmp6319 = &param0->methodShims;
frost$collections$IdentityMap* $tmp6320 = *$tmp6319;
frost$collections$IdentityMap$clear($tmp6320);
// line 1736
frost$core$Weak** $tmp6321 = &param0->hCodeGen;
frost$core$Weak* $tmp6322 = *$tmp6321;
frost$core$Object* $tmp6323 = frost$core$Weak$get$R$frost$core$Weak$T($tmp6322);
frost$io$File* $tmp6324 = org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(((org$frostlang$frostc$HCodeGenerator*) $tmp6323), param1, &$s6325);
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6324));
frost$io$File* $tmp6326 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6326));
*(&local1) = $tmp6324;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6324));
frost$core$Frost$unref$frost$core$Object$Q($tmp6323);
// line 1737
frost$io$File* $tmp6327 = *(&local1);
frost$io$File* $tmp6328 = frost$io$File$get_parent$R$frost$io$File$Q($tmp6327);
frost$core$Error* $tmp6329 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp6328);
if ($tmp6329 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6329));
*(&local0) = $tmp6329;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6328));
frost$io$File* $tmp6330 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6330));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6328));
// line 1738
frost$io$IndentedOutputStream* $tmp6331 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp6332 = *(&local1);
frost$core$Maybe* $tmp6333 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp6332);
frost$core$Int64* $tmp6334 = &$tmp6333->$rawValue;
frost$core$Int64 $tmp6335 = *$tmp6334;
int64_t $tmp6336 = $tmp6335.value;
bool $tmp6337 = $tmp6336 == 0;
if ($tmp6337) goto block7; else goto block8;
block8:;
frost$core$Error** $tmp6338 = (frost$core$Error**) ($tmp6333->$data + 0);
frost$core$Error* $tmp6339 = *$tmp6338;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6339));
*(&local0) = $tmp6339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6331));
frost$io$File* $tmp6340 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6340));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block7:;
frost$core$Object** $tmp6341 = (frost$core$Object**) ($tmp6333->$data + 0);
frost$core$Object* $tmp6342 = *$tmp6341;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp6331, ((frost$io$OutputStream*) $tmp6342));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6331));
frost$io$IndentedOutputStream** $tmp6343 = &param0->out;
frost$io$IndentedOutputStream* $tmp6344 = *$tmp6343;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6344));
frost$io$IndentedOutputStream** $tmp6345 = &param0->out;
*$tmp6345 = $tmp6331;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6331));
// line 1739
frost$io$IndentedOutputStream** $tmp6346 = &param0->out;
frost$io$IndentedOutputStream* $tmp6347 = *$tmp6346;
$fn6349 $tmp6348 = ($fn6349) ((frost$io$OutputStream*) $tmp6347)->$class->vtable[22];
frost$core$Error* $tmp6350 = $tmp6348(((frost$io$OutputStream*) $tmp6347));
if ($tmp6350 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6350));
*(&local0) = $tmp6350;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6350));
frost$io$File* $tmp6351 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6351));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6350));
// line 1740
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp6352 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, param1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6352));
// line 1741
frost$core$Weak** $tmp6353 = &param0->compiler;
frost$core$Weak* $tmp6354 = *$tmp6353;
frost$core$Object* $tmp6355 = frost$core$Weak$get$R$frost$core$Weak$T($tmp6354);
frost$core$Bit $tmp6356 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp6355), param1);
bool $tmp6357 = $tmp6356.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp6355);
if ($tmp6357) goto block11; else goto block12;
block11:;
// line 1742
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp6358 = org$frostlang$frostc$CCodeGenerator$getWrapperClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, param1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6358));
goto block12;
block12:;
frost$io$File* $tmp6359 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6359));
*(&local1) = ((frost$io$File*) NULL);
goto block2;
block1:;
// line 1746
frost$core$Weak** $tmp6360 = &param0->compiler;
frost$core$Weak* $tmp6361 = *$tmp6360;
frost$core$Object* $tmp6362 = frost$core$Weak$get$R$frost$core$Weak$T($tmp6361);
org$frostlang$frostc$Position* $tmp6363 = &param1->position;
org$frostlang$frostc$Position $tmp6364 = *$tmp6363;
frost$core$Error* $tmp6365 = *(&local0);
frost$core$String** $tmp6366 = &$tmp6365->message;
frost$core$String* $tmp6367 = *$tmp6366;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp6362), $tmp6364, $tmp6367);
frost$core$Frost$unref$frost$core$Object$Q($tmp6362);
goto block2;
block2:;
frost$core$Error* $tmp6368 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6368));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$end$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

// line 1752
org$frostlang$frostc$CCodeGenerator$finish(param0);
// line 1753
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl** $tmp6369 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp6370 = *$tmp6369;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6370));
org$frostlang$frostc$ClassDecl** $tmp6371 = &param0->currentClass;
*$tmp6371 = ((org$frostlang$frostc$ClassDecl*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$finish(org$frostlang$frostc$CCodeGenerator* param0) {

frost$core$Error* local0 = NULL;
// line 1758
*(&local0) = ((frost$core$Error*) NULL);
// line 1759
frost$io$IndentedOutputStream** $tmp6372 = &param0->out;
frost$io$IndentedOutputStream* $tmp6373 = *$tmp6372;
frost$io$MemoryOutputStream** $tmp6374 = &param0->includes;
frost$io$MemoryOutputStream* $tmp6375 = *$tmp6374;
$fn6377 $tmp6376 = ($fn6377) ((frost$io$OutputStream*) $tmp6373)->$class->vtable[20];
frost$core$Error* $tmp6378 = $tmp6376(((frost$io$OutputStream*) $tmp6373), ((frost$core$Object*) $tmp6375));
if ($tmp6378 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6378));
*(&local0) = $tmp6378;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6378));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6378));
// line 1760
frost$io$MemoryOutputStream** $tmp6379 = &param0->includes;
frost$io$MemoryOutputStream* $tmp6380 = *$tmp6379;
frost$io$MemoryOutputStream$clear($tmp6380);
// line 1761
frost$io$IndentedOutputStream** $tmp6381 = &param0->out;
frost$io$IndentedOutputStream* $tmp6382 = *$tmp6381;
frost$io$MemoryOutputStream** $tmp6383 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp6384 = *$tmp6383;
$fn6386 $tmp6385 = ($fn6386) ((frost$io$OutputStream*) $tmp6382)->$class->vtable[20];
frost$core$Error* $tmp6387 = $tmp6385(((frost$io$OutputStream*) $tmp6382), ((frost$core$Object*) $tmp6384));
if ($tmp6387 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6387));
*(&local0) = $tmp6387;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6387));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6387));
// line 1762
frost$io$MemoryOutputStream** $tmp6388 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp6389 = *$tmp6388;
frost$io$MemoryOutputStream$clear($tmp6389);
// line 1763
frost$io$IndentedOutputStream** $tmp6390 = &param0->out;
frost$io$IndentedOutputStream* $tmp6391 = *$tmp6390;
frost$io$MemoryOutputStream** $tmp6392 = &param0->types;
frost$io$MemoryOutputStream* $tmp6393 = *$tmp6392;
$fn6395 $tmp6394 = ($fn6395) ((frost$io$OutputStream*) $tmp6391)->$class->vtable[20];
frost$core$Error* $tmp6396 = $tmp6394(((frost$io$OutputStream*) $tmp6391), ((frost$core$Object*) $tmp6393));
if ($tmp6396 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6396));
*(&local0) = $tmp6396;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6396));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6396));
// line 1764
frost$io$MemoryOutputStream** $tmp6397 = &param0->types;
frost$io$MemoryOutputStream* $tmp6398 = *$tmp6397;
frost$io$MemoryOutputStream$clear($tmp6398);
// line 1765
frost$io$IndentedOutputStream** $tmp6399 = &param0->out;
frost$io$IndentedOutputStream* $tmp6400 = *$tmp6399;
frost$io$MemoryOutputStream** $tmp6401 = &param0->strings;
frost$io$MemoryOutputStream* $tmp6402 = *$tmp6401;
$fn6404 $tmp6403 = ($fn6404) ((frost$io$OutputStream*) $tmp6400)->$class->vtable[20];
frost$core$Error* $tmp6405 = $tmp6403(((frost$io$OutputStream*) $tmp6400), ((frost$core$Object*) $tmp6402));
if ($tmp6405 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6405));
*(&local0) = $tmp6405;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6405));
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6405));
// line 1766
frost$io$MemoryOutputStream** $tmp6406 = &param0->strings;
frost$io$MemoryOutputStream* $tmp6407 = *$tmp6406;
frost$io$MemoryOutputStream$clear($tmp6407);
// line 1767
frost$io$IndentedOutputStream** $tmp6408 = &param0->out;
frost$io$IndentedOutputStream* $tmp6409 = *$tmp6408;
frost$io$MemoryOutputStream** $tmp6410 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp6411 = *$tmp6410;
$fn6413 $tmp6412 = ($fn6413) ((frost$io$OutputStream*) $tmp6409)->$class->vtable[20];
frost$core$Error* $tmp6414 = $tmp6412(((frost$io$OutputStream*) $tmp6409), ((frost$core$Object*) $tmp6411));
if ($tmp6414 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6414));
*(&local0) = $tmp6414;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6414));
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6414));
// line 1768
frost$io$MemoryOutputStream** $tmp6415 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp6416 = *$tmp6415;
frost$io$MemoryOutputStream$clear($tmp6416);
goto block2;
block1:;
// line 1771
frost$core$Error* $tmp6417 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp6417));
// line 1772
frost$core$Int64 $tmp6418 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp6418);
goto block2;
block2:;
frost$core$Error* $tmp6419 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6419));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$cleanup(org$frostlang$frostc$CCodeGenerator* param0) {

// line 12
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp6420 = &param0->compiler;
frost$core$Weak* $tmp6421 = *$tmp6420;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6421));
frost$io$File** $tmp6422 = &param0->outDir;
frost$io$File* $tmp6423 = *$tmp6422;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6423));
frost$io$IndentedOutputStream** $tmp6424 = &param0->out;
frost$io$IndentedOutputStream* $tmp6425 = *$tmp6424;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6425));
frost$io$MemoryOutputStream** $tmp6426 = &param0->strings;
frost$io$MemoryOutputStream* $tmp6427 = *$tmp6426;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6427));
frost$collections$HashSet** $tmp6428 = &param0->imports;
frost$collections$HashSet* $tmp6429 = *$tmp6428;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6429));
frost$core$Weak** $tmp6430 = &param0->hCodeGen;
frost$core$Weak* $tmp6431 = *$tmp6430;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6431));
org$frostlang$frostc$HCodeGenerator** $tmp6432 = &param0->hCodeGenRetain;
org$frostlang$frostc$HCodeGenerator* $tmp6433 = *$tmp6432;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6433));
org$frostlang$frostc$ClassDecl** $tmp6434 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp6435 = *$tmp6434;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6435));
frost$io$MemoryOutputStream** $tmp6436 = &param0->includes;
frost$io$MemoryOutputStream* $tmp6437 = *$tmp6436;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6437));
frost$io$MemoryOutputStream** $tmp6438 = &param0->declarations;
frost$io$MemoryOutputStream* $tmp6439 = *$tmp6438;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6439));
frost$io$MemoryOutputStream** $tmp6440 = &param0->types;
frost$io$MemoryOutputStream* $tmp6441 = *$tmp6440;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6441));
frost$io$MemoryOutputStream** $tmp6442 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp6443 = *$tmp6442;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6443));
frost$io$IndentedOutputStream** $tmp6444 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6445 = *$tmp6444;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6445));
frost$io$MemoryOutputStream** $tmp6446 = &param0->methodHeaderBuffer;
frost$io$MemoryOutputStream* $tmp6447 = *$tmp6446;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6447));
frost$io$IndentedOutputStream** $tmp6448 = &param0->methodHeader;
frost$io$IndentedOutputStream* $tmp6449 = *$tmp6448;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6449));
frost$io$MemoryOutputStream** $tmp6450 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp6451 = *$tmp6450;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6451));
frost$io$IndentedOutputStream** $tmp6452 = &param0->shims;
frost$io$IndentedOutputStream* $tmp6453 = *$tmp6452;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6453));
frost$collections$HashSet** $tmp6454 = &param0->declared;
frost$collections$HashSet* $tmp6455 = *$tmp6454;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6455));
frost$collections$HashSet** $tmp6456 = &param0->writtenTypes;
frost$collections$HashSet* $tmp6457 = *$tmp6456;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6457));
frost$collections$HashSet** $tmp6458 = &param0->writtenWrappers;
frost$collections$HashSet* $tmp6459 = *$tmp6458;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6459));
frost$collections$HashMap** $tmp6460 = &param0->classConstants;
frost$collections$HashMap* $tmp6461 = *$tmp6460;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6461));
frost$collections$IdentityMap** $tmp6462 = &param0->variableNames;
frost$collections$IdentityMap* $tmp6463 = *$tmp6462;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6463));
frost$core$String** $tmp6464 = &param0->currentBlock;
frost$core$String* $tmp6465 = *$tmp6464;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6465));
org$frostlang$frostc$MethodDecl** $tmp6466 = &param0->currentMethod;
org$frostlang$frostc$MethodDecl* $tmp6467 = *$tmp6466;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6467));
frost$core$String** $tmp6468 = &param0->returnValueVar;
frost$core$String* $tmp6469 = *$tmp6468;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6469));
frost$collections$Stack** $tmp6470 = &param0->enclosingContexts;
frost$collections$Stack* $tmp6471 = *$tmp6470;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6471));
frost$collections$IdentityMap** $tmp6472 = &param0->methodShims;
frost$collections$IdentityMap* $tmp6473 = *$tmp6472;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6473));
frost$collections$IdentityMap** $tmp6474 = &param0->choiceDataSizes;
frost$collections$IdentityMap* $tmp6475 = *$tmp6474;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6475));
frost$collections$HashMap** $tmp6476 = &param0->refs;
frost$collections$HashMap* $tmp6477 = *$tmp6476;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6477));
org$frostlang$frostc$IR** $tmp6478 = &param0->ir;
org$frostlang$frostc$IR* $tmp6479 = *$tmp6478;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6479));
return;

}

