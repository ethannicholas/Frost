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
typedef frost$core$Bit (*$fn244)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn255)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn267)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn279)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn312)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn342)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn405)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn462)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn466)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn471)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn484)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn488)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn493)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn583)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn587)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn592)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn672)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn734)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn738)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn743)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn817)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn856)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn920)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn988)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1017)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1021)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1026)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn1068)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1099)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1103)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1108)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1134)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1185)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1191)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn1228)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1246)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn1297)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1334)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1365)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1426)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1464)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1508)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1520)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1538)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1557)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn1595)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1632)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1648)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Bit (*$fn1664)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1679)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1703)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1728)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1781)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1785)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1790)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn1832)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1868)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1872)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1877)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1903)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1984)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2164)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2168)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2173)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn2199)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2273)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn2401)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2430)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Error* (*$fn2466)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2709)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2719)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2738)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn2767)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2791)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Error* (*$fn2862)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2878)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2899)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2912)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn2930)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2954)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn2992)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn3033)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn3074)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3093)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn3107)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3115)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3148)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3162)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3169)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3188)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3202)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3224)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn3235)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn3243)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3278)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3289)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn3300)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn3312)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3317)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3334)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3346)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn3364)(frost$core$Object*);
typedef frost$core$Bit (*$fn3385)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3518)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3546)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn3594)(frost$core$Object*);
typedef frost$core$String* (*$fn3598)(frost$core$Object*);
typedef frost$core$Error* (*$fn3651)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn3657)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3661)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3666)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn3675)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Error* (*$fn3685)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn3693)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3702)(frost$collections$Key*);
typedef frost$core$Error* (*$fn3709)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn3730)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn3781)(frost$core$Object*);
typedef frost$core$String* (*$fn3793)(frost$core$Object*);
typedef frost$core$Bit (*$fn3978)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn3998)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn4014)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn4024)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn4054)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn4070)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn4080)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn4115)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4284)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4305)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4315)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4334)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn4355)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn4406)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4452)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn4461)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn4465)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn4470)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn4485)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4498)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4515)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn4534)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn4551)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4568)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn4577)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn4581)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn4586)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn4593)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4604)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4617)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4659)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4728)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4771)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4800)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4818)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4843)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4860)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4888)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4933)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4951)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4966)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4982)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4997)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn5013)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn5028)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5070)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5095)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn5111)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn5134)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn5158)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn5177)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn5199)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn5211)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn5223)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn5234)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn5264)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5302)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5323)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5328)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn5353)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn5371)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5387)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5403)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5418)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn5428)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn5432)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn5437)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn5444)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5455)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5468)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5492)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5563)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5888)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn5904)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn5948)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5964)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5972)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn6004)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn6053)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn6067)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn6169)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn6193)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn6210)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn6214)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn6219)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn6241)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn6259)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn6276)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6285)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6293)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn6380)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn6408)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6417)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6426)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6435)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6444)(frost$io$OutputStream*, frost$core$Object*);

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
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x63\x4d\x65\x74\x68\x6f\x64\x54\x79\x70\x65\x28\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x73\x65\x6c\x66\x54\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 163, 3276100450823531157, NULL };
static frost$core$String $s298 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x66\x6e", 3, 1407949, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20", 8, 23394968824372186, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x28\x2a", 3, 1360815, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x28", 2, 14382, NULL };
static frost$core$String $s327 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s375 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s399 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s448 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6c", 2, 13945, NULL };
static frost$core$String $s450 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s517 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x38", 1, 157, NULL };
static frost$core$String $s529 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x31\x36", 2, 15204, NULL };
static frost$core$String $s535 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x33\x32", 2, 15402, NULL };
static frost$core$String $s541 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x36\x34", 2, 15707, NULL };
static frost$core$String $s544 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s559 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s571 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s656 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s724 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s846 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s870 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static frost$core$String $s874 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s887 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s891 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s901 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s911 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static frost$core$String $s913 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s946 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s975 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static frost$core$String $s994 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x69\x73\x20\x6e\x6f\x74\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 16, 538313452881261501, NULL };
static frost$core$String $s995 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1003 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static frost$core$String $s1011 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1013 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1049 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x5f", 2, 13932, NULL };
static frost$core$String $s1056 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1062 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static frost$core$String $s1064 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x6e\x65\x78\x74\x3b\x20", 19, -82469649542869656, NULL };
static frost$core$String $s1072 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static frost$core$String $s1074 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s1078 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s1084 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s1086 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1090 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static frost$core$String $s1093 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1095 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static frost$core$String $s1137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static frost$core$String $s1143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1201 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1205 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1210 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x68\x69\x6d", 5, 14375831170, NULL };
static frost$core$String $s1220 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x5f\x61\x74\x74\x72\x69\x62\x75\x74\x65\x5f\x5f\x28\x28\x77\x65\x61\x6b\x29\x29\x20", 22, 985746977287669079, NULL };
static frost$core$String $s1222 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1226 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1237 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1238 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1240 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1278 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1286 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1290 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x70", 2, 13545, NULL };
static frost$core$String $s1295 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1307 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1309 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1336 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s1355 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static frost$core$String $s1393 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70", 1, 213, NULL };
static frost$core$String $s1395 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1458 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x4f\x62\x6a\x65\x63\x74\x2a\x29\x20", 21, 439094005818830454, NULL };
static frost$core$String $s1460 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s1462 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x46\x72\x6f\x73\x74\x24\x75\x6e\x72\x65\x66\x24\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x4f\x62\x6a\x65\x63\x74\x24\x51\x28", 43, 2176290240124383769, NULL };
static frost$core$String $s1518 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20", 10, -868402795326672399, NULL };
static frost$core$String $s1536 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1549 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1551 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1587 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1593 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1606 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1608 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1634 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s1673 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x73\x75\x6c\x74", 6, 2270301397372, NULL };
static frost$core$String $s1675 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static frost$core$String $s1677 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s1705 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1757 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1766 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1767 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x63\x72\x65\x61\x74\x65\x4d\x65\x74\x68\x6f\x64\x53\x68\x69\x6d\x28\x72\x61\x77\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2c\x20\x65\x66\x66\x65\x63\x74\x69\x76\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x4d\x65\x74\x68\x6f\x64\x53\x68\x69\x6d", 206, -7873525039119771459, NULL };
static frost$core$String $s1775 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1777 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1813 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5f", 9, 1496394141948660801, NULL };
static frost$core$String $s1820 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1826 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static frost$core$String $s1828 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 21, 7276812015398014858, NULL };
static frost$core$String $s1836 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static frost$core$String $s1838 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s1842 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s1847 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1849 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x26", 3, 1451812, NULL };
static frost$core$String $s1855 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1859 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static frost$core$String $s1862 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1864 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1882 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1884 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1891 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1897 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static frost$core$String $s1916 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static frost$core$String $s1918 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1932 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2025 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static frost$core$String $s2026 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2904858913866490275, NULL };
static frost$core$String $s2059 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static frost$core$String $s2060 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static frost$core$String $s2083 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s2085 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2088 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s2090 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s2104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s2107 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 329606069570935975, NULL };
static frost$core$String $s2117 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static frost$core$String $s2123 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static frost$core$String $s2129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s2135 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s2137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2142 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2147 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2151 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2155 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static frost$core$String $s2158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2160 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s2188 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2190 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2193 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static frost$core$String $s2220 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2238 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static frost$core$String $s2259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2904858913866490275, NULL };
static frost$core$String $s2261 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2904858913866490275, NULL };
static frost$core$String $s2267 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x65\x78\x74\x65\x72\x6e\x61\x6c\x20\x67\x6c\x6f\x62\x61\x6c\x20", 19, 7395979908803736066, NULL };
static frost$core$String $s2271 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2301 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static frost$core$String $s2302 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static frost$core$String $s2321 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s2323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2340 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s2343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2351 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 329606069570935975, NULL };
static frost$core$String $s2353 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static frost$core$String $s2359 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static frost$core$String $s2365 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s2371 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s2373 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2378 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2383 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2387 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2391 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static frost$core$String $s2394 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2396 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2435 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2436 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2438 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2460 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x20\x7d\x3b", 4, 233187142, NULL };
static frost$core$String $s2499 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2511 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static frost$core$String $s2513 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2533 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2539 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2551 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2560 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24", 1, 137, NULL };
static frost$core$String $s2565 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2594 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s2596 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s2600 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s2602 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s2606 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s2608 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s2612 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2614 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2618 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2620 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2624 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s2626 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s2630 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s2632 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s2636 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s2638 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s2642 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s2644 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s2648 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s2650 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s2657 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s2659 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s2663 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s2665 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s2670 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s2672 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s2677 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s2679 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s2684 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s2686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s2691 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s2693 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s2699 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s2701 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s2703 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2711 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static frost$core$String $s2717 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2726 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s2729 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2733 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2736 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s2747 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2825 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2832 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s2834 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s2837 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static frost$core$String $s2842 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x29", 2, 19635, NULL };
static frost$core$String $s2855 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static frost$core$String $s2857 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s2860 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static frost$core$String $s2868 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static frost$core$String $s2870 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, -2219903404419143126, NULL };
static frost$core$String $s2876 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s2893 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s2897 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static frost$core$String $s2914 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s3006 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3018 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s3022 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s3026 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static frost$core$String $s3031 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s3048 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3059 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6c\x6c\x69\x6e\x67\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20", 17, 6273213310080951380, NULL };
static frost$core$String $s3061 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x61\x20\x74\x61\x72\x67\x65\x74", 17, 4566770767977439161, NULL };
static frost$core$String $s3062 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s3105 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s3111 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static frost$core$String $s3113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static frost$core$String $s3142 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s3146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s3164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s3171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static frost$core$String $s3186 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c\x3b", 8, 14324497440495800, NULL };
static frost$core$String $s3204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s3218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s3222 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s3239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static frost$core$String $s3241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static frost$core$String $s3257 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s3261 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3265 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 17, 6191911388433222465, NULL };
static frost$core$String $s3267 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20", 22, -4321982028467046391, NULL };
static frost$core$String $s3273 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s3275 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x29\x3b", 15, -9084967859609473468, NULL };
static frost$core$String $s3284 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x76\x61\x6c\x75\x65\x20\x3d\x20", 10, -5658520382000078270, NULL };
static frost$core$String $s3287 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s3314 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s3319 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static frost$core$String $s3332 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x3b", 8, 14324500803727928, NULL };
static frost$core$String $s3348 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s3352 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3354 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3358 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3366 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3370 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3372 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3375 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2d\x3e\x76\x61\x6c\x75\x65", 8, 15272754413107790, NULL };
static frost$core$String $s3402 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s3404 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c\x20\x3f\x20", 11, 7728168270859090233, NULL };
static frost$core$String $s3408 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3a\x20\x28", 4, 137624963, NULL };
static frost$core$String $s3412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x30\x20\x7d\x29", 19, 3502995608209124108, NULL };
static frost$core$String $s3420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static frost$core$String $s3425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x74\x72\x75\x65\x20\x7d\x29", 9, 1573697403055851823, NULL };
static frost$core$String $s3428 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3430 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3433 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static frost$core$String $s3439 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3442 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3444 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3447 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3457 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3467 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3574 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3576 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3579 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3591 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75", 1, 218, NULL };
static frost$core$String $s3603 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s3609 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x30", 2, 14895, NULL };
static frost$core$String $s3612 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s3613 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s3614 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s3615 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s3628 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73", 2, 13952, NULL };
static frost$core$String $s3630 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3638 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 329606069570935975, NULL };
static frost$core$String $s3640 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s3644 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x24\x63\x6c\x61\x73\x73\x2c\x20", 46, -2509429713584291557, NULL };
static frost$core$String $s3646 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s3649 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x68\x61\x72\x38\x2a\x29\x20\x22", 21, 309785060753825527, NULL };
static frost$core$String $s3677 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x78", 1, 221, NULL };
static frost$core$String $s3679 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30\x3e\x32", 3, 1526261, NULL };
static frost$core$String $s3681 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x78", 2, 19613, NULL };
static frost$core$String $s3683 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3697 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22\x2c\x20", 3, 1381611, NULL };
static frost$core$String $s3699 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s3707 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x4e\x55\x4c\x4c\x20\x7d\x3b", 9, 1573656756204980508, NULL };
static frost$core$String $s3714 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s3716 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3720 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3735 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3a\x20", 14, 4299600041167827879, NULL };
static frost$core$String $s3737 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3738 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3752 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3761 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3763 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x66\x61\x6c\x73\x65\x20\x7d\x29", 23, 6429304196845160675, NULL };
static frost$core$String $s3767 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3769 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x4e\x55\x4c\x4c\x29", 7, 151080389671230, NULL };
static frost$core$String $s3805 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x26\x6c\x6f\x63\x61\x6c", 7, 150085078960302, NULL };
static frost$core$String $s3807 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3846 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x61\x72\x61\x6d", 5, 22265977430, NULL };
static frost$core$String $s3848 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3879 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x64\x20", 3, 2111538, NULL };
static frost$core$String $s3881 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x68\x61\x73\x20\x6e\x6f\x74\x20\x62\x65\x65\x6e\x20\x64\x65\x66\x69\x6e\x65\x64", 21, -4672138024147032761, NULL };
static frost$core$String $s3882 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3893 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x20\x72\x65\x66\x3a\x20", 15, -4631094845120441450, NULL };
static frost$core$String $s3895 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3911 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3983 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s3988 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s4006 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4027 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s4029 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s4032 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21", 1, 134, NULL };
static frost$core$String $s4034 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static frost$core$String $s4039 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x3d\x20\x4e\x55\x4c\x4c", 8, 14324797439511602, NULL };
static frost$core$String $s4062 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4083 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s4085 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s4089 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static frost$core$String $s4094 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c", 8, 14295074875294774, NULL };
static frost$core$String $s4146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s4148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s4152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s4154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s4158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s4160 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s4167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s4169 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s4173 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s4175 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s4179 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s4181 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s4185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s4187 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s4194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s4196 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s4203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s4205 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s4212 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s4214 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s4221 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s4223 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s4230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s4232 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s4236 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s4238 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s4242 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s4244 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s4248 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s4250 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s4254 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s4256 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s4258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4266 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4270 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4274 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4278 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4282 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4287 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4301 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static frost$core$String $s4303 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4308 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4322 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static frost$core$String $s4324 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static frost$core$String $s4328 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static frost$core$String $s4332 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4337 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4346 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4352 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 16, -1641588070395923110, NULL };
static frost$core$String $s4362 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s4364 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4370 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s4372 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4385 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4389 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s4394 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x66\x72\x6f\x73\x74\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 19, 1107787609391233434, NULL };
static frost$core$String $s4399 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4403 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s4421 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4429 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4441 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4445 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s4450 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s4456 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4458 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4478 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4491 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4493 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x3b", 2, 22885, NULL };
static frost$core$String $s4512 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4545 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4549 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4566 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s4572 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4574 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4610 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4612 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4619 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s4627 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4644 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4648 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4652 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s4657 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4670 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4684 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static frost$core$String $s4687 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4707 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static frost$core$String $s4711 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s4715 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x29\x20\x28", 4, 147754556, NULL };
static frost$core$String $s4719 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x64\x61\x74\x61\x20", 8, 15719379260890086, NULL };
static frost$core$String $s4723 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b\x20", 2, 14576, NULL };
static frost$core$String $s4725 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s4743 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4756 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static frost$core$String $s4760 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x26", 4, 137655564, NULL };
static frost$core$String $s4764 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static frost$core$String $s4769 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4782 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4792 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static frost$core$String $s4794 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4798 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static frost$core$String $s4808 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static frost$core$String $s4810 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, -2219903404419143126, NULL };
static frost$core$String $s4816 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s4837 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4841 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static frost$core$String $s4862 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s4874 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4878 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4882 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static frost$core$String $s4886 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s4903 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4914 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4918 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s4922 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s4926 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static frost$core$String $s4930 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s4944 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4956 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4960 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x2a", 4, 137655568, NULL };
static frost$core$String $s4964 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4975 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4987 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4991 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x2d", 4, 137655571, NULL };
static frost$core$String $s4995 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5006 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5018 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5022 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x21", 4, 137655559, NULL };
static frost$core$String $s5026 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5037 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5051 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static frost$core$String $s5055 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28\x28", 5, 13903212206, NULL };
static frost$core$String $s5059 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x29\x20\x66\x72\x6f\x73\x74\x41\x6c\x6c\x6f\x63\x28", 14, 1479774152278083113, NULL };
static frost$core$String $s5063 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static frost$core$String $s5067 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static frost$core$String $s5083 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5091 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x46\x72\x65\x65\x28", 10, 1903662118626742793, NULL };
static frost$core$String $s5093 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s5100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5124 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s5128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s5132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s5147 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5163 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s5171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static frost$core$String $s5175 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5190 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5214 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x69\x7a\x65\x20\x66\x6f\x72\x20\x74\x79\x70\x65\x20", 22, 6026307984013519672, NULL };
static frost$core$String $s5216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5228 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5232 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s5239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x66\x72\x6f\x73\x74\x52\x65\x61\x6c\x6c\x6f\x63\x28", 15, -7010250365195627110, NULL };
static frost$core$String $s5243 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5247 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static frost$core$String $s5252 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5256 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static frost$core$String $s5261 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s5279 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5292 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s5296 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d\x20\x3d\x20", 4, 200211019, NULL };
static frost$core$String $s5300 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5311 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5319 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static frost$core$String $s5321 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5330 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x3b", 7, 229300545255632, NULL };
static frost$core$String $s5332 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5345 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5347 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5365 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5381 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5385 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s5401 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s5414 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s5416 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5423 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5461 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5463 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5470 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s5478 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5484 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s5486 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s5490 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5495 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5559 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x2f\x20", 3, 1514527, NULL };
static frost$core$String $s5561 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5890 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x62\x6f\x72\x74\x28\x29\x3b\x20\x2f\x2f\x20\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 23, 8273563093259754029, NULL };
static frost$core$String $s5892 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5894 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5927 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 21864007024, NULL };
static frost$core$String $s5929 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5942 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5946 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5966 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c", 7, 141826707331641, NULL };
static frost$core$String $s5974 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s6041 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6051 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x3b", 2, 16118, NULL };
static frost$core$String $s6056 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30", 1, 149, NULL };
static frost$core$String $s6060 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30", 1, 149, NULL };
static frost$core$String $s6139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s6163 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s6167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s6172 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6174 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6186 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x70\x61\x72\x61\x6d", 6, 1409599243562, NULL };
static frost$core$String $s6191 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s6205 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s6227 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6234 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x70\x61\x72\x61\x6d", 6, 1409599243562, NULL };
static frost$core$String $s6239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6252 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s6254 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s6261 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s6295 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s6307 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s6315 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s6316 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x77\x72\x69\x74\x65\x28\x6d\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2c\x20\x69\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x29", 137, -8068718440467774474, NULL };
static frost$core$String $s6322 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s6356 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x63", 2, 14946, NULL };

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
org$frostlang$frostc$FixedArray** $tmp212 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp213 = *$tmp212;
frost$core$Int64 $tmp214 = (frost$core$Int64) {0};
frost$core$Object* $tmp215 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp213, $tmp214);
frost$core$String** $tmp216 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp215))->name;
frost$core$String* $tmp217 = *$tmp216;
frost$core$Bit $tmp218 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp217, &$s219);
bool $tmp220 = $tmp218.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp215);
if ($tmp220) goto block17; else goto block16;
block17:;
org$frostlang$frostc$FixedArray** $tmp221 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp222 = *$tmp221;
frost$core$Int64 $tmp223 = (frost$core$Int64) {1};
frost$core$Object* $tmp224 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp222, $tmp223);
frost$core$Bit $tmp225 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp224));
bool $tmp226 = $tmp225.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp224);
if ($tmp226) goto block15; else goto block16;
block15:;
// line 117
org$frostlang$frostc$FixedArray** $tmp227 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp228 = *$tmp227;
frost$core$Int64 $tmp229 = (frost$core$Int64) {1};
frost$core$Object* $tmp230 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp228, $tmp229);
frost$core$String* $tmp231 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp230), ((org$frostlang$frostc$Type*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$Frost$unref$frost$core$Object$Q($tmp230);
return $tmp231;
block16:;
goto block7;
block7:;
// line 121
frost$core$Weak** $tmp232 = &param0->hCodeGen;
frost$core$Weak* $tmp233 = *$tmp232;
frost$core$Object* $tmp234 = frost$core$Weak$get$R$frost$core$Weak$T($tmp233);
frost$core$String* $tmp235 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(((org$frostlang$frostc$HCodeGenerator*) $tmp234), param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
frost$core$Frost$unref$frost$core$Object$Q($tmp234);
return $tmp235;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$Type* param2) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$String* local3 = NULL;
frost$core$MutableString* local4 = NULL;
frost$core$String* local5 = NULL;
frost$core$Int64 local6;
frost$core$Error* local7 = NULL;
org$frostlang$frostc$Type$Kind* $tmp236 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp237 = *$tmp236;
org$frostlang$frostc$Type$Kind$wrapper* $tmp238;
$tmp238 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp238->value = $tmp237;
frost$core$Int64 $tmp239 = (frost$core$Int64) {14};
org$frostlang$frostc$Type$Kind $tmp240 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp239);
org$frostlang$frostc$Type$Kind$wrapper* $tmp241;
$tmp241 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp241->value = $tmp240;
ITable* $tmp242 = ((frost$core$Equatable*) $tmp238)->$class->itable;
while ($tmp242->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp242 = $tmp242->next;
}
$fn244 $tmp243 = $tmp242->methods[0];
frost$core$Bit $tmp245 = $tmp243(((frost$core$Equatable*) $tmp238), ((frost$core$Equatable*) $tmp241));
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block1; else goto block2;
block1:;
*(&local2) = $tmp245;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp247 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp248 = *$tmp247;
org$frostlang$frostc$Type$Kind$wrapper* $tmp249;
$tmp249 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp249->value = $tmp248;
frost$core$Int64 $tmp250 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp251 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp250);
org$frostlang$frostc$Type$Kind$wrapper* $tmp252;
$tmp252 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp252->value = $tmp251;
ITable* $tmp253 = ((frost$core$Equatable*) $tmp249)->$class->itable;
while ($tmp253->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp253 = $tmp253->next;
}
$fn255 $tmp254 = $tmp253->methods[0];
frost$core$Bit $tmp256 = $tmp254(((frost$core$Equatable*) $tmp249), ((frost$core$Equatable*) $tmp252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp252)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp249)));
*(&local2) = $tmp256;
goto block3;
block3:;
frost$core$Bit $tmp257 = *(&local2);
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block4; else goto block5;
block4:;
*(&local1) = $tmp257;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp259 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp260 = *$tmp259;
org$frostlang$frostc$Type$Kind$wrapper* $tmp261;
$tmp261 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp261->value = $tmp260;
frost$core$Int64 $tmp262 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp263 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp262);
org$frostlang$frostc$Type$Kind$wrapper* $tmp264;
$tmp264 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp264->value = $tmp263;
ITable* $tmp265 = ((frost$core$Equatable*) $tmp261)->$class->itable;
while ($tmp265->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp265 = $tmp265->next;
}
$fn267 $tmp266 = $tmp265->methods[0];
frost$core$Bit $tmp268 = $tmp266(((frost$core$Equatable*) $tmp261), ((frost$core$Equatable*) $tmp264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp264)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp261)));
*(&local1) = $tmp268;
goto block6;
block6:;
frost$core$Bit $tmp269 = *(&local1);
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block7; else goto block8;
block7:;
*(&local0) = $tmp269;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp271 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp272 = *$tmp271;
org$frostlang$frostc$Type$Kind$wrapper* $tmp273;
$tmp273 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp273->value = $tmp272;
frost$core$Int64 $tmp274 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp275 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp274);
org$frostlang$frostc$Type$Kind$wrapper* $tmp276;
$tmp276 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp276->value = $tmp275;
ITable* $tmp277 = ((frost$core$Equatable*) $tmp273)->$class->itable;
while ($tmp277->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp277 = $tmp277->next;
}
$fn279 $tmp278 = $tmp277->methods[0];
frost$core$Bit $tmp280 = $tmp278(((frost$core$Equatable*) $tmp273), ((frost$core$Equatable*) $tmp276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp276)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp273)));
*(&local0) = $tmp280;
goto block9;
block9:;
frost$core$Bit $tmp281 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp241)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp238)));
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp283 = (frost$core$Int64) {126};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s284, $tmp283, &$s285);
abort(); // unreachable
block10:;
// line 127
frost$core$Int64* $tmp286 = &param0->varCount;
frost$core$Int64 $tmp287 = *$tmp286;
frost$core$Int64 $tmp288 = (frost$core$Int64) {1};
int64_t $tmp289 = $tmp287.value;
int64_t $tmp290 = $tmp288.value;
int64_t $tmp291 = $tmp289 + $tmp290;
frost$core$Int64 $tmp292 = (frost$core$Int64) {$tmp291};
frost$core$Int64* $tmp293 = &param0->varCount;
*$tmp293 = $tmp292;
// line 128
frost$core$Int64* $tmp294 = &param0->varCount;
frost$core$Int64 $tmp295 = *$tmp294;
frost$core$Int64$wrapper* $tmp296;
$tmp296 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp296->value = $tmp295;
frost$core$String* $tmp297 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s298, ((frost$core$Object*) $tmp296));
frost$core$String* $tmp299 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp297, &$s300);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$String* $tmp301 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
*(&local3) = $tmp299;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
// line 129
frost$core$MutableString* $tmp302 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp302, &$s303);
*(&local4) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$core$MutableString* $tmp304 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
*(&local4) = $tmp302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// line 130
frost$core$MutableString* $tmp305 = *(&local4);
org$frostlang$frostc$FixedArray** $tmp306 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp307 = *$tmp306;
org$frostlang$frostc$FixedArray** $tmp308 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp309 = *$tmp308;
ITable* $tmp310 = ((frost$collections$CollectionView*) $tmp309)->$class->itable;
while ($tmp310->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp310 = $tmp310->next;
}
$fn312 $tmp311 = $tmp310->methods[0];
frost$core$Int64 $tmp313 = $tmp311(((frost$collections$CollectionView*) $tmp309));
frost$core$Int64 $tmp314 = (frost$core$Int64) {1};
int64_t $tmp315 = $tmp313.value;
int64_t $tmp316 = $tmp314.value;
int64_t $tmp317 = $tmp315 - $tmp316;
frost$core$Int64 $tmp318 = (frost$core$Int64) {$tmp317};
frost$core$Object* $tmp319 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp307, $tmp318);
frost$core$String* $tmp320 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp319));
frost$core$MutableString$append$frost$core$String($tmp305, $tmp320);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
frost$core$Frost$unref$frost$core$Object$Q($tmp319);
// line 131
frost$core$MutableString* $tmp321 = *(&local4);
frost$core$MutableString$append$frost$core$String($tmp321, &$s322);
// line 132
frost$core$MutableString* $tmp323 = *(&local4);
frost$core$String* $tmp324 = *(&local3);
frost$core$MutableString$append$frost$core$String($tmp323, $tmp324);
// line 133
frost$core$MutableString* $tmp325 = *(&local4);
frost$core$MutableString$append$frost$core$String($tmp325, &$s326);
// line 134
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s327));
frost$core$String* $tmp328 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local5) = &$s329;
// line 135
frost$core$Bit $tmp330 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block12; else goto block13;
block12:;
// line 136
frost$core$MutableString* $tmp332 = *(&local4);
frost$core$String* $tmp333 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param2);
frost$core$MutableString$append$frost$core$String($tmp332, $tmp333);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
// line 137
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s334));
frost$core$String* $tmp335 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
*(&local5) = &$s336;
goto block13;
block13:;
// line 139
frost$core$Int64 $tmp337 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray** $tmp338 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp339 = *$tmp338;
ITable* $tmp340 = ((frost$collections$CollectionView*) $tmp339)->$class->itable;
while ($tmp340->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp340 = $tmp340->next;
}
$fn342 $tmp341 = $tmp340->methods[0];
frost$core$Int64 $tmp343 = $tmp341(((frost$collections$CollectionView*) $tmp339));
frost$core$Int64 $tmp344 = (frost$core$Int64) {1};
int64_t $tmp345 = $tmp343.value;
int64_t $tmp346 = $tmp344.value;
int64_t $tmp347 = $tmp345 - $tmp346;
frost$core$Int64 $tmp348 = (frost$core$Int64) {$tmp347};
frost$core$Bit $tmp349 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp350 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp337, $tmp348, $tmp349);
frost$core$Int64 $tmp351 = $tmp350.min;
*(&local6) = $tmp351;
frost$core$Int64 $tmp352 = $tmp350.max;
frost$core$Bit $tmp353 = $tmp350.inclusive;
bool $tmp354 = $tmp353.value;
frost$core$Int64 $tmp355 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp356 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp355);
if ($tmp354) goto block17; else goto block18;
block17:;
int64_t $tmp357 = $tmp351.value;
int64_t $tmp358 = $tmp352.value;
bool $tmp359 = $tmp357 <= $tmp358;
frost$core$Bit $tmp360 = (frost$core$Bit) {$tmp359};
bool $tmp361 = $tmp360.value;
if ($tmp361) goto block14; else goto block15;
block18:;
int64_t $tmp362 = $tmp351.value;
int64_t $tmp363 = $tmp352.value;
bool $tmp364 = $tmp362 < $tmp363;
frost$core$Bit $tmp365 = (frost$core$Bit) {$tmp364};
bool $tmp366 = $tmp365.value;
if ($tmp366) goto block14; else goto block15;
block14:;
// line 140
frost$core$MutableString* $tmp367 = *(&local4);
frost$core$String* $tmp368 = *(&local5);
frost$core$MutableString$append$frost$core$String($tmp367, $tmp368);
// line 141
frost$core$MutableString* $tmp369 = *(&local4);
org$frostlang$frostc$FixedArray** $tmp370 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp371 = *$tmp370;
frost$core$Int64 $tmp372 = *(&local6);
frost$core$Object* $tmp373 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp371, $tmp372);
frost$core$String* $tmp374 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp373));
frost$core$MutableString$append$frost$core$String($tmp369, $tmp374);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
frost$core$Frost$unref$frost$core$Object$Q($tmp373);
// line 142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s375));
frost$core$String* $tmp376 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
*(&local5) = &$s377;
goto block16;
block16:;
frost$core$Int64 $tmp378 = *(&local6);
int64_t $tmp379 = $tmp352.value;
int64_t $tmp380 = $tmp378.value;
int64_t $tmp381 = $tmp379 - $tmp380;
frost$core$Int64 $tmp382 = (frost$core$Int64) {$tmp381};
frost$core$UInt64 $tmp383 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp382);
if ($tmp354) goto block20; else goto block21;
block20:;
uint64_t $tmp384 = $tmp383.value;
uint64_t $tmp385 = $tmp356.value;
bool $tmp386 = $tmp384 >= $tmp385;
frost$core$Bit $tmp387 = (frost$core$Bit) {$tmp386};
bool $tmp388 = $tmp387.value;
if ($tmp388) goto block19; else goto block15;
block21:;
uint64_t $tmp389 = $tmp383.value;
uint64_t $tmp390 = $tmp356.value;
bool $tmp391 = $tmp389 > $tmp390;
frost$core$Bit $tmp392 = (frost$core$Bit) {$tmp391};
bool $tmp393 = $tmp392.value;
if ($tmp393) goto block19; else goto block15;
block19:;
int64_t $tmp394 = $tmp378.value;
int64_t $tmp395 = $tmp355.value;
int64_t $tmp396 = $tmp394 + $tmp395;
frost$core$Int64 $tmp397 = (frost$core$Int64) {$tmp396};
*(&local6) = $tmp397;
goto block14;
block15:;
// line 144
frost$core$MutableString* $tmp398 = *(&local4);
frost$core$MutableString$append$frost$core$String($tmp398, &$s399);
// line 145
*(&local7) = ((frost$core$Error*) NULL);
// line 146
frost$io$MemoryOutputStream** $tmp400 = &param0->types;
frost$io$MemoryOutputStream* $tmp401 = *$tmp400;
frost$core$MutableString* $tmp402 = *(&local4);
frost$core$String* $tmp403 = frost$core$MutableString$finish$R$frost$core$String($tmp402);
$fn405 $tmp404 = ($fn405) ((frost$io$OutputStream*) $tmp401)->$class->vtable[19];
frost$core$Error* $tmp406 = $tmp404(((frost$io$OutputStream*) $tmp401), $tmp403);
if ($tmp406 == NULL) goto block24; else goto block25;
block25:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
*(&local7) = $tmp406;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
goto block22;
block24:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
goto block23;
block22:;
// line 149
frost$core$Int64 $tmp407 = (frost$core$Int64) {149};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s408, $tmp407);
abort(); // unreachable
block23:;
frost$core$Error* $tmp409 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local7) = ((frost$core$Error*) NULL);
// line 151
frost$core$String* $tmp410 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
frost$core$String* $tmp411 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
*(&local5) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp412 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
*(&local4) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp413 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
*(&local3) = ((frost$core$String*) NULL);
return $tmp410;

}
void org$frostlang$frostc$CCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Compiler* param1) {

// line 156
frost$core$Weak* $tmp414 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp414, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
frost$core$Weak** $tmp415 = &param0->compiler;
frost$core$Weak* $tmp416 = *$tmp415;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
frost$core$Weak** $tmp417 = &param0->compiler;
*$tmp417 = $tmp414;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
// line 157
frost$core$Weak** $tmp418 = &param0->hCodeGen;
frost$core$Weak* $tmp419 = *$tmp418;
frost$core$Object* $tmp420 = frost$core$Weak$get$R$frost$core$Weak$T($tmp419);
org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(((org$frostlang$frostc$HCodeGenerator*) $tmp420), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp420);
return;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0) {

// line 236
frost$core$Int64* $tmp421 = &param0->varCount;
frost$core$Int64 $tmp422 = *$tmp421;
frost$core$Int64 $tmp423 = (frost$core$Int64) {1};
int64_t $tmp424 = $tmp422.value;
int64_t $tmp425 = $tmp423.value;
int64_t $tmp426 = $tmp424 + $tmp425;
frost$core$Int64 $tmp427 = (frost$core$Int64) {$tmp426};
frost$core$Int64* $tmp428 = &param0->varCount;
*$tmp428 = $tmp427;
// line 237
frost$core$Int64* $tmp429 = &param0->varCount;
frost$core$Int64 $tmp430 = *$tmp429;
frost$core$Int64$wrapper* $tmp431;
$tmp431 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp431->value = $tmp430;
frost$core$String* $tmp432 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s433, ((frost$core$Object*) $tmp431));
frost$core$String* $tmp434 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp432, &$s435);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
return $tmp434;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$nextLabel$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0) {

// line 241
frost$core$Int64* $tmp436 = &param0->varCount;
frost$core$Int64 $tmp437 = *$tmp436;
frost$core$Int64 $tmp438 = (frost$core$Int64) {1};
int64_t $tmp439 = $tmp437.value;
int64_t $tmp440 = $tmp438.value;
int64_t $tmp441 = $tmp439 + $tmp440;
frost$core$Int64 $tmp442 = (frost$core$Int64) {$tmp441};
frost$core$Int64* $tmp443 = &param0->varCount;
*$tmp443 = $tmp442;
// line 242
frost$core$Int64* $tmp444 = &param0->varCount;
frost$core$Int64 $tmp445 = *$tmp444;
frost$core$Int64$wrapper* $tmp446;
$tmp446 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp446->value = $tmp445;
frost$core$String* $tmp447 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s448, ((frost$core$Object*) $tmp446));
frost$core$String* $tmp449 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp447, &$s450);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
return $tmp449;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Int64$nullable local0;
org$frostlang$frostc$ChoiceCase* local1 = NULL;
frost$core$Int64 local2;
org$frostlang$frostc$Type* local3 = NULL;
// line 246
frost$collections$IdentityMap** $tmp451 = &param0->choiceDataSizes;
frost$collections$IdentityMap* $tmp452 = *$tmp451;
frost$core$Object* $tmp453 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp452, ((frost$core$Object*) param1));
*(&local0) = ($tmp453 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp453)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 });
frost$core$Frost$unref$frost$core$Object$Q($tmp453);
// line 247
frost$core$Int64$nullable $tmp454 = *(&local0);
frost$core$Bit $tmp455 = frost$core$Bit$init$builtin_bit(!$tmp454.nonnull);
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block1; else goto block2;
block1:;
// line 248
frost$core$Int64 $tmp457 = (frost$core$Int64) {0};
*(&local0) = ((frost$core$Int64$nullable) { $tmp457, true });
// line 249
frost$collections$Array** $tmp458 = &param1->choiceCases;
frost$collections$Array* $tmp459 = *$tmp458;
ITable* $tmp460 = ((frost$collections$Iterable*) $tmp459)->$class->itable;
while ($tmp460->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp460 = $tmp460->next;
}
$fn462 $tmp461 = $tmp460->methods[0];
frost$collections$Iterator* $tmp463 = $tmp461(((frost$collections$Iterable*) $tmp459));
goto block3;
block3:;
ITable* $tmp464 = $tmp463->$class->itable;
while ($tmp464->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp464 = $tmp464->next;
}
$fn466 $tmp465 = $tmp464->methods[0];
frost$core$Bit $tmp467 = $tmp465($tmp463);
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block5; else goto block4;
block4:;
*(&local1) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp469 = $tmp463->$class->itable;
while ($tmp469->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp469 = $tmp469->next;
}
$fn471 $tmp470 = $tmp469->methods[1];
frost$core$Object* $tmp472 = $tmp470($tmp463);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp472)));
org$frostlang$frostc$ChoiceCase* $tmp473 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
*(&local1) = ((org$frostlang$frostc$ChoiceCase*) $tmp472);
// line 250
frost$core$Weak** $tmp474 = &param0->compiler;
frost$core$Weak* $tmp475 = *$tmp474;
frost$core$Object* $tmp476 = frost$core$Weak$get$R$frost$core$Weak$T($tmp475);
org$frostlang$frostc$ChoiceCase* $tmp477 = *(&local1);
org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ChoiceCase(((org$frostlang$frostc$Compiler*) $tmp476), $tmp477);
frost$core$Frost$unref$frost$core$Object$Q($tmp476);
// line 251
frost$core$Int64 $tmp478 = (frost$core$Int64) {0};
*(&local2) = $tmp478;
// line 252
org$frostlang$frostc$ChoiceCase* $tmp479 = *(&local1);
frost$collections$Array** $tmp480 = &$tmp479->fields;
frost$collections$Array* $tmp481 = *$tmp480;
ITable* $tmp482 = ((frost$collections$Iterable*) $tmp481)->$class->itable;
while ($tmp482->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp482 = $tmp482->next;
}
$fn484 $tmp483 = $tmp482->methods[0];
frost$collections$Iterator* $tmp485 = $tmp483(((frost$collections$Iterable*) $tmp481));
goto block6;
block6:;
ITable* $tmp486 = $tmp485->$class->itable;
while ($tmp486->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp486 = $tmp486->next;
}
$fn488 $tmp487 = $tmp486->methods[0];
frost$core$Bit $tmp489 = $tmp487($tmp485);
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block8; else goto block7;
block7:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp491 = $tmp485->$class->itable;
while ($tmp491->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp491 = $tmp491->next;
}
$fn493 $tmp492 = $tmp491->methods[1];
frost$core$Object* $tmp494 = $tmp492($tmp485);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp494)));
org$frostlang$frostc$Type* $tmp495 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp494);
// line 254
frost$core$Int64 $tmp496 = *(&local2);
org$frostlang$frostc$Type* $tmp497 = *(&local3);
frost$core$Int64 $tmp498 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp497);
int64_t $tmp499 = $tmp496.value;
int64_t $tmp500 = $tmp498.value;
int64_t $tmp501 = $tmp499 + $tmp500;
frost$core$Int64 $tmp502 = (frost$core$Int64) {$tmp501};
*(&local2) = $tmp502;
frost$core$Frost$unref$frost$core$Object$Q($tmp494);
org$frostlang$frostc$Type* $tmp503 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
// line 256
frost$core$Int64$nullable $tmp504 = *(&local0);
frost$core$Int64 $tmp505 = *(&local2);
frost$core$Int64 $tmp506 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64) $tmp504.value), $tmp505);
*(&local0) = ((frost$core$Int64$nullable) { $tmp506, true });
frost$core$Frost$unref$frost$core$Object$Q($tmp472);
org$frostlang$frostc$ChoiceCase* $tmp507 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
*(&local1) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
// line 258
frost$collections$IdentityMap** $tmp508 = &param0->choiceDataSizes;
frost$collections$IdentityMap* $tmp509 = *$tmp508;
frost$core$Int64$nullable $tmp510 = *(&local0);
frost$core$Int64$wrapper* $tmp511;
$tmp511 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp511->value = ((frost$core$Int64) $tmp510.value);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V($tmp509, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
goto block2;
block2:;
// line 260
frost$core$Int64$nullable $tmp512 = *(&local0);
return ((frost$core$Int64) $tmp512.value);

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
frost$core$Int64 local1;
org$frostlang$frostc$FieldDecl* local2 = NULL;
frost$core$Int64 local3;
frost$core$Int64 local4;
// line 264
frost$core$Bit* $tmp513 = &param1->resolved;
frost$core$Bit $tmp514 = *$tmp513;
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp516 = (frost$core$Int64) {264};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s517, $tmp516);
abort(); // unreachable
block1:;
// line 265
frost$core$Bit $tmp518 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(param1);
bool $tmp519 = $tmp518.value;
if ($tmp519) goto block3; else goto block4;
block3:;
// line 266
frost$core$String** $tmp520 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp521 = *$tmp520;
frost$core$Bit $tmp522 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp521, &$s523);
bool $tmp524 = $tmp522.value;
if ($tmp524) goto block5; else goto block6;
block5:;
// line 267
frost$core$Int64 $tmp525 = (frost$core$Int64) {1};
return $tmp525;
block6:;
// line 269
frost$core$String** $tmp526 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp527 = *$tmp526;
frost$core$Bit $tmp528 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp527, &$s529);
bool $tmp530 = $tmp528.value;
if ($tmp530) goto block7; else goto block8;
block7:;
// line 270
frost$core$Int64 $tmp531 = (frost$core$Int64) {2};
return $tmp531;
block8:;
// line 272
frost$core$String** $tmp532 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp533 = *$tmp532;
frost$core$Bit $tmp534 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp533, &$s535);
bool $tmp536 = $tmp534.value;
if ($tmp536) goto block9; else goto block10;
block9:;
// line 273
frost$core$Int64 $tmp537 = (frost$core$Int64) {4};
return $tmp537;
block10:;
// line 275
frost$core$String** $tmp538 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp539 = *$tmp538;
frost$core$Bit $tmp540 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp539, &$s541);
bool $tmp542 = $tmp540.value;
if ($tmp542) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp543 = (frost$core$Int64) {275};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s544, $tmp543);
abort(); // unreachable
block11:;
// line 276
frost$core$Int64 $tmp545 = (frost$core$Int64) {8};
return $tmp545;
block4:;
// line 278
org$frostlang$frostc$Type* $tmp546 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp547 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param1, $tmp546);
bool $tmp548 = $tmp547.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
if ($tmp548) goto block13; else goto block14;
block13:;
// line 279
frost$core$Int64 $tmp549 = (frost$core$Int64) {1};
return $tmp549;
block14:;
// line 281
frost$core$Weak** $tmp550 = &param0->compiler;
frost$core$Weak* $tmp551 = *$tmp550;
frost$core$Object* $tmp552 = frost$core$Weak$get$R$frost$core$Weak$T($tmp551);
org$frostlang$frostc$ClassDecl* $tmp553 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp552), param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
org$frostlang$frostc$ClassDecl* $tmp554 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
*(&local0) = $tmp553;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
frost$core$Frost$unref$frost$core$Object$Q($tmp552);
// line 282
org$frostlang$frostc$ClassDecl* $tmp555 = *(&local0);
frost$core$Bit $tmp556 = frost$core$Bit$init$builtin_bit($tmp555 != NULL);
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp558 = (frost$core$Int64) {282};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s559, $tmp558);
abort(); // unreachable
block15:;
// line 283
frost$core$Weak** $tmp560 = &param0->compiler;
frost$core$Weak* $tmp561 = *$tmp560;
frost$core$Object* $tmp562 = frost$core$Weak$get$R$frost$core$Weak$T($tmp561);
org$frostlang$frostc$ClassDecl* $tmp563 = *(&local0);
frost$core$Bit $tmp564 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp562), $tmp563);
frost$core$Bit $tmp565 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp564);
bool $tmp566 = $tmp565.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp562);
if ($tmp566) goto block17; else goto block19;
block19:;
org$frostlang$frostc$ClassDecl* $tmp567 = *(&local0);
frost$core$String** $tmp568 = &$tmp567->name;
frost$core$String* $tmp569 = *$tmp568;
frost$core$Bit $tmp570 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp569, &$s571);
bool $tmp572 = $tmp570.value;
if ($tmp572) goto block17; else goto block18;
block17:;
// line 284
frost$core$Int64 $tmp573 = (frost$core$Int64) {8};
org$frostlang$frostc$ClassDecl* $tmp574 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp573;
block18:;
// line 286
frost$core$Int64 $tmp575 = (frost$core$Int64) {0};
*(&local1) = $tmp575;
// line 287
frost$core$Weak** $tmp576 = &param0->compiler;
frost$core$Weak* $tmp577 = *$tmp576;
frost$core$Object* $tmp578 = frost$core$Weak$get$R$frost$core$Weak$T($tmp577);
org$frostlang$frostc$ClassDecl* $tmp579 = *(&local0);
frost$collections$ListView* $tmp580 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp578), $tmp579);
ITable* $tmp581 = ((frost$collections$Iterable*) $tmp580)->$class->itable;
while ($tmp581->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp581 = $tmp581->next;
}
$fn583 $tmp582 = $tmp581->methods[0];
frost$collections$Iterator* $tmp584 = $tmp582(((frost$collections$Iterable*) $tmp580));
goto block20;
block20:;
ITable* $tmp585 = $tmp584->$class->itable;
while ($tmp585->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp585 = $tmp585->next;
}
$fn587 $tmp586 = $tmp585->methods[0];
frost$core$Bit $tmp588 = $tmp586($tmp584);
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block22; else goto block21;
block21:;
*(&local2) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp590 = $tmp584->$class->itable;
while ($tmp590->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp590 = $tmp590->next;
}
$fn592 $tmp591 = $tmp590->methods[1];
frost$core$Object* $tmp593 = $tmp591($tmp584);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp593)));
org$frostlang$frostc$FieldDecl* $tmp594 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
*(&local2) = ((org$frostlang$frostc$FieldDecl*) $tmp593);
// line 288
org$frostlang$frostc$FieldDecl* $tmp595 = *(&local2);
org$frostlang$frostc$Annotations** $tmp596 = &$tmp595->annotations;
org$frostlang$frostc$Annotations* $tmp597 = *$tmp596;
frost$core$Bit $tmp598 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp597);
bool $tmp599 = $tmp598.value;
if ($tmp599) goto block23; else goto block24;
block23:;
// line 289
frost$core$Frost$unref$frost$core$Object$Q($tmp593);
org$frostlang$frostc$FieldDecl* $tmp600 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
*(&local2) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block20;
block24:;
// line 291
frost$core$Weak** $tmp601 = &param0->compiler;
frost$core$Weak* $tmp602 = *$tmp601;
frost$core$Object* $tmp603 = frost$core$Weak$get$R$frost$core$Weak$T($tmp602);
org$frostlang$frostc$FieldDecl* $tmp604 = *(&local2);
frost$core$Bit $tmp605 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp603), $tmp604);
frost$core$Frost$unref$frost$core$Object$Q($tmp603);
// line 292
org$frostlang$frostc$FieldDecl* $tmp606 = *(&local2);
org$frostlang$frostc$Type** $tmp607 = &$tmp606->type;
org$frostlang$frostc$Type* $tmp608 = *$tmp607;
org$frostlang$frostc$Type* $tmp609 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp610 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp608, $tmp609);
bool $tmp611 = $tmp610.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
if ($tmp611) goto block25; else goto block27;
block25:;
// line 294
frost$core$Int64 $tmp612 = *(&local1);
frost$core$Weak** $tmp613 = &param0->hCodeGen;
frost$core$Weak* $tmp614 = *$tmp613;
frost$core$Object* $tmp615 = frost$core$Weak$get$R$frost$core$Weak$T($tmp614);
org$frostlang$frostc$LLVMCodeGenerator** $tmp616 = &((org$frostlang$frostc$HCodeGenerator*) $tmp615)->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp617 = *$tmp616;
org$frostlang$frostc$ClassDecl* $tmp618 = *(&local0);
frost$core$Int64 $tmp619 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64($tmp617, $tmp618);
int64_t $tmp620 = $tmp612.value;
int64_t $tmp621 = $tmp619.value;
int64_t $tmp622 = $tmp620 + $tmp621;
frost$core$Int64 $tmp623 = (frost$core$Int64) {$tmp622};
*(&local1) = $tmp623;
frost$core$Frost$unref$frost$core$Object$Q($tmp615);
goto block26;
block27:;
// line 1
// line 297
org$frostlang$frostc$FieldDecl* $tmp624 = *(&local2);
org$frostlang$frostc$Type** $tmp625 = &$tmp624->type;
org$frostlang$frostc$Type* $tmp626 = *$tmp625;
frost$core$Int64 $tmp627 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp626);
*(&local3) = $tmp627;
// line 298
frost$core$Int64 $tmp628 = *(&local1);
frost$core$Int64 $tmp629 = *(&local3);
frost$core$Int64 $tmp630 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp628, $tmp629);
*(&local4) = $tmp630;
// line 299
frost$core$Int64 $tmp631 = *(&local4);
frost$core$Int64 $tmp632 = (frost$core$Int64) {0};
int64_t $tmp633 = $tmp631.value;
int64_t $tmp634 = $tmp632.value;
bool $tmp635 = $tmp633 != $tmp634;
frost$core$Bit $tmp636 = (frost$core$Bit) {$tmp635};
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block28; else goto block29;
block28:;
// line 300
frost$core$Int64 $tmp638 = *(&local1);
frost$core$Int64 $tmp639 = *(&local3);
frost$core$Int64 $tmp640 = *(&local4);
int64_t $tmp641 = $tmp639.value;
int64_t $tmp642 = $tmp640.value;
int64_t $tmp643 = $tmp641 - $tmp642;
frost$core$Int64 $tmp644 = (frost$core$Int64) {$tmp643};
int64_t $tmp645 = $tmp638.value;
int64_t $tmp646 = $tmp644.value;
int64_t $tmp647 = $tmp645 + $tmp646;
frost$core$Int64 $tmp648 = (frost$core$Int64) {$tmp647};
*(&local1) = $tmp648;
goto block29;
block29:;
// line 302
frost$core$Int64 $tmp649 = *(&local1);
frost$core$Int64 $tmp650 = *(&local3);
frost$core$Int64 $tmp651 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp649, $tmp650);
frost$core$Int64 $tmp652 = (frost$core$Int64) {0};
frost$core$Bit $tmp653 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp651, $tmp652);
bool $tmp654 = $tmp653.value;
if ($tmp654) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp655 = (frost$core$Int64) {302};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s656, $tmp655);
abort(); // unreachable
block30:;
// line 303
frost$core$Int64 $tmp657 = *(&local1);
frost$core$Int64 $tmp658 = *(&local3);
int64_t $tmp659 = $tmp657.value;
int64_t $tmp660 = $tmp658.value;
int64_t $tmp661 = $tmp659 + $tmp660;
frost$core$Int64 $tmp662 = (frost$core$Int64) {$tmp661};
*(&local1) = $tmp662;
goto block26;
block26:;
frost$core$Frost$unref$frost$core$Object$Q($tmp593);
org$frostlang$frostc$FieldDecl* $tmp663 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
*(&local2) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block20;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
frost$core$Frost$unref$frost$core$Object$Q($tmp578);
// line 306
org$frostlang$frostc$Type$Kind* $tmp664 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp665 = *$tmp664;
org$frostlang$frostc$Type$Kind$wrapper* $tmp666;
$tmp666 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp666->value = $tmp665;
frost$core$Int64 $tmp667 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp668 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp667);
org$frostlang$frostc$Type$Kind$wrapper* $tmp669;
$tmp669 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp669->value = $tmp668;
ITable* $tmp670 = ((frost$core$Equatable*) $tmp666)->$class->itable;
while ($tmp670->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp670 = $tmp670->next;
}
$fn672 $tmp671 = $tmp670->methods[0];
frost$core$Bit $tmp673 = $tmp671(((frost$core$Equatable*) $tmp666), ((frost$core$Equatable*) $tmp669));
bool $tmp674 = $tmp673.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp669)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp666)));
if ($tmp674) goto block32; else goto block33;
block32:;
// line 307
frost$core$Int64 $tmp675 = *(&local1);
frost$core$Int64 $tmp676 = (frost$core$Int64) {1};
int64_t $tmp677 = $tmp675.value;
int64_t $tmp678 = $tmp676.value;
int64_t $tmp679 = $tmp677 + $tmp678;
frost$core$Int64 $tmp680 = (frost$core$Int64) {$tmp679};
*(&local1) = $tmp680;
goto block33;
block33:;
// line 309
frost$core$Int64 $tmp681 = *(&local1);
org$frostlang$frostc$ClassDecl* $tmp682 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp681;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$alignment$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 313
frost$core$Int64 $tmp683 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param1);
frost$core$Int64 $tmp684 = (frost$core$Int64) {8};
frost$core$Int64 $tmp685 = frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64($tmp683, $tmp684);
return $tmp685;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 317
frost$core$Int64 $tmp686 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp686;
// line 318
frost$core$Int64 $tmp687 = org$frostlang$frostc$CCodeGenerator$alignment$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param1);
*(&local1) = $tmp687;
// line 319
frost$core$Int64 $tmp688 = *(&local0);
frost$core$Int64 $tmp689 = *(&local1);
frost$core$Int64 $tmp690 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp688, $tmp689);
frost$core$Int64 $tmp691 = (frost$core$Int64) {0};
frost$core$Bit $tmp692 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp690, $tmp691);
bool $tmp693 = $tmp692.value;
if ($tmp693) goto block1; else goto block2;
block1:;
// line 320
frost$core$Int64 $tmp694 = *(&local0);
return $tmp694;
block2:;
// line 322
frost$core$Int64 $tmp695 = *(&local0);
frost$core$Int64 $tmp696 = *(&local1);
int64_t $tmp697 = $tmp695.value;
int64_t $tmp698 = $tmp696.value;
int64_t $tmp699 = $tmp697 + $tmp698;
frost$core$Int64 $tmp700 = (frost$core$Int64) {$tmp699};
frost$core$Int64 $tmp701 = *(&local0);
frost$core$Int64 $tmp702 = *(&local1);
frost$core$Int64 $tmp703 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp701, $tmp702);
int64_t $tmp704 = $tmp700.value;
int64_t $tmp705 = $tmp703.value;
int64_t $tmp706 = $tmp704 - $tmp705;
frost$core$Int64 $tmp707 = (frost$core$Int64) {$tmp706};
return $tmp707;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$sizeOfWrapper$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
frost$core$Bit local1;
frost$core$Int64 local2;
org$frostlang$frostc$FieldDecl* local3 = NULL;
frost$core$Int64 local4;
frost$core$Int64 local5;
// line 326
frost$core$Weak** $tmp708 = &param0->compiler;
frost$core$Weak* $tmp709 = *$tmp708;
frost$core$Object* $tmp710 = frost$core$Weak$get$R$frost$core$Weak$T($tmp709);
org$frostlang$frostc$ClassDecl* $tmp711 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp710), param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
org$frostlang$frostc$ClassDecl* $tmp712 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
*(&local0) = $tmp711;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$core$Frost$unref$frost$core$Object$Q($tmp710);
// line 327
org$frostlang$frostc$ClassDecl* $tmp713 = *(&local0);
frost$core$Bit $tmp714 = frost$core$Bit$init$builtin_bit($tmp713 != NULL);
bool $tmp715 = $tmp714.value;
if ($tmp715) goto block1; else goto block2;
block1:;
frost$core$Weak** $tmp716 = &param0->compiler;
frost$core$Weak* $tmp717 = *$tmp716;
frost$core$Object* $tmp718 = frost$core$Weak$get$R$frost$core$Weak$T($tmp717);
org$frostlang$frostc$ClassDecl* $tmp719 = *(&local0);
frost$core$Bit $tmp720 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp718), $tmp719);
frost$core$Frost$unref$frost$core$Object$Q($tmp718);
*(&local1) = $tmp720;
goto block3;
block2:;
*(&local1) = $tmp714;
goto block3;
block3:;
frost$core$Bit $tmp721 = *(&local1);
bool $tmp722 = $tmp721.value;
if ($tmp722) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp723 = (frost$core$Int64) {327};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s724, $tmp723);
abort(); // unreachable
block4:;
// line 328
org$frostlang$frostc$Type* $tmp725 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Int64 $tmp726 = org$frostlang$frostc$CCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp725);
*(&local2) = $tmp726;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
// line 329
frost$core$Weak** $tmp727 = &param0->compiler;
frost$core$Weak* $tmp728 = *$tmp727;
frost$core$Object* $tmp729 = frost$core$Weak$get$R$frost$core$Weak$T($tmp728);
org$frostlang$frostc$ClassDecl* $tmp730 = *(&local0);
frost$collections$ListView* $tmp731 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp729), $tmp730);
ITable* $tmp732 = ((frost$collections$Iterable*) $tmp731)->$class->itable;
while ($tmp732->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp732 = $tmp732->next;
}
$fn734 $tmp733 = $tmp732->methods[0];
frost$collections$Iterator* $tmp735 = $tmp733(((frost$collections$Iterable*) $tmp731));
goto block6;
block6:;
ITable* $tmp736 = $tmp735->$class->itable;
while ($tmp736->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp736 = $tmp736->next;
}
$fn738 $tmp737 = $tmp736->methods[0];
frost$core$Bit $tmp739 = $tmp737($tmp735);
bool $tmp740 = $tmp739.value;
if ($tmp740) goto block8; else goto block7;
block7:;
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp741 = $tmp735->$class->itable;
while ($tmp741->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp741 = $tmp741->next;
}
$fn743 $tmp742 = $tmp741->methods[1];
frost$core$Object* $tmp744 = $tmp742($tmp735);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp744)));
org$frostlang$frostc$FieldDecl* $tmp745 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) $tmp744);
// line 330
frost$core$Weak** $tmp746 = &param0->compiler;
frost$core$Weak* $tmp747 = *$tmp746;
frost$core$Object* $tmp748 = frost$core$Weak$get$R$frost$core$Weak$T($tmp747);
org$frostlang$frostc$FieldDecl* $tmp749 = *(&local3);
frost$core$Bit $tmp750 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp748), $tmp749);
frost$core$Frost$unref$frost$core$Object$Q($tmp748);
// line 331
org$frostlang$frostc$FieldDecl* $tmp751 = *(&local3);
org$frostlang$frostc$Type** $tmp752 = &$tmp751->type;
org$frostlang$frostc$Type* $tmp753 = *$tmp752;
org$frostlang$frostc$Type* $tmp754 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp755 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp753, $tmp754);
bool $tmp756 = $tmp755.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
if ($tmp756) goto block9; else goto block11;
block9:;
// line 333
frost$core$Int64 $tmp757 = *(&local2);
frost$core$Weak** $tmp758 = &param0->hCodeGen;
frost$core$Weak* $tmp759 = *$tmp758;
frost$core$Object* $tmp760 = frost$core$Weak$get$R$frost$core$Weak$T($tmp759);
org$frostlang$frostc$LLVMCodeGenerator** $tmp761 = &((org$frostlang$frostc$HCodeGenerator*) $tmp760)->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp762 = *$tmp761;
org$frostlang$frostc$ClassDecl* $tmp763 = *(&local0);
frost$core$Int64 $tmp764 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64($tmp762, $tmp763);
int64_t $tmp765 = $tmp757.value;
int64_t $tmp766 = $tmp764.value;
int64_t $tmp767 = $tmp765 + $tmp766;
frost$core$Int64 $tmp768 = (frost$core$Int64) {$tmp767};
*(&local2) = $tmp768;
frost$core$Frost$unref$frost$core$Object$Q($tmp760);
goto block10;
block11:;
// line 1
// line 336
org$frostlang$frostc$FieldDecl* $tmp769 = *(&local3);
org$frostlang$frostc$Type** $tmp770 = &$tmp769->type;
org$frostlang$frostc$Type* $tmp771 = *$tmp770;
frost$core$Int64 $tmp772 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp771);
*(&local4) = $tmp772;
// line 337
frost$core$Int64 $tmp773 = *(&local2);
frost$core$Int64 $tmp774 = *(&local4);
frost$core$Int64 $tmp775 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp773, $tmp774);
*(&local5) = $tmp775;
// line 338
frost$core$Int64 $tmp776 = *(&local5);
frost$core$Int64 $tmp777 = (frost$core$Int64) {0};
int64_t $tmp778 = $tmp776.value;
int64_t $tmp779 = $tmp777.value;
bool $tmp780 = $tmp778 != $tmp779;
frost$core$Bit $tmp781 = (frost$core$Bit) {$tmp780};
bool $tmp782 = $tmp781.value;
if ($tmp782) goto block12; else goto block13;
block12:;
// line 339
frost$core$Int64 $tmp783 = *(&local2);
frost$core$Int64 $tmp784 = *(&local4);
frost$core$Int64 $tmp785 = *(&local5);
int64_t $tmp786 = $tmp784.value;
int64_t $tmp787 = $tmp785.value;
int64_t $tmp788 = $tmp786 - $tmp787;
frost$core$Int64 $tmp789 = (frost$core$Int64) {$tmp788};
int64_t $tmp790 = $tmp783.value;
int64_t $tmp791 = $tmp789.value;
int64_t $tmp792 = $tmp790 + $tmp791;
frost$core$Int64 $tmp793 = (frost$core$Int64) {$tmp792};
*(&local2) = $tmp793;
goto block13;
block13:;
// line 341
frost$core$Int64 $tmp794 = *(&local2);
frost$core$Int64 $tmp795 = *(&local4);
frost$core$Int64 $tmp796 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp794, $tmp795);
frost$core$Int64 $tmp797 = (frost$core$Int64) {0};
frost$core$Bit $tmp798 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp796, $tmp797);
bool $tmp799 = $tmp798.value;
if ($tmp799) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp800 = (frost$core$Int64) {341};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s801, $tmp800);
abort(); // unreachable
block14:;
// line 342
frost$core$Int64 $tmp802 = *(&local2);
frost$core$Int64 $tmp803 = *(&local4);
int64_t $tmp804 = $tmp802.value;
int64_t $tmp805 = $tmp803.value;
int64_t $tmp806 = $tmp804 + $tmp805;
frost$core$Int64 $tmp807 = (frost$core$Int64) {$tmp806};
*(&local2) = $tmp807;
goto block10;
block10:;
frost$core$Frost$unref$frost$core$Object$Q($tmp744);
org$frostlang$frostc$FieldDecl* $tmp808 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
frost$core$Frost$unref$frost$core$Object$Q($tmp729);
// line 345
org$frostlang$frostc$Type$Kind* $tmp809 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp810 = *$tmp809;
org$frostlang$frostc$Type$Kind$wrapper* $tmp811;
$tmp811 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp811->value = $tmp810;
frost$core$Int64 $tmp812 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp813 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp812);
org$frostlang$frostc$Type$Kind$wrapper* $tmp814;
$tmp814 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp814->value = $tmp813;
ITable* $tmp815 = ((frost$core$Equatable*) $tmp811)->$class->itable;
while ($tmp815->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp815 = $tmp815->next;
}
$fn817 $tmp816 = $tmp815->methods[0];
frost$core$Bit $tmp818 = $tmp816(((frost$core$Equatable*) $tmp811), ((frost$core$Equatable*) $tmp814));
bool $tmp819 = $tmp818.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp814)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp811)));
if ($tmp819) goto block16; else goto block17;
block16:;
// line 346
frost$core$Int64 $tmp820 = *(&local2);
frost$core$Int64 $tmp821 = (frost$core$Int64) {1};
int64_t $tmp822 = $tmp820.value;
int64_t $tmp823 = $tmp821.value;
int64_t $tmp824 = $tmp822 + $tmp823;
frost$core$Int64 $tmp825 = (frost$core$Int64) {$tmp824};
*(&local2) = $tmp825;
goto block17;
block17:;
// line 348
frost$core$Int64 $tmp826 = *(&local2);
org$frostlang$frostc$ClassDecl* $tmp827 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp826;

}
void org$frostlang$frostc$CCodeGenerator$writeType$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 352
frost$collections$HashSet** $tmp828 = &param0->writtenTypes;
frost$collections$HashSet* $tmp829 = *$tmp828;
frost$core$String** $tmp830 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp831 = *$tmp830;
frost$core$Bit $tmp832 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp829, ((frost$collections$Key*) $tmp831));
bool $tmp833 = $tmp832.value;
if ($tmp833) goto block1; else goto block2;
block1:;
// line 353
return;
block2:;
return;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$typeName$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 358
frost$core$String** $tmp834 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp835 = *$tmp834;
frost$core$String* $tmp836 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp835);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
return $tmp836;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// line 362
frost$core$Weak** $tmp837 = &param0->compiler;
frost$core$Weak* $tmp838 = *$tmp837;
frost$core$Object* $tmp839 = frost$core$Weak$get$R$frost$core$Weak$T($tmp838);
org$frostlang$frostc$ClassDecl* $tmp840 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp839), param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
org$frostlang$frostc$ClassDecl* $tmp841 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
*(&local0) = $tmp840;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
frost$core$Frost$unref$frost$core$Object$Q($tmp839);
// line 363
org$frostlang$frostc$ClassDecl* $tmp842 = *(&local0);
frost$core$Bit $tmp843 = frost$core$Bit$init$builtin_bit($tmp842 != NULL);
bool $tmp844 = $tmp843.value;
if ($tmp844) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp845 = (frost$core$Int64) {363};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s846, $tmp845);
abort(); // unreachable
block1:;
// line 364
org$frostlang$frostc$ClassDecl* $tmp847 = *(&local0);
org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(param0, $tmp847);
// line 365
org$frostlang$frostc$Type$Kind* $tmp848 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp849 = *$tmp848;
org$frostlang$frostc$Type$Kind$wrapper* $tmp850;
$tmp850 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp850->value = $tmp849;
frost$core$Int64 $tmp851 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp852 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp851);
org$frostlang$frostc$Type$Kind$wrapper* $tmp853;
$tmp853 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp853->value = $tmp852;
ITable* $tmp854 = ((frost$core$Equatable*) $tmp850)->$class->itable;
while ($tmp854->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp854 = $tmp854->next;
}
$fn856 $tmp855 = $tmp854->methods[0];
frost$core$Bit $tmp857 = $tmp855(((frost$core$Equatable*) $tmp850), ((frost$core$Equatable*) $tmp853));
bool $tmp858 = $tmp857.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp853)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp850)));
if ($tmp858) goto block3; else goto block4;
block3:;
// line 366
org$frostlang$frostc$FixedArray** $tmp859 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp860 = *$tmp859;
frost$core$Int64 $tmp861 = (frost$core$Int64) {0};
frost$core$Object* $tmp862 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp860, $tmp861);
frost$core$String* $tmp863 = org$frostlang$frostc$CCodeGenerator$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp862));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
frost$core$Frost$unref$frost$core$Object$Q($tmp862);
org$frostlang$frostc$ClassDecl* $tmp864 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp863;
block4:;
// line 368
frost$core$String** $tmp865 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp866 = *$tmp865;
frost$core$String* $tmp867 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp866);
frost$core$String* $tmp868 = frost$core$String$get_asString$R$frost$core$String($tmp867);
frost$core$String* $tmp869 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp868, &$s870);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
org$frostlang$frostc$ClassDecl* $tmp871 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp869;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 372
frost$core$String* $tmp872 = org$frostlang$frostc$CCodeGenerator$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp873 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp872, &$s874);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
return $tmp873;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

org$frostlang$frostc$Type* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$Int64 local2;
// line 376
frost$core$Weak** $tmp875 = &param0->compiler;
frost$core$Weak* $tmp876 = *$tmp875;
frost$core$Object* $tmp877 = frost$core$Weak$get$R$frost$core$Weak$T($tmp876);
org$frostlang$frostc$Type* $tmp878 = org$frostlang$frostc$Compiler$inheritedType$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp877), param1);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
org$frostlang$frostc$Type* $tmp879 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
*(&local0) = $tmp878;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
frost$core$Frost$unref$frost$core$Object$Q($tmp877);
// line 377
frost$core$MutableString* $tmp880 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp880);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
frost$core$MutableString* $tmp881 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
*(&local1) = $tmp880;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
// line 378
frost$core$MutableString* $tmp882 = *(&local1);
org$frostlang$frostc$Type* $tmp883 = *(&local0);
org$frostlang$frostc$Type* $tmp884 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp883);
frost$core$String* $tmp885 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp884);
frost$core$MutableString$append$frost$core$String($tmp882, $tmp885);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
// line 379
frost$core$MutableString* $tmp886 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp886, &$s887);
// line 380
frost$core$Bit $tmp888 = org$frostlang$frostc$MethodDecl$isInstance$R$frost$core$Bit(param1);
bool $tmp889 = $tmp888.value;
if ($tmp889) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp890 = (frost$core$Int64) {380};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s891, $tmp890);
abort(); // unreachable
block1:;
// line 381
frost$core$MutableString* $tmp892 = *(&local1);
frost$core$Weak** $tmp893 = &param1->owner;
frost$core$Weak* $tmp894 = *$tmp893;
frost$core$Object* $tmp895 = frost$core$Weak$get$R$frost$core$Weak$T($tmp894);
frost$core$String** $tmp896 = &((org$frostlang$frostc$ClassDecl*) $tmp895)->name;
frost$core$String* $tmp897 = *$tmp896;
frost$core$String* $tmp898 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp897);
frost$core$String* $tmp899 = frost$core$String$get_asString$R$frost$core$String($tmp898);
frost$core$String* $tmp900 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp899, &$s901);
frost$core$MutableString$append$frost$core$String($tmp892, $tmp900);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
frost$core$Frost$unref$frost$core$Object$Q($tmp895);
// line 382
frost$core$Weak** $tmp902 = &param0->compiler;
frost$core$Weak* $tmp903 = *$tmp902;
frost$core$Object* $tmp904 = frost$core$Weak$get$R$frost$core$Weak$T($tmp903);
frost$core$Weak** $tmp905 = &param1->owner;
frost$core$Weak* $tmp906 = *$tmp905;
frost$core$Object* $tmp907 = frost$core$Weak$get$R$frost$core$Weak$T($tmp906);
frost$core$Bit $tmp908 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp904), ((org$frostlang$frostc$ClassDecl*) $tmp907));
bool $tmp909 = $tmp908.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp907);
frost$core$Frost$unref$frost$core$Object$Q($tmp904);
if ($tmp909) goto block3; else goto block4;
block3:;
// line 383
frost$core$MutableString* $tmp910 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp910, &$s911);
goto block4;
block4:;
// line 385
frost$core$MutableString* $tmp912 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp912, &$s913);
// line 386
frost$core$Int64 $tmp914 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp915 = *(&local0);
org$frostlang$frostc$FixedArray** $tmp916 = &$tmp915->subtypes;
org$frostlang$frostc$FixedArray* $tmp917 = *$tmp916;
ITable* $tmp918 = ((frost$collections$CollectionView*) $tmp917)->$class->itable;
while ($tmp918->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp918 = $tmp918->next;
}
$fn920 $tmp919 = $tmp918->methods[0];
frost$core$Int64 $tmp921 = $tmp919(((frost$collections$CollectionView*) $tmp917));
frost$core$Int64 $tmp922 = (frost$core$Int64) {1};
int64_t $tmp923 = $tmp921.value;
int64_t $tmp924 = $tmp922.value;
int64_t $tmp925 = $tmp923 - $tmp924;
frost$core$Int64 $tmp926 = (frost$core$Int64) {$tmp925};
frost$core$Bit $tmp927 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp928 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp914, $tmp926, $tmp927);
frost$core$Int64 $tmp929 = $tmp928.min;
*(&local2) = $tmp929;
frost$core$Int64 $tmp930 = $tmp928.max;
frost$core$Bit $tmp931 = $tmp928.inclusive;
bool $tmp932 = $tmp931.value;
frost$core$Int64 $tmp933 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp934 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp933);
if ($tmp932) goto block8; else goto block9;
block8:;
int64_t $tmp935 = $tmp929.value;
int64_t $tmp936 = $tmp930.value;
bool $tmp937 = $tmp935 <= $tmp936;
frost$core$Bit $tmp938 = (frost$core$Bit) {$tmp937};
bool $tmp939 = $tmp938.value;
if ($tmp939) goto block5; else goto block6;
block9:;
int64_t $tmp940 = $tmp929.value;
int64_t $tmp941 = $tmp930.value;
bool $tmp942 = $tmp940 < $tmp941;
frost$core$Bit $tmp943 = (frost$core$Bit) {$tmp942};
bool $tmp944 = $tmp943.value;
if ($tmp944) goto block5; else goto block6;
block5:;
// line 387
frost$core$MutableString* $tmp945 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp945, &$s946);
// line 388
frost$core$MutableString* $tmp947 = *(&local1);
org$frostlang$frostc$Type* $tmp948 = *(&local0);
org$frostlang$frostc$FixedArray** $tmp949 = &$tmp948->subtypes;
org$frostlang$frostc$FixedArray* $tmp950 = *$tmp949;
frost$core$Int64 $tmp951 = *(&local2);
frost$core$Object* $tmp952 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp950, $tmp951);
frost$core$String* $tmp953 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp952));
frost$core$MutableString$append$frost$core$String($tmp947, $tmp953);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
frost$core$Frost$unref$frost$core$Object$Q($tmp952);
goto block7;
block7:;
frost$core$Int64 $tmp954 = *(&local2);
int64_t $tmp955 = $tmp930.value;
int64_t $tmp956 = $tmp954.value;
int64_t $tmp957 = $tmp955 - $tmp956;
frost$core$Int64 $tmp958 = (frost$core$Int64) {$tmp957};
frost$core$UInt64 $tmp959 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp958);
if ($tmp932) goto block11; else goto block12;
block11:;
uint64_t $tmp960 = $tmp959.value;
uint64_t $tmp961 = $tmp934.value;
bool $tmp962 = $tmp960 >= $tmp961;
frost$core$Bit $tmp963 = (frost$core$Bit) {$tmp962};
bool $tmp964 = $tmp963.value;
if ($tmp964) goto block10; else goto block6;
block12:;
uint64_t $tmp965 = $tmp959.value;
uint64_t $tmp966 = $tmp934.value;
bool $tmp967 = $tmp965 > $tmp966;
frost$core$Bit $tmp968 = (frost$core$Bit) {$tmp967};
bool $tmp969 = $tmp968.value;
if ($tmp969) goto block10; else goto block6;
block10:;
int64_t $tmp970 = $tmp954.value;
int64_t $tmp971 = $tmp933.value;
int64_t $tmp972 = $tmp970 + $tmp971;
frost$core$Int64 $tmp973 = (frost$core$Int64) {$tmp972};
*(&local2) = $tmp973;
goto block5;
block6:;
// line 390
frost$core$MutableString* $tmp974 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp974, &$s975);
// line 391
frost$core$MutableString* $tmp976 = *(&local1);
frost$core$String* $tmp977 = frost$core$MutableString$finish$R$frost$core$String($tmp976);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
frost$core$MutableString* $tmp978 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
*(&local1) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$Type* $tmp979 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp977;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$nullableType$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 395
org$frostlang$frostc$Type$Kind* $tmp980 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp981 = *$tmp980;
org$frostlang$frostc$Type$Kind$wrapper* $tmp982;
$tmp982 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp982->value = $tmp981;
frost$core$Int64 $tmp983 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp984 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp983);
org$frostlang$frostc$Type$Kind$wrapper* $tmp985;
$tmp985 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp985->value = $tmp984;
ITable* $tmp986 = ((frost$core$Equatable*) $tmp982)->$class->itable;
while ($tmp986->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp986 = $tmp986->next;
}
$fn988 $tmp987 = $tmp986->methods[0];
frost$core$Bit $tmp989 = $tmp987(((frost$core$Equatable*) $tmp982), ((frost$core$Equatable*) $tmp985));
bool $tmp990 = $tmp989.value;
if ($tmp990) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp991 = (frost$core$Int64) {395};
frost$core$String* $tmp992 = org$frostlang$frostc$Type$get_asString$R$frost$core$String(param1);
frost$core$String* $tmp993 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp992, &$s994);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s995, $tmp991, $tmp993);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp985)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp982)));
// line 396
org$frostlang$frostc$FixedArray** $tmp996 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp997 = *$tmp996;
frost$core$Int64 $tmp998 = (frost$core$Int64) {0};
frost$core$Object* $tmp999 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp997, $tmp998);
frost$core$String* $tmp1000 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp999));
frost$core$String* $tmp1001 = frost$core$String$get_asString$R$frost$core$String($tmp1000);
frost$core$String* $tmp1002 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1001, &$s1003);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
frost$core$Frost$unref$frost$core$Object$Q($tmp999);
return $tmp1002;

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
frost$core$Weak** $tmp1004 = &param0->compiler;
frost$core$Weak* $tmp1005 = *$tmp1004;
frost$core$Object* $tmp1006 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1005);
org$frostlang$frostc$Type** $tmp1007 = &param1->type;
org$frostlang$frostc$Type* $tmp1008 = *$tmp1007;
frost$collections$HashSet* $tmp1009 = org$frostlang$frostc$Compiler$allInterfaces$org$frostlang$frostc$Type$R$frost$collections$HashSet$LTorg$frostlang$frostc$Type$GT(((org$frostlang$frostc$Compiler*) $tmp1006), $tmp1008);
*(&local0) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
frost$collections$HashSet* $tmp1010 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
*(&local0) = $tmp1009;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
frost$core$Frost$unref$frost$core$Object$Q($tmp1006);
// line 401
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1011));
frost$core$String* $tmp1012 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
*(&local1) = &$s1013;
// line 402
frost$collections$HashSet* $tmp1014 = *(&local0);
ITable* $tmp1015 = ((frost$collections$Iterable*) $tmp1014)->$class->itable;
while ($tmp1015->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1015 = $tmp1015->next;
}
$fn1017 $tmp1016 = $tmp1015->methods[0];
frost$collections$Iterator* $tmp1018 = $tmp1016(((frost$collections$Iterable*) $tmp1014));
goto block1;
block1:;
ITable* $tmp1019 = $tmp1018->$class->itable;
while ($tmp1019->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1019 = $tmp1019->next;
}
$fn1021 $tmp1020 = $tmp1019->methods[0];
frost$core$Bit $tmp1022 = $tmp1020($tmp1018);
bool $tmp1023 = $tmp1022.value;
if ($tmp1023) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp1024 = $tmp1018->$class->itable;
while ($tmp1024->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1024 = $tmp1024->next;
}
$fn1026 $tmp1025 = $tmp1024->methods[1];
frost$core$Object* $tmp1027 = $tmp1025($tmp1018);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1027)));
org$frostlang$frostc$Type* $tmp1028 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp1027);
// line 403
frost$core$Weak** $tmp1029 = &param0->compiler;
frost$core$Weak* $tmp1030 = *$tmp1029;
frost$core$Object* $tmp1031 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1030);
org$frostlang$frostc$Type* $tmp1032 = *(&local2);
org$frostlang$frostc$ClassDecl* $tmp1033 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1031), $tmp1032);
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
org$frostlang$frostc$ClassDecl* $tmp1034 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
*(&local3) = $tmp1033;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
frost$core$Frost$unref$frost$core$Object$Q($tmp1031);
// line 404
org$frostlang$frostc$ClassDecl* $tmp1035 = *(&local3);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1036 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp1035);
*(&local4) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1037 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
*(&local4) = $tmp1036;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
// line 405
frost$core$Weak** $tmp1038 = &param0->compiler;
frost$core$Weak* $tmp1039 = *$tmp1038;
frost$core$Object* $tmp1040 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1039);
org$frostlang$frostc$Type* $tmp1041 = *(&local2);
frost$collections$ListView* $tmp1042 = org$frostlang$frostc$Compiler$interfaceMethods$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1040), param1, $tmp1041);
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
frost$collections$ListView* $tmp1043 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
*(&local5) = $tmp1042;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
frost$core$Frost$unref$frost$core$Object$Q($tmp1040);
// line 406
frost$core$String** $tmp1044 = &param1->name;
frost$core$String* $tmp1045 = *$tmp1044;
frost$core$String* $tmp1046 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1045);
frost$core$String* $tmp1047 = frost$core$String$get_asString$R$frost$core$String($tmp1046);
frost$core$String* $tmp1048 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1047, &$s1049);
org$frostlang$frostc$ClassDecl* $tmp1050 = *(&local3);
frost$core$String** $tmp1051 = &$tmp1050->name;
frost$core$String* $tmp1052 = *$tmp1051;
frost$core$String* $tmp1053 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1052);
frost$core$String* $tmp1054 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1048, $tmp1053);
frost$core$String* $tmp1055 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1054, &$s1056);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
frost$core$String* $tmp1057 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
*(&local6) = $tmp1055;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
// line 407
frost$core$MutableString* $tmp1058 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Type* $tmp1059 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp1060 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1059);
frost$core$String* $tmp1061 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1062, $tmp1060);
frost$core$String* $tmp1063 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1061, &$s1064);
frost$collections$ListView* $tmp1065 = *(&local5);
ITable* $tmp1066 = ((frost$collections$CollectionView*) $tmp1065)->$class->itable;
while ($tmp1066->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1066 = $tmp1066->next;
}
$fn1068 $tmp1067 = $tmp1066->methods[0];
frost$core$Int64 $tmp1069 = $tmp1067(((frost$collections$CollectionView*) $tmp1065));
frost$core$Int64$wrapper* $tmp1070;
$tmp1070 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1070->value = $tmp1069;
frost$core$String* $tmp1071 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1072, ((frost$core$Object*) $tmp1070));
frost$core$String* $tmp1073 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1071, &$s1074);
frost$core$String* $tmp1075 = *(&local6);
frost$core$String* $tmp1076 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1073, $tmp1075);
frost$core$String* $tmp1077 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1076, &$s1078);
frost$core$String* $tmp1079 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1063, $tmp1077);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1080 = *(&local4);
frost$core$String** $tmp1081 = &$tmp1080->name;
frost$core$String* $tmp1082 = *$tmp1081;
frost$core$String* $tmp1083 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1084, $tmp1082);
frost$core$String* $tmp1085 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1083, &$s1086);
frost$core$String* $tmp1087 = *(&local1);
frost$core$String* $tmp1088 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1085, $tmp1087);
frost$core$String* $tmp1089 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1088, &$s1090);
frost$core$String* $tmp1091 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1079, $tmp1089);
frost$core$MutableString$init$frost$core$String($tmp1058, $tmp1091);
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
frost$core$MutableString* $tmp1092 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
*(&local7) = $tmp1058;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
// line 410
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1093));
frost$core$String* $tmp1094 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
*(&local8) = &$s1095;
// line 411
frost$collections$ListView* $tmp1096 = *(&local5);
ITable* $tmp1097 = ((frost$collections$Iterable*) $tmp1096)->$class->itable;
while ($tmp1097->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1097 = $tmp1097->next;
}
$fn1099 $tmp1098 = $tmp1097->methods[0];
frost$collections$Iterator* $tmp1100 = $tmp1098(((frost$collections$Iterable*) $tmp1096));
goto block4;
block4:;
ITable* $tmp1101 = $tmp1100->$class->itable;
while ($tmp1101->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1101 = $tmp1101->next;
}
$fn1103 $tmp1102 = $tmp1101->methods[0];
frost$core$Bit $tmp1104 = $tmp1102($tmp1100);
bool $tmp1105 = $tmp1104.value;
if ($tmp1105) goto block6; else goto block5;
block5:;
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp1106 = $tmp1100->$class->itable;
while ($tmp1106->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1106 = $tmp1106->next;
}
$fn1108 $tmp1107 = $tmp1106->methods[1];
frost$core$Object* $tmp1109 = $tmp1107($tmp1100);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1109)));
org$frostlang$frostc$MethodDecl* $tmp1110 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1110));
*(&local9) = ((org$frostlang$frostc$MethodDecl*) $tmp1109);
// line 412
frost$core$MutableString* $tmp1111 = *(&local7);
frost$core$String* $tmp1112 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp1111, $tmp1112);
// line 413
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1113));
frost$core$String* $tmp1114 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
*(&local8) = &$s1115;
// line 414
org$frostlang$frostc$MethodDecl* $tmp1116 = *(&local9);
org$frostlang$frostc$Annotations** $tmp1117 = &$tmp1116->annotations;
org$frostlang$frostc$Annotations* $tmp1118 = *$tmp1117;
frost$core$Bit $tmp1119 = org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit($tmp1118);
bool $tmp1120 = $tmp1119.value;
if ($tmp1120) goto block7; else goto block9;
block7:;
// line 415
frost$core$MutableString* $tmp1121 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp1121, &$s1122);
goto block8;
block9:;
// line 1
// line 418
frost$core$MutableString* $tmp1123 = *(&local7);
org$frostlang$frostc$MethodDecl* $tmp1124 = *(&local9);
frost$core$String* $tmp1125 = org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, $tmp1124);
frost$core$MutableString$append$frost$core$String($tmp1123, $tmp1125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
goto block8;
block8:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1109);
org$frostlang$frostc$MethodDecl* $tmp1126 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
// line 421
frost$core$MutableString* $tmp1127 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp1127, &$s1128);
// line 422
*(&local10) = ((frost$core$Error*) NULL);
// line 423
frost$io$MemoryOutputStream** $tmp1129 = &param0->types;
frost$io$MemoryOutputStream* $tmp1130 = *$tmp1129;
frost$core$MutableString* $tmp1131 = *(&local7);
frost$core$String* $tmp1132 = frost$core$MutableString$finish$R$frost$core$String($tmp1131);
$fn1134 $tmp1133 = ($fn1134) ((frost$io$OutputStream*) $tmp1130)->$class->vtable[19];
frost$core$Error* $tmp1135 = $tmp1133(((frost$io$OutputStream*) $tmp1130), $tmp1132);
if ($tmp1135 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
*(&local10) = $tmp1135;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
goto block10;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
goto block11;
block10:;
// line 426
frost$core$Int64 $tmp1136 = (frost$core$Int64) {426};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1137, $tmp1136);
abort(); // unreachable
block11:;
frost$core$Error* $tmp1138 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
*(&local10) = ((frost$core$Error*) NULL);
// line 428
frost$core$String* $tmp1139 = *(&local6);
frost$core$String* $tmp1140 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1141, $tmp1139);
frost$core$String* $tmp1142 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1140, &$s1143);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
frost$core$String* $tmp1144 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
*(&local1) = $tmp1142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
frost$core$String* $tmp1145 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1146 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1147 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
*(&local6) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1148 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1149 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
*(&local4) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1150 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1027);
org$frostlang$frostc$Type* $tmp1151 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
// line 430
frost$core$String* $tmp1152 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
frost$core$String* $tmp1153 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
*(&local1) = ((frost$core$String*) NULL);
frost$collections$HashSet* $tmp1154 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
*(&local0) = ((frost$collections$HashSet*) NULL);
return $tmp1152;

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
frost$io$IndentedOutputStream** $tmp1155 = &param0->out;
frost$io$IndentedOutputStream* $tmp1156 = *$tmp1155;
// line 435
*(&local1) = ((frost$core$Error*) NULL);
// line 436
frost$collections$IdentityMap** $tmp1157 = &param0->methodShims;
frost$collections$IdentityMap* $tmp1158 = *$tmp1157;
frost$core$Object* $tmp1159 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp1158, ((frost$core$Object*) param1));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CCodeGenerator$MethodShim*) $tmp1159)));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1160 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) $tmp1159);
frost$core$Frost$unref$frost$core$Object$Q($tmp1159);
// line 437
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1161 = *(&local2);
frost$core$Bit $tmp1162 = frost$core$Bit$init$builtin_bit($tmp1161 != NULL);
bool $tmp1163 = $tmp1162.value;
if ($tmp1163) goto block6; else goto block7;
block6:;
// line 438
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1164 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1165 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Error* $tmp1166 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
*(&local1) = ((frost$core$Error*) NULL);
*(&local0) = $tmp1164;
goto block1;
block7:;
// line 440
frost$io$IndentedOutputStream** $tmp1167 = &param0->out;
frost$io$IndentedOutputStream* $tmp1168 = *$tmp1167;
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
frost$io$IndentedOutputStream* $tmp1169 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
*(&local3) = $tmp1168;
// line 441
frost$io$MemoryOutputStream* $tmp1170 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp1170);
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
frost$io$MemoryOutputStream* $tmp1171 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
*(&local4) = $tmp1170;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
// line 442
frost$io$IndentedOutputStream* $tmp1172 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream* $tmp1173 = *(&local4);
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp1172, ((frost$io$OutputStream*) $tmp1173));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
frost$io$IndentedOutputStream** $tmp1174 = &param0->out;
frost$io$IndentedOutputStream* $tmp1175 = *$tmp1174;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
frost$io$IndentedOutputStream** $tmp1176 = &param0->out;
*$tmp1176 = $tmp1172;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
// line 443
frost$core$Bit $tmp1177 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(param2);
bool $tmp1178 = $tmp1177.value;
if ($tmp1178) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp1179 = (frost$core$Int64) {443};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1180, $tmp1179);
abort(); // unreachable
block8:;
// line 444
org$frostlang$frostc$FixedArray** $tmp1181 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1182 = *$tmp1181;
ITable* $tmp1183 = ((frost$collections$CollectionView*) $tmp1182)->$class->itable;
while ($tmp1183->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1183 = $tmp1183->next;
}
$fn1185 $tmp1184 = $tmp1183->methods[0];
frost$core$Int64 $tmp1186 = $tmp1184(((frost$collections$CollectionView*) $tmp1182));
frost$collections$Array** $tmp1187 = &param1->parameters;
frost$collections$Array* $tmp1188 = *$tmp1187;
ITable* $tmp1189 = ((frost$collections$CollectionView*) $tmp1188)->$class->itable;
while ($tmp1189->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1189 = $tmp1189->next;
}
$fn1191 $tmp1190 = $tmp1189->methods[0];
frost$core$Int64 $tmp1192 = $tmp1190(((frost$collections$CollectionView*) $tmp1188));
frost$core$Int64 $tmp1193 = (frost$core$Int64) {2};
int64_t $tmp1194 = $tmp1192.value;
int64_t $tmp1195 = $tmp1193.value;
int64_t $tmp1196 = $tmp1194 + $tmp1195;
frost$core$Int64 $tmp1197 = (frost$core$Int64) {$tmp1196};
frost$core$Bit $tmp1198 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1186, $tmp1197);
bool $tmp1199 = $tmp1198.value;
if ($tmp1199) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp1200 = (frost$core$Int64) {444};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1201, $tmp1200);
abort(); // unreachable
block10:;
// line 445
frost$core$Bit $tmp1202 = org$frostlang$frostc$MethodDecl$isInstance$R$frost$core$Bit(param1);
bool $tmp1203 = $tmp1202.value;
if ($tmp1203) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp1204 = (frost$core$Int64) {445};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1205, $tmp1204);
abort(); // unreachable
block12:;
// line 446
org$frostlang$frostc$Type* $tmp1206 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type(param2);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
org$frostlang$frostc$Type* $tmp1207 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
*(&local5) = $tmp1206;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
// line 447
frost$core$String* $tmp1208 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1209 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1208, &$s1210);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$core$String* $tmp1211 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
*(&local6) = $tmp1209;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
// line 448
frost$core$MutableString* $tmp1212 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Type* $tmp1213 = *(&local5);
frost$core$String* $tmp1214 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1213);
frost$core$MutableString$init$frost$core$String($tmp1212, $tmp1214);
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
frost$core$MutableString* $tmp1215 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
*(&local7) = $tmp1212;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
// line 449
frost$io$IndentedOutputStream** $tmp1216 = &param0->out;
frost$io$IndentedOutputStream* $tmp1217 = *$tmp1216;
frost$core$MutableString* $tmp1218 = *(&local7);
frost$core$String* $tmp1219 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1220, ((frost$core$Object*) $tmp1218));
frost$core$String* $tmp1221 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1219, &$s1222);
frost$core$String* $tmp1223 = *(&local6);
frost$core$String* $tmp1224 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1221, $tmp1223);
frost$core$String* $tmp1225 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1224, &$s1226);
$fn1228 $tmp1227 = ($fn1228) ((frost$io$OutputStream*) $tmp1217)->$class->vtable[17];
frost$core$Error* $tmp1229 = $tmp1227(((frost$io$OutputStream*) $tmp1217), $tmp1225);
if ($tmp1229 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
*(&local1) = $tmp1229;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
frost$core$MutableString* $tmp1230 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1231 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1232 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1233 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1234 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1235 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
// line 450
frost$core$MutableString* $tmp1236 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp1236, &$s1237);
// line 451
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1238));
frost$core$String* $tmp1239 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
*(&local8) = &$s1240;
// line 452
frost$core$Int64 $tmp1241 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray** $tmp1242 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1243 = *$tmp1242;
ITable* $tmp1244 = ((frost$collections$CollectionView*) $tmp1243)->$class->itable;
while ($tmp1244->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1244 = $tmp1244->next;
}
$fn1246 $tmp1245 = $tmp1244->methods[0];
frost$core$Int64 $tmp1247 = $tmp1245(((frost$collections$CollectionView*) $tmp1243));
frost$core$Int64 $tmp1248 = (frost$core$Int64) {1};
int64_t $tmp1249 = $tmp1247.value;
int64_t $tmp1250 = $tmp1248.value;
int64_t $tmp1251 = $tmp1249 - $tmp1250;
frost$core$Int64 $tmp1252 = (frost$core$Int64) {$tmp1251};
frost$core$Bit $tmp1253 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1254 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1241, $tmp1252, $tmp1253);
frost$core$Int64 $tmp1255 = $tmp1254.min;
*(&local9) = $tmp1255;
frost$core$Int64 $tmp1256 = $tmp1254.max;
frost$core$Bit $tmp1257 = $tmp1254.inclusive;
bool $tmp1258 = $tmp1257.value;
frost$core$Int64 $tmp1259 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1260 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1259);
if ($tmp1258) goto block19; else goto block20;
block19:;
int64_t $tmp1261 = $tmp1255.value;
int64_t $tmp1262 = $tmp1256.value;
bool $tmp1263 = $tmp1261 <= $tmp1262;
frost$core$Bit $tmp1264 = (frost$core$Bit) {$tmp1263};
bool $tmp1265 = $tmp1264.value;
if ($tmp1265) goto block16; else goto block17;
block20:;
int64_t $tmp1266 = $tmp1255.value;
int64_t $tmp1267 = $tmp1256.value;
bool $tmp1268 = $tmp1266 < $tmp1267;
frost$core$Bit $tmp1269 = (frost$core$Bit) {$tmp1268};
bool $tmp1270 = $tmp1269.value;
if ($tmp1270) goto block16; else goto block17;
block16:;
// line 453
org$frostlang$frostc$FixedArray** $tmp1271 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1272 = *$tmp1271;
frost$core$Int64 $tmp1273 = *(&local9);
frost$core$Object* $tmp1274 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1272, $tmp1273);
frost$core$String* $tmp1275 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp1274));
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
frost$core$String* $tmp1276 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
*(&local10) = $tmp1275;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
frost$core$Frost$unref$frost$core$Object$Q($tmp1274);
// line 454
frost$core$MutableString* $tmp1277 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp1277, &$s1278);
// line 455
frost$core$MutableString* $tmp1279 = *(&local7);
frost$core$String* $tmp1280 = *(&local10);
frost$core$MutableString$append$frost$core$String($tmp1279, $tmp1280);
// line 456
frost$io$IndentedOutputStream** $tmp1281 = &param0->out;
frost$io$IndentedOutputStream* $tmp1282 = *$tmp1281;
frost$core$String* $tmp1283 = *(&local8);
frost$core$String* $tmp1284 = frost$core$String$get_asString$R$frost$core$String($tmp1283);
frost$core$String* $tmp1285 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1284, &$s1286);
frost$core$String* $tmp1287 = *(&local10);
frost$core$String* $tmp1288 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1285, $tmp1287);
frost$core$String* $tmp1289 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1288, &$s1290);
frost$core$Int64 $tmp1291 = *(&local9);
frost$core$Int64$wrapper* $tmp1292;
$tmp1292 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1292->value = $tmp1291;
frost$core$String* $tmp1293 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1289, ((frost$core$Object*) $tmp1292));
frost$core$String* $tmp1294 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1293, &$s1295);
$fn1297 $tmp1296 = ($fn1297) ((frost$io$OutputStream*) $tmp1282)->$class->vtable[17];
frost$core$Error* $tmp1298 = $tmp1296(((frost$io$OutputStream*) $tmp1282), $tmp1294);
if ($tmp1298 == NULL) goto block21; else goto block22;
block22:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
*(&local1) = $tmp1298;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
frost$core$String* $tmp1299 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
*(&local10) = ((frost$core$String*) NULL);
frost$core$String* $tmp1300 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1301 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1302 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1303 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1304 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1305 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1306 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
// line 457
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1307));
frost$core$String* $tmp1308 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
*(&local8) = &$s1309;
frost$core$String* $tmp1310 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
*(&local10) = ((frost$core$String*) NULL);
goto block18;
block18:;
frost$core$Int64 $tmp1311 = *(&local9);
int64_t $tmp1312 = $tmp1256.value;
int64_t $tmp1313 = $tmp1311.value;
int64_t $tmp1314 = $tmp1312 - $tmp1313;
frost$core$Int64 $tmp1315 = (frost$core$Int64) {$tmp1314};
frost$core$UInt64 $tmp1316 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1315);
if ($tmp1258) goto block24; else goto block25;
block24:;
uint64_t $tmp1317 = $tmp1316.value;
uint64_t $tmp1318 = $tmp1260.value;
bool $tmp1319 = $tmp1317 >= $tmp1318;
frost$core$Bit $tmp1320 = (frost$core$Bit) {$tmp1319};
bool $tmp1321 = $tmp1320.value;
if ($tmp1321) goto block23; else goto block17;
block25:;
uint64_t $tmp1322 = $tmp1316.value;
uint64_t $tmp1323 = $tmp1260.value;
bool $tmp1324 = $tmp1322 > $tmp1323;
frost$core$Bit $tmp1325 = (frost$core$Bit) {$tmp1324};
bool $tmp1326 = $tmp1325.value;
if ($tmp1326) goto block23; else goto block17;
block23:;
int64_t $tmp1327 = $tmp1311.value;
int64_t $tmp1328 = $tmp1259.value;
int64_t $tmp1329 = $tmp1327 + $tmp1328;
frost$core$Int64 $tmp1330 = (frost$core$Int64) {$tmp1329};
*(&local9) = $tmp1330;
goto block16;
block17:;
// line 459
frost$io$IndentedOutputStream** $tmp1331 = &param0->out;
frost$io$IndentedOutputStream* $tmp1332 = *$tmp1331;
$fn1334 $tmp1333 = ($fn1334) ((frost$io$OutputStream*) $tmp1332)->$class->vtable[19];
frost$core$Error* $tmp1335 = $tmp1333(((frost$io$OutputStream*) $tmp1332), &$s1336);
if ($tmp1335 == NULL) goto block26; else goto block27;
block27:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
*(&local1) = $tmp1335;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
frost$core$String* $tmp1337 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1338 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1339 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1340 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1341 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1342 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1343 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
// line 460
frost$io$IndentedOutputStream** $tmp1344 = &param0->out;
frost$io$IndentedOutputStream* $tmp1345 = *$tmp1344;
frost$core$Int64* $tmp1346 = &$tmp1345->level;
frost$core$Int64 $tmp1347 = *$tmp1346;
frost$core$Int64 $tmp1348 = (frost$core$Int64) {1};
int64_t $tmp1349 = $tmp1347.value;
int64_t $tmp1350 = $tmp1348.value;
int64_t $tmp1351 = $tmp1349 + $tmp1350;
frost$core$Int64 $tmp1352 = (frost$core$Int64) {$tmp1351};
frost$core$Int64* $tmp1353 = &$tmp1345->level;
*$tmp1353 = $tmp1352;
// line 461
frost$core$MutableString* $tmp1354 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp1354, &$s1355);
// line 462
frost$io$MemoryOutputStream* $tmp1356 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp1356);
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
frost$io$MemoryOutputStream* $tmp1357 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
*(&local11) = $tmp1356;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
// line 463
frost$collections$Array* $tmp1358 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1358);
*(&local12) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
frost$collections$Array* $tmp1359 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
*(&local12) = $tmp1358;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
// line 464
frost$core$Int64 $tmp1360 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray** $tmp1361 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1362 = *$tmp1361;
ITable* $tmp1363 = ((frost$collections$CollectionView*) $tmp1362)->$class->itable;
while ($tmp1363->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1363 = $tmp1363->next;
}
$fn1365 $tmp1364 = $tmp1363->methods[0];
frost$core$Int64 $tmp1366 = $tmp1364(((frost$collections$CollectionView*) $tmp1362));
frost$core$Int64 $tmp1367 = (frost$core$Int64) {1};
int64_t $tmp1368 = $tmp1366.value;
int64_t $tmp1369 = $tmp1367.value;
int64_t $tmp1370 = $tmp1368 - $tmp1369;
frost$core$Int64 $tmp1371 = (frost$core$Int64) {$tmp1370};
frost$core$Bit $tmp1372 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1373 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1360, $tmp1371, $tmp1372);
frost$core$Int64 $tmp1374 = $tmp1373.min;
*(&local13) = $tmp1374;
frost$core$Int64 $tmp1375 = $tmp1373.max;
frost$core$Bit $tmp1376 = $tmp1373.inclusive;
bool $tmp1377 = $tmp1376.value;
frost$core$Int64 $tmp1378 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1379 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1378);
if ($tmp1377) goto block31; else goto block32;
block31:;
int64_t $tmp1380 = $tmp1374.value;
int64_t $tmp1381 = $tmp1375.value;
bool $tmp1382 = $tmp1380 <= $tmp1381;
frost$core$Bit $tmp1383 = (frost$core$Bit) {$tmp1382};
bool $tmp1384 = $tmp1383.value;
if ($tmp1384) goto block28; else goto block29;
block32:;
int64_t $tmp1385 = $tmp1374.value;
int64_t $tmp1386 = $tmp1375.value;
bool $tmp1387 = $tmp1385 < $tmp1386;
frost$core$Bit $tmp1388 = (frost$core$Bit) {$tmp1387};
bool $tmp1389 = $tmp1388.value;
if ($tmp1389) goto block28; else goto block29;
block28:;
// line 465
frost$core$Int64 $tmp1390 = *(&local13);
frost$core$Int64$wrapper* $tmp1391;
$tmp1391 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1391->value = $tmp1390;
frost$core$String* $tmp1392 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1393, ((frost$core$Object*) $tmp1391));
frost$core$String* $tmp1394 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1392, &$s1395);
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
frost$core$String* $tmp1396 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
*(&local14) = $tmp1394;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
// line 466
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
// line 467
frost$core$Int64 $tmp1397 = *(&local13);
frost$core$Int64 $tmp1398 = (frost$core$Int64) {0};
frost$core$Bit $tmp1399 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1397, $tmp1398);
bool $tmp1400 = $tmp1399.value;
if ($tmp1400) goto block33; else goto block35;
block33:;
// line 468
frost$core$Weak** $tmp1401 = &param1->owner;
frost$core$Weak* $tmp1402 = *$tmp1401;
frost$core$Object* $tmp1403 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1402);
org$frostlang$frostc$Type** $tmp1404 = &((org$frostlang$frostc$ClassDecl*) $tmp1403)->type;
org$frostlang$frostc$Type* $tmp1405 = *$tmp1404;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
org$frostlang$frostc$Type* $tmp1406 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
*(&local15) = $tmp1405;
frost$core$Frost$unref$frost$core$Object$Q($tmp1403);
goto block34;
block35:;
// line 1
// line 471
frost$collections$Array** $tmp1407 = &param1->parameters;
frost$collections$Array* $tmp1408 = *$tmp1407;
frost$core$Int64 $tmp1409 = *(&local13);
frost$core$Int64 $tmp1410 = (frost$core$Int64) {1};
int64_t $tmp1411 = $tmp1409.value;
int64_t $tmp1412 = $tmp1410.value;
int64_t $tmp1413 = $tmp1411 - $tmp1412;
frost$core$Int64 $tmp1414 = (frost$core$Int64) {$tmp1413};
frost$core$Object* $tmp1415 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1408, $tmp1414);
org$frostlang$frostc$Type** $tmp1416 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1415)->type;
org$frostlang$frostc$Type* $tmp1417 = *$tmp1416;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
org$frostlang$frostc$Type* $tmp1418 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
*(&local15) = $tmp1417;
frost$core$Frost$unref$frost$core$Object$Q($tmp1415);
goto block34;
block34:;
// line 473
org$frostlang$frostc$Type* $tmp1419 = *(&local15);
org$frostlang$frostc$FixedArray** $tmp1420 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1421 = *$tmp1420;
frost$core$Int64 $tmp1422 = *(&local13);
frost$core$Object* $tmp1423 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1421, $tmp1422);
ITable* $tmp1424 = ((frost$core$Equatable*) $tmp1419)->$class->itable;
while ($tmp1424->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1424 = $tmp1424->next;
}
$fn1426 $tmp1425 = $tmp1424->methods[1];
frost$core$Bit $tmp1427 = $tmp1425(((frost$core$Equatable*) $tmp1419), ((frost$core$Equatable*) ((org$frostlang$frostc$Type*) $tmp1423)));
bool $tmp1428 = $tmp1427.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1423);
if ($tmp1428) goto block36; else goto block38;
block36:;
// line 474
frost$core$String* $tmp1429 = *(&local14);
org$frostlang$frostc$FixedArray** $tmp1430 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1431 = *$tmp1430;
frost$core$Int64 $tmp1432 = *(&local13);
frost$core$Object* $tmp1433 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1431, $tmp1432);
org$frostlang$frostc$Type* $tmp1434 = *(&local15);
frost$core$String* $tmp1435 = org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1429, ((org$frostlang$frostc$Type*) $tmp1433), $tmp1434);
*(&local16) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1435));
frost$core$String* $tmp1436 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
*(&local16) = $tmp1435;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1435));
frost$core$Frost$unref$frost$core$Object$Q($tmp1433);
// line 475
frost$collections$Array* $tmp1437 = *(&local12);
frost$core$String* $tmp1438 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp1437, ((frost$core$Object*) $tmp1438));
// line 476
frost$core$Weak** $tmp1439 = &param0->compiler;
frost$core$Weak* $tmp1440 = *$tmp1439;
frost$core$Object* $tmp1441 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1440);
org$frostlang$frostc$FixedArray** $tmp1442 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1443 = *$tmp1442;
frost$core$Int64 $tmp1444 = *(&local13);
frost$core$Object* $tmp1445 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1443, $tmp1444);
frost$core$Bit $tmp1446 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1441), ((org$frostlang$frostc$Type*) $tmp1445));
bool $tmp1447 = $tmp1446.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1445);
frost$core$Frost$unref$frost$core$Object$Q($tmp1441);
if ($tmp1447) goto block41; else goto block40;
block41:;
frost$core$Weak** $tmp1448 = &param0->compiler;
frost$core$Weak* $tmp1449 = *$tmp1448;
frost$core$Object* $tmp1450 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1449);
org$frostlang$frostc$Type* $tmp1451 = *(&local15);
frost$core$Bit $tmp1452 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1450), $tmp1451);
frost$core$Bit $tmp1453 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1452);
bool $tmp1454 = $tmp1453.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1450);
if ($tmp1454) goto block39; else goto block40;
block39:;
// line 477
frost$io$MemoryOutputStream* $tmp1455 = *(&local11);
frost$core$String* $tmp1456 = *(&local16);
frost$core$String* $tmp1457 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1458, $tmp1456);
frost$core$String* $tmp1459 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1457, &$s1460);
frost$core$String* $tmp1461 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1462, $tmp1459);
$fn1464 $tmp1463 = ($fn1464) ((frost$io$OutputStream*) $tmp1455)->$class->vtable[19];
frost$core$Error* $tmp1465 = $tmp1463(((frost$io$OutputStream*) $tmp1455), $tmp1461);
if ($tmp1465 == NULL) goto block42; else goto block43;
block43:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
*(&local1) = $tmp1465;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
frost$core$String* $tmp1466 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
*(&local16) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1467 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1468 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
*(&local14) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp1469 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1469));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1470 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1471 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1472 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1473 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1474 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1475 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1476 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1477 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block42:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
goto block40;
block40:;
frost$core$String* $tmp1478 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
*(&local16) = ((frost$core$String*) NULL);
goto block37;
block38:;
// line 1
// line 482
frost$collections$Array* $tmp1479 = *(&local12);
frost$core$String* $tmp1480 = *(&local14);
frost$collections$Array$add$frost$collections$Array$T($tmp1479, ((frost$core$Object*) $tmp1480));
goto block37;
block37:;
org$frostlang$frostc$Type* $tmp1481 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1482 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
*(&local14) = ((frost$core$String*) NULL);
goto block30;
block30:;
frost$core$Int64 $tmp1483 = *(&local13);
int64_t $tmp1484 = $tmp1375.value;
int64_t $tmp1485 = $tmp1483.value;
int64_t $tmp1486 = $tmp1484 - $tmp1485;
frost$core$Int64 $tmp1487 = (frost$core$Int64) {$tmp1486};
frost$core$UInt64 $tmp1488 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1487);
if ($tmp1377) goto block45; else goto block46;
block45:;
uint64_t $tmp1489 = $tmp1488.value;
uint64_t $tmp1490 = $tmp1379.value;
bool $tmp1491 = $tmp1489 >= $tmp1490;
frost$core$Bit $tmp1492 = (frost$core$Bit) {$tmp1491};
bool $tmp1493 = $tmp1492.value;
if ($tmp1493) goto block44; else goto block29;
block46:;
uint64_t $tmp1494 = $tmp1488.value;
uint64_t $tmp1495 = $tmp1379.value;
bool $tmp1496 = $tmp1494 > $tmp1495;
frost$core$Bit $tmp1497 = (frost$core$Bit) {$tmp1496};
bool $tmp1498 = $tmp1497.value;
if ($tmp1498) goto block44; else goto block29;
block44:;
int64_t $tmp1499 = $tmp1483.value;
int64_t $tmp1500 = $tmp1378.value;
int64_t $tmp1501 = $tmp1499 + $tmp1500;
frost$core$Int64 $tmp1502 = (frost$core$Int64) {$tmp1501};
*(&local13) = $tmp1502;
goto block28;
block29:;
// line 485
org$frostlang$frostc$Type** $tmp1503 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1504 = *$tmp1503;
org$frostlang$frostc$Type* $tmp1505 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp1506 = ((frost$core$Equatable*) $tmp1504)->$class->itable;
while ($tmp1506->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1506 = $tmp1506->next;
}
$fn1508 $tmp1507 = $tmp1506->methods[1];
frost$core$Bit $tmp1509 = $tmp1507(((frost$core$Equatable*) $tmp1504), ((frost$core$Equatable*) $tmp1505));
bool $tmp1510 = $tmp1509.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
if ($tmp1510) goto block47; else goto block48;
block47:;
// line 486
frost$io$IndentedOutputStream** $tmp1511 = &param0->out;
frost$io$IndentedOutputStream* $tmp1512 = *$tmp1511;
org$frostlang$frostc$Type** $tmp1513 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1514 = *$tmp1513;
frost$core$String* $tmp1515 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1514);
frost$core$String* $tmp1516 = frost$core$String$get_asString$R$frost$core$String($tmp1515);
frost$core$String* $tmp1517 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1516, &$s1518);
$fn1520 $tmp1519 = ($fn1520) ((frost$io$OutputStream*) $tmp1512)->$class->vtable[17];
frost$core$Error* $tmp1521 = $tmp1519(((frost$io$OutputStream*) $tmp1512), $tmp1517);
if ($tmp1521 == NULL) goto block49; else goto block50;
block50:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
*(&local1) = $tmp1521;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1516));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1515));
frost$collections$Array* $tmp1522 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1522));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1523 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1524 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1525 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1525));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1526 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1526));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1527 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1528 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1528));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1529 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1530 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1530));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1516));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1515));
goto block48;
block48:;
// line 488
frost$io$IndentedOutputStream** $tmp1531 = &param0->out;
frost$io$IndentedOutputStream* $tmp1532 = *$tmp1531;
frost$core$String* $tmp1533 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1534 = frost$core$String$get_asString$R$frost$core$String($tmp1533);
frost$core$String* $tmp1535 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1534, &$s1536);
$fn1538 $tmp1537 = ($fn1538) ((frost$io$OutputStream*) $tmp1532)->$class->vtable[17];
frost$core$Error* $tmp1539 = $tmp1537(((frost$io$OutputStream*) $tmp1532), $tmp1535);
if ($tmp1539 == NULL) goto block51; else goto block52;
block52:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
*(&local1) = $tmp1539;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1533));
frost$collections$Array* $tmp1540 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1540));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1541 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1541));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1542 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1542));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1543 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1543));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1544 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1544));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1545 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1545));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1546 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1546));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1547 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1547));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1548 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1548));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block51:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1533));
// line 489
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1549));
frost$core$String* $tmp1550 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1550));
*(&local8) = &$s1551;
// line 490
frost$core$Int64 $tmp1552 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray** $tmp1553 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1554 = *$tmp1553;
ITable* $tmp1555 = ((frost$collections$CollectionView*) $tmp1554)->$class->itable;
while ($tmp1555->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1555 = $tmp1555->next;
}
$fn1557 $tmp1556 = $tmp1555->methods[0];
frost$core$Int64 $tmp1558 = $tmp1556(((frost$collections$CollectionView*) $tmp1554));
frost$core$Int64 $tmp1559 = (frost$core$Int64) {1};
int64_t $tmp1560 = $tmp1558.value;
int64_t $tmp1561 = $tmp1559.value;
int64_t $tmp1562 = $tmp1560 - $tmp1561;
frost$core$Int64 $tmp1563 = (frost$core$Int64) {$tmp1562};
frost$core$Bit $tmp1564 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1565 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1552, $tmp1563, $tmp1564);
frost$core$Int64 $tmp1566 = $tmp1565.min;
*(&local17) = $tmp1566;
frost$core$Int64 $tmp1567 = $tmp1565.max;
frost$core$Bit $tmp1568 = $tmp1565.inclusive;
bool $tmp1569 = $tmp1568.value;
frost$core$Int64 $tmp1570 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1571 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1570);
if ($tmp1569) goto block56; else goto block57;
block56:;
int64_t $tmp1572 = $tmp1566.value;
int64_t $tmp1573 = $tmp1567.value;
bool $tmp1574 = $tmp1572 <= $tmp1573;
frost$core$Bit $tmp1575 = (frost$core$Bit) {$tmp1574};
bool $tmp1576 = $tmp1575.value;
if ($tmp1576) goto block53; else goto block54;
block57:;
int64_t $tmp1577 = $tmp1566.value;
int64_t $tmp1578 = $tmp1567.value;
bool $tmp1579 = $tmp1577 < $tmp1578;
frost$core$Bit $tmp1580 = (frost$core$Bit) {$tmp1579};
bool $tmp1581 = $tmp1580.value;
if ($tmp1581) goto block53; else goto block54;
block53:;
// line 491
frost$io$IndentedOutputStream** $tmp1582 = &param0->out;
frost$io$IndentedOutputStream* $tmp1583 = *$tmp1582;
frost$core$String* $tmp1584 = *(&local8);
frost$core$String* $tmp1585 = frost$core$String$get_asString$R$frost$core$String($tmp1584);
frost$core$String* $tmp1586 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1585, &$s1587);
frost$collections$Array* $tmp1588 = *(&local12);
frost$core$Int64 $tmp1589 = *(&local17);
frost$core$Object* $tmp1590 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1588, $tmp1589);
frost$core$String* $tmp1591 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1586, ((frost$core$String*) $tmp1590));
frost$core$String* $tmp1592 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1591, &$s1593);
$fn1595 $tmp1594 = ($fn1595) ((frost$io$OutputStream*) $tmp1583)->$class->vtable[17];
frost$core$Error* $tmp1596 = $tmp1594(((frost$io$OutputStream*) $tmp1583), $tmp1592);
if ($tmp1596 == NULL) goto block58; else goto block59;
block59:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
*(&local1) = $tmp1596;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1591));
frost$core$Frost$unref$frost$core$Object$Q($tmp1590);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1586));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
frost$collections$Array* $tmp1597 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1598 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1598));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1599 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1599));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1600 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1600));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1601 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1602 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1602));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1603 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1604 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1605 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1605));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block58:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1591));
frost$core$Frost$unref$frost$core$Object$Q($tmp1590);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1586));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
// line 492
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1606));
frost$core$String* $tmp1607 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1607));
*(&local8) = &$s1608;
goto block55;
block55:;
frost$core$Int64 $tmp1609 = *(&local17);
int64_t $tmp1610 = $tmp1567.value;
int64_t $tmp1611 = $tmp1609.value;
int64_t $tmp1612 = $tmp1610 - $tmp1611;
frost$core$Int64 $tmp1613 = (frost$core$Int64) {$tmp1612};
frost$core$UInt64 $tmp1614 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1613);
if ($tmp1569) goto block61; else goto block62;
block61:;
uint64_t $tmp1615 = $tmp1614.value;
uint64_t $tmp1616 = $tmp1571.value;
bool $tmp1617 = $tmp1615 >= $tmp1616;
frost$core$Bit $tmp1618 = (frost$core$Bit) {$tmp1617};
bool $tmp1619 = $tmp1618.value;
if ($tmp1619) goto block60; else goto block54;
block62:;
uint64_t $tmp1620 = $tmp1614.value;
uint64_t $tmp1621 = $tmp1571.value;
bool $tmp1622 = $tmp1620 > $tmp1621;
frost$core$Bit $tmp1623 = (frost$core$Bit) {$tmp1622};
bool $tmp1624 = $tmp1623.value;
if ($tmp1624) goto block60; else goto block54;
block60:;
int64_t $tmp1625 = $tmp1609.value;
int64_t $tmp1626 = $tmp1570.value;
int64_t $tmp1627 = $tmp1625 + $tmp1626;
frost$core$Int64 $tmp1628 = (frost$core$Int64) {$tmp1627};
*(&local17) = $tmp1628;
goto block53;
block54:;
// line 494
frost$io$IndentedOutputStream** $tmp1629 = &param0->out;
frost$io$IndentedOutputStream* $tmp1630 = *$tmp1629;
$fn1632 $tmp1631 = ($fn1632) ((frost$io$OutputStream*) $tmp1630)->$class->vtable[19];
frost$core$Error* $tmp1633 = $tmp1631(((frost$io$OutputStream*) $tmp1630), &$s1634);
if ($tmp1633 == NULL) goto block63; else goto block64;
block64:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
*(&local1) = $tmp1633;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
frost$collections$Array* $tmp1635 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1636 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1636));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1637 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1637));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1638 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1638));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1639 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1640 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1641 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1641));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1642 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1642));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1643 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block63:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
// line 495
frost$io$IndentedOutputStream** $tmp1644 = &param0->out;
frost$io$IndentedOutputStream* $tmp1645 = *$tmp1644;
frost$io$MemoryOutputStream* $tmp1646 = *(&local11);
$fn1648 $tmp1647 = ($fn1648) ((frost$io$OutputStream*) $tmp1645)->$class->vtable[20];
frost$core$Error* $tmp1649 = $tmp1647(((frost$io$OutputStream*) $tmp1645), ((frost$core$Object*) $tmp1646));
if ($tmp1649 == NULL) goto block65; else goto block66;
block66:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1649));
*(&local1) = $tmp1649;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1649));
frost$collections$Array* $tmp1650 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1651 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1652 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1653 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1653));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1654 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1654));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1655 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1655));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1656 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1656));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1657 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1658 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block65:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1649));
// line 496
org$frostlang$frostc$Type** $tmp1659 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1660 = *$tmp1659;
org$frostlang$frostc$Type* $tmp1661 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp1662 = ((frost$core$Equatable*) $tmp1660)->$class->itable;
while ($tmp1662->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1662 = $tmp1662->next;
}
$fn1664 $tmp1663 = $tmp1662->methods[1];
frost$core$Bit $tmp1665 = $tmp1663(((frost$core$Equatable*) $tmp1660), ((frost$core$Equatable*) $tmp1661));
bool $tmp1666 = $tmp1665.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1661));
if ($tmp1666) goto block67; else goto block68;
block67:;
// line 497
frost$io$IndentedOutputStream** $tmp1667 = &param0->out;
frost$io$IndentedOutputStream* $tmp1668 = *$tmp1667;
org$frostlang$frostc$Type** $tmp1669 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1670 = *$tmp1669;
org$frostlang$frostc$Type* $tmp1671 = *(&local5);
frost$core$String* $tmp1672 = org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(param0, &$s1673, $tmp1670, $tmp1671);
frost$core$String* $tmp1674 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1675, $tmp1672);
frost$core$String* $tmp1676 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1674, &$s1677);
$fn1679 $tmp1678 = ($fn1679) ((frost$io$OutputStream*) $tmp1668)->$class->vtable[19];
frost$core$Error* $tmp1680 = $tmp1678(((frost$io$OutputStream*) $tmp1668), $tmp1676);
if ($tmp1680 == NULL) goto block69; else goto block70;
block70:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
*(&local1) = $tmp1680;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1676));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1672));
frost$collections$Array* $tmp1681 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1681));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1682 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1682));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1683 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1683));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1684 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1685 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1686 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1686));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1687 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1688 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1688));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1689 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1689));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block69:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1676));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1672));
goto block68;
block68:;
// line 500
frost$io$IndentedOutputStream** $tmp1690 = &param0->out;
frost$io$IndentedOutputStream* $tmp1691 = *$tmp1690;
frost$core$Int64* $tmp1692 = &$tmp1691->level;
frost$core$Int64 $tmp1693 = *$tmp1692;
frost$core$Int64 $tmp1694 = (frost$core$Int64) {1};
int64_t $tmp1695 = $tmp1693.value;
int64_t $tmp1696 = $tmp1694.value;
int64_t $tmp1697 = $tmp1695 - $tmp1696;
frost$core$Int64 $tmp1698 = (frost$core$Int64) {$tmp1697};
frost$core$Int64* $tmp1699 = &$tmp1691->level;
*$tmp1699 = $tmp1698;
// line 501
frost$io$IndentedOutputStream** $tmp1700 = &param0->out;
frost$io$IndentedOutputStream* $tmp1701 = *$tmp1700;
$fn1703 $tmp1702 = ($fn1703) ((frost$io$OutputStream*) $tmp1701)->$class->vtable[19];
frost$core$Error* $tmp1704 = $tmp1702(((frost$io$OutputStream*) $tmp1701), &$s1705);
if ($tmp1704 == NULL) goto block71; else goto block72;
block72:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
*(&local1) = $tmp1704;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
frost$collections$Array* $tmp1706 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1707 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1708 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1708));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1709 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1710 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1711 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1711));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1712 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1712));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1713 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1713));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1714 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block71:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
// line 502
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1715 = (org$frostlang$frostc$CCodeGenerator$MethodShim*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$MethodShim$class);
frost$core$String* $tmp1716 = *(&local6);
frost$core$MutableString* $tmp1717 = *(&local7);
frost$core$String* $tmp1718 = frost$core$MutableString$finish$R$frost$core$String($tmp1717);
org$frostlang$frostc$CCodeGenerator$MethodShim$init$frost$core$String$frost$core$String($tmp1715, $tmp1716, $tmp1718);
*(&local18) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1719 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
*(&local18) = $tmp1715;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
// line 503
frost$collections$IdentityMap** $tmp1720 = &param0->methodShims;
frost$collections$IdentityMap* $tmp1721 = *$tmp1720;
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1722 = *(&local18);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V($tmp1721, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp1722));
// line 504
frost$io$IndentedOutputStream** $tmp1723 = &param0->shims;
frost$io$IndentedOutputStream* $tmp1724 = *$tmp1723;
frost$io$MemoryOutputStream* $tmp1725 = *(&local4);
frost$core$String* $tmp1726 = frost$io$MemoryOutputStream$finish$R$frost$core$String($tmp1725);
$fn1728 $tmp1727 = ($fn1728) ((frost$io$OutputStream*) $tmp1724)->$class->vtable[17];
frost$core$Error* $tmp1729 = $tmp1727(((frost$io$OutputStream*) $tmp1724), $tmp1726);
if ($tmp1729 == NULL) goto block73; else goto block74;
block74:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
*(&local1) = $tmp1729;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1726));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1730 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1730));
*(&local18) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$collections$Array* $tmp1731 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1732 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1733 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1733));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1734 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1735 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1736 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1737 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1738 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1738));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1739 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1739));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1726));
// line 505
frost$io$IndentedOutputStream* $tmp1740 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1740));
frost$io$IndentedOutputStream** $tmp1741 = &param0->out;
frost$io$IndentedOutputStream* $tmp1742 = *$tmp1741;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1742));
frost$io$IndentedOutputStream** $tmp1743 = &param0->out;
*$tmp1743 = $tmp1740;
// line 506
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1744 = *(&local18);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1744));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1745 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1745));
*(&local18) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$collections$Array* $tmp1746 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1746));
*(&local12) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1747 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1747));
*(&local11) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1748 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1748));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1749 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1749));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1750 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
*(&local6) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1751 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1751));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1752 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1752));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1753 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1753));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1754 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1754));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Error* $tmp1755 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1755));
*(&local1) = ((frost$core$Error*) NULL);
*(&local0) = $tmp1744;
goto block1;
block4:;
// line 509
frost$core$Int64 $tmp1756 = (frost$core$Int64) {509};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1757, $tmp1756);
abort(); // unreachable
block5:;
frost$core$Error* $tmp1758 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1758));
*(&local1) = ((frost$core$Error*) NULL);
goto block75;
block75:;
block1:;
frost$io$IndentedOutputStream** $tmp1759 = &param0->out;
frost$io$IndentedOutputStream* $tmp1760 = *$tmp1759;
bool $tmp1761 = $tmp1760 == $tmp1156;
frost$core$Bit $tmp1762 = frost$core$Bit$init$builtin_bit($tmp1761);
bool $tmp1763 = $tmp1762.value;
if ($tmp1763) goto block2; else goto block3;
block2:;
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1764 = *(&local0);
return $tmp1764;
block3:;
frost$core$Int64 $tmp1765 = (frost$core$Int64) {434};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1766, $tmp1765, &$s1767);
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
frost$core$Weak** $tmp1768 = &param0->compiler;
frost$core$Weak* $tmp1769 = *$tmp1768;
frost$core$Object* $tmp1770 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1769);
org$frostlang$frostc$Type** $tmp1771 = &param1->type;
org$frostlang$frostc$Type* $tmp1772 = *$tmp1771;
frost$collections$HashSet* $tmp1773 = org$frostlang$frostc$Compiler$allInterfaces$org$frostlang$frostc$Type$R$frost$collections$HashSet$LTorg$frostlang$frostc$Type$GT(((org$frostlang$frostc$Compiler*) $tmp1770), $tmp1772);
*(&local1) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1773));
frost$collections$HashSet* $tmp1774 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1774));
*(&local1) = $tmp1773;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1773));
frost$core$Frost$unref$frost$core$Object$Q($tmp1770);
// line 516
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1775));
frost$core$String* $tmp1776 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
*(&local2) = &$s1777;
// line 517
frost$collections$HashSet* $tmp1778 = *(&local1);
ITable* $tmp1779 = ((frost$collections$Iterable*) $tmp1778)->$class->itable;
while ($tmp1779->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1779 = $tmp1779->next;
}
$fn1781 $tmp1780 = $tmp1779->methods[0];
frost$collections$Iterator* $tmp1782 = $tmp1780(((frost$collections$Iterable*) $tmp1778));
goto block3;
block3:;
ITable* $tmp1783 = $tmp1782->$class->itable;
while ($tmp1783->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1783 = $tmp1783->next;
}
$fn1785 $tmp1784 = $tmp1783->methods[0];
frost$core$Bit $tmp1786 = $tmp1784($tmp1782);
bool $tmp1787 = $tmp1786.value;
if ($tmp1787) goto block5; else goto block4;
block4:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp1788 = $tmp1782->$class->itable;
while ($tmp1788->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1788 = $tmp1788->next;
}
$fn1790 $tmp1789 = $tmp1788->methods[1];
frost$core$Object* $tmp1791 = $tmp1789($tmp1782);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1791)));
org$frostlang$frostc$Type* $tmp1792 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1792));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp1791);
// line 518
frost$core$Weak** $tmp1793 = &param0->compiler;
frost$core$Weak* $tmp1794 = *$tmp1793;
frost$core$Object* $tmp1795 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1794);
org$frostlang$frostc$Type* $tmp1796 = *(&local3);
org$frostlang$frostc$ClassDecl* $tmp1797 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1795), $tmp1796);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1797));
org$frostlang$frostc$ClassDecl* $tmp1798 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1798));
*(&local4) = $tmp1797;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1797));
frost$core$Frost$unref$frost$core$Object$Q($tmp1795);
// line 519
org$frostlang$frostc$ClassDecl* $tmp1799 = *(&local4);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1800 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp1799);
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1801 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
*(&local5) = $tmp1800;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
// line 520
frost$core$Weak** $tmp1802 = &param0->compiler;
frost$core$Weak* $tmp1803 = *$tmp1802;
frost$core$Object* $tmp1804 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1803);
org$frostlang$frostc$Type* $tmp1805 = *(&local3);
frost$collections$ListView* $tmp1806 = org$frostlang$frostc$Compiler$interfaceMethods$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1804), param1, $tmp1805);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
frost$collections$ListView* $tmp1807 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
*(&local6) = $tmp1806;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
frost$core$Frost$unref$frost$core$Object$Q($tmp1804);
// line 521
frost$core$String** $tmp1808 = &param1->name;
frost$core$String* $tmp1809 = *$tmp1808;
frost$core$String* $tmp1810 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1809);
frost$core$String* $tmp1811 = frost$core$String$get_asString$R$frost$core$String($tmp1810);
frost$core$String* $tmp1812 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1811, &$s1813);
org$frostlang$frostc$ClassDecl* $tmp1814 = *(&local4);
frost$core$String** $tmp1815 = &$tmp1814->name;
frost$core$String* $tmp1816 = *$tmp1815;
frost$core$String* $tmp1817 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1816);
frost$core$String* $tmp1818 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1812, $tmp1817);
frost$core$String* $tmp1819 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1818, &$s1820);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
frost$core$String* $tmp1821 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1821));
*(&local7) = $tmp1819;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1817));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1810));
// line 522
frost$core$MutableString* $tmp1822 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Type* $tmp1823 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp1824 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1823);
frost$core$String* $tmp1825 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1826, $tmp1824);
frost$core$String* $tmp1827 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1825, &$s1828);
frost$collections$ListView* $tmp1829 = *(&local6);
ITable* $tmp1830 = ((frost$collections$CollectionView*) $tmp1829)->$class->itable;
while ($tmp1830->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1830 = $tmp1830->next;
}
$fn1832 $tmp1831 = $tmp1830->methods[0];
frost$core$Int64 $tmp1833 = $tmp1831(((frost$collections$CollectionView*) $tmp1829));
frost$core$Int64$wrapper* $tmp1834;
$tmp1834 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1834->value = $tmp1833;
frost$core$String* $tmp1835 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1836, ((frost$core$Object*) $tmp1834));
frost$core$String* $tmp1837 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1835, &$s1838);
frost$core$String* $tmp1839 = *(&local7);
frost$core$String* $tmp1840 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1837, $tmp1839);
frost$core$String* $tmp1841 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1840, &$s1842);
frost$core$String* $tmp1843 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1827, $tmp1841);
org$frostlang$frostc$Type* $tmp1844 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp1845 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1844);
frost$core$String* $tmp1846 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1847, $tmp1845);
frost$core$String* $tmp1848 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1846, &$s1849);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1850 = *(&local5);
frost$core$String** $tmp1851 = &$tmp1850->name;
frost$core$String* $tmp1852 = *$tmp1851;
frost$core$String* $tmp1853 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1848, $tmp1852);
frost$core$String* $tmp1854 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1853, &$s1855);
frost$core$String* $tmp1856 = *(&local2);
frost$core$String* $tmp1857 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1854, $tmp1856);
frost$core$String* $tmp1858 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1857, &$s1859);
frost$core$String* $tmp1860 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1843, $tmp1858);
frost$core$MutableString$init$frost$core$String($tmp1822, $tmp1860);
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1822));
frost$core$MutableString* $tmp1861 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
*(&local8) = $tmp1822;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1853));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1848));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1843));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1841));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1825));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1822));
// line 525
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1862));
frost$core$String* $tmp1863 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
*(&local9) = &$s1864;
// line 526
frost$collections$ListView* $tmp1865 = *(&local6);
ITable* $tmp1866 = ((frost$collections$Iterable*) $tmp1865)->$class->itable;
while ($tmp1866->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1866 = $tmp1866->next;
}
$fn1868 $tmp1867 = $tmp1866->methods[0];
frost$collections$Iterator* $tmp1869 = $tmp1867(((frost$collections$Iterable*) $tmp1865));
goto block6;
block6:;
ITable* $tmp1870 = $tmp1869->$class->itable;
while ($tmp1870->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1870 = $tmp1870->next;
}
$fn1872 $tmp1871 = $tmp1870->methods[0];
frost$core$Bit $tmp1873 = $tmp1871($tmp1869);
bool $tmp1874 = $tmp1873.value;
if ($tmp1874) goto block8; else goto block7;
block7:;
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp1875 = $tmp1869->$class->itable;
while ($tmp1875->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1875 = $tmp1875->next;
}
$fn1877 $tmp1876 = $tmp1875->methods[1];
frost$core$Object* $tmp1878 = $tmp1876($tmp1869);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1878)));
org$frostlang$frostc$MethodDecl* $tmp1879 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1879));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) $tmp1878);
// line 527
frost$core$MutableString* $tmp1880 = *(&local8);
frost$core$String* $tmp1881 = *(&local9);
frost$core$MutableString$append$frost$core$String($tmp1880, $tmp1881);
// line 528
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1882));
frost$core$String* $tmp1883 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1883));
*(&local9) = &$s1884;
// line 529
org$frostlang$frostc$MethodDecl* $tmp1885 = *(&local10);
org$frostlang$frostc$Annotations** $tmp1886 = &$tmp1885->annotations;
org$frostlang$frostc$Annotations* $tmp1887 = *$tmp1886;
frost$core$Bit $tmp1888 = org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit($tmp1887);
bool $tmp1889 = $tmp1888.value;
if ($tmp1889) goto block9; else goto block11;
block9:;
// line 530
frost$core$MutableString* $tmp1890 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp1890, &$s1891);
goto block10;
block11:;
// line 1
// line 533
frost$core$MutableString* $tmp1892 = *(&local8);
org$frostlang$frostc$MethodDecl* $tmp1893 = *(&local10);
frost$core$String* $tmp1894 = org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, $tmp1893);
frost$core$MutableString$append$frost$core$String($tmp1892, $tmp1894);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1894));
goto block10;
block10:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1878);
org$frostlang$frostc$MethodDecl* $tmp1895 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1869));
// line 536
frost$core$MutableString* $tmp1896 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp1896, &$s1897);
// line 537
frost$io$MemoryOutputStream** $tmp1898 = &param0->types;
frost$io$MemoryOutputStream* $tmp1899 = *$tmp1898;
frost$core$MutableString* $tmp1900 = *(&local8);
frost$core$String* $tmp1901 = frost$core$MutableString$finish$R$frost$core$String($tmp1900);
$fn1903 $tmp1902 = ($fn1903) ((frost$io$OutputStream*) $tmp1899)->$class->vtable[19];
frost$core$Error* $tmp1904 = $tmp1902(((frost$io$OutputStream*) $tmp1899), $tmp1901);
if ($tmp1904 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
*(&local0) = $tmp1904;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
frost$core$String* $tmp1905 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1906 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1907 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1908 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1908));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1909 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1909));
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1910 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1791);
org$frostlang$frostc$Type* $tmp1911 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1782));
frost$core$String* $tmp1912 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
*(&local2) = ((frost$core$String*) NULL);
frost$collections$HashSet* $tmp1913 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1913));
*(&local1) = ((frost$collections$HashSet*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
// line 538
frost$core$String* $tmp1914 = *(&local7);
frost$core$String* $tmp1915 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1916, $tmp1914);
frost$core$String* $tmp1917 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1915, &$s1918);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
frost$core$String* $tmp1919 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
*(&local2) = $tmp1917;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
frost$core$String* $tmp1920 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1920));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1921 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1921));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1922 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1923 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1923));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1924 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1924));
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1925 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1925));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1791);
org$frostlang$frostc$Type* $tmp1926 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1926));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1782));
// line 540
frost$core$String* $tmp1927 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1927));
frost$core$String* $tmp1928 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
*(&local2) = ((frost$core$String*) NULL);
frost$collections$HashSet* $tmp1929 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1929));
*(&local1) = ((frost$collections$HashSet*) NULL);
frost$core$Error* $tmp1930 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1930));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp1927;
block1:;
// line 543
frost$core$Int64 $tmp1931 = (frost$core$Int64) {543};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1932, $tmp1931);
abort(); // unreachable
block2:;
frost$core$Error* $tmp1933 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1933));
*(&local0) = ((frost$core$Error*) NULL);
goto block14;
block14:;

}
frost$core$Bit org$frostlang$frostc$CCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

// line 548
frost$core$Weak** $tmp1934 = &param0->hCodeGen;
frost$core$Weak* $tmp1935 = *$tmp1934;
frost$core$Object* $tmp1936 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1935);
frost$core$Bit $tmp1937 = org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$HCodeGenerator*) $tmp1936), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp1936);
return $tmp1937;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$CCodeGenerator$MethodShim* local4 = NULL;
// line 552
frost$core$Weak** $tmp1938 = &param0->compiler;
frost$core$Weak* $tmp1939 = *$tmp1938;
frost$core$Object* $tmp1940 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1939);
frost$core$Bit $tmp1941 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1940), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp1940);
// line 553
frost$core$Weak** $tmp1942 = &param1->owner;
frost$core$Weak* $tmp1943 = *$tmp1942;
frost$core$Object* $tmp1944 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1943);
frost$core$Bit $tmp1945 = org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp1944));
bool $tmp1946 = $tmp1945.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1944);
if ($tmp1946) goto block1; else goto block2;
block1:;
// line 554
org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param1);
goto block2;
block2:;
// line 556
*(&local0) = ((frost$core$String*) NULL);
// line 557
frost$core$Weak** $tmp1947 = &param0->compiler;
frost$core$Weak* $tmp1948 = *$tmp1947;
frost$core$Object* $tmp1949 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1948);
frost$core$Weak** $tmp1950 = &param1->owner;
frost$core$Weak* $tmp1951 = *$tmp1950;
frost$core$Object* $tmp1952 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1951);
org$frostlang$frostc$Type** $tmp1953 = &((org$frostlang$frostc$ClassDecl*) $tmp1952)->type;
org$frostlang$frostc$Type* $tmp1954 = *$tmp1953;
frost$core$Bit $tmp1955 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp1956 = org$frostlang$frostc$Compiler$declaredTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp1949), param1, $tmp1954, $tmp1955);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1956));
org$frostlang$frostc$Type* $tmp1957 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1957));
*(&local1) = $tmp1956;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1956));
frost$core$Frost$unref$frost$core$Object$Q($tmp1952);
frost$core$Frost$unref$frost$core$Object$Q($tmp1949);
// line 558
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
// line 559
frost$core$Weak** $tmp1958 = &param0->compiler;
frost$core$Weak* $tmp1959 = *$tmp1958;
frost$core$Object* $tmp1960 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1959);
frost$core$Weak** $tmp1961 = &param1->owner;
frost$core$Weak* $tmp1962 = *$tmp1961;
frost$core$Object* $tmp1963 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1962);
frost$core$Bit $tmp1964 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1960), ((org$frostlang$frostc$ClassDecl*) $tmp1963));
bool $tmp1965 = $tmp1964.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1963);
frost$core$Frost$unref$frost$core$Object$Q($tmp1960);
if ($tmp1965) goto block3; else goto block5;
block3:;
// line 560
org$frostlang$frostc$Type* $tmp1966 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1966));
org$frostlang$frostc$Type* $tmp1967 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1967));
*(&local2) = $tmp1966;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1966));
goto block4;
block5:;
// line 1
// line 563
frost$core$Weak** $tmp1968 = &param1->owner;
frost$core$Weak* $tmp1969 = *$tmp1968;
frost$core$Object* $tmp1970 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1969);
org$frostlang$frostc$Type** $tmp1971 = &((org$frostlang$frostc$ClassDecl*) $tmp1970)->type;
org$frostlang$frostc$Type* $tmp1972 = *$tmp1971;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1972));
org$frostlang$frostc$Type* $tmp1973 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1973));
*(&local2) = $tmp1972;
frost$core$Frost$unref$frost$core$Object$Q($tmp1970);
goto block4;
block4:;
// line 565
frost$core$Weak** $tmp1974 = &param0->compiler;
frost$core$Weak* $tmp1975 = *$tmp1974;
frost$core$Object* $tmp1976 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1975);
org$frostlang$frostc$Type* $tmp1977 = *(&local2);
org$frostlang$frostc$Type* $tmp1978 = org$frostlang$frostc$Compiler$inheritedTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp1976), param1, $tmp1977);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
org$frostlang$frostc$Type* $tmp1979 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
*(&local3) = $tmp1978;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
frost$core$Frost$unref$frost$core$Object$Q($tmp1976);
// line 566
org$frostlang$frostc$Type* $tmp1980 = *(&local1);
org$frostlang$frostc$Type* $tmp1981 = *(&local3);
ITable* $tmp1982 = ((frost$core$Equatable*) $tmp1980)->$class->itable;
while ($tmp1982->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1982 = $tmp1982->next;
}
$fn1984 $tmp1983 = $tmp1982->methods[1];
frost$core$Bit $tmp1985 = $tmp1983(((frost$core$Equatable*) $tmp1980), ((frost$core$Equatable*) $tmp1981));
bool $tmp1986 = $tmp1985.value;
if ($tmp1986) goto block6; else goto block8;
block6:;
// line 567
org$frostlang$frostc$Type* $tmp1987 = *(&local3);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1988 = org$frostlang$frostc$CCodeGenerator$createMethodShim$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$MethodShim(param0, param1, $tmp1987);
*(&local4) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1988));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1989 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1989));
*(&local4) = $tmp1988;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1988));
// line 568
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1990 = *(&local4);
frost$core$String** $tmp1991 = &$tmp1990->name;
frost$core$String* $tmp1992 = *$tmp1991;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1992));
frost$core$String* $tmp1993 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1993));
*(&local0) = $tmp1992;
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1994 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
*(&local4) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block7;
block8:;
// line 1
// line 571
frost$core$String* $tmp1995 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
frost$core$String* $tmp1996 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1996));
*(&local0) = $tmp1995;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
goto block7;
block7:;
// line 573
frost$core$String* $tmp1997 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1997));
org$frostlang$frostc$Type* $tmp1998 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1998));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1999 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2000 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp2001 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2001));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1997;

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
frost$collections$HashMap** $tmp2002 = &param0->classConstants;
frost$collections$HashMap* $tmp2003 = *$tmp2002;
frost$core$String** $tmp2004 = &param1->name;
frost$core$String* $tmp2005 = *$tmp2004;
frost$core$Object* $tmp2006 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2003, ((frost$collections$Key*) $tmp2005));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp2006)));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2007 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2007));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp2006);
frost$core$Frost$unref$frost$core$Object$Q($tmp2006);
// line 579
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2008 = *(&local1);
frost$core$Bit $tmp2009 = frost$core$Bit$init$builtin_bit($tmp2008 == NULL);
bool $tmp2010 = $tmp2009.value;
if ($tmp2010) goto block3; else goto block4;
block3:;
// line 580
org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(param0, param1);
// line 581
frost$core$Weak** $tmp2011 = &param0->compiler;
frost$core$Weak* $tmp2012 = *$tmp2011;
frost$core$Object* $tmp2013 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2012);
frost$core$Bit $tmp2014 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp2013), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp2013);
// line 582
*(&local2) = ((frost$core$String*) NULL);
// line 583
frost$core$Bit $tmp2015 = org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, param1);
bool $tmp2016 = $tmp2015.value;
if ($tmp2016) goto block5; else goto block6;
block5:;
// line 584
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2017 = (org$frostlang$frostc$CCodeGenerator$ClassConstant*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$ClassConstant$class);
org$frostlang$frostc$Type** $tmp2018 = &param1->type;
org$frostlang$frostc$Type* $tmp2019 = *$tmp2018;
frost$core$String** $tmp2020 = &((org$frostlang$frostc$Symbol*) $tmp2019)->name;
frost$core$String* $tmp2021 = *$tmp2020;
frost$core$String* $tmp2022 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp2021);
frost$core$String* $tmp2023 = frost$core$String$get_asString$R$frost$core$String($tmp2022);
frost$core$String* $tmp2024 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2023, &$s2025);
org$frostlang$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String($tmp2017, $tmp2024, &$s2026);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2017));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2027 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2027));
*(&local1) = $tmp2017;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2022));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2017));
// line 586
frost$collections$HashMap** $tmp2028 = &param0->classConstants;
frost$collections$HashMap* $tmp2029 = *$tmp2028;
frost$core$String** $tmp2030 = &param1->name;
frost$core$String* $tmp2031 = *$tmp2030;
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2032 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2029, ((frost$collections$Key*) $tmp2031), ((frost$core$Object*) $tmp2032));
// line 587
frost$collections$HashMap** $tmp2033 = &param0->classConstants;
frost$collections$HashMap* $tmp2034 = *$tmp2033;
frost$core$String** $tmp2035 = &param1->name;
frost$core$String* $tmp2036 = *$tmp2035;
frost$core$Object* $tmp2037 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2034, ((frost$collections$Key*) $tmp2036));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp2037)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2037);
frost$core$String* $tmp2038 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2038));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2039 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2039));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Error* $tmp2040 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2040));
*(&local0) = ((frost$core$Error*) NULL);
return ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp2037);
block6:;
// line 589
frost$core$Weak** $tmp2041 = &param0->compiler;
frost$core$Weak* $tmp2042 = *$tmp2041;
frost$core$Object* $tmp2043 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2042);
frost$collections$Stack** $tmp2044 = &((org$frostlang$frostc$Compiler*) $tmp2043)->currentClass;
frost$collections$Stack* $tmp2045 = *$tmp2044;
frost$collections$Stack$push$frost$collections$Stack$T($tmp2045, ((frost$core$Object*) param1));
frost$core$Frost$unref$frost$core$Object$Q($tmp2043);
// line 590
frost$core$Weak** $tmp2046 = &param0->compiler;
frost$core$Weak* $tmp2047 = *$tmp2046;
frost$core$Object* $tmp2048 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2047);
frost$collections$ListView* $tmp2049 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2048), param1);
*(&local3) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2049));
frost$collections$ListView* $tmp2050 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2050));
*(&local3) = $tmp2049;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2049));
frost$core$Frost$unref$frost$core$Object$Q($tmp2048);
// line 591
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2051 = (org$frostlang$frostc$CCodeGenerator$ClassConstant*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$ClassConstant$class);
org$frostlang$frostc$Type** $tmp2052 = &param1->type;
org$frostlang$frostc$Type* $tmp2053 = *$tmp2052;
frost$core$String** $tmp2054 = &((org$frostlang$frostc$Symbol*) $tmp2053)->name;
frost$core$String* $tmp2055 = *$tmp2054;
frost$core$String* $tmp2056 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp2055);
frost$core$String* $tmp2057 = frost$core$String$get_asString$R$frost$core$String($tmp2056);
frost$core$String* $tmp2058 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2057, &$s2059);
org$frostlang$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String($tmp2051, $tmp2058, &$s2060);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2051));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2061 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
*(&local1) = $tmp2051;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2058));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2056));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2051));
// line 592
frost$collections$HashMap** $tmp2062 = &param0->classConstants;
frost$collections$HashMap* $tmp2063 = *$tmp2062;
frost$core$String** $tmp2064 = &param1->name;
frost$core$String* $tmp2065 = *$tmp2064;
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2066 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2063, ((frost$collections$Key*) $tmp2065), ((frost$core$Object*) $tmp2066));
// line 593
*(&local4) = ((frost$core$String*) NULL);
// line 594
org$frostlang$frostc$Type** $tmp2067 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp2068 = *$tmp2067;
frost$core$Bit $tmp2069 = frost$core$Bit$init$builtin_bit($tmp2068 != NULL);
bool $tmp2070 = $tmp2069.value;
if ($tmp2070) goto block7; else goto block9;
block7:;
// line 595
frost$core$Weak** $tmp2071 = &param0->compiler;
frost$core$Weak* $tmp2072 = *$tmp2071;
frost$core$Object* $tmp2073 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2072);
org$frostlang$frostc$Type** $tmp2074 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp2075 = *$tmp2074;
org$frostlang$frostc$ClassDecl* $tmp2076 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2073), $tmp2075);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2077 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp2076);
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2077));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2078 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
*(&local5) = $tmp2077;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2077));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2076));
frost$core$Frost$unref$frost$core$Object$Q($tmp2073);
// line 596
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2079 = *(&local5);
frost$core$String** $tmp2080 = &$tmp2079->name;
frost$core$String* $tmp2081 = *$tmp2080;
frost$core$String* $tmp2082 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2083, $tmp2081);
frost$core$String* $tmp2084 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2082, &$s2085);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
frost$core$String* $tmp2086 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2086));
*(&local4) = $tmp2084;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2082));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2087 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2087));
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block8;
block9:;
// line 1
// line 599
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2088));
frost$core$String* $tmp2089 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2089));
*(&local4) = &$s2090;
goto block8;
block8:;
// line 601
frost$core$Weak** $tmp2091 = &param0->compiler;
frost$core$Weak* $tmp2092 = *$tmp2091;
frost$core$Object* $tmp2093 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2092);
org$frostlang$frostc$Type* $tmp2094 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp2095 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2093), $tmp2094);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2096 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp2095);
*(&local6) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2096));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2097 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2097));
*(&local6) = $tmp2096;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2096));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2095));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
frost$core$Frost$unref$frost$core$Object$Q($tmp2093);
// line 602
frost$core$String** $tmp2098 = &param1->name;
frost$core$String* $tmp2099 = *$tmp2098;
frost$core$String* $tmp2100 = org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(param0, $tmp2099);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2100));
frost$core$String* $tmp2101 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2101));
*(&local7) = $tmp2100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2100));
// line 603
frost$core$String* $tmp2102 = *(&local7);
frost$core$Bit $tmp2103 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2102, &$s2104);
bool $tmp2105 = $tmp2103.value;
if ($tmp2105) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp2106 = (frost$core$Int64) {603};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2107, $tmp2106);
abort(); // unreachable
block10:;
// line 604
frost$core$MutableString* $tmp2108 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp2109 = *(&local7);
frost$core$Int64 $tmp2110 = (frost$core$Int64) {1};
frost$core$Bit $tmp2111 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp2112 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp2110, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp2111);
frost$core$String* $tmp2113 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp2109, $tmp2112);
frost$core$String* $tmp2114 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2115, $tmp2113);
frost$core$String* $tmp2116 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2114, &$s2117);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2118 = *(&local1);
frost$core$String** $tmp2119 = &$tmp2118->name;
frost$core$String* $tmp2120 = *$tmp2119;
frost$core$String* $tmp2121 = frost$core$String$get_asString$R$frost$core$String($tmp2120);
frost$core$String* $tmp2122 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2121, &$s2123);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2124 = *(&local1);
frost$core$String** $tmp2125 = &$tmp2124->name;
frost$core$String* $tmp2126 = *$tmp2125;
frost$core$String* $tmp2127 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2122, $tmp2126);
frost$core$String* $tmp2128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2127, &$s2129);
frost$core$String* $tmp2130 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2116, $tmp2128);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2131 = *(&local6);
frost$core$String** $tmp2132 = &$tmp2131->name;
frost$core$String* $tmp2133 = *$tmp2132;
frost$core$String* $tmp2134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2135, $tmp2133);
frost$core$String* $tmp2136 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2134, &$s2137);
frost$core$Int64 $tmp2138 = (frost$core$Int64) {18446744073709550617};
frost$core$Int64$wrapper* $tmp2139;
$tmp2139 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2139->value = $tmp2138;
frost$core$String* $tmp2140 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2136, ((frost$core$Object*) $tmp2139));
frost$core$String* $tmp2141 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2140, &$s2142);
frost$core$String* $tmp2143 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2130, $tmp2141);
frost$core$String* $tmp2144 = *(&local7);
frost$core$String* $tmp2145 = frost$core$String$get_asString$R$frost$core$String($tmp2144);
frost$core$String* $tmp2146 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2145, &$s2147);
frost$core$String* $tmp2148 = *(&local4);
frost$core$String* $tmp2149 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2146, $tmp2148);
frost$core$String* $tmp2150 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2149, &$s2151);
frost$core$String* $tmp2152 = org$frostlang$frostc$CCodeGenerator$getITable$org$frostlang$frostc$ClassDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp2153 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2150, $tmp2152);
frost$core$String* $tmp2154 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2153, &$s2155);
frost$core$String* $tmp2156 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2143, $tmp2154);
frost$core$MutableString$init$frost$core$String($tmp2108, $tmp2156);
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2108));
frost$core$MutableString* $tmp2157 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
*(&local8) = $tmp2108;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2108));
// line 608
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2158));
frost$core$String* $tmp2159 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2159));
*(&local9) = &$s2160;
// line 609
frost$collections$ListView* $tmp2161 = *(&local3);
ITable* $tmp2162 = ((frost$collections$Iterable*) $tmp2161)->$class->itable;
while ($tmp2162->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2162 = $tmp2162->next;
}
$fn2164 $tmp2163 = $tmp2162->methods[0];
frost$collections$Iterator* $tmp2165 = $tmp2163(((frost$collections$Iterable*) $tmp2161));
goto block12;
block12:;
ITable* $tmp2166 = $tmp2165->$class->itable;
while ($tmp2166->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2166 = $tmp2166->next;
}
$fn2168 $tmp2167 = $tmp2166->methods[0];
frost$core$Bit $tmp2169 = $tmp2167($tmp2165);
bool $tmp2170 = $tmp2169.value;
if ($tmp2170) goto block14; else goto block13;
block13:;
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp2171 = $tmp2165->$class->itable;
while ($tmp2171->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2171 = $tmp2171->next;
}
$fn2173 $tmp2172 = $tmp2171->methods[1];
frost$core$Object* $tmp2174 = $tmp2172($tmp2165);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp2174)));
org$frostlang$frostc$MethodDecl* $tmp2175 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2175));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) $tmp2174);
// line 610
frost$core$MutableString* $tmp2176 = *(&local8);
frost$core$String* $tmp2177 = *(&local9);
frost$core$MutableString$append$frost$core$String($tmp2176, $tmp2177);
// line 611
org$frostlang$frostc$MethodDecl* $tmp2178 = *(&local10);
org$frostlang$frostc$Annotations** $tmp2179 = &$tmp2178->annotations;
org$frostlang$frostc$Annotations* $tmp2180 = *$tmp2179;
frost$core$Bit $tmp2181 = org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit($tmp2180);
bool $tmp2182 = $tmp2181.value;
if ($tmp2182) goto block15; else goto block17;
block15:;
// line 612
frost$core$MutableString* $tmp2183 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp2183, &$s2184);
goto block16;
block17:;
// line 1
// line 615
frost$core$MutableString* $tmp2185 = *(&local8);
org$frostlang$frostc$MethodDecl* $tmp2186 = *(&local10);
frost$core$String* $tmp2187 = org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, $tmp2186);
frost$core$MutableString$append$frost$core$String($tmp2185, $tmp2187);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2187));
goto block16;
block16:;
// line 617
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2188));
frost$core$String* $tmp2189 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
*(&local9) = &$s2190;
frost$core$Frost$unref$frost$core$Object$Q($tmp2174);
org$frostlang$frostc$MethodDecl* $tmp2191 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2191));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2165));
// line 619
frost$core$MutableString* $tmp2192 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp2192, &$s2193);
// line 620
frost$io$MemoryOutputStream** $tmp2194 = &param0->types;
frost$io$MemoryOutputStream* $tmp2195 = *$tmp2194;
frost$core$MutableString* $tmp2196 = *(&local8);
frost$core$String* $tmp2197 = frost$core$MutableString$finish$R$frost$core$String($tmp2196);
$fn2199 $tmp2198 = ($fn2199) ((frost$io$OutputStream*) $tmp2195)->$class->vtable[19];
frost$core$Error* $tmp2200 = $tmp2198(((frost$io$OutputStream*) $tmp2195), $tmp2197);
if ($tmp2200 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2200));
*(&local0) = $tmp2200;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
frost$core$String* $tmp2201 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2201));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2202 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2202));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2203 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2203));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2204 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2204));
*(&local6) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2205 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
*(&local4) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp2206 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2206));
*(&local3) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp2207 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2207));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2208 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
// line 621
frost$core$Weak** $tmp2209 = &param0->compiler;
frost$core$Weak* $tmp2210 = *$tmp2209;
frost$core$Object* $tmp2211 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2210);
frost$collections$Stack** $tmp2212 = &((org$frostlang$frostc$Compiler*) $tmp2211)->currentClass;
frost$collections$Stack* $tmp2213 = *$tmp2212;
frost$core$Int64 $tmp2214 = (frost$core$Int64) {0};
frost$core$Object* $tmp2215 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp2213, $tmp2214);
bool $tmp2216 = ((org$frostlang$frostc$ClassDecl*) $tmp2215) == param1;
frost$core$Bit $tmp2217 = frost$core$Bit$init$builtin_bit($tmp2216);
bool $tmp2218 = $tmp2217.value;
if ($tmp2218) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp2219 = (frost$core$Int64) {621};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2220, $tmp2219);
abort(); // unreachable
block20:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2215);
frost$core$Frost$unref$frost$core$Object$Q($tmp2211);
// line 622
frost$core$Weak** $tmp2221 = &param0->compiler;
frost$core$Weak* $tmp2222 = *$tmp2221;
frost$core$Object* $tmp2223 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2222);
frost$collections$Stack** $tmp2224 = &((org$frostlang$frostc$Compiler*) $tmp2223)->currentClass;
frost$collections$Stack* $tmp2225 = *$tmp2224;
frost$core$Object* $tmp2226 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2225);
frost$core$Frost$unref$frost$core$Object$Q($tmp2226);
frost$core$Frost$unref$frost$core$Object$Q($tmp2223);
frost$core$String* $tmp2227 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2227));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2228 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2228));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2229 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2229));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2230 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
*(&local6) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2231 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2231));
*(&local4) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp2232 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
*(&local3) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp2233 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2233));
*(&local2) = ((frost$core$String*) NULL);
goto block4;
block4:;
// line 624
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2234 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2234));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2235 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2235));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Error* $tmp2236 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2236));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp2234;
block1:;
// line 627
frost$core$Int64 $tmp2237 = (frost$core$Int64) {627};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2238, $tmp2237);
abort(); // unreachable
block2:;
frost$core$Error* $tmp2239 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2239));
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
frost$core$String** $tmp2240 = &param1->name;
frost$core$String* $tmp2241 = *$tmp2240;
frost$core$String* $tmp2242 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp2241);
frost$core$String* $tmp2243 = frost$core$String$get_asString$R$frost$core$String($tmp2242);
frost$core$String* $tmp2244 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2243, &$s2245);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2244));
frost$core$String* $tmp2246 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2246));
*(&local1) = $tmp2244;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2242));
// line 634
frost$collections$HashMap** $tmp2247 = &param0->classConstants;
frost$collections$HashMap* $tmp2248 = *$tmp2247;
frost$core$String* $tmp2249 = *(&local1);
frost$core$Object* $tmp2250 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2248, ((frost$collections$Key*) $tmp2249));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp2250)));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2251 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2251));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp2250);
frost$core$Frost$unref$frost$core$Object$Q($tmp2250);
// line 635
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2252 = *(&local2);
frost$core$Bit $tmp2253 = frost$core$Bit$init$builtin_bit($tmp2252 == NULL);
bool $tmp2254 = $tmp2253.value;
if ($tmp2254) goto block3; else goto block4;
block3:;
// line 636
frost$core$Bit $tmp2255 = org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, param1);
bool $tmp2256 = $tmp2255.value;
if ($tmp2256) goto block5; else goto block7;
block5:;
// line 637
org$frostlang$frostc$Type* $tmp2257 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp2258 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp2257);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2257));
// line 638
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2259));
frost$core$String* $tmp2260 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
*(&local3) = &$s2261;
// line 639
frost$io$MemoryOutputStream** $tmp2262 = &param0->types;
frost$io$MemoryOutputStream* $tmp2263 = *$tmp2262;
frost$core$String* $tmp2264 = *(&local1);
frost$core$String* $tmp2265 = frost$core$String$get_asString$R$frost$core$String($tmp2264);
frost$core$String* $tmp2266 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2265, &$s2267);
frost$core$String* $tmp2268 = *(&local3);
frost$core$String* $tmp2269 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2266, $tmp2268);
frost$core$String* $tmp2270 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2269, &$s2271);
$fn2273 $tmp2272 = ($fn2273) ((frost$io$OutputStream*) $tmp2263)->$class->vtable[19];
frost$core$Error* $tmp2274 = $tmp2272(((frost$io$OutputStream*) $tmp2263), $tmp2270);
if ($tmp2274 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2274));
*(&local0) = $tmp2274;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2274));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
frost$core$String* $tmp2275 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2275));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2276 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2276));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2277 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2277));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2274));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
// line 640
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2278 = (org$frostlang$frostc$CCodeGenerator$ClassConstant*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$ClassConstant$class);
frost$core$String* $tmp2279 = *(&local1);
frost$core$String* $tmp2280 = *(&local3);
org$frostlang$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String($tmp2278, $tmp2279, $tmp2280);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2278));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2281 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2281));
*(&local2) = $tmp2278;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2278));
frost$core$String* $tmp2282 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2282));
*(&local3) = ((frost$core$String*) NULL);
goto block6;
block7:;
// line 1
// line 643
frost$core$Weak** $tmp2283 = &param0->compiler;
frost$core$Weak* $tmp2284 = *$tmp2283;
frost$core$Object* $tmp2285 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2284);
org$frostlang$frostc$Type* $tmp2286 = org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp2287 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2285), $tmp2286);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2287));
org$frostlang$frostc$ClassDecl* $tmp2288 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2288));
*(&local4) = $tmp2287;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2286));
frost$core$Frost$unref$frost$core$Object$Q($tmp2285);
// line 644
frost$core$Weak** $tmp2289 = &param0->compiler;
frost$core$Weak* $tmp2290 = *$tmp2289;
frost$core$Object* $tmp2291 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2290);
org$frostlang$frostc$ClassDecl* $tmp2292 = *(&local4);
frost$collections$ListView* $tmp2293 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2291), $tmp2292);
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2293));
frost$collections$ListView* $tmp2294 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2294));
*(&local5) = $tmp2293;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2293));
frost$core$Frost$unref$frost$core$Object$Q($tmp2291);
// line 645
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2295 = (org$frostlang$frostc$CCodeGenerator$ClassConstant*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$ClassConstant$class);
frost$core$String** $tmp2296 = &param1->name;
frost$core$String* $tmp2297 = *$tmp2296;
frost$core$String* $tmp2298 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp2297);
frost$core$String* $tmp2299 = frost$core$String$get_asString$R$frost$core$String($tmp2298);
frost$core$String* $tmp2300 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2299, &$s2301);
org$frostlang$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String($tmp2295, $tmp2300, &$s2302);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2303 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
*(&local2) = $tmp2295;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
// line 646
frost$core$Weak** $tmp2304 = &param0->compiler;
frost$core$Weak* $tmp2305 = *$tmp2304;
frost$core$Object* $tmp2306 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2305);
frost$collections$ListView* $tmp2307 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2306), param1);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2307));
frost$collections$ListView* $tmp2308 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2308));
*(&local6) = $tmp2307;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2307));
frost$core$Frost$unref$frost$core$Object$Q($tmp2306);
// line 647
frost$core$Weak** $tmp2309 = &param0->compiler;
frost$core$Weak* $tmp2310 = *$tmp2309;
frost$core$Object* $tmp2311 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2310);
org$frostlang$frostc$Type** $tmp2312 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp2313 = *$tmp2312;
org$frostlang$frostc$ClassDecl* $tmp2314 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2311), $tmp2313);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2315 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp2314);
*(&local7) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2315));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2316 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2316));
*(&local7) = $tmp2315;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2314));
frost$core$Frost$unref$frost$core$Object$Q($tmp2311);
// line 648
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2317 = *(&local7);
frost$core$String** $tmp2318 = &$tmp2317->name;
frost$core$String* $tmp2319 = *$tmp2318;
frost$core$String* $tmp2320 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2321, $tmp2319);
frost$core$String* $tmp2322 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2320, &$s2323);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2322));
frost$core$String* $tmp2324 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
*(&local8) = $tmp2322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2320));
// line 649
frost$core$String* $tmp2325 = org$frostlang$frostc$CCodeGenerator$getWrapperITable$org$frostlang$frostc$ClassDecl$R$frost$core$String(param0, param1);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2325));
frost$core$String* $tmp2326 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2326));
*(&local9) = $tmp2325;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2325));
// line 650
frost$core$Weak** $tmp2327 = &param0->compiler;
frost$core$Weak* $tmp2328 = *$tmp2327;
frost$core$Object* $tmp2329 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2328);
org$frostlang$frostc$Type* $tmp2330 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp2331 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2329), $tmp2330);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2332 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp2331);
*(&local10) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2332));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2333 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2333));
*(&local10) = $tmp2332;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2330));
frost$core$Frost$unref$frost$core$Object$Q($tmp2329);
// line 651
frost$core$String** $tmp2334 = &param1->name;
frost$core$String* $tmp2335 = *$tmp2334;
frost$core$String* $tmp2336 = org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(param0, $tmp2335);
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2336));
frost$core$String* $tmp2337 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2337));
*(&local11) = $tmp2336;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2336));
// line 652
frost$core$String* $tmp2338 = *(&local11);
frost$core$Bit $tmp2339 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2338, &$s2340);
bool $tmp2341 = $tmp2339.value;
if ($tmp2341) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp2342 = (frost$core$Int64) {652};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2343, $tmp2342);
abort(); // unreachable
block10:;
// line 653
frost$core$MutableString* $tmp2344 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp2345 = *(&local11);
frost$core$Int64 $tmp2346 = (frost$core$Int64) {1};
frost$core$Bit $tmp2347 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp2348 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp2346, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp2347);
frost$core$String* $tmp2349 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp2345, $tmp2348);
frost$core$String* $tmp2350 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2351, $tmp2349);
frost$core$String* $tmp2352 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2350, &$s2353);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2354 = *(&local2);
frost$core$String** $tmp2355 = &$tmp2354->name;
frost$core$String* $tmp2356 = *$tmp2355;
frost$core$String* $tmp2357 = frost$core$String$get_asString$R$frost$core$String($tmp2356);
frost$core$String* $tmp2358 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2357, &$s2359);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2360 = *(&local2);
frost$core$String** $tmp2361 = &$tmp2360->name;
frost$core$String* $tmp2362 = *$tmp2361;
frost$core$String* $tmp2363 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2358, $tmp2362);
frost$core$String* $tmp2364 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2363, &$s2365);
frost$core$String* $tmp2366 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2352, $tmp2364);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2367 = *(&local10);
frost$core$String** $tmp2368 = &$tmp2367->name;
frost$core$String* $tmp2369 = *$tmp2368;
frost$core$String* $tmp2370 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2371, $tmp2369);
frost$core$String* $tmp2372 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2370, &$s2373);
frost$core$Int64 $tmp2374 = (frost$core$Int64) {18446744073709550617};
frost$core$Int64$wrapper* $tmp2375;
$tmp2375 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2375->value = $tmp2374;
frost$core$String* $tmp2376 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2372, ((frost$core$Object*) $tmp2375));
frost$core$String* $tmp2377 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2376, &$s2378);
frost$core$String* $tmp2379 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2366, $tmp2377);
frost$core$String* $tmp2380 = *(&local11);
frost$core$String* $tmp2381 = frost$core$String$get_asString$R$frost$core$String($tmp2380);
frost$core$String* $tmp2382 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2381, &$s2383);
frost$core$String* $tmp2384 = *(&local8);
frost$core$String* $tmp2385 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2382, $tmp2384);
frost$core$String* $tmp2386 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2385, &$s2387);
frost$core$String* $tmp2388 = *(&local9);
frost$core$String* $tmp2389 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2386, $tmp2388);
frost$core$String* $tmp2390 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2389, &$s2391);
frost$core$String* $tmp2392 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2379, $tmp2390);
frost$core$MutableString$init$frost$core$String($tmp2344, $tmp2392);
*(&local12) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2344));
frost$core$MutableString* $tmp2393 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2393));
*(&local12) = $tmp2344;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2381));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2379));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2349));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2344));
// line 657
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2394));
frost$core$String* $tmp2395 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2395));
*(&local13) = &$s2396;
// line 658
frost$core$Int64 $tmp2397 = (frost$core$Int64) {0};
frost$collections$ListView* $tmp2398 = *(&local5);
ITable* $tmp2399 = ((frost$collections$CollectionView*) $tmp2398)->$class->itable;
while ($tmp2399->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2399 = $tmp2399->next;
}
$fn2401 $tmp2400 = $tmp2399->methods[0];
frost$core$Int64 $tmp2402 = $tmp2400(((frost$collections$CollectionView*) $tmp2398));
frost$core$Bit $tmp2403 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2404 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2397, $tmp2402, $tmp2403);
frost$core$Int64 $tmp2405 = $tmp2404.min;
*(&local14) = $tmp2405;
frost$core$Int64 $tmp2406 = $tmp2404.max;
frost$core$Bit $tmp2407 = $tmp2404.inclusive;
bool $tmp2408 = $tmp2407.value;
frost$core$Int64 $tmp2409 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2410 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2409);
if ($tmp2408) goto block15; else goto block16;
block15:;
int64_t $tmp2411 = $tmp2405.value;
int64_t $tmp2412 = $tmp2406.value;
bool $tmp2413 = $tmp2411 <= $tmp2412;
frost$core$Bit $tmp2414 = (frost$core$Bit) {$tmp2413};
bool $tmp2415 = $tmp2414.value;
if ($tmp2415) goto block12; else goto block13;
block16:;
int64_t $tmp2416 = $tmp2405.value;
int64_t $tmp2417 = $tmp2406.value;
bool $tmp2418 = $tmp2416 < $tmp2417;
frost$core$Bit $tmp2419 = (frost$core$Bit) {$tmp2418};
bool $tmp2420 = $tmp2419.value;
if ($tmp2420) goto block12; else goto block13;
block12:;
// line 659
frost$core$MutableString* $tmp2421 = *(&local12);
frost$core$String* $tmp2422 = *(&local13);
frost$core$String* $tmp2423 = frost$core$String$get_asString$R$frost$core$String($tmp2422);
frost$core$String* $tmp2424 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2423, &$s2425);
frost$collections$ListView* $tmp2426 = *(&local6);
frost$core$Int64 $tmp2427 = *(&local14);
ITable* $tmp2428 = $tmp2426->$class->itable;
while ($tmp2428->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2428 = $tmp2428->next;
}
$fn2430 $tmp2429 = $tmp2428->methods[0];
frost$core$Object* $tmp2431 = $tmp2429($tmp2426, $tmp2427);
frost$core$String* $tmp2432 = org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, ((org$frostlang$frostc$MethodDecl*) $tmp2431));
frost$core$String* $tmp2433 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2424, $tmp2432);
frost$core$String* $tmp2434 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2433, &$s2435);
frost$core$MutableString$append$frost$core$String($tmp2421, $tmp2434);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2432));
frost$core$Frost$unref$frost$core$Object$Q($tmp2431);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2423));
// line 660
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2436));
frost$core$String* $tmp2437 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2437));
*(&local13) = &$s2438;
goto block14;
block14:;
frost$core$Int64 $tmp2439 = *(&local14);
int64_t $tmp2440 = $tmp2406.value;
int64_t $tmp2441 = $tmp2439.value;
int64_t $tmp2442 = $tmp2440 - $tmp2441;
frost$core$Int64 $tmp2443 = (frost$core$Int64) {$tmp2442};
frost$core$UInt64 $tmp2444 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2443);
if ($tmp2408) goto block18; else goto block19;
block18:;
uint64_t $tmp2445 = $tmp2444.value;
uint64_t $tmp2446 = $tmp2410.value;
bool $tmp2447 = $tmp2445 >= $tmp2446;
frost$core$Bit $tmp2448 = (frost$core$Bit) {$tmp2447};
bool $tmp2449 = $tmp2448.value;
if ($tmp2449) goto block17; else goto block13;
block19:;
uint64_t $tmp2450 = $tmp2444.value;
uint64_t $tmp2451 = $tmp2410.value;
bool $tmp2452 = $tmp2450 > $tmp2451;
frost$core$Bit $tmp2453 = (frost$core$Bit) {$tmp2452};
bool $tmp2454 = $tmp2453.value;
if ($tmp2454) goto block17; else goto block13;
block17:;
int64_t $tmp2455 = $tmp2439.value;
int64_t $tmp2456 = $tmp2409.value;
int64_t $tmp2457 = $tmp2455 + $tmp2456;
frost$core$Int64 $tmp2458 = (frost$core$Int64) {$tmp2457};
*(&local14) = $tmp2458;
goto block12;
block13:;
// line 662
frost$core$MutableString* $tmp2459 = *(&local12);
frost$core$MutableString$append$frost$core$String($tmp2459, &$s2460);
// line 663
frost$io$MemoryOutputStream** $tmp2461 = &param0->types;
frost$io$MemoryOutputStream* $tmp2462 = *$tmp2461;
frost$core$MutableString* $tmp2463 = *(&local12);
frost$core$String* $tmp2464 = frost$core$MutableString$finish$R$frost$core$String($tmp2463);
$fn2466 $tmp2465 = ($fn2466) ((frost$io$OutputStream*) $tmp2462)->$class->vtable[17];
frost$core$Error* $tmp2467 = $tmp2465(((frost$io$OutputStream*) $tmp2462), $tmp2464);
if ($tmp2467 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2467));
*(&local0) = $tmp2467;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2467));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2464));
frost$core$String* $tmp2468 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2468));
*(&local13) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2469 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2469));
*(&local12) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2470 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2470));
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2471 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2471));
*(&local10) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2472 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2472));
*(&local9) = ((frost$core$String*) NULL);
frost$core$String* $tmp2473 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2474 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2474));
*(&local7) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$collections$ListView* $tmp2475 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2475));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp2476 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2476));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2477 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2477));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2478 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2478));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2479 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2479));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2467));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2464));
frost$core$String* $tmp2480 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2480));
*(&local13) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2481 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2481));
*(&local12) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2482 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2483 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2483));
*(&local10) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2484 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2484));
*(&local9) = ((frost$core$String*) NULL);
frost$core$String* $tmp2485 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2485));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2486 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2486));
*(&local7) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$collections$ListView* $tmp2487 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2487));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp2488 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2488));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2489 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2489));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block6;
block6:;
// line 665
frost$collections$HashMap** $tmp2490 = &param0->classConstants;
frost$collections$HashMap* $tmp2491 = *$tmp2490;
frost$core$String* $tmp2492 = *(&local1);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2493 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2491, ((frost$collections$Key*) $tmp2492), ((frost$core$Object*) $tmp2493));
goto block4;
block4:;
// line 667
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2494 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2494));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2495 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2495));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2496 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2496));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp2497 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2497));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp2494;
block1:;
// line 670
frost$core$Int64 $tmp2498 = (frost$core$Int64) {670};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2499, $tmp2498);
abort(); // unreachable
block2:;
frost$core$Error* $tmp2500 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2500));
*(&local0) = ((frost$core$Error*) NULL);
goto block22;
block22:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$Variable$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Variable* param1) {

frost$core$String* local0 = NULL;
// line 675
org$frostlang$frostc$Variable$Storage** $tmp2501 = &param1->storage;
org$frostlang$frostc$Variable$Storage* $tmp2502 = *$tmp2501;
frost$core$Int64* $tmp2503 = &$tmp2502->$rawValue;
frost$core$Int64 $tmp2504 = *$tmp2503;
frost$core$Int64 $tmp2505 = (frost$core$Int64) {1};
frost$core$Bit $tmp2506 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2504, $tmp2505);
bool $tmp2507 = $tmp2506.value;
if ($tmp2507) goto block2; else goto block1;
block2:;
// line 677
frost$core$String** $tmp2508 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp2509 = *$tmp2508;
frost$core$String* $tmp2510 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2511, $tmp2509);
frost$core$String* $tmp2512 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2510, &$s2513);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2512));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2512));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2510));
return $tmp2512;
block1:;
// line 680
frost$collections$IdentityMap** $tmp2514 = &param0->variableNames;
frost$collections$IdentityMap* $tmp2515 = *$tmp2514;
frost$core$Object* $tmp2516 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp2515, ((frost$core$Object*) param1));
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp2516)));
frost$core$String* $tmp2517 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2517));
*(&local0) = ((frost$core$String*) $tmp2516);
frost$core$Frost$unref$frost$core$Object$Q($tmp2516);
// line 681
frost$core$String* $tmp2518 = *(&local0);
frost$core$Bit $tmp2519 = frost$core$Bit$init$builtin_bit($tmp2518 == NULL);
bool $tmp2520 = $tmp2519.value;
if ($tmp2520) goto block3; else goto block4;
block3:;
// line 682
frost$core$Int64* $tmp2521 = &param0->varCount;
frost$core$Int64 $tmp2522 = *$tmp2521;
frost$core$Int64 $tmp2523 = (frost$core$Int64) {1};
int64_t $tmp2524 = $tmp2522.value;
int64_t $tmp2525 = $tmp2523.value;
int64_t $tmp2526 = $tmp2524 + $tmp2525;
frost$core$Int64 $tmp2527 = (frost$core$Int64) {$tmp2526};
frost$core$Int64* $tmp2528 = &param0->varCount;
*$tmp2528 = $tmp2527;
// line 683
frost$core$String** $tmp2529 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp2530 = *$tmp2529;
frost$core$String* $tmp2531 = frost$core$String$get_asString$R$frost$core$String($tmp2530);
frost$core$String* $tmp2532 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2531, &$s2533);
frost$core$Int64* $tmp2534 = &param0->varCount;
frost$core$Int64 $tmp2535 = *$tmp2534;
frost$core$Int64$wrapper* $tmp2536;
$tmp2536 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2536->value = $tmp2535;
frost$core$String* $tmp2537 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2532, ((frost$core$Object*) $tmp2536));
frost$core$String* $tmp2538 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2537, &$s2539);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2538));
frost$core$String* $tmp2540 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2540));
*(&local0) = $tmp2538;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2538));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2537));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2532));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2531));
// line 684
frost$collections$IdentityMap** $tmp2541 = &param0->variableNames;
frost$collections$IdentityMap* $tmp2542 = *$tmp2541;
frost$core$String* $tmp2543 = *(&local0);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V($tmp2542, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp2543));
goto block4;
block4:;
// line 686
frost$core$String* $tmp2544 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2544));
frost$core$String* $tmp2545 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2545));
*(&local0) = ((frost$core$String*) NULL);
return $tmp2544;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$FieldDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$FieldDecl* param1) {

// line 690
org$frostlang$frostc$Annotations** $tmp2546 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp2547 = *$tmp2546;
frost$core$Bit $tmp2548 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp2547);
bool $tmp2549 = $tmp2548.value;
if ($tmp2549) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2550 = (frost$core$Int64) {690};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2551, $tmp2550);
abort(); // unreachable
block1:;
// line 691
frost$core$Weak** $tmp2552 = &param1->owner;
frost$core$Weak* $tmp2553 = *$tmp2552;
frost$core$Object* $tmp2554 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2553);
frost$core$String** $tmp2555 = &((org$frostlang$frostc$ClassDecl*) $tmp2554)->name;
frost$core$String* $tmp2556 = *$tmp2555;
frost$core$String* $tmp2557 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp2556);
frost$core$String* $tmp2558 = frost$core$String$get_asString$R$frost$core$String($tmp2557);
frost$core$String* $tmp2559 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2558, &$s2560);
frost$core$String** $tmp2561 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp2562 = *$tmp2561;
frost$core$String* $tmp2563 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2559, $tmp2562);
frost$core$String* $tmp2564 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2563, &$s2565);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2563));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2559));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2558));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2557));
frost$core$Frost$unref$frost$core$Object$Q($tmp2554);
return $tmp2564;

}
org$frostlang$frostc$CCodeGenerator$OpClass org$frostlang$frostc$CCodeGenerator$opClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$OpClass(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 702
org$frostlang$frostc$Type$Kind* $tmp2566 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp2567 = *$tmp2566;
frost$core$Int64 $tmp2568 = $tmp2567.$rawValue;
frost$core$Int64 $tmp2569 = (frost$core$Int64) {2};
frost$core$Bit $tmp2570 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2568, $tmp2569);
bool $tmp2571 = $tmp2570.value;
if ($tmp2571) goto block2; else goto block3;
block2:;
// line 704
frost$core$Int64 $tmp2572 = (frost$core$Int64) {0};
org$frostlang$frostc$CCodeGenerator$OpClass $tmp2573 = org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int64($tmp2572);
return $tmp2573;
block3:;
frost$core$Int64 $tmp2574 = (frost$core$Int64) {3};
frost$core$Bit $tmp2575 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2568, $tmp2574);
bool $tmp2576 = $tmp2575.value;
if ($tmp2576) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp2577 = (frost$core$Int64) {8};
frost$core$Bit $tmp2578 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2568, $tmp2577);
bool $tmp2579 = $tmp2578.value;
if ($tmp2579) goto block4; else goto block6;
block4:;
// line 707
frost$core$Int64 $tmp2580 = (frost$core$Int64) {1};
org$frostlang$frostc$CCodeGenerator$OpClass $tmp2581 = org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int64($tmp2580);
return $tmp2581;
block6:;
frost$core$Int64 $tmp2582 = (frost$core$Int64) {9};
frost$core$Bit $tmp2583 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2568, $tmp2582);
bool $tmp2584 = $tmp2583.value;
if ($tmp2584) goto block7; else goto block8;
block7:;
// line 710
frost$core$Int64 $tmp2585 = (frost$core$Int64) {2};
org$frostlang$frostc$CCodeGenerator$OpClass $tmp2586 = org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int64($tmp2585);
return $tmp2586;
block8:;
// line 713
frost$core$Int64 $tmp2587 = (frost$core$Int64) {3};
org$frostlang$frostc$CCodeGenerator$OpClass $tmp2588 = org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int64($tmp2587);
return $tmp2588;
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
frost$core$Bit $tmp2589 = frost$core$Bit$init$builtin_bit(false);
*(&local2) = $tmp2589;
// line 723
frost$core$Int64 $tmp2590 = param3.$rawValue;
frost$core$Int64 $tmp2591 = (frost$core$Int64) {0};
frost$core$Bit $tmp2592 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2590, $tmp2591);
bool $tmp2593 = $tmp2592.value;
if ($tmp2593) goto block4; else goto block5;
block4:;
// line 725
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2594));
frost$core$String* $tmp2595 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2595));
*(&local1) = &$s2596;
goto block3;
block5:;
frost$core$Int64 $tmp2597 = (frost$core$Int64) {1};
frost$core$Bit $tmp2598 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2590, $tmp2597);
bool $tmp2599 = $tmp2598.value;
if ($tmp2599) goto block6; else goto block7;
block6:;
// line 728
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2600));
frost$core$String* $tmp2601 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2601));
*(&local1) = &$s2602;
goto block3;
block7:;
frost$core$Int64 $tmp2603 = (frost$core$Int64) {2};
frost$core$Bit $tmp2604 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2590, $tmp2603);
bool $tmp2605 = $tmp2604.value;
if ($tmp2605) goto block8; else goto block9;
block8:;
// line 731
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2606));
frost$core$String* $tmp2607 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2607));
*(&local1) = &$s2608;
goto block3;
block9:;
frost$core$Int64 $tmp2609 = (frost$core$Int64) {4};
frost$core$Bit $tmp2610 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2590, $tmp2609);
bool $tmp2611 = $tmp2610.value;
if ($tmp2611) goto block10; else goto block11;
block10:;
// line 734
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2612));
frost$core$String* $tmp2613 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2613));
*(&local1) = &$s2614;
goto block3;
block11:;
frost$core$Int64 $tmp2615 = (frost$core$Int64) {3};
frost$core$Bit $tmp2616 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2590, $tmp2615);
bool $tmp2617 = $tmp2616.value;
if ($tmp2617) goto block12; else goto block13;
block12:;
// line 737
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2618));
frost$core$String* $tmp2619 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2619));
*(&local1) = &$s2620;
goto block3;
block13:;
frost$core$Int64 $tmp2621 = (frost$core$Int64) {5};
frost$core$Bit $tmp2622 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2590, $tmp2621);
bool $tmp2623 = $tmp2622.value;
if ($tmp2623) goto block14; else goto block15;
block14:;
// line 740
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2624));
frost$core$String* $tmp2625 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2625));
*(&local1) = &$s2626;
goto block3;
block15:;
frost$core$Int64 $tmp2627 = (frost$core$Int64) {18};
frost$core$Bit $tmp2628 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2590, $tmp2627);
bool $tmp2629 = $tmp2628.value;
if ($tmp2629) goto block16; else goto block17;
block16:;
// line 743
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2630));
frost$core$String* $tmp2631 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2631));
*(&local1) = &$s2632;
goto block3;
block17:;
frost$core$Int64 $tmp2633 = (frost$core$Int64) {19};
frost$core$Bit $tmp2634 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2590, $tmp2633);
bool $tmp2635 = $tmp2634.value;
if ($tmp2635) goto block18; else goto block19;
block18:;
// line 746
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2636));
frost$core$String* $tmp2637 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2637));
*(&local1) = &$s2638;
goto block3;
block19:;
frost$core$Int64 $tmp2639 = (frost$core$Int64) {15};
frost$core$Bit $tmp2640 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2590, $tmp2639);
bool $tmp2641 = $tmp2640.value;
if ($tmp2641) goto block20; else goto block21;
block20:;
// line 749
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2642));
frost$core$String* $tmp2643 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2643));
*(&local1) = &$s2644;
goto block3;
block21:;
frost$core$Int64 $tmp2645 = (frost$core$Int64) {13};
frost$core$Bit $tmp2646 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2590, $tmp2645);
bool $tmp2647 = $tmp2646.value;
if ($tmp2647) goto block22; else goto block23;
block22:;
// line 752
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2648));
frost$core$String* $tmp2649 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2649));
*(&local1) = &$s2650;
goto block3;
block23:;
frost$core$Int64 $tmp2651 = (frost$core$Int64) {16};
frost$core$Bit $tmp2652 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2590, $tmp2651);
bool $tmp2653 = $tmp2652.value;
if ($tmp2653) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp2654 = (frost$core$Int64) {17};
frost$core$Bit $tmp2655 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2590, $tmp2654);
bool $tmp2656 = $tmp2655.value;
if ($tmp2656) goto block24; else goto block26;
block24:;
// line 755
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2657));
frost$core$String* $tmp2658 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2658));
*(&local1) = &$s2659;
goto block3;
block26:;
frost$core$Int64 $tmp2660 = (frost$core$Int64) {6};
frost$core$Bit $tmp2661 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2590, $tmp2660);
bool $tmp2662 = $tmp2661.value;
if ($tmp2662) goto block27; else goto block28;
block27:;
// line 758
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2663));
frost$core$String* $tmp2664 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2664));
*(&local1) = &$s2665;
// line 759
frost$core$Bit $tmp2666 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2666;
goto block3;
block28:;
frost$core$Int64 $tmp2667 = (frost$core$Int64) {7};
frost$core$Bit $tmp2668 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2590, $tmp2667);
bool $tmp2669 = $tmp2668.value;
if ($tmp2669) goto block29; else goto block30;
block29:;
// line 762
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2670));
frost$core$String* $tmp2671 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2671));
*(&local1) = &$s2672;
// line 763
frost$core$Bit $tmp2673 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2673;
goto block3;
block30:;
frost$core$Int64 $tmp2674 = (frost$core$Int64) {8};
frost$core$Bit $tmp2675 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2590, $tmp2674);
bool $tmp2676 = $tmp2675.value;
if ($tmp2676) goto block31; else goto block32;
block31:;
// line 766
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2677));
frost$core$String* $tmp2678 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2678));
*(&local1) = &$s2679;
// line 767
frost$core$Bit $tmp2680 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2680;
goto block3;
block32:;
frost$core$Int64 $tmp2681 = (frost$core$Int64) {9};
frost$core$Bit $tmp2682 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2590, $tmp2681);
bool $tmp2683 = $tmp2682.value;
if ($tmp2683) goto block33; else goto block34;
block33:;
// line 770
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2684));
frost$core$String* $tmp2685 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2685));
*(&local1) = &$s2686;
// line 771
frost$core$Bit $tmp2687 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2687;
goto block3;
block34:;
frost$core$Int64 $tmp2688 = (frost$core$Int64) {10};
frost$core$Bit $tmp2689 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2590, $tmp2688);
bool $tmp2690 = $tmp2689.value;
if ($tmp2690) goto block35; else goto block36;
block35:;
// line 774
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2691));
frost$core$String* $tmp2692 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2692));
*(&local1) = &$s2693;
// line 775
frost$core$Bit $tmp2694 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2694;
goto block3;
block36:;
frost$core$Int64 $tmp2695 = (frost$core$Int64) {11};
frost$core$Bit $tmp2696 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2590, $tmp2695);
bool $tmp2697 = $tmp2696.value;
if ($tmp2697) goto block37; else goto block38;
block37:;
// line 778
frost$core$Bit $tmp2698 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2698;
// line 779
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2699));
frost$core$String* $tmp2700 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2700));
*(&local1) = &$s2701;
goto block3;
block38:;
// line 782
frost$core$Int64 $tmp2702 = (frost$core$Int64) {782};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2703, $tmp2702);
abort(); // unreachable
block3:;
// line 785
frost$core$String* $tmp2704 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
frost$core$String* $tmp2705 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2705));
*(&local3) = $tmp2704;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
// line 786
frost$core$Bit $tmp2706 = *(&local2);
bool $tmp2707 = $tmp2706.value;
if ($tmp2707) goto block39; else goto block41;
block39:;
// line 787
$fn2709 $tmp2708 = ($fn2709) ((frost$io$OutputStream*) param5)->$class->vtable[17];
frost$core$Error* $tmp2710 = $tmp2708(((frost$io$OutputStream*) param5), &$s2711);
if ($tmp2710 == NULL) goto block42; else goto block43;
block43:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
*(&local0) = $tmp2710;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
frost$core$String* $tmp2712 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2712));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2713 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2713));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block42:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
goto block40;
block41:;
// line 1
// line 790
frost$core$String* $tmp2714 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp2715 = frost$core$String$get_asString$R$frost$core$String($tmp2714);
frost$core$String* $tmp2716 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2715, &$s2717);
$fn2719 $tmp2718 = ($fn2719) ((frost$io$OutputStream*) param5)->$class->vtable[17];
frost$core$Error* $tmp2720 = $tmp2718(((frost$io$OutputStream*) param5), $tmp2716);
if ($tmp2720 == NULL) goto block44; else goto block45;
block45:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2720));
*(&local0) = $tmp2720;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2714));
frost$core$String* $tmp2721 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2721));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2722 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2722));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block44:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2714));
goto block40;
block40:;
// line 792
frost$core$String* $tmp2723 = *(&local3);
frost$core$String* $tmp2724 = frost$core$String$get_asString$R$frost$core$String($tmp2723);
frost$core$String* $tmp2725 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2724, &$s2726);
frost$core$String* $tmp2727 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2725, param2);
frost$core$String* $tmp2728 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2727, &$s2729);
frost$core$String* $tmp2730 = *(&local1);
frost$core$String* $tmp2731 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2728, $tmp2730);
frost$core$String* $tmp2732 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2731, &$s2733);
frost$core$String* $tmp2734 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2732, param4);
frost$core$String* $tmp2735 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2734, &$s2736);
$fn2738 $tmp2737 = ($fn2738) ((frost$io$OutputStream*) param5)->$class->vtable[19];
frost$core$Error* $tmp2739 = $tmp2737(((frost$io$OutputStream*) param5), $tmp2735);
if ($tmp2739 == NULL) goto block46; else goto block47;
block47:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2739));
*(&local0) = $tmp2739;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2739));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2735));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2728));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2727));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2724));
frost$core$String* $tmp2740 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2740));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2741 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2741));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block46:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2739));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2735));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2728));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2727));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2724));
// line 793
frost$core$String* $tmp2742 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2742));
frost$core$String* $tmp2743 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2743));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2744 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2744));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp2745 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp2742;
block1:;
// line 796
frost$core$Int64 $tmp2746 = (frost$core$Int64) {796};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2747, $tmp2746);
abort(); // unreachable
block2:;
frost$core$Error* $tmp2748 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2748));
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
frost$core$Weak** $tmp2749 = &param2->owner;
frost$core$Weak* $tmp2750 = *$tmp2749;
frost$core$Object* $tmp2751 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2750);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2752 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, ((org$frostlang$frostc$ClassDecl*) $tmp2751));
*(&local0) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2752));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2753 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2753));
*(&local0) = $tmp2752;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2752));
frost$core$Frost$unref$frost$core$Object$Q($tmp2751);
// line 802
frost$core$Int64 $tmp2754 = (frost$core$Int64) {18446744073709551615};
*(&local1) = $tmp2754;
// line 803
frost$core$Weak** $tmp2755 = &param0->compiler;
frost$core$Weak* $tmp2756 = *$tmp2755;
frost$core$Object* $tmp2757 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2756);
frost$core$Weak** $tmp2758 = &param2->owner;
frost$core$Weak* $tmp2759 = *$tmp2758;
frost$core$Object* $tmp2760 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2759);
frost$collections$ListView* $tmp2761 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2757), ((org$frostlang$frostc$ClassDecl*) $tmp2760));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2761));
frost$collections$ListView* $tmp2762 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2762));
*(&local2) = $tmp2761;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2761));
frost$core$Frost$unref$frost$core$Object$Q($tmp2760);
frost$core$Frost$unref$frost$core$Object$Q($tmp2757);
// line 804
frost$core$Int64 $tmp2763 = (frost$core$Int64) {0};
frost$collections$ListView* $tmp2764 = *(&local2);
ITable* $tmp2765 = ((frost$collections$CollectionView*) $tmp2764)->$class->itable;
while ($tmp2765->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2765 = $tmp2765->next;
}
$fn2767 $tmp2766 = $tmp2765->methods[0];
frost$core$Int64 $tmp2768 = $tmp2766(((frost$collections$CollectionView*) $tmp2764));
frost$core$Bit $tmp2769 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2770 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2763, $tmp2768, $tmp2769);
frost$core$Int64 $tmp2771 = $tmp2770.min;
*(&local3) = $tmp2771;
frost$core$Int64 $tmp2772 = $tmp2770.max;
frost$core$Bit $tmp2773 = $tmp2770.inclusive;
bool $tmp2774 = $tmp2773.value;
frost$core$Int64 $tmp2775 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2776 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2775);
if ($tmp2774) goto block4; else goto block5;
block4:;
int64_t $tmp2777 = $tmp2771.value;
int64_t $tmp2778 = $tmp2772.value;
bool $tmp2779 = $tmp2777 <= $tmp2778;
frost$core$Bit $tmp2780 = (frost$core$Bit) {$tmp2779};
bool $tmp2781 = $tmp2780.value;
if ($tmp2781) goto block1; else goto block2;
block5:;
int64_t $tmp2782 = $tmp2771.value;
int64_t $tmp2783 = $tmp2772.value;
bool $tmp2784 = $tmp2782 < $tmp2783;
frost$core$Bit $tmp2785 = (frost$core$Bit) {$tmp2784};
bool $tmp2786 = $tmp2785.value;
if ($tmp2786) goto block1; else goto block2;
block1:;
// line 805
frost$collections$ListView* $tmp2787 = *(&local2);
frost$core$Int64 $tmp2788 = *(&local3);
ITable* $tmp2789 = $tmp2787->$class->itable;
while ($tmp2789->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2789 = $tmp2789->next;
}
$fn2791 $tmp2790 = $tmp2789->methods[0];
frost$core$Object* $tmp2792 = $tmp2790($tmp2787, $tmp2788);
bool $tmp2793 = ((org$frostlang$frostc$MethodDecl*) $tmp2792) == param2;
frost$core$Bit $tmp2794 = frost$core$Bit$init$builtin_bit($tmp2793);
bool $tmp2795 = $tmp2794.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2792);
if ($tmp2795) goto block6; else goto block7;
block6:;
// line 806
frost$core$Int64 $tmp2796 = *(&local3);
*(&local1) = $tmp2796;
// line 807
goto block2;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp2797 = *(&local3);
int64_t $tmp2798 = $tmp2772.value;
int64_t $tmp2799 = $tmp2797.value;
int64_t $tmp2800 = $tmp2798 - $tmp2799;
frost$core$Int64 $tmp2801 = (frost$core$Int64) {$tmp2800};
frost$core$UInt64 $tmp2802 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2801);
if ($tmp2774) goto block9; else goto block10;
block9:;
uint64_t $tmp2803 = $tmp2802.value;
uint64_t $tmp2804 = $tmp2776.value;
bool $tmp2805 = $tmp2803 >= $tmp2804;
frost$core$Bit $tmp2806 = (frost$core$Bit) {$tmp2805};
bool $tmp2807 = $tmp2806.value;
if ($tmp2807) goto block8; else goto block2;
block10:;
uint64_t $tmp2808 = $tmp2802.value;
uint64_t $tmp2809 = $tmp2776.value;
bool $tmp2810 = $tmp2808 > $tmp2809;
frost$core$Bit $tmp2811 = (frost$core$Bit) {$tmp2810};
bool $tmp2812 = $tmp2811.value;
if ($tmp2812) goto block8; else goto block2;
block8:;
int64_t $tmp2813 = $tmp2797.value;
int64_t $tmp2814 = $tmp2775.value;
int64_t $tmp2815 = $tmp2813 + $tmp2814;
frost$core$Int64 $tmp2816 = (frost$core$Int64) {$tmp2815};
*(&local3) = $tmp2816;
goto block1;
block2:;
// line 810
frost$core$Int64 $tmp2817 = *(&local1);
frost$core$Int64 $tmp2818 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2819 = $tmp2817.value;
int64_t $tmp2820 = $tmp2818.value;
bool $tmp2821 = $tmp2819 != $tmp2820;
frost$core$Bit $tmp2822 = (frost$core$Bit) {$tmp2821};
bool $tmp2823 = $tmp2822.value;
if ($tmp2823) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp2824 = (frost$core$Int64) {810};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2825, $tmp2824);
abort(); // unreachable
block11:;
// line 811
frost$core$Weak** $tmp2826 = &param0->compiler;
frost$core$Weak* $tmp2827 = *$tmp2826;
frost$core$Object* $tmp2828 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2827);
org$frostlang$frostc$Type* $tmp2829 = org$frostlang$frostc$Compiler$inheritedTypeWithSelf$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp2828), param2);
frost$core$String* $tmp2830 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, $tmp2829, ((org$frostlang$frostc$Type*) NULL));
frost$core$String* $tmp2831 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2832, $tmp2830);
frost$core$String* $tmp2833 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2831, &$s2834);
frost$core$String* $tmp2835 = frost$core$String$get_asString$R$frost$core$String(param1);
frost$core$String* $tmp2836 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2835, &$s2837);
frost$core$Int64 $tmp2838 = *(&local1);
frost$core$Int64$wrapper* $tmp2839;
$tmp2839 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2839->value = $tmp2838;
frost$core$String* $tmp2840 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2836, ((frost$core$Object*) $tmp2839));
frost$core$String* $tmp2841 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2840, &$s2842);
frost$core$String* $tmp2843 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2833, $tmp2841);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2843));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2843));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2841));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2835));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2829));
frost$core$Frost$unref$frost$core$Object$Q($tmp2828);
frost$collections$ListView* $tmp2844 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2844));
*(&local2) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2845 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2845));
*(&local0) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
return $tmp2843;

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
frost$core$Weak** $tmp2846 = &param2->owner;
frost$core$Weak* $tmp2847 = *$tmp2846;
frost$core$Object* $tmp2848 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2847);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2849 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, ((org$frostlang$frostc$ClassDecl*) $tmp2848));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2849));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2850 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2850));
*(&local1) = $tmp2849;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2849));
frost$core$Frost$unref$frost$core$Object$Q($tmp2848);
// line 819
frost$core$String* $tmp2851 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2851));
frost$core$String* $tmp2852 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2852));
*(&local2) = $tmp2851;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2851));
// line 820
frost$core$String* $tmp2853 = *(&local2);
frost$core$String* $tmp2854 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2855, $tmp2853);
frost$core$String* $tmp2856 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2854, &$s2857);
frost$core$String* $tmp2858 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2856, param1);
frost$core$String* $tmp2859 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2858, &$s2860);
$fn2862 $tmp2861 = ($fn2862) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2863 = $tmp2861(((frost$io$OutputStream*) param3), $tmp2859);
if ($tmp2863 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2863));
*(&local0) = $tmp2863;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2854));
frost$core$String* $tmp2864 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2864));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2865 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2865));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2854));
// line 821
frost$core$String* $tmp2866 = *(&local2);
frost$core$String* $tmp2867 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2868, $tmp2866);
frost$core$String* $tmp2869 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2867, &$s2870);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2871 = *(&local1);
frost$core$String** $tmp2872 = &$tmp2871->name;
frost$core$String* $tmp2873 = *$tmp2872;
frost$core$String* $tmp2874 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2869, $tmp2873);
frost$core$String* $tmp2875 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2874, &$s2876);
$fn2878 $tmp2877 = ($fn2878) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2879 = $tmp2877(((frost$io$OutputStream*) param3), $tmp2875);
if ($tmp2879 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2879));
*(&local0) = $tmp2879;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2879));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2875));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2869));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
frost$core$String* $tmp2880 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2880));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2881 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2881));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2879));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2875));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2869));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
// line 822
frost$core$Int64* $tmp2882 = &param3->level;
frost$core$Int64 $tmp2883 = *$tmp2882;
frost$core$Int64 $tmp2884 = (frost$core$Int64) {1};
int64_t $tmp2885 = $tmp2883.value;
int64_t $tmp2886 = $tmp2884.value;
int64_t $tmp2887 = $tmp2885 + $tmp2886;
frost$core$Int64 $tmp2888 = (frost$core$Int64) {$tmp2887};
frost$core$Int64* $tmp2889 = &param3->level;
*$tmp2889 = $tmp2888;
// line 823
frost$core$String* $tmp2890 = *(&local2);
frost$core$String* $tmp2891 = frost$core$String$get_asString$R$frost$core$String($tmp2890);
frost$core$String* $tmp2892 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2891, &$s2893);
frost$core$String* $tmp2894 = *(&local2);
frost$core$String* $tmp2895 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2892, $tmp2894);
frost$core$String* $tmp2896 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2895, &$s2897);
$fn2899 $tmp2898 = ($fn2899) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2900 = $tmp2898(((frost$io$OutputStream*) param3), $tmp2896);
if ($tmp2900 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2900));
*(&local0) = $tmp2900;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2900));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2896));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
frost$core$String* $tmp2901 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2901));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2902 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2900));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2896));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
// line 824
frost$core$Int64* $tmp2903 = &param3->level;
frost$core$Int64 $tmp2904 = *$tmp2903;
frost$core$Int64 $tmp2905 = (frost$core$Int64) {1};
int64_t $tmp2906 = $tmp2904.value;
int64_t $tmp2907 = $tmp2905.value;
int64_t $tmp2908 = $tmp2906 - $tmp2907;
frost$core$Int64 $tmp2909 = (frost$core$Int64) {$tmp2908};
frost$core$Int64* $tmp2910 = &param3->level;
*$tmp2910 = $tmp2909;
// line 825
$fn2912 $tmp2911 = ($fn2912) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2913 = $tmp2911(((frost$io$OutputStream*) param3), &$s2914);
if ($tmp2913 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
*(&local0) = $tmp2913;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
frost$core$String* $tmp2915 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2915));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2916 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2916));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
// line 826
frost$core$Int64 $tmp2917 = (frost$core$Int64) {18446744073709551615};
*(&local3) = $tmp2917;
// line 827
frost$core$Weak** $tmp2918 = &param0->compiler;
frost$core$Weak* $tmp2919 = *$tmp2918;
frost$core$Object* $tmp2920 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2919);
frost$core$Weak** $tmp2921 = &param2->owner;
frost$core$Weak* $tmp2922 = *$tmp2921;
frost$core$Object* $tmp2923 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2922);
frost$collections$ListView* $tmp2924 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2920), ((org$frostlang$frostc$ClassDecl*) $tmp2923));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2924));
frost$collections$ListView* $tmp2925 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2925));
*(&local4) = $tmp2924;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2924));
frost$core$Frost$unref$frost$core$Object$Q($tmp2923);
frost$core$Frost$unref$frost$core$Object$Q($tmp2920);
// line 828
frost$core$Int64 $tmp2926 = (frost$core$Int64) {0};
frost$collections$ListView* $tmp2927 = *(&local4);
ITable* $tmp2928 = ((frost$collections$CollectionView*) $tmp2927)->$class->itable;
while ($tmp2928->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2928 = $tmp2928->next;
}
$fn2930 $tmp2929 = $tmp2928->methods[0];
frost$core$Int64 $tmp2931 = $tmp2929(((frost$collections$CollectionView*) $tmp2927));
frost$core$Bit $tmp2932 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2933 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2926, $tmp2931, $tmp2932);
frost$core$Int64 $tmp2934 = $tmp2933.min;
*(&local5) = $tmp2934;
frost$core$Int64 $tmp2935 = $tmp2933.max;
frost$core$Bit $tmp2936 = $tmp2933.inclusive;
bool $tmp2937 = $tmp2936.value;
frost$core$Int64 $tmp2938 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2939 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2938);
if ($tmp2937) goto block14; else goto block15;
block14:;
int64_t $tmp2940 = $tmp2934.value;
int64_t $tmp2941 = $tmp2935.value;
bool $tmp2942 = $tmp2940 <= $tmp2941;
frost$core$Bit $tmp2943 = (frost$core$Bit) {$tmp2942};
bool $tmp2944 = $tmp2943.value;
if ($tmp2944) goto block11; else goto block12;
block15:;
int64_t $tmp2945 = $tmp2934.value;
int64_t $tmp2946 = $tmp2935.value;
bool $tmp2947 = $tmp2945 < $tmp2946;
frost$core$Bit $tmp2948 = (frost$core$Bit) {$tmp2947};
bool $tmp2949 = $tmp2948.value;
if ($tmp2949) goto block11; else goto block12;
block11:;
// line 829
frost$collections$ListView* $tmp2950 = *(&local4);
frost$core$Int64 $tmp2951 = *(&local5);
ITable* $tmp2952 = $tmp2950->$class->itable;
while ($tmp2952->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2952 = $tmp2952->next;
}
$fn2954 $tmp2953 = $tmp2952->methods[0];
frost$core$Object* $tmp2955 = $tmp2953($tmp2950, $tmp2951);
bool $tmp2956 = ((org$frostlang$frostc$MethodDecl*) $tmp2955) == param2;
frost$core$Bit $tmp2957 = frost$core$Bit$init$builtin_bit($tmp2956);
bool $tmp2958 = $tmp2957.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2955);
if ($tmp2958) goto block16; else goto block17;
block16:;
// line 830
frost$core$Int64 $tmp2959 = *(&local5);
*(&local3) = $tmp2959;
// line 831
goto block12;
block17:;
goto block13;
block13:;
frost$core$Int64 $tmp2960 = *(&local5);
int64_t $tmp2961 = $tmp2935.value;
int64_t $tmp2962 = $tmp2960.value;
int64_t $tmp2963 = $tmp2961 - $tmp2962;
frost$core$Int64 $tmp2964 = (frost$core$Int64) {$tmp2963};
frost$core$UInt64 $tmp2965 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2964);
if ($tmp2937) goto block19; else goto block20;
block19:;
uint64_t $tmp2966 = $tmp2965.value;
uint64_t $tmp2967 = $tmp2939.value;
bool $tmp2968 = $tmp2966 >= $tmp2967;
frost$core$Bit $tmp2969 = (frost$core$Bit) {$tmp2968};
bool $tmp2970 = $tmp2969.value;
if ($tmp2970) goto block18; else goto block12;
block20:;
uint64_t $tmp2971 = $tmp2965.value;
uint64_t $tmp2972 = $tmp2939.value;
bool $tmp2973 = $tmp2971 > $tmp2972;
frost$core$Bit $tmp2974 = (frost$core$Bit) {$tmp2973};
bool $tmp2975 = $tmp2974.value;
if ($tmp2975) goto block18; else goto block12;
block18:;
int64_t $tmp2976 = $tmp2960.value;
int64_t $tmp2977 = $tmp2938.value;
int64_t $tmp2978 = $tmp2976 + $tmp2977;
frost$core$Int64 $tmp2979 = (frost$core$Int64) {$tmp2978};
*(&local5) = $tmp2979;
goto block11;
block12:;
// line 834
frost$core$Int64 $tmp2980 = *(&local3);
frost$core$Weak** $tmp2981 = &param0->compiler;
frost$core$Weak* $tmp2982 = *$tmp2981;
frost$core$Object* $tmp2983 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2982);
frost$core$Weak** $tmp2984 = &param0->compiler;
frost$core$Weak* $tmp2985 = *$tmp2984;
frost$core$Object* $tmp2986 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2985);
org$frostlang$frostc$Type* $tmp2987 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp2988 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2986), $tmp2987);
frost$collections$ListView* $tmp2989 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2983), $tmp2988);
ITable* $tmp2990 = ((frost$collections$CollectionView*) $tmp2989)->$class->itable;
while ($tmp2990->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2990 = $tmp2990->next;
}
$fn2992 $tmp2991 = $tmp2990->methods[0];
frost$core$Int64 $tmp2993 = $tmp2991(((frost$collections$CollectionView*) $tmp2989));
int64_t $tmp2994 = $tmp2980.value;
int64_t $tmp2995 = $tmp2993.value;
int64_t $tmp2996 = $tmp2994 - $tmp2995;
frost$core$Int64 $tmp2997 = (frost$core$Int64) {$tmp2996};
*(&local3) = $tmp2997;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2988));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2987));
frost$core$Frost$unref$frost$core$Object$Q($tmp2986);
frost$core$Frost$unref$frost$core$Object$Q($tmp2983);
// line 835
frost$core$Int64 $tmp2998 = *(&local3);
frost$core$Int64 $tmp2999 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp3000 = $tmp2998.value;
int64_t $tmp3001 = $tmp2999.value;
bool $tmp3002 = $tmp3000 != $tmp3001;
frost$core$Bit $tmp3003 = (frost$core$Bit) {$tmp3002};
bool $tmp3004 = $tmp3003.value;
if ($tmp3004) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp3005 = (frost$core$Int64) {835};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3006, $tmp3005);
abort(); // unreachable
block21:;
// line 836
frost$core$String* $tmp3007 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3007));
frost$core$String* $tmp3008 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3008));
*(&local6) = $tmp3007;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3007));
// line 837
frost$core$Weak** $tmp3009 = &param0->compiler;
frost$core$Weak* $tmp3010 = *$tmp3009;
frost$core$Object* $tmp3011 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3010);
org$frostlang$frostc$Type* $tmp3012 = org$frostlang$frostc$Compiler$inheritedTypeWithSelf$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp3011), param2);
frost$core$String* $tmp3013 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, $tmp3012, ((org$frostlang$frostc$Type*) NULL));
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
frost$core$String* $tmp3014 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3014));
*(&local7) = $tmp3013;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3012));
frost$core$Frost$unref$frost$core$Object$Q($tmp3011);
// line 838
frost$core$String* $tmp3015 = *(&local7);
frost$core$String* $tmp3016 = frost$core$String$get_asString$R$frost$core$String($tmp3015);
frost$core$String* $tmp3017 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3016, &$s3018);
frost$core$String* $tmp3019 = *(&local6);
frost$core$String* $tmp3020 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3017, $tmp3019);
frost$core$String* $tmp3021 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3020, &$s3022);
frost$core$String* $tmp3023 = *(&local2);
frost$core$String* $tmp3024 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3021, $tmp3023);
frost$core$String* $tmp3025 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3024, &$s3026);
frost$core$Int64 $tmp3027 = *(&local3);
frost$core$Int64$wrapper* $tmp3028;
$tmp3028 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3028->value = $tmp3027;
frost$core$String* $tmp3029 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3025, ((frost$core$Object*) $tmp3028));
frost$core$String* $tmp3030 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3029, &$s3031);
$fn3033 $tmp3032 = ($fn3033) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp3034 = $tmp3032(((frost$io$OutputStream*) param3), $tmp3030);
if ($tmp3034 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3034));
*(&local0) = $tmp3034;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3030));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3029));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3028));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3016));
frost$core$String* $tmp3035 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3035));
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp3036 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3036));
*(&local6) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp3037 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3037));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp3038 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3038));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp3039 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3039));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3030));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3029));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3028));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3016));
// line 839
frost$core$String* $tmp3040 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3040));
frost$core$String* $tmp3041 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp3042 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3042));
*(&local6) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp3043 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3043));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp3044 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3044));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp3045 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3045));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Error* $tmp3046 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3046));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp3040;
block1:;
// line 842
frost$core$Int64 $tmp3047 = (frost$core$Int64) {842};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3048, $tmp3047);
abort(); // unreachable
block2:;
frost$core$Error* $tmp3049 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3049));
*(&local0) = ((frost$core$Error*) NULL);
goto block25;
block25:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getMethodReference$frost$core$String$Q$org$frostlang$frostc$MethodDecl$frost$core$Bit$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$MethodDecl* param2, frost$core$Bit param3, frost$io$IndentedOutputStream* param4) {

// line 848
frost$core$Bit $tmp3050 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp3051 = $tmp3050.value;
if ($tmp3051) goto block4; else goto block3;
block4:;
frost$core$Bit $tmp3052 = org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit(param2);
bool $tmp3053 = $tmp3052.value;
if ($tmp3053) goto block1; else goto block3;
block1:;
// line 849
frost$core$Bit $tmp3054 = frost$core$Bit$init$builtin_bit(param1 != NULL);
bool $tmp3055 = $tmp3054.value;
if ($tmp3055) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp3056 = (frost$core$Int64) {849};
frost$core$String* $tmp3057 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param2);
frost$core$String* $tmp3058 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3059, $tmp3057);
frost$core$String* $tmp3060 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3058, &$s3061);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3062, $tmp3056, $tmp3060);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3060));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3058));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3057));
abort(); // unreachable
block5:;
// line 850
frost$core$Weak** $tmp3063 = &param2->owner;
frost$core$Weak* $tmp3064 = *$tmp3063;
frost$core$Object* $tmp3065 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3064);
org$frostlang$frostc$ClassDecl$Kind* $tmp3066 = &((org$frostlang$frostc$ClassDecl*) $tmp3065)->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp3067 = *$tmp3066;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3068;
$tmp3068 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3068->value = $tmp3067;
frost$core$Int64 $tmp3069 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp3070 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp3069);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3071;
$tmp3071 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3071->value = $tmp3070;
ITable* $tmp3072 = ((frost$core$Equatable*) $tmp3068)->$class->itable;
while ($tmp3072->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3072 = $tmp3072->next;
}
$fn3074 $tmp3073 = $tmp3072->methods[0];
frost$core$Bit $tmp3075 = $tmp3073(((frost$core$Equatable*) $tmp3068), ((frost$core$Equatable*) $tmp3071));
bool $tmp3076 = $tmp3075.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3071)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3068)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3065);
if ($tmp3076) goto block7; else goto block9;
block7:;
// line 851
frost$core$String* $tmp3077 = org$frostlang$frostc$CCodeGenerator$getInterfaceMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3077));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3077));
return $tmp3077;
block9:;
// line 1
// line 854
frost$core$String* $tmp3078 = org$frostlang$frostc$CCodeGenerator$getVirtualMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3078));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3078));
return $tmp3078;
block8:;
goto block2;
block3:;
// line 1
// line 858
frost$core$Weak** $tmp3079 = &param2->owner;
frost$core$Weak* $tmp3080 = *$tmp3079;
frost$core$Object* $tmp3081 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3080);
frost$core$Bit $tmp3082 = org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp3081));
bool $tmp3083 = $tmp3082.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3081);
if ($tmp3083) goto block10; else goto block11;
block10:;
// line 859
org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param2);
goto block11;
block11:;
// line 861
frost$core$String* $tmp3084 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3084));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3084));
return $tmp3084;
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
org$frostlang$frostc$Type$Kind* $tmp3085 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp3086 = *$tmp3085;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3087;
$tmp3087 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3087->value = $tmp3086;
frost$core$Int64 $tmp3088 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3089 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3088);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3090;
$tmp3090 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3090->value = $tmp3089;
ITable* $tmp3091 = ((frost$core$Equatable*) $tmp3087)->$class->itable;
while ($tmp3091->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3091 = $tmp3091->next;
}
$fn3093 $tmp3092 = $tmp3091->methods[0];
frost$core$Bit $tmp3094 = $tmp3092(((frost$core$Equatable*) $tmp3087), ((frost$core$Equatable*) $tmp3090));
bool $tmp3095 = $tmp3094.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3090)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3087)));
if ($tmp3095) goto block3; else goto block4;
block3:;
// line 869
frost$core$String* $tmp3096 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3096));
frost$core$String* $tmp3097 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3097));
*(&local1) = $tmp3096;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3096));
// line 870
frost$core$String* $tmp3098 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3099 = frost$core$String$get_asString$R$frost$core$String($tmp3098);
frost$core$String* $tmp3100 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3099, &$s3101);
frost$core$String* $tmp3102 = *(&local1);
frost$core$String* $tmp3103 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3100, $tmp3102);
frost$core$String* $tmp3104 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3103, &$s3105);
$fn3107 $tmp3106 = ($fn3107) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3108 = $tmp3106(((frost$io$OutputStream*) param4), $tmp3104);
if ($tmp3108 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3108));
*(&local0) = $tmp3108;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3099));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3098));
frost$core$String* $tmp3109 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3109));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3099));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3098));
// line 871
frost$core$String* $tmp3110 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3111, param1);
frost$core$String* $tmp3112 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3110, &$s3113);
$fn3115 $tmp3114 = ($fn3115) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3116 = $tmp3114(((frost$io$OutputStream*) param4), $tmp3112);
if ($tmp3116 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3116));
*(&local0) = $tmp3116;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3110));
frost$core$String* $tmp3117 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3117));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3110));
// line 872
frost$core$Int64* $tmp3118 = &param4->level;
frost$core$Int64 $tmp3119 = *$tmp3118;
frost$core$Int64 $tmp3120 = (frost$core$Int64) {1};
int64_t $tmp3121 = $tmp3119.value;
int64_t $tmp3122 = $tmp3120.value;
int64_t $tmp3123 = $tmp3121 + $tmp3122;
frost$core$Int64 $tmp3124 = (frost$core$Int64) {$tmp3123};
frost$core$Int64* $tmp3125 = &param4->level;
*$tmp3125 = $tmp3124;
// line 873
org$frostlang$frostc$FixedArray** $tmp3126 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp3127 = *$tmp3126;
frost$core$Int64 $tmp3128 = (frost$core$Int64) {0};
frost$core$Object* $tmp3129 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3127, $tmp3128);
frost$core$String* $tmp3130 = org$frostlang$frostc$CCodeGenerator$toNonNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, ((org$frostlang$frostc$Type*) $tmp3129), param4);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3130));
frost$core$String* $tmp3131 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3131));
*(&local2) = $tmp3130;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3130));
frost$core$Frost$unref$frost$core$Object$Q($tmp3129);
// line 874
frost$core$String* $tmp3132 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp3133 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp3134 = *$tmp3133;
frost$core$Int64 $tmp3135 = (frost$core$Int64) {0};
frost$core$Object* $tmp3136 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3134, $tmp3135);
frost$core$String* $tmp3137 = org$frostlang$frostc$CCodeGenerator$wrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, $tmp3132, ((org$frostlang$frostc$Type*) $tmp3136), param3, param4);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3137));
frost$core$String* $tmp3138 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3138));
*(&local3) = $tmp3137;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3137));
frost$core$Frost$unref$frost$core$Object$Q($tmp3136);
// line 875
frost$core$String* $tmp3139 = *(&local1);
frost$core$String* $tmp3140 = frost$core$String$get_asString$R$frost$core$String($tmp3139);
frost$core$String* $tmp3141 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3140, &$s3142);
frost$core$String* $tmp3143 = *(&local3);
frost$core$String* $tmp3144 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3141, $tmp3143);
frost$core$String* $tmp3145 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3144, &$s3146);
$fn3148 $tmp3147 = ($fn3148) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3149 = $tmp3147(((frost$io$OutputStream*) param4), $tmp3145);
if ($tmp3149 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3149));
*(&local0) = $tmp3149;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3140));
frost$core$String* $tmp3150 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3150));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3151 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3151));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3152 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3152));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3140));
// line 876
frost$core$Int64* $tmp3153 = &param4->level;
frost$core$Int64 $tmp3154 = *$tmp3153;
frost$core$Int64 $tmp3155 = (frost$core$Int64) {1};
int64_t $tmp3156 = $tmp3154.value;
int64_t $tmp3157 = $tmp3155.value;
int64_t $tmp3158 = $tmp3156 - $tmp3157;
frost$core$Int64 $tmp3159 = (frost$core$Int64) {$tmp3158};
frost$core$Int64* $tmp3160 = &param4->level;
*$tmp3160 = $tmp3159;
// line 877
$fn3162 $tmp3161 = ($fn3162) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3163 = $tmp3161(((frost$io$OutputStream*) param4), &$s3164);
if ($tmp3163 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3163));
*(&local0) = $tmp3163;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3163));
frost$core$String* $tmp3165 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3165));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3166 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3166));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3167 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3167));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3163));
// line 878
$fn3169 $tmp3168 = ($fn3169) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3170 = $tmp3168(((frost$io$OutputStream*) param4), &$s3171);
if ($tmp3170 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3170));
*(&local0) = $tmp3170;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3170));
frost$core$String* $tmp3172 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3172));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3173 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3173));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3174 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3174));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3170));
// line 879
frost$core$Int64* $tmp3175 = &param4->level;
frost$core$Int64 $tmp3176 = *$tmp3175;
frost$core$Int64 $tmp3177 = (frost$core$Int64) {1};
int64_t $tmp3178 = $tmp3176.value;
int64_t $tmp3179 = $tmp3177.value;
int64_t $tmp3180 = $tmp3178 + $tmp3179;
frost$core$Int64 $tmp3181 = (frost$core$Int64) {$tmp3180};
frost$core$Int64* $tmp3182 = &param4->level;
*$tmp3182 = $tmp3181;
// line 880
frost$core$String* $tmp3183 = *(&local1);
frost$core$String* $tmp3184 = frost$core$String$get_asString$R$frost$core$String($tmp3183);
frost$core$String* $tmp3185 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3184, &$s3186);
$fn3188 $tmp3187 = ($fn3188) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3189 = $tmp3187(((frost$io$OutputStream*) param4), $tmp3185);
if ($tmp3189 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
*(&local0) = $tmp3189;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3184));
frost$core$String* $tmp3190 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3190));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3191 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3191));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3192 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3192));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3184));
// line 881
frost$core$Int64* $tmp3193 = &param4->level;
frost$core$Int64 $tmp3194 = *$tmp3193;
frost$core$Int64 $tmp3195 = (frost$core$Int64) {1};
int64_t $tmp3196 = $tmp3194.value;
int64_t $tmp3197 = $tmp3195.value;
int64_t $tmp3198 = $tmp3196 - $tmp3197;
frost$core$Int64 $tmp3199 = (frost$core$Int64) {$tmp3198};
frost$core$Int64* $tmp3200 = &param4->level;
*$tmp3200 = $tmp3199;
// line 882
$fn3202 $tmp3201 = ($fn3202) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3203 = $tmp3201(((frost$io$OutputStream*) param4), &$s3204);
if ($tmp3203 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3203));
*(&local0) = $tmp3203;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3203));
frost$core$String* $tmp3205 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3205));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3206 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3206));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3207 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3207));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3203));
// line 883
frost$core$String* $tmp3208 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3208));
frost$core$String* $tmp3209 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3209));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3210 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3210));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3211 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3211));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp3212 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3212));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp3208;
block4:;
// line 885
frost$core$String* $tmp3213 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3213));
frost$core$String* $tmp3214 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3214));
*(&local4) = $tmp3213;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3213));
// line 886
frost$core$String* $tmp3215 = org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(param0, param2);
frost$core$String* $tmp3216 = frost$core$String$get_asString$R$frost$core$String($tmp3215);
frost$core$String* $tmp3217 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3216, &$s3218);
frost$core$String* $tmp3219 = *(&local4);
frost$core$String* $tmp3220 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3217, $tmp3219);
frost$core$String* $tmp3221 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3220, &$s3222);
$fn3224 $tmp3223 = ($fn3224) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3225 = $tmp3223(((frost$io$OutputStream*) param4), $tmp3221);
if ($tmp3225 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3225));
*(&local0) = $tmp3225;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3215));
frost$core$String* $tmp3226 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3226));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3215));
// line 887
org$frostlang$frostc$Type$Kind* $tmp3227 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp3228 = *$tmp3227;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3229;
$tmp3229 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3229->value = $tmp3228;
frost$core$Int64 $tmp3230 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3231 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3230);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3232;
$tmp3232 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3232->value = $tmp3231;
ITable* $tmp3233 = ((frost$core$Equatable*) $tmp3229)->$class->itable;
while ($tmp3233->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3233 = $tmp3233->next;
}
$fn3235 $tmp3234 = $tmp3233->methods[0];
frost$core$Bit $tmp3236 = $tmp3234(((frost$core$Equatable*) $tmp3229), ((frost$core$Equatable*) $tmp3232));
bool $tmp3237 = $tmp3236.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3232)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3229)));
if ($tmp3237) goto block21; else goto block22;
block21:;
// line 888
frost$core$String* $tmp3238 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3239, param1);
frost$core$String* $tmp3240 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3238, &$s3241);
$fn3243 $tmp3242 = ($fn3243) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3244 = $tmp3242(((frost$io$OutputStream*) param4), $tmp3240);
if ($tmp3244 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3244));
*(&local0) = $tmp3244;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3238));
frost$core$String* $tmp3245 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3245));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3238));
// line 889
frost$core$Int64* $tmp3246 = &param4->level;
frost$core$Int64 $tmp3247 = *$tmp3246;
frost$core$Int64 $tmp3248 = (frost$core$Int64) {1};
int64_t $tmp3249 = $tmp3247.value;
int64_t $tmp3250 = $tmp3248.value;
int64_t $tmp3251 = $tmp3249 + $tmp3250;
frost$core$Int64 $tmp3252 = (frost$core$Int64) {$tmp3251};
frost$core$Int64* $tmp3253 = &param4->level;
*$tmp3253 = $tmp3252;
goto block22;
block22:;
// line 891
frost$core$String* $tmp3254 = *(&local4);
frost$core$String* $tmp3255 = frost$core$String$get_asString$R$frost$core$String($tmp3254);
frost$core$String* $tmp3256 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3255, &$s3257);
frost$core$String* $tmp3258 = org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(param0, param2);
frost$core$String* $tmp3259 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3256, $tmp3258);
frost$core$String* $tmp3260 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3259, &$s3261);
frost$core$Int64 $tmp3262 = org$frostlang$frostc$CCodeGenerator$sizeOfWrapper$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param2);
frost$core$Int64$wrapper* $tmp3263;
$tmp3263 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3263->value = $tmp3262;
frost$core$String* $tmp3264 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3265, ((frost$core$Object*) $tmp3263));
frost$core$String* $tmp3266 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3264, &$s3267);
frost$core$String* $tmp3268 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3260, $tmp3266);
frost$core$String** $tmp3269 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp3270 = *$tmp3269;
frost$core$String* $tmp3271 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp3270);
frost$core$String* $tmp3272 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3273, $tmp3271);
frost$core$String* $tmp3274 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3272, &$s3275);
frost$core$String* $tmp3276 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3268, $tmp3274);
$fn3278 $tmp3277 = ($fn3278) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3279 = $tmp3277(((frost$io$OutputStream*) param4), $tmp3276);
if ($tmp3279 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3279));
*(&local0) = $tmp3279;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3274));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3266));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3255));
frost$core$String* $tmp3280 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3280));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3274));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3266));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3255));
// line 894
frost$core$String* $tmp3281 = *(&local4);
frost$core$String* $tmp3282 = frost$core$String$get_asString$R$frost$core$String($tmp3281);
frost$core$String* $tmp3283 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3282, &$s3284);
frost$core$String* $tmp3285 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3283, param1);
frost$core$String* $tmp3286 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3285, &$s3287);
$fn3289 $tmp3288 = ($fn3289) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3290 = $tmp3288(((frost$io$OutputStream*) param4), $tmp3286);
if ($tmp3290 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3290));
*(&local0) = $tmp3290;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3290));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3282));
frost$core$String* $tmp3291 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3291));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3290));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3282));
// line 895
org$frostlang$frostc$Type$Kind* $tmp3292 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp3293 = *$tmp3292;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3294;
$tmp3294 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3294->value = $tmp3293;
frost$core$Int64 $tmp3295 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3296 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3295);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3297;
$tmp3297 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3297->value = $tmp3296;
ITable* $tmp3298 = ((frost$core$Equatable*) $tmp3294)->$class->itable;
while ($tmp3298->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3298 = $tmp3298->next;
}
$fn3300 $tmp3299 = $tmp3298->methods[0];
frost$core$Bit $tmp3301 = $tmp3299(((frost$core$Equatable*) $tmp3294), ((frost$core$Equatable*) $tmp3297));
bool $tmp3302 = $tmp3301.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3297)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3294)));
if ($tmp3302) goto block29; else goto block30;
block29:;
// line 896
frost$core$Int64* $tmp3303 = &param4->level;
frost$core$Int64 $tmp3304 = *$tmp3303;
frost$core$Int64 $tmp3305 = (frost$core$Int64) {1};
int64_t $tmp3306 = $tmp3304.value;
int64_t $tmp3307 = $tmp3305.value;
int64_t $tmp3308 = $tmp3306 - $tmp3307;
frost$core$Int64 $tmp3309 = (frost$core$Int64) {$tmp3308};
frost$core$Int64* $tmp3310 = &param4->level;
*$tmp3310 = $tmp3309;
// line 897
$fn3312 $tmp3311 = ($fn3312) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3313 = $tmp3311(((frost$io$OutputStream*) param4), &$s3314);
if ($tmp3313 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3313));
*(&local0) = $tmp3313;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3313));
frost$core$String* $tmp3315 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3315));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3313));
// line 898
$fn3317 $tmp3316 = ($fn3317) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3318 = $tmp3316(((frost$io$OutputStream*) param4), &$s3319);
if ($tmp3318 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3318));
*(&local0) = $tmp3318;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3318));
frost$core$String* $tmp3320 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3320));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3318));
// line 899
frost$core$Int64* $tmp3321 = &param4->level;
frost$core$Int64 $tmp3322 = *$tmp3321;
frost$core$Int64 $tmp3323 = (frost$core$Int64) {1};
int64_t $tmp3324 = $tmp3322.value;
int64_t $tmp3325 = $tmp3323.value;
int64_t $tmp3326 = $tmp3324 + $tmp3325;
frost$core$Int64 $tmp3327 = (frost$core$Int64) {$tmp3326};
frost$core$Int64* $tmp3328 = &param4->level;
*$tmp3328 = $tmp3327;
// line 900
frost$core$String* $tmp3329 = *(&local4);
frost$core$String* $tmp3330 = frost$core$String$get_asString$R$frost$core$String($tmp3329);
frost$core$String* $tmp3331 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3330, &$s3332);
$fn3334 $tmp3333 = ($fn3334) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3335 = $tmp3333(((frost$io$OutputStream*) param4), $tmp3331);
if ($tmp3335 == NULL) goto block35; else goto block36;
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3335));
*(&local0) = $tmp3335;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3330));
frost$core$String* $tmp3336 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3336));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3330));
// line 901
frost$core$Int64* $tmp3337 = &param4->level;
frost$core$Int64 $tmp3338 = *$tmp3337;
frost$core$Int64 $tmp3339 = (frost$core$Int64) {1};
int64_t $tmp3340 = $tmp3338.value;
int64_t $tmp3341 = $tmp3339.value;
int64_t $tmp3342 = $tmp3340 - $tmp3341;
frost$core$Int64 $tmp3343 = (frost$core$Int64) {$tmp3342};
frost$core$Int64* $tmp3344 = &param4->level;
*$tmp3344 = $tmp3343;
// line 902
$fn3346 $tmp3345 = ($fn3346) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3347 = $tmp3345(((frost$io$OutputStream*) param4), &$s3348);
if ($tmp3347 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3347));
*(&local0) = $tmp3347;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3347));
frost$core$String* $tmp3349 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3349));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3347));
goto block30;
block30:;
// line 904
frost$core$String* $tmp3350 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3351 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3352, $tmp3350);
frost$core$String* $tmp3353 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3351, &$s3354);
frost$core$String* $tmp3355 = *(&local4);
frost$core$String* $tmp3356 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3353, $tmp3355);
frost$core$String* $tmp3357 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3356, &$s3358);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3351));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3350));
frost$core$String* $tmp3359 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3359));
*(&local4) = ((frost$core$String*) NULL);
frost$core$Error* $tmp3360 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3360));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp3357;
block1:;
// line 907
frost$core$Int64 $tmp3361 = (frost$core$Int64) {907};
frost$core$Error* $tmp3362 = *(&local0);
$fn3364 $tmp3363 = ($fn3364) ((frost$core$Object*) $tmp3362)->$class->vtable[0];
frost$core$String* $tmp3365 = $tmp3363(((frost$core$Object*) $tmp3362));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3366, $tmp3361, $tmp3365);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3365));
abort(); // unreachable
block2:;
frost$core$Error* $tmp3367 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3367));
*(&local0) = ((frost$core$Error*) NULL);
goto block39;
block39:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$unwrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3, frost$io$IndentedOutputStream* param4) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 912
frost$core$String* $tmp3368 = org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3369 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3370, $tmp3368);
frost$core$String* $tmp3371 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3369, &$s3372);
frost$core$String* $tmp3373 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3371, param1);
frost$core$String* $tmp3374 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3373, &$s3375);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3374));
frost$core$String* $tmp3376 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3376));
*(&local0) = $tmp3374;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3368));
// line 913
org$frostlang$frostc$Type$Kind* $tmp3377 = &param3->typeKind;
org$frostlang$frostc$Type$Kind $tmp3378 = *$tmp3377;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3379;
$tmp3379 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3379->value = $tmp3378;
frost$core$Int64 $tmp3380 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3381 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3380);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3382;
$tmp3382 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3382->value = $tmp3381;
ITable* $tmp3383 = ((frost$core$Equatable*) $tmp3379)->$class->itable;
while ($tmp3383->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3383 = $tmp3383->next;
}
$fn3385 $tmp3384 = $tmp3383->methods[0];
frost$core$Bit $tmp3386 = $tmp3384(((frost$core$Equatable*) $tmp3379), ((frost$core$Equatable*) $tmp3382));
bool $tmp3387 = $tmp3386.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3382)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3379)));
if ($tmp3387) goto block1; else goto block2;
block1:;
// line 915
org$frostlang$frostc$FixedArray** $tmp3388 = &param3->subtypes;
org$frostlang$frostc$FixedArray* $tmp3389 = *$tmp3388;
frost$core$Int64 $tmp3390 = (frost$core$Int64) {0};
frost$core$Object* $tmp3391 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3389, $tmp3390);
frost$core$String* $tmp3392 = org$frostlang$frostc$CCodeGenerator$unwrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, ((org$frostlang$frostc$Type*) $tmp3391), param4);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3392));
frost$core$String* $tmp3393 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3393));
*(&local1) = $tmp3392;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3392));
frost$core$Frost$unref$frost$core$Object$Q($tmp3391);
// line 916
frost$core$String* $tmp3394 = *(&local1);
org$frostlang$frostc$FixedArray** $tmp3395 = &param3->subtypes;
org$frostlang$frostc$FixedArray* $tmp3396 = *$tmp3395;
frost$core$Int64 $tmp3397 = (frost$core$Int64) {0};
frost$core$Object* $tmp3398 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3396, $tmp3397);
frost$core$String* $tmp3399 = org$frostlang$frostc$CCodeGenerator$toNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, $tmp3394, ((org$frostlang$frostc$Type*) $tmp3398), param3, param4);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3399));
frost$core$String* $tmp3400 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3400));
*(&local2) = $tmp3399;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3399));
frost$core$Frost$unref$frost$core$Object$Q($tmp3398);
// line 917
frost$core$String* $tmp3401 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3402, param1);
frost$core$String* $tmp3403 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3401, &$s3404);
frost$core$String* $tmp3405 = *(&local2);
frost$core$String* $tmp3406 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3403, $tmp3405);
frost$core$String* $tmp3407 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3406, &$s3408);
frost$core$String* $tmp3409 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3410 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3407, $tmp3409);
frost$core$String* $tmp3411 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3410, &$s3412);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3401));
frost$core$String* $tmp3413 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3413));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3414 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3414));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp3415 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3415));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3411;
block2:;
// line 919
frost$core$String* $tmp3416 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3416));
frost$core$String* $tmp3417 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3417));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3416;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$toNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3, frost$io$IndentedOutputStream* param4) {

// line 924
frost$core$String* $tmp3418 = org$frostlang$frostc$CCodeGenerator$nullableType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3419 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3420, $tmp3418);
frost$core$String* $tmp3421 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3419, &$s3422);
frost$core$String* $tmp3423 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3421, param1);
frost$core$String* $tmp3424 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3423, &$s3425);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3423));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3421));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3419));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3418));
return $tmp3424;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$toNonNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3, frost$io$IndentedOutputStream* param4) {

// line 929
frost$core$String* $tmp3426 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3427 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3428, $tmp3426);
frost$core$String* $tmp3429 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3427, &$s3430);
frost$core$String* $tmp3431 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3429, param1);
frost$core$String* $tmp3432 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3431, &$s3433);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3426));
return $tmp3432;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// line 933
frost$core$Bit $tmp3434 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(param3);
bool $tmp3435 = $tmp3434.value;
if ($tmp3435) goto block1; else goto block3;
block1:;
// line 934
frost$core$Bit $tmp3436 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(param2);
bool $tmp3437 = $tmp3436.value;
if ($tmp3437) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp3438 = (frost$core$Int64) {934};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3439, $tmp3438);
abort(); // unreachable
block4:;
// line 935
frost$core$String* $tmp3440 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3441 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3442, $tmp3440);
frost$core$String* $tmp3443 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3441, &$s3444);
frost$core$String* $tmp3445 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3443, param1);
frost$core$String* $tmp3446 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3445, &$s3447);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3443));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3440));
return $tmp3446;
block3:;
// line 1
// line 938
frost$core$Weak** $tmp3448 = &param0->compiler;
frost$core$Weak* $tmp3449 = *$tmp3448;
frost$core$Object* $tmp3450 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3449);
org$frostlang$frostc$ClassDecl* $tmp3451 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3450), param2);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3451));
org$frostlang$frostc$ClassDecl* $tmp3452 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3452));
*(&local0) = $tmp3451;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3451));
frost$core$Frost$unref$frost$core$Object$Q($tmp3450);
// line 939
org$frostlang$frostc$ClassDecl* $tmp3453 = *(&local0);
frost$core$Bit $tmp3454 = frost$core$Bit$init$builtin_bit($tmp3453 != NULL);
bool $tmp3455 = $tmp3454.value;
if ($tmp3455) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3456 = (frost$core$Int64) {939};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3457, $tmp3456);
abort(); // unreachable
block6:;
// line 940
frost$core$Weak** $tmp3458 = &param0->compiler;
frost$core$Weak* $tmp3459 = *$tmp3458;
frost$core$Object* $tmp3460 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3459);
org$frostlang$frostc$ClassDecl* $tmp3461 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3460), param3);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3461));
org$frostlang$frostc$ClassDecl* $tmp3462 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3462));
*(&local1) = $tmp3461;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3461));
frost$core$Frost$unref$frost$core$Object$Q($tmp3460);
// line 941
org$frostlang$frostc$ClassDecl* $tmp3463 = *(&local1);
frost$core$Bit $tmp3464 = frost$core$Bit$init$builtin_bit($tmp3463 != NULL);
bool $tmp3465 = $tmp3464.value;
if ($tmp3465) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp3466 = (frost$core$Int64) {941};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3467, $tmp3466);
abort(); // unreachable
block8:;
// line 942
frost$core$Weak** $tmp3468 = &param0->compiler;
frost$core$Weak* $tmp3469 = *$tmp3468;
frost$core$Object* $tmp3470 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3469);
org$frostlang$frostc$ClassDecl* $tmp3471 = *(&local0);
frost$core$Bit $tmp3472 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3470), $tmp3471);
bool $tmp3473 = $tmp3472.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3470);
if ($tmp3473) goto block13; else goto block12;
block13:;
frost$core$Weak** $tmp3474 = &param0->compiler;
frost$core$Weak* $tmp3475 = *$tmp3474;
frost$core$Object* $tmp3476 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3475);
org$frostlang$frostc$ClassDecl* $tmp3477 = *(&local1);
frost$core$Bit $tmp3478 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3476), $tmp3477);
frost$core$Bit $tmp3479 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3478);
bool $tmp3480 = $tmp3479.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3476);
if ($tmp3480) goto block10; else goto block12;
block10:;
// line 943
frost$io$IndentedOutputStream** $tmp3481 = &param0->out;
frost$io$IndentedOutputStream* $tmp3482 = *$tmp3481;
frost$core$String* $tmp3483 = org$frostlang$frostc$CCodeGenerator$wrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param3, $tmp3482);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3483));
org$frostlang$frostc$ClassDecl* $tmp3484 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3484));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3485 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3485));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3483;
block12:;
// line 945
frost$core$Weak** $tmp3486 = &param0->compiler;
frost$core$Weak* $tmp3487 = *$tmp3486;
frost$core$Object* $tmp3488 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3487);
org$frostlang$frostc$ClassDecl* $tmp3489 = *(&local0);
frost$core$Bit $tmp3490 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3488), $tmp3489);
frost$core$Bit $tmp3491 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3490);
bool $tmp3492 = $tmp3491.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3488);
if ($tmp3492) goto block17; else goto block16;
block17:;
frost$core$Weak** $tmp3493 = &param0->compiler;
frost$core$Weak* $tmp3494 = *$tmp3493;
frost$core$Object* $tmp3495 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3494);
org$frostlang$frostc$ClassDecl* $tmp3496 = *(&local1);
frost$core$Bit $tmp3497 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3495), $tmp3496);
bool $tmp3498 = $tmp3497.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3495);
if ($tmp3498) goto block14; else goto block16;
block14:;
// line 946
frost$io$IndentedOutputStream** $tmp3499 = &param0->out;
frost$io$IndentedOutputStream* $tmp3500 = *$tmp3499;
frost$core$String* $tmp3501 = org$frostlang$frostc$CCodeGenerator$unwrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param3, $tmp3500);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3501));
org$frostlang$frostc$ClassDecl* $tmp3502 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3502));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3503 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3503));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3501;
block16:;
// line 948
frost$core$Weak** $tmp3504 = &param0->compiler;
frost$core$Weak* $tmp3505 = *$tmp3504;
frost$core$Object* $tmp3506 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3505);
org$frostlang$frostc$ClassDecl* $tmp3507 = *(&local0);
frost$core$Bit $tmp3508 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3506), $tmp3507);
bool $tmp3509 = $tmp3508.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3506);
if ($tmp3509) goto block22; else goto block20;
block22:;
org$frostlang$frostc$Type$Kind* $tmp3510 = &param3->typeKind;
org$frostlang$frostc$Type$Kind $tmp3511 = *$tmp3510;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3512;
$tmp3512 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3512->value = $tmp3511;
frost$core$Int64 $tmp3513 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3514 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3513);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3515;
$tmp3515 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3515->value = $tmp3514;
ITable* $tmp3516 = ((frost$core$Equatable*) $tmp3512)->$class->itable;
while ($tmp3516->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3516 = $tmp3516->next;
}
$fn3518 $tmp3517 = $tmp3516->methods[0];
frost$core$Bit $tmp3519 = $tmp3517(((frost$core$Equatable*) $tmp3512), ((frost$core$Equatable*) $tmp3515));
bool $tmp3520 = $tmp3519.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3515)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3512)));
if ($tmp3520) goto block21; else goto block20;
block21:;
org$frostlang$frostc$FixedArray** $tmp3521 = &param3->subtypes;
org$frostlang$frostc$FixedArray* $tmp3522 = *$tmp3521;
frost$core$Int64 $tmp3523 = (frost$core$Int64) {0};
frost$core$Object* $tmp3524 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3522, $tmp3523);
frost$core$Bit $tmp3525 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp3524), param2);
bool $tmp3526 = $tmp3525.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3524);
if ($tmp3526) goto block18; else goto block20;
block18:;
// line 950
frost$io$IndentedOutputStream** $tmp3527 = &param0->out;
frost$io$IndentedOutputStream* $tmp3528 = *$tmp3527;
frost$core$String* $tmp3529 = org$frostlang$frostc$CCodeGenerator$toNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param3, $tmp3528);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3529));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3529));
org$frostlang$frostc$ClassDecl* $tmp3530 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3530));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3531 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3531));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3529;
block20:;
// line 952
frost$core$Weak** $tmp3532 = &param0->compiler;
frost$core$Weak* $tmp3533 = *$tmp3532;
frost$core$Object* $tmp3534 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3533);
org$frostlang$frostc$ClassDecl* $tmp3535 = *(&local1);
frost$core$Bit $tmp3536 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3534), $tmp3535);
bool $tmp3537 = $tmp3536.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3534);
if ($tmp3537) goto block26; else goto block24;
block26:;
org$frostlang$frostc$Type$Kind* $tmp3538 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp3539 = *$tmp3538;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3540;
$tmp3540 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3540->value = $tmp3539;
frost$core$Int64 $tmp3541 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3542 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3541);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3543;
$tmp3543 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3543->value = $tmp3542;
ITable* $tmp3544 = ((frost$core$Equatable*) $tmp3540)->$class->itable;
while ($tmp3544->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3544 = $tmp3544->next;
}
$fn3546 $tmp3545 = $tmp3544->methods[0];
frost$core$Bit $tmp3547 = $tmp3545(((frost$core$Equatable*) $tmp3540), ((frost$core$Equatable*) $tmp3543));
bool $tmp3548 = $tmp3547.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3543)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3540)));
if ($tmp3548) goto block25; else goto block24;
block25:;
org$frostlang$frostc$FixedArray** $tmp3549 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp3550 = *$tmp3549;
frost$core$Int64 $tmp3551 = (frost$core$Int64) {0};
frost$core$Object* $tmp3552 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3550, $tmp3551);
frost$core$Bit $tmp3553 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp3552), param3);
bool $tmp3554 = $tmp3553.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3552);
if ($tmp3554) goto block23; else goto block24;
block23:;
// line 954
frost$io$IndentedOutputStream** $tmp3555 = &param0->out;
frost$io$IndentedOutputStream* $tmp3556 = *$tmp3555;
frost$core$String* $tmp3557 = org$frostlang$frostc$CCodeGenerator$toNonNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param3, $tmp3556);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3557));
org$frostlang$frostc$ClassDecl* $tmp3558 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3558));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3559 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3559));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3557;
block24:;
goto block19;
block19:;
goto block15;
block15:;
goto block11;
block11:;
org$frostlang$frostc$ClassDecl* $tmp3560 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3560));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3561 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3561));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block2;
block2:;
// line 957
frost$core$String* $tmp3562 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param2);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3562));
frost$core$String* $tmp3563 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3563));
*(&local2) = $tmp3562;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3562));
// line 958
frost$core$String* $tmp3564 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3564));
frost$core$String* $tmp3565 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3565));
*(&local3) = $tmp3564;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3564));
// line 959
frost$core$String* $tmp3566 = *(&local2);
frost$core$String* $tmp3567 = *(&local3);
frost$core$Bit $tmp3568 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3566, $tmp3567);
bool $tmp3569 = $tmp3568.value;
if ($tmp3569) goto block27; else goto block28;
block27:;
// line 960
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String* $tmp3570 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3570));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3571 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3571));
*(&local2) = ((frost$core$String*) NULL);
return param1;
block28:;
// line 962
frost$core$String* $tmp3572 = *(&local3);
frost$core$String* $tmp3573 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3574, $tmp3572);
frost$core$String* $tmp3575 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3573, &$s3576);
frost$core$String* $tmp3577 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3575, param1);
frost$core$String* $tmp3578 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3577, &$s3579);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3578));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3578));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3577));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3573));
frost$core$String* $tmp3580 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3580));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3581 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3581));
*(&local2) = ((frost$core$String*) NULL);
return $tmp3578;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getIntReference$frost$core$UInt64$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$UInt64 param1) {

// line 966
frost$core$Int64 $tmp3582 = (frost$core$Int64) {9223372036854775807};
frost$core$UInt64 $tmp3583 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3582);
uint64_t $tmp3584 = param1.value;
uint64_t $tmp3585 = $tmp3583.value;
bool $tmp3586 = $tmp3584 > $tmp3585;
frost$core$Bit $tmp3587 = (frost$core$Bit) {$tmp3586};
bool $tmp3588 = $tmp3587.value;
if ($tmp3588) goto block1; else goto block2;
block1:;
// line 967
frost$core$UInt64$wrapper* $tmp3589;
$tmp3589 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp3589->value = param1;
frost$core$String* $tmp3590 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp3589), &$s3591);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3590));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3590));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3589));
return $tmp3590;
block2:;
// line 969
frost$core$UInt64$wrapper* $tmp3592;
$tmp3592 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp3592->value = param1;
$fn3594 $tmp3593 = ($fn3594) ((frost$core$Object*) $tmp3592)->$class->vtable[0];
frost$core$String* $tmp3595 = $tmp3593(((frost$core$Object*) $tmp3592));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3592));
return $tmp3595;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getRealReference$org$frostlang$frostc$Type$frost$core$Real64$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$Real64 param2) {

frost$core$String* local0 = NULL;
// line 973
frost$core$Real64$wrapper* $tmp3596;
$tmp3596 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp3596->value = param2;
$fn3598 $tmp3597 = ($fn3598) ((frost$core$Object*) $tmp3596)->$class->vtable[0];
frost$core$String* $tmp3599 = $tmp3597(((frost$core$Object*) $tmp3596));
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3599));
frost$core$String* $tmp3600 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3600));
*(&local0) = $tmp3599;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3599));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3596));
// line 974
frost$core$String* $tmp3601 = *(&local0);
frost$core$Bit $tmp3602 = frost$core$String$contains$frost$core$String$R$frost$core$Bit($tmp3601, &$s3603);
bool $tmp3604 = $tmp3602.value;
if ($tmp3604) goto block1; else goto block2;
block1:;
// line 975
frost$core$String* $tmp3605 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3605));
frost$core$String* $tmp3606 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3606));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3605;
block2:;
// line 977
frost$core$String* $tmp3607 = *(&local0);
frost$core$String* $tmp3608 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3607, &$s3609);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3608));
frost$core$String* $tmp3610 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3610));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3608;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getBitReference$frost$core$Bit$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$Bit param1, frost$io$IndentedOutputStream* param2) {

// line 981
bool $tmp3611 = param1.value;
if ($tmp3611) goto block1; else goto block2;
block1:;
// line 982
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3612));
return &$s3613;
block2:;
// line 984
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3614));
return &$s3615;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Char8 local2;
// line 988
*(&local0) = ((frost$core$Error*) NULL);
// line 989
frost$core$Int64* $tmp3616 = &param0->varCount;
frost$core$Int64 $tmp3617 = *$tmp3616;
frost$core$Int64 $tmp3618 = (frost$core$Int64) {1};
int64_t $tmp3619 = $tmp3617.value;
int64_t $tmp3620 = $tmp3618.value;
int64_t $tmp3621 = $tmp3619 + $tmp3620;
frost$core$Int64 $tmp3622 = (frost$core$Int64) {$tmp3621};
frost$core$Int64* $tmp3623 = &param0->varCount;
*$tmp3623 = $tmp3622;
// line 990
frost$core$Int64* $tmp3624 = &param0->varCount;
frost$core$Int64 $tmp3625 = *$tmp3624;
frost$core$Int64$wrapper* $tmp3626;
$tmp3626 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3626->value = $tmp3625;
frost$core$String* $tmp3627 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3628, ((frost$core$Object*) $tmp3626));
frost$core$String* $tmp3629 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3627, &$s3630);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3629));
frost$core$String* $tmp3631 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3631));
*(&local1) = $tmp3629;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3626));
// line 991
org$frostlang$frostc$Type* $tmp3632 = org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type();
frost$core$String* $tmp3633 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp3632);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3632));
// line 992
frost$io$MemoryOutputStream** $tmp3634 = &param0->strings;
frost$io$MemoryOutputStream* $tmp3635 = *$tmp3634;
frost$core$String* $tmp3636 = *(&local1);
frost$core$String* $tmp3637 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3638, $tmp3636);
frost$core$String* $tmp3639 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3637, &$s3640);
frost$core$Int64 $tmp3641 = (frost$core$Int64) {18446744073709550617};
frost$core$Int64$wrapper* $tmp3642;
$tmp3642 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3642->value = $tmp3641;
frost$core$String* $tmp3643 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3644, ((frost$core$Object*) $tmp3642));
frost$core$String* $tmp3645 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3643, &$s3646);
frost$core$String* $tmp3647 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3639, $tmp3645);
frost$core$String* $tmp3648 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3647, &$s3649);
$fn3651 $tmp3650 = ($fn3651) ((frost$io$OutputStream*) $tmp3635)->$class->vtable[17];
frost$core$Error* $tmp3652 = $tmp3650(((frost$io$OutputStream*) $tmp3635), $tmp3648);
if ($tmp3652 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3652));
*(&local0) = $tmp3652;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3648));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3647));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3643));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3637));
frost$core$String* $tmp3653 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3653));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3648));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3647));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3643));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3637));
// line 995
frost$collections$ListView* $tmp3654 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(param1);
ITable* $tmp3655 = ((frost$collections$Iterable*) $tmp3654)->$class->itable;
while ($tmp3655->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3655 = $tmp3655->next;
}
$fn3657 $tmp3656 = $tmp3655->methods[0];
frost$collections$Iterator* $tmp3658 = $tmp3656(((frost$collections$Iterable*) $tmp3654));
goto block5;
block5:;
ITable* $tmp3659 = $tmp3658->$class->itable;
while ($tmp3659->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3659 = $tmp3659->next;
}
$fn3661 $tmp3660 = $tmp3659->methods[0];
frost$core$Bit $tmp3662 = $tmp3660($tmp3658);
bool $tmp3663 = $tmp3662.value;
if ($tmp3663) goto block7; else goto block6;
block6:;
ITable* $tmp3664 = $tmp3658->$class->itable;
while ($tmp3664->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3664 = $tmp3664->next;
}
$fn3666 $tmp3665 = $tmp3664->methods[1];
frost$core$Object* $tmp3667 = $tmp3665($tmp3658);
*(&local2) = ((frost$core$Char8$wrapper*) $tmp3667)->value;
// line 996
frost$io$MemoryOutputStream** $tmp3668 = &param0->strings;
frost$io$MemoryOutputStream* $tmp3669 = *$tmp3668;
frost$core$Char8 $tmp3670 = *(&local2);
frost$core$UInt8 $tmp3671 = frost$core$Char8$get_asUInt8$R$frost$core$UInt8($tmp3670);
frost$core$UInt8$wrapper* $tmp3672;
$tmp3672 = (frost$core$UInt8$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp3672->value = $tmp3671;
ITable* $tmp3673 = ((frost$core$Formattable*) $tmp3672)->$class->itable;
while ($tmp3673->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp3673 = $tmp3673->next;
}
$fn3675 $tmp3674 = $tmp3673->methods[0];
frost$core$String* $tmp3676 = $tmp3674(((frost$core$Formattable*) $tmp3672), &$s3677);
frost$core$String* $tmp3678 = frost$core$Frost$align$frost$core$String$frost$core$String$R$frost$core$String($tmp3676, &$s3679);
frost$core$String* $tmp3680 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3681, $tmp3678);
frost$core$String* $tmp3682 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3680, &$s3683);
$fn3685 $tmp3684 = ($fn3685) ((frost$io$OutputStream*) $tmp3669)->$class->vtable[17];
frost$core$Error* $tmp3686 = $tmp3684(((frost$io$OutputStream*) $tmp3669), $tmp3682);
if ($tmp3686 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3686));
*(&local0) = $tmp3686;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3686));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3680));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3676));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp3672)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3667);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3654));
frost$core$String* $tmp3687 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3687));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3686));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3680));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3676));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp3672)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3667);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3654));
// line 998
frost$io$MemoryOutputStream** $tmp3688 = &param0->strings;
frost$io$MemoryOutputStream* $tmp3689 = *$tmp3688;
frost$collections$ListView* $tmp3690 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(param1);
ITable* $tmp3691 = ((frost$collections$CollectionView*) $tmp3690)->$class->itable;
while ($tmp3691->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3691 = $tmp3691->next;
}
$fn3693 $tmp3692 = $tmp3691->methods[0];
frost$core$Int64 $tmp3694 = $tmp3692(((frost$collections$CollectionView*) $tmp3690));
frost$core$Int64$wrapper* $tmp3695;
$tmp3695 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3695->value = $tmp3694;
frost$core$String* $tmp3696 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3697, ((frost$core$Object*) $tmp3695));
frost$core$String* $tmp3698 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3696, &$s3699);
ITable* $tmp3700 = ((frost$collections$Key*) param1)->$class->itable;
while ($tmp3700->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp3700 = $tmp3700->next;
}
$fn3702 $tmp3701 = $tmp3700->methods[0];
frost$core$Int64 $tmp3703 = $tmp3701(((frost$collections$Key*) param1));
frost$core$Int64$wrapper* $tmp3704;
$tmp3704 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3704->value = $tmp3703;
frost$core$String* $tmp3705 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3698, ((frost$core$Object*) $tmp3704));
frost$core$String* $tmp3706 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3705, &$s3707);
$fn3709 $tmp3708 = ($fn3709) ((frost$io$OutputStream*) $tmp3689)->$class->vtable[19];
frost$core$Error* $tmp3710 = $tmp3708(((frost$io$OutputStream*) $tmp3689), $tmp3706);
if ($tmp3710 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3710));
*(&local0) = $tmp3710;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3706));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3704));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3698));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3690));
frost$core$String* $tmp3711 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3711));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3706));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3704));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3698));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3690));
// line 999
frost$core$String* $tmp3712 = *(&local1);
frost$core$String* $tmp3713 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3714, $tmp3712);
frost$core$String* $tmp3715 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3713, &$s3716);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3713));
frost$core$String* $tmp3717 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3717));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp3718 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3718));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp3715;
block1:;
// line 1002
frost$core$Int64 $tmp3719 = (frost$core$Int64) {1002};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3720, $tmp3719);
abort(); // unreachable
block2:;
frost$core$Error* $tmp3721 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3721));
*(&local0) = ((frost$core$Error*) NULL);
goto block12;
block12:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getNullReference$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// line 1007
org$frostlang$frostc$Type$Kind* $tmp3722 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp3723 = *$tmp3722;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3724;
$tmp3724 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3724->value = $tmp3723;
frost$core$Int64 $tmp3725 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3726 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3725);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3727;
$tmp3727 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3727->value = $tmp3726;
ITable* $tmp3728 = ((frost$core$Equatable*) $tmp3724)->$class->itable;
while ($tmp3728->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3728 = $tmp3728->next;
}
$fn3730 $tmp3729 = $tmp3728->methods[0];
frost$core$Bit $tmp3731 = $tmp3729(((frost$core$Equatable*) $tmp3724), ((frost$core$Equatable*) $tmp3727));
bool $tmp3732 = $tmp3731.value;
if ($tmp3732) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp3733 = (frost$core$Int64) {1007};
frost$core$String* $tmp3734 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3735, ((frost$core$Object*) param1));
frost$core$String* $tmp3736 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3734, &$s3737);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3738, $tmp3733, $tmp3736);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3736));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3734));
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3727)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3724)));
// line 1008
frost$core$Weak** $tmp3739 = &param0->compiler;
frost$core$Weak* $tmp3740 = *$tmp3739;
frost$core$Object* $tmp3741 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3740);
org$frostlang$frostc$FixedArray** $tmp3742 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp3743 = *$tmp3742;
frost$core$Int64 $tmp3744 = (frost$core$Int64) {0};
frost$core$Object* $tmp3745 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3743, $tmp3744);
org$frostlang$frostc$ClassDecl* $tmp3746 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3741), ((org$frostlang$frostc$Type*) $tmp3745));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3746));
org$frostlang$frostc$ClassDecl* $tmp3747 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3747));
*(&local0) = $tmp3746;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3746));
frost$core$Frost$unref$frost$core$Object$Q($tmp3745);
frost$core$Frost$unref$frost$core$Object$Q($tmp3741);
// line 1009
org$frostlang$frostc$ClassDecl* $tmp3748 = *(&local0);
frost$core$Bit $tmp3749 = frost$core$Bit$init$builtin_bit($tmp3748 != NULL);
bool $tmp3750 = $tmp3749.value;
if ($tmp3750) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp3751 = (frost$core$Int64) {1009};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3752, $tmp3751);
abort(); // unreachable
block3:;
// line 1010
frost$core$Weak** $tmp3753 = &param0->compiler;
frost$core$Weak* $tmp3754 = *$tmp3753;
frost$core$Object* $tmp3755 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3754);
org$frostlang$frostc$ClassDecl* $tmp3756 = *(&local0);
frost$core$Bit $tmp3757 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3755), $tmp3756);
bool $tmp3758 = $tmp3757.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3755);
if ($tmp3758) goto block5; else goto block7;
block5:;
// line 1011
frost$core$String* $tmp3759 = org$frostlang$frostc$CCodeGenerator$nullableType$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp3760 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3761, $tmp3759);
frost$core$String* $tmp3762 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3760, &$s3763);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3762));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3762));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3760));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3759));
org$frostlang$frostc$ClassDecl* $tmp3764 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3764));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3762;
block7:;
// line 1
// line 1014
frost$core$String* $tmp3765 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp3766 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3767, $tmp3765);
frost$core$String* $tmp3768 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3766, &$s3769);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3765));
org$frostlang$frostc$ClassDecl* $tmp3770 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3770));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3768;
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
frost$core$Int64* $tmp3771 = &param1->$rawValue;
frost$core$Int64 $tmp3772 = *$tmp3771;
frost$core$Int64 $tmp3773 = (frost$core$Int64) {0};
frost$core$Bit $tmp3774 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3772, $tmp3773);
bool $tmp3775 = $tmp3774.value;
if ($tmp3775) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp3776 = (frost$core$Bit*) (param1->$data + 0);
frost$core$Bit $tmp3777 = *$tmp3776;
*(&local0) = $tmp3777;
// line 1021
frost$core$Bit $tmp3778 = *(&local0);
frost$core$Bit$wrapper* $tmp3779;
$tmp3779 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp3779->value = $tmp3778;
$fn3781 $tmp3780 = ($fn3781) ((frost$core$Object*) $tmp3779)->$class->vtable[0];
frost$core$String* $tmp3782 = $tmp3780(((frost$core$Object*) $tmp3779));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3779));
return $tmp3782;
block3:;
frost$core$Int64 $tmp3783 = (frost$core$Int64) {1};
frost$core$Bit $tmp3784 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3772, $tmp3783);
bool $tmp3785 = $tmp3784.value;
if ($tmp3785) goto block4; else goto block5;
block4:;
frost$core$UInt64* $tmp3786 = (frost$core$UInt64*) (param1->$data + 0);
frost$core$UInt64 $tmp3787 = *$tmp3786;
*(&local1) = $tmp3787;
org$frostlang$frostc$Type** $tmp3788 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3789 = *$tmp3788;
// line 1024
frost$core$UInt64 $tmp3790 = *(&local1);
frost$core$UInt64$wrapper* $tmp3791;
$tmp3791 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp3791->value = $tmp3790;
$fn3793 $tmp3792 = ($fn3793) ((frost$core$Object*) $tmp3791)->$class->vtable[0];
frost$core$String* $tmp3794 = $tmp3792(((frost$core$Object*) $tmp3791));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3794));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3794));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3791));
return $tmp3794;
block5:;
frost$core$Int64 $tmp3795 = (frost$core$Int64) {2};
frost$core$Bit $tmp3796 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3772, $tmp3795);
bool $tmp3797 = $tmp3796.value;
if ($tmp3797) goto block6; else goto block7;
block6:;
frost$core$Int64* $tmp3798 = (frost$core$Int64*) (param1->$data + 0);
frost$core$Int64 $tmp3799 = *$tmp3798;
*(&local2) = $tmp3799;
org$frostlang$frostc$Type** $tmp3800 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3801 = *$tmp3800;
// line 1027
frost$core$Int64 $tmp3802 = *(&local2);
frost$core$Int64$wrapper* $tmp3803;
$tmp3803 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3803->value = $tmp3802;
frost$core$String* $tmp3804 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3805, ((frost$core$Object*) $tmp3803));
frost$core$String* $tmp3806 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3804, &$s3807);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3803));
return $tmp3806;
block7:;
frost$core$Int64 $tmp3808 = (frost$core$Int64) {3};
frost$core$Bit $tmp3809 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3772, $tmp3808);
bool $tmp3810 = $tmp3809.value;
if ($tmp3810) goto block8; else goto block9;
block8:;
org$frostlang$frostc$MethodDecl** $tmp3811 = (org$frostlang$frostc$MethodDecl**) (param1->$data + 0);
org$frostlang$frostc$MethodDecl* $tmp3812 = *$tmp3811;
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3812));
org$frostlang$frostc$MethodDecl* $tmp3813 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3813));
*(&local3) = $tmp3812;
org$frostlang$frostc$Type** $tmp3814 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3815 = *$tmp3814;
// line 1030
org$frostlang$frostc$MethodDecl* $tmp3816 = *(&local3);
frost$core$Weak** $tmp3817 = &$tmp3816->owner;
frost$core$Weak* $tmp3818 = *$tmp3817;
frost$core$Object* $tmp3819 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3818);
frost$core$Bit* $tmp3820 = &((org$frostlang$frostc$ClassDecl*) $tmp3819)->external;
frost$core$Bit $tmp3821 = *$tmp3820;
bool $tmp3822 = $tmp3821.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3819);
if ($tmp3822) goto block10; else goto block11;
block10:;
// line 1031
org$frostlang$frostc$MethodDecl* $tmp3823 = *(&local3);
org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, $tmp3823);
goto block11;
block11:;
// line 1033
org$frostlang$frostc$MethodDecl* $tmp3824 = *(&local3);
frost$core$String* $tmp3825 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, $tmp3824);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3825));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3825));
org$frostlang$frostc$MethodDecl* $tmp3826 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3826));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
return $tmp3825;
block9:;
frost$core$Int64 $tmp3827 = (frost$core$Int64) {4};
frost$core$Bit $tmp3828 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3772, $tmp3827);
bool $tmp3829 = $tmp3828.value;
if ($tmp3829) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Type** $tmp3830 = (org$frostlang$frostc$Type**) (param1->$data + 0);
org$frostlang$frostc$Type* $tmp3831 = *$tmp3830;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3831));
org$frostlang$frostc$Type* $tmp3832 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3832));
*(&local4) = $tmp3831;
// line 1036
org$frostlang$frostc$Type* $tmp3833 = *(&local4);
frost$core$String* $tmp3834 = org$frostlang$frostc$CCodeGenerator$getNullReference$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp3833);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3834));
org$frostlang$frostc$Type* $tmp3835 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3835));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp3834;
block13:;
frost$core$Int64 $tmp3836 = (frost$core$Int64) {5};
frost$core$Bit $tmp3837 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3772, $tmp3836);
bool $tmp3838 = $tmp3837.value;
if ($tmp3838) goto block14; else goto block15;
block14:;
frost$core$Int64* $tmp3839 = (frost$core$Int64*) (param1->$data + 0);
frost$core$Int64 $tmp3840 = *$tmp3839;
*(&local5) = $tmp3840;
org$frostlang$frostc$Type** $tmp3841 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3842 = *$tmp3841;
// line 1039
frost$core$Int64 $tmp3843 = *(&local5);
frost$core$Int64$wrapper* $tmp3844;
$tmp3844 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3844->value = $tmp3843;
frost$core$String* $tmp3845 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3846, ((frost$core$Object*) $tmp3844));
frost$core$String* $tmp3847 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3845, &$s3848);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3847));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3847));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3845));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3844));
return $tmp3847;
block15:;
frost$core$Int64 $tmp3849 = (frost$core$Int64) {6};
frost$core$Bit $tmp3850 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3772, $tmp3849);
bool $tmp3851 = $tmp3850.value;
if ($tmp3851) goto block16; else goto block17;
block16:;
frost$core$Real64* $tmp3852 = (frost$core$Real64*) (param1->$data + 0);
frost$core$Real64 $tmp3853 = *$tmp3852;
*(&local6) = $tmp3853;
org$frostlang$frostc$Type** $tmp3854 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3855 = *$tmp3854;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3855));
org$frostlang$frostc$Type* $tmp3856 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3856));
*(&local7) = $tmp3855;
// line 1042
org$frostlang$frostc$Type* $tmp3857 = *(&local7);
frost$core$Real64 $tmp3858 = *(&local6);
frost$core$String* $tmp3859 = org$frostlang$frostc$CCodeGenerator$getRealReference$org$frostlang$frostc$Type$frost$core$Real64$R$frost$core$String(param0, $tmp3857, $tmp3858);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3859));
org$frostlang$frostc$Type* $tmp3860 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3860));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return $tmp3859;
block17:;
frost$core$Int64 $tmp3861 = (frost$core$Int64) {7};
frost$core$Bit $tmp3862 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3772, $tmp3861);
bool $tmp3863 = $tmp3862.value;
if ($tmp3863) goto block18; else goto block19;
block18:;
org$frostlang$frostc$IR$Statement$ID* $tmp3864 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp3865 = *$tmp3864;
*(&local8) = $tmp3865;
org$frostlang$frostc$Type** $tmp3866 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3867 = *$tmp3866;
// line 1045
frost$collections$HashMap** $tmp3868 = &param0->refs;
frost$collections$HashMap* $tmp3869 = *$tmp3868;
org$frostlang$frostc$IR$Statement$ID $tmp3870 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3871;
$tmp3871 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3871->value = $tmp3870;
frost$core$Object* $tmp3872 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp3869, ((frost$collections$Key*) $tmp3871));
frost$core$Bit $tmp3873 = frost$core$Bit$init$builtin_bit(((frost$core$String*) $tmp3872) != NULL);
bool $tmp3874 = $tmp3873.value;
if ($tmp3874) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp3875 = (frost$core$Int64) {1045};
org$frostlang$frostc$IR$Statement$ID $tmp3876 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3877;
$tmp3877 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3877->value = $tmp3876;
frost$core$String* $tmp3878 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3879, ((frost$core$Object*) $tmp3877));
frost$core$String* $tmp3880 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3878, &$s3881);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3882, $tmp3875, $tmp3880);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3877));
abort(); // unreachable
block20:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3872);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp3871)));
// line 1046
frost$collections$HashMap** $tmp3883 = &param0->refs;
frost$collections$HashMap* $tmp3884 = *$tmp3883;
org$frostlang$frostc$IR$Statement$ID $tmp3885 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3886;
$tmp3886 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3886->value = $tmp3885;
frost$core$Object* $tmp3887 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp3884, ((frost$collections$Key*) $tmp3886));
frost$core$Bit $tmp3888 = frost$core$Bit$init$builtin_bit(((frost$core$String*) $tmp3887) == NULL);
bool $tmp3889 = $tmp3888.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3887);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp3886)));
if ($tmp3889) goto block22; else goto block23;
block22:;
// line 1047
org$frostlang$frostc$IR$Statement$ID $tmp3890 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3891;
$tmp3891 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3891->value = $tmp3890;
frost$core$String* $tmp3892 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3893, ((frost$core$Object*) $tmp3891));
frost$core$String* $tmp3894 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3892, &$s3895);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3894));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3894));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3891));
return $tmp3894;
block23:;
// line 1049
frost$collections$HashMap** $tmp3896 = &param0->refs;
frost$collections$HashMap* $tmp3897 = *$tmp3896;
org$frostlang$frostc$IR$Statement$ID $tmp3898 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3899;
$tmp3899 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3899->value = $tmp3898;
frost$core$Object* $tmp3900 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp3897, ((frost$collections$Key*) $tmp3899));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp3900)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3900);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp3899)));
return ((frost$core$String*) $tmp3900);
block19:;
frost$core$Int64 $tmp3901 = (frost$core$Int64) {8};
frost$core$Bit $tmp3902 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3772, $tmp3901);
bool $tmp3903 = $tmp3902.value;
if ($tmp3903) goto block24; else goto block25;
block24:;
frost$core$String** $tmp3904 = (frost$core$String**) (param1->$data + 0);
frost$core$String* $tmp3905 = *$tmp3904;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3905));
frost$core$String* $tmp3906 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3906));
*(&local9) = $tmp3905;
// line 1052
frost$core$String* $tmp3907 = *(&local9);
frost$core$String* $tmp3908 = org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(param0, $tmp3907);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3908));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3908));
frost$core$String* $tmp3909 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3909));
*(&local9) = ((frost$core$String*) NULL);
return $tmp3908;
block25:;
// line 1055
frost$core$Int64 $tmp3910 = (frost$core$Int64) {1055};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3911, $tmp3910);
abort(); // unreachable
block1:;
goto block26;
block26:;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$getChoiceFieldOffset$org$frostlang$frostc$ChoiceCase$frost$core$Int64$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ChoiceCase* param1, frost$core$Int64 param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 1061
frost$core$Int64 $tmp3912 = (frost$core$Int64) {0};
*(&local0) = $tmp3912;
// line 1062
frost$core$Int64 $tmp3913 = (frost$core$Int64) {0};
frost$core$Bit $tmp3914 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp3915 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp3913, param2, $tmp3914);
frost$core$Int64 $tmp3916 = $tmp3915.min;
*(&local1) = $tmp3916;
frost$core$Int64 $tmp3917 = $tmp3915.max;
frost$core$Bit $tmp3918 = $tmp3915.inclusive;
bool $tmp3919 = $tmp3918.value;
frost$core$Int64 $tmp3920 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp3921 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3920);
if ($tmp3919) goto block4; else goto block5;
block4:;
int64_t $tmp3922 = $tmp3916.value;
int64_t $tmp3923 = $tmp3917.value;
bool $tmp3924 = $tmp3922 <= $tmp3923;
frost$core$Bit $tmp3925 = (frost$core$Bit) {$tmp3924};
bool $tmp3926 = $tmp3925.value;
if ($tmp3926) goto block1; else goto block2;
block5:;
int64_t $tmp3927 = $tmp3916.value;
int64_t $tmp3928 = $tmp3917.value;
bool $tmp3929 = $tmp3927 < $tmp3928;
frost$core$Bit $tmp3930 = (frost$core$Bit) {$tmp3929};
bool $tmp3931 = $tmp3930.value;
if ($tmp3931) goto block1; else goto block2;
block1:;
// line 1064
frost$core$Int64 $tmp3932 = *(&local0);
frost$collections$Array** $tmp3933 = &param1->fields;
frost$collections$Array* $tmp3934 = *$tmp3933;
frost$core$Int64 $tmp3935 = *(&local1);
frost$core$Object* $tmp3936 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3934, $tmp3935);
frost$core$Int64 $tmp3937 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, ((org$frostlang$frostc$Type*) $tmp3936));
int64_t $tmp3938 = $tmp3932.value;
int64_t $tmp3939 = $tmp3937.value;
int64_t $tmp3940 = $tmp3938 + $tmp3939;
frost$core$Int64 $tmp3941 = (frost$core$Int64) {$tmp3940};
*(&local0) = $tmp3941;
frost$core$Frost$unref$frost$core$Object$Q($tmp3936);
goto block3;
block3:;
frost$core$Int64 $tmp3942 = *(&local1);
int64_t $tmp3943 = $tmp3917.value;
int64_t $tmp3944 = $tmp3942.value;
int64_t $tmp3945 = $tmp3943 - $tmp3944;
frost$core$Int64 $tmp3946 = (frost$core$Int64) {$tmp3945};
frost$core$UInt64 $tmp3947 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3946);
if ($tmp3919) goto block7; else goto block8;
block7:;
uint64_t $tmp3948 = $tmp3947.value;
uint64_t $tmp3949 = $tmp3921.value;
bool $tmp3950 = $tmp3948 >= $tmp3949;
frost$core$Bit $tmp3951 = (frost$core$Bit) {$tmp3950};
bool $tmp3952 = $tmp3951.value;
if ($tmp3952) goto block6; else goto block2;
block8:;
uint64_t $tmp3953 = $tmp3947.value;
uint64_t $tmp3954 = $tmp3921.value;
bool $tmp3955 = $tmp3953 > $tmp3954;
frost$core$Bit $tmp3956 = (frost$core$Bit) {$tmp3955};
bool $tmp3957 = $tmp3956.value;
if ($tmp3957) goto block6; else goto block2;
block6:;
int64_t $tmp3958 = $tmp3942.value;
int64_t $tmp3959 = $tmp3920.value;
int64_t $tmp3960 = $tmp3958 + $tmp3959;
frost$core$Int64 $tmp3961 = (frost$core$Int64) {$tmp3960};
*(&local1) = $tmp3961;
goto block1;
block2:;
// line 1066
frost$core$Int64 $tmp3962 = *(&local0);
return $tmp3962;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
// line 1070
frost$core$Weak** $tmp3963 = &param1->owner;
frost$core$Weak* $tmp3964 = *$tmp3963;
frost$core$Object* $tmp3965 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3964);
org$frostlang$frostc$Type** $tmp3966 = &((org$frostlang$frostc$ClassDecl*) $tmp3965)->type;
org$frostlang$frostc$Type* $tmp3967 = *$tmp3966;
frost$core$String* $tmp3968 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp3967);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3968));
frost$core$String* $tmp3969 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3969));
*(&local0) = $tmp3968;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3968));
frost$core$Frost$unref$frost$core$Object$Q($tmp3965);
// line 1071
org$frostlang$frostc$MethodDecl$Kind* $tmp3970 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3971 = *$tmp3970;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3972;
$tmp3972 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3972->value = $tmp3971;
frost$core$Int64 $tmp3973 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp3974 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp3973);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3975;
$tmp3975 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3975->value = $tmp3974;
ITable* $tmp3976 = ((frost$core$Equatable*) $tmp3972)->$class->itable;
while ($tmp3976->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3976 = $tmp3976->next;
}
$fn3978 $tmp3977 = $tmp3976->methods[0];
frost$core$Bit $tmp3979 = $tmp3977(((frost$core$Equatable*) $tmp3972), ((frost$core$Equatable*) $tmp3975));
bool $tmp3980 = $tmp3979.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3975)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3972)));
if ($tmp3980) goto block3; else goto block2;
block3:;
frost$core$String* $tmp3981 = *(&local0);
frost$core$Bit $tmp3982 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp3981, &$s3983);
frost$core$Bit $tmp3984 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3982);
bool $tmp3985 = $tmp3984.value;
if ($tmp3985) goto block1; else goto block2;
block1:;
// line 1072
frost$core$String* $tmp3986 = *(&local0);
frost$core$String* $tmp3987 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3986, &$s3988);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3987));
frost$core$String* $tmp3989 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3989));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3987;
block2:;
// line 1074
frost$core$String* $tmp3990 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3990));
frost$core$String* $tmp3991 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3991));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3990;

}
void org$frostlang$frostc$CCodeGenerator$writeIsNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1078
frost$core$String* $tmp3992 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3992));
frost$core$String* $tmp3993 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3993));
*(&local0) = $tmp3992;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3992));
// line 1079
frost$core$Weak** $tmp3994 = &param0->compiler;
frost$core$Weak* $tmp3995 = *$tmp3994;
frost$core$Object* $tmp3996 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3995);
$fn3998 $tmp3997 = ($fn3998) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3999 = $tmp3997(param2);
org$frostlang$frostc$ClassDecl* $tmp4000 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3996), $tmp3999);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4000));
org$frostlang$frostc$ClassDecl* $tmp4001 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4001));
*(&local1) = $tmp4000;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4000));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3999));
frost$core$Frost$unref$frost$core$Object$Q($tmp3996);
// line 1080
org$frostlang$frostc$ClassDecl* $tmp4002 = *(&local1);
frost$core$Bit $tmp4003 = frost$core$Bit$init$builtin_bit($tmp4002 != NULL);
bool $tmp4004 = $tmp4003.value;
if ($tmp4004) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp4005 = (frost$core$Int64) {1080};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4006, $tmp4005);
abort(); // unreachable
block1:;
// line 1081
*(&local2) = ((frost$core$String*) NULL);
// line 1082
frost$core$Weak** $tmp4007 = &param0->compiler;
frost$core$Weak* $tmp4008 = *$tmp4007;
frost$core$Object* $tmp4009 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4008);
org$frostlang$frostc$ClassDecl* $tmp4010 = *(&local1);
frost$core$Bit $tmp4011 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4009), $tmp4010);
bool $tmp4012 = $tmp4011.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp4009);
if ($tmp4012) goto block3; else goto block5;
block3:;
// line 1083
$fn4014 $tmp4013 = ($fn4014) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4015 = $tmp4013(param2);
org$frostlang$frostc$Type$Kind* $tmp4016 = &$tmp4015->typeKind;
org$frostlang$frostc$Type$Kind $tmp4017 = *$tmp4016;
org$frostlang$frostc$Type$Kind$wrapper* $tmp4018;
$tmp4018 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4018->value = $tmp4017;
frost$core$Int64 $tmp4019 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp4020 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp4019);
org$frostlang$frostc$Type$Kind$wrapper* $tmp4021;
$tmp4021 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4021->value = $tmp4020;
ITable* $tmp4022 = ((frost$core$Equatable*) $tmp4018)->$class->itable;
while ($tmp4022->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4022 = $tmp4022->next;
}
$fn4024 $tmp4023 = $tmp4022->methods[1];
frost$core$Bit $tmp4025 = $tmp4023(((frost$core$Equatable*) $tmp4018), ((frost$core$Equatable*) $tmp4021));
bool $tmp4026 = $tmp4025.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4021)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4018)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4015));
if ($tmp4026) goto block6; else goto block8;
block6:;
// line 1084
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4027));
frost$core$String* $tmp4028 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4028));
*(&local2) = &$s4029;
goto block7;
block8:;
// line 1
// line 1087
frost$core$String* $tmp4030 = *(&local0);
frost$core$String* $tmp4031 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4032, $tmp4030);
frost$core$String* $tmp4033 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4031, &$s4034);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4033));
frost$core$String* $tmp4035 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4035));
*(&local2) = $tmp4033;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4033));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4031));
goto block7;
block7:;
goto block4;
block5:;
// line 1
// line 1091
frost$core$String* $tmp4036 = *(&local0);
frost$core$String* $tmp4037 = frost$core$String$get_asString$R$frost$core$String($tmp4036);
frost$core$String* $tmp4038 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4037, &$s4039);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4038));
frost$core$String* $tmp4040 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4040));
*(&local2) = $tmp4038;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4038));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4037));
goto block4;
block4:;
// line 1093
frost$collections$HashMap** $tmp4041 = &param0->refs;
frost$collections$HashMap* $tmp4042 = *$tmp4041;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4043;
$tmp4043 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4043->value = param1;
frost$core$String* $tmp4044 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4042, ((frost$collections$Key*) $tmp4043), ((frost$core$Object*) $tmp4044));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4043)));
frost$core$String* $tmp4045 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4045));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp4046 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4046));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp4047 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4047));
*(&local0) = ((frost$core$String*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeIsNonNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1097
frost$core$String* $tmp4048 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4048));
frost$core$String* $tmp4049 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4049));
*(&local0) = $tmp4048;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4048));
// line 1098
frost$core$Weak** $tmp4050 = &param0->compiler;
frost$core$Weak* $tmp4051 = *$tmp4050;
frost$core$Object* $tmp4052 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4051);
$fn4054 $tmp4053 = ($fn4054) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4055 = $tmp4053(param2);
org$frostlang$frostc$ClassDecl* $tmp4056 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp4052), $tmp4055);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4056));
org$frostlang$frostc$ClassDecl* $tmp4057 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4057));
*(&local1) = $tmp4056;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4056));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4055));
frost$core$Frost$unref$frost$core$Object$Q($tmp4052);
// line 1099
org$frostlang$frostc$ClassDecl* $tmp4058 = *(&local1);
frost$core$Bit $tmp4059 = frost$core$Bit$init$builtin_bit($tmp4058 != NULL);
bool $tmp4060 = $tmp4059.value;
if ($tmp4060) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp4061 = (frost$core$Int64) {1099};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4062, $tmp4061);
abort(); // unreachable
block1:;
// line 1100
*(&local2) = ((frost$core$String*) NULL);
// line 1101
frost$core$Weak** $tmp4063 = &param0->compiler;
frost$core$Weak* $tmp4064 = *$tmp4063;
frost$core$Object* $tmp4065 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4064);
org$frostlang$frostc$ClassDecl* $tmp4066 = *(&local1);
frost$core$Bit $tmp4067 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4065), $tmp4066);
bool $tmp4068 = $tmp4067.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp4065);
if ($tmp4068) goto block3; else goto block5;
block3:;
// line 1102
$fn4070 $tmp4069 = ($fn4070) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4071 = $tmp4069(param2);
org$frostlang$frostc$Type$Kind* $tmp4072 = &$tmp4071->typeKind;
org$frostlang$frostc$Type$Kind $tmp4073 = *$tmp4072;
org$frostlang$frostc$Type$Kind$wrapper* $tmp4074;
$tmp4074 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4074->value = $tmp4073;
frost$core$Int64 $tmp4075 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp4076 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp4075);
org$frostlang$frostc$Type$Kind$wrapper* $tmp4077;
$tmp4077 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4077->value = $tmp4076;
ITable* $tmp4078 = ((frost$core$Equatable*) $tmp4074)->$class->itable;
while ($tmp4078->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4078 = $tmp4078->next;
}
$fn4080 $tmp4079 = $tmp4078->methods[1];
frost$core$Bit $tmp4081 = $tmp4079(((frost$core$Equatable*) $tmp4074), ((frost$core$Equatable*) $tmp4077));
bool $tmp4082 = $tmp4081.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4077)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4074)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4071));
if ($tmp4082) goto block6; else goto block8;
block6:;
// line 1103
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4083));
frost$core$String* $tmp4084 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4084));
*(&local2) = &$s4085;
goto block7;
block8:;
// line 1
// line 1106
frost$core$String* $tmp4086 = *(&local0);
frost$core$String* $tmp4087 = frost$core$String$get_asString$R$frost$core$String($tmp4086);
frost$core$String* $tmp4088 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4087, &$s4089);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4088));
frost$core$String* $tmp4090 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4090));
*(&local2) = $tmp4088;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4088));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4087));
goto block7;
block7:;
goto block4;
block5:;
// line 1
// line 1110
frost$core$String* $tmp4091 = *(&local0);
frost$core$String* $tmp4092 = frost$core$String$get_asString$R$frost$core$String($tmp4091);
frost$core$String* $tmp4093 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4092, &$s4094);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4093));
frost$core$String* $tmp4095 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4095));
*(&local2) = $tmp4093;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4093));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4092));
goto block4;
block4:;
// line 1112
frost$collections$HashMap** $tmp4096 = &param0->refs;
frost$collections$HashMap* $tmp4097 = *$tmp4096;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4098;
$tmp4098 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4098->value = param1;
frost$core$String* $tmp4099 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4097, ((frost$collections$Key*) $tmp4098), ((frost$core$Object*) $tmp4099));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4098)));
frost$core$String* $tmp4100 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4100));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp4101 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4101));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp4102 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4102));
*(&local0) = ((frost$core$String*) NULL);
return;

}
frost$core$Bit org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1) {

// line 1116
frost$core$Int64* $tmp4103 = &param1->$rawValue;
frost$core$Int64 $tmp4104 = *$tmp4103;
frost$core$Int64 $tmp4105 = (frost$core$Int64) {4};
frost$core$Bit $tmp4106 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4104, $tmp4105);
bool $tmp4107 = $tmp4106.value;
if ($tmp4107) goto block2; else goto block1;
block2:;
// line 1118
frost$core$Bit $tmp4108 = frost$core$Bit$init$builtin_bit(true);
return $tmp4108;
block1:;
// line 1121
frost$core$Bit $tmp4109 = frost$core$Bit$init$builtin_bit(false);
return $tmp4109;

}
void org$frostlang$frostc$CCodeGenerator$writeBinary$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$expression$Binary$Operator param3, org$frostlang$frostc$IR$Value* param4, org$frostlang$frostc$Type* param5) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$Error* local4 = NULL;
// line 1126
frost$core$String* $tmp4110 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4110));
frost$core$String* $tmp4111 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4111));
*(&local0) = $tmp4110;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4110));
// line 1127
frost$core$String* $tmp4112 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param4);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4112));
frost$core$String* $tmp4113 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4113));
*(&local1) = $tmp4112;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4112));
// line 1128
$fn4115 $tmp4114 = ($fn4115) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4116 = $tmp4114(param2);
frost$core$Bit $tmp4117 = org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit($tmp4116);
bool $tmp4118 = $tmp4117.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4116));
if ($tmp4118) goto block1; else goto block2;
block1:;
// line 1129
frost$core$Int64 $tmp4119 = param3.$rawValue;
frost$core$Int64 $tmp4120 = (frost$core$Int64) {21};
frost$core$Bit $tmp4121 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4119, $tmp4120);
bool $tmp4122 = $tmp4121.value;
if ($tmp4122) goto block4; else goto block5;
block4:;
// line 1131
frost$core$Bit $tmp4123 = org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, param2);
bool $tmp4124 = $tmp4123.value;
if ($tmp4124) goto block6; else goto block7;
block6:;
// line 1132
org$frostlang$frostc$CCodeGenerator$writeIsNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, param4);
// line 1133
frost$core$String* $tmp4125 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4125));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp4126 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4126));
*(&local0) = ((frost$core$String*) NULL);
return;
block7:;
// line 1135
frost$core$Bit $tmp4127 = org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, param4);
bool $tmp4128 = $tmp4127.value;
if ($tmp4128) goto block8; else goto block9;
block8:;
// line 1136
org$frostlang$frostc$CCodeGenerator$writeIsNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, param2);
// line 1137
frost$core$String* $tmp4129 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4129));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp4130 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4130));
*(&local0) = ((frost$core$String*) NULL);
return;
block9:;
goto block3;
block5:;
frost$core$Int64 $tmp4131 = (frost$core$Int64) {22};
frost$core$Bit $tmp4132 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4119, $tmp4131);
bool $tmp4133 = $tmp4132.value;
if ($tmp4133) goto block10; else goto block3;
block10:;
// line 1141
frost$core$Bit $tmp4134 = org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, param2);
bool $tmp4135 = $tmp4134.value;
if ($tmp4135) goto block11; else goto block12;
block11:;
// line 1142
org$frostlang$frostc$CCodeGenerator$writeIsNonNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, param4);
// line 1143
frost$core$String* $tmp4136 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4136));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp4137 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4137));
*(&local0) = ((frost$core$String*) NULL);
return;
block12:;
// line 1145
frost$core$Bit $tmp4138 = org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, param4);
bool $tmp4139 = $tmp4138.value;
if ($tmp4139) goto block13; else goto block14;
block13:;
// line 1146
org$frostlang$frostc$CCodeGenerator$writeIsNonNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, param2);
// line 1147
frost$core$String* $tmp4140 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4140));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp4141 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4141));
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
frost$core$Int64 $tmp4142 = param3.$rawValue;
frost$core$Int64 $tmp4143 = (frost$core$Int64) {0};
frost$core$Bit $tmp4144 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4142, $tmp4143);
bool $tmp4145 = $tmp4144.value;
if ($tmp4145) goto block16; else goto block17;
block16:;
// line 1155
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4146));
frost$core$String* $tmp4147 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4147));
*(&local2) = &$s4148;
goto block15;
block17:;
frost$core$Int64 $tmp4149 = (frost$core$Int64) {1};
frost$core$Bit $tmp4150 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4142, $tmp4149);
bool $tmp4151 = $tmp4150.value;
if ($tmp4151) goto block18; else goto block19;
block18:;
// line 1158
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4152));
frost$core$String* $tmp4153 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4153));
*(&local2) = &$s4154;
goto block15;
block19:;
frost$core$Int64 $tmp4155 = (frost$core$Int64) {2};
frost$core$Bit $tmp4156 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4142, $tmp4155);
bool $tmp4157 = $tmp4156.value;
if ($tmp4157) goto block20; else goto block21;
block20:;
// line 1161
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4158));
frost$core$String* $tmp4159 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4159));
*(&local2) = &$s4160;
goto block15;
block21:;
frost$core$Int64 $tmp4161 = (frost$core$Int64) {3};
frost$core$Bit $tmp4162 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4142, $tmp4161);
bool $tmp4163 = $tmp4162.value;
if ($tmp4163) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp4164 = (frost$core$Int64) {4};
frost$core$Bit $tmp4165 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4142, $tmp4164);
bool $tmp4166 = $tmp4165.value;
if ($tmp4166) goto block22; else goto block24;
block22:;
// line 1164
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4167));
frost$core$String* $tmp4168 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4168));
*(&local2) = &$s4169;
goto block15;
block24:;
frost$core$Int64 $tmp4170 = (frost$core$Int64) {5};
frost$core$Bit $tmp4171 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4142, $tmp4170);
bool $tmp4172 = $tmp4171.value;
if ($tmp4172) goto block25; else goto block26;
block25:;
// line 1167
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4173));
frost$core$String* $tmp4174 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4174));
*(&local2) = &$s4175;
goto block15;
block26:;
frost$core$Int64 $tmp4176 = (frost$core$Int64) {18};
frost$core$Bit $tmp4177 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4142, $tmp4176);
bool $tmp4178 = $tmp4177.value;
if ($tmp4178) goto block27; else goto block28;
block27:;
// line 1170
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4179));
frost$core$String* $tmp4180 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4180));
*(&local2) = &$s4181;
goto block15;
block28:;
frost$core$Int64 $tmp4182 = (frost$core$Int64) {19};
frost$core$Bit $tmp4183 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4142, $tmp4182);
bool $tmp4184 = $tmp4183.value;
if ($tmp4184) goto block29; else goto block30;
block29:;
// line 1173
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4185));
frost$core$String* $tmp4186 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4186));
*(&local2) = &$s4187;
goto block15;
block30:;
frost$core$Int64 $tmp4188 = (frost$core$Int64) {14};
frost$core$Bit $tmp4189 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4142, $tmp4188);
bool $tmp4190 = $tmp4189.value;
if ($tmp4190) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp4191 = (frost$core$Int64) {15};
frost$core$Bit $tmp4192 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4142, $tmp4191);
bool $tmp4193 = $tmp4192.value;
if ($tmp4193) goto block31; else goto block33;
block31:;
// line 1176
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4194));
frost$core$String* $tmp4195 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4195));
*(&local2) = &$s4196;
goto block15;
block33:;
frost$core$Int64 $tmp4197 = (frost$core$Int64) {12};
frost$core$Bit $tmp4198 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4142, $tmp4197);
bool $tmp4199 = $tmp4198.value;
if ($tmp4199) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp4200 = (frost$core$Int64) {13};
frost$core$Bit $tmp4201 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4142, $tmp4200);
bool $tmp4202 = $tmp4201.value;
if ($tmp4202) goto block34; else goto block36;
block34:;
// line 1179
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4203));
frost$core$String* $tmp4204 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4204));
*(&local2) = &$s4205;
goto block15;
block36:;
frost$core$Int64 $tmp4206 = (frost$core$Int64) {16};
frost$core$Bit $tmp4207 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4142, $tmp4206);
bool $tmp4208 = $tmp4207.value;
if ($tmp4208) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp4209 = (frost$core$Int64) {17};
frost$core$Bit $tmp4210 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4142, $tmp4209);
bool $tmp4211 = $tmp4210.value;
if ($tmp4211) goto block37; else goto block39;
block37:;
// line 1182
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4212));
frost$core$String* $tmp4213 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4213));
*(&local2) = &$s4214;
goto block15;
block39:;
frost$core$Int64 $tmp4215 = (frost$core$Int64) {6};
frost$core$Bit $tmp4216 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4142, $tmp4215);
bool $tmp4217 = $tmp4216.value;
if ($tmp4217) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp4218 = (frost$core$Int64) {21};
frost$core$Bit $tmp4219 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4142, $tmp4218);
bool $tmp4220 = $tmp4219.value;
if ($tmp4220) goto block40; else goto block42;
block40:;
// line 1185
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4221));
frost$core$String* $tmp4222 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4222));
*(&local2) = &$s4223;
goto block15;
block42:;
frost$core$Int64 $tmp4224 = (frost$core$Int64) {7};
frost$core$Bit $tmp4225 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4142, $tmp4224);
bool $tmp4226 = $tmp4225.value;
if ($tmp4226) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp4227 = (frost$core$Int64) {22};
frost$core$Bit $tmp4228 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4142, $tmp4227);
bool $tmp4229 = $tmp4228.value;
if ($tmp4229) goto block43; else goto block45;
block43:;
// line 1188
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4230));
frost$core$String* $tmp4231 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4231));
*(&local2) = &$s4232;
goto block15;
block45:;
frost$core$Int64 $tmp4233 = (frost$core$Int64) {8};
frost$core$Bit $tmp4234 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4142, $tmp4233);
bool $tmp4235 = $tmp4234.value;
if ($tmp4235) goto block46; else goto block47;
block46:;
// line 1191
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4236));
frost$core$String* $tmp4237 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4237));
*(&local2) = &$s4238;
goto block15;
block47:;
frost$core$Int64 $tmp4239 = (frost$core$Int64) {9};
frost$core$Bit $tmp4240 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4142, $tmp4239);
bool $tmp4241 = $tmp4240.value;
if ($tmp4241) goto block48; else goto block49;
block48:;
// line 1194
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4242));
frost$core$String* $tmp4243 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4243));
*(&local2) = &$s4244;
goto block15;
block49:;
frost$core$Int64 $tmp4245 = (frost$core$Int64) {10};
frost$core$Bit $tmp4246 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4142, $tmp4245);
bool $tmp4247 = $tmp4246.value;
if ($tmp4247) goto block50; else goto block51;
block50:;
// line 1197
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4248));
frost$core$String* $tmp4249 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4249));
*(&local2) = &$s4250;
goto block15;
block51:;
frost$core$Int64 $tmp4251 = (frost$core$Int64) {11};
frost$core$Bit $tmp4252 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4142, $tmp4251);
bool $tmp4253 = $tmp4252.value;
if ($tmp4253) goto block52; else goto block53;
block52:;
// line 1200
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4254));
frost$core$String* $tmp4255 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4255));
*(&local2) = &$s4256;
goto block15;
block53:;
// line 1203
frost$core$Int64 $tmp4257 = (frost$core$Int64) {1203};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4258, $tmp4257);
abort(); // unreachable
block15:;
// line 1206
frost$core$String* $tmp4259 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4259));
frost$core$String* $tmp4260 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4260));
*(&local3) = $tmp4259;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4259));
// line 1207
*(&local4) = ((frost$core$Error*) NULL);
// line 1208
frost$io$IndentedOutputStream** $tmp4261 = &param0->out;
frost$io$IndentedOutputStream* $tmp4262 = *$tmp4261;
frost$core$String* $tmp4263 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param5);
frost$core$String* $tmp4264 = frost$core$String$get_asString$R$frost$core$String($tmp4263);
frost$core$String* $tmp4265 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4264, &$s4266);
frost$core$String* $tmp4267 = *(&local3);
frost$core$String* $tmp4268 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4265, $tmp4267);
frost$core$String* $tmp4269 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4268, &$s4270);
frost$core$String* $tmp4271 = *(&local0);
frost$core$String* $tmp4272 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4269, $tmp4271);
frost$core$String* $tmp4273 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4272, &$s4274);
frost$core$String* $tmp4275 = *(&local2);
frost$core$String* $tmp4276 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4273, $tmp4275);
frost$core$String* $tmp4277 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4276, &$s4278);
frost$core$String* $tmp4279 = *(&local1);
frost$core$String* $tmp4280 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4277, $tmp4279);
frost$core$String* $tmp4281 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4280, &$s4282);
$fn4284 $tmp4283 = ($fn4284) ((frost$io$OutputStream*) $tmp4262)->$class->vtable[19];
frost$core$Error* $tmp4285 = $tmp4283(((frost$io$OutputStream*) $tmp4262), $tmp4281);
if ($tmp4285 == NULL) goto block56; else goto block57;
block57:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4285));
*(&local4) = $tmp4285;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4263));
goto block54;
block56:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4263));
goto block55;
block54:;
// line 1211
frost$core$Int64 $tmp4286 = (frost$core$Int64) {1211};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4287, $tmp4286);
abort(); // unreachable
block55:;
frost$core$Error* $tmp4288 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4288));
*(&local4) = ((frost$core$Error*) NULL);
// line 1213
frost$collections$HashMap** $tmp4289 = &param0->refs;
frost$collections$HashMap* $tmp4290 = *$tmp4289;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4291;
$tmp4291 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4291->value = param1;
frost$core$String* $tmp4292 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4290, ((frost$collections$Key*) $tmp4291), ((frost$core$Object*) $tmp4292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4291)));
frost$core$String* $tmp4293 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4293));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4294 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4294));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4295 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4295));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp4296 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4296));
*(&local0) = ((frost$core$String*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeBranch$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Block$ID param1) {

frost$core$Error* local0 = NULL;
// line 1217
*(&local0) = ((frost$core$Error*) NULL);
// line 1218
frost$io$IndentedOutputStream** $tmp4297 = &param0->out;
frost$io$IndentedOutputStream* $tmp4298 = *$tmp4297;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp4299;
$tmp4299 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp4299->value = param1;
frost$core$String* $tmp4300 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s4301, ((frost$core$Object*) $tmp4299));
frost$core$String* $tmp4302 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4300, &$s4303);
$fn4305 $tmp4304 = ($fn4305) ((frost$io$OutputStream*) $tmp4298)->$class->vtable[19];
frost$core$Error* $tmp4306 = $tmp4304(((frost$io$OutputStream*) $tmp4298), $tmp4302);
if ($tmp4306 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4306));
*(&local0) = $tmp4306;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4299));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4299));
goto block2;
block1:;
// line 1221
frost$core$Int64 $tmp4307 = (frost$core$Int64) {1221};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4308, $tmp4307);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4309 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4309));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeCast$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$Type* param3) {

// line 1226
frost$collections$HashMap** $tmp4310 = &param0->refs;
frost$collections$HashMap* $tmp4311 = *$tmp4310;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4312;
$tmp4312 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4312->value = param1;
frost$core$String* $tmp4313 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
$fn4315 $tmp4314 = ($fn4315) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4316 = $tmp4314(param2);
frost$core$String* $tmp4317 = org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4313, $tmp4316, param3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4311, ((frost$collections$Key*) $tmp4312), ((frost$core$Object*) $tmp4317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4312)));
return;

}
void org$frostlang$frostc$CCodeGenerator$writeConditionalBranch$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1, org$frostlang$frostc$IR$Block$ID param2, org$frostlang$frostc$IR$Block$ID param3) {

frost$core$Error* local0 = NULL;
// line 1230
*(&local0) = ((frost$core$Error*) NULL);
// line 1231
frost$io$IndentedOutputStream** $tmp4318 = &param0->out;
frost$io$IndentedOutputStream* $tmp4319 = *$tmp4318;
frost$core$String* $tmp4320 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
frost$core$String* $tmp4321 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4322, $tmp4320);
frost$core$String* $tmp4323 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4321, &$s4324);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp4325;
$tmp4325 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp4325->value = param2;
frost$core$String* $tmp4326 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp4323, ((frost$core$Object*) $tmp4325));
frost$core$String* $tmp4327 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4326, &$s4328);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp4329;
$tmp4329 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp4329->value = param3;
frost$core$String* $tmp4330 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp4327, ((frost$core$Object*) $tmp4329));
frost$core$String* $tmp4331 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4330, &$s4332);
$fn4334 $tmp4333 = ($fn4334) ((frost$io$OutputStream*) $tmp4319)->$class->vtable[19];
frost$core$Error* $tmp4335 = $tmp4333(((frost$io$OutputStream*) $tmp4319), $tmp4331);
if ($tmp4335 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4335));
*(&local0) = $tmp4335;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4330));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4325));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4320));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4330));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4325));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4320));
goto block2;
block1:;
// line 1234
frost$core$Int64 $tmp4336 = (frost$core$Int64) {1234};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4337, $tmp4336);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4338 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4338));
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
frost$core$Weak** $tmp4339 = &param0->compiler;
frost$core$Weak* $tmp4340 = *$tmp4339;
frost$core$Object* $tmp4341 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4340);
frost$core$Bit $tmp4342 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4341), param2);
frost$core$Bit $tmp4343 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp4342);
bool $tmp4344 = $tmp4343.value;
if ($tmp4344) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp4345 = (frost$core$Int64) {1240};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4346, $tmp4345);
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q($tmp4341);
// line 1241
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4347 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, param2);
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4347));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4348 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4348));
*(&local1) = $tmp4347;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4347));
// line 1242
*(&local2) = ((frost$core$String*) NULL);
// line 1243
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4349 = *(&local1);
frost$core$String** $tmp4350 = &$tmp4349->type;
frost$core$String* $tmp4351 = *$tmp4350;
ITable* $tmp4353 = ((frost$core$Equatable*) $tmp4351)->$class->itable;
while ($tmp4353->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4353 = $tmp4353->next;
}
$fn4355 $tmp4354 = $tmp4353->methods[1];
frost$core$Bit $tmp4356 = $tmp4354(((frost$core$Equatable*) $tmp4351), ((frost$core$Equatable*) &$s4352));
bool $tmp4357 = $tmp4356.value;
if ($tmp4357) goto block5; else goto block7;
block5:;
// line 1244
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4358 = *(&local1);
frost$core$String** $tmp4359 = &$tmp4358->name;
frost$core$String* $tmp4360 = *$tmp4359;
frost$core$String* $tmp4361 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4362, $tmp4360);
frost$core$String* $tmp4363 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4361, &$s4364);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4363));
frost$core$String* $tmp4365 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4365));
*(&local2) = $tmp4363;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4361));
goto block6;
block7:;
// line 1
// line 1247
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4366 = *(&local1);
frost$core$String** $tmp4367 = &$tmp4366->name;
frost$core$String* $tmp4368 = *$tmp4367;
frost$core$String* $tmp4369 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4370, $tmp4368);
frost$core$String* $tmp4371 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4369, &$s4372);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4371));
frost$core$String* $tmp4373 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4373));
*(&local2) = $tmp4371;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4369));
goto block6;
block6:;
// line 1249
frost$core$String* $tmp4374 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4374));
frost$core$String* $tmp4375 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4375));
*(&local3) = $tmp4374;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4374));
// line 1250
org$frostlang$frostc$Type** $tmp4376 = &param2->type;
org$frostlang$frostc$Type* $tmp4377 = *$tmp4376;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4377));
org$frostlang$frostc$Type* $tmp4378 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4378));
*(&local4) = $tmp4377;
// line 1251
frost$io$IndentedOutputStream** $tmp4379 = &param0->out;
frost$io$IndentedOutputStream* $tmp4380 = *$tmp4379;
org$frostlang$frostc$Type* $tmp4381 = *(&local4);
frost$core$String* $tmp4382 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4381);
frost$core$String* $tmp4383 = frost$core$String$get_asString$R$frost$core$String($tmp4382);
frost$core$String* $tmp4384 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4383, &$s4385);
frost$core$String* $tmp4386 = *(&local3);
frost$core$String* $tmp4387 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4384, $tmp4386);
frost$core$String* $tmp4388 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4387, &$s4389);
org$frostlang$frostc$Type* $tmp4390 = *(&local4);
frost$core$String* $tmp4391 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4390);
frost$core$String* $tmp4392 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4388, $tmp4391);
frost$core$String* $tmp4393 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4392, &$s4394);
org$frostlang$frostc$Type* $tmp4395 = *(&local4);
frost$core$Int64 $tmp4396 = org$frostlang$frostc$CCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp4395);
frost$core$String* $tmp4397 = frost$core$Int64$get_asString$R$frost$core$String($tmp4396);
frost$core$String* $tmp4398 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4397, &$s4399);
frost$core$String* $tmp4400 = *(&local2);
frost$core$String* $tmp4401 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4398, $tmp4400);
frost$core$String* $tmp4402 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4401, &$s4403);
frost$core$String* $tmp4404 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4393, $tmp4402);
$fn4406 $tmp4405 = ($fn4406) ((frost$io$OutputStream*) $tmp4380)->$class->vtable[19];
frost$core$Error* $tmp4407 = $tmp4405(((frost$io$OutputStream*) $tmp4380), $tmp4404);
if ($tmp4407 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4407));
*(&local0) = $tmp4407;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4393));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4382));
org$frostlang$frostc$Type* $tmp4408 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4408));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4409 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4409));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4410 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4410));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4411 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4411));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4393));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4382));
// line 1253
frost$collections$HashMap** $tmp4412 = &param0->refs;
frost$collections$HashMap* $tmp4413 = *$tmp4412;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4414;
$tmp4414 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4414->value = param1;
frost$core$String* $tmp4415 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4413, ((frost$collections$Key*) $tmp4414), ((frost$core$Object*) $tmp4415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4414)));
org$frostlang$frostc$Type* $tmp4416 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4416));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4417 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4417));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4418 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4418));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4419 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4419));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block2;
block1:;
// line 1256
frost$core$Int64 $tmp4420 = (frost$core$Int64) {1256};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4421, $tmp4420);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4422 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4422));
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
frost$core$Weak** $tmp4423 = &param0->compiler;
frost$core$Weak* $tmp4424 = *$tmp4423;
frost$core$Object* $tmp4425 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4424);
frost$core$Bit $tmp4426 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4425), param2);
bool $tmp4427 = $tmp4426.value;
if ($tmp4427) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp4428 = (frost$core$Int64) {1262};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4429, $tmp4428);
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q($tmp4425);
// line 1263
frost$core$String* $tmp4430 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4430));
frost$core$String* $tmp4431 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4431));
*(&local1) = $tmp4430;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4430));
// line 1264
org$frostlang$frostc$Type** $tmp4432 = &param2->type;
org$frostlang$frostc$Type* $tmp4433 = *$tmp4432;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4433));
org$frostlang$frostc$Type* $tmp4434 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4434));
*(&local2) = $tmp4433;
// line 1265
frost$io$IndentedOutputStream** $tmp4435 = &param0->out;
frost$io$IndentedOutputStream* $tmp4436 = *$tmp4435;
org$frostlang$frostc$Type* $tmp4437 = *(&local2);
frost$core$String* $tmp4438 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4437);
frost$core$String* $tmp4439 = frost$core$String$get_asString$R$frost$core$String($tmp4438);
frost$core$String* $tmp4440 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4439, &$s4441);
frost$core$String* $tmp4442 = *(&local1);
frost$core$String* $tmp4443 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4440, $tmp4442);
frost$core$String* $tmp4444 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4443, &$s4445);
org$frostlang$frostc$Type* $tmp4446 = *(&local2);
frost$core$String* $tmp4447 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4446);
frost$core$String* $tmp4448 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4444, $tmp4447);
frost$core$String* $tmp4449 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4448, &$s4450);
$fn4452 $tmp4451 = ($fn4452) ((frost$io$OutputStream*) $tmp4436)->$class->vtable[17];
frost$core$Error* $tmp4453 = $tmp4451(((frost$io$OutputStream*) $tmp4436), $tmp4449);
if ($tmp4453 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4453));
*(&local0) = $tmp4453;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4443));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4438));
org$frostlang$frostc$Type* $tmp4454 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4454));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4455 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4455));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4443));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4438));
// line 1266
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4456));
frost$core$String* $tmp4457 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4457));
*(&local3) = &$s4458;
// line 1267
ITable* $tmp4459 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp4459->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp4459 = $tmp4459->next;
}
$fn4461 $tmp4460 = $tmp4459->methods[0];
frost$collections$Iterator* $tmp4462 = $tmp4460(((frost$collections$Iterable*) param3));
goto block7;
block7:;
ITable* $tmp4463 = $tmp4462->$class->itable;
while ($tmp4463->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4463 = $tmp4463->next;
}
$fn4465 $tmp4464 = $tmp4463->methods[0];
frost$core$Bit $tmp4466 = $tmp4464($tmp4462);
bool $tmp4467 = $tmp4466.value;
if ($tmp4467) goto block9; else goto block8;
block8:;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
ITable* $tmp4468 = $tmp4462->$class->itable;
while ($tmp4468->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4468 = $tmp4468->next;
}
$fn4470 $tmp4469 = $tmp4468->methods[1];
frost$core$Object* $tmp4471 = $tmp4469($tmp4462);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) $tmp4471)));
org$frostlang$frostc$IR$Value* $tmp4472 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4472));
*(&local4) = ((org$frostlang$frostc$IR$Value*) $tmp4471);
// line 1268
frost$io$IndentedOutputStream** $tmp4473 = &param0->out;
frost$io$IndentedOutputStream* $tmp4474 = *$tmp4473;
frost$core$String* $tmp4475 = *(&local3);
frost$core$String* $tmp4476 = frost$core$String$get_asString$R$frost$core$String($tmp4475);
frost$core$String* $tmp4477 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4476, &$s4478);
org$frostlang$frostc$IR$Value* $tmp4479 = *(&local4);
frost$core$String* $tmp4480 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, $tmp4479);
frost$core$String* $tmp4481 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4477, $tmp4480);
frost$core$String* $tmp4482 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4481, &$s4483);
$fn4485 $tmp4484 = ($fn4485) ((frost$io$OutputStream*) $tmp4474)->$class->vtable[17];
frost$core$Error* $tmp4486 = $tmp4484(((frost$io$OutputStream*) $tmp4474), $tmp4482);
if ($tmp4486 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4486));
*(&local0) = $tmp4486;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4476));
frost$core$Frost$unref$frost$core$Object$Q($tmp4471);
org$frostlang$frostc$IR$Value* $tmp4487 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4487));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4462));
frost$core$String* $tmp4488 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4488));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4489 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4489));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4490 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4490));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4476));
// line 1269
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4491));
frost$core$String* $tmp4492 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4492));
*(&local3) = &$s4493;
frost$core$Frost$unref$frost$core$Object$Q($tmp4471);
org$frostlang$frostc$IR$Value* $tmp4494 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4494));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block7;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4462));
// line 1271
frost$io$IndentedOutputStream** $tmp4495 = &param0->out;
frost$io$IndentedOutputStream* $tmp4496 = *$tmp4495;
$fn4498 $tmp4497 = ($fn4498) ((frost$io$OutputStream*) $tmp4496)->$class->vtable[19];
frost$core$Error* $tmp4499 = $tmp4497(((frost$io$OutputStream*) $tmp4496), &$s4500);
if ($tmp4499 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4499));
*(&local0) = $tmp4499;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4499));
frost$core$String* $tmp4501 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4501));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4502 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4502));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4503 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4503));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4499));
// line 1272
frost$collections$HashMap** $tmp4504 = &param0->refs;
frost$collections$HashMap* $tmp4505 = *$tmp4504;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4506;
$tmp4506 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4506->value = param1;
frost$core$String* $tmp4507 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4505, ((frost$collections$Key*) $tmp4506), ((frost$core$Object*) $tmp4507));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4506)));
frost$core$String* $tmp4508 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4508));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4509 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4509));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4510 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4510));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1275
frost$core$Int64 $tmp4511 = (frost$core$Int64) {1275};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4512, $tmp4511);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4513 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4513));
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
$fn4515 $tmp4514 = ($fn4515) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4516 = $tmp4514(param2);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4516));
org$frostlang$frostc$Type* $tmp4517 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4517));
*(&local1) = $tmp4516;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4516));
// line 1282
org$frostlang$frostc$Type* $tmp4518 = *(&local1);
frost$core$Bit $tmp4519 = org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit($tmp4518);
bool $tmp4520 = $tmp4519.value;
if ($tmp4520) goto block3; else goto block4;
block3:;
// line 1283
org$frostlang$frostc$Type* $tmp4521 = *(&local1);
org$frostlang$frostc$FixedArray** $tmp4522 = &$tmp4521->subtypes;
org$frostlang$frostc$FixedArray* $tmp4523 = *$tmp4522;
frost$core$Int64 $tmp4524 = (frost$core$Int64) {1};
frost$core$Object* $tmp4525 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp4523, $tmp4524);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp4525)));
org$frostlang$frostc$Type* $tmp4526 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4526));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp4525);
frost$core$Frost$unref$frost$core$Object$Q($tmp4525);
goto block4;
block4:;
// line 1285
org$frostlang$frostc$Type* $tmp4527 = *(&local1);
org$frostlang$frostc$Type* $tmp4528 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp4527);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4528));
org$frostlang$frostc$Type* $tmp4529 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4529));
*(&local2) = $tmp4528;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4528));
// line 1286
org$frostlang$frostc$Type* $tmp4530 = *(&local2);
org$frostlang$frostc$Type* $tmp4531 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp4532 = ((frost$core$Equatable*) $tmp4530)->$class->itable;
while ($tmp4532->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4532 = $tmp4532->next;
}
$fn4534 $tmp4533 = $tmp4532->methods[1];
frost$core$Bit $tmp4535 = $tmp4533(((frost$core$Equatable*) $tmp4530), ((frost$core$Equatable*) $tmp4531));
bool $tmp4536 = $tmp4535.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4531));
if ($tmp4536) goto block5; else goto block6;
block5:;
// line 1287
frost$core$String* $tmp4537 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4537));
frost$core$String* $tmp4538 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4538));
*(&local3) = $tmp4537;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4537));
// line 1288
frost$io$IndentedOutputStream** $tmp4539 = &param0->out;
frost$io$IndentedOutputStream* $tmp4540 = *$tmp4539;
org$frostlang$frostc$Type* $tmp4541 = *(&local2);
frost$core$String* $tmp4542 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4541);
frost$core$String* $tmp4543 = frost$core$String$get_asString$R$frost$core$String($tmp4542);
frost$core$String* $tmp4544 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4543, &$s4545);
frost$core$String* $tmp4546 = *(&local3);
frost$core$String* $tmp4547 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4544, $tmp4546);
frost$core$String* $tmp4548 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4547, &$s4549);
$fn4551 $tmp4550 = ($fn4551) ((frost$io$OutputStream*) $tmp4540)->$class->vtable[17];
frost$core$Error* $tmp4552 = $tmp4550(((frost$io$OutputStream*) $tmp4540), $tmp4548);
if ($tmp4552 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4552));
*(&local0) = $tmp4552;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4548));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4547));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4544));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4543));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4542));
frost$core$String* $tmp4553 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4553));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4554 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4554));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4555 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4555));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4548));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4547));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4544));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4543));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4542));
// line 1289
frost$collections$HashMap** $tmp4556 = &param0->refs;
frost$collections$HashMap* $tmp4557 = *$tmp4556;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4558;
$tmp4558 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4558->value = param1;
frost$core$String* $tmp4559 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4557, ((frost$collections$Key*) $tmp4558), ((frost$core$Object*) $tmp4559));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4558)));
frost$core$String* $tmp4560 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4560));
*(&local3) = ((frost$core$String*) NULL);
goto block6;
block6:;
// line 1291
frost$io$IndentedOutputStream** $tmp4561 = &param0->out;
frost$io$IndentedOutputStream* $tmp4562 = *$tmp4561;
frost$core$String* $tmp4563 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4564 = frost$core$String$get_asString$R$frost$core$String($tmp4563);
frost$core$String* $tmp4565 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4564, &$s4566);
$fn4568 $tmp4567 = ($fn4568) ((frost$io$OutputStream*) $tmp4562)->$class->vtable[17];
frost$core$Error* $tmp4569 = $tmp4567(((frost$io$OutputStream*) $tmp4562), $tmp4565);
if ($tmp4569 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4569));
*(&local0) = $tmp4569;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4569));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4565));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4563));
org$frostlang$frostc$Type* $tmp4570 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4570));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4571 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4571));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4569));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4565));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4563));
// line 1292
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4572));
frost$core$String* $tmp4573 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4573));
*(&local4) = &$s4574;
// line 1293
ITable* $tmp4575 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp4575->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp4575 = $tmp4575->next;
}
$fn4577 $tmp4576 = $tmp4575->methods[0];
frost$collections$Iterator* $tmp4578 = $tmp4576(((frost$collections$Iterable*) param3));
goto block11;
block11:;
ITable* $tmp4579 = $tmp4578->$class->itable;
while ($tmp4579->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4579 = $tmp4579->next;
}
$fn4581 $tmp4580 = $tmp4579->methods[0];
frost$core$Bit $tmp4582 = $tmp4580($tmp4578);
bool $tmp4583 = $tmp4582.value;
if ($tmp4583) goto block13; else goto block12;
block12:;
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
ITable* $tmp4584 = $tmp4578->$class->itable;
while ($tmp4584->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4584 = $tmp4584->next;
}
$fn4586 $tmp4585 = $tmp4584->methods[1];
frost$core$Object* $tmp4587 = $tmp4585($tmp4578);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) $tmp4587)));
org$frostlang$frostc$IR$Value* $tmp4588 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4588));
*(&local5) = ((org$frostlang$frostc$IR$Value*) $tmp4587);
// line 1294
frost$io$IndentedOutputStream** $tmp4589 = &param0->out;
frost$io$IndentedOutputStream* $tmp4590 = *$tmp4589;
frost$core$String* $tmp4591 = *(&local4);
$fn4593 $tmp4592 = ($fn4593) ((frost$io$OutputStream*) $tmp4590)->$class->vtable[17];
frost$core$Error* $tmp4594 = $tmp4592(((frost$io$OutputStream*) $tmp4590), $tmp4591);
if ($tmp4594 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4594));
*(&local0) = $tmp4594;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4594));
frost$core$Frost$unref$frost$core$Object$Q($tmp4587);
org$frostlang$frostc$IR$Value* $tmp4595 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4595));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4578));
frost$core$String* $tmp4596 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4596));
*(&local4) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4597 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4597));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4598 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4598));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4594));
// line 1295
frost$io$IndentedOutputStream** $tmp4599 = &param0->out;
frost$io$IndentedOutputStream* $tmp4600 = *$tmp4599;
org$frostlang$frostc$IR$Value* $tmp4601 = *(&local5);
frost$core$String* $tmp4602 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, $tmp4601);
$fn4604 $tmp4603 = ($fn4604) ((frost$io$OutputStream*) $tmp4600)->$class->vtable[17];
frost$core$Error* $tmp4605 = $tmp4603(((frost$io$OutputStream*) $tmp4600), $tmp4602);
if ($tmp4605 == NULL) goto block16; else goto block17;
block17:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4605));
*(&local0) = $tmp4605;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4605));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4602));
frost$core$Frost$unref$frost$core$Object$Q($tmp4587);
org$frostlang$frostc$IR$Value* $tmp4606 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4606));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4578));
frost$core$String* $tmp4607 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4607));
*(&local4) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4608 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4608));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4609 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4609));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4605));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4602));
// line 1296
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4610));
frost$core$String* $tmp4611 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4611));
*(&local4) = &$s4612;
frost$core$Frost$unref$frost$core$Object$Q($tmp4587);
org$frostlang$frostc$IR$Value* $tmp4613 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4613));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block11;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4578));
// line 1298
frost$io$IndentedOutputStream** $tmp4614 = &param0->out;
frost$io$IndentedOutputStream* $tmp4615 = *$tmp4614;
$fn4617 $tmp4616 = ($fn4617) ((frost$io$OutputStream*) $tmp4615)->$class->vtable[19];
frost$core$Error* $tmp4618 = $tmp4616(((frost$io$OutputStream*) $tmp4615), &$s4619);
if ($tmp4618 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4618));
*(&local0) = $tmp4618;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4618));
frost$core$String* $tmp4620 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4620));
*(&local4) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4621 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4621));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4622 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4622));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4618));
frost$core$String* $tmp4623 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4623));
*(&local4) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4624 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4624));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4625 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4625));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block2;
block1:;
// line 1301
frost$core$Int64 $tmp4626 = (frost$core$Int64) {1301};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4627, $tmp4626);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4628 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4628));
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
frost$core$Weak** $tmp4629 = &param0->compiler;
frost$core$Weak* $tmp4630 = *$tmp4629;
frost$core$Object* $tmp4631 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4630);
frost$core$Bit $tmp4632 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4631), param3);
frost$core$Frost$unref$frost$core$Object$Q($tmp4631);
// line 1308
frost$core$String* $tmp4633 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4633));
frost$core$String* $tmp4634 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4634));
*(&local1) = $tmp4633;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4633));
// line 1309
frost$core$String* $tmp4635 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4635));
frost$core$String* $tmp4636 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4636));
*(&local2) = $tmp4635;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4635));
// line 1310
frost$io$IndentedOutputStream** $tmp4637 = &param0->out;
frost$io$IndentedOutputStream* $tmp4638 = *$tmp4637;
org$frostlang$frostc$Type** $tmp4639 = &param3->type;
org$frostlang$frostc$Type* $tmp4640 = *$tmp4639;
frost$core$String* $tmp4641 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4640);
frost$core$String* $tmp4642 = frost$core$String$get_asString$R$frost$core$String($tmp4641);
frost$core$String* $tmp4643 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4642, &$s4644);
frost$core$String* $tmp4645 = *(&local2);
frost$core$String* $tmp4646 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4643, $tmp4645);
frost$core$String* $tmp4647 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4646, &$s4648);
frost$core$String* $tmp4649 = *(&local1);
frost$core$String* $tmp4650 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4647, $tmp4649);
frost$core$String* $tmp4651 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4650, &$s4652);
frost$core$String** $tmp4653 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp4654 = *$tmp4653;
frost$core$String* $tmp4655 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4651, $tmp4654);
frost$core$String* $tmp4656 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4655, &$s4657);
$fn4659 $tmp4658 = ($fn4659) ((frost$io$OutputStream*) $tmp4638)->$class->vtable[19];
frost$core$Error* $tmp4660 = $tmp4658(((frost$io$OutputStream*) $tmp4638), $tmp4656);
if ($tmp4660 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4660));
*(&local0) = $tmp4660;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4660));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4655));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4651));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4650));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4647));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4643));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4641));
frost$core$String* $tmp4661 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4661));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4662 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4662));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4660));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4655));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4651));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4650));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4647));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4643));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4641));
// line 1311
frost$collections$HashMap** $tmp4663 = &param0->refs;
frost$collections$HashMap* $tmp4664 = *$tmp4663;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4665;
$tmp4665 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4665->value = param1;
frost$core$String* $tmp4666 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4664, ((frost$collections$Key*) $tmp4665), ((frost$core$Object*) $tmp4666));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4665)));
frost$core$String* $tmp4667 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4667));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4668 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4668));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1314
frost$core$Int64 $tmp4669 = (frost$core$Int64) {1314};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4670, $tmp4669);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4671 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4671));
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
frost$core$Weak** $tmp4672 = &param3->owner;
frost$core$Weak* $tmp4673 = *$tmp4672;
frost$core$Object* $tmp4674 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4673);
frost$collections$Array** $tmp4675 = &((org$frostlang$frostc$ClassDecl*) $tmp4674)->fields;
frost$collections$Array* $tmp4676 = *$tmp4675;
frost$core$Int64 $tmp4677 = (frost$core$Int64) {1};
frost$core$Object* $tmp4678 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp4676, $tmp4677);
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp4678)));
org$frostlang$frostc$FieldDecl* $tmp4679 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4679));
*(&local1) = ((org$frostlang$frostc$FieldDecl*) $tmp4678);
frost$core$Frost$unref$frost$core$Object$Q($tmp4678);
frost$core$Frost$unref$frost$core$Object$Q($tmp4674);
// line 1322
org$frostlang$frostc$FieldDecl* $tmp4680 = *(&local1);
frost$core$String** $tmp4681 = &((org$frostlang$frostc$Symbol*) $tmp4680)->name;
frost$core$String* $tmp4682 = *$tmp4681;
frost$core$Bit $tmp4683 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp4682, &$s4684);
bool $tmp4685 = $tmp4683.value;
if ($tmp4685) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp4686 = (frost$core$Int64) {1322};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4687, $tmp4686);
abort(); // unreachable
block3:;
// line 1323
frost$core$String* $tmp4688 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4688));
frost$core$String* $tmp4689 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4689));
*(&local2) = $tmp4688;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4688));
// line 1324
frost$core$Weak** $tmp4690 = &param0->compiler;
frost$core$Weak* $tmp4691 = *$tmp4690;
frost$core$Object* $tmp4692 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4691);
org$frostlang$frostc$FieldDecl* $tmp4693 = *(&local1);
frost$core$Int64 $tmp4694 = org$frostlang$frostc$Compiler$getIndex$org$frostlang$frostc$FieldDecl$R$frost$core$Int64(((org$frostlang$frostc$Compiler*) $tmp4692), $tmp4693);
*(&local3) = $tmp4694;
frost$core$Frost$unref$frost$core$Object$Q($tmp4692);
// line 1325
frost$core$String* $tmp4695 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4695));
frost$core$String* $tmp4696 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4696));
*(&local4) = $tmp4695;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4695));
// line 1326
frost$collections$Array** $tmp4697 = &param3->fields;
frost$collections$Array* $tmp4698 = *$tmp4697;
frost$core$Object* $tmp4699 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp4698, param4);
frost$core$String* $tmp4700 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp4699));
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4700));
frost$core$String* $tmp4701 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4701));
*(&local5) = $tmp4700;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4700));
frost$core$Frost$unref$frost$core$Object$Q($tmp4699);
// line 1327
frost$io$IndentedOutputStream** $tmp4702 = &param0->out;
frost$io$IndentedOutputStream* $tmp4703 = *$tmp4702;
frost$core$String* $tmp4704 = *(&local5);
frost$core$String* $tmp4705 = frost$core$String$get_asString$R$frost$core$String($tmp4704);
frost$core$String* $tmp4706 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4705, &$s4707);
frost$core$String* $tmp4708 = *(&local4);
frost$core$String* $tmp4709 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4706, $tmp4708);
frost$core$String* $tmp4710 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4709, &$s4711);
frost$core$String* $tmp4712 = *(&local5);
frost$core$String* $tmp4713 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4710, $tmp4712);
frost$core$String* $tmp4714 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4713, &$s4715);
frost$core$String* $tmp4716 = *(&local2);
frost$core$String* $tmp4717 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4714, $tmp4716);
frost$core$String* $tmp4718 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4717, &$s4719);
frost$core$Int64 $tmp4720 = org$frostlang$frostc$CCodeGenerator$getChoiceFieldOffset$org$frostlang$frostc$ChoiceCase$frost$core$Int64$R$frost$core$Int64(param0, param3, param4);
frost$core$Int64$wrapper* $tmp4721;
$tmp4721 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp4721->value = $tmp4720;
frost$core$String* $tmp4722 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s4723, ((frost$core$Object*) $tmp4721));
frost$core$String* $tmp4724 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4722, &$s4725);
frost$core$String* $tmp4726 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4718, $tmp4724);
$fn4728 $tmp4727 = ($fn4728) ((frost$io$OutputStream*) $tmp4703)->$class->vtable[19];
frost$core$Error* $tmp4729 = $tmp4727(((frost$io$OutputStream*) $tmp4703), $tmp4726);
if ($tmp4729 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4729));
*(&local0) = $tmp4729;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4726));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4724));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4722));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4717));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4714));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4713));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4709));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4706));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4705));
frost$core$String* $tmp4730 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4730));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp4731 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4731));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4732 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4732));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$FieldDecl* $tmp4733 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4733));
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4726));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4724));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4722));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4717));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4714));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4713));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4709));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4706));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4705));
// line 1329
frost$collections$HashMap** $tmp4734 = &param0->refs;
frost$collections$HashMap* $tmp4735 = *$tmp4734;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4736;
$tmp4736 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4736->value = param1;
frost$core$String* $tmp4737 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4735, ((frost$collections$Key*) $tmp4736), ((frost$core$Object*) $tmp4737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4736)));
frost$core$String* $tmp4738 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4738));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp4739 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4739));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4740 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4740));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$FieldDecl* $tmp4741 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4741));
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block2;
block1:;
// line 1332
frost$core$Int64 $tmp4742 = (frost$core$Int64) {1332};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4743, $tmp4742);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4744 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4744));
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
frost$core$String* $tmp4745 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4745));
frost$core$String* $tmp4746 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4746));
*(&local1) = $tmp4745;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4745));
// line 1339
frost$core$String* $tmp4747 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4747));
frost$core$String* $tmp4748 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4748));
*(&local2) = $tmp4747;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4747));
// line 1340
frost$io$IndentedOutputStream** $tmp4749 = &param0->out;
frost$io$IndentedOutputStream* $tmp4750 = *$tmp4749;
org$frostlang$frostc$Type** $tmp4751 = &param3->type;
org$frostlang$frostc$Type* $tmp4752 = *$tmp4751;
frost$core$String* $tmp4753 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4752);
frost$core$String* $tmp4754 = frost$core$String$get_asString$R$frost$core$String($tmp4753);
frost$core$String* $tmp4755 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4754, &$s4756);
frost$core$String* $tmp4757 = *(&local2);
frost$core$String* $tmp4758 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4755, $tmp4757);
frost$core$String* $tmp4759 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4758, &$s4760);
frost$core$String* $tmp4761 = *(&local1);
frost$core$String* $tmp4762 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4759, $tmp4761);
frost$core$String* $tmp4763 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4762, &$s4764);
frost$core$String** $tmp4765 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp4766 = *$tmp4765;
frost$core$String* $tmp4767 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4763, $tmp4766);
frost$core$String* $tmp4768 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4767, &$s4769);
$fn4771 $tmp4770 = ($fn4771) ((frost$io$OutputStream*) $tmp4750)->$class->vtable[19];
frost$core$Error* $tmp4772 = $tmp4770(((frost$io$OutputStream*) $tmp4750), $tmp4768);
if ($tmp4772 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4772));
*(&local0) = $tmp4772;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4762));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4758));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4755));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4753));
frost$core$String* $tmp4773 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4773));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4774 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4774));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4762));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4758));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4755));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4753));
// line 1341
frost$collections$HashMap** $tmp4775 = &param0->refs;
frost$collections$HashMap* $tmp4776 = *$tmp4775;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4777;
$tmp4777 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4777->value = param1;
frost$core$String* $tmp4778 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4776, ((frost$collections$Key*) $tmp4777), ((frost$core$Object*) $tmp4778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4777)));
frost$core$String* $tmp4779 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4779));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4780 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4780));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1344
frost$core$Int64 $tmp4781 = (frost$core$Int64) {1344};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4782, $tmp4781);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4783 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4783));
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
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4784 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, param3);
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4784));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4785 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4785));
*(&local1) = $tmp4784;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4784));
// line 1352
frost$core$String* $tmp4786 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4786));
frost$core$String* $tmp4787 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4787));
*(&local2) = $tmp4786;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4786));
// line 1353
frost$io$IndentedOutputStream** $tmp4788 = &param0->out;
frost$io$IndentedOutputStream* $tmp4789 = *$tmp4788;
frost$core$String* $tmp4790 = *(&local2);
frost$core$String* $tmp4791 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4792, $tmp4790);
frost$core$String* $tmp4793 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4791, &$s4794);
frost$core$String* $tmp4795 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4796 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4793, $tmp4795);
frost$core$String* $tmp4797 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4796, &$s4798);
$fn4800 $tmp4799 = ($fn4800) ((frost$io$OutputStream*) $tmp4789)->$class->vtable[19];
frost$core$Error* $tmp4801 = $tmp4799(((frost$io$OutputStream*) $tmp4789), $tmp4797);
if ($tmp4801 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4801));
*(&local0) = $tmp4801;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4801));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4797));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4796));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4793));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4791));
frost$core$String* $tmp4802 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4802));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4803 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4803));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4801));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4797));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4796));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4793));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4791));
// line 1354
frost$io$IndentedOutputStream** $tmp4804 = &param0->out;
frost$io$IndentedOutputStream* $tmp4805 = *$tmp4804;
frost$core$String* $tmp4806 = *(&local2);
frost$core$String* $tmp4807 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4808, $tmp4806);
frost$core$String* $tmp4809 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4807, &$s4810);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4811 = *(&local1);
frost$core$String** $tmp4812 = &$tmp4811->name;
frost$core$String* $tmp4813 = *$tmp4812;
frost$core$String* $tmp4814 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4809, $tmp4813);
frost$core$String* $tmp4815 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4814, &$s4816);
$fn4818 $tmp4817 = ($fn4818) ((frost$io$OutputStream*) $tmp4805)->$class->vtable[19];
frost$core$Error* $tmp4819 = $tmp4817(((frost$io$OutputStream*) $tmp4805), $tmp4815);
if ($tmp4819 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4819));
*(&local0) = $tmp4819;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4807));
frost$core$String* $tmp4820 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4820));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4821 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4821));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4807));
// line 1355
frost$io$IndentedOutputStream** $tmp4822 = &param0->out;
frost$io$IndentedOutputStream* $tmp4823 = *$tmp4822;
frost$core$Int64* $tmp4824 = &$tmp4823->level;
frost$core$Int64 $tmp4825 = *$tmp4824;
frost$core$Int64 $tmp4826 = (frost$core$Int64) {1};
int64_t $tmp4827 = $tmp4825.value;
int64_t $tmp4828 = $tmp4826.value;
int64_t $tmp4829 = $tmp4827 + $tmp4828;
frost$core$Int64 $tmp4830 = (frost$core$Int64) {$tmp4829};
frost$core$Int64* $tmp4831 = &$tmp4823->level;
*$tmp4831 = $tmp4830;
// line 1356
frost$io$IndentedOutputStream** $tmp4832 = &param0->out;
frost$io$IndentedOutputStream* $tmp4833 = *$tmp4832;
frost$core$String* $tmp4834 = *(&local2);
frost$core$String* $tmp4835 = frost$core$String$get_asString$R$frost$core$String($tmp4834);
frost$core$String* $tmp4836 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4835, &$s4837);
frost$core$String* $tmp4838 = *(&local2);
frost$core$String* $tmp4839 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4836, $tmp4838);
frost$core$String* $tmp4840 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4839, &$s4841);
$fn4843 $tmp4842 = ($fn4843) ((frost$io$OutputStream*) $tmp4833)->$class->vtable[19];
frost$core$Error* $tmp4844 = $tmp4842(((frost$io$OutputStream*) $tmp4833), $tmp4840);
if ($tmp4844 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4844));
*(&local0) = $tmp4844;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4835));
frost$core$String* $tmp4845 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4845));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4846 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4846));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4835));
// line 1357
frost$io$IndentedOutputStream** $tmp4847 = &param0->out;
frost$io$IndentedOutputStream* $tmp4848 = *$tmp4847;
frost$core$Int64* $tmp4849 = &$tmp4848->level;
frost$core$Int64 $tmp4850 = *$tmp4849;
frost$core$Int64 $tmp4851 = (frost$core$Int64) {1};
int64_t $tmp4852 = $tmp4850.value;
int64_t $tmp4853 = $tmp4851.value;
int64_t $tmp4854 = $tmp4852 - $tmp4853;
frost$core$Int64 $tmp4855 = (frost$core$Int64) {$tmp4854};
frost$core$Int64* $tmp4856 = &$tmp4848->level;
*$tmp4856 = $tmp4855;
// line 1358
frost$io$IndentedOutputStream** $tmp4857 = &param0->out;
frost$io$IndentedOutputStream* $tmp4858 = *$tmp4857;
$fn4860 $tmp4859 = ($fn4860) ((frost$io$OutputStream*) $tmp4858)->$class->vtable[19];
frost$core$Error* $tmp4861 = $tmp4859(((frost$io$OutputStream*) $tmp4858), &$s4862);
if ($tmp4861 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4861));
*(&local0) = $tmp4861;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4861));
frost$core$String* $tmp4863 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4863));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4864 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4864));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4861));
// line 1359
frost$core$String* $tmp4865 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4865));
frost$core$String* $tmp4866 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4866));
*(&local3) = $tmp4865;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4865));
// line 1360
frost$core$String* $tmp4867 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, param5, ((org$frostlang$frostc$Type*) NULL));
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4867));
frost$core$String* $tmp4868 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4868));
*(&local4) = $tmp4867;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4867));
// line 1361
frost$io$IndentedOutputStream** $tmp4869 = &param0->out;
frost$io$IndentedOutputStream* $tmp4870 = *$tmp4869;
frost$core$String* $tmp4871 = *(&local4);
frost$core$String* $tmp4872 = frost$core$String$get_asString$R$frost$core$String($tmp4871);
frost$core$String* $tmp4873 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4872, &$s4874);
frost$core$String* $tmp4875 = *(&local3);
frost$core$String* $tmp4876 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4873, $tmp4875);
frost$core$String* $tmp4877 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4876, &$s4878);
frost$core$String* $tmp4879 = *(&local2);
frost$core$String* $tmp4880 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4877, $tmp4879);
frost$core$String* $tmp4881 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4880, &$s4882);
frost$core$Int64$wrapper* $tmp4883;
$tmp4883 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp4883->value = param4;
frost$core$String* $tmp4884 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp4881, ((frost$core$Object*) $tmp4883));
frost$core$String* $tmp4885 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4884, &$s4886);
$fn4888 $tmp4887 = ($fn4888) ((frost$io$OutputStream*) $tmp4870)->$class->vtable[19];
frost$core$Error* $tmp4889 = $tmp4887(((frost$io$OutputStream*) $tmp4870), $tmp4885);
if ($tmp4889 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4889));
*(&local0) = $tmp4889;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4889));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4885));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4884));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4881));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4877));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4872));
frost$core$String* $tmp4890 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4890));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4891 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4891));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4892 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4892));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4893 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4893));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4889));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4885));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4884));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4881));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4877));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4872));
// line 1362
frost$collections$HashMap** $tmp4894 = &param0->refs;
frost$collections$HashMap* $tmp4895 = *$tmp4894;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4896;
$tmp4896 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4896->value = param1;
frost$core$String* $tmp4897 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4895, ((frost$collections$Key*) $tmp4896), ((frost$core$Object*) $tmp4897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4896)));
frost$core$String* $tmp4898 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4898));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4899 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4899));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4900 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4900));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4901 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4901));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block2;
block1:;
// line 1365
frost$core$Int64 $tmp4902 = (frost$core$Int64) {1365};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4903, $tmp4902);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4904 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4904));
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
frost$core$String* $tmp4905 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4905));
frost$core$String* $tmp4906 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4906));
*(&local1) = $tmp4905;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4905));
// line 1372
frost$core$String* $tmp4907 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, param4, ((org$frostlang$frostc$Type*) NULL));
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4907));
frost$core$String* $tmp4908 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4908));
*(&local2) = $tmp4907;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4907));
// line 1373
frost$io$IndentedOutputStream** $tmp4909 = &param0->out;
frost$io$IndentedOutputStream* $tmp4910 = *$tmp4909;
frost$core$String* $tmp4911 = *(&local2);
frost$core$String* $tmp4912 = frost$core$String$get_asString$R$frost$core$String($tmp4911);
frost$core$String* $tmp4913 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4912, &$s4914);
frost$core$String* $tmp4915 = *(&local1);
frost$core$String* $tmp4916 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4913, $tmp4915);
frost$core$String* $tmp4917 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4916, &$s4918);
frost$core$String* $tmp4919 = *(&local2);
frost$core$String* $tmp4920 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4917, $tmp4919);
frost$core$String* $tmp4921 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4920, &$s4922);
frost$core$String* $tmp4923 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4924 = frost$core$String$get_asString$R$frost$core$String($tmp4923);
frost$core$String* $tmp4925 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4924, &$s4926);
frost$core$Int64$wrapper* $tmp4927;
$tmp4927 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp4927->value = param3;
frost$core$String* $tmp4928 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp4925, ((frost$core$Object*) $tmp4927));
frost$core$String* $tmp4929 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4928, &$s4930);
frost$core$String* $tmp4931 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4921, $tmp4929);
$fn4933 $tmp4932 = ($fn4933) ((frost$io$OutputStream*) $tmp4910)->$class->vtable[19];
frost$core$Error* $tmp4934 = $tmp4932(((frost$io$OutputStream*) $tmp4910), $tmp4931);
if ($tmp4934 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4934));
*(&local0) = $tmp4934;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4934));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4931));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4929));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4928));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4927));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4925));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4924));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4923));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4920));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4916));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4913));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4912));
frost$core$String* $tmp4935 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4935));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4936 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4936));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4934));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4931));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4929));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4928));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4927));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4925));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4924));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4923));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4920));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4916));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4913));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4912));
// line 1375
frost$collections$HashMap** $tmp4937 = &param0->refs;
frost$collections$HashMap* $tmp4938 = *$tmp4937;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4939;
$tmp4939 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4939->value = param1;
frost$core$String* $tmp4940 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4938, ((frost$collections$Key*) $tmp4939), ((frost$core$Object*) $tmp4940));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4939)));
frost$core$String* $tmp4941 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4941));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4942 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4942));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1378
frost$core$Int64 $tmp4943 = (frost$core$Int64) {1378};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4944, $tmp4943);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4945 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4945));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeLoad$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 1383
*(&local0) = ((frost$core$Error*) NULL);
// line 1384
frost$core$String* $tmp4946 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4946));
frost$core$String* $tmp4947 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4947));
*(&local1) = $tmp4946;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4946));
// line 1385
frost$io$IndentedOutputStream** $tmp4948 = &param0->out;
frost$io$IndentedOutputStream* $tmp4949 = *$tmp4948;
$fn4951 $tmp4950 = ($fn4951) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4952 = $tmp4950(param2);
frost$core$String* $tmp4953 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4952);
frost$core$String* $tmp4954 = frost$core$String$get_asString$R$frost$core$String($tmp4953);
frost$core$String* $tmp4955 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4954, &$s4956);
frost$core$String* $tmp4957 = *(&local1);
frost$core$String* $tmp4958 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4955, $tmp4957);
frost$core$String* $tmp4959 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4958, &$s4960);
frost$core$String* $tmp4961 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4962 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4959, $tmp4961);
frost$core$String* $tmp4963 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4962, &$s4964);
$fn4966 $tmp4965 = ($fn4966) ((frost$io$OutputStream*) $tmp4949)->$class->vtable[19];
frost$core$Error* $tmp4967 = $tmp4965(((frost$io$OutputStream*) $tmp4949), $tmp4963);
if ($tmp4967 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4967));
*(&local0) = $tmp4967;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4967));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4963));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4961));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4959));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4958));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4955));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4954));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4953));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4952));
frost$core$String* $tmp4968 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4968));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4967));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4963));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4961));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4959));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4958));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4955));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4954));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4953));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4952));
// line 1386
frost$collections$HashMap** $tmp4969 = &param0->refs;
frost$collections$HashMap* $tmp4970 = *$tmp4969;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4971;
$tmp4971 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4971->value = param1;
frost$core$String* $tmp4972 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4970, ((frost$collections$Key*) $tmp4971), ((frost$core$Object*) $tmp4972));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4971)));
frost$core$String* $tmp4973 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4973));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1389
frost$core$Int64 $tmp4974 = (frost$core$Int64) {1389};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4975, $tmp4974);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4976 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4976));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeNegate$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 1394
*(&local0) = ((frost$core$Error*) NULL);
// line 1395
frost$core$String* $tmp4977 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4977));
frost$core$String* $tmp4978 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4978));
*(&local1) = $tmp4977;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4977));
// line 1396
frost$io$IndentedOutputStream** $tmp4979 = &param0->out;
frost$io$IndentedOutputStream* $tmp4980 = *$tmp4979;
$fn4982 $tmp4981 = ($fn4982) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4983 = $tmp4981(param2);
frost$core$String* $tmp4984 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4983);
frost$core$String* $tmp4985 = frost$core$String$get_asString$R$frost$core$String($tmp4984);
frost$core$String* $tmp4986 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4985, &$s4987);
frost$core$String* $tmp4988 = *(&local1);
frost$core$String* $tmp4989 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4986, $tmp4988);
frost$core$String* $tmp4990 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4989, &$s4991);
frost$core$String* $tmp4992 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4993 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4990, $tmp4992);
frost$core$String* $tmp4994 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4993, &$s4995);
$fn4997 $tmp4996 = ($fn4997) ((frost$io$OutputStream*) $tmp4980)->$class->vtable[19];
frost$core$Error* $tmp4998 = $tmp4996(((frost$io$OutputStream*) $tmp4980), $tmp4994);
if ($tmp4998 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4998));
*(&local0) = $tmp4998;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4998));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4994));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4992));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4990));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4986));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4985));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4984));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4983));
frost$core$String* $tmp4999 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4999));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4998));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4994));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4992));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4990));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4986));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4985));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4984));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4983));
// line 1397
frost$collections$HashMap** $tmp5000 = &param0->refs;
frost$collections$HashMap* $tmp5001 = *$tmp5000;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5002;
$tmp5002 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5002->value = param1;
frost$core$String* $tmp5003 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5001, ((frost$collections$Key*) $tmp5002), ((frost$core$Object*) $tmp5003));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5002)));
frost$core$String* $tmp5004 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5004));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1400
frost$core$Int64 $tmp5005 = (frost$core$Int64) {1400};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5006, $tmp5005);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5007 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5007));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeNot$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 1405
*(&local0) = ((frost$core$Error*) NULL);
// line 1406
frost$core$String* $tmp5008 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5008));
frost$core$String* $tmp5009 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5009));
*(&local1) = $tmp5008;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5008));
// line 1407
frost$io$IndentedOutputStream** $tmp5010 = &param0->out;
frost$io$IndentedOutputStream* $tmp5011 = *$tmp5010;
$fn5013 $tmp5012 = ($fn5013) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5014 = $tmp5012(param2);
frost$core$String* $tmp5015 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5014);
frost$core$String* $tmp5016 = frost$core$String$get_asString$R$frost$core$String($tmp5015);
frost$core$String* $tmp5017 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5016, &$s5018);
frost$core$String* $tmp5019 = *(&local1);
frost$core$String* $tmp5020 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5017, $tmp5019);
frost$core$String* $tmp5021 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5020, &$s5022);
frost$core$String* $tmp5023 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp5024 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5021, $tmp5023);
frost$core$String* $tmp5025 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5024, &$s5026);
$fn5028 $tmp5027 = ($fn5028) ((frost$io$OutputStream*) $tmp5011)->$class->vtable[19];
frost$core$Error* $tmp5029 = $tmp5027(((frost$io$OutputStream*) $tmp5011), $tmp5025);
if ($tmp5029 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5029));
*(&local0) = $tmp5029;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5029));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5015));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5014));
frost$core$String* $tmp5030 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5030));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5029));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5015));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5014));
// line 1408
frost$collections$HashMap** $tmp5031 = &param0->refs;
frost$collections$HashMap* $tmp5032 = *$tmp5031;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5033;
$tmp5033 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5033->value = param1;
frost$core$String* $tmp5034 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5032, ((frost$collections$Key*) $tmp5033), ((frost$core$Object*) $tmp5034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5033)));
frost$core$String* $tmp5035 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5035));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1411
frost$core$Int64 $tmp5036 = (frost$core$Int64) {1411};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5037, $tmp5036);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5038 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5038));
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
frost$core$String* $tmp5039 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5039));
frost$core$String* $tmp5040 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5040));
*(&local1) = $tmp5039;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5039));
// line 1418
frost$core$Int64 $tmp5041 = org$frostlang$frostc$CCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param3);
*(&local2) = $tmp5041;
// line 1419
frost$core$String* $tmp5042 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5042));
frost$core$String* $tmp5043 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5043));
*(&local3) = $tmp5042;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5042));
// line 1420
frost$core$String* $tmp5044 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5044));
frost$core$String* $tmp5045 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5045));
*(&local4) = $tmp5044;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5044));
// line 1421
frost$io$IndentedOutputStream** $tmp5046 = &param0->out;
frost$io$IndentedOutputStream* $tmp5047 = *$tmp5046;
frost$core$String* $tmp5048 = *(&local3);
frost$core$String* $tmp5049 = frost$core$String$get_asString$R$frost$core$String($tmp5048);
frost$core$String* $tmp5050 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5049, &$s5051);
frost$core$String* $tmp5052 = *(&local4);
frost$core$String* $tmp5053 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5050, $tmp5052);
frost$core$String* $tmp5054 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5053, &$s5055);
frost$core$String* $tmp5056 = *(&local3);
frost$core$String* $tmp5057 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5054, $tmp5056);
frost$core$String* $tmp5058 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5057, &$s5059);
frost$core$String* $tmp5060 = *(&local1);
frost$core$String* $tmp5061 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5058, $tmp5060);
frost$core$String* $tmp5062 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5061, &$s5063);
frost$core$Int64 $tmp5064 = *(&local2);
frost$core$String* $tmp5065 = frost$core$Int64$get_asString$R$frost$core$String($tmp5064);
frost$core$String* $tmp5066 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5065, &$s5067);
frost$core$String* $tmp5068 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5062, $tmp5066);
$fn5070 $tmp5069 = ($fn5070) ((frost$io$OutputStream*) $tmp5047)->$class->vtable[19];
frost$core$Error* $tmp5071 = $tmp5069(((frost$io$OutputStream*) $tmp5047), $tmp5068);
if ($tmp5071 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5071));
*(&local0) = $tmp5071;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5066));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5065));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5058));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5050));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5049));
frost$core$String* $tmp5072 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5072));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5073 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5073));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5074 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5074));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5066));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5065));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5058));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5050));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5049));
// line 1423
frost$collections$HashMap** $tmp5075 = &param0->refs;
frost$collections$HashMap* $tmp5076 = *$tmp5075;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5077;
$tmp5077 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5077->value = param1;
frost$core$String* $tmp5078 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5076, ((frost$collections$Key*) $tmp5077), ((frost$core$Object*) $tmp5078));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5077)));
frost$core$String* $tmp5079 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5079));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5080 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5080));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5081 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5081));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1426
frost$core$Int64 $tmp5082 = (frost$core$Int64) {1426};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5083, $tmp5082);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5084 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5084));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerDestroy$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 1431
*(&local0) = ((frost$core$Error*) NULL);
// line 1432
frost$core$String* $tmp5085 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5085));
frost$core$String* $tmp5086 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5086));
*(&local1) = $tmp5085;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5085));
// line 1433
frost$io$IndentedOutputStream** $tmp5087 = &param0->out;
frost$io$IndentedOutputStream* $tmp5088 = *$tmp5087;
frost$core$String* $tmp5089 = *(&local1);
frost$core$String* $tmp5090 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5091, $tmp5089);
frost$core$String* $tmp5092 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5090, &$s5093);
$fn5095 $tmp5094 = ($fn5095) ((frost$io$OutputStream*) $tmp5088)->$class->vtable[19];
frost$core$Error* $tmp5096 = $tmp5094(((frost$io$OutputStream*) $tmp5088), $tmp5092);
if ($tmp5096 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5096));
*(&local0) = $tmp5096;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5096));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5092));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5090));
frost$core$String* $tmp5097 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5097));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5096));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5092));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5090));
frost$core$String* $tmp5098 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5098));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1436
frost$core$Int64 $tmp5099 = (frost$core$Int64) {1436};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5100, $tmp5099);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5101 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5101));
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
frost$core$String* $tmp5102 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5102));
frost$core$String* $tmp5103 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5103));
*(&local1) = $tmp5102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5102));
// line 1443
frost$core$String* $tmp5104 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param3);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5104));
frost$core$String* $tmp5105 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5105));
*(&local2) = $tmp5104;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5104));
// line 1444
frost$core$String* $tmp5106 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5106));
frost$core$String* $tmp5107 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5107));
*(&local3) = $tmp5106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5106));
// line 1445
frost$io$IndentedOutputStream** $tmp5108 = &param0->out;
frost$io$IndentedOutputStream* $tmp5109 = *$tmp5108;
$fn5111 $tmp5110 = ($fn5111) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5112 = $tmp5110(param2);
org$frostlang$frostc$FixedArray** $tmp5113 = &$tmp5112->subtypes;
org$frostlang$frostc$FixedArray* $tmp5114 = *$tmp5113;
frost$core$Int64 $tmp5115 = (frost$core$Int64) {1};
frost$core$Object* $tmp5116 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp5114, $tmp5115);
frost$core$String* $tmp5117 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp5116));
frost$core$String* $tmp5118 = frost$core$String$get_asString$R$frost$core$String($tmp5117);
frost$core$String* $tmp5119 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5118, &$s5120);
frost$core$String* $tmp5121 = *(&local3);
frost$core$String* $tmp5122 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5119, $tmp5121);
frost$core$String* $tmp5123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5122, &$s5124);
frost$core$String* $tmp5125 = *(&local1);
frost$core$String* $tmp5126 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5123, $tmp5125);
frost$core$String* $tmp5127 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5126, &$s5128);
frost$core$String* $tmp5129 = *(&local2);
frost$core$String* $tmp5130 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5127, $tmp5129);
frost$core$String* $tmp5131 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5130, &$s5132);
$fn5134 $tmp5133 = ($fn5134) ((frost$io$OutputStream*) $tmp5109)->$class->vtable[19];
frost$core$Error* $tmp5135 = $tmp5133(((frost$io$OutputStream*) $tmp5109), $tmp5131);
if ($tmp5135 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5135));
*(&local0) = $tmp5135;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5117));
frost$core$Frost$unref$frost$core$Object$Q($tmp5116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5112));
frost$core$String* $tmp5136 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5136));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5137 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5137));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5138 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5138));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5117));
frost$core$Frost$unref$frost$core$Object$Q($tmp5116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5112));
// line 1446
frost$collections$HashMap** $tmp5139 = &param0->refs;
frost$collections$HashMap* $tmp5140 = *$tmp5139;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5141;
$tmp5141 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5141->value = param1;
frost$core$String* $tmp5142 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5140, ((frost$collections$Key*) $tmp5141), ((frost$core$Object*) $tmp5142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5141)));
frost$core$String* $tmp5143 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5143));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5144 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5144));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5145 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5145));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1449
frost$core$Int64 $tmp5146 = (frost$core$Int64) {1449};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5147, $tmp5146);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5148 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5148));
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
frost$core$String* $tmp5149 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5149));
frost$core$String* $tmp5150 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5150));
*(&local1) = $tmp5149;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5149));
// line 1456
frost$core$String* $tmp5151 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param3);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5151));
frost$core$String* $tmp5152 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5152));
*(&local2) = $tmp5151;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5151));
// line 1457
frost$core$String* $tmp5153 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5153));
frost$core$String* $tmp5154 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5154));
*(&local3) = $tmp5153;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5153));
// line 1458
frost$io$IndentedOutputStream** $tmp5155 = &param0->out;
frost$io$IndentedOutputStream* $tmp5156 = *$tmp5155;
$fn5158 $tmp5157 = ($fn5158) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5159 = $tmp5157(param2);
frost$core$String* $tmp5160 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5159);
frost$core$String* $tmp5161 = frost$core$String$get_asString$R$frost$core$String($tmp5160);
frost$core$String* $tmp5162 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5161, &$s5163);
frost$core$String* $tmp5164 = *(&local3);
frost$core$String* $tmp5165 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5162, $tmp5164);
frost$core$String* $tmp5166 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5165, &$s5167);
frost$core$String* $tmp5168 = *(&local1);
frost$core$String* $tmp5169 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5166, $tmp5168);
frost$core$String* $tmp5170 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5169, &$s5171);
frost$core$String* $tmp5172 = *(&local2);
frost$core$String* $tmp5173 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5170, $tmp5172);
frost$core$String* $tmp5174 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5173, &$s5175);
$fn5177 $tmp5176 = ($fn5177) ((frost$io$OutputStream*) $tmp5156)->$class->vtable[19];
frost$core$Error* $tmp5178 = $tmp5176(((frost$io$OutputStream*) $tmp5156), $tmp5174);
if ($tmp5178 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5178));
*(&local0) = $tmp5178;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5159));
frost$core$String* $tmp5179 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5179));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5180 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5180));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5181 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5181));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5159));
// line 1459
frost$collections$HashMap** $tmp5182 = &param0->refs;
frost$collections$HashMap* $tmp5183 = *$tmp5182;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5184;
$tmp5184 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5184->value = param1;
frost$core$String* $tmp5185 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5183, ((frost$collections$Key*) $tmp5184), ((frost$core$Object*) $tmp5185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5184)));
frost$core$String* $tmp5186 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5186));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5187 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5187));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5188 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5188));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1462
frost$core$Int64 $tmp5189 = (frost$core$Int64) {1462};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5190, $tmp5189);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5191 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5191));
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
frost$core$String* $tmp5192 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5192));
frost$core$String* $tmp5193 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5193));
*(&local1) = $tmp5192;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5192));
// line 1470
frost$core$String* $tmp5194 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param3);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5194));
frost$core$String* $tmp5195 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5195));
*(&local2) = $tmp5194;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5194));
// line 1471
frost$core$String* $tmp5196 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param4);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5196));
frost$core$String* $tmp5197 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5197));
*(&local3) = $tmp5196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5196));
// line 1472
$fn5199 $tmp5198 = ($fn5199) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5200 = $tmp5198(param2);
frost$core$Int64 $tmp5201 = org$frostlang$frostc$CCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp5200);
*(&local4) = $tmp5201;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5200));
// line 1473
frost$core$Int64 $tmp5202 = *(&local4);
frost$core$Int64 $tmp5203 = (frost$core$Int64) {0};
int64_t $tmp5204 = $tmp5202.value;
int64_t $tmp5205 = $tmp5203.value;
bool $tmp5206 = $tmp5204 > $tmp5205;
frost$core$Bit $tmp5207 = (frost$core$Bit) {$tmp5206};
bool $tmp5208 = $tmp5207.value;
if ($tmp5208) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp5209 = (frost$core$Int64) {1473};
$fn5211 $tmp5210 = ($fn5211) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5212 = $tmp5210(param2);
frost$core$String* $tmp5213 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s5214, ((frost$core$Object*) $tmp5212));
frost$core$String* $tmp5215 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5213, &$s5216);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s5217, $tmp5209, $tmp5215);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5212));
abort(); // unreachable
block3:;
// line 1474
frost$core$String* $tmp5218 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5218));
frost$core$String* $tmp5219 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5219));
*(&local5) = $tmp5218;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5218));
// line 1475
frost$io$IndentedOutputStream** $tmp5220 = &param0->out;
frost$io$IndentedOutputStream* $tmp5221 = *$tmp5220;
$fn5223 $tmp5222 = ($fn5223) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5224 = $tmp5222(param2);
frost$core$String* $tmp5225 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5224);
frost$core$String* $tmp5226 = frost$core$String$get_asString$R$frost$core$String($tmp5225);
frost$core$String* $tmp5227 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5226, &$s5228);
frost$core$String* $tmp5229 = *(&local5);
frost$core$String* $tmp5230 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5227, $tmp5229);
frost$core$String* $tmp5231 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5230, &$s5232);
$fn5234 $tmp5233 = ($fn5234) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5235 = $tmp5233(param2);
frost$core$String* $tmp5236 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5235);
frost$core$String* $tmp5237 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5231, $tmp5236);
frost$core$String* $tmp5238 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5237, &$s5239);
frost$core$String* $tmp5240 = *(&local1);
frost$core$String* $tmp5241 = frost$core$String$get_asString$R$frost$core$String($tmp5240);
frost$core$String* $tmp5242 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5241, &$s5243);
frost$core$String* $tmp5244 = *(&local2);
frost$core$String* $tmp5245 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5242, $tmp5244);
frost$core$String* $tmp5246 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5245, &$s5247);
frost$core$Int64 $tmp5248 = *(&local4);
frost$core$Int64$wrapper* $tmp5249;
$tmp5249 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp5249->value = $tmp5248;
frost$core$String* $tmp5250 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp5246, ((frost$core$Object*) $tmp5249));
frost$core$String* $tmp5251 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5250, &$s5252);
frost$core$String* $tmp5253 = *(&local3);
frost$core$String* $tmp5254 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5251, $tmp5253);
frost$core$String* $tmp5255 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5254, &$s5256);
frost$core$Int64 $tmp5257 = *(&local4);
frost$core$Int64$wrapper* $tmp5258;
$tmp5258 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp5258->value = $tmp5257;
frost$core$String* $tmp5259 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp5255, ((frost$core$Object*) $tmp5258));
frost$core$String* $tmp5260 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5259, &$s5261);
frost$core$String* $tmp5262 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5238, $tmp5260);
$fn5264 $tmp5263 = ($fn5264) ((frost$io$OutputStream*) $tmp5221)->$class->vtable[19];
frost$core$Error* $tmp5265 = $tmp5263(((frost$io$OutputStream*) $tmp5221), $tmp5262);
if ($tmp5265 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5265));
*(&local0) = $tmp5265;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5224));
frost$core$String* $tmp5266 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5266));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp5267 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5267));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5268 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5268));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5269 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5269));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5224));
// line 1477
frost$collections$HashMap** $tmp5270 = &param0->refs;
frost$collections$HashMap* $tmp5271 = *$tmp5270;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5272;
$tmp5272 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5272->value = param1;
frost$core$String* $tmp5273 = *(&local5);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5271, ((frost$collections$Key*) $tmp5272), ((frost$core$Object*) $tmp5273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5272)));
frost$core$String* $tmp5274 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5274));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp5275 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5275));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5276 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5276));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5277 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5277));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1480
frost$core$Int64 $tmp5278 = (frost$core$Int64) {1480};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5279, $tmp5278);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5280 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5280));
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
frost$core$String* $tmp5281 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5281));
frost$core$String* $tmp5282 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5282));
*(&local1) = $tmp5281;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5281));
// line 1487
frost$core$String* $tmp5283 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param3);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5283));
frost$core$String* $tmp5284 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5284));
*(&local2) = $tmp5283;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5283));
// line 1488
frost$core$String* $tmp5285 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5285));
frost$core$String* $tmp5286 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5286));
*(&local3) = $tmp5285;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5285));
// line 1489
frost$io$IndentedOutputStream** $tmp5287 = &param0->out;
frost$io$IndentedOutputStream* $tmp5288 = *$tmp5287;
frost$core$String* $tmp5289 = *(&local1);
frost$core$String* $tmp5290 = frost$core$String$get_asString$R$frost$core$String($tmp5289);
frost$core$String* $tmp5291 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5290, &$s5292);
frost$core$String* $tmp5293 = *(&local2);
frost$core$String* $tmp5294 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5291, $tmp5293);
frost$core$String* $tmp5295 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5294, &$s5296);
frost$core$String* $tmp5297 = *(&local3);
frost$core$String* $tmp5298 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5295, $tmp5297);
frost$core$String* $tmp5299 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5298, &$s5300);
$fn5302 $tmp5301 = ($fn5302) ((frost$io$OutputStream*) $tmp5288)->$class->vtable[19];
frost$core$Error* $tmp5303 = $tmp5301(((frost$io$OutputStream*) $tmp5288), $tmp5299);
if ($tmp5303 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5303));
*(&local0) = $tmp5303;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5290));
frost$core$String* $tmp5304 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5304));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5305 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5305));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5306 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5306));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5290));
frost$core$String* $tmp5307 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5307));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5308 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5308));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5309 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5309));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1492
frost$core$Int64 $tmp5310 = (frost$core$Int64) {1492};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5311, $tmp5310);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5312 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5312));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeReturn$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1) {

frost$core$Error* local0 = NULL;
// line 1497
*(&local0) = ((frost$core$Error*) NULL);
// line 1498
frost$core$Bit $tmp5313 = frost$core$Bit$init$builtin_bit(param1 != NULL);
bool $tmp5314 = $tmp5313.value;
if ($tmp5314) goto block3; else goto block5;
block3:;
// line 1499
frost$io$IndentedOutputStream** $tmp5315 = &param0->out;
frost$io$IndentedOutputStream* $tmp5316 = *$tmp5315;
frost$core$String* $tmp5317 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
frost$core$String* $tmp5318 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5319, $tmp5317);
frost$core$String* $tmp5320 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5318, &$s5321);
$fn5323 $tmp5322 = ($fn5323) ((frost$io$OutputStream*) $tmp5316)->$class->vtable[19];
frost$core$Error* $tmp5324 = $tmp5322(((frost$io$OutputStream*) $tmp5316), $tmp5320);
if ($tmp5324 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5324));
*(&local0) = $tmp5324;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5317));
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5317));
goto block4;
block5:;
// line 1
// line 1502
frost$io$IndentedOutputStream** $tmp5325 = &param0->out;
frost$io$IndentedOutputStream* $tmp5326 = *$tmp5325;
$fn5328 $tmp5327 = ($fn5328) ((frost$io$OutputStream*) $tmp5326)->$class->vtable[19];
frost$core$Error* $tmp5329 = $tmp5327(((frost$io$OutputStream*) $tmp5326), &$s5330);
if ($tmp5329 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5329));
*(&local0) = $tmp5329;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5329));
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5329));
goto block4;
block4:;
goto block2;
block1:;
// line 1506
frost$core$Int64 $tmp5331 = (frost$core$Int64) {1506};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5332, $tmp5331);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5333 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5333));
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
frost$core$Weak** $tmp5334 = &param2->owner;
frost$core$Weak* $tmp5335 = *$tmp5334;
frost$core$Object* $tmp5336 = frost$core$Weak$get$R$frost$core$Weak$T($tmp5335);
frost$core$Bit* $tmp5337 = &((org$frostlang$frostc$ClassDecl*) $tmp5336)->external;
frost$core$Bit $tmp5338 = *$tmp5337;
bool $tmp5339 = $tmp5338.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp5336);
if ($tmp5339) goto block3; else goto block4;
block3:;
// line 1513
org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param2);
goto block4;
block4:;
// line 1515
frost$core$Bit $tmp5340 = org$frostlang$frostc$CCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, param2);
*(&local1) = $tmp5340;
// line 1516
org$frostlang$frostc$Type** $tmp5341 = &param2->returnType;
org$frostlang$frostc$Type* $tmp5342 = *$tmp5341;
frost$core$String* $tmp5343 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5342);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5343));
frost$core$String* $tmp5344 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5344));
*(&local2) = $tmp5343;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5343));
// line 1517
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s5345));
frost$core$String* $tmp5346 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5346));
*(&local3) = &$s5347;
// line 1518
*(&local4) = ((frost$core$String*) NULL);
// line 1519
org$frostlang$frostc$Type** $tmp5348 = &param2->returnType;
org$frostlang$frostc$Type* $tmp5349 = *$tmp5348;
org$frostlang$frostc$Type* $tmp5350 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp5351 = ((frost$core$Equatable*) $tmp5349)->$class->itable;
while ($tmp5351->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5351 = $tmp5351->next;
}
$fn5353 $tmp5352 = $tmp5351->methods[1];
frost$core$Bit $tmp5354 = $tmp5352(((frost$core$Equatable*) $tmp5349), ((frost$core$Equatable*) $tmp5350));
bool $tmp5355 = $tmp5354.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5350));
if ($tmp5355) goto block5; else goto block6;
block5:;
// line 1520
frost$core$String* $tmp5356 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5356));
frost$core$String* $tmp5357 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5357));
*(&local4) = $tmp5356;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5356));
// line 1521
frost$core$Bit $tmp5358 = *(&local1);
bool $tmp5359 = $tmp5358.value;
if ($tmp5359) goto block7; else goto block9;
block7:;
// line 1522
frost$io$IndentedOutputStream** $tmp5360 = &param0->out;
frost$io$IndentedOutputStream* $tmp5361 = *$tmp5360;
frost$core$String* $tmp5362 = *(&local2);
frost$core$String* $tmp5363 = frost$core$String$get_asString$R$frost$core$String($tmp5362);
frost$core$String* $tmp5364 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5363, &$s5365);
frost$core$String* $tmp5366 = *(&local4);
frost$core$String* $tmp5367 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5364, $tmp5366);
frost$core$String* $tmp5368 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5367, &$s5369);
$fn5371 $tmp5370 = ($fn5371) ((frost$io$OutputStream*) $tmp5361)->$class->vtable[19];
frost$core$Error* $tmp5372 = $tmp5370(((frost$io$OutputStream*) $tmp5361), $tmp5368);
if ($tmp5372 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5372));
*(&local0) = $tmp5372;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5367));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5363));
frost$core$String* $tmp5373 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5373));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5374 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5374));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5375 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5375));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5367));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5363));
goto block8;
block9:;
// line 1
// line 1525
frost$io$IndentedOutputStream** $tmp5376 = &param0->out;
frost$io$IndentedOutputStream* $tmp5377 = *$tmp5376;
frost$core$String* $tmp5378 = *(&local2);
frost$core$String* $tmp5379 = frost$core$String$get_asString$R$frost$core$String($tmp5378);
frost$core$String* $tmp5380 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5379, &$s5381);
frost$core$String* $tmp5382 = *(&local4);
frost$core$String* $tmp5383 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5380, $tmp5382);
frost$core$String* $tmp5384 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5383, &$s5385);
$fn5387 $tmp5386 = ($fn5387) ((frost$io$OutputStream*) $tmp5377)->$class->vtable[17];
frost$core$Error* $tmp5388 = $tmp5386(((frost$io$OutputStream*) $tmp5377), $tmp5384);
if ($tmp5388 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5388));
*(&local0) = $tmp5388;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5379));
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
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5379));
goto block8;
block8:;
// line 1527
frost$collections$HashMap** $tmp5392 = &param0->refs;
frost$collections$HashMap* $tmp5393 = *$tmp5392;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5394;
$tmp5394 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5394->value = param1;
frost$core$String* $tmp5395 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5393, ((frost$collections$Key*) $tmp5394), ((frost$core$Object*) $tmp5395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5394)));
goto block6;
block6:;
// line 1529
frost$io$IndentedOutputStream** $tmp5396 = &param0->out;
frost$io$IndentedOutputStream* $tmp5397 = *$tmp5396;
frost$core$String* $tmp5398 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param2);
frost$core$String* $tmp5399 = frost$core$String$get_asString$R$frost$core$String($tmp5398);
frost$core$String* $tmp5400 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5399, &$s5401);
$fn5403 $tmp5402 = ($fn5403) ((frost$io$OutputStream*) $tmp5397)->$class->vtable[17];
frost$core$Error* $tmp5404 = $tmp5402(((frost$io$OutputStream*) $tmp5397), $tmp5400);
if ($tmp5404 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5404));
*(&local0) = $tmp5404;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5399));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5398));
frost$core$String* $tmp5405 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5405));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5406 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5406));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5407 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5407));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5399));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5398));
// line 1530
frost$core$Bit $tmp5408 = *(&local1);
bool $tmp5409 = $tmp5408.value;
if ($tmp5409) goto block16; else goto block17;
block16:;
// line 1531
frost$io$IndentedOutputStream** $tmp5410 = &param0->out;
frost$io$IndentedOutputStream* $tmp5411 = *$tmp5410;
frost$core$String* $tmp5412 = *(&local4);
frost$core$String* $tmp5413 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5414, $tmp5412);
frost$core$String* $tmp5415 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5413, &$s5416);
$fn5418 $tmp5417 = ($fn5418) ((frost$io$OutputStream*) $tmp5411)->$class->vtable[17];
frost$core$Error* $tmp5419 = $tmp5417(((frost$io$OutputStream*) $tmp5411), $tmp5415);
if ($tmp5419 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5419));
*(&local0) = $tmp5419;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5419));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5413));
frost$core$String* $tmp5420 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5420));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5421 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5421));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5422 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5422));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5419));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5413));
// line 1532
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s5423));
frost$core$String* $tmp5424 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5424));
*(&local3) = &$s5425;
goto block17;
block17:;
// line 1534
ITable* $tmp5426 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp5426->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp5426 = $tmp5426->next;
}
$fn5428 $tmp5427 = $tmp5426->methods[0];
frost$collections$Iterator* $tmp5429 = $tmp5427(((frost$collections$Iterable*) param3));
goto block20;
block20:;
ITable* $tmp5430 = $tmp5429->$class->itable;
while ($tmp5430->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp5430 = $tmp5430->next;
}
$fn5432 $tmp5431 = $tmp5430->methods[0];
frost$core$Bit $tmp5433 = $tmp5431($tmp5429);
bool $tmp5434 = $tmp5433.value;
if ($tmp5434) goto block22; else goto block21;
block21:;
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
ITable* $tmp5435 = $tmp5429->$class->itable;
while ($tmp5435->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp5435 = $tmp5435->next;
}
$fn5437 $tmp5436 = $tmp5435->methods[1];
frost$core$Object* $tmp5438 = $tmp5436($tmp5429);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) $tmp5438)));
org$frostlang$frostc$IR$Value* $tmp5439 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5439));
*(&local5) = ((org$frostlang$frostc$IR$Value*) $tmp5438);
// line 1535
frost$io$IndentedOutputStream** $tmp5440 = &param0->out;
frost$io$IndentedOutputStream* $tmp5441 = *$tmp5440;
frost$core$String* $tmp5442 = *(&local3);
$fn5444 $tmp5443 = ($fn5444) ((frost$io$OutputStream*) $tmp5441)->$class->vtable[17];
frost$core$Error* $tmp5445 = $tmp5443(((frost$io$OutputStream*) $tmp5441), $tmp5442);
if ($tmp5445 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5445));
*(&local0) = $tmp5445;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5445));
frost$core$Frost$unref$frost$core$Object$Q($tmp5438);
org$frostlang$frostc$IR$Value* $tmp5446 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5446));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5429));
frost$core$String* $tmp5447 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5447));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5448 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5448));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5449 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5449));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5445));
// line 1536
frost$io$IndentedOutputStream** $tmp5450 = &param0->out;
frost$io$IndentedOutputStream* $tmp5451 = *$tmp5450;
org$frostlang$frostc$IR$Value* $tmp5452 = *(&local5);
frost$core$String* $tmp5453 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, $tmp5452);
$fn5455 $tmp5454 = ($fn5455) ((frost$io$OutputStream*) $tmp5451)->$class->vtable[17];
frost$core$Error* $tmp5456 = $tmp5454(((frost$io$OutputStream*) $tmp5451), $tmp5453);
if ($tmp5456 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5456));
*(&local0) = $tmp5456;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5456));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5453));
frost$core$Frost$unref$frost$core$Object$Q($tmp5438);
org$frostlang$frostc$IR$Value* $tmp5457 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5457));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5429));
frost$core$String* $tmp5458 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5458));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5459 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5459));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5460 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5460));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5456));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5453));
// line 1537
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s5461));
frost$core$String* $tmp5462 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5462));
*(&local3) = &$s5463;
frost$core$Frost$unref$frost$core$Object$Q($tmp5438);
org$frostlang$frostc$IR$Value* $tmp5464 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5464));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block20;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5429));
// line 1539
frost$io$IndentedOutputStream** $tmp5465 = &param0->out;
frost$io$IndentedOutputStream* $tmp5466 = *$tmp5465;
$fn5468 $tmp5467 = ($fn5468) ((frost$io$OutputStream*) $tmp5466)->$class->vtable[19];
frost$core$Error* $tmp5469 = $tmp5467(((frost$io$OutputStream*) $tmp5466), &$s5470);
if ($tmp5469 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5469));
*(&local0) = $tmp5469;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5469));
frost$core$String* $tmp5471 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5471));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5472 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5472));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5473 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5473));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5469));
frost$core$String* $tmp5474 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5474));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5475 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5475));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5476 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5476));
*(&local2) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1542
frost$core$Int64 $tmp5477 = (frost$core$Int64) {1542};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5478, $tmp5477);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5479 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5479));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeStore$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Error* local0 = NULL;
// line 1547
*(&local0) = ((frost$core$Error*) NULL);
// line 1548
frost$io$IndentedOutputStream** $tmp5480 = &param0->out;
frost$io$IndentedOutputStream* $tmp5481 = *$tmp5480;
frost$core$String* $tmp5482 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp5483 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5484, $tmp5482);
frost$core$String* $tmp5485 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5483, &$s5486);
frost$core$String* $tmp5487 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
frost$core$String* $tmp5488 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5485, $tmp5487);
frost$core$String* $tmp5489 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5488, &$s5490);
$fn5492 $tmp5491 = ($fn5492) ((frost$io$OutputStream*) $tmp5481)->$class->vtable[19];
frost$core$Error* $tmp5493 = $tmp5491(((frost$io$OutputStream*) $tmp5481), $tmp5489);
if ($tmp5493 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5493));
*(&local0) = $tmp5493;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5489));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5488));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5485));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5482));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5489));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5488));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5485));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5482));
goto block2;
block1:;
// line 1551
frost$core$Int64 $tmp5494 = (frost$core$Int64) {1551};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5495, $tmp5494);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5496 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5496));
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
frost$core$Int64* $tmp5497 = &param2->$rawValue;
frost$core$Int64 $tmp5498 = *$tmp5497;
frost$core$Int64 $tmp5499 = (frost$core$Int64) {0};
frost$core$Bit $tmp5500 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5499);
bool $tmp5501 = $tmp5500.value;
if ($tmp5501) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp5502 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5503 = *$tmp5502;
*(&local1) = $tmp5503;
org$frostlang$frostc$IR$Value** $tmp5504 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5505 = *$tmp5504;
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5505));
org$frostlang$frostc$IR$Value* $tmp5506 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5506));
*(&local2) = $tmp5505;
org$frostlang$frostc$expression$Binary$Operator* $tmp5507 = (org$frostlang$frostc$expression$Binary$Operator*) (param2->$data + 24);
org$frostlang$frostc$expression$Binary$Operator $tmp5508 = *$tmp5507;
*(&local3) = $tmp5508;
org$frostlang$frostc$IR$Value** $tmp5509 = (org$frostlang$frostc$IR$Value**) (param2->$data + 32);
org$frostlang$frostc$IR$Value* $tmp5510 = *$tmp5509;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5510));
org$frostlang$frostc$IR$Value* $tmp5511 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5511));
*(&local4) = $tmp5510;
org$frostlang$frostc$Type** $tmp5512 = (org$frostlang$frostc$Type**) (param2->$data + 40);
org$frostlang$frostc$Type* $tmp5513 = *$tmp5512;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5513));
org$frostlang$frostc$Type* $tmp5514 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5514));
*(&local5) = $tmp5513;
// line 1559
org$frostlang$frostc$IR$Value* $tmp5515 = *(&local2);
org$frostlang$frostc$expression$Binary$Operator $tmp5516 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp5517 = *(&local4);
org$frostlang$frostc$Type* $tmp5518 = *(&local5);
org$frostlang$frostc$CCodeGenerator$writeBinary$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(param0, param1, $tmp5515, $tmp5516, $tmp5517, $tmp5518);
org$frostlang$frostc$Type* $tmp5519 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5519));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp5520 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5520));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5521 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5521));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block5:;
frost$core$Int64 $tmp5522 = (frost$core$Int64) {1};
frost$core$Bit $tmp5523 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5522);
bool $tmp5524 = $tmp5523.value;
if ($tmp5524) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp5525 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5526 = *$tmp5525;
*(&local6) = $tmp5526;
org$frostlang$frostc$IR$Block$ID* $tmp5527 = (org$frostlang$frostc$IR$Block$ID*) (param2->$data + 16);
org$frostlang$frostc$IR$Block$ID $tmp5528 = *$tmp5527;
*(&local7) = $tmp5528;
// line 1562
org$frostlang$frostc$IR$Block$ID $tmp5529 = *(&local7);
org$frostlang$frostc$CCodeGenerator$writeBranch$org$frostlang$frostc$IR$Block$ID(param0, $tmp5529);
goto block3;
block7:;
frost$core$Int64 $tmp5530 = (frost$core$Int64) {2};
frost$core$Bit $tmp5531 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5530);
bool $tmp5532 = $tmp5531.value;
if ($tmp5532) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp5533 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5534 = *$tmp5533;
*(&local8) = $tmp5534;
org$frostlang$frostc$IR$Value** $tmp5535 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5536 = *$tmp5535;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5536));
org$frostlang$frostc$IR$Value* $tmp5537 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5537));
*(&local9) = $tmp5536;
org$frostlang$frostc$Type** $tmp5538 = (org$frostlang$frostc$Type**) (param2->$data + 24);
org$frostlang$frostc$Type* $tmp5539 = *$tmp5538;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5539));
org$frostlang$frostc$Type* $tmp5540 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5540));
*(&local10) = $tmp5539;
frost$core$Bit* $tmp5541 = (frost$core$Bit*) (param2->$data + 32);
frost$core$Bit $tmp5542 = *$tmp5541;
// line 1565
org$frostlang$frostc$IR$Value* $tmp5543 = *(&local9);
org$frostlang$frostc$Type* $tmp5544 = *(&local10);
org$frostlang$frostc$CCodeGenerator$writeCast$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(param0, param1, $tmp5543, $tmp5544);
org$frostlang$frostc$Type* $tmp5545 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5545));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp5546 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5546));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block9:;
frost$core$Int64 $tmp5547 = (frost$core$Int64) {3};
frost$core$Bit $tmp5548 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5547);
bool $tmp5549 = $tmp5548.value;
if ($tmp5549) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp5550 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5551 = *$tmp5550;
frost$core$String** $tmp5552 = (frost$core$String**) (param2->$data + 16);
frost$core$String* $tmp5553 = *$tmp5552;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5553));
frost$core$String* $tmp5554 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5554));
*(&local11) = $tmp5553;
// line 1568
frost$io$IndentedOutputStream** $tmp5555 = &param0->out;
frost$io$IndentedOutputStream* $tmp5556 = *$tmp5555;
frost$core$String* $tmp5557 = *(&local11);
frost$core$String* $tmp5558 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5559, $tmp5557);
frost$core$String* $tmp5560 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5558, &$s5561);
$fn5563 $tmp5562 = ($fn5563) ((frost$io$OutputStream*) $tmp5556)->$class->vtable[19];
frost$core$Error* $tmp5564 = $tmp5562(((frost$io$OutputStream*) $tmp5556), $tmp5560);
if ($tmp5564 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5564));
*(&local0) = $tmp5564;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5560));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5558));
frost$core$String* $tmp5565 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5565));
*(&local11) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5560));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5558));
frost$core$String* $tmp5566 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5566));
*(&local11) = ((frost$core$String*) NULL);
goto block3;
block11:;
frost$core$Int64 $tmp5567 = (frost$core$Int64) {5};
frost$core$Bit $tmp5568 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5567);
bool $tmp5569 = $tmp5568.value;
if ($tmp5569) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp5570 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5571 = *$tmp5570;
*(&local12) = $tmp5571;
org$frostlang$frostc$IR$Value** $tmp5572 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5573 = *$tmp5572;
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5573));
org$frostlang$frostc$IR$Value* $tmp5574 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5574));
*(&local13) = $tmp5573;
org$frostlang$frostc$IR$Block$ID* $tmp5575 = (org$frostlang$frostc$IR$Block$ID*) (param2->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp5576 = *$tmp5575;
*(&local14) = $tmp5576;
org$frostlang$frostc$IR$Block$ID* $tmp5577 = (org$frostlang$frostc$IR$Block$ID*) (param2->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp5578 = *$tmp5577;
*(&local15) = $tmp5578;
// line 1571
org$frostlang$frostc$IR$Value* $tmp5579 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp5580 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp5581 = *(&local15);
org$frostlang$frostc$CCodeGenerator$writeConditionalBranch$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(param0, $tmp5579, $tmp5580, $tmp5581);
org$frostlang$frostc$IR$Value* $tmp5582 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5582));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block15:;
frost$core$Int64 $tmp5583 = (frost$core$Int64) {6};
frost$core$Bit $tmp5584 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5583);
bool $tmp5585 = $tmp5584.value;
if ($tmp5585) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp5586 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5587 = *$tmp5586;
*(&local16) = $tmp5587;
org$frostlang$frostc$ClassDecl** $tmp5588 = (org$frostlang$frostc$ClassDecl**) (param2->$data + 16);
org$frostlang$frostc$ClassDecl* $tmp5589 = *$tmp5588;
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5589));
org$frostlang$frostc$ClassDecl* $tmp5590 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5590));
*(&local17) = $tmp5589;
// line 1574
org$frostlang$frostc$ClassDecl* $tmp5591 = *(&local17);
org$frostlang$frostc$CCodeGenerator$writeConstruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl(param0, param1, $tmp5591);
org$frostlang$frostc$ClassDecl* $tmp5592 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5592));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block3;
block17:;
frost$core$Int64 $tmp5593 = (frost$core$Int64) {7};
frost$core$Bit $tmp5594 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5593);
bool $tmp5595 = $tmp5594.value;
if ($tmp5595) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp5596 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5597 = *$tmp5596;
*(&local18) = $tmp5597;
org$frostlang$frostc$ClassDecl** $tmp5598 = (org$frostlang$frostc$ClassDecl**) (param2->$data + 16);
org$frostlang$frostc$ClassDecl* $tmp5599 = *$tmp5598;
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5599));
org$frostlang$frostc$ClassDecl* $tmp5600 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5600));
*(&local19) = $tmp5599;
org$frostlang$frostc$FixedArray** $tmp5601 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp5602 = *$tmp5601;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5602));
org$frostlang$frostc$FixedArray* $tmp5603 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5603));
*(&local20) = $tmp5602;
// line 1577
org$frostlang$frostc$ClassDecl* $tmp5604 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp5605 = *(&local20);
org$frostlang$frostc$CCodeGenerator$writeCreateStruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(param0, param1, $tmp5604, $tmp5605);
org$frostlang$frostc$FixedArray* $tmp5606 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5606));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ClassDecl* $tmp5607 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5607));
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block3;
block19:;
frost$core$Int64 $tmp5608 = (frost$core$Int64) {8};
frost$core$Bit $tmp5609 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5608);
bool $tmp5610 = $tmp5609.value;
if ($tmp5610) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp5611 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5612 = *$tmp5611;
*(&local21) = $tmp5612;
org$frostlang$frostc$IR$Value** $tmp5613 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5614 = *$tmp5613;
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5614));
org$frostlang$frostc$IR$Value* $tmp5615 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5615));
*(&local22) = $tmp5614;
org$frostlang$frostc$FixedArray** $tmp5616 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp5617 = *$tmp5616;
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5617));
org$frostlang$frostc$FixedArray* $tmp5618 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5618));
*(&local23) = $tmp5617;
// line 1580
org$frostlang$frostc$IR$Value* $tmp5619 = *(&local22);
org$frostlang$frostc$FixedArray* $tmp5620 = *(&local23);
org$frostlang$frostc$CCodeGenerator$writeDynamicCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT(param0, param1, $tmp5619, ((frost$collections$ListView*) $tmp5620));
org$frostlang$frostc$FixedArray* $tmp5621 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5621));
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp5622 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5622));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block21:;
frost$core$Int64 $tmp5623 = (frost$core$Int64) {9};
frost$core$Bit $tmp5624 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5623);
bool $tmp5625 = $tmp5624.value;
if ($tmp5625) goto block22; else goto block23;
block22:;
goto block3;
block23:;
frost$core$Int64 $tmp5626 = (frost$core$Int64) {10};
frost$core$Bit $tmp5627 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5626);
bool $tmp5628 = $tmp5627.value;
if ($tmp5628) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp5629 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5630 = *$tmp5629;
*(&local24) = $tmp5630;
org$frostlang$frostc$IR$Value** $tmp5631 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5632 = *$tmp5631;
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5632));
org$frostlang$frostc$IR$Value* $tmp5633 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5633));
*(&local25) = $tmp5632;
org$frostlang$frostc$FieldDecl** $tmp5634 = (org$frostlang$frostc$FieldDecl**) (param2->$data + 24);
org$frostlang$frostc$FieldDecl* $tmp5635 = *$tmp5634;
*(&local26) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5635));
org$frostlang$frostc$FieldDecl* $tmp5636 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5636));
*(&local26) = $tmp5635;
// line 1585
org$frostlang$frostc$IR$Value* $tmp5637 = *(&local25);
org$frostlang$frostc$FieldDecl* $tmp5638 = *(&local26);
org$frostlang$frostc$CCodeGenerator$writeExtractField$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(param0, param1, $tmp5637, $tmp5638);
org$frostlang$frostc$FieldDecl* $tmp5639 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5639));
*(&local26) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp5640 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5640));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block25:;
frost$core$Int64 $tmp5641 = (frost$core$Int64) {4};
frost$core$Bit $tmp5642 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5641);
bool $tmp5643 = $tmp5642.value;
if ($tmp5643) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp5644 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5645 = *$tmp5644;
*(&local27) = $tmp5645;
org$frostlang$frostc$IR$Value** $tmp5646 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5647 = *$tmp5646;
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5647));
org$frostlang$frostc$IR$Value* $tmp5648 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5648));
*(&local28) = $tmp5647;
org$frostlang$frostc$ChoiceCase** $tmp5649 = (org$frostlang$frostc$ChoiceCase**) (param2->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp5650 = *$tmp5649;
*(&local29) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5650));
org$frostlang$frostc$ChoiceCase* $tmp5651 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5651));
*(&local29) = $tmp5650;
frost$core$Int64* $tmp5652 = (frost$core$Int64*) (param2->$data + 32);
frost$core$Int64 $tmp5653 = *$tmp5652;
*(&local30) = $tmp5653;
// line 1588
org$frostlang$frostc$IR$Value* $tmp5654 = *(&local28);
org$frostlang$frostc$ChoiceCase* $tmp5655 = *(&local29);
frost$core$Int64 $tmp5656 = *(&local30);
org$frostlang$frostc$CCodeGenerator$writeGetChoiceFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64(param0, param1, $tmp5654, $tmp5655, $tmp5656);
org$frostlang$frostc$ChoiceCase* $tmp5657 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5657));
*(&local29) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$IR$Value* $tmp5658 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5658));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block27:;
frost$core$Int64 $tmp5659 = (frost$core$Int64) {11};
frost$core$Bit $tmp5660 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5659);
bool $tmp5661 = $tmp5660.value;
if ($tmp5661) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp5662 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5663 = *$tmp5662;
*(&local31) = $tmp5663;
org$frostlang$frostc$IR$Value** $tmp5664 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5665 = *$tmp5664;
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5665));
org$frostlang$frostc$IR$Value* $tmp5666 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5666));
*(&local32) = $tmp5665;
org$frostlang$frostc$FieldDecl** $tmp5667 = (org$frostlang$frostc$FieldDecl**) (param2->$data + 24);
org$frostlang$frostc$FieldDecl* $tmp5668 = *$tmp5667;
*(&local33) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5668));
org$frostlang$frostc$FieldDecl* $tmp5669 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5669));
*(&local33) = $tmp5668;
// line 1591
org$frostlang$frostc$IR$Value* $tmp5670 = *(&local32);
org$frostlang$frostc$FieldDecl* $tmp5671 = *(&local33);
org$frostlang$frostc$CCodeGenerator$writeGetFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(param0, param1, $tmp5670, $tmp5671);
org$frostlang$frostc$FieldDecl* $tmp5672 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5672));
*(&local33) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp5673 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5673));
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block29:;
frost$core$Int64 $tmp5674 = (frost$core$Int64) {13};
frost$core$Bit $tmp5675 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5674);
bool $tmp5676 = $tmp5675.value;
if ($tmp5676) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp5677 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5678 = *$tmp5677;
*(&local34) = $tmp5678;
org$frostlang$frostc$IR$Value** $tmp5679 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5680 = *$tmp5679;
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5680));
org$frostlang$frostc$IR$Value* $tmp5681 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5681));
*(&local35) = $tmp5680;
org$frostlang$frostc$ClassDecl** $tmp5682 = (org$frostlang$frostc$ClassDecl**) (param2->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp5683 = *$tmp5682;
*(&local36) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5683));
org$frostlang$frostc$ClassDecl* $tmp5684 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5684));
*(&local36) = $tmp5683;
frost$core$Int64* $tmp5685 = (frost$core$Int64*) (param2->$data + 32);
frost$core$Int64 $tmp5686 = *$tmp5685;
*(&local37) = $tmp5686;
org$frostlang$frostc$Type** $tmp5687 = (org$frostlang$frostc$Type**) (param2->$data + 40);
org$frostlang$frostc$Type* $tmp5688 = *$tmp5687;
*(&local38) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5688));
org$frostlang$frostc$Type* $tmp5689 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5689));
*(&local38) = $tmp5688;
// line 1594
org$frostlang$frostc$IR$Value* $tmp5690 = *(&local35);
org$frostlang$frostc$ClassDecl* $tmp5691 = *(&local36);
frost$core$Int64 $tmp5692 = *(&local37);
org$frostlang$frostc$Type* $tmp5693 = *(&local38);
org$frostlang$frostc$CCodeGenerator$writeGetInterfaceMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int64$org$frostlang$frostc$Type(param0, param1, $tmp5690, $tmp5691, $tmp5692, $tmp5693);
org$frostlang$frostc$Type* $tmp5694 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5694));
*(&local38) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ClassDecl* $tmp5695 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5695));
*(&local36) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp5696 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5696));
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block31:;
frost$core$Int64 $tmp5697 = (frost$core$Int64) {12};
frost$core$Bit $tmp5698 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5697);
bool $tmp5699 = $tmp5698.value;
if ($tmp5699) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp5700 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5701 = *$tmp5700;
*(&local39) = $tmp5701;
org$frostlang$frostc$IR$Value** $tmp5702 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5703 = *$tmp5702;
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5703));
org$frostlang$frostc$IR$Value* $tmp5704 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5704));
*(&local40) = $tmp5703;
frost$core$Int64* $tmp5705 = (frost$core$Int64*) (param2->$data + 24);
frost$core$Int64 $tmp5706 = *$tmp5705;
*(&local41) = $tmp5706;
org$frostlang$frostc$Type** $tmp5707 = (org$frostlang$frostc$Type**) (param2->$data + 32);
org$frostlang$frostc$Type* $tmp5708 = *$tmp5707;
*(&local42) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5708));
org$frostlang$frostc$Type* $tmp5709 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5709));
*(&local42) = $tmp5708;
// line 1597
org$frostlang$frostc$IR$Value* $tmp5710 = *(&local40);
frost$core$Int64 $tmp5711 = *(&local41);
org$frostlang$frostc$Type* $tmp5712 = *(&local42);
org$frostlang$frostc$CCodeGenerator$writeGetVirtualMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$core$Int64$org$frostlang$frostc$Type(param0, param1, $tmp5710, $tmp5711, $tmp5712);
org$frostlang$frostc$Type* $tmp5713 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5713));
*(&local42) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp5714 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5714));
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block33:;
frost$core$Int64 $tmp5715 = (frost$core$Int64) {14};
frost$core$Bit $tmp5716 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5715);
bool $tmp5717 = $tmp5716.value;
if ($tmp5717) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Position* $tmp5718 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5719 = *$tmp5718;
*(&local43) = $tmp5719;
org$frostlang$frostc$IR$Value** $tmp5720 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5721 = *$tmp5720;
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5721));
org$frostlang$frostc$IR$Value* $tmp5722 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5722));
*(&local44) = $tmp5721;
// line 1600
org$frostlang$frostc$IR$Value* $tmp5723 = *(&local44);
org$frostlang$frostc$CCodeGenerator$writeLoad$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, $tmp5723);
org$frostlang$frostc$IR$Value* $tmp5724 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5724));
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block35:;
frost$core$Int64 $tmp5725 = (frost$core$Int64) {15};
frost$core$Bit $tmp5726 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5725);
bool $tmp5727 = $tmp5726.value;
if ($tmp5727) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Position* $tmp5728 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5729 = *$tmp5728;
*(&local45) = $tmp5729;
org$frostlang$frostc$IR$Value** $tmp5730 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5731 = *$tmp5730;
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5731));
org$frostlang$frostc$IR$Value* $tmp5732 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5732));
*(&local46) = $tmp5731;
// line 1603
org$frostlang$frostc$IR$Value* $tmp5733 = *(&local46);
org$frostlang$frostc$CCodeGenerator$writeNegate$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, $tmp5733);
org$frostlang$frostc$IR$Value* $tmp5734 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5734));
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block37:;
frost$core$Int64 $tmp5735 = (frost$core$Int64) {16};
frost$core$Bit $tmp5736 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5735);
bool $tmp5737 = $tmp5736.value;
if ($tmp5737) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp5738 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5739 = *$tmp5738;
*(&local47) = $tmp5739;
org$frostlang$frostc$IR$Value** $tmp5740 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5741 = *$tmp5740;
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5741));
org$frostlang$frostc$IR$Value* $tmp5742 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5742));
*(&local48) = $tmp5741;
// line 1606
org$frostlang$frostc$IR$Value* $tmp5743 = *(&local48);
org$frostlang$frostc$CCodeGenerator$writeNot$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, $tmp5743);
org$frostlang$frostc$IR$Value* $tmp5744 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5744));
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block39:;
frost$core$Int64 $tmp5745 = (frost$core$Int64) {17};
frost$core$Bit $tmp5746 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5745);
bool $tmp5747 = $tmp5746.value;
if ($tmp5747) goto block40; else goto block41;
block40:;
org$frostlang$frostc$Position* $tmp5748 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5749 = *$tmp5748;
*(&local49) = $tmp5749;
org$frostlang$frostc$IR$Value** $tmp5750 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5751 = *$tmp5750;
*(&local50) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5751));
org$frostlang$frostc$IR$Value* $tmp5752 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5752));
*(&local50) = $tmp5751;
org$frostlang$frostc$Type** $tmp5753 = (org$frostlang$frostc$Type**) (param2->$data + 24);
org$frostlang$frostc$Type* $tmp5754 = *$tmp5753;
*(&local51) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5754));
org$frostlang$frostc$Type* $tmp5755 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5755));
*(&local51) = $tmp5754;
// line 1609
org$frostlang$frostc$IR$Value* $tmp5756 = *(&local50);
org$frostlang$frostc$Type* $tmp5757 = *(&local51);
org$frostlang$frostc$CCodeGenerator$writePointerAlloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(param0, param1, $tmp5756, $tmp5757);
org$frostlang$frostc$Type* $tmp5758 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5758));
*(&local51) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp5759 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5759));
*(&local50) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block41:;
frost$core$Int64 $tmp5760 = (frost$core$Int64) {18};
frost$core$Bit $tmp5761 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5760);
bool $tmp5762 = $tmp5761.value;
if ($tmp5762) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp5763 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5764 = *$tmp5763;
*(&local52) = $tmp5764;
org$frostlang$frostc$IR$Value** $tmp5765 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5766 = *$tmp5765;
*(&local53) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5766));
org$frostlang$frostc$IR$Value* $tmp5767 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5767));
*(&local53) = $tmp5766;
// line 1612
org$frostlang$frostc$IR$Value* $tmp5768 = *(&local53);
org$frostlang$frostc$CCodeGenerator$writePointerDestroy$org$frostlang$frostc$IR$Value(param0, $tmp5768);
org$frostlang$frostc$IR$Value* $tmp5769 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5769));
*(&local53) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block43:;
frost$core$Int64 $tmp5770 = (frost$core$Int64) {20};
frost$core$Bit $tmp5771 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5770);
bool $tmp5772 = $tmp5771.value;
if ($tmp5772) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp5773 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5774 = *$tmp5773;
*(&local54) = $tmp5774;
org$frostlang$frostc$IR$Value** $tmp5775 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5776 = *$tmp5775;
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5776));
org$frostlang$frostc$IR$Value* $tmp5777 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5777));
*(&local55) = $tmp5776;
org$frostlang$frostc$IR$Value** $tmp5778 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5779 = *$tmp5778;
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5779));
org$frostlang$frostc$IR$Value* $tmp5780 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5780));
*(&local56) = $tmp5779;
// line 1615
org$frostlang$frostc$IR$Value* $tmp5781 = *(&local55);
org$frostlang$frostc$IR$Value* $tmp5782 = *(&local56);
org$frostlang$frostc$CCodeGenerator$writePointerGetIndex$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, param1, $tmp5781, $tmp5782);
org$frostlang$frostc$IR$Value* $tmp5783 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5783));
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5784 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5784));
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block45:;
frost$core$Int64 $tmp5785 = (frost$core$Int64) {21};
frost$core$Bit $tmp5786 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5785);
bool $tmp5787 = $tmp5786.value;
if ($tmp5787) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp5788 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5789 = *$tmp5788;
*(&local57) = $tmp5789;
org$frostlang$frostc$IR$Value** $tmp5790 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5791 = *$tmp5790;
*(&local58) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5791));
org$frostlang$frostc$IR$Value* $tmp5792 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5792));
*(&local58) = $tmp5791;
org$frostlang$frostc$IR$Value** $tmp5793 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5794 = *$tmp5793;
*(&local59) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5794));
org$frostlang$frostc$IR$Value* $tmp5795 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5795));
*(&local59) = $tmp5794;
// line 1618
org$frostlang$frostc$IR$Value* $tmp5796 = *(&local58);
org$frostlang$frostc$IR$Value* $tmp5797 = *(&local59);
org$frostlang$frostc$CCodeGenerator$writePointerOffset$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, param1, $tmp5796, $tmp5797);
org$frostlang$frostc$IR$Value* $tmp5798 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5798));
*(&local59) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5799 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5799));
*(&local58) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block47:;
frost$core$Int64 $tmp5800 = (frost$core$Int64) {22};
frost$core$Bit $tmp5801 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5800);
bool $tmp5802 = $tmp5801.value;
if ($tmp5802) goto block48; else goto block49;
block48:;
org$frostlang$frostc$Position* $tmp5803 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5804 = *$tmp5803;
*(&local60) = $tmp5804;
org$frostlang$frostc$IR$Value** $tmp5805 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5806 = *$tmp5805;
*(&local61) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5806));
org$frostlang$frostc$IR$Value* $tmp5807 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5807));
*(&local61) = $tmp5806;
org$frostlang$frostc$IR$Value** $tmp5808 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5809 = *$tmp5808;
*(&local62) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5809));
org$frostlang$frostc$IR$Value* $tmp5810 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5810));
*(&local62) = $tmp5809;
org$frostlang$frostc$IR$Value** $tmp5811 = (org$frostlang$frostc$IR$Value**) (param2->$data + 32);
org$frostlang$frostc$IR$Value* $tmp5812 = *$tmp5811;
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5812));
org$frostlang$frostc$IR$Value* $tmp5813 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5813));
*(&local63) = $tmp5812;
// line 1621
org$frostlang$frostc$IR$Value* $tmp5814 = *(&local61);
org$frostlang$frostc$IR$Value* $tmp5815 = *(&local62);
org$frostlang$frostc$IR$Value* $tmp5816 = *(&local63);
org$frostlang$frostc$CCodeGenerator$writePointerRealloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, param1, $tmp5814, $tmp5815, $tmp5816);
org$frostlang$frostc$IR$Value* $tmp5817 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5817));
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5818 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5818));
*(&local62) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5819 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5819));
*(&local61) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block49:;
frost$core$Int64 $tmp5820 = (frost$core$Int64) {24};
frost$core$Bit $tmp5821 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5820);
bool $tmp5822 = $tmp5821.value;
if ($tmp5822) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Position* $tmp5823 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5824 = *$tmp5823;
*(&local64) = $tmp5824;
org$frostlang$frostc$IR$Value** $tmp5825 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5826 = *$tmp5825;
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5826));
org$frostlang$frostc$IR$Value* $tmp5827 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5827));
*(&local65) = $tmp5826;
org$frostlang$frostc$IR$Value** $tmp5828 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5829 = *$tmp5828;
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5829));
org$frostlang$frostc$IR$Value* $tmp5830 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5830));
*(&local66) = $tmp5829;
org$frostlang$frostc$IR$Value** $tmp5831 = (org$frostlang$frostc$IR$Value**) (param2->$data + 32);
org$frostlang$frostc$IR$Value* $tmp5832 = *$tmp5831;
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5832));
org$frostlang$frostc$IR$Value* $tmp5833 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5833));
*(&local67) = $tmp5832;
// line 1624
org$frostlang$frostc$IR$Value* $tmp5834 = *(&local65);
org$frostlang$frostc$IR$Value* $tmp5835 = *(&local66);
org$frostlang$frostc$IR$Value* $tmp5836 = *(&local67);
org$frostlang$frostc$CCodeGenerator$writePointerSetIndex$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, $tmp5834, $tmp5835, $tmp5836);
org$frostlang$frostc$IR$Value* $tmp5837 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5837));
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5838 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5838));
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5839 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5839));
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block51:;
frost$core$Int64 $tmp5840 = (frost$core$Int64) {25};
frost$core$Bit $tmp5841 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5840);
bool $tmp5842 = $tmp5841.value;
if ($tmp5842) goto block52; else goto block53;
block52:;
org$frostlang$frostc$Position* $tmp5843 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5844 = *$tmp5843;
*(&local68) = $tmp5844;
org$frostlang$frostc$IR$Value** $tmp5845 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5846 = *$tmp5845;
*(&local69) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5846));
org$frostlang$frostc$IR$Value* $tmp5847 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5847));
*(&local69) = $tmp5846;
// line 1627
org$frostlang$frostc$IR$Value* $tmp5848 = *(&local69);
org$frostlang$frostc$CCodeGenerator$writeReturn$org$frostlang$frostc$IR$Value$Q(param0, $tmp5848);
org$frostlang$frostc$IR$Value* $tmp5849 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5849));
*(&local69) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block53:;
frost$core$Int64 $tmp5850 = (frost$core$Int64) {26};
frost$core$Bit $tmp5851 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5850);
bool $tmp5852 = $tmp5851.value;
if ($tmp5852) goto block54; else goto block55;
block54:;
org$frostlang$frostc$Position* $tmp5853 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5854 = *$tmp5853;
*(&local70) = $tmp5854;
org$frostlang$frostc$MethodDecl** $tmp5855 = (org$frostlang$frostc$MethodDecl**) (param2->$data + 16);
org$frostlang$frostc$MethodDecl* $tmp5856 = *$tmp5855;
*(&local71) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5856));
org$frostlang$frostc$MethodDecl* $tmp5857 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5857));
*(&local71) = $tmp5856;
org$frostlang$frostc$FixedArray** $tmp5858 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp5859 = *$tmp5858;
*(&local72) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5859));
org$frostlang$frostc$FixedArray* $tmp5860 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5860));
*(&local72) = $tmp5859;
// line 1630
org$frostlang$frostc$MethodDecl* $tmp5861 = *(&local71);
org$frostlang$frostc$FixedArray* $tmp5862 = *(&local72);
org$frostlang$frostc$CCodeGenerator$writeStaticCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT(param0, param1, $tmp5861, ((frost$collections$ListView*) $tmp5862));
org$frostlang$frostc$FixedArray* $tmp5863 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5863));
*(&local72) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp5864 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5864));
*(&local71) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block3;
block55:;
frost$core$Int64 $tmp5865 = (frost$core$Int64) {27};
frost$core$Bit $tmp5866 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5865);
bool $tmp5867 = $tmp5866.value;
if ($tmp5867) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp5868 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5869 = *$tmp5868;
*(&local73) = $tmp5869;
org$frostlang$frostc$IR$Value** $tmp5870 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5871 = *$tmp5870;
*(&local74) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5871));
org$frostlang$frostc$IR$Value* $tmp5872 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5872));
*(&local74) = $tmp5871;
org$frostlang$frostc$IR$Value** $tmp5873 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5874 = *$tmp5873;
*(&local75) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5874));
org$frostlang$frostc$IR$Value* $tmp5875 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5875));
*(&local75) = $tmp5874;
// line 1633
org$frostlang$frostc$IR$Value* $tmp5876 = *(&local74);
org$frostlang$frostc$IR$Value* $tmp5877 = *(&local75);
org$frostlang$frostc$CCodeGenerator$writeStore$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, $tmp5876, $tmp5877);
org$frostlang$frostc$IR$Value* $tmp5878 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5878));
*(&local75) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5879 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5879));
*(&local74) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block57:;
frost$core$Int64 $tmp5880 = (frost$core$Int64) {28};
frost$core$Bit $tmp5881 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5498, $tmp5880);
bool $tmp5882 = $tmp5881.value;
if ($tmp5882) goto block58; else goto block59;
block58:;
org$frostlang$frostc$Position* $tmp5883 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5884 = *$tmp5883;
*(&local76) = $tmp5884;
// line 1636
frost$io$IndentedOutputStream** $tmp5885 = &param0->out;
frost$io$IndentedOutputStream* $tmp5886 = *$tmp5885;
$fn5888 $tmp5887 = ($fn5888) ((frost$io$OutputStream*) $tmp5886)->$class->vtable[19];
frost$core$Error* $tmp5889 = $tmp5887(((frost$io$OutputStream*) $tmp5886), &$s5890);
if ($tmp5889 == NULL) goto block60; else goto block61;
block61:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5889));
*(&local0) = $tmp5889;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5889));
goto block1;
block60:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5889));
goto block3;
block59:;
// line 1639
frost$core$Int64 $tmp5891 = (frost$core$Int64) {1639};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5892, $tmp5891);
abort(); // unreachable
block3:;
goto block2;
block1:;
// line 1644
frost$core$Int64 $tmp5893 = (frost$core$Int64) {1644};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5894, $tmp5893);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5895 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5895));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

// line 1650
frost$core$Weak** $tmp5896 = &param1->owner;
frost$core$Weak* $tmp5897 = *$tmp5896;
frost$core$Object* $tmp5898 = frost$core$Weak$get$R$frost$core$Weak$T($tmp5897);
org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(param0, ((org$frostlang$frostc$ClassDecl*) $tmp5898));
frost$core$Frost$unref$frost$core$Object$Q($tmp5898);
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
frost$core$Int64 $tmp5899 = (frost$core$Int64) {0};
frost$collections$Array** $tmp5900 = &param1->locals;
frost$collections$Array* $tmp5901 = *$tmp5900;
ITable* $tmp5902 = ((frost$collections$CollectionView*) $tmp5901)->$class->itable;
while ($tmp5902->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5902 = $tmp5902->next;
}
$fn5904 $tmp5903 = $tmp5902->methods[0];
frost$core$Int64 $tmp5905 = $tmp5903(((frost$collections$CollectionView*) $tmp5901));
frost$core$Bit $tmp5906 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp5907 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp5899, $tmp5905, $tmp5906);
frost$core$Int64 $tmp5908 = $tmp5907.min;
*(&local1) = $tmp5908;
frost$core$Int64 $tmp5909 = $tmp5907.max;
frost$core$Bit $tmp5910 = $tmp5907.inclusive;
bool $tmp5911 = $tmp5910.value;
frost$core$Int64 $tmp5912 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp5913 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp5912);
if ($tmp5911) goto block6; else goto block7;
block6:;
int64_t $tmp5914 = $tmp5908.value;
int64_t $tmp5915 = $tmp5909.value;
bool $tmp5916 = $tmp5914 <= $tmp5915;
frost$core$Bit $tmp5917 = (frost$core$Bit) {$tmp5916};
bool $tmp5918 = $tmp5917.value;
if ($tmp5918) goto block3; else goto block4;
block7:;
int64_t $tmp5919 = $tmp5908.value;
int64_t $tmp5920 = $tmp5909.value;
bool $tmp5921 = $tmp5919 < $tmp5920;
frost$core$Bit $tmp5922 = (frost$core$Bit) {$tmp5921};
bool $tmp5923 = $tmp5922.value;
if ($tmp5923) goto block3; else goto block4;
block3:;
// line 1656
frost$core$Int64 $tmp5924 = *(&local1);
frost$core$Int64$wrapper* $tmp5925;
$tmp5925 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp5925->value = $tmp5924;
frost$core$String* $tmp5926 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s5927, ((frost$core$Object*) $tmp5925));
frost$core$String* $tmp5928 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5926, &$s5929);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5928));
frost$core$String* $tmp5930 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5930));
*(&local2) = $tmp5928;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5928));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5925));
// line 1657
frost$collections$Array** $tmp5931 = &param1->locals;
frost$collections$Array* $tmp5932 = *$tmp5931;
frost$core$Int64 $tmp5933 = *(&local1);
frost$core$Object* $tmp5934 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp5932, $tmp5933);
frost$core$String* $tmp5935 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp5934));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5935));
frost$core$String* $tmp5936 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5936));
*(&local3) = $tmp5935;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5935));
frost$core$Frost$unref$frost$core$Object$Q($tmp5934);
// line 1658
frost$io$IndentedOutputStream** $tmp5937 = &param0->out;
frost$io$IndentedOutputStream* $tmp5938 = *$tmp5937;
frost$core$String* $tmp5939 = *(&local3);
frost$core$String* $tmp5940 = frost$core$String$get_asString$R$frost$core$String($tmp5939);
frost$core$String* $tmp5941 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5940, &$s5942);
frost$core$String* $tmp5943 = *(&local2);
frost$core$String* $tmp5944 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5941, $tmp5943);
frost$core$String* $tmp5945 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5944, &$s5946);
$fn5948 $tmp5947 = ($fn5948) ((frost$io$OutputStream*) $tmp5938)->$class->vtable[17];
frost$core$Error* $tmp5949 = $tmp5947(((frost$io$OutputStream*) $tmp5938), $tmp5945);
if ($tmp5949 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5949));
*(&local0) = $tmp5949;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5949));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5945));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5944));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5940));
frost$core$String* $tmp5950 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5950));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5951 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5951));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5949));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5945));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5944));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5940));
// line 1659
frost$core$Weak** $tmp5952 = &param0->compiler;
frost$core$Weak* $tmp5953 = *$tmp5952;
frost$core$Object* $tmp5954 = frost$core$Weak$get$R$frost$core$Weak$T($tmp5953);
frost$collections$Array** $tmp5955 = &param1->locals;
frost$collections$Array* $tmp5956 = *$tmp5955;
frost$core$Int64 $tmp5957 = *(&local1);
frost$core$Object* $tmp5958 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp5956, $tmp5957);
frost$core$Bit $tmp5959 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp5954), ((org$frostlang$frostc$Type*) $tmp5958));
bool $tmp5960 = $tmp5959.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp5958);
frost$core$Frost$unref$frost$core$Object$Q($tmp5954);
if ($tmp5960) goto block10; else goto block11;
block10:;
// line 1660
frost$io$IndentedOutputStream** $tmp5961 = &param0->out;
frost$io$IndentedOutputStream* $tmp5962 = *$tmp5961;
$fn5964 $tmp5963 = ($fn5964) ((frost$io$OutputStream*) $tmp5962)->$class->vtable[17];
frost$core$Error* $tmp5965 = $tmp5963(((frost$io$OutputStream*) $tmp5962), &$s5966);
if ($tmp5965 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5965));
*(&local0) = $tmp5965;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5965));
frost$core$String* $tmp5967 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5967));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5968 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5968));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5965));
goto block11;
block11:;
// line 1662
frost$io$IndentedOutputStream** $tmp5969 = &param0->out;
frost$io$IndentedOutputStream* $tmp5970 = *$tmp5969;
$fn5972 $tmp5971 = ($fn5972) ((frost$io$OutputStream*) $tmp5970)->$class->vtable[19];
frost$core$Error* $tmp5973 = $tmp5971(((frost$io$OutputStream*) $tmp5970), &$s5974);
if ($tmp5973 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5973));
*(&local0) = $tmp5973;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5973));
frost$core$String* $tmp5975 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5975));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5976 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5976));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5973));
frost$core$String* $tmp5977 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5977));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5978 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5978));
*(&local2) = ((frost$core$String*) NULL);
goto block5;
block5:;
frost$core$Int64 $tmp5979 = *(&local1);
int64_t $tmp5980 = $tmp5909.value;
int64_t $tmp5981 = $tmp5979.value;
int64_t $tmp5982 = $tmp5980 - $tmp5981;
frost$core$Int64 $tmp5983 = (frost$core$Int64) {$tmp5982};
frost$core$UInt64 $tmp5984 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp5983);
if ($tmp5911) goto block17; else goto block18;
block17:;
uint64_t $tmp5985 = $tmp5984.value;
uint64_t $tmp5986 = $tmp5913.value;
bool $tmp5987 = $tmp5985 >= $tmp5986;
frost$core$Bit $tmp5988 = (frost$core$Bit) {$tmp5987};
bool $tmp5989 = $tmp5988.value;
if ($tmp5989) goto block16; else goto block4;
block18:;
uint64_t $tmp5990 = $tmp5984.value;
uint64_t $tmp5991 = $tmp5913.value;
bool $tmp5992 = $tmp5990 > $tmp5991;
frost$core$Bit $tmp5993 = (frost$core$Bit) {$tmp5992};
bool $tmp5994 = $tmp5993.value;
if ($tmp5994) goto block16; else goto block4;
block16:;
int64_t $tmp5995 = $tmp5979.value;
int64_t $tmp5996 = $tmp5912.value;
int64_t $tmp5997 = $tmp5995 + $tmp5996;
frost$core$Int64 $tmp5998 = (frost$core$Int64) {$tmp5997};
*(&local1) = $tmp5998;
goto block3;
block4:;
// line 1664
frost$core$Int64 $tmp5999 = (frost$core$Int64) {0};
frost$collections$Array** $tmp6000 = &param1->blocks;
frost$collections$Array* $tmp6001 = *$tmp6000;
ITable* $tmp6002 = ((frost$collections$CollectionView*) $tmp6001)->$class->itable;
while ($tmp6002->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp6002 = $tmp6002->next;
}
$fn6004 $tmp6003 = $tmp6002->methods[0];
frost$core$Int64 $tmp6005 = $tmp6003(((frost$collections$CollectionView*) $tmp6001));
frost$core$Bit $tmp6006 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp6007 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp5999, $tmp6005, $tmp6006);
frost$core$Int64 $tmp6008 = $tmp6007.min;
*(&local4) = $tmp6008;
frost$core$Int64 $tmp6009 = $tmp6007.max;
frost$core$Bit $tmp6010 = $tmp6007.inclusive;
bool $tmp6011 = $tmp6010.value;
frost$core$Int64 $tmp6012 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp6013 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp6012);
if ($tmp6011) goto block22; else goto block23;
block22:;
int64_t $tmp6014 = $tmp6008.value;
int64_t $tmp6015 = $tmp6009.value;
bool $tmp6016 = $tmp6014 <= $tmp6015;
frost$core$Bit $tmp6017 = (frost$core$Bit) {$tmp6016};
bool $tmp6018 = $tmp6017.value;
if ($tmp6018) goto block19; else goto block20;
block23:;
int64_t $tmp6019 = $tmp6008.value;
int64_t $tmp6020 = $tmp6009.value;
bool $tmp6021 = $tmp6019 < $tmp6020;
frost$core$Bit $tmp6022 = (frost$core$Bit) {$tmp6021};
bool $tmp6023 = $tmp6022.value;
if ($tmp6023) goto block19; else goto block20;
block19:;
// line 1665
frost$collections$Array** $tmp6024 = &param1->blocks;
frost$collections$Array* $tmp6025 = *$tmp6024;
frost$core$Int64 $tmp6026 = *(&local4);
frost$core$Object* $tmp6027 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp6025, $tmp6026);
*(&local5) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp6027)));
org$frostlang$frostc$IR$Block* $tmp6028 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6028));
*(&local5) = ((org$frostlang$frostc$IR$Block*) $tmp6027);
frost$core$Frost$unref$frost$core$Object$Q($tmp6027);
// line 1666
frost$core$Int64 $tmp6029 = *(&local4);
frost$core$Int64 $tmp6030 = (frost$core$Int64) {0};
int64_t $tmp6031 = $tmp6029.value;
int64_t $tmp6032 = $tmp6030.value;
bool $tmp6033 = $tmp6031 != $tmp6032;
frost$core$Bit $tmp6034 = (frost$core$Bit) {$tmp6033};
bool $tmp6035 = $tmp6034.value;
if ($tmp6035) goto block24; else goto block26;
block24:;
// line 1667
org$frostlang$frostc$IR$Block* $tmp6036 = *(&local5);
org$frostlang$frostc$IR$Block$ID* $tmp6037 = &$tmp6036->id;
org$frostlang$frostc$IR$Block$ID $tmp6038 = *$tmp6037;
frost$core$String* $tmp6039 = org$frostlang$frostc$IR$Block$ID$get_asString$R$frost$core$String($tmp6038);
frost$core$String* $tmp6040 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6039, &$s6041);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6040));
frost$core$String** $tmp6042 = &param0->currentBlock;
frost$core$String* $tmp6043 = *$tmp6042;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6043));
frost$core$String** $tmp6044 = &param0->currentBlock;
*$tmp6044 = $tmp6040;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6040));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6039));
// line 1668
frost$io$IndentedOutputStream** $tmp6045 = &param0->out;
frost$io$IndentedOutputStream* $tmp6046 = *$tmp6045;
frost$core$String** $tmp6047 = &param0->currentBlock;
frost$core$String* $tmp6048 = *$tmp6047;
frost$core$String* $tmp6049 = frost$core$String$get_asString$R$frost$core$String($tmp6048);
frost$core$String* $tmp6050 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6049, &$s6051);
$fn6053 $tmp6052 = ($fn6053) ((frost$io$OutputStream*) $tmp6046)->$class->vtable[19];
frost$core$Error* $tmp6054 = $tmp6052(((frost$io$OutputStream*) $tmp6046), $tmp6050);
if ($tmp6054 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6054));
*(&local0) = $tmp6054;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6050));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6049));
org$frostlang$frostc$IR$Block* $tmp6055 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6055));
*(&local5) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6050));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6049));
goto block25;
block26:;
// line 1
// line 1671
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6056));
frost$core$String** $tmp6057 = &param0->currentBlock;
frost$core$String* $tmp6058 = *$tmp6057;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6058));
frost$core$String** $tmp6059 = &param0->currentBlock;
*$tmp6059 = &$s6060;
goto block25;
block25:;
// line 1673
frost$core$Int64 $tmp6061 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block* $tmp6062 = *(&local5);
frost$collections$Array** $tmp6063 = &$tmp6062->statements;
frost$collections$Array* $tmp6064 = *$tmp6063;
ITable* $tmp6065 = ((frost$collections$CollectionView*) $tmp6064)->$class->itable;
while ($tmp6065->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp6065 = $tmp6065->next;
}
$fn6067 $tmp6066 = $tmp6065->methods[0];
frost$core$Int64 $tmp6068 = $tmp6066(((frost$collections$CollectionView*) $tmp6064));
frost$core$Bit $tmp6069 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp6070 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp6061, $tmp6068, $tmp6069);
frost$core$Int64 $tmp6071 = $tmp6070.min;
*(&local6) = $tmp6071;
frost$core$Int64 $tmp6072 = $tmp6070.max;
frost$core$Bit $tmp6073 = $tmp6070.inclusive;
bool $tmp6074 = $tmp6073.value;
frost$core$Int64 $tmp6075 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp6076 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp6075);
if ($tmp6074) goto block32; else goto block33;
block32:;
int64_t $tmp6077 = $tmp6071.value;
int64_t $tmp6078 = $tmp6072.value;
bool $tmp6079 = $tmp6077 <= $tmp6078;
frost$core$Bit $tmp6080 = (frost$core$Bit) {$tmp6079};
bool $tmp6081 = $tmp6080.value;
if ($tmp6081) goto block29; else goto block30;
block33:;
int64_t $tmp6082 = $tmp6071.value;
int64_t $tmp6083 = $tmp6072.value;
bool $tmp6084 = $tmp6082 < $tmp6083;
frost$core$Bit $tmp6085 = (frost$core$Bit) {$tmp6084};
bool $tmp6086 = $tmp6085.value;
if ($tmp6086) goto block29; else goto block30;
block29:;
// line 1674
org$frostlang$frostc$IR$Block* $tmp6087 = *(&local5);
frost$collections$Array** $tmp6088 = &$tmp6087->ids;
frost$collections$Array* $tmp6089 = *$tmp6088;
frost$core$Int64 $tmp6090 = *(&local6);
frost$core$Object* $tmp6091 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp6089, $tmp6090);
org$frostlang$frostc$IR$Block* $tmp6092 = *(&local5);
frost$collections$Array** $tmp6093 = &$tmp6092->statements;
frost$collections$Array* $tmp6094 = *$tmp6093;
frost$core$Int64 $tmp6095 = *(&local6);
frost$core$Object* $tmp6096 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp6094, $tmp6095);
org$frostlang$frostc$CCodeGenerator$writeStatement$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Statement(param0, ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp6091)->value, ((org$frostlang$frostc$IR$Statement*) $tmp6096));
frost$core$Frost$unref$frost$core$Object$Q($tmp6096);
frost$core$Frost$unref$frost$core$Object$Q($tmp6091);
goto block31;
block31:;
frost$core$Int64 $tmp6097 = *(&local6);
int64_t $tmp6098 = $tmp6072.value;
int64_t $tmp6099 = $tmp6097.value;
int64_t $tmp6100 = $tmp6098 - $tmp6099;
frost$core$Int64 $tmp6101 = (frost$core$Int64) {$tmp6100};
frost$core$UInt64 $tmp6102 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp6101);
if ($tmp6074) goto block35; else goto block36;
block35:;
uint64_t $tmp6103 = $tmp6102.value;
uint64_t $tmp6104 = $tmp6076.value;
bool $tmp6105 = $tmp6103 >= $tmp6104;
frost$core$Bit $tmp6106 = (frost$core$Bit) {$tmp6105};
bool $tmp6107 = $tmp6106.value;
if ($tmp6107) goto block34; else goto block30;
block36:;
uint64_t $tmp6108 = $tmp6102.value;
uint64_t $tmp6109 = $tmp6076.value;
bool $tmp6110 = $tmp6108 > $tmp6109;
frost$core$Bit $tmp6111 = (frost$core$Bit) {$tmp6110};
bool $tmp6112 = $tmp6111.value;
if ($tmp6112) goto block34; else goto block30;
block34:;
int64_t $tmp6113 = $tmp6097.value;
int64_t $tmp6114 = $tmp6075.value;
int64_t $tmp6115 = $tmp6113 + $tmp6114;
frost$core$Int64 $tmp6116 = (frost$core$Int64) {$tmp6115};
*(&local6) = $tmp6116;
goto block29;
block30:;
org$frostlang$frostc$IR$Block* $tmp6117 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6117));
*(&local5) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block21;
block21:;
frost$core$Int64 $tmp6118 = *(&local4);
int64_t $tmp6119 = $tmp6009.value;
int64_t $tmp6120 = $tmp6118.value;
int64_t $tmp6121 = $tmp6119 - $tmp6120;
frost$core$Int64 $tmp6122 = (frost$core$Int64) {$tmp6121};
frost$core$UInt64 $tmp6123 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp6122);
if ($tmp6011) goto block38; else goto block39;
block38:;
uint64_t $tmp6124 = $tmp6123.value;
uint64_t $tmp6125 = $tmp6013.value;
bool $tmp6126 = $tmp6124 >= $tmp6125;
frost$core$Bit $tmp6127 = (frost$core$Bit) {$tmp6126};
bool $tmp6128 = $tmp6127.value;
if ($tmp6128) goto block37; else goto block20;
block39:;
uint64_t $tmp6129 = $tmp6123.value;
uint64_t $tmp6130 = $tmp6013.value;
bool $tmp6131 = $tmp6129 > $tmp6130;
frost$core$Bit $tmp6132 = (frost$core$Bit) {$tmp6131};
bool $tmp6133 = $tmp6132.value;
if ($tmp6133) goto block37; else goto block20;
block37:;
int64_t $tmp6134 = $tmp6118.value;
int64_t $tmp6135 = $tmp6012.value;
int64_t $tmp6136 = $tmp6134 + $tmp6135;
frost$core$Int64 $tmp6137 = (frost$core$Int64) {$tmp6136};
*(&local4) = $tmp6137;
goto block19;
block20:;
goto block2;
block1:;
// line 1679
frost$core$Int64 $tmp6138 = (frost$core$Int64) {1679};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s6139, $tmp6138);
abort(); // unreachable
block2:;
frost$core$Error* $tmp6140 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6140));
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
frost$io$IndentedOutputStream** $tmp6141 = &param0->out;
frost$io$IndentedOutputStream* $tmp6142 = *$tmp6141;
// line 1686
*(&local0) = ((frost$core$Error*) NULL);
// line 1687
frost$io$IndentedOutputStream** $tmp6143 = &param0->out;
frost$io$IndentedOutputStream* $tmp6144 = *$tmp6143;
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6144));
frost$io$IndentedOutputStream* $tmp6145 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6145));
*(&local1) = $tmp6144;
// line 1688
frost$io$IndentedOutputStream** $tmp6146 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6147 = *$tmp6146;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6147));
frost$io$IndentedOutputStream** $tmp6148 = &param0->out;
frost$io$IndentedOutputStream* $tmp6149 = *$tmp6148;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6149));
frost$io$IndentedOutputStream** $tmp6150 = &param0->out;
*$tmp6150 = $tmp6147;
// line 1689
frost$io$MemoryOutputStream** $tmp6151 = &param0->methodHeaderBuffer;
frost$io$MemoryOutputStream* $tmp6152 = *$tmp6151;
frost$io$MemoryOutputStream$clear($tmp6152);
// line 1690
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR** $tmp6153 = &param0->ir;
org$frostlang$frostc$IR* $tmp6154 = *$tmp6153;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6154));
org$frostlang$frostc$IR** $tmp6155 = &param0->ir;
*$tmp6155 = param2;
// line 1691
frost$io$IndentedOutputStream** $tmp6156 = &param0->out;
frost$io$IndentedOutputStream* $tmp6157 = *$tmp6156;
org$frostlang$frostc$Type** $tmp6158 = &param1->returnType;
org$frostlang$frostc$Type* $tmp6159 = *$tmp6158;
frost$core$String* $tmp6160 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp6159);
frost$core$String* $tmp6161 = frost$core$String$get_asString$R$frost$core$String($tmp6160);
frost$core$String* $tmp6162 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6161, &$s6163);
frost$core$String* $tmp6164 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp6165 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6162, $tmp6164);
frost$core$String* $tmp6166 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6165, &$s6167);
$fn6169 $tmp6168 = ($fn6169) ((frost$io$OutputStream*) $tmp6157)->$class->vtable[17];
frost$core$Error* $tmp6170 = $tmp6168(((frost$io$OutputStream*) $tmp6157), $tmp6166);
if ($tmp6170 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6170));
*(&local0) = $tmp6170;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6160));
frost$io$IndentedOutputStream* $tmp6171 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6171));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6160));
// line 1692
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6172));
frost$core$String* $tmp6173 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6173));
*(&local2) = &$s6174;
// line 1693
frost$core$Int64 $tmp6175 = (frost$core$Int64) {0};
*(&local3) = $tmp6175;
// line 1694
frost$core$Weak** $tmp6176 = &param0->compiler;
frost$core$Weak* $tmp6177 = *$tmp6176;
frost$core$Object* $tmp6178 = frost$core$Weak$get$R$frost$core$Weak$T($tmp6177);
frost$core$Bit $tmp6179 = org$frostlang$frostc$Compiler$hasSelfParam$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp6178), param1);
bool $tmp6180 = $tmp6179.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp6178);
if ($tmp6180) goto block8; else goto block9;
block8:;
// line 1695
frost$io$IndentedOutputStream** $tmp6181 = &param0->out;
frost$io$IndentedOutputStream* $tmp6182 = *$tmp6181;
frost$core$String* $tmp6183 = org$frostlang$frostc$CCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp6184 = frost$core$String$get_asString$R$frost$core$String($tmp6183);
frost$core$String* $tmp6185 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6184, &$s6186);
frost$core$Int64 $tmp6187 = *(&local3);
frost$core$Int64$wrapper* $tmp6188;
$tmp6188 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp6188->value = $tmp6187;
frost$core$String* $tmp6189 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp6185, ((frost$core$Object*) $tmp6188));
frost$core$String* $tmp6190 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6189, &$s6191);
$fn6193 $tmp6192 = ($fn6193) ((frost$io$OutputStream*) $tmp6182)->$class->vtable[17];
frost$core$Error* $tmp6194 = $tmp6192(((frost$io$OutputStream*) $tmp6182), $tmp6190);
if ($tmp6194 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6194));
*(&local0) = $tmp6194;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6183));
frost$core$String* $tmp6195 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6195));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6196 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6196));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6183));
// line 1696
frost$core$Int64 $tmp6197 = *(&local3);
frost$core$Int64 $tmp6198 = (frost$core$Int64) {1};
int64_t $tmp6199 = $tmp6197.value;
int64_t $tmp6200 = $tmp6198.value;
int64_t $tmp6201 = $tmp6199 + $tmp6200;
frost$core$Int64 $tmp6202 = (frost$core$Int64) {$tmp6201};
*(&local3) = $tmp6202;
// line 1697
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6203));
frost$core$String* $tmp6204 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6204));
*(&local2) = &$s6205;
goto block9;
block9:;
// line 1699
frost$collections$Array** $tmp6206 = &param1->parameters;
frost$collections$Array* $tmp6207 = *$tmp6206;
ITable* $tmp6208 = ((frost$collections$Iterable*) $tmp6207)->$class->itable;
while ($tmp6208->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp6208 = $tmp6208->next;
}
$fn6210 $tmp6209 = $tmp6208->methods[0];
frost$collections$Iterator* $tmp6211 = $tmp6209(((frost$collections$Iterable*) $tmp6207));
goto block12;
block12:;
ITable* $tmp6212 = $tmp6211->$class->itable;
while ($tmp6212->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp6212 = $tmp6212->next;
}
$fn6214 $tmp6213 = $tmp6212->methods[0];
frost$core$Bit $tmp6215 = $tmp6213($tmp6211);
bool $tmp6216 = $tmp6215.value;
if ($tmp6216) goto block14; else goto block13;
block13:;
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp6217 = $tmp6211->$class->itable;
while ($tmp6217->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp6217 = $tmp6217->next;
}
$fn6219 $tmp6218 = $tmp6217->methods[1];
frost$core$Object* $tmp6220 = $tmp6218($tmp6211);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp6220)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp6221 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6221));
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp6220);
// line 1700
frost$io$IndentedOutputStream** $tmp6222 = &param0->out;
frost$io$IndentedOutputStream* $tmp6223 = *$tmp6222;
frost$core$String* $tmp6224 = *(&local2);
frost$core$String* $tmp6225 = frost$core$String$get_asString$R$frost$core$String($tmp6224);
frost$core$String* $tmp6226 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6225, &$s6227);
org$frostlang$frostc$MethodDecl$Parameter* $tmp6228 = *(&local4);
org$frostlang$frostc$Type** $tmp6229 = &$tmp6228->type;
org$frostlang$frostc$Type* $tmp6230 = *$tmp6229;
frost$core$String* $tmp6231 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp6230);
frost$core$String* $tmp6232 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6226, $tmp6231);
frost$core$String* $tmp6233 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6232, &$s6234);
frost$core$Int64 $tmp6235 = *(&local3);
frost$core$Int64$wrapper* $tmp6236;
$tmp6236 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp6236->value = $tmp6235;
frost$core$String* $tmp6237 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp6233, ((frost$core$Object*) $tmp6236));
frost$core$String* $tmp6238 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6237, &$s6239);
$fn6241 $tmp6240 = ($fn6241) ((frost$io$OutputStream*) $tmp6223)->$class->vtable[17];
frost$core$Error* $tmp6242 = $tmp6240(((frost$io$OutputStream*) $tmp6223), $tmp6238);
if ($tmp6242 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6242));
*(&local0) = $tmp6242;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6225));
frost$core$Frost$unref$frost$core$Object$Q($tmp6220);
org$frostlang$frostc$MethodDecl$Parameter* $tmp6243 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6243));
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6211));
frost$core$String* $tmp6244 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6244));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6245 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6245));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6225));
// line 1701
frost$core$Int64 $tmp6246 = *(&local3);
frost$core$Int64 $tmp6247 = (frost$core$Int64) {1};
int64_t $tmp6248 = $tmp6246.value;
int64_t $tmp6249 = $tmp6247.value;
int64_t $tmp6250 = $tmp6248 + $tmp6249;
frost$core$Int64 $tmp6251 = (frost$core$Int64) {$tmp6250};
*(&local3) = $tmp6251;
// line 1702
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6252));
frost$core$String* $tmp6253 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6253));
*(&local2) = &$s6254;
frost$core$Frost$unref$frost$core$Object$Q($tmp6220);
org$frostlang$frostc$MethodDecl$Parameter* $tmp6255 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6255));
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6211));
// line 1704
frost$io$IndentedOutputStream** $tmp6256 = &param0->out;
frost$io$IndentedOutputStream* $tmp6257 = *$tmp6256;
$fn6259 $tmp6258 = ($fn6259) ((frost$io$OutputStream*) $tmp6257)->$class->vtable[19];
frost$core$Error* $tmp6260 = $tmp6258(((frost$io$OutputStream*) $tmp6257), &$s6261);
if ($tmp6260 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6260));
*(&local0) = $tmp6260;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6260));
frost$core$String* $tmp6262 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6262));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6263 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6263));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6260));
// line 1705
frost$io$MemoryOutputStream* $tmp6264 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp6264);
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6264));
frost$io$MemoryOutputStream* $tmp6265 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6265));
*(&local5) = $tmp6264;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6264));
// line 1706
frost$io$IndentedOutputStream* $tmp6266 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream* $tmp6267 = *(&local5);
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp6266, ((frost$io$OutputStream*) $tmp6267));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6266));
frost$io$IndentedOutputStream** $tmp6268 = &param0->out;
frost$io$IndentedOutputStream* $tmp6269 = *$tmp6268;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6269));
frost$io$IndentedOutputStream** $tmp6270 = &param0->out;
*$tmp6270 = $tmp6266;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6266));
// line 1707
org$frostlang$frostc$CCodeGenerator$writeIR$org$frostlang$frostc$IR(param0, param2);
// line 1708
frost$io$IndentedOutputStream** $tmp6271 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6272 = *$tmp6271;
frost$io$MemoryOutputStream** $tmp6273 = &param0->methodHeaderBuffer;
frost$io$MemoryOutputStream* $tmp6274 = *$tmp6273;
$fn6276 $tmp6275 = ($fn6276) ((frost$io$OutputStream*) $tmp6272)->$class->vtable[20];
frost$core$Error* $tmp6277 = $tmp6275(((frost$io$OutputStream*) $tmp6272), ((frost$core$Object*) $tmp6274));
if ($tmp6277 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6277));
*(&local0) = $tmp6277;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6277));
frost$io$MemoryOutputStream* $tmp6278 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6278));
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp6279 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6279));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6280 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6280));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6277));
// line 1709
frost$io$IndentedOutputStream** $tmp6281 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6282 = *$tmp6281;
frost$io$MemoryOutputStream* $tmp6283 = *(&local5);
$fn6285 $tmp6284 = ($fn6285) ((frost$io$OutputStream*) $tmp6282)->$class->vtable[20];
frost$core$Error* $tmp6286 = $tmp6284(((frost$io$OutputStream*) $tmp6282), ((frost$core$Object*) $tmp6283));
if ($tmp6286 == NULL) goto block21; else goto block22;
block22:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6286));
*(&local0) = $tmp6286;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6286));
frost$io$MemoryOutputStream* $tmp6287 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6287));
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp6288 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6288));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6289 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6289));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6286));
// line 1710
frost$io$IndentedOutputStream** $tmp6290 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6291 = *$tmp6290;
$fn6293 $tmp6292 = ($fn6293) ((frost$io$OutputStream*) $tmp6291)->$class->vtable[19];
frost$core$Error* $tmp6294 = $tmp6292(((frost$io$OutputStream*) $tmp6291), &$s6295);
if ($tmp6294 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6294));
*(&local0) = $tmp6294;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6294));
frost$io$MemoryOutputStream* $tmp6296 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6296));
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp6297 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6297));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6298 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6298));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6294));
// line 1711
frost$io$IndentedOutputStream* $tmp6299 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6299));
frost$io$IndentedOutputStream** $tmp6300 = &param0->out;
frost$io$IndentedOutputStream* $tmp6301 = *$tmp6300;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6301));
frost$io$IndentedOutputStream** $tmp6302 = &param0->out;
*$tmp6302 = $tmp6299;
frost$io$MemoryOutputStream* $tmp6303 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6303));
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp6304 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6304));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6305 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6305));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block5;
block4:;
// line 1714
frost$core$Int64 $tmp6306 = (frost$core$Int64) {1714};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s6307, $tmp6306);
abort(); // unreachable
block5:;
frost$core$Error* $tmp6308 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6308));
*(&local0) = ((frost$core$Error*) NULL);
goto block1;
block1:;
frost$io$IndentedOutputStream** $tmp6309 = &param0->out;
frost$io$IndentedOutputStream* $tmp6310 = *$tmp6309;
bool $tmp6311 = $tmp6310 == $tmp6142;
frost$core$Bit $tmp6312 = frost$core$Bit$init$builtin_bit($tmp6311);
bool $tmp6313 = $tmp6312.value;
if ($tmp6313) goto block2; else goto block3;
block2:;
return;
block3:;
frost$core$Int64 $tmp6314 = (frost$core$Int64) {1685};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s6315, $tmp6314, &$s6316);
abort(); // unreachable

}
void org$frostlang$frostc$CCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
frost$io$File* local1 = NULL;
// line 1720
*(&local0) = ((frost$core$Error*) NULL);
// line 1721
org$frostlang$frostc$ClassDecl** $tmp6317 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp6318 = *$tmp6317;
frost$core$Bit $tmp6319 = frost$core$Bit$init$builtin_bit($tmp6318 == NULL);
bool $tmp6320 = $tmp6319.value;
if ($tmp6320) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp6321 = (frost$core$Int64) {1721};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s6322, $tmp6321);
abort(); // unreachable
block3:;
// line 1722
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$ClassDecl** $tmp6323 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp6324 = *$tmp6323;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6324));
org$frostlang$frostc$ClassDecl** $tmp6325 = &param0->currentClass;
*$tmp6325 = param1;
// line 1723
frost$collections$HashSet** $tmp6326 = &param0->imports;
frost$collections$HashSet* $tmp6327 = *$tmp6326;
frost$collections$HashSet$clear($tmp6327);
// line 1724
frost$io$MemoryOutputStream** $tmp6328 = &param0->strings;
frost$io$MemoryOutputStream* $tmp6329 = *$tmp6328;
frost$io$MemoryOutputStream$clear($tmp6329);
// line 1725
frost$io$MemoryOutputStream** $tmp6330 = &param0->declarations;
frost$io$MemoryOutputStream* $tmp6331 = *$tmp6330;
frost$io$MemoryOutputStream$clear($tmp6331);
// line 1726
frost$io$MemoryOutputStream** $tmp6332 = &param0->types;
frost$io$MemoryOutputStream* $tmp6333 = *$tmp6332;
frost$io$MemoryOutputStream$clear($tmp6333);
// line 1727
frost$io$MemoryOutputStream** $tmp6334 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp6335 = *$tmp6334;
frost$io$MemoryOutputStream$clear($tmp6335);
// line 1728
frost$io$MemoryOutputStream** $tmp6336 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp6337 = *$tmp6336;
frost$io$MemoryOutputStream$clear($tmp6337);
// line 1729
frost$collections$HashSet** $tmp6338 = &param0->declared;
frost$collections$HashSet* $tmp6339 = *$tmp6338;
frost$collections$HashSet$clear($tmp6339);
// line 1730
frost$collections$HashSet** $tmp6340 = &param0->writtenTypes;
frost$collections$HashSet* $tmp6341 = *$tmp6340;
frost$collections$HashSet$clear($tmp6341);
// line 1731
frost$collections$HashSet** $tmp6342 = &param0->writtenWrappers;
frost$collections$HashSet* $tmp6343 = *$tmp6342;
frost$collections$HashSet$clear($tmp6343);
// line 1732
frost$collections$HashMap** $tmp6344 = &param0->classConstants;
frost$collections$HashMap* $tmp6345 = *$tmp6344;
frost$collections$HashMap$clear($tmp6345);
// line 1733
frost$collections$IdentityMap** $tmp6346 = &param0->variableNames;
frost$collections$IdentityMap* $tmp6347 = *$tmp6346;
frost$collections$IdentityMap$clear($tmp6347);
// line 1734
frost$core$Int64 $tmp6348 = (frost$core$Int64) {0};
frost$core$Int64* $tmp6349 = &param0->varCount;
*$tmp6349 = $tmp6348;
// line 1735
frost$collections$IdentityMap** $tmp6350 = &param0->methodShims;
frost$collections$IdentityMap* $tmp6351 = *$tmp6350;
frost$collections$IdentityMap$clear($tmp6351);
// line 1736
frost$core$Weak** $tmp6352 = &param0->hCodeGen;
frost$core$Weak* $tmp6353 = *$tmp6352;
frost$core$Object* $tmp6354 = frost$core$Weak$get$R$frost$core$Weak$T($tmp6353);
frost$io$File* $tmp6355 = org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(((org$frostlang$frostc$HCodeGenerator*) $tmp6354), param1, &$s6356);
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6355));
frost$io$File* $tmp6357 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6357));
*(&local1) = $tmp6355;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6355));
frost$core$Frost$unref$frost$core$Object$Q($tmp6354);
// line 1737
frost$io$File* $tmp6358 = *(&local1);
frost$io$File* $tmp6359 = frost$io$File$get_parent$R$frost$io$File$Q($tmp6358);
frost$core$Error* $tmp6360 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp6359);
if ($tmp6360 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6360));
*(&local0) = $tmp6360;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6359));
frost$io$File* $tmp6361 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6361));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6359));
// line 1738
frost$io$IndentedOutputStream* $tmp6362 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp6363 = *(&local1);
frost$core$Maybe* $tmp6364 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp6363);
frost$core$Int64* $tmp6365 = &$tmp6364->$rawValue;
frost$core$Int64 $tmp6366 = *$tmp6365;
int64_t $tmp6367 = $tmp6366.value;
bool $tmp6368 = $tmp6367 == 0;
if ($tmp6368) goto block7; else goto block8;
block8:;
frost$core$Error** $tmp6369 = (frost$core$Error**) ($tmp6364->$data + 0);
frost$core$Error* $tmp6370 = *$tmp6369;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6370));
*(&local0) = $tmp6370;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6362));
frost$io$File* $tmp6371 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6371));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block7:;
frost$core$Object** $tmp6372 = (frost$core$Object**) ($tmp6364->$data + 0);
frost$core$Object* $tmp6373 = *$tmp6372;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp6362, ((frost$io$OutputStream*) $tmp6373));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6362));
frost$io$IndentedOutputStream** $tmp6374 = &param0->out;
frost$io$IndentedOutputStream* $tmp6375 = *$tmp6374;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6375));
frost$io$IndentedOutputStream** $tmp6376 = &param0->out;
*$tmp6376 = $tmp6362;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6362));
// line 1739
frost$io$IndentedOutputStream** $tmp6377 = &param0->out;
frost$io$IndentedOutputStream* $tmp6378 = *$tmp6377;
$fn6380 $tmp6379 = ($fn6380) ((frost$io$OutputStream*) $tmp6378)->$class->vtable[22];
frost$core$Error* $tmp6381 = $tmp6379(((frost$io$OutputStream*) $tmp6378));
if ($tmp6381 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6381));
*(&local0) = $tmp6381;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6381));
frost$io$File* $tmp6382 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6382));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6381));
// line 1740
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp6383 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, param1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6383));
// line 1741
frost$core$Weak** $tmp6384 = &param0->compiler;
frost$core$Weak* $tmp6385 = *$tmp6384;
frost$core$Object* $tmp6386 = frost$core$Weak$get$R$frost$core$Weak$T($tmp6385);
frost$core$Bit $tmp6387 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp6386), param1);
bool $tmp6388 = $tmp6387.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp6386);
if ($tmp6388) goto block11; else goto block12;
block11:;
// line 1742
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp6389 = org$frostlang$frostc$CCodeGenerator$getWrapperClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, param1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6389));
goto block12;
block12:;
frost$io$File* $tmp6390 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6390));
*(&local1) = ((frost$io$File*) NULL);
goto block2;
block1:;
// line 1746
frost$core$Weak** $tmp6391 = &param0->compiler;
frost$core$Weak* $tmp6392 = *$tmp6391;
frost$core$Object* $tmp6393 = frost$core$Weak$get$R$frost$core$Weak$T($tmp6392);
org$frostlang$frostc$Position* $tmp6394 = &param1->position;
org$frostlang$frostc$Position $tmp6395 = *$tmp6394;
frost$core$Error* $tmp6396 = *(&local0);
frost$core$String** $tmp6397 = &$tmp6396->message;
frost$core$String* $tmp6398 = *$tmp6397;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp6393), $tmp6395, $tmp6398);
frost$core$Frost$unref$frost$core$Object$Q($tmp6393);
goto block2;
block2:;
frost$core$Error* $tmp6399 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6399));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$end$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

// line 1752
org$frostlang$frostc$CCodeGenerator$finish(param0);
// line 1753
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl** $tmp6400 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp6401 = *$tmp6400;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6401));
org$frostlang$frostc$ClassDecl** $tmp6402 = &param0->currentClass;
*$tmp6402 = ((org$frostlang$frostc$ClassDecl*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$finish(org$frostlang$frostc$CCodeGenerator* param0) {

frost$core$Error* local0 = NULL;
// line 1758
*(&local0) = ((frost$core$Error*) NULL);
// line 1759
frost$io$IndentedOutputStream** $tmp6403 = &param0->out;
frost$io$IndentedOutputStream* $tmp6404 = *$tmp6403;
frost$io$MemoryOutputStream** $tmp6405 = &param0->includes;
frost$io$MemoryOutputStream* $tmp6406 = *$tmp6405;
$fn6408 $tmp6407 = ($fn6408) ((frost$io$OutputStream*) $tmp6404)->$class->vtable[20];
frost$core$Error* $tmp6409 = $tmp6407(((frost$io$OutputStream*) $tmp6404), ((frost$core$Object*) $tmp6406));
if ($tmp6409 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6409));
*(&local0) = $tmp6409;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6409));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6409));
// line 1760
frost$io$MemoryOutputStream** $tmp6410 = &param0->includes;
frost$io$MemoryOutputStream* $tmp6411 = *$tmp6410;
frost$io$MemoryOutputStream$clear($tmp6411);
// line 1761
frost$io$IndentedOutputStream** $tmp6412 = &param0->out;
frost$io$IndentedOutputStream* $tmp6413 = *$tmp6412;
frost$io$MemoryOutputStream** $tmp6414 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp6415 = *$tmp6414;
$fn6417 $tmp6416 = ($fn6417) ((frost$io$OutputStream*) $tmp6413)->$class->vtable[20];
frost$core$Error* $tmp6418 = $tmp6416(((frost$io$OutputStream*) $tmp6413), ((frost$core$Object*) $tmp6415));
if ($tmp6418 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6418));
*(&local0) = $tmp6418;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6418));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6418));
// line 1762
frost$io$MemoryOutputStream** $tmp6419 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp6420 = *$tmp6419;
frost$io$MemoryOutputStream$clear($tmp6420);
// line 1763
frost$io$IndentedOutputStream** $tmp6421 = &param0->out;
frost$io$IndentedOutputStream* $tmp6422 = *$tmp6421;
frost$io$MemoryOutputStream** $tmp6423 = &param0->types;
frost$io$MemoryOutputStream* $tmp6424 = *$tmp6423;
$fn6426 $tmp6425 = ($fn6426) ((frost$io$OutputStream*) $tmp6422)->$class->vtable[20];
frost$core$Error* $tmp6427 = $tmp6425(((frost$io$OutputStream*) $tmp6422), ((frost$core$Object*) $tmp6424));
if ($tmp6427 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6427));
*(&local0) = $tmp6427;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6427));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6427));
// line 1764
frost$io$MemoryOutputStream** $tmp6428 = &param0->types;
frost$io$MemoryOutputStream* $tmp6429 = *$tmp6428;
frost$io$MemoryOutputStream$clear($tmp6429);
// line 1765
frost$io$IndentedOutputStream** $tmp6430 = &param0->out;
frost$io$IndentedOutputStream* $tmp6431 = *$tmp6430;
frost$io$MemoryOutputStream** $tmp6432 = &param0->strings;
frost$io$MemoryOutputStream* $tmp6433 = *$tmp6432;
$fn6435 $tmp6434 = ($fn6435) ((frost$io$OutputStream*) $tmp6431)->$class->vtable[20];
frost$core$Error* $tmp6436 = $tmp6434(((frost$io$OutputStream*) $tmp6431), ((frost$core$Object*) $tmp6433));
if ($tmp6436 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6436));
*(&local0) = $tmp6436;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6436));
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6436));
// line 1766
frost$io$MemoryOutputStream** $tmp6437 = &param0->strings;
frost$io$MemoryOutputStream* $tmp6438 = *$tmp6437;
frost$io$MemoryOutputStream$clear($tmp6438);
// line 1767
frost$io$IndentedOutputStream** $tmp6439 = &param0->out;
frost$io$IndentedOutputStream* $tmp6440 = *$tmp6439;
frost$io$MemoryOutputStream** $tmp6441 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp6442 = *$tmp6441;
$fn6444 $tmp6443 = ($fn6444) ((frost$io$OutputStream*) $tmp6440)->$class->vtable[20];
frost$core$Error* $tmp6445 = $tmp6443(((frost$io$OutputStream*) $tmp6440), ((frost$core$Object*) $tmp6442));
if ($tmp6445 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6445));
*(&local0) = $tmp6445;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6445));
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6445));
// line 1768
frost$io$MemoryOutputStream** $tmp6446 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp6447 = *$tmp6446;
frost$io$MemoryOutputStream$clear($tmp6447);
goto block2;
block1:;
// line 1771
frost$core$Error* $tmp6448 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp6448));
// line 1772
frost$core$Int64 $tmp6449 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp6449);
goto block2;
block2:;
frost$core$Error* $tmp6450 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6450));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$cleanup(org$frostlang$frostc$CCodeGenerator* param0) {

// line 12
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp6451 = &param0->compiler;
frost$core$Weak* $tmp6452 = *$tmp6451;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6452));
frost$io$File** $tmp6453 = &param0->outDir;
frost$io$File* $tmp6454 = *$tmp6453;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6454));
frost$io$IndentedOutputStream** $tmp6455 = &param0->out;
frost$io$IndentedOutputStream* $tmp6456 = *$tmp6455;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6456));
frost$io$MemoryOutputStream** $tmp6457 = &param0->strings;
frost$io$MemoryOutputStream* $tmp6458 = *$tmp6457;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6458));
frost$collections$HashSet** $tmp6459 = &param0->imports;
frost$collections$HashSet* $tmp6460 = *$tmp6459;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6460));
frost$core$Weak** $tmp6461 = &param0->hCodeGen;
frost$core$Weak* $tmp6462 = *$tmp6461;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6462));
org$frostlang$frostc$HCodeGenerator** $tmp6463 = &param0->hCodeGenRetain;
org$frostlang$frostc$HCodeGenerator* $tmp6464 = *$tmp6463;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6464));
org$frostlang$frostc$ClassDecl** $tmp6465 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp6466 = *$tmp6465;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6466));
frost$io$MemoryOutputStream** $tmp6467 = &param0->includes;
frost$io$MemoryOutputStream* $tmp6468 = *$tmp6467;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6468));
frost$io$MemoryOutputStream** $tmp6469 = &param0->declarations;
frost$io$MemoryOutputStream* $tmp6470 = *$tmp6469;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6470));
frost$io$MemoryOutputStream** $tmp6471 = &param0->types;
frost$io$MemoryOutputStream* $tmp6472 = *$tmp6471;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6472));
frost$io$MemoryOutputStream** $tmp6473 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp6474 = *$tmp6473;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6474));
frost$io$IndentedOutputStream** $tmp6475 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6476 = *$tmp6475;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6476));
frost$io$MemoryOutputStream** $tmp6477 = &param0->methodHeaderBuffer;
frost$io$MemoryOutputStream* $tmp6478 = *$tmp6477;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6478));
frost$io$IndentedOutputStream** $tmp6479 = &param0->methodHeader;
frost$io$IndentedOutputStream* $tmp6480 = *$tmp6479;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6480));
frost$io$MemoryOutputStream** $tmp6481 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp6482 = *$tmp6481;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6482));
frost$io$IndentedOutputStream** $tmp6483 = &param0->shims;
frost$io$IndentedOutputStream* $tmp6484 = *$tmp6483;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6484));
frost$collections$HashSet** $tmp6485 = &param0->declared;
frost$collections$HashSet* $tmp6486 = *$tmp6485;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6486));
frost$collections$HashSet** $tmp6487 = &param0->writtenTypes;
frost$collections$HashSet* $tmp6488 = *$tmp6487;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6488));
frost$collections$HashSet** $tmp6489 = &param0->writtenWrappers;
frost$collections$HashSet* $tmp6490 = *$tmp6489;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6490));
frost$collections$HashMap** $tmp6491 = &param0->classConstants;
frost$collections$HashMap* $tmp6492 = *$tmp6491;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6492));
frost$collections$IdentityMap** $tmp6493 = &param0->variableNames;
frost$collections$IdentityMap* $tmp6494 = *$tmp6493;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6494));
frost$core$String** $tmp6495 = &param0->currentBlock;
frost$core$String* $tmp6496 = *$tmp6495;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6496));
org$frostlang$frostc$MethodDecl** $tmp6497 = &param0->currentMethod;
org$frostlang$frostc$MethodDecl* $tmp6498 = *$tmp6497;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6498));
frost$core$String** $tmp6499 = &param0->returnValueVar;
frost$core$String* $tmp6500 = *$tmp6499;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6500));
frost$collections$Stack** $tmp6501 = &param0->enclosingContexts;
frost$collections$Stack* $tmp6502 = *$tmp6501;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6502));
frost$collections$IdentityMap** $tmp6503 = &param0->methodShims;
frost$collections$IdentityMap* $tmp6504 = *$tmp6503;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6504));
frost$collections$IdentityMap** $tmp6505 = &param0->choiceDataSizes;
frost$collections$IdentityMap* $tmp6506 = *$tmp6505;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6506));
frost$collections$HashMap** $tmp6507 = &param0->refs;
frost$collections$HashMap* $tmp6508 = *$tmp6507;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6508));
org$frostlang$frostc$IR** $tmp6509 = &param0->ir;
org$frostlang$frostc$IR* $tmp6510 = *$tmp6509;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6510));
return;

}

