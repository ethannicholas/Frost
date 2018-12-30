#include "org/pandalanguage/pandac/CCodeGenerator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/HCodeGenerator.h"
#include "panda/core/Panda.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/io/MemoryOutputStream.h"
#include "panda/collections/HashSet.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/io/IndentedOutputStream.h"
#include "panda/io/OutputStream.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/IdentityMap.h"
#include "panda/collections/Stack.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Bit.h"
#include "panda/collections/Key.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/collections/ImmutableArray.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/MutableString.h"
#include "panda/core/Equatable.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/ChoiceCase.h"
#include "panda/collections/Array.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator.h"
#include "org/pandalanguage/pandac/CCodeGenerator/ClassConstant.h"
#include "org/pandalanguage/pandac/CCodeGenerator/MethodShim.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/Variable/Storage.h"
#include "org/pandalanguage/pandac/CCodeGenerator/OpClass.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "panda/core/Real64.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/Formattable.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/IR/Block/ID.h"
#include "org/pandalanguage/pandac/IR/Statement.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/IR.h"
#include "org/pandalanguage/pandac/IR/Block.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IR, org$pandalanguage$pandac$CCodeGenerator$finish} };

static panda$core$String $s1;
org$pandalanguage$pandac$CCodeGenerator$class_type org$pandalanguage$pandac$CCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$cleanup, org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$cMethodType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$Q$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$stride$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim, org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$OpClass, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIntReference$panda$core$UInt64$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$Type$panda$core$Real64$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldOffset$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeIsNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value, org$pandalanguage$pandac$CCodeGenerator$writeIsNonNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value, org$pandalanguage$pandac$CCodeGenerator$isNull$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$writeBinary$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$writeBranch$org$pandalanguage$pandac$IR$Block$ID, org$pandalanguage$pandac$CCodeGenerator$writeCast$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$writeConditionalBranch$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID, org$pandalanguage$pandac$CCodeGenerator$writeConstruct$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$writeCreateStruct$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$ClassDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IR$Value$GT, org$pandalanguage$pandac$CCodeGenerator$writeDynamicCall$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$IR$Value$GT, org$pandalanguage$pandac$CCodeGenerator$writeExtractField$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$CCodeGenerator$writeGetChoiceFieldPointer$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$writeGetFieldPointer$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$CCodeGenerator$writeGetInterfaceMethod$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$writeGetVirtualMethod$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$panda$core$Int64$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$writeLoad$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value, org$pandalanguage$pandac$CCodeGenerator$writeNegate$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value, org$pandalanguage$pandac$CCodeGenerator$writeNot$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value, org$pandalanguage$pandac$CCodeGenerator$writePointerAlloc$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$writePointerDestroy$org$pandalanguage$pandac$IR$Value, org$pandalanguage$pandac$CCodeGenerator$writePointerGetIndex$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value, org$pandalanguage$pandac$CCodeGenerator$writePointerOffset$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value, org$pandalanguage$pandac$CCodeGenerator$writePointerRealloc$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value, org$pandalanguage$pandac$CCodeGenerator$writePointerSetIndex$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value, org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IR$Value$Q, org$pandalanguage$pandac$CCodeGenerator$writeStaticCall$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$IR$Value$GT, org$pandalanguage$pandac$CCodeGenerator$writeStore$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value, org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Statement, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$writeIR$org$pandalanguage$pandac$IR, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IR, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

typedef void (*$fn156)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn239)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn250)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn262)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn274)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn307)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn337)(panda$collections$CollectionView*);
typedef void (*$fn400)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn453)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn457)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn462)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn475)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn479)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn484)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn575)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn579)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn584)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn661)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn723)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn727)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn732)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn803)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn842)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn906)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn974)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn1003)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1007)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1012)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1054)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1085)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1089)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1094)(panda$collections$Iterator*);
typedef void (*$fn1120)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1164)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1170)(panda$collections$CollectionView*);
typedef void (*$fn1207)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1218)(panda$collections$CollectionView*);
typedef void (*$fn1269)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1297)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1320)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1381)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn1420)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn1451)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn1463)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1471)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1480)(panda$collections$CollectionView*);
typedef void (*$fn1518)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1545)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1551)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Bit (*$fn1557)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn1572)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1586)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1601)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1630)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1634)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1639)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1681)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1717)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1721)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1726)(panda$collections$Iterator*);
typedef void (*$fn1752)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn1819)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn1998)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2002)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2007)(panda$collections$Iterator*);
typedef void (*$fn2033)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2081)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2205)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2234)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2270)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2503)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2510)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2526)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2548)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2572)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2640)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2653)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2671)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2681)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2696)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2720)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2758)(panda$collections$CollectionView*);
typedef void (*$fn2796)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn2828)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2852)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn2866)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2872)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2903)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2913)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2916)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2931)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2941)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2958)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn2967)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn2975)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3008)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3017)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn3026)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn3038)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3041)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3056)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3066)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn3095)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3230)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3260)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn3361)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3365)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3369)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3374)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3383)(panda$core$Formattable*, panda$core$String*);
typedef void (*$fn3393)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3399)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn3408)(panda$collections$Key*);
typedef void (*$fn3415)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn3430)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3673)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn3694)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn3710)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn3720)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn3750)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn3766)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn3776)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn3811)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn3987)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4004)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4009)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4029)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn4046)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn4097)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4135)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4141)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4145)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4150)(panda$collections$Iterator*);
typedef void (*$fn4165)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4173)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4183)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn4202)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn4219)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4232)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4238)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4242)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4247)(panda$collections$Iterator*);
typedef void (*$fn4254)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4260)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4268)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4303)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4366)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4401)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4424)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4439)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4461)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4475)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4500)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4537)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4549)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4564)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4575)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4590)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4601)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4616)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4653)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4671)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4682)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4705)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4722)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4741)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4756)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn4768)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn4780)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn4791)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4821)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4851)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4865)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4869)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn4890)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn4908)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4920)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4932)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4943)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4949)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4953)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4958)(panda$collections$Iterator*);
typedef void (*$fn4965)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4971)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4979)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4996)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5059)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5379)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn5397)(panda$collections$CollectionView*);
typedef void (*$fn5441)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5454)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5459)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn5488)(panda$collections$CollectionView*);
typedef void (*$fn5534)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn5546)(panda$collections$CollectionView*);
typedef void (*$fn5643)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5665)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5679)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5683)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5688)(panda$collections$Iterator*);
typedef void (*$fn5710)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5724)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5738)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn5743)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn5747)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5808)(panda$io$OutputStream*);
typedef void (*$fn5825)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn5833)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn5841)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn5849)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn5857)(panda$io$OutputStream*, panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 39, -2051020738728542693, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x74\x79\x70\x65\x20", 16, 7914278075631058822, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x63\x4d\x65\x74\x68\x6f\x64\x54\x79\x70\x65\x28\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x73\x65\x6c\x66\x54\x79\x70\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 175, -7437024946064129403, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x66\x6e", 3, 1407949, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20", 8, 23394968824372186, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x28\x2a", 3, 1360815, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x28", 2, 14382, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6c", 2, 13945, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x38", 1, 157, NULL };
static panda$core$String $s520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x36", 2, 15204, NULL };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x33\x32", 2, 15402, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s887 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s897 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static panda$core$String $s980 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x73\x20\x6e\x6f\x74\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 16, 538313452881261501, NULL };
static panda$core$String $s981 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s989 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s998 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s1035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x5f", 2, 13932, NULL };
static panda$core$String $s1042 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s1050 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x6e\x65\x78\x74\x3b\x20", 19, -82469649542869656, NULL };
static panda$core$String $s1058 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static panda$core$String $s1060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s1064 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1070 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s1072 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1076 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s1080 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s1114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s1123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s1125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s1180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s1184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s1189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73\x68\x69\x6d", 5, 14375831170, NULL };
static panda$core$String $s1199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x5f\x61\x74\x74\x72\x69\x62\x75\x74\x65\x5f\x5f\x28\x28\x77\x65\x61\x6b\x29\x29\x20", 22, 985746977287669079, NULL };
static panda$core$String $s1201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70", 2, 13545, NULL };
static panda$core$String $s1267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s1310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static panda$core$String $s1348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70", 1, 213, NULL };
static panda$core$String $s1350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x4f\x62\x6a\x65\x63\x74\x2a\x29\x20", 21, 2977864674277076004, NULL };
static panda$core$String $s1416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x50\x61\x6e\x64\x61\x24\x75\x6e\x72\x65\x66\x24\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x4f\x62\x6a\x65\x63\x74\x24\x51\x28", 43, 2175465386208652715, NULL };
static panda$core$String $s1461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20", 10, -868402795326672399, NULL };
static panda$core$String $s1469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1546 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x73\x75\x6c\x74", 6, 2270301397372, NULL };
static panda$core$String $s1568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s1626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5f", 9, 1496394141948660801, NULL };
static panda$core$String $s1669 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s1677 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 21, 7276812015398014858, NULL };
static panda$core$String $s1685 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static panda$core$String $s1687 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s1691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x26", 3, 1451812, NULL };
static panda$core$String $s1704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s1712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1732 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s1746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s1755 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s1757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s1861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s1893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s1917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s1919 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s1924 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s1938 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1941 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s1949 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s1951 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static panda$core$String $s1957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s1963 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s1971 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1981 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1989 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s1993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1994 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2018 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s2023 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s2053 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s2068 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s2069 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s2075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x65\x78\x74\x65\x72\x6e\x61\x6c\x20\x67\x6c\x6f\x62\x61\x6c\x20", 19, 7395979908803736066, NULL };
static panda$core$String $s2079 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s2106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s2125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s2127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s2157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static panda$core$String $s2163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s2169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s2177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s2199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b", 4, 233187142, NULL };
static panda$core$String $s2298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s2300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s2352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x6f\x70\x43\x6c\x61\x73\x73\x28\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x4f\x70\x43\x6c\x61\x73\x73\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 162, 4168334865051673726, NULL };
static panda$core$String $s2387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s2388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s2393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s2406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s2411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s2412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s2417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s2418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s2423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s2424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s2429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s2430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s2435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s2442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s2450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s2451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s2456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s2457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s2463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s2464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s2470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s2478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s2484 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s2485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s2492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s2493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s2497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static panda$core$String $s2620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x29", 2, 19635, NULL };
static panda$core$String $s2633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static panda$core$String $s2635 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static panda$core$String $s2643 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static panda$core$String $s2645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, 318867264039102424, NULL };
static panda$core$String $s2651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s2665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2669 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static panda$core$String $s2682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2769 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static panda$core$String $s2794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s2813 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6c\x6c\x69\x6e\x67\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20", 17, 6273213310080951380, NULL };
static panda$core$String $s2815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x61\x20\x74\x61\x72\x67\x65\x74", 17, 4566770767977439161, NULL };
static panda$core$String $s2816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2842 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x67\x65\x74\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x28\x74\x61\x72\x67\x65\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x6d\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2c\x20\x69\x73\x53\x75\x70\x65\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x6f\x75\x74\x3a\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 233, -6328376933645788478, NULL };
static panda$core$String $s2860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2864 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static panda$core$String $s2897 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s2929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c\x3b", 8, 14324497440495800, NULL };
static panda$core$String $s2942 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2952 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2971 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2973 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static panda$core$String $s2987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s2991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2995 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 17, 3278627383872437575, NULL };
static panda$core$String $s2997 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20", 22, -5027409806946055905, NULL };
static panda$core$String $s3003 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x29\x3b", 15, -9084967859609473468, NULL };
static panda$core$String $s3012 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x76\x61\x6c\x75\x65\x20\x3d\x20", 10, -5658520382000078270, NULL };
static panda$core$String $s3015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3039 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3042 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s3054 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x3b", 8, 14324500803727928, NULL };
static panda$core$String $s3067 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3070 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3072 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3076 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3080 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3082 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2d\x3e\x76\x61\x6c\x75\x65", 8, 15272754413107790, NULL };
static panda$core$String $s3112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c\x20\x3f\x20", 11, 7728168270859090233, NULL };
static panda$core$String $s3118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20\x28", 4, 137624963, NULL };
static panda$core$String $s3122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x30\x20\x7d\x29", 19, 3502995608209124108, NULL };
static panda$core$String $s3130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s3135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x74\x72\x75\x65\x20\x7d\x29", 9, 1573697403055851823, NULL };
static panda$core$String $s3138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s3149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x30", 2, 14895, NULL };
static panda$core$String $s3322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73", 2, 13952, NULL };
static panda$core$String $s3340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s3350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s3354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x24\x63\x6c\x61\x73\x73\x2c\x20", 46, -5089590097621792313, NULL };
static panda$core$String $s3356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x68\x61\x72\x38\x2a\x29\x20\x22", 21, 2848555729212071077, NULL };
static panda$core$String $s3385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s3387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x3e\x32", 3, 1526261, NULL };
static panda$core$String $s3389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x78", 2, 19613, NULL };
static panda$core$String $s3391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x2c\x20", 3, 1381611, NULL };
static panda$core$String $s3405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x4e\x55\x4c\x4c\x20\x7d\x3b", 9, 1573656756204980508, NULL };
static panda$core$String $s3418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x74\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3a\x20", 14, 4299600041167827879, NULL };
static panda$core$String $s3437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x66\x61\x6c\x73\x65\x20\x7d\x29", 23, 6429304196845160675, NULL };
static panda$core$String $s3467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x4e\x55\x4c\x4c\x29", 7, 151080389671230, NULL };
static panda$core$String $s3474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x67\x65\x74\x4e\x75\x6c\x6c\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x28\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 139, 5606836112822051941, NULL };
static panda$core$String $s3504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x26\x6c\x6f\x63\x61\x6c", 7, 150085078960302, NULL };
static panda$core$String $s3506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x6d", 5, 22265977430, NULL };
static panda$core$String $s3547 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x20\x72\x65\x66\x3a\x20", 15, -4631094845120441450, NULL };
static panda$core$String $s3579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x76\x61\x6c\x75\x65\x20", 18, -3453142811018688841, NULL };
static panda$core$String $s3600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x67\x65\x74\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x28\x76\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 139, -7969864358283313808, NULL };
static panda$core$String $s3678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3702 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3725 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3728 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s3730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s3735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x3d\x20\x4e\x55\x4c\x4c", 8, 14324797439511602, NULL };
static panda$core$String $s3758 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3780 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s3790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c", 8, 14295074875294774, NULL };
static panda$core$String $s3843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s3844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s3849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s3850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s3855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3864 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s3865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s3870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s3871 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s3876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s3877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s3882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s3883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s3891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3892 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s3901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s3909 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s3910 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s3918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s3919 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s3927 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s3928 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s3933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s3934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s3939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s3940 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s3945 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s3946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s3951 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s3952 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s3958 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x3a\x20", 22, 2546911445157482260, NULL };
static panda$core$String $s3960 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3973 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3981 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4000 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s4002 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4017 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s4019 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s4023 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s4027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4037 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s4043 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 16, -2035714527346219032, NULL };
static panda$core$String $s4053 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s4055 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4061 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s4063 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4076 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4080 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s4085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 19, -1805496395169551456, NULL };
static panda$core$String $s4090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4094 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s4112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s4124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s4133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s4137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x3b", 2, 22885, NULL };
static panda$core$String $s4213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s4288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s4301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s4325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s4345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s4349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s4353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x29\x20\x28", 4, 147754556, NULL };
static panda$core$String $s4357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x64\x61\x74\x61\x20", 8, 15719379260890086, NULL };
static panda$core$String $s4361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b\x20", 2, 14576, NULL };
static panda$core$String $s4363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s4386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s4390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x26", 4, 137655564, NULL };
static panda$core$String $s4394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s4399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static panda$core$String $s4418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static panda$core$String $s4429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static panda$core$String $s4431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, 318867264039102424, NULL };
static panda$core$String $s4437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s4455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static panda$core$String $s4476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s4486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static panda$core$String $s4498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s4518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s4526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s4530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static panda$core$String $s4534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s4554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x2a", 4, 137655568, NULL };
static panda$core$String $s4562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x2d", 4, 137655571, NULL };
static panda$core$String $s4588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x21", 4, 137655559, NULL };
static panda$core$String $s4614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s4638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28\x28", 5, 13903212206, NULL };
static panda$core$String $s4642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x29\x20\x70\x61\x6e\x64\x61\x5a\x41\x6c\x6c\x6f\x63\x28", 15, 5261903096392821497, NULL };
static panda$core$String $s4646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static panda$core$String $s4650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static panda$core$String $s4667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x46\x72\x65\x65\x28", 10, -5790438204225352665, NULL };
static panda$core$String $s4669 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s4691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s4703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s4727 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s4739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x69\x7a\x65\x20\x66\x6f\x72\x20\x74\x79\x70\x65\x20", 22, 6026307984013519672, NULL };
static panda$core$String $s4773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4774 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s4785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s4796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x52\x65\x61\x6c\x6c\x6f\x63\x28", 15, 2191018519584705024, NULL };
static panda$core$String $s4800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4804 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static panda$core$String $s4809 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4813 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static panda$core$String $s4818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s4841 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s4845 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x20\x3d\x20", 4, 200211019, NULL };
static panda$core$String $s4849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s4863 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x3b", 7, 229300545255632, NULL };
static panda$core$String $s4883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4906 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4930 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s4941 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4945 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4973 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4980 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s4988 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s4990 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4994 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5055 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x2f\x20", 3, 1514527, NULL };
static panda$core$String $s5057 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x62\x6f\x72\x74\x28\x29\x3b\x20\x2f\x2f\x20\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 23, 8273563093259754029, NULL };
static panda$core$String $s5385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x20", 22, 6964540114321148707, NULL };
static panda$core$String $s5387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s5420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 21864007024, NULL };
static panda$core$String $s5422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c", 7, 141826707331641, NULL };
static panda$core$String $s5460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x3b", 2, 16118, NULL };
static panda$core$String $s5537 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s5539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s5637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s5645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x61\x72\x61\x6d", 6, 1409599243562, NULL };
static panda$core$String $s5663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s5674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s5696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x61\x72\x61\x6d", 6, 1409599243562, NULL };
static panda$core$String $s5708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s5719 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s5725 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s5748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s5761 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s5795 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };

void org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File(org$pandalanguage$pandac$CCodeGenerator* param0, panda$io$File* param1) {

// line 57
org$pandalanguage$pandac$HCodeGenerator* $tmp2 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File$org$pandalanguage$pandac$CCodeGenerator($tmp2, param1, param0);
org$pandalanguage$pandac$HCodeGenerator** $tmp3 = &param0->hCodeGenRetain;
org$pandalanguage$pandac$HCodeGenerator* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
org$pandalanguage$pandac$HCodeGenerator** $tmp5 = &param0->hCodeGenRetain;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// line 58
org$pandalanguage$pandac$HCodeGenerator** $tmp6 = &param0->hCodeGenRetain;
org$pandalanguage$pandac$HCodeGenerator* $tmp7 = *$tmp6;
org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File$org$pandalanguage$pandac$HCodeGenerator(param0, param1, $tmp7);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File$org$pandalanguage$pandac$HCodeGenerator(org$pandalanguage$pandac$CCodeGenerator* param0, panda$io$File* param1, org$pandalanguage$pandac$HCodeGenerator* param2) {

// line 39
panda$core$Weak* $tmp8 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp8, ((panda$core$Object*) ((org$pandalanguage$pandac$Compiler*) NULL)));
panda$core$Weak** $tmp9 = &param0->compiler;
panda$core$Weak* $tmp10 = *$tmp9;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$Weak** $tmp11 = &param0->compiler;
*$tmp11 = $tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
// line 45
panda$io$MemoryOutputStream* $tmp12 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp12);
panda$io$MemoryOutputStream** $tmp13 = &param0->strings;
panda$io$MemoryOutputStream* $tmp14 = *$tmp13;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$io$MemoryOutputStream** $tmp15 = &param0->strings;
*$tmp15 = $tmp12;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
// line 47
panda$collections$HashSet* $tmp16 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp16);
panda$collections$HashSet** $tmp17 = &param0->imports;
panda$collections$HashSet* $tmp18 = *$tmp17;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
panda$collections$HashSet** $tmp19 = &param0->imports;
*$tmp19 = $tmp16;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
// line 54
org$pandalanguage$pandac$ClassDecl** $tmp20 = &param0->currentClass;
org$pandalanguage$pandac$ClassDecl* $tmp21 = *$tmp20;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
org$pandalanguage$pandac$ClassDecl** $tmp22 = &param0->currentClass;
*$tmp22 = ((org$pandalanguage$pandac$ClassDecl*) NULL);
// line 174
panda$io$MemoryOutputStream* $tmp23 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp23);
panda$io$MemoryOutputStream** $tmp24 = &param0->includes;
panda$io$MemoryOutputStream* $tmp25 = *$tmp24;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
panda$io$MemoryOutputStream** $tmp26 = &param0->includes;
*$tmp26 = $tmp23;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
// line 176
panda$io$MemoryOutputStream* $tmp27 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp27);
panda$io$MemoryOutputStream** $tmp28 = &param0->declarations;
panda$io$MemoryOutputStream* $tmp29 = *$tmp28;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
panda$io$MemoryOutputStream** $tmp30 = &param0->declarations;
*$tmp30 = $tmp27;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
// line 178
panda$io$MemoryOutputStream* $tmp31 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp31);
panda$io$MemoryOutputStream** $tmp32 = &param0->types;
panda$io$MemoryOutputStream* $tmp33 = *$tmp32;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
panda$io$MemoryOutputStream** $tmp34 = &param0->types;
*$tmp34 = $tmp31;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
// line 180
panda$io$MemoryOutputStream* $tmp35 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp35);
panda$io$MemoryOutputStream** $tmp36 = &param0->methodsBuffer;
panda$io$MemoryOutputStream* $tmp37 = *$tmp36;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
panda$io$MemoryOutputStream** $tmp38 = &param0->methodsBuffer;
*$tmp38 = $tmp35;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// line 182
panda$io$IndentedOutputStream* $tmp39 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream** $tmp40 = &param0->methodsBuffer;
panda$io$MemoryOutputStream* $tmp41 = *$tmp40;
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp39, ((panda$io$OutputStream*) $tmp41));
panda$io$IndentedOutputStream** $tmp42 = &param0->methods;
panda$io$IndentedOutputStream* $tmp43 = *$tmp42;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
panda$io$IndentedOutputStream** $tmp44 = &param0->methods;
*$tmp44 = $tmp39;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
// line 184
panda$io$MemoryOutputStream* $tmp45 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp45);
panda$io$MemoryOutputStream** $tmp46 = &param0->methodHeaderBuffer;
panda$io$MemoryOutputStream* $tmp47 = *$tmp46;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
panda$io$MemoryOutputStream** $tmp48 = &param0->methodHeaderBuffer;
*$tmp48 = $tmp45;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
// line 186
panda$io$IndentedOutputStream* $tmp49 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream** $tmp50 = &param0->methodHeaderBuffer;
panda$io$MemoryOutputStream* $tmp51 = *$tmp50;
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp49, ((panda$io$OutputStream*) $tmp51));
panda$io$IndentedOutputStream** $tmp52 = &param0->methodHeader;
panda$io$IndentedOutputStream* $tmp53 = *$tmp52;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
panda$io$IndentedOutputStream** $tmp54 = &param0->methodHeader;
*$tmp54 = $tmp49;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
// line 188
panda$io$MemoryOutputStream* $tmp55 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp55);
panda$io$MemoryOutputStream** $tmp56 = &param0->shimsBuffer;
panda$io$MemoryOutputStream* $tmp57 = *$tmp56;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
panda$io$MemoryOutputStream** $tmp58 = &param0->shimsBuffer;
*$tmp58 = $tmp55;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
// line 190
panda$io$IndentedOutputStream* $tmp59 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream** $tmp60 = &param0->shimsBuffer;
panda$io$MemoryOutputStream* $tmp61 = *$tmp60;
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp59, ((panda$io$OutputStream*) $tmp61));
panda$io$IndentedOutputStream** $tmp62 = &param0->shims;
panda$io$IndentedOutputStream* $tmp63 = *$tmp62;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
panda$io$IndentedOutputStream** $tmp64 = &param0->shims;
*$tmp64 = $tmp59;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
// line 192
panda$collections$HashSet* $tmp65 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp65);
panda$collections$HashSet** $tmp66 = &param0->declared;
panda$collections$HashSet* $tmp67 = *$tmp66;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
panda$collections$HashSet** $tmp68 = &param0->declared;
*$tmp68 = $tmp65;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// line 194
panda$collections$HashSet* $tmp69 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp69);
panda$collections$HashSet** $tmp70 = &param0->writtenTypes;
panda$collections$HashSet* $tmp71 = *$tmp70;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
panda$collections$HashSet** $tmp72 = &param0->writtenTypes;
*$tmp72 = $tmp69;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
// line 196
panda$collections$HashSet* $tmp73 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp73);
panda$collections$HashSet** $tmp74 = &param0->writtenWrappers;
panda$collections$HashSet* $tmp75 = *$tmp74;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
panda$collections$HashSet** $tmp76 = &param0->writtenWrappers;
*$tmp76 = $tmp73;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// line 198
panda$collections$HashMap* $tmp77 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp77);
panda$collections$HashMap** $tmp78 = &param0->classConstants;
panda$collections$HashMap* $tmp79 = *$tmp78;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
panda$collections$HashMap** $tmp80 = &param0->classConstants;
*$tmp80 = $tmp77;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
// line 200
panda$collections$IdentityMap* $tmp81 = (panda$collections$IdentityMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$IdentityMap$class);
panda$collections$IdentityMap$init($tmp81);
panda$collections$IdentityMap** $tmp82 = &param0->variableNames;
panda$collections$IdentityMap* $tmp83 = *$tmp82;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
panda$collections$IdentityMap** $tmp84 = &param0->variableNames;
*$tmp84 = $tmp81;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
// line 208
panda$collections$Stack* $tmp85 = (panda$collections$Stack*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Stack$class);
panda$collections$Stack$init($tmp85);
panda$collections$Stack** $tmp86 = &param0->enclosingContexts;
panda$collections$Stack* $tmp87 = *$tmp86;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
panda$collections$Stack** $tmp88 = &param0->enclosingContexts;
*$tmp88 = $tmp85;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
// line 210
panda$core$Int64 $tmp89 = (panda$core$Int64) {0};
panda$core$Int64* $tmp90 = &param0->varCount;
*$tmp90 = $tmp89;
// line 212
panda$collections$IdentityMap* $tmp91 = (panda$collections$IdentityMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$IdentityMap$class);
panda$collections$IdentityMap$init($tmp91);
panda$collections$IdentityMap** $tmp92 = &param0->methodShims;
panda$collections$IdentityMap* $tmp93 = *$tmp92;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
panda$collections$IdentityMap** $tmp94 = &param0->methodShims;
*$tmp94 = $tmp91;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
// line 214
panda$collections$IdentityMap* $tmp95 = (panda$collections$IdentityMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$IdentityMap$class);
panda$collections$IdentityMap$init($tmp95);
panda$collections$IdentityMap** $tmp96 = &param0->choiceDataSizes;
panda$collections$IdentityMap* $tmp97 = *$tmp96;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
panda$collections$IdentityMap** $tmp98 = &param0->choiceDataSizes;
*$tmp98 = $tmp95;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
// line 216
panda$collections$HashMap* $tmp99 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp99);
panda$collections$HashMap** $tmp100 = &param0->refs;
panda$collections$HashMap* $tmp101 = *$tmp100;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp99));
panda$collections$HashMap** $tmp102 = &param0->refs;
*$tmp102 = $tmp99;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp99));
// line 62
panda$io$File** $tmp103 = &param0->outDir;
panda$io$File* $tmp104 = *$tmp103;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$File** $tmp105 = &param0->outDir;
*$tmp105 = param1;
// line 63
panda$io$IndentedOutputStream* $tmp106 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream* $tmp107 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp107);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp106, ((panda$io$OutputStream*) $tmp107));
panda$io$IndentedOutputStream** $tmp108 = &param0->out;
panda$io$IndentedOutputStream* $tmp109 = *$tmp108;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
panda$io$IndentedOutputStream** $tmp110 = &param0->out;
*$tmp110 = $tmp106;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
// line 64
panda$core$Weak* $tmp111 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp111, ((panda$core$Object*) param2));
panda$core$Weak** $tmp112 = &param0->hCodeGen;
panda$core$Weak* $tmp113 = *$tmp112;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
panda$core$Weak** $tmp114 = &param0->hCodeGen;
*$tmp114 = $tmp111;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
return;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1) {

// line 68
panda$core$Weak** $tmp115 = &param0->hCodeGen;
panda$core$Weak* $tmp116 = *$tmp115;
panda$core$Object* $tmp117 = panda$core$Weak$get$R$panda$core$Weak$T($tmp116);
panda$core$Panda$unref$panda$core$Object$Q($tmp117);
panda$core$String* $tmp118 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$HCodeGenerator*) $tmp117), param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
return $tmp118;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

// line 72
panda$core$Weak** $tmp119 = &param0->hCodeGen;
panda$core$Weak* $tmp120 = *$tmp119;
panda$core$Object* $tmp121 = panda$core$Weak$get$R$panda$core$Weak$T($tmp120);
panda$core$Panda$unref$panda$core$Object$Q($tmp121);
panda$core$String* $tmp122 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(((org$pandalanguage$pandac$HCodeGenerator*) $tmp121), param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
return $tmp122;

}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

// line 76
panda$core$Weak** $tmp123 = &param0->hCodeGen;
panda$core$Weak* $tmp124 = *$tmp123;
panda$core$Object* $tmp125 = panda$core$Weak$get$R$panda$core$Weak$T($tmp124);
panda$core$Panda$unref$panda$core$Object$Q($tmp125);
panda$core$Int64 $tmp126 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(((org$pandalanguage$pandac$HCodeGenerator*) $tmp125), param1);
return $tmp126;

}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

// line 80
org$pandalanguage$pandac$ClassDecl** $tmp127 = &param0->currentClass;
org$pandalanguage$pandac$ClassDecl* $tmp128 = *$tmp127;
bool $tmp129 = param1 != $tmp128;
panda$core$Bit $tmp130 = panda$core$Bit$init$builtin_bit($tmp129);
return $tmp130;

}
void org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

panda$core$String* local0 = NULL;
// line 84
panda$core$String** $tmp131 = &param1->name;
panda$core$String* $tmp132 = *$tmp131;
panda$core$Bit $tmp133 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp132, &$s134);
bool $tmp135 = $tmp133.value;
if ($tmp135) goto block1; else goto block2;
block1:;
// line 85
return;
block2:;
// line 87
panda$core$Weak** $tmp136 = &param0->hCodeGen;
panda$core$Weak* $tmp137 = *$tmp136;
panda$core$Object* $tmp138 = panda$core$Weak$get$R$panda$core$Weak$T($tmp137);
panda$core$Panda$unref$panda$core$Object$Q($tmp138);
panda$core$String* $tmp139 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$HCodeGenerator*) $tmp138), param1, &$s140);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp141 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
*(&local0) = $tmp139;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
// line 88
panda$collections$HashSet** $tmp142 = &param0->imports;
panda$collections$HashSet* $tmp143 = *$tmp142;
panda$core$String* $tmp144 = *(&local0);
panda$core$Bit $tmp145 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp143, ((panda$collections$Key*) $tmp144));
panda$core$Bit $tmp146 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp145);
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block3; else goto block4;
block3:;
// line 89
panda$io$MemoryOutputStream** $tmp148 = &param0->includes;
panda$io$MemoryOutputStream* $tmp149 = *$tmp148;
panda$core$String* $tmp150 = *(&local0);
panda$core$String* $tmp151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s152, $tmp150);
panda$core$String* $tmp153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp151, &$s154);
$fn156 $tmp155 = ($fn156) ((panda$io$OutputStream*) $tmp149)->$class->vtable[19];
$tmp155(((panda$io$OutputStream*) $tmp149), $tmp153);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
// line 90
panda$collections$HashSet** $tmp157 = &param0->imports;
panda$collections$HashSet* $tmp158 = *$tmp157;
panda$core$String* $tmp159 = *(&local0);
panda$collections$HashSet$add$panda$collections$HashSet$T($tmp158, ((panda$collections$Key*) $tmp159));
goto block4;
block4:;
panda$core$String* $tmp160 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp160));
// unreffing includePath
*(&local0) = ((panda$core$String*) NULL);
return;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
panda$core$Bit local1;
// line 95
panda$core$Bit* $tmp161 = &param1->resolved;
panda$core$Bit $tmp162 = *$tmp161;
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp164 = (panda$core$Int64) {95};
panda$core$String* $tmp165 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s166, ((panda$core$Object*) param1));
panda$core$String* $tmp167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp165, &$s168);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s169, $tmp164, $tmp167);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
abort(); // unreachable
block1:;
// line 96
panda$core$Bit $tmp170 = org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit(param1);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block3; else goto block4;
block3:;
// line 97
panda$core$Weak** $tmp172 = &param0->compiler;
panda$core$Weak* $tmp173 = *$tmp172;
panda$core$Object* $tmp174 = panda$core$Weak$get$R$panda$core$Weak$T($tmp173);
panda$core$Panda$unref$panda$core$Object$Q($tmp174);
org$pandalanguage$pandac$ClassDecl* $tmp175 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp174), param1);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp176 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
*(&local0) = $tmp175;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
// line 98
org$pandalanguage$pandac$ClassDecl* $tmp177 = *(&local0);
panda$core$Bit $tmp178 = panda$core$Bit$init$builtin_bit($tmp177 != NULL);
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp180 = (panda$core$Int64) {98};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s181, $tmp180);
abort(); // unreachable
block5:;
// line 99
org$pandalanguage$pandac$ClassDecl* $tmp182 = *(&local0);
org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(param0, $tmp182);
org$pandalanguage$pandac$ClassDecl* $tmp183 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp183));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block4;
block4:;
// line 101
org$pandalanguage$pandac$Type$Kind* $tmp184 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp185 = *$tmp184;
panda$core$Int64 $tmp186 = $tmp185.$rawValue;
panda$core$Int64 $tmp187 = (panda$core$Int64) {15};
panda$core$Bit $tmp188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp186, $tmp187);
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp190 = (panda$core$Int64) {14};
panda$core$Bit $tmp191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp186, $tmp190);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block8; else goto block10;
block8:;
// line 103
org$pandalanguage$pandac$Type* $tmp193 = org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp194 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp193);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
return $tmp194;
block10:;
panda$core$Int64 $tmp195 = (panda$core$Int64) {17};
panda$core$Bit $tmp196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp186, $tmp195);
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp198 = (panda$core$Int64) {16};
panda$core$Bit $tmp199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp186, $tmp198);
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block11; else goto block13;
block11:;
// line 105
org$pandalanguage$pandac$Type* $tmp201 = org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp202 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp201);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp202));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp202));
return $tmp202;
block13:;
panda$core$Int64 $tmp203 = (panda$core$Int64) {11};
panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp186, $tmp203);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block14; else goto block7;
block14:;
// line 107
panda$collections$ImmutableArray** $tmp206 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp207 = *$tmp206;
panda$core$Int64 $tmp208 = (panda$core$Int64) {0};
panda$core$Object* $tmp209 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp207, $tmp208);
panda$core$String** $tmp210 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp209))->name;
panda$core$String* $tmp211 = *$tmp210;
panda$core$Bit $tmp212 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp211, &$s213);
panda$core$Panda$unref$panda$core$Object$Q($tmp209);
bool $tmp214 = $tmp212.value;
if ($tmp214) goto block15; else goto block16;
block15:;
panda$collections$ImmutableArray** $tmp215 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp216 = *$tmp215;
panda$core$Int64 $tmp217 = (panda$core$Int64) {1};
panda$core$Object* $tmp218 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp216, $tmp217);
panda$core$Bit $tmp219 = org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp218));
panda$core$Panda$unref$panda$core$Object$Q($tmp218);
*(&local1) = $tmp219;
goto block17;
block16:;
*(&local1) = $tmp212;
goto block17;
block17:;
panda$core$Bit $tmp220 = *(&local1);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block18; else goto block19;
block18:;
// line 108
panda$collections$ImmutableArray** $tmp222 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp223 = *$tmp222;
panda$core$Int64 $tmp224 = (panda$core$Int64) {1};
panda$core$Object* $tmp225 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp223, $tmp224);
panda$core$String* $tmp226 = org$pandalanguage$pandac$CCodeGenerator$cMethodType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$Q$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp225), ((org$pandalanguage$pandac$Type*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
panda$core$Panda$unref$panda$core$Object$Q($tmp225);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
return $tmp226;
block19:;
goto block7;
block7:;
// line 111
panda$core$Weak** $tmp227 = &param0->hCodeGen;
panda$core$Weak* $tmp228 = *$tmp227;
panda$core$Object* $tmp229 = panda$core$Weak$get$R$panda$core$Weak$T($tmp228);
panda$core$Panda$unref$panda$core$Object$Q($tmp229);
panda$core$String* $tmp230 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(((org$pandalanguage$pandac$HCodeGenerator*) $tmp229), param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp230));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp230));
return $tmp230;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$cMethodType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$Q$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1, org$pandalanguage$pandac$Type* param2) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$String* local3 = NULL;
panda$core$MutableString* local4 = NULL;
panda$core$String* local5 = NULL;
panda$core$Int64 local6;
org$pandalanguage$pandac$Type$Kind* $tmp231 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp232 = *$tmp231;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp233;
$tmp233 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp233->value = $tmp232;
panda$core$Int64 $tmp234 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type$Kind $tmp235 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp234);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp236;
$tmp236 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp236->value = $tmp235;
ITable* $tmp237 = ((panda$core$Equatable*) $tmp233)->$class->itable;
while ($tmp237->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp237 = $tmp237->next;
}
$fn239 $tmp238 = $tmp237->methods[0];
panda$core$Bit $tmp240 = $tmp238(((panda$core$Equatable*) $tmp233), ((panda$core$Equatable*) $tmp236));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp233)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp236)));
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block1; else goto block2;
block1:;
*(&local2) = $tmp240;
goto block3;
block2:;
org$pandalanguage$pandac$Type$Kind* $tmp242 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp243 = *$tmp242;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp244;
$tmp244 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp244->value = $tmp243;
panda$core$Int64 $tmp245 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp246 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp245);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp247;
$tmp247 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp247->value = $tmp246;
ITable* $tmp248 = ((panda$core$Equatable*) $tmp244)->$class->itable;
while ($tmp248->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp248 = $tmp248->next;
}
$fn250 $tmp249 = $tmp248->methods[0];
panda$core$Bit $tmp251 = $tmp249(((panda$core$Equatable*) $tmp244), ((panda$core$Equatable*) $tmp247));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp244)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp247)));
*(&local2) = $tmp251;
goto block3;
block3:;
panda$core$Bit $tmp252 = *(&local2);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block4; else goto block5;
block4:;
*(&local1) = $tmp252;
goto block6;
block5:;
org$pandalanguage$pandac$Type$Kind* $tmp254 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp255 = *$tmp254;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp256;
$tmp256 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp256->value = $tmp255;
panda$core$Int64 $tmp257 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp258 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp257);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp259;
$tmp259 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp259->value = $tmp258;
ITable* $tmp260 = ((panda$core$Equatable*) $tmp256)->$class->itable;
while ($tmp260->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp260 = $tmp260->next;
}
$fn262 $tmp261 = $tmp260->methods[0];
panda$core$Bit $tmp263 = $tmp261(((panda$core$Equatable*) $tmp256), ((panda$core$Equatable*) $tmp259));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp256)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp259)));
*(&local1) = $tmp263;
goto block6;
block6:;
panda$core$Bit $tmp264 = *(&local1);
bool $tmp265 = $tmp264.value;
if ($tmp265) goto block7; else goto block8;
block7:;
*(&local0) = $tmp264;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp266 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp267 = *$tmp266;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp268;
$tmp268 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp268->value = $tmp267;
panda$core$Int64 $tmp269 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp270 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp269);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp271;
$tmp271 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp271->value = $tmp270;
ITable* $tmp272 = ((panda$core$Equatable*) $tmp268)->$class->itable;
while ($tmp272->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp272 = $tmp272->next;
}
$fn274 $tmp273 = $tmp272->methods[0];
panda$core$Bit $tmp275 = $tmp273(((panda$core$Equatable*) $tmp268), ((panda$core$Equatable*) $tmp271));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp268)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp271)));
*(&local0) = $tmp275;
goto block9;
block9:;
panda$core$Bit $tmp276 = *(&local0);
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp278 = (panda$core$Int64) {116};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s279, $tmp278, &$s280);
abort(); // unreachable
block10:;
// line 117
panda$core$Int64* $tmp281 = &param0->varCount;
panda$core$Int64 $tmp282 = *$tmp281;
panda$core$Int64 $tmp283 = (panda$core$Int64) {1};
int64_t $tmp284 = $tmp282.value;
int64_t $tmp285 = $tmp283.value;
int64_t $tmp286 = $tmp284 + $tmp285;
panda$core$Int64 $tmp287 = (panda$core$Int64) {$tmp286};
panda$core$Int64* $tmp288 = &param0->varCount;
*$tmp288 = $tmp287;
// line 118
panda$core$Int64* $tmp289 = &param0->varCount;
panda$core$Int64 $tmp290 = *$tmp289;
panda$core$Int64$wrapper* $tmp291;
$tmp291 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp291->value = $tmp290;
panda$core$String* $tmp292 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s293, ((panda$core$Object*) $tmp291));
panda$core$String* $tmp294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp292, &$s295);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp296 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
*(&local3) = $tmp294;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp291));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp292));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
// line 119
panda$core$MutableString* $tmp297 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp297, &$s298);
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp299 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp299));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp297));
*(&local4) = $tmp297;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp297));
// line 120
panda$core$MutableString* $tmp300 = *(&local4);
panda$collections$ImmutableArray** $tmp301 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp302 = *$tmp301;
panda$collections$ImmutableArray** $tmp303 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp304 = *$tmp303;
ITable* $tmp305 = ((panda$collections$CollectionView*) $tmp304)->$class->itable;
while ($tmp305->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp305 = $tmp305->next;
}
$fn307 $tmp306 = $tmp305->methods[0];
panda$core$Int64 $tmp308 = $tmp306(((panda$collections$CollectionView*) $tmp304));
panda$core$Int64 $tmp309 = (panda$core$Int64) {1};
int64_t $tmp310 = $tmp308.value;
int64_t $tmp311 = $tmp309.value;
int64_t $tmp312 = $tmp310 - $tmp311;
panda$core$Int64 $tmp313 = (panda$core$Int64) {$tmp312};
panda$core$Object* $tmp314 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp302, $tmp313);
panda$core$String* $tmp315 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp314));
panda$core$MutableString$append$panda$core$String($tmp300, $tmp315);
panda$core$Panda$unref$panda$core$Object$Q($tmp314);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
// line 121
panda$core$MutableString* $tmp316 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp316, &$s317);
// line 122
panda$core$MutableString* $tmp318 = *(&local4);
panda$core$String* $tmp319 = *(&local3);
panda$core$MutableString$append$panda$core$String($tmp318, $tmp319);
// line 123
panda$core$MutableString* $tmp320 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp320, &$s321);
// line 124
*(&local5) = ((panda$core$String*) NULL);
panda$core$String* $tmp322 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s323));
*(&local5) = &$s324;
// line 125
panda$core$Bit $tmp325 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp326 = $tmp325.value;
if ($tmp326) goto block12; else goto block13;
block12:;
// line 126
panda$core$MutableString* $tmp327 = *(&local4);
panda$core$String* $tmp328 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param2);
panda$core$MutableString$append$panda$core$String($tmp327, $tmp328);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp328));
// line 127
panda$core$String* $tmp329 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp329));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s330));
*(&local5) = &$s331;
goto block13;
block13:;
// line 129
panda$core$Int64 $tmp332 = (panda$core$Int64) {0};
panda$collections$ImmutableArray** $tmp333 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp334 = *$tmp333;
ITable* $tmp335 = ((panda$collections$CollectionView*) $tmp334)->$class->itable;
while ($tmp335->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp335 = $tmp335->next;
}
$fn337 $tmp336 = $tmp335->methods[0];
panda$core$Int64 $tmp338 = $tmp336(((panda$collections$CollectionView*) $tmp334));
panda$core$Int64 $tmp339 = (panda$core$Int64) {1};
int64_t $tmp340 = $tmp338.value;
int64_t $tmp341 = $tmp339.value;
int64_t $tmp342 = $tmp340 - $tmp341;
panda$core$Int64 $tmp343 = (panda$core$Int64) {$tmp342};
panda$core$Bit $tmp344 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp345 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp332, $tmp343, $tmp344);
panda$core$Int64 $tmp346 = $tmp345.min;
*(&local6) = $tmp346;
panda$core$Int64 $tmp347 = $tmp345.max;
panda$core$Bit $tmp348 = $tmp345.inclusive;
bool $tmp349 = $tmp348.value;
panda$core$Int64 $tmp350 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp351 = panda$core$Int64$convert$R$panda$core$UInt64($tmp350);
if ($tmp349) goto block17; else goto block18;
block17:;
int64_t $tmp352 = $tmp346.value;
int64_t $tmp353 = $tmp347.value;
bool $tmp354 = $tmp352 <= $tmp353;
panda$core$Bit $tmp355 = (panda$core$Bit) {$tmp354};
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block14; else goto block15;
block18:;
int64_t $tmp357 = $tmp346.value;
int64_t $tmp358 = $tmp347.value;
bool $tmp359 = $tmp357 < $tmp358;
panda$core$Bit $tmp360 = (panda$core$Bit) {$tmp359};
bool $tmp361 = $tmp360.value;
if ($tmp361) goto block14; else goto block15;
block14:;
// line 130
panda$core$MutableString* $tmp362 = *(&local4);
panda$core$String* $tmp363 = *(&local5);
panda$core$MutableString$append$panda$core$String($tmp362, $tmp363);
// line 131
panda$core$MutableString* $tmp364 = *(&local4);
panda$collections$ImmutableArray** $tmp365 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp366 = *$tmp365;
panda$core$Int64 $tmp367 = *(&local6);
panda$core$Object* $tmp368 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp366, $tmp367);
panda$core$String* $tmp369 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp368));
panda$core$MutableString$append$panda$core$String($tmp364, $tmp369);
panda$core$Panda$unref$panda$core$Object$Q($tmp368);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp369));
// line 132
panda$core$String* $tmp370 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp370));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s371));
*(&local5) = &$s372;
goto block16;
block16:;
panda$core$Int64 $tmp373 = *(&local6);
int64_t $tmp374 = $tmp347.value;
int64_t $tmp375 = $tmp373.value;
int64_t $tmp376 = $tmp374 - $tmp375;
panda$core$Int64 $tmp377 = (panda$core$Int64) {$tmp376};
panda$core$UInt64 $tmp378 = panda$core$Int64$convert$R$panda$core$UInt64($tmp377);
if ($tmp349) goto block20; else goto block21;
block20:;
uint64_t $tmp379 = $tmp378.value;
uint64_t $tmp380 = $tmp351.value;
bool $tmp381 = $tmp379 >= $tmp380;
panda$core$Bit $tmp382 = (panda$core$Bit) {$tmp381};
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block19; else goto block15;
block21:;
uint64_t $tmp384 = $tmp378.value;
uint64_t $tmp385 = $tmp351.value;
bool $tmp386 = $tmp384 > $tmp385;
panda$core$Bit $tmp387 = (panda$core$Bit) {$tmp386};
bool $tmp388 = $tmp387.value;
if ($tmp388) goto block19; else goto block15;
block19:;
int64_t $tmp389 = $tmp373.value;
int64_t $tmp390 = $tmp350.value;
int64_t $tmp391 = $tmp389 + $tmp390;
panda$core$Int64 $tmp392 = (panda$core$Int64) {$tmp391};
*(&local6) = $tmp392;
goto block14;
block15:;
// line 134
panda$core$MutableString* $tmp393 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp393, &$s394);
// line 135
panda$io$MemoryOutputStream** $tmp395 = &param0->types;
panda$io$MemoryOutputStream* $tmp396 = *$tmp395;
panda$core$MutableString* $tmp397 = *(&local4);
panda$core$String* $tmp398 = panda$core$MutableString$finish$R$panda$core$String($tmp397);
$fn400 $tmp399 = ($fn400) ((panda$io$OutputStream*) $tmp396)->$class->vtable[19];
$tmp399(((panda$io$OutputStream*) $tmp396), $tmp398);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp398));
// line 136
panda$core$String* $tmp401 = *(&local3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
panda$core$String* $tmp402 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
// unreffing separator
*(&local5) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp403 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp403));
// unreffing code
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp404 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp404));
// unreffing result
*(&local3) = ((panda$core$String*) NULL);
return $tmp401;

}
void org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Compiler* param1) {

// line 141
panda$core$Weak* $tmp405 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp405, ((panda$core$Object*) param1));
panda$core$Weak** $tmp406 = &param0->compiler;
panda$core$Weak* $tmp407 = *$tmp406;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp405));
panda$core$Weak** $tmp408 = &param0->compiler;
*$tmp408 = $tmp405;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp405));
// line 142
panda$core$Weak** $tmp409 = &param0->hCodeGen;
panda$core$Weak* $tmp410 = *$tmp409;
panda$core$Object* $tmp411 = panda$core$Weak$get$R$panda$core$Weak$T($tmp410);
panda$core$Panda$unref$panda$core$Object$Q($tmp411);
org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(((org$pandalanguage$pandac$HCodeGenerator*) $tmp411), param1);
return;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0) {

// line 221
panda$core$Int64* $tmp412 = &param0->varCount;
panda$core$Int64 $tmp413 = *$tmp412;
panda$core$Int64 $tmp414 = (panda$core$Int64) {1};
int64_t $tmp415 = $tmp413.value;
int64_t $tmp416 = $tmp414.value;
int64_t $tmp417 = $tmp415 + $tmp416;
panda$core$Int64 $tmp418 = (panda$core$Int64) {$tmp417};
panda$core$Int64* $tmp419 = &param0->varCount;
*$tmp419 = $tmp418;
// line 222
panda$core$Int64* $tmp420 = &param0->varCount;
panda$core$Int64 $tmp421 = *$tmp420;
panda$core$Int64$wrapper* $tmp422;
$tmp422 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp422->value = $tmp421;
panda$core$String* $tmp423 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s424, ((panda$core$Object*) $tmp422));
panda$core$String* $tmp425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp423, &$s426);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp422));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp423));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
return $tmp425;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0) {

// line 226
panda$core$Int64* $tmp427 = &param0->varCount;
panda$core$Int64 $tmp428 = *$tmp427;
panda$core$Int64 $tmp429 = (panda$core$Int64) {1};
int64_t $tmp430 = $tmp428.value;
int64_t $tmp431 = $tmp429.value;
int64_t $tmp432 = $tmp430 + $tmp431;
panda$core$Int64 $tmp433 = (panda$core$Int64) {$tmp432};
panda$core$Int64* $tmp434 = &param0->varCount;
*$tmp434 = $tmp433;
// line 227
panda$core$Int64* $tmp435 = &param0->varCount;
panda$core$Int64 $tmp436 = *$tmp435;
panda$core$Int64$wrapper* $tmp437;
$tmp437 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp437->value = $tmp436;
panda$core$String* $tmp438 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s439, ((panda$core$Object*) $tmp437));
panda$core$String* $tmp440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp438, &$s441);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp440));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp437));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp438));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp440));
return $tmp440;

}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

panda$core$Int64$nullable local0;
org$pandalanguage$pandac$ChoiceCase* local1 = NULL;
panda$core$Int64 local2;
org$pandalanguage$pandac$Type* local3 = NULL;
// line 231
panda$collections$IdentityMap** $tmp442 = &param0->choiceDataSizes;
panda$collections$IdentityMap* $tmp443 = *$tmp442;
panda$core$Object* $tmp444 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q($tmp443, ((panda$core$Object*) param1));
*(&local0) = ($tmp444 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp444)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
panda$core$Panda$unref$panda$core$Object$Q($tmp444);
// line 232
panda$core$Int64$nullable $tmp445 = *(&local0);
panda$core$Bit $tmp446 = panda$core$Bit$init$builtin_bit(!$tmp445.nonnull);
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block1; else goto block2;
block1:;
// line 233
panda$core$Int64 $tmp448 = (panda$core$Int64) {0};
*(&local0) = ((panda$core$Int64$nullable) { $tmp448, true });
// line 234
panda$collections$Array** $tmp449 = &param1->choiceCases;
panda$collections$Array* $tmp450 = *$tmp449;
ITable* $tmp451 = ((panda$collections$Iterable*) $tmp450)->$class->itable;
while ($tmp451->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp451 = $tmp451->next;
}
$fn453 $tmp452 = $tmp451->methods[0];
panda$collections$Iterator* $tmp454 = $tmp452(((panda$collections$Iterable*) $tmp450));
goto block3;
block3:;
ITable* $tmp455 = $tmp454->$class->itable;
while ($tmp455->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp455 = $tmp455->next;
}
$fn457 $tmp456 = $tmp455->methods[0];
panda$core$Bit $tmp458 = $tmp456($tmp454);
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block5; else goto block4;
block4:;
*(&local1) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
ITable* $tmp460 = $tmp454->$class->itable;
while ($tmp460->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp460 = $tmp460->next;
}
$fn462 $tmp461 = $tmp460->methods[1];
panda$core$Object* $tmp463 = $tmp461($tmp454);
org$pandalanguage$pandac$ChoiceCase* $tmp464 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ChoiceCase*) $tmp463)));
*(&local1) = ((org$pandalanguage$pandac$ChoiceCase*) $tmp463);
// line 235
panda$core$Weak** $tmp465 = &param0->compiler;
panda$core$Weak* $tmp466 = *$tmp465;
panda$core$Object* $tmp467 = panda$core$Weak$get$R$panda$core$Weak$T($tmp466);
panda$core$Panda$unref$panda$core$Object$Q($tmp467);
org$pandalanguage$pandac$ChoiceCase* $tmp468 = *(&local1);
org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceCase(((org$pandalanguage$pandac$Compiler*) $tmp467), $tmp468);
// line 236
panda$core$Int64 $tmp469 = (panda$core$Int64) {0};
*(&local2) = $tmp469;
// line 237
org$pandalanguage$pandac$ChoiceCase* $tmp470 = *(&local1);
panda$collections$Array** $tmp471 = &$tmp470->fields;
panda$collections$Array* $tmp472 = *$tmp471;
ITable* $tmp473 = ((panda$collections$Iterable*) $tmp472)->$class->itable;
while ($tmp473->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp473 = $tmp473->next;
}
$fn475 $tmp474 = $tmp473->methods[0];
panda$collections$Iterator* $tmp476 = $tmp474(((panda$collections$Iterable*) $tmp472));
goto block6;
block6:;
ITable* $tmp477 = $tmp476->$class->itable;
while ($tmp477->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp477 = $tmp477->next;
}
$fn479 $tmp478 = $tmp477->methods[0];
panda$core$Bit $tmp480 = $tmp478($tmp476);
bool $tmp481 = $tmp480.value;
if ($tmp481) goto block8; else goto block7;
block7:;
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp482 = $tmp476->$class->itable;
while ($tmp482->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp482 = $tmp482->next;
}
$fn484 $tmp483 = $tmp482->methods[1];
panda$core$Object* $tmp485 = $tmp483($tmp476);
org$pandalanguage$pandac$Type* $tmp486 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp486));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp485)));
*(&local3) = ((org$pandalanguage$pandac$Type*) $tmp485);
// line 239
panda$core$Int64 $tmp487 = *(&local2);
org$pandalanguage$pandac$Type* $tmp488 = *(&local3);
panda$core$Int64 $tmp489 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, $tmp488);
int64_t $tmp490 = $tmp487.value;
int64_t $tmp491 = $tmp489.value;
int64_t $tmp492 = $tmp490 + $tmp491;
panda$core$Int64 $tmp493 = (panda$core$Int64) {$tmp492};
*(&local2) = $tmp493;
panda$core$Panda$unref$panda$core$Object$Q($tmp485);
org$pandalanguage$pandac$Type* $tmp494 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp494));
// unreffing f
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
goto block6;
block8:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp476));
// line 241
panda$core$Int64$nullable $tmp495 = *(&local0);
panda$core$Int64 $tmp496 = *(&local2);
panda$core$Int64 $tmp497 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) $tmp495.value), $tmp496);
*(&local0) = ((panda$core$Int64$nullable) { $tmp497, true });
panda$core$Panda$unref$panda$core$Object$Q($tmp463);
org$pandalanguage$pandac$ChoiceCase* $tmp498 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp498));
// unreffing entry
*(&local1) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp454));
// line 243
panda$collections$IdentityMap** $tmp499 = &param0->choiceDataSizes;
panda$collections$IdentityMap* $tmp500 = *$tmp499;
panda$core$Int64$nullable $tmp501 = *(&local0);
panda$core$Int64$wrapper* $tmp502;
$tmp502 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp502->value = ((panda$core$Int64) $tmp501.value);
panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V($tmp500, ((panda$core$Object*) param1), ((panda$core$Object*) $tmp502));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp502));
goto block2;
block2:;
// line 245
panda$core$Int64$nullable $tmp503 = *(&local0);
return ((panda$core$Int64) $tmp503.value);

}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
panda$core$Bit local1;
panda$core$Int64 local2;
org$pandalanguage$pandac$FieldDecl* local3 = NULL;
panda$core$Int64 local4;
panda$core$Int64 local5;
// line 249
panda$core$Bit* $tmp504 = &param1->resolved;
panda$core$Bit $tmp505 = *$tmp504;
bool $tmp506 = $tmp505.value;
if ($tmp506) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp507 = (panda$core$Int64) {249};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s508, $tmp507);
abort(); // unreachable
block1:;
// line 250
panda$core$Bit $tmp509 = org$pandalanguage$pandac$Type$get_isBuiltinNumber$R$panda$core$Bit(param1);
bool $tmp510 = $tmp509.value;
if ($tmp510) goto block3; else goto block4;
block3:;
// line 251
panda$core$String** $tmp511 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp512 = *$tmp511;
panda$core$Bit $tmp513 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp512, &$s514);
bool $tmp515 = $tmp513.value;
if ($tmp515) goto block5; else goto block6;
block5:;
// line 252
panda$core$Int64 $tmp516 = (panda$core$Int64) {1};
return $tmp516;
block6:;
// line 254
panda$core$String** $tmp517 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp518 = *$tmp517;
panda$core$Bit $tmp519 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp518, &$s520);
bool $tmp521 = $tmp519.value;
if ($tmp521) goto block7; else goto block8;
block7:;
// line 255
panda$core$Int64 $tmp522 = (panda$core$Int64) {2};
return $tmp522;
block8:;
// line 257
panda$core$String** $tmp523 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp524 = *$tmp523;
panda$core$Bit $tmp525 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp524, &$s526);
bool $tmp527 = $tmp525.value;
if ($tmp527) goto block9; else goto block10;
block9:;
// line 258
panda$core$Int64 $tmp528 = (panda$core$Int64) {4};
return $tmp528;
block10:;
// line 260
panda$core$String** $tmp529 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp530 = *$tmp529;
panda$core$Bit $tmp531 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp530, &$s532);
bool $tmp533 = $tmp531.value;
if ($tmp533) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp534 = (panda$core$Int64) {260};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s535, $tmp534);
abort(); // unreachable
block11:;
// line 261
panda$core$Int64 $tmp536 = (panda$core$Int64) {8};
return $tmp536;
block4:;
// line 263
org$pandalanguage$pandac$Type* $tmp537 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp538 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(param1, $tmp537);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
bool $tmp539 = $tmp538.value;
if ($tmp539) goto block13; else goto block14;
block13:;
// line 264
panda$core$Int64 $tmp540 = (panda$core$Int64) {1};
return $tmp540;
block14:;
// line 266
panda$core$Weak** $tmp541 = &param0->compiler;
panda$core$Weak* $tmp542 = *$tmp541;
panda$core$Object* $tmp543 = panda$core$Weak$get$R$panda$core$Weak$T($tmp542);
panda$core$Panda$unref$panda$core$Object$Q($tmp543);
org$pandalanguage$pandac$ClassDecl* $tmp544 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp543), param1);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp545 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp544));
*(&local0) = $tmp544;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp544));
// line 267
org$pandalanguage$pandac$ClassDecl* $tmp546 = *(&local0);
panda$core$Bit $tmp547 = panda$core$Bit$init$builtin_bit($tmp546 != NULL);
bool $tmp548 = $tmp547.value;
if ($tmp548) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp549 = (panda$core$Int64) {267};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s550, $tmp549);
abort(); // unreachable
block15:;
// line 268
panda$core$Weak** $tmp551 = &param0->compiler;
panda$core$Weak* $tmp552 = *$tmp551;
panda$core$Object* $tmp553 = panda$core$Weak$get$R$panda$core$Weak$T($tmp552);
panda$core$Panda$unref$panda$core$Object$Q($tmp553);
org$pandalanguage$pandac$ClassDecl* $tmp554 = *(&local0);
panda$core$Bit $tmp555 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp553), $tmp554);
panda$core$Bit $tmp556 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp555);
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block17; else goto block18;
block17:;
*(&local1) = $tmp556;
goto block19;
block18:;
org$pandalanguage$pandac$ClassDecl* $tmp558 = *(&local0);
panda$core$String** $tmp559 = &$tmp558->name;
panda$core$String* $tmp560 = *$tmp559;
panda$core$Bit $tmp561 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp560, &$s562);
*(&local1) = $tmp561;
goto block19;
block19:;
panda$core$Bit $tmp563 = *(&local1);
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block20; else goto block21;
block20:;
// line 269
panda$core$Int64 $tmp565 = (panda$core$Int64) {8};
org$pandalanguage$pandac$ClassDecl* $tmp566 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp566));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp565;
block21:;
// line 271
panda$core$Int64 $tmp567 = (panda$core$Int64) {0};
*(&local2) = $tmp567;
// line 272
panda$core$Weak** $tmp568 = &param0->compiler;
panda$core$Weak* $tmp569 = *$tmp568;
panda$core$Object* $tmp570 = panda$core$Weak$get$R$panda$core$Weak$T($tmp569);
panda$core$Panda$unref$panda$core$Object$Q($tmp570);
org$pandalanguage$pandac$ClassDecl* $tmp571 = *(&local0);
panda$collections$ListView* $tmp572 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp570), $tmp571);
ITable* $tmp573 = ((panda$collections$Iterable*) $tmp572)->$class->itable;
while ($tmp573->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp573 = $tmp573->next;
}
$fn575 $tmp574 = $tmp573->methods[0];
panda$collections$Iterator* $tmp576 = $tmp574(((panda$collections$Iterable*) $tmp572));
goto block22;
block22:;
ITable* $tmp577 = $tmp576->$class->itable;
while ($tmp577->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp577 = $tmp577->next;
}
$fn579 $tmp578 = $tmp577->methods[0];
panda$core$Bit $tmp580 = $tmp578($tmp576);
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block24; else goto block23;
block23:;
*(&local3) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
ITable* $tmp582 = $tmp576->$class->itable;
while ($tmp582->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp582 = $tmp582->next;
}
$fn584 $tmp583 = $tmp582->methods[1];
panda$core$Object* $tmp585 = $tmp583($tmp576);
org$pandalanguage$pandac$FieldDecl* $tmp586 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp586));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp585)));
*(&local3) = ((org$pandalanguage$pandac$FieldDecl*) $tmp585);
// line 273
org$pandalanguage$pandac$FieldDecl* $tmp587 = *(&local3);
org$pandalanguage$pandac$Annotations** $tmp588 = &$tmp587->annotations;
org$pandalanguage$pandac$Annotations* $tmp589 = *$tmp588;
panda$core$Bit $tmp590 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp589);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block25; else goto block26;
block25:;
// line 274
org$pandalanguage$pandac$FieldDecl* $tmp592 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp592));
// unreffing f
*(&local3) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block22;
block26:;
// line 276
panda$core$Weak** $tmp593 = &param0->compiler;
panda$core$Weak* $tmp594 = *$tmp593;
panda$core$Object* $tmp595 = panda$core$Weak$get$R$panda$core$Weak$T($tmp594);
panda$core$Panda$unref$panda$core$Object$Q($tmp595);
org$pandalanguage$pandac$FieldDecl* $tmp596 = *(&local3);
panda$core$Bit $tmp597 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp595), $tmp596);
// line 277
org$pandalanguage$pandac$FieldDecl* $tmp598 = *(&local3);
org$pandalanguage$pandac$Type** $tmp599 = &$tmp598->type;
org$pandalanguage$pandac$Type* $tmp600 = *$tmp599;
org$pandalanguage$pandac$Type* $tmp601 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp602 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp600, $tmp601);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp601));
bool $tmp603 = $tmp602.value;
if ($tmp603) goto block27; else goto block29;
block27:;
// line 279
panda$core$Int64 $tmp604 = *(&local2);
panda$core$Weak** $tmp605 = &param0->hCodeGen;
panda$core$Weak* $tmp606 = *$tmp605;
panda$core$Object* $tmp607 = panda$core$Weak$get$R$panda$core$Weak$T($tmp606);
panda$core$Panda$unref$panda$core$Object$Q($tmp607);
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp608 = &((org$pandalanguage$pandac$HCodeGenerator*) $tmp607)->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp609 = *$tmp608;
org$pandalanguage$pandac$ClassDecl* $tmp610 = *(&local0);
panda$core$Int64 $tmp611 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64($tmp609, $tmp610);
int64_t $tmp612 = $tmp604.value;
int64_t $tmp613 = $tmp611.value;
int64_t $tmp614 = $tmp612 + $tmp613;
panda$core$Int64 $tmp615 = (panda$core$Int64) {$tmp614};
*(&local2) = $tmp615;
goto block28;
block29:;
// line 1
// line 282
org$pandalanguage$pandac$FieldDecl* $tmp616 = *(&local3);
org$pandalanguage$pandac$Type** $tmp617 = &$tmp616->type;
org$pandalanguage$pandac$Type* $tmp618 = *$tmp617;
panda$core$Int64 $tmp619 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, $tmp618);
*(&local4) = $tmp619;
// line 283
panda$core$Int64 $tmp620 = *(&local2);
panda$core$Int64 $tmp621 = *(&local4);
panda$core$Int64 $tmp622 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp620, $tmp621);
*(&local5) = $tmp622;
// line 284
panda$core$Int64 $tmp623 = *(&local5);
panda$core$Int64 $tmp624 = (panda$core$Int64) {0};
panda$core$Bit $tmp625 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp623, $tmp624);
bool $tmp626 = $tmp625.value;
if ($tmp626) goto block30; else goto block31;
block30:;
// line 285
panda$core$Int64 $tmp627 = *(&local2);
panda$core$Int64 $tmp628 = *(&local4);
panda$core$Int64 $tmp629 = *(&local5);
int64_t $tmp630 = $tmp628.value;
int64_t $tmp631 = $tmp629.value;
int64_t $tmp632 = $tmp630 - $tmp631;
panda$core$Int64 $tmp633 = (panda$core$Int64) {$tmp632};
int64_t $tmp634 = $tmp627.value;
int64_t $tmp635 = $tmp633.value;
int64_t $tmp636 = $tmp634 + $tmp635;
panda$core$Int64 $tmp637 = (panda$core$Int64) {$tmp636};
*(&local2) = $tmp637;
goto block31;
block31:;
// line 287
panda$core$Int64 $tmp638 = *(&local2);
panda$core$Int64 $tmp639 = *(&local4);
panda$core$Int64 $tmp640 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp638, $tmp639);
panda$core$Int64 $tmp641 = (panda$core$Int64) {0};
panda$core$Bit $tmp642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp640, $tmp641);
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block32; else goto block33;
block33:;
panda$core$Int64 $tmp644 = (panda$core$Int64) {287};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s645, $tmp644);
abort(); // unreachable
block32:;
// line 288
panda$core$Int64 $tmp646 = *(&local2);
panda$core$Int64 $tmp647 = *(&local4);
int64_t $tmp648 = $tmp646.value;
int64_t $tmp649 = $tmp647.value;
int64_t $tmp650 = $tmp648 + $tmp649;
panda$core$Int64 $tmp651 = (panda$core$Int64) {$tmp650};
*(&local2) = $tmp651;
goto block28;
block28:;
panda$core$Panda$unref$panda$core$Object$Q($tmp585);
org$pandalanguage$pandac$FieldDecl* $tmp652 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
// unreffing f
*(&local3) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block22;
block24:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp572));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp576));
// line 291
org$pandalanguage$pandac$Type$Kind* $tmp653 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp654 = *$tmp653;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp655;
$tmp655 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp655->value = $tmp654;
panda$core$Int64 $tmp656 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp657 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp656);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp658;
$tmp658 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp658->value = $tmp657;
ITable* $tmp659 = ((panda$core$Equatable*) $tmp655)->$class->itable;
while ($tmp659->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp659 = $tmp659->next;
}
$fn661 $tmp660 = $tmp659->methods[0];
panda$core$Bit $tmp662 = $tmp660(((panda$core$Equatable*) $tmp655), ((panda$core$Equatable*) $tmp658));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp655)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp658)));
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block34; else goto block35;
block34:;
// line 292
panda$core$Int64 $tmp664 = *(&local2);
panda$core$Int64 $tmp665 = (panda$core$Int64) {1};
int64_t $tmp666 = $tmp664.value;
int64_t $tmp667 = $tmp665.value;
int64_t $tmp668 = $tmp666 + $tmp667;
panda$core$Int64 $tmp669 = (panda$core$Int64) {$tmp668};
*(&local2) = $tmp669;
goto block35;
block35:;
// line 294
panda$core$Int64 $tmp670 = *(&local2);
org$pandalanguage$pandac$ClassDecl* $tmp671 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp671));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp670;

}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

// line 298
panda$core$Int64 $tmp672 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param1);
panda$core$Int64 $tmp673 = (panda$core$Int64) {8};
panda$core$Int64 $tmp674 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp672, $tmp673);
return $tmp674;

}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$stride$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 302
panda$core$Int64 $tmp675 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param1);
*(&local0) = $tmp675;
// line 303
panda$core$Int64 $tmp676 = org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param1);
*(&local1) = $tmp676;
// line 304
panda$core$Int64 $tmp677 = *(&local0);
panda$core$Int64 $tmp678 = *(&local1);
panda$core$Int64 $tmp679 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp677, $tmp678);
panda$core$Int64 $tmp680 = (panda$core$Int64) {0};
panda$core$Bit $tmp681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp679, $tmp680);
bool $tmp682 = $tmp681.value;
if ($tmp682) goto block1; else goto block2;
block1:;
// line 305
panda$core$Int64 $tmp683 = *(&local0);
return $tmp683;
block2:;
// line 307
panda$core$Int64 $tmp684 = *(&local0);
panda$core$Int64 $tmp685 = *(&local1);
int64_t $tmp686 = $tmp684.value;
int64_t $tmp687 = $tmp685.value;
int64_t $tmp688 = $tmp686 + $tmp687;
panda$core$Int64 $tmp689 = (panda$core$Int64) {$tmp688};
panda$core$Int64 $tmp690 = *(&local0);
panda$core$Int64 $tmp691 = *(&local1);
panda$core$Int64 $tmp692 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp690, $tmp691);
int64_t $tmp693 = $tmp689.value;
int64_t $tmp694 = $tmp692.value;
int64_t $tmp695 = $tmp693 - $tmp694;
panda$core$Int64 $tmp696 = (panda$core$Int64) {$tmp695};
return $tmp696;

}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
panda$core$Bit local1;
panda$core$Int64 local2;
org$pandalanguage$pandac$FieldDecl* local3 = NULL;
panda$core$Int64 local4;
panda$core$Int64 local5;
// line 311
panda$core$Weak** $tmp697 = &param0->compiler;
panda$core$Weak* $tmp698 = *$tmp697;
panda$core$Object* $tmp699 = panda$core$Weak$get$R$panda$core$Weak$T($tmp698);
panda$core$Panda$unref$panda$core$Object$Q($tmp699);
org$pandalanguage$pandac$ClassDecl* $tmp700 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp699), param1);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp701 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp700));
*(&local0) = $tmp700;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp700));
// line 312
org$pandalanguage$pandac$ClassDecl* $tmp702 = *(&local0);
panda$core$Bit $tmp703 = panda$core$Bit$init$builtin_bit($tmp702 != NULL);
bool $tmp704 = $tmp703.value;
if ($tmp704) goto block1; else goto block2;
block1:;
panda$core$Weak** $tmp705 = &param0->compiler;
panda$core$Weak* $tmp706 = *$tmp705;
panda$core$Object* $tmp707 = panda$core$Weak$get$R$panda$core$Weak$T($tmp706);
panda$core$Panda$unref$panda$core$Object$Q($tmp707);
org$pandalanguage$pandac$ClassDecl* $tmp708 = *(&local0);
panda$core$Bit $tmp709 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp707), $tmp708);
*(&local1) = $tmp709;
goto block3;
block2:;
*(&local1) = $tmp703;
goto block3;
block3:;
panda$core$Bit $tmp710 = *(&local1);
bool $tmp711 = $tmp710.value;
if ($tmp711) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp712 = (panda$core$Int64) {312};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s713, $tmp712);
abort(); // unreachable
block4:;
// line 313
org$pandalanguage$pandac$Type* $tmp714 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
panda$core$Int64 $tmp715 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, $tmp714);
*(&local2) = $tmp715;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp714));
// line 314
panda$core$Weak** $tmp716 = &param0->compiler;
panda$core$Weak* $tmp717 = *$tmp716;
panda$core$Object* $tmp718 = panda$core$Weak$get$R$panda$core$Weak$T($tmp717);
panda$core$Panda$unref$panda$core$Object$Q($tmp718);
org$pandalanguage$pandac$ClassDecl* $tmp719 = *(&local0);
panda$collections$ListView* $tmp720 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp718), $tmp719);
ITable* $tmp721 = ((panda$collections$Iterable*) $tmp720)->$class->itable;
while ($tmp721->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp721 = $tmp721->next;
}
$fn723 $tmp722 = $tmp721->methods[0];
panda$collections$Iterator* $tmp724 = $tmp722(((panda$collections$Iterable*) $tmp720));
goto block6;
block6:;
ITable* $tmp725 = $tmp724->$class->itable;
while ($tmp725->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp725 = $tmp725->next;
}
$fn727 $tmp726 = $tmp725->methods[0];
panda$core$Bit $tmp728 = $tmp726($tmp724);
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block8; else goto block7;
block7:;
*(&local3) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
ITable* $tmp730 = $tmp724->$class->itable;
while ($tmp730->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp730 = $tmp730->next;
}
$fn732 $tmp731 = $tmp730->methods[1];
panda$core$Object* $tmp733 = $tmp731($tmp724);
org$pandalanguage$pandac$FieldDecl* $tmp734 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp734));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp733)));
*(&local3) = ((org$pandalanguage$pandac$FieldDecl*) $tmp733);
// line 315
panda$core$Weak** $tmp735 = &param0->compiler;
panda$core$Weak* $tmp736 = *$tmp735;
panda$core$Object* $tmp737 = panda$core$Weak$get$R$panda$core$Weak$T($tmp736);
panda$core$Panda$unref$panda$core$Object$Q($tmp737);
org$pandalanguage$pandac$FieldDecl* $tmp738 = *(&local3);
panda$core$Bit $tmp739 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp737), $tmp738);
// line 316
org$pandalanguage$pandac$FieldDecl* $tmp740 = *(&local3);
org$pandalanguage$pandac$Type** $tmp741 = &$tmp740->type;
org$pandalanguage$pandac$Type* $tmp742 = *$tmp741;
org$pandalanguage$pandac$Type* $tmp743 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp744 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp742, $tmp743);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp743));
bool $tmp745 = $tmp744.value;
if ($tmp745) goto block9; else goto block11;
block9:;
// line 318
panda$core$Int64 $tmp746 = *(&local2);
panda$core$Weak** $tmp747 = &param0->hCodeGen;
panda$core$Weak* $tmp748 = *$tmp747;
panda$core$Object* $tmp749 = panda$core$Weak$get$R$panda$core$Weak$T($tmp748);
panda$core$Panda$unref$panda$core$Object$Q($tmp749);
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp750 = &((org$pandalanguage$pandac$HCodeGenerator*) $tmp749)->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp751 = *$tmp750;
org$pandalanguage$pandac$ClassDecl* $tmp752 = *(&local0);
panda$core$Int64 $tmp753 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64($tmp751, $tmp752);
int64_t $tmp754 = $tmp746.value;
int64_t $tmp755 = $tmp753.value;
int64_t $tmp756 = $tmp754 + $tmp755;
panda$core$Int64 $tmp757 = (panda$core$Int64) {$tmp756};
*(&local2) = $tmp757;
goto block10;
block11:;
// line 1
// line 321
org$pandalanguage$pandac$FieldDecl* $tmp758 = *(&local3);
org$pandalanguage$pandac$Type** $tmp759 = &$tmp758->type;
org$pandalanguage$pandac$Type* $tmp760 = *$tmp759;
panda$core$Int64 $tmp761 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, $tmp760);
*(&local4) = $tmp761;
// line 322
panda$core$Int64 $tmp762 = *(&local2);
panda$core$Int64 $tmp763 = *(&local4);
panda$core$Int64 $tmp764 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp762, $tmp763);
*(&local5) = $tmp764;
// line 323
panda$core$Int64 $tmp765 = *(&local5);
panda$core$Int64 $tmp766 = (panda$core$Int64) {0};
panda$core$Bit $tmp767 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp765, $tmp766);
bool $tmp768 = $tmp767.value;
if ($tmp768) goto block12; else goto block13;
block12:;
// line 324
panda$core$Int64 $tmp769 = *(&local2);
panda$core$Int64 $tmp770 = *(&local4);
panda$core$Int64 $tmp771 = *(&local5);
int64_t $tmp772 = $tmp770.value;
int64_t $tmp773 = $tmp771.value;
int64_t $tmp774 = $tmp772 - $tmp773;
panda$core$Int64 $tmp775 = (panda$core$Int64) {$tmp774};
int64_t $tmp776 = $tmp769.value;
int64_t $tmp777 = $tmp775.value;
int64_t $tmp778 = $tmp776 + $tmp777;
panda$core$Int64 $tmp779 = (panda$core$Int64) {$tmp778};
*(&local2) = $tmp779;
goto block13;
block13:;
// line 326
panda$core$Int64 $tmp780 = *(&local2);
panda$core$Int64 $tmp781 = *(&local4);
panda$core$Int64 $tmp782 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp780, $tmp781);
panda$core$Int64 $tmp783 = (panda$core$Int64) {0};
panda$core$Bit $tmp784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp782, $tmp783);
bool $tmp785 = $tmp784.value;
if ($tmp785) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp786 = (panda$core$Int64) {326};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s787, $tmp786);
abort(); // unreachable
block14:;
// line 327
panda$core$Int64 $tmp788 = *(&local2);
panda$core$Int64 $tmp789 = *(&local4);
int64_t $tmp790 = $tmp788.value;
int64_t $tmp791 = $tmp789.value;
int64_t $tmp792 = $tmp790 + $tmp791;
panda$core$Int64 $tmp793 = (panda$core$Int64) {$tmp792};
*(&local2) = $tmp793;
goto block10;
block10:;
panda$core$Panda$unref$panda$core$Object$Q($tmp733);
org$pandalanguage$pandac$FieldDecl* $tmp794 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp794));
// unreffing f
*(&local3) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block6;
block8:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp720));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp724));
// line 330
org$pandalanguage$pandac$Type$Kind* $tmp795 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp796 = *$tmp795;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp797;
$tmp797 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp797->value = $tmp796;
panda$core$Int64 $tmp798 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp799 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp798);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp800;
$tmp800 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp800->value = $tmp799;
ITable* $tmp801 = ((panda$core$Equatable*) $tmp797)->$class->itable;
while ($tmp801->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp801 = $tmp801->next;
}
$fn803 $tmp802 = $tmp801->methods[0];
panda$core$Bit $tmp804 = $tmp802(((panda$core$Equatable*) $tmp797), ((panda$core$Equatable*) $tmp800));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp797)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp800)));
bool $tmp805 = $tmp804.value;
if ($tmp805) goto block16; else goto block17;
block16:;
// line 331
panda$core$Int64 $tmp806 = *(&local2);
panda$core$Int64 $tmp807 = (panda$core$Int64) {1};
int64_t $tmp808 = $tmp806.value;
int64_t $tmp809 = $tmp807.value;
int64_t $tmp810 = $tmp808 + $tmp809;
panda$core$Int64 $tmp811 = (panda$core$Int64) {$tmp810};
*(&local2) = $tmp811;
goto block17;
block17:;
// line 333
panda$core$Int64 $tmp812 = *(&local2);
org$pandalanguage$pandac$ClassDecl* $tmp813 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp813));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp812;

}
void org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

// line 337
panda$collections$HashSet** $tmp814 = &param0->writtenTypes;
panda$collections$HashSet* $tmp815 = *$tmp814;
panda$core$String** $tmp816 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp817 = *$tmp816;
panda$core$Bit $tmp818 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp815, ((panda$collections$Key*) $tmp817));
bool $tmp819 = $tmp818.value;
if ($tmp819) goto block1; else goto block2;
block1:;
// line 338
return;
block2:;
return;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

// line 343
panda$core$String** $tmp820 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp821 = *$tmp820;
panda$core$String* $tmp822 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp821);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp822));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp822));
return $tmp822;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
// line 347
panda$core$Weak** $tmp823 = &param0->compiler;
panda$core$Weak* $tmp824 = *$tmp823;
panda$core$Object* $tmp825 = panda$core$Weak$get$R$panda$core$Weak$T($tmp824);
panda$core$Panda$unref$panda$core$Object$Q($tmp825);
org$pandalanguage$pandac$ClassDecl* $tmp826 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp825), param1);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp827 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp827));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp826));
*(&local0) = $tmp826;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp826));
// line 348
org$pandalanguage$pandac$ClassDecl* $tmp828 = *(&local0);
panda$core$Bit $tmp829 = panda$core$Bit$init$builtin_bit($tmp828 != NULL);
bool $tmp830 = $tmp829.value;
if ($tmp830) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp831 = (panda$core$Int64) {348};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s832, $tmp831);
abort(); // unreachable
block1:;
// line 349
org$pandalanguage$pandac$ClassDecl* $tmp833 = *(&local0);
org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(param0, $tmp833);
// line 350
org$pandalanguage$pandac$Type$Kind* $tmp834 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp835 = *$tmp834;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp836;
$tmp836 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp836->value = $tmp835;
panda$core$Int64 $tmp837 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp838 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp837);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp839;
$tmp839 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp839->value = $tmp838;
ITable* $tmp840 = ((panda$core$Equatable*) $tmp836)->$class->itable;
while ($tmp840->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp840 = $tmp840->next;
}
$fn842 $tmp841 = $tmp840->methods[0];
panda$core$Bit $tmp843 = $tmp841(((panda$core$Equatable*) $tmp836), ((panda$core$Equatable*) $tmp839));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp836)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp839)));
bool $tmp844 = $tmp843.value;
if ($tmp844) goto block3; else goto block4;
block3:;
// line 351
panda$collections$ImmutableArray** $tmp845 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp846 = *$tmp845;
panda$core$Int64 $tmp847 = (panda$core$Int64) {0};
panda$core$Object* $tmp848 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp846, $tmp847);
panda$core$String* $tmp849 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp848));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp849));
panda$core$Panda$unref$panda$core$Object$Q($tmp848);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp849));
org$pandalanguage$pandac$ClassDecl* $tmp850 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp850));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp849;
block4:;
// line 353
panda$core$String** $tmp851 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp852 = *$tmp851;
panda$core$String* $tmp853 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp852);
panda$core$String* $tmp854 = panda$core$String$convert$R$panda$core$String($tmp853);
panda$core$String* $tmp855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp854, &$s856);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp855));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp853));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp854));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp855));
org$pandalanguage$pandac$ClassDecl* $tmp857 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp857));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp855;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

// line 357
panda$core$String* $tmp858 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param1);
panda$core$String* $tmp859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp858, &$s860);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp859));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp858));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp859));
return $tmp859;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

org$pandalanguage$pandac$Type* local0 = NULL;
panda$core$MutableString* local1 = NULL;
panda$core$Int64 local2;
// line 361
panda$core$Weak** $tmp861 = &param0->compiler;
panda$core$Weak* $tmp862 = *$tmp861;
panda$core$Object* $tmp863 = panda$core$Weak$get$R$panda$core$Weak$T($tmp862);
panda$core$Panda$unref$panda$core$Object$Q($tmp863);
org$pandalanguage$pandac$Type* $tmp864 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp863), param1);
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp865 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp865));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp864));
*(&local0) = $tmp864;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp864));
// line 362
panda$core$MutableString* $tmp866 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp866);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp867 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp867));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp866));
*(&local1) = $tmp866;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp866));
// line 363
panda$core$MutableString* $tmp868 = *(&local1);
org$pandalanguage$pandac$Type* $tmp869 = *(&local0);
org$pandalanguage$pandac$Type* $tmp870 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp869);
panda$core$String* $tmp871 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp870);
panda$core$MutableString$append$panda$core$String($tmp868, $tmp871);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp870));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp871));
// line 364
panda$core$MutableString* $tmp872 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp872, &$s873);
// line 365
panda$core$Bit $tmp874 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(param1);
bool $tmp875 = $tmp874.value;
if ($tmp875) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp876 = (panda$core$Int64) {365};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s877, $tmp876);
abort(); // unreachable
block1:;
// line 366
panda$core$MutableString* $tmp878 = *(&local1);
panda$core$Weak** $tmp879 = &param1->owner;
panda$core$Weak* $tmp880 = *$tmp879;
panda$core$Object* $tmp881 = panda$core$Weak$get$R$panda$core$Weak$T($tmp880);
panda$core$Panda$unref$panda$core$Object$Q($tmp881);
panda$core$String** $tmp882 = &((org$pandalanguage$pandac$ClassDecl*) $tmp881)->name;
panda$core$String* $tmp883 = *$tmp882;
panda$core$String* $tmp884 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp883);
panda$core$String* $tmp885 = panda$core$String$convert$R$panda$core$String($tmp884);
panda$core$String* $tmp886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp885, &$s887);
panda$core$MutableString$append$panda$core$String($tmp878, $tmp886);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp884));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp885));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp886));
// line 367
panda$core$Weak** $tmp888 = &param0->compiler;
panda$core$Weak* $tmp889 = *$tmp888;
panda$core$Object* $tmp890 = panda$core$Weak$get$R$panda$core$Weak$T($tmp889);
panda$core$Panda$unref$panda$core$Object$Q($tmp890);
panda$core$Weak** $tmp891 = &param1->owner;
panda$core$Weak* $tmp892 = *$tmp891;
panda$core$Object* $tmp893 = panda$core$Weak$get$R$panda$core$Weak$T($tmp892);
panda$core$Panda$unref$panda$core$Object$Q($tmp893);
panda$core$Bit $tmp894 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp890), ((org$pandalanguage$pandac$ClassDecl*) $tmp893));
bool $tmp895 = $tmp894.value;
if ($tmp895) goto block3; else goto block4;
block3:;
// line 368
panda$core$MutableString* $tmp896 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp896, &$s897);
goto block4;
block4:;
// line 370
panda$core$MutableString* $tmp898 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp898, &$s899);
// line 371
panda$core$Int64 $tmp900 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp901 = *(&local0);
panda$collections$ImmutableArray** $tmp902 = &$tmp901->subtypes;
panda$collections$ImmutableArray* $tmp903 = *$tmp902;
ITable* $tmp904 = ((panda$collections$CollectionView*) $tmp903)->$class->itable;
while ($tmp904->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp904 = $tmp904->next;
}
$fn906 $tmp905 = $tmp904->methods[0];
panda$core$Int64 $tmp907 = $tmp905(((panda$collections$CollectionView*) $tmp903));
panda$core$Int64 $tmp908 = (panda$core$Int64) {1};
int64_t $tmp909 = $tmp907.value;
int64_t $tmp910 = $tmp908.value;
int64_t $tmp911 = $tmp909 - $tmp910;
panda$core$Int64 $tmp912 = (panda$core$Int64) {$tmp911};
panda$core$Bit $tmp913 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp914 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp900, $tmp912, $tmp913);
panda$core$Int64 $tmp915 = $tmp914.min;
*(&local2) = $tmp915;
panda$core$Int64 $tmp916 = $tmp914.max;
panda$core$Bit $tmp917 = $tmp914.inclusive;
bool $tmp918 = $tmp917.value;
panda$core$Int64 $tmp919 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp920 = panda$core$Int64$convert$R$panda$core$UInt64($tmp919);
if ($tmp918) goto block8; else goto block9;
block8:;
int64_t $tmp921 = $tmp915.value;
int64_t $tmp922 = $tmp916.value;
bool $tmp923 = $tmp921 <= $tmp922;
panda$core$Bit $tmp924 = (panda$core$Bit) {$tmp923};
bool $tmp925 = $tmp924.value;
if ($tmp925) goto block5; else goto block6;
block9:;
int64_t $tmp926 = $tmp915.value;
int64_t $tmp927 = $tmp916.value;
bool $tmp928 = $tmp926 < $tmp927;
panda$core$Bit $tmp929 = (panda$core$Bit) {$tmp928};
bool $tmp930 = $tmp929.value;
if ($tmp930) goto block5; else goto block6;
block5:;
// line 372
panda$core$MutableString* $tmp931 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp931, &$s932);
// line 373
panda$core$MutableString* $tmp933 = *(&local1);
org$pandalanguage$pandac$Type* $tmp934 = *(&local0);
panda$collections$ImmutableArray** $tmp935 = &$tmp934->subtypes;
panda$collections$ImmutableArray* $tmp936 = *$tmp935;
panda$core$Int64 $tmp937 = *(&local2);
panda$core$Object* $tmp938 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp936, $tmp937);
panda$core$String* $tmp939 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp938));
panda$core$MutableString$append$panda$core$String($tmp933, $tmp939);
panda$core$Panda$unref$panda$core$Object$Q($tmp938);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp939));
goto block7;
block7:;
panda$core$Int64 $tmp940 = *(&local2);
int64_t $tmp941 = $tmp916.value;
int64_t $tmp942 = $tmp940.value;
int64_t $tmp943 = $tmp941 - $tmp942;
panda$core$Int64 $tmp944 = (panda$core$Int64) {$tmp943};
panda$core$UInt64 $tmp945 = panda$core$Int64$convert$R$panda$core$UInt64($tmp944);
if ($tmp918) goto block11; else goto block12;
block11:;
uint64_t $tmp946 = $tmp945.value;
uint64_t $tmp947 = $tmp920.value;
bool $tmp948 = $tmp946 >= $tmp947;
panda$core$Bit $tmp949 = (panda$core$Bit) {$tmp948};
bool $tmp950 = $tmp949.value;
if ($tmp950) goto block10; else goto block6;
block12:;
uint64_t $tmp951 = $tmp945.value;
uint64_t $tmp952 = $tmp920.value;
bool $tmp953 = $tmp951 > $tmp952;
panda$core$Bit $tmp954 = (panda$core$Bit) {$tmp953};
bool $tmp955 = $tmp954.value;
if ($tmp955) goto block10; else goto block6;
block10:;
int64_t $tmp956 = $tmp940.value;
int64_t $tmp957 = $tmp919.value;
int64_t $tmp958 = $tmp956 + $tmp957;
panda$core$Int64 $tmp959 = (panda$core$Int64) {$tmp958};
*(&local2) = $tmp959;
goto block5;
block6:;
// line 375
panda$core$MutableString* $tmp960 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp960, &$s961);
// line 376
panda$core$MutableString* $tmp962 = *(&local1);
panda$core$String* $tmp963 = panda$core$MutableString$finish$R$panda$core$String($tmp962);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp963));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp963));
panda$core$MutableString* $tmp964 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp964));
// unreffing result
*(&local1) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$Type* $tmp965 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp965));
// unreffing inheritedType
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp963;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

// line 380
org$pandalanguage$pandac$Type$Kind* $tmp966 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp967 = *$tmp966;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp968;
$tmp968 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp968->value = $tmp967;
panda$core$Int64 $tmp969 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp970 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp969);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp971;
$tmp971 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp971->value = $tmp970;
ITable* $tmp972 = ((panda$core$Equatable*) $tmp968)->$class->itable;
while ($tmp972->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp972 = $tmp972->next;
}
$fn974 $tmp973 = $tmp972->methods[0];
panda$core$Bit $tmp975 = $tmp973(((panda$core$Equatable*) $tmp968), ((panda$core$Equatable*) $tmp971));
bool $tmp976 = $tmp975.value;
if ($tmp976) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp977 = (panda$core$Int64) {380};
panda$core$String* $tmp978 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(param1);
panda$core$String* $tmp979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp978, &$s980);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s981, $tmp977, $tmp979);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp978));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp979));
abort(); // unreachable
block1:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp968)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp971)));
// line 381
panda$collections$ImmutableArray** $tmp982 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp983 = *$tmp982;
panda$core$Int64 $tmp984 = (panda$core$Int64) {0};
panda$core$Object* $tmp985 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp983, $tmp984);
panda$core$String* $tmp986 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp985));
panda$core$String* $tmp987 = panda$core$String$convert$R$panda$core$String($tmp986);
panda$core$String* $tmp988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp987, &$s989);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp988));
panda$core$Panda$unref$panda$core$Object$Q($tmp985);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp986));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp987));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp988));
return $tmp988;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

panda$collections$HashSet* local0 = NULL;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$Type* local2 = NULL;
org$pandalanguage$pandac$ClassDecl* local3 = NULL;
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* local4 = NULL;
panda$collections$ListView* local5 = NULL;
panda$core$String* local6 = NULL;
panda$core$MutableString* local7 = NULL;
panda$core$String* local8 = NULL;
org$pandalanguage$pandac$MethodDecl* local9 = NULL;
// line 385
panda$core$Weak** $tmp990 = &param0->compiler;
panda$core$Weak* $tmp991 = *$tmp990;
panda$core$Object* $tmp992 = panda$core$Weak$get$R$panda$core$Weak$T($tmp991);
panda$core$Panda$unref$panda$core$Object$Q($tmp992);
org$pandalanguage$pandac$Type** $tmp993 = &param1->type;
org$pandalanguage$pandac$Type* $tmp994 = *$tmp993;
panda$collections$HashSet* $tmp995 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$HashSet$LTorg$pandalanguage$pandac$Type$GT(((org$pandalanguage$pandac$Compiler*) $tmp992), $tmp994);
*(&local0) = ((panda$collections$HashSet*) NULL);
panda$collections$HashSet* $tmp996 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp996));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp995));
*(&local0) = $tmp995;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp995));
// line 386
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp997 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp997));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s998));
*(&local1) = &$s999;
// line 387
panda$collections$HashSet* $tmp1000 = *(&local0);
ITable* $tmp1001 = ((panda$collections$Iterable*) $tmp1000)->$class->itable;
while ($tmp1001->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1001 = $tmp1001->next;
}
$fn1003 $tmp1002 = $tmp1001->methods[0];
panda$collections$Iterator* $tmp1004 = $tmp1002(((panda$collections$Iterable*) $tmp1000));
goto block1;
block1:;
ITable* $tmp1005 = $tmp1004->$class->itable;
while ($tmp1005->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1005 = $tmp1005->next;
}
$fn1007 $tmp1006 = $tmp1005->methods[0];
panda$core$Bit $tmp1008 = $tmp1006($tmp1004);
bool $tmp1009 = $tmp1008.value;
if ($tmp1009) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp1010 = $tmp1004->$class->itable;
while ($tmp1010->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1010 = $tmp1010->next;
}
$fn1012 $tmp1011 = $tmp1010->methods[1];
panda$core$Object* $tmp1013 = $tmp1011($tmp1004);
org$pandalanguage$pandac$Type* $tmp1014 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1014));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1013)));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp1013);
// line 388
panda$core$Weak** $tmp1015 = &param0->compiler;
panda$core$Weak* $tmp1016 = *$tmp1015;
panda$core$Object* $tmp1017 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1016);
panda$core$Panda$unref$panda$core$Object$Q($tmp1017);
org$pandalanguage$pandac$Type* $tmp1018 = *(&local2);
org$pandalanguage$pandac$ClassDecl* $tmp1019 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1017), $tmp1018);
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp1020 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1020));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1019));
*(&local3) = $tmp1019;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1019));
// line 389
org$pandalanguage$pandac$ClassDecl* $tmp1021 = *(&local3);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1022 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, $tmp1021);
*(&local4) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1023 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1023));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1022));
*(&local4) = $tmp1022;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1022));
// line 390
panda$core$Weak** $tmp1024 = &param0->compiler;
panda$core$Weak* $tmp1025 = *$tmp1024;
panda$core$Object* $tmp1026 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1025);
panda$core$Panda$unref$panda$core$Object$Q($tmp1026);
org$pandalanguage$pandac$Type* $tmp1027 = *(&local2);
panda$collections$ListView* $tmp1028 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp1026), param1, $tmp1027);
*(&local5) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp1029 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1029));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
*(&local5) = $tmp1028;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
// line 391
panda$core$String** $tmp1030 = &param1->name;
panda$core$String* $tmp1031 = *$tmp1030;
panda$core$String* $tmp1032 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp1031);
panda$core$String* $tmp1033 = panda$core$String$convert$R$panda$core$String($tmp1032);
panda$core$String* $tmp1034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1033, &$s1035);
org$pandalanguage$pandac$ClassDecl* $tmp1036 = *(&local3);
panda$core$String** $tmp1037 = &$tmp1036->name;
panda$core$String* $tmp1038 = *$tmp1037;
panda$core$String* $tmp1039 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp1038);
panda$core$String* $tmp1040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1034, $tmp1039);
panda$core$String* $tmp1041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1040, &$s1042);
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp1043 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1043));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1041));
*(&local6) = $tmp1041;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1032));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1033));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1034));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1039));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1040));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1041));
// line 392
panda$core$MutableString* $tmp1044 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$Type* $tmp1045 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp1046 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp1045);
panda$core$String* $tmp1047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1048, $tmp1046);
panda$core$String* $tmp1049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1047, &$s1050);
panda$collections$ListView* $tmp1051 = *(&local5);
ITable* $tmp1052 = ((panda$collections$CollectionView*) $tmp1051)->$class->itable;
while ($tmp1052->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1052 = $tmp1052->next;
}
$fn1054 $tmp1053 = $tmp1052->methods[0];
panda$core$Int64 $tmp1055 = $tmp1053(((panda$collections$CollectionView*) $tmp1051));
panda$core$Int64$wrapper* $tmp1056;
$tmp1056 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1056->value = $tmp1055;
panda$core$String* $tmp1057 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1058, ((panda$core$Object*) $tmp1056));
panda$core$String* $tmp1059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1057, &$s1060);
panda$core$String* $tmp1061 = *(&local6);
panda$core$String* $tmp1062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1059, $tmp1061);
panda$core$String* $tmp1063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1062, &$s1064);
panda$core$String* $tmp1065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1049, $tmp1063);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1066 = *(&local4);
panda$core$String** $tmp1067 = &$tmp1066->name;
panda$core$String* $tmp1068 = *$tmp1067;
panda$core$String* $tmp1069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1070, $tmp1068);
panda$core$String* $tmp1071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1069, &$s1072);
panda$core$String* $tmp1073 = *(&local1);
panda$core$String* $tmp1074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1071, $tmp1073);
panda$core$String* $tmp1075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1074, &$s1076);
panda$core$String* $tmp1077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1065, $tmp1075);
panda$core$MutableString$init$panda$core$String($tmp1044, $tmp1077);
*(&local7) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp1078 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1078));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1044));
*(&local7) = $tmp1044;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1044));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1045));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1046));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1047));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1049));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1056));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1057));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1059));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1062));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1063));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1065));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1069));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1071));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1074));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1075));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1077));
// line 395
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp1079 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1079));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1080));
*(&local8) = &$s1081;
// line 396
panda$collections$ListView* $tmp1082 = *(&local5);
ITable* $tmp1083 = ((panda$collections$Iterable*) $tmp1082)->$class->itable;
while ($tmp1083->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1083 = $tmp1083->next;
}
$fn1085 $tmp1084 = $tmp1083->methods[0];
panda$collections$Iterator* $tmp1086 = $tmp1084(((panda$collections$Iterable*) $tmp1082));
goto block4;
block4:;
ITable* $tmp1087 = $tmp1086->$class->itable;
while ($tmp1087->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1087 = $tmp1087->next;
}
$fn1089 $tmp1088 = $tmp1087->methods[0];
panda$core$Bit $tmp1090 = $tmp1088($tmp1086);
bool $tmp1091 = $tmp1090.value;
if ($tmp1091) goto block6; else goto block5;
block5:;
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp1092 = $tmp1086->$class->itable;
while ($tmp1092->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1092 = $tmp1092->next;
}
$fn1094 $tmp1093 = $tmp1092->methods[1];
panda$core$Object* $tmp1095 = $tmp1093($tmp1086);
org$pandalanguage$pandac$MethodDecl* $tmp1096 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1096));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1095)));
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) $tmp1095);
// line 397
panda$core$MutableString* $tmp1097 = *(&local7);
panda$core$String* $tmp1098 = *(&local8);
panda$core$MutableString$append$panda$core$String($tmp1097, $tmp1098);
// line 398
panda$core$String* $tmp1099 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1099));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1100));
*(&local8) = &$s1101;
// line 399
org$pandalanguage$pandac$MethodDecl* $tmp1102 = *(&local9);
org$pandalanguage$pandac$Annotations** $tmp1103 = &$tmp1102->annotations;
org$pandalanguage$pandac$Annotations* $tmp1104 = *$tmp1103;
panda$core$Bit $tmp1105 = org$pandalanguage$pandac$Annotations$get_isAbstract$R$panda$core$Bit($tmp1104);
bool $tmp1106 = $tmp1105.value;
if ($tmp1106) goto block7; else goto block9;
block7:;
// line 400
panda$core$MutableString* $tmp1107 = *(&local7);
panda$core$MutableString$append$panda$core$String($tmp1107, &$s1108);
goto block8;
block9:;
// line 1
// line 403
panda$core$MutableString* $tmp1109 = *(&local7);
org$pandalanguage$pandac$MethodDecl* $tmp1110 = *(&local9);
panda$core$String* $tmp1111 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, $tmp1110);
panda$core$MutableString$append$panda$core$String($tmp1109, $tmp1111);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1111));
goto block8;
block8:;
panda$core$Panda$unref$panda$core$Object$Q($tmp1095);
org$pandalanguage$pandac$MethodDecl* $tmp1112 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1112));
// unreffing m
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block4;
block6:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1086));
// line 406
panda$core$MutableString* $tmp1113 = *(&local7);
panda$core$MutableString$append$panda$core$String($tmp1113, &$s1114);
// line 407
panda$io$MemoryOutputStream** $tmp1115 = &param0->types;
panda$io$MemoryOutputStream* $tmp1116 = *$tmp1115;
panda$core$MutableString* $tmp1117 = *(&local7);
panda$core$String* $tmp1118 = panda$core$MutableString$finish$R$panda$core$String($tmp1117);
$fn1120 $tmp1119 = ($fn1120) ((panda$io$OutputStream*) $tmp1116)->$class->vtable[19];
$tmp1119(((panda$io$OutputStream*) $tmp1116), $tmp1118);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1118));
// line 408
panda$core$String* $tmp1121 = *(&local6);
panda$core$String* $tmp1122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1123, $tmp1121);
panda$core$String* $tmp1124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1122, &$s1125);
panda$core$String* $tmp1126 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1126));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1124));
*(&local1) = $tmp1124;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1122));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1124));
panda$core$Panda$unref$panda$core$Object$Q($tmp1013);
panda$core$String* $tmp1127 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1127));
// unreffing separator
*(&local8) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp1128 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1128));
// unreffing result
*(&local7) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp1129 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1129));
// unreffing name
*(&local6) = ((panda$core$String*) NULL);
panda$collections$ListView* $tmp1130 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1130));
// unreffing methods
*(&local5) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1131 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1131));
// unreffing intfCC
*(&local4) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp1132 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1132));
// unreffing intf
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp1133 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1133));
// unreffing intfType
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1004));
// line 410
panda$core$String* $tmp1134 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1134));
panda$core$String* $tmp1135 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1135));
// unreffing previous
*(&local1) = ((panda$core$String*) NULL);
panda$collections$HashSet* $tmp1136 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1136));
// unreffing interfaces
*(&local0) = ((panda$collections$HashSet*) NULL);
return $tmp1134;

}
org$pandalanguage$pandac$CCodeGenerator$MethodShim* org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1, org$pandalanguage$pandac$Type* param2) {

org$pandalanguage$pandac$CCodeGenerator$MethodShim* local0 = NULL;
panda$io$IndentedOutputStream* local1 = NULL;
panda$io$MemoryOutputStream* local2 = NULL;
org$pandalanguage$pandac$Type* local3 = NULL;
panda$core$String* local4 = NULL;
panda$core$MutableString* local5 = NULL;
panda$core$String* local6 = NULL;
panda$core$Int64 local7;
panda$core$String* local8 = NULL;
panda$io$MemoryOutputStream* local9 = NULL;
panda$collections$Array* local10 = NULL;
panda$core$Int64 local11;
panda$core$String* local12 = NULL;
org$pandalanguage$pandac$Type* local13 = NULL;
panda$core$String* local14 = NULL;
panda$core$Bit local15;
panda$core$Int64 local16;
org$pandalanguage$pandac$CCodeGenerator$MethodShim* local17 = NULL;
// line 415
panda$collections$IdentityMap** $tmp1137 = &param0->methodShims;
panda$collections$IdentityMap* $tmp1138 = *$tmp1137;
panda$core$Object* $tmp1139 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q($tmp1138, ((panda$core$Object*) param1));
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) NULL);
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1140 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1140));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp1139)));
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp1139);
panda$core$Panda$unref$panda$core$Object$Q($tmp1139);
// line 416
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1141 = *(&local0);
panda$core$Bit $tmp1142 = panda$core$Bit$init$builtin_bit($tmp1141 != NULL);
bool $tmp1143 = $tmp1142.value;
if ($tmp1143) goto block1; else goto block2;
block1:;
// line 417
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1144 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1144));
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1145 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1145));
// unreffing found
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) NULL);
return $tmp1144;
block2:;
// line 419
panda$io$IndentedOutputStream** $tmp1146 = &param0->out;
panda$io$IndentedOutputStream* $tmp1147 = *$tmp1146;
*(&local1) = ((panda$io$IndentedOutputStream*) NULL);
panda$io$IndentedOutputStream* $tmp1148 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1148));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1147));
*(&local1) = $tmp1147;
// line 420
panda$io$MemoryOutputStream* $tmp1149 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp1149);
*(&local2) = ((panda$io$MemoryOutputStream*) NULL);
panda$io$MemoryOutputStream* $tmp1150 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1150));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1149));
*(&local2) = $tmp1149;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1149));
// line 421
panda$io$IndentedOutputStream* $tmp1151 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream* $tmp1152 = *(&local2);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp1151, ((panda$io$OutputStream*) $tmp1152));
panda$io$IndentedOutputStream** $tmp1153 = &param0->out;
panda$io$IndentedOutputStream* $tmp1154 = *$tmp1153;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1154));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1151));
panda$io$IndentedOutputStream** $tmp1155 = &param0->out;
*$tmp1155 = $tmp1151;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1151));
// line 422
panda$core$Bit $tmp1156 = org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit(param2);
bool $tmp1157 = $tmp1156.value;
if ($tmp1157) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp1158 = (panda$core$Int64) {422};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1159, $tmp1158);
abort(); // unreachable
block3:;
// line 423
panda$collections$ImmutableArray** $tmp1160 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp1161 = *$tmp1160;
ITable* $tmp1162 = ((panda$collections$CollectionView*) $tmp1161)->$class->itable;
while ($tmp1162->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1162 = $tmp1162->next;
}
$fn1164 $tmp1163 = $tmp1162->methods[0];
panda$core$Int64 $tmp1165 = $tmp1163(((panda$collections$CollectionView*) $tmp1161));
panda$collections$Array** $tmp1166 = &param1->parameters;
panda$collections$Array* $tmp1167 = *$tmp1166;
ITable* $tmp1168 = ((panda$collections$CollectionView*) $tmp1167)->$class->itable;
while ($tmp1168->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1168 = $tmp1168->next;
}
$fn1170 $tmp1169 = $tmp1168->methods[0];
panda$core$Int64 $tmp1171 = $tmp1169(((panda$collections$CollectionView*) $tmp1167));
panda$core$Int64 $tmp1172 = (panda$core$Int64) {2};
int64_t $tmp1173 = $tmp1171.value;
int64_t $tmp1174 = $tmp1172.value;
int64_t $tmp1175 = $tmp1173 + $tmp1174;
panda$core$Int64 $tmp1176 = (panda$core$Int64) {$tmp1175};
panda$core$Bit $tmp1177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1165, $tmp1176);
bool $tmp1178 = $tmp1177.value;
if ($tmp1178) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp1179 = (panda$core$Int64) {423};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1180, $tmp1179);
abort(); // unreachable
block5:;
// line 424
panda$core$Bit $tmp1181 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(param1);
bool $tmp1182 = $tmp1181.value;
if ($tmp1182) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp1183 = (panda$core$Int64) {424};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1184, $tmp1183);
abort(); // unreachable
block7:;
// line 425
org$pandalanguage$pandac$Type* $tmp1185 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type(param2);
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1186 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1186));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1185));
*(&local3) = $tmp1185;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1185));
// line 426
panda$core$String* $tmp1187 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp1188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1187, &$s1189);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp1190 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1190));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1188));
*(&local4) = $tmp1188;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1187));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1188));
// line 427
panda$core$MutableString* $tmp1191 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$Type* $tmp1192 = *(&local3);
panda$core$String* $tmp1193 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp1192);
panda$core$MutableString$init$panda$core$String($tmp1191, $tmp1193);
*(&local5) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp1194 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1194));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1191));
*(&local5) = $tmp1191;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1191));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1193));
// line 428
panda$io$IndentedOutputStream** $tmp1195 = &param0->out;
panda$io$IndentedOutputStream* $tmp1196 = *$tmp1195;
panda$core$MutableString* $tmp1197 = *(&local5);
panda$core$String* $tmp1198 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1199, ((panda$core$Object*) $tmp1197));
panda$core$String* $tmp1200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1198, &$s1201);
panda$core$String* $tmp1202 = *(&local4);
panda$core$String* $tmp1203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1200, $tmp1202);
panda$core$String* $tmp1204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1203, &$s1205);
$fn1207 $tmp1206 = ($fn1207) ((panda$io$OutputStream*) $tmp1196)->$class->vtable[17];
$tmp1206(((panda$io$OutputStream*) $tmp1196), $tmp1204);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1198));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1200));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1203));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1204));
// line 429
panda$core$MutableString* $tmp1208 = *(&local5);
panda$core$MutableString$append$panda$core$String($tmp1208, &$s1209);
// line 430
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp1210 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1210));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1211));
*(&local6) = &$s1212;
// line 431
panda$core$Int64 $tmp1213 = (panda$core$Int64) {0};
panda$collections$ImmutableArray** $tmp1214 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp1215 = *$tmp1214;
ITable* $tmp1216 = ((panda$collections$CollectionView*) $tmp1215)->$class->itable;
while ($tmp1216->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1216 = $tmp1216->next;
}
$fn1218 $tmp1217 = $tmp1216->methods[0];
panda$core$Int64 $tmp1219 = $tmp1217(((panda$collections$CollectionView*) $tmp1215));
panda$core$Int64 $tmp1220 = (panda$core$Int64) {1};
int64_t $tmp1221 = $tmp1219.value;
int64_t $tmp1222 = $tmp1220.value;
int64_t $tmp1223 = $tmp1221 - $tmp1222;
panda$core$Int64 $tmp1224 = (panda$core$Int64) {$tmp1223};
panda$core$Bit $tmp1225 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1226 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1213, $tmp1224, $tmp1225);
panda$core$Int64 $tmp1227 = $tmp1226.min;
*(&local7) = $tmp1227;
panda$core$Int64 $tmp1228 = $tmp1226.max;
panda$core$Bit $tmp1229 = $tmp1226.inclusive;
bool $tmp1230 = $tmp1229.value;
panda$core$Int64 $tmp1231 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1232 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1231);
if ($tmp1230) goto block12; else goto block13;
block12:;
int64_t $tmp1233 = $tmp1227.value;
int64_t $tmp1234 = $tmp1228.value;
bool $tmp1235 = $tmp1233 <= $tmp1234;
panda$core$Bit $tmp1236 = (panda$core$Bit) {$tmp1235};
bool $tmp1237 = $tmp1236.value;
if ($tmp1237) goto block9; else goto block10;
block13:;
int64_t $tmp1238 = $tmp1227.value;
int64_t $tmp1239 = $tmp1228.value;
bool $tmp1240 = $tmp1238 < $tmp1239;
panda$core$Bit $tmp1241 = (panda$core$Bit) {$tmp1240};
bool $tmp1242 = $tmp1241.value;
if ($tmp1242) goto block9; else goto block10;
block9:;
// line 432
panda$collections$ImmutableArray** $tmp1243 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp1244 = *$tmp1243;
panda$core$Int64 $tmp1245 = *(&local7);
panda$core$Object* $tmp1246 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1244, $tmp1245);
panda$core$String* $tmp1247 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp1246));
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp1248 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1248));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1247));
*(&local8) = $tmp1247;
panda$core$Panda$unref$panda$core$Object$Q($tmp1246);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1247));
// line 433
panda$core$MutableString* $tmp1249 = *(&local5);
panda$core$MutableString$append$panda$core$String($tmp1249, &$s1250);
// line 434
panda$core$MutableString* $tmp1251 = *(&local5);
panda$core$String* $tmp1252 = *(&local8);
panda$core$MutableString$append$panda$core$String($tmp1251, $tmp1252);
// line 435
panda$io$IndentedOutputStream** $tmp1253 = &param0->out;
panda$io$IndentedOutputStream* $tmp1254 = *$tmp1253;
panda$core$String* $tmp1255 = *(&local6);
panda$core$String* $tmp1256 = panda$core$String$convert$R$panda$core$String($tmp1255);
panda$core$String* $tmp1257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1256, &$s1258);
panda$core$String* $tmp1259 = *(&local8);
panda$core$String* $tmp1260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1257, $tmp1259);
panda$core$String* $tmp1261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1260, &$s1262);
panda$core$Int64 $tmp1263 = *(&local7);
panda$core$Int64$wrapper* $tmp1264;
$tmp1264 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1264->value = $tmp1263;
panda$core$String* $tmp1265 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1261, ((panda$core$Object*) $tmp1264));
panda$core$String* $tmp1266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1265, &$s1267);
$fn1269 $tmp1268 = ($fn1269) ((panda$io$OutputStream*) $tmp1254)->$class->vtable[17];
$tmp1268(((panda$io$OutputStream*) $tmp1254), $tmp1266);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1256));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1257));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1260));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1261));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1264));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1265));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1266));
// line 436
panda$core$String* $tmp1270 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1270));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1271));
*(&local6) = &$s1272;
panda$core$String* $tmp1273 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1273));
// unreffing pType
*(&local8) = ((panda$core$String*) NULL);
goto block11;
block11:;
panda$core$Int64 $tmp1274 = *(&local7);
int64_t $tmp1275 = $tmp1228.value;
int64_t $tmp1276 = $tmp1274.value;
int64_t $tmp1277 = $tmp1275 - $tmp1276;
panda$core$Int64 $tmp1278 = (panda$core$Int64) {$tmp1277};
panda$core$UInt64 $tmp1279 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1278);
if ($tmp1230) goto block15; else goto block16;
block15:;
uint64_t $tmp1280 = $tmp1279.value;
uint64_t $tmp1281 = $tmp1232.value;
bool $tmp1282 = $tmp1280 >= $tmp1281;
panda$core$Bit $tmp1283 = (panda$core$Bit) {$tmp1282};
bool $tmp1284 = $tmp1283.value;
if ($tmp1284) goto block14; else goto block10;
block16:;
uint64_t $tmp1285 = $tmp1279.value;
uint64_t $tmp1286 = $tmp1232.value;
bool $tmp1287 = $tmp1285 > $tmp1286;
panda$core$Bit $tmp1288 = (panda$core$Bit) {$tmp1287};
bool $tmp1289 = $tmp1288.value;
if ($tmp1289) goto block14; else goto block10;
block14:;
int64_t $tmp1290 = $tmp1274.value;
int64_t $tmp1291 = $tmp1231.value;
int64_t $tmp1292 = $tmp1290 + $tmp1291;
panda$core$Int64 $tmp1293 = (panda$core$Int64) {$tmp1292};
*(&local7) = $tmp1293;
goto block9;
block10:;
// line 438
panda$io$IndentedOutputStream** $tmp1294 = &param0->out;
panda$io$IndentedOutputStream* $tmp1295 = *$tmp1294;
$fn1297 $tmp1296 = ($fn1297) ((panda$io$OutputStream*) $tmp1295)->$class->vtable[19];
$tmp1296(((panda$io$OutputStream*) $tmp1295), &$s1298);
// line 439
panda$io$IndentedOutputStream** $tmp1299 = &param0->out;
panda$io$IndentedOutputStream* $tmp1300 = *$tmp1299;
panda$core$Int64* $tmp1301 = &$tmp1300->level;
panda$core$Int64 $tmp1302 = *$tmp1301;
panda$core$Int64 $tmp1303 = (panda$core$Int64) {1};
int64_t $tmp1304 = $tmp1302.value;
int64_t $tmp1305 = $tmp1303.value;
int64_t $tmp1306 = $tmp1304 + $tmp1305;
panda$core$Int64 $tmp1307 = (panda$core$Int64) {$tmp1306};
panda$core$Int64* $tmp1308 = &$tmp1300->level;
*$tmp1308 = $tmp1307;
// line 440
panda$core$MutableString* $tmp1309 = *(&local5);
panda$core$MutableString$append$panda$core$String($tmp1309, &$s1310);
// line 441
panda$io$MemoryOutputStream* $tmp1311 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp1311);
*(&local9) = ((panda$io$MemoryOutputStream*) NULL);
panda$io$MemoryOutputStream* $tmp1312 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1312));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1311));
*(&local9) = $tmp1311;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1311));
// line 442
panda$collections$Array* $tmp1313 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1313);
*(&local10) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1314 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1314));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1313));
*(&local10) = $tmp1313;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1313));
// line 443
panda$core$Int64 $tmp1315 = (panda$core$Int64) {0};
panda$collections$ImmutableArray** $tmp1316 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp1317 = *$tmp1316;
ITable* $tmp1318 = ((panda$collections$CollectionView*) $tmp1317)->$class->itable;
while ($tmp1318->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1318 = $tmp1318->next;
}
$fn1320 $tmp1319 = $tmp1318->methods[0];
panda$core$Int64 $tmp1321 = $tmp1319(((panda$collections$CollectionView*) $tmp1317));
panda$core$Int64 $tmp1322 = (panda$core$Int64) {1};
int64_t $tmp1323 = $tmp1321.value;
int64_t $tmp1324 = $tmp1322.value;
int64_t $tmp1325 = $tmp1323 - $tmp1324;
panda$core$Int64 $tmp1326 = (panda$core$Int64) {$tmp1325};
panda$core$Bit $tmp1327 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1328 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1315, $tmp1326, $tmp1327);
panda$core$Int64 $tmp1329 = $tmp1328.min;
*(&local11) = $tmp1329;
panda$core$Int64 $tmp1330 = $tmp1328.max;
panda$core$Bit $tmp1331 = $tmp1328.inclusive;
bool $tmp1332 = $tmp1331.value;
panda$core$Int64 $tmp1333 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1334 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1333);
if ($tmp1332) goto block20; else goto block21;
block20:;
int64_t $tmp1335 = $tmp1329.value;
int64_t $tmp1336 = $tmp1330.value;
bool $tmp1337 = $tmp1335 <= $tmp1336;
panda$core$Bit $tmp1338 = (panda$core$Bit) {$tmp1337};
bool $tmp1339 = $tmp1338.value;
if ($tmp1339) goto block17; else goto block18;
block21:;
int64_t $tmp1340 = $tmp1329.value;
int64_t $tmp1341 = $tmp1330.value;
bool $tmp1342 = $tmp1340 < $tmp1341;
panda$core$Bit $tmp1343 = (panda$core$Bit) {$tmp1342};
bool $tmp1344 = $tmp1343.value;
if ($tmp1344) goto block17; else goto block18;
block17:;
// line 444
panda$core$Int64 $tmp1345 = *(&local11);
panda$core$Int64$wrapper* $tmp1346;
$tmp1346 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1346->value = $tmp1345;
panda$core$String* $tmp1347 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1348, ((panda$core$Object*) $tmp1346));
panda$core$String* $tmp1349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1347, &$s1350);
*(&local12) = ((panda$core$String*) NULL);
panda$core$String* $tmp1351 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1351));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1349));
*(&local12) = $tmp1349;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1346));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1347));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1349));
// line 445
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
// line 446
panda$core$Int64 $tmp1352 = *(&local11);
panda$core$Int64 $tmp1353 = (panda$core$Int64) {0};
panda$core$Bit $tmp1354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1352, $tmp1353);
bool $tmp1355 = $tmp1354.value;
if ($tmp1355) goto block22; else goto block24;
block22:;
// line 447
panda$core$Weak** $tmp1356 = &param1->owner;
panda$core$Weak* $tmp1357 = *$tmp1356;
panda$core$Object* $tmp1358 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1357);
panda$core$Panda$unref$panda$core$Object$Q($tmp1358);
org$pandalanguage$pandac$Type** $tmp1359 = &((org$pandalanguage$pandac$ClassDecl*) $tmp1358)->type;
org$pandalanguage$pandac$Type* $tmp1360 = *$tmp1359;
org$pandalanguage$pandac$Type* $tmp1361 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1361));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1360));
*(&local13) = $tmp1360;
goto block23;
block24:;
// line 1
// line 450
panda$collections$Array** $tmp1362 = &param1->parameters;
panda$collections$Array* $tmp1363 = *$tmp1362;
panda$core$Int64 $tmp1364 = *(&local11);
panda$core$Int64 $tmp1365 = (panda$core$Int64) {1};
int64_t $tmp1366 = $tmp1364.value;
int64_t $tmp1367 = $tmp1365.value;
int64_t $tmp1368 = $tmp1366 - $tmp1367;
panda$core$Int64 $tmp1369 = (panda$core$Int64) {$tmp1368};
panda$core$Object* $tmp1370 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1363, $tmp1369);
org$pandalanguage$pandac$Type** $tmp1371 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1370)->type;
org$pandalanguage$pandac$Type* $tmp1372 = *$tmp1371;
org$pandalanguage$pandac$Type* $tmp1373 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1373));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1372));
*(&local13) = $tmp1372;
panda$core$Panda$unref$panda$core$Object$Q($tmp1370);
goto block23;
block23:;
// line 452
org$pandalanguage$pandac$Type* $tmp1374 = *(&local13);
panda$collections$ImmutableArray** $tmp1375 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp1376 = *$tmp1375;
panda$core$Int64 $tmp1377 = *(&local11);
panda$core$Object* $tmp1378 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1376, $tmp1377);
ITable* $tmp1379 = ((panda$core$Equatable*) $tmp1374)->$class->itable;
while ($tmp1379->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1379 = $tmp1379->next;
}
$fn1381 $tmp1380 = $tmp1379->methods[1];
panda$core$Bit $tmp1382 = $tmp1380(((panda$core$Equatable*) $tmp1374), ((panda$core$Equatable*) ((org$pandalanguage$pandac$Type*) $tmp1378)));
panda$core$Panda$unref$panda$core$Object$Q($tmp1378);
bool $tmp1383 = $tmp1382.value;
if ($tmp1383) goto block25; else goto block27;
block25:;
// line 453
panda$core$String* $tmp1384 = *(&local12);
panda$collections$ImmutableArray** $tmp1385 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp1386 = *$tmp1385;
panda$core$Int64 $tmp1387 = *(&local11);
panda$core$Object* $tmp1388 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1386, $tmp1387);
org$pandalanguage$pandac$Type* $tmp1389 = *(&local13);
panda$core$String* $tmp1390 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp1384, ((org$pandalanguage$pandac$Type*) $tmp1388), $tmp1389);
*(&local14) = ((panda$core$String*) NULL);
panda$core$String* $tmp1391 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1391));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1390));
*(&local14) = $tmp1390;
panda$core$Panda$unref$panda$core$Object$Q($tmp1388);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1390));
// line 454
panda$collections$Array* $tmp1392 = *(&local10);
panda$core$String* $tmp1393 = *(&local14);
panda$collections$Array$add$panda$collections$Array$T($tmp1392, ((panda$core$Object*) $tmp1393));
// line 455
panda$core$Weak** $tmp1394 = &param0->compiler;
panda$core$Weak* $tmp1395 = *$tmp1394;
panda$core$Object* $tmp1396 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1395);
panda$core$Panda$unref$panda$core$Object$Q($tmp1396);
panda$collections$ImmutableArray** $tmp1397 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp1398 = *$tmp1397;
panda$core$Int64 $tmp1399 = *(&local11);
panda$core$Object* $tmp1400 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1398, $tmp1399);
panda$core$Bit $tmp1401 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1396), ((org$pandalanguage$pandac$Type*) $tmp1400));
panda$core$Panda$unref$panda$core$Object$Q($tmp1400);
bool $tmp1402 = $tmp1401.value;
if ($tmp1402) goto block28; else goto block29;
block28:;
panda$core$Weak** $tmp1403 = &param0->compiler;
panda$core$Weak* $tmp1404 = *$tmp1403;
panda$core$Object* $tmp1405 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1404);
panda$core$Panda$unref$panda$core$Object$Q($tmp1405);
org$pandalanguage$pandac$Type* $tmp1406 = *(&local13);
panda$core$Bit $tmp1407 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1405), $tmp1406);
panda$core$Bit $tmp1408 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1407);
*(&local15) = $tmp1408;
goto block30;
block29:;
*(&local15) = $tmp1401;
goto block30;
block30:;
panda$core$Bit $tmp1409 = *(&local15);
bool $tmp1410 = $tmp1409.value;
if ($tmp1410) goto block31; else goto block32;
block31:;
// line 456
panda$io$MemoryOutputStream* $tmp1411 = *(&local9);
panda$core$String* $tmp1412 = *(&local14);
panda$core$String* $tmp1413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1414, $tmp1412);
panda$core$String* $tmp1415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1413, &$s1416);
panda$core$String* $tmp1417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1418, $tmp1415);
$fn1420 $tmp1419 = ($fn1420) ((panda$io$OutputStream*) $tmp1411)->$class->vtable[19];
$tmp1419(((panda$io$OutputStream*) $tmp1411), $tmp1417);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1413));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1415));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1417));
goto block32;
block32:;
panda$core$String* $tmp1421 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1421));
// unreffing cast
*(&local14) = ((panda$core$String*) NULL);
goto block26;
block27:;
// line 1
// line 461
panda$collections$Array* $tmp1422 = *(&local10);
panda$core$String* $tmp1423 = *(&local12);
panda$collections$Array$add$panda$collections$Array$T($tmp1422, ((panda$core$Object*) $tmp1423));
goto block26;
block26:;
org$pandalanguage$pandac$Type* $tmp1424 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1424));
// unreffing rawType
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp1425 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1425));
// unreffing p
*(&local12) = ((panda$core$String*) NULL);
goto block19;
block19:;
panda$core$Int64 $tmp1426 = *(&local11);
int64_t $tmp1427 = $tmp1330.value;
int64_t $tmp1428 = $tmp1426.value;
int64_t $tmp1429 = $tmp1427 - $tmp1428;
panda$core$Int64 $tmp1430 = (panda$core$Int64) {$tmp1429};
panda$core$UInt64 $tmp1431 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1430);
if ($tmp1332) goto block34; else goto block35;
block34:;
uint64_t $tmp1432 = $tmp1431.value;
uint64_t $tmp1433 = $tmp1334.value;
bool $tmp1434 = $tmp1432 >= $tmp1433;
panda$core$Bit $tmp1435 = (panda$core$Bit) {$tmp1434};
bool $tmp1436 = $tmp1435.value;
if ($tmp1436) goto block33; else goto block18;
block35:;
uint64_t $tmp1437 = $tmp1431.value;
uint64_t $tmp1438 = $tmp1334.value;
bool $tmp1439 = $tmp1437 > $tmp1438;
panda$core$Bit $tmp1440 = (panda$core$Bit) {$tmp1439};
bool $tmp1441 = $tmp1440.value;
if ($tmp1441) goto block33; else goto block18;
block33:;
int64_t $tmp1442 = $tmp1426.value;
int64_t $tmp1443 = $tmp1333.value;
int64_t $tmp1444 = $tmp1442 + $tmp1443;
panda$core$Int64 $tmp1445 = (panda$core$Int64) {$tmp1444};
*(&local11) = $tmp1445;
goto block17;
block18:;
// line 464
org$pandalanguage$pandac$Type** $tmp1446 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp1447 = *$tmp1446;
org$pandalanguage$pandac$Type* $tmp1448 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp1449 = ((panda$core$Equatable*) $tmp1447)->$class->itable;
while ($tmp1449->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1449 = $tmp1449->next;
}
$fn1451 $tmp1450 = $tmp1449->methods[1];
panda$core$Bit $tmp1452 = $tmp1450(((panda$core$Equatable*) $tmp1447), ((panda$core$Equatable*) $tmp1448));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1448));
bool $tmp1453 = $tmp1452.value;
if ($tmp1453) goto block36; else goto block37;
block36:;
// line 465
panda$io$IndentedOutputStream** $tmp1454 = &param0->out;
panda$io$IndentedOutputStream* $tmp1455 = *$tmp1454;
org$pandalanguage$pandac$Type** $tmp1456 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp1457 = *$tmp1456;
panda$core$String* $tmp1458 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp1457);
panda$core$String* $tmp1459 = panda$core$String$convert$R$panda$core$String($tmp1458);
panda$core$String* $tmp1460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1459, &$s1461);
$fn1463 $tmp1462 = ($fn1463) ((panda$io$OutputStream*) $tmp1455)->$class->vtable[17];
$tmp1462(((panda$io$OutputStream*) $tmp1455), $tmp1460);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1458));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1459));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1460));
goto block37;
block37:;
// line 467
panda$io$IndentedOutputStream** $tmp1464 = &param0->out;
panda$io$IndentedOutputStream* $tmp1465 = *$tmp1464;
panda$core$String* $tmp1466 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp1467 = panda$core$String$convert$R$panda$core$String($tmp1466);
panda$core$String* $tmp1468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1467, &$s1469);
$fn1471 $tmp1470 = ($fn1471) ((panda$io$OutputStream*) $tmp1465)->$class->vtable[17];
$tmp1470(((panda$io$OutputStream*) $tmp1465), $tmp1468);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1466));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1467));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1468));
// line 468
panda$core$String* $tmp1472 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1472));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1473));
*(&local6) = &$s1474;
// line 469
panda$core$Int64 $tmp1475 = (panda$core$Int64) {0};
panda$collections$ImmutableArray** $tmp1476 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp1477 = *$tmp1476;
ITable* $tmp1478 = ((panda$collections$CollectionView*) $tmp1477)->$class->itable;
while ($tmp1478->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1478 = $tmp1478->next;
}
$fn1480 $tmp1479 = $tmp1478->methods[0];
panda$core$Int64 $tmp1481 = $tmp1479(((panda$collections$CollectionView*) $tmp1477));
panda$core$Int64 $tmp1482 = (panda$core$Int64) {1};
int64_t $tmp1483 = $tmp1481.value;
int64_t $tmp1484 = $tmp1482.value;
int64_t $tmp1485 = $tmp1483 - $tmp1484;
panda$core$Int64 $tmp1486 = (panda$core$Int64) {$tmp1485};
panda$core$Bit $tmp1487 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1488 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1475, $tmp1486, $tmp1487);
panda$core$Int64 $tmp1489 = $tmp1488.min;
*(&local16) = $tmp1489;
panda$core$Int64 $tmp1490 = $tmp1488.max;
panda$core$Bit $tmp1491 = $tmp1488.inclusive;
bool $tmp1492 = $tmp1491.value;
panda$core$Int64 $tmp1493 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1494 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1493);
if ($tmp1492) goto block41; else goto block42;
block41:;
int64_t $tmp1495 = $tmp1489.value;
int64_t $tmp1496 = $tmp1490.value;
bool $tmp1497 = $tmp1495 <= $tmp1496;
panda$core$Bit $tmp1498 = (panda$core$Bit) {$tmp1497};
bool $tmp1499 = $tmp1498.value;
if ($tmp1499) goto block38; else goto block39;
block42:;
int64_t $tmp1500 = $tmp1489.value;
int64_t $tmp1501 = $tmp1490.value;
bool $tmp1502 = $tmp1500 < $tmp1501;
panda$core$Bit $tmp1503 = (panda$core$Bit) {$tmp1502};
bool $tmp1504 = $tmp1503.value;
if ($tmp1504) goto block38; else goto block39;
block38:;
// line 470
panda$io$IndentedOutputStream** $tmp1505 = &param0->out;
panda$io$IndentedOutputStream* $tmp1506 = *$tmp1505;
panda$core$String* $tmp1507 = *(&local6);
panda$core$String* $tmp1508 = panda$core$String$convert$R$panda$core$String($tmp1507);
panda$core$String* $tmp1509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1508, &$s1510);
panda$collections$Array* $tmp1511 = *(&local10);
panda$core$Int64 $tmp1512 = *(&local16);
panda$core$Object* $tmp1513 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1511, $tmp1512);
panda$core$String* $tmp1514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1509, ((panda$core$String*) $tmp1513));
panda$core$String* $tmp1515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1514, &$s1516);
$fn1518 $tmp1517 = ($fn1518) ((panda$io$OutputStream*) $tmp1506)->$class->vtable[17];
$tmp1517(((panda$io$OutputStream*) $tmp1506), $tmp1515);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1508));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1509));
panda$core$Panda$unref$panda$core$Object$Q($tmp1513);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1514));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1515));
// line 471
panda$core$String* $tmp1519 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1519));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1520));
*(&local6) = &$s1521;
goto block40;
block40:;
panda$core$Int64 $tmp1522 = *(&local16);
int64_t $tmp1523 = $tmp1490.value;
int64_t $tmp1524 = $tmp1522.value;
int64_t $tmp1525 = $tmp1523 - $tmp1524;
panda$core$Int64 $tmp1526 = (panda$core$Int64) {$tmp1525};
panda$core$UInt64 $tmp1527 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1526);
if ($tmp1492) goto block44; else goto block45;
block44:;
uint64_t $tmp1528 = $tmp1527.value;
uint64_t $tmp1529 = $tmp1494.value;
bool $tmp1530 = $tmp1528 >= $tmp1529;
panda$core$Bit $tmp1531 = (panda$core$Bit) {$tmp1530};
bool $tmp1532 = $tmp1531.value;
if ($tmp1532) goto block43; else goto block39;
block45:;
uint64_t $tmp1533 = $tmp1527.value;
uint64_t $tmp1534 = $tmp1494.value;
bool $tmp1535 = $tmp1533 > $tmp1534;
panda$core$Bit $tmp1536 = (panda$core$Bit) {$tmp1535};
bool $tmp1537 = $tmp1536.value;
if ($tmp1537) goto block43; else goto block39;
block43:;
int64_t $tmp1538 = $tmp1522.value;
int64_t $tmp1539 = $tmp1493.value;
int64_t $tmp1540 = $tmp1538 + $tmp1539;
panda$core$Int64 $tmp1541 = (panda$core$Int64) {$tmp1540};
*(&local16) = $tmp1541;
goto block38;
block39:;
// line 473
panda$io$IndentedOutputStream** $tmp1542 = &param0->out;
panda$io$IndentedOutputStream* $tmp1543 = *$tmp1542;
$fn1545 $tmp1544 = ($fn1545) ((panda$io$OutputStream*) $tmp1543)->$class->vtable[19];
$tmp1544(((panda$io$OutputStream*) $tmp1543), &$s1546);
// line 474
panda$io$IndentedOutputStream** $tmp1547 = &param0->out;
panda$io$IndentedOutputStream* $tmp1548 = *$tmp1547;
panda$io$MemoryOutputStream* $tmp1549 = *(&local9);
$fn1551 $tmp1550 = ($fn1551) ((panda$io$OutputStream*) $tmp1548)->$class->vtable[20];
$tmp1550(((panda$io$OutputStream*) $tmp1548), ((panda$core$Object*) $tmp1549));
// line 475
org$pandalanguage$pandac$Type** $tmp1552 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp1553 = *$tmp1552;
org$pandalanguage$pandac$Type* $tmp1554 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp1555 = ((panda$core$Equatable*) $tmp1553)->$class->itable;
while ($tmp1555->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1555 = $tmp1555->next;
}
$fn1557 $tmp1556 = $tmp1555->methods[1];
panda$core$Bit $tmp1558 = $tmp1556(((panda$core$Equatable*) $tmp1553), ((panda$core$Equatable*) $tmp1554));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1554));
bool $tmp1559 = $tmp1558.value;
if ($tmp1559) goto block46; else goto block47;
block46:;
// line 476
panda$io$IndentedOutputStream** $tmp1560 = &param0->out;
panda$io$IndentedOutputStream* $tmp1561 = *$tmp1560;
org$pandalanguage$pandac$Type** $tmp1562 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp1563 = *$tmp1562;
org$pandalanguage$pandac$Type* $tmp1564 = *(&local3);
panda$core$String* $tmp1565 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, &$s1566, $tmp1563, $tmp1564);
panda$core$String* $tmp1567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1568, $tmp1565);
panda$core$String* $tmp1569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1567, &$s1570);
$fn1572 $tmp1571 = ($fn1572) ((panda$io$OutputStream*) $tmp1561)->$class->vtable[19];
$tmp1571(((panda$io$OutputStream*) $tmp1561), $tmp1569);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1565));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1567));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1569));
goto block47;
block47:;
// line 479
panda$io$IndentedOutputStream** $tmp1573 = &param0->out;
panda$io$IndentedOutputStream* $tmp1574 = *$tmp1573;
panda$core$Int64* $tmp1575 = &$tmp1574->level;
panda$core$Int64 $tmp1576 = *$tmp1575;
panda$core$Int64 $tmp1577 = (panda$core$Int64) {1};
int64_t $tmp1578 = $tmp1576.value;
int64_t $tmp1579 = $tmp1577.value;
int64_t $tmp1580 = $tmp1578 - $tmp1579;
panda$core$Int64 $tmp1581 = (panda$core$Int64) {$tmp1580};
panda$core$Int64* $tmp1582 = &$tmp1574->level;
*$tmp1582 = $tmp1581;
// line 480
panda$io$IndentedOutputStream** $tmp1583 = &param0->out;
panda$io$IndentedOutputStream* $tmp1584 = *$tmp1583;
$fn1586 $tmp1585 = ($fn1586) ((panda$io$OutputStream*) $tmp1584)->$class->vtable[19];
$tmp1585(((panda$io$OutputStream*) $tmp1584), &$s1587);
// line 481
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1588 = (org$pandalanguage$pandac$CCodeGenerator$MethodShim*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$MethodShim$class);
panda$core$String* $tmp1589 = *(&local4);
panda$core$MutableString* $tmp1590 = *(&local5);
panda$core$String* $tmp1591 = panda$core$MutableString$finish$R$panda$core$String($tmp1590);
org$pandalanguage$pandac$CCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp1588, $tmp1589, $tmp1591);
*(&local17) = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) NULL);
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1592 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1592));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1588));
*(&local17) = $tmp1588;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1588));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1591));
// line 482
panda$collections$IdentityMap** $tmp1593 = &param0->methodShims;
panda$collections$IdentityMap* $tmp1594 = *$tmp1593;
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1595 = *(&local17);
panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V($tmp1594, ((panda$core$Object*) param1), ((panda$core$Object*) $tmp1595));
// line 483
panda$io$IndentedOutputStream** $tmp1596 = &param0->shims;
panda$io$IndentedOutputStream* $tmp1597 = *$tmp1596;
panda$io$MemoryOutputStream* $tmp1598 = *(&local2);
panda$core$String* $tmp1599 = panda$io$MemoryOutputStream$finish$R$panda$core$String($tmp1598);
$fn1601 $tmp1600 = ($fn1601) ((panda$io$OutputStream*) $tmp1597)->$class->vtable[17];
$tmp1600(((panda$io$OutputStream*) $tmp1597), $tmp1599);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1599));
// line 484
panda$io$IndentedOutputStream* $tmp1602 = *(&local1);
panda$io$IndentedOutputStream** $tmp1603 = &param0->out;
panda$io$IndentedOutputStream* $tmp1604 = *$tmp1603;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1604));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1602));
panda$io$IndentedOutputStream** $tmp1605 = &param0->out;
*$tmp1605 = $tmp1602;
// line 485
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1606 = *(&local17);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1606));
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1607 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1607));
// unreffing result
*(&local17) = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) NULL);
panda$collections$Array* $tmp1608 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1608));
// unreffing casts
*(&local10) = ((panda$collections$Array*) NULL);
panda$io$MemoryOutputStream* $tmp1609 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1609));
// unreffing unrefs
*(&local9) = ((panda$io$MemoryOutputStream*) NULL);
panda$core$String* $tmp1610 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1610));
// unreffing separator
*(&local6) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp1611 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1611));
// unreffing resultType
*(&local5) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp1612 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1612));
// unreffing resultName
*(&local4) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$Type* $tmp1613 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1613));
// unreffing effectiveReturnType
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
panda$io$MemoryOutputStream* $tmp1614 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1614));
// unreffing outBuffer
*(&local2) = ((panda$io$MemoryOutputStream*) NULL);
panda$io$IndentedOutputStream* $tmp1615 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1615));
// unreffing old
*(&local1) = ((panda$io$IndentedOutputStream*) NULL);
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1616 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1616));
// unreffing found
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) NULL);
return $tmp1606;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

panda$collections$HashSet* local0 = NULL;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$Type* local2 = NULL;
org$pandalanguage$pandac$ClassDecl* local3 = NULL;
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* local4 = NULL;
panda$collections$ListView* local5 = NULL;
panda$core$String* local6 = NULL;
panda$core$MutableString* local7 = NULL;
panda$core$String* local8 = NULL;
org$pandalanguage$pandac$MethodDecl* local9 = NULL;
// line 489
panda$core$Weak** $tmp1617 = &param0->compiler;
panda$core$Weak* $tmp1618 = *$tmp1617;
panda$core$Object* $tmp1619 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1618);
panda$core$Panda$unref$panda$core$Object$Q($tmp1619);
org$pandalanguage$pandac$Type** $tmp1620 = &param1->type;
org$pandalanguage$pandac$Type* $tmp1621 = *$tmp1620;
panda$collections$HashSet* $tmp1622 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$HashSet$LTorg$pandalanguage$pandac$Type$GT(((org$pandalanguage$pandac$Compiler*) $tmp1619), $tmp1621);
*(&local0) = ((panda$collections$HashSet*) NULL);
panda$collections$HashSet* $tmp1623 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1623));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1622));
*(&local0) = $tmp1622;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1622));
// line 490
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp1624 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1624));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1625));
*(&local1) = &$s1626;
// line 491
panda$collections$HashSet* $tmp1627 = *(&local0);
ITable* $tmp1628 = ((panda$collections$Iterable*) $tmp1627)->$class->itable;
while ($tmp1628->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1628 = $tmp1628->next;
}
$fn1630 $tmp1629 = $tmp1628->methods[0];
panda$collections$Iterator* $tmp1631 = $tmp1629(((panda$collections$Iterable*) $tmp1627));
goto block1;
block1:;
ITable* $tmp1632 = $tmp1631->$class->itable;
while ($tmp1632->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1632 = $tmp1632->next;
}
$fn1634 $tmp1633 = $tmp1632->methods[0];
panda$core$Bit $tmp1635 = $tmp1633($tmp1631);
bool $tmp1636 = $tmp1635.value;
if ($tmp1636) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp1637 = $tmp1631->$class->itable;
while ($tmp1637->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1637 = $tmp1637->next;
}
$fn1639 $tmp1638 = $tmp1637->methods[1];
panda$core$Object* $tmp1640 = $tmp1638($tmp1631);
org$pandalanguage$pandac$Type* $tmp1641 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1641));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1640)));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp1640);
// line 492
panda$core$Weak** $tmp1642 = &param0->compiler;
panda$core$Weak* $tmp1643 = *$tmp1642;
panda$core$Object* $tmp1644 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1643);
panda$core$Panda$unref$panda$core$Object$Q($tmp1644);
org$pandalanguage$pandac$Type* $tmp1645 = *(&local2);
org$pandalanguage$pandac$ClassDecl* $tmp1646 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1644), $tmp1645);
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp1647 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1647));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1646));
*(&local3) = $tmp1646;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1646));
// line 493
org$pandalanguage$pandac$ClassDecl* $tmp1648 = *(&local3);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1649 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, $tmp1648);
*(&local4) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1650 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1650));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1649));
*(&local4) = $tmp1649;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1649));
// line 494
panda$core$Weak** $tmp1651 = &param0->compiler;
panda$core$Weak* $tmp1652 = *$tmp1651;
panda$core$Object* $tmp1653 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1652);
panda$core$Panda$unref$panda$core$Object$Q($tmp1653);
org$pandalanguage$pandac$Type* $tmp1654 = *(&local2);
panda$collections$ListView* $tmp1655 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp1653), param1, $tmp1654);
*(&local5) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp1656 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1656));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1655));
*(&local5) = $tmp1655;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1655));
// line 495
panda$core$String** $tmp1657 = &param1->name;
panda$core$String* $tmp1658 = *$tmp1657;
panda$core$String* $tmp1659 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp1658);
panda$core$String* $tmp1660 = panda$core$String$convert$R$panda$core$String($tmp1659);
panda$core$String* $tmp1661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1660, &$s1662);
org$pandalanguage$pandac$ClassDecl* $tmp1663 = *(&local3);
panda$core$String** $tmp1664 = &$tmp1663->name;
panda$core$String* $tmp1665 = *$tmp1664;
panda$core$String* $tmp1666 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp1665);
panda$core$String* $tmp1667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1661, $tmp1666);
panda$core$String* $tmp1668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1667, &$s1669);
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp1670 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1670));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1668));
*(&local6) = $tmp1668;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1659));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1660));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1661));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1666));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1667));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1668));
// line 496
panda$core$MutableString* $tmp1671 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$Type* $tmp1672 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp1673 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp1672);
panda$core$String* $tmp1674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1675, $tmp1673);
panda$core$String* $tmp1676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1674, &$s1677);
panda$collections$ListView* $tmp1678 = *(&local5);
ITable* $tmp1679 = ((panda$collections$CollectionView*) $tmp1678)->$class->itable;
while ($tmp1679->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1679 = $tmp1679->next;
}
$fn1681 $tmp1680 = $tmp1679->methods[0];
panda$core$Int64 $tmp1682 = $tmp1680(((panda$collections$CollectionView*) $tmp1678));
panda$core$Int64$wrapper* $tmp1683;
$tmp1683 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1683->value = $tmp1682;
panda$core$String* $tmp1684 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1685, ((panda$core$Object*) $tmp1683));
panda$core$String* $tmp1686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1684, &$s1687);
panda$core$String* $tmp1688 = *(&local6);
panda$core$String* $tmp1689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1686, $tmp1688);
panda$core$String* $tmp1690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1689, &$s1691);
panda$core$String* $tmp1692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1676, $tmp1690);
org$pandalanguage$pandac$Type* $tmp1693 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp1694 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp1693);
panda$core$String* $tmp1695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1696, $tmp1694);
panda$core$String* $tmp1697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1695, &$s1698);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1699 = *(&local4);
panda$core$String** $tmp1700 = &$tmp1699->name;
panda$core$String* $tmp1701 = *$tmp1700;
panda$core$String* $tmp1702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1697, $tmp1701);
panda$core$String* $tmp1703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1702, &$s1704);
panda$core$String* $tmp1705 = *(&local1);
panda$core$String* $tmp1706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1703, $tmp1705);
panda$core$String* $tmp1707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1706, &$s1708);
panda$core$String* $tmp1709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1692, $tmp1707);
panda$core$MutableString$init$panda$core$String($tmp1671, $tmp1709);
*(&local7) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp1710 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1710));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1671));
*(&local7) = $tmp1671;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1671));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1672));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1673));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1674));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1676));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1683));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1684));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1686));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1689));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1690));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1692));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1693));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1694));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1695));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1697));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1702));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1703));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1706));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1707));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1709));
// line 499
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp1711 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1711));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1712));
*(&local8) = &$s1713;
// line 500
panda$collections$ListView* $tmp1714 = *(&local5);
ITable* $tmp1715 = ((panda$collections$Iterable*) $tmp1714)->$class->itable;
while ($tmp1715->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1715 = $tmp1715->next;
}
$fn1717 $tmp1716 = $tmp1715->methods[0];
panda$collections$Iterator* $tmp1718 = $tmp1716(((panda$collections$Iterable*) $tmp1714));
goto block4;
block4:;
ITable* $tmp1719 = $tmp1718->$class->itable;
while ($tmp1719->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1719 = $tmp1719->next;
}
$fn1721 $tmp1720 = $tmp1719->methods[0];
panda$core$Bit $tmp1722 = $tmp1720($tmp1718);
bool $tmp1723 = $tmp1722.value;
if ($tmp1723) goto block6; else goto block5;
block5:;
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp1724 = $tmp1718->$class->itable;
while ($tmp1724->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1724 = $tmp1724->next;
}
$fn1726 $tmp1725 = $tmp1724->methods[1];
panda$core$Object* $tmp1727 = $tmp1725($tmp1718);
org$pandalanguage$pandac$MethodDecl* $tmp1728 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1728));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1727)));
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) $tmp1727);
// line 501
panda$core$MutableString* $tmp1729 = *(&local7);
panda$core$String* $tmp1730 = *(&local8);
panda$core$MutableString$append$panda$core$String($tmp1729, $tmp1730);
// line 502
panda$core$String* $tmp1731 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1731));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1732));
*(&local8) = &$s1733;
// line 503
org$pandalanguage$pandac$MethodDecl* $tmp1734 = *(&local9);
org$pandalanguage$pandac$Annotations** $tmp1735 = &$tmp1734->annotations;
org$pandalanguage$pandac$Annotations* $tmp1736 = *$tmp1735;
panda$core$Bit $tmp1737 = org$pandalanguage$pandac$Annotations$get_isAbstract$R$panda$core$Bit($tmp1736);
bool $tmp1738 = $tmp1737.value;
if ($tmp1738) goto block7; else goto block9;
block7:;
// line 504
panda$core$MutableString* $tmp1739 = *(&local7);
panda$core$MutableString$append$panda$core$String($tmp1739, &$s1740);
goto block8;
block9:;
// line 1
// line 507
panda$core$MutableString* $tmp1741 = *(&local7);
org$pandalanguage$pandac$MethodDecl* $tmp1742 = *(&local9);
panda$core$String* $tmp1743 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, $tmp1742);
panda$core$MutableString$append$panda$core$String($tmp1741, $tmp1743);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1743));
goto block8;
block8:;
panda$core$Panda$unref$panda$core$Object$Q($tmp1727);
org$pandalanguage$pandac$MethodDecl* $tmp1744 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1744));
// unreffing m
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block4;
block6:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1718));
// line 510
panda$core$MutableString* $tmp1745 = *(&local7);
panda$core$MutableString$append$panda$core$String($tmp1745, &$s1746);
// line 511
panda$io$MemoryOutputStream** $tmp1747 = &param0->types;
panda$io$MemoryOutputStream* $tmp1748 = *$tmp1747;
panda$core$MutableString* $tmp1749 = *(&local7);
panda$core$String* $tmp1750 = panda$core$MutableString$finish$R$panda$core$String($tmp1749);
$fn1752 $tmp1751 = ($fn1752) ((panda$io$OutputStream*) $tmp1748)->$class->vtable[19];
$tmp1751(((panda$io$OutputStream*) $tmp1748), $tmp1750);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1750));
// line 512
panda$core$String* $tmp1753 = *(&local6);
panda$core$String* $tmp1754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1755, $tmp1753);
panda$core$String* $tmp1756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1754, &$s1757);
panda$core$String* $tmp1758 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1758));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1756));
*(&local1) = $tmp1756;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1754));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1756));
panda$core$Panda$unref$panda$core$Object$Q($tmp1640);
panda$core$String* $tmp1759 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1759));
// unreffing separator
*(&local8) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp1760 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1760));
// unreffing result
*(&local7) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp1761 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1761));
// unreffing name
*(&local6) = ((panda$core$String*) NULL);
panda$collections$ListView* $tmp1762 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1762));
// unreffing methods
*(&local5) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1763 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1763));
// unreffing intfCC
*(&local4) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp1764 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1764));
// unreffing intf
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp1765 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1765));
// unreffing intfType
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1631));
// line 514
panda$core$String* $tmp1766 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1766));
panda$core$String* $tmp1767 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1767));
// unreffing previous
*(&local1) = ((panda$core$String*) NULL);
panda$collections$HashSet* $tmp1768 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1768));
// unreffing interfaces
*(&local0) = ((panda$collections$HashSet*) NULL);
return $tmp1766;

}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

// line 518
panda$core$Weak** $tmp1769 = &param0->hCodeGen;
panda$core$Weak* $tmp1770 = *$tmp1769;
panda$core$Object* $tmp1771 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1770);
panda$core$Panda$unref$panda$core$Object$Q($tmp1771);
panda$core$Bit $tmp1772 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(((org$pandalanguage$pandac$HCodeGenerator*) $tmp1771), param1);
return $tmp1772;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$Type* local1 = NULL;
org$pandalanguage$pandac$Type* local2 = NULL;
org$pandalanguage$pandac$Type* local3 = NULL;
org$pandalanguage$pandac$CCodeGenerator$MethodShim* local4 = NULL;
// line 522
panda$core$Weak** $tmp1773 = &param0->compiler;
panda$core$Weak* $tmp1774 = *$tmp1773;
panda$core$Object* $tmp1775 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1774);
panda$core$Panda$unref$panda$core$Object$Q($tmp1775);
panda$core$Bit $tmp1776 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1775), param1);
// line 523
panda$core$Weak** $tmp1777 = &param1->owner;
panda$core$Weak* $tmp1778 = *$tmp1777;
panda$core$Object* $tmp1779 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1778);
panda$core$Panda$unref$panda$core$Object$Q($tmp1779);
panda$core$Bit $tmp1780 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp1779));
bool $tmp1781 = $tmp1780.value;
if ($tmp1781) goto block1; else goto block2;
block1:;
// line 524
org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(param0, param1);
goto block2;
block2:;
// line 526
*(&local0) = ((panda$core$String*) NULL);
// line 527
panda$core$Weak** $tmp1782 = &param0->compiler;
panda$core$Weak* $tmp1783 = *$tmp1782;
panda$core$Object* $tmp1784 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1783);
panda$core$Panda$unref$panda$core$Object$Q($tmp1784);
panda$core$Weak** $tmp1785 = &param1->owner;
panda$core$Weak* $tmp1786 = *$tmp1785;
panda$core$Object* $tmp1787 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1786);
panda$core$Panda$unref$panda$core$Object$Q($tmp1787);
org$pandalanguage$pandac$Type** $tmp1788 = &((org$pandalanguage$pandac$ClassDecl*) $tmp1787)->type;
org$pandalanguage$pandac$Type* $tmp1789 = *$tmp1788;
panda$core$Bit $tmp1790 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type* $tmp1791 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp1784), param1, $tmp1789, $tmp1790);
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1792 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1792));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1791));
*(&local1) = $tmp1791;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1791));
// line 528
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
// line 529
panda$core$Weak** $tmp1793 = &param0->compiler;
panda$core$Weak* $tmp1794 = *$tmp1793;
panda$core$Object* $tmp1795 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1794);
panda$core$Panda$unref$panda$core$Object$Q($tmp1795);
panda$core$Weak** $tmp1796 = &param1->owner;
panda$core$Weak* $tmp1797 = *$tmp1796;
panda$core$Object* $tmp1798 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1797);
panda$core$Panda$unref$panda$core$Object$Q($tmp1798);
panda$core$Bit $tmp1799 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1795), ((org$pandalanguage$pandac$ClassDecl*) $tmp1798));
bool $tmp1800 = $tmp1799.value;
if ($tmp1800) goto block3; else goto block5;
block3:;
// line 530
org$pandalanguage$pandac$Type* $tmp1801 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp1802 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1802));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1801));
*(&local2) = $tmp1801;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1801));
goto block4;
block5:;
// line 1
// line 533
panda$core$Weak** $tmp1803 = &param1->owner;
panda$core$Weak* $tmp1804 = *$tmp1803;
panda$core$Object* $tmp1805 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1804);
panda$core$Panda$unref$panda$core$Object$Q($tmp1805);
org$pandalanguage$pandac$Type** $tmp1806 = &((org$pandalanguage$pandac$ClassDecl*) $tmp1805)->type;
org$pandalanguage$pandac$Type* $tmp1807 = *$tmp1806;
org$pandalanguage$pandac$Type* $tmp1808 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1808));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1807));
*(&local2) = $tmp1807;
goto block4;
block4:;
// line 535
panda$core$Weak** $tmp1809 = &param0->compiler;
panda$core$Weak* $tmp1810 = *$tmp1809;
panda$core$Object* $tmp1811 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1810);
panda$core$Panda$unref$panda$core$Object$Q($tmp1811);
org$pandalanguage$pandac$Type* $tmp1812 = *(&local2);
org$pandalanguage$pandac$Type* $tmp1813 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp1811), param1, $tmp1812);
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1814 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1814));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1813));
*(&local3) = $tmp1813;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1813));
// line 536
org$pandalanguage$pandac$Type* $tmp1815 = *(&local1);
org$pandalanguage$pandac$Type* $tmp1816 = *(&local3);
ITable* $tmp1817 = ((panda$core$Equatable*) $tmp1815)->$class->itable;
while ($tmp1817->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1817 = $tmp1817->next;
}
$fn1819 $tmp1818 = $tmp1817->methods[1];
panda$core$Bit $tmp1820 = $tmp1818(((panda$core$Equatable*) $tmp1815), ((panda$core$Equatable*) $tmp1816));
bool $tmp1821 = $tmp1820.value;
if ($tmp1821) goto block6; else goto block8;
block6:;
// line 537
org$pandalanguage$pandac$Type* $tmp1822 = *(&local3);
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1823 = org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(param0, param1, $tmp1822);
*(&local4) = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) NULL);
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1824 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1824));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1823));
*(&local4) = $tmp1823;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1823));
// line 538
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1825 = *(&local4);
panda$core$String** $tmp1826 = &$tmp1825->name;
panda$core$String* $tmp1827 = *$tmp1826;
panda$core$String* $tmp1828 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1828));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1827));
*(&local0) = $tmp1827;
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1829 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1829));
// unreffing shim
*(&local4) = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) NULL);
goto block7;
block8:;
// line 1
// line 541
panda$core$String* $tmp1830 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp1831 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1831));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1830));
*(&local0) = $tmp1830;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1830));
goto block7;
block7:;
// line 543
panda$core$String* $tmp1832 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1832));
org$pandalanguage$pandac$Type* $tmp1833 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1833));
// unreffing inherited
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1834 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1834));
// unreffing effectiveSelf
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1835 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1835));
// unreffing declared
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp1836 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1836));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp1832;

}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

org$pandalanguage$pandac$CCodeGenerator$ClassConstant* local0 = NULL;
panda$core$String* local1 = NULL;
panda$collections$ListView* local2 = NULL;
panda$core$String* local3 = NULL;
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* local4 = NULL;
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* local5 = NULL;
panda$core$String* local6 = NULL;
panda$core$MutableString* local7 = NULL;
panda$core$String* local8 = NULL;
org$pandalanguage$pandac$MethodDecl* local9 = NULL;
// line 547
panda$collections$HashMap** $tmp1837 = &param0->classConstants;
panda$collections$HashMap* $tmp1838 = *$tmp1837;
panda$core$String** $tmp1839 = &param1->name;
panda$core$String* $tmp1840 = *$tmp1839;
panda$core$Object* $tmp1841 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp1838, ((panda$collections$Key*) $tmp1840));
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1842 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1842));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1841)));
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1841);
panda$core$Panda$unref$panda$core$Object$Q($tmp1841);
// line 548
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1843 = *(&local0);
panda$core$Bit $tmp1844 = panda$core$Bit$init$builtin_bit($tmp1843 == NULL);
bool $tmp1845 = $tmp1844.value;
if ($tmp1845) goto block1; else goto block2;
block1:;
// line 549
org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(param0, param1);
// line 550
panda$core$Weak** $tmp1846 = &param0->compiler;
panda$core$Weak* $tmp1847 = *$tmp1846;
panda$core$Object* $tmp1848 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1847);
panda$core$Panda$unref$panda$core$Object$Q($tmp1848);
panda$core$Bit $tmp1849 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1848), param1);
// line 551
*(&local1) = ((panda$core$String*) NULL);
// line 552
panda$core$Bit $tmp1850 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(param0, param1);
bool $tmp1851 = $tmp1850.value;
if ($tmp1851) goto block3; else goto block4;
block3:;
// line 553
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1852 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
org$pandalanguage$pandac$Type** $tmp1853 = &param1->type;
org$pandalanguage$pandac$Type* $tmp1854 = *$tmp1853;
panda$core$String** $tmp1855 = &((org$pandalanguage$pandac$Symbol*) $tmp1854)->name;
panda$core$String* $tmp1856 = *$tmp1855;
panda$core$String* $tmp1857 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp1856);
panda$core$String* $tmp1858 = panda$core$String$convert$R$panda$core$String($tmp1857);
panda$core$String* $tmp1859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1858, &$s1860);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1852, $tmp1859, &$s1861);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1862 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1862));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1852));
*(&local0) = $tmp1852;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1852));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1857));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1858));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1859));
// line 555
panda$collections$HashMap** $tmp1863 = &param0->classConstants;
panda$collections$HashMap* $tmp1864 = *$tmp1863;
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1865 = *(&local0);
panda$core$String** $tmp1866 = &param1->name;
panda$core$String* $tmp1867 = *$tmp1866;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp1864, ((panda$collections$Key*) $tmp1867), ((panda$core$Object*) $tmp1865));
// line 556
panda$collections$HashMap** $tmp1868 = &param0->classConstants;
panda$collections$HashMap* $tmp1869 = *$tmp1868;
panda$core$String** $tmp1870 = &param1->name;
panda$core$String* $tmp1871 = *$tmp1870;
panda$core$Object* $tmp1872 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp1869, ((panda$collections$Key*) $tmp1871));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1872)));
panda$core$Panda$unref$panda$core$Object$Q($tmp1872);
panda$core$String* $tmp1873 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1873));
// unreffing type
*(&local1) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1874 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1874));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
return ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1872);
block4:;
// line 558
panda$core$Weak** $tmp1875 = &param0->compiler;
panda$core$Weak* $tmp1876 = *$tmp1875;
panda$core$Object* $tmp1877 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1876);
panda$core$Panda$unref$panda$core$Object$Q($tmp1877);
panda$collections$Stack** $tmp1878 = &((org$pandalanguage$pandac$Compiler*) $tmp1877)->currentClass;
panda$collections$Stack* $tmp1879 = *$tmp1878;
panda$collections$Stack$push$panda$collections$Stack$T($tmp1879, ((panda$core$Object*) param1));
// line 559
panda$core$Weak** $tmp1880 = &param0->compiler;
panda$core$Weak* $tmp1881 = *$tmp1880;
panda$core$Object* $tmp1882 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1881);
panda$core$Panda$unref$panda$core$Object$Q($tmp1882);
panda$collections$ListView* $tmp1883 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp1882), param1);
*(&local2) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp1884 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1884));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1883));
*(&local2) = $tmp1883;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1883));
// line 560
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1885 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
org$pandalanguage$pandac$Type** $tmp1886 = &param1->type;
org$pandalanguage$pandac$Type* $tmp1887 = *$tmp1886;
panda$core$String** $tmp1888 = &((org$pandalanguage$pandac$Symbol*) $tmp1887)->name;
panda$core$String* $tmp1889 = *$tmp1888;
panda$core$String* $tmp1890 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp1889);
panda$core$String* $tmp1891 = panda$core$String$convert$R$panda$core$String($tmp1890);
panda$core$String* $tmp1892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1891, &$s1893);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1885, $tmp1892, &$s1894);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1895 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1895));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1885));
*(&local0) = $tmp1885;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1885));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1890));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1891));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1892));
// line 561
panda$collections$HashMap** $tmp1896 = &param0->classConstants;
panda$collections$HashMap* $tmp1897 = *$tmp1896;
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1898 = *(&local0);
panda$core$String** $tmp1899 = &param1->name;
panda$core$String* $tmp1900 = *$tmp1899;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp1897, ((panda$collections$Key*) $tmp1900), ((panda$core$Object*) $tmp1898));
// line 562
*(&local3) = ((panda$core$String*) NULL);
// line 563
org$pandalanguage$pandac$Type** $tmp1901 = &param1->rawSuper;
org$pandalanguage$pandac$Type* $tmp1902 = *$tmp1901;
panda$core$Bit $tmp1903 = panda$core$Bit$init$builtin_bit($tmp1902 != NULL);
bool $tmp1904 = $tmp1903.value;
if ($tmp1904) goto block5; else goto block7;
block5:;
// line 564
panda$core$Weak** $tmp1905 = &param0->compiler;
panda$core$Weak* $tmp1906 = *$tmp1905;
panda$core$Object* $tmp1907 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1906);
panda$core$Panda$unref$panda$core$Object$Q($tmp1907);
org$pandalanguage$pandac$Type** $tmp1908 = &param1->rawSuper;
org$pandalanguage$pandac$Type* $tmp1909 = *$tmp1908;
org$pandalanguage$pandac$ClassDecl* $tmp1910 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1907), $tmp1909);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1911 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, $tmp1910);
*(&local4) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1912 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1912));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1911));
*(&local4) = $tmp1911;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1910));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1911));
// line 565
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1913 = *(&local4);
panda$core$String** $tmp1914 = &$tmp1913->name;
panda$core$String* $tmp1915 = *$tmp1914;
panda$core$String* $tmp1916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1917, $tmp1915);
panda$core$String* $tmp1918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1916, &$s1919);
panda$core$String* $tmp1920 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1920));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1918));
*(&local3) = $tmp1918;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1916));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1918));
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1921 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1921));
// unreffing superCC
*(&local4) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
goto block6;
block7:;
// line 1
// line 568
panda$core$String* $tmp1922 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1922));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1923));
*(&local3) = &$s1924;
goto block6;
block6:;
// line 570
panda$core$Weak** $tmp1925 = &param0->compiler;
panda$core$Weak* $tmp1926 = *$tmp1925;
panda$core$Object* $tmp1927 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1926);
panda$core$Panda$unref$panda$core$Object$Q($tmp1927);
org$pandalanguage$pandac$Type* $tmp1928 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$ClassDecl* $tmp1929 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1927), $tmp1928);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1930 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, $tmp1929);
*(&local5) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1931 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1931));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1930));
*(&local5) = $tmp1930;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1928));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1929));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1930));
// line 571
panda$core$String** $tmp1932 = &param1->name;
panda$core$String* $tmp1933 = *$tmp1932;
panda$core$String* $tmp1934 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(param0, $tmp1933);
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp1935 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1935));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1934));
*(&local6) = $tmp1934;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1934));
// line 572
panda$core$String* $tmp1936 = *(&local6);
panda$core$Bit $tmp1937 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1936, &$s1938);
bool $tmp1939 = $tmp1937.value;
if ($tmp1939) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp1940 = (panda$core$Int64) {572};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1941, $tmp1940);
abort(); // unreachable
block8:;
// line 573
panda$core$MutableString* $tmp1942 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String* $tmp1943 = *(&local6);
panda$core$Int64 $tmp1944 = (panda$core$Int64) {1};
panda$core$Bit $tmp1945 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1946 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp1944, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1945);
panda$core$String* $tmp1947 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1943, $tmp1946);
panda$core$String* $tmp1948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1949, $tmp1947);
panda$core$String* $tmp1950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1948, &$s1951);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1952 = *(&local0);
panda$core$String** $tmp1953 = &$tmp1952->name;
panda$core$String* $tmp1954 = *$tmp1953;
panda$core$String* $tmp1955 = panda$core$String$convert$R$panda$core$String($tmp1954);
panda$core$String* $tmp1956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1955, &$s1957);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1958 = *(&local0);
panda$core$String** $tmp1959 = &$tmp1958->name;
panda$core$String* $tmp1960 = *$tmp1959;
panda$core$String* $tmp1961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1956, $tmp1960);
panda$core$String* $tmp1962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1961, &$s1963);
panda$core$String* $tmp1964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1950, $tmp1962);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1965 = *(&local5);
panda$core$String** $tmp1966 = &$tmp1965->name;
panda$core$String* $tmp1967 = *$tmp1966;
panda$core$String* $tmp1968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1969, $tmp1967);
panda$core$String* $tmp1970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1968, &$s1971);
panda$core$Int64 $tmp1972 = (panda$core$Int64) {18446744073709550617};
panda$core$Int64$wrapper* $tmp1973;
$tmp1973 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1973->value = $tmp1972;
panda$core$String* $tmp1974 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1970, ((panda$core$Object*) $tmp1973));
panda$core$String* $tmp1975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1974, &$s1976);
panda$core$String* $tmp1977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1964, $tmp1975);
panda$core$String* $tmp1978 = *(&local6);
panda$core$String* $tmp1979 = panda$core$String$convert$R$panda$core$String($tmp1978);
panda$core$String* $tmp1980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1979, &$s1981);
panda$core$String* $tmp1982 = *(&local3);
panda$core$String* $tmp1983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1980, $tmp1982);
panda$core$String* $tmp1984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1983, &$s1985);
panda$core$String* $tmp1986 = org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp1987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1984, $tmp1986);
panda$core$String* $tmp1988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1987, &$s1989);
panda$core$String* $tmp1990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1977, $tmp1988);
panda$core$MutableString$init$panda$core$String($tmp1942, $tmp1990);
*(&local7) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp1991 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1991));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1942));
*(&local7) = $tmp1942;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1942));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1947));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1948));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1950));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1955));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1956));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1961));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1962));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1964));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1968));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1970));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1973));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1974));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1975));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1977));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1979));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1980));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1983));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1984));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1986));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1987));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1988));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1990));
// line 577
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp1992 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1992));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1993));
*(&local8) = &$s1994;
// line 578
panda$collections$ListView* $tmp1995 = *(&local2);
ITable* $tmp1996 = ((panda$collections$Iterable*) $tmp1995)->$class->itable;
while ($tmp1996->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1996 = $tmp1996->next;
}
$fn1998 $tmp1997 = $tmp1996->methods[0];
panda$collections$Iterator* $tmp1999 = $tmp1997(((panda$collections$Iterable*) $tmp1995));
goto block10;
block10:;
ITable* $tmp2000 = $tmp1999->$class->itable;
while ($tmp2000->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2000 = $tmp2000->next;
}
$fn2002 $tmp2001 = $tmp2000->methods[0];
panda$core$Bit $tmp2003 = $tmp2001($tmp1999);
bool $tmp2004 = $tmp2003.value;
if ($tmp2004) goto block12; else goto block11;
block11:;
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp2005 = $tmp1999->$class->itable;
while ($tmp2005->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2005 = $tmp2005->next;
}
$fn2007 $tmp2006 = $tmp2005->methods[1];
panda$core$Object* $tmp2008 = $tmp2006($tmp1999);
org$pandalanguage$pandac$MethodDecl* $tmp2009 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2009));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2008)));
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) $tmp2008);
// line 579
panda$core$MutableString* $tmp2010 = *(&local7);
panda$core$String* $tmp2011 = *(&local8);
panda$core$MutableString$append$panda$core$String($tmp2010, $tmp2011);
// line 580
org$pandalanguage$pandac$MethodDecl* $tmp2012 = *(&local9);
org$pandalanguage$pandac$Annotations** $tmp2013 = &$tmp2012->annotations;
org$pandalanguage$pandac$Annotations* $tmp2014 = *$tmp2013;
panda$core$Bit $tmp2015 = org$pandalanguage$pandac$Annotations$get_isAbstract$R$panda$core$Bit($tmp2014);
bool $tmp2016 = $tmp2015.value;
if ($tmp2016) goto block13; else goto block15;
block13:;
// line 581
panda$core$MutableString* $tmp2017 = *(&local7);
panda$core$MutableString$append$panda$core$String($tmp2017, &$s2018);
goto block14;
block15:;
// line 1
// line 584
panda$core$MutableString* $tmp2019 = *(&local7);
org$pandalanguage$pandac$MethodDecl* $tmp2020 = *(&local9);
panda$core$String* $tmp2021 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, $tmp2020);
panda$core$MutableString$append$panda$core$String($tmp2019, $tmp2021);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2021));
goto block14;
block14:;
// line 586
panda$core$String* $tmp2022 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2022));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2023));
*(&local8) = &$s2024;
panda$core$Panda$unref$panda$core$Object$Q($tmp2008);
org$pandalanguage$pandac$MethodDecl* $tmp2025 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2025));
// unreffing m
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block10;
block12:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1999));
// line 588
panda$core$MutableString* $tmp2026 = *(&local7);
panda$core$MutableString$append$panda$core$String($tmp2026, &$s2027);
// line 589
panda$io$MemoryOutputStream** $tmp2028 = &param0->types;
panda$io$MemoryOutputStream* $tmp2029 = *$tmp2028;
panda$core$MutableString* $tmp2030 = *(&local7);
panda$core$String* $tmp2031 = panda$core$MutableString$finish$R$panda$core$String($tmp2030);
$fn2033 $tmp2032 = ($fn2033) ((panda$io$OutputStream*) $tmp2029)->$class->vtable[19];
$tmp2032(((panda$io$OutputStream*) $tmp2029), $tmp2031);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2031));
// line 590
panda$core$Weak** $tmp2034 = &param0->compiler;
panda$core$Weak* $tmp2035 = *$tmp2034;
panda$core$Object* $tmp2036 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2035);
panda$core$Panda$unref$panda$core$Object$Q($tmp2036);
panda$collections$Stack** $tmp2037 = &((org$pandalanguage$pandac$Compiler*) $tmp2036)->currentClass;
panda$collections$Stack* $tmp2038 = *$tmp2037;
panda$collections$Stack$pop$panda$collections$Stack$T($tmp2038, ((panda$core$Object*) param1));
panda$core$String* $tmp2039 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2039));
// unreffing separator
*(&local8) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2040 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2040));
// unreffing code
*(&local7) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp2041 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2041));
// unreffing name
*(&local6) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2042 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2042));
// unreffing clConstant
*(&local5) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
panda$core$String* $tmp2043 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2043));
// unreffing superPtr
*(&local3) = ((panda$core$String*) NULL);
panda$collections$ListView* $tmp2044 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2044));
// unreffing vtable
*(&local2) = ((panda$collections$ListView*) NULL);
panda$core$String* $tmp2045 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2045));
// unreffing type
*(&local1) = ((panda$core$String*) NULL);
goto block2;
block2:;
// line 592
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2046 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2046));
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2047 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2047));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
return $tmp2046;

}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* local1 = NULL;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$ClassDecl* local3 = NULL;
panda$collections$ListView* local4 = NULL;
panda$collections$ListView* local5 = NULL;
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* local6 = NULL;
panda$core$String* local7 = NULL;
panda$core$String* local8 = NULL;
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* local9 = NULL;
panda$core$String* local10 = NULL;
panda$core$MutableString* local11 = NULL;
panda$core$String* local12 = NULL;
panda$core$Int64 local13;
// line 596
panda$core$String** $tmp2048 = &param1->name;
panda$core$String* $tmp2049 = *$tmp2048;
panda$core$String* $tmp2050 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp2049);
panda$core$String* $tmp2051 = panda$core$String$convert$R$panda$core$String($tmp2050);
panda$core$String* $tmp2052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2051, &$s2053);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp2054 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2054));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2052));
*(&local0) = $tmp2052;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2050));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2051));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2052));
// line 597
panda$collections$HashMap** $tmp2055 = &param0->classConstants;
panda$collections$HashMap* $tmp2056 = *$tmp2055;
panda$core$String* $tmp2057 = *(&local0);
panda$core$Object* $tmp2058 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp2056, ((panda$collections$Key*) $tmp2057));
*(&local1) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2059 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2059));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp2058)));
*(&local1) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp2058);
panda$core$Panda$unref$panda$core$Object$Q($tmp2058);
// line 598
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2060 = *(&local1);
panda$core$Bit $tmp2061 = panda$core$Bit$init$builtin_bit($tmp2060 == NULL);
bool $tmp2062 = $tmp2061.value;
if ($tmp2062) goto block1; else goto block2;
block1:;
// line 599
panda$core$Bit $tmp2063 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(param0, param1);
bool $tmp2064 = $tmp2063.value;
if ($tmp2064) goto block3; else goto block5;
block3:;
// line 600
org$pandalanguage$pandac$Type* $tmp2065 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp2066 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp2065);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2065));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2066));
// line 601
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp2067 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2067));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2068));
*(&local2) = &$s2069;
// line 602
panda$io$MemoryOutputStream** $tmp2070 = &param0->types;
panda$io$MemoryOutputStream* $tmp2071 = *$tmp2070;
panda$core$String* $tmp2072 = *(&local0);
panda$core$String* $tmp2073 = panda$core$String$convert$R$panda$core$String($tmp2072);
panda$core$String* $tmp2074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2073, &$s2075);
panda$core$String* $tmp2076 = *(&local2);
panda$core$String* $tmp2077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2074, $tmp2076);
panda$core$String* $tmp2078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2077, &$s2079);
$fn2081 $tmp2080 = ($fn2081) ((panda$io$OutputStream*) $tmp2071)->$class->vtable[19];
$tmp2080(((panda$io$OutputStream*) $tmp2071), $tmp2078);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2073));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2074));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2077));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2078));
// line 603
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2082 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
panda$core$String* $tmp2083 = *(&local0);
panda$core$String* $tmp2084 = *(&local2);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp2082, $tmp2083, $tmp2084);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2085 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2085));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2082));
*(&local1) = $tmp2082;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2082));
panda$core$String* $tmp2086 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2086));
// unreffing type
*(&local2) = ((panda$core$String*) NULL);
goto block4;
block5:;
// line 1
// line 606
panda$core$Weak** $tmp2087 = &param0->compiler;
panda$core$Weak* $tmp2088 = *$tmp2087;
panda$core$Object* $tmp2089 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2088);
panda$core$Panda$unref$panda$core$Object$Q($tmp2089);
org$pandalanguage$pandac$Type* $tmp2090 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$ClassDecl* $tmp2091 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp2089), $tmp2090);
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2092 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2092));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2091));
*(&local3) = $tmp2091;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2090));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2091));
// line 607
panda$core$Weak** $tmp2093 = &param0->compiler;
panda$core$Weak* $tmp2094 = *$tmp2093;
panda$core$Object* $tmp2095 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2094);
panda$core$Panda$unref$panda$core$Object$Q($tmp2095);
org$pandalanguage$pandac$ClassDecl* $tmp2096 = *(&local3);
panda$collections$ListView* $tmp2097 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp2095), $tmp2096);
*(&local4) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp2098 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2098));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2097));
*(&local4) = $tmp2097;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2097));
// line 608
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2099 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
panda$core$String** $tmp2100 = &param1->name;
panda$core$String* $tmp2101 = *$tmp2100;
panda$core$String* $tmp2102 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp2101);
panda$core$String* $tmp2103 = panda$core$String$convert$R$panda$core$String($tmp2102);
panda$core$String* $tmp2104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2103, &$s2105);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp2099, $tmp2104, &$s2106);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2107 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2107));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2099));
*(&local1) = $tmp2099;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2099));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2102));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2103));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2104));
// line 609
panda$core$Weak** $tmp2108 = &param0->compiler;
panda$core$Weak* $tmp2109 = *$tmp2108;
panda$core$Object* $tmp2110 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2109);
panda$core$Panda$unref$panda$core$Object$Q($tmp2110);
panda$collections$ListView* $tmp2111 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp2110), param1);
*(&local5) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp2112 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2112));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2111));
*(&local5) = $tmp2111;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2111));
// line 610
panda$core$Weak** $tmp2113 = &param0->compiler;
panda$core$Weak* $tmp2114 = *$tmp2113;
panda$core$Object* $tmp2115 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2114);
panda$core$Panda$unref$panda$core$Object$Q($tmp2115);
org$pandalanguage$pandac$Type** $tmp2116 = &param1->rawSuper;
org$pandalanguage$pandac$Type* $tmp2117 = *$tmp2116;
org$pandalanguage$pandac$ClassDecl* $tmp2118 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp2115), $tmp2117);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2119 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, $tmp2118);
*(&local6) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2120 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2120));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2119));
*(&local6) = $tmp2119;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2118));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2119));
// line 611
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2121 = *(&local6);
panda$core$String** $tmp2122 = &$tmp2121->name;
panda$core$String* $tmp2123 = *$tmp2122;
panda$core$String* $tmp2124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2125, $tmp2123);
panda$core$String* $tmp2126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2124, &$s2127);
*(&local7) = ((panda$core$String*) NULL);
panda$core$String* $tmp2128 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2128));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2126));
*(&local7) = $tmp2126;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2124));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2126));
// line 612
panda$core$String* $tmp2129 = org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(param0, param1);
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp2130 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2130));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2129));
*(&local8) = $tmp2129;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2129));
// line 613
panda$core$Weak** $tmp2131 = &param0->compiler;
panda$core$Weak* $tmp2132 = *$tmp2131;
panda$core$Object* $tmp2133 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2132);
panda$core$Panda$unref$panda$core$Object$Q($tmp2133);
org$pandalanguage$pandac$Type* $tmp2134 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$ClassDecl* $tmp2135 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp2133), $tmp2134);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2136 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, $tmp2135);
*(&local9) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2137 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2137));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2136));
*(&local9) = $tmp2136;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2134));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2135));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2136));
// line 614
panda$core$String** $tmp2138 = &param1->name;
panda$core$String* $tmp2139 = *$tmp2138;
panda$core$String* $tmp2140 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(param0, $tmp2139);
*(&local10) = ((panda$core$String*) NULL);
panda$core$String* $tmp2141 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2141));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2140));
*(&local10) = $tmp2140;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2140));
// line 615
panda$core$String* $tmp2142 = *(&local10);
panda$core$Bit $tmp2143 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp2142, &$s2144);
bool $tmp2145 = $tmp2143.value;
if ($tmp2145) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp2146 = (panda$core$Int64) {615};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2147, $tmp2146);
abort(); // unreachable
block6:;
// line 616
panda$core$MutableString* $tmp2148 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String* $tmp2149 = *(&local10);
panda$core$Int64 $tmp2150 = (panda$core$Int64) {1};
panda$core$Bit $tmp2151 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2152 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp2150, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp2151);
panda$core$String* $tmp2153 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp2149, $tmp2152);
panda$core$String* $tmp2154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2155, $tmp2153);
panda$core$String* $tmp2156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2154, &$s2157);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2158 = *(&local1);
panda$core$String** $tmp2159 = &$tmp2158->name;
panda$core$String* $tmp2160 = *$tmp2159;
panda$core$String* $tmp2161 = panda$core$String$convert$R$panda$core$String($tmp2160);
panda$core$String* $tmp2162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2161, &$s2163);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2164 = *(&local1);
panda$core$String** $tmp2165 = &$tmp2164->name;
panda$core$String* $tmp2166 = *$tmp2165;
panda$core$String* $tmp2167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2162, $tmp2166);
panda$core$String* $tmp2168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2167, &$s2169);
panda$core$String* $tmp2170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2156, $tmp2168);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2171 = *(&local9);
panda$core$String** $tmp2172 = &$tmp2171->name;
panda$core$String* $tmp2173 = *$tmp2172;
panda$core$String* $tmp2174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2175, $tmp2173);
panda$core$String* $tmp2176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2174, &$s2177);
panda$core$Int64 $tmp2178 = (panda$core$Int64) {18446744073709550617};
panda$core$Int64$wrapper* $tmp2179;
$tmp2179 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp2179->value = $tmp2178;
panda$core$String* $tmp2180 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2176, ((panda$core$Object*) $tmp2179));
panda$core$String* $tmp2181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2180, &$s2182);
panda$core$String* $tmp2183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2170, $tmp2181);
panda$core$String* $tmp2184 = *(&local10);
panda$core$String* $tmp2185 = panda$core$String$convert$R$panda$core$String($tmp2184);
panda$core$String* $tmp2186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2185, &$s2187);
panda$core$String* $tmp2188 = *(&local7);
panda$core$String* $tmp2189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2186, $tmp2188);
panda$core$String* $tmp2190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2189, &$s2191);
panda$core$String* $tmp2192 = *(&local8);
panda$core$String* $tmp2193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2190, $tmp2192);
panda$core$String* $tmp2194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2193, &$s2195);
panda$core$String* $tmp2196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2183, $tmp2194);
panda$core$MutableString$init$panda$core$String($tmp2148, $tmp2196);
*(&local11) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp2197 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2197));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2148));
*(&local11) = $tmp2148;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2148));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2153));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2154));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2156));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2161));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2162));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2167));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2168));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2170));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2174));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2176));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2179));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2180));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2181));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2183));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2185));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2186));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2189));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2190));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2193));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2194));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2196));
// line 620
*(&local12) = ((panda$core$String*) NULL);
panda$core$String* $tmp2198 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2198));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2199));
*(&local12) = &$s2200;
// line 621
panda$core$Int64 $tmp2201 = (panda$core$Int64) {0};
panda$collections$ListView* $tmp2202 = *(&local4);
ITable* $tmp2203 = ((panda$collections$CollectionView*) $tmp2202)->$class->itable;
while ($tmp2203->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2203 = $tmp2203->next;
}
$fn2205 $tmp2204 = $tmp2203->methods[0];
panda$core$Int64 $tmp2206 = $tmp2204(((panda$collections$CollectionView*) $tmp2202));
panda$core$Bit $tmp2207 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2208 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2201, $tmp2206, $tmp2207);
panda$core$Int64 $tmp2209 = $tmp2208.min;
*(&local13) = $tmp2209;
panda$core$Int64 $tmp2210 = $tmp2208.max;
panda$core$Bit $tmp2211 = $tmp2208.inclusive;
bool $tmp2212 = $tmp2211.value;
panda$core$Int64 $tmp2213 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2214 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2213);
if ($tmp2212) goto block11; else goto block12;
block11:;
int64_t $tmp2215 = $tmp2209.value;
int64_t $tmp2216 = $tmp2210.value;
bool $tmp2217 = $tmp2215 <= $tmp2216;
panda$core$Bit $tmp2218 = (panda$core$Bit) {$tmp2217};
bool $tmp2219 = $tmp2218.value;
if ($tmp2219) goto block8; else goto block9;
block12:;
int64_t $tmp2220 = $tmp2209.value;
int64_t $tmp2221 = $tmp2210.value;
bool $tmp2222 = $tmp2220 < $tmp2221;
panda$core$Bit $tmp2223 = (panda$core$Bit) {$tmp2222};
bool $tmp2224 = $tmp2223.value;
if ($tmp2224) goto block8; else goto block9;
block8:;
// line 622
panda$core$MutableString* $tmp2225 = *(&local11);
panda$core$String* $tmp2226 = *(&local12);
panda$core$String* $tmp2227 = panda$core$String$convert$R$panda$core$String($tmp2226);
panda$core$String* $tmp2228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2227, &$s2229);
panda$collections$ListView* $tmp2230 = *(&local5);
panda$core$Int64 $tmp2231 = *(&local13);
ITable* $tmp2232 = $tmp2230->$class->itable;
while ($tmp2232->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp2232 = $tmp2232->next;
}
$fn2234 $tmp2233 = $tmp2232->methods[0];
panda$core$Object* $tmp2235 = $tmp2233($tmp2230, $tmp2231);
panda$core$String* $tmp2236 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, ((org$pandalanguage$pandac$MethodDecl*) $tmp2235));
panda$core$String* $tmp2237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2228, $tmp2236);
panda$core$String* $tmp2238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2237, &$s2239);
panda$core$MutableString$append$panda$core$String($tmp2225, $tmp2238);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2227));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2228));
panda$core$Panda$unref$panda$core$Object$Q($tmp2235);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2236));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2237));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2238));
// line 623
panda$core$String* $tmp2240 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2240));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2241));
*(&local12) = &$s2242;
goto block10;
block10:;
panda$core$Int64 $tmp2243 = *(&local13);
int64_t $tmp2244 = $tmp2210.value;
int64_t $tmp2245 = $tmp2243.value;
int64_t $tmp2246 = $tmp2244 - $tmp2245;
panda$core$Int64 $tmp2247 = (panda$core$Int64) {$tmp2246};
panda$core$UInt64 $tmp2248 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2247);
if ($tmp2212) goto block14; else goto block15;
block14:;
uint64_t $tmp2249 = $tmp2248.value;
uint64_t $tmp2250 = $tmp2214.value;
bool $tmp2251 = $tmp2249 >= $tmp2250;
panda$core$Bit $tmp2252 = (panda$core$Bit) {$tmp2251};
bool $tmp2253 = $tmp2252.value;
if ($tmp2253) goto block13; else goto block9;
block15:;
uint64_t $tmp2254 = $tmp2248.value;
uint64_t $tmp2255 = $tmp2214.value;
bool $tmp2256 = $tmp2254 > $tmp2255;
panda$core$Bit $tmp2257 = (panda$core$Bit) {$tmp2256};
bool $tmp2258 = $tmp2257.value;
if ($tmp2258) goto block13; else goto block9;
block13:;
int64_t $tmp2259 = $tmp2243.value;
int64_t $tmp2260 = $tmp2213.value;
int64_t $tmp2261 = $tmp2259 + $tmp2260;
panda$core$Int64 $tmp2262 = (panda$core$Int64) {$tmp2261};
*(&local13) = $tmp2262;
goto block8;
block9:;
// line 625
panda$core$MutableString* $tmp2263 = *(&local11);
panda$core$MutableString$append$panda$core$String($tmp2263, &$s2264);
// line 626
panda$io$MemoryOutputStream** $tmp2265 = &param0->types;
panda$io$MemoryOutputStream* $tmp2266 = *$tmp2265;
panda$core$MutableString* $tmp2267 = *(&local11);
panda$core$String* $tmp2268 = panda$core$MutableString$finish$R$panda$core$String($tmp2267);
$fn2270 $tmp2269 = ($fn2270) ((panda$io$OutputStream*) $tmp2266)->$class->vtable[17];
$tmp2269(((panda$io$OutputStream*) $tmp2266), $tmp2268);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2268));
panda$core$String* $tmp2271 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2271));
// unreffing separator
*(&local12) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2272 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2272));
// unreffing code
*(&local11) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp2273 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2273));
// unreffing name
*(&local10) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2274 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2274));
// unreffing clConstant
*(&local9) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
panda$core$String* $tmp2275 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2275));
// unreffing itable
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp2276 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2276));
// unreffing superCast
*(&local7) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2277 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2277));
// unreffing superCC
*(&local6) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
panda$collections$ListView* $tmp2278 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2278));
// unreffing vtable
*(&local5) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp2279 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2279));
// unreffing valueVTable
*(&local4) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2280 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2280));
// unreffing value
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block4;
block4:;
// line 628
panda$collections$HashMap** $tmp2281 = &param0->classConstants;
panda$collections$HashMap* $tmp2282 = *$tmp2281;
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2283 = *(&local1);
panda$core$String* $tmp2284 = *(&local0);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp2282, ((panda$collections$Key*) $tmp2284), ((panda$core$Object*) $tmp2283));
goto block2;
block2:;
// line 630
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2285 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2285));
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2286 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2286));
// unreffing result
*(&local1) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
panda$core$String* $tmp2287 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2287));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp2285;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Variable* param1) {

panda$core$String* local0 = NULL;
// line 634
org$pandalanguage$pandac$Variable$Storage** $tmp2288 = &param1->storage;
org$pandalanguage$pandac$Variable$Storage* $tmp2289 = *$tmp2288;
panda$core$Int64* $tmp2290 = &$tmp2289->$rawValue;
panda$core$Int64 $tmp2291 = *$tmp2290;
panda$core$Int64 $tmp2292 = (panda$core$Int64) {1};
panda$core$Bit $tmp2293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2291, $tmp2292);
bool $tmp2294 = $tmp2293.value;
if ($tmp2294) goto block2; else goto block1;
block2:;
// line 636
panda$core$String** $tmp2295 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp2296 = *$tmp2295;
panda$core$String* $tmp2297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2298, $tmp2296);
panda$core$String* $tmp2299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2297, &$s2300);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2299));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2297));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2299));
return $tmp2299;
block1:;
// line 638
panda$collections$IdentityMap** $tmp2301 = &param0->variableNames;
panda$collections$IdentityMap* $tmp2302 = *$tmp2301;
panda$core$Object* $tmp2303 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q($tmp2302, ((panda$core$Object*) param1));
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp2304 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2304));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp2303)));
*(&local0) = ((panda$core$String*) $tmp2303);
panda$core$Panda$unref$panda$core$Object$Q($tmp2303);
// line 639
panda$core$String* $tmp2305 = *(&local0);
panda$core$Bit $tmp2306 = panda$core$Bit$init$builtin_bit($tmp2305 == NULL);
bool $tmp2307 = $tmp2306.value;
if ($tmp2307) goto block3; else goto block4;
block3:;
// line 640
panda$core$Int64* $tmp2308 = &param0->varCount;
panda$core$Int64 $tmp2309 = *$tmp2308;
panda$core$Int64 $tmp2310 = (panda$core$Int64) {1};
int64_t $tmp2311 = $tmp2309.value;
int64_t $tmp2312 = $tmp2310.value;
int64_t $tmp2313 = $tmp2311 + $tmp2312;
panda$core$Int64 $tmp2314 = (panda$core$Int64) {$tmp2313};
panda$core$Int64* $tmp2315 = &param0->varCount;
*$tmp2315 = $tmp2314;
// line 641
panda$core$String** $tmp2316 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp2317 = *$tmp2316;
panda$core$String* $tmp2318 = panda$core$String$convert$R$panda$core$String($tmp2317);
panda$core$String* $tmp2319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2318, &$s2320);
panda$core$Int64* $tmp2321 = &param0->varCount;
panda$core$Int64 $tmp2322 = *$tmp2321;
panda$core$Int64$wrapper* $tmp2323;
$tmp2323 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp2323->value = $tmp2322;
panda$core$String* $tmp2324 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2319, ((panda$core$Object*) $tmp2323));
panda$core$String* $tmp2325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2324, &$s2326);
panda$core$String* $tmp2327 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2327));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2325));
*(&local0) = $tmp2325;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2318));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2319));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2323));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2324));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2325));
// line 642
panda$collections$IdentityMap** $tmp2328 = &param0->variableNames;
panda$collections$IdentityMap* $tmp2329 = *$tmp2328;
panda$core$String* $tmp2330 = *(&local0);
panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V($tmp2329, ((panda$core$Object*) param1), ((panda$core$Object*) $tmp2330));
goto block4;
block4:;
// line 644
panda$core$String* $tmp2331 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2331));
panda$core$String* $tmp2332 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2332));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp2331;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$FieldDecl* param1) {

// line 648
org$pandalanguage$pandac$Annotations** $tmp2333 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp2334 = *$tmp2333;
panda$core$Bit $tmp2335 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp2334);
bool $tmp2336 = $tmp2335.value;
if ($tmp2336) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp2337 = (panda$core$Int64) {648};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2338, $tmp2337);
abort(); // unreachable
block1:;
// line 649
panda$core$Weak** $tmp2339 = &param1->owner;
panda$core$Weak* $tmp2340 = *$tmp2339;
panda$core$Object* $tmp2341 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2340);
panda$core$Panda$unref$panda$core$Object$Q($tmp2341);
panda$core$String** $tmp2342 = &((org$pandalanguage$pandac$ClassDecl*) $tmp2341)->name;
panda$core$String* $tmp2343 = *$tmp2342;
panda$core$String* $tmp2344 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp2343);
panda$core$String* $tmp2345 = panda$core$String$convert$R$panda$core$String($tmp2344);
panda$core$String* $tmp2346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2345, &$s2347);
panda$core$String** $tmp2348 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp2349 = *$tmp2348;
panda$core$String* $tmp2350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2346, $tmp2349);
panda$core$String* $tmp2351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2350, &$s2352);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2351));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2344));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2345));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2346));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2350));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2351));
return $tmp2351;

}
org$pandalanguage$pandac$CCodeGenerator$OpClass org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$OpClass(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

// line 660
org$pandalanguage$pandac$Type$Kind* $tmp2353 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp2354 = *$tmp2353;
panda$core$Int64 $tmp2355 = $tmp2354.$rawValue;
panda$core$Int64 $tmp2356 = (panda$core$Int64) {2};
panda$core$Bit $tmp2357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2355, $tmp2356);
bool $tmp2358 = $tmp2357.value;
if ($tmp2358) goto block2; else goto block3;
block2:;
// line 662
panda$core$Int64 $tmp2359 = (panda$core$Int64) {0};
org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp2360 = org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64($tmp2359);
return $tmp2360;
block3:;
panda$core$Int64 $tmp2361 = (panda$core$Int64) {3};
panda$core$Bit $tmp2362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2355, $tmp2361);
bool $tmp2363 = $tmp2362.value;
if ($tmp2363) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp2364 = (panda$core$Int64) {9};
panda$core$Bit $tmp2365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2355, $tmp2364);
bool $tmp2366 = $tmp2365.value;
if ($tmp2366) goto block4; else goto block6;
block4:;
// line 664
panda$core$Int64 $tmp2367 = (panda$core$Int64) {1};
org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp2368 = org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64($tmp2367);
return $tmp2368;
block6:;
panda$core$Int64 $tmp2369 = (panda$core$Int64) {10};
panda$core$Bit $tmp2370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2355, $tmp2369);
bool $tmp2371 = $tmp2370.value;
if ($tmp2371) goto block7; else goto block8;
block7:;
// line 666
panda$core$Int64 $tmp2372 = (panda$core$Int64) {2};
org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp2373 = org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64($tmp2372);
return $tmp2373;
block8:;
// line 668
panda$core$Int64 $tmp2374 = (panda$core$Int64) {3};
org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp2375 = org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64($tmp2374);
return $tmp2375;
block1:;
panda$core$Bit $tmp2376 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2377 = $tmp2376.value;
if ($tmp2377) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp2378 = (panda$core$Int64) {659};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2379, $tmp2378, &$s2380);
abort(); // unreachable
block9:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1, panda$core$String* param2, org$pandalanguage$pandac$parser$Token$Kind param3, panda$core$String* param4, panda$io$IndentedOutputStream* param5) {

panda$core$String* local0 = NULL;
panda$core$Bit local1;
panda$core$String* local2 = NULL;
// line 674
*(&local0) = ((panda$core$String*) NULL);
// line 675
panda$core$Bit $tmp2381 = panda$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp2381;
// line 676
panda$core$Int64 $tmp2382 = param3.$rawValue;
panda$core$Int64 $tmp2383 = (panda$core$Int64) {52};
panda$core$Bit $tmp2384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2382, $tmp2383);
bool $tmp2385 = $tmp2384.value;
if ($tmp2385) goto block2; else goto block3;
block2:;
// line 678
panda$core$String* $tmp2386 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2386));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2387));
*(&local0) = &$s2388;
goto block1;
block3:;
panda$core$Int64 $tmp2389 = (panda$core$Int64) {53};
panda$core$Bit $tmp2390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2382, $tmp2389);
bool $tmp2391 = $tmp2390.value;
if ($tmp2391) goto block4; else goto block5;
block4:;
// line 680
panda$core$String* $tmp2392 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2392));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2393));
*(&local0) = &$s2394;
goto block1;
block5:;
panda$core$Int64 $tmp2395 = (panda$core$Int64) {54};
panda$core$Bit $tmp2396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2382, $tmp2395);
bool $tmp2397 = $tmp2396.value;
if ($tmp2397) goto block6; else goto block7;
block6:;
// line 682
panda$core$String* $tmp2398 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2398));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2399));
*(&local0) = &$s2400;
goto block1;
block7:;
panda$core$Int64 $tmp2401 = (panda$core$Int64) {56};
panda$core$Bit $tmp2402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2382, $tmp2401);
bool $tmp2403 = $tmp2402.value;
if ($tmp2403) goto block8; else goto block9;
block8:;
// line 684
panda$core$String* $tmp2404 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2404));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2405));
*(&local0) = &$s2406;
goto block1;
block9:;
panda$core$Int64 $tmp2407 = (panda$core$Int64) {55};
panda$core$Bit $tmp2408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2382, $tmp2407);
bool $tmp2409 = $tmp2408.value;
if ($tmp2409) goto block10; else goto block11;
block10:;
// line 686
panda$core$String* $tmp2410 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2410));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2411));
*(&local0) = &$s2412;
goto block1;
block11:;
panda$core$Int64 $tmp2413 = (panda$core$Int64) {57};
panda$core$Bit $tmp2414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2382, $tmp2413);
bool $tmp2415 = $tmp2414.value;
if ($tmp2415) goto block12; else goto block13;
block12:;
// line 688
panda$core$String* $tmp2416 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2416));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2417));
*(&local0) = &$s2418;
goto block1;
block13:;
panda$core$Int64 $tmp2419 = (panda$core$Int64) {73};
panda$core$Bit $tmp2420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2382, $tmp2419);
bool $tmp2421 = $tmp2420.value;
if ($tmp2421) goto block14; else goto block15;
block14:;
// line 690
panda$core$String* $tmp2422 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2422));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2423));
*(&local0) = &$s2424;
goto block1;
block15:;
panda$core$Int64 $tmp2425 = (panda$core$Int64) {1};
panda$core$Bit $tmp2426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2382, $tmp2425);
bool $tmp2427 = $tmp2426.value;
if ($tmp2427) goto block16; else goto block17;
block16:;
// line 692
panda$core$String* $tmp2428 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2428));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2429));
*(&local0) = &$s2430;
goto block1;
block17:;
panda$core$Int64 $tmp2431 = (panda$core$Int64) {68};
panda$core$Bit $tmp2432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2382, $tmp2431);
bool $tmp2433 = $tmp2432.value;
if ($tmp2433) goto block18; else goto block19;
block18:;
// line 694
panda$core$String* $tmp2434 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2434));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2435));
*(&local0) = &$s2436;
goto block1;
block19:;
panda$core$Int64 $tmp2437 = (panda$core$Int64) {70};
panda$core$Bit $tmp2438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2382, $tmp2437);
bool $tmp2439 = $tmp2438.value;
if ($tmp2439) goto block20; else goto block21;
block20:;
// line 696
panda$core$String* $tmp2440 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2440));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2441));
*(&local0) = &$s2442;
goto block1;
block21:;
panda$core$Int64 $tmp2443 = (panda$core$Int64) {71};
panda$core$Bit $tmp2444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2382, $tmp2443);
bool $tmp2445 = $tmp2444.value;
if ($tmp2445) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp2446 = (panda$core$Int64) {72};
panda$core$Bit $tmp2447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2382, $tmp2446);
bool $tmp2448 = $tmp2447.value;
if ($tmp2448) goto block22; else goto block24;
block22:;
// line 698
panda$core$String* $tmp2449 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2449));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2450));
*(&local0) = &$s2451;
goto block1;
block24:;
panda$core$Int64 $tmp2452 = (panda$core$Int64) {59};
panda$core$Bit $tmp2453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2382, $tmp2452);
bool $tmp2454 = $tmp2453.value;
if ($tmp2454) goto block25; else goto block26;
block25:;
// line 700
panda$core$String* $tmp2455 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2455));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2456));
*(&local0) = &$s2457;
// line 701
panda$core$Bit $tmp2458 = panda$core$Bit$init$builtin_bit(true);
*(&local1) = $tmp2458;
goto block1;
block26:;
panda$core$Int64 $tmp2459 = (panda$core$Int64) {60};
panda$core$Bit $tmp2460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2382, $tmp2459);
bool $tmp2461 = $tmp2460.value;
if ($tmp2461) goto block27; else goto block28;
block27:;
// line 703
panda$core$String* $tmp2462 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2462));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2463));
*(&local0) = &$s2464;
// line 704
panda$core$Bit $tmp2465 = panda$core$Bit$init$builtin_bit(true);
*(&local1) = $tmp2465;
goto block1;
block28:;
panda$core$Int64 $tmp2466 = (panda$core$Int64) {64};
panda$core$Bit $tmp2467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2382, $tmp2466);
bool $tmp2468 = $tmp2467.value;
if ($tmp2468) goto block29; else goto block30;
block29:;
// line 706
panda$core$String* $tmp2469 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2469));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2470));
*(&local0) = &$s2471;
// line 707
panda$core$Bit $tmp2472 = panda$core$Bit$init$builtin_bit(true);
*(&local1) = $tmp2472;
goto block1;
block30:;
panda$core$Int64 $tmp2473 = (panda$core$Int64) {63};
panda$core$Bit $tmp2474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2382, $tmp2473);
bool $tmp2475 = $tmp2474.value;
if ($tmp2475) goto block31; else goto block32;
block31:;
// line 709
panda$core$String* $tmp2476 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2476));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2477));
*(&local0) = &$s2478;
// line 710
panda$core$Bit $tmp2479 = panda$core$Bit$init$builtin_bit(true);
*(&local1) = $tmp2479;
goto block1;
block32:;
panda$core$Int64 $tmp2480 = (panda$core$Int64) {66};
panda$core$Bit $tmp2481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2382, $tmp2480);
bool $tmp2482 = $tmp2481.value;
if ($tmp2482) goto block33; else goto block34;
block33:;
// line 712
panda$core$String* $tmp2483 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2483));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2484));
*(&local0) = &$s2485;
// line 713
panda$core$Bit $tmp2486 = panda$core$Bit$init$builtin_bit(true);
*(&local1) = $tmp2486;
goto block1;
block34:;
panda$core$Int64 $tmp2487 = (panda$core$Int64) {65};
panda$core$Bit $tmp2488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2382, $tmp2487);
bool $tmp2489 = $tmp2488.value;
if ($tmp2489) goto block35; else goto block36;
block35:;
// line 715
panda$core$Bit $tmp2490 = panda$core$Bit$init$builtin_bit(true);
*(&local1) = $tmp2490;
// line 716
panda$core$String* $tmp2491 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2491));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2492));
*(&local0) = &$s2493;
goto block1;
block36:;
// line 718
panda$core$Bit $tmp2494 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2495 = $tmp2494.value;
if ($tmp2495) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp2496 = (panda$core$Int64) {718};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2497, $tmp2496);
abort(); // unreachable
block37:;
goto block1;
block1:;
// line 720
panda$core$String* $tmp2498 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp2499 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2499));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2498));
*(&local2) = $tmp2498;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2498));
// line 721
panda$core$Bit $tmp2500 = *(&local1);
bool $tmp2501 = $tmp2500.value;
if ($tmp2501) goto block39; else goto block41;
block39:;
// line 722
$fn2503 $tmp2502 = ($fn2503) ((panda$io$OutputStream*) param5)->$class->vtable[17];
$tmp2502(((panda$io$OutputStream*) param5), &$s2504);
goto block40;
block41:;
// line 1
// line 725
panda$core$String* $tmp2505 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param1);
panda$core$String* $tmp2506 = panda$core$String$convert$R$panda$core$String($tmp2505);
panda$core$String* $tmp2507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2506, &$s2508);
$fn2510 $tmp2509 = ($fn2510) ((panda$io$OutputStream*) param5)->$class->vtable[17];
$tmp2509(((panda$io$OutputStream*) param5), $tmp2507);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2505));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2506));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2507));
goto block40;
block40:;
// line 727
panda$core$String* $tmp2511 = *(&local2);
panda$core$String* $tmp2512 = panda$core$String$convert$R$panda$core$String($tmp2511);
panda$core$String* $tmp2513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2512, &$s2514);
panda$core$String* $tmp2515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2513, param2);
panda$core$String* $tmp2516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2515, &$s2517);
panda$core$String* $tmp2518 = *(&local0);
panda$core$String* $tmp2519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2516, $tmp2518);
panda$core$String* $tmp2520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2519, &$s2521);
panda$core$String* $tmp2522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2520, param4);
panda$core$String* $tmp2523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2522, &$s2524);
$fn2526 $tmp2525 = ($fn2526) ((panda$io$OutputStream*) param5)->$class->vtable[19];
$tmp2525(((panda$io$OutputStream*) param5), $tmp2523);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2512));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2513));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2515));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2516));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2519));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2520));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2522));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2523));
// line 728
panda$core$String* $tmp2527 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2527));
panda$core$String* $tmp2528 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2528));
// unreffing result
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp2529 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2529));
// unreffing cOp
*(&local0) = ((panda$core$String*) NULL);
return $tmp2527;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1, org$pandalanguage$pandac$MethodDecl* param2, panda$io$IndentedOutputStream* param3) {

org$pandalanguage$pandac$CCodeGenerator$ClassConstant* local0 = NULL;
panda$core$Int64 local1;
panda$collections$ListView* local2 = NULL;
panda$core$Int64 local3;
// line 732
panda$core$Weak** $tmp2530 = &param2->owner;
panda$core$Weak* $tmp2531 = *$tmp2530;
panda$core$Object* $tmp2532 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2531);
panda$core$Panda$unref$panda$core$Object$Q($tmp2532);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2533 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp2532));
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2534 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2534));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2533));
*(&local0) = $tmp2533;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2533));
// line 733
panda$core$Int64 $tmp2535 = (panda$core$Int64) {18446744073709551615};
*(&local1) = $tmp2535;
// line 734
panda$core$Weak** $tmp2536 = &param0->compiler;
panda$core$Weak* $tmp2537 = *$tmp2536;
panda$core$Object* $tmp2538 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2537);
panda$core$Panda$unref$panda$core$Object$Q($tmp2538);
panda$core$Weak** $tmp2539 = &param2->owner;
panda$core$Weak* $tmp2540 = *$tmp2539;
panda$core$Object* $tmp2541 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2540);
panda$core$Panda$unref$panda$core$Object$Q($tmp2541);
panda$collections$ListView* $tmp2542 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp2538), ((org$pandalanguage$pandac$ClassDecl*) $tmp2541));
*(&local2) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp2543 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2543));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2542));
*(&local2) = $tmp2542;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2542));
// line 735
panda$core$Int64 $tmp2544 = (panda$core$Int64) {0};
panda$collections$ListView* $tmp2545 = *(&local2);
ITable* $tmp2546 = ((panda$collections$CollectionView*) $tmp2545)->$class->itable;
while ($tmp2546->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2546 = $tmp2546->next;
}
$fn2548 $tmp2547 = $tmp2546->methods[0];
panda$core$Int64 $tmp2549 = $tmp2547(((panda$collections$CollectionView*) $tmp2545));
panda$core$Bit $tmp2550 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2551 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2544, $tmp2549, $tmp2550);
panda$core$Int64 $tmp2552 = $tmp2551.min;
*(&local3) = $tmp2552;
panda$core$Int64 $tmp2553 = $tmp2551.max;
panda$core$Bit $tmp2554 = $tmp2551.inclusive;
bool $tmp2555 = $tmp2554.value;
panda$core$Int64 $tmp2556 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2557 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2556);
if ($tmp2555) goto block4; else goto block5;
block4:;
int64_t $tmp2558 = $tmp2552.value;
int64_t $tmp2559 = $tmp2553.value;
bool $tmp2560 = $tmp2558 <= $tmp2559;
panda$core$Bit $tmp2561 = (panda$core$Bit) {$tmp2560};
bool $tmp2562 = $tmp2561.value;
if ($tmp2562) goto block1; else goto block2;
block5:;
int64_t $tmp2563 = $tmp2552.value;
int64_t $tmp2564 = $tmp2553.value;
bool $tmp2565 = $tmp2563 < $tmp2564;
panda$core$Bit $tmp2566 = (panda$core$Bit) {$tmp2565};
bool $tmp2567 = $tmp2566.value;
if ($tmp2567) goto block1; else goto block2;
block1:;
// line 736
panda$collections$ListView* $tmp2568 = *(&local2);
panda$core$Int64 $tmp2569 = *(&local3);
ITable* $tmp2570 = $tmp2568->$class->itable;
while ($tmp2570->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp2570 = $tmp2570->next;
}
$fn2572 $tmp2571 = $tmp2570->methods[0];
panda$core$Object* $tmp2573 = $tmp2571($tmp2568, $tmp2569);
bool $tmp2574 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2573) == param2;
panda$core$Bit $tmp2575 = panda$core$Bit$init$builtin_bit($tmp2574);
panda$core$Panda$unref$panda$core$Object$Q($tmp2573);
bool $tmp2576 = $tmp2575.value;
if ($tmp2576) goto block6; else goto block7;
block6:;
// line 737
panda$core$Int64 $tmp2577 = *(&local3);
*(&local1) = $tmp2577;
// line 738
goto block2;
block7:;
goto block3;
block3:;
panda$core$Int64 $tmp2578 = *(&local3);
int64_t $tmp2579 = $tmp2553.value;
int64_t $tmp2580 = $tmp2578.value;
int64_t $tmp2581 = $tmp2579 - $tmp2580;
panda$core$Int64 $tmp2582 = (panda$core$Int64) {$tmp2581};
panda$core$UInt64 $tmp2583 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2582);
if ($tmp2555) goto block9; else goto block10;
block9:;
uint64_t $tmp2584 = $tmp2583.value;
uint64_t $tmp2585 = $tmp2557.value;
bool $tmp2586 = $tmp2584 >= $tmp2585;
panda$core$Bit $tmp2587 = (panda$core$Bit) {$tmp2586};
bool $tmp2588 = $tmp2587.value;
if ($tmp2588) goto block8; else goto block2;
block10:;
uint64_t $tmp2589 = $tmp2583.value;
uint64_t $tmp2590 = $tmp2557.value;
bool $tmp2591 = $tmp2589 > $tmp2590;
panda$core$Bit $tmp2592 = (panda$core$Bit) {$tmp2591};
bool $tmp2593 = $tmp2592.value;
if ($tmp2593) goto block8; else goto block2;
block8:;
int64_t $tmp2594 = $tmp2578.value;
int64_t $tmp2595 = $tmp2556.value;
int64_t $tmp2596 = $tmp2594 + $tmp2595;
panda$core$Int64 $tmp2597 = (panda$core$Int64) {$tmp2596};
*(&local3) = $tmp2597;
goto block1;
block2:;
// line 741
panda$core$Int64 $tmp2598 = *(&local1);
panda$core$Int64 $tmp2599 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp2600 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2598, $tmp2599);
bool $tmp2601 = $tmp2600.value;
if ($tmp2601) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp2602 = (panda$core$Int64) {741};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2603, $tmp2602);
abort(); // unreachable
block11:;
// line 742
panda$core$Weak** $tmp2604 = &param0->compiler;
panda$core$Weak* $tmp2605 = *$tmp2604;
panda$core$Object* $tmp2606 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2605);
panda$core$Panda$unref$panda$core$Object$Q($tmp2606);
org$pandalanguage$pandac$Type* $tmp2607 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp2606), param2);
panda$core$String* $tmp2608 = org$pandalanguage$pandac$CCodeGenerator$cMethodType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$Q$R$panda$core$String(param0, $tmp2607, ((org$pandalanguage$pandac$Type*) NULL));
panda$core$String* $tmp2609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2610, $tmp2608);
panda$core$String* $tmp2611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2609, &$s2612);
panda$core$String* $tmp2613 = panda$core$String$convert$R$panda$core$String(param1);
panda$core$String* $tmp2614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2613, &$s2615);
panda$core$Int64 $tmp2616 = *(&local1);
panda$core$Int64$wrapper* $tmp2617;
$tmp2617 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp2617->value = $tmp2616;
panda$core$String* $tmp2618 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2614, ((panda$core$Object*) $tmp2617));
panda$core$String* $tmp2619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2618, &$s2620);
panda$core$String* $tmp2621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2611, $tmp2619);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2621));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2607));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2608));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2609));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2611));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2613));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2614));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2617));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2618));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2619));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2621));
panda$collections$ListView* $tmp2622 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2622));
// unreffing vtable
*(&local2) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2623 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2623));
// unreffing cc
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
return $tmp2621;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1, org$pandalanguage$pandac$MethodDecl* param2, panda$io$IndentedOutputStream* param3) {

org$pandalanguage$pandac$CCodeGenerator$ClassConstant* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$Int64 local2;
panda$collections$ListView* local3 = NULL;
panda$core$Int64 local4;
panda$core$String* local5 = NULL;
panda$core$String* local6 = NULL;
// line 748
panda$core$Weak** $tmp2624 = &param2->owner;
panda$core$Weak* $tmp2625 = *$tmp2624;
panda$core$Object* $tmp2626 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2625);
panda$core$Panda$unref$panda$core$Object$Q($tmp2626);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2627 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp2626));
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2628 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2628));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2627));
*(&local0) = $tmp2627;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2627));
// line 749
panda$core$String* $tmp2629 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp2630 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2630));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2629));
*(&local1) = $tmp2629;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2629));
// line 750
panda$core$String* $tmp2631 = *(&local1);
panda$core$String* $tmp2632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2633, $tmp2631);
panda$core$String* $tmp2634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2632, &$s2635);
panda$core$String* $tmp2636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2634, param1);
panda$core$String* $tmp2637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2636, &$s2638);
$fn2640 $tmp2639 = ($fn2640) ((panda$io$OutputStream*) param3)->$class->vtable[19];
$tmp2639(((panda$io$OutputStream*) param3), $tmp2637);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2632));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2634));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2636));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2637));
// line 751
panda$core$String* $tmp2641 = *(&local1);
panda$core$String* $tmp2642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2643, $tmp2641);
panda$core$String* $tmp2644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2642, &$s2645);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2646 = *(&local0);
panda$core$String** $tmp2647 = &$tmp2646->name;
panda$core$String* $tmp2648 = *$tmp2647;
panda$core$String* $tmp2649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2644, $tmp2648);
panda$core$String* $tmp2650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2649, &$s2651);
$fn2653 $tmp2652 = ($fn2653) ((panda$io$OutputStream*) param3)->$class->vtable[19];
$tmp2652(((panda$io$OutputStream*) param3), $tmp2650);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2642));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2644));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2649));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2650));
// line 752
panda$core$Int64* $tmp2654 = &param3->level;
panda$core$Int64 $tmp2655 = *$tmp2654;
panda$core$Int64 $tmp2656 = (panda$core$Int64) {1};
int64_t $tmp2657 = $tmp2655.value;
int64_t $tmp2658 = $tmp2656.value;
int64_t $tmp2659 = $tmp2657 + $tmp2658;
panda$core$Int64 $tmp2660 = (panda$core$Int64) {$tmp2659};
panda$core$Int64* $tmp2661 = &param3->level;
*$tmp2661 = $tmp2660;
// line 753
panda$core$String* $tmp2662 = *(&local1);
panda$core$String* $tmp2663 = panda$core$String$convert$R$panda$core$String($tmp2662);
panda$core$String* $tmp2664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2663, &$s2665);
panda$core$String* $tmp2666 = *(&local1);
panda$core$String* $tmp2667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2664, $tmp2666);
panda$core$String* $tmp2668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2667, &$s2669);
$fn2671 $tmp2670 = ($fn2671) ((panda$io$OutputStream*) param3)->$class->vtable[19];
$tmp2670(((panda$io$OutputStream*) param3), $tmp2668);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2663));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2664));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2667));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2668));
// line 754
panda$core$Int64* $tmp2672 = &param3->level;
panda$core$Int64 $tmp2673 = *$tmp2672;
panda$core$Int64 $tmp2674 = (panda$core$Int64) {1};
int64_t $tmp2675 = $tmp2673.value;
int64_t $tmp2676 = $tmp2674.value;
int64_t $tmp2677 = $tmp2675 - $tmp2676;
panda$core$Int64 $tmp2678 = (panda$core$Int64) {$tmp2677};
panda$core$Int64* $tmp2679 = &param3->level;
*$tmp2679 = $tmp2678;
// line 755
$fn2681 $tmp2680 = ($fn2681) ((panda$io$OutputStream*) param3)->$class->vtable[19];
$tmp2680(((panda$io$OutputStream*) param3), &$s2682);
// line 756
panda$core$Int64 $tmp2683 = (panda$core$Int64) {18446744073709551615};
*(&local2) = $tmp2683;
// line 757
panda$core$Weak** $tmp2684 = &param0->compiler;
panda$core$Weak* $tmp2685 = *$tmp2684;
panda$core$Object* $tmp2686 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2685);
panda$core$Panda$unref$panda$core$Object$Q($tmp2686);
panda$core$Weak** $tmp2687 = &param2->owner;
panda$core$Weak* $tmp2688 = *$tmp2687;
panda$core$Object* $tmp2689 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2688);
panda$core$Panda$unref$panda$core$Object$Q($tmp2689);
panda$collections$ListView* $tmp2690 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp2686), ((org$pandalanguage$pandac$ClassDecl*) $tmp2689));
*(&local3) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp2691 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2691));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2690));
*(&local3) = $tmp2690;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2690));
// line 758
panda$core$Int64 $tmp2692 = (panda$core$Int64) {0};
panda$collections$ListView* $tmp2693 = *(&local3);
ITable* $tmp2694 = ((panda$collections$CollectionView*) $tmp2693)->$class->itable;
while ($tmp2694->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2694 = $tmp2694->next;
}
$fn2696 $tmp2695 = $tmp2694->methods[0];
panda$core$Int64 $tmp2697 = $tmp2695(((panda$collections$CollectionView*) $tmp2693));
panda$core$Bit $tmp2698 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2699 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2692, $tmp2697, $tmp2698);
panda$core$Int64 $tmp2700 = $tmp2699.min;
*(&local4) = $tmp2700;
panda$core$Int64 $tmp2701 = $tmp2699.max;
panda$core$Bit $tmp2702 = $tmp2699.inclusive;
bool $tmp2703 = $tmp2702.value;
panda$core$Int64 $tmp2704 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2705 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2704);
if ($tmp2703) goto block4; else goto block5;
block4:;
int64_t $tmp2706 = $tmp2700.value;
int64_t $tmp2707 = $tmp2701.value;
bool $tmp2708 = $tmp2706 <= $tmp2707;
panda$core$Bit $tmp2709 = (panda$core$Bit) {$tmp2708};
bool $tmp2710 = $tmp2709.value;
if ($tmp2710) goto block1; else goto block2;
block5:;
int64_t $tmp2711 = $tmp2700.value;
int64_t $tmp2712 = $tmp2701.value;
bool $tmp2713 = $tmp2711 < $tmp2712;
panda$core$Bit $tmp2714 = (panda$core$Bit) {$tmp2713};
bool $tmp2715 = $tmp2714.value;
if ($tmp2715) goto block1; else goto block2;
block1:;
// line 759
panda$collections$ListView* $tmp2716 = *(&local3);
panda$core$Int64 $tmp2717 = *(&local4);
ITable* $tmp2718 = $tmp2716->$class->itable;
while ($tmp2718->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp2718 = $tmp2718->next;
}
$fn2720 $tmp2719 = $tmp2718->methods[0];
panda$core$Object* $tmp2721 = $tmp2719($tmp2716, $tmp2717);
bool $tmp2722 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2721) == param2;
panda$core$Bit $tmp2723 = panda$core$Bit$init$builtin_bit($tmp2722);
panda$core$Panda$unref$panda$core$Object$Q($tmp2721);
bool $tmp2724 = $tmp2723.value;
if ($tmp2724) goto block6; else goto block7;
block6:;
// line 760
panda$core$Int64 $tmp2725 = *(&local4);
*(&local2) = $tmp2725;
// line 761
goto block2;
block7:;
goto block3;
block3:;
panda$core$Int64 $tmp2726 = *(&local4);
int64_t $tmp2727 = $tmp2701.value;
int64_t $tmp2728 = $tmp2726.value;
int64_t $tmp2729 = $tmp2727 - $tmp2728;
panda$core$Int64 $tmp2730 = (panda$core$Int64) {$tmp2729};
panda$core$UInt64 $tmp2731 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2730);
if ($tmp2703) goto block9; else goto block10;
block9:;
uint64_t $tmp2732 = $tmp2731.value;
uint64_t $tmp2733 = $tmp2705.value;
bool $tmp2734 = $tmp2732 >= $tmp2733;
panda$core$Bit $tmp2735 = (panda$core$Bit) {$tmp2734};
bool $tmp2736 = $tmp2735.value;
if ($tmp2736) goto block8; else goto block2;
block10:;
uint64_t $tmp2737 = $tmp2731.value;
uint64_t $tmp2738 = $tmp2705.value;
bool $tmp2739 = $tmp2737 > $tmp2738;
panda$core$Bit $tmp2740 = (panda$core$Bit) {$tmp2739};
bool $tmp2741 = $tmp2740.value;
if ($tmp2741) goto block8; else goto block2;
block8:;
int64_t $tmp2742 = $tmp2726.value;
int64_t $tmp2743 = $tmp2704.value;
int64_t $tmp2744 = $tmp2742 + $tmp2743;
panda$core$Int64 $tmp2745 = (panda$core$Int64) {$tmp2744};
*(&local4) = $tmp2745;
goto block1;
block2:;
// line 764
panda$core$Int64 $tmp2746 = *(&local2);
panda$core$Weak** $tmp2747 = &param0->compiler;
panda$core$Weak* $tmp2748 = *$tmp2747;
panda$core$Object* $tmp2749 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2748);
panda$core$Panda$unref$panda$core$Object$Q($tmp2749);
panda$core$Weak** $tmp2750 = &param0->compiler;
panda$core$Weak* $tmp2751 = *$tmp2750;
panda$core$Object* $tmp2752 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2751);
panda$core$Panda$unref$panda$core$Object$Q($tmp2752);
org$pandalanguage$pandac$Type* $tmp2753 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$ClassDecl* $tmp2754 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp2752), $tmp2753);
panda$collections$ListView* $tmp2755 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp2749), $tmp2754);
ITable* $tmp2756 = ((panda$collections$CollectionView*) $tmp2755)->$class->itable;
while ($tmp2756->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2756 = $tmp2756->next;
}
$fn2758 $tmp2757 = $tmp2756->methods[0];
panda$core$Int64 $tmp2759 = $tmp2757(((panda$collections$CollectionView*) $tmp2755));
int64_t $tmp2760 = $tmp2746.value;
int64_t $tmp2761 = $tmp2759.value;
int64_t $tmp2762 = $tmp2760 - $tmp2761;
panda$core$Int64 $tmp2763 = (panda$core$Int64) {$tmp2762};
*(&local2) = $tmp2763;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2753));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2754));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2755));
// line 765
panda$core$Int64 $tmp2764 = *(&local2);
panda$core$Int64 $tmp2765 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp2766 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2764, $tmp2765);
bool $tmp2767 = $tmp2766.value;
if ($tmp2767) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp2768 = (panda$core$Int64) {765};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2769, $tmp2768);
abort(); // unreachable
block11:;
// line 766
panda$core$String* $tmp2770 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local5) = ((panda$core$String*) NULL);
panda$core$String* $tmp2771 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2771));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2770));
*(&local5) = $tmp2770;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2770));
// line 767
panda$core$Weak** $tmp2772 = &param0->compiler;
panda$core$Weak* $tmp2773 = *$tmp2772;
panda$core$Object* $tmp2774 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2773);
panda$core$Panda$unref$panda$core$Object$Q($tmp2774);
org$pandalanguage$pandac$Type* $tmp2775 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp2774), param2);
panda$core$String* $tmp2776 = org$pandalanguage$pandac$CCodeGenerator$cMethodType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$Q$R$panda$core$String(param0, $tmp2775, ((org$pandalanguage$pandac$Type*) NULL));
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp2777 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2777));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2776));
*(&local6) = $tmp2776;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2775));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2776));
// line 768
panda$core$String* $tmp2778 = *(&local6);
panda$core$String* $tmp2779 = panda$core$String$convert$R$panda$core$String($tmp2778);
panda$core$String* $tmp2780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2779, &$s2781);
panda$core$String* $tmp2782 = *(&local5);
panda$core$String* $tmp2783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2780, $tmp2782);
panda$core$String* $tmp2784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2783, &$s2785);
panda$core$String* $tmp2786 = *(&local1);
panda$core$String* $tmp2787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2784, $tmp2786);
panda$core$String* $tmp2788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2787, &$s2789);
panda$core$Int64 $tmp2790 = *(&local2);
panda$core$Int64$wrapper* $tmp2791;
$tmp2791 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp2791->value = $tmp2790;
panda$core$String* $tmp2792 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2788, ((panda$core$Object*) $tmp2791));
panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2792, &$s2794);
$fn2796 $tmp2795 = ($fn2796) ((panda$io$OutputStream*) param3)->$class->vtable[19];
$tmp2795(((panda$io$OutputStream*) param3), $tmp2793);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2779));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2780));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2783));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2784));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2787));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2788));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2791));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2792));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2793));
// line 769
panda$core$String* $tmp2797 = *(&local5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2797));
panda$core$String* $tmp2798 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2798));
// unreffing methodType
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp2799 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2799));
// unreffing result
*(&local5) = ((panda$core$String*) NULL);
panda$collections$ListView* $tmp2800 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2800));
// unreffing vtable
*(&local3) = ((panda$collections$ListView*) NULL);
panda$core$String* $tmp2801 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2801));
// unreffing itable
*(&local1) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2802 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2802));
// unreffing cc
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
return $tmp2797;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1, org$pandalanguage$pandac$MethodDecl* param2, panda$core$Bit param3, panda$io$IndentedOutputStream* param4) {

panda$core$Bit local0;
// line 774
panda$core$Bit $tmp2803 = panda$core$Bit$$NOT$R$panda$core$Bit(param3);
bool $tmp2804 = $tmp2803.value;
if ($tmp2804) goto block1; else goto block2;
block1:;
panda$core$Bit $tmp2805 = org$pandalanguage$pandac$MethodDecl$get_isVirtual$R$panda$core$Bit(param2);
*(&local0) = $tmp2805;
goto block3;
block2:;
*(&local0) = $tmp2803;
goto block3;
block3:;
panda$core$Bit $tmp2806 = *(&local0);
bool $tmp2807 = $tmp2806.value;
if ($tmp2807) goto block4; else goto block6;
block4:;
// line 775
panda$core$Bit $tmp2808 = panda$core$Bit$init$builtin_bit(param1 != NULL);
bool $tmp2809 = $tmp2808.value;
if ($tmp2809) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp2810 = (panda$core$Int64) {775};
panda$core$String* $tmp2811 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param2);
panda$core$String* $tmp2812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2813, $tmp2811);
panda$core$String* $tmp2814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2812, &$s2815);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2816, $tmp2810, $tmp2814);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2811));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2812));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2814));
abort(); // unreachable
block7:;
// line 776
panda$core$Weak** $tmp2817 = &param2->owner;
panda$core$Weak* $tmp2818 = *$tmp2817;
panda$core$Object* $tmp2819 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2818);
panda$core$Panda$unref$panda$core$Object$Q($tmp2819);
org$pandalanguage$pandac$ClassDecl$Kind* $tmp2820 = &((org$pandalanguage$pandac$ClassDecl*) $tmp2819)->classKind;
org$pandalanguage$pandac$ClassDecl$Kind $tmp2821 = *$tmp2820;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2822;
$tmp2822 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2822->value = $tmp2821;
panda$core$Int64 $tmp2823 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2824 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2823);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2825;
$tmp2825 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2825->value = $tmp2824;
ITable* $tmp2826 = ((panda$core$Equatable*) $tmp2822)->$class->itable;
while ($tmp2826->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2826 = $tmp2826->next;
}
$fn2828 $tmp2827 = $tmp2826->methods[0];
panda$core$Bit $tmp2829 = $tmp2827(((panda$core$Equatable*) $tmp2822), ((panda$core$Equatable*) $tmp2825));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2822)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2825)));
bool $tmp2830 = $tmp2829.value;
if ($tmp2830) goto block9; else goto block11;
block9:;
// line 777
panda$core$String* $tmp2831 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2831));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2831));
return $tmp2831;
block11:;
// line 1
// line 780
panda$core$String* $tmp2832 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2832));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2832));
return $tmp2832;
block10:;
goto block5;
block6:;
// line 1
// line 784
panda$core$Weak** $tmp2833 = &param2->owner;
panda$core$Weak* $tmp2834 = *$tmp2833;
panda$core$Object* $tmp2835 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2834);
panda$core$Panda$unref$panda$core$Object$Q($tmp2835);
panda$core$Bit $tmp2836 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp2835));
bool $tmp2837 = $tmp2836.value;
if ($tmp2837) goto block12; else goto block13;
block12:;
// line 785
org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(param0, param2);
goto block13;
block13:;
// line 787
panda$core$String* $tmp2838 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2838));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2838));
return $tmp2838;
block5:;
panda$core$Bit $tmp2839 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2840 = $tmp2839.value;
if ($tmp2840) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp2841 = (panda$core$Int64) {772};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2842, $tmp2841, &$s2843);
abort(); // unreachable
block14:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1, org$pandalanguage$pandac$Type* param2, org$pandalanguage$pandac$Type* param3, panda$io$IndentedOutputStream* param4) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
// line 792
org$pandalanguage$pandac$Type$Kind* $tmp2844 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp2845 = *$tmp2844;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp2846;
$tmp2846 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp2846->value = $tmp2845;
panda$core$Int64 $tmp2847 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp2848 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp2847);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp2849;
$tmp2849 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp2849->value = $tmp2848;
ITable* $tmp2850 = ((panda$core$Equatable*) $tmp2846)->$class->itable;
while ($tmp2850->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2850 = $tmp2850->next;
}
$fn2852 $tmp2851 = $tmp2850->methods[0];
panda$core$Bit $tmp2853 = $tmp2851(((panda$core$Equatable*) $tmp2846), ((panda$core$Equatable*) $tmp2849));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2846)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2849)));
bool $tmp2854 = $tmp2853.value;
if ($tmp2854) goto block1; else goto block2;
block1:;
// line 794
panda$core$String* $tmp2855 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp2856 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2856));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2855));
*(&local0) = $tmp2855;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2855));
// line 795
panda$core$String* $tmp2857 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp2858 = panda$core$String$convert$R$panda$core$String($tmp2857);
panda$core$String* $tmp2859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2858, &$s2860);
panda$core$String* $tmp2861 = *(&local0);
panda$core$String* $tmp2862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2859, $tmp2861);
panda$core$String* $tmp2863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2862, &$s2864);
$fn2866 $tmp2865 = ($fn2866) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2865(((panda$io$OutputStream*) param4), $tmp2863);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2857));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2858));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2859));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2862));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2863));
// line 796
panda$core$String* $tmp2867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2868, param1);
panda$core$String* $tmp2869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2867, &$s2870);
$fn2872 $tmp2871 = ($fn2872) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2871(((panda$io$OutputStream*) param4), $tmp2869);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2867));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2869));
// line 797
panda$core$Int64* $tmp2873 = &param4->level;
panda$core$Int64 $tmp2874 = *$tmp2873;
panda$core$Int64 $tmp2875 = (panda$core$Int64) {1};
int64_t $tmp2876 = $tmp2874.value;
int64_t $tmp2877 = $tmp2875.value;
int64_t $tmp2878 = $tmp2876 + $tmp2877;
panda$core$Int64 $tmp2879 = (panda$core$Int64) {$tmp2878};
panda$core$Int64* $tmp2880 = &param4->level;
*$tmp2880 = $tmp2879;
// line 798
panda$collections$ImmutableArray** $tmp2881 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp2882 = *$tmp2881;
panda$core$Int64 $tmp2883 = (panda$core$Int64) {0};
panda$core$Object* $tmp2884 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp2882, $tmp2883);
panda$core$String* $tmp2885 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, ((org$pandalanguage$pandac$Type*) $tmp2884), param4);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp2886 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2886));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2885));
*(&local1) = $tmp2885;
panda$core$Panda$unref$panda$core$Object$Q($tmp2884);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2885));
// line 799
panda$core$String* $tmp2887 = *(&local1);
panda$collections$ImmutableArray** $tmp2888 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp2889 = *$tmp2888;
panda$core$Int64 $tmp2890 = (panda$core$Int64) {0};
panda$core$Object* $tmp2891 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp2889, $tmp2890);
panda$core$String* $tmp2892 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, $tmp2887, ((org$pandalanguage$pandac$Type*) $tmp2891), param3, param4);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp2893 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2893));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2892));
*(&local2) = $tmp2892;
panda$core$Panda$unref$panda$core$Object$Q($tmp2891);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2892));
// line 800
panda$core$String* $tmp2894 = *(&local0);
panda$core$String* $tmp2895 = panda$core$String$convert$R$panda$core$String($tmp2894);
panda$core$String* $tmp2896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2895, &$s2897);
panda$core$String* $tmp2898 = *(&local2);
panda$core$String* $tmp2899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2896, $tmp2898);
panda$core$String* $tmp2900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2899, &$s2901);
$fn2903 $tmp2902 = ($fn2903) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2902(((panda$io$OutputStream*) param4), $tmp2900);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2895));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2896));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2899));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2900));
// line 801
panda$core$Int64* $tmp2904 = &param4->level;
panda$core$Int64 $tmp2905 = *$tmp2904;
panda$core$Int64 $tmp2906 = (panda$core$Int64) {1};
int64_t $tmp2907 = $tmp2905.value;
int64_t $tmp2908 = $tmp2906.value;
int64_t $tmp2909 = $tmp2907 - $tmp2908;
panda$core$Int64 $tmp2910 = (panda$core$Int64) {$tmp2909};
panda$core$Int64* $tmp2911 = &param4->level;
*$tmp2911 = $tmp2910;
// line 802
$fn2913 $tmp2912 = ($fn2913) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2912(((panda$io$OutputStream*) param4), &$s2914);
// line 803
$fn2916 $tmp2915 = ($fn2916) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2915(((panda$io$OutputStream*) param4), &$s2917);
// line 804
panda$core$Int64* $tmp2918 = &param4->level;
panda$core$Int64 $tmp2919 = *$tmp2918;
panda$core$Int64 $tmp2920 = (panda$core$Int64) {1};
int64_t $tmp2921 = $tmp2919.value;
int64_t $tmp2922 = $tmp2920.value;
int64_t $tmp2923 = $tmp2921 + $tmp2922;
panda$core$Int64 $tmp2924 = (panda$core$Int64) {$tmp2923};
panda$core$Int64* $tmp2925 = &param4->level;
*$tmp2925 = $tmp2924;
// line 805
panda$core$String* $tmp2926 = *(&local0);
panda$core$String* $tmp2927 = panda$core$String$convert$R$panda$core$String($tmp2926);
panda$core$String* $tmp2928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2927, &$s2929);
$fn2931 $tmp2930 = ($fn2931) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2930(((panda$io$OutputStream*) param4), $tmp2928);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2927));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2928));
// line 806
panda$core$Int64* $tmp2932 = &param4->level;
panda$core$Int64 $tmp2933 = *$tmp2932;
panda$core$Int64 $tmp2934 = (panda$core$Int64) {1};
int64_t $tmp2935 = $tmp2933.value;
int64_t $tmp2936 = $tmp2934.value;
int64_t $tmp2937 = $tmp2935 - $tmp2936;
panda$core$Int64 $tmp2938 = (panda$core$Int64) {$tmp2937};
panda$core$Int64* $tmp2939 = &param4->level;
*$tmp2939 = $tmp2938;
// line 807
$fn2941 $tmp2940 = ($fn2941) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2940(((panda$io$OutputStream*) param4), &$s2942);
// line 808
panda$core$String* $tmp2943 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2943));
panda$core$String* $tmp2944 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2944));
// unreffing nonNullValue
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp2945 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2945));
// unreffing unwrapped
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp2946 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2946));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp2943;
block2:;
// line 810
panda$core$String* $tmp2947 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp2948 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2948));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2947));
*(&local3) = $tmp2947;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2947));
// line 811
panda$core$String* $tmp2949 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param2);
panda$core$String* $tmp2950 = panda$core$String$convert$R$panda$core$String($tmp2949);
panda$core$String* $tmp2951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2950, &$s2952);
panda$core$String* $tmp2953 = *(&local3);
panda$core$String* $tmp2954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2951, $tmp2953);
panda$core$String* $tmp2955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2954, &$s2956);
$fn2958 $tmp2957 = ($fn2958) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2957(((panda$io$OutputStream*) param4), $tmp2955);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2949));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2950));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2951));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2954));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2955));
// line 812
org$pandalanguage$pandac$Type$Kind* $tmp2959 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp2960 = *$tmp2959;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp2961;
$tmp2961 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp2961->value = $tmp2960;
panda$core$Int64 $tmp2962 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp2963 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp2962);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp2964;
$tmp2964 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp2964->value = $tmp2963;
ITable* $tmp2965 = ((panda$core$Equatable*) $tmp2961)->$class->itable;
while ($tmp2965->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2965 = $tmp2965->next;
}
$fn2967 $tmp2966 = $tmp2965->methods[0];
panda$core$Bit $tmp2968 = $tmp2966(((panda$core$Equatable*) $tmp2961), ((panda$core$Equatable*) $tmp2964));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2961)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2964)));
bool $tmp2969 = $tmp2968.value;
if ($tmp2969) goto block3; else goto block4;
block3:;
// line 813
panda$core$String* $tmp2970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2971, param1);
panda$core$String* $tmp2972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2970, &$s2973);
$fn2975 $tmp2974 = ($fn2975) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2974(((panda$io$OutputStream*) param4), $tmp2972);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2970));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2972));
// line 814
panda$core$Int64* $tmp2976 = &param4->level;
panda$core$Int64 $tmp2977 = *$tmp2976;
panda$core$Int64 $tmp2978 = (panda$core$Int64) {1};
int64_t $tmp2979 = $tmp2977.value;
int64_t $tmp2980 = $tmp2978.value;
int64_t $tmp2981 = $tmp2979 + $tmp2980;
panda$core$Int64 $tmp2982 = (panda$core$Int64) {$tmp2981};
panda$core$Int64* $tmp2983 = &param4->level;
*$tmp2983 = $tmp2982;
goto block4;
block4:;
// line 816
panda$core$String* $tmp2984 = *(&local3);
panda$core$String* $tmp2985 = panda$core$String$convert$R$panda$core$String($tmp2984);
panda$core$String* $tmp2986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2985, &$s2987);
panda$core$String* $tmp2988 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param2);
panda$core$String* $tmp2989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2986, $tmp2988);
panda$core$String* $tmp2990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2989, &$s2991);
panda$core$Int64 $tmp2992 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param2);
panda$core$Int64$wrapper* $tmp2993;
$tmp2993 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp2993->value = $tmp2992;
panda$core$String* $tmp2994 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2995, ((panda$core$Object*) $tmp2993));
panda$core$String* $tmp2996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2994, &$s2997);
panda$core$String* $tmp2998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2990, $tmp2996);
panda$core$String** $tmp2999 = &((org$pandalanguage$pandac$Symbol*) param2)->name;
panda$core$String* $tmp3000 = *$tmp2999;
panda$core$String* $tmp3001 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp3000);
panda$core$String* $tmp3002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3003, $tmp3001);
panda$core$String* $tmp3004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3002, &$s3005);
panda$core$String* $tmp3006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2998, $tmp3004);
$fn3008 $tmp3007 = ($fn3008) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp3007(((panda$io$OutputStream*) param4), $tmp3006);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2985));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2986));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2988));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2989));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2990));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2993));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2994));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2996));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2998));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3001));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3002));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3004));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3006));
// line 819
panda$core$String* $tmp3009 = *(&local3);
panda$core$String* $tmp3010 = panda$core$String$convert$R$panda$core$String($tmp3009);
panda$core$String* $tmp3011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3010, &$s3012);
panda$core$String* $tmp3013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3011, param1);
panda$core$String* $tmp3014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3013, &$s3015);
$fn3017 $tmp3016 = ($fn3017) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp3016(((panda$io$OutputStream*) param4), $tmp3014);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3010));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3011));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3013));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3014));
// line 820
org$pandalanguage$pandac$Type$Kind* $tmp3018 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3019 = *$tmp3018;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3020;
$tmp3020 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3020->value = $tmp3019;
panda$core$Int64 $tmp3021 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3022 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3021);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3023;
$tmp3023 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3023->value = $tmp3022;
ITable* $tmp3024 = ((panda$core$Equatable*) $tmp3020)->$class->itable;
while ($tmp3024->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3024 = $tmp3024->next;
}
$fn3026 $tmp3025 = $tmp3024->methods[0];
panda$core$Bit $tmp3027 = $tmp3025(((panda$core$Equatable*) $tmp3020), ((panda$core$Equatable*) $tmp3023));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3020)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3023)));
bool $tmp3028 = $tmp3027.value;
if ($tmp3028) goto block5; else goto block6;
block5:;
// line 821
panda$core$Int64* $tmp3029 = &param4->level;
panda$core$Int64 $tmp3030 = *$tmp3029;
panda$core$Int64 $tmp3031 = (panda$core$Int64) {1};
int64_t $tmp3032 = $tmp3030.value;
int64_t $tmp3033 = $tmp3031.value;
int64_t $tmp3034 = $tmp3032 - $tmp3033;
panda$core$Int64 $tmp3035 = (panda$core$Int64) {$tmp3034};
panda$core$Int64* $tmp3036 = &param4->level;
*$tmp3036 = $tmp3035;
// line 822
$fn3038 $tmp3037 = ($fn3038) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp3037(((panda$io$OutputStream*) param4), &$s3039);
// line 823
$fn3041 $tmp3040 = ($fn3041) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp3040(((panda$io$OutputStream*) param4), &$s3042);
// line 824
panda$core$Int64* $tmp3043 = &param4->level;
panda$core$Int64 $tmp3044 = *$tmp3043;
panda$core$Int64 $tmp3045 = (panda$core$Int64) {1};
int64_t $tmp3046 = $tmp3044.value;
int64_t $tmp3047 = $tmp3045.value;
int64_t $tmp3048 = $tmp3046 + $tmp3047;
panda$core$Int64 $tmp3049 = (panda$core$Int64) {$tmp3048};
panda$core$Int64* $tmp3050 = &param4->level;
*$tmp3050 = $tmp3049;
// line 825
panda$core$String* $tmp3051 = *(&local3);
panda$core$String* $tmp3052 = panda$core$String$convert$R$panda$core$String($tmp3051);
panda$core$String* $tmp3053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3052, &$s3054);
$fn3056 $tmp3055 = ($fn3056) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp3055(((panda$io$OutputStream*) param4), $tmp3053);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3052));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3053));
// line 826
panda$core$Int64* $tmp3057 = &param4->level;
panda$core$Int64 $tmp3058 = *$tmp3057;
panda$core$Int64 $tmp3059 = (panda$core$Int64) {1};
int64_t $tmp3060 = $tmp3058.value;
int64_t $tmp3061 = $tmp3059.value;
int64_t $tmp3062 = $tmp3060 - $tmp3061;
panda$core$Int64 $tmp3063 = (panda$core$Int64) {$tmp3062};
panda$core$Int64* $tmp3064 = &param4->level;
*$tmp3064 = $tmp3063;
// line 827
$fn3066 $tmp3065 = ($fn3066) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp3065(((panda$io$OutputStream*) param4), &$s3067);
goto block6;
block6:;
// line 829
panda$core$String* $tmp3068 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp3069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3070, $tmp3068);
panda$core$String* $tmp3071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3069, &$s3072);
panda$core$String* $tmp3073 = *(&local3);
panda$core$String* $tmp3074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3071, $tmp3073);
panda$core$String* $tmp3075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3074, &$s3076);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3075));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3068));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3069));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3071));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3074));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3075));
panda$core$String* $tmp3077 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3077));
// unreffing wrapped
*(&local3) = ((panda$core$String*) NULL);
return $tmp3075;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1, org$pandalanguage$pandac$Type* param2, org$pandalanguage$pandac$Type* param3, panda$io$IndentedOutputStream* param4) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
// line 833
panda$core$String* $tmp3078 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp3079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3080, $tmp3078);
panda$core$String* $tmp3081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3079, &$s3082);
panda$core$String* $tmp3083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3081, param1);
panda$core$String* $tmp3084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3083, &$s3085);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp3086 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3086));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3084));
*(&local0) = $tmp3084;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3078));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3079));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3081));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3083));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3084));
// line 834
org$pandalanguage$pandac$Type$Kind* $tmp3087 = &param3->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3088 = *$tmp3087;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3089;
$tmp3089 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3089->value = $tmp3088;
panda$core$Int64 $tmp3090 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3091 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3090);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3092;
$tmp3092 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3092->value = $tmp3091;
ITable* $tmp3093 = ((panda$core$Equatable*) $tmp3089)->$class->itable;
while ($tmp3093->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3093 = $tmp3093->next;
}
$fn3095 $tmp3094 = $tmp3093->methods[0];
panda$core$Bit $tmp3096 = $tmp3094(((panda$core$Equatable*) $tmp3089), ((panda$core$Equatable*) $tmp3092));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3089)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3092)));
bool $tmp3097 = $tmp3096.value;
if ($tmp3097) goto block1; else goto block2;
block1:;
// line 836
panda$collections$ImmutableArray** $tmp3098 = &param3->subtypes;
panda$collections$ImmutableArray* $tmp3099 = *$tmp3098;
panda$core$Int64 $tmp3100 = (panda$core$Int64) {0};
panda$core$Object* $tmp3101 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp3099, $tmp3100);
panda$core$String* $tmp3102 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, ((org$pandalanguage$pandac$Type*) $tmp3101), param4);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3103 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3103));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3102));
*(&local1) = $tmp3102;
panda$core$Panda$unref$panda$core$Object$Q($tmp3101);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3102));
// line 837
panda$core$String* $tmp3104 = *(&local1);
panda$collections$ImmutableArray** $tmp3105 = &param3->subtypes;
panda$collections$ImmutableArray* $tmp3106 = *$tmp3105;
panda$core$Int64 $tmp3107 = (panda$core$Int64) {0};
panda$core$Object* $tmp3108 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp3106, $tmp3107);
panda$core$String* $tmp3109 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, $tmp3104, ((org$pandalanguage$pandac$Type*) $tmp3108), param3, param4);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp3110 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3110));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3109));
*(&local2) = $tmp3109;
panda$core$Panda$unref$panda$core$Object$Q($tmp3108);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3109));
// line 838
panda$core$String* $tmp3111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3112, param1);
panda$core$String* $tmp3113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3111, &$s3114);
panda$core$String* $tmp3115 = *(&local2);
panda$core$String* $tmp3116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3113, $tmp3115);
panda$core$String* $tmp3117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3116, &$s3118);
panda$core$String* $tmp3119 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp3120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3117, $tmp3119);
panda$core$String* $tmp3121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3120, &$s3122);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3121));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3111));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3113));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3116));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3117));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3119));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3120));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3121));
panda$core$String* $tmp3123 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3123));
// unreffing nonNullValue
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp3124 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3124));
// unreffing wrapped
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3125 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3125));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3121;
block2:;
// line 840
panda$core$String* $tmp3126 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3126));
panda$core$String* $tmp3127 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3127));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3126;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1, org$pandalanguage$pandac$Type* param2, org$pandalanguage$pandac$Type* param3, panda$io$IndentedOutputStream* param4) {

// line 845
panda$core$String* $tmp3128 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp3129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3130, $tmp3128);
panda$core$String* $tmp3131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3129, &$s3132);
panda$core$String* $tmp3133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3131, param1);
panda$core$String* $tmp3134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3133, &$s3135);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3134));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3128));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3129));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3131));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3133));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3134));
return $tmp3134;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1, org$pandalanguage$pandac$Type* param2, org$pandalanguage$pandac$Type* param3, panda$io$IndentedOutputStream* param4) {

// line 850
panda$core$String* $tmp3136 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp3137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3138, $tmp3136);
panda$core$String* $tmp3139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3137, &$s3140);
panda$core$String* $tmp3141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3139, param1);
panda$core$String* $tmp3142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3141, &$s3143);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3142));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3136));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3137));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3139));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3141));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3142));
return $tmp3142;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1, org$pandalanguage$pandac$Type* param2, org$pandalanguage$pandac$Type* param3) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
org$pandalanguage$pandac$ClassDecl* local1 = NULL;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Bit local4;
panda$core$Bit local5;
panda$core$Bit local6;
panda$core$Bit local7;
panda$core$String* local8 = NULL;
panda$core$String* local9 = NULL;
// line 854
panda$core$Bit $tmp3144 = org$pandalanguage$pandac$Type$get_isBuiltinNumber$R$panda$core$Bit(param3);
bool $tmp3145 = $tmp3144.value;
if ($tmp3145) goto block1; else goto block3;
block1:;
// line 855
panda$core$Bit $tmp3146 = org$pandalanguage$pandac$Type$get_isBuiltinNumber$R$panda$core$Bit(param2);
bool $tmp3147 = $tmp3146.value;
if ($tmp3147) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp3148 = (panda$core$Int64) {855};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3149, $tmp3148);
abort(); // unreachable
block4:;
// line 856
panda$core$String* $tmp3150 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp3151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3152, $tmp3150);
panda$core$String* $tmp3153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3151, &$s3154);
panda$core$String* $tmp3155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3153, param1);
panda$core$String* $tmp3156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3155, &$s3157);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3156));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3150));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3151));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3153));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3155));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3156));
return $tmp3156;
block3:;
// line 1
// line 859
panda$core$Weak** $tmp3158 = &param0->compiler;
panda$core$Weak* $tmp3159 = *$tmp3158;
panda$core$Object* $tmp3160 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3159);
panda$core$Panda$unref$panda$core$Object$Q($tmp3160);
org$pandalanguage$pandac$ClassDecl* $tmp3161 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3160), param2);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3162 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3162));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3161));
*(&local0) = $tmp3161;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3161));
// line 860
org$pandalanguage$pandac$ClassDecl* $tmp3163 = *(&local0);
panda$core$Bit $tmp3164 = panda$core$Bit$init$builtin_bit($tmp3163 != NULL);
bool $tmp3165 = $tmp3164.value;
if ($tmp3165) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp3166 = (panda$core$Int64) {860};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3167, $tmp3166);
abort(); // unreachable
block6:;
// line 861
panda$core$Weak** $tmp3168 = &param0->compiler;
panda$core$Weak* $tmp3169 = *$tmp3168;
panda$core$Object* $tmp3170 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3169);
panda$core$Panda$unref$panda$core$Object$Q($tmp3170);
org$pandalanguage$pandac$ClassDecl* $tmp3171 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3170), param3);
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3172 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3172));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3171));
*(&local1) = $tmp3171;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3171));
// line 862
org$pandalanguage$pandac$ClassDecl* $tmp3173 = *(&local1);
panda$core$Bit $tmp3174 = panda$core$Bit$init$builtin_bit($tmp3173 != NULL);
bool $tmp3175 = $tmp3174.value;
if ($tmp3175) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp3176 = (panda$core$Int64) {862};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3177, $tmp3176);
abort(); // unreachable
block8:;
// line 863
panda$core$Weak** $tmp3178 = &param0->compiler;
panda$core$Weak* $tmp3179 = *$tmp3178;
panda$core$Object* $tmp3180 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3179);
panda$core$Panda$unref$panda$core$Object$Q($tmp3180);
org$pandalanguage$pandac$ClassDecl* $tmp3181 = *(&local0);
panda$core$Bit $tmp3182 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3180), $tmp3181);
bool $tmp3183 = $tmp3182.value;
if ($tmp3183) goto block10; else goto block11;
block10:;
panda$core$Weak** $tmp3184 = &param0->compiler;
panda$core$Weak* $tmp3185 = *$tmp3184;
panda$core$Object* $tmp3186 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3185);
panda$core$Panda$unref$panda$core$Object$Q($tmp3186);
org$pandalanguage$pandac$ClassDecl* $tmp3187 = *(&local1);
panda$core$Bit $tmp3188 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3186), $tmp3187);
panda$core$Bit $tmp3189 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3188);
*(&local2) = $tmp3189;
goto block12;
block11:;
*(&local2) = $tmp3182;
goto block12;
block12:;
panda$core$Bit $tmp3190 = *(&local2);
bool $tmp3191 = $tmp3190.value;
if ($tmp3191) goto block13; else goto block15;
block13:;
// line 864
panda$io$IndentedOutputStream** $tmp3192 = &param0->out;
panda$io$IndentedOutputStream* $tmp3193 = *$tmp3192;
panda$core$String* $tmp3194 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, param3, $tmp3193);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3194));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3194));
org$pandalanguage$pandac$ClassDecl* $tmp3195 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3195));
// unreffing targetClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3196 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3196));
// unreffing srcClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3194;
block15:;
// line 866
panda$core$Weak** $tmp3197 = &param0->compiler;
panda$core$Weak* $tmp3198 = *$tmp3197;
panda$core$Object* $tmp3199 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3198);
panda$core$Panda$unref$panda$core$Object$Q($tmp3199);
org$pandalanguage$pandac$ClassDecl* $tmp3200 = *(&local0);
panda$core$Bit $tmp3201 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3199), $tmp3200);
panda$core$Bit $tmp3202 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3201);
bool $tmp3203 = $tmp3202.value;
if ($tmp3203) goto block16; else goto block17;
block16:;
panda$core$Weak** $tmp3204 = &param0->compiler;
panda$core$Weak* $tmp3205 = *$tmp3204;
panda$core$Object* $tmp3206 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3205);
panda$core$Panda$unref$panda$core$Object$Q($tmp3206);
org$pandalanguage$pandac$ClassDecl* $tmp3207 = *(&local1);
panda$core$Bit $tmp3208 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3206), $tmp3207);
*(&local3) = $tmp3208;
goto block18;
block17:;
*(&local3) = $tmp3202;
goto block18;
block18:;
panda$core$Bit $tmp3209 = *(&local3);
bool $tmp3210 = $tmp3209.value;
if ($tmp3210) goto block19; else goto block21;
block19:;
// line 867
panda$io$IndentedOutputStream** $tmp3211 = &param0->out;
panda$io$IndentedOutputStream* $tmp3212 = *$tmp3211;
panda$core$String* $tmp3213 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, param3, $tmp3212);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3213));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3213));
org$pandalanguage$pandac$ClassDecl* $tmp3214 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3214));
// unreffing targetClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3215 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3215));
// unreffing srcClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3213;
block21:;
// line 869
panda$core$Weak** $tmp3216 = &param0->compiler;
panda$core$Weak* $tmp3217 = *$tmp3216;
panda$core$Object* $tmp3218 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3217);
panda$core$Panda$unref$panda$core$Object$Q($tmp3218);
org$pandalanguage$pandac$ClassDecl* $tmp3219 = *(&local0);
panda$core$Bit $tmp3220 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3218), $tmp3219);
bool $tmp3221 = $tmp3220.value;
if ($tmp3221) goto block22; else goto block23;
block22:;
org$pandalanguage$pandac$Type$Kind* $tmp3222 = &param3->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3223 = *$tmp3222;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3224;
$tmp3224 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3224->value = $tmp3223;
panda$core$Int64 $tmp3225 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3226 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3225);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3227;
$tmp3227 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3227->value = $tmp3226;
ITable* $tmp3228 = ((panda$core$Equatable*) $tmp3224)->$class->itable;
while ($tmp3228->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3228 = $tmp3228->next;
}
$fn3230 $tmp3229 = $tmp3228->methods[0];
panda$core$Bit $tmp3231 = $tmp3229(((panda$core$Equatable*) $tmp3224), ((panda$core$Equatable*) $tmp3227));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3224)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3227)));
*(&local5) = $tmp3231;
goto block24;
block23:;
*(&local5) = $tmp3220;
goto block24;
block24:;
panda$core$Bit $tmp3232 = *(&local5);
bool $tmp3233 = $tmp3232.value;
if ($tmp3233) goto block25; else goto block26;
block25:;
panda$collections$ImmutableArray** $tmp3234 = &param3->subtypes;
panda$collections$ImmutableArray* $tmp3235 = *$tmp3234;
panda$core$Int64 $tmp3236 = (panda$core$Int64) {0};
panda$core$Object* $tmp3237 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp3235, $tmp3236);
panda$core$Bit $tmp3238 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3237), param2);
panda$core$Panda$unref$panda$core$Object$Q($tmp3237);
*(&local4) = $tmp3238;
goto block27;
block26:;
*(&local4) = $tmp3232;
goto block27;
block27:;
panda$core$Bit $tmp3239 = *(&local4);
bool $tmp3240 = $tmp3239.value;
if ($tmp3240) goto block28; else goto block30;
block28:;
// line 871
panda$io$IndentedOutputStream** $tmp3241 = &param0->out;
panda$io$IndentedOutputStream* $tmp3242 = *$tmp3241;
panda$core$String* $tmp3243 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, param3, $tmp3242);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3243));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3243));
org$pandalanguage$pandac$ClassDecl* $tmp3244 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3244));
// unreffing targetClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3245 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3245));
// unreffing srcClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3243;
block30:;
// line 873
panda$core$Weak** $tmp3246 = &param0->compiler;
panda$core$Weak* $tmp3247 = *$tmp3246;
panda$core$Object* $tmp3248 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3247);
panda$core$Panda$unref$panda$core$Object$Q($tmp3248);
org$pandalanguage$pandac$ClassDecl* $tmp3249 = *(&local1);
panda$core$Bit $tmp3250 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3248), $tmp3249);
bool $tmp3251 = $tmp3250.value;
if ($tmp3251) goto block31; else goto block32;
block31:;
org$pandalanguage$pandac$Type$Kind* $tmp3252 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3253 = *$tmp3252;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3254;
$tmp3254 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3254->value = $tmp3253;
panda$core$Int64 $tmp3255 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3256 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3255);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3257;
$tmp3257 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3257->value = $tmp3256;
ITable* $tmp3258 = ((panda$core$Equatable*) $tmp3254)->$class->itable;
while ($tmp3258->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3258 = $tmp3258->next;
}
$fn3260 $tmp3259 = $tmp3258->methods[0];
panda$core$Bit $tmp3261 = $tmp3259(((panda$core$Equatable*) $tmp3254), ((panda$core$Equatable*) $tmp3257));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3254)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3257)));
*(&local7) = $tmp3261;
goto block33;
block32:;
*(&local7) = $tmp3250;
goto block33;
block33:;
panda$core$Bit $tmp3262 = *(&local7);
bool $tmp3263 = $tmp3262.value;
if ($tmp3263) goto block34; else goto block35;
block34:;
panda$collections$ImmutableArray** $tmp3264 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp3265 = *$tmp3264;
panda$core$Int64 $tmp3266 = (panda$core$Int64) {0};
panda$core$Object* $tmp3267 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp3265, $tmp3266);
panda$core$Bit $tmp3268 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3267), param3);
panda$core$Panda$unref$panda$core$Object$Q($tmp3267);
*(&local6) = $tmp3268;
goto block36;
block35:;
*(&local6) = $tmp3262;
goto block36;
block36:;
panda$core$Bit $tmp3269 = *(&local6);
bool $tmp3270 = $tmp3269.value;
if ($tmp3270) goto block37; else goto block38;
block37:;
// line 875
panda$io$IndentedOutputStream** $tmp3271 = &param0->out;
panda$io$IndentedOutputStream* $tmp3272 = *$tmp3271;
panda$core$String* $tmp3273 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, param3, $tmp3272);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3273));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3273));
org$pandalanguage$pandac$ClassDecl* $tmp3274 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3274));
// unreffing targetClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3275 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3275));
// unreffing srcClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3273;
block38:;
goto block29;
block29:;
goto block20;
block20:;
goto block14;
block14:;
org$pandalanguage$pandac$ClassDecl* $tmp3276 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3276));
// unreffing targetClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3277 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3277));
// unreffing srcClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block2;
block2:;
// line 878
panda$core$String* $tmp3278 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param2);
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp3279 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3279));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3278));
*(&local8) = $tmp3278;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3278));
// line 879
panda$core$String* $tmp3280 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
*(&local9) = ((panda$core$String*) NULL);
panda$core$String* $tmp3281 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3281));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3280));
*(&local9) = $tmp3280;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3280));
// line 880
panda$core$String* $tmp3282 = *(&local8);
panda$core$String* $tmp3283 = *(&local9);
panda$core$Bit $tmp3284 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp3282, $tmp3283);
bool $tmp3285 = $tmp3284.value;
if ($tmp3285) goto block39; else goto block40;
block39:;
// line 881
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$core$String* $tmp3286 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3286));
// unreffing dstType
*(&local9) = ((panda$core$String*) NULL);
panda$core$String* $tmp3287 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3287));
// unreffing srcType
*(&local8) = ((panda$core$String*) NULL);
return param1;
block40:;
// line 883
panda$core$String* $tmp3288 = *(&local9);
panda$core$String* $tmp3289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3290, $tmp3288);
panda$core$String* $tmp3291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3289, &$s3292);
panda$core$String* $tmp3293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3291, param1);
panda$core$String* $tmp3294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3293, &$s3295);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3294));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3289));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3291));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3293));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3294));
panda$core$String* $tmp3296 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3296));
// unreffing dstType
*(&local9) = ((panda$core$String*) NULL);
panda$core$String* $tmp3297 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3297));
// unreffing srcType
*(&local8) = ((panda$core$String*) NULL);
return $tmp3294;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIntReference$panda$core$UInt64$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$UInt64 param1) {

// line 887
panda$core$Int64 $tmp3298 = (panda$core$Int64) {9223372036854775807};
panda$core$UInt64 $tmp3299 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3298);
uint64_t $tmp3300 = param1.value;
uint64_t $tmp3301 = $tmp3299.value;
bool $tmp3302 = $tmp3300 > $tmp3301;
panda$core$Bit $tmp3303 = (panda$core$Bit) {$tmp3302};
bool $tmp3304 = $tmp3303.value;
if ($tmp3304) goto block1; else goto block2;
block1:;
// line 888
panda$core$UInt64$wrapper* $tmp3305;
$tmp3305 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
$tmp3305->value = param1;
panda$core$String* $tmp3306 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp3305), &$s3307);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3306));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3305));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3306));
return $tmp3306;
block2:;
// line 890
panda$core$String* $tmp3308 = panda$core$UInt64$convert$R$panda$core$String(param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3308));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3308));
return $tmp3308;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$Type$panda$core$Real64$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1, panda$core$Real64 param2) {

panda$core$String* local0 = NULL;
// line 894
panda$core$String* $tmp3309 = panda$core$Real64$convert$R$panda$core$String(param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp3310 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3310));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3309));
*(&local0) = $tmp3309;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3309));
// line 895
panda$core$String* $tmp3311 = *(&local0);
panda$core$Bit $tmp3312 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp3311, &$s3313);
bool $tmp3314 = $tmp3312.value;
if ($tmp3314) goto block1; else goto block2;
block1:;
// line 896
panda$core$String* $tmp3315 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3315));
panda$core$String* $tmp3316 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3316));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3315;
block2:;
// line 898
panda$core$String* $tmp3317 = *(&local0);
panda$core$String* $tmp3318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3317, &$s3319);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3318));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3318));
panda$core$String* $tmp3320 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3320));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3318;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$Bit param1, panda$io$IndentedOutputStream* param2) {

// line 902
bool $tmp3321 = param1.value;
if ($tmp3321) goto block1; else goto block2;
block1:;
// line 903
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3322));
return &$s3323;
block2:;
// line 905
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3324));
return &$s3325;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1) {

panda$core$String* local0 = NULL;
panda$core$Char8 local1;
// line 909
panda$core$Int64* $tmp3326 = &param0->varCount;
panda$core$Int64 $tmp3327 = *$tmp3326;
panda$core$Int64 $tmp3328 = (panda$core$Int64) {1};
int64_t $tmp3329 = $tmp3327.value;
int64_t $tmp3330 = $tmp3328.value;
int64_t $tmp3331 = $tmp3329 + $tmp3330;
panda$core$Int64 $tmp3332 = (panda$core$Int64) {$tmp3331};
panda$core$Int64* $tmp3333 = &param0->varCount;
*$tmp3333 = $tmp3332;
// line 910
panda$core$Int64* $tmp3334 = &param0->varCount;
panda$core$Int64 $tmp3335 = *$tmp3334;
panda$core$Int64$wrapper* $tmp3336;
$tmp3336 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3336->value = $tmp3335;
panda$core$String* $tmp3337 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3338, ((panda$core$Object*) $tmp3336));
panda$core$String* $tmp3339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3337, &$s3340);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp3341 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3341));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3339));
*(&local0) = $tmp3339;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3336));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3337));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3339));
// line 911
org$pandalanguage$pandac$Type* $tmp3342 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp3343 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp3342);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3342));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3343));
// line 912
panda$io$MemoryOutputStream** $tmp3344 = &param0->strings;
panda$io$MemoryOutputStream* $tmp3345 = *$tmp3344;
panda$core$String* $tmp3346 = *(&local0);
panda$core$String* $tmp3347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3348, $tmp3346);
panda$core$String* $tmp3349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3347, &$s3350);
panda$core$Int64 $tmp3351 = (panda$core$Int64) {18446744073709550617};
panda$core$Int64$wrapper* $tmp3352;
$tmp3352 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3352->value = $tmp3351;
panda$core$String* $tmp3353 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3354, ((panda$core$Object*) $tmp3352));
panda$core$String* $tmp3355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3353, &$s3356);
panda$core$String* $tmp3357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3349, $tmp3355);
panda$core$String* $tmp3358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3357, &$s3359);
$fn3361 $tmp3360 = ($fn3361) ((panda$io$OutputStream*) $tmp3345)->$class->vtable[17];
$tmp3360(((panda$io$OutputStream*) $tmp3345), $tmp3358);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3347));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3349));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3352));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3353));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3355));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3357));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3358));
// line 915
panda$collections$ListView* $tmp3362 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(param1);
ITable* $tmp3363 = ((panda$collections$Iterable*) $tmp3362)->$class->itable;
while ($tmp3363->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp3363 = $tmp3363->next;
}
$fn3365 $tmp3364 = $tmp3363->methods[0];
panda$collections$Iterator* $tmp3366 = $tmp3364(((panda$collections$Iterable*) $tmp3362));
goto block1;
block1:;
ITable* $tmp3367 = $tmp3366->$class->itable;
while ($tmp3367->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp3367 = $tmp3367->next;
}
$fn3369 $tmp3368 = $tmp3367->methods[0];
panda$core$Bit $tmp3370 = $tmp3368($tmp3366);
bool $tmp3371 = $tmp3370.value;
if ($tmp3371) goto block3; else goto block2;
block2:;
ITable* $tmp3372 = $tmp3366->$class->itable;
while ($tmp3372->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp3372 = $tmp3372->next;
}
$fn3374 $tmp3373 = $tmp3372->methods[1];
panda$core$Object* $tmp3375 = $tmp3373($tmp3366);
*(&local1) = ((panda$core$Char8$wrapper*) $tmp3375)->value;
// line 916
panda$io$MemoryOutputStream** $tmp3376 = &param0->strings;
panda$io$MemoryOutputStream* $tmp3377 = *$tmp3376;
panda$core$Char8 $tmp3378 = *(&local1);
panda$core$UInt8 $tmp3379 = panda$core$Char8$convert$R$panda$core$UInt8($tmp3378);
panda$core$UInt8$wrapper* $tmp3380;
$tmp3380 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
$tmp3380->value = $tmp3379;
ITable* $tmp3381 = ((panda$core$Formattable*) $tmp3380)->$class->itable;
while ($tmp3381->$class != (panda$core$Class*) &panda$core$Formattable$class) {
    $tmp3381 = $tmp3381->next;
}
$fn3383 $tmp3382 = $tmp3381->methods[0];
panda$core$String* $tmp3384 = $tmp3382(((panda$core$Formattable*) $tmp3380), &$s3385);
panda$core$String* $tmp3386 = panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String($tmp3384, &$s3387);
panda$core$String* $tmp3388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3389, $tmp3386);
panda$core$String* $tmp3390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3388, &$s3391);
$fn3393 $tmp3392 = ($fn3393) ((panda$io$OutputStream*) $tmp3377)->$class->vtable[17];
$tmp3392(((panda$io$OutputStream*) $tmp3377), $tmp3390);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Formattable*) $tmp3380)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3384));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3386));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3388));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3390));
panda$core$Panda$unref$panda$core$Object$Q($tmp3375);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3362));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3366));
// line 918
panda$io$MemoryOutputStream** $tmp3394 = &param0->strings;
panda$io$MemoryOutputStream* $tmp3395 = *$tmp3394;
panda$collections$ListView* $tmp3396 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(param1);
ITable* $tmp3397 = ((panda$collections$CollectionView*) $tmp3396)->$class->itable;
while ($tmp3397->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp3397 = $tmp3397->next;
}
$fn3399 $tmp3398 = $tmp3397->methods[0];
panda$core$Int64 $tmp3400 = $tmp3398(((panda$collections$CollectionView*) $tmp3396));
panda$core$Int64$wrapper* $tmp3401;
$tmp3401 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3401->value = $tmp3400;
panda$core$String* $tmp3402 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3403, ((panda$core$Object*) $tmp3401));
panda$core$String* $tmp3404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3402, &$s3405);
ITable* $tmp3406 = ((panda$collections$Key*) param1)->$class->itable;
while ($tmp3406->$class != (panda$core$Class*) &panda$collections$Key$class) {
    $tmp3406 = $tmp3406->next;
}
$fn3408 $tmp3407 = $tmp3406->methods[0];
panda$core$Int64 $tmp3409 = $tmp3407(((panda$collections$Key*) param1));
panda$core$Int64$wrapper* $tmp3410;
$tmp3410 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3410->value = $tmp3409;
panda$core$String* $tmp3411 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3404, ((panda$core$Object*) $tmp3410));
panda$core$String* $tmp3412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3411, &$s3413);
$fn3415 $tmp3414 = ($fn3415) ((panda$io$OutputStream*) $tmp3395)->$class->vtable[19];
$tmp3414(((panda$io$OutputStream*) $tmp3395), $tmp3412);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3396));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3401));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3402));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3404));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3410));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3411));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3412));
// line 919
panda$core$String* $tmp3416 = *(&local0);
panda$core$String* $tmp3417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3418, $tmp3416);
panda$core$String* $tmp3419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3417, &$s3420);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3419));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3417));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3419));
panda$core$String* $tmp3421 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3421));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3419;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
// line 923
org$pandalanguage$pandac$Type$Kind* $tmp3422 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3423 = *$tmp3422;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3424;
$tmp3424 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3424->value = $tmp3423;
panda$core$Int64 $tmp3425 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3426 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3425);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3427;
$tmp3427 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3427->value = $tmp3426;
ITable* $tmp3428 = ((panda$core$Equatable*) $tmp3424)->$class->itable;
while ($tmp3428->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3428 = $tmp3428->next;
}
$fn3430 $tmp3429 = $tmp3428->methods[0];
panda$core$Bit $tmp3431 = $tmp3429(((panda$core$Equatable*) $tmp3424), ((panda$core$Equatable*) $tmp3427));
bool $tmp3432 = $tmp3431.value;
if ($tmp3432) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp3433 = (panda$core$Int64) {923};
panda$core$String* $tmp3434 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3435, ((panda$core$Object*) param1));
panda$core$String* $tmp3436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3434, &$s3437);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3438, $tmp3433, $tmp3436);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3434));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3436));
abort(); // unreachable
block1:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3424)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3427)));
// line 924
panda$core$Weak** $tmp3439 = &param0->compiler;
panda$core$Weak* $tmp3440 = *$tmp3439;
panda$core$Object* $tmp3441 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3440);
panda$core$Panda$unref$panda$core$Object$Q($tmp3441);
panda$collections$ImmutableArray** $tmp3442 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp3443 = *$tmp3442;
panda$core$Int64 $tmp3444 = (panda$core$Int64) {0};
panda$core$Object* $tmp3445 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp3443, $tmp3444);
org$pandalanguage$pandac$ClassDecl* $tmp3446 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3441), ((org$pandalanguage$pandac$Type*) $tmp3445));
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3447 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3447));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3446));
*(&local0) = $tmp3446;
panda$core$Panda$unref$panda$core$Object$Q($tmp3445);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3446));
// line 925
org$pandalanguage$pandac$ClassDecl* $tmp3448 = *(&local0);
panda$core$Bit $tmp3449 = panda$core$Bit$init$builtin_bit($tmp3448 != NULL);
bool $tmp3450 = $tmp3449.value;
if ($tmp3450) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp3451 = (panda$core$Int64) {925};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3452, $tmp3451);
abort(); // unreachable
block3:;
// line 926
panda$core$Weak** $tmp3453 = &param0->compiler;
panda$core$Weak* $tmp3454 = *$tmp3453;
panda$core$Object* $tmp3455 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3454);
panda$core$Panda$unref$panda$core$Object$Q($tmp3455);
org$pandalanguage$pandac$ClassDecl* $tmp3456 = *(&local0);
panda$core$Bit $tmp3457 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3455), $tmp3456);
bool $tmp3458 = $tmp3457.value;
if ($tmp3458) goto block5; else goto block7;
block5:;
// line 927
panda$core$String* $tmp3459 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param1);
panda$core$String* $tmp3460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3461, $tmp3459);
panda$core$String* $tmp3462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3460, &$s3463);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3462));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3459));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3460));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3462));
org$pandalanguage$pandac$ClassDecl* $tmp3464 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3464));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3462;
block7:;
// line 1
// line 930
panda$core$String* $tmp3465 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param1);
panda$core$String* $tmp3466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3467, $tmp3465);
panda$core$String* $tmp3468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3466, &$s3469);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3468));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3465));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3466));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3468));
org$pandalanguage$pandac$ClassDecl* $tmp3470 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3470));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3468;
block6:;
panda$core$Bit $tmp3471 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3472 = $tmp3471.value;
if ($tmp3472) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp3473 = (panda$core$Int64) {922};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3474, $tmp3473, &$s3475);
abort(); // unreachable
block8:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1) {

panda$core$Bit local0;
panda$core$UInt64 local1;
panda$core$Int64 local2;
org$pandalanguage$pandac$MethodDecl* local3 = NULL;
org$pandalanguage$pandac$Type* local4 = NULL;
panda$core$Int64 local5;
panda$core$Real64 local6;
org$pandalanguage$pandac$Type* local7 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local8;
panda$core$String* local9 = NULL;
// line 935
panda$core$Int64* $tmp3476 = &param1->$rawValue;
panda$core$Int64 $tmp3477 = *$tmp3476;
panda$core$Int64 $tmp3478 = (panda$core$Int64) {0};
panda$core$Bit $tmp3479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3477, $tmp3478);
bool $tmp3480 = $tmp3479.value;
if ($tmp3480) goto block2; else goto block3;
block2:;
panda$core$Bit* $tmp3481 = (panda$core$Bit*) (param1->$data + 0);
panda$core$Bit $tmp3482 = *$tmp3481;
*(&local0) = $tmp3482;
// line 937
panda$core$Bit $tmp3483 = *(&local0);
panda$core$String* $tmp3484 = panda$core$Bit$convert$R$panda$core$String($tmp3483);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3484));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3484));
return $tmp3484;
block3:;
panda$core$Int64 $tmp3485 = (panda$core$Int64) {1};
panda$core$Bit $tmp3486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3477, $tmp3485);
bool $tmp3487 = $tmp3486.value;
if ($tmp3487) goto block4; else goto block5;
block4:;
panda$core$UInt64* $tmp3488 = (panda$core$UInt64*) (param1->$data + 0);
panda$core$UInt64 $tmp3489 = *$tmp3488;
*(&local1) = $tmp3489;
org$pandalanguage$pandac$Type** $tmp3490 = (org$pandalanguage$pandac$Type**) (param1->$data + 8);
org$pandalanguage$pandac$Type* $tmp3491 = *$tmp3490;
// line 939
panda$core$UInt64 $tmp3492 = *(&local1);
panda$core$String* $tmp3493 = panda$core$UInt64$convert$R$panda$core$String($tmp3492);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3493));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3493));
return $tmp3493;
block5:;
panda$core$Int64 $tmp3494 = (panda$core$Int64) {2};
panda$core$Bit $tmp3495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3477, $tmp3494);
bool $tmp3496 = $tmp3495.value;
if ($tmp3496) goto block6; else goto block7;
block6:;
panda$core$Int64* $tmp3497 = (panda$core$Int64*) (param1->$data + 0);
panda$core$Int64 $tmp3498 = *$tmp3497;
*(&local2) = $tmp3498;
org$pandalanguage$pandac$Type** $tmp3499 = (org$pandalanguage$pandac$Type**) (param1->$data + 8);
org$pandalanguage$pandac$Type* $tmp3500 = *$tmp3499;
// line 941
panda$core$Int64 $tmp3501 = *(&local2);
panda$core$Int64$wrapper* $tmp3502;
$tmp3502 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3502->value = $tmp3501;
panda$core$String* $tmp3503 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3504, ((panda$core$Object*) $tmp3502));
panda$core$String* $tmp3505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3503, &$s3506);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3505));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3502));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3503));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3505));
return $tmp3505;
block7:;
panda$core$Int64 $tmp3507 = (panda$core$Int64) {3};
panda$core$Bit $tmp3508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3477, $tmp3507);
bool $tmp3509 = $tmp3508.value;
if ($tmp3509) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$MethodDecl** $tmp3510 = (org$pandalanguage$pandac$MethodDecl**) (param1->$data + 0);
org$pandalanguage$pandac$MethodDecl* $tmp3511 = *$tmp3510;
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp3512 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3512));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3511));
*(&local3) = $tmp3511;
org$pandalanguage$pandac$Type** $tmp3513 = (org$pandalanguage$pandac$Type**) (param1->$data + 8);
org$pandalanguage$pandac$Type* $tmp3514 = *$tmp3513;
// line 943
org$pandalanguage$pandac$MethodDecl* $tmp3515 = *(&local3);
panda$core$Weak** $tmp3516 = &$tmp3515->owner;
panda$core$Weak* $tmp3517 = *$tmp3516;
panda$core$Object* $tmp3518 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3517);
panda$core$Panda$unref$panda$core$Object$Q($tmp3518);
panda$core$Bit* $tmp3519 = &((org$pandalanguage$pandac$ClassDecl*) $tmp3518)->external;
panda$core$Bit $tmp3520 = *$tmp3519;
bool $tmp3521 = $tmp3520.value;
if ($tmp3521) goto block10; else goto block11;
block10:;
// line 944
org$pandalanguage$pandac$MethodDecl* $tmp3522 = *(&local3);
org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(param0, $tmp3522);
goto block11;
block11:;
// line 946
org$pandalanguage$pandac$MethodDecl* $tmp3523 = *(&local3);
panda$core$String* $tmp3524 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, $tmp3523);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3524));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3524));
org$pandalanguage$pandac$MethodDecl* $tmp3525 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3525));
// unreffing m
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
return $tmp3524;
block9:;
panda$core$Int64 $tmp3526 = (panda$core$Int64) {4};
panda$core$Bit $tmp3527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3477, $tmp3526);
bool $tmp3528 = $tmp3527.value;
if ($tmp3528) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Type** $tmp3529 = (org$pandalanguage$pandac$Type**) (param1->$data + 0);
org$pandalanguage$pandac$Type* $tmp3530 = *$tmp3529;
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp3531 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3531));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3530));
*(&local4) = $tmp3530;
// line 948
org$pandalanguage$pandac$Type* $tmp3532 = *(&local4);
panda$core$String* $tmp3533 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp3532);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3533));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3533));
org$pandalanguage$pandac$Type* $tmp3534 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3534));
// unreffing type
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp3533;
block13:;
panda$core$Int64 $tmp3535 = (panda$core$Int64) {5};
panda$core$Bit $tmp3536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3477, $tmp3535);
bool $tmp3537 = $tmp3536.value;
if ($tmp3537) goto block14; else goto block15;
block14:;
panda$core$Int64* $tmp3538 = (panda$core$Int64*) (param1->$data + 0);
panda$core$Int64 $tmp3539 = *$tmp3538;
*(&local5) = $tmp3539;
org$pandalanguage$pandac$Type** $tmp3540 = (org$pandalanguage$pandac$Type**) (param1->$data + 8);
org$pandalanguage$pandac$Type* $tmp3541 = *$tmp3540;
// line 950
panda$core$Int64 $tmp3542 = *(&local5);
panda$core$Int64$wrapper* $tmp3543;
$tmp3543 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3543->value = $tmp3542;
panda$core$String* $tmp3544 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3545, ((panda$core$Object*) $tmp3543));
panda$core$String* $tmp3546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3544, &$s3547);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3546));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3543));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3544));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3546));
return $tmp3546;
block15:;
panda$core$Int64 $tmp3548 = (panda$core$Int64) {6};
panda$core$Bit $tmp3549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3477, $tmp3548);
bool $tmp3550 = $tmp3549.value;
if ($tmp3550) goto block16; else goto block17;
block16:;
panda$core$Real64* $tmp3551 = (panda$core$Real64*) (param1->$data + 0);
panda$core$Real64 $tmp3552 = *$tmp3551;
*(&local6) = $tmp3552;
org$pandalanguage$pandac$Type** $tmp3553 = (org$pandalanguage$pandac$Type**) (param1->$data + 8);
org$pandalanguage$pandac$Type* $tmp3554 = *$tmp3553;
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp3555 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3555));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3554));
*(&local7) = $tmp3554;
// line 952
org$pandalanguage$pandac$Type* $tmp3556 = *(&local7);
panda$core$Real64 $tmp3557 = *(&local6);
panda$core$String* $tmp3558 = org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$Type$panda$core$Real64$R$panda$core$String(param0, $tmp3556, $tmp3557);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3558));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3558));
org$pandalanguage$pandac$Type* $tmp3559 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3559));
// unreffing type
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp3558;
block17:;
panda$core$Int64 $tmp3560 = (panda$core$Int64) {7};
panda$core$Bit $tmp3561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3477, $tmp3560);
bool $tmp3562 = $tmp3561.value;
if ($tmp3562) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$IR$Statement$ID* $tmp3563 = (org$pandalanguage$pandac$IR$Statement$ID*) (param1->$data + 0);
org$pandalanguage$pandac$IR$Statement$ID $tmp3564 = *$tmp3563;
*(&local8) = $tmp3564;
org$pandalanguage$pandac$Type** $tmp3565 = (org$pandalanguage$pandac$Type**) (param1->$data + 8);
org$pandalanguage$pandac$Type* $tmp3566 = *$tmp3565;
// line 955
panda$collections$HashMap** $tmp3567 = &param0->refs;
panda$collections$HashMap* $tmp3568 = *$tmp3567;
org$pandalanguage$pandac$IR$Statement$ID $tmp3569 = *(&local8);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp3570;
$tmp3570 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp3570->value = $tmp3569;
panda$core$Object* $tmp3571 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp3568, ((panda$collections$Key*) $tmp3570));
panda$core$Bit $tmp3572 = panda$core$Bit$init$builtin_bit(((panda$core$String*) $tmp3571) == NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp3570)));
panda$core$Panda$unref$panda$core$Object$Q($tmp3571);
bool $tmp3573 = $tmp3572.value;
if ($tmp3573) goto block20; else goto block21;
block20:;
// line 956
org$pandalanguage$pandac$IR$Statement$ID $tmp3574 = *(&local8);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp3575;
$tmp3575 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp3575->value = $tmp3574;
panda$core$String* $tmp3576 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3577, ((panda$core$Object*) $tmp3575));
panda$core$String* $tmp3578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3576, &$s3579);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3578));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3575));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3576));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3578));
return $tmp3578;
block21:;
// line 958
panda$collections$HashMap** $tmp3580 = &param0->refs;
panda$collections$HashMap* $tmp3581 = *$tmp3580;
org$pandalanguage$pandac$IR$Statement$ID $tmp3582 = *(&local8);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp3583;
$tmp3583 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp3583->value = $tmp3582;
panda$core$Object* $tmp3584 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp3581, ((panda$collections$Key*) $tmp3583));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp3584)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp3583)));
panda$core$Panda$unref$panda$core$Object$Q($tmp3584);
return ((panda$core$String*) $tmp3584);
block19:;
panda$core$Int64 $tmp3585 = (panda$core$Int64) {8};
panda$core$Bit $tmp3586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3477, $tmp3585);
bool $tmp3587 = $tmp3586.value;
if ($tmp3587) goto block22; else goto block23;
block22:;
panda$core$String** $tmp3588 = (panda$core$String**) (param1->$data + 0);
panda$core$String* $tmp3589 = *$tmp3588;
*(&local9) = ((panda$core$String*) NULL);
panda$core$String* $tmp3590 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3590));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3589));
*(&local9) = $tmp3589;
// line 960
panda$core$String* $tmp3591 = *(&local9);
panda$core$String* $tmp3592 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(param0, $tmp3591);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3592));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3592));
panda$core$String* $tmp3593 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3593));
// unreffing s
*(&local9) = ((panda$core$String*) NULL);
return $tmp3592;
block23:;
// line 962
panda$core$Bit $tmp3594 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3595 = $tmp3594.value;
if ($tmp3595) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp3596 = (panda$core$Int64) {962};
panda$core$String* $tmp3597 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3598, ((panda$core$Object*) param1));
panda$core$String* $tmp3599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3597, &$s3600);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3601, $tmp3596, $tmp3599);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3597));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3599));
abort(); // unreachable
block24:;
goto block1;
block1:;
panda$core$Bit $tmp3602 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3603 = $tmp3602.value;
if ($tmp3603) goto block26; else goto block27;
block27:;
panda$core$Int64 $tmp3604 = (panda$core$Int64) {934};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3605, $tmp3604, &$s3606);
abort(); // unreachable
block26:;
abort(); // unreachable

}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldOffset$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ChoiceCase* param1, panda$core$Int64 param2) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 967
panda$core$Int64 $tmp3607 = (panda$core$Int64) {0};
*(&local0) = $tmp3607;
// line 968
panda$core$Int64 $tmp3608 = (panda$core$Int64) {0};
panda$core$Bit $tmp3609 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp3610 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp3608, param2, $tmp3609);
panda$core$Int64 $tmp3611 = $tmp3610.min;
*(&local1) = $tmp3611;
panda$core$Int64 $tmp3612 = $tmp3610.max;
panda$core$Bit $tmp3613 = $tmp3610.inclusive;
bool $tmp3614 = $tmp3613.value;
panda$core$Int64 $tmp3615 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp3616 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3615);
if ($tmp3614) goto block4; else goto block5;
block4:;
int64_t $tmp3617 = $tmp3611.value;
int64_t $tmp3618 = $tmp3612.value;
bool $tmp3619 = $tmp3617 <= $tmp3618;
panda$core$Bit $tmp3620 = (panda$core$Bit) {$tmp3619};
bool $tmp3621 = $tmp3620.value;
if ($tmp3621) goto block1; else goto block2;
block5:;
int64_t $tmp3622 = $tmp3611.value;
int64_t $tmp3623 = $tmp3612.value;
bool $tmp3624 = $tmp3622 < $tmp3623;
panda$core$Bit $tmp3625 = (panda$core$Bit) {$tmp3624};
bool $tmp3626 = $tmp3625.value;
if ($tmp3626) goto block1; else goto block2;
block1:;
// line 970
panda$core$Int64 $tmp3627 = *(&local0);
panda$collections$Array** $tmp3628 = &param1->fields;
panda$collections$Array* $tmp3629 = *$tmp3628;
panda$core$Int64 $tmp3630 = *(&local1);
panda$core$Object* $tmp3631 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp3629, $tmp3630);
panda$core$Int64 $tmp3632 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, ((org$pandalanguage$pandac$Type*) $tmp3631));
int64_t $tmp3633 = $tmp3627.value;
int64_t $tmp3634 = $tmp3632.value;
int64_t $tmp3635 = $tmp3633 + $tmp3634;
panda$core$Int64 $tmp3636 = (panda$core$Int64) {$tmp3635};
*(&local0) = $tmp3636;
panda$core$Panda$unref$panda$core$Object$Q($tmp3631);
goto block3;
block3:;
panda$core$Int64 $tmp3637 = *(&local1);
int64_t $tmp3638 = $tmp3612.value;
int64_t $tmp3639 = $tmp3637.value;
int64_t $tmp3640 = $tmp3638 - $tmp3639;
panda$core$Int64 $tmp3641 = (panda$core$Int64) {$tmp3640};
panda$core$UInt64 $tmp3642 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3641);
if ($tmp3614) goto block7; else goto block8;
block7:;
uint64_t $tmp3643 = $tmp3642.value;
uint64_t $tmp3644 = $tmp3616.value;
bool $tmp3645 = $tmp3643 >= $tmp3644;
panda$core$Bit $tmp3646 = (panda$core$Bit) {$tmp3645};
bool $tmp3647 = $tmp3646.value;
if ($tmp3647) goto block6; else goto block2;
block8:;
uint64_t $tmp3648 = $tmp3642.value;
uint64_t $tmp3649 = $tmp3616.value;
bool $tmp3650 = $tmp3648 > $tmp3649;
panda$core$Bit $tmp3651 = (panda$core$Bit) {$tmp3650};
bool $tmp3652 = $tmp3651.value;
if ($tmp3652) goto block6; else goto block2;
block6:;
int64_t $tmp3653 = $tmp3637.value;
int64_t $tmp3654 = $tmp3615.value;
int64_t $tmp3655 = $tmp3653 + $tmp3654;
panda$core$Int64 $tmp3656 = (panda$core$Int64) {$tmp3655};
*(&local1) = $tmp3656;
goto block1;
block2:;
// line 972
panda$core$Int64 $tmp3657 = *(&local0);
return $tmp3657;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$String* local0 = NULL;
panda$core$Bit local1;
// line 976
panda$core$Weak** $tmp3658 = &param1->owner;
panda$core$Weak* $tmp3659 = *$tmp3658;
panda$core$Object* $tmp3660 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3659);
panda$core$Panda$unref$panda$core$Object$Q($tmp3660);
org$pandalanguage$pandac$Type** $tmp3661 = &((org$pandalanguage$pandac$ClassDecl*) $tmp3660)->type;
org$pandalanguage$pandac$Type* $tmp3662 = *$tmp3661;
panda$core$String* $tmp3663 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp3662);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp3664 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3664));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3663));
*(&local0) = $tmp3663;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3663));
// line 977
org$pandalanguage$pandac$MethodDecl$Kind* $tmp3665 = &param1->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp3666 = *$tmp3665;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp3667;
$tmp3667 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp3667->value = $tmp3666;
panda$core$Int64 $tmp3668 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp3669 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp3668);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp3670;
$tmp3670 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp3670->value = $tmp3669;
ITable* $tmp3671 = ((panda$core$Equatable*) $tmp3667)->$class->itable;
while ($tmp3671->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3671 = $tmp3671->next;
}
$fn3673 $tmp3672 = $tmp3671->methods[0];
panda$core$Bit $tmp3674 = $tmp3672(((panda$core$Equatable*) $tmp3667), ((panda$core$Equatable*) $tmp3670));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3667)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3670)));
bool $tmp3675 = $tmp3674.value;
if ($tmp3675) goto block1; else goto block2;
block1:;
panda$core$String* $tmp3676 = *(&local0);
panda$core$Bit $tmp3677 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp3676, &$s3678);
panda$core$Bit $tmp3679 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3677);
*(&local1) = $tmp3679;
goto block3;
block2:;
*(&local1) = $tmp3674;
goto block3;
block3:;
panda$core$Bit $tmp3680 = *(&local1);
bool $tmp3681 = $tmp3680.value;
if ($tmp3681) goto block4; else goto block5;
block4:;
// line 978
panda$core$String* $tmp3682 = *(&local0);
panda$core$String* $tmp3683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3682, &$s3684);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3683));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3683));
panda$core$String* $tmp3685 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3685));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3683;
block5:;
// line 980
panda$core$String* $tmp3686 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3686));
panda$core$String* $tmp3687 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3687));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3686;

}
void org$pandalanguage$pandac$CCodeGenerator$writeIsNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$ClassDecl* local1 = NULL;
panda$core$String* local2 = NULL;
// line 984
panda$core$String* $tmp3688 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp3689 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3689));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3688));
*(&local0) = $tmp3688;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3688));
// line 985
panda$core$Weak** $tmp3690 = &param0->compiler;
panda$core$Weak* $tmp3691 = *$tmp3690;
panda$core$Object* $tmp3692 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3691);
panda$core$Panda$unref$panda$core$Object$Q($tmp3692);
$fn3694 $tmp3693 = ($fn3694) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3695 = $tmp3693(param2);
org$pandalanguage$pandac$ClassDecl* $tmp3696 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3692), $tmp3695);
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3697 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3697));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3696));
*(&local1) = $tmp3696;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3695));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3696));
// line 986
org$pandalanguage$pandac$ClassDecl* $tmp3698 = *(&local1);
panda$core$Bit $tmp3699 = panda$core$Bit$init$builtin_bit($tmp3698 != NULL);
bool $tmp3700 = $tmp3699.value;
if ($tmp3700) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp3701 = (panda$core$Int64) {986};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3702, $tmp3701);
abort(); // unreachable
block1:;
// line 987
*(&local2) = ((panda$core$String*) NULL);
// line 988
panda$core$Weak** $tmp3703 = &param0->compiler;
panda$core$Weak* $tmp3704 = *$tmp3703;
panda$core$Object* $tmp3705 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3704);
panda$core$Panda$unref$panda$core$Object$Q($tmp3705);
org$pandalanguage$pandac$ClassDecl* $tmp3706 = *(&local1);
panda$core$Bit $tmp3707 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3705), $tmp3706);
bool $tmp3708 = $tmp3707.value;
if ($tmp3708) goto block3; else goto block5;
block3:;
// line 989
$fn3710 $tmp3709 = ($fn3710) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3711 = $tmp3709(param2);
org$pandalanguage$pandac$Type$Kind* $tmp3712 = &$tmp3711->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3713 = *$tmp3712;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3714;
$tmp3714 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3714->value = $tmp3713;
panda$core$Int64 $tmp3715 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3716 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3715);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3717;
$tmp3717 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3717->value = $tmp3716;
ITable* $tmp3718 = ((panda$core$Equatable*) $tmp3714)->$class->itable;
while ($tmp3718->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3718 = $tmp3718->next;
}
$fn3720 $tmp3719 = $tmp3718->methods[1];
panda$core$Bit $tmp3721 = $tmp3719(((panda$core$Equatable*) $tmp3714), ((panda$core$Equatable*) $tmp3717));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3711));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3714)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3717)));
bool $tmp3722 = $tmp3721.value;
if ($tmp3722) goto block6; else goto block8;
block6:;
// line 990
panda$core$String* $tmp3723 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3723));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3724));
*(&local2) = &$s3725;
goto block7;
block8:;
// line 1
// line 993
panda$core$String* $tmp3726 = *(&local0);
panda$core$String* $tmp3727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3728, $tmp3726);
panda$core$String* $tmp3729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3727, &$s3730);
panda$core$String* $tmp3731 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3731));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3729));
*(&local2) = $tmp3729;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3727));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3729));
goto block7;
block7:;
goto block4;
block5:;
// line 1
// line 997
panda$core$String* $tmp3732 = *(&local0);
panda$core$String* $tmp3733 = panda$core$String$convert$R$panda$core$String($tmp3732);
panda$core$String* $tmp3734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3733, &$s3735);
panda$core$String* $tmp3736 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3736));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3734));
*(&local2) = $tmp3734;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3733));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3734));
goto block4;
block4:;
// line 999
panda$collections$HashMap** $tmp3737 = &param0->refs;
panda$collections$HashMap* $tmp3738 = *$tmp3737;
panda$core$String* $tmp3739 = *(&local2);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp3740;
$tmp3740 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp3740->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp3738, ((panda$collections$Key*) $tmp3740), ((panda$core$Object*) $tmp3739));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp3740)));
panda$core$String* $tmp3741 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3741));
// unreffing bit
*(&local2) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3742 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3742));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$String* $tmp3743 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3743));
// unreffing ref
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeIsNonNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$ClassDecl* local1 = NULL;
panda$core$String* local2 = NULL;
// line 1003
panda$core$String* $tmp3744 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp3745 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3745));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3744));
*(&local0) = $tmp3744;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3744));
// line 1004
panda$core$Weak** $tmp3746 = &param0->compiler;
panda$core$Weak* $tmp3747 = *$tmp3746;
panda$core$Object* $tmp3748 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3747);
panda$core$Panda$unref$panda$core$Object$Q($tmp3748);
$fn3750 $tmp3749 = ($fn3750) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3751 = $tmp3749(param2);
org$pandalanguage$pandac$ClassDecl* $tmp3752 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3748), $tmp3751);
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3753 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3753));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3752));
*(&local1) = $tmp3752;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3751));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3752));
// line 1005
org$pandalanguage$pandac$ClassDecl* $tmp3754 = *(&local1);
panda$core$Bit $tmp3755 = panda$core$Bit$init$builtin_bit($tmp3754 != NULL);
bool $tmp3756 = $tmp3755.value;
if ($tmp3756) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp3757 = (panda$core$Int64) {1005};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3758, $tmp3757);
abort(); // unreachable
block1:;
// line 1006
*(&local2) = ((panda$core$String*) NULL);
// line 1007
panda$core$Weak** $tmp3759 = &param0->compiler;
panda$core$Weak* $tmp3760 = *$tmp3759;
panda$core$Object* $tmp3761 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3760);
panda$core$Panda$unref$panda$core$Object$Q($tmp3761);
org$pandalanguage$pandac$ClassDecl* $tmp3762 = *(&local1);
panda$core$Bit $tmp3763 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3761), $tmp3762);
bool $tmp3764 = $tmp3763.value;
if ($tmp3764) goto block3; else goto block5;
block3:;
// line 1008
$fn3766 $tmp3765 = ($fn3766) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3767 = $tmp3765(param2);
org$pandalanguage$pandac$Type$Kind* $tmp3768 = &$tmp3767->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3769 = *$tmp3768;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3770;
$tmp3770 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3770->value = $tmp3769;
panda$core$Int64 $tmp3771 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3772 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3771);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3773;
$tmp3773 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3773->value = $tmp3772;
ITable* $tmp3774 = ((panda$core$Equatable*) $tmp3770)->$class->itable;
while ($tmp3774->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3774 = $tmp3774->next;
}
$fn3776 $tmp3775 = $tmp3774->methods[1];
panda$core$Bit $tmp3777 = $tmp3775(((panda$core$Equatable*) $tmp3770), ((panda$core$Equatable*) $tmp3773));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3767));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3770)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3773)));
bool $tmp3778 = $tmp3777.value;
if ($tmp3778) goto block6; else goto block8;
block6:;
// line 1009
panda$core$String* $tmp3779 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3779));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3780));
*(&local2) = &$s3781;
goto block7;
block8:;
// line 1
// line 1012
panda$core$String* $tmp3782 = *(&local0);
panda$core$String* $tmp3783 = panda$core$String$convert$R$panda$core$String($tmp3782);
panda$core$String* $tmp3784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3783, &$s3785);
panda$core$String* $tmp3786 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3786));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3784));
*(&local2) = $tmp3784;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3783));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3784));
goto block7;
block7:;
goto block4;
block5:;
// line 1
// line 1016
panda$core$String* $tmp3787 = *(&local0);
panda$core$String* $tmp3788 = panda$core$String$convert$R$panda$core$String($tmp3787);
panda$core$String* $tmp3789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3788, &$s3790);
panda$core$String* $tmp3791 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3791));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3789));
*(&local2) = $tmp3789;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3788));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3789));
goto block4;
block4:;
// line 1018
panda$collections$HashMap** $tmp3792 = &param0->refs;
panda$collections$HashMap* $tmp3793 = *$tmp3792;
panda$core$String* $tmp3794 = *(&local2);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp3795;
$tmp3795 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp3795->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp3793, ((panda$collections$Key*) $tmp3795), ((panda$core$Object*) $tmp3794));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp3795)));
panda$core$String* $tmp3796 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3796));
// unreffing bit
*(&local2) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3797 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3797));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$String* $tmp3798 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3798));
// unreffing ref
*(&local0) = ((panda$core$String*) NULL);
return;

}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$isNull$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1) {

// line 1022
panda$core$Int64* $tmp3799 = &param1->$rawValue;
panda$core$Int64 $tmp3800 = *$tmp3799;
panda$core$Int64 $tmp3801 = (panda$core$Int64) {4};
panda$core$Bit $tmp3802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3800, $tmp3801);
bool $tmp3803 = $tmp3802.value;
if ($tmp3803) goto block2; else goto block1;
block2:;
// line 1024
panda$core$Bit $tmp3804 = panda$core$Bit$init$builtin_bit(true);
return $tmp3804;
block1:;
// line 1026
panda$core$Bit $tmp3805 = panda$core$Bit$init$builtin_bit(false);
return $tmp3805;

}
void org$pandalanguage$pandac$CCodeGenerator$writeBinary$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$parser$Token$Kind param3, org$pandalanguage$pandac$IR$Value* param4, org$pandalanguage$pandac$Type* param5) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
// line 1031
panda$core$String* $tmp3806 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp3807 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3807));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3806));
*(&local0) = $tmp3806;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3806));
// line 1032
panda$core$String* $tmp3808 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param4);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3809 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3809));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3808));
*(&local1) = $tmp3808;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3808));
// line 1033
$fn3811 $tmp3810 = ($fn3811) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3812 = $tmp3810(param2);
panda$core$Bit $tmp3813 = org$pandalanguage$pandac$Type$get_isNullable$R$panda$core$Bit($tmp3812);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3812));
bool $tmp3814 = $tmp3813.value;
if ($tmp3814) goto block1; else goto block2;
block1:;
// line 1034
panda$core$Int64 $tmp3815 = param3.$rawValue;
panda$core$Int64 $tmp3816 = (panda$core$Int64) {61};
panda$core$Bit $tmp3817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3815, $tmp3816);
bool $tmp3818 = $tmp3817.value;
if ($tmp3818) goto block4; else goto block5;
block4:;
// line 1036
panda$core$Bit $tmp3819 = org$pandalanguage$pandac$CCodeGenerator$isNull$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(param0, param2);
bool $tmp3820 = $tmp3819.value;
if ($tmp3820) goto block6; else goto block7;
block6:;
// line 1037
org$pandalanguage$pandac$CCodeGenerator$writeIsNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, param4);
// line 1038
panda$core$String* $tmp3821 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3821));
// unreffing rightRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3822 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3822));
// unreffing leftRef
*(&local0) = ((panda$core$String*) NULL);
return;
block7:;
// line 1040
panda$core$Bit $tmp3823 = org$pandalanguage$pandac$CCodeGenerator$isNull$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(param0, param4);
bool $tmp3824 = $tmp3823.value;
if ($tmp3824) goto block8; else goto block9;
block8:;
// line 1041
org$pandalanguage$pandac$CCodeGenerator$writeIsNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, param2);
// line 1042
panda$core$String* $tmp3825 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3825));
// unreffing rightRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3826 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3826));
// unreffing leftRef
*(&local0) = ((panda$core$String*) NULL);
return;
block9:;
goto block3;
block5:;
panda$core$Int64 $tmp3827 = (panda$core$Int64) {62};
panda$core$Bit $tmp3828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3815, $tmp3827);
bool $tmp3829 = $tmp3828.value;
if ($tmp3829) goto block10; else goto block3;
block10:;
// line 1045
panda$core$Bit $tmp3830 = org$pandalanguage$pandac$CCodeGenerator$isNull$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(param0, param2);
bool $tmp3831 = $tmp3830.value;
if ($tmp3831) goto block11; else goto block12;
block11:;
// line 1046
org$pandalanguage$pandac$CCodeGenerator$writeIsNonNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, param4);
// line 1047
panda$core$String* $tmp3832 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3832));
// unreffing rightRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3833 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3833));
// unreffing leftRef
*(&local0) = ((panda$core$String*) NULL);
return;
block12:;
// line 1049
panda$core$Bit $tmp3834 = org$pandalanguage$pandac$CCodeGenerator$isNull$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(param0, param4);
bool $tmp3835 = $tmp3834.value;
if ($tmp3835) goto block13; else goto block14;
block13:;
// line 1050
org$pandalanguage$pandac$CCodeGenerator$writeIsNonNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, param2);
// line 1051
panda$core$String* $tmp3836 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3836));
// unreffing rightRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3837 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3837));
// unreffing leftRef
*(&local0) = ((panda$core$String*) NULL);
return;
block14:;
goto block3;
block3:;
goto block2;
block2:;
// line 1055
*(&local2) = ((panda$core$String*) NULL);
// line 1056
panda$core$Int64 $tmp3838 = param3.$rawValue;
panda$core$Int64 $tmp3839 = (panda$core$Int64) {52};
panda$core$Bit $tmp3840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3838, $tmp3839);
bool $tmp3841 = $tmp3840.value;
if ($tmp3841) goto block16; else goto block17;
block16:;
// line 1058
panda$core$String* $tmp3842 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3842));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3843));
*(&local2) = &$s3844;
goto block15;
block17:;
panda$core$Int64 $tmp3845 = (panda$core$Int64) {53};
panda$core$Bit $tmp3846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3838, $tmp3845);
bool $tmp3847 = $tmp3846.value;
if ($tmp3847) goto block18; else goto block19;
block18:;
// line 1060
panda$core$String* $tmp3848 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3848));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3849));
*(&local2) = &$s3850;
goto block15;
block19:;
panda$core$Int64 $tmp3851 = (panda$core$Int64) {54};
panda$core$Bit $tmp3852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3838, $tmp3851);
bool $tmp3853 = $tmp3852.value;
if ($tmp3853) goto block20; else goto block21;
block20:;
// line 1062
panda$core$String* $tmp3854 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3854));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3855));
*(&local2) = &$s3856;
goto block15;
block21:;
panda$core$Int64 $tmp3857 = (panda$core$Int64) {55};
panda$core$Bit $tmp3858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3838, $tmp3857);
bool $tmp3859 = $tmp3858.value;
if ($tmp3859) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp3860 = (panda$core$Int64) {56};
panda$core$Bit $tmp3861 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3838, $tmp3860);
bool $tmp3862 = $tmp3861.value;
if ($tmp3862) goto block22; else goto block24;
block22:;
// line 1064
panda$core$String* $tmp3863 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3863));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3864));
*(&local2) = &$s3865;
goto block15;
block24:;
panda$core$Int64 $tmp3866 = (panda$core$Int64) {57};
panda$core$Bit $tmp3867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3838, $tmp3866);
bool $tmp3868 = $tmp3867.value;
if ($tmp3868) goto block25; else goto block26;
block25:;
// line 1066
panda$core$String* $tmp3869 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3869));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3870));
*(&local2) = &$s3871;
goto block15;
block26:;
panda$core$Int64 $tmp3872 = (panda$core$Int64) {73};
panda$core$Bit $tmp3873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3838, $tmp3872);
bool $tmp3874 = $tmp3873.value;
if ($tmp3874) goto block27; else goto block28;
block27:;
// line 1068
panda$core$String* $tmp3875 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3875));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3876));
*(&local2) = &$s3877;
goto block15;
block28:;
panda$core$Int64 $tmp3878 = (panda$core$Int64) {1};
panda$core$Bit $tmp3879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3838, $tmp3878);
bool $tmp3880 = $tmp3879.value;
if ($tmp3880) goto block29; else goto block30;
block29:;
// line 1070
panda$core$String* $tmp3881 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3881));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3882));
*(&local2) = &$s3883;
goto block15;
block30:;
panda$core$Int64 $tmp3884 = (panda$core$Int64) {67};
panda$core$Bit $tmp3885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3838, $tmp3884);
bool $tmp3886 = $tmp3885.value;
if ($tmp3886) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp3887 = (panda$core$Int64) {68};
panda$core$Bit $tmp3888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3838, $tmp3887);
bool $tmp3889 = $tmp3888.value;
if ($tmp3889) goto block31; else goto block33;
block31:;
// line 1072
panda$core$String* $tmp3890 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3890));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3891));
*(&local2) = &$s3892;
goto block15;
block33:;
panda$core$Int64 $tmp3893 = (panda$core$Int64) {69};
panda$core$Bit $tmp3894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3838, $tmp3893);
bool $tmp3895 = $tmp3894.value;
if ($tmp3895) goto block34; else goto block35;
block35:;
panda$core$Int64 $tmp3896 = (panda$core$Int64) {70};
panda$core$Bit $tmp3897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3838, $tmp3896);
bool $tmp3898 = $tmp3897.value;
if ($tmp3898) goto block34; else goto block36;
block34:;
// line 1074
panda$core$String* $tmp3899 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3899));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3900));
*(&local2) = &$s3901;
goto block15;
block36:;
panda$core$Int64 $tmp3902 = (panda$core$Int64) {71};
panda$core$Bit $tmp3903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3838, $tmp3902);
bool $tmp3904 = $tmp3903.value;
if ($tmp3904) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp3905 = (panda$core$Int64) {72};
panda$core$Bit $tmp3906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3838, $tmp3905);
bool $tmp3907 = $tmp3906.value;
if ($tmp3907) goto block37; else goto block39;
block37:;
// line 1076
panda$core$String* $tmp3908 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3908));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3909));
*(&local2) = &$s3910;
goto block15;
block39:;
panda$core$Int64 $tmp3911 = (panda$core$Int64) {59};
panda$core$Bit $tmp3912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3838, $tmp3911);
bool $tmp3913 = $tmp3912.value;
if ($tmp3913) goto block40; else goto block41;
block41:;
panda$core$Int64 $tmp3914 = (panda$core$Int64) {61};
panda$core$Bit $tmp3915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3838, $tmp3914);
bool $tmp3916 = $tmp3915.value;
if ($tmp3916) goto block40; else goto block42;
block40:;
// line 1078
panda$core$String* $tmp3917 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3917));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3918));
*(&local2) = &$s3919;
goto block15;
block42:;
panda$core$Int64 $tmp3920 = (panda$core$Int64) {60};
panda$core$Bit $tmp3921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3838, $tmp3920);
bool $tmp3922 = $tmp3921.value;
if ($tmp3922) goto block43; else goto block44;
block44:;
panda$core$Int64 $tmp3923 = (panda$core$Int64) {62};
panda$core$Bit $tmp3924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3838, $tmp3923);
bool $tmp3925 = $tmp3924.value;
if ($tmp3925) goto block43; else goto block45;
block43:;
// line 1080
panda$core$String* $tmp3926 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3926));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3927));
*(&local2) = &$s3928;
goto block15;
block45:;
panda$core$Int64 $tmp3929 = (panda$core$Int64) {64};
panda$core$Bit $tmp3930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3838, $tmp3929);
bool $tmp3931 = $tmp3930.value;
if ($tmp3931) goto block46; else goto block47;
block46:;
// line 1082
panda$core$String* $tmp3932 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3932));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3933));
*(&local2) = &$s3934;
goto block15;
block47:;
panda$core$Int64 $tmp3935 = (panda$core$Int64) {63};
panda$core$Bit $tmp3936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3838, $tmp3935);
bool $tmp3937 = $tmp3936.value;
if ($tmp3937) goto block48; else goto block49;
block48:;
// line 1084
panda$core$String* $tmp3938 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3938));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3939));
*(&local2) = &$s3940;
goto block15;
block49:;
panda$core$Int64 $tmp3941 = (panda$core$Int64) {66};
panda$core$Bit $tmp3942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3838, $tmp3941);
bool $tmp3943 = $tmp3942.value;
if ($tmp3943) goto block50; else goto block51;
block50:;
// line 1086
panda$core$String* $tmp3944 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3944));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3945));
*(&local2) = &$s3946;
goto block15;
block51:;
panda$core$Int64 $tmp3947 = (panda$core$Int64) {65};
panda$core$Bit $tmp3948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3838, $tmp3947);
bool $tmp3949 = $tmp3948.value;
if ($tmp3949) goto block52; else goto block53;
block52:;
// line 1088
panda$core$String* $tmp3950 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3950));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3951));
*(&local2) = &$s3952;
goto block15;
block53:;
// line 1090
panda$core$Bit $tmp3953 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3954 = $tmp3953.value;
if ($tmp3954) goto block54; else goto block55;
block55:;
panda$core$Int64 $tmp3955 = (panda$core$Int64) {1090};
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3956;
$tmp3956 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3956->value = param3;
panda$core$String* $tmp3957 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3958, ((panda$core$Object*) $tmp3956));
panda$core$String* $tmp3959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3957, &$s3960);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3961, $tmp3955, $tmp3959);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3956));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3957));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3959));
abort(); // unreachable
block54:;
goto block15;
block15:;
// line 1092
panda$core$String* $tmp3962 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp3963 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3963));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3962));
*(&local3) = $tmp3962;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3962));
// line 1093
panda$io$IndentedOutputStream** $tmp3964 = &param0->out;
panda$io$IndentedOutputStream* $tmp3965 = *$tmp3964;
panda$core$String* $tmp3966 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param5);
panda$core$String* $tmp3967 = panda$core$String$convert$R$panda$core$String($tmp3966);
panda$core$String* $tmp3968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3967, &$s3969);
panda$core$String* $tmp3970 = *(&local3);
panda$core$String* $tmp3971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3968, $tmp3970);
panda$core$String* $tmp3972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3971, &$s3973);
panda$core$String* $tmp3974 = *(&local0);
panda$core$String* $tmp3975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3972, $tmp3974);
panda$core$String* $tmp3976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3975, &$s3977);
panda$core$String* $tmp3978 = *(&local2);
panda$core$String* $tmp3979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3976, $tmp3978);
panda$core$String* $tmp3980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3979, &$s3981);
panda$core$String* $tmp3982 = *(&local1);
panda$core$String* $tmp3983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3980, $tmp3982);
panda$core$String* $tmp3984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3983, &$s3985);
$fn3987 $tmp3986 = ($fn3987) ((panda$io$OutputStream*) $tmp3965)->$class->vtable[19];
$tmp3986(((panda$io$OutputStream*) $tmp3965), $tmp3984);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3966));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3967));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3968));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3971));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3972));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3975));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3976));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3979));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3980));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3983));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3984));
// line 1094
panda$collections$HashMap** $tmp3988 = &param0->refs;
panda$collections$HashMap* $tmp3989 = *$tmp3988;
panda$core$String* $tmp3990 = *(&local3);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp3991;
$tmp3991 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp3991->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp3989, ((panda$collections$Key*) $tmp3991), ((panda$core$Object*) $tmp3990));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp3991)));
panda$core$String* $tmp3992 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3992));
// unreffing result
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp3993 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3993));
// unreffing cOp
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp3994 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3994));
// unreffing rightRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3995 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3995));
// unreffing leftRef
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeBranch$org$pandalanguage$pandac$IR$Block$ID(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Block$ID param1) {

// line 1098
panda$io$IndentedOutputStream** $tmp3996 = &param0->out;
panda$io$IndentedOutputStream* $tmp3997 = *$tmp3996;
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp3998;
$tmp3998 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp3998->value = param1;
panda$core$String* $tmp3999 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4000, ((panda$core$Object*) $tmp3998));
panda$core$String* $tmp4001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3999, &$s4002);
$fn4004 $tmp4003 = ($fn4004) ((panda$io$OutputStream*) $tmp3997)->$class->vtable[19];
$tmp4003(((panda$io$OutputStream*) $tmp3997), $tmp4001);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3998));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3999));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4001));
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeCast$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$Type* param3) {

// line 1102
panda$collections$HashMap** $tmp4005 = &param0->refs;
panda$collections$HashMap* $tmp4006 = *$tmp4005;
panda$core$String* $tmp4007 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
$fn4009 $tmp4008 = ($fn4009) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4010 = $tmp4008(param2);
panda$core$String* $tmp4011 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4007, $tmp4010, param3);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4012;
$tmp4012 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4012->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4006, ((panda$collections$Key*) $tmp4012), ((panda$core$Object*) $tmp4011));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4007));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4010));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4011));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4012)));
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeConditionalBranch$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1, org$pandalanguage$pandac$IR$Block$ID param2, org$pandalanguage$pandac$IR$Block$ID param3) {

// line 1106
panda$io$IndentedOutputStream** $tmp4013 = &param0->out;
panda$io$IndentedOutputStream* $tmp4014 = *$tmp4013;
panda$core$String* $tmp4015 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param1);
panda$core$String* $tmp4016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4017, $tmp4015);
panda$core$String* $tmp4018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4016, &$s4019);
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp4020;
$tmp4020 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp4020->value = param2;
panda$core$String* $tmp4021 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4018, ((panda$core$Object*) $tmp4020));
panda$core$String* $tmp4022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4021, &$s4023);
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp4024;
$tmp4024 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp4024->value = param3;
panda$core$String* $tmp4025 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4022, ((panda$core$Object*) $tmp4024));
panda$core$String* $tmp4026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4025, &$s4027);
$fn4029 $tmp4028 = ($fn4029) ((panda$io$OutputStream*) $tmp4014)->$class->vtable[19];
$tmp4028(((panda$io$OutputStream*) $tmp4014), $tmp4026);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4015));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4016));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4018));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4020));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4021));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4022));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4024));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4025));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4026));
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeConstruct$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$ClassDecl* param2) {

org$pandalanguage$pandac$CCodeGenerator$ClassConstant* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$Type* local3 = NULL;
// line 1110
panda$core$Weak** $tmp4030 = &param0->compiler;
panda$core$Weak* $tmp4031 = *$tmp4030;
panda$core$Object* $tmp4032 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4031);
panda$core$Panda$unref$panda$core$Object$Q($tmp4032);
panda$core$Bit $tmp4033 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp4032), param2);
panda$core$Bit $tmp4034 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4033);
bool $tmp4035 = $tmp4034.value;
if ($tmp4035) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp4036 = (panda$core$Int64) {1110};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s4037, $tmp4036);
abort(); // unreachable
block1:;
// line 1111
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4038 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, param2);
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4039 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4039));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4038));
*(&local0) = $tmp4038;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4038));
// line 1112
*(&local1) = ((panda$core$String*) NULL);
// line 1113
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4040 = *(&local0);
panda$core$String** $tmp4041 = &$tmp4040->type;
panda$core$String* $tmp4042 = *$tmp4041;
ITable* $tmp4044 = ((panda$core$Equatable*) $tmp4042)->$class->itable;
while ($tmp4044->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4044 = $tmp4044->next;
}
$fn4046 $tmp4045 = $tmp4044->methods[1];
panda$core$Bit $tmp4047 = $tmp4045(((panda$core$Equatable*) $tmp4042), ((panda$core$Equatable*) &$s4043));
bool $tmp4048 = $tmp4047.value;
if ($tmp4048) goto block3; else goto block5;
block3:;
// line 1114
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4049 = *(&local0);
panda$core$String** $tmp4050 = &$tmp4049->name;
panda$core$String* $tmp4051 = *$tmp4050;
panda$core$String* $tmp4052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4053, $tmp4051);
panda$core$String* $tmp4054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4052, &$s4055);
panda$core$String* $tmp4056 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4056));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4054));
*(&local1) = $tmp4054;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4052));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4054));
goto block4;
block5:;
// line 1
// line 1117
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4057 = *(&local0);
panda$core$String** $tmp4058 = &$tmp4057->name;
panda$core$String* $tmp4059 = *$tmp4058;
panda$core$String* $tmp4060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4061, $tmp4059);
panda$core$String* $tmp4062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4060, &$s4063);
panda$core$String* $tmp4064 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4064));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4062));
*(&local1) = $tmp4062;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4060));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4062));
goto block4;
block4:;
// line 1119
panda$core$String* $tmp4065 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4066 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4066));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4065));
*(&local2) = $tmp4065;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4065));
// line 1120
org$pandalanguage$pandac$Type** $tmp4067 = &param2->type;
org$pandalanguage$pandac$Type* $tmp4068 = *$tmp4067;
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp4069 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4069));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4068));
*(&local3) = $tmp4068;
// line 1121
panda$io$IndentedOutputStream** $tmp4070 = &param0->out;
panda$io$IndentedOutputStream* $tmp4071 = *$tmp4070;
org$pandalanguage$pandac$Type* $tmp4072 = *(&local3);
panda$core$String* $tmp4073 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4072);
panda$core$String* $tmp4074 = panda$core$String$convert$R$panda$core$String($tmp4073);
panda$core$String* $tmp4075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4074, &$s4076);
panda$core$String* $tmp4077 = *(&local2);
panda$core$String* $tmp4078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4075, $tmp4077);
panda$core$String* $tmp4079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4078, &$s4080);
org$pandalanguage$pandac$Type* $tmp4081 = *(&local3);
panda$core$String* $tmp4082 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4081);
panda$core$String* $tmp4083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4079, $tmp4082);
panda$core$String* $tmp4084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4083, &$s4085);
org$pandalanguage$pandac$Type* $tmp4086 = *(&local3);
panda$core$Int64 $tmp4087 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, $tmp4086);
panda$core$String* $tmp4088 = panda$core$Int64$convert$R$panda$core$String($tmp4087);
panda$core$String* $tmp4089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4088, &$s4090);
panda$core$String* $tmp4091 = *(&local1);
panda$core$String* $tmp4092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4089, $tmp4091);
panda$core$String* $tmp4093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4092, &$s4094);
panda$core$String* $tmp4095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4084, $tmp4093);
$fn4097 $tmp4096 = ($fn4097) ((panda$io$OutputStream*) $tmp4071)->$class->vtable[19];
$tmp4096(((panda$io$OutputStream*) $tmp4071), $tmp4095);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4073));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4074));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4075));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4078));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4079));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4082));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4083));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4084));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4088));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4089));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4092));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4093));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4095));
// line 1123
panda$collections$HashMap** $tmp4098 = &param0->refs;
panda$collections$HashMap* $tmp4099 = *$tmp4098;
panda$core$String* $tmp4100 = *(&local2);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4101;
$tmp4101 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4101->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4099, ((panda$collections$Key*) $tmp4101), ((panda$core$Object*) $tmp4100));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4101)));
org$pandalanguage$pandac$Type* $tmp4102 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4102));
// unreffing target
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp4103 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4103));
// unreffing result
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4104 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4104));
// unreffing ccCast
*(&local1) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4105 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4105));
// unreffing cc
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeCreateStruct$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$ClassDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IR$Value$GT(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$ClassDecl* param2, panda$collections$ImmutableArray* param3) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$Type* local1 = NULL;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$IR$Value* local3 = NULL;
// line 1127
panda$core$Weak** $tmp4106 = &param0->compiler;
panda$core$Weak* $tmp4107 = *$tmp4106;
panda$core$Object* $tmp4108 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4107);
panda$core$Panda$unref$panda$core$Object$Q($tmp4108);
panda$core$Bit $tmp4109 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp4108), param2);
bool $tmp4110 = $tmp4109.value;
if ($tmp4110) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp4111 = (panda$core$Int64) {1127};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s4112, $tmp4111);
abort(); // unreachable
block1:;
// line 1128
panda$core$String* $tmp4113 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4114 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4114));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4113));
*(&local0) = $tmp4113;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4113));
// line 1129
org$pandalanguage$pandac$Type** $tmp4115 = &param2->type;
org$pandalanguage$pandac$Type* $tmp4116 = *$tmp4115;
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp4117 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4117));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4116));
*(&local1) = $tmp4116;
// line 1130
panda$io$IndentedOutputStream** $tmp4118 = &param0->out;
panda$io$IndentedOutputStream* $tmp4119 = *$tmp4118;
org$pandalanguage$pandac$Type* $tmp4120 = *(&local1);
panda$core$String* $tmp4121 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4120);
panda$core$String* $tmp4122 = panda$core$String$convert$R$panda$core$String($tmp4121);
panda$core$String* $tmp4123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4122, &$s4124);
panda$core$String* $tmp4125 = *(&local0);
panda$core$String* $tmp4126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4123, $tmp4125);
panda$core$String* $tmp4127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4126, &$s4128);
org$pandalanguage$pandac$Type* $tmp4129 = *(&local1);
panda$core$String* $tmp4130 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4129);
panda$core$String* $tmp4131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4127, $tmp4130);
panda$core$String* $tmp4132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4131, &$s4133);
$fn4135 $tmp4134 = ($fn4135) ((panda$io$OutputStream*) $tmp4119)->$class->vtable[17];
$tmp4134(((panda$io$OutputStream*) $tmp4119), $tmp4132);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4121));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4122));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4123));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4126));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4127));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4130));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4131));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4132));
// line 1131
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4136 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4136));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4137));
*(&local2) = &$s4138;
// line 1132
ITable* $tmp4139 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp4139->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp4139 = $tmp4139->next;
}
$fn4141 $tmp4140 = $tmp4139->methods[0];
panda$collections$Iterator* $tmp4142 = $tmp4140(((panda$collections$Iterable*) param3));
goto block3;
block3:;
ITable* $tmp4143 = $tmp4142->$class->itable;
while ($tmp4143->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp4143 = $tmp4143->next;
}
$fn4145 $tmp4144 = $tmp4143->methods[0];
panda$core$Bit $tmp4146 = $tmp4144($tmp4142);
bool $tmp4147 = $tmp4146.value;
if ($tmp4147) goto block5; else goto block4;
block4:;
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
ITable* $tmp4148 = $tmp4142->$class->itable;
while ($tmp4148->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp4148 = $tmp4148->next;
}
$fn4150 $tmp4149 = $tmp4148->methods[1];
panda$core$Object* $tmp4151 = $tmp4149($tmp4142);
org$pandalanguage$pandac$IR$Value* $tmp4152 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4152));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) $tmp4151)));
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) $tmp4151);
// line 1133
panda$io$IndentedOutputStream** $tmp4153 = &param0->out;
panda$io$IndentedOutputStream* $tmp4154 = *$tmp4153;
panda$core$String* $tmp4155 = *(&local2);
panda$core$String* $tmp4156 = panda$core$String$convert$R$panda$core$String($tmp4155);
panda$core$String* $tmp4157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4156, &$s4158);
org$pandalanguage$pandac$IR$Value* $tmp4159 = *(&local3);
panda$core$String* $tmp4160 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, $tmp4159);
panda$core$String* $tmp4161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4157, $tmp4160);
panda$core$String* $tmp4162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4161, &$s4163);
$fn4165 $tmp4164 = ($fn4165) ((panda$io$OutputStream*) $tmp4154)->$class->vtable[17];
$tmp4164(((panda$io$OutputStream*) $tmp4154), $tmp4162);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4156));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4157));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4160));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4161));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4162));
// line 1134
panda$core$String* $tmp4166 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4166));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4167));
*(&local2) = &$s4168;
panda$core$Panda$unref$panda$core$Object$Q($tmp4151);
org$pandalanguage$pandac$IR$Value* $tmp4169 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4169));
// unreffing v
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4142));
// line 1136
panda$io$IndentedOutputStream** $tmp4170 = &param0->out;
panda$io$IndentedOutputStream* $tmp4171 = *$tmp4170;
$fn4173 $tmp4172 = ($fn4173) ((panda$io$OutputStream*) $tmp4171)->$class->vtable[19];
$tmp4172(((panda$io$OutputStream*) $tmp4171), &$s4174);
// line 1137
panda$collections$HashMap** $tmp4175 = &param0->refs;
panda$collections$HashMap* $tmp4176 = *$tmp4175;
panda$core$String* $tmp4177 = *(&local0);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4178;
$tmp4178 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4178->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4176, ((panda$collections$Key*) $tmp4178), ((panda$core$Object*) $tmp4177));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4178)));
panda$core$String* $tmp4179 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4179));
// unreffing separator
*(&local2) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$Type* $tmp4180 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4180));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp4181 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4181));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeDynamicCall$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$IR$Value$GT(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, panda$collections$ListView* param3) {

org$pandalanguage$pandac$Type* local0 = NULL;
org$pandalanguage$pandac$Type* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
org$pandalanguage$pandac$IR$Value* local4 = NULL;
// line 1141
$fn4183 $tmp4182 = ($fn4183) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4184 = $tmp4182(param2);
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp4185 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4185));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4184));
*(&local0) = $tmp4184;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4184));
// line 1142
org$pandalanguage$pandac$Type* $tmp4186 = *(&local0);
panda$core$Bit $tmp4187 = org$pandalanguage$pandac$Type$get_isPointer$R$panda$core$Bit($tmp4186);
bool $tmp4188 = $tmp4187.value;
if ($tmp4188) goto block1; else goto block2;
block1:;
// line 1143
org$pandalanguage$pandac$Type* $tmp4189 = *(&local0);
panda$collections$ImmutableArray** $tmp4190 = &$tmp4189->subtypes;
panda$collections$ImmutableArray* $tmp4191 = *$tmp4190;
panda$core$Int64 $tmp4192 = (panda$core$Int64) {1};
panda$core$Object* $tmp4193 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp4191, $tmp4192);
org$pandalanguage$pandac$Type* $tmp4194 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4194));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp4193)));
*(&local0) = ((org$pandalanguage$pandac$Type*) $tmp4193);
panda$core$Panda$unref$panda$core$Object$Q($tmp4193);
goto block2;
block2:;
// line 1145
org$pandalanguage$pandac$Type* $tmp4195 = *(&local0);
org$pandalanguage$pandac$Type* $tmp4196 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp4195);
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp4197 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4197));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4196));
*(&local1) = $tmp4196;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4196));
// line 1146
org$pandalanguage$pandac$Type* $tmp4198 = *(&local1);
org$pandalanguage$pandac$Type* $tmp4199 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp4200 = ((panda$core$Equatable*) $tmp4198)->$class->itable;
while ($tmp4200->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4200 = $tmp4200->next;
}
$fn4202 $tmp4201 = $tmp4200->methods[1];
panda$core$Bit $tmp4203 = $tmp4201(((panda$core$Equatable*) $tmp4198), ((panda$core$Equatable*) $tmp4199));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4199));
bool $tmp4204 = $tmp4203.value;
if ($tmp4204) goto block3; else goto block4;
block3:;
// line 1147
panda$core$String* $tmp4205 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4206 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4206));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4205));
*(&local2) = $tmp4205;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4205));
// line 1148
panda$io$IndentedOutputStream** $tmp4207 = &param0->out;
panda$io$IndentedOutputStream* $tmp4208 = *$tmp4207;
org$pandalanguage$pandac$Type* $tmp4209 = *(&local1);
panda$core$String* $tmp4210 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4209);
panda$core$String* $tmp4211 = panda$core$String$convert$R$panda$core$String($tmp4210);
panda$core$String* $tmp4212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4211, &$s4213);
panda$core$String* $tmp4214 = *(&local2);
panda$core$String* $tmp4215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4212, $tmp4214);
panda$core$String* $tmp4216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4215, &$s4217);
$fn4219 $tmp4218 = ($fn4219) ((panda$io$OutputStream*) $tmp4208)->$class->vtable[17];
$tmp4218(((panda$io$OutputStream*) $tmp4208), $tmp4216);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4210));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4211));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4212));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4215));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4216));
// line 1149
panda$collections$HashMap** $tmp4220 = &param0->refs;
panda$collections$HashMap* $tmp4221 = *$tmp4220;
panda$core$String* $tmp4222 = *(&local2);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4223;
$tmp4223 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4223->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4221, ((panda$collections$Key*) $tmp4223), ((panda$core$Object*) $tmp4222));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4223)));
panda$core$String* $tmp4224 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4224));
// unreffing result
*(&local2) = ((panda$core$String*) NULL);
goto block4;
block4:;
// line 1151
panda$io$IndentedOutputStream** $tmp4225 = &param0->out;
panda$io$IndentedOutputStream* $tmp4226 = *$tmp4225;
panda$core$String* $tmp4227 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4228 = panda$core$String$convert$R$panda$core$String($tmp4227);
panda$core$String* $tmp4229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4228, &$s4230);
$fn4232 $tmp4231 = ($fn4232) ((panda$io$OutputStream*) $tmp4226)->$class->vtable[17];
$tmp4231(((panda$io$OutputStream*) $tmp4226), $tmp4229);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4227));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4228));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4229));
// line 1152
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4233 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4233));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4234));
*(&local3) = &$s4235;
// line 1153
ITable* $tmp4236 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp4236->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp4236 = $tmp4236->next;
}
$fn4238 $tmp4237 = $tmp4236->methods[0];
panda$collections$Iterator* $tmp4239 = $tmp4237(((panda$collections$Iterable*) param3));
goto block5;
block5:;
ITable* $tmp4240 = $tmp4239->$class->itable;
while ($tmp4240->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp4240 = $tmp4240->next;
}
$fn4242 $tmp4241 = $tmp4240->methods[0];
panda$core$Bit $tmp4243 = $tmp4241($tmp4239);
bool $tmp4244 = $tmp4243.value;
if ($tmp4244) goto block7; else goto block6;
block6:;
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
ITable* $tmp4245 = $tmp4239->$class->itable;
while ($tmp4245->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp4245 = $tmp4245->next;
}
$fn4247 $tmp4246 = $tmp4245->methods[1];
panda$core$Object* $tmp4248 = $tmp4246($tmp4239);
org$pandalanguage$pandac$IR$Value* $tmp4249 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4249));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) $tmp4248)));
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) $tmp4248);
// line 1154
panda$io$IndentedOutputStream** $tmp4250 = &param0->out;
panda$io$IndentedOutputStream* $tmp4251 = *$tmp4250;
panda$core$String* $tmp4252 = *(&local3);
$fn4254 $tmp4253 = ($fn4254) ((panda$io$OutputStream*) $tmp4251)->$class->vtable[17];
$tmp4253(((panda$io$OutputStream*) $tmp4251), $tmp4252);
// line 1155
panda$io$IndentedOutputStream** $tmp4255 = &param0->out;
panda$io$IndentedOutputStream* $tmp4256 = *$tmp4255;
org$pandalanguage$pandac$IR$Value* $tmp4257 = *(&local4);
panda$core$String* $tmp4258 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, $tmp4257);
$fn4260 $tmp4259 = ($fn4260) ((panda$io$OutputStream*) $tmp4256)->$class->vtable[17];
$tmp4259(((panda$io$OutputStream*) $tmp4256), $tmp4258);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4258));
// line 1156
panda$core$String* $tmp4261 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4261));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4262));
*(&local3) = &$s4263;
panda$core$Panda$unref$panda$core$Object$Q($tmp4248);
org$pandalanguage$pandac$IR$Value* $tmp4264 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4264));
// unreffing a
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block5;
block7:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4239));
// line 1158
panda$io$IndentedOutputStream** $tmp4265 = &param0->out;
panda$io$IndentedOutputStream* $tmp4266 = *$tmp4265;
$fn4268 $tmp4267 = ($fn4268) ((panda$io$OutputStream*) $tmp4266)->$class->vtable[19];
$tmp4267(((panda$io$OutputStream*) $tmp4266), &$s4269);
panda$core$String* $tmp4270 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4270));
// unreffing separator
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$Type* $tmp4271 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4271));
// unreffing returnType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp4272 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4272));
// unreffing type
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeExtractField$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$FieldDecl* param3) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
// line 1162
panda$core$Weak** $tmp4273 = &param0->compiler;
panda$core$Weak* $tmp4274 = *$tmp4273;
panda$core$Object* $tmp4275 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4274);
panda$core$Panda$unref$panda$core$Object$Q($tmp4275);
panda$core$Bit $tmp4276 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp4275), param3);
// line 1163
panda$core$String* $tmp4277 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4278 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4278));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4277));
*(&local0) = $tmp4277;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4277));
// line 1164
panda$core$String* $tmp4279 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4280 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4280));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4279));
*(&local1) = $tmp4279;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4279));
// line 1165
panda$io$IndentedOutputStream** $tmp4281 = &param0->out;
panda$io$IndentedOutputStream* $tmp4282 = *$tmp4281;
org$pandalanguage$pandac$Type** $tmp4283 = &param3->type;
org$pandalanguage$pandac$Type* $tmp4284 = *$tmp4283;
panda$core$String* $tmp4285 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4284);
panda$core$String* $tmp4286 = panda$core$String$convert$R$panda$core$String($tmp4285);
panda$core$String* $tmp4287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4286, &$s4288);
panda$core$String* $tmp4289 = *(&local1);
panda$core$String* $tmp4290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4287, $tmp4289);
panda$core$String* $tmp4291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4290, &$s4292);
panda$core$String* $tmp4293 = *(&local0);
panda$core$String* $tmp4294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4291, $tmp4293);
panda$core$String* $tmp4295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4294, &$s4296);
panda$core$String** $tmp4297 = &((org$pandalanguage$pandac$Symbol*) param3)->name;
panda$core$String* $tmp4298 = *$tmp4297;
panda$core$String* $tmp4299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4295, $tmp4298);
panda$core$String* $tmp4300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4299, &$s4301);
$fn4303 $tmp4302 = ($fn4303) ((panda$io$OutputStream*) $tmp4282)->$class->vtable[19];
$tmp4302(((panda$io$OutputStream*) $tmp4282), $tmp4300);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4285));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4286));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4287));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4290));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4291));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4294));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4295));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4299));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4300));
// line 1166
panda$collections$HashMap** $tmp4304 = &param0->refs;
panda$collections$HashMap* $tmp4305 = *$tmp4304;
panda$core$String* $tmp4306 = *(&local1);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4307;
$tmp4307 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4307->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4305, ((panda$collections$Key*) $tmp4307), ((panda$core$Object*) $tmp4306));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4307)));
panda$core$String* $tmp4308 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4308));
// unreffing result
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4309 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4309));
// unreffing targetRef
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeGetChoiceFieldPointer$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$ChoiceCase* param3, panda$core$Int64 param4) {

org$pandalanguage$pandac$FieldDecl* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$Int64 local2;
panda$core$String* local3 = NULL;
panda$core$String* local4 = NULL;
// line 1171
panda$core$Weak** $tmp4310 = &param3->owner;
panda$core$Weak* $tmp4311 = *$tmp4310;
panda$core$Object* $tmp4312 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4311);
panda$core$Panda$unref$panda$core$Object$Q($tmp4312);
panda$collections$Array** $tmp4313 = &((org$pandalanguage$pandac$ClassDecl*) $tmp4312)->fields;
panda$collections$Array* $tmp4314 = *$tmp4313;
panda$core$Int64 $tmp4315 = (panda$core$Int64) {1};
panda$core$Object* $tmp4316 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4314, $tmp4315);
*(&local0) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp4317 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4317));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp4316)));
*(&local0) = ((org$pandalanguage$pandac$FieldDecl*) $tmp4316);
panda$core$Panda$unref$panda$core$Object$Q($tmp4316);
// line 1172
org$pandalanguage$pandac$FieldDecl* $tmp4318 = *(&local0);
panda$core$String** $tmp4319 = &((org$pandalanguage$pandac$Symbol*) $tmp4318)->name;
panda$core$String* $tmp4320 = *$tmp4319;
panda$core$Bit $tmp4321 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp4320, &$s4322);
bool $tmp4323 = $tmp4321.value;
if ($tmp4323) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp4324 = (panda$core$Int64) {1172};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s4325, $tmp4324);
abort(); // unreachable
block1:;
// line 1173
panda$core$String* $tmp4326 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4327 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4327));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4326));
*(&local1) = $tmp4326;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4326));
// line 1174
panda$core$Weak** $tmp4328 = &param0->compiler;
panda$core$Weak* $tmp4329 = *$tmp4328;
panda$core$Object* $tmp4330 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4329);
panda$core$Panda$unref$panda$core$Object$Q($tmp4330);
org$pandalanguage$pandac$FieldDecl* $tmp4331 = *(&local0);
panda$core$Int64 $tmp4332 = org$pandalanguage$pandac$Compiler$getIndex$org$pandalanguage$pandac$FieldDecl$R$panda$core$Int64(((org$pandalanguage$pandac$Compiler*) $tmp4330), $tmp4331);
*(&local2) = $tmp4332;
// line 1175
panda$core$String* $tmp4333 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4334 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4334));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4333));
*(&local3) = $tmp4333;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4333));
// line 1176
panda$collections$Array** $tmp4335 = &param3->fields;
panda$collections$Array* $tmp4336 = *$tmp4335;
panda$core$Object* $tmp4337 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4336, param4);
panda$core$String* $tmp4338 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp4337));
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp4339 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4339));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4338));
*(&local4) = $tmp4338;
panda$core$Panda$unref$panda$core$Object$Q($tmp4337);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4338));
// line 1177
panda$io$IndentedOutputStream** $tmp4340 = &param0->out;
panda$io$IndentedOutputStream* $tmp4341 = *$tmp4340;
panda$core$String* $tmp4342 = *(&local4);
panda$core$String* $tmp4343 = panda$core$String$convert$R$panda$core$String($tmp4342);
panda$core$String* $tmp4344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4343, &$s4345);
panda$core$String* $tmp4346 = *(&local3);
panda$core$String* $tmp4347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4344, $tmp4346);
panda$core$String* $tmp4348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4347, &$s4349);
panda$core$String* $tmp4350 = *(&local4);
panda$core$String* $tmp4351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4348, $tmp4350);
panda$core$String* $tmp4352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4351, &$s4353);
panda$core$String* $tmp4354 = *(&local1);
panda$core$String* $tmp4355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4352, $tmp4354);
panda$core$String* $tmp4356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4355, &$s4357);
panda$core$Int64 $tmp4358 = org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldOffset$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64$R$panda$core$Int64(param0, param3, param4);
panda$core$Int64$wrapper* $tmp4359;
$tmp4359 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp4359->value = $tmp4358;
panda$core$String* $tmp4360 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4361, ((panda$core$Object*) $tmp4359));
panda$core$String* $tmp4362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4360, &$s4363);
panda$core$String* $tmp4364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4356, $tmp4362);
$fn4366 $tmp4365 = ($fn4366) ((panda$io$OutputStream*) $tmp4341)->$class->vtable[19];
$tmp4365(((panda$io$OutputStream*) $tmp4341), $tmp4364);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4343));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4344));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4347));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4348));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4351));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4352));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4355));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4356));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4359));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4360));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4362));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4364));
// line 1179
panda$collections$HashMap** $tmp4367 = &param0->refs;
panda$collections$HashMap* $tmp4368 = *$tmp4367;
panda$core$String* $tmp4369 = *(&local3);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4370;
$tmp4370 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4370->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4368, ((panda$collections$Key*) $tmp4370), ((panda$core$Object*) $tmp4369));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4370)));
panda$core$String* $tmp4371 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4371));
// unreffing type
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp4372 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4372));
// unreffing result
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4373 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4373));
// unreffing targetRef
*(&local1) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp4374 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4374));
// unreffing data
*(&local0) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeGetFieldPointer$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$FieldDecl* param3) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
// line 1183
panda$core$String* $tmp4375 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4376 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4376));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4375));
*(&local0) = $tmp4375;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4375));
// line 1184
panda$core$String* $tmp4377 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4378 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4378));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4377));
*(&local1) = $tmp4377;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4377));
// line 1185
panda$io$IndentedOutputStream** $tmp4379 = &param0->out;
panda$io$IndentedOutputStream* $tmp4380 = *$tmp4379;
org$pandalanguage$pandac$Type** $tmp4381 = &param3->type;
org$pandalanguage$pandac$Type* $tmp4382 = *$tmp4381;
panda$core$String* $tmp4383 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4382);
panda$core$String* $tmp4384 = panda$core$String$convert$R$panda$core$String($tmp4383);
panda$core$String* $tmp4385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4384, &$s4386);
panda$core$String* $tmp4387 = *(&local1);
panda$core$String* $tmp4388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4385, $tmp4387);
panda$core$String* $tmp4389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4388, &$s4390);
panda$core$String* $tmp4391 = *(&local0);
panda$core$String* $tmp4392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4389, $tmp4391);
panda$core$String* $tmp4393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4392, &$s4394);
panda$core$String** $tmp4395 = &((org$pandalanguage$pandac$Symbol*) param3)->name;
panda$core$String* $tmp4396 = *$tmp4395;
panda$core$String* $tmp4397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4393, $tmp4396);
panda$core$String* $tmp4398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4397, &$s4399);
$fn4401 $tmp4400 = ($fn4401) ((panda$io$OutputStream*) $tmp4380)->$class->vtable[19];
$tmp4400(((panda$io$OutputStream*) $tmp4380), $tmp4398);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4383));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4384));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4385));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4388));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4389));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4392));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4393));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4397));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4398));
// line 1186
panda$collections$HashMap** $tmp4402 = &param0->refs;
panda$collections$HashMap* $tmp4403 = *$tmp4402;
panda$core$String* $tmp4404 = *(&local1);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4405;
$tmp4405 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4405->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4403, ((panda$collections$Key*) $tmp4405), ((panda$core$Object*) $tmp4404));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4405)));
panda$core$String* $tmp4406 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4406));
// unreffing result
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4407 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4407));
// unreffing targetRef
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeGetInterfaceMethod$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$ClassDecl* param3, panda$core$Int64 param4, org$pandalanguage$pandac$Type* param5) {

org$pandalanguage$pandac$CCodeGenerator$ClassConstant* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
// line 1191
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4408 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, param3);
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4409 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4409));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4408));
*(&local0) = $tmp4408;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4408));
// line 1192
panda$core$String* $tmp4410 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4411 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4411));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4410));
*(&local1) = $tmp4410;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4410));
// line 1193
panda$io$IndentedOutputStream** $tmp4412 = &param0->out;
panda$io$IndentedOutputStream* $tmp4413 = *$tmp4412;
panda$core$String* $tmp4414 = *(&local1);
panda$core$String* $tmp4415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4416, $tmp4414);
panda$core$String* $tmp4417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4415, &$s4418);
panda$core$String* $tmp4419 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4417, $tmp4419);
panda$core$String* $tmp4421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4420, &$s4422);
$fn4424 $tmp4423 = ($fn4424) ((panda$io$OutputStream*) $tmp4413)->$class->vtable[19];
$tmp4423(((panda$io$OutputStream*) $tmp4413), $tmp4421);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4415));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4417));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4419));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4420));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4421));
// line 1194
panda$io$IndentedOutputStream** $tmp4425 = &param0->out;
panda$io$IndentedOutputStream* $tmp4426 = *$tmp4425;
panda$core$String* $tmp4427 = *(&local1);
panda$core$String* $tmp4428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4429, $tmp4427);
panda$core$String* $tmp4430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4428, &$s4431);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4432 = *(&local0);
panda$core$String** $tmp4433 = &$tmp4432->name;
panda$core$String* $tmp4434 = *$tmp4433;
panda$core$String* $tmp4435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4430, $tmp4434);
panda$core$String* $tmp4436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4435, &$s4437);
$fn4439 $tmp4438 = ($fn4439) ((panda$io$OutputStream*) $tmp4426)->$class->vtable[19];
$tmp4438(((panda$io$OutputStream*) $tmp4426), $tmp4436);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4428));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4430));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4435));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4436));
// line 1195
panda$io$IndentedOutputStream** $tmp4440 = &param0->out;
panda$io$IndentedOutputStream* $tmp4441 = *$tmp4440;
panda$core$Int64* $tmp4442 = &$tmp4441->level;
panda$core$Int64 $tmp4443 = *$tmp4442;
panda$core$Int64 $tmp4444 = (panda$core$Int64) {1};
int64_t $tmp4445 = $tmp4443.value;
int64_t $tmp4446 = $tmp4444.value;
int64_t $tmp4447 = $tmp4445 + $tmp4446;
panda$core$Int64 $tmp4448 = (panda$core$Int64) {$tmp4447};
panda$core$Int64* $tmp4449 = &$tmp4441->level;
*$tmp4449 = $tmp4448;
// line 1196
panda$io$IndentedOutputStream** $tmp4450 = &param0->out;
panda$io$IndentedOutputStream* $tmp4451 = *$tmp4450;
panda$core$String* $tmp4452 = *(&local1);
panda$core$String* $tmp4453 = panda$core$String$convert$R$panda$core$String($tmp4452);
panda$core$String* $tmp4454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4453, &$s4455);
panda$core$String* $tmp4456 = *(&local1);
panda$core$String* $tmp4457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4454, $tmp4456);
panda$core$String* $tmp4458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4457, &$s4459);
$fn4461 $tmp4460 = ($fn4461) ((panda$io$OutputStream*) $tmp4451)->$class->vtable[19];
$tmp4460(((panda$io$OutputStream*) $tmp4451), $tmp4458);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4453));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4454));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4457));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4458));
// line 1197
panda$io$IndentedOutputStream** $tmp4462 = &param0->out;
panda$io$IndentedOutputStream* $tmp4463 = *$tmp4462;
panda$core$Int64* $tmp4464 = &$tmp4463->level;
panda$core$Int64 $tmp4465 = *$tmp4464;
panda$core$Int64 $tmp4466 = (panda$core$Int64) {1};
int64_t $tmp4467 = $tmp4465.value;
int64_t $tmp4468 = $tmp4466.value;
int64_t $tmp4469 = $tmp4467 - $tmp4468;
panda$core$Int64 $tmp4470 = (panda$core$Int64) {$tmp4469};
panda$core$Int64* $tmp4471 = &$tmp4463->level;
*$tmp4471 = $tmp4470;
// line 1198
panda$io$IndentedOutputStream** $tmp4472 = &param0->out;
panda$io$IndentedOutputStream* $tmp4473 = *$tmp4472;
$fn4475 $tmp4474 = ($fn4475) ((panda$io$OutputStream*) $tmp4473)->$class->vtable[19];
$tmp4474(((panda$io$OutputStream*) $tmp4473), &$s4476);
// line 1199
panda$core$String* $tmp4477 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4478 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4478));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4477));
*(&local2) = $tmp4477;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4477));
// line 1200
panda$core$String* $tmp4479 = org$pandalanguage$pandac$CCodeGenerator$cMethodType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$Q$R$panda$core$String(param0, param5, ((org$pandalanguage$pandac$Type*) NULL));
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4480 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4480));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4479));
*(&local3) = $tmp4479;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4479));
// line 1201
panda$io$IndentedOutputStream** $tmp4481 = &param0->out;
panda$io$IndentedOutputStream* $tmp4482 = *$tmp4481;
panda$core$String* $tmp4483 = *(&local3);
panda$core$String* $tmp4484 = panda$core$String$convert$R$panda$core$String($tmp4483);
panda$core$String* $tmp4485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4484, &$s4486);
panda$core$String* $tmp4487 = *(&local2);
panda$core$String* $tmp4488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4485, $tmp4487);
panda$core$String* $tmp4489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4488, &$s4490);
panda$core$String* $tmp4491 = *(&local1);
panda$core$String* $tmp4492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4489, $tmp4491);
panda$core$String* $tmp4493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4492, &$s4494);
panda$core$Int64$wrapper* $tmp4495;
$tmp4495 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp4495->value = param4;
panda$core$String* $tmp4496 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4493, ((panda$core$Object*) $tmp4495));
panda$core$String* $tmp4497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4496, &$s4498);
$fn4500 $tmp4499 = ($fn4500) ((panda$io$OutputStream*) $tmp4482)->$class->vtable[19];
$tmp4499(((panda$io$OutputStream*) $tmp4482), $tmp4497);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4484));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4485));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4488));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4489));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4492));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4493));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4495));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4496));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4497));
// line 1202
panda$collections$HashMap** $tmp4501 = &param0->refs;
panda$collections$HashMap* $tmp4502 = *$tmp4501;
panda$core$String* $tmp4503 = *(&local2);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4504;
$tmp4504 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4504->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4502, ((panda$collections$Key*) $tmp4504), ((panda$core$Object*) $tmp4503));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4504)));
panda$core$String* $tmp4505 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4505));
// unreffing methodType
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4506 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4506));
// unreffing result
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4507 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4507));
// unreffing itable
*(&local1) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4508 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4508));
// unreffing cc
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeGetVirtualMethod$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, panda$core$Int64 param3, org$pandalanguage$pandac$Type* param4) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
// line 1206
panda$core$String* $tmp4509 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4510 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4510));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4509));
*(&local0) = $tmp4509;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4509));
// line 1207
panda$core$String* $tmp4511 = org$pandalanguage$pandac$CCodeGenerator$cMethodType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$Q$R$panda$core$String(param0, param4, ((org$pandalanguage$pandac$Type*) NULL));
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4512 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4512));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4511));
*(&local1) = $tmp4511;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4511));
// line 1208
panda$io$IndentedOutputStream** $tmp4513 = &param0->out;
panda$io$IndentedOutputStream* $tmp4514 = *$tmp4513;
panda$core$String* $tmp4515 = *(&local1);
panda$core$String* $tmp4516 = panda$core$String$convert$R$panda$core$String($tmp4515);
panda$core$String* $tmp4517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4516, &$s4518);
panda$core$String* $tmp4519 = *(&local0);
panda$core$String* $tmp4520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4517, $tmp4519);
panda$core$String* $tmp4521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4520, &$s4522);
panda$core$String* $tmp4523 = *(&local1);
panda$core$String* $tmp4524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4521, $tmp4523);
panda$core$String* $tmp4525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4524, &$s4526);
panda$core$String* $tmp4527 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4528 = panda$core$String$convert$R$panda$core$String($tmp4527);
panda$core$String* $tmp4529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4528, &$s4530);
panda$core$Int64$wrapper* $tmp4531;
$tmp4531 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp4531->value = param3;
panda$core$String* $tmp4532 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4529, ((panda$core$Object*) $tmp4531));
panda$core$String* $tmp4533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4532, &$s4534);
panda$core$String* $tmp4535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4525, $tmp4533);
$fn4537 $tmp4536 = ($fn4537) ((panda$io$OutputStream*) $tmp4514)->$class->vtable[19];
$tmp4536(((panda$io$OutputStream*) $tmp4514), $tmp4535);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4516));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4517));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4520));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4521));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4524));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4525));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4527));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4528));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4529));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4531));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4532));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4533));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4535));
// line 1210
panda$collections$HashMap** $tmp4538 = &param0->refs;
panda$collections$HashMap* $tmp4539 = *$tmp4538;
panda$core$String* $tmp4540 = *(&local0);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4541;
$tmp4541 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4541->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4539, ((panda$collections$Key*) $tmp4541), ((panda$core$Object*) $tmp4540));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4541)));
panda$core$String* $tmp4542 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4542));
// unreffing methodType
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4543 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4543));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeLoad$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2) {

panda$core$String* local0 = NULL;
// line 1214
panda$core$String* $tmp4544 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4545 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4545));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4544));
*(&local0) = $tmp4544;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4544));
// line 1215
panda$io$IndentedOutputStream** $tmp4546 = &param0->out;
panda$io$IndentedOutputStream* $tmp4547 = *$tmp4546;
$fn4549 $tmp4548 = ($fn4549) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4550 = $tmp4548(param2);
panda$core$String* $tmp4551 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4550);
panda$core$String* $tmp4552 = panda$core$String$convert$R$panda$core$String($tmp4551);
panda$core$String* $tmp4553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4552, &$s4554);
panda$core$String* $tmp4555 = *(&local0);
panda$core$String* $tmp4556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4553, $tmp4555);
panda$core$String* $tmp4557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4556, &$s4558);
panda$core$String* $tmp4559 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4557, $tmp4559);
panda$core$String* $tmp4561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4560, &$s4562);
$fn4564 $tmp4563 = ($fn4564) ((panda$io$OutputStream*) $tmp4547)->$class->vtable[19];
$tmp4563(((panda$io$OutputStream*) $tmp4547), $tmp4561);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4550));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4551));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4552));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4553));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4556));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4557));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4559));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4560));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4561));
// line 1216
panda$collections$HashMap** $tmp4565 = &param0->refs;
panda$collections$HashMap* $tmp4566 = *$tmp4565;
panda$core$String* $tmp4567 = *(&local0);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4568;
$tmp4568 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4568->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4566, ((panda$collections$Key*) $tmp4568), ((panda$core$Object*) $tmp4567));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4568)));
panda$core$String* $tmp4569 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4569));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeNegate$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2) {

panda$core$String* local0 = NULL;
// line 1220
panda$core$String* $tmp4570 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4571 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4571));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4570));
*(&local0) = $tmp4570;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4570));
// line 1221
panda$io$IndentedOutputStream** $tmp4572 = &param0->out;
panda$io$IndentedOutputStream* $tmp4573 = *$tmp4572;
$fn4575 $tmp4574 = ($fn4575) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4576 = $tmp4574(param2);
panda$core$String* $tmp4577 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4576);
panda$core$String* $tmp4578 = panda$core$String$convert$R$panda$core$String($tmp4577);
panda$core$String* $tmp4579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4578, &$s4580);
panda$core$String* $tmp4581 = *(&local0);
panda$core$String* $tmp4582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4579, $tmp4581);
panda$core$String* $tmp4583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4582, &$s4584);
panda$core$String* $tmp4585 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4583, $tmp4585);
panda$core$String* $tmp4587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4586, &$s4588);
$fn4590 $tmp4589 = ($fn4590) ((panda$io$OutputStream*) $tmp4573)->$class->vtable[19];
$tmp4589(((panda$io$OutputStream*) $tmp4573), $tmp4587);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4576));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4577));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4578));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4579));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4582));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4583));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4585));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4586));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4587));
// line 1222
panda$collections$HashMap** $tmp4591 = &param0->refs;
panda$collections$HashMap* $tmp4592 = *$tmp4591;
panda$core$String* $tmp4593 = *(&local0);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4594;
$tmp4594 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4594->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4592, ((panda$collections$Key*) $tmp4594), ((panda$core$Object*) $tmp4593));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4594)));
panda$core$String* $tmp4595 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4595));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeNot$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2) {

panda$core$String* local0 = NULL;
// line 1226
panda$core$String* $tmp4596 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4597 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4597));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4596));
*(&local0) = $tmp4596;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4596));
// line 1227
panda$io$IndentedOutputStream** $tmp4598 = &param0->out;
panda$io$IndentedOutputStream* $tmp4599 = *$tmp4598;
$fn4601 $tmp4600 = ($fn4601) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4602 = $tmp4600(param2);
panda$core$String* $tmp4603 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4602);
panda$core$String* $tmp4604 = panda$core$String$convert$R$panda$core$String($tmp4603);
panda$core$String* $tmp4605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4604, &$s4606);
panda$core$String* $tmp4607 = *(&local0);
panda$core$String* $tmp4608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4605, $tmp4607);
panda$core$String* $tmp4609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4608, &$s4610);
panda$core$String* $tmp4611 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4609, $tmp4611);
panda$core$String* $tmp4613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4612, &$s4614);
$fn4616 $tmp4615 = ($fn4616) ((panda$io$OutputStream*) $tmp4599)->$class->vtable[19];
$tmp4615(((panda$io$OutputStream*) $tmp4599), $tmp4613);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4602));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4603));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4604));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4605));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4608));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4609));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4611));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4612));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4613));
// line 1228
panda$collections$HashMap** $tmp4617 = &param0->refs;
panda$collections$HashMap* $tmp4618 = *$tmp4617;
panda$core$String* $tmp4619 = *(&local0);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4620;
$tmp4620 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4620->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4618, ((panda$collections$Key*) $tmp4620), ((panda$core$Object*) $tmp4619));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4620)));
panda$core$String* $tmp4621 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4621));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writePointerAlloc$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$Type* param3) {

panda$core$String* local0 = NULL;
panda$core$Int64 local1;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
// line 1232
panda$core$String* $tmp4622 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4623 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4623));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4622));
*(&local0) = $tmp4622;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4622));
// line 1233
panda$core$Int64 $tmp4624 = org$pandalanguage$pandac$CCodeGenerator$stride$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param3);
*(&local1) = $tmp4624;
// line 1234
panda$core$String* $tmp4625 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4626 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4626));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4625));
*(&local2) = $tmp4625;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4625));
// line 1235
panda$core$String* $tmp4627 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4628 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4628));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4627));
*(&local3) = $tmp4627;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4627));
// line 1236
panda$io$IndentedOutputStream** $tmp4629 = &param0->out;
panda$io$IndentedOutputStream* $tmp4630 = *$tmp4629;
panda$core$String* $tmp4631 = *(&local2);
panda$core$String* $tmp4632 = panda$core$String$convert$R$panda$core$String($tmp4631);
panda$core$String* $tmp4633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4632, &$s4634);
panda$core$String* $tmp4635 = *(&local3);
panda$core$String* $tmp4636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4633, $tmp4635);
panda$core$String* $tmp4637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4636, &$s4638);
panda$core$String* $tmp4639 = *(&local2);
panda$core$String* $tmp4640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4637, $tmp4639);
panda$core$String* $tmp4641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4640, &$s4642);
panda$core$String* $tmp4643 = *(&local0);
panda$core$String* $tmp4644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4641, $tmp4643);
panda$core$String* $tmp4645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4644, &$s4646);
panda$core$Int64 $tmp4647 = *(&local1);
panda$core$String* $tmp4648 = panda$core$Int64$convert$R$panda$core$String($tmp4647);
panda$core$String* $tmp4649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4648, &$s4650);
panda$core$String* $tmp4651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4645, $tmp4649);
$fn4653 $tmp4652 = ($fn4653) ((panda$io$OutputStream*) $tmp4630)->$class->vtable[19];
$tmp4652(((panda$io$OutputStream*) $tmp4630), $tmp4651);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4632));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4633));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4636));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4637));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4640));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4641));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4644));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4645));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4648));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4649));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4651));
// line 1238
panda$collections$HashMap** $tmp4654 = &param0->refs;
panda$collections$HashMap* $tmp4655 = *$tmp4654;
panda$core$String* $tmp4656 = *(&local3);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4657;
$tmp4657 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4657->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4655, ((panda$collections$Key*) $tmp4657), ((panda$core$Object*) $tmp4656));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4657)));
panda$core$String* $tmp4658 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4658));
// unreffing result
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4659 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4659));
// unreffing type
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4660 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4660));
// unreffing countRef
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writePointerDestroy$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1) {

panda$core$String* local0 = NULL;
// line 1242
panda$core$String* $tmp4661 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param1);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4662 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4662));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4661));
*(&local0) = $tmp4661;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4661));
// line 1243
panda$io$IndentedOutputStream** $tmp4663 = &param0->out;
panda$io$IndentedOutputStream* $tmp4664 = *$tmp4663;
panda$core$String* $tmp4665 = *(&local0);
panda$core$String* $tmp4666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4667, $tmp4665);
panda$core$String* $tmp4668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4666, &$s4669);
$fn4671 $tmp4670 = ($fn4671) ((panda$io$OutputStream*) $tmp4664)->$class->vtable[19];
$tmp4670(((panda$io$OutputStream*) $tmp4664), $tmp4668);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4666));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4668));
panda$core$String* $tmp4672 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4672));
// unreffing ptrRef
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writePointerGetIndex$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$IR$Value* param3) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
// line 1247
panda$core$String* $tmp4673 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4674 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4674));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4673));
*(&local0) = $tmp4673;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4673));
// line 1248
panda$core$String* $tmp4675 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param3);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4676 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4676));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4675));
*(&local1) = $tmp4675;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4675));
// line 1249
panda$core$String* $tmp4677 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4678 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4678));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4677));
*(&local2) = $tmp4677;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4677));
// line 1250
panda$io$IndentedOutputStream** $tmp4679 = &param0->out;
panda$io$IndentedOutputStream* $tmp4680 = *$tmp4679;
$fn4682 $tmp4681 = ($fn4682) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4683 = $tmp4681(param2);
panda$collections$ImmutableArray** $tmp4684 = &$tmp4683->subtypes;
panda$collections$ImmutableArray* $tmp4685 = *$tmp4684;
panda$core$Int64 $tmp4686 = (panda$core$Int64) {1};
panda$core$Object* $tmp4687 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp4685, $tmp4686);
panda$core$String* $tmp4688 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp4687));
panda$core$String* $tmp4689 = panda$core$String$convert$R$panda$core$String($tmp4688);
panda$core$String* $tmp4690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4689, &$s4691);
panda$core$String* $tmp4692 = *(&local2);
panda$core$String* $tmp4693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4690, $tmp4692);
panda$core$String* $tmp4694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4693, &$s4695);
panda$core$String* $tmp4696 = *(&local0);
panda$core$String* $tmp4697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4694, $tmp4696);
panda$core$String* $tmp4698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4697, &$s4699);
panda$core$String* $tmp4700 = *(&local1);
panda$core$String* $tmp4701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4698, $tmp4700);
panda$core$String* $tmp4702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4701, &$s4703);
$fn4705 $tmp4704 = ($fn4705) ((panda$io$OutputStream*) $tmp4680)->$class->vtable[19];
$tmp4704(((panda$io$OutputStream*) $tmp4680), $tmp4702);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4683));
panda$core$Panda$unref$panda$core$Object$Q($tmp4687);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4688));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4689));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4690));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4693));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4694));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4697));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4698));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4701));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4702));
// line 1251
panda$collections$HashMap** $tmp4706 = &param0->refs;
panda$collections$HashMap* $tmp4707 = *$tmp4706;
panda$core$String* $tmp4708 = *(&local2);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4709;
$tmp4709 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4709->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4707, ((panda$collections$Key*) $tmp4709), ((panda$core$Object*) $tmp4708));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4709)));
panda$core$String* $tmp4710 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4710));
// unreffing result
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4711 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4711));
// unreffing indexRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4712 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4712));
// unreffing base
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writePointerOffset$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$IR$Value* param3) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
// line 1255
panda$core$String* $tmp4713 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4714 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4714));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4713));
*(&local0) = $tmp4713;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4713));
// line 1256
panda$core$String* $tmp4715 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param3);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4716 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4716));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4715));
*(&local1) = $tmp4715;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4715));
// line 1257
panda$core$String* $tmp4717 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4718 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4718));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4717));
*(&local2) = $tmp4717;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4717));
// line 1258
panda$io$IndentedOutputStream** $tmp4719 = &param0->out;
panda$io$IndentedOutputStream* $tmp4720 = *$tmp4719;
$fn4722 $tmp4721 = ($fn4722) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4723 = $tmp4721(param2);
panda$core$String* $tmp4724 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4723);
panda$core$String* $tmp4725 = panda$core$String$convert$R$panda$core$String($tmp4724);
panda$core$String* $tmp4726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4725, &$s4727);
panda$core$String* $tmp4728 = *(&local2);
panda$core$String* $tmp4729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4726, $tmp4728);
panda$core$String* $tmp4730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4729, &$s4731);
panda$core$String* $tmp4732 = *(&local0);
panda$core$String* $tmp4733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4730, $tmp4732);
panda$core$String* $tmp4734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4733, &$s4735);
panda$core$String* $tmp4736 = *(&local1);
panda$core$String* $tmp4737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4734, $tmp4736);
panda$core$String* $tmp4738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4737, &$s4739);
$fn4741 $tmp4740 = ($fn4741) ((panda$io$OutputStream*) $tmp4720)->$class->vtable[19];
$tmp4740(((panda$io$OutputStream*) $tmp4720), $tmp4738);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4723));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4724));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4725));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4726));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4729));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4730));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4733));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4734));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4737));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4738));
// line 1259
panda$collections$HashMap** $tmp4742 = &param0->refs;
panda$collections$HashMap* $tmp4743 = *$tmp4742;
panda$core$String* $tmp4744 = *(&local2);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4745;
$tmp4745 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4745->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4743, ((panda$collections$Key*) $tmp4745), ((panda$core$Object*) $tmp4744));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4745)));
panda$core$String* $tmp4746 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4746));
// unreffing result
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4747 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4747));
// unreffing offsetRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4748 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4748));
// unreffing base
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writePointerRealloc$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$IR$Value* param4) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$Int64 local3;
panda$core$String* local4 = NULL;
// line 1264
panda$core$String* $tmp4749 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4750 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4750));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4749));
*(&local0) = $tmp4749;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4749));
// line 1265
panda$core$String* $tmp4751 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param3);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4752 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4752));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4751));
*(&local1) = $tmp4751;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4751));
// line 1266
panda$core$String* $tmp4753 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param4);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4754 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4754));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4753));
*(&local2) = $tmp4753;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4753));
// line 1267
$fn4756 $tmp4755 = ($fn4756) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4757 = $tmp4755(param2);
panda$core$Int64 $tmp4758 = org$pandalanguage$pandac$CCodeGenerator$stride$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, $tmp4757);
*(&local3) = $tmp4758;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4757));
// line 1268
panda$core$Int64 $tmp4759 = *(&local3);
panda$core$Int64 $tmp4760 = (panda$core$Int64) {0};
int64_t $tmp4761 = $tmp4759.value;
int64_t $tmp4762 = $tmp4760.value;
bool $tmp4763 = $tmp4761 > $tmp4762;
panda$core$Bit $tmp4764 = (panda$core$Bit) {$tmp4763};
bool $tmp4765 = $tmp4764.value;
if ($tmp4765) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp4766 = (panda$core$Int64) {1268};
$fn4768 $tmp4767 = ($fn4768) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4769 = $tmp4767(param2);
panda$core$String* $tmp4770 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4771, ((panda$core$Object*) $tmp4769));
panda$core$String* $tmp4772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4770, &$s4773);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4774, $tmp4766, $tmp4772);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4769));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4770));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4772));
abort(); // unreachable
block1:;
// line 1269
panda$core$String* $tmp4775 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp4776 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4776));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4775));
*(&local4) = $tmp4775;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4775));
// line 1270
panda$io$IndentedOutputStream** $tmp4777 = &param0->out;
panda$io$IndentedOutputStream* $tmp4778 = *$tmp4777;
$fn4780 $tmp4779 = ($fn4780) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4781 = $tmp4779(param2);
panda$core$String* $tmp4782 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4781);
panda$core$String* $tmp4783 = panda$core$String$convert$R$panda$core$String($tmp4782);
panda$core$String* $tmp4784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4783, &$s4785);
panda$core$String* $tmp4786 = *(&local4);
panda$core$String* $tmp4787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4784, $tmp4786);
panda$core$String* $tmp4788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4787, &$s4789);
$fn4791 $tmp4790 = ($fn4791) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4792 = $tmp4790(param2);
panda$core$String* $tmp4793 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4792);
panda$core$String* $tmp4794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4788, $tmp4793);
panda$core$String* $tmp4795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4794, &$s4796);
panda$core$String* $tmp4797 = *(&local0);
panda$core$String* $tmp4798 = panda$core$String$convert$R$panda$core$String($tmp4797);
panda$core$String* $tmp4799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4798, &$s4800);
panda$core$String* $tmp4801 = *(&local1);
panda$core$String* $tmp4802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4799, $tmp4801);
panda$core$String* $tmp4803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4802, &$s4804);
panda$core$Int64 $tmp4805 = *(&local3);
panda$core$Int64$wrapper* $tmp4806;
$tmp4806 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp4806->value = $tmp4805;
panda$core$String* $tmp4807 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4803, ((panda$core$Object*) $tmp4806));
panda$core$String* $tmp4808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4807, &$s4809);
panda$core$String* $tmp4810 = *(&local2);
panda$core$String* $tmp4811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4808, $tmp4810);
panda$core$String* $tmp4812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4811, &$s4813);
panda$core$Int64 $tmp4814 = *(&local3);
panda$core$Int64$wrapper* $tmp4815;
$tmp4815 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp4815->value = $tmp4814;
panda$core$String* $tmp4816 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4812, ((panda$core$Object*) $tmp4815));
panda$core$String* $tmp4817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4816, &$s4818);
panda$core$String* $tmp4819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4795, $tmp4817);
$fn4821 $tmp4820 = ($fn4821) ((panda$io$OutputStream*) $tmp4778)->$class->vtable[19];
$tmp4820(((panda$io$OutputStream*) $tmp4778), $tmp4819);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4781));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4782));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4783));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4784));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4787));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4788));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4792));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4793));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4794));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4795));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4798));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4799));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4802));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4803));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4806));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4807));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4808));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4811));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4812));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4815));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4816));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4817));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4819));
// line 1272
panda$collections$HashMap** $tmp4822 = &param0->refs;
panda$collections$HashMap* $tmp4823 = *$tmp4822;
panda$core$String* $tmp4824 = *(&local4);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4825;
$tmp4825 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4825->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4823, ((panda$collections$Key*) $tmp4825), ((panda$core$Object*) $tmp4824));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4825)));
panda$core$String* $tmp4826 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4826));
// unreffing result
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp4827 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4827));
// unreffing newCountRef
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4828 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4828));
// unreffing oldCountRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4829 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4829));
// unreffing ptrRef
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writePointerSetIndex$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$IR$Value* param3) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
// line 1276
panda$core$String* $tmp4830 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4831 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4831));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4830));
*(&local0) = $tmp4830;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4830));
// line 1277
panda$core$String* $tmp4832 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param3);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4833 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4833));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4832));
*(&local1) = $tmp4832;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4832));
// line 1278
panda$core$String* $tmp4834 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param1);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4835 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4835));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4834));
*(&local2) = $tmp4834;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4834));
// line 1279
panda$io$IndentedOutputStream** $tmp4836 = &param0->out;
panda$io$IndentedOutputStream* $tmp4837 = *$tmp4836;
panda$core$String* $tmp4838 = *(&local0);
panda$core$String* $tmp4839 = panda$core$String$convert$R$panda$core$String($tmp4838);
panda$core$String* $tmp4840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4839, &$s4841);
panda$core$String* $tmp4842 = *(&local1);
panda$core$String* $tmp4843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4840, $tmp4842);
panda$core$String* $tmp4844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4843, &$s4845);
panda$core$String* $tmp4846 = *(&local2);
panda$core$String* $tmp4847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4844, $tmp4846);
panda$core$String* $tmp4848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4847, &$s4849);
$fn4851 $tmp4850 = ($fn4851) ((panda$io$OutputStream*) $tmp4837)->$class->vtable[19];
$tmp4850(((panda$io$OutputStream*) $tmp4837), $tmp4848);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4839));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4840));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4843));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4844));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4847));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4848));
panda$core$String* $tmp4852 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4852));
// unreffing valueRef
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4853 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4853));
// unreffing indexRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4854 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4854));
// unreffing base
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1) {

// line 1283
panda$core$Bit $tmp4855 = panda$core$Bit$init$builtin_bit(param1 != NULL);
bool $tmp4856 = $tmp4855.value;
if ($tmp4856) goto block1; else goto block3;
block1:;
// line 1284
panda$io$IndentedOutputStream** $tmp4857 = &param0->out;
panda$io$IndentedOutputStream* $tmp4858 = *$tmp4857;
panda$core$String* $tmp4859 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param1);
panda$core$String* $tmp4860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4861, $tmp4859);
panda$core$String* $tmp4862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4860, &$s4863);
$fn4865 $tmp4864 = ($fn4865) ((panda$io$OutputStream*) $tmp4858)->$class->vtable[19];
$tmp4864(((panda$io$OutputStream*) $tmp4858), $tmp4862);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4859));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4860));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4862));
goto block2;
block3:;
// line 1
// line 1287
panda$io$IndentedOutputStream** $tmp4866 = &param0->out;
panda$io$IndentedOutputStream* $tmp4867 = *$tmp4866;
$fn4869 $tmp4868 = ($fn4869) ((panda$io$OutputStream*) $tmp4867)->$class->vtable[19];
$tmp4868(((panda$io$OutputStream*) $tmp4867), &$s4870);
goto block2;
block2:;
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeStaticCall$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$IR$Value$GT(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$MethodDecl* param2, panda$collections$ListView* param3) {

panda$core$Bit local0;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
org$pandalanguage$pandac$IR$Value* local4 = NULL;
// line 1292
panda$core$Weak** $tmp4871 = &param2->owner;
panda$core$Weak* $tmp4872 = *$tmp4871;
panda$core$Object* $tmp4873 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4872);
panda$core$Panda$unref$panda$core$Object$Q($tmp4873);
panda$core$Bit* $tmp4874 = &((org$pandalanguage$pandac$ClassDecl*) $tmp4873)->external;
panda$core$Bit $tmp4875 = *$tmp4874;
bool $tmp4876 = $tmp4875.value;
if ($tmp4876) goto block1; else goto block2;
block1:;
// line 1293
org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(param0, param2);
goto block2;
block2:;
// line 1295
panda$core$Bit $tmp4877 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(param0, param2);
*(&local0) = $tmp4877;
// line 1296
org$pandalanguage$pandac$Type** $tmp4878 = &param2->returnType;
org$pandalanguage$pandac$Type* $tmp4879 = *$tmp4878;
panda$core$String* $tmp4880 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4879);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4881 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4881));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4880));
*(&local1) = $tmp4880;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4880));
// line 1297
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4882 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4882));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4883));
*(&local2) = &$s4884;
// line 1298
*(&local3) = ((panda$core$String*) NULL);
// line 1299
org$pandalanguage$pandac$Type** $tmp4885 = &param2->returnType;
org$pandalanguage$pandac$Type* $tmp4886 = *$tmp4885;
org$pandalanguage$pandac$Type* $tmp4887 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp4888 = ((panda$core$Equatable*) $tmp4886)->$class->itable;
while ($tmp4888->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4888 = $tmp4888->next;
}
$fn4890 $tmp4889 = $tmp4888->methods[1];
panda$core$Bit $tmp4891 = $tmp4889(((panda$core$Equatable*) $tmp4886), ((panda$core$Equatable*) $tmp4887));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4887));
bool $tmp4892 = $tmp4891.value;
if ($tmp4892) goto block3; else goto block4;
block3:;
// line 1300
panda$core$String* $tmp4893 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
panda$core$String* $tmp4894 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4894));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4893));
*(&local3) = $tmp4893;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4893));
// line 1301
panda$core$Bit $tmp4895 = *(&local0);
bool $tmp4896 = $tmp4895.value;
if ($tmp4896) goto block5; else goto block7;
block5:;
// line 1302
panda$io$IndentedOutputStream** $tmp4897 = &param0->out;
panda$io$IndentedOutputStream* $tmp4898 = *$tmp4897;
panda$core$String* $tmp4899 = *(&local1);
panda$core$String* $tmp4900 = panda$core$String$convert$R$panda$core$String($tmp4899);
panda$core$String* $tmp4901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4900, &$s4902);
panda$core$String* $tmp4903 = *(&local3);
panda$core$String* $tmp4904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4901, $tmp4903);
panda$core$String* $tmp4905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4904, &$s4906);
$fn4908 $tmp4907 = ($fn4908) ((panda$io$OutputStream*) $tmp4898)->$class->vtable[19];
$tmp4907(((panda$io$OutputStream*) $tmp4898), $tmp4905);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4900));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4901));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4904));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4905));
goto block6;
block7:;
// line 1
// line 1305
panda$io$IndentedOutputStream** $tmp4909 = &param0->out;
panda$io$IndentedOutputStream* $tmp4910 = *$tmp4909;
panda$core$String* $tmp4911 = *(&local1);
panda$core$String* $tmp4912 = panda$core$String$convert$R$panda$core$String($tmp4911);
panda$core$String* $tmp4913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4912, &$s4914);
panda$core$String* $tmp4915 = *(&local3);
panda$core$String* $tmp4916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4913, $tmp4915);
panda$core$String* $tmp4917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4916, &$s4918);
$fn4920 $tmp4919 = ($fn4920) ((panda$io$OutputStream*) $tmp4910)->$class->vtable[17];
$tmp4919(((panda$io$OutputStream*) $tmp4910), $tmp4917);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4912));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4913));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4916));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4917));
goto block6;
block6:;
// line 1307
panda$collections$HashMap** $tmp4921 = &param0->refs;
panda$collections$HashMap* $tmp4922 = *$tmp4921;
panda$core$String* $tmp4923 = *(&local3);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4924;
$tmp4924 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4924->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4922, ((panda$collections$Key*) $tmp4924), ((panda$core$Object*) $tmp4923));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4924)));
goto block4;
block4:;
// line 1309
panda$io$IndentedOutputStream** $tmp4925 = &param0->out;
panda$io$IndentedOutputStream* $tmp4926 = *$tmp4925;
panda$core$String* $tmp4927 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param2);
panda$core$String* $tmp4928 = panda$core$String$convert$R$panda$core$String($tmp4927);
panda$core$String* $tmp4929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4928, &$s4930);
$fn4932 $tmp4931 = ($fn4932) ((panda$io$OutputStream*) $tmp4926)->$class->vtable[17];
$tmp4931(((panda$io$OutputStream*) $tmp4926), $tmp4929);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4927));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4928));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4929));
// line 1310
panda$core$Bit $tmp4933 = *(&local0);
bool $tmp4934 = $tmp4933.value;
if ($tmp4934) goto block8; else goto block9;
block8:;
// line 1311
panda$io$IndentedOutputStream** $tmp4935 = &param0->out;
panda$io$IndentedOutputStream* $tmp4936 = *$tmp4935;
panda$core$String* $tmp4937 = *(&local3);
panda$core$String* $tmp4938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4939, $tmp4937);
panda$core$String* $tmp4940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4938, &$s4941);
$fn4943 $tmp4942 = ($fn4943) ((panda$io$OutputStream*) $tmp4936)->$class->vtable[17];
$tmp4942(((panda$io$OutputStream*) $tmp4936), $tmp4940);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4938));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4940));
// line 1312
panda$core$String* $tmp4944 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4944));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4945));
*(&local2) = &$s4946;
goto block9;
block9:;
// line 1314
ITable* $tmp4947 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp4947->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp4947 = $tmp4947->next;
}
$fn4949 $tmp4948 = $tmp4947->methods[0];
panda$collections$Iterator* $tmp4950 = $tmp4948(((panda$collections$Iterable*) param3));
goto block10;
block10:;
ITable* $tmp4951 = $tmp4950->$class->itable;
while ($tmp4951->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp4951 = $tmp4951->next;
}
$fn4953 $tmp4952 = $tmp4951->methods[0];
panda$core$Bit $tmp4954 = $tmp4952($tmp4950);
bool $tmp4955 = $tmp4954.value;
if ($tmp4955) goto block12; else goto block11;
block11:;
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
ITable* $tmp4956 = $tmp4950->$class->itable;
while ($tmp4956->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp4956 = $tmp4956->next;
}
$fn4958 $tmp4957 = $tmp4956->methods[1];
panda$core$Object* $tmp4959 = $tmp4957($tmp4950);
org$pandalanguage$pandac$IR$Value* $tmp4960 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4960));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) $tmp4959)));
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) $tmp4959);
// line 1315
panda$io$IndentedOutputStream** $tmp4961 = &param0->out;
panda$io$IndentedOutputStream* $tmp4962 = *$tmp4961;
panda$core$String* $tmp4963 = *(&local2);
$fn4965 $tmp4964 = ($fn4965) ((panda$io$OutputStream*) $tmp4962)->$class->vtable[17];
$tmp4964(((panda$io$OutputStream*) $tmp4962), $tmp4963);
// line 1316
panda$io$IndentedOutputStream** $tmp4966 = &param0->out;
panda$io$IndentedOutputStream* $tmp4967 = *$tmp4966;
org$pandalanguage$pandac$IR$Value* $tmp4968 = *(&local4);
panda$core$String* $tmp4969 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, $tmp4968);
$fn4971 $tmp4970 = ($fn4971) ((panda$io$OutputStream*) $tmp4967)->$class->vtable[17];
$tmp4970(((panda$io$OutputStream*) $tmp4967), $tmp4969);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4969));
// line 1317
panda$core$String* $tmp4972 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4972));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4973));
*(&local2) = &$s4974;
panda$core$Panda$unref$panda$core$Object$Q($tmp4959);
org$pandalanguage$pandac$IR$Value* $tmp4975 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4975));
// unreffing a
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block10;
block12:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4950));
// line 1319
panda$io$IndentedOutputStream** $tmp4976 = &param0->out;
panda$io$IndentedOutputStream* $tmp4977 = *$tmp4976;
$fn4979 $tmp4978 = ($fn4979) ((panda$io$OutputStream*) $tmp4977)->$class->vtable[19];
$tmp4978(((panda$io$OutputStream*) $tmp4977), &$s4980);
panda$core$String* $tmp4981 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4981));
// unreffing result
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4982 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4982));
// unreffing separator
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4983 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4983));
// unreffing actualResultType
*(&local1) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeStore$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1, org$pandalanguage$pandac$IR$Value* param2) {

// line 1323
panda$io$IndentedOutputStream** $tmp4984 = &param0->out;
panda$io$IndentedOutputStream* $tmp4985 = *$tmp4984;
panda$core$String* $tmp4986 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4988, $tmp4986);
panda$core$String* $tmp4989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4987, &$s4990);
panda$core$String* $tmp4991 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param1);
panda$core$String* $tmp4992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4989, $tmp4991);
panda$core$String* $tmp4993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4992, &$s4994);
$fn4996 $tmp4995 = ($fn4996) ((panda$io$OutputStream*) $tmp4985)->$class->vtable[19];
$tmp4995(((panda$io$OutputStream*) $tmp4985), $tmp4993);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4986));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4987));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4989));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4991));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4992));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4993));
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Statement(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Statement* param2) {

org$pandalanguage$pandac$Position local0;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
org$pandalanguage$pandac$parser$Token$Kind local2;
org$pandalanguage$pandac$IR$Value* local3 = NULL;
org$pandalanguage$pandac$Type* local4 = NULL;
org$pandalanguage$pandac$Position local5;
org$pandalanguage$pandac$IR$Block$ID local6;
org$pandalanguage$pandac$Position local7;
org$pandalanguage$pandac$IR$Value* local8 = NULL;
org$pandalanguage$pandac$Type* local9 = NULL;
panda$core$String* local10 = NULL;
org$pandalanguage$pandac$Position local11;
org$pandalanguage$pandac$IR$Value* local12 = NULL;
org$pandalanguage$pandac$IR$Block$ID local13;
org$pandalanguage$pandac$IR$Block$ID local14;
org$pandalanguage$pandac$Position local15;
org$pandalanguage$pandac$ClassDecl* local16 = NULL;
org$pandalanguage$pandac$Position local17;
org$pandalanguage$pandac$ClassDecl* local18 = NULL;
panda$collections$ImmutableArray* local19 = NULL;
org$pandalanguage$pandac$Position local20;
org$pandalanguage$pandac$IR$Value* local21 = NULL;
panda$collections$ImmutableArray* local22 = NULL;
org$pandalanguage$pandac$Position local23;
org$pandalanguage$pandac$IR$Value* local24 = NULL;
org$pandalanguage$pandac$FieldDecl* local25 = NULL;
org$pandalanguage$pandac$Position local26;
org$pandalanguage$pandac$IR$Value* local27 = NULL;
org$pandalanguage$pandac$ChoiceCase* local28 = NULL;
panda$core$Int64 local29;
org$pandalanguage$pandac$Position local30;
org$pandalanguage$pandac$IR$Value* local31 = NULL;
org$pandalanguage$pandac$FieldDecl* local32 = NULL;
org$pandalanguage$pandac$Position local33;
org$pandalanguage$pandac$IR$Value* local34 = NULL;
org$pandalanguage$pandac$ClassDecl* local35 = NULL;
panda$core$Int64 local36;
org$pandalanguage$pandac$Type* local37 = NULL;
org$pandalanguage$pandac$Position local38;
org$pandalanguage$pandac$IR$Value* local39 = NULL;
panda$core$Int64 local40;
org$pandalanguage$pandac$Type* local41 = NULL;
org$pandalanguage$pandac$Position local42;
org$pandalanguage$pandac$IR$Value* local43 = NULL;
org$pandalanguage$pandac$Position local44;
org$pandalanguage$pandac$IR$Value* local45 = NULL;
org$pandalanguage$pandac$Position local46;
org$pandalanguage$pandac$IR$Value* local47 = NULL;
org$pandalanguage$pandac$Position local48;
org$pandalanguage$pandac$IR$Value* local49 = NULL;
org$pandalanguage$pandac$Type* local50 = NULL;
org$pandalanguage$pandac$Position local51;
org$pandalanguage$pandac$IR$Value* local52 = NULL;
org$pandalanguage$pandac$Position local53;
org$pandalanguage$pandac$IR$Value* local54 = NULL;
org$pandalanguage$pandac$IR$Value* local55 = NULL;
org$pandalanguage$pandac$Position local56;
org$pandalanguage$pandac$IR$Value* local57 = NULL;
org$pandalanguage$pandac$IR$Value* local58 = NULL;
org$pandalanguage$pandac$Position local59;
org$pandalanguage$pandac$IR$Value* local60 = NULL;
org$pandalanguage$pandac$IR$Value* local61 = NULL;
org$pandalanguage$pandac$IR$Value* local62 = NULL;
org$pandalanguage$pandac$Position local63;
org$pandalanguage$pandac$IR$Value* local64 = NULL;
org$pandalanguage$pandac$IR$Value* local65 = NULL;
org$pandalanguage$pandac$IR$Value* local66 = NULL;
org$pandalanguage$pandac$Position local67;
org$pandalanguage$pandac$IR$Value* local68 = NULL;
org$pandalanguage$pandac$Position local69;
org$pandalanguage$pandac$MethodDecl* local70 = NULL;
panda$collections$ImmutableArray* local71 = NULL;
org$pandalanguage$pandac$Position local72;
org$pandalanguage$pandac$IR$Value* local73 = NULL;
org$pandalanguage$pandac$IR$Value* local74 = NULL;
org$pandalanguage$pandac$Position local75;
// line 1327
panda$core$Int64* $tmp4997 = &param2->$rawValue;
panda$core$Int64 $tmp4998 = *$tmp4997;
panda$core$Int64 $tmp4999 = (panda$core$Int64) {0};
panda$core$Bit $tmp5000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp4999);
bool $tmp5001 = $tmp5000.value;
if ($tmp5001) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp5002 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5003 = *$tmp5002;
*(&local0) = $tmp5003;
org$pandalanguage$pandac$IR$Value** $tmp5004 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5005 = *$tmp5004;
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5006 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5006));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5005));
*(&local1) = $tmp5005;
org$pandalanguage$pandac$parser$Token$Kind* $tmp5007 = (org$pandalanguage$pandac$parser$Token$Kind*) (param2->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp5008 = *$tmp5007;
*(&local2) = $tmp5008;
org$pandalanguage$pandac$IR$Value** $tmp5009 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp5010 = *$tmp5009;
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5011 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5011));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5010));
*(&local3) = $tmp5010;
org$pandalanguage$pandac$Type** $tmp5012 = (org$pandalanguage$pandac$Type**) (param2->$data + 40);
org$pandalanguage$pandac$Type* $tmp5013 = *$tmp5012;
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp5014 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5014));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5013));
*(&local4) = $tmp5013;
// line 1329
org$pandalanguage$pandac$IR$Value* $tmp5015 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp5016 = *(&local2);
org$pandalanguage$pandac$IR$Value* $tmp5017 = *(&local3);
org$pandalanguage$pandac$Type* $tmp5018 = *(&local4);
org$pandalanguage$pandac$CCodeGenerator$writeBinary$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(param0, param1, $tmp5015, $tmp5016, $tmp5017, $tmp5018);
org$pandalanguage$pandac$Type* $tmp5019 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5019));
// unreffing type
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5020 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5020));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5021 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5021));
// unreffing left
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp5022 = (panda$core$Int64) {1};
panda$core$Bit $tmp5023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5022);
bool $tmp5024 = $tmp5023.value;
if ($tmp5024) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp5025 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5026 = *$tmp5025;
*(&local5) = $tmp5026;
org$pandalanguage$pandac$IR$Block$ID* $tmp5027 = (org$pandalanguage$pandac$IR$Block$ID*) (param2->$data + 16);
org$pandalanguage$pandac$IR$Block$ID $tmp5028 = *$tmp5027;
*(&local6) = $tmp5028;
// line 1331
org$pandalanguage$pandac$IR$Block$ID $tmp5029 = *(&local6);
org$pandalanguage$pandac$CCodeGenerator$writeBranch$org$pandalanguage$pandac$IR$Block$ID(param0, $tmp5029);
goto block1;
block5:;
panda$core$Int64 $tmp5030 = (panda$core$Int64) {2};
panda$core$Bit $tmp5031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5030);
bool $tmp5032 = $tmp5031.value;
if ($tmp5032) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Position* $tmp5033 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5034 = *$tmp5033;
*(&local7) = $tmp5034;
org$pandalanguage$pandac$IR$Value** $tmp5035 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5036 = *$tmp5035;
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5037 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5037));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5036));
*(&local8) = $tmp5036;
org$pandalanguage$pandac$Type** $tmp5038 = (org$pandalanguage$pandac$Type**) (param2->$data + 24);
org$pandalanguage$pandac$Type* $tmp5039 = *$tmp5038;
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp5040 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5040));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5039));
*(&local9) = $tmp5039;
// line 1333
org$pandalanguage$pandac$IR$Value* $tmp5041 = *(&local8);
org$pandalanguage$pandac$Type* $tmp5042 = *(&local9);
org$pandalanguage$pandac$CCodeGenerator$writeCast$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(param0, param1, $tmp5041, $tmp5042);
org$pandalanguage$pandac$Type* $tmp5043 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5043));
// unreffing type
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5044 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5044));
// unreffing value
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block7:;
panda$core$Int64 $tmp5045 = (panda$core$Int64) {3};
panda$core$Bit $tmp5046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5045);
bool $tmp5047 = $tmp5046.value;
if ($tmp5047) goto block8; else goto block9;
block8:;
panda$core$String** $tmp5048 = (panda$core$String**) (param2->$data + 0);
panda$core$String* $tmp5049 = *$tmp5048;
*(&local10) = ((panda$core$String*) NULL);
panda$core$String* $tmp5050 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5050));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5049));
*(&local10) = $tmp5049;
// line 1335
panda$io$IndentedOutputStream** $tmp5051 = &param0->out;
panda$io$IndentedOutputStream* $tmp5052 = *$tmp5051;
panda$core$String* $tmp5053 = *(&local10);
panda$core$String* $tmp5054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5055, $tmp5053);
panda$core$String* $tmp5056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5054, &$s5057);
$fn5059 $tmp5058 = ($fn5059) ((panda$io$OutputStream*) $tmp5052)->$class->vtable[19];
$tmp5058(((panda$io$OutputStream*) $tmp5052), $tmp5056);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5054));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5056));
panda$core$String* $tmp5060 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5060));
// unreffing text
*(&local10) = ((panda$core$String*) NULL);
goto block1;
block9:;
panda$core$Int64 $tmp5061 = (panda$core$Int64) {5};
panda$core$Bit $tmp5062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5061);
bool $tmp5063 = $tmp5062.value;
if ($tmp5063) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp5064 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5065 = *$tmp5064;
*(&local11) = $tmp5065;
org$pandalanguage$pandac$IR$Value** $tmp5066 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5067 = *$tmp5066;
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5068 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5068));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5067));
*(&local12) = $tmp5067;
org$pandalanguage$pandac$IR$Block$ID* $tmp5069 = (org$pandalanguage$pandac$IR$Block$ID*) (param2->$data + 24);
org$pandalanguage$pandac$IR$Block$ID $tmp5070 = *$tmp5069;
*(&local13) = $tmp5070;
org$pandalanguage$pandac$IR$Block$ID* $tmp5071 = (org$pandalanguage$pandac$IR$Block$ID*) (param2->$data + 32);
org$pandalanguage$pandac$IR$Block$ID $tmp5072 = *$tmp5071;
*(&local14) = $tmp5072;
// line 1337
org$pandalanguage$pandac$IR$Value* $tmp5073 = *(&local12);
org$pandalanguage$pandac$IR$Block$ID $tmp5074 = *(&local13);
org$pandalanguage$pandac$IR$Block$ID $tmp5075 = *(&local14);
org$pandalanguage$pandac$CCodeGenerator$writeConditionalBranch$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID(param0, $tmp5073, $tmp5074, $tmp5075);
org$pandalanguage$pandac$IR$Value* $tmp5076 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5076));
// unreffing test
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block11:;
panda$core$Int64 $tmp5077 = (panda$core$Int64) {6};
panda$core$Bit $tmp5078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5077);
bool $tmp5079 = $tmp5078.value;
if ($tmp5079) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp5080 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5081 = *$tmp5080;
*(&local15) = $tmp5081;
org$pandalanguage$pandac$ClassDecl** $tmp5082 = (org$pandalanguage$pandac$ClassDecl**) (param2->$data + 16);
org$pandalanguage$pandac$ClassDecl* $tmp5083 = *$tmp5082;
*(&local16) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp5084 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5084));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5083));
*(&local16) = $tmp5083;
// line 1339
org$pandalanguage$pandac$ClassDecl* $tmp5085 = *(&local16);
org$pandalanguage$pandac$CCodeGenerator$writeConstruct$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$ClassDecl(param0, param1, $tmp5085);
org$pandalanguage$pandac$ClassDecl* $tmp5086 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5086));
// unreffing cl
*(&local16) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block1;
block13:;
panda$core$Int64 $tmp5087 = (panda$core$Int64) {7};
panda$core$Bit $tmp5088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5087);
bool $tmp5089 = $tmp5088.value;
if ($tmp5089) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$Position* $tmp5090 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5091 = *$tmp5090;
*(&local17) = $tmp5091;
org$pandalanguage$pandac$ClassDecl** $tmp5092 = (org$pandalanguage$pandac$ClassDecl**) (param2->$data + 16);
org$pandalanguage$pandac$ClassDecl* $tmp5093 = *$tmp5092;
*(&local18) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp5094 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5094));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5093));
*(&local18) = $tmp5093;
panda$collections$ImmutableArray** $tmp5095 = (panda$collections$ImmutableArray**) (param2->$data + 24);
panda$collections$ImmutableArray* $tmp5096 = *$tmp5095;
*(&local19) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5097 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5097));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5096));
*(&local19) = $tmp5096;
// line 1341
org$pandalanguage$pandac$ClassDecl* $tmp5098 = *(&local18);
panda$collections$ImmutableArray* $tmp5099 = *(&local19);
org$pandalanguage$pandac$CCodeGenerator$writeCreateStruct$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$ClassDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IR$Value$GT(param0, param1, $tmp5098, $tmp5099);
panda$collections$ImmutableArray* $tmp5100 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5100));
// unreffing args
*(&local19) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp5101 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5101));
// unreffing cl
*(&local18) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block1;
block15:;
panda$core$Int64 $tmp5102 = (panda$core$Int64) {8};
panda$core$Bit $tmp5103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5102);
bool $tmp5104 = $tmp5103.value;
if ($tmp5104) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Position* $tmp5105 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5106 = *$tmp5105;
*(&local20) = $tmp5106;
org$pandalanguage$pandac$IR$Value** $tmp5107 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5108 = *$tmp5107;
*(&local21) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5109 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5109));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5108));
*(&local21) = $tmp5108;
panda$collections$ImmutableArray** $tmp5110 = (panda$collections$ImmutableArray**) (param2->$data + 24);
panda$collections$ImmutableArray* $tmp5111 = *$tmp5110;
*(&local22) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5112 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5112));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5111));
*(&local22) = $tmp5111;
// line 1343
org$pandalanguage$pandac$IR$Value* $tmp5113 = *(&local21);
panda$collections$ImmutableArray* $tmp5114 = *(&local22);
org$pandalanguage$pandac$CCodeGenerator$writeDynamicCall$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$IR$Value$GT(param0, param1, $tmp5113, ((panda$collections$ListView*) $tmp5114));
panda$collections$ImmutableArray* $tmp5115 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5115));
// unreffing args
*(&local22) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5116 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5116));
// unreffing m
*(&local21) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block17:;
panda$core$Int64 $tmp5117 = (panda$core$Int64) {9};
panda$core$Bit $tmp5118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5117);
bool $tmp5119 = $tmp5118.value;
if ($tmp5119) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp5120 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5121 = *$tmp5120;
*(&local23) = $tmp5121;
org$pandalanguage$pandac$IR$Value** $tmp5122 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5123 = *$tmp5122;
*(&local24) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5124 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5124));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5123));
*(&local24) = $tmp5123;
org$pandalanguage$pandac$FieldDecl** $tmp5125 = (org$pandalanguage$pandac$FieldDecl**) (param2->$data + 24);
org$pandalanguage$pandac$FieldDecl* $tmp5126 = *$tmp5125;
*(&local25) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp5127 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5127));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5126));
*(&local25) = $tmp5126;
// line 1345
org$pandalanguage$pandac$IR$Value* $tmp5128 = *(&local24);
org$pandalanguage$pandac$FieldDecl* $tmp5129 = *(&local25);
org$pandalanguage$pandac$CCodeGenerator$writeExtractField$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl(param0, param1, $tmp5128, $tmp5129);
org$pandalanguage$pandac$FieldDecl* $tmp5130 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5130));
// unreffing field
*(&local25) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5131 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5131));
// unreffing target
*(&local24) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block19:;
panda$core$Int64 $tmp5132 = (panda$core$Int64) {4};
panda$core$Bit $tmp5133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5132);
bool $tmp5134 = $tmp5133.value;
if ($tmp5134) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp5135 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5136 = *$tmp5135;
*(&local26) = $tmp5136;
org$pandalanguage$pandac$IR$Value** $tmp5137 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5138 = *$tmp5137;
*(&local27) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5139 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5139));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5138));
*(&local27) = $tmp5138;
org$pandalanguage$pandac$ChoiceCase** $tmp5140 = (org$pandalanguage$pandac$ChoiceCase**) (param2->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp5141 = *$tmp5140;
*(&local28) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$ChoiceCase* $tmp5142 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5142));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5141));
*(&local28) = $tmp5141;
panda$core$Int64* $tmp5143 = (panda$core$Int64*) (param2->$data + 32);
panda$core$Int64 $tmp5144 = *$tmp5143;
*(&local29) = $tmp5144;
// line 1347
org$pandalanguage$pandac$IR$Value* $tmp5145 = *(&local27);
org$pandalanguage$pandac$ChoiceCase* $tmp5146 = *(&local28);
panda$core$Int64 $tmp5147 = *(&local29);
org$pandalanguage$pandac$CCodeGenerator$writeGetChoiceFieldPointer$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64(param0, param1, $tmp5145, $tmp5146, $tmp5147);
org$pandalanguage$pandac$ChoiceCase* $tmp5148 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5148));
// unreffing cc
*(&local28) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5149 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5149));
// unreffing target
*(&local27) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block21:;
panda$core$Int64 $tmp5150 = (panda$core$Int64) {10};
panda$core$Bit $tmp5151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5150);
bool $tmp5152 = $tmp5151.value;
if ($tmp5152) goto block22; else goto block23;
block22:;
org$pandalanguage$pandac$Position* $tmp5153 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5154 = *$tmp5153;
*(&local30) = $tmp5154;
org$pandalanguage$pandac$IR$Value** $tmp5155 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5156 = *$tmp5155;
*(&local31) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5157 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5157));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5156));
*(&local31) = $tmp5156;
org$pandalanguage$pandac$FieldDecl** $tmp5158 = (org$pandalanguage$pandac$FieldDecl**) (param2->$data + 24);
org$pandalanguage$pandac$FieldDecl* $tmp5159 = *$tmp5158;
*(&local32) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp5160 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5160));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5159));
*(&local32) = $tmp5159;
// line 1349
org$pandalanguage$pandac$IR$Value* $tmp5161 = *(&local31);
org$pandalanguage$pandac$FieldDecl* $tmp5162 = *(&local32);
org$pandalanguage$pandac$CCodeGenerator$writeGetFieldPointer$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl(param0, param1, $tmp5161, $tmp5162);
org$pandalanguage$pandac$FieldDecl* $tmp5163 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5163));
// unreffing field
*(&local32) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5164 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5164));
// unreffing target
*(&local31) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block23:;
panda$core$Int64 $tmp5165 = (panda$core$Int64) {12};
panda$core$Bit $tmp5166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5165);
bool $tmp5167 = $tmp5166.value;
if ($tmp5167) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp5168 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5169 = *$tmp5168;
*(&local33) = $tmp5169;
org$pandalanguage$pandac$IR$Value** $tmp5170 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5171 = *$tmp5170;
*(&local34) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5172 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5172));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5171));
*(&local34) = $tmp5171;
org$pandalanguage$pandac$ClassDecl** $tmp5173 = (org$pandalanguage$pandac$ClassDecl**) (param2->$data + 24);
org$pandalanguage$pandac$ClassDecl* $tmp5174 = *$tmp5173;
*(&local35) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp5175 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5175));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5174));
*(&local35) = $tmp5174;
panda$core$Int64* $tmp5176 = (panda$core$Int64*) (param2->$data + 32);
panda$core$Int64 $tmp5177 = *$tmp5176;
*(&local36) = $tmp5177;
org$pandalanguage$pandac$Type** $tmp5178 = (org$pandalanguage$pandac$Type**) (param2->$data + 40);
org$pandalanguage$pandac$Type* $tmp5179 = *$tmp5178;
*(&local37) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp5180 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5180));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5179));
*(&local37) = $tmp5179;
// line 1351
org$pandalanguage$pandac$IR$Value* $tmp5181 = *(&local34);
org$pandalanguage$pandac$ClassDecl* $tmp5182 = *(&local35);
panda$core$Int64 $tmp5183 = *(&local36);
org$pandalanguage$pandac$Type* $tmp5184 = *(&local37);
org$pandalanguage$pandac$CCodeGenerator$writeGetInterfaceMethod$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$org$pandalanguage$pandac$Type(param0, param1, $tmp5181, $tmp5182, $tmp5183, $tmp5184);
org$pandalanguage$pandac$Type* $tmp5185 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5185));
// unreffing type
*(&local37) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp5186 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5186));
// unreffing cl
*(&local35) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5187 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5187));
// unreffing value
*(&local34) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block25:;
panda$core$Int64 $tmp5188 = (panda$core$Int64) {11};
panda$core$Bit $tmp5189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5188);
bool $tmp5190 = $tmp5189.value;
if ($tmp5190) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$Position* $tmp5191 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5192 = *$tmp5191;
*(&local38) = $tmp5192;
org$pandalanguage$pandac$IR$Value** $tmp5193 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5194 = *$tmp5193;
*(&local39) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5195 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5195));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5194));
*(&local39) = $tmp5194;
panda$core$Int64* $tmp5196 = (panda$core$Int64*) (param2->$data + 24);
panda$core$Int64 $tmp5197 = *$tmp5196;
*(&local40) = $tmp5197;
org$pandalanguage$pandac$Type** $tmp5198 = (org$pandalanguage$pandac$Type**) (param2->$data + 32);
org$pandalanguage$pandac$Type* $tmp5199 = *$tmp5198;
*(&local41) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp5200 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5200));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5199));
*(&local41) = $tmp5199;
// line 1353
org$pandalanguage$pandac$IR$Value* $tmp5201 = *(&local39);
panda$core$Int64 $tmp5202 = *(&local40);
org$pandalanguage$pandac$Type* $tmp5203 = *(&local41);
org$pandalanguage$pandac$CCodeGenerator$writeGetVirtualMethod$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$panda$core$Int64$org$pandalanguage$pandac$Type(param0, param1, $tmp5201, $tmp5202, $tmp5203);
org$pandalanguage$pandac$Type* $tmp5204 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5204));
// unreffing type
*(&local41) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5205 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5205));
// unreffing value
*(&local39) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block27:;
panda$core$Int64 $tmp5206 = (panda$core$Int64) {13};
panda$core$Bit $tmp5207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5206);
bool $tmp5208 = $tmp5207.value;
if ($tmp5208) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$Position* $tmp5209 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5210 = *$tmp5209;
*(&local42) = $tmp5210;
org$pandalanguage$pandac$IR$Value** $tmp5211 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5212 = *$tmp5211;
*(&local43) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5213 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5213));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5212));
*(&local43) = $tmp5212;
// line 1355
org$pandalanguage$pandac$IR$Value* $tmp5214 = *(&local43);
org$pandalanguage$pandac$CCodeGenerator$writeLoad$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp5214);
org$pandalanguage$pandac$IR$Value* $tmp5215 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5215));
// unreffing ptr
*(&local43) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block29:;
panda$core$Int64 $tmp5216 = (panda$core$Int64) {14};
panda$core$Bit $tmp5217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5216);
bool $tmp5218 = $tmp5217.value;
if ($tmp5218) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Position* $tmp5219 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5220 = *$tmp5219;
*(&local44) = $tmp5220;
org$pandalanguage$pandac$IR$Value** $tmp5221 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5222 = *$tmp5221;
*(&local45) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5223 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5223));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5222));
*(&local45) = $tmp5222;
// line 1357
org$pandalanguage$pandac$IR$Value* $tmp5224 = *(&local45);
org$pandalanguage$pandac$CCodeGenerator$writeNegate$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp5224);
org$pandalanguage$pandac$IR$Value* $tmp5225 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5225));
// unreffing value
*(&local45) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block31:;
panda$core$Int64 $tmp5226 = (panda$core$Int64) {15};
panda$core$Bit $tmp5227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5226);
bool $tmp5228 = $tmp5227.value;
if ($tmp5228) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$Position* $tmp5229 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5230 = *$tmp5229;
*(&local46) = $tmp5230;
org$pandalanguage$pandac$IR$Value** $tmp5231 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5232 = *$tmp5231;
*(&local47) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5233 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5233));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5232));
*(&local47) = $tmp5232;
// line 1359
org$pandalanguage$pandac$IR$Value* $tmp5234 = *(&local47);
org$pandalanguage$pandac$CCodeGenerator$writeNot$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp5234);
org$pandalanguage$pandac$IR$Value* $tmp5235 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5235));
// unreffing value
*(&local47) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block33:;
panda$core$Int64 $tmp5236 = (panda$core$Int64) {16};
panda$core$Bit $tmp5237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5236);
bool $tmp5238 = $tmp5237.value;
if ($tmp5238) goto block34; else goto block35;
block34:;
org$pandalanguage$pandac$Position* $tmp5239 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5240 = *$tmp5239;
*(&local48) = $tmp5240;
org$pandalanguage$pandac$IR$Value** $tmp5241 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5242 = *$tmp5241;
*(&local49) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5243 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5243));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5242));
*(&local49) = $tmp5242;
org$pandalanguage$pandac$Type** $tmp5244 = (org$pandalanguage$pandac$Type**) (param2->$data + 24);
org$pandalanguage$pandac$Type* $tmp5245 = *$tmp5244;
*(&local50) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp5246 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5246));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5245));
*(&local50) = $tmp5245;
// line 1361
org$pandalanguage$pandac$IR$Value* $tmp5247 = *(&local49);
org$pandalanguage$pandac$Type* $tmp5248 = *(&local50);
org$pandalanguage$pandac$CCodeGenerator$writePointerAlloc$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(param0, param1, $tmp5247, $tmp5248);
org$pandalanguage$pandac$Type* $tmp5249 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5249));
// unreffing type
*(&local50) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5250 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5250));
// unreffing count
*(&local49) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block35:;
panda$core$Int64 $tmp5251 = (panda$core$Int64) {17};
panda$core$Bit $tmp5252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5251);
bool $tmp5253 = $tmp5252.value;
if ($tmp5253) goto block36; else goto block37;
block36:;
org$pandalanguage$pandac$Position* $tmp5254 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5255 = *$tmp5254;
*(&local51) = $tmp5255;
org$pandalanguage$pandac$IR$Value** $tmp5256 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5257 = *$tmp5256;
*(&local52) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5258 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5258));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5257));
*(&local52) = $tmp5257;
// line 1363
org$pandalanguage$pandac$IR$Value* $tmp5259 = *(&local52);
org$pandalanguage$pandac$CCodeGenerator$writePointerDestroy$org$pandalanguage$pandac$IR$Value(param0, $tmp5259);
org$pandalanguage$pandac$IR$Value* $tmp5260 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5260));
// unreffing ptr
*(&local52) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block37:;
panda$core$Int64 $tmp5261 = (panda$core$Int64) {19};
panda$core$Bit $tmp5262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5261);
bool $tmp5263 = $tmp5262.value;
if ($tmp5263) goto block38; else goto block39;
block38:;
org$pandalanguage$pandac$Position* $tmp5264 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5265 = *$tmp5264;
*(&local53) = $tmp5265;
org$pandalanguage$pandac$IR$Value** $tmp5266 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5267 = *$tmp5266;
*(&local54) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5268 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5268));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5267));
*(&local54) = $tmp5267;
org$pandalanguage$pandac$IR$Value** $tmp5269 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp5270 = *$tmp5269;
*(&local55) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5271 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5271));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5270));
*(&local55) = $tmp5270;
// line 1365
org$pandalanguage$pandac$IR$Value* $tmp5272 = *(&local54);
org$pandalanguage$pandac$IR$Value* $tmp5273 = *(&local55);
org$pandalanguage$pandac$CCodeGenerator$writePointerGetIndex$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp5272, $tmp5273);
org$pandalanguage$pandac$IR$Value* $tmp5274 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5274));
// unreffing index
*(&local55) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5275 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5275));
// unreffing ptr
*(&local54) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block39:;
panda$core$Int64 $tmp5276 = (panda$core$Int64) {20};
panda$core$Bit $tmp5277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5276);
bool $tmp5278 = $tmp5277.value;
if ($tmp5278) goto block40; else goto block41;
block40:;
org$pandalanguage$pandac$Position* $tmp5279 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5280 = *$tmp5279;
*(&local56) = $tmp5280;
org$pandalanguage$pandac$IR$Value** $tmp5281 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5282 = *$tmp5281;
*(&local57) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5283 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5283));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5282));
*(&local57) = $tmp5282;
org$pandalanguage$pandac$IR$Value** $tmp5284 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp5285 = *$tmp5284;
*(&local58) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5286 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5286));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5285));
*(&local58) = $tmp5285;
// line 1367
org$pandalanguage$pandac$IR$Value* $tmp5287 = *(&local57);
org$pandalanguage$pandac$IR$Value* $tmp5288 = *(&local58);
org$pandalanguage$pandac$CCodeGenerator$writePointerOffset$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp5287, $tmp5288);
org$pandalanguage$pandac$IR$Value* $tmp5289 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5289));
// unreffing offset
*(&local58) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5290 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5290));
// unreffing ptr
*(&local57) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block41:;
panda$core$Int64 $tmp5291 = (panda$core$Int64) {21};
panda$core$Bit $tmp5292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5291);
bool $tmp5293 = $tmp5292.value;
if ($tmp5293) goto block42; else goto block43;
block42:;
org$pandalanguage$pandac$Position* $tmp5294 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5295 = *$tmp5294;
*(&local59) = $tmp5295;
org$pandalanguage$pandac$IR$Value** $tmp5296 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5297 = *$tmp5296;
*(&local60) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5298 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5298));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5297));
*(&local60) = $tmp5297;
org$pandalanguage$pandac$IR$Value** $tmp5299 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp5300 = *$tmp5299;
*(&local61) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5301 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5301));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5300));
*(&local61) = $tmp5300;
org$pandalanguage$pandac$IR$Value** $tmp5302 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp5303 = *$tmp5302;
*(&local62) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5304 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5304));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5303));
*(&local62) = $tmp5303;
// line 1369
org$pandalanguage$pandac$IR$Value* $tmp5305 = *(&local60);
org$pandalanguage$pandac$IR$Value* $tmp5306 = *(&local61);
org$pandalanguage$pandac$IR$Value* $tmp5307 = *(&local62);
org$pandalanguage$pandac$CCodeGenerator$writePointerRealloc$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp5305, $tmp5306, $tmp5307);
org$pandalanguage$pandac$IR$Value* $tmp5308 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5308));
// unreffing newCount
*(&local62) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5309 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5309));
// unreffing oldCount
*(&local61) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5310 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5310));
// unreffing ptr
*(&local60) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block43:;
panda$core$Int64 $tmp5311 = (panda$core$Int64) {23};
panda$core$Bit $tmp5312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5311);
bool $tmp5313 = $tmp5312.value;
if ($tmp5313) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$Position* $tmp5314 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5315 = *$tmp5314;
*(&local63) = $tmp5315;
org$pandalanguage$pandac$IR$Value** $tmp5316 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5317 = *$tmp5316;
*(&local64) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5318 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5318));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5317));
*(&local64) = $tmp5317;
org$pandalanguage$pandac$IR$Value** $tmp5319 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp5320 = *$tmp5319;
*(&local65) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5321 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5321));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5320));
*(&local65) = $tmp5320;
org$pandalanguage$pandac$IR$Value** $tmp5322 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp5323 = *$tmp5322;
*(&local66) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5324 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5324));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5323));
*(&local66) = $tmp5323;
// line 1371
org$pandalanguage$pandac$IR$Value* $tmp5325 = *(&local64);
org$pandalanguage$pandac$IR$Value* $tmp5326 = *(&local65);
org$pandalanguage$pandac$IR$Value* $tmp5327 = *(&local66);
org$pandalanguage$pandac$CCodeGenerator$writePointerSetIndex$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(param0, $tmp5325, $tmp5326, $tmp5327);
org$pandalanguage$pandac$IR$Value* $tmp5328 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5328));
// unreffing index
*(&local66) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5329 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5329));
// unreffing ptr
*(&local65) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5330 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5330));
// unreffing value
*(&local64) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block45:;
panda$core$Int64 $tmp5331 = (panda$core$Int64) {24};
panda$core$Bit $tmp5332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5331);
bool $tmp5333 = $tmp5332.value;
if ($tmp5333) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$Position* $tmp5334 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5335 = *$tmp5334;
*(&local67) = $tmp5335;
org$pandalanguage$pandac$IR$Value** $tmp5336 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5337 = *$tmp5336;
*(&local68) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5338 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5338));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5337));
*(&local68) = $tmp5337;
// line 1373
org$pandalanguage$pandac$IR$Value* $tmp5339 = *(&local68);
org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp5339);
org$pandalanguage$pandac$IR$Value* $tmp5340 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5340));
// unreffing value
*(&local68) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block47:;
panda$core$Int64 $tmp5341 = (panda$core$Int64) {25};
panda$core$Bit $tmp5342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5341);
bool $tmp5343 = $tmp5342.value;
if ($tmp5343) goto block48; else goto block49;
block48:;
org$pandalanguage$pandac$Position* $tmp5344 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5345 = *$tmp5344;
*(&local69) = $tmp5345;
org$pandalanguage$pandac$MethodDecl** $tmp5346 = (org$pandalanguage$pandac$MethodDecl**) (param2->$data + 16);
org$pandalanguage$pandac$MethodDecl* $tmp5347 = *$tmp5346;
*(&local70) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp5348 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5348));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5347));
*(&local70) = $tmp5347;
panda$collections$ImmutableArray** $tmp5349 = (panda$collections$ImmutableArray**) (param2->$data + 24);
panda$collections$ImmutableArray* $tmp5350 = *$tmp5349;
*(&local71) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5351 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5351));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5350));
*(&local71) = $tmp5350;
// line 1375
org$pandalanguage$pandac$MethodDecl* $tmp5352 = *(&local70);
panda$collections$ImmutableArray* $tmp5353 = *(&local71);
org$pandalanguage$pandac$CCodeGenerator$writeStaticCall$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$IR$Value$GT(param0, param1, $tmp5352, ((panda$collections$ListView*) $tmp5353));
panda$collections$ImmutableArray* $tmp5354 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5354));
// unreffing args
*(&local71) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp5355 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5355));
// unreffing m
*(&local70) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block1;
block49:;
panda$core$Int64 $tmp5356 = (panda$core$Int64) {26};
panda$core$Bit $tmp5357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5356);
bool $tmp5358 = $tmp5357.value;
if ($tmp5358) goto block50; else goto block51;
block50:;
org$pandalanguage$pandac$Position* $tmp5359 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5360 = *$tmp5359;
*(&local72) = $tmp5360;
org$pandalanguage$pandac$IR$Value** $tmp5361 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5362 = *$tmp5361;
*(&local73) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5363 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5363));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5362));
*(&local73) = $tmp5362;
org$pandalanguage$pandac$IR$Value** $tmp5364 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp5365 = *$tmp5364;
*(&local74) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5366 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5366));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5365));
*(&local74) = $tmp5365;
// line 1377
org$pandalanguage$pandac$IR$Value* $tmp5367 = *(&local73);
org$pandalanguage$pandac$IR$Value* $tmp5368 = *(&local74);
org$pandalanguage$pandac$CCodeGenerator$writeStore$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(param0, $tmp5367, $tmp5368);
org$pandalanguage$pandac$IR$Value* $tmp5369 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5369));
// unreffing slot
*(&local74) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5370 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5370));
// unreffing value
*(&local73) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block51:;
panda$core$Int64 $tmp5371 = (panda$core$Int64) {27};
panda$core$Bit $tmp5372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4998, $tmp5371);
bool $tmp5373 = $tmp5372.value;
if ($tmp5373) goto block52; else goto block53;
block52:;
org$pandalanguage$pandac$Position* $tmp5374 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5375 = *$tmp5374;
*(&local75) = $tmp5375;
// line 1379
panda$io$IndentedOutputStream** $tmp5376 = &param0->out;
panda$io$IndentedOutputStream* $tmp5377 = *$tmp5376;
$fn5379 $tmp5378 = ($fn5379) ((panda$io$OutputStream*) $tmp5377)->$class->vtable[19];
$tmp5378(((panda$io$OutputStream*) $tmp5377), &$s5380);
goto block1;
block53:;
// line 1381
panda$core$Bit $tmp5381 = panda$core$Bit$init$builtin_bit(false);
bool $tmp5382 = $tmp5381.value;
if ($tmp5382) goto block54; else goto block55;
block55:;
panda$core$Int64 $tmp5383 = (panda$core$Int64) {1381};
panda$core$String* $tmp5384 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5385, ((panda$core$Object*) param2));
panda$core$String* $tmp5386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5384, &$s5387);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5388, $tmp5383, $tmp5386);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5384));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5386));
abort(); // unreachable
block54:;
goto block1;
block1:;
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

// line 1387
panda$core$Weak** $tmp5389 = &param1->owner;
panda$core$Weak* $tmp5390 = *$tmp5389;
panda$core$Object* $tmp5391 = panda$core$Weak$get$R$panda$core$Weak$T($tmp5390);
panda$core$Panda$unref$panda$core$Object$Q($tmp5391);
org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp5391));
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeIR$org$pandalanguage$pandac$IR(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR* param1) {

panda$core$Int64 local0;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$Int64 local3;
org$pandalanguage$pandac$IR$Block* local4 = NULL;
panda$core$Int64 local5;
// line 1391
panda$core$Int64 $tmp5392 = (panda$core$Int64) {0};
panda$collections$Array** $tmp5393 = &param1->locals;
panda$collections$Array* $tmp5394 = *$tmp5393;
ITable* $tmp5395 = ((panda$collections$CollectionView*) $tmp5394)->$class->itable;
while ($tmp5395->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp5395 = $tmp5395->next;
}
$fn5397 $tmp5396 = $tmp5395->methods[0];
panda$core$Int64 $tmp5398 = $tmp5396(((panda$collections$CollectionView*) $tmp5394));
panda$core$Bit $tmp5399 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp5400 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp5392, $tmp5398, $tmp5399);
panda$core$Int64 $tmp5401 = $tmp5400.min;
*(&local0) = $tmp5401;
panda$core$Int64 $tmp5402 = $tmp5400.max;
panda$core$Bit $tmp5403 = $tmp5400.inclusive;
bool $tmp5404 = $tmp5403.value;
panda$core$Int64 $tmp5405 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp5406 = panda$core$Int64$convert$R$panda$core$UInt64($tmp5405);
if ($tmp5404) goto block4; else goto block5;
block4:;
int64_t $tmp5407 = $tmp5401.value;
int64_t $tmp5408 = $tmp5402.value;
bool $tmp5409 = $tmp5407 <= $tmp5408;
panda$core$Bit $tmp5410 = (panda$core$Bit) {$tmp5409};
bool $tmp5411 = $tmp5410.value;
if ($tmp5411) goto block1; else goto block2;
block5:;
int64_t $tmp5412 = $tmp5401.value;
int64_t $tmp5413 = $tmp5402.value;
bool $tmp5414 = $tmp5412 < $tmp5413;
panda$core$Bit $tmp5415 = (panda$core$Bit) {$tmp5414};
bool $tmp5416 = $tmp5415.value;
if ($tmp5416) goto block1; else goto block2;
block1:;
// line 1392
panda$core$Int64 $tmp5417 = *(&local0);
panda$core$Int64$wrapper* $tmp5418;
$tmp5418 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp5418->value = $tmp5417;
panda$core$String* $tmp5419 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5420, ((panda$core$Object*) $tmp5418));
panda$core$String* $tmp5421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5419, &$s5422);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp5423 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5423));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5421));
*(&local1) = $tmp5421;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5418));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5419));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5421));
// line 1393
panda$collections$Array** $tmp5424 = &param1->locals;
panda$collections$Array* $tmp5425 = *$tmp5424;
panda$core$Int64 $tmp5426 = *(&local0);
panda$core$Object* $tmp5427 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp5425, $tmp5426);
panda$core$String* $tmp5428 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp5427));
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp5429 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5429));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5428));
*(&local2) = $tmp5428;
panda$core$Panda$unref$panda$core$Object$Q($tmp5427);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5428));
// line 1394
panda$io$IndentedOutputStream** $tmp5430 = &param0->out;
panda$io$IndentedOutputStream* $tmp5431 = *$tmp5430;
panda$core$String* $tmp5432 = *(&local2);
panda$core$String* $tmp5433 = panda$core$String$convert$R$panda$core$String($tmp5432);
panda$core$String* $tmp5434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5433, &$s5435);
panda$core$String* $tmp5436 = *(&local1);
panda$core$String* $tmp5437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5434, $tmp5436);
panda$core$String* $tmp5438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5437, &$s5439);
$fn5441 $tmp5440 = ($fn5441) ((panda$io$OutputStream*) $tmp5431)->$class->vtable[17];
$tmp5440(((panda$io$OutputStream*) $tmp5431), $tmp5438);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5433));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5434));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5437));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5438));
// line 1395
panda$core$Weak** $tmp5442 = &param0->compiler;
panda$core$Weak* $tmp5443 = *$tmp5442;
panda$core$Object* $tmp5444 = panda$core$Weak$get$R$panda$core$Weak$T($tmp5443);
panda$core$Panda$unref$panda$core$Object$Q($tmp5444);
panda$collections$Array** $tmp5445 = &param1->locals;
panda$collections$Array* $tmp5446 = *$tmp5445;
panda$core$Int64 $tmp5447 = *(&local0);
panda$core$Object* $tmp5448 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp5446, $tmp5447);
panda$core$Bit $tmp5449 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp5444), ((org$pandalanguage$pandac$Type*) $tmp5448));
panda$core$Panda$unref$panda$core$Object$Q($tmp5448);
bool $tmp5450 = $tmp5449.value;
if ($tmp5450) goto block6; else goto block7;
block6:;
// line 1396
panda$io$IndentedOutputStream** $tmp5451 = &param0->out;
panda$io$IndentedOutputStream* $tmp5452 = *$tmp5451;
$fn5454 $tmp5453 = ($fn5454) ((panda$io$OutputStream*) $tmp5452)->$class->vtable[17];
$tmp5453(((panda$io$OutputStream*) $tmp5452), &$s5455);
goto block7;
block7:;
// line 1398
panda$io$IndentedOutputStream** $tmp5456 = &param0->out;
panda$io$IndentedOutputStream* $tmp5457 = *$tmp5456;
$fn5459 $tmp5458 = ($fn5459) ((panda$io$OutputStream*) $tmp5457)->$class->vtable[19];
$tmp5458(((panda$io$OutputStream*) $tmp5457), &$s5460);
panda$core$String* $tmp5461 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5461));
// unreffing type
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp5462 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5462));
// unreffing name
*(&local1) = ((panda$core$String*) NULL);
goto block3;
block3:;
panda$core$Int64 $tmp5463 = *(&local0);
int64_t $tmp5464 = $tmp5402.value;
int64_t $tmp5465 = $tmp5463.value;
int64_t $tmp5466 = $tmp5464 - $tmp5465;
panda$core$Int64 $tmp5467 = (panda$core$Int64) {$tmp5466};
panda$core$UInt64 $tmp5468 = panda$core$Int64$convert$R$panda$core$UInt64($tmp5467);
if ($tmp5404) goto block9; else goto block10;
block9:;
uint64_t $tmp5469 = $tmp5468.value;
uint64_t $tmp5470 = $tmp5406.value;
bool $tmp5471 = $tmp5469 >= $tmp5470;
panda$core$Bit $tmp5472 = (panda$core$Bit) {$tmp5471};
bool $tmp5473 = $tmp5472.value;
if ($tmp5473) goto block8; else goto block2;
block10:;
uint64_t $tmp5474 = $tmp5468.value;
uint64_t $tmp5475 = $tmp5406.value;
bool $tmp5476 = $tmp5474 > $tmp5475;
panda$core$Bit $tmp5477 = (panda$core$Bit) {$tmp5476};
bool $tmp5478 = $tmp5477.value;
if ($tmp5478) goto block8; else goto block2;
block8:;
int64_t $tmp5479 = $tmp5463.value;
int64_t $tmp5480 = $tmp5405.value;
int64_t $tmp5481 = $tmp5479 + $tmp5480;
panda$core$Int64 $tmp5482 = (panda$core$Int64) {$tmp5481};
*(&local0) = $tmp5482;
goto block1;
block2:;
// line 1400
panda$core$Int64 $tmp5483 = (panda$core$Int64) {0};
panda$collections$Array** $tmp5484 = &param1->blocks;
panda$collections$Array* $tmp5485 = *$tmp5484;
ITable* $tmp5486 = ((panda$collections$CollectionView*) $tmp5485)->$class->itable;
while ($tmp5486->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp5486 = $tmp5486->next;
}
$fn5488 $tmp5487 = $tmp5486->methods[0];
panda$core$Int64 $tmp5489 = $tmp5487(((panda$collections$CollectionView*) $tmp5485));
panda$core$Bit $tmp5490 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp5491 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp5483, $tmp5489, $tmp5490);
panda$core$Int64 $tmp5492 = $tmp5491.min;
*(&local3) = $tmp5492;
panda$core$Int64 $tmp5493 = $tmp5491.max;
panda$core$Bit $tmp5494 = $tmp5491.inclusive;
bool $tmp5495 = $tmp5494.value;
panda$core$Int64 $tmp5496 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp5497 = panda$core$Int64$convert$R$panda$core$UInt64($tmp5496);
if ($tmp5495) goto block14; else goto block15;
block14:;
int64_t $tmp5498 = $tmp5492.value;
int64_t $tmp5499 = $tmp5493.value;
bool $tmp5500 = $tmp5498 <= $tmp5499;
panda$core$Bit $tmp5501 = (panda$core$Bit) {$tmp5500};
bool $tmp5502 = $tmp5501.value;
if ($tmp5502) goto block11; else goto block12;
block15:;
int64_t $tmp5503 = $tmp5492.value;
int64_t $tmp5504 = $tmp5493.value;
bool $tmp5505 = $tmp5503 < $tmp5504;
panda$core$Bit $tmp5506 = (panda$core$Bit) {$tmp5505};
bool $tmp5507 = $tmp5506.value;
if ($tmp5507) goto block11; else goto block12;
block11:;
// line 1401
panda$collections$Array** $tmp5508 = &param1->blocks;
panda$collections$Array* $tmp5509 = *$tmp5508;
panda$core$Int64 $tmp5510 = *(&local3);
panda$core$Object* $tmp5511 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp5509, $tmp5510);
*(&local4) = ((org$pandalanguage$pandac$IR$Block*) NULL);
org$pandalanguage$pandac$IR$Block* $tmp5512 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5512));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Block*) $tmp5511)));
*(&local4) = ((org$pandalanguage$pandac$IR$Block*) $tmp5511);
panda$core$Panda$unref$panda$core$Object$Q($tmp5511);
// line 1402
panda$core$Int64 $tmp5513 = *(&local3);
panda$core$Int64 $tmp5514 = (panda$core$Int64) {0};
panda$core$Bit $tmp5515 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp5513, $tmp5514);
bool $tmp5516 = $tmp5515.value;
if ($tmp5516) goto block16; else goto block18;
block16:;
// line 1403
org$pandalanguage$pandac$IR$Block* $tmp5517 = *(&local4);
org$pandalanguage$pandac$IR$Block$ID* $tmp5518 = &$tmp5517->id;
org$pandalanguage$pandac$IR$Block$ID $tmp5519 = *$tmp5518;
panda$core$String* $tmp5520 = org$pandalanguage$pandac$IR$Block$ID$convert$R$panda$core$String($tmp5519);
panda$core$String* $tmp5521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5520, &$s5522);
panda$core$String** $tmp5523 = &param0->currentBlock;
panda$core$String* $tmp5524 = *$tmp5523;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5524));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5521));
panda$core$String** $tmp5525 = &param0->currentBlock;
*$tmp5525 = $tmp5521;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5520));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5521));
// line 1404
panda$io$IndentedOutputStream** $tmp5526 = &param0->out;
panda$io$IndentedOutputStream* $tmp5527 = *$tmp5526;
panda$core$String** $tmp5528 = &param0->currentBlock;
panda$core$String* $tmp5529 = *$tmp5528;
panda$core$String* $tmp5530 = panda$core$String$convert$R$panda$core$String($tmp5529);
panda$core$String* $tmp5531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5530, &$s5532);
$fn5534 $tmp5533 = ($fn5534) ((panda$io$OutputStream*) $tmp5527)->$class->vtable[19];
$tmp5533(((panda$io$OutputStream*) $tmp5527), $tmp5531);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5530));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5531));
goto block17;
block18:;
// line 1
// line 1407
panda$core$String** $tmp5535 = &param0->currentBlock;
panda$core$String* $tmp5536 = *$tmp5535;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5536));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s5537));
panda$core$String** $tmp5538 = &param0->currentBlock;
*$tmp5538 = &$s5539;
goto block17;
block17:;
// line 1409
panda$core$Int64 $tmp5540 = (panda$core$Int64) {0};
org$pandalanguage$pandac$IR$Block* $tmp5541 = *(&local4);
panda$collections$Array** $tmp5542 = &$tmp5541->statements;
panda$collections$Array* $tmp5543 = *$tmp5542;
ITable* $tmp5544 = ((panda$collections$CollectionView*) $tmp5543)->$class->itable;
while ($tmp5544->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp5544 = $tmp5544->next;
}
$fn5546 $tmp5545 = $tmp5544->methods[0];
panda$core$Int64 $tmp5547 = $tmp5545(((panda$collections$CollectionView*) $tmp5543));
panda$core$Bit $tmp5548 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp5549 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp5540, $tmp5547, $tmp5548);
panda$core$Int64 $tmp5550 = $tmp5549.min;
*(&local5) = $tmp5550;
panda$core$Int64 $tmp5551 = $tmp5549.max;
panda$core$Bit $tmp5552 = $tmp5549.inclusive;
bool $tmp5553 = $tmp5552.value;
panda$core$Int64 $tmp5554 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp5555 = panda$core$Int64$convert$R$panda$core$UInt64($tmp5554);
if ($tmp5553) goto block22; else goto block23;
block22:;
int64_t $tmp5556 = $tmp5550.value;
int64_t $tmp5557 = $tmp5551.value;
bool $tmp5558 = $tmp5556 <= $tmp5557;
panda$core$Bit $tmp5559 = (panda$core$Bit) {$tmp5558};
bool $tmp5560 = $tmp5559.value;
if ($tmp5560) goto block19; else goto block20;
block23:;
int64_t $tmp5561 = $tmp5550.value;
int64_t $tmp5562 = $tmp5551.value;
bool $tmp5563 = $tmp5561 < $tmp5562;
panda$core$Bit $tmp5564 = (panda$core$Bit) {$tmp5563};
bool $tmp5565 = $tmp5564.value;
if ($tmp5565) goto block19; else goto block20;
block19:;
// line 1410
org$pandalanguage$pandac$IR$Block* $tmp5566 = *(&local4);
panda$collections$Array** $tmp5567 = &$tmp5566->ids;
panda$collections$Array* $tmp5568 = *$tmp5567;
panda$core$Int64 $tmp5569 = *(&local5);
panda$core$Object* $tmp5570 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp5568, $tmp5569);
org$pandalanguage$pandac$IR$Block* $tmp5571 = *(&local4);
panda$collections$Array** $tmp5572 = &$tmp5571->statements;
panda$collections$Array* $tmp5573 = *$tmp5572;
panda$core$Int64 $tmp5574 = *(&local5);
panda$core$Object* $tmp5575 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp5573, $tmp5574);
org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Statement(param0, ((org$pandalanguage$pandac$IR$Statement$ID$wrapper*) $tmp5570)->value, ((org$pandalanguage$pandac$IR$Statement*) $tmp5575));
panda$core$Panda$unref$panda$core$Object$Q($tmp5570);
panda$core$Panda$unref$panda$core$Object$Q($tmp5575);
goto block21;
block21:;
panda$core$Int64 $tmp5576 = *(&local5);
int64_t $tmp5577 = $tmp5551.value;
int64_t $tmp5578 = $tmp5576.value;
int64_t $tmp5579 = $tmp5577 - $tmp5578;
panda$core$Int64 $tmp5580 = (panda$core$Int64) {$tmp5579};
panda$core$UInt64 $tmp5581 = panda$core$Int64$convert$R$panda$core$UInt64($tmp5580);
if ($tmp5553) goto block25; else goto block26;
block25:;
uint64_t $tmp5582 = $tmp5581.value;
uint64_t $tmp5583 = $tmp5555.value;
bool $tmp5584 = $tmp5582 >= $tmp5583;
panda$core$Bit $tmp5585 = (panda$core$Bit) {$tmp5584};
bool $tmp5586 = $tmp5585.value;
if ($tmp5586) goto block24; else goto block20;
block26:;
uint64_t $tmp5587 = $tmp5581.value;
uint64_t $tmp5588 = $tmp5555.value;
bool $tmp5589 = $tmp5587 > $tmp5588;
panda$core$Bit $tmp5590 = (panda$core$Bit) {$tmp5589};
bool $tmp5591 = $tmp5590.value;
if ($tmp5591) goto block24; else goto block20;
block24:;
int64_t $tmp5592 = $tmp5576.value;
int64_t $tmp5593 = $tmp5554.value;
int64_t $tmp5594 = $tmp5592 + $tmp5593;
panda$core$Int64 $tmp5595 = (panda$core$Int64) {$tmp5594};
*(&local5) = $tmp5595;
goto block19;
block20:;
org$pandalanguage$pandac$IR$Block* $tmp5596 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5596));
// unreffing block
*(&local4) = ((org$pandalanguage$pandac$IR$Block*) NULL);
goto block13;
block13:;
panda$core$Int64 $tmp5597 = *(&local3);
int64_t $tmp5598 = $tmp5493.value;
int64_t $tmp5599 = $tmp5597.value;
int64_t $tmp5600 = $tmp5598 - $tmp5599;
panda$core$Int64 $tmp5601 = (panda$core$Int64) {$tmp5600};
panda$core$UInt64 $tmp5602 = panda$core$Int64$convert$R$panda$core$UInt64($tmp5601);
if ($tmp5495) goto block28; else goto block29;
block28:;
uint64_t $tmp5603 = $tmp5602.value;
uint64_t $tmp5604 = $tmp5497.value;
bool $tmp5605 = $tmp5603 >= $tmp5604;
panda$core$Bit $tmp5606 = (panda$core$Bit) {$tmp5605};
bool $tmp5607 = $tmp5606.value;
if ($tmp5607) goto block27; else goto block12;
block29:;
uint64_t $tmp5608 = $tmp5602.value;
uint64_t $tmp5609 = $tmp5497.value;
bool $tmp5610 = $tmp5608 > $tmp5609;
panda$core$Bit $tmp5611 = (panda$core$Bit) {$tmp5610};
bool $tmp5612 = $tmp5611.value;
if ($tmp5612) goto block27; else goto block12;
block27:;
int64_t $tmp5613 = $tmp5597.value;
int64_t $tmp5614 = $tmp5496.value;
int64_t $tmp5615 = $tmp5613 + $tmp5614;
panda$core$Int64 $tmp5616 = (panda$core$Int64) {$tmp5615};
*(&local3) = $tmp5616;
goto block11;
block12:;
return;

}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IR(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1, org$pandalanguage$pandac$IR* param2) {

panda$io$IndentedOutputStream* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$Int64 local2;
org$pandalanguage$pandac$MethodDecl$Parameter* local3 = NULL;
panda$io$MemoryOutputStream* local4 = NULL;
// line 1418
panda$io$IndentedOutputStream** $tmp5617 = &param0->out;
panda$io$IndentedOutputStream* $tmp5618 = *$tmp5617;
*(&local0) = ((panda$io$IndentedOutputStream*) NULL);
panda$io$IndentedOutputStream* $tmp5619 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5619));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5618));
*(&local0) = $tmp5618;
// line 1419
panda$io$IndentedOutputStream** $tmp5620 = &param0->methods;
panda$io$IndentedOutputStream* $tmp5621 = *$tmp5620;
panda$io$IndentedOutputStream** $tmp5622 = &param0->out;
panda$io$IndentedOutputStream* $tmp5623 = *$tmp5622;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5623));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5621));
panda$io$IndentedOutputStream** $tmp5624 = &param0->out;
*$tmp5624 = $tmp5621;
// line 1420
panda$io$MemoryOutputStream** $tmp5625 = &param0->methodHeaderBuffer;
panda$io$MemoryOutputStream* $tmp5626 = *$tmp5625;
panda$io$MemoryOutputStream$clear($tmp5626);
// line 1421
org$pandalanguage$pandac$IR** $tmp5627 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp5628 = *$tmp5627;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5628));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$IR** $tmp5629 = &param0->ir;
*$tmp5629 = param2;
// line 1422
panda$io$IndentedOutputStream** $tmp5630 = &param0->out;
panda$io$IndentedOutputStream* $tmp5631 = *$tmp5630;
org$pandalanguage$pandac$Type** $tmp5632 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp5633 = *$tmp5632;
panda$core$String* $tmp5634 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp5633);
panda$core$String* $tmp5635 = panda$core$String$convert$R$panda$core$String($tmp5634);
panda$core$String* $tmp5636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5635, &$s5637);
panda$core$String* $tmp5638 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp5639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5636, $tmp5638);
panda$core$String* $tmp5640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5639, &$s5641);
$fn5643 $tmp5642 = ($fn5643) ((panda$io$OutputStream*) $tmp5631)->$class->vtable[17];
$tmp5642(((panda$io$OutputStream*) $tmp5631), $tmp5640);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5634));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5635));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5636));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5638));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5639));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5640));
// line 1423
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp5644 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5644));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s5645));
*(&local1) = &$s5646;
// line 1424
panda$core$Int64 $tmp5647 = (panda$core$Int64) {0};
*(&local2) = $tmp5647;
// line 1425
panda$core$Weak** $tmp5648 = &param0->compiler;
panda$core$Weak* $tmp5649 = *$tmp5648;
panda$core$Object* $tmp5650 = panda$core$Weak$get$R$panda$core$Weak$T($tmp5649);
panda$core$Panda$unref$panda$core$Object$Q($tmp5650);
panda$core$Bit $tmp5651 = org$pandalanguage$pandac$Compiler$hasSelfParam$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp5650), param1);
bool $tmp5652 = $tmp5651.value;
if ($tmp5652) goto block1; else goto block2;
block1:;
// line 1426
panda$io$IndentedOutputStream** $tmp5653 = &param0->out;
panda$io$IndentedOutputStream* $tmp5654 = *$tmp5653;
panda$core$String* $tmp5655 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp5656 = panda$core$String$convert$R$panda$core$String($tmp5655);
panda$core$String* $tmp5657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5656, &$s5658);
panda$core$Int64 $tmp5659 = *(&local2);
panda$core$Int64$wrapper* $tmp5660;
$tmp5660 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp5660->value = $tmp5659;
panda$core$String* $tmp5661 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5657, ((panda$core$Object*) $tmp5660));
panda$core$String* $tmp5662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5661, &$s5663);
$fn5665 $tmp5664 = ($fn5665) ((panda$io$OutputStream*) $tmp5654)->$class->vtable[17];
$tmp5664(((panda$io$OutputStream*) $tmp5654), $tmp5662);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5655));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5656));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5657));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5660));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5661));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5662));
// line 1427
panda$core$Int64 $tmp5666 = *(&local2);
panda$core$Int64 $tmp5667 = (panda$core$Int64) {1};
int64_t $tmp5668 = $tmp5666.value;
int64_t $tmp5669 = $tmp5667.value;
int64_t $tmp5670 = $tmp5668 + $tmp5669;
panda$core$Int64 $tmp5671 = (panda$core$Int64) {$tmp5670};
*(&local2) = $tmp5671;
// line 1428
panda$core$String* $tmp5672 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5672));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s5673));
*(&local1) = &$s5674;
goto block2;
block2:;
// line 1430
panda$collections$Array** $tmp5675 = &param1->parameters;
panda$collections$Array* $tmp5676 = *$tmp5675;
ITable* $tmp5677 = ((panda$collections$Iterable*) $tmp5676)->$class->itable;
while ($tmp5677->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp5677 = $tmp5677->next;
}
$fn5679 $tmp5678 = $tmp5677->methods[0];
panda$collections$Iterator* $tmp5680 = $tmp5678(((panda$collections$Iterable*) $tmp5676));
goto block3;
block3:;
ITable* $tmp5681 = $tmp5680->$class->itable;
while ($tmp5681->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp5681 = $tmp5681->next;
}
$fn5683 $tmp5682 = $tmp5681->methods[0];
panda$core$Bit $tmp5684 = $tmp5682($tmp5680);
bool $tmp5685 = $tmp5684.value;
if ($tmp5685) goto block5; else goto block4;
block4:;
*(&local3) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp5686 = $tmp5680->$class->itable;
while ($tmp5686->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp5686 = $tmp5686->next;
}
$fn5688 $tmp5687 = $tmp5686->methods[1];
panda$core$Object* $tmp5689 = $tmp5687($tmp5680);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp5690 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5690));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp5689)));
*(&local3) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp5689);
// line 1431
panda$io$IndentedOutputStream** $tmp5691 = &param0->out;
panda$io$IndentedOutputStream* $tmp5692 = *$tmp5691;
panda$core$String* $tmp5693 = *(&local1);
panda$core$String* $tmp5694 = panda$core$String$convert$R$panda$core$String($tmp5693);
panda$core$String* $tmp5695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5694, &$s5696);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp5697 = *(&local3);
org$pandalanguage$pandac$Type** $tmp5698 = &$tmp5697->type;
org$pandalanguage$pandac$Type* $tmp5699 = *$tmp5698;
panda$core$String* $tmp5700 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp5699);
panda$core$String* $tmp5701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5695, $tmp5700);
panda$core$String* $tmp5702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5701, &$s5703);
panda$core$Int64 $tmp5704 = *(&local2);
panda$core$Int64$wrapper* $tmp5705;
$tmp5705 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp5705->value = $tmp5704;
panda$core$String* $tmp5706 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5702, ((panda$core$Object*) $tmp5705));
panda$core$String* $tmp5707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5706, &$s5708);
$fn5710 $tmp5709 = ($fn5710) ((panda$io$OutputStream*) $tmp5692)->$class->vtable[17];
$tmp5709(((panda$io$OutputStream*) $tmp5692), $tmp5707);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5694));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5695));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5700));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5701));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5702));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5705));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5706));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5707));
// line 1432
panda$core$Int64 $tmp5711 = *(&local2);
panda$core$Int64 $tmp5712 = (panda$core$Int64) {1};
int64_t $tmp5713 = $tmp5711.value;
int64_t $tmp5714 = $tmp5712.value;
int64_t $tmp5715 = $tmp5713 + $tmp5714;
panda$core$Int64 $tmp5716 = (panda$core$Int64) {$tmp5715};
*(&local2) = $tmp5716;
// line 1433
panda$core$String* $tmp5717 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5717));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s5718));
*(&local1) = &$s5719;
panda$core$Panda$unref$panda$core$Object$Q($tmp5689);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp5720 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5720));
// unreffing p
*(&local3) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5680));
// line 1435
panda$io$IndentedOutputStream** $tmp5721 = &param0->out;
panda$io$IndentedOutputStream* $tmp5722 = *$tmp5721;
$fn5724 $tmp5723 = ($fn5724) ((panda$io$OutputStream*) $tmp5722)->$class->vtable[19];
$tmp5723(((panda$io$OutputStream*) $tmp5722), &$s5725);
// line 1436
panda$io$MemoryOutputStream* $tmp5726 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp5726);
*(&local4) = ((panda$io$MemoryOutputStream*) NULL);
panda$io$MemoryOutputStream* $tmp5727 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5727));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5726));
*(&local4) = $tmp5726;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5726));
// line 1437
panda$io$IndentedOutputStream* $tmp5728 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream* $tmp5729 = *(&local4);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp5728, ((panda$io$OutputStream*) $tmp5729));
panda$io$IndentedOutputStream** $tmp5730 = &param0->out;
panda$io$IndentedOutputStream* $tmp5731 = *$tmp5730;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5731));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5728));
panda$io$IndentedOutputStream** $tmp5732 = &param0->out;
*$tmp5732 = $tmp5728;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5728));
// line 1438
org$pandalanguage$pandac$CCodeGenerator$writeIR$org$pandalanguage$pandac$IR(param0, param2);
// line 1439
panda$io$IndentedOutputStream** $tmp5733 = &param0->methods;
panda$io$IndentedOutputStream* $tmp5734 = *$tmp5733;
panda$io$MemoryOutputStream** $tmp5735 = &param0->methodHeaderBuffer;
panda$io$MemoryOutputStream* $tmp5736 = *$tmp5735;
$fn5738 $tmp5737 = ($fn5738) ((panda$io$OutputStream*) $tmp5734)->$class->vtable[20];
$tmp5737(((panda$io$OutputStream*) $tmp5734), ((panda$core$Object*) $tmp5736));
// line 1440
panda$io$IndentedOutputStream** $tmp5739 = &param0->methods;
panda$io$IndentedOutputStream* $tmp5740 = *$tmp5739;
panda$io$MemoryOutputStream* $tmp5741 = *(&local4);
$fn5743 $tmp5742 = ($fn5743) ((panda$io$OutputStream*) $tmp5740)->$class->vtable[20];
$tmp5742(((panda$io$OutputStream*) $tmp5740), ((panda$core$Object*) $tmp5741));
// line 1441
panda$io$IndentedOutputStream** $tmp5744 = &param0->methods;
panda$io$IndentedOutputStream* $tmp5745 = *$tmp5744;
$fn5747 $tmp5746 = ($fn5747) ((panda$io$OutputStream*) $tmp5745)->$class->vtable[19];
$tmp5746(((panda$io$OutputStream*) $tmp5745), &$s5748);
// line 1442
panda$io$IndentedOutputStream* $tmp5749 = *(&local0);
panda$io$IndentedOutputStream** $tmp5750 = &param0->out;
panda$io$IndentedOutputStream* $tmp5751 = *$tmp5750;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5751));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5749));
panda$io$IndentedOutputStream** $tmp5752 = &param0->out;
*$tmp5752 = $tmp5749;
panda$io$MemoryOutputStream* $tmp5753 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5753));
// unreffing buffer
*(&local4) = ((panda$io$MemoryOutputStream*) NULL);
panda$core$String* $tmp5754 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5754));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$io$IndentedOutputStream* $tmp5755 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5755));
// unreffing old
*(&local0) = ((panda$io$IndentedOutputStream*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

panda$io$File* local0 = NULL;
// line 1447
org$pandalanguage$pandac$ClassDecl** $tmp5756 = &param0->currentClass;
org$pandalanguage$pandac$ClassDecl* $tmp5757 = *$tmp5756;
panda$core$Bit $tmp5758 = panda$core$Bit$init$builtin_bit($tmp5757 == NULL);
bool $tmp5759 = $tmp5758.value;
if ($tmp5759) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp5760 = (panda$core$Int64) {1447};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s5761, $tmp5760);
abort(); // unreachable
block1:;
// line 1448
org$pandalanguage$pandac$ClassDecl** $tmp5762 = &param0->currentClass;
org$pandalanguage$pandac$ClassDecl* $tmp5763 = *$tmp5762;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5763));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$ClassDecl** $tmp5764 = &param0->currentClass;
*$tmp5764 = param1;
// line 1449
panda$collections$HashSet** $tmp5765 = &param0->imports;
panda$collections$HashSet* $tmp5766 = *$tmp5765;
panda$collections$HashSet$clear($tmp5766);
// line 1450
panda$io$MemoryOutputStream** $tmp5767 = &param0->strings;
panda$io$MemoryOutputStream* $tmp5768 = *$tmp5767;
panda$io$MemoryOutputStream$clear($tmp5768);
// line 1451
panda$io$MemoryOutputStream** $tmp5769 = &param0->declarations;
panda$io$MemoryOutputStream* $tmp5770 = *$tmp5769;
panda$io$MemoryOutputStream$clear($tmp5770);
// line 1452
panda$io$MemoryOutputStream** $tmp5771 = &param0->types;
panda$io$MemoryOutputStream* $tmp5772 = *$tmp5771;
panda$io$MemoryOutputStream$clear($tmp5772);
// line 1453
panda$io$MemoryOutputStream** $tmp5773 = &param0->methodsBuffer;
panda$io$MemoryOutputStream* $tmp5774 = *$tmp5773;
panda$io$MemoryOutputStream$clear($tmp5774);
// line 1454
panda$io$MemoryOutputStream** $tmp5775 = &param0->shimsBuffer;
panda$io$MemoryOutputStream* $tmp5776 = *$tmp5775;
panda$io$MemoryOutputStream$clear($tmp5776);
// line 1455
panda$collections$HashSet** $tmp5777 = &param0->declared;
panda$collections$HashSet* $tmp5778 = *$tmp5777;
panda$collections$HashSet$clear($tmp5778);
// line 1456
panda$collections$HashSet** $tmp5779 = &param0->writtenTypes;
panda$collections$HashSet* $tmp5780 = *$tmp5779;
panda$collections$HashSet$clear($tmp5780);
// line 1457
panda$collections$HashSet** $tmp5781 = &param0->writtenWrappers;
panda$collections$HashSet* $tmp5782 = *$tmp5781;
panda$collections$HashSet$clear($tmp5782);
// line 1458
panda$collections$HashMap** $tmp5783 = &param0->classConstants;
panda$collections$HashMap* $tmp5784 = *$tmp5783;
panda$collections$HashMap$clear($tmp5784);
// line 1459
panda$collections$IdentityMap** $tmp5785 = &param0->variableNames;
panda$collections$IdentityMap* $tmp5786 = *$tmp5785;
panda$collections$IdentityMap$clear($tmp5786);
// line 1460
panda$core$Int64 $tmp5787 = (panda$core$Int64) {0};
panda$core$Int64* $tmp5788 = &param0->varCount;
*$tmp5788 = $tmp5787;
// line 1461
panda$collections$IdentityMap** $tmp5789 = &param0->methodShims;
panda$collections$IdentityMap* $tmp5790 = *$tmp5789;
panda$collections$IdentityMap$clear($tmp5790);
// line 1462
panda$core$Weak** $tmp5791 = &param0->hCodeGen;
panda$core$Weak* $tmp5792 = *$tmp5791;
panda$core$Object* $tmp5793 = panda$core$Weak$get$R$panda$core$Weak$T($tmp5792);
panda$core$Panda$unref$panda$core$Object$Q($tmp5793);
panda$io$File* $tmp5794 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(((org$pandalanguage$pandac$HCodeGenerator*) $tmp5793), param1, &$s5795);
*(&local0) = ((panda$io$File*) NULL);
panda$io$File* $tmp5796 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5796));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5794));
*(&local0) = $tmp5794;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5794));
// line 1463
panda$io$File* $tmp5797 = *(&local0);
panda$io$File* $tmp5798 = panda$io$File$parent$R$panda$io$File$Q($tmp5797);
panda$io$File$createDirectories($tmp5798);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5798));
// line 1464
panda$io$IndentedOutputStream* $tmp5799 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$File* $tmp5800 = *(&local0);
panda$io$OutputStream* $tmp5801 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp5800);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp5799, $tmp5801);
panda$io$IndentedOutputStream** $tmp5802 = &param0->out;
panda$io$IndentedOutputStream* $tmp5803 = *$tmp5802;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5803));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5799));
panda$io$IndentedOutputStream** $tmp5804 = &param0->out;
*$tmp5804 = $tmp5799;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5799));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5801));
// line 1465
panda$io$IndentedOutputStream** $tmp5805 = &param0->out;
panda$io$IndentedOutputStream* $tmp5806 = *$tmp5805;
$fn5808 $tmp5807 = ($fn5808) ((panda$io$OutputStream*) $tmp5806)->$class->vtable[22];
$tmp5807(((panda$io$OutputStream*) $tmp5806));
// line 1466
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp5809 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, param1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5809));
// line 1467
panda$core$Weak** $tmp5810 = &param0->compiler;
panda$core$Weak* $tmp5811 = *$tmp5810;
panda$core$Object* $tmp5812 = panda$core$Weak$get$R$panda$core$Weak$T($tmp5811);
panda$core$Panda$unref$panda$core$Object$Q($tmp5812);
panda$core$Bit $tmp5813 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp5812), param1);
bool $tmp5814 = $tmp5813.value;
if ($tmp5814) goto block3; else goto block4;
block3:;
// line 1468
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp5815 = org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, param1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5815));
goto block4;
block4:;
panda$io$File* $tmp5816 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5816));
// unreffing path
*(&local0) = ((panda$io$File*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

// line 1474
org$pandalanguage$pandac$CCodeGenerator$finish(param0);
// line 1475
org$pandalanguage$pandac$ClassDecl** $tmp5817 = &param0->currentClass;
org$pandalanguage$pandac$ClassDecl* $tmp5818 = *$tmp5817;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5818));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
org$pandalanguage$pandac$ClassDecl** $tmp5819 = &param0->currentClass;
*$tmp5819 = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* param0) {

// line 1480
panda$io$IndentedOutputStream** $tmp5820 = &param0->out;
panda$io$IndentedOutputStream* $tmp5821 = *$tmp5820;
panda$io$MemoryOutputStream** $tmp5822 = &param0->includes;
panda$io$MemoryOutputStream* $tmp5823 = *$tmp5822;
$fn5825 $tmp5824 = ($fn5825) ((panda$io$OutputStream*) $tmp5821)->$class->vtable[20];
$tmp5824(((panda$io$OutputStream*) $tmp5821), ((panda$core$Object*) $tmp5823));
// line 1481
panda$io$MemoryOutputStream** $tmp5826 = &param0->includes;
panda$io$MemoryOutputStream* $tmp5827 = *$tmp5826;
panda$io$MemoryOutputStream$clear($tmp5827);
// line 1482
panda$io$IndentedOutputStream** $tmp5828 = &param0->out;
panda$io$IndentedOutputStream* $tmp5829 = *$tmp5828;
panda$io$MemoryOutputStream** $tmp5830 = &param0->shimsBuffer;
panda$io$MemoryOutputStream* $tmp5831 = *$tmp5830;
$fn5833 $tmp5832 = ($fn5833) ((panda$io$OutputStream*) $tmp5829)->$class->vtable[20];
$tmp5832(((panda$io$OutputStream*) $tmp5829), ((panda$core$Object*) $tmp5831));
// line 1483
panda$io$MemoryOutputStream** $tmp5834 = &param0->shimsBuffer;
panda$io$MemoryOutputStream* $tmp5835 = *$tmp5834;
panda$io$MemoryOutputStream$clear($tmp5835);
// line 1484
panda$io$IndentedOutputStream** $tmp5836 = &param0->out;
panda$io$IndentedOutputStream* $tmp5837 = *$tmp5836;
panda$io$MemoryOutputStream** $tmp5838 = &param0->types;
panda$io$MemoryOutputStream* $tmp5839 = *$tmp5838;
$fn5841 $tmp5840 = ($fn5841) ((panda$io$OutputStream*) $tmp5837)->$class->vtable[20];
$tmp5840(((panda$io$OutputStream*) $tmp5837), ((panda$core$Object*) $tmp5839));
// line 1485
panda$io$MemoryOutputStream** $tmp5842 = &param0->types;
panda$io$MemoryOutputStream* $tmp5843 = *$tmp5842;
panda$io$MemoryOutputStream$clear($tmp5843);
// line 1486
panda$io$IndentedOutputStream** $tmp5844 = &param0->out;
panda$io$IndentedOutputStream* $tmp5845 = *$tmp5844;
panda$io$MemoryOutputStream** $tmp5846 = &param0->strings;
panda$io$MemoryOutputStream* $tmp5847 = *$tmp5846;
$fn5849 $tmp5848 = ($fn5849) ((panda$io$OutputStream*) $tmp5845)->$class->vtable[20];
$tmp5848(((panda$io$OutputStream*) $tmp5845), ((panda$core$Object*) $tmp5847));
// line 1487
panda$io$MemoryOutputStream** $tmp5850 = &param0->strings;
panda$io$MemoryOutputStream* $tmp5851 = *$tmp5850;
panda$io$MemoryOutputStream$clear($tmp5851);
// line 1488
panda$io$IndentedOutputStream** $tmp5852 = &param0->out;
panda$io$IndentedOutputStream* $tmp5853 = *$tmp5852;
panda$io$MemoryOutputStream** $tmp5854 = &param0->methodsBuffer;
panda$io$MemoryOutputStream* $tmp5855 = *$tmp5854;
$fn5857 $tmp5856 = ($fn5857) ((panda$io$OutputStream*) $tmp5853)->$class->vtable[20];
$tmp5856(((panda$io$OutputStream*) $tmp5853), ((panda$core$Object*) $tmp5855));
// line 1489
panda$io$MemoryOutputStream** $tmp5858 = &param0->methodsBuffer;
panda$io$MemoryOutputStream* $tmp5859 = *$tmp5858;
panda$io$MemoryOutputStream$clear($tmp5859);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$cleanup(org$pandalanguage$pandac$CCodeGenerator* param0) {

panda$core$Weak** $tmp5860 = &param0->compiler;
panda$core$Weak* $tmp5861 = *$tmp5860;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5861));
panda$io$File** $tmp5862 = &param0->outDir;
panda$io$File* $tmp5863 = *$tmp5862;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5863));
panda$io$IndentedOutputStream** $tmp5864 = &param0->out;
panda$io$IndentedOutputStream* $tmp5865 = *$tmp5864;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5865));
panda$io$MemoryOutputStream** $tmp5866 = &param0->strings;
panda$io$MemoryOutputStream* $tmp5867 = *$tmp5866;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5867));
panda$collections$HashSet** $tmp5868 = &param0->imports;
panda$collections$HashSet* $tmp5869 = *$tmp5868;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5869));
panda$core$Weak** $tmp5870 = &param0->hCodeGen;
panda$core$Weak* $tmp5871 = *$tmp5870;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5871));
org$pandalanguage$pandac$HCodeGenerator** $tmp5872 = &param0->hCodeGenRetain;
org$pandalanguage$pandac$HCodeGenerator* $tmp5873 = *$tmp5872;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5873));
org$pandalanguage$pandac$ClassDecl** $tmp5874 = &param0->currentClass;
org$pandalanguage$pandac$ClassDecl* $tmp5875 = *$tmp5874;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5875));
panda$io$MemoryOutputStream** $tmp5876 = &param0->includes;
panda$io$MemoryOutputStream* $tmp5877 = *$tmp5876;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5877));
panda$io$MemoryOutputStream** $tmp5878 = &param0->declarations;
panda$io$MemoryOutputStream* $tmp5879 = *$tmp5878;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5879));
panda$io$MemoryOutputStream** $tmp5880 = &param0->types;
panda$io$MemoryOutputStream* $tmp5881 = *$tmp5880;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5881));
panda$io$MemoryOutputStream** $tmp5882 = &param0->methodsBuffer;
panda$io$MemoryOutputStream* $tmp5883 = *$tmp5882;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5883));
panda$io$IndentedOutputStream** $tmp5884 = &param0->methods;
panda$io$IndentedOutputStream* $tmp5885 = *$tmp5884;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5885));
panda$io$MemoryOutputStream** $tmp5886 = &param0->methodHeaderBuffer;
panda$io$MemoryOutputStream* $tmp5887 = *$tmp5886;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5887));
panda$io$IndentedOutputStream** $tmp5888 = &param0->methodHeader;
panda$io$IndentedOutputStream* $tmp5889 = *$tmp5888;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5889));
panda$io$MemoryOutputStream** $tmp5890 = &param0->shimsBuffer;
panda$io$MemoryOutputStream* $tmp5891 = *$tmp5890;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5891));
panda$io$IndentedOutputStream** $tmp5892 = &param0->shims;
panda$io$IndentedOutputStream* $tmp5893 = *$tmp5892;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5893));
panda$collections$HashSet** $tmp5894 = &param0->declared;
panda$collections$HashSet* $tmp5895 = *$tmp5894;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5895));
panda$collections$HashSet** $tmp5896 = &param0->writtenTypes;
panda$collections$HashSet* $tmp5897 = *$tmp5896;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5897));
panda$collections$HashSet** $tmp5898 = &param0->writtenWrappers;
panda$collections$HashSet* $tmp5899 = *$tmp5898;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5899));
panda$collections$HashMap** $tmp5900 = &param0->classConstants;
panda$collections$HashMap* $tmp5901 = *$tmp5900;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5901));
panda$collections$IdentityMap** $tmp5902 = &param0->variableNames;
panda$collections$IdentityMap* $tmp5903 = *$tmp5902;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5903));
panda$core$String** $tmp5904 = &param0->currentBlock;
panda$core$String* $tmp5905 = *$tmp5904;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5905));
org$pandalanguage$pandac$MethodDecl** $tmp5906 = &param0->currentMethod;
org$pandalanguage$pandac$MethodDecl* $tmp5907 = *$tmp5906;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5907));
panda$core$String** $tmp5908 = &param0->returnValueVar;
panda$core$String* $tmp5909 = *$tmp5908;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5909));
panda$collections$Stack** $tmp5910 = &param0->enclosingContexts;
panda$collections$Stack* $tmp5911 = *$tmp5910;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5911));
panda$collections$IdentityMap** $tmp5912 = &param0->methodShims;
panda$collections$IdentityMap* $tmp5913 = *$tmp5912;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5913));
panda$collections$IdentityMap** $tmp5914 = &param0->choiceDataSizes;
panda$collections$IdentityMap* $tmp5915 = *$tmp5914;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5915));
panda$collections$HashMap** $tmp5916 = &param0->refs;
panda$collections$HashMap* $tmp5917 = *$tmp5916;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5917));
org$pandalanguage$pandac$IR** $tmp5918 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp5919 = *$tmp5918;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5919));
return;

}

