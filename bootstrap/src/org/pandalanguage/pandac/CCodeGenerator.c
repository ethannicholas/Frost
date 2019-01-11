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
#include "org/pandalanguage/pandac/FixedArray.h"
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
org$pandalanguage$pandac$CCodeGenerator$class_type org$pandalanguage$pandac$CCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$cleanup, org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$cMethodType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$Q$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$stride$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim, org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$OpClass, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIntReference$panda$core$UInt64$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$Type$panda$core$Real64$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldOffset$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeIsNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value, org$pandalanguage$pandac$CCodeGenerator$writeIsNonNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value, org$pandalanguage$pandac$CCodeGenerator$isNull$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$writeBinary$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$writeBranch$org$pandalanguage$pandac$IR$Block$ID, org$pandalanguage$pandac$CCodeGenerator$writeCast$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$writeConditionalBranch$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID, org$pandalanguage$pandac$CCodeGenerator$writeConstruct$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$writeCreateStruct$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$IR$Value$GT, org$pandalanguage$pandac$CCodeGenerator$writeDynamicCall$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$IR$Value$GT, org$pandalanguage$pandac$CCodeGenerator$writeExtractField$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$CCodeGenerator$writeGetChoiceFieldPointer$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$writeGetFieldPointer$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$CCodeGenerator$writeGetInterfaceMethod$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$writeGetVirtualMethod$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$panda$core$Int64$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$writeLoad$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value, org$pandalanguage$pandac$CCodeGenerator$writeNegate$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value, org$pandalanguage$pandac$CCodeGenerator$writeNot$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value, org$pandalanguage$pandac$CCodeGenerator$writePointerAlloc$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$writePointerDestroy$org$pandalanguage$pandac$IR$Value, org$pandalanguage$pandac$CCodeGenerator$writePointerGetIndex$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value, org$pandalanguage$pandac$CCodeGenerator$writePointerOffset$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value, org$pandalanguage$pandac$CCodeGenerator$writePointerRealloc$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value, org$pandalanguage$pandac$CCodeGenerator$writePointerSetIndex$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value, org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IR$Value$Q, org$pandalanguage$pandac$CCodeGenerator$writeStaticCall$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$IR$Value$GT, org$pandalanguage$pandac$CCodeGenerator$writeStore$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value, org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Statement, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$writeIR$org$pandalanguage$pandac$IR, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IR, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

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
typedef panda$core$Bit (*$fn664)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn726)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn730)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn735)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn809)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn848)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn912)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn980)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn1009)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1013)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1018)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1060)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1091)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1095)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1100)(panda$collections$Iterator*);
typedef void (*$fn1126)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1170)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1176)(panda$collections$CollectionView*);
typedef void (*$fn1213)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1224)(panda$collections$CollectionView*);
typedef void (*$fn1275)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1303)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1326)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1387)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn1426)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn1457)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn1469)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1477)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1486)(panda$collections$CollectionView*);
typedef void (*$fn1524)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1551)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1557)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Bit (*$fn1563)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn1578)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1592)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1607)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1636)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1640)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1645)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1687)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1723)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1727)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1732)(panda$collections$Iterator*);
typedef void (*$fn1758)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn1825)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2004)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2008)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2013)(panda$collections$Iterator*);
typedef void (*$fn2039)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2100)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2224)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2253)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2289)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2522)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2529)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2545)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2567)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2591)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2662)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2675)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2693)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2703)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2718)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2742)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2780)(panda$collections$CollectionView*);
typedef void (*$fn2821)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn2853)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2877)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn2891)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2897)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2928)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2938)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2941)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2956)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2966)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2983)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn2992)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn3000)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3033)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3042)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn3051)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn3063)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3066)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3081)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3091)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn3120)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3255)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3285)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn3386)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3390)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3394)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3399)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3408)(panda$core$Formattable*, panda$core$String*);
typedef void (*$fn3418)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3424)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn3433)(panda$collections$Key*);
typedef void (*$fn3440)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn3455)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3713)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn3734)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn3750)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn3760)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn3790)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn3806)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn3816)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn3851)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4027)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4044)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4050)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4069)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn4086)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn4137)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4175)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4181)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4185)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4190)(panda$collections$Iterator*);
typedef void (*$fn4205)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4213)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4223)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn4242)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn4259)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4272)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4278)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4282)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4287)(panda$collections$Iterator*);
typedef void (*$fn4294)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4300)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4308)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4343)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4406)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4441)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4464)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4479)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4501)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4515)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4540)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4577)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4589)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4604)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4615)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4630)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4641)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4656)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4693)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4711)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4722)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4745)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4762)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4781)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4796)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn4808)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn4820)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn4831)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4861)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4891)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4905)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4909)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn4930)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn4948)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4960)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4972)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4983)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4989)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4993)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4998)(panda$collections$Iterator*);
typedef void (*$fn5005)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5011)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5019)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5036)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5099)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5419)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn5437)(panda$collections$CollectionView*);
typedef void (*$fn5481)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5494)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5499)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn5528)(panda$collections$CollectionView*);
typedef void (*$fn5577)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn5589)(panda$collections$CollectionView*);
typedef void (*$fn5686)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5708)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5722)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5726)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5731)(panda$collections$Iterator*);
typedef void (*$fn5753)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5767)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5781)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn5786)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn5790)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5851)(panda$io$OutputStream*);
typedef void (*$fn5868)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn5876)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn5884)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn5892)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn5900)(panda$io$OutputStream*, panda$core$Object*);

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
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
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
static panda$core$String $s648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s838 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s866 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s879 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s903 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s905 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s938 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static panda$core$String $s986 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x73\x20\x6e\x6f\x74\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 16, 538313452881261501, NULL };
static panda$core$String $s987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s995 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s1003 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s1005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s1041 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x5f", 2, 13932, NULL };
static panda$core$String $s1048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1054 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s1056 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x6e\x65\x78\x74\x3b\x20", 19, -82469649542869656, NULL };
static panda$core$String $s1064 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static panda$core$String $s1066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s1070 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1076 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s1078 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1082 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s1085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s1120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s1129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s1186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s1190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s1195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73\x68\x69\x6d", 5, 14375831170, NULL };
static panda$core$String $s1205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x5f\x61\x74\x74\x72\x69\x62\x75\x74\x65\x5f\x5f\x28\x28\x77\x65\x61\x6b\x29\x29\x20", 22, 985746977287669079, NULL };
static panda$core$String $s1207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70", 2, 13545, NULL };
static panda$core$String $s1273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s1316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static panda$core$String $s1354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70", 1, 213, NULL };
static panda$core$String $s1356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x4f\x62\x6a\x65\x63\x74\x2a\x29\x20", 21, 2977864674277076004, NULL };
static panda$core$String $s1422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x50\x61\x6e\x64\x61\x24\x75\x6e\x72\x65\x66\x24\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x4f\x62\x6a\x65\x63\x74\x24\x51\x28", 43, 2175465386208652715, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20", 10, -868402795326672399, NULL };
static panda$core$String $s1475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x73\x75\x6c\x74", 6, 2270301397372, NULL };
static panda$core$String $s1574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1576 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s1632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s1668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5f", 9, 1496394141948660801, NULL };
static panda$core$String $s1675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s1683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 21, 7276812015398014858, NULL };
static panda$core$String $s1691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static panda$core$String $s1693 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s1697 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1702 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x26", 3, 1451812, NULL };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s1717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1719 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1737 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s1752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s1761 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s1763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s1867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s1899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s1900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s1923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s1925 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1928 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s1930 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s1944 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1947 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s1955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s1957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static panda$core$String $s1963 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s1969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1975 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s1977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1982 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1995 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s1998 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2000 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s2028 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s2051 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2072 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s2086 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s2088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s2094 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x65\x78\x74\x65\x72\x6e\x61\x6c\x20\x67\x6c\x6f\x62\x61\x6c\x20", 19, 7395979908803736066, NULL };
static panda$core$String $s2098 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s2125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s2144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s2146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s2176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static panda$core$String $s2182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s2188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s2196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b", 4, 233187142, NULL };
static panda$core$String $s2317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s2319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s2371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x6f\x70\x43\x6c\x61\x73\x73\x28\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x4f\x70\x43\x6c\x61\x73\x73\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 162, 4168334865051673726, NULL };
static panda$core$String $s2405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s2407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s2411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s2425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s2429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s2431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s2435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s2437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s2441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s2443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s2447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s2449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s2453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s2461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s2468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s2470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s2474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s2476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s2481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s2483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s2488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s2497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s2502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s2504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s2510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s2512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s2516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static panda$core$String $s2642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x29", 2, 19635, NULL };
static panda$core$String $s2655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static panda$core$String $s2657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2660 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static panda$core$String $s2665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static panda$core$String $s2667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, 318867264039102424, NULL };
static panda$core$String $s2673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s2687 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static panda$core$String $s2704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s2838 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6c\x6c\x69\x6e\x67\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20", 17, 6273213310080951380, NULL };
static panda$core$String $s2840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x61\x20\x74\x61\x72\x67\x65\x74", 17, 4566770767977439161, NULL };
static panda$core$String $s2841 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x67\x65\x74\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x28\x74\x61\x72\x67\x65\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x6d\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2c\x20\x69\x73\x53\x75\x70\x65\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x6f\x75\x74\x3a\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 233, -6328376933645788478, NULL };
static panda$core$String $s2885 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2889 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static panda$core$String $s2922 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2942 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s2954 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c\x3b", 8, 14324497440495800, NULL };
static panda$core$String $s2967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2981 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2998 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static panda$core$String $s3012 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s3016 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 17, 3278627383872437575, NULL };
static panda$core$String $s3022 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20", 22, -5027409806946055905, NULL };
static panda$core$String $s3028 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x29\x3b", 15, -9084967859609473468, NULL };
static panda$core$String $s3037 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x76\x61\x6c\x75\x65\x20\x3d\x20", 10, -5658520382000078270, NULL };
static panda$core$String $s3040 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3064 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3067 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s3079 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x3b", 8, 14324500803727928, NULL };
static panda$core$String $s3092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3097 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2d\x3e\x76\x61\x6c\x75\x65", 8, 15272754413107790, NULL };
static panda$core$String $s3137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c\x20\x3f\x20", 11, 7728168270859090233, NULL };
static panda$core$String $s3143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20\x28", 4, 137624963, NULL };
static panda$core$String $s3147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x30\x20\x7d\x29", 19, 3502995608209124108, NULL };
static panda$core$String $s3155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s3160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x74\x72\x75\x65\x20\x7d\x29", 9, 1573697403055851823, NULL };
static panda$core$String $s3163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s3174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x30", 2, 14895, NULL };
static panda$core$String $s3347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73", 2, 13952, NULL };
static panda$core$String $s3365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s3375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s3379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x24\x63\x6c\x61\x73\x73\x2c\x20", 46, -5089590097621792313, NULL };
static panda$core$String $s3381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x68\x61\x72\x38\x2a\x29\x20\x22", 21, 2848555729212071077, NULL };
static panda$core$String $s3410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s3412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x3e\x32", 3, 1526261, NULL };
static panda$core$String $s3414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x78", 2, 19613, NULL };
static panda$core$String $s3416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x2c\x20", 3, 1381611, NULL };
static panda$core$String $s3430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x4e\x55\x4c\x4c\x20\x7d\x3b", 9, 1573656756204980508, NULL };
static panda$core$String $s3443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x74\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3a\x20", 14, 4299600041167827879, NULL };
static panda$core$String $s3462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x66\x61\x6c\x73\x65\x20\x7d\x29", 23, 6429304196845160675, NULL };
static panda$core$String $s3492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x4e\x55\x4c\x4c\x29", 7, 151080389671230, NULL };
static panda$core$String $s3499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x67\x65\x74\x4e\x75\x6c\x6c\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x28\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 139, 5606836112822051941, NULL };
static panda$core$String $s3529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x26\x6c\x6f\x63\x61\x6c", 7, 150085078960302, NULL };
static panda$core$String $s3531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x6d", 5, 22265977430, NULL };
static panda$core$String $s3572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x64\x20", 3, 2111538, NULL };
static panda$core$String $s3605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x68\x61\x73\x20\x6e\x6f\x74\x20\x62\x65\x65\x6e\x20\x64\x65\x66\x69\x6e\x65\x64", 21, -4672138024147032761, NULL };
static panda$core$String $s3606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x20\x72\x65\x66\x3a\x20", 15, -4631094845120441450, NULL };
static panda$core$String $s3619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x76\x61\x6c\x75\x65\x20", 18, -3453142811018688841, NULL };
static panda$core$String $s3640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x67\x65\x74\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x28\x76\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 139, -7969864358283313808, NULL };
static panda$core$String $s3718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3765 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s3770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s3775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x3d\x20\x4e\x55\x4c\x4c", 8, 14324797439511602, NULL };
static panda$core$String $s3798 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3825 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s3830 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c", 8, 14295074875294774, NULL };
static panda$core$String $s3882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s3884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s3888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s3890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s3894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3903 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s3905 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s3909 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s3911 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s3915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s3917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s3921 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s3923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s3930 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s3941 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s3948 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s3950 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s3957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s3959 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s3966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s3968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s3972 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s3974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s3978 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s3980 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s3984 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s3986 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s3990 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s3992 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s3998 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x3a\x20", 22, 2546911445157482260, NULL };
static panda$core$String $s4000 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4001 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s4009 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4017 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4021 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4040 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s4042 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4057 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s4059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s4063 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s4067 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s4083 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 16, -2035714527346219032, NULL };
static panda$core$String $s4093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s4095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s4103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s4125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 19, -1805496395169551456, NULL };
static panda$core$String $s4130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s4152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s4164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s4173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s4176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x3b", 2, 22885, NULL };
static panda$core$String $s4253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s4328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s4341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s4365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s4385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s4389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s4393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x29\x20\x28", 4, 147754556, NULL };
static panda$core$String $s4397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x64\x61\x74\x61\x20", 8, 15719379260890086, NULL };
static panda$core$String $s4401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b\x20", 2, 14576, NULL };
static panda$core$String $s4403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s4426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s4430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x26", 4, 137655564, NULL };
static panda$core$String $s4434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s4439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static panda$core$String $s4458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static panda$core$String $s4469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static panda$core$String $s4471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, 318867264039102424, NULL };
static panda$core$String $s4477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s4495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static panda$core$String $s4516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s4526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static panda$core$String $s4538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s4558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s4566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s4570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static panda$core$String $s4574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s4594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x2a", 4, 137655568, NULL };
static panda$core$String $s4602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x2d", 4, 137655571, NULL };
static panda$core$String $s4628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x21", 4, 137655559, NULL };
static panda$core$String $s4654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s4678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28\x28", 5, 13903212206, NULL };
static panda$core$String $s4682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x29\x20\x70\x61\x6e\x64\x61\x5a\x41\x6c\x6c\x6f\x63\x28", 15, 5261903096392821497, NULL };
static panda$core$String $s4686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static panda$core$String $s4690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static panda$core$String $s4707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x46\x72\x65\x65\x28", 10, -5790438204225352665, NULL };
static panda$core$String $s4709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s4731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s4743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s4767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s4779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x69\x7a\x65\x20\x66\x6f\x72\x20\x74\x79\x70\x65\x20", 22, 6026307984013519672, NULL };
static panda$core$String $s4813 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s4825 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4829 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s4836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x52\x65\x61\x6c\x6c\x6f\x63\x28", 15, 2191018519584705024, NULL };
static panda$core$String $s4840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static panda$core$String $s4849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4853 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static panda$core$String $s4858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s4881 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s4885 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x20\x3d\x20", 4, 200211019, NULL };
static panda$core$String $s4889 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s4903 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4910 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x3b", 7, 229300545255632, NULL };
static panda$core$String $s4922 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4924 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4942 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4954 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4958 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s4981 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4984 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4986 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s5012 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s5014 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s5020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s5028 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s5030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s5034 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x2f\x20", 3, 1514527, NULL };
static panda$core$String $s5097 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x62\x6f\x72\x74\x28\x29\x3b\x20\x2f\x2f\x20\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 23, 8273563093259754029, NULL };
static panda$core$String $s5425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x20", 22, 6964540114321148707, NULL };
static panda$core$String $s5427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s5460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 21864007024, NULL };
static panda$core$String $s5462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c", 7, 141826707331641, NULL };
static panda$core$String $s5500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x3b", 2, 16118, NULL };
static panda$core$String $s5578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s5582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s5680 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s5687 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5701 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x61\x72\x61\x6d", 6, 1409599243562, NULL };
static panda$core$String $s5706 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5715 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s5717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s5739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x61\x72\x61\x6d", 6, 1409599243562, NULL };
static panda$core$String $s5751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s5762 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s5768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s5791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s5804 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s5838 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };

void org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File(org$pandalanguage$pandac$CCodeGenerator* param0, panda$io$File* param1) {

// line 58
org$pandalanguage$pandac$HCodeGenerator* $tmp2 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File$org$pandalanguage$pandac$CCodeGenerator($tmp2, param1, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
org$pandalanguage$pandac$HCodeGenerator** $tmp3 = &param0->hCodeGenRetain;
org$pandalanguage$pandac$HCodeGenerator* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
org$pandalanguage$pandac$HCodeGenerator** $tmp5 = &param0->hCodeGenRetain;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($1:org.pandalanguage.pandac.HCodeGenerator)
// line 59
org$pandalanguage$pandac$HCodeGenerator** $tmp6 = &param0->hCodeGenRetain;
org$pandalanguage$pandac$HCodeGenerator* $tmp7 = *$tmp6;
org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File$org$pandalanguage$pandac$HCodeGenerator(param0, param1, $tmp7);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File$org$pandalanguage$pandac$HCodeGenerator(org$pandalanguage$pandac$CCodeGenerator* param0, panda$io$File* param1, org$pandalanguage$pandac$HCodeGenerator* param2) {

// line 40
panda$core$Weak* $tmp8 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp8, ((panda$core$Object*) ((org$pandalanguage$pandac$Compiler*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$Weak** $tmp9 = &param0->compiler;
panda$core$Weak* $tmp10 = *$tmp9;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$core$Weak** $tmp11 = &param0->compiler;
*$tmp11 = $tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
// unreffing REF($1:panda.core.Weak<org.pandalanguage.pandac.Compiler?>)
// line 46
panda$io$MemoryOutputStream* $tmp12 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp12);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$io$MemoryOutputStream** $tmp13 = &param0->strings;
panda$io$MemoryOutputStream* $tmp14 = *$tmp13;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
panda$io$MemoryOutputStream** $tmp15 = &param0->strings;
*$tmp15 = $tmp12;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
// unreffing REF($17:panda.io.MemoryOutputStream)
// line 48
panda$collections$HashSet* $tmp16 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp16);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
panda$collections$HashSet** $tmp17 = &param0->imports;
panda$collections$HashSet* $tmp18 = *$tmp17;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$collections$HashSet** $tmp19 = &param0->imports;
*$tmp19 = $tmp16;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
// unreffing REF($31:panda.collections.HashSet<panda.core.String>)
// line 55
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
org$pandalanguage$pandac$ClassDecl** $tmp20 = &param0->currentClass;
org$pandalanguage$pandac$ClassDecl* $tmp21 = *$tmp20;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
org$pandalanguage$pandac$ClassDecl** $tmp22 = &param0->currentClass;
*$tmp22 = ((org$pandalanguage$pandac$ClassDecl*) NULL);
// line 178
panda$io$MemoryOutputStream* $tmp23 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp23);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
panda$io$MemoryOutputStream** $tmp24 = &param0->includes;
panda$io$MemoryOutputStream* $tmp25 = *$tmp24;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
panda$io$MemoryOutputStream** $tmp26 = &param0->includes;
*$tmp26 = $tmp23;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
// unreffing REF($55:panda.io.MemoryOutputStream)
// line 180
panda$io$MemoryOutputStream* $tmp27 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp27);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
panda$io$MemoryOutputStream** $tmp28 = &param0->declarations;
panda$io$MemoryOutputStream* $tmp29 = *$tmp28;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
panda$io$MemoryOutputStream** $tmp30 = &param0->declarations;
*$tmp30 = $tmp27;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
// unreffing REF($69:panda.io.MemoryOutputStream)
// line 182
panda$io$MemoryOutputStream* $tmp31 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp31);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
panda$io$MemoryOutputStream** $tmp32 = &param0->types;
panda$io$MemoryOutputStream* $tmp33 = *$tmp32;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
panda$io$MemoryOutputStream** $tmp34 = &param0->types;
*$tmp34 = $tmp31;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
// unreffing REF($83:panda.io.MemoryOutputStream)
// line 184
panda$io$MemoryOutputStream* $tmp35 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp35);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
panda$io$MemoryOutputStream** $tmp36 = &param0->methodsBuffer;
panda$io$MemoryOutputStream* $tmp37 = *$tmp36;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
panda$io$MemoryOutputStream** $tmp38 = &param0->methodsBuffer;
*$tmp38 = $tmp35;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// unreffing REF($97:panda.io.MemoryOutputStream)
// line 186
panda$io$IndentedOutputStream* $tmp39 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream** $tmp40 = &param0->methodsBuffer;
panda$io$MemoryOutputStream* $tmp41 = *$tmp40;
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp39, ((panda$io$OutputStream*) $tmp41));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
panda$io$IndentedOutputStream** $tmp42 = &param0->methods;
panda$io$IndentedOutputStream* $tmp43 = *$tmp42;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
panda$io$IndentedOutputStream** $tmp44 = &param0->methods;
*$tmp44 = $tmp39;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
// unreffing REF($111:panda.io.IndentedOutputStream)
// line 188
panda$io$MemoryOutputStream* $tmp45 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp45);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
panda$io$MemoryOutputStream** $tmp46 = &param0->methodHeaderBuffer;
panda$io$MemoryOutputStream* $tmp47 = *$tmp46;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
panda$io$MemoryOutputStream** $tmp48 = &param0->methodHeaderBuffer;
*$tmp48 = $tmp45;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
// unreffing REF($128:panda.io.MemoryOutputStream)
// line 190
panda$io$IndentedOutputStream* $tmp49 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream** $tmp50 = &param0->methodHeaderBuffer;
panda$io$MemoryOutputStream* $tmp51 = *$tmp50;
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp49, ((panda$io$OutputStream*) $tmp51));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
panda$io$IndentedOutputStream** $tmp52 = &param0->methodHeader;
panda$io$IndentedOutputStream* $tmp53 = *$tmp52;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
panda$io$IndentedOutputStream** $tmp54 = &param0->methodHeader;
*$tmp54 = $tmp49;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
// unreffing REF($142:panda.io.IndentedOutputStream)
// line 192
panda$io$MemoryOutputStream* $tmp55 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp55);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
panda$io$MemoryOutputStream** $tmp56 = &param0->shimsBuffer;
panda$io$MemoryOutputStream* $tmp57 = *$tmp56;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
panda$io$MemoryOutputStream** $tmp58 = &param0->shimsBuffer;
*$tmp58 = $tmp55;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
// unreffing REF($159:panda.io.MemoryOutputStream)
// line 194
panda$io$IndentedOutputStream* $tmp59 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream** $tmp60 = &param0->shimsBuffer;
panda$io$MemoryOutputStream* $tmp61 = *$tmp60;
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp59, ((panda$io$OutputStream*) $tmp61));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
panda$io$IndentedOutputStream** $tmp62 = &param0->shims;
panda$io$IndentedOutputStream* $tmp63 = *$tmp62;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
panda$io$IndentedOutputStream** $tmp64 = &param0->shims;
*$tmp64 = $tmp59;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
// unreffing REF($173:panda.io.IndentedOutputStream)
// line 196
panda$collections$HashSet* $tmp65 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp65);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
panda$collections$HashSet** $tmp66 = &param0->declared;
panda$collections$HashSet* $tmp67 = *$tmp66;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
panda$collections$HashSet** $tmp68 = &param0->declared;
*$tmp68 = $tmp65;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing REF($190:panda.collections.HashSet<panda.core.String>)
// line 198
panda$collections$HashSet* $tmp69 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp69);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
panda$collections$HashSet** $tmp70 = &param0->writtenTypes;
panda$collections$HashSet* $tmp71 = *$tmp70;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
panda$collections$HashSet** $tmp72 = &param0->writtenTypes;
*$tmp72 = $tmp69;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
// unreffing REF($205:panda.collections.HashSet<panda.core.String>)
// line 200
panda$collections$HashSet* $tmp73 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp73);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
panda$collections$HashSet** $tmp74 = &param0->writtenWrappers;
panda$collections$HashSet* $tmp75 = *$tmp74;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
panda$collections$HashSet** $tmp76 = &param0->writtenWrappers;
*$tmp76 = $tmp73;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing REF($220:panda.collections.HashSet<panda.core.String>)
// line 202
panda$collections$HashMap* $tmp77 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp77);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
panda$collections$HashMap** $tmp78 = &param0->classConstants;
panda$collections$HashMap* $tmp79 = *$tmp78;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
panda$collections$HashMap** $tmp80 = &param0->classConstants;
*$tmp80 = $tmp77;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
// unreffing REF($235:panda.collections.HashMap<panda.core.String, org.pandalanguage.pandac.CCodeGenerator.ClassConstant>)
// line 204
panda$collections$IdentityMap* $tmp81 = (panda$collections$IdentityMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$IdentityMap$class);
panda$collections$IdentityMap$init($tmp81);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
panda$collections$IdentityMap** $tmp82 = &param0->variableNames;
panda$collections$IdentityMap* $tmp83 = *$tmp82;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
panda$collections$IdentityMap** $tmp84 = &param0->variableNames;
*$tmp84 = $tmp81;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
// unreffing REF($250:panda.collections.IdentityMap<org.pandalanguage.pandac.Variable, panda.core.String>)
// line 212
panda$collections$Stack* $tmp85 = (panda$collections$Stack*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Stack$class);
panda$collections$Stack$init($tmp85);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
panda$collections$Stack** $tmp86 = &param0->enclosingContexts;
panda$collections$Stack* $tmp87 = *$tmp86;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
panda$collections$Stack** $tmp88 = &param0->enclosingContexts;
*$tmp88 = $tmp85;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
// unreffing REF($265:panda.collections.Stack<org.pandalanguage.pandac.CCodeGenerator.EnclosingContext>)
// line 214
panda$core$Int64 $tmp89 = (panda$core$Int64) {0};
panda$core$Int64* $tmp90 = &param0->varCount;
*$tmp90 = $tmp89;
// line 216
panda$collections$IdentityMap* $tmp91 = (panda$collections$IdentityMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$IdentityMap$class);
panda$collections$IdentityMap$init($tmp91);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
panda$collections$IdentityMap** $tmp92 = &param0->methodShims;
panda$collections$IdentityMap* $tmp93 = *$tmp92;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
panda$collections$IdentityMap** $tmp94 = &param0->methodShims;
*$tmp94 = $tmp91;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
// unreffing REF($284:panda.collections.IdentityMap<org.pandalanguage.pandac.MethodDecl, org.pandalanguage.pandac.CCodeGenerator.MethodShim>)
// line 218
panda$collections$IdentityMap* $tmp95 = (panda$collections$IdentityMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$IdentityMap$class);
panda$collections$IdentityMap$init($tmp95);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
panda$collections$IdentityMap** $tmp96 = &param0->choiceDataSizes;
panda$collections$IdentityMap* $tmp97 = *$tmp96;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
panda$collections$IdentityMap** $tmp98 = &param0->choiceDataSizes;
*$tmp98 = $tmp95;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
// unreffing REF($299:panda.collections.IdentityMap<org.pandalanguage.pandac.ClassDecl, panda.core.Int64>)
// line 220
panda$collections$HashMap* $tmp99 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp99);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp99));
panda$collections$HashMap** $tmp100 = &param0->refs;
panda$collections$HashMap* $tmp101 = *$tmp100;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
panda$collections$HashMap** $tmp102 = &param0->refs;
*$tmp102 = $tmp99;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp99));
// unreffing REF($314:panda.collections.HashMap<org.pandalanguage.pandac.IR.Statement.ID, panda.core.String>)
// line 63
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$File** $tmp103 = &param0->outDir;
panda$io$File* $tmp104 = *$tmp103;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
panda$io$File** $tmp105 = &param0->outDir;
*$tmp105 = param1;
// line 64
panda$io$IndentedOutputStream* $tmp106 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream* $tmp107 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp107);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp106, ((panda$io$OutputStream*) $tmp107));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
panda$io$IndentedOutputStream** $tmp108 = &param0->out;
panda$io$IndentedOutputStream* $tmp109 = *$tmp108;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
panda$io$IndentedOutputStream** $tmp110 = &param0->out;
*$tmp110 = $tmp106;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
// unreffing REF($339:panda.io.MemoryOutputStream)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
// unreffing REF($338:panda.io.IndentedOutputStream)
// line 65
panda$core$Weak* $tmp111 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp111, ((panda$core$Object*) param2));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
panda$core$Weak** $tmp112 = &param0->hCodeGen;
panda$core$Weak* $tmp113 = *$tmp112;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
panda$core$Weak** $tmp114 = &param0->hCodeGen;
*$tmp114 = $tmp111;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
// unreffing REF($358:panda.core.Weak<org.pandalanguage.pandac.HCodeGenerator>)
return;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1) {

// line 69
panda$core$Weak** $tmp115 = &param0->hCodeGen;
panda$core$Weak* $tmp116 = *$tmp115;
panda$core$Object* $tmp117 = panda$core$Weak$get$R$panda$core$Weak$T($tmp116);
panda$core$String* $tmp118 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$HCodeGenerator*) $tmp117), param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp117);
// unreffing REF($4:panda.core.Weak.T)
return $tmp118;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

// line 73
panda$core$Weak** $tmp119 = &param0->hCodeGen;
panda$core$Weak* $tmp120 = *$tmp119;
panda$core$Object* $tmp121 = panda$core$Weak$get$R$panda$core$Weak$T($tmp120);
panda$core$String* $tmp122 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(((org$pandalanguage$pandac$HCodeGenerator*) $tmp121), param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp121);
// unreffing REF($4:panda.core.Weak.T)
return $tmp122;

}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

// line 77
panda$core$Weak** $tmp123 = &param0->hCodeGen;
panda$core$Weak* $tmp124 = *$tmp123;
panda$core$Object* $tmp125 = panda$core$Weak$get$R$panda$core$Weak$T($tmp124);
panda$core$Int64 $tmp126 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(((org$pandalanguage$pandac$HCodeGenerator*) $tmp125), param1);
panda$core$Panda$unref$panda$core$Object$Q($tmp125);
// unreffing REF($4:panda.core.Weak.T)
return $tmp126;

}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

// line 81
org$pandalanguage$pandac$ClassDecl** $tmp127 = &param0->currentClass;
org$pandalanguage$pandac$ClassDecl* $tmp128 = *$tmp127;
bool $tmp129 = param1 != $tmp128;
panda$core$Bit $tmp130 = panda$core$Bit$init$builtin_bit($tmp129);
return $tmp130;

}
void org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

panda$core$String* local0 = NULL;
// line 85
panda$core$String** $tmp131 = &param1->name;
panda$core$String* $tmp132 = *$tmp131;
panda$core$Bit $tmp133 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp132, &$s134);
bool $tmp135 = $tmp133.value;
if ($tmp135) goto block1; else goto block2;
block1:;
// line 86
return;
block2:;
// line 88
panda$core$Weak** $tmp136 = &param0->hCodeGen;
panda$core$Weak* $tmp137 = *$tmp136;
panda$core$Object* $tmp138 = panda$core$Weak$get$R$panda$core$Weak$T($tmp137);
panda$core$String* $tmp139 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$HCodeGenerator*) $tmp138), param1, &$s140);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
panda$core$String* $tmp141 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
*(&local0) = $tmp139;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
// unreffing REF($14:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp138);
// unreffing REF($12:panda.core.Weak.T)
// line 89
panda$collections$HashSet** $tmp142 = &param0->imports;
panda$collections$HashSet* $tmp143 = *$tmp142;
panda$core$String* $tmp144 = *(&local0);
panda$core$Bit $tmp145 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp143, ((panda$collections$Key*) $tmp144));
panda$core$Bit $tmp146 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp145);
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block3; else goto block4;
block3:;
// line 90
panda$io$MemoryOutputStream** $tmp148 = &param0->includes;
panda$io$MemoryOutputStream* $tmp149 = *$tmp148;
panda$core$String* $tmp150 = *(&local0);
panda$core$String* $tmp151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s152, $tmp150);
panda$core$String* $tmp153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp151, &$s154);
$fn156 $tmp155 = ($fn156) ((panda$io$OutputStream*) $tmp149)->$class->vtable[19];
$tmp155(((panda$io$OutputStream*) $tmp149), $tmp153);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
// unreffing REF($44:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
// unreffing REF($43:panda.core.String)
// line 91
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
// line 96
panda$core$Bit* $tmp161 = &param1->resolved;
panda$core$Bit $tmp162 = *$tmp161;
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp164 = (panda$core$Int64) {96};
panda$core$String* $tmp165 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s166, ((panda$core$Object*) param1));
panda$core$String* $tmp167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp165, &$s168);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s169, $tmp164, $tmp167);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
// unreffing REF($8:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
// unreffing REF($7:panda.core.String)
abort(); // unreachable
block1:;
// line 97
panda$core$Bit $tmp170 = org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit(param1);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block3; else goto block4;
block3:;
// line 98
panda$core$Weak** $tmp172 = &param0->compiler;
panda$core$Weak* $tmp173 = *$tmp172;
panda$core$Object* $tmp174 = panda$core$Weak$get$R$panda$core$Weak$T($tmp173);
org$pandalanguage$pandac$ClassDecl* $tmp175 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp174), param1);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
org$pandalanguage$pandac$ClassDecl* $tmp176 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
*(&local0) = $tmp175;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
// unreffing REF($28:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp174);
// unreffing REF($25:panda.core.Weak.T)
// line 99
org$pandalanguage$pandac$ClassDecl* $tmp177 = *(&local0);
panda$core$Bit $tmp178 = panda$core$Bit$init$builtin_bit($tmp177 != NULL);
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp180 = (panda$core$Int64) {99};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s181, $tmp180);
abort(); // unreachable
block5:;
// line 100
org$pandalanguage$pandac$ClassDecl* $tmp182 = *(&local0);
org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(param0, $tmp182);
org$pandalanguage$pandac$ClassDecl* $tmp183 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp183));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block4;
block4:;
// line 102
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
// line 104
org$pandalanguage$pandac$Type* $tmp193 = org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp194 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp193);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
// unreffing REF($75:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
// unreffing REF($74:org.pandalanguage.pandac.Type)
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
// line 107
org$pandalanguage$pandac$Type* $tmp201 = org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp202 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp201);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp202));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp202));
// unreffing REF($95:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
// unreffing REF($94:org.pandalanguage.pandac.Type)
return $tmp202;
block13:;
panda$core$Int64 $tmp203 = (panda$core$Int64) {11};
panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp186, $tmp203);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block14; else goto block7;
block14:;
// line 110
org$pandalanguage$pandac$FixedArray** $tmp206 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp207 = *$tmp206;
panda$core$Int64 $tmp208 = (panda$core$Int64) {0};
panda$core$Object* $tmp209 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp207, $tmp208);
panda$core$String** $tmp210 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp209))->name;
panda$core$String* $tmp211 = *$tmp210;
panda$core$Bit $tmp212 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp211, &$s213);
bool $tmp214 = $tmp212.value;
if ($tmp214) goto block17; else goto block18;
block17:;
org$pandalanguage$pandac$FixedArray** $tmp215 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp216 = *$tmp215;
panda$core$Int64 $tmp217 = (panda$core$Int64) {1};
panda$core$Object* $tmp218 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp216, $tmp217);
panda$core$Bit $tmp219 = org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp218));
panda$core$Panda$unref$panda$core$Object$Q($tmp218);
// unreffing REF($128:org.pandalanguage.pandac.FixedArray.T)
*(&local1) = $tmp219;
goto block19;
block18:;
*(&local1) = $tmp212;
goto block19;
block19:;
panda$core$Bit $tmp220 = *(&local1);
bool $tmp221 = $tmp220.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp209);
// unreffing REF($115:org.pandalanguage.pandac.FixedArray.T)
if ($tmp221) goto block15; else goto block16;
block15:;
// line 111
org$pandalanguage$pandac$FixedArray** $tmp222 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp223 = *$tmp222;
panda$core$Int64 $tmp224 = (panda$core$Int64) {1};
panda$core$Object* $tmp225 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp223, $tmp224);
panda$core$String* $tmp226 = org$pandalanguage$pandac$CCodeGenerator$cMethodType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$Q$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp225), ((org$pandalanguage$pandac$Type*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
// unreffing REF($152:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp225);
// unreffing REF($150:org.pandalanguage.pandac.FixedArray.T)
return $tmp226;
block16:;
goto block7;
block7:;
// line 115
panda$core$Weak** $tmp227 = &param0->hCodeGen;
panda$core$Weak* $tmp228 = *$tmp227;
panda$core$Object* $tmp229 = panda$core$Weak$get$R$panda$core$Weak$T($tmp228);
panda$core$String* $tmp230 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(((org$pandalanguage$pandac$HCodeGenerator*) $tmp229), param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp230));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp230));
// unreffing REF($169:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp229);
// unreffing REF($167:panda.core.Weak.T)
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp247)));
// unreffing REF($19:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp244)));
// unreffing REF($15:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp259)));
// unreffing REF($41:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp256)));
// unreffing REF($37:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp271)));
// unreffing REF($63:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp268)));
// unreffing REF($59:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local0) = $tmp275;
goto block9;
block9:;
panda$core$Bit $tmp276 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp236)));
// unreffing REF($6:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp233)));
// unreffing REF($2:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp278 = (panda$core$Int64) {120};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s279, $tmp278, &$s280);
abort(); // unreachable
block10:;
// line 121
panda$core$Int64* $tmp281 = &param0->varCount;
panda$core$Int64 $tmp282 = *$tmp281;
panda$core$Int64 $tmp283 = (panda$core$Int64) {1};
int64_t $tmp284 = $tmp282.value;
int64_t $tmp285 = $tmp283.value;
int64_t $tmp286 = $tmp284 + $tmp285;
panda$core$Int64 $tmp287 = (panda$core$Int64) {$tmp286};
panda$core$Int64* $tmp288 = &param0->varCount;
*$tmp288 = $tmp287;
// line 122
panda$core$Int64* $tmp289 = &param0->varCount;
panda$core$Int64 $tmp290 = *$tmp289;
panda$core$Int64$wrapper* $tmp291;
$tmp291 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp291->value = $tmp290;
panda$core$String* $tmp292 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s293, ((panda$core$Object*) $tmp291));
panda$core$String* $tmp294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp292, &$s295);
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
panda$core$String* $tmp296 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
*(&local3) = $tmp294;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
// unreffing REF($101:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp292));
// unreffing REF($100:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp291));
// unreffing REF($99:panda.core.Object)
// line 123
panda$core$MutableString* $tmp297 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp297, &$s298);
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp297));
panda$core$MutableString* $tmp299 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp299));
*(&local4) = $tmp297;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp297));
// unreffing REF($119:panda.core.MutableString)
// line 124
panda$core$MutableString* $tmp300 = *(&local4);
org$pandalanguage$pandac$FixedArray** $tmp301 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp302 = *$tmp301;
org$pandalanguage$pandac$FixedArray** $tmp303 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp304 = *$tmp303;
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
panda$core$Object* $tmp314 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp302, $tmp313);
panda$core$String* $tmp315 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp314));
panda$core$MutableString$append$panda$core$String($tmp300, $tmp315);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
// unreffing REF($149:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp314);
// unreffing REF($147:org.pandalanguage.pandac.FixedArray.T)
// line 125
panda$core$MutableString* $tmp316 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp316, &$s317);
// line 126
panda$core$MutableString* $tmp318 = *(&local4);
panda$core$String* $tmp319 = *(&local3);
panda$core$MutableString$append$panda$core$String($tmp318, $tmp319);
// line 127
panda$core$MutableString* $tmp320 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp320, &$s321);
// line 128
*(&local5) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s322));
panda$core$String* $tmp323 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp323));
*(&local5) = &$s324;
// line 129
panda$core$Bit $tmp325 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp326 = $tmp325.value;
if ($tmp326) goto block12; else goto block13;
block12:;
// line 130
panda$core$MutableString* $tmp327 = *(&local4);
panda$core$String* $tmp328 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param2);
panda$core$MutableString$append$panda$core$String($tmp327, $tmp328);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp328));
// unreffing REF($183:panda.core.String)
// line 131
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s329));
panda$core$String* $tmp330 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
*(&local5) = &$s331;
goto block13;
block13:;
// line 133
panda$core$Int64 $tmp332 = (panda$core$Int64) {0};
org$pandalanguage$pandac$FixedArray** $tmp333 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp334 = *$tmp333;
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
// line 134
panda$core$MutableString* $tmp362 = *(&local4);
panda$core$String* $tmp363 = *(&local5);
panda$core$MutableString$append$panda$core$String($tmp362, $tmp363);
// line 135
panda$core$MutableString* $tmp364 = *(&local4);
org$pandalanguage$pandac$FixedArray** $tmp365 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp366 = *$tmp365;
panda$core$Int64 $tmp367 = *(&local6);
panda$core$Object* $tmp368 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp366, $tmp367);
panda$core$String* $tmp369 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp368));
panda$core$MutableString$append$panda$core$String($tmp364, $tmp369);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp369));
// unreffing REF($243:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp368);
// unreffing REF($241:org.pandalanguage.pandac.FixedArray.T)
// line 136
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s370));
panda$core$String* $tmp371 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp371));
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
// line 138
panda$core$MutableString* $tmp393 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp393, &$s394);
// line 139
panda$io$MemoryOutputStream** $tmp395 = &param0->types;
panda$io$MemoryOutputStream* $tmp396 = *$tmp395;
panda$core$MutableString* $tmp397 = *(&local4);
panda$core$String* $tmp398 = panda$core$MutableString$finish$R$panda$core$String($tmp397);
$fn400 $tmp399 = ($fn400) ((panda$io$OutputStream*) $tmp396)->$class->vtable[19];
$tmp399(((panda$io$OutputStream*) $tmp396), $tmp398);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp398));
// unreffing REF($292:panda.core.String)
// line 140
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

// line 145
panda$core$Weak* $tmp405 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp405, ((panda$core$Object*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp405));
panda$core$Weak** $tmp406 = &param0->compiler;
panda$core$Weak* $tmp407 = *$tmp406;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
panda$core$Weak** $tmp408 = &param0->compiler;
*$tmp408 = $tmp405;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp405));
// unreffing REF($2:panda.core.Weak<org.pandalanguage.pandac.Compiler?>)
// line 146
panda$core$Weak** $tmp409 = &param0->hCodeGen;
panda$core$Weak* $tmp410 = *$tmp409;
panda$core$Object* $tmp411 = panda$core$Weak$get$R$panda$core$Weak$T($tmp410);
org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(((org$pandalanguage$pandac$HCodeGenerator*) $tmp411), param1);
panda$core$Panda$unref$panda$core$Object$Q($tmp411);
// unreffing REF($21:panda.core.Weak.T)
return;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0) {

// line 225
panda$core$Int64* $tmp412 = &param0->varCount;
panda$core$Int64 $tmp413 = *$tmp412;
panda$core$Int64 $tmp414 = (panda$core$Int64) {1};
int64_t $tmp415 = $tmp413.value;
int64_t $tmp416 = $tmp414.value;
int64_t $tmp417 = $tmp415 + $tmp416;
panda$core$Int64 $tmp418 = (panda$core$Int64) {$tmp417};
panda$core$Int64* $tmp419 = &param0->varCount;
*$tmp419 = $tmp418;
// line 226
panda$core$Int64* $tmp420 = &param0->varCount;
panda$core$Int64 $tmp421 = *$tmp420;
panda$core$Int64$wrapper* $tmp422;
$tmp422 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp422->value = $tmp421;
panda$core$String* $tmp423 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s424, ((panda$core$Object*) $tmp422));
panda$core$String* $tmp425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp423, &$s426);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
// unreffing REF($15:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp423));
// unreffing REF($14:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp422));
// unreffing REF($13:panda.core.Object)
return $tmp425;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0) {

// line 230
panda$core$Int64* $tmp427 = &param0->varCount;
panda$core$Int64 $tmp428 = *$tmp427;
panda$core$Int64 $tmp429 = (panda$core$Int64) {1};
int64_t $tmp430 = $tmp428.value;
int64_t $tmp431 = $tmp429.value;
int64_t $tmp432 = $tmp430 + $tmp431;
panda$core$Int64 $tmp433 = (panda$core$Int64) {$tmp432};
panda$core$Int64* $tmp434 = &param0->varCount;
*$tmp434 = $tmp433;
// line 231
panda$core$Int64* $tmp435 = &param0->varCount;
panda$core$Int64 $tmp436 = *$tmp435;
panda$core$Int64$wrapper* $tmp437;
$tmp437 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp437->value = $tmp436;
panda$core$String* $tmp438 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s439, ((panda$core$Object*) $tmp437));
panda$core$String* $tmp440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp438, &$s441);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp440));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp440));
// unreffing REF($15:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp438));
// unreffing REF($14:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp437));
// unreffing REF($13:panda.core.Object)
return $tmp440;

}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

panda$core$Int64$nullable local0;
org$pandalanguage$pandac$ChoiceCase* local1 = NULL;
panda$core$Int64 local2;
org$pandalanguage$pandac$Type* local3 = NULL;
// line 235
panda$collections$IdentityMap** $tmp442 = &param0->choiceDataSizes;
panda$collections$IdentityMap* $tmp443 = *$tmp442;
panda$core$Object* $tmp444 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q($tmp443, ((panda$core$Object*) param1));
*(&local0) = ($tmp444 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp444)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
panda$core$Panda$unref$panda$core$Object$Q($tmp444);
// unreffing REF($5:panda.collections.IdentityMap.V?)
// line 236
panda$core$Int64$nullable $tmp445 = *(&local0);
panda$core$Bit $tmp446 = panda$core$Bit$init$builtin_bit(!$tmp445.nonnull);
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block1; else goto block2;
block1:;
// line 237
panda$core$Int64 $tmp448 = (panda$core$Int64) {0};
*(&local0) = ((panda$core$Int64$nullable) { $tmp448, true });
// line 238
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ChoiceCase*) $tmp463)));
org$pandalanguage$pandac$ChoiceCase* $tmp464 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
*(&local1) = ((org$pandalanguage$pandac$ChoiceCase*) $tmp463);
// line 239
panda$core$Weak** $tmp465 = &param0->compiler;
panda$core$Weak* $tmp466 = *$tmp465;
panda$core$Object* $tmp467 = panda$core$Weak$get$R$panda$core$Weak$T($tmp466);
org$pandalanguage$pandac$ChoiceCase* $tmp468 = *(&local1);
org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceCase(((org$pandalanguage$pandac$Compiler*) $tmp467), $tmp468);
panda$core$Panda$unref$panda$core$Object$Q($tmp467);
// unreffing REF($50:panda.core.Weak.T)
// line 240
panda$core$Int64 $tmp469 = (panda$core$Int64) {0};
*(&local2) = $tmp469;
// line 241
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp485)));
org$pandalanguage$pandac$Type* $tmp486 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp486));
*(&local3) = ((org$pandalanguage$pandac$Type*) $tmp485);
// line 243
panda$core$Int64 $tmp487 = *(&local2);
org$pandalanguage$pandac$Type* $tmp488 = *(&local3);
panda$core$Int64 $tmp489 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, $tmp488);
int64_t $tmp490 = $tmp487.value;
int64_t $tmp491 = $tmp489.value;
int64_t $tmp492 = $tmp490 + $tmp491;
panda$core$Int64 $tmp493 = (panda$core$Int64) {$tmp492};
*(&local2) = $tmp493;
panda$core$Panda$unref$panda$core$Object$Q($tmp485);
// unreffing REF($79:panda.collections.Iterator.T)
org$pandalanguage$pandac$Type* $tmp494 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp494));
// unreffing f
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
goto block6;
block8:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp476));
// unreffing REF($68:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 245
panda$core$Int64$nullable $tmp495 = *(&local0);
panda$core$Int64 $tmp496 = *(&local2);
panda$core$Int64 $tmp497 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) $tmp495.value), $tmp496);
*(&local0) = ((panda$core$Int64$nullable) { $tmp497, true });
panda$core$Panda$unref$panda$core$Object$Q($tmp463);
// unreffing REF($38:panda.collections.Iterator.T)
org$pandalanguage$pandac$ChoiceCase* $tmp498 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp498));
// unreffing entry
*(&local1) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp454));
// unreffing REF($27:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 247
panda$collections$IdentityMap** $tmp499 = &param0->choiceDataSizes;
panda$collections$IdentityMap* $tmp500 = *$tmp499;
panda$core$Int64$nullable $tmp501 = *(&local0);
panda$core$Int64$wrapper* $tmp502;
$tmp502 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp502->value = ((panda$core$Int64) $tmp501.value);
panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V($tmp500, ((panda$core$Object*) param1), ((panda$core$Object*) $tmp502));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp502));
// unreffing REF($134:panda.collections.IdentityMap.V)
goto block2;
block2:;
// line 249
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
// line 253
panda$core$Bit* $tmp504 = &param1->resolved;
panda$core$Bit $tmp505 = *$tmp504;
bool $tmp506 = $tmp505.value;
if ($tmp506) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp507 = (panda$core$Int64) {253};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s508, $tmp507);
abort(); // unreachable
block1:;
// line 254
panda$core$Bit $tmp509 = org$pandalanguage$pandac$Type$get_isBuiltinNumber$R$panda$core$Bit(param1);
bool $tmp510 = $tmp509.value;
if ($tmp510) goto block3; else goto block4;
block3:;
// line 255
panda$core$String** $tmp511 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp512 = *$tmp511;
panda$core$Bit $tmp513 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp512, &$s514);
bool $tmp515 = $tmp513.value;
if ($tmp515) goto block5; else goto block6;
block5:;
// line 256
panda$core$Int64 $tmp516 = (panda$core$Int64) {1};
return $tmp516;
block6:;
// line 258
panda$core$String** $tmp517 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp518 = *$tmp517;
panda$core$Bit $tmp519 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp518, &$s520);
bool $tmp521 = $tmp519.value;
if ($tmp521) goto block7; else goto block8;
block7:;
// line 259
panda$core$Int64 $tmp522 = (panda$core$Int64) {2};
return $tmp522;
block8:;
// line 261
panda$core$String** $tmp523 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp524 = *$tmp523;
panda$core$Bit $tmp525 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp524, &$s526);
bool $tmp527 = $tmp525.value;
if ($tmp527) goto block9; else goto block10;
block9:;
// line 262
panda$core$Int64 $tmp528 = (panda$core$Int64) {4};
return $tmp528;
block10:;
// line 264
panda$core$String** $tmp529 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp530 = *$tmp529;
panda$core$Bit $tmp531 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp530, &$s532);
bool $tmp533 = $tmp531.value;
if ($tmp533) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp534 = (panda$core$Int64) {264};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s535, $tmp534);
abort(); // unreachable
block11:;
// line 265
panda$core$Int64 $tmp536 = (panda$core$Int64) {8};
return $tmp536;
block4:;
// line 267
org$pandalanguage$pandac$Type* $tmp537 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp538 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(param1, $tmp537);
bool $tmp539 = $tmp538.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
// unreffing REF($56:org.pandalanguage.pandac.Type)
if ($tmp539) goto block13; else goto block14;
block13:;
// line 268
panda$core$Int64 $tmp540 = (panda$core$Int64) {1};
return $tmp540;
block14:;
// line 270
panda$core$Weak** $tmp541 = &param0->compiler;
panda$core$Weak* $tmp542 = *$tmp541;
panda$core$Object* $tmp543 = panda$core$Weak$get$R$panda$core$Weak$T($tmp542);
org$pandalanguage$pandac$ClassDecl* $tmp544 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp543), param1);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp544));
org$pandalanguage$pandac$ClassDecl* $tmp545 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
*(&local0) = $tmp544;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp544));
// unreffing REF($73:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp543);
// unreffing REF($70:panda.core.Weak.T)
// line 271
org$pandalanguage$pandac$ClassDecl* $tmp546 = *(&local0);
panda$core$Bit $tmp547 = panda$core$Bit$init$builtin_bit($tmp546 != NULL);
bool $tmp548 = $tmp547.value;
if ($tmp548) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp549 = (panda$core$Int64) {271};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s550, $tmp549);
abort(); // unreachable
block15:;
// line 272
panda$core$Weak** $tmp551 = &param0->compiler;
panda$core$Weak* $tmp552 = *$tmp551;
panda$core$Object* $tmp553 = panda$core$Weak$get$R$panda$core$Weak$T($tmp552);
org$pandalanguage$pandac$ClassDecl* $tmp554 = *(&local0);
panda$core$Bit $tmp555 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp553), $tmp554);
panda$core$Bit $tmp556 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp555);
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block19; else goto block20;
block19:;
*(&local1) = $tmp556;
goto block21;
block20:;
org$pandalanguage$pandac$ClassDecl* $tmp558 = *(&local0);
panda$core$String** $tmp559 = &$tmp558->name;
panda$core$String* $tmp560 = *$tmp559;
panda$core$Bit $tmp561 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp560, &$s562);
*(&local1) = $tmp561;
goto block21;
block21:;
panda$core$Bit $tmp563 = *(&local1);
bool $tmp564 = $tmp563.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp553);
// unreffing REF($100:panda.core.Weak.T)
if ($tmp564) goto block17; else goto block18;
block17:;
// line 273
panda$core$Int64 $tmp565 = (panda$core$Int64) {8};
org$pandalanguage$pandac$ClassDecl* $tmp566 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp566));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp565;
block18:;
// line 275
panda$core$Int64 $tmp567 = (panda$core$Int64) {0};
*(&local2) = $tmp567;
// line 276
panda$core$Weak** $tmp568 = &param0->compiler;
panda$core$Weak* $tmp569 = *$tmp568;
panda$core$Object* $tmp570 = panda$core$Weak$get$R$panda$core$Weak$T($tmp569);
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp585)));
org$pandalanguage$pandac$FieldDecl* $tmp586 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp586));
*(&local3) = ((org$pandalanguage$pandac$FieldDecl*) $tmp585);
// line 277
org$pandalanguage$pandac$FieldDecl* $tmp587 = *(&local3);
org$pandalanguage$pandac$Annotations** $tmp588 = &$tmp587->annotations;
org$pandalanguage$pandac$Annotations* $tmp589 = *$tmp588;
panda$core$Bit $tmp590 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp589);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block25; else goto block26;
block25:;
// line 278
panda$core$Panda$unref$panda$core$Object$Q($tmp585);
// unreffing REF($158:panda.collections.Iterator.T)
org$pandalanguage$pandac$FieldDecl* $tmp592 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp592));
// unreffing f
*(&local3) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block22;
block26:;
// line 280
panda$core$Weak** $tmp593 = &param0->compiler;
panda$core$Weak* $tmp594 = *$tmp593;
panda$core$Object* $tmp595 = panda$core$Weak$get$R$panda$core$Weak$T($tmp594);
org$pandalanguage$pandac$FieldDecl* $tmp596 = *(&local3);
panda$core$Bit $tmp597 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp595), $tmp596);
panda$core$Panda$unref$panda$core$Object$Q($tmp595);
// unreffing REF($187:panda.core.Weak.T)
// line 281
org$pandalanguage$pandac$FieldDecl* $tmp598 = *(&local3);
org$pandalanguage$pandac$Type** $tmp599 = &$tmp598->type;
org$pandalanguage$pandac$Type* $tmp600 = *$tmp599;
org$pandalanguage$pandac$Type* $tmp601 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp602 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp600, $tmp601);
bool $tmp603 = $tmp602.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp601));
// unreffing REF($199:org.pandalanguage.pandac.Type)
if ($tmp603) goto block27; else goto block29;
block27:;
// line 283
panda$core$Int64 $tmp604 = *(&local2);
panda$core$Weak** $tmp605 = &param0->hCodeGen;
panda$core$Weak* $tmp606 = *$tmp605;
panda$core$Object* $tmp607 = panda$core$Weak$get$R$panda$core$Weak$T($tmp606);
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp608 = &((org$pandalanguage$pandac$HCodeGenerator*) $tmp607)->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp609 = *$tmp608;
org$pandalanguage$pandac$ClassDecl* $tmp610 = *(&local0);
panda$core$Int64 $tmp611 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64($tmp609, $tmp610);
int64_t $tmp612 = $tmp604.value;
int64_t $tmp613 = $tmp611.value;
int64_t $tmp614 = $tmp612 + $tmp613;
panda$core$Int64 $tmp615 = (panda$core$Int64) {$tmp614};
*(&local2) = $tmp615;
panda$core$Panda$unref$panda$core$Object$Q($tmp607);
// unreffing REF($211:panda.core.Weak.T)
goto block28;
block29:;
// line 1
// line 286
org$pandalanguage$pandac$FieldDecl* $tmp616 = *(&local3);
org$pandalanguage$pandac$Type** $tmp617 = &$tmp616->type;
org$pandalanguage$pandac$Type* $tmp618 = *$tmp617;
panda$core$Int64 $tmp619 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, $tmp618);
*(&local4) = $tmp619;
// line 287
panda$core$Int64 $tmp620 = *(&local2);
panda$core$Int64 $tmp621 = *(&local4);
panda$core$Int64 $tmp622 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp620, $tmp621);
*(&local5) = $tmp622;
// line 288
panda$core$Int64 $tmp623 = *(&local5);
panda$core$Int64 $tmp624 = (panda$core$Int64) {0};
int64_t $tmp625 = $tmp623.value;
int64_t $tmp626 = $tmp624.value;
bool $tmp627 = $tmp625 != $tmp626;
panda$core$Bit $tmp628 = (panda$core$Bit) {$tmp627};
bool $tmp629 = $tmp628.value;
if ($tmp629) goto block30; else goto block31;
block30:;
// line 289
panda$core$Int64 $tmp630 = *(&local2);
panda$core$Int64 $tmp631 = *(&local4);
panda$core$Int64 $tmp632 = *(&local5);
int64_t $tmp633 = $tmp631.value;
int64_t $tmp634 = $tmp632.value;
int64_t $tmp635 = $tmp633 - $tmp634;
panda$core$Int64 $tmp636 = (panda$core$Int64) {$tmp635};
int64_t $tmp637 = $tmp630.value;
int64_t $tmp638 = $tmp636.value;
int64_t $tmp639 = $tmp637 + $tmp638;
panda$core$Int64 $tmp640 = (panda$core$Int64) {$tmp639};
*(&local2) = $tmp640;
goto block31;
block31:;
// line 291
panda$core$Int64 $tmp641 = *(&local2);
panda$core$Int64 $tmp642 = *(&local4);
panda$core$Int64 $tmp643 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp641, $tmp642);
panda$core$Int64 $tmp644 = (panda$core$Int64) {0};
panda$core$Bit $tmp645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp643, $tmp644);
bool $tmp646 = $tmp645.value;
if ($tmp646) goto block32; else goto block33;
block33:;
panda$core$Int64 $tmp647 = (panda$core$Int64) {291};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s648, $tmp647);
abort(); // unreachable
block32:;
// line 292
panda$core$Int64 $tmp649 = *(&local2);
panda$core$Int64 $tmp650 = *(&local4);
int64_t $tmp651 = $tmp649.value;
int64_t $tmp652 = $tmp650.value;
int64_t $tmp653 = $tmp651 + $tmp652;
panda$core$Int64 $tmp654 = (panda$core$Int64) {$tmp653};
*(&local2) = $tmp654;
goto block28;
block28:;
panda$core$Panda$unref$panda$core$Object$Q($tmp585);
// unreffing REF($158:panda.collections.Iterator.T)
org$pandalanguage$pandac$FieldDecl* $tmp655 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp655));
// unreffing f
*(&local3) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block22;
block24:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp576));
// unreffing REF($147:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp572));
// unreffing REF($143:panda.collections.ListView<org.pandalanguage.pandac.FieldDecl>)
panda$core$Panda$unref$panda$core$Object$Q($tmp570);
// unreffing REF($138:panda.core.Weak.T)
// line 295
org$pandalanguage$pandac$Type$Kind* $tmp656 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp657 = *$tmp656;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp658;
$tmp658 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp658->value = $tmp657;
panda$core$Int64 $tmp659 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp660 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp659);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp661;
$tmp661 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp661->value = $tmp660;
ITable* $tmp662 = ((panda$core$Equatable*) $tmp658)->$class->itable;
while ($tmp662->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp662 = $tmp662->next;
}
$fn664 $tmp663 = $tmp662->methods[0];
panda$core$Bit $tmp665 = $tmp663(((panda$core$Equatable*) $tmp658), ((panda$core$Equatable*) $tmp661));
bool $tmp666 = $tmp665.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp661)));
// unreffing REF($307:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp658)));
// unreffing REF($303:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp666) goto block34; else goto block35;
block34:;
// line 296
panda$core$Int64 $tmp667 = *(&local2);
panda$core$Int64 $tmp668 = (panda$core$Int64) {1};
int64_t $tmp669 = $tmp667.value;
int64_t $tmp670 = $tmp668.value;
int64_t $tmp671 = $tmp669 + $tmp670;
panda$core$Int64 $tmp672 = (panda$core$Int64) {$tmp671};
*(&local2) = $tmp672;
goto block35;
block35:;
// line 298
panda$core$Int64 $tmp673 = *(&local2);
org$pandalanguage$pandac$ClassDecl* $tmp674 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp674));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp673;

}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

// line 302
panda$core$Int64 $tmp675 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param1);
panda$core$Int64 $tmp676 = (panda$core$Int64) {8};
panda$core$Int64 $tmp677 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp675, $tmp676);
return $tmp677;

}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$stride$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 306
panda$core$Int64 $tmp678 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param1);
*(&local0) = $tmp678;
// line 307
panda$core$Int64 $tmp679 = org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param1);
*(&local1) = $tmp679;
// line 308
panda$core$Int64 $tmp680 = *(&local0);
panda$core$Int64 $tmp681 = *(&local1);
panda$core$Int64 $tmp682 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp680, $tmp681);
panda$core$Int64 $tmp683 = (panda$core$Int64) {0};
panda$core$Bit $tmp684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp682, $tmp683);
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block1; else goto block2;
block1:;
// line 309
panda$core$Int64 $tmp686 = *(&local0);
return $tmp686;
block2:;
// line 311
panda$core$Int64 $tmp687 = *(&local0);
panda$core$Int64 $tmp688 = *(&local1);
int64_t $tmp689 = $tmp687.value;
int64_t $tmp690 = $tmp688.value;
int64_t $tmp691 = $tmp689 + $tmp690;
panda$core$Int64 $tmp692 = (panda$core$Int64) {$tmp691};
panda$core$Int64 $tmp693 = *(&local0);
panda$core$Int64 $tmp694 = *(&local1);
panda$core$Int64 $tmp695 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp693, $tmp694);
int64_t $tmp696 = $tmp692.value;
int64_t $tmp697 = $tmp695.value;
int64_t $tmp698 = $tmp696 - $tmp697;
panda$core$Int64 $tmp699 = (panda$core$Int64) {$tmp698};
return $tmp699;

}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
panda$core$Bit local1;
panda$core$Int64 local2;
org$pandalanguage$pandac$FieldDecl* local3 = NULL;
panda$core$Int64 local4;
panda$core$Int64 local5;
// line 315
panda$core$Weak** $tmp700 = &param0->compiler;
panda$core$Weak* $tmp701 = *$tmp700;
panda$core$Object* $tmp702 = panda$core$Weak$get$R$panda$core$Weak$T($tmp701);
org$pandalanguage$pandac$ClassDecl* $tmp703 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp702), param1);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp703));
org$pandalanguage$pandac$ClassDecl* $tmp704 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp704));
*(&local0) = $tmp703;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp703));
// unreffing REF($7:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp702);
// unreffing REF($4:panda.core.Weak.T)
// line 316
org$pandalanguage$pandac$ClassDecl* $tmp705 = *(&local0);
panda$core$Bit $tmp706 = panda$core$Bit$init$builtin_bit($tmp705 != NULL);
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block1; else goto block2;
block1:;
panda$core$Weak** $tmp708 = &param0->compiler;
panda$core$Weak* $tmp709 = *$tmp708;
panda$core$Object* $tmp710 = panda$core$Weak$get$R$panda$core$Weak$T($tmp709);
org$pandalanguage$pandac$ClassDecl* $tmp711 = *(&local0);
panda$core$Bit $tmp712 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp710), $tmp711);
panda$core$Panda$unref$panda$core$Object$Q($tmp710);
// unreffing REF($30:panda.core.Weak.T)
*(&local1) = $tmp712;
goto block3;
block2:;
*(&local1) = $tmp706;
goto block3;
block3:;
panda$core$Bit $tmp713 = *(&local1);
bool $tmp714 = $tmp713.value;
if ($tmp714) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp715 = (panda$core$Int64) {316};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s716, $tmp715);
abort(); // unreachable
block4:;
// line 317
org$pandalanguage$pandac$Type* $tmp717 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
panda$core$Int64 $tmp718 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, $tmp717);
*(&local2) = $tmp718;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp717));
// unreffing REF($49:org.pandalanguage.pandac.Type)
// line 318
panda$core$Weak** $tmp719 = &param0->compiler;
panda$core$Weak* $tmp720 = *$tmp719;
panda$core$Object* $tmp721 = panda$core$Weak$get$R$panda$core$Weak$T($tmp720);
org$pandalanguage$pandac$ClassDecl* $tmp722 = *(&local0);
panda$collections$ListView* $tmp723 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp721), $tmp722);
ITable* $tmp724 = ((panda$collections$Iterable*) $tmp723)->$class->itable;
while ($tmp724->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp724 = $tmp724->next;
}
$fn726 $tmp725 = $tmp724->methods[0];
panda$collections$Iterator* $tmp727 = $tmp725(((panda$collections$Iterable*) $tmp723));
goto block6;
block6:;
ITable* $tmp728 = $tmp727->$class->itable;
while ($tmp728->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp728 = $tmp728->next;
}
$fn730 $tmp729 = $tmp728->methods[0];
panda$core$Bit $tmp731 = $tmp729($tmp727);
bool $tmp732 = $tmp731.value;
if ($tmp732) goto block8; else goto block7;
block7:;
*(&local3) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
ITable* $tmp733 = $tmp727->$class->itable;
while ($tmp733->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp733 = $tmp733->next;
}
$fn735 $tmp734 = $tmp733->methods[1];
panda$core$Object* $tmp736 = $tmp734($tmp727);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp736)));
org$pandalanguage$pandac$FieldDecl* $tmp737 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp737));
*(&local3) = ((org$pandalanguage$pandac$FieldDecl*) $tmp736);
// line 319
panda$core$Weak** $tmp738 = &param0->compiler;
panda$core$Weak* $tmp739 = *$tmp738;
panda$core$Object* $tmp740 = panda$core$Weak$get$R$panda$core$Weak$T($tmp739);
org$pandalanguage$pandac$FieldDecl* $tmp741 = *(&local3);
panda$core$Bit $tmp742 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp740), $tmp741);
panda$core$Panda$unref$panda$core$Object$Q($tmp740);
// unreffing REF($91:panda.core.Weak.T)
// line 320
org$pandalanguage$pandac$FieldDecl* $tmp743 = *(&local3);
org$pandalanguage$pandac$Type** $tmp744 = &$tmp743->type;
org$pandalanguage$pandac$Type* $tmp745 = *$tmp744;
org$pandalanguage$pandac$Type* $tmp746 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp747 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp745, $tmp746);
bool $tmp748 = $tmp747.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp746));
// unreffing REF($103:org.pandalanguage.pandac.Type)
if ($tmp748) goto block9; else goto block11;
block9:;
// line 322
panda$core$Int64 $tmp749 = *(&local2);
panda$core$Weak** $tmp750 = &param0->hCodeGen;
panda$core$Weak* $tmp751 = *$tmp750;
panda$core$Object* $tmp752 = panda$core$Weak$get$R$panda$core$Weak$T($tmp751);
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp753 = &((org$pandalanguage$pandac$HCodeGenerator*) $tmp752)->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp754 = *$tmp753;
org$pandalanguage$pandac$ClassDecl* $tmp755 = *(&local0);
panda$core$Int64 $tmp756 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64($tmp754, $tmp755);
int64_t $tmp757 = $tmp749.value;
int64_t $tmp758 = $tmp756.value;
int64_t $tmp759 = $tmp757 + $tmp758;
panda$core$Int64 $tmp760 = (panda$core$Int64) {$tmp759};
*(&local2) = $tmp760;
panda$core$Panda$unref$panda$core$Object$Q($tmp752);
// unreffing REF($115:panda.core.Weak.T)
goto block10;
block11:;
// line 1
// line 325
org$pandalanguage$pandac$FieldDecl* $tmp761 = *(&local3);
org$pandalanguage$pandac$Type** $tmp762 = &$tmp761->type;
org$pandalanguage$pandac$Type* $tmp763 = *$tmp762;
panda$core$Int64 $tmp764 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, $tmp763);
*(&local4) = $tmp764;
// line 326
panda$core$Int64 $tmp765 = *(&local2);
panda$core$Int64 $tmp766 = *(&local4);
panda$core$Int64 $tmp767 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp765, $tmp766);
*(&local5) = $tmp767;
// line 327
panda$core$Int64 $tmp768 = *(&local5);
panda$core$Int64 $tmp769 = (panda$core$Int64) {0};
int64_t $tmp770 = $tmp768.value;
int64_t $tmp771 = $tmp769.value;
bool $tmp772 = $tmp770 != $tmp771;
panda$core$Bit $tmp773 = (panda$core$Bit) {$tmp772};
bool $tmp774 = $tmp773.value;
if ($tmp774) goto block12; else goto block13;
block12:;
// line 328
panda$core$Int64 $tmp775 = *(&local2);
panda$core$Int64 $tmp776 = *(&local4);
panda$core$Int64 $tmp777 = *(&local5);
int64_t $tmp778 = $tmp776.value;
int64_t $tmp779 = $tmp777.value;
int64_t $tmp780 = $tmp778 - $tmp779;
panda$core$Int64 $tmp781 = (panda$core$Int64) {$tmp780};
int64_t $tmp782 = $tmp775.value;
int64_t $tmp783 = $tmp781.value;
int64_t $tmp784 = $tmp782 + $tmp783;
panda$core$Int64 $tmp785 = (panda$core$Int64) {$tmp784};
*(&local2) = $tmp785;
goto block13;
block13:;
// line 330
panda$core$Int64 $tmp786 = *(&local2);
panda$core$Int64 $tmp787 = *(&local4);
panda$core$Int64 $tmp788 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp786, $tmp787);
panda$core$Int64 $tmp789 = (panda$core$Int64) {0};
panda$core$Bit $tmp790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp788, $tmp789);
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp792 = (panda$core$Int64) {330};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s793, $tmp792);
abort(); // unreachable
block14:;
// line 331
panda$core$Int64 $tmp794 = *(&local2);
panda$core$Int64 $tmp795 = *(&local4);
int64_t $tmp796 = $tmp794.value;
int64_t $tmp797 = $tmp795.value;
int64_t $tmp798 = $tmp796 + $tmp797;
panda$core$Int64 $tmp799 = (panda$core$Int64) {$tmp798};
*(&local2) = $tmp799;
goto block10;
block10:;
panda$core$Panda$unref$panda$core$Object$Q($tmp736);
// unreffing REF($79:panda.collections.Iterator.T)
org$pandalanguage$pandac$FieldDecl* $tmp800 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp800));
// unreffing f
*(&local3) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block6;
block8:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp727));
// unreffing REF($68:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp723));
// unreffing REF($64:panda.collections.ListView<org.pandalanguage.pandac.FieldDecl>)
panda$core$Panda$unref$panda$core$Object$Q($tmp721);
// unreffing REF($59:panda.core.Weak.T)
// line 334
org$pandalanguage$pandac$Type$Kind* $tmp801 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp802 = *$tmp801;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp803;
$tmp803 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp803->value = $tmp802;
panda$core$Int64 $tmp804 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp805 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp804);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp806;
$tmp806 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp806->value = $tmp805;
ITable* $tmp807 = ((panda$core$Equatable*) $tmp803)->$class->itable;
while ($tmp807->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp807 = $tmp807->next;
}
$fn809 $tmp808 = $tmp807->methods[0];
panda$core$Bit $tmp810 = $tmp808(((panda$core$Equatable*) $tmp803), ((panda$core$Equatable*) $tmp806));
bool $tmp811 = $tmp810.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp806)));
// unreffing REF($211:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp803)));
// unreffing REF($207:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp811) goto block16; else goto block17;
block16:;
// line 335
panda$core$Int64 $tmp812 = *(&local2);
panda$core$Int64 $tmp813 = (panda$core$Int64) {1};
int64_t $tmp814 = $tmp812.value;
int64_t $tmp815 = $tmp813.value;
int64_t $tmp816 = $tmp814 + $tmp815;
panda$core$Int64 $tmp817 = (panda$core$Int64) {$tmp816};
*(&local2) = $tmp817;
goto block17;
block17:;
// line 337
panda$core$Int64 $tmp818 = *(&local2);
org$pandalanguage$pandac$ClassDecl* $tmp819 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp819));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp818;

}
void org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

// line 341
panda$collections$HashSet** $tmp820 = &param0->writtenTypes;
panda$collections$HashSet* $tmp821 = *$tmp820;
panda$core$String** $tmp822 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp823 = *$tmp822;
panda$core$Bit $tmp824 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp821, ((panda$collections$Key*) $tmp823));
bool $tmp825 = $tmp824.value;
if ($tmp825) goto block1; else goto block2;
block1:;
// line 342
return;
block2:;
return;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

// line 347
panda$core$String** $tmp826 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp827 = *$tmp826;
panda$core$String* $tmp828 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp827);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
// unreffing REF($4:panda.core.String)
return $tmp828;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
// line 351
panda$core$Weak** $tmp829 = &param0->compiler;
panda$core$Weak* $tmp830 = *$tmp829;
panda$core$Object* $tmp831 = panda$core$Weak$get$R$panda$core$Weak$T($tmp830);
org$pandalanguage$pandac$ClassDecl* $tmp832 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp831), param1);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp832));
org$pandalanguage$pandac$ClassDecl* $tmp833 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp833));
*(&local0) = $tmp832;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp832));
// unreffing REF($7:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp831);
// unreffing REF($4:panda.core.Weak.T)
// line 352
org$pandalanguage$pandac$ClassDecl* $tmp834 = *(&local0);
panda$core$Bit $tmp835 = panda$core$Bit$init$builtin_bit($tmp834 != NULL);
bool $tmp836 = $tmp835.value;
if ($tmp836) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp837 = (panda$core$Int64) {352};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s838, $tmp837);
abort(); // unreachable
block1:;
// line 353
org$pandalanguage$pandac$ClassDecl* $tmp839 = *(&local0);
org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(param0, $tmp839);
// line 354
org$pandalanguage$pandac$Type$Kind* $tmp840 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp841 = *$tmp840;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp842;
$tmp842 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp842->value = $tmp841;
panda$core$Int64 $tmp843 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp844 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp843);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp845;
$tmp845 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp845->value = $tmp844;
ITable* $tmp846 = ((panda$core$Equatable*) $tmp842)->$class->itable;
while ($tmp846->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp846 = $tmp846->next;
}
$fn848 $tmp847 = $tmp846->methods[0];
panda$core$Bit $tmp849 = $tmp847(((panda$core$Equatable*) $tmp842), ((panda$core$Equatable*) $tmp845));
bool $tmp850 = $tmp849.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp845)));
// unreffing REF($41:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp842)));
// unreffing REF($37:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp850) goto block3; else goto block4;
block3:;
// line 355
org$pandalanguage$pandac$FixedArray** $tmp851 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp852 = *$tmp851;
panda$core$Int64 $tmp853 = (panda$core$Int64) {0};
panda$core$Object* $tmp854 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp852, $tmp853);
panda$core$String* $tmp855 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp854));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp855));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp855));
// unreffing REF($60:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp854);
// unreffing REF($58:org.pandalanguage.pandac.FixedArray.T)
org$pandalanguage$pandac$ClassDecl* $tmp856 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp856));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp855;
block4:;
// line 357
panda$core$String** $tmp857 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp858 = *$tmp857;
panda$core$String* $tmp859 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp858);
panda$core$String* $tmp860 = panda$core$String$convert$R$panda$core$String($tmp859);
panda$core$String* $tmp861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp860, &$s862);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
// unreffing REF($81:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp860));
// unreffing REF($80:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp859));
// unreffing REF($79:panda.core.String)
org$pandalanguage$pandac$ClassDecl* $tmp863 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp863));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp861;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

// line 361
panda$core$String* $tmp864 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param1);
panda$core$String* $tmp865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp864, &$s866);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp865));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp865));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp864));
// unreffing REF($1:panda.core.String)
return $tmp865;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

org$pandalanguage$pandac$Type* local0 = NULL;
panda$core$MutableString* local1 = NULL;
panda$core$Int64 local2;
// line 365
panda$core$Weak** $tmp867 = &param0->compiler;
panda$core$Weak* $tmp868 = *$tmp867;
panda$core$Object* $tmp869 = panda$core$Weak$get$R$panda$core$Weak$T($tmp868);
org$pandalanguage$pandac$Type* $tmp870 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp869), param1);
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp870));
org$pandalanguage$pandac$Type* $tmp871 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp871));
*(&local0) = $tmp870;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp870));
// unreffing REF($7:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp869);
// unreffing REF($4:panda.core.Weak.T)
// line 366
panda$core$MutableString* $tmp872 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp872);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp872));
panda$core$MutableString* $tmp873 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp873));
*(&local1) = $tmp872;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp872));
// unreffing REF($22:panda.core.MutableString)
// line 367
panda$core$MutableString* $tmp874 = *(&local1);
org$pandalanguage$pandac$Type* $tmp875 = *(&local0);
org$pandalanguage$pandac$Type* $tmp876 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp875);
panda$core$String* $tmp877 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp876);
panda$core$MutableString$append$panda$core$String($tmp874, $tmp877);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp877));
// unreffing REF($38:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp876));
// unreffing REF($37:org.pandalanguage.pandac.Type)
// line 368
panda$core$MutableString* $tmp878 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp878, &$s879);
// line 369
panda$core$Bit $tmp880 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(param1);
bool $tmp881 = $tmp880.value;
if ($tmp881) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp882 = (panda$core$Int64) {369};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s883, $tmp882);
abort(); // unreachable
block1:;
// line 370
panda$core$MutableString* $tmp884 = *(&local1);
panda$core$Weak** $tmp885 = &param1->owner;
panda$core$Weak* $tmp886 = *$tmp885;
panda$core$Object* $tmp887 = panda$core$Weak$get$R$panda$core$Weak$T($tmp886);
panda$core$String** $tmp888 = &((org$pandalanguage$pandac$ClassDecl*) $tmp887)->name;
panda$core$String* $tmp889 = *$tmp888;
panda$core$String* $tmp890 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp889);
panda$core$String* $tmp891 = panda$core$String$convert$R$panda$core$String($tmp890);
panda$core$String* $tmp892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp891, &$s893);
panda$core$MutableString$append$panda$core$String($tmp884, $tmp892);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp892));
// unreffing REF($67:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp891));
// unreffing REF($66:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp890));
// unreffing REF($65:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp887);
// unreffing REF($61:panda.core.Weak.T)
// line 371
panda$core$Weak** $tmp894 = &param0->compiler;
panda$core$Weak* $tmp895 = *$tmp894;
panda$core$Object* $tmp896 = panda$core$Weak$get$R$panda$core$Weak$T($tmp895);
panda$core$Weak** $tmp897 = &param1->owner;
panda$core$Weak* $tmp898 = *$tmp897;
panda$core$Object* $tmp899 = panda$core$Weak$get$R$panda$core$Weak$T($tmp898);
panda$core$Bit $tmp900 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp896), ((org$pandalanguage$pandac$ClassDecl*) $tmp899));
bool $tmp901 = $tmp900.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp899);
// unreffing REF($91:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp896);
// unreffing REF($85:panda.core.Weak.T)
if ($tmp901) goto block3; else goto block4;
block3:;
// line 372
panda$core$MutableString* $tmp902 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp902, &$s903);
goto block4;
block4:;
// line 374
panda$core$MutableString* $tmp904 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp904, &$s905);
// line 375
panda$core$Int64 $tmp906 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp907 = *(&local0);
org$pandalanguage$pandac$FixedArray** $tmp908 = &$tmp907->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp909 = *$tmp908;
ITable* $tmp910 = ((panda$collections$CollectionView*) $tmp909)->$class->itable;
while ($tmp910->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp910 = $tmp910->next;
}
$fn912 $tmp911 = $tmp910->methods[0];
panda$core$Int64 $tmp913 = $tmp911(((panda$collections$CollectionView*) $tmp909));
panda$core$Int64 $tmp914 = (panda$core$Int64) {1};
int64_t $tmp915 = $tmp913.value;
int64_t $tmp916 = $tmp914.value;
int64_t $tmp917 = $tmp915 - $tmp916;
panda$core$Int64 $tmp918 = (panda$core$Int64) {$tmp917};
panda$core$Bit $tmp919 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp920 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp906, $tmp918, $tmp919);
panda$core$Int64 $tmp921 = $tmp920.min;
*(&local2) = $tmp921;
panda$core$Int64 $tmp922 = $tmp920.max;
panda$core$Bit $tmp923 = $tmp920.inclusive;
bool $tmp924 = $tmp923.value;
panda$core$Int64 $tmp925 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp926 = panda$core$Int64$convert$R$panda$core$UInt64($tmp925);
if ($tmp924) goto block8; else goto block9;
block8:;
int64_t $tmp927 = $tmp921.value;
int64_t $tmp928 = $tmp922.value;
bool $tmp929 = $tmp927 <= $tmp928;
panda$core$Bit $tmp930 = (panda$core$Bit) {$tmp929};
bool $tmp931 = $tmp930.value;
if ($tmp931) goto block5; else goto block6;
block9:;
int64_t $tmp932 = $tmp921.value;
int64_t $tmp933 = $tmp922.value;
bool $tmp934 = $tmp932 < $tmp933;
panda$core$Bit $tmp935 = (panda$core$Bit) {$tmp934};
bool $tmp936 = $tmp935.value;
if ($tmp936) goto block5; else goto block6;
block5:;
// line 376
panda$core$MutableString* $tmp937 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp937, &$s938);
// line 377
panda$core$MutableString* $tmp939 = *(&local1);
org$pandalanguage$pandac$Type* $tmp940 = *(&local0);
org$pandalanguage$pandac$FixedArray** $tmp941 = &$tmp940->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp942 = *$tmp941;
panda$core$Int64 $tmp943 = *(&local2);
panda$core$Object* $tmp944 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp942, $tmp943);
panda$core$String* $tmp945 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp944));
panda$core$MutableString$append$panda$core$String($tmp939, $tmp945);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp945));
// unreffing REF($158:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp944);
// unreffing REF($156:org.pandalanguage.pandac.FixedArray.T)
goto block7;
block7:;
panda$core$Int64 $tmp946 = *(&local2);
int64_t $tmp947 = $tmp922.value;
int64_t $tmp948 = $tmp946.value;
int64_t $tmp949 = $tmp947 - $tmp948;
panda$core$Int64 $tmp950 = (panda$core$Int64) {$tmp949};
panda$core$UInt64 $tmp951 = panda$core$Int64$convert$R$panda$core$UInt64($tmp950);
if ($tmp924) goto block11; else goto block12;
block11:;
uint64_t $tmp952 = $tmp951.value;
uint64_t $tmp953 = $tmp926.value;
bool $tmp954 = $tmp952 >= $tmp953;
panda$core$Bit $tmp955 = (panda$core$Bit) {$tmp954};
bool $tmp956 = $tmp955.value;
if ($tmp956) goto block10; else goto block6;
block12:;
uint64_t $tmp957 = $tmp951.value;
uint64_t $tmp958 = $tmp926.value;
bool $tmp959 = $tmp957 > $tmp958;
panda$core$Bit $tmp960 = (panda$core$Bit) {$tmp959};
bool $tmp961 = $tmp960.value;
if ($tmp961) goto block10; else goto block6;
block10:;
int64_t $tmp962 = $tmp946.value;
int64_t $tmp963 = $tmp925.value;
int64_t $tmp964 = $tmp962 + $tmp963;
panda$core$Int64 $tmp965 = (panda$core$Int64) {$tmp964};
*(&local2) = $tmp965;
goto block5;
block6:;
// line 379
panda$core$MutableString* $tmp966 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp966, &$s967);
// line 380
panda$core$MutableString* $tmp968 = *(&local1);
panda$core$String* $tmp969 = panda$core$MutableString$finish$R$panda$core$String($tmp968);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp969));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp969));
// unreffing REF($197:panda.core.String)
panda$core$MutableString* $tmp970 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp970));
// unreffing result
*(&local1) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$Type* $tmp971 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp971));
// unreffing inheritedType
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp969;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

// line 384
org$pandalanguage$pandac$Type$Kind* $tmp972 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp973 = *$tmp972;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp974;
$tmp974 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp974->value = $tmp973;
panda$core$Int64 $tmp975 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp976 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp975);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp977;
$tmp977 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp977->value = $tmp976;
ITable* $tmp978 = ((panda$core$Equatable*) $tmp974)->$class->itable;
while ($tmp978->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp978 = $tmp978->next;
}
$fn980 $tmp979 = $tmp978->methods[0];
panda$core$Bit $tmp981 = $tmp979(((panda$core$Equatable*) $tmp974), ((panda$core$Equatable*) $tmp977));
bool $tmp982 = $tmp981.value;
if ($tmp982) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp983 = (panda$core$Int64) {384};
panda$core$String* $tmp984 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(param1);
panda$core$String* $tmp985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp984, &$s986);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s987, $tmp983, $tmp985);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp985));
// unreffing REF($14:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp984));
// unreffing REF($13:panda.core.String)
abort(); // unreachable
block1:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp977)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp974)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
// line 385
org$pandalanguage$pandac$FixedArray** $tmp988 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp989 = *$tmp988;
panda$core$Int64 $tmp990 = (panda$core$Int64) {0};
panda$core$Object* $tmp991 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp989, $tmp990);
panda$core$String* $tmp992 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp991));
panda$core$String* $tmp993 = panda$core$String$convert$R$panda$core$String($tmp992);
panda$core$String* $tmp994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp993, &$s995);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp994));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp994));
// unreffing REF($39:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp993));
// unreffing REF($38:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp992));
// unreffing REF($37:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp991);
// unreffing REF($35:org.pandalanguage.pandac.FixedArray.T)
return $tmp994;

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
// line 389
panda$core$Weak** $tmp996 = &param0->compiler;
panda$core$Weak* $tmp997 = *$tmp996;
panda$core$Object* $tmp998 = panda$core$Weak$get$R$panda$core$Weak$T($tmp997);
org$pandalanguage$pandac$Type** $tmp999 = &param1->type;
org$pandalanguage$pandac$Type* $tmp1000 = *$tmp999;
panda$collections$HashSet* $tmp1001 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$HashSet$LTorg$pandalanguage$pandac$Type$GT(((org$pandalanguage$pandac$Compiler*) $tmp998), $tmp1000);
*(&local0) = ((panda$collections$HashSet*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1001));
panda$collections$HashSet* $tmp1002 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1002));
*(&local0) = $tmp1001;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1001));
// unreffing REF($9:panda.collections.HashSet<org.pandalanguage.pandac.Type>)
panda$core$Panda$unref$panda$core$Object$Q($tmp998);
// unreffing REF($4:panda.core.Weak.T)
// line 390
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1003));
panda$core$String* $tmp1004 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1004));
*(&local1) = &$s1005;
// line 391
panda$collections$HashSet* $tmp1006 = *(&local0);
ITable* $tmp1007 = ((panda$collections$Iterable*) $tmp1006)->$class->itable;
while ($tmp1007->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1007 = $tmp1007->next;
}
$fn1009 $tmp1008 = $tmp1007->methods[0];
panda$collections$Iterator* $tmp1010 = $tmp1008(((panda$collections$Iterable*) $tmp1006));
goto block1;
block1:;
ITable* $tmp1011 = $tmp1010->$class->itable;
while ($tmp1011->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1011 = $tmp1011->next;
}
$fn1013 $tmp1012 = $tmp1011->methods[0];
panda$core$Bit $tmp1014 = $tmp1012($tmp1010);
bool $tmp1015 = $tmp1014.value;
if ($tmp1015) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp1016 = $tmp1010->$class->itable;
while ($tmp1016->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1016 = $tmp1016->next;
}
$fn1018 $tmp1017 = $tmp1016->methods[1];
panda$core$Object* $tmp1019 = $tmp1017($tmp1010);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1019)));
org$pandalanguage$pandac$Type* $tmp1020 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1020));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp1019);
// line 392
panda$core$Weak** $tmp1021 = &param0->compiler;
panda$core$Weak* $tmp1022 = *$tmp1021;
panda$core$Object* $tmp1023 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1022);
org$pandalanguage$pandac$Type* $tmp1024 = *(&local2);
org$pandalanguage$pandac$ClassDecl* $tmp1025 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1023), $tmp1024);
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1025));
org$pandalanguage$pandac$ClassDecl* $tmp1026 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1026));
*(&local3) = $tmp1025;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1025));
// unreffing REF($63:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp1023);
// unreffing REF($59:panda.core.Weak.T)
// line 393
org$pandalanguage$pandac$ClassDecl* $tmp1027 = *(&local3);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1028 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, $tmp1027);
*(&local4) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1029 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1029));
*(&local4) = $tmp1028;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
// unreffing REF($80:org.pandalanguage.pandac.CCodeGenerator.ClassConstant)
// line 394
panda$core$Weak** $tmp1030 = &param0->compiler;
panda$core$Weak* $tmp1031 = *$tmp1030;
panda$core$Object* $tmp1032 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1031);
org$pandalanguage$pandac$Type* $tmp1033 = *(&local2);
panda$collections$ListView* $tmp1034 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp1032), param1, $tmp1033);
*(&local5) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1034));
panda$collections$ListView* $tmp1035 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1035));
*(&local5) = $tmp1034;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1034));
// unreffing REF($99:panda.collections.ListView<org.pandalanguage.pandac.MethodDecl>)
panda$core$Panda$unref$panda$core$Object$Q($tmp1032);
// unreffing REF($95:panda.core.Weak.T)
// line 395
panda$core$String** $tmp1036 = &param1->name;
panda$core$String* $tmp1037 = *$tmp1036;
panda$core$String* $tmp1038 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp1037);
panda$core$String* $tmp1039 = panda$core$String$convert$R$panda$core$String($tmp1038);
panda$core$String* $tmp1040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1039, &$s1041);
org$pandalanguage$pandac$ClassDecl* $tmp1042 = *(&local3);
panda$core$String** $tmp1043 = &$tmp1042->name;
panda$core$String* $tmp1044 = *$tmp1043;
panda$core$String* $tmp1045 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp1044);
panda$core$String* $tmp1046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1040, $tmp1045);
panda$core$String* $tmp1047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1046, &$s1048);
*(&local6) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1047));
panda$core$String* $tmp1049 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1049));
*(&local6) = $tmp1047;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1047));
// unreffing REF($125:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1046));
// unreffing REF($124:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1045));
// unreffing REF($123:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1040));
// unreffing REF($118:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1039));
// unreffing REF($117:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1038));
// unreffing REF($116:panda.core.String)
// line 396
panda$core$MutableString* $tmp1050 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$Type* $tmp1051 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp1052 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp1051);
panda$core$String* $tmp1053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1054, $tmp1052);
panda$core$String* $tmp1055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1053, &$s1056);
panda$collections$ListView* $tmp1057 = *(&local5);
ITable* $tmp1058 = ((panda$collections$CollectionView*) $tmp1057)->$class->itable;
while ($tmp1058->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1058 = $tmp1058->next;
}
$fn1060 $tmp1059 = $tmp1058->methods[0];
panda$core$Int64 $tmp1061 = $tmp1059(((panda$collections$CollectionView*) $tmp1057));
panda$core$Int64$wrapper* $tmp1062;
$tmp1062 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1062->value = $tmp1061;
panda$core$String* $tmp1063 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1064, ((panda$core$Object*) $tmp1062));
panda$core$String* $tmp1065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1063, &$s1066);
panda$core$String* $tmp1067 = *(&local6);
panda$core$String* $tmp1068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1065, $tmp1067);
panda$core$String* $tmp1069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1068, &$s1070);
panda$core$String* $tmp1071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1055, $tmp1069);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1072 = *(&local4);
panda$core$String** $tmp1073 = &$tmp1072->name;
panda$core$String* $tmp1074 = *$tmp1073;
panda$core$String* $tmp1075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1076, $tmp1074);
panda$core$String* $tmp1077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1075, &$s1078);
panda$core$String* $tmp1079 = *(&local1);
panda$core$String* $tmp1080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1077, $tmp1079);
panda$core$String* $tmp1081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1080, &$s1082);
panda$core$String* $tmp1083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1071, $tmp1081);
panda$core$MutableString$init$panda$core$String($tmp1050, $tmp1083);
*(&local7) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1050));
panda$core$MutableString* $tmp1084 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1084));
*(&local7) = $tmp1050;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1083));
// unreffing REF($176:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1081));
// unreffing REF($175:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1080));
// unreffing REF($174:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1077));
// unreffing REF($172:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1075));
// unreffing REF($171:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1071));
// unreffing REF($167:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1069));
// unreffing REF($166:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1068));
// unreffing REF($165:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1065));
// unreffing REF($163:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1063));
// unreffing REF($162:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1062));
// unreffing REF($161:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1055));
// unreffing REF($156:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1053));
// unreffing REF($155:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1052));
// unreffing REF($154:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1051));
// unreffing REF($153:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1050));
// unreffing REF($152:panda.core.MutableString)
// line 399
*(&local8) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1085));
panda$core$String* $tmp1086 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1086));
*(&local8) = &$s1087;
// line 400
panda$collections$ListView* $tmp1088 = *(&local5);
ITable* $tmp1089 = ((panda$collections$Iterable*) $tmp1088)->$class->itable;
while ($tmp1089->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1089 = $tmp1089->next;
}
$fn1091 $tmp1090 = $tmp1089->methods[0];
panda$collections$Iterator* $tmp1092 = $tmp1090(((panda$collections$Iterable*) $tmp1088));
goto block4;
block4:;
ITable* $tmp1093 = $tmp1092->$class->itable;
while ($tmp1093->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1093 = $tmp1093->next;
}
$fn1095 $tmp1094 = $tmp1093->methods[0];
panda$core$Bit $tmp1096 = $tmp1094($tmp1092);
bool $tmp1097 = $tmp1096.value;
if ($tmp1097) goto block6; else goto block5;
block5:;
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp1098 = $tmp1092->$class->itable;
while ($tmp1098->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1098 = $tmp1098->next;
}
$fn1100 $tmp1099 = $tmp1098->methods[1];
panda$core$Object* $tmp1101 = $tmp1099($tmp1092);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1101)));
org$pandalanguage$pandac$MethodDecl* $tmp1102 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1102));
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) $tmp1101);
// line 401
panda$core$MutableString* $tmp1103 = *(&local7);
panda$core$String* $tmp1104 = *(&local8);
panda$core$MutableString$append$panda$core$String($tmp1103, $tmp1104);
// line 402
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1105));
panda$core$String* $tmp1106 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1106));
*(&local8) = &$s1107;
// line 403
org$pandalanguage$pandac$MethodDecl* $tmp1108 = *(&local9);
org$pandalanguage$pandac$Annotations** $tmp1109 = &$tmp1108->annotations;
org$pandalanguage$pandac$Annotations* $tmp1110 = *$tmp1109;
panda$core$Bit $tmp1111 = org$pandalanguage$pandac$Annotations$get_isAbstract$R$panda$core$Bit($tmp1110);
bool $tmp1112 = $tmp1111.value;
if ($tmp1112) goto block7; else goto block9;
block7:;
// line 404
panda$core$MutableString* $tmp1113 = *(&local7);
panda$core$MutableString$append$panda$core$String($tmp1113, &$s1114);
goto block8;
block9:;
// line 1
// line 407
panda$core$MutableString* $tmp1115 = *(&local7);
org$pandalanguage$pandac$MethodDecl* $tmp1116 = *(&local9);
panda$core$String* $tmp1117 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, $tmp1116);
panda$core$MutableString$append$panda$core$String($tmp1115, $tmp1117);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1117));
// unreffing REF($291:panda.core.String)
goto block8;
block8:;
panda$core$Panda$unref$panda$core$Object$Q($tmp1101);
// unreffing REF($257:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp1118 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1118));
// unreffing m
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block4;
block6:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1092));
// unreffing REF($246:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 410
panda$core$MutableString* $tmp1119 = *(&local7);
panda$core$MutableString$append$panda$core$String($tmp1119, &$s1120);
// line 411
panda$io$MemoryOutputStream** $tmp1121 = &param0->types;
panda$io$MemoryOutputStream* $tmp1122 = *$tmp1121;
panda$core$MutableString* $tmp1123 = *(&local7);
panda$core$String* $tmp1124 = panda$core$MutableString$finish$R$panda$core$String($tmp1123);
$fn1126 $tmp1125 = ($fn1126) ((panda$io$OutputStream*) $tmp1122)->$class->vtable[19];
$tmp1125(((panda$io$OutputStream*) $tmp1122), $tmp1124);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1124));
// unreffing REF($317:panda.core.String)
// line 412
panda$core$String* $tmp1127 = *(&local6);
panda$core$String* $tmp1128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1129, $tmp1127);
panda$core$String* $tmp1130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1128, &$s1131);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1130));
panda$core$String* $tmp1132 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1132));
*(&local1) = $tmp1130;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1130));
// unreffing REF($326:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1128));
// unreffing REF($325:panda.core.String)
panda$core$String* $tmp1133 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1133));
// unreffing separator
*(&local8) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp1134 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1134));
// unreffing result
*(&local7) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp1135 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1135));
// unreffing name
*(&local6) = ((panda$core$String*) NULL);
panda$collections$ListView* $tmp1136 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1136));
// unreffing methods
*(&local5) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1137 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1137));
// unreffing intfCC
*(&local4) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp1138 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1138));
// unreffing intf
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1019);
// unreffing REF($47:panda.collections.Iterator.T)
org$pandalanguage$pandac$Type* $tmp1139 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1139));
// unreffing intfType
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1010));
// unreffing REF($36:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 414
panda$core$String* $tmp1140 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1140));
panda$core$String* $tmp1141 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1141));
// unreffing previous
*(&local1) = ((panda$core$String*) NULL);
panda$collections$HashSet* $tmp1142 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1142));
// unreffing interfaces
*(&local0) = ((panda$collections$HashSet*) NULL);
return $tmp1140;

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
// line 419
panda$collections$IdentityMap** $tmp1143 = &param0->methodShims;
panda$collections$IdentityMap* $tmp1144 = *$tmp1143;
panda$core$Object* $tmp1145 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q($tmp1144, ((panda$core$Object*) param1));
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp1145)));
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1146 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1146));
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp1145);
panda$core$Panda$unref$panda$core$Object$Q($tmp1145);
// unreffing REF($5:panda.collections.IdentityMap.V?)
// line 420
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1147 = *(&local0);
panda$core$Bit $tmp1148 = panda$core$Bit$init$builtin_bit($tmp1147 != NULL);
bool $tmp1149 = $tmp1148.value;
if ($tmp1149) goto block1; else goto block2;
block1:;
// line 421
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1150 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1150));
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1151 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1151));
// unreffing found
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) NULL);
return $tmp1150;
block2:;
// line 423
panda$io$IndentedOutputStream** $tmp1152 = &param0->out;
panda$io$IndentedOutputStream* $tmp1153 = *$tmp1152;
*(&local1) = ((panda$io$IndentedOutputStream*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1153));
panda$io$IndentedOutputStream* $tmp1154 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1154));
*(&local1) = $tmp1153;
// line 424
panda$io$MemoryOutputStream* $tmp1155 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp1155);
*(&local2) = ((panda$io$MemoryOutputStream*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1155));
panda$io$MemoryOutputStream* $tmp1156 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1156));
*(&local2) = $tmp1155;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1155));
// unreffing REF($45:panda.io.MemoryOutputStream)
// line 425
panda$io$IndentedOutputStream* $tmp1157 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream* $tmp1158 = *(&local2);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp1157, ((panda$io$OutputStream*) $tmp1158));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1157));
panda$io$IndentedOutputStream** $tmp1159 = &param0->out;
panda$io$IndentedOutputStream* $tmp1160 = *$tmp1159;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1160));
panda$io$IndentedOutputStream** $tmp1161 = &param0->out;
*$tmp1161 = $tmp1157;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1157));
// unreffing REF($58:panda.io.IndentedOutputStream)
// line 426
panda$core$Bit $tmp1162 = org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit(param2);
bool $tmp1163 = $tmp1162.value;
if ($tmp1163) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp1164 = (panda$core$Int64) {426};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1165, $tmp1164);
abort(); // unreachable
block3:;
// line 427
org$pandalanguage$pandac$FixedArray** $tmp1166 = &param2->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1167 = *$tmp1166;
ITable* $tmp1168 = ((panda$collections$CollectionView*) $tmp1167)->$class->itable;
while ($tmp1168->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1168 = $tmp1168->next;
}
$fn1170 $tmp1169 = $tmp1168->methods[0];
panda$core$Int64 $tmp1171 = $tmp1169(((panda$collections$CollectionView*) $tmp1167));
panda$collections$Array** $tmp1172 = &param1->parameters;
panda$collections$Array* $tmp1173 = *$tmp1172;
ITable* $tmp1174 = ((panda$collections$CollectionView*) $tmp1173)->$class->itable;
while ($tmp1174->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1174 = $tmp1174->next;
}
$fn1176 $tmp1175 = $tmp1174->methods[0];
panda$core$Int64 $tmp1177 = $tmp1175(((panda$collections$CollectionView*) $tmp1173));
panda$core$Int64 $tmp1178 = (panda$core$Int64) {2};
int64_t $tmp1179 = $tmp1177.value;
int64_t $tmp1180 = $tmp1178.value;
int64_t $tmp1181 = $tmp1179 + $tmp1180;
panda$core$Int64 $tmp1182 = (panda$core$Int64) {$tmp1181};
panda$core$Bit $tmp1183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1171, $tmp1182);
bool $tmp1184 = $tmp1183.value;
if ($tmp1184) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp1185 = (panda$core$Int64) {427};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1186, $tmp1185);
abort(); // unreachable
block5:;
// line 428
panda$core$Bit $tmp1187 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(param1);
bool $tmp1188 = $tmp1187.value;
if ($tmp1188) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp1189 = (panda$core$Int64) {428};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1190, $tmp1189);
abort(); // unreachable
block7:;
// line 429
org$pandalanguage$pandac$Type* $tmp1191 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type(param2);
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1191));
org$pandalanguage$pandac$Type* $tmp1192 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1192));
*(&local3) = $tmp1191;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1191));
// unreffing REF($110:org.pandalanguage.pandac.Type)
// line 430
panda$core$String* $tmp1193 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp1194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1193, &$s1195);
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1194));
panda$core$String* $tmp1196 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1196));
*(&local4) = $tmp1194;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1194));
// unreffing REF($123:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1193));
// unreffing REF($122:panda.core.String)
// line 431
panda$core$MutableString* $tmp1197 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$Type* $tmp1198 = *(&local3);
panda$core$String* $tmp1199 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp1198);
panda$core$MutableString$init$panda$core$String($tmp1197, $tmp1199);
*(&local5) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1197));
panda$core$MutableString* $tmp1200 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1200));
*(&local5) = $tmp1197;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1199));
// unreffing REF($140:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1197));
// unreffing REF($138:panda.core.MutableString)
// line 432
panda$io$IndentedOutputStream** $tmp1201 = &param0->out;
panda$io$IndentedOutputStream* $tmp1202 = *$tmp1201;
panda$core$MutableString* $tmp1203 = *(&local5);
panda$core$String* $tmp1204 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1205, ((panda$core$Object*) $tmp1203));
panda$core$String* $tmp1206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1204, &$s1207);
panda$core$String* $tmp1208 = *(&local4);
panda$core$String* $tmp1209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1206, $tmp1208);
panda$core$String* $tmp1210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1209, &$s1211);
$fn1213 $tmp1212 = ($fn1213) ((panda$io$OutputStream*) $tmp1202)->$class->vtable[17];
$tmp1212(((panda$io$OutputStream*) $tmp1202), $tmp1210);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1210));
// unreffing REF($165:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1209));
// unreffing REF($164:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1206));
// unreffing REF($162:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1204));
// unreffing REF($161:panda.core.String)
// line 433
panda$core$MutableString* $tmp1214 = *(&local5);
panda$core$MutableString$append$panda$core$String($tmp1214, &$s1215);
// line 434
*(&local6) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1216));
panda$core$String* $tmp1217 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1217));
*(&local6) = &$s1218;
// line 435
panda$core$Int64 $tmp1219 = (panda$core$Int64) {0};
org$pandalanguage$pandac$FixedArray** $tmp1220 = &param2->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1221 = *$tmp1220;
ITable* $tmp1222 = ((panda$collections$CollectionView*) $tmp1221)->$class->itable;
while ($tmp1222->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1222 = $tmp1222->next;
}
$fn1224 $tmp1223 = $tmp1222->methods[0];
panda$core$Int64 $tmp1225 = $tmp1223(((panda$collections$CollectionView*) $tmp1221));
panda$core$Int64 $tmp1226 = (panda$core$Int64) {1};
int64_t $tmp1227 = $tmp1225.value;
int64_t $tmp1228 = $tmp1226.value;
int64_t $tmp1229 = $tmp1227 - $tmp1228;
panda$core$Int64 $tmp1230 = (panda$core$Int64) {$tmp1229};
panda$core$Bit $tmp1231 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1232 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1219, $tmp1230, $tmp1231);
panda$core$Int64 $tmp1233 = $tmp1232.min;
*(&local7) = $tmp1233;
panda$core$Int64 $tmp1234 = $tmp1232.max;
panda$core$Bit $tmp1235 = $tmp1232.inclusive;
bool $tmp1236 = $tmp1235.value;
panda$core$Int64 $tmp1237 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1238 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1237);
if ($tmp1236) goto block12; else goto block13;
block12:;
int64_t $tmp1239 = $tmp1233.value;
int64_t $tmp1240 = $tmp1234.value;
bool $tmp1241 = $tmp1239 <= $tmp1240;
panda$core$Bit $tmp1242 = (panda$core$Bit) {$tmp1241};
bool $tmp1243 = $tmp1242.value;
if ($tmp1243) goto block9; else goto block10;
block13:;
int64_t $tmp1244 = $tmp1233.value;
int64_t $tmp1245 = $tmp1234.value;
bool $tmp1246 = $tmp1244 < $tmp1245;
panda$core$Bit $tmp1247 = (panda$core$Bit) {$tmp1246};
bool $tmp1248 = $tmp1247.value;
if ($tmp1248) goto block9; else goto block10;
block9:;
// line 436
org$pandalanguage$pandac$FixedArray** $tmp1249 = &param2->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1250 = *$tmp1249;
panda$core$Int64 $tmp1251 = *(&local7);
panda$core$Object* $tmp1252 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1250, $tmp1251);
panda$core$String* $tmp1253 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp1252));
*(&local8) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1253));
panda$core$String* $tmp1254 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1254));
*(&local8) = $tmp1253;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1253));
// unreffing REF($233:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1252);
// unreffing REF($231:org.pandalanguage.pandac.FixedArray.T)
// line 437
panda$core$MutableString* $tmp1255 = *(&local5);
panda$core$MutableString$append$panda$core$String($tmp1255, &$s1256);
// line 438
panda$core$MutableString* $tmp1257 = *(&local5);
panda$core$String* $tmp1258 = *(&local8);
panda$core$MutableString$append$panda$core$String($tmp1257, $tmp1258);
// line 439
panda$io$IndentedOutputStream** $tmp1259 = &param0->out;
panda$io$IndentedOutputStream* $tmp1260 = *$tmp1259;
panda$core$String* $tmp1261 = *(&local6);
panda$core$String* $tmp1262 = panda$core$String$convert$R$panda$core$String($tmp1261);
panda$core$String* $tmp1263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1262, &$s1264);
panda$core$String* $tmp1265 = *(&local8);
panda$core$String* $tmp1266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1263, $tmp1265);
panda$core$String* $tmp1267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1266, &$s1268);
panda$core$Int64 $tmp1269 = *(&local7);
panda$core$Int64$wrapper* $tmp1270;
$tmp1270 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1270->value = $tmp1269;
panda$core$String* $tmp1271 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1267, ((panda$core$Object*) $tmp1270));
panda$core$String* $tmp1272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1271, &$s1273);
$fn1275 $tmp1274 = ($fn1275) ((panda$io$OutputStream*) $tmp1260)->$class->vtable[17];
$tmp1274(((panda$io$OutputStream*) $tmp1260), $tmp1272);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1272));
// unreffing REF($267:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1271));
// unreffing REF($266:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1270));
// unreffing REF($265:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1267));
// unreffing REF($263:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1266));
// unreffing REF($262:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1263));
// unreffing REF($260:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1262));
// unreffing REF($259:panda.core.String)
// line 440
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1276));
panda$core$String* $tmp1277 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1277));
*(&local6) = &$s1278;
panda$core$String* $tmp1279 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1279));
// unreffing pType
*(&local8) = ((panda$core$String*) NULL);
goto block11;
block11:;
panda$core$Int64 $tmp1280 = *(&local7);
int64_t $tmp1281 = $tmp1234.value;
int64_t $tmp1282 = $tmp1280.value;
int64_t $tmp1283 = $tmp1281 - $tmp1282;
panda$core$Int64 $tmp1284 = (panda$core$Int64) {$tmp1283};
panda$core$UInt64 $tmp1285 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1284);
if ($tmp1236) goto block15; else goto block16;
block15:;
uint64_t $tmp1286 = $tmp1285.value;
uint64_t $tmp1287 = $tmp1238.value;
bool $tmp1288 = $tmp1286 >= $tmp1287;
panda$core$Bit $tmp1289 = (panda$core$Bit) {$tmp1288};
bool $tmp1290 = $tmp1289.value;
if ($tmp1290) goto block14; else goto block10;
block16:;
uint64_t $tmp1291 = $tmp1285.value;
uint64_t $tmp1292 = $tmp1238.value;
bool $tmp1293 = $tmp1291 > $tmp1292;
panda$core$Bit $tmp1294 = (panda$core$Bit) {$tmp1293};
bool $tmp1295 = $tmp1294.value;
if ($tmp1295) goto block14; else goto block10;
block14:;
int64_t $tmp1296 = $tmp1280.value;
int64_t $tmp1297 = $tmp1237.value;
int64_t $tmp1298 = $tmp1296 + $tmp1297;
panda$core$Int64 $tmp1299 = (panda$core$Int64) {$tmp1298};
*(&local7) = $tmp1299;
goto block9;
block10:;
// line 442
panda$io$IndentedOutputStream** $tmp1300 = &param0->out;
panda$io$IndentedOutputStream* $tmp1301 = *$tmp1300;
$fn1303 $tmp1302 = ($fn1303) ((panda$io$OutputStream*) $tmp1301)->$class->vtable[19];
$tmp1302(((panda$io$OutputStream*) $tmp1301), &$s1304);
// line 443
panda$io$IndentedOutputStream** $tmp1305 = &param0->out;
panda$io$IndentedOutputStream* $tmp1306 = *$tmp1305;
panda$core$Int64* $tmp1307 = &$tmp1306->level;
panda$core$Int64 $tmp1308 = *$tmp1307;
panda$core$Int64 $tmp1309 = (panda$core$Int64) {1};
int64_t $tmp1310 = $tmp1308.value;
int64_t $tmp1311 = $tmp1309.value;
int64_t $tmp1312 = $tmp1310 + $tmp1311;
panda$core$Int64 $tmp1313 = (panda$core$Int64) {$tmp1312};
panda$core$Int64* $tmp1314 = &$tmp1306->level;
*$tmp1314 = $tmp1313;
// line 444
panda$core$MutableString* $tmp1315 = *(&local5);
panda$core$MutableString$append$panda$core$String($tmp1315, &$s1316);
// line 445
panda$io$MemoryOutputStream* $tmp1317 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp1317);
*(&local9) = ((panda$io$MemoryOutputStream*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1317));
panda$io$MemoryOutputStream* $tmp1318 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1318));
*(&local9) = $tmp1317;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1317));
// unreffing REF($351:panda.io.MemoryOutputStream)
// line 446
panda$collections$Array* $tmp1319 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1319);
*(&local10) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1319));
panda$collections$Array* $tmp1320 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1320));
*(&local10) = $tmp1319;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1319));
// unreffing REF($364:panda.collections.Array<panda.core.String>)
// line 447
panda$core$Int64 $tmp1321 = (panda$core$Int64) {0};
org$pandalanguage$pandac$FixedArray** $tmp1322 = &param2->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1323 = *$tmp1322;
ITable* $tmp1324 = ((panda$collections$CollectionView*) $tmp1323)->$class->itable;
while ($tmp1324->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1324 = $tmp1324->next;
}
$fn1326 $tmp1325 = $tmp1324->methods[0];
panda$core$Int64 $tmp1327 = $tmp1325(((panda$collections$CollectionView*) $tmp1323));
panda$core$Int64 $tmp1328 = (panda$core$Int64) {1};
int64_t $tmp1329 = $tmp1327.value;
int64_t $tmp1330 = $tmp1328.value;
int64_t $tmp1331 = $tmp1329 - $tmp1330;
panda$core$Int64 $tmp1332 = (panda$core$Int64) {$tmp1331};
panda$core$Bit $tmp1333 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1334 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1321, $tmp1332, $tmp1333);
panda$core$Int64 $tmp1335 = $tmp1334.min;
*(&local11) = $tmp1335;
panda$core$Int64 $tmp1336 = $tmp1334.max;
panda$core$Bit $tmp1337 = $tmp1334.inclusive;
bool $tmp1338 = $tmp1337.value;
panda$core$Int64 $tmp1339 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1340 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1339);
if ($tmp1338) goto block20; else goto block21;
block20:;
int64_t $tmp1341 = $tmp1335.value;
int64_t $tmp1342 = $tmp1336.value;
bool $tmp1343 = $tmp1341 <= $tmp1342;
panda$core$Bit $tmp1344 = (panda$core$Bit) {$tmp1343};
bool $tmp1345 = $tmp1344.value;
if ($tmp1345) goto block17; else goto block18;
block21:;
int64_t $tmp1346 = $tmp1335.value;
int64_t $tmp1347 = $tmp1336.value;
bool $tmp1348 = $tmp1346 < $tmp1347;
panda$core$Bit $tmp1349 = (panda$core$Bit) {$tmp1348};
bool $tmp1350 = $tmp1349.value;
if ($tmp1350) goto block17; else goto block18;
block17:;
// line 448
panda$core$Int64 $tmp1351 = *(&local11);
panda$core$Int64$wrapper* $tmp1352;
$tmp1352 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1352->value = $tmp1351;
panda$core$String* $tmp1353 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1354, ((panda$core$Object*) $tmp1352));
panda$core$String* $tmp1355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1353, &$s1356);
*(&local12) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1355));
panda$core$String* $tmp1357 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1357));
*(&local12) = $tmp1355;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1355));
// unreffing REF($415:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1353));
// unreffing REF($414:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1352));
// unreffing REF($413:panda.core.Object)
// line 449
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
// line 450
panda$core$Int64 $tmp1358 = *(&local11);
panda$core$Int64 $tmp1359 = (panda$core$Int64) {0};
panda$core$Bit $tmp1360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1358, $tmp1359);
bool $tmp1361 = $tmp1360.value;
if ($tmp1361) goto block22; else goto block24;
block22:;
// line 451
panda$core$Weak** $tmp1362 = &param1->owner;
panda$core$Weak* $tmp1363 = *$tmp1362;
panda$core$Object* $tmp1364 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1363);
org$pandalanguage$pandac$Type** $tmp1365 = &((org$pandalanguage$pandac$ClassDecl*) $tmp1364)->type;
org$pandalanguage$pandac$Type* $tmp1366 = *$tmp1365;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1366));
org$pandalanguage$pandac$Type* $tmp1367 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1367));
*(&local13) = $tmp1366;
panda$core$Panda$unref$panda$core$Object$Q($tmp1364);
// unreffing REF($444:panda.core.Weak.T)
goto block23;
block24:;
// line 1
// line 454
panda$collections$Array** $tmp1368 = &param1->parameters;
panda$collections$Array* $tmp1369 = *$tmp1368;
panda$core$Int64 $tmp1370 = *(&local11);
panda$core$Int64 $tmp1371 = (panda$core$Int64) {1};
int64_t $tmp1372 = $tmp1370.value;
int64_t $tmp1373 = $tmp1371.value;
int64_t $tmp1374 = $tmp1372 - $tmp1373;
panda$core$Int64 $tmp1375 = (panda$core$Int64) {$tmp1374};
panda$core$Object* $tmp1376 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1369, $tmp1375);
org$pandalanguage$pandac$Type** $tmp1377 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1376)->type;
org$pandalanguage$pandac$Type* $tmp1378 = *$tmp1377;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1378));
org$pandalanguage$pandac$Type* $tmp1379 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1379));
*(&local13) = $tmp1378;
panda$core$Panda$unref$panda$core$Object$Q($tmp1376);
// unreffing REF($469:panda.collections.Array.T)
goto block23;
block23:;
// line 456
org$pandalanguage$pandac$Type* $tmp1380 = *(&local13);
org$pandalanguage$pandac$FixedArray** $tmp1381 = &param2->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1382 = *$tmp1381;
panda$core$Int64 $tmp1383 = *(&local11);
panda$core$Object* $tmp1384 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1382, $tmp1383);
ITable* $tmp1385 = ((panda$core$Equatable*) $tmp1380)->$class->itable;
while ($tmp1385->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1385 = $tmp1385->next;
}
$fn1387 $tmp1386 = $tmp1385->methods[1];
panda$core$Bit $tmp1388 = $tmp1386(((panda$core$Equatable*) $tmp1380), ((panda$core$Equatable*) ((org$pandalanguage$pandac$Type*) $tmp1384)));
bool $tmp1389 = $tmp1388.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp1384);
// unreffing REF($492:org.pandalanguage.pandac.FixedArray.T)
if ($tmp1389) goto block25; else goto block27;
block25:;
// line 457
panda$core$String* $tmp1390 = *(&local12);
org$pandalanguage$pandac$FixedArray** $tmp1391 = &param2->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1392 = *$tmp1391;
panda$core$Int64 $tmp1393 = *(&local11);
panda$core$Object* $tmp1394 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1392, $tmp1393);
org$pandalanguage$pandac$Type* $tmp1395 = *(&local13);
panda$core$String* $tmp1396 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp1390, ((org$pandalanguage$pandac$Type*) $tmp1394), $tmp1395);
*(&local14) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1396));
panda$core$String* $tmp1397 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1397));
*(&local14) = $tmp1396;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1396));
// unreffing REF($512:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1394);
// unreffing REF($509:org.pandalanguage.pandac.FixedArray.T)
// line 458
panda$collections$Array* $tmp1398 = *(&local10);
panda$core$String* $tmp1399 = *(&local14);
panda$collections$Array$add$panda$collections$Array$T($tmp1398, ((panda$core$Object*) $tmp1399));
// line 459
panda$core$Weak** $tmp1400 = &param0->compiler;
panda$core$Weak* $tmp1401 = *$tmp1400;
panda$core$Object* $tmp1402 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1401);
org$pandalanguage$pandac$FixedArray** $tmp1403 = &param2->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1404 = *$tmp1403;
panda$core$Int64 $tmp1405 = *(&local11);
panda$core$Object* $tmp1406 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1404, $tmp1405);
panda$core$Bit $tmp1407 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1402), ((org$pandalanguage$pandac$Type*) $tmp1406));
bool $tmp1408 = $tmp1407.value;
if ($tmp1408) goto block30; else goto block31;
block30:;
panda$core$Weak** $tmp1409 = &param0->compiler;
panda$core$Weak* $tmp1410 = *$tmp1409;
panda$core$Object* $tmp1411 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1410);
org$pandalanguage$pandac$Type* $tmp1412 = *(&local13);
panda$core$Bit $tmp1413 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1411), $tmp1412);
panda$core$Bit $tmp1414 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1413);
panda$core$Panda$unref$panda$core$Object$Q($tmp1411);
// unreffing REF($552:panda.core.Weak.T)
*(&local15) = $tmp1414;
goto block32;
block31:;
*(&local15) = $tmp1407;
goto block32;
block32:;
panda$core$Bit $tmp1415 = *(&local15);
bool $tmp1416 = $tmp1415.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp1406);
// unreffing REF($544:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp1402);
// unreffing REF($536:panda.core.Weak.T)
if ($tmp1416) goto block28; else goto block29;
block28:;
// line 460
panda$io$MemoryOutputStream* $tmp1417 = *(&local9);
panda$core$String* $tmp1418 = *(&local14);
panda$core$String* $tmp1419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1420, $tmp1418);
panda$core$String* $tmp1421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1419, &$s1422);
panda$core$String* $tmp1423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1424, $tmp1421);
$fn1426 $tmp1425 = ($fn1426) ((panda$io$OutputStream*) $tmp1417)->$class->vtable[19];
$tmp1425(((panda$io$OutputStream*) $tmp1417), $tmp1423);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1423));
// unreffing REF($580:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1421));
// unreffing REF($579:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1419));
// unreffing REF($578:panda.core.String)
goto block29;
block29:;
panda$core$String* $tmp1427 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1427));
// unreffing cast
*(&local14) = ((panda$core$String*) NULL);
goto block26;
block27:;
// line 1
// line 465
panda$collections$Array* $tmp1428 = *(&local10);
panda$core$String* $tmp1429 = *(&local12);
panda$collections$Array$add$panda$collections$Array$T($tmp1428, ((panda$core$Object*) $tmp1429));
goto block26;
block26:;
org$pandalanguage$pandac$Type* $tmp1430 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1430));
// unreffing rawType
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp1431 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1431));
// unreffing p
*(&local12) = ((panda$core$String*) NULL);
goto block19;
block19:;
panda$core$Int64 $tmp1432 = *(&local11);
int64_t $tmp1433 = $tmp1336.value;
int64_t $tmp1434 = $tmp1432.value;
int64_t $tmp1435 = $tmp1433 - $tmp1434;
panda$core$Int64 $tmp1436 = (panda$core$Int64) {$tmp1435};
panda$core$UInt64 $tmp1437 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1436);
if ($tmp1338) goto block34; else goto block35;
block34:;
uint64_t $tmp1438 = $tmp1437.value;
uint64_t $tmp1439 = $tmp1340.value;
bool $tmp1440 = $tmp1438 >= $tmp1439;
panda$core$Bit $tmp1441 = (panda$core$Bit) {$tmp1440};
bool $tmp1442 = $tmp1441.value;
if ($tmp1442) goto block33; else goto block18;
block35:;
uint64_t $tmp1443 = $tmp1437.value;
uint64_t $tmp1444 = $tmp1340.value;
bool $tmp1445 = $tmp1443 > $tmp1444;
panda$core$Bit $tmp1446 = (panda$core$Bit) {$tmp1445};
bool $tmp1447 = $tmp1446.value;
if ($tmp1447) goto block33; else goto block18;
block33:;
int64_t $tmp1448 = $tmp1432.value;
int64_t $tmp1449 = $tmp1339.value;
int64_t $tmp1450 = $tmp1448 + $tmp1449;
panda$core$Int64 $tmp1451 = (panda$core$Int64) {$tmp1450};
*(&local11) = $tmp1451;
goto block17;
block18:;
// line 468
org$pandalanguage$pandac$Type** $tmp1452 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp1453 = *$tmp1452;
org$pandalanguage$pandac$Type* $tmp1454 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp1455 = ((panda$core$Equatable*) $tmp1453)->$class->itable;
while ($tmp1455->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1455 = $tmp1455->next;
}
$fn1457 $tmp1456 = $tmp1455->methods[1];
panda$core$Bit $tmp1458 = $tmp1456(((panda$core$Equatable*) $tmp1453), ((panda$core$Equatable*) $tmp1454));
bool $tmp1459 = $tmp1458.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1454));
// unreffing REF($648:org.pandalanguage.pandac.Type)
if ($tmp1459) goto block36; else goto block37;
block36:;
// line 469
panda$io$IndentedOutputStream** $tmp1460 = &param0->out;
panda$io$IndentedOutputStream* $tmp1461 = *$tmp1460;
org$pandalanguage$pandac$Type** $tmp1462 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp1463 = *$tmp1462;
panda$core$String* $tmp1464 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp1463);
panda$core$String* $tmp1465 = panda$core$String$convert$R$panda$core$String($tmp1464);
panda$core$String* $tmp1466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1465, &$s1467);
$fn1469 $tmp1468 = ($fn1469) ((panda$io$OutputStream*) $tmp1461)->$class->vtable[17];
$tmp1468(((panda$io$OutputStream*) $tmp1461), $tmp1466);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1466));
// unreffing REF($665:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1465));
// unreffing REF($664:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1464));
// unreffing REF($663:panda.core.String)
goto block37;
block37:;
// line 471
panda$io$IndentedOutputStream** $tmp1470 = &param0->out;
panda$io$IndentedOutputStream* $tmp1471 = *$tmp1470;
panda$core$String* $tmp1472 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp1473 = panda$core$String$convert$R$panda$core$String($tmp1472);
panda$core$String* $tmp1474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1473, &$s1475);
$fn1477 $tmp1476 = ($fn1477) ((panda$io$OutputStream*) $tmp1471)->$class->vtable[17];
$tmp1476(((panda$io$OutputStream*) $tmp1471), $tmp1474);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1474));
// unreffing REF($684:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1473));
// unreffing REF($683:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1472));
// unreffing REF($682:panda.core.String)
// line 472
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1478));
panda$core$String* $tmp1479 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1479));
*(&local6) = &$s1480;
// line 473
panda$core$Int64 $tmp1481 = (panda$core$Int64) {0};
org$pandalanguage$pandac$FixedArray** $tmp1482 = &param2->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1483 = *$tmp1482;
ITable* $tmp1484 = ((panda$collections$CollectionView*) $tmp1483)->$class->itable;
while ($tmp1484->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1484 = $tmp1484->next;
}
$fn1486 $tmp1485 = $tmp1484->methods[0];
panda$core$Int64 $tmp1487 = $tmp1485(((panda$collections$CollectionView*) $tmp1483));
panda$core$Int64 $tmp1488 = (panda$core$Int64) {1};
int64_t $tmp1489 = $tmp1487.value;
int64_t $tmp1490 = $tmp1488.value;
int64_t $tmp1491 = $tmp1489 - $tmp1490;
panda$core$Int64 $tmp1492 = (panda$core$Int64) {$tmp1491};
panda$core$Bit $tmp1493 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1494 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1481, $tmp1492, $tmp1493);
panda$core$Int64 $tmp1495 = $tmp1494.min;
*(&local16) = $tmp1495;
panda$core$Int64 $tmp1496 = $tmp1494.max;
panda$core$Bit $tmp1497 = $tmp1494.inclusive;
bool $tmp1498 = $tmp1497.value;
panda$core$Int64 $tmp1499 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1500 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1499);
if ($tmp1498) goto block41; else goto block42;
block41:;
int64_t $tmp1501 = $tmp1495.value;
int64_t $tmp1502 = $tmp1496.value;
bool $tmp1503 = $tmp1501 <= $tmp1502;
panda$core$Bit $tmp1504 = (panda$core$Bit) {$tmp1503};
bool $tmp1505 = $tmp1504.value;
if ($tmp1505) goto block38; else goto block39;
block42:;
int64_t $tmp1506 = $tmp1495.value;
int64_t $tmp1507 = $tmp1496.value;
bool $tmp1508 = $tmp1506 < $tmp1507;
panda$core$Bit $tmp1509 = (panda$core$Bit) {$tmp1508};
bool $tmp1510 = $tmp1509.value;
if ($tmp1510) goto block38; else goto block39;
block38:;
// line 474
panda$io$IndentedOutputStream** $tmp1511 = &param0->out;
panda$io$IndentedOutputStream* $tmp1512 = *$tmp1511;
panda$core$String* $tmp1513 = *(&local6);
panda$core$String* $tmp1514 = panda$core$String$convert$R$panda$core$String($tmp1513);
panda$core$String* $tmp1515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1514, &$s1516);
panda$collections$Array* $tmp1517 = *(&local10);
panda$core$Int64 $tmp1518 = *(&local16);
panda$core$Object* $tmp1519 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1517, $tmp1518);
panda$core$String* $tmp1520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1515, ((panda$core$String*) $tmp1519));
panda$core$String* $tmp1521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1520, &$s1522);
$fn1524 $tmp1523 = ($fn1524) ((panda$io$OutputStream*) $tmp1512)->$class->vtable[17];
$tmp1523(((panda$io$OutputStream*) $tmp1512), $tmp1521);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1521));
// unreffing REF($750:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1520));
// unreffing REF($749:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1519);
// unreffing REF($747:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1515));
// unreffing REF($743:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1514));
// unreffing REF($742:panda.core.String)
// line 475
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1525));
panda$core$String* $tmp1526 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1526));
*(&local6) = &$s1527;
goto block40;
block40:;
panda$core$Int64 $tmp1528 = *(&local16);
int64_t $tmp1529 = $tmp1496.value;
int64_t $tmp1530 = $tmp1528.value;
int64_t $tmp1531 = $tmp1529 - $tmp1530;
panda$core$Int64 $tmp1532 = (panda$core$Int64) {$tmp1531};
panda$core$UInt64 $tmp1533 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1532);
if ($tmp1498) goto block44; else goto block45;
block44:;
uint64_t $tmp1534 = $tmp1533.value;
uint64_t $tmp1535 = $tmp1500.value;
bool $tmp1536 = $tmp1534 >= $tmp1535;
panda$core$Bit $tmp1537 = (panda$core$Bit) {$tmp1536};
bool $tmp1538 = $tmp1537.value;
if ($tmp1538) goto block43; else goto block39;
block45:;
uint64_t $tmp1539 = $tmp1533.value;
uint64_t $tmp1540 = $tmp1500.value;
bool $tmp1541 = $tmp1539 > $tmp1540;
panda$core$Bit $tmp1542 = (panda$core$Bit) {$tmp1541};
bool $tmp1543 = $tmp1542.value;
if ($tmp1543) goto block43; else goto block39;
block43:;
int64_t $tmp1544 = $tmp1528.value;
int64_t $tmp1545 = $tmp1499.value;
int64_t $tmp1546 = $tmp1544 + $tmp1545;
panda$core$Int64 $tmp1547 = (panda$core$Int64) {$tmp1546};
*(&local16) = $tmp1547;
goto block38;
block39:;
// line 477
panda$io$IndentedOutputStream** $tmp1548 = &param0->out;
panda$io$IndentedOutputStream* $tmp1549 = *$tmp1548;
$fn1551 $tmp1550 = ($fn1551) ((panda$io$OutputStream*) $tmp1549)->$class->vtable[19];
$tmp1550(((panda$io$OutputStream*) $tmp1549), &$s1552);
// line 478
panda$io$IndentedOutputStream** $tmp1553 = &param0->out;
panda$io$IndentedOutputStream* $tmp1554 = *$tmp1553;
panda$io$MemoryOutputStream* $tmp1555 = *(&local9);
$fn1557 $tmp1556 = ($fn1557) ((panda$io$OutputStream*) $tmp1554)->$class->vtable[20];
$tmp1556(((panda$io$OutputStream*) $tmp1554), ((panda$core$Object*) $tmp1555));
// line 479
org$pandalanguage$pandac$Type** $tmp1558 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp1559 = *$tmp1558;
org$pandalanguage$pandac$Type* $tmp1560 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp1561 = ((panda$core$Equatable*) $tmp1559)->$class->itable;
while ($tmp1561->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1561 = $tmp1561->next;
}
$fn1563 $tmp1562 = $tmp1561->methods[1];
panda$core$Bit $tmp1564 = $tmp1562(((panda$core$Equatable*) $tmp1559), ((panda$core$Equatable*) $tmp1560));
bool $tmp1565 = $tmp1564.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1560));
// unreffing REF($820:org.pandalanguage.pandac.Type)
if ($tmp1565) goto block46; else goto block47;
block46:;
// line 480
panda$io$IndentedOutputStream** $tmp1566 = &param0->out;
panda$io$IndentedOutputStream* $tmp1567 = *$tmp1566;
org$pandalanguage$pandac$Type** $tmp1568 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp1569 = *$tmp1568;
org$pandalanguage$pandac$Type* $tmp1570 = *(&local3);
panda$core$String* $tmp1571 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, &$s1572, $tmp1569, $tmp1570);
panda$core$String* $tmp1573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1574, $tmp1571);
panda$core$String* $tmp1575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1573, &$s1576);
$fn1578 $tmp1577 = ($fn1578) ((panda$io$OutputStream*) $tmp1567)->$class->vtable[19];
$tmp1577(((panda$io$OutputStream*) $tmp1567), $tmp1575);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1575));
// unreffing REF($838:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1573));
// unreffing REF($837:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1571));
// unreffing REF($836:panda.core.String)
goto block47;
block47:;
// line 483
panda$io$IndentedOutputStream** $tmp1579 = &param0->out;
panda$io$IndentedOutputStream* $tmp1580 = *$tmp1579;
panda$core$Int64* $tmp1581 = &$tmp1580->level;
panda$core$Int64 $tmp1582 = *$tmp1581;
panda$core$Int64 $tmp1583 = (panda$core$Int64) {1};
int64_t $tmp1584 = $tmp1582.value;
int64_t $tmp1585 = $tmp1583.value;
int64_t $tmp1586 = $tmp1584 - $tmp1585;
panda$core$Int64 $tmp1587 = (panda$core$Int64) {$tmp1586};
panda$core$Int64* $tmp1588 = &$tmp1580->level;
*$tmp1588 = $tmp1587;
// line 484
panda$io$IndentedOutputStream** $tmp1589 = &param0->out;
panda$io$IndentedOutputStream* $tmp1590 = *$tmp1589;
$fn1592 $tmp1591 = ($fn1592) ((panda$io$OutputStream*) $tmp1590)->$class->vtable[19];
$tmp1591(((panda$io$OutputStream*) $tmp1590), &$s1593);
// line 485
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1594 = (org$pandalanguage$pandac$CCodeGenerator$MethodShim*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$MethodShim$class);
panda$core$String* $tmp1595 = *(&local4);
panda$core$MutableString* $tmp1596 = *(&local5);
panda$core$String* $tmp1597 = panda$core$MutableString$finish$R$panda$core$String($tmp1596);
org$pandalanguage$pandac$CCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp1594, $tmp1595, $tmp1597);
*(&local17) = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1594));
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1598 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1598));
*(&local17) = $tmp1594;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1597));
// unreffing REF($873:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1594));
// unreffing REF($870:org.pandalanguage.pandac.CCodeGenerator.MethodShim)
// line 486
panda$collections$IdentityMap** $tmp1599 = &param0->methodShims;
panda$collections$IdentityMap* $tmp1600 = *$tmp1599;
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1601 = *(&local17);
panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V($tmp1600, ((panda$core$Object*) param1), ((panda$core$Object*) $tmp1601));
// line 487
panda$io$IndentedOutputStream** $tmp1602 = &param0->shims;
panda$io$IndentedOutputStream* $tmp1603 = *$tmp1602;
panda$io$MemoryOutputStream* $tmp1604 = *(&local2);
panda$core$String* $tmp1605 = panda$io$MemoryOutputStream$finish$R$panda$core$String($tmp1604);
$fn1607 $tmp1606 = ($fn1607) ((panda$io$OutputStream*) $tmp1603)->$class->vtable[17];
$tmp1606(((panda$io$OutputStream*) $tmp1603), $tmp1605);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1605));
// unreffing REF($901:panda.core.String)
// line 488
panda$io$IndentedOutputStream* $tmp1608 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1608));
panda$io$IndentedOutputStream** $tmp1609 = &param0->out;
panda$io$IndentedOutputStream* $tmp1610 = *$tmp1609;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1610));
panda$io$IndentedOutputStream** $tmp1611 = &param0->out;
*$tmp1611 = $tmp1608;
// line 489
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1612 = *(&local17);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1612));
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1613 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1613));
// unreffing result
*(&local17) = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) NULL);
panda$collections$Array* $tmp1614 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1614));
// unreffing casts
*(&local10) = ((panda$collections$Array*) NULL);
panda$io$MemoryOutputStream* $tmp1615 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1615));
// unreffing unrefs
*(&local9) = ((panda$io$MemoryOutputStream*) NULL);
panda$core$String* $tmp1616 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1616));
// unreffing separator
*(&local6) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp1617 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1617));
// unreffing resultType
*(&local5) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp1618 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1618));
// unreffing resultName
*(&local4) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$Type* $tmp1619 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1619));
// unreffing effectiveReturnType
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
panda$io$MemoryOutputStream* $tmp1620 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1620));
// unreffing outBuffer
*(&local2) = ((panda$io$MemoryOutputStream*) NULL);
panda$io$IndentedOutputStream* $tmp1621 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1621));
// unreffing old
*(&local1) = ((panda$io$IndentedOutputStream*) NULL);
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1622 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1622));
// unreffing found
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) NULL);
return $tmp1612;

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
// line 493
panda$core$Weak** $tmp1623 = &param0->compiler;
panda$core$Weak* $tmp1624 = *$tmp1623;
panda$core$Object* $tmp1625 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1624);
org$pandalanguage$pandac$Type** $tmp1626 = &param1->type;
org$pandalanguage$pandac$Type* $tmp1627 = *$tmp1626;
panda$collections$HashSet* $tmp1628 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$HashSet$LTorg$pandalanguage$pandac$Type$GT(((org$pandalanguage$pandac$Compiler*) $tmp1625), $tmp1627);
*(&local0) = ((panda$collections$HashSet*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1628));
panda$collections$HashSet* $tmp1629 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1629));
*(&local0) = $tmp1628;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1628));
// unreffing REF($9:panda.collections.HashSet<org.pandalanguage.pandac.Type>)
panda$core$Panda$unref$panda$core$Object$Q($tmp1625);
// unreffing REF($4:panda.core.Weak.T)
// line 494
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1630));
panda$core$String* $tmp1631 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1631));
*(&local1) = &$s1632;
// line 495
panda$collections$HashSet* $tmp1633 = *(&local0);
ITable* $tmp1634 = ((panda$collections$Iterable*) $tmp1633)->$class->itable;
while ($tmp1634->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1634 = $tmp1634->next;
}
$fn1636 $tmp1635 = $tmp1634->methods[0];
panda$collections$Iterator* $tmp1637 = $tmp1635(((panda$collections$Iterable*) $tmp1633));
goto block1;
block1:;
ITable* $tmp1638 = $tmp1637->$class->itable;
while ($tmp1638->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1638 = $tmp1638->next;
}
$fn1640 $tmp1639 = $tmp1638->methods[0];
panda$core$Bit $tmp1641 = $tmp1639($tmp1637);
bool $tmp1642 = $tmp1641.value;
if ($tmp1642) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp1643 = $tmp1637->$class->itable;
while ($tmp1643->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1643 = $tmp1643->next;
}
$fn1645 $tmp1644 = $tmp1643->methods[1];
panda$core$Object* $tmp1646 = $tmp1644($tmp1637);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1646)));
org$pandalanguage$pandac$Type* $tmp1647 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1647));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp1646);
// line 496
panda$core$Weak** $tmp1648 = &param0->compiler;
panda$core$Weak* $tmp1649 = *$tmp1648;
panda$core$Object* $tmp1650 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1649);
org$pandalanguage$pandac$Type* $tmp1651 = *(&local2);
org$pandalanguage$pandac$ClassDecl* $tmp1652 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1650), $tmp1651);
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1652));
org$pandalanguage$pandac$ClassDecl* $tmp1653 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1653));
*(&local3) = $tmp1652;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1652));
// unreffing REF($63:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp1650);
// unreffing REF($59:panda.core.Weak.T)
// line 497
org$pandalanguage$pandac$ClassDecl* $tmp1654 = *(&local3);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1655 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, $tmp1654);
*(&local4) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1655));
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1656 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1656));
*(&local4) = $tmp1655;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1655));
// unreffing REF($80:org.pandalanguage.pandac.CCodeGenerator.ClassConstant)
// line 498
panda$core$Weak** $tmp1657 = &param0->compiler;
panda$core$Weak* $tmp1658 = *$tmp1657;
panda$core$Object* $tmp1659 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1658);
org$pandalanguage$pandac$Type* $tmp1660 = *(&local2);
panda$collections$ListView* $tmp1661 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp1659), param1, $tmp1660);
*(&local5) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1661));
panda$collections$ListView* $tmp1662 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1662));
*(&local5) = $tmp1661;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1661));
// unreffing REF($99:panda.collections.ListView<org.pandalanguage.pandac.MethodDecl>)
panda$core$Panda$unref$panda$core$Object$Q($tmp1659);
// unreffing REF($95:panda.core.Weak.T)
// line 499
panda$core$String** $tmp1663 = &param1->name;
panda$core$String* $tmp1664 = *$tmp1663;
panda$core$String* $tmp1665 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp1664);
panda$core$String* $tmp1666 = panda$core$String$convert$R$panda$core$String($tmp1665);
panda$core$String* $tmp1667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1666, &$s1668);
org$pandalanguage$pandac$ClassDecl* $tmp1669 = *(&local3);
panda$core$String** $tmp1670 = &$tmp1669->name;
panda$core$String* $tmp1671 = *$tmp1670;
panda$core$String* $tmp1672 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp1671);
panda$core$String* $tmp1673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1667, $tmp1672);
panda$core$String* $tmp1674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1673, &$s1675);
*(&local6) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1674));
panda$core$String* $tmp1676 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1676));
*(&local6) = $tmp1674;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1674));
// unreffing REF($125:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1673));
// unreffing REF($124:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1672));
// unreffing REF($123:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1667));
// unreffing REF($118:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1666));
// unreffing REF($117:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1665));
// unreffing REF($116:panda.core.String)
// line 500
panda$core$MutableString* $tmp1677 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$Type* $tmp1678 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp1679 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp1678);
panda$core$String* $tmp1680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1681, $tmp1679);
panda$core$String* $tmp1682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1680, &$s1683);
panda$collections$ListView* $tmp1684 = *(&local5);
ITable* $tmp1685 = ((panda$collections$CollectionView*) $tmp1684)->$class->itable;
while ($tmp1685->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1685 = $tmp1685->next;
}
$fn1687 $tmp1686 = $tmp1685->methods[0];
panda$core$Int64 $tmp1688 = $tmp1686(((panda$collections$CollectionView*) $tmp1684));
panda$core$Int64$wrapper* $tmp1689;
$tmp1689 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1689->value = $tmp1688;
panda$core$String* $tmp1690 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1691, ((panda$core$Object*) $tmp1689));
panda$core$String* $tmp1692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1690, &$s1693);
panda$core$String* $tmp1694 = *(&local6);
panda$core$String* $tmp1695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1692, $tmp1694);
panda$core$String* $tmp1696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1695, &$s1697);
panda$core$String* $tmp1698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1682, $tmp1696);
org$pandalanguage$pandac$Type* $tmp1699 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp1700 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp1699);
panda$core$String* $tmp1701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1702, $tmp1700);
panda$core$String* $tmp1703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1701, &$s1704);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1705 = *(&local4);
panda$core$String** $tmp1706 = &$tmp1705->name;
panda$core$String* $tmp1707 = *$tmp1706;
panda$core$String* $tmp1708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1703, $tmp1707);
panda$core$String* $tmp1709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1708, &$s1710);
panda$core$String* $tmp1711 = *(&local1);
panda$core$String* $tmp1712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1709, $tmp1711);
panda$core$String* $tmp1713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1712, &$s1714);
panda$core$String* $tmp1715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1698, $tmp1713);
panda$core$MutableString$init$panda$core$String($tmp1677, $tmp1715);
*(&local7) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1677));
panda$core$MutableString* $tmp1716 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1716));
*(&local7) = $tmp1677;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1715));
// unreffing REF($180:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1713));
// unreffing REF($179:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1712));
// unreffing REF($178:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1709));
// unreffing REF($176:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1708));
// unreffing REF($175:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1703));
// unreffing REF($171:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1701));
// unreffing REF($170:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1700));
// unreffing REF($169:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1699));
// unreffing REF($168:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1698));
// unreffing REF($167:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1696));
// unreffing REF($166:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1695));
// unreffing REF($165:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1692));
// unreffing REF($163:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1690));
// unreffing REF($162:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1689));
// unreffing REF($161:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1682));
// unreffing REF($156:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1680));
// unreffing REF($155:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1679));
// unreffing REF($154:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1678));
// unreffing REF($153:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1677));
// unreffing REF($152:panda.core.MutableString)
// line 503
*(&local8) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1717));
panda$core$String* $tmp1718 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1718));
*(&local8) = &$s1719;
// line 504
panda$collections$ListView* $tmp1720 = *(&local5);
ITable* $tmp1721 = ((panda$collections$Iterable*) $tmp1720)->$class->itable;
while ($tmp1721->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1721 = $tmp1721->next;
}
$fn1723 $tmp1722 = $tmp1721->methods[0];
panda$collections$Iterator* $tmp1724 = $tmp1722(((panda$collections$Iterable*) $tmp1720));
goto block4;
block4:;
ITable* $tmp1725 = $tmp1724->$class->itable;
while ($tmp1725->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1725 = $tmp1725->next;
}
$fn1727 $tmp1726 = $tmp1725->methods[0];
panda$core$Bit $tmp1728 = $tmp1726($tmp1724);
bool $tmp1729 = $tmp1728.value;
if ($tmp1729) goto block6; else goto block5;
block5:;
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp1730 = $tmp1724->$class->itable;
while ($tmp1730->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1730 = $tmp1730->next;
}
$fn1732 $tmp1731 = $tmp1730->methods[1];
panda$core$Object* $tmp1733 = $tmp1731($tmp1724);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1733)));
org$pandalanguage$pandac$MethodDecl* $tmp1734 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1734));
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) $tmp1733);
// line 505
panda$core$MutableString* $tmp1735 = *(&local7);
panda$core$String* $tmp1736 = *(&local8);
panda$core$MutableString$append$panda$core$String($tmp1735, $tmp1736);
// line 506
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1737));
panda$core$String* $tmp1738 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1738));
*(&local8) = &$s1739;
// line 507
org$pandalanguage$pandac$MethodDecl* $tmp1740 = *(&local9);
org$pandalanguage$pandac$Annotations** $tmp1741 = &$tmp1740->annotations;
org$pandalanguage$pandac$Annotations* $tmp1742 = *$tmp1741;
panda$core$Bit $tmp1743 = org$pandalanguage$pandac$Annotations$get_isAbstract$R$panda$core$Bit($tmp1742);
bool $tmp1744 = $tmp1743.value;
if ($tmp1744) goto block7; else goto block9;
block7:;
// line 508
panda$core$MutableString* $tmp1745 = *(&local7);
panda$core$MutableString$append$panda$core$String($tmp1745, &$s1746);
goto block8;
block9:;
// line 1
// line 511
panda$core$MutableString* $tmp1747 = *(&local7);
org$pandalanguage$pandac$MethodDecl* $tmp1748 = *(&local9);
panda$core$String* $tmp1749 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, $tmp1748);
panda$core$MutableString$append$panda$core$String($tmp1747, $tmp1749);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1749));
// unreffing REF($307:panda.core.String)
goto block8;
block8:;
panda$core$Panda$unref$panda$core$Object$Q($tmp1733);
// unreffing REF($273:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp1750 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1750));
// unreffing m
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block4;
block6:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1724));
// unreffing REF($262:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 514
panda$core$MutableString* $tmp1751 = *(&local7);
panda$core$MutableString$append$panda$core$String($tmp1751, &$s1752);
// line 515
panda$io$MemoryOutputStream** $tmp1753 = &param0->types;
panda$io$MemoryOutputStream* $tmp1754 = *$tmp1753;
panda$core$MutableString* $tmp1755 = *(&local7);
panda$core$String* $tmp1756 = panda$core$MutableString$finish$R$panda$core$String($tmp1755);
$fn1758 $tmp1757 = ($fn1758) ((panda$io$OutputStream*) $tmp1754)->$class->vtable[19];
$tmp1757(((panda$io$OutputStream*) $tmp1754), $tmp1756);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1756));
// unreffing REF($333:panda.core.String)
// line 516
panda$core$String* $tmp1759 = *(&local6);
panda$core$String* $tmp1760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1761, $tmp1759);
panda$core$String* $tmp1762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1760, &$s1763);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1762));
panda$core$String* $tmp1764 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1764));
*(&local1) = $tmp1762;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1762));
// unreffing REF($342:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1760));
// unreffing REF($341:panda.core.String)
panda$core$String* $tmp1765 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1765));
// unreffing separator
*(&local8) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp1766 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1766));
// unreffing result
*(&local7) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp1767 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1767));
// unreffing name
*(&local6) = ((panda$core$String*) NULL);
panda$collections$ListView* $tmp1768 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1768));
// unreffing methods
*(&local5) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1769 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1769));
// unreffing intfCC
*(&local4) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp1770 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1770));
// unreffing intf
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1646);
// unreffing REF($47:panda.collections.Iterator.T)
org$pandalanguage$pandac$Type* $tmp1771 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1771));
// unreffing intfType
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1637));
// unreffing REF($36:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 518
panda$core$String* $tmp1772 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1772));
panda$core$String* $tmp1773 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1773));
// unreffing previous
*(&local1) = ((panda$core$String*) NULL);
panda$collections$HashSet* $tmp1774 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1774));
// unreffing interfaces
*(&local0) = ((panda$collections$HashSet*) NULL);
return $tmp1772;

}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

// line 522
panda$core$Weak** $tmp1775 = &param0->hCodeGen;
panda$core$Weak* $tmp1776 = *$tmp1775;
panda$core$Object* $tmp1777 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1776);
panda$core$Bit $tmp1778 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(((org$pandalanguage$pandac$HCodeGenerator*) $tmp1777), param1);
panda$core$Panda$unref$panda$core$Object$Q($tmp1777);
// unreffing REF($4:panda.core.Weak.T)
return $tmp1778;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$Type* local1 = NULL;
org$pandalanguage$pandac$Type* local2 = NULL;
org$pandalanguage$pandac$Type* local3 = NULL;
org$pandalanguage$pandac$CCodeGenerator$MethodShim* local4 = NULL;
// line 526
panda$core$Weak** $tmp1779 = &param0->compiler;
panda$core$Weak* $tmp1780 = *$tmp1779;
panda$core$Object* $tmp1781 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1780);
panda$core$Bit $tmp1782 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1781), param1);
panda$core$Panda$unref$panda$core$Object$Q($tmp1781);
// unreffing REF($4:panda.core.Weak.T)
// line 527
panda$core$Weak** $tmp1783 = &param1->owner;
panda$core$Weak* $tmp1784 = *$tmp1783;
panda$core$Object* $tmp1785 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1784);
panda$core$Bit $tmp1786 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp1785));
bool $tmp1787 = $tmp1786.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp1785);
// unreffing REF($15:panda.core.Weak.T)
if ($tmp1787) goto block1; else goto block2;
block1:;
// line 528
org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(param0, param1);
goto block2;
block2:;
// line 530
*(&local0) = ((panda$core$String*) NULL);
// line 531
panda$core$Weak** $tmp1788 = &param0->compiler;
panda$core$Weak* $tmp1789 = *$tmp1788;
panda$core$Object* $tmp1790 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1789);
panda$core$Weak** $tmp1791 = &param1->owner;
panda$core$Weak* $tmp1792 = *$tmp1791;
panda$core$Object* $tmp1793 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1792);
org$pandalanguage$pandac$Type** $tmp1794 = &((org$pandalanguage$pandac$ClassDecl*) $tmp1793)->type;
org$pandalanguage$pandac$Type* $tmp1795 = *$tmp1794;
panda$core$Bit $tmp1796 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type* $tmp1797 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp1790), param1, $tmp1795, $tmp1796);
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1797));
org$pandalanguage$pandac$Type* $tmp1798 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1798));
*(&local1) = $tmp1797;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1797));
// unreffing REF($43:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1793);
// unreffing REF($38:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp1790);
// unreffing REF($32:panda.core.Weak.T)
// line 532
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
// line 533
panda$core$Weak** $tmp1799 = &param0->compiler;
panda$core$Weak* $tmp1800 = *$tmp1799;
panda$core$Object* $tmp1801 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1800);
panda$core$Weak** $tmp1802 = &param1->owner;
panda$core$Weak* $tmp1803 = *$tmp1802;
panda$core$Object* $tmp1804 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1803);
panda$core$Bit $tmp1805 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1801), ((org$pandalanguage$pandac$ClassDecl*) $tmp1804));
bool $tmp1806 = $tmp1805.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp1804);
// unreffing REF($72:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp1801);
// unreffing REF($66:panda.core.Weak.T)
if ($tmp1806) goto block3; else goto block5;
block3:;
// line 534
org$pandalanguage$pandac$Type* $tmp1807 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1807));
org$pandalanguage$pandac$Type* $tmp1808 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1808));
*(&local2) = $tmp1807;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1807));
// unreffing REF($85:org.pandalanguage.pandac.Type)
goto block4;
block5:;
// line 1
// line 537
panda$core$Weak** $tmp1809 = &param1->owner;
panda$core$Weak* $tmp1810 = *$tmp1809;
panda$core$Object* $tmp1811 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1810);
org$pandalanguage$pandac$Type** $tmp1812 = &((org$pandalanguage$pandac$ClassDecl*) $tmp1811)->type;
org$pandalanguage$pandac$Type* $tmp1813 = *$tmp1812;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1813));
org$pandalanguage$pandac$Type* $tmp1814 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1814));
*(&local2) = $tmp1813;
panda$core$Panda$unref$panda$core$Object$Q($tmp1811);
// unreffing REF($101:panda.core.Weak.T)
goto block4;
block4:;
// line 539
panda$core$Weak** $tmp1815 = &param0->compiler;
panda$core$Weak* $tmp1816 = *$tmp1815;
panda$core$Object* $tmp1817 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1816);
org$pandalanguage$pandac$Type* $tmp1818 = *(&local2);
org$pandalanguage$pandac$Type* $tmp1819 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp1817), param1, $tmp1818);
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1819));
org$pandalanguage$pandac$Type* $tmp1820 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1820));
*(&local3) = $tmp1819;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1819));
// unreffing REF($123:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1817);
// unreffing REF($119:panda.core.Weak.T)
// line 540
org$pandalanguage$pandac$Type* $tmp1821 = *(&local1);
org$pandalanguage$pandac$Type* $tmp1822 = *(&local3);
ITable* $tmp1823 = ((panda$core$Equatable*) $tmp1821)->$class->itable;
while ($tmp1823->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1823 = $tmp1823->next;
}
$fn1825 $tmp1824 = $tmp1823->methods[1];
panda$core$Bit $tmp1826 = $tmp1824(((panda$core$Equatable*) $tmp1821), ((panda$core$Equatable*) $tmp1822));
bool $tmp1827 = $tmp1826.value;
if ($tmp1827) goto block6; else goto block8;
block6:;
// line 541
org$pandalanguage$pandac$Type* $tmp1828 = *(&local3);
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1829 = org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(param0, param1, $tmp1828);
*(&local4) = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1829));
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1830 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1830));
*(&local4) = $tmp1829;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1829));
// unreffing REF($149:org.pandalanguage.pandac.CCodeGenerator.MethodShim)
// line 542
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1831 = *(&local4);
panda$core$String** $tmp1832 = &$tmp1831->name;
panda$core$String* $tmp1833 = *$tmp1832;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1833));
panda$core$String* $tmp1834 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1834));
*(&local0) = $tmp1833;
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1835 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1835));
// unreffing shim
*(&local4) = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) NULL);
goto block7;
block8:;
// line 1
// line 545
panda$core$String* $tmp1836 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1836));
panda$core$String* $tmp1837 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1837));
*(&local0) = $tmp1836;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1836));
// unreffing REF($178:panda.core.String)
goto block7;
block7:;
// line 547
panda$core$String* $tmp1838 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1838));
org$pandalanguage$pandac$Type* $tmp1839 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1839));
// unreffing inherited
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1840 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1840));
// unreffing effectiveSelf
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1841 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1841));
// unreffing declared
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp1842 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1842));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp1838;

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
// line 551
panda$collections$HashMap** $tmp1843 = &param0->classConstants;
panda$collections$HashMap* $tmp1844 = *$tmp1843;
panda$core$String** $tmp1845 = &param1->name;
panda$core$String* $tmp1846 = *$tmp1845;
panda$core$Object* $tmp1847 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp1844, ((panda$collections$Key*) $tmp1846));
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1847)));
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1848 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1848));
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1847);
panda$core$Panda$unref$panda$core$Object$Q($tmp1847);
// unreffing REF($7:panda.collections.HashMap.V?)
// line 552
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1849 = *(&local0);
panda$core$Bit $tmp1850 = panda$core$Bit$init$builtin_bit($tmp1849 == NULL);
bool $tmp1851 = $tmp1850.value;
if ($tmp1851) goto block1; else goto block2;
block1:;
// line 553
org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(param0, param1);
// line 554
panda$core$Weak** $tmp1852 = &param0->compiler;
panda$core$Weak* $tmp1853 = *$tmp1852;
panda$core$Object* $tmp1854 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1853);
panda$core$Bit $tmp1855 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1854), param1);
panda$core$Panda$unref$panda$core$Object$Q($tmp1854);
// unreffing REF($31:panda.core.Weak.T)
// line 555
*(&local1) = ((panda$core$String*) NULL);
// line 556
panda$core$Bit $tmp1856 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(param0, param1);
bool $tmp1857 = $tmp1856.value;
if ($tmp1857) goto block3; else goto block4;
block3:;
// line 557
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1858 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
org$pandalanguage$pandac$Type** $tmp1859 = &param1->type;
org$pandalanguage$pandac$Type* $tmp1860 = *$tmp1859;
panda$core$String** $tmp1861 = &((org$pandalanguage$pandac$Symbol*) $tmp1860)->name;
panda$core$String* $tmp1862 = *$tmp1861;
panda$core$String* $tmp1863 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp1862);
panda$core$String* $tmp1864 = panda$core$String$convert$R$panda$core$String($tmp1863);
panda$core$String* $tmp1865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1864, &$s1866);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1858, $tmp1865, &$s1867);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1858));
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1868 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1868));
*(&local0) = $tmp1858;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1865));
// unreffing REF($53:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1864));
// unreffing REF($52:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1863));
// unreffing REF($51:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1858));
// unreffing REF($45:org.pandalanguage.pandac.CCodeGenerator.ClassConstant)
// line 559
panda$collections$HashMap** $tmp1869 = &param0->classConstants;
panda$collections$HashMap* $tmp1870 = *$tmp1869;
panda$core$String** $tmp1871 = &param1->name;
panda$core$String* $tmp1872 = *$tmp1871;
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1873 = *(&local0);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp1870, ((panda$collections$Key*) $tmp1872), ((panda$core$Object*) $tmp1873));
// line 560
panda$collections$HashMap** $tmp1874 = &param0->classConstants;
panda$collections$HashMap* $tmp1875 = *$tmp1874;
panda$core$String** $tmp1876 = &param1->name;
panda$core$String* $tmp1877 = *$tmp1876;
panda$core$Object* $tmp1878 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp1875, ((panda$collections$Key*) $tmp1877));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1878)));
panda$core$Panda$unref$panda$core$Object$Q($tmp1878);
// unreffing REF($92:panda.collections.HashMap.V?)
panda$core$String* $tmp1879 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1879));
// unreffing type
*(&local1) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1880 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1880));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
return ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1878);
block4:;
// line 562
panda$core$Weak** $tmp1881 = &param0->compiler;
panda$core$Weak* $tmp1882 = *$tmp1881;
panda$core$Object* $tmp1883 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1882);
panda$collections$Stack** $tmp1884 = &((org$pandalanguage$pandac$Compiler*) $tmp1883)->currentClass;
panda$collections$Stack* $tmp1885 = *$tmp1884;
panda$collections$Stack$push$panda$collections$Stack$T($tmp1885, ((panda$core$Object*) param1));
panda$core$Panda$unref$panda$core$Object$Q($tmp1883);
// unreffing REF($115:panda.core.Weak.T)
// line 563
panda$core$Weak** $tmp1886 = &param0->compiler;
panda$core$Weak* $tmp1887 = *$tmp1886;
panda$core$Object* $tmp1888 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1887);
panda$collections$ListView* $tmp1889 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp1888), param1);
*(&local2) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1889));
panda$collections$ListView* $tmp1890 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1890));
*(&local2) = $tmp1889;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1889));
// unreffing REF($133:panda.collections.ListView<org.pandalanguage.pandac.MethodDecl>)
panda$core$Panda$unref$panda$core$Object$Q($tmp1888);
// unreffing REF($130:panda.core.Weak.T)
// line 564
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1891 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
org$pandalanguage$pandac$Type** $tmp1892 = &param1->type;
org$pandalanguage$pandac$Type* $tmp1893 = *$tmp1892;
panda$core$String** $tmp1894 = &((org$pandalanguage$pandac$Symbol*) $tmp1893)->name;
panda$core$String* $tmp1895 = *$tmp1894;
panda$core$String* $tmp1896 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp1895);
panda$core$String* $tmp1897 = panda$core$String$convert$R$panda$core$String($tmp1896);
panda$core$String* $tmp1898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1897, &$s1899);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1891, $tmp1898, &$s1900);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1891));
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1901 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1901));
*(&local0) = $tmp1891;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1898));
// unreffing REF($156:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1897));
// unreffing REF($155:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1896));
// unreffing REF($154:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1891));
// unreffing REF($148:org.pandalanguage.pandac.CCodeGenerator.ClassConstant)
// line 565
panda$collections$HashMap** $tmp1902 = &param0->classConstants;
panda$collections$HashMap* $tmp1903 = *$tmp1902;
panda$core$String** $tmp1904 = &param1->name;
panda$core$String* $tmp1905 = *$tmp1904;
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1906 = *(&local0);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp1903, ((panda$collections$Key*) $tmp1905), ((panda$core$Object*) $tmp1906));
// line 566
*(&local3) = ((panda$core$String*) NULL);
// line 567
org$pandalanguage$pandac$Type** $tmp1907 = &param1->rawSuper;
org$pandalanguage$pandac$Type* $tmp1908 = *$tmp1907;
panda$core$Bit $tmp1909 = panda$core$Bit$init$builtin_bit($tmp1908 != NULL);
bool $tmp1910 = $tmp1909.value;
if ($tmp1910) goto block5; else goto block7;
block5:;
// line 568
panda$core$Weak** $tmp1911 = &param0->compiler;
panda$core$Weak* $tmp1912 = *$tmp1911;
panda$core$Object* $tmp1913 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1912);
org$pandalanguage$pandac$Type** $tmp1914 = &param1->rawSuper;
org$pandalanguage$pandac$Type* $tmp1915 = *$tmp1914;
org$pandalanguage$pandac$ClassDecl* $tmp1916 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1913), $tmp1915);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1917 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, $tmp1916);
*(&local4) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1917));
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1918 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1918));
*(&local4) = $tmp1917;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1917));
// unreffing REF($209:org.pandalanguage.pandac.CCodeGenerator.ClassConstant)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1916));
// unreffing REF($207:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp1913);
// unreffing REF($201:panda.core.Weak.T)
// line 569
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1919 = *(&local4);
panda$core$String** $tmp1920 = &$tmp1919->name;
panda$core$String* $tmp1921 = *$tmp1920;
panda$core$String* $tmp1922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1923, $tmp1921);
panda$core$String* $tmp1924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1922, &$s1925);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1924));
panda$core$String* $tmp1926 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1926));
*(&local3) = $tmp1924;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1924));
// unreffing REF($231:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1922));
// unreffing REF($230:panda.core.String)
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1927 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1927));
// unreffing superCC
*(&local4) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
goto block6;
block7:;
// line 1
// line 572
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1928));
panda$core$String* $tmp1929 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1929));
*(&local3) = &$s1930;
goto block6;
block6:;
// line 574
panda$core$Weak** $tmp1931 = &param0->compiler;
panda$core$Weak* $tmp1932 = *$tmp1931;
panda$core$Object* $tmp1933 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1932);
org$pandalanguage$pandac$Type* $tmp1934 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$ClassDecl* $tmp1935 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1933), $tmp1934);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1936 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, $tmp1935);
*(&local5) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1936));
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1937 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1937));
*(&local5) = $tmp1936;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1936));
// unreffing REF($269:org.pandalanguage.pandac.CCodeGenerator.ClassConstant)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1935));
// unreffing REF($267:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1934));
// unreffing REF($266:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1933);
// unreffing REF($263:panda.core.Weak.T)
// line 575
panda$core$String** $tmp1938 = &param1->name;
panda$core$String* $tmp1939 = *$tmp1938;
panda$core$String* $tmp1940 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(param0, $tmp1939);
*(&local6) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1940));
panda$core$String* $tmp1941 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1941));
*(&local6) = $tmp1940;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1940));
// unreffing REF($292:panda.core.String)
// line 576
panda$core$String* $tmp1942 = *(&local6);
panda$core$Bit $tmp1943 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1942, &$s1944);
bool $tmp1945 = $tmp1943.value;
if ($tmp1945) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp1946 = (panda$core$Int64) {576};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1947, $tmp1946);
abort(); // unreachable
block8:;
// line 577
panda$core$MutableString* $tmp1948 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String* $tmp1949 = *(&local6);
panda$core$Int64 $tmp1950 = (panda$core$Int64) {1};
panda$core$Bit $tmp1951 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1952 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp1950, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1951);
panda$core$String* $tmp1953 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1949, $tmp1952);
panda$core$String* $tmp1954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1955, $tmp1953);
panda$core$String* $tmp1956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1954, &$s1957);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1958 = *(&local0);
panda$core$String** $tmp1959 = &$tmp1958->name;
panda$core$String* $tmp1960 = *$tmp1959;
panda$core$String* $tmp1961 = panda$core$String$convert$R$panda$core$String($tmp1960);
panda$core$String* $tmp1962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1961, &$s1963);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1964 = *(&local0);
panda$core$String** $tmp1965 = &$tmp1964->name;
panda$core$String* $tmp1966 = *$tmp1965;
panda$core$String* $tmp1967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1962, $tmp1966);
panda$core$String* $tmp1968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1967, &$s1969);
panda$core$String* $tmp1970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1956, $tmp1968);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1971 = *(&local5);
panda$core$String** $tmp1972 = &$tmp1971->name;
panda$core$String* $tmp1973 = *$tmp1972;
panda$core$String* $tmp1974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1975, $tmp1973);
panda$core$String* $tmp1976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1974, &$s1977);
panda$core$Int64 $tmp1978 = (panda$core$Int64) {18446744073709550617};
panda$core$Int64$wrapper* $tmp1979;
$tmp1979 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1979->value = $tmp1978;
panda$core$String* $tmp1980 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1976, ((panda$core$Object*) $tmp1979));
panda$core$String* $tmp1981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1980, &$s1982);
panda$core$String* $tmp1983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1970, $tmp1981);
panda$core$String* $tmp1984 = *(&local6);
panda$core$String* $tmp1985 = panda$core$String$convert$R$panda$core$String($tmp1984);
panda$core$String* $tmp1986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1985, &$s1987);
panda$core$String* $tmp1988 = *(&local3);
panda$core$String* $tmp1989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1986, $tmp1988);
panda$core$String* $tmp1990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1989, &$s1991);
panda$core$String* $tmp1992 = org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp1993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1990, $tmp1992);
panda$core$String* $tmp1994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1993, &$s1995);
panda$core$String* $tmp1996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1983, $tmp1994);
panda$core$MutableString$init$panda$core$String($tmp1948, $tmp1996);
*(&local7) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1948));
panda$core$MutableString* $tmp1997 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1997));
*(&local7) = $tmp1948;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1996));
// unreffing REF($353:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1994));
// unreffing REF($352:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1993));
// unreffing REF($351:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1992));
// unreffing REF($350:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1990));
// unreffing REF($349:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1989));
// unreffing REF($348:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1986));
// unreffing REF($346:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1985));
// unreffing REF($345:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1983));
// unreffing REF($343:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1981));
// unreffing REF($342:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1980));
// unreffing REF($341:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1979));
// unreffing REF($340:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1976));
// unreffing REF($338:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1974));
// unreffing REF($337:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1970));
// unreffing REF($333:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1968));
// unreffing REF($332:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1967));
// unreffing REF($331:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1962));
// unreffing REF($326:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1961));
// unreffing REF($325:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1956));
// unreffing REF($320:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1954));
// unreffing REF($319:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1953));
// unreffing REF($318:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1948));
// unreffing REF($312:panda.core.MutableString)
// line 581
*(&local8) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1998));
panda$core$String* $tmp1999 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1999));
*(&local8) = &$s2000;
// line 582
panda$collections$ListView* $tmp2001 = *(&local2);
ITable* $tmp2002 = ((panda$collections$Iterable*) $tmp2001)->$class->itable;
while ($tmp2002->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2002 = $tmp2002->next;
}
$fn2004 $tmp2003 = $tmp2002->methods[0];
panda$collections$Iterator* $tmp2005 = $tmp2003(((panda$collections$Iterable*) $tmp2001));
goto block10;
block10:;
ITable* $tmp2006 = $tmp2005->$class->itable;
while ($tmp2006->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2006 = $tmp2006->next;
}
$fn2008 $tmp2007 = $tmp2006->methods[0];
panda$core$Bit $tmp2009 = $tmp2007($tmp2005);
bool $tmp2010 = $tmp2009.value;
if ($tmp2010) goto block12; else goto block11;
block11:;
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp2011 = $tmp2005->$class->itable;
while ($tmp2011->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2011 = $tmp2011->next;
}
$fn2013 $tmp2012 = $tmp2011->methods[1];
panda$core$Object* $tmp2014 = $tmp2012($tmp2005);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2014)));
org$pandalanguage$pandac$MethodDecl* $tmp2015 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2015));
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) $tmp2014);
// line 583
panda$core$MutableString* $tmp2016 = *(&local7);
panda$core$String* $tmp2017 = *(&local8);
panda$core$MutableString$append$panda$core$String($tmp2016, $tmp2017);
// line 584
org$pandalanguage$pandac$MethodDecl* $tmp2018 = *(&local9);
org$pandalanguage$pandac$Annotations** $tmp2019 = &$tmp2018->annotations;
org$pandalanguage$pandac$Annotations* $tmp2020 = *$tmp2019;
panda$core$Bit $tmp2021 = org$pandalanguage$pandac$Annotations$get_isAbstract$R$panda$core$Bit($tmp2020);
bool $tmp2022 = $tmp2021.value;
if ($tmp2022) goto block13; else goto block15;
block13:;
// line 585
panda$core$MutableString* $tmp2023 = *(&local7);
panda$core$MutableString$append$panda$core$String($tmp2023, &$s2024);
goto block14;
block15:;
// line 1
// line 588
panda$core$MutableString* $tmp2025 = *(&local7);
org$pandalanguage$pandac$MethodDecl* $tmp2026 = *(&local9);
panda$core$String* $tmp2027 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, $tmp2026);
panda$core$MutableString$append$panda$core$String($tmp2025, $tmp2027);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2027));
// unreffing REF($482:panda.core.String)
goto block14;
block14:;
// line 590
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2028));
panda$core$String* $tmp2029 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2029));
*(&local8) = &$s2030;
panda$core$Panda$unref$panda$core$Object$Q($tmp2014);
// unreffing REF($455:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp2031 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2031));
// unreffing m
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block10;
block12:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2005));
// unreffing REF($444:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 592
panda$core$MutableString* $tmp2032 = *(&local7);
panda$core$MutableString$append$panda$core$String($tmp2032, &$s2033);
// line 593
panda$io$MemoryOutputStream** $tmp2034 = &param0->types;
panda$io$MemoryOutputStream* $tmp2035 = *$tmp2034;
panda$core$MutableString* $tmp2036 = *(&local7);
panda$core$String* $tmp2037 = panda$core$MutableString$finish$R$panda$core$String($tmp2036);
$fn2039 $tmp2038 = ($fn2039) ((panda$io$OutputStream*) $tmp2035)->$class->vtable[19];
$tmp2038(((panda$io$OutputStream*) $tmp2035), $tmp2037);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2037));
// unreffing REF($515:panda.core.String)
// line 594
panda$core$Weak** $tmp2040 = &param0->compiler;
panda$core$Weak* $tmp2041 = *$tmp2040;
panda$core$Object* $tmp2042 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2041);
panda$collections$Stack** $tmp2043 = &((org$pandalanguage$pandac$Compiler*) $tmp2042)->currentClass;
panda$collections$Stack* $tmp2044 = *$tmp2043;
panda$core$Int64 $tmp2045 = (panda$core$Int64) {0};
panda$core$Object* $tmp2046 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp2044, $tmp2045);
bool $tmp2047 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2046) == param1;
panda$core$Bit $tmp2048 = panda$core$Bit$init$builtin_bit($tmp2047);
bool $tmp2049 = $tmp2048.value;
if ($tmp2049) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp2050 = (panda$core$Int64) {594};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2051, $tmp2050);
abort(); // unreachable
block16:;
panda$core$Panda$unref$panda$core$Object$Q($tmp2046);
// unreffing REF($532:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp2042);
// unreffing REF($525:panda.core.Weak.T)
// line 595
panda$core$Weak** $tmp2052 = &param0->compiler;
panda$core$Weak* $tmp2053 = *$tmp2052;
panda$core$Object* $tmp2054 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2053);
panda$collections$Stack** $tmp2055 = &((org$pandalanguage$pandac$Compiler*) $tmp2054)->currentClass;
panda$collections$Stack* $tmp2056 = *$tmp2055;
panda$core$Object* $tmp2057 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2056);
panda$core$Panda$unref$panda$core$Object$Q($tmp2057);
// unreffing REF($557:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp2054);
// unreffing REF($551:panda.core.Weak.T)
panda$core$String* $tmp2058 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2058));
// unreffing separator
*(&local8) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2059 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2059));
// unreffing code
*(&local7) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp2060 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2060));
// unreffing name
*(&local6) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2061 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2061));
// unreffing clConstant
*(&local5) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
panda$core$String* $tmp2062 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2062));
// unreffing superPtr
*(&local3) = ((panda$core$String*) NULL);
panda$collections$ListView* $tmp2063 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2063));
// unreffing vtable
*(&local2) = ((panda$collections$ListView*) NULL);
panda$core$String* $tmp2064 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2064));
// unreffing type
*(&local1) = ((panda$core$String*) NULL);
goto block2;
block2:;
// line 597
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2065 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2065));
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2066 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2066));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
return $tmp2065;

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
// line 601
panda$core$String** $tmp2067 = &param1->name;
panda$core$String* $tmp2068 = *$tmp2067;
panda$core$String* $tmp2069 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp2068);
panda$core$String* $tmp2070 = panda$core$String$convert$R$panda$core$String($tmp2069);
panda$core$String* $tmp2071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2070, &$s2072);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2071));
panda$core$String* $tmp2073 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2073));
*(&local0) = $tmp2071;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2071));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2070));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2069));
// unreffing REF($3:panda.core.String)
// line 602
panda$collections$HashMap** $tmp2074 = &param0->classConstants;
panda$collections$HashMap* $tmp2075 = *$tmp2074;
panda$core$String* $tmp2076 = *(&local0);
panda$core$Object* $tmp2077 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp2075, ((panda$collections$Key*) $tmp2076));
*(&local1) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp2077)));
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2078 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2078));
*(&local1) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp2077);
panda$core$Panda$unref$panda$core$Object$Q($tmp2077);
// unreffing REF($28:panda.collections.HashMap.V?)
// line 603
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2079 = *(&local1);
panda$core$Bit $tmp2080 = panda$core$Bit$init$builtin_bit($tmp2079 == NULL);
bool $tmp2081 = $tmp2080.value;
if ($tmp2081) goto block1; else goto block2;
block1:;
// line 604
panda$core$Bit $tmp2082 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(param0, param1);
bool $tmp2083 = $tmp2082.value;
if ($tmp2083) goto block3; else goto block5;
block3:;
// line 605
org$pandalanguage$pandac$Type* $tmp2084 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp2085 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp2084);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2085));
// unreffing REF($52:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2084));
// unreffing REF($51:org.pandalanguage.pandac.Type)
// line 606
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2086));
panda$core$String* $tmp2087 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2087));
*(&local2) = &$s2088;
// line 607
panda$io$MemoryOutputStream** $tmp2089 = &param0->types;
panda$io$MemoryOutputStream* $tmp2090 = *$tmp2089;
panda$core$String* $tmp2091 = *(&local0);
panda$core$String* $tmp2092 = panda$core$String$convert$R$panda$core$String($tmp2091);
panda$core$String* $tmp2093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2092, &$s2094);
panda$core$String* $tmp2095 = *(&local2);
panda$core$String* $tmp2096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2093, $tmp2095);
panda$core$String* $tmp2097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2096, &$s2098);
$fn2100 $tmp2099 = ($fn2100) ((panda$io$OutputStream*) $tmp2090)->$class->vtable[19];
$tmp2099(((panda$io$OutputStream*) $tmp2090), $tmp2097);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2097));
// unreffing REF($76:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2096));
// unreffing REF($75:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2093));
// unreffing REF($73:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2092));
// unreffing REF($72:panda.core.String)
// line 608
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2101 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
panda$core$String* $tmp2102 = *(&local0);
panda$core$String* $tmp2103 = *(&local2);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp2101, $tmp2102, $tmp2103);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2101));
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2104 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2104));
*(&local1) = $tmp2101;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2101));
// unreffing REF($92:org.pandalanguage.pandac.CCodeGenerator.ClassConstant)
panda$core$String* $tmp2105 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2105));
// unreffing type
*(&local2) = ((panda$core$String*) NULL);
goto block4;
block5:;
// line 1
// line 611
panda$core$Weak** $tmp2106 = &param0->compiler;
panda$core$Weak* $tmp2107 = *$tmp2106;
panda$core$Object* $tmp2108 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2107);
org$pandalanguage$pandac$Type* $tmp2109 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$ClassDecl* $tmp2110 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp2108), $tmp2109);
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2110));
org$pandalanguage$pandac$ClassDecl* $tmp2111 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2111));
*(&local3) = $tmp2110;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2110));
// unreffing REF($121:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2109));
// unreffing REF($120:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp2108);
// unreffing REF($117:panda.core.Weak.T)
// line 612
panda$core$Weak** $tmp2112 = &param0->compiler;
panda$core$Weak* $tmp2113 = *$tmp2112;
panda$core$Object* $tmp2114 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2113);
org$pandalanguage$pandac$ClassDecl* $tmp2115 = *(&local3);
panda$collections$ListView* $tmp2116 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp2114), $tmp2115);
*(&local4) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2116));
panda$collections$ListView* $tmp2117 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2117));
*(&local4) = $tmp2116;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2116));
// unreffing REF($147:panda.collections.ListView<org.pandalanguage.pandac.MethodDecl>)
panda$core$Panda$unref$panda$core$Object$Q($tmp2114);
// unreffing REF($142:panda.core.Weak.T)
// line 613
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2118 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
panda$core$String** $tmp2119 = &param1->name;
panda$core$String* $tmp2120 = *$tmp2119;
panda$core$String* $tmp2121 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp2120);
panda$core$String* $tmp2122 = panda$core$String$convert$R$panda$core$String($tmp2121);
panda$core$String* $tmp2123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2122, &$s2124);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp2118, $tmp2123, &$s2125);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2118));
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2126 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2126));
*(&local1) = $tmp2118;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2123));
// unreffing REF($167:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2122));
// unreffing REF($166:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2121));
// unreffing REF($165:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2118));
// unreffing REF($162:org.pandalanguage.pandac.CCodeGenerator.ClassConstant)
// line 614
panda$core$Weak** $tmp2127 = &param0->compiler;
panda$core$Weak* $tmp2128 = *$tmp2127;
panda$core$Object* $tmp2129 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2128);
panda$collections$ListView* $tmp2130 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp2129), param1);
*(&local5) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2130));
panda$collections$ListView* $tmp2131 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2131));
*(&local5) = $tmp2130;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2130));
// unreffing REF($195:panda.collections.ListView<org.pandalanguage.pandac.MethodDecl>)
panda$core$Panda$unref$panda$core$Object$Q($tmp2129);
// unreffing REF($192:panda.core.Weak.T)
// line 615
panda$core$Weak** $tmp2132 = &param0->compiler;
panda$core$Weak* $tmp2133 = *$tmp2132;
panda$core$Object* $tmp2134 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2133);
org$pandalanguage$pandac$Type** $tmp2135 = &param1->rawSuper;
org$pandalanguage$pandac$Type* $tmp2136 = *$tmp2135;
org$pandalanguage$pandac$ClassDecl* $tmp2137 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp2134), $tmp2136);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2138 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, $tmp2137);
*(&local6) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2138));
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2139 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2139));
*(&local6) = $tmp2138;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2138));
// unreffing REF($221:org.pandalanguage.pandac.CCodeGenerator.ClassConstant)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2137));
// unreffing REF($219:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp2134);
// unreffing REF($213:panda.core.Weak.T)
// line 616
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2140 = *(&local6);
panda$core$String** $tmp2141 = &$tmp2140->name;
panda$core$String* $tmp2142 = *$tmp2141;
panda$core$String* $tmp2143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2144, $tmp2142);
panda$core$String* $tmp2145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2143, &$s2146);
*(&local7) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2145));
panda$core$String* $tmp2147 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2147));
*(&local7) = $tmp2145;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2145));
// unreffing REF($243:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2143));
// unreffing REF($242:panda.core.String)
// line 617
panda$core$String* $tmp2148 = org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(param0, param1);
*(&local8) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2148));
panda$core$String* $tmp2149 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2149));
*(&local8) = $tmp2148;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2148));
// unreffing REF($258:panda.core.String)
// line 618
panda$core$Weak** $tmp2150 = &param0->compiler;
panda$core$Weak* $tmp2151 = *$tmp2150;
panda$core$Object* $tmp2152 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2151);
org$pandalanguage$pandac$Type* $tmp2153 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$ClassDecl* $tmp2154 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp2152), $tmp2153);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2155 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, $tmp2154);
*(&local9) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2155));
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2156 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2156));
*(&local9) = $tmp2155;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2155));
// unreffing REF($279:org.pandalanguage.pandac.CCodeGenerator.ClassConstant)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2154));
// unreffing REF($277:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2153));
// unreffing REF($276:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp2152);
// unreffing REF($273:panda.core.Weak.T)
// line 619
panda$core$String** $tmp2157 = &param1->name;
panda$core$String* $tmp2158 = *$tmp2157;
panda$core$String* $tmp2159 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(param0, $tmp2158);
*(&local10) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2159));
panda$core$String* $tmp2160 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2160));
*(&local10) = $tmp2159;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2159));
// unreffing REF($302:panda.core.String)
// line 620
panda$core$String* $tmp2161 = *(&local10);
panda$core$Bit $tmp2162 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp2161, &$s2163);
bool $tmp2164 = $tmp2162.value;
if ($tmp2164) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp2165 = (panda$core$Int64) {620};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2166, $tmp2165);
abort(); // unreachable
block6:;
// line 621
panda$core$MutableString* $tmp2167 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String* $tmp2168 = *(&local10);
panda$core$Int64 $tmp2169 = (panda$core$Int64) {1};
panda$core$Bit $tmp2170 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2171 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp2169, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp2170);
panda$core$String* $tmp2172 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp2168, $tmp2171);
panda$core$String* $tmp2173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2174, $tmp2172);
panda$core$String* $tmp2175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2173, &$s2176);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2177 = *(&local1);
panda$core$String** $tmp2178 = &$tmp2177->name;
panda$core$String* $tmp2179 = *$tmp2178;
panda$core$String* $tmp2180 = panda$core$String$convert$R$panda$core$String($tmp2179);
panda$core$String* $tmp2181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2180, &$s2182);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2183 = *(&local1);
panda$core$String** $tmp2184 = &$tmp2183->name;
panda$core$String* $tmp2185 = *$tmp2184;
panda$core$String* $tmp2186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2181, $tmp2185);
panda$core$String* $tmp2187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2186, &$s2188);
panda$core$String* $tmp2189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2175, $tmp2187);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2190 = *(&local9);
panda$core$String** $tmp2191 = &$tmp2190->name;
panda$core$String* $tmp2192 = *$tmp2191;
panda$core$String* $tmp2193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2194, $tmp2192);
panda$core$String* $tmp2195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2193, &$s2196);
panda$core$Int64 $tmp2197 = (panda$core$Int64) {18446744073709550617};
panda$core$Int64$wrapper* $tmp2198;
$tmp2198 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp2198->value = $tmp2197;
panda$core$String* $tmp2199 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2195, ((panda$core$Object*) $tmp2198));
panda$core$String* $tmp2200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2199, &$s2201);
panda$core$String* $tmp2202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2189, $tmp2200);
panda$core$String* $tmp2203 = *(&local10);
panda$core$String* $tmp2204 = panda$core$String$convert$R$panda$core$String($tmp2203);
panda$core$String* $tmp2205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2204, &$s2206);
panda$core$String* $tmp2207 = *(&local7);
panda$core$String* $tmp2208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2205, $tmp2207);
panda$core$String* $tmp2209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2208, &$s2210);
panda$core$String* $tmp2211 = *(&local8);
panda$core$String* $tmp2212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2209, $tmp2211);
panda$core$String* $tmp2213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2212, &$s2214);
panda$core$String* $tmp2215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2202, $tmp2213);
panda$core$MutableString$init$panda$core$String($tmp2167, $tmp2215);
*(&local11) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2167));
panda$core$MutableString* $tmp2216 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2216));
*(&local11) = $tmp2167;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2215));
// unreffing REF($363:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2213));
// unreffing REF($362:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2212));
// unreffing REF($361:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2209));
// unreffing REF($359:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2208));
// unreffing REF($358:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2205));
// unreffing REF($356:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2204));
// unreffing REF($355:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2202));
// unreffing REF($353:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2200));
// unreffing REF($352:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2199));
// unreffing REF($351:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2198));
// unreffing REF($350:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2195));
// unreffing REF($348:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2193));
// unreffing REF($347:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2189));
// unreffing REF($343:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2187));
// unreffing REF($342:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2186));
// unreffing REF($341:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2181));
// unreffing REF($336:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2180));
// unreffing REF($335:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2175));
// unreffing REF($330:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2173));
// unreffing REF($329:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2172));
// unreffing REF($328:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2167));
// unreffing REF($322:panda.core.MutableString)
// line 625
*(&local12) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2217));
panda$core$String* $tmp2218 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2218));
*(&local12) = &$s2219;
// line 626
panda$core$Int64 $tmp2220 = (panda$core$Int64) {0};
panda$collections$ListView* $tmp2221 = *(&local4);
ITable* $tmp2222 = ((panda$collections$CollectionView*) $tmp2221)->$class->itable;
while ($tmp2222->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2222 = $tmp2222->next;
}
$fn2224 $tmp2223 = $tmp2222->methods[0];
panda$core$Int64 $tmp2225 = $tmp2223(((panda$collections$CollectionView*) $tmp2221));
panda$core$Bit $tmp2226 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2227 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2220, $tmp2225, $tmp2226);
panda$core$Int64 $tmp2228 = $tmp2227.min;
*(&local13) = $tmp2228;
panda$core$Int64 $tmp2229 = $tmp2227.max;
panda$core$Bit $tmp2230 = $tmp2227.inclusive;
bool $tmp2231 = $tmp2230.value;
panda$core$Int64 $tmp2232 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2233 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2232);
if ($tmp2231) goto block11; else goto block12;
block11:;
int64_t $tmp2234 = $tmp2228.value;
int64_t $tmp2235 = $tmp2229.value;
bool $tmp2236 = $tmp2234 <= $tmp2235;
panda$core$Bit $tmp2237 = (panda$core$Bit) {$tmp2236};
bool $tmp2238 = $tmp2237.value;
if ($tmp2238) goto block8; else goto block9;
block12:;
int64_t $tmp2239 = $tmp2228.value;
int64_t $tmp2240 = $tmp2229.value;
bool $tmp2241 = $tmp2239 < $tmp2240;
panda$core$Bit $tmp2242 = (panda$core$Bit) {$tmp2241};
bool $tmp2243 = $tmp2242.value;
if ($tmp2243) goto block8; else goto block9;
block8:;
// line 627
panda$core$MutableString* $tmp2244 = *(&local11);
panda$core$String* $tmp2245 = *(&local12);
panda$core$String* $tmp2246 = panda$core$String$convert$R$panda$core$String($tmp2245);
panda$core$String* $tmp2247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2246, &$s2248);
panda$collections$ListView* $tmp2249 = *(&local5);
panda$core$Int64 $tmp2250 = *(&local13);
ITable* $tmp2251 = $tmp2249->$class->itable;
while ($tmp2251->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp2251 = $tmp2251->next;
}
$fn2253 $tmp2252 = $tmp2251->methods[0];
panda$core$Object* $tmp2254 = $tmp2252($tmp2249, $tmp2250);
panda$core$String* $tmp2255 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, ((org$pandalanguage$pandac$MethodDecl*) $tmp2254));
panda$core$String* $tmp2256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2247, $tmp2255);
panda$core$String* $tmp2257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2256, &$s2258);
panda$core$MutableString$append$panda$core$String($tmp2244, $tmp2257);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2257));
// unreffing REF($487:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2256));
// unreffing REF($486:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2255));
// unreffing REF($485:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2254);
// unreffing REF($483:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2247));
// unreffing REF($478:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2246));
// unreffing REF($477:panda.core.String)
// line 628
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2259));
panda$core$String* $tmp2260 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2260));
*(&local12) = &$s2261;
goto block10;
block10:;
panda$core$Int64 $tmp2262 = *(&local13);
int64_t $tmp2263 = $tmp2229.value;
int64_t $tmp2264 = $tmp2262.value;
int64_t $tmp2265 = $tmp2263 - $tmp2264;
panda$core$Int64 $tmp2266 = (panda$core$Int64) {$tmp2265};
panda$core$UInt64 $tmp2267 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2266);
if ($tmp2231) goto block14; else goto block15;
block14:;
uint64_t $tmp2268 = $tmp2267.value;
uint64_t $tmp2269 = $tmp2233.value;
bool $tmp2270 = $tmp2268 >= $tmp2269;
panda$core$Bit $tmp2271 = (panda$core$Bit) {$tmp2270};
bool $tmp2272 = $tmp2271.value;
if ($tmp2272) goto block13; else goto block9;
block15:;
uint64_t $tmp2273 = $tmp2267.value;
uint64_t $tmp2274 = $tmp2233.value;
bool $tmp2275 = $tmp2273 > $tmp2274;
panda$core$Bit $tmp2276 = (panda$core$Bit) {$tmp2275};
bool $tmp2277 = $tmp2276.value;
if ($tmp2277) goto block13; else goto block9;
block13:;
int64_t $tmp2278 = $tmp2262.value;
int64_t $tmp2279 = $tmp2232.value;
int64_t $tmp2280 = $tmp2278 + $tmp2279;
panda$core$Int64 $tmp2281 = (panda$core$Int64) {$tmp2280};
*(&local13) = $tmp2281;
goto block8;
block9:;
// line 630
panda$core$MutableString* $tmp2282 = *(&local11);
panda$core$MutableString$append$panda$core$String($tmp2282, &$s2283);
// line 631
panda$io$MemoryOutputStream** $tmp2284 = &param0->types;
panda$io$MemoryOutputStream* $tmp2285 = *$tmp2284;
panda$core$MutableString* $tmp2286 = *(&local11);
panda$core$String* $tmp2287 = panda$core$MutableString$finish$R$panda$core$String($tmp2286);
$fn2289 $tmp2288 = ($fn2289) ((panda$io$OutputStream*) $tmp2285)->$class->vtable[17];
$tmp2288(((panda$io$OutputStream*) $tmp2285), $tmp2287);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2287));
// unreffing REF($548:panda.core.String)
panda$core$String* $tmp2290 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2290));
// unreffing separator
*(&local12) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2291 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2291));
// unreffing code
*(&local11) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp2292 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2292));
// unreffing name
*(&local10) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2293 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2293));
// unreffing clConstant
*(&local9) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
panda$core$String* $tmp2294 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2294));
// unreffing itable
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp2295 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2295));
// unreffing superCast
*(&local7) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2296 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2296));
// unreffing superCC
*(&local6) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
panda$collections$ListView* $tmp2297 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2297));
// unreffing vtable
*(&local5) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp2298 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2298));
// unreffing valueVTable
*(&local4) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2299 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2299));
// unreffing value
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block4;
block4:;
// line 633
panda$collections$HashMap** $tmp2300 = &param0->classConstants;
panda$collections$HashMap* $tmp2301 = *$tmp2300;
panda$core$String* $tmp2302 = *(&local0);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2303 = *(&local1);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp2301, ((panda$collections$Key*) $tmp2302), ((panda$core$Object*) $tmp2303));
goto block2;
block2:;
// line 635
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2304 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2304));
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2305 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2305));
// unreffing result
*(&local1) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
panda$core$String* $tmp2306 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2306));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp2304;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Variable* param1) {

panda$core$String* local0 = NULL;
// line 639
org$pandalanguage$pandac$Variable$Storage** $tmp2307 = &param1->storage;
org$pandalanguage$pandac$Variable$Storage* $tmp2308 = *$tmp2307;
panda$core$Int64* $tmp2309 = &$tmp2308->$rawValue;
panda$core$Int64 $tmp2310 = *$tmp2309;
panda$core$Int64 $tmp2311 = (panda$core$Int64) {1};
panda$core$Bit $tmp2312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2310, $tmp2311);
bool $tmp2313 = $tmp2312.value;
if ($tmp2313) goto block2; else goto block1;
block2:;
// line 641
panda$core$String** $tmp2314 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp2315 = *$tmp2314;
panda$core$String* $tmp2316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2317, $tmp2315);
panda$core$String* $tmp2318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2316, &$s2319);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2318));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2318));
// unreffing REF($14:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2316));
// unreffing REF($13:panda.core.String)
return $tmp2318;
block1:;
// line 644
panda$collections$IdentityMap** $tmp2320 = &param0->variableNames;
panda$collections$IdentityMap* $tmp2321 = *$tmp2320;
panda$core$Object* $tmp2322 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q($tmp2321, ((panda$core$Object*) param1));
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp2322)));
panda$core$String* $tmp2323 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2323));
*(&local0) = ((panda$core$String*) $tmp2322);
panda$core$Panda$unref$panda$core$Object$Q($tmp2322);
// unreffing REF($29:panda.collections.IdentityMap.V?)
// line 645
panda$core$String* $tmp2324 = *(&local0);
panda$core$Bit $tmp2325 = panda$core$Bit$init$builtin_bit($tmp2324 == NULL);
bool $tmp2326 = $tmp2325.value;
if ($tmp2326) goto block3; else goto block4;
block3:;
// line 646
panda$core$Int64* $tmp2327 = &param0->varCount;
panda$core$Int64 $tmp2328 = *$tmp2327;
panda$core$Int64 $tmp2329 = (panda$core$Int64) {1};
int64_t $tmp2330 = $tmp2328.value;
int64_t $tmp2331 = $tmp2329.value;
int64_t $tmp2332 = $tmp2330 + $tmp2331;
panda$core$Int64 $tmp2333 = (panda$core$Int64) {$tmp2332};
panda$core$Int64* $tmp2334 = &param0->varCount;
*$tmp2334 = $tmp2333;
// line 647
panda$core$String** $tmp2335 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp2336 = *$tmp2335;
panda$core$String* $tmp2337 = panda$core$String$convert$R$panda$core$String($tmp2336);
panda$core$String* $tmp2338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2337, &$s2339);
panda$core$Int64* $tmp2340 = &param0->varCount;
panda$core$Int64 $tmp2341 = *$tmp2340;
panda$core$Int64$wrapper* $tmp2342;
$tmp2342 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp2342->value = $tmp2341;
panda$core$String* $tmp2343 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2338, ((panda$core$Object*) $tmp2342));
panda$core$String* $tmp2344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2343, &$s2345);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2344));
panda$core$String* $tmp2346 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2346));
*(&local0) = $tmp2344;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2344));
// unreffing REF($67:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2343));
// unreffing REF($66:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2342));
// unreffing REF($65:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2338));
// unreffing REF($62:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2337));
// unreffing REF($61:panda.core.String)
// line 648
panda$collections$IdentityMap** $tmp2347 = &param0->variableNames;
panda$collections$IdentityMap* $tmp2348 = *$tmp2347;
panda$core$String* $tmp2349 = *(&local0);
panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V($tmp2348, ((panda$core$Object*) param1), ((panda$core$Object*) $tmp2349));
goto block4;
block4:;
// line 650
panda$core$String* $tmp2350 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2350));
panda$core$String* $tmp2351 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2351));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp2350;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$FieldDecl* param1) {

// line 654
org$pandalanguage$pandac$Annotations** $tmp2352 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp2353 = *$tmp2352;
panda$core$Bit $tmp2354 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp2353);
bool $tmp2355 = $tmp2354.value;
if ($tmp2355) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp2356 = (panda$core$Int64) {654};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2357, $tmp2356);
abort(); // unreachable
block1:;
// line 655
panda$core$Weak** $tmp2358 = &param1->owner;
panda$core$Weak* $tmp2359 = *$tmp2358;
panda$core$Object* $tmp2360 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2359);
panda$core$String** $tmp2361 = &((org$pandalanguage$pandac$ClassDecl*) $tmp2360)->name;
panda$core$String* $tmp2362 = *$tmp2361;
panda$core$String* $tmp2363 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp2362);
panda$core$String* $tmp2364 = panda$core$String$convert$R$panda$core$String($tmp2363);
panda$core$String* $tmp2365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2364, &$s2366);
panda$core$String** $tmp2367 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp2368 = *$tmp2367;
panda$core$String* $tmp2369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2365, $tmp2368);
panda$core$String* $tmp2370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2369, &$s2371);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2370));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2370));
// unreffing REF($24:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2369));
// unreffing REF($23:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2365));
// unreffing REF($19:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2364));
// unreffing REF($18:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2363));
// unreffing REF($17:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2360);
// unreffing REF($13:panda.core.Weak.T)
return $tmp2370;

}
org$pandalanguage$pandac$CCodeGenerator$OpClass org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$OpClass(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

// line 666
org$pandalanguage$pandac$Type$Kind* $tmp2372 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp2373 = *$tmp2372;
panda$core$Int64 $tmp2374 = $tmp2373.$rawValue;
panda$core$Int64 $tmp2375 = (panda$core$Int64) {2};
panda$core$Bit $tmp2376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2374, $tmp2375);
bool $tmp2377 = $tmp2376.value;
if ($tmp2377) goto block2; else goto block3;
block2:;
// line 668
panda$core$Int64 $tmp2378 = (panda$core$Int64) {0};
org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp2379 = org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64($tmp2378);
return $tmp2379;
block3:;
panda$core$Int64 $tmp2380 = (panda$core$Int64) {3};
panda$core$Bit $tmp2381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2374, $tmp2380);
bool $tmp2382 = $tmp2381.value;
if ($tmp2382) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp2383 = (panda$core$Int64) {9};
panda$core$Bit $tmp2384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2374, $tmp2383);
bool $tmp2385 = $tmp2384.value;
if ($tmp2385) goto block4; else goto block6;
block4:;
// line 671
panda$core$Int64 $tmp2386 = (panda$core$Int64) {1};
org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp2387 = org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64($tmp2386);
return $tmp2387;
block6:;
panda$core$Int64 $tmp2388 = (panda$core$Int64) {10};
panda$core$Bit $tmp2389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2374, $tmp2388);
bool $tmp2390 = $tmp2389.value;
if ($tmp2390) goto block7; else goto block8;
block7:;
// line 674
panda$core$Int64 $tmp2391 = (panda$core$Int64) {2};
org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp2392 = org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64($tmp2391);
return $tmp2392;
block8:;
// line 677
panda$core$Int64 $tmp2393 = (panda$core$Int64) {3};
org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp2394 = org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64($tmp2393);
return $tmp2394;
block1:;
panda$core$Bit $tmp2395 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2396 = $tmp2395.value;
if ($tmp2396) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp2397 = (panda$core$Int64) {665};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2398, $tmp2397, &$s2399);
abort(); // unreachable
block9:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1, panda$core$String* param2, org$pandalanguage$pandac$parser$Token$Kind param3, panda$core$String* param4, panda$io$IndentedOutputStream* param5) {

panda$core$String* local0 = NULL;
panda$core$Bit local1;
panda$core$String* local2 = NULL;
// line 684
*(&local0) = ((panda$core$String*) NULL);
// line 685
panda$core$Bit $tmp2400 = panda$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp2400;
// line 686
panda$core$Int64 $tmp2401 = param3.$rawValue;
panda$core$Int64 $tmp2402 = (panda$core$Int64) {52};
panda$core$Bit $tmp2403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2401, $tmp2402);
bool $tmp2404 = $tmp2403.value;
if ($tmp2404) goto block2; else goto block3;
block2:;
// line 688
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2405));
panda$core$String* $tmp2406 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2406));
*(&local0) = &$s2407;
goto block1;
block3:;
panda$core$Int64 $tmp2408 = (panda$core$Int64) {53};
panda$core$Bit $tmp2409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2401, $tmp2408);
bool $tmp2410 = $tmp2409.value;
if ($tmp2410) goto block4; else goto block5;
block4:;
// line 691
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2411));
panda$core$String* $tmp2412 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2412));
*(&local0) = &$s2413;
goto block1;
block5:;
panda$core$Int64 $tmp2414 = (panda$core$Int64) {54};
panda$core$Bit $tmp2415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2401, $tmp2414);
bool $tmp2416 = $tmp2415.value;
if ($tmp2416) goto block6; else goto block7;
block6:;
// line 694
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2417));
panda$core$String* $tmp2418 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2418));
*(&local0) = &$s2419;
goto block1;
block7:;
panda$core$Int64 $tmp2420 = (panda$core$Int64) {56};
panda$core$Bit $tmp2421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2401, $tmp2420);
bool $tmp2422 = $tmp2421.value;
if ($tmp2422) goto block8; else goto block9;
block8:;
// line 697
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2423));
panda$core$String* $tmp2424 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2424));
*(&local0) = &$s2425;
goto block1;
block9:;
panda$core$Int64 $tmp2426 = (panda$core$Int64) {55};
panda$core$Bit $tmp2427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2401, $tmp2426);
bool $tmp2428 = $tmp2427.value;
if ($tmp2428) goto block10; else goto block11;
block10:;
// line 700
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2429));
panda$core$String* $tmp2430 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2430));
*(&local0) = &$s2431;
goto block1;
block11:;
panda$core$Int64 $tmp2432 = (panda$core$Int64) {57};
panda$core$Bit $tmp2433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2401, $tmp2432);
bool $tmp2434 = $tmp2433.value;
if ($tmp2434) goto block12; else goto block13;
block12:;
// line 703
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2435));
panda$core$String* $tmp2436 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2436));
*(&local0) = &$s2437;
goto block1;
block13:;
panda$core$Int64 $tmp2438 = (panda$core$Int64) {73};
panda$core$Bit $tmp2439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2401, $tmp2438);
bool $tmp2440 = $tmp2439.value;
if ($tmp2440) goto block14; else goto block15;
block14:;
// line 706
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2441));
panda$core$String* $tmp2442 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2442));
*(&local0) = &$s2443;
goto block1;
block15:;
panda$core$Int64 $tmp2444 = (panda$core$Int64) {1};
panda$core$Bit $tmp2445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2401, $tmp2444);
bool $tmp2446 = $tmp2445.value;
if ($tmp2446) goto block16; else goto block17;
block16:;
// line 709
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2447));
panda$core$String* $tmp2448 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2448));
*(&local0) = &$s2449;
goto block1;
block17:;
panda$core$Int64 $tmp2450 = (panda$core$Int64) {68};
panda$core$Bit $tmp2451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2401, $tmp2450);
bool $tmp2452 = $tmp2451.value;
if ($tmp2452) goto block18; else goto block19;
block18:;
// line 712
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2453));
panda$core$String* $tmp2454 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2454));
*(&local0) = &$s2455;
goto block1;
block19:;
panda$core$Int64 $tmp2456 = (panda$core$Int64) {70};
panda$core$Bit $tmp2457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2401, $tmp2456);
bool $tmp2458 = $tmp2457.value;
if ($tmp2458) goto block20; else goto block21;
block20:;
// line 715
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2459));
panda$core$String* $tmp2460 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2460));
*(&local0) = &$s2461;
goto block1;
block21:;
panda$core$Int64 $tmp2462 = (panda$core$Int64) {71};
panda$core$Bit $tmp2463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2401, $tmp2462);
bool $tmp2464 = $tmp2463.value;
if ($tmp2464) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp2465 = (panda$core$Int64) {72};
panda$core$Bit $tmp2466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2401, $tmp2465);
bool $tmp2467 = $tmp2466.value;
if ($tmp2467) goto block22; else goto block24;
block22:;
// line 718
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2468));
panda$core$String* $tmp2469 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2469));
*(&local0) = &$s2470;
goto block1;
block24:;
panda$core$Int64 $tmp2471 = (panda$core$Int64) {59};
panda$core$Bit $tmp2472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2401, $tmp2471);
bool $tmp2473 = $tmp2472.value;
if ($tmp2473) goto block25; else goto block26;
block25:;
// line 721
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2474));
panda$core$String* $tmp2475 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2475));
*(&local0) = &$s2476;
// line 722
panda$core$Bit $tmp2477 = panda$core$Bit$init$builtin_bit(true);
*(&local1) = $tmp2477;
goto block1;
block26:;
panda$core$Int64 $tmp2478 = (panda$core$Int64) {60};
panda$core$Bit $tmp2479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2401, $tmp2478);
bool $tmp2480 = $tmp2479.value;
if ($tmp2480) goto block27; else goto block28;
block27:;
// line 725
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2481));
panda$core$String* $tmp2482 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2482));
*(&local0) = &$s2483;
// line 726
panda$core$Bit $tmp2484 = panda$core$Bit$init$builtin_bit(true);
*(&local1) = $tmp2484;
goto block1;
block28:;
panda$core$Int64 $tmp2485 = (panda$core$Int64) {64};
panda$core$Bit $tmp2486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2401, $tmp2485);
bool $tmp2487 = $tmp2486.value;
if ($tmp2487) goto block29; else goto block30;
block29:;
// line 729
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2488));
panda$core$String* $tmp2489 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2489));
*(&local0) = &$s2490;
// line 730
panda$core$Bit $tmp2491 = panda$core$Bit$init$builtin_bit(true);
*(&local1) = $tmp2491;
goto block1;
block30:;
panda$core$Int64 $tmp2492 = (panda$core$Int64) {63};
panda$core$Bit $tmp2493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2401, $tmp2492);
bool $tmp2494 = $tmp2493.value;
if ($tmp2494) goto block31; else goto block32;
block31:;
// line 733
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2495));
panda$core$String* $tmp2496 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2496));
*(&local0) = &$s2497;
// line 734
panda$core$Bit $tmp2498 = panda$core$Bit$init$builtin_bit(true);
*(&local1) = $tmp2498;
goto block1;
block32:;
panda$core$Int64 $tmp2499 = (panda$core$Int64) {66};
panda$core$Bit $tmp2500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2401, $tmp2499);
bool $tmp2501 = $tmp2500.value;
if ($tmp2501) goto block33; else goto block34;
block33:;
// line 737
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2502));
panda$core$String* $tmp2503 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2503));
*(&local0) = &$s2504;
// line 738
panda$core$Bit $tmp2505 = panda$core$Bit$init$builtin_bit(true);
*(&local1) = $tmp2505;
goto block1;
block34:;
panda$core$Int64 $tmp2506 = (panda$core$Int64) {65};
panda$core$Bit $tmp2507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2401, $tmp2506);
bool $tmp2508 = $tmp2507.value;
if ($tmp2508) goto block35; else goto block36;
block35:;
// line 741
panda$core$Bit $tmp2509 = panda$core$Bit$init$builtin_bit(true);
*(&local1) = $tmp2509;
// line 742
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2510));
panda$core$String* $tmp2511 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2511));
*(&local0) = &$s2512;
goto block1;
block36:;
// line 745
panda$core$Bit $tmp2513 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2514 = $tmp2513.value;
if ($tmp2514) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp2515 = (panda$core$Int64) {745};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2516, $tmp2515);
abort(); // unreachable
block37:;
goto block1;
block1:;
// line 748
panda$core$String* $tmp2517 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2517));
panda$core$String* $tmp2518 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2518));
*(&local2) = $tmp2517;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2517));
// unreffing REF($242:panda.core.String)
// line 749
panda$core$Bit $tmp2519 = *(&local1);
bool $tmp2520 = $tmp2519.value;
if ($tmp2520) goto block39; else goto block41;
block39:;
// line 750
$fn2522 $tmp2521 = ($fn2522) ((panda$io$OutputStream*) param5)->$class->vtable[17];
$tmp2521(((panda$io$OutputStream*) param5), &$s2523);
goto block40;
block41:;
// line 1
// line 753
panda$core$String* $tmp2524 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param1);
panda$core$String* $tmp2525 = panda$core$String$convert$R$panda$core$String($tmp2524);
panda$core$String* $tmp2526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2525, &$s2527);
$fn2529 $tmp2528 = ($fn2529) ((panda$io$OutputStream*) param5)->$class->vtable[17];
$tmp2528(((panda$io$OutputStream*) param5), $tmp2526);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2526));
// unreffing REF($267:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2525));
// unreffing REF($266:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2524));
// unreffing REF($265:panda.core.String)
goto block40;
block40:;
// line 755
panda$core$String* $tmp2530 = *(&local2);
panda$core$String* $tmp2531 = panda$core$String$convert$R$panda$core$String($tmp2530);
panda$core$String* $tmp2532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2531, &$s2533);
panda$core$String* $tmp2534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2532, param2);
panda$core$String* $tmp2535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2534, &$s2536);
panda$core$String* $tmp2537 = *(&local0);
panda$core$String* $tmp2538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2535, $tmp2537);
panda$core$String* $tmp2539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2538, &$s2540);
panda$core$String* $tmp2541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2539, param4);
panda$core$String* $tmp2542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2541, &$s2543);
$fn2545 $tmp2544 = ($fn2545) ((panda$io$OutputStream*) param5)->$class->vtable[19];
$tmp2544(((panda$io$OutputStream*) param5), $tmp2542);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2542));
// unreffing REF($291:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2541));
// unreffing REF($290:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2539));
// unreffing REF($289:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2538));
// unreffing REF($288:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2535));
// unreffing REF($286:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2534));
// unreffing REF($285:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2532));
// unreffing REF($284:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2531));
// unreffing REF($283:panda.core.String)
// line 756
panda$core$String* $tmp2546 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2546));
panda$core$String* $tmp2547 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2547));
// unreffing result
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp2548 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2548));
// unreffing cOp
*(&local0) = ((panda$core$String*) NULL);
return $tmp2546;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1, org$pandalanguage$pandac$MethodDecl* param2, panda$io$IndentedOutputStream* param3) {

org$pandalanguage$pandac$CCodeGenerator$ClassConstant* local0 = NULL;
panda$core$Int64 local1;
panda$collections$ListView* local2 = NULL;
panda$core$Int64 local3;
// line 760
panda$core$Weak** $tmp2549 = &param2->owner;
panda$core$Weak* $tmp2550 = *$tmp2549;
panda$core$Object* $tmp2551 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2550);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2552 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp2551));
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2552));
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2553 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2553));
*(&local0) = $tmp2552;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2552));
// unreffing REF($6:org.pandalanguage.pandac.CCodeGenerator.ClassConstant)
panda$core$Panda$unref$panda$core$Object$Q($tmp2551);
// unreffing REF($4:panda.core.Weak.T)
// line 761
panda$core$Int64 $tmp2554 = (panda$core$Int64) {18446744073709551615};
*(&local1) = $tmp2554;
// line 762
panda$core$Weak** $tmp2555 = &param0->compiler;
panda$core$Weak* $tmp2556 = *$tmp2555;
panda$core$Object* $tmp2557 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2556);
panda$core$Weak** $tmp2558 = &param2->owner;
panda$core$Weak* $tmp2559 = *$tmp2558;
panda$core$Object* $tmp2560 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2559);
panda$collections$ListView* $tmp2561 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp2557), ((org$pandalanguage$pandac$ClassDecl*) $tmp2560));
*(&local2) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2561));
panda$collections$ListView* $tmp2562 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2562));
*(&local2) = $tmp2561;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2561));
// unreffing REF($35:panda.collections.ListView<org.pandalanguage.pandac.MethodDecl>)
panda$core$Panda$unref$panda$core$Object$Q($tmp2560);
// unreffing REF($33:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp2557);
// unreffing REF($27:panda.core.Weak.T)
// line 763
panda$core$Int64 $tmp2563 = (panda$core$Int64) {0};
panda$collections$ListView* $tmp2564 = *(&local2);
ITable* $tmp2565 = ((panda$collections$CollectionView*) $tmp2564)->$class->itable;
while ($tmp2565->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2565 = $tmp2565->next;
}
$fn2567 $tmp2566 = $tmp2565->methods[0];
panda$core$Int64 $tmp2568 = $tmp2566(((panda$collections$CollectionView*) $tmp2564));
panda$core$Bit $tmp2569 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2570 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2563, $tmp2568, $tmp2569);
panda$core$Int64 $tmp2571 = $tmp2570.min;
*(&local3) = $tmp2571;
panda$core$Int64 $tmp2572 = $tmp2570.max;
panda$core$Bit $tmp2573 = $tmp2570.inclusive;
bool $tmp2574 = $tmp2573.value;
panda$core$Int64 $tmp2575 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2576 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2575);
if ($tmp2574) goto block4; else goto block5;
block4:;
int64_t $tmp2577 = $tmp2571.value;
int64_t $tmp2578 = $tmp2572.value;
bool $tmp2579 = $tmp2577 <= $tmp2578;
panda$core$Bit $tmp2580 = (panda$core$Bit) {$tmp2579};
bool $tmp2581 = $tmp2580.value;
if ($tmp2581) goto block1; else goto block2;
block5:;
int64_t $tmp2582 = $tmp2571.value;
int64_t $tmp2583 = $tmp2572.value;
bool $tmp2584 = $tmp2582 < $tmp2583;
panda$core$Bit $tmp2585 = (panda$core$Bit) {$tmp2584};
bool $tmp2586 = $tmp2585.value;
if ($tmp2586) goto block1; else goto block2;
block1:;
// line 764
panda$collections$ListView* $tmp2587 = *(&local2);
panda$core$Int64 $tmp2588 = *(&local3);
ITable* $tmp2589 = $tmp2587->$class->itable;
while ($tmp2589->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp2589 = $tmp2589->next;
}
$fn2591 $tmp2590 = $tmp2589->methods[0];
panda$core$Object* $tmp2592 = $tmp2590($tmp2587, $tmp2588);
bool $tmp2593 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2592) == param2;
panda$core$Bit $tmp2594 = panda$core$Bit$init$builtin_bit($tmp2593);
bool $tmp2595 = $tmp2594.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp2592);
// unreffing REF($85:panda.collections.ListView.T)
if ($tmp2595) goto block6; else goto block7;
block6:;
// line 765
panda$core$Int64 $tmp2596 = *(&local3);
*(&local1) = $tmp2596;
// line 766
goto block2;
block7:;
goto block3;
block3:;
panda$core$Int64 $tmp2597 = *(&local3);
int64_t $tmp2598 = $tmp2572.value;
int64_t $tmp2599 = $tmp2597.value;
int64_t $tmp2600 = $tmp2598 - $tmp2599;
panda$core$Int64 $tmp2601 = (panda$core$Int64) {$tmp2600};
panda$core$UInt64 $tmp2602 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2601);
if ($tmp2574) goto block9; else goto block10;
block9:;
uint64_t $tmp2603 = $tmp2602.value;
uint64_t $tmp2604 = $tmp2576.value;
bool $tmp2605 = $tmp2603 >= $tmp2604;
panda$core$Bit $tmp2606 = (panda$core$Bit) {$tmp2605};
bool $tmp2607 = $tmp2606.value;
if ($tmp2607) goto block8; else goto block2;
block10:;
uint64_t $tmp2608 = $tmp2602.value;
uint64_t $tmp2609 = $tmp2576.value;
bool $tmp2610 = $tmp2608 > $tmp2609;
panda$core$Bit $tmp2611 = (panda$core$Bit) {$tmp2610};
bool $tmp2612 = $tmp2611.value;
if ($tmp2612) goto block8; else goto block2;
block8:;
int64_t $tmp2613 = $tmp2597.value;
int64_t $tmp2614 = $tmp2575.value;
int64_t $tmp2615 = $tmp2613 + $tmp2614;
panda$core$Int64 $tmp2616 = (panda$core$Int64) {$tmp2615};
*(&local3) = $tmp2616;
goto block1;
block2:;
// line 769
panda$core$Int64 $tmp2617 = *(&local1);
panda$core$Int64 $tmp2618 = (panda$core$Int64) {18446744073709551615};
int64_t $tmp2619 = $tmp2617.value;
int64_t $tmp2620 = $tmp2618.value;
bool $tmp2621 = $tmp2619 != $tmp2620;
panda$core$Bit $tmp2622 = (panda$core$Bit) {$tmp2621};
bool $tmp2623 = $tmp2622.value;
if ($tmp2623) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp2624 = (panda$core$Int64) {769};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2625, $tmp2624);
abort(); // unreachable
block11:;
// line 770
panda$core$Weak** $tmp2626 = &param0->compiler;
panda$core$Weak* $tmp2627 = *$tmp2626;
panda$core$Object* $tmp2628 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2627);
org$pandalanguage$pandac$Type* $tmp2629 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp2628), param2);
panda$core$String* $tmp2630 = org$pandalanguage$pandac$CCodeGenerator$cMethodType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$Q$R$panda$core$String(param0, $tmp2629, ((org$pandalanguage$pandac$Type*) NULL));
panda$core$String* $tmp2631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2632, $tmp2630);
panda$core$String* $tmp2633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2631, &$s2634);
panda$core$String* $tmp2635 = panda$core$String$convert$R$panda$core$String(param1);
panda$core$String* $tmp2636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2635, &$s2637);
panda$core$Int64 $tmp2638 = *(&local1);
panda$core$Int64$wrapper* $tmp2639;
$tmp2639 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp2639->value = $tmp2638;
panda$core$String* $tmp2640 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2636, ((panda$core$Object*) $tmp2639));
panda$core$String* $tmp2641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2640, &$s2642);
panda$core$String* $tmp2643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2633, $tmp2641);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2643));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2643));
// unreffing REF($154:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2641));
// unreffing REF($153:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2640));
// unreffing REF($152:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2639));
// unreffing REF($151:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2636));
// unreffing REF($149:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2635));
// unreffing REF($148:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2633));
// unreffing REF($147:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2631));
// unreffing REF($146:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2630));
// unreffing REF($145:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2629));
// unreffing REF($144:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp2628);
// unreffing REF($141:panda.core.Weak.T)
panda$collections$ListView* $tmp2644 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2644));
// unreffing vtable
*(&local2) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2645 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2645));
// unreffing cc
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
return $tmp2643;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1, org$pandalanguage$pandac$MethodDecl* param2, panda$io$IndentedOutputStream* param3) {

org$pandalanguage$pandac$CCodeGenerator$ClassConstant* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$Int64 local2;
panda$collections$ListView* local3 = NULL;
panda$core$Int64 local4;
panda$core$String* local5 = NULL;
panda$core$String* local6 = NULL;
// line 776
panda$core$Weak** $tmp2646 = &param2->owner;
panda$core$Weak* $tmp2647 = *$tmp2646;
panda$core$Object* $tmp2648 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2647);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2649 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp2648));
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2649));
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2650 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2650));
*(&local0) = $tmp2649;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2649));
// unreffing REF($6:org.pandalanguage.pandac.CCodeGenerator.ClassConstant)
panda$core$Panda$unref$panda$core$Object$Q($tmp2648);
// unreffing REF($4:panda.core.Weak.T)
// line 777
panda$core$String* $tmp2651 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2651));
panda$core$String* $tmp2652 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2652));
*(&local1) = $tmp2651;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2651));
// unreffing REF($21:panda.core.String)
// line 778
panda$core$String* $tmp2653 = *(&local1);
panda$core$String* $tmp2654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2655, $tmp2653);
panda$core$String* $tmp2656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2654, &$s2657);
panda$core$String* $tmp2658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2656, param1);
panda$core$String* $tmp2659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2658, &$s2660);
$fn2662 $tmp2661 = ($fn2662) ((panda$io$OutputStream*) param3)->$class->vtable[19];
$tmp2661(((panda$io$OutputStream*) param3), $tmp2659);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2659));
// unreffing REF($38:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2658));
// unreffing REF($37:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2656));
// unreffing REF($36:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2654));
// unreffing REF($35:panda.core.String)
// line 779
panda$core$String* $tmp2663 = *(&local1);
panda$core$String* $tmp2664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2665, $tmp2663);
panda$core$String* $tmp2666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2664, &$s2667);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2668 = *(&local0);
panda$core$String** $tmp2669 = &$tmp2668->name;
panda$core$String* $tmp2670 = *$tmp2669;
panda$core$String* $tmp2671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2666, $tmp2670);
panda$core$String* $tmp2672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2671, &$s2673);
$fn2675 $tmp2674 = ($fn2675) ((panda$io$OutputStream*) param3)->$class->vtable[19];
$tmp2674(((panda$io$OutputStream*) param3), $tmp2672);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2672));
// unreffing REF($62:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2671));
// unreffing REF($61:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2666));
// unreffing REF($57:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2664));
// unreffing REF($56:panda.core.String)
// line 780
panda$core$Int64* $tmp2676 = &param3->level;
panda$core$Int64 $tmp2677 = *$tmp2676;
panda$core$Int64 $tmp2678 = (panda$core$Int64) {1};
int64_t $tmp2679 = $tmp2677.value;
int64_t $tmp2680 = $tmp2678.value;
int64_t $tmp2681 = $tmp2679 + $tmp2680;
panda$core$Int64 $tmp2682 = (panda$core$Int64) {$tmp2681};
panda$core$Int64* $tmp2683 = &param3->level;
*$tmp2683 = $tmp2682;
// line 781
panda$core$String* $tmp2684 = *(&local1);
panda$core$String* $tmp2685 = panda$core$String$convert$R$panda$core$String($tmp2684);
panda$core$String* $tmp2686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2685, &$s2687);
panda$core$String* $tmp2688 = *(&local1);
panda$core$String* $tmp2689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2686, $tmp2688);
panda$core$String* $tmp2690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2689, &$s2691);
$fn2693 $tmp2692 = ($fn2693) ((panda$io$OutputStream*) param3)->$class->vtable[19];
$tmp2692(((panda$io$OutputStream*) param3), $tmp2690);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2690));
// unreffing REF($94:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2689));
// unreffing REF($93:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2686));
// unreffing REF($91:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2685));
// unreffing REF($90:panda.core.String)
// line 782
panda$core$Int64* $tmp2694 = &param3->level;
panda$core$Int64 $tmp2695 = *$tmp2694;
panda$core$Int64 $tmp2696 = (panda$core$Int64) {1};
int64_t $tmp2697 = $tmp2695.value;
int64_t $tmp2698 = $tmp2696.value;
int64_t $tmp2699 = $tmp2697 - $tmp2698;
panda$core$Int64 $tmp2700 = (panda$core$Int64) {$tmp2699};
panda$core$Int64* $tmp2701 = &param3->level;
*$tmp2701 = $tmp2700;
// line 783
$fn2703 $tmp2702 = ($fn2703) ((panda$io$OutputStream*) param3)->$class->vtable[19];
$tmp2702(((panda$io$OutputStream*) param3), &$s2704);
// line 784
panda$core$Int64 $tmp2705 = (panda$core$Int64) {18446744073709551615};
*(&local2) = $tmp2705;
// line 785
panda$core$Weak** $tmp2706 = &param0->compiler;
panda$core$Weak* $tmp2707 = *$tmp2706;
panda$core$Object* $tmp2708 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2707);
panda$core$Weak** $tmp2709 = &param2->owner;
panda$core$Weak* $tmp2710 = *$tmp2709;
panda$core$Object* $tmp2711 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2710);
panda$collections$ListView* $tmp2712 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp2708), ((org$pandalanguage$pandac$ClassDecl*) $tmp2711));
*(&local3) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2712));
panda$collections$ListView* $tmp2713 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2713));
*(&local3) = $tmp2712;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2712));
// unreffing REF($138:panda.collections.ListView<org.pandalanguage.pandac.MethodDecl>)
panda$core$Panda$unref$panda$core$Object$Q($tmp2711);
// unreffing REF($136:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp2708);
// unreffing REF($130:panda.core.Weak.T)
// line 786
panda$core$Int64 $tmp2714 = (panda$core$Int64) {0};
panda$collections$ListView* $tmp2715 = *(&local3);
ITable* $tmp2716 = ((panda$collections$CollectionView*) $tmp2715)->$class->itable;
while ($tmp2716->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2716 = $tmp2716->next;
}
$fn2718 $tmp2717 = $tmp2716->methods[0];
panda$core$Int64 $tmp2719 = $tmp2717(((panda$collections$CollectionView*) $tmp2715));
panda$core$Bit $tmp2720 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2721 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2714, $tmp2719, $tmp2720);
panda$core$Int64 $tmp2722 = $tmp2721.min;
*(&local4) = $tmp2722;
panda$core$Int64 $tmp2723 = $tmp2721.max;
panda$core$Bit $tmp2724 = $tmp2721.inclusive;
bool $tmp2725 = $tmp2724.value;
panda$core$Int64 $tmp2726 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2727 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2726);
if ($tmp2725) goto block4; else goto block5;
block4:;
int64_t $tmp2728 = $tmp2722.value;
int64_t $tmp2729 = $tmp2723.value;
bool $tmp2730 = $tmp2728 <= $tmp2729;
panda$core$Bit $tmp2731 = (panda$core$Bit) {$tmp2730};
bool $tmp2732 = $tmp2731.value;
if ($tmp2732) goto block1; else goto block2;
block5:;
int64_t $tmp2733 = $tmp2722.value;
int64_t $tmp2734 = $tmp2723.value;
bool $tmp2735 = $tmp2733 < $tmp2734;
panda$core$Bit $tmp2736 = (panda$core$Bit) {$tmp2735};
bool $tmp2737 = $tmp2736.value;
if ($tmp2737) goto block1; else goto block2;
block1:;
// line 787
panda$collections$ListView* $tmp2738 = *(&local3);
panda$core$Int64 $tmp2739 = *(&local4);
ITable* $tmp2740 = $tmp2738->$class->itable;
while ($tmp2740->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp2740 = $tmp2740->next;
}
$fn2742 $tmp2741 = $tmp2740->methods[0];
panda$core$Object* $tmp2743 = $tmp2741($tmp2738, $tmp2739);
bool $tmp2744 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2743) == param2;
panda$core$Bit $tmp2745 = panda$core$Bit$init$builtin_bit($tmp2744);
bool $tmp2746 = $tmp2745.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp2743);
// unreffing REF($188:panda.collections.ListView.T)
if ($tmp2746) goto block6; else goto block7;
block6:;
// line 788
panda$core$Int64 $tmp2747 = *(&local4);
*(&local2) = $tmp2747;
// line 789
goto block2;
block7:;
goto block3;
block3:;
panda$core$Int64 $tmp2748 = *(&local4);
int64_t $tmp2749 = $tmp2723.value;
int64_t $tmp2750 = $tmp2748.value;
int64_t $tmp2751 = $tmp2749 - $tmp2750;
panda$core$Int64 $tmp2752 = (panda$core$Int64) {$tmp2751};
panda$core$UInt64 $tmp2753 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2752);
if ($tmp2725) goto block9; else goto block10;
block9:;
uint64_t $tmp2754 = $tmp2753.value;
uint64_t $tmp2755 = $tmp2727.value;
bool $tmp2756 = $tmp2754 >= $tmp2755;
panda$core$Bit $tmp2757 = (panda$core$Bit) {$tmp2756};
bool $tmp2758 = $tmp2757.value;
if ($tmp2758) goto block8; else goto block2;
block10:;
uint64_t $tmp2759 = $tmp2753.value;
uint64_t $tmp2760 = $tmp2727.value;
bool $tmp2761 = $tmp2759 > $tmp2760;
panda$core$Bit $tmp2762 = (panda$core$Bit) {$tmp2761};
bool $tmp2763 = $tmp2762.value;
if ($tmp2763) goto block8; else goto block2;
block8:;
int64_t $tmp2764 = $tmp2748.value;
int64_t $tmp2765 = $tmp2726.value;
int64_t $tmp2766 = $tmp2764 + $tmp2765;
panda$core$Int64 $tmp2767 = (panda$core$Int64) {$tmp2766};
*(&local4) = $tmp2767;
goto block1;
block2:;
// line 792
panda$core$Int64 $tmp2768 = *(&local2);
panda$core$Weak** $tmp2769 = &param0->compiler;
panda$core$Weak* $tmp2770 = *$tmp2769;
panda$core$Object* $tmp2771 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2770);
panda$core$Weak** $tmp2772 = &param0->compiler;
panda$core$Weak* $tmp2773 = *$tmp2772;
panda$core$Object* $tmp2774 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2773);
org$pandalanguage$pandac$Type* $tmp2775 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$ClassDecl* $tmp2776 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp2774), $tmp2775);
panda$collections$ListView* $tmp2777 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp2771), $tmp2776);
ITable* $tmp2778 = ((panda$collections$CollectionView*) $tmp2777)->$class->itable;
while ($tmp2778->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2778 = $tmp2778->next;
}
$fn2780 $tmp2779 = $tmp2778->methods[0];
panda$core$Int64 $tmp2781 = $tmp2779(((panda$collections$CollectionView*) $tmp2777));
int64_t $tmp2782 = $tmp2768.value;
int64_t $tmp2783 = $tmp2781.value;
int64_t $tmp2784 = $tmp2782 - $tmp2783;
panda$core$Int64 $tmp2785 = (panda$core$Int64) {$tmp2784};
*(&local2) = $tmp2785;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2777));
// unreffing REF($245:panda.collections.ListView<org.pandalanguage.pandac.MethodDecl>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2776));
// unreffing REF($243:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2775));
// unreffing REF($242:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp2774);
// unreffing REF($239:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp2771);
// unreffing REF($233:panda.core.Weak.T)
// line 793
panda$core$Int64 $tmp2786 = *(&local2);
panda$core$Int64 $tmp2787 = (panda$core$Int64) {18446744073709551615};
int64_t $tmp2788 = $tmp2786.value;
int64_t $tmp2789 = $tmp2787.value;
bool $tmp2790 = $tmp2788 != $tmp2789;
panda$core$Bit $tmp2791 = (panda$core$Bit) {$tmp2790};
bool $tmp2792 = $tmp2791.value;
if ($tmp2792) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp2793 = (panda$core$Int64) {793};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2794, $tmp2793);
abort(); // unreachable
block11:;
// line 794
panda$core$String* $tmp2795 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local5) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2795));
panda$core$String* $tmp2796 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2796));
*(&local5) = $tmp2795;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2795));
// unreffing REF($282:panda.core.String)
// line 795
panda$core$Weak** $tmp2797 = &param0->compiler;
panda$core$Weak* $tmp2798 = *$tmp2797;
panda$core$Object* $tmp2799 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2798);
org$pandalanguage$pandac$Type* $tmp2800 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp2799), param2);
panda$core$String* $tmp2801 = org$pandalanguage$pandac$CCodeGenerator$cMethodType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$Q$R$panda$core$String(param0, $tmp2800, ((org$pandalanguage$pandac$Type*) NULL));
*(&local6) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2801));
panda$core$String* $tmp2802 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2802));
*(&local6) = $tmp2801;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2801));
// unreffing REF($301:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2800));
// unreffing REF($300:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp2799);
// unreffing REF($297:panda.core.Weak.T)
// line 796
panda$core$String* $tmp2803 = *(&local6);
panda$core$String* $tmp2804 = panda$core$String$convert$R$panda$core$String($tmp2803);
panda$core$String* $tmp2805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2804, &$s2806);
panda$core$String* $tmp2807 = *(&local5);
panda$core$String* $tmp2808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2805, $tmp2807);
panda$core$String* $tmp2809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2808, &$s2810);
panda$core$String* $tmp2811 = *(&local1);
panda$core$String* $tmp2812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2809, $tmp2811);
panda$core$String* $tmp2813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2812, &$s2814);
panda$core$Int64 $tmp2815 = *(&local2);
panda$core$Int64$wrapper* $tmp2816;
$tmp2816 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp2816->value = $tmp2815;
panda$core$String* $tmp2817 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2813, ((panda$core$Object*) $tmp2816));
panda$core$String* $tmp2818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2817, &$s2819);
$fn2821 $tmp2820 = ($fn2821) ((panda$io$OutputStream*) param3)->$class->vtable[19];
$tmp2820(((panda$io$OutputStream*) param3), $tmp2818);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2818));
// unreffing REF($332:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2817));
// unreffing REF($331:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2816));
// unreffing REF($330:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2813));
// unreffing REF($328:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2812));
// unreffing REF($327:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2809));
// unreffing REF($325:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2808));
// unreffing REF($324:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2805));
// unreffing REF($322:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2804));
// unreffing REF($321:panda.core.String)
// line 797
panda$core$String* $tmp2822 = *(&local5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2822));
panda$core$String* $tmp2823 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2823));
// unreffing methodType
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp2824 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2824));
// unreffing result
*(&local5) = ((panda$core$String*) NULL);
panda$collections$ListView* $tmp2825 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2825));
// unreffing vtable
*(&local3) = ((panda$collections$ListView*) NULL);
panda$core$String* $tmp2826 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2826));
// unreffing itable
*(&local1) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2827 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2827));
// unreffing cc
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
return $tmp2822;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1, org$pandalanguage$pandac$MethodDecl* param2, panda$core$Bit param3, panda$io$IndentedOutputStream* param4) {

panda$core$Bit local0;
// line 802
panda$core$Bit $tmp2828 = panda$core$Bit$$NOT$R$panda$core$Bit(param3);
bool $tmp2829 = $tmp2828.value;
if ($tmp2829) goto block3; else goto block4;
block3:;
panda$core$Bit $tmp2830 = org$pandalanguage$pandac$MethodDecl$get_isVirtual$R$panda$core$Bit(param2);
*(&local0) = $tmp2830;
goto block5;
block4:;
*(&local0) = $tmp2828;
goto block5;
block5:;
panda$core$Bit $tmp2831 = *(&local0);
bool $tmp2832 = $tmp2831.value;
if ($tmp2832) goto block1; else goto block6;
block1:;
// line 803
panda$core$Bit $tmp2833 = panda$core$Bit$init$builtin_bit(param1 != NULL);
bool $tmp2834 = $tmp2833.value;
if ($tmp2834) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp2835 = (panda$core$Int64) {803};
panda$core$String* $tmp2836 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param2);
panda$core$String* $tmp2837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2838, $tmp2836);
panda$core$String* $tmp2839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2837, &$s2840);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2841, $tmp2835, $tmp2839);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2839));
// unreffing REF($20:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2837));
// unreffing REF($19:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2836));
// unreffing REF($18:panda.core.String)
abort(); // unreachable
block7:;
// line 804
panda$core$Weak** $tmp2842 = &param2->owner;
panda$core$Weak* $tmp2843 = *$tmp2842;
panda$core$Object* $tmp2844 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2843);
org$pandalanguage$pandac$ClassDecl$Kind* $tmp2845 = &((org$pandalanguage$pandac$ClassDecl*) $tmp2844)->classKind;
org$pandalanguage$pandac$ClassDecl$Kind $tmp2846 = *$tmp2845;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2847;
$tmp2847 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2847->value = $tmp2846;
panda$core$Int64 $tmp2848 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2849 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2848);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2850;
$tmp2850 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2850->value = $tmp2849;
ITable* $tmp2851 = ((panda$core$Equatable*) $tmp2847)->$class->itable;
while ($tmp2851->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2851 = $tmp2851->next;
}
$fn2853 $tmp2852 = $tmp2851->methods[0];
panda$core$Bit $tmp2854 = $tmp2852(((panda$core$Equatable*) $tmp2847), ((panda$core$Equatable*) $tmp2850));
bool $tmp2855 = $tmp2854.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2850)));
// unreffing REF($44:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2847)));
// unreffing REF($40:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
panda$core$Panda$unref$panda$core$Object$Q($tmp2844);
// unreffing REF($36:panda.core.Weak.T)
if ($tmp2855) goto block9; else goto block11;
block9:;
// line 805
panda$core$String* $tmp2856 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2856));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2856));
// unreffing REF($60:panda.core.String)
return $tmp2856;
block11:;
// line 1
// line 808
panda$core$String* $tmp2857 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2857));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2857));
// unreffing REF($70:panda.core.String)
return $tmp2857;
block10:;
goto block2;
block6:;
// line 1
// line 812
panda$core$Weak** $tmp2858 = &param2->owner;
panda$core$Weak* $tmp2859 = *$tmp2858;
panda$core$Object* $tmp2860 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2859);
panda$core$Bit $tmp2861 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp2860));
bool $tmp2862 = $tmp2861.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp2860);
// unreffing REF($83:panda.core.Weak.T)
if ($tmp2862) goto block12; else goto block13;
block12:;
// line 813
org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(param0, param2);
goto block13;
block13:;
// line 815
panda$core$String* $tmp2863 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2863));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2863));
// unreffing REF($95:panda.core.String)
return $tmp2863;
block2:;
panda$core$Bit $tmp2864 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2865 = $tmp2864.value;
if ($tmp2865) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp2866 = (panda$core$Int64) {800};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2867, $tmp2866, &$s2868);
abort(); // unreachable
block14:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1, org$pandalanguage$pandac$Type* param2, org$pandalanguage$pandac$Type* param3, panda$io$IndentedOutputStream* param4) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
// line 820
org$pandalanguage$pandac$Type$Kind* $tmp2869 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp2870 = *$tmp2869;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp2871;
$tmp2871 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp2871->value = $tmp2870;
panda$core$Int64 $tmp2872 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp2873 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp2872);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp2874;
$tmp2874 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp2874->value = $tmp2873;
ITable* $tmp2875 = ((panda$core$Equatable*) $tmp2871)->$class->itable;
while ($tmp2875->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2875 = $tmp2875->next;
}
$fn2877 $tmp2876 = $tmp2875->methods[0];
panda$core$Bit $tmp2878 = $tmp2876(((panda$core$Equatable*) $tmp2871), ((panda$core$Equatable*) $tmp2874));
bool $tmp2879 = $tmp2878.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2874)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2871)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp2879) goto block1; else goto block2;
block1:;
// line 822
panda$core$String* $tmp2880 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2880));
panda$core$String* $tmp2881 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2881));
*(&local0) = $tmp2880;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2880));
// unreffing REF($19:panda.core.String)
// line 823
panda$core$String* $tmp2882 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp2883 = panda$core$String$convert$R$panda$core$String($tmp2882);
panda$core$String* $tmp2884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2883, &$s2885);
panda$core$String* $tmp2886 = *(&local0);
panda$core$String* $tmp2887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2884, $tmp2886);
panda$core$String* $tmp2888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2887, &$s2889);
$fn2891 $tmp2890 = ($fn2891) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2890(((panda$io$OutputStream*) param4), $tmp2888);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2888));
// unreffing REF($37:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2887));
// unreffing REF($36:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2884));
// unreffing REF($34:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2883));
// unreffing REF($33:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2882));
// unreffing REF($32:panda.core.String)
// line 824
panda$core$String* $tmp2892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2893, param1);
panda$core$String* $tmp2894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2892, &$s2895);
$fn2897 $tmp2896 = ($fn2897) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2896(((panda$io$OutputStream*) param4), $tmp2894);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2894));
// unreffing REF($58:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2892));
// unreffing REF($57:panda.core.String)
// line 825
panda$core$Int64* $tmp2898 = &param4->level;
panda$core$Int64 $tmp2899 = *$tmp2898;
panda$core$Int64 $tmp2900 = (panda$core$Int64) {1};
int64_t $tmp2901 = $tmp2899.value;
int64_t $tmp2902 = $tmp2900.value;
int64_t $tmp2903 = $tmp2901 + $tmp2902;
panda$core$Int64 $tmp2904 = (panda$core$Int64) {$tmp2903};
panda$core$Int64* $tmp2905 = &param4->level;
*$tmp2905 = $tmp2904;
// line 826
org$pandalanguage$pandac$FixedArray** $tmp2906 = &param2->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp2907 = *$tmp2906;
panda$core$Int64 $tmp2908 = (panda$core$Int64) {0};
panda$core$Object* $tmp2909 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp2907, $tmp2908);
panda$core$String* $tmp2910 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, ((org$pandalanguage$pandac$Type*) $tmp2909), param4);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2910));
panda$core$String* $tmp2911 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2911));
*(&local1) = $tmp2910;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2910));
// unreffing REF($85:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2909);
// unreffing REF($83:org.pandalanguage.pandac.FixedArray.T)
// line 827
panda$core$String* $tmp2912 = *(&local1);
org$pandalanguage$pandac$FixedArray** $tmp2913 = &param2->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp2914 = *$tmp2913;
panda$core$Int64 $tmp2915 = (panda$core$Int64) {0};
panda$core$Object* $tmp2916 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp2914, $tmp2915);
panda$core$String* $tmp2917 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, $tmp2912, ((org$pandalanguage$pandac$Type*) $tmp2916), param3, param4);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2917));
panda$core$String* $tmp2918 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2918));
*(&local2) = $tmp2917;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2917));
// unreffing REF($108:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2916);
// unreffing REF($106:org.pandalanguage.pandac.FixedArray.T)
// line 828
panda$core$String* $tmp2919 = *(&local0);
panda$core$String* $tmp2920 = panda$core$String$convert$R$panda$core$String($tmp2919);
panda$core$String* $tmp2921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2920, &$s2922);
panda$core$String* $tmp2923 = *(&local2);
panda$core$String* $tmp2924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2921, $tmp2923);
panda$core$String* $tmp2925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2924, &$s2926);
$fn2928 $tmp2927 = ($fn2928) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2927(((panda$io$OutputStream*) param4), $tmp2925);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2925));
// unreffing REF($129:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2924));
// unreffing REF($128:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2921));
// unreffing REF($126:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2920));
// unreffing REF($125:panda.core.String)
// line 829
panda$core$Int64* $tmp2929 = &param4->level;
panda$core$Int64 $tmp2930 = *$tmp2929;
panda$core$Int64 $tmp2931 = (panda$core$Int64) {1};
int64_t $tmp2932 = $tmp2930.value;
int64_t $tmp2933 = $tmp2931.value;
int64_t $tmp2934 = $tmp2932 - $tmp2933;
panda$core$Int64 $tmp2935 = (panda$core$Int64) {$tmp2934};
panda$core$Int64* $tmp2936 = &param4->level;
*$tmp2936 = $tmp2935;
// line 830
$fn2938 $tmp2937 = ($fn2938) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2937(((panda$io$OutputStream*) param4), &$s2939);
// line 831
$fn2941 $tmp2940 = ($fn2941) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2940(((panda$io$OutputStream*) param4), &$s2942);
// line 832
panda$core$Int64* $tmp2943 = &param4->level;
panda$core$Int64 $tmp2944 = *$tmp2943;
panda$core$Int64 $tmp2945 = (panda$core$Int64) {1};
int64_t $tmp2946 = $tmp2944.value;
int64_t $tmp2947 = $tmp2945.value;
int64_t $tmp2948 = $tmp2946 + $tmp2947;
panda$core$Int64 $tmp2949 = (panda$core$Int64) {$tmp2948};
panda$core$Int64* $tmp2950 = &param4->level;
*$tmp2950 = $tmp2949;
// line 833
panda$core$String* $tmp2951 = *(&local0);
panda$core$String* $tmp2952 = panda$core$String$convert$R$panda$core$String($tmp2951);
panda$core$String* $tmp2953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2952, &$s2954);
$fn2956 $tmp2955 = ($fn2956) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2955(((panda$io$OutputStream*) param4), $tmp2953);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2953));
// unreffing REF($176:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2952));
// unreffing REF($175:panda.core.String)
// line 834
panda$core$Int64* $tmp2957 = &param4->level;
panda$core$Int64 $tmp2958 = *$tmp2957;
panda$core$Int64 $tmp2959 = (panda$core$Int64) {1};
int64_t $tmp2960 = $tmp2958.value;
int64_t $tmp2961 = $tmp2959.value;
int64_t $tmp2962 = $tmp2960 - $tmp2961;
panda$core$Int64 $tmp2963 = (panda$core$Int64) {$tmp2962};
panda$core$Int64* $tmp2964 = &param4->level;
*$tmp2964 = $tmp2963;
// line 835
$fn2966 $tmp2965 = ($fn2966) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2965(((panda$io$OutputStream*) param4), &$s2967);
// line 836
panda$core$String* $tmp2968 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2968));
panda$core$String* $tmp2969 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2969));
// unreffing nonNullValue
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp2970 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2970));
// unreffing unwrapped
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp2971 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2971));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp2968;
block2:;
// line 838
panda$core$String* $tmp2972 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2972));
panda$core$String* $tmp2973 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2973));
*(&local3) = $tmp2972;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2972));
// unreffing REF($220:panda.core.String)
// line 839
panda$core$String* $tmp2974 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param2);
panda$core$String* $tmp2975 = panda$core$String$convert$R$panda$core$String($tmp2974);
panda$core$String* $tmp2976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2975, &$s2977);
panda$core$String* $tmp2978 = *(&local3);
panda$core$String* $tmp2979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2976, $tmp2978);
panda$core$String* $tmp2980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2979, &$s2981);
$fn2983 $tmp2982 = ($fn2983) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2982(((panda$io$OutputStream*) param4), $tmp2980);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2980));
// unreffing REF($238:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2979));
// unreffing REF($237:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2976));
// unreffing REF($235:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2975));
// unreffing REF($234:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2974));
// unreffing REF($233:panda.core.String)
// line 840
org$pandalanguage$pandac$Type$Kind* $tmp2984 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp2985 = *$tmp2984;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp2986;
$tmp2986 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp2986->value = $tmp2985;
panda$core$Int64 $tmp2987 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp2988 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp2987);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp2989;
$tmp2989 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp2989->value = $tmp2988;
ITable* $tmp2990 = ((panda$core$Equatable*) $tmp2986)->$class->itable;
while ($tmp2990->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2990 = $tmp2990->next;
}
$fn2992 $tmp2991 = $tmp2990->methods[0];
panda$core$Bit $tmp2993 = $tmp2991(((panda$core$Equatable*) $tmp2986), ((panda$core$Equatable*) $tmp2989));
bool $tmp2994 = $tmp2993.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2989)));
// unreffing REF($263:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2986)));
// unreffing REF($259:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp2994) goto block3; else goto block4;
block3:;
// line 841
panda$core$String* $tmp2995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2996, param1);
panda$core$String* $tmp2997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2995, &$s2998);
$fn3000 $tmp2999 = ($fn3000) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2999(((panda$io$OutputStream*) param4), $tmp2997);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2997));
// unreffing REF($277:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2995));
// unreffing REF($276:panda.core.String)
// line 842
panda$core$Int64* $tmp3001 = &param4->level;
panda$core$Int64 $tmp3002 = *$tmp3001;
panda$core$Int64 $tmp3003 = (panda$core$Int64) {1};
int64_t $tmp3004 = $tmp3002.value;
int64_t $tmp3005 = $tmp3003.value;
int64_t $tmp3006 = $tmp3004 + $tmp3005;
panda$core$Int64 $tmp3007 = (panda$core$Int64) {$tmp3006};
panda$core$Int64* $tmp3008 = &param4->level;
*$tmp3008 = $tmp3007;
goto block4;
block4:;
// line 844
panda$core$String* $tmp3009 = *(&local3);
panda$core$String* $tmp3010 = panda$core$String$convert$R$panda$core$String($tmp3009);
panda$core$String* $tmp3011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3010, &$s3012);
panda$core$String* $tmp3013 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param2);
panda$core$String* $tmp3014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3011, $tmp3013);
panda$core$String* $tmp3015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3014, &$s3016);
panda$core$Int64 $tmp3017 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param2);
panda$core$Int64$wrapper* $tmp3018;
$tmp3018 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3018->value = $tmp3017;
panda$core$String* $tmp3019 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3020, ((panda$core$Object*) $tmp3018));
panda$core$String* $tmp3021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3019, &$s3022);
panda$core$String* $tmp3023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3015, $tmp3021);
panda$core$String** $tmp3024 = &((org$pandalanguage$pandac$Symbol*) param2)->name;
panda$core$String* $tmp3025 = *$tmp3024;
panda$core$String* $tmp3026 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp3025);
panda$core$String* $tmp3027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3028, $tmp3026);
panda$core$String* $tmp3029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3027, &$s3030);
panda$core$String* $tmp3031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3023, $tmp3029);
$fn3033 $tmp3032 = ($fn3033) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp3032(((panda$io$OutputStream*) param4), $tmp3031);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3031));
// unreffing REF($316:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3029));
// unreffing REF($315:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3027));
// unreffing REF($314:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3026));
// unreffing REF($313:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3023));
// unreffing REF($309:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3021));
// unreffing REF($308:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3019));
// unreffing REF($307:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3018));
// unreffing REF($306:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3015));
// unreffing REF($304:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3014));
// unreffing REF($303:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3013));
// unreffing REF($302:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3011));
// unreffing REF($301:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3010));
// unreffing REF($300:panda.core.String)
// line 847
panda$core$String* $tmp3034 = *(&local3);
panda$core$String* $tmp3035 = panda$core$String$convert$R$panda$core$String($tmp3034);
panda$core$String* $tmp3036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3035, &$s3037);
panda$core$String* $tmp3038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3036, param1);
panda$core$String* $tmp3039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3038, &$s3040);
$fn3042 $tmp3041 = ($fn3042) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp3041(((panda$io$OutputStream*) param4), $tmp3039);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3039));
// unreffing REF($364:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3038));
// unreffing REF($363:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3036));
// unreffing REF($362:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3035));
// unreffing REF($361:panda.core.String)
// line 848
org$pandalanguage$pandac$Type$Kind* $tmp3043 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3044 = *$tmp3043;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3045;
$tmp3045 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3045->value = $tmp3044;
panda$core$Int64 $tmp3046 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3047 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3046);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3048;
$tmp3048 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3048->value = $tmp3047;
ITable* $tmp3049 = ((panda$core$Equatable*) $tmp3045)->$class->itable;
while ($tmp3049->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3049 = $tmp3049->next;
}
$fn3051 $tmp3050 = $tmp3049->methods[0];
panda$core$Bit $tmp3052 = $tmp3050(((panda$core$Equatable*) $tmp3045), ((panda$core$Equatable*) $tmp3048));
bool $tmp3053 = $tmp3052.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3048)));
// unreffing REF($386:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3045)));
// unreffing REF($382:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp3053) goto block5; else goto block6;
block5:;
// line 849
panda$core$Int64* $tmp3054 = &param4->level;
panda$core$Int64 $tmp3055 = *$tmp3054;
panda$core$Int64 $tmp3056 = (panda$core$Int64) {1};
int64_t $tmp3057 = $tmp3055.value;
int64_t $tmp3058 = $tmp3056.value;
int64_t $tmp3059 = $tmp3057 - $tmp3058;
panda$core$Int64 $tmp3060 = (panda$core$Int64) {$tmp3059};
panda$core$Int64* $tmp3061 = &param4->level;
*$tmp3061 = $tmp3060;
// line 850
$fn3063 $tmp3062 = ($fn3063) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp3062(((panda$io$OutputStream*) param4), &$s3064);
// line 851
$fn3066 $tmp3065 = ($fn3066) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp3065(((panda$io$OutputStream*) param4), &$s3067);
// line 852
panda$core$Int64* $tmp3068 = &param4->level;
panda$core$Int64 $tmp3069 = *$tmp3068;
panda$core$Int64 $tmp3070 = (panda$core$Int64) {1};
int64_t $tmp3071 = $tmp3069.value;
int64_t $tmp3072 = $tmp3070.value;
int64_t $tmp3073 = $tmp3071 + $tmp3072;
panda$core$Int64 $tmp3074 = (panda$core$Int64) {$tmp3073};
panda$core$Int64* $tmp3075 = &param4->level;
*$tmp3075 = $tmp3074;
// line 853
panda$core$String* $tmp3076 = *(&local3);
panda$core$String* $tmp3077 = panda$core$String$convert$R$panda$core$String($tmp3076);
panda$core$String* $tmp3078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3077, &$s3079);
$fn3081 $tmp3080 = ($fn3081) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp3080(((panda$io$OutputStream*) param4), $tmp3078);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3078));
// unreffing REF($429:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3077));
// unreffing REF($428:panda.core.String)
// line 854
panda$core$Int64* $tmp3082 = &param4->level;
panda$core$Int64 $tmp3083 = *$tmp3082;
panda$core$Int64 $tmp3084 = (panda$core$Int64) {1};
int64_t $tmp3085 = $tmp3083.value;
int64_t $tmp3086 = $tmp3084.value;
int64_t $tmp3087 = $tmp3085 - $tmp3086;
panda$core$Int64 $tmp3088 = (panda$core$Int64) {$tmp3087};
panda$core$Int64* $tmp3089 = &param4->level;
*$tmp3089 = $tmp3088;
// line 855
$fn3091 $tmp3090 = ($fn3091) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp3090(((panda$io$OutputStream*) param4), &$s3092);
goto block6;
block6:;
// line 857
panda$core$String* $tmp3093 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp3094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3095, $tmp3093);
panda$core$String* $tmp3096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3094, &$s3097);
panda$core$String* $tmp3098 = *(&local3);
panda$core$String* $tmp3099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3096, $tmp3098);
panda$core$String* $tmp3100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3099, &$s3101);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3100));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3100));
// unreffing REF($459:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3099));
// unreffing REF($458:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3096));
// unreffing REF($456:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3094));
// unreffing REF($455:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3093));
// unreffing REF($454:panda.core.String)
panda$core$String* $tmp3102 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3102));
// unreffing wrapped
*(&local3) = ((panda$core$String*) NULL);
return $tmp3100;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1, org$pandalanguage$pandac$Type* param2, org$pandalanguage$pandac$Type* param3, panda$io$IndentedOutputStream* param4) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
// line 861
panda$core$String* $tmp3103 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp3104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3105, $tmp3103);
panda$core$String* $tmp3106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3104, &$s3107);
panda$core$String* $tmp3108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3106, param1);
panda$core$String* $tmp3109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3108, &$s3110);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3109));
panda$core$String* $tmp3111 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3111));
*(&local0) = $tmp3109;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3109));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3108));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3106));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3104));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3103));
// unreffing REF($1:panda.core.String)
// line 862
org$pandalanguage$pandac$Type$Kind* $tmp3112 = &param3->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3113 = *$tmp3112;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3114;
$tmp3114 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3114->value = $tmp3113;
panda$core$Int64 $tmp3115 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3116 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3115);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3117;
$tmp3117 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3117->value = $tmp3116;
ITable* $tmp3118 = ((panda$core$Equatable*) $tmp3114)->$class->itable;
while ($tmp3118->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3118 = $tmp3118->next;
}
$fn3120 $tmp3119 = $tmp3118->methods[0];
panda$core$Bit $tmp3121 = $tmp3119(((panda$core$Equatable*) $tmp3114), ((panda$core$Equatable*) $tmp3117));
bool $tmp3122 = $tmp3121.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3117)));
// unreffing REF($35:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3114)));
// unreffing REF($31:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp3122) goto block1; else goto block2;
block1:;
// line 864
org$pandalanguage$pandac$FixedArray** $tmp3123 = &param3->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp3124 = *$tmp3123;
panda$core$Int64 $tmp3125 = (panda$core$Int64) {0};
panda$core$Object* $tmp3126 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp3124, $tmp3125);
panda$core$String* $tmp3127 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, ((org$pandalanguage$pandac$Type*) $tmp3126), param4);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3127));
panda$core$String* $tmp3128 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3128));
*(&local1) = $tmp3127;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3127));
// unreffing REF($54:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp3126);
// unreffing REF($52:org.pandalanguage.pandac.FixedArray.T)
// line 865
panda$core$String* $tmp3129 = *(&local1);
org$pandalanguage$pandac$FixedArray** $tmp3130 = &param3->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp3131 = *$tmp3130;
panda$core$Int64 $tmp3132 = (panda$core$Int64) {0};
panda$core$Object* $tmp3133 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp3131, $tmp3132);
panda$core$String* $tmp3134 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, $tmp3129, ((org$pandalanguage$pandac$Type*) $tmp3133), param3, param4);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3134));
panda$core$String* $tmp3135 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3135));
*(&local2) = $tmp3134;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3134));
// unreffing REF($77:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp3133);
// unreffing REF($75:org.pandalanguage.pandac.FixedArray.T)
// line 866
panda$core$String* $tmp3136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3137, param1);
panda$core$String* $tmp3138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3136, &$s3139);
panda$core$String* $tmp3140 = *(&local2);
panda$core$String* $tmp3141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3138, $tmp3140);
panda$core$String* $tmp3142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3141, &$s3143);
panda$core$String* $tmp3144 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp3145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3142, $tmp3144);
panda$core$String* $tmp3146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3145, &$s3147);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3146));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3146));
// unreffing REF($99:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3145));
// unreffing REF($98:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3144));
// unreffing REF($97:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3142));
// unreffing REF($96:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3141));
// unreffing REF($95:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3138));
// unreffing REF($93:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3136));
// unreffing REF($92:panda.core.String)
panda$core$String* $tmp3148 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3148));
// unreffing nonNullValue
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp3149 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3149));
// unreffing wrapped
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3150 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3150));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3146;
block2:;
// line 868
panda$core$String* $tmp3151 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3151));
panda$core$String* $tmp3152 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3152));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3151;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1, org$pandalanguage$pandac$Type* param2, org$pandalanguage$pandac$Type* param3, panda$io$IndentedOutputStream* param4) {

// line 873
panda$core$String* $tmp3153 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp3154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3155, $tmp3153);
panda$core$String* $tmp3156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3154, &$s3157);
panda$core$String* $tmp3158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3156, param1);
panda$core$String* $tmp3159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3158, &$s3160);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3159));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3159));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3158));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3156));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3154));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3153));
// unreffing REF($1:panda.core.String)
return $tmp3159;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1, org$pandalanguage$pandac$Type* param2, org$pandalanguage$pandac$Type* param3, panda$io$IndentedOutputStream* param4) {

// line 878
panda$core$String* $tmp3161 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp3162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3163, $tmp3161);
panda$core$String* $tmp3164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3162, &$s3165);
panda$core$String* $tmp3166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3164, param1);
panda$core$String* $tmp3167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3166, &$s3168);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3167));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3167));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3166));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3164));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3162));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3161));
// unreffing REF($1:panda.core.String)
return $tmp3167;

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
// line 882
panda$core$Bit $tmp3169 = org$pandalanguage$pandac$Type$get_isBuiltinNumber$R$panda$core$Bit(param3);
bool $tmp3170 = $tmp3169.value;
if ($tmp3170) goto block1; else goto block3;
block1:;
// line 883
panda$core$Bit $tmp3171 = org$pandalanguage$pandac$Type$get_isBuiltinNumber$R$panda$core$Bit(param2);
bool $tmp3172 = $tmp3171.value;
if ($tmp3172) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp3173 = (panda$core$Int64) {883};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3174, $tmp3173);
abort(); // unreachable
block4:;
// line 884
panda$core$String* $tmp3175 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp3176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3177, $tmp3175);
panda$core$String* $tmp3178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3176, &$s3179);
panda$core$String* $tmp3180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3178, param1);
panda$core$String* $tmp3181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3180, &$s3182);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3181));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3181));
// unreffing REF($16:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3180));
// unreffing REF($15:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3178));
// unreffing REF($14:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3176));
// unreffing REF($13:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3175));
// unreffing REF($12:panda.core.String)
return $tmp3181;
block3:;
// line 1
// line 887
panda$core$Weak** $tmp3183 = &param0->compiler;
panda$core$Weak* $tmp3184 = *$tmp3183;
panda$core$Object* $tmp3185 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3184);
org$pandalanguage$pandac$ClassDecl* $tmp3186 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3185), param2);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3186));
org$pandalanguage$pandac$ClassDecl* $tmp3187 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3187));
*(&local0) = $tmp3186;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3186));
// unreffing REF($43:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp3185);
// unreffing REF($40:panda.core.Weak.T)
// line 888
org$pandalanguage$pandac$ClassDecl* $tmp3188 = *(&local0);
panda$core$Bit $tmp3189 = panda$core$Bit$init$builtin_bit($tmp3188 != NULL);
bool $tmp3190 = $tmp3189.value;
if ($tmp3190) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp3191 = (panda$core$Int64) {888};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3192, $tmp3191);
abort(); // unreachable
block6:;
// line 889
panda$core$Weak** $tmp3193 = &param0->compiler;
panda$core$Weak* $tmp3194 = *$tmp3193;
panda$core$Object* $tmp3195 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3194);
org$pandalanguage$pandac$ClassDecl* $tmp3196 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3195), param3);
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3196));
org$pandalanguage$pandac$ClassDecl* $tmp3197 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3197));
*(&local1) = $tmp3196;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3196));
// unreffing REF($73:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp3195);
// unreffing REF($70:panda.core.Weak.T)
// line 890
org$pandalanguage$pandac$ClassDecl* $tmp3198 = *(&local1);
panda$core$Bit $tmp3199 = panda$core$Bit$init$builtin_bit($tmp3198 != NULL);
bool $tmp3200 = $tmp3199.value;
if ($tmp3200) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp3201 = (panda$core$Int64) {890};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3202, $tmp3201);
abort(); // unreachable
block8:;
// line 891
panda$core$Weak** $tmp3203 = &param0->compiler;
panda$core$Weak* $tmp3204 = *$tmp3203;
panda$core$Object* $tmp3205 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3204);
org$pandalanguage$pandac$ClassDecl* $tmp3206 = *(&local0);
panda$core$Bit $tmp3207 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3205), $tmp3206);
bool $tmp3208 = $tmp3207.value;
if ($tmp3208) goto block12; else goto block13;
block12:;
panda$core$Weak** $tmp3209 = &param0->compiler;
panda$core$Weak* $tmp3210 = *$tmp3209;
panda$core$Object* $tmp3211 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3210);
org$pandalanguage$pandac$ClassDecl* $tmp3212 = *(&local1);
panda$core$Bit $tmp3213 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3211), $tmp3212);
panda$core$Bit $tmp3214 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3213);
panda$core$Panda$unref$panda$core$Object$Q($tmp3211);
// unreffing REF($110:panda.core.Weak.T)
*(&local2) = $tmp3214;
goto block14;
block13:;
*(&local2) = $tmp3207;
goto block14;
block14:;
panda$core$Bit $tmp3215 = *(&local2);
bool $tmp3216 = $tmp3215.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp3205);
// unreffing REF($100:panda.core.Weak.T)
if ($tmp3216) goto block10; else goto block15;
block10:;
// line 892
panda$io$IndentedOutputStream** $tmp3217 = &param0->out;
panda$io$IndentedOutputStream* $tmp3218 = *$tmp3217;
panda$core$String* $tmp3219 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, param3, $tmp3218);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3219));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3219));
// unreffing REF($132:panda.core.String)
org$pandalanguage$pandac$ClassDecl* $tmp3220 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3220));
// unreffing targetClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3221 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3221));
// unreffing srcClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3219;
block15:;
// line 894
panda$core$Weak** $tmp3222 = &param0->compiler;
panda$core$Weak* $tmp3223 = *$tmp3222;
panda$core$Object* $tmp3224 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3223);
org$pandalanguage$pandac$ClassDecl* $tmp3225 = *(&local0);
panda$core$Bit $tmp3226 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3224), $tmp3225);
panda$core$Bit $tmp3227 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3226);
bool $tmp3228 = $tmp3227.value;
if ($tmp3228) goto block18; else goto block19;
block18:;
panda$core$Weak** $tmp3229 = &param0->compiler;
panda$core$Weak* $tmp3230 = *$tmp3229;
panda$core$Object* $tmp3231 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3230);
org$pandalanguage$pandac$ClassDecl* $tmp3232 = *(&local1);
panda$core$Bit $tmp3233 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3231), $tmp3232);
panda$core$Panda$unref$panda$core$Object$Q($tmp3231);
// unreffing REF($164:panda.core.Weak.T)
*(&local3) = $tmp3233;
goto block20;
block19:;
*(&local3) = $tmp3227;
goto block20;
block20:;
panda$core$Bit $tmp3234 = *(&local3);
bool $tmp3235 = $tmp3234.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp3224);
// unreffing REF($153:panda.core.Weak.T)
if ($tmp3235) goto block16; else goto block21;
block16:;
// line 895
panda$io$IndentedOutputStream** $tmp3236 = &param0->out;
panda$io$IndentedOutputStream* $tmp3237 = *$tmp3236;
panda$core$String* $tmp3238 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, param3, $tmp3237);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3238));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3238));
// unreffing REF($185:panda.core.String)
org$pandalanguage$pandac$ClassDecl* $tmp3239 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3239));
// unreffing targetClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3240 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3240));
// unreffing srcClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3238;
block21:;
// line 897
panda$core$Weak** $tmp3241 = &param0->compiler;
panda$core$Weak* $tmp3242 = *$tmp3241;
panda$core$Object* $tmp3243 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3242);
org$pandalanguage$pandac$ClassDecl* $tmp3244 = *(&local0);
panda$core$Bit $tmp3245 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3243), $tmp3244);
bool $tmp3246 = $tmp3245.value;
if ($tmp3246) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Type$Kind* $tmp3247 = &param3->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3248 = *$tmp3247;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3249;
$tmp3249 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3249->value = $tmp3248;
panda$core$Int64 $tmp3250 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3251 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3250);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3252;
$tmp3252 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3252->value = $tmp3251;
ITable* $tmp3253 = ((panda$core$Equatable*) $tmp3249)->$class->itable;
while ($tmp3253->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3253 = $tmp3253->next;
}
$fn3255 $tmp3254 = $tmp3253->methods[0];
panda$core$Bit $tmp3256 = $tmp3254(((panda$core$Equatable*) $tmp3249), ((panda$core$Equatable*) $tmp3252));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3252)));
// unreffing REF($219:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3249)));
// unreffing REF($215:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local5) = $tmp3256;
goto block26;
block25:;
*(&local5) = $tmp3245;
goto block26;
block26:;
panda$core$Bit $tmp3257 = *(&local5);
bool $tmp3258 = $tmp3257.value;
if ($tmp3258) goto block27; else goto block28;
block27:;
org$pandalanguage$pandac$FixedArray** $tmp3259 = &param3->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp3260 = *$tmp3259;
panda$core$Int64 $tmp3261 = (panda$core$Int64) {0};
panda$core$Object* $tmp3262 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp3260, $tmp3261);
panda$core$Bit $tmp3263 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3262), param2);
panda$core$Panda$unref$panda$core$Object$Q($tmp3262);
// unreffing REF($240:org.pandalanguage.pandac.FixedArray.T)
*(&local4) = $tmp3263;
goto block29;
block28:;
*(&local4) = $tmp3257;
goto block29;
block29:;
panda$core$Bit $tmp3264 = *(&local4);
bool $tmp3265 = $tmp3264.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp3243);
// unreffing REF($206:panda.core.Weak.T)
if ($tmp3265) goto block22; else goto block30;
block22:;
// line 899
panda$io$IndentedOutputStream** $tmp3266 = &param0->out;
panda$io$IndentedOutputStream* $tmp3267 = *$tmp3266;
panda$core$String* $tmp3268 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, param3, $tmp3267);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3268));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3268));
// unreffing REF($259:panda.core.String)
org$pandalanguage$pandac$ClassDecl* $tmp3269 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3269));
// unreffing targetClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3270 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3270));
// unreffing srcClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3268;
block30:;
// line 901
panda$core$Weak** $tmp3271 = &param0->compiler;
panda$core$Weak* $tmp3272 = *$tmp3271;
panda$core$Object* $tmp3273 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3272);
org$pandalanguage$pandac$ClassDecl* $tmp3274 = *(&local1);
panda$core$Bit $tmp3275 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3273), $tmp3274);
bool $tmp3276 = $tmp3275.value;
if ($tmp3276) goto block33; else goto block34;
block33:;
org$pandalanguage$pandac$Type$Kind* $tmp3277 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3278 = *$tmp3277;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3279;
$tmp3279 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3279->value = $tmp3278;
panda$core$Int64 $tmp3280 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3281 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3280);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3282;
$tmp3282 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3282->value = $tmp3281;
ITable* $tmp3283 = ((panda$core$Equatable*) $tmp3279)->$class->itable;
while ($tmp3283->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3283 = $tmp3283->next;
}
$fn3285 $tmp3284 = $tmp3283->methods[0];
panda$core$Bit $tmp3286 = $tmp3284(((panda$core$Equatable*) $tmp3279), ((panda$core$Equatable*) $tmp3282));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3282)));
// unreffing REF($293:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3279)));
// unreffing REF($289:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local7) = $tmp3286;
goto block35;
block34:;
*(&local7) = $tmp3275;
goto block35;
block35:;
panda$core$Bit $tmp3287 = *(&local7);
bool $tmp3288 = $tmp3287.value;
if ($tmp3288) goto block36; else goto block37;
block36:;
org$pandalanguage$pandac$FixedArray** $tmp3289 = &param2->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp3290 = *$tmp3289;
panda$core$Int64 $tmp3291 = (panda$core$Int64) {0};
panda$core$Object* $tmp3292 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp3290, $tmp3291);
panda$core$Bit $tmp3293 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3292), param3);
panda$core$Panda$unref$panda$core$Object$Q($tmp3292);
// unreffing REF($314:org.pandalanguage.pandac.FixedArray.T)
*(&local6) = $tmp3293;
goto block38;
block37:;
*(&local6) = $tmp3287;
goto block38;
block38:;
panda$core$Bit $tmp3294 = *(&local6);
bool $tmp3295 = $tmp3294.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp3273);
// unreffing REF($280:panda.core.Weak.T)
if ($tmp3295) goto block31; else goto block32;
block31:;
// line 903
panda$io$IndentedOutputStream** $tmp3296 = &param0->out;
panda$io$IndentedOutputStream* $tmp3297 = *$tmp3296;
panda$core$String* $tmp3298 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, param3, $tmp3297);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3298));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3298));
// unreffing REF($333:panda.core.String)
org$pandalanguage$pandac$ClassDecl* $tmp3299 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3299));
// unreffing targetClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3300 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3300));
// unreffing srcClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3298;
block32:;
goto block23;
block23:;
goto block17;
block17:;
goto block11;
block11:;
org$pandalanguage$pandac$ClassDecl* $tmp3301 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3301));
// unreffing targetClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3302 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3302));
// unreffing srcClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block2;
block2:;
// line 906
panda$core$String* $tmp3303 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param2);
*(&local8) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3303));
panda$core$String* $tmp3304 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3304));
*(&local8) = $tmp3303;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3303));
// unreffing REF($365:panda.core.String)
// line 907
panda$core$String* $tmp3305 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
*(&local9) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3305));
panda$core$String* $tmp3306 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3306));
*(&local9) = $tmp3305;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3305));
// unreffing REF($377:panda.core.String)
// line 908
panda$core$String* $tmp3307 = *(&local8);
panda$core$String* $tmp3308 = *(&local9);
panda$core$Bit $tmp3309 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp3307, $tmp3308);
bool $tmp3310 = $tmp3309.value;
if ($tmp3310) goto block39; else goto block40;
block39:;
// line 909
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$core$String* $tmp3311 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3311));
// unreffing dstType
*(&local9) = ((panda$core$String*) NULL);
panda$core$String* $tmp3312 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3312));
// unreffing srcType
*(&local8) = ((panda$core$String*) NULL);
return param1;
block40:;
// line 911
panda$core$String* $tmp3313 = *(&local9);
panda$core$String* $tmp3314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3315, $tmp3313);
panda$core$String* $tmp3316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3314, &$s3317);
panda$core$String* $tmp3318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3316, param1);
panda$core$String* $tmp3319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3318, &$s3320);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3319));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3319));
// unreffing REF($413:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3318));
// unreffing REF($412:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3316));
// unreffing REF($411:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3314));
// unreffing REF($410:panda.core.String)
panda$core$String* $tmp3321 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3321));
// unreffing dstType
*(&local9) = ((panda$core$String*) NULL);
panda$core$String* $tmp3322 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3322));
// unreffing srcType
*(&local8) = ((panda$core$String*) NULL);
return $tmp3319;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIntReference$panda$core$UInt64$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$UInt64 param1) {

// line 915
panda$core$Int64 $tmp3323 = (panda$core$Int64) {9223372036854775807};
panda$core$UInt64 $tmp3324 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3323);
uint64_t $tmp3325 = param1.value;
uint64_t $tmp3326 = $tmp3324.value;
bool $tmp3327 = $tmp3325 > $tmp3326;
panda$core$Bit $tmp3328 = (panda$core$Bit) {$tmp3327};
bool $tmp3329 = $tmp3328.value;
if ($tmp3329) goto block1; else goto block2;
block1:;
// line 916
panda$core$UInt64$wrapper* $tmp3330;
$tmp3330 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
$tmp3330->value = param1;
panda$core$String* $tmp3331 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp3330), &$s3332);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3331));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3331));
// unreffing REF($11:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3330));
// unreffing REF($10:panda.core.Object)
return $tmp3331;
block2:;
// line 918
panda$core$String* $tmp3333 = panda$core$UInt64$convert$R$panda$core$String(param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3333));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3333));
// unreffing REF($22:panda.core.String)
return $tmp3333;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$Type$panda$core$Real64$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1, panda$core$Real64 param2) {

panda$core$String* local0 = NULL;
// line 922
panda$core$String* $tmp3334 = panda$core$Real64$convert$R$panda$core$String(param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3334));
panda$core$String* $tmp3335 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3335));
*(&local0) = $tmp3334;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3334));
// unreffing REF($1:panda.core.String)
// line 923
panda$core$String* $tmp3336 = *(&local0);
panda$core$Bit $tmp3337 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp3336, &$s3338);
bool $tmp3339 = $tmp3337.value;
if ($tmp3339) goto block1; else goto block2;
block1:;
// line 924
panda$core$String* $tmp3340 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3340));
panda$core$String* $tmp3341 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3341));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3340;
block2:;
// line 926
panda$core$String* $tmp3342 = *(&local0);
panda$core$String* $tmp3343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3342, &$s3344);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3343));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3343));
// unreffing REF($29:panda.core.String)
panda$core$String* $tmp3345 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3345));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3343;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$Bit param1, panda$io$IndentedOutputStream* param2) {

// line 930
bool $tmp3346 = param1.value;
if ($tmp3346) goto block1; else goto block2;
block1:;
// line 931
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3347));
return &$s3348;
block2:;
// line 933
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3349));
return &$s3350;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1) {

panda$core$String* local0 = NULL;
panda$core$Char8 local1;
// line 937
panda$core$Int64* $tmp3351 = &param0->varCount;
panda$core$Int64 $tmp3352 = *$tmp3351;
panda$core$Int64 $tmp3353 = (panda$core$Int64) {1};
int64_t $tmp3354 = $tmp3352.value;
int64_t $tmp3355 = $tmp3353.value;
int64_t $tmp3356 = $tmp3354 + $tmp3355;
panda$core$Int64 $tmp3357 = (panda$core$Int64) {$tmp3356};
panda$core$Int64* $tmp3358 = &param0->varCount;
*$tmp3358 = $tmp3357;
// line 938
panda$core$Int64* $tmp3359 = &param0->varCount;
panda$core$Int64 $tmp3360 = *$tmp3359;
panda$core$Int64$wrapper* $tmp3361;
$tmp3361 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3361->value = $tmp3360;
panda$core$String* $tmp3362 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3363, ((panda$core$Object*) $tmp3361));
panda$core$String* $tmp3364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3362, &$s3365);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3364));
panda$core$String* $tmp3366 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3366));
*(&local0) = $tmp3364;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3364));
// unreffing REF($15:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3362));
// unreffing REF($14:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3361));
// unreffing REF($13:panda.core.Object)
// line 939
org$pandalanguage$pandac$Type* $tmp3367 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp3368 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp3367);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3368));
// unreffing REF($34:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3367));
// unreffing REF($33:org.pandalanguage.pandac.Type)
// line 940
panda$io$MemoryOutputStream** $tmp3369 = &param0->strings;
panda$io$MemoryOutputStream* $tmp3370 = *$tmp3369;
panda$core$String* $tmp3371 = *(&local0);
panda$core$String* $tmp3372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3373, $tmp3371);
panda$core$String* $tmp3374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3372, &$s3375);
panda$core$Int64 $tmp3376 = (panda$core$Int64) {18446744073709550617};
panda$core$Int64$wrapper* $tmp3377;
$tmp3377 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3377->value = $tmp3376;
panda$core$String* $tmp3378 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3379, ((panda$core$Object*) $tmp3377));
panda$core$String* $tmp3380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3378, &$s3381);
panda$core$String* $tmp3382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3374, $tmp3380);
panda$core$String* $tmp3383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3382, &$s3384);
$fn3386 $tmp3385 = ($fn3386) ((panda$io$OutputStream*) $tmp3370)->$class->vtable[17];
$tmp3385(((panda$io$OutputStream*) $tmp3370), $tmp3383);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3383));
// unreffing REF($53:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3382));
// unreffing REF($52:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3380));
// unreffing REF($51:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3378));
// unreffing REF($50:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3377));
// unreffing REF($49:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3374));
// unreffing REF($47:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3372));
// unreffing REF($46:panda.core.String)
// line 943
panda$collections$ListView* $tmp3387 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(param1);
ITable* $tmp3388 = ((panda$collections$Iterable*) $tmp3387)->$class->itable;
while ($tmp3388->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp3388 = $tmp3388->next;
}
$fn3390 $tmp3389 = $tmp3388->methods[0];
panda$collections$Iterator* $tmp3391 = $tmp3389(((panda$collections$Iterable*) $tmp3387));
goto block1;
block1:;
ITable* $tmp3392 = $tmp3391->$class->itable;
while ($tmp3392->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp3392 = $tmp3392->next;
}
$fn3394 $tmp3393 = $tmp3392->methods[0];
panda$core$Bit $tmp3395 = $tmp3393($tmp3391);
bool $tmp3396 = $tmp3395.value;
if ($tmp3396) goto block3; else goto block2;
block2:;
ITable* $tmp3397 = $tmp3391->$class->itable;
while ($tmp3397->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp3397 = $tmp3397->next;
}
$fn3399 $tmp3398 = $tmp3397->methods[1];
panda$core$Object* $tmp3400 = $tmp3398($tmp3391);
*(&local1) = ((panda$core$Char8$wrapper*) $tmp3400)->value;
// line 944
panda$io$MemoryOutputStream** $tmp3401 = &param0->strings;
panda$io$MemoryOutputStream* $tmp3402 = *$tmp3401;
panda$core$Char8 $tmp3403 = *(&local1);
panda$core$UInt8 $tmp3404 = panda$core$Char8$convert$R$panda$core$UInt8($tmp3403);
panda$core$UInt8$wrapper* $tmp3405;
$tmp3405 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
$tmp3405->value = $tmp3404;
ITable* $tmp3406 = ((panda$core$Formattable*) $tmp3405)->$class->itable;
while ($tmp3406->$class != (panda$core$Class*) &panda$core$Formattable$class) {
    $tmp3406 = $tmp3406->next;
}
$fn3408 $tmp3407 = $tmp3406->methods[0];
panda$core$String* $tmp3409 = $tmp3407(((panda$core$Formattable*) $tmp3405), &$s3410);
panda$core$String* $tmp3411 = panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String($tmp3409, &$s3412);
panda$core$String* $tmp3413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3414, $tmp3411);
panda$core$String* $tmp3415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3413, &$s3416);
$fn3418 $tmp3417 = ($fn3418) ((panda$io$OutputStream*) $tmp3402)->$class->vtable[17];
$tmp3417(((panda$io$OutputStream*) $tmp3402), $tmp3415);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3415));
// unreffing REF($106:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3413));
// unreffing REF($105:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3411));
// unreffing REF($104:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3409));
// unreffing REF($103:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Formattable*) $tmp3405)));
// unreffing REF($101:panda.core.Formattable)
panda$core$Panda$unref$panda$core$Object$Q($tmp3400);
// unreffing REF($92:panda.collections.Iterator.T)
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3391));
// unreffing REF($82:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3387));
// unreffing REF($78:panda.collections.ListView<panda.core.Char8>)
// line 946
panda$io$MemoryOutputStream** $tmp3419 = &param0->strings;
panda$io$MemoryOutputStream* $tmp3420 = *$tmp3419;
panda$collections$ListView* $tmp3421 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(param1);
ITable* $tmp3422 = ((panda$collections$CollectionView*) $tmp3421)->$class->itable;
while ($tmp3422->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp3422 = $tmp3422->next;
}
$fn3424 $tmp3423 = $tmp3422->methods[0];
panda$core$Int64 $tmp3425 = $tmp3423(((panda$collections$CollectionView*) $tmp3421));
panda$core$Int64$wrapper* $tmp3426;
$tmp3426 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3426->value = $tmp3425;
panda$core$String* $tmp3427 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3428, ((panda$core$Object*) $tmp3426));
panda$core$String* $tmp3429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3427, &$s3430);
ITable* $tmp3431 = ((panda$collections$Key*) param1)->$class->itable;
while ($tmp3431->$class != (panda$core$Class*) &panda$collections$Key$class) {
    $tmp3431 = $tmp3431->next;
}
$fn3433 $tmp3432 = $tmp3431->methods[0];
panda$core$Int64 $tmp3434 = $tmp3432(((panda$collections$Key*) param1));
panda$core$Int64$wrapper* $tmp3435;
$tmp3435 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3435->value = $tmp3434;
panda$core$String* $tmp3436 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3429, ((panda$core$Object*) $tmp3435));
panda$core$String* $tmp3437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3436, &$s3438);
$fn3440 $tmp3439 = ($fn3440) ((panda$io$OutputStream*) $tmp3420)->$class->vtable[19];
$tmp3439(((panda$io$OutputStream*) $tmp3420), $tmp3437);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3437));
// unreffing REF($150:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3436));
// unreffing REF($149:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3435));
// unreffing REF($148:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3429));
// unreffing REF($144:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3427));
// unreffing REF($143:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3426));
// unreffing REF($142:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3421));
// unreffing REF($138:panda.collections.ListView<panda.core.Char8>)
// line 947
panda$core$String* $tmp3441 = *(&local0);
panda$core$String* $tmp3442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3443, $tmp3441);
panda$core$String* $tmp3444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3442, &$s3445);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3444));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3444));
// unreffing REF($177:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3442));
// unreffing REF($176:panda.core.String)
panda$core$String* $tmp3446 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3446));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3444;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
// line 951
org$pandalanguage$pandac$Type$Kind* $tmp3447 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3448 = *$tmp3447;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3449;
$tmp3449 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3449->value = $tmp3448;
panda$core$Int64 $tmp3450 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3451 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3450);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3452;
$tmp3452 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3452->value = $tmp3451;
ITable* $tmp3453 = ((panda$core$Equatable*) $tmp3449)->$class->itable;
while ($tmp3453->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3453 = $tmp3453->next;
}
$fn3455 $tmp3454 = $tmp3453->methods[0];
panda$core$Bit $tmp3456 = $tmp3454(((panda$core$Equatable*) $tmp3449), ((panda$core$Equatable*) $tmp3452));
bool $tmp3457 = $tmp3456.value;
if ($tmp3457) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp3458 = (panda$core$Int64) {951};
panda$core$String* $tmp3459 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3460, ((panda$core$Object*) param1));
panda$core$String* $tmp3461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3459, &$s3462);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3463, $tmp3458, $tmp3461);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3461));
// unreffing REF($15:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3459));
// unreffing REF($14:panda.core.String)
abort(); // unreachable
block1:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3452)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3449)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
// line 952
panda$core$Weak** $tmp3464 = &param0->compiler;
panda$core$Weak* $tmp3465 = *$tmp3464;
panda$core$Object* $tmp3466 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3465);
org$pandalanguage$pandac$FixedArray** $tmp3467 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp3468 = *$tmp3467;
panda$core$Int64 $tmp3469 = (panda$core$Int64) {0};
panda$core$Object* $tmp3470 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp3468, $tmp3469);
org$pandalanguage$pandac$ClassDecl* $tmp3471 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3466), ((org$pandalanguage$pandac$Type*) $tmp3470));
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3471));
org$pandalanguage$pandac$ClassDecl* $tmp3472 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3472));
*(&local0) = $tmp3471;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3471));
// unreffing REF($44:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp3470);
// unreffing REF($42:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp3466);
// unreffing REF($34:panda.core.Weak.T)
// line 953
org$pandalanguage$pandac$ClassDecl* $tmp3473 = *(&local0);
panda$core$Bit $tmp3474 = panda$core$Bit$init$builtin_bit($tmp3473 != NULL);
bool $tmp3475 = $tmp3474.value;
if ($tmp3475) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp3476 = (panda$core$Int64) {953};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3477, $tmp3476);
abort(); // unreachable
block3:;
// line 954
panda$core$Weak** $tmp3478 = &param0->compiler;
panda$core$Weak* $tmp3479 = *$tmp3478;
panda$core$Object* $tmp3480 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3479);
org$pandalanguage$pandac$ClassDecl* $tmp3481 = *(&local0);
panda$core$Bit $tmp3482 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3480), $tmp3481);
bool $tmp3483 = $tmp3482.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp3480);
// unreffing REF($74:panda.core.Weak.T)
if ($tmp3483) goto block5; else goto block7;
block5:;
// line 955
panda$core$String* $tmp3484 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param1);
panda$core$String* $tmp3485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3486, $tmp3484);
panda$core$String* $tmp3487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3485, &$s3488);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3487));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3487));
// unreffing REF($87:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3485));
// unreffing REF($86:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3484));
// unreffing REF($85:panda.core.String)
org$pandalanguage$pandac$ClassDecl* $tmp3489 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3489));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3487;
block7:;
// line 1
// line 958
panda$core$String* $tmp3490 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param1);
panda$core$String* $tmp3491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3492, $tmp3490);
panda$core$String* $tmp3493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3491, &$s3494);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3493));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3493));
// unreffing REF($109:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3491));
// unreffing REF($108:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3490));
// unreffing REF($107:panda.core.String)
org$pandalanguage$pandac$ClassDecl* $tmp3495 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3495));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3493;
block6:;
panda$core$Bit $tmp3496 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3497 = $tmp3496.value;
if ($tmp3497) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp3498 = (panda$core$Int64) {950};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3499, $tmp3498, &$s3500);
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
// line 963
panda$core$Int64* $tmp3501 = &param1->$rawValue;
panda$core$Int64 $tmp3502 = *$tmp3501;
panda$core$Int64 $tmp3503 = (panda$core$Int64) {0};
panda$core$Bit $tmp3504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3502, $tmp3503);
bool $tmp3505 = $tmp3504.value;
if ($tmp3505) goto block2; else goto block3;
block2:;
panda$core$Bit* $tmp3506 = (panda$core$Bit*) (param1->$data + 0);
panda$core$Bit $tmp3507 = *$tmp3506;
*(&local0) = $tmp3507;
// line 965
panda$core$Bit $tmp3508 = *(&local0);
panda$core$String* $tmp3509 = panda$core$Bit$convert$R$panda$core$String($tmp3508);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3509));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3509));
// unreffing REF($12:panda.core.String)
return $tmp3509;
block3:;
panda$core$Int64 $tmp3510 = (panda$core$Int64) {1};
panda$core$Bit $tmp3511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3502, $tmp3510);
bool $tmp3512 = $tmp3511.value;
if ($tmp3512) goto block4; else goto block5;
block4:;
panda$core$UInt64* $tmp3513 = (panda$core$UInt64*) (param1->$data + 0);
panda$core$UInt64 $tmp3514 = *$tmp3513;
*(&local1) = $tmp3514;
org$pandalanguage$pandac$Type** $tmp3515 = (org$pandalanguage$pandac$Type**) (param1->$data + 8);
org$pandalanguage$pandac$Type* $tmp3516 = *$tmp3515;
// line 968
panda$core$UInt64 $tmp3517 = *(&local1);
panda$core$String* $tmp3518 = panda$core$UInt64$convert$R$panda$core$String($tmp3517);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3518));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3518));
// unreffing REF($30:panda.core.String)
return $tmp3518;
block5:;
panda$core$Int64 $tmp3519 = (panda$core$Int64) {2};
panda$core$Bit $tmp3520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3502, $tmp3519);
bool $tmp3521 = $tmp3520.value;
if ($tmp3521) goto block6; else goto block7;
block6:;
panda$core$Int64* $tmp3522 = (panda$core$Int64*) (param1->$data + 0);
panda$core$Int64 $tmp3523 = *$tmp3522;
*(&local2) = $tmp3523;
org$pandalanguage$pandac$Type** $tmp3524 = (org$pandalanguage$pandac$Type**) (param1->$data + 8);
org$pandalanguage$pandac$Type* $tmp3525 = *$tmp3524;
// line 971
panda$core$Int64 $tmp3526 = *(&local2);
panda$core$Int64$wrapper* $tmp3527;
$tmp3527 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3527->value = $tmp3526;
panda$core$String* $tmp3528 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3529, ((panda$core$Object*) $tmp3527));
panda$core$String* $tmp3530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3528, &$s3531);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3530));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3530));
// unreffing REF($50:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3528));
// unreffing REF($49:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3527));
// unreffing REF($48:panda.core.Object)
return $tmp3530;
block7:;
panda$core$Int64 $tmp3532 = (panda$core$Int64) {3};
panda$core$Bit $tmp3533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3502, $tmp3532);
bool $tmp3534 = $tmp3533.value;
if ($tmp3534) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$MethodDecl** $tmp3535 = (org$pandalanguage$pandac$MethodDecl**) (param1->$data + 0);
org$pandalanguage$pandac$MethodDecl* $tmp3536 = *$tmp3535;
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3536));
org$pandalanguage$pandac$MethodDecl* $tmp3537 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3537));
*(&local3) = $tmp3536;
org$pandalanguage$pandac$Type** $tmp3538 = (org$pandalanguage$pandac$Type**) (param1->$data + 8);
org$pandalanguage$pandac$Type* $tmp3539 = *$tmp3538;
// line 974
org$pandalanguage$pandac$MethodDecl* $tmp3540 = *(&local3);
panda$core$Weak** $tmp3541 = &$tmp3540->owner;
panda$core$Weak* $tmp3542 = *$tmp3541;
panda$core$Object* $tmp3543 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3542);
panda$core$Bit* $tmp3544 = &((org$pandalanguage$pandac$ClassDecl*) $tmp3543)->external;
panda$core$Bit $tmp3545 = *$tmp3544;
bool $tmp3546 = $tmp3545.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp3543);
// unreffing REF($83:panda.core.Weak.T)
if ($tmp3546) goto block10; else goto block11;
block10:;
// line 975
org$pandalanguage$pandac$MethodDecl* $tmp3547 = *(&local3);
org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(param0, $tmp3547);
goto block11;
block11:;
// line 977
org$pandalanguage$pandac$MethodDecl* $tmp3548 = *(&local3);
panda$core$String* $tmp3549 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, $tmp3548);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3549));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3549));
// unreffing REF($98:panda.core.String)
org$pandalanguage$pandac$MethodDecl* $tmp3550 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3550));
// unreffing m
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
return $tmp3549;
block9:;
panda$core$Int64 $tmp3551 = (panda$core$Int64) {4};
panda$core$Bit $tmp3552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3502, $tmp3551);
bool $tmp3553 = $tmp3552.value;
if ($tmp3553) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Type** $tmp3554 = (org$pandalanguage$pandac$Type**) (param1->$data + 0);
org$pandalanguage$pandac$Type* $tmp3555 = *$tmp3554;
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3555));
org$pandalanguage$pandac$Type* $tmp3556 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3556));
*(&local4) = $tmp3555;
// line 980
org$pandalanguage$pandac$Type* $tmp3557 = *(&local4);
panda$core$String* $tmp3558 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp3557);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3558));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3558));
// unreffing REF($125:panda.core.String)
org$pandalanguage$pandac$Type* $tmp3559 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3559));
// unreffing type
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp3558;
block13:;
panda$core$Int64 $tmp3560 = (panda$core$Int64) {5};
panda$core$Bit $tmp3561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3502, $tmp3560);
bool $tmp3562 = $tmp3561.value;
if ($tmp3562) goto block14; else goto block15;
block14:;
panda$core$Int64* $tmp3563 = (panda$core$Int64*) (param1->$data + 0);
panda$core$Int64 $tmp3564 = *$tmp3563;
*(&local5) = $tmp3564;
org$pandalanguage$pandac$Type** $tmp3565 = (org$pandalanguage$pandac$Type**) (param1->$data + 8);
org$pandalanguage$pandac$Type* $tmp3566 = *$tmp3565;
// line 983
panda$core$Int64 $tmp3567 = *(&local5);
panda$core$Int64$wrapper* $tmp3568;
$tmp3568 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3568->value = $tmp3567;
panda$core$String* $tmp3569 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3570, ((panda$core$Object*) $tmp3568));
panda$core$String* $tmp3571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3569, &$s3572);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3571));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3571));
// unreffing REF($150:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3569));
// unreffing REF($149:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3568));
// unreffing REF($148:panda.core.Object)
return $tmp3571;
block15:;
panda$core$Int64 $tmp3573 = (panda$core$Int64) {6};
panda$core$Bit $tmp3574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3502, $tmp3573);
bool $tmp3575 = $tmp3574.value;
if ($tmp3575) goto block16; else goto block17;
block16:;
panda$core$Real64* $tmp3576 = (panda$core$Real64*) (param1->$data + 0);
panda$core$Real64 $tmp3577 = *$tmp3576;
*(&local6) = $tmp3577;
org$pandalanguage$pandac$Type** $tmp3578 = (org$pandalanguage$pandac$Type**) (param1->$data + 8);
org$pandalanguage$pandac$Type* $tmp3579 = *$tmp3578;
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3579));
org$pandalanguage$pandac$Type* $tmp3580 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3580));
*(&local7) = $tmp3579;
// line 986
org$pandalanguage$pandac$Type* $tmp3581 = *(&local7);
panda$core$Real64 $tmp3582 = *(&local6);
panda$core$String* $tmp3583 = org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$Type$panda$core$Real64$R$panda$core$String(param0, $tmp3581, $tmp3582);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3583));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3583));
// unreffing REF($182:panda.core.String)
org$pandalanguage$pandac$Type* $tmp3584 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3584));
// unreffing type
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp3583;
block17:;
panda$core$Int64 $tmp3585 = (panda$core$Int64) {7};
panda$core$Bit $tmp3586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3502, $tmp3585);
bool $tmp3587 = $tmp3586.value;
if ($tmp3587) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$IR$Statement$ID* $tmp3588 = (org$pandalanguage$pandac$IR$Statement$ID*) (param1->$data + 0);
org$pandalanguage$pandac$IR$Statement$ID $tmp3589 = *$tmp3588;
*(&local8) = $tmp3589;
org$pandalanguage$pandac$Type** $tmp3590 = (org$pandalanguage$pandac$Type**) (param1->$data + 8);
org$pandalanguage$pandac$Type* $tmp3591 = *$tmp3590;
// line 989
panda$collections$HashMap** $tmp3592 = &param0->refs;
panda$collections$HashMap* $tmp3593 = *$tmp3592;
org$pandalanguage$pandac$IR$Statement$ID $tmp3594 = *(&local8);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp3595;
$tmp3595 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp3595->value = $tmp3594;
panda$core$Object* $tmp3596 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp3593, ((panda$collections$Key*) $tmp3595));
panda$core$Bit $tmp3597 = panda$core$Bit$init$builtin_bit(((panda$core$String*) $tmp3596) != NULL);
bool $tmp3598 = $tmp3597.value;
if ($tmp3598) goto block20; else goto block21;
block21:;
panda$core$Int64 $tmp3599 = (panda$core$Int64) {989};
org$pandalanguage$pandac$IR$Statement$ID $tmp3600 = *(&local8);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp3601;
$tmp3601 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp3601->value = $tmp3600;
panda$core$String* $tmp3602 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3603, ((panda$core$Object*) $tmp3601));
panda$core$String* $tmp3604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3602, &$s3605);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3606, $tmp3599, $tmp3604);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3604));
// unreffing REF($219:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3602));
// unreffing REF($218:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3601));
// unreffing REF($217:panda.core.Object)
abort(); // unreachable
block20:;
panda$core$Panda$unref$panda$core$Object$Q($tmp3596);
// unreffing REF($209:panda.collections.HashMap.V?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp3595)));
// unreffing REF($208:panda.collections.HashMap.K)
// line 990
panda$collections$HashMap** $tmp3607 = &param0->refs;
panda$collections$HashMap* $tmp3608 = *$tmp3607;
org$pandalanguage$pandac$IR$Statement$ID $tmp3609 = *(&local8);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp3610;
$tmp3610 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp3610->value = $tmp3609;
panda$core$Object* $tmp3611 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp3608, ((panda$collections$Key*) $tmp3610));
panda$core$Bit $tmp3612 = panda$core$Bit$init$builtin_bit(((panda$core$String*) $tmp3611) == NULL);
bool $tmp3613 = $tmp3612.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp3611);
// unreffing REF($243:panda.collections.HashMap.V?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp3610)));
// unreffing REF($242:panda.collections.HashMap.K)
if ($tmp3613) goto block22; else goto block23;
block22:;
// line 991
org$pandalanguage$pandac$IR$Statement$ID $tmp3614 = *(&local8);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp3615;
$tmp3615 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp3615->value = $tmp3614;
panda$core$String* $tmp3616 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3617, ((panda$core$Object*) $tmp3615));
panda$core$String* $tmp3618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3616, &$s3619);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3618));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3618));
// unreffing REF($259:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3616));
// unreffing REF($258:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3615));
// unreffing REF($257:panda.core.Object)
return $tmp3618;
block23:;
// line 993
panda$collections$HashMap** $tmp3620 = &param0->refs;
panda$collections$HashMap* $tmp3621 = *$tmp3620;
org$pandalanguage$pandac$IR$Statement$ID $tmp3622 = *(&local8);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp3623;
$tmp3623 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp3623->value = $tmp3622;
panda$core$Object* $tmp3624 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp3621, ((panda$collections$Key*) $tmp3623));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp3624)));
panda$core$Panda$unref$panda$core$Object$Q($tmp3624);
// unreffing REF($278:panda.collections.HashMap.V?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp3623)));
// unreffing REF($277:panda.collections.HashMap.K)
return ((panda$core$String*) $tmp3624);
block19:;
panda$core$Int64 $tmp3625 = (panda$core$Int64) {8};
panda$core$Bit $tmp3626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3502, $tmp3625);
bool $tmp3627 = $tmp3626.value;
if ($tmp3627) goto block24; else goto block25;
block24:;
panda$core$String** $tmp3628 = (panda$core$String**) (param1->$data + 0);
panda$core$String* $tmp3629 = *$tmp3628;
*(&local9) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3629));
panda$core$String* $tmp3630 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3630));
*(&local9) = $tmp3629;
// line 996
panda$core$String* $tmp3631 = *(&local9);
panda$core$String* $tmp3632 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(param0, $tmp3631);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3632));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3632));
// unreffing REF($305:panda.core.String)
panda$core$String* $tmp3633 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3633));
// unreffing s
*(&local9) = ((panda$core$String*) NULL);
return $tmp3632;
block25:;
// line 999
panda$core$Bit $tmp3634 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3635 = $tmp3634.value;
if ($tmp3635) goto block26; else goto block27;
block27:;
panda$core$Int64 $tmp3636 = (panda$core$Int64) {999};
panda$core$String* $tmp3637 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3638, ((panda$core$Object*) param1));
panda$core$String* $tmp3639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3637, &$s3640);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3641, $tmp3636, $tmp3639);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3639));
// unreffing REF($324:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3637));
// unreffing REF($323:panda.core.String)
abort(); // unreachable
block26:;
goto block1;
block1:;
panda$core$Bit $tmp3642 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3643 = $tmp3642.value;
if ($tmp3643) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp3644 = (panda$core$Int64) {962};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3645, $tmp3644, &$s3646);
abort(); // unreachable
block28:;
abort(); // unreachable

}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldOffset$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ChoiceCase* param1, panda$core$Int64 param2) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 1005
panda$core$Int64 $tmp3647 = (panda$core$Int64) {0};
*(&local0) = $tmp3647;
// line 1006
panda$core$Int64 $tmp3648 = (panda$core$Int64) {0};
panda$core$Bit $tmp3649 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp3650 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp3648, param2, $tmp3649);
panda$core$Int64 $tmp3651 = $tmp3650.min;
*(&local1) = $tmp3651;
panda$core$Int64 $tmp3652 = $tmp3650.max;
panda$core$Bit $tmp3653 = $tmp3650.inclusive;
bool $tmp3654 = $tmp3653.value;
panda$core$Int64 $tmp3655 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp3656 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3655);
if ($tmp3654) goto block4; else goto block5;
block4:;
int64_t $tmp3657 = $tmp3651.value;
int64_t $tmp3658 = $tmp3652.value;
bool $tmp3659 = $tmp3657 <= $tmp3658;
panda$core$Bit $tmp3660 = (panda$core$Bit) {$tmp3659};
bool $tmp3661 = $tmp3660.value;
if ($tmp3661) goto block1; else goto block2;
block5:;
int64_t $tmp3662 = $tmp3651.value;
int64_t $tmp3663 = $tmp3652.value;
bool $tmp3664 = $tmp3662 < $tmp3663;
panda$core$Bit $tmp3665 = (panda$core$Bit) {$tmp3664};
bool $tmp3666 = $tmp3665.value;
if ($tmp3666) goto block1; else goto block2;
block1:;
// line 1008
panda$core$Int64 $tmp3667 = *(&local0);
panda$collections$Array** $tmp3668 = &param1->fields;
panda$collections$Array* $tmp3669 = *$tmp3668;
panda$core$Int64 $tmp3670 = *(&local1);
panda$core$Object* $tmp3671 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp3669, $tmp3670);
panda$core$Int64 $tmp3672 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, ((org$pandalanguage$pandac$Type*) $tmp3671));
int64_t $tmp3673 = $tmp3667.value;
int64_t $tmp3674 = $tmp3672.value;
int64_t $tmp3675 = $tmp3673 + $tmp3674;
panda$core$Int64 $tmp3676 = (panda$core$Int64) {$tmp3675};
*(&local0) = $tmp3676;
panda$core$Panda$unref$panda$core$Object$Q($tmp3671);
// unreffing REF($33:panda.collections.Array.T)
goto block3;
block3:;
panda$core$Int64 $tmp3677 = *(&local1);
int64_t $tmp3678 = $tmp3652.value;
int64_t $tmp3679 = $tmp3677.value;
int64_t $tmp3680 = $tmp3678 - $tmp3679;
panda$core$Int64 $tmp3681 = (panda$core$Int64) {$tmp3680};
panda$core$UInt64 $tmp3682 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3681);
if ($tmp3654) goto block7; else goto block8;
block7:;
uint64_t $tmp3683 = $tmp3682.value;
uint64_t $tmp3684 = $tmp3656.value;
bool $tmp3685 = $tmp3683 >= $tmp3684;
panda$core$Bit $tmp3686 = (panda$core$Bit) {$tmp3685};
bool $tmp3687 = $tmp3686.value;
if ($tmp3687) goto block6; else goto block2;
block8:;
uint64_t $tmp3688 = $tmp3682.value;
uint64_t $tmp3689 = $tmp3656.value;
bool $tmp3690 = $tmp3688 > $tmp3689;
panda$core$Bit $tmp3691 = (panda$core$Bit) {$tmp3690};
bool $tmp3692 = $tmp3691.value;
if ($tmp3692) goto block6; else goto block2;
block6:;
int64_t $tmp3693 = $tmp3677.value;
int64_t $tmp3694 = $tmp3655.value;
int64_t $tmp3695 = $tmp3693 + $tmp3694;
panda$core$Int64 $tmp3696 = (panda$core$Int64) {$tmp3695};
*(&local1) = $tmp3696;
goto block1;
block2:;
// line 1010
panda$core$Int64 $tmp3697 = *(&local0);
return $tmp3697;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$String* local0 = NULL;
panda$core$Bit local1;
// line 1014
panda$core$Weak** $tmp3698 = &param1->owner;
panda$core$Weak* $tmp3699 = *$tmp3698;
panda$core$Object* $tmp3700 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3699);
org$pandalanguage$pandac$Type** $tmp3701 = &((org$pandalanguage$pandac$ClassDecl*) $tmp3700)->type;
org$pandalanguage$pandac$Type* $tmp3702 = *$tmp3701;
panda$core$String* $tmp3703 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp3702);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3703));
panda$core$String* $tmp3704 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3704));
*(&local0) = $tmp3703;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3703));
// unreffing REF($8:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp3700);
// unreffing REF($4:panda.core.Weak.T)
// line 1015
org$pandalanguage$pandac$MethodDecl$Kind* $tmp3705 = &param1->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp3706 = *$tmp3705;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp3707;
$tmp3707 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp3707->value = $tmp3706;
panda$core$Int64 $tmp3708 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp3709 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp3708);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp3710;
$tmp3710 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp3710->value = $tmp3709;
ITable* $tmp3711 = ((panda$core$Equatable*) $tmp3707)->$class->itable;
while ($tmp3711->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3711 = $tmp3711->next;
}
$fn3713 $tmp3712 = $tmp3711->methods[0];
panda$core$Bit $tmp3714 = $tmp3712(((panda$core$Equatable*) $tmp3707), ((panda$core$Equatable*) $tmp3710));
bool $tmp3715 = $tmp3714.value;
if ($tmp3715) goto block3; else goto block4;
block3:;
panda$core$String* $tmp3716 = *(&local0);
panda$core$Bit $tmp3717 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp3716, &$s3718);
panda$core$Bit $tmp3719 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3717);
*(&local1) = $tmp3719;
goto block5;
block4:;
*(&local1) = $tmp3714;
goto block5;
block5:;
panda$core$Bit $tmp3720 = *(&local1);
bool $tmp3721 = $tmp3720.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3710)));
// unreffing REF($29:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3707)));
// unreffing REF($25:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp3721) goto block1; else goto block2;
block1:;
// line 1016
panda$core$String* $tmp3722 = *(&local0);
panda$core$String* $tmp3723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3722, &$s3724);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3723));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3723));
// unreffing REF($52:panda.core.String)
panda$core$String* $tmp3725 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3725));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3723;
block2:;
// line 1018
panda$core$String* $tmp3726 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3726));
panda$core$String* $tmp3727 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3727));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3726;

}
void org$pandalanguage$pandac$CCodeGenerator$writeIsNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$ClassDecl* local1 = NULL;
panda$core$String* local2 = NULL;
// line 1022
panda$core$String* $tmp3728 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3728));
panda$core$String* $tmp3729 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3729));
*(&local0) = $tmp3728;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3728));
// unreffing REF($1:panda.core.String)
// line 1023
panda$core$Weak** $tmp3730 = &param0->compiler;
panda$core$Weak* $tmp3731 = *$tmp3730;
panda$core$Object* $tmp3732 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3731);
$fn3734 $tmp3733 = ($fn3734) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3735 = $tmp3733(param2);
org$pandalanguage$pandac$ClassDecl* $tmp3736 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3732), $tmp3735);
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3736));
org$pandalanguage$pandac$ClassDecl* $tmp3737 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3737));
*(&local1) = $tmp3736;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3736));
// unreffing REF($21:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3735));
// unreffing REF($20:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp3732);
// unreffing REF($16:panda.core.Weak.T)
// line 1024
org$pandalanguage$pandac$ClassDecl* $tmp3738 = *(&local1);
panda$core$Bit $tmp3739 = panda$core$Bit$init$builtin_bit($tmp3738 != NULL);
bool $tmp3740 = $tmp3739.value;
if ($tmp3740) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp3741 = (panda$core$Int64) {1024};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3742, $tmp3741);
abort(); // unreachable
block1:;
// line 1025
*(&local2) = ((panda$core$String*) NULL);
// line 1026
panda$core$Weak** $tmp3743 = &param0->compiler;
panda$core$Weak* $tmp3744 = *$tmp3743;
panda$core$Object* $tmp3745 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3744);
org$pandalanguage$pandac$ClassDecl* $tmp3746 = *(&local1);
panda$core$Bit $tmp3747 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3745), $tmp3746);
bool $tmp3748 = $tmp3747.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp3745);
// unreffing REF($53:panda.core.Weak.T)
if ($tmp3748) goto block3; else goto block5;
block3:;
// line 1027
$fn3750 $tmp3749 = ($fn3750) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3751 = $tmp3749(param2);
org$pandalanguage$pandac$Type$Kind* $tmp3752 = &$tmp3751->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3753 = *$tmp3752;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3754;
$tmp3754 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3754->value = $tmp3753;
panda$core$Int64 $tmp3755 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3756 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3755);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3757;
$tmp3757 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3757->value = $tmp3756;
ITable* $tmp3758 = ((panda$core$Equatable*) $tmp3754)->$class->itable;
while ($tmp3758->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3758 = $tmp3758->next;
}
$fn3760 $tmp3759 = $tmp3758->methods[1];
panda$core$Bit $tmp3761 = $tmp3759(((panda$core$Equatable*) $tmp3754), ((panda$core$Equatable*) $tmp3757));
bool $tmp3762 = $tmp3761.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3757)));
// unreffing REF($72:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3754)));
// unreffing REF($68:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3751));
// unreffing REF($65:org.pandalanguage.pandac.Type)
if ($tmp3762) goto block6; else goto block8;
block6:;
// line 1028
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3763));
panda$core$String* $tmp3764 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3764));
*(&local2) = &$s3765;
goto block7;
block8:;
// line 1
// line 1031
panda$core$String* $tmp3766 = *(&local0);
panda$core$String* $tmp3767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3768, $tmp3766);
panda$core$String* $tmp3769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3767, &$s3770);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3769));
panda$core$String* $tmp3771 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3771));
*(&local2) = $tmp3769;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3769));
// unreffing REF($98:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3767));
// unreffing REF($97:panda.core.String)
goto block7;
block7:;
goto block4;
block5:;
// line 1
// line 1035
panda$core$String* $tmp3772 = *(&local0);
panda$core$String* $tmp3773 = panda$core$String$convert$R$panda$core$String($tmp3772);
panda$core$String* $tmp3774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3773, &$s3775);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3774));
panda$core$String* $tmp3776 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3776));
*(&local2) = $tmp3774;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3774));
// unreffing REF($117:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3773));
// unreffing REF($116:panda.core.String)
goto block4;
block4:;
// line 1037
panda$collections$HashMap** $tmp3777 = &param0->refs;
panda$collections$HashMap* $tmp3778 = *$tmp3777;
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp3779;
$tmp3779 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp3779->value = param1;
panda$core$String* $tmp3780 = *(&local2);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp3778, ((panda$collections$Key*) $tmp3779), ((panda$core$Object*) $tmp3780));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp3779)));
// unreffing REF($135:panda.collections.HashMap.K)
panda$core$String* $tmp3781 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3781));
// unreffing bit
*(&local2) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3782 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3782));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$String* $tmp3783 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3783));
// unreffing ref
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeIsNonNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$ClassDecl* local1 = NULL;
panda$core$String* local2 = NULL;
// line 1041
panda$core$String* $tmp3784 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3784));
panda$core$String* $tmp3785 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3785));
*(&local0) = $tmp3784;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3784));
// unreffing REF($1:panda.core.String)
// line 1042
panda$core$Weak** $tmp3786 = &param0->compiler;
panda$core$Weak* $tmp3787 = *$tmp3786;
panda$core$Object* $tmp3788 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3787);
$fn3790 $tmp3789 = ($fn3790) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3791 = $tmp3789(param2);
org$pandalanguage$pandac$ClassDecl* $tmp3792 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3788), $tmp3791);
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3792));
org$pandalanguage$pandac$ClassDecl* $tmp3793 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3793));
*(&local1) = $tmp3792;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3792));
// unreffing REF($21:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3791));
// unreffing REF($20:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp3788);
// unreffing REF($16:panda.core.Weak.T)
// line 1043
org$pandalanguage$pandac$ClassDecl* $tmp3794 = *(&local1);
panda$core$Bit $tmp3795 = panda$core$Bit$init$builtin_bit($tmp3794 != NULL);
bool $tmp3796 = $tmp3795.value;
if ($tmp3796) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp3797 = (panda$core$Int64) {1043};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3798, $tmp3797);
abort(); // unreachable
block1:;
// line 1044
*(&local2) = ((panda$core$String*) NULL);
// line 1045
panda$core$Weak** $tmp3799 = &param0->compiler;
panda$core$Weak* $tmp3800 = *$tmp3799;
panda$core$Object* $tmp3801 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3800);
org$pandalanguage$pandac$ClassDecl* $tmp3802 = *(&local1);
panda$core$Bit $tmp3803 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3801), $tmp3802);
bool $tmp3804 = $tmp3803.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp3801);
// unreffing REF($53:panda.core.Weak.T)
if ($tmp3804) goto block3; else goto block5;
block3:;
// line 1046
$fn3806 $tmp3805 = ($fn3806) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3807 = $tmp3805(param2);
org$pandalanguage$pandac$Type$Kind* $tmp3808 = &$tmp3807->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3809 = *$tmp3808;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3810;
$tmp3810 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3810->value = $tmp3809;
panda$core$Int64 $tmp3811 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3812 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3811);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3813;
$tmp3813 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3813->value = $tmp3812;
ITable* $tmp3814 = ((panda$core$Equatable*) $tmp3810)->$class->itable;
while ($tmp3814->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3814 = $tmp3814->next;
}
$fn3816 $tmp3815 = $tmp3814->methods[1];
panda$core$Bit $tmp3817 = $tmp3815(((panda$core$Equatable*) $tmp3810), ((panda$core$Equatable*) $tmp3813));
bool $tmp3818 = $tmp3817.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3813)));
// unreffing REF($72:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3810)));
// unreffing REF($68:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3807));
// unreffing REF($65:org.pandalanguage.pandac.Type)
if ($tmp3818) goto block6; else goto block8;
block6:;
// line 1047
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3819));
panda$core$String* $tmp3820 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3820));
*(&local2) = &$s3821;
goto block7;
block8:;
// line 1
// line 1050
panda$core$String* $tmp3822 = *(&local0);
panda$core$String* $tmp3823 = panda$core$String$convert$R$panda$core$String($tmp3822);
panda$core$String* $tmp3824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3823, &$s3825);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3824));
panda$core$String* $tmp3826 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3826));
*(&local2) = $tmp3824;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3824));
// unreffing REF($98:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3823));
// unreffing REF($97:panda.core.String)
goto block7;
block7:;
goto block4;
block5:;
// line 1
// line 1054
panda$core$String* $tmp3827 = *(&local0);
panda$core$String* $tmp3828 = panda$core$String$convert$R$panda$core$String($tmp3827);
panda$core$String* $tmp3829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3828, &$s3830);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3829));
panda$core$String* $tmp3831 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3831));
*(&local2) = $tmp3829;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3829));
// unreffing REF($117:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3828));
// unreffing REF($116:panda.core.String)
goto block4;
block4:;
// line 1056
panda$collections$HashMap** $tmp3832 = &param0->refs;
panda$collections$HashMap* $tmp3833 = *$tmp3832;
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp3834;
$tmp3834 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp3834->value = param1;
panda$core$String* $tmp3835 = *(&local2);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp3833, ((panda$collections$Key*) $tmp3834), ((panda$core$Object*) $tmp3835));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp3834)));
// unreffing REF($135:panda.collections.HashMap.K)
panda$core$String* $tmp3836 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3836));
// unreffing bit
*(&local2) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3837 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3837));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$String* $tmp3838 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3838));
// unreffing ref
*(&local0) = ((panda$core$String*) NULL);
return;

}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$isNull$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1) {

// line 1060
panda$core$Int64* $tmp3839 = &param1->$rawValue;
panda$core$Int64 $tmp3840 = *$tmp3839;
panda$core$Int64 $tmp3841 = (panda$core$Int64) {4};
panda$core$Bit $tmp3842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3840, $tmp3841);
bool $tmp3843 = $tmp3842.value;
if ($tmp3843) goto block2; else goto block1;
block2:;
// line 1062
panda$core$Bit $tmp3844 = panda$core$Bit$init$builtin_bit(true);
return $tmp3844;
block1:;
// line 1065
panda$core$Bit $tmp3845 = panda$core$Bit$init$builtin_bit(false);
return $tmp3845;

}
void org$pandalanguage$pandac$CCodeGenerator$writeBinary$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$parser$Token$Kind param3, org$pandalanguage$pandac$IR$Value* param4, org$pandalanguage$pandac$Type* param5) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
// line 1070
panda$core$String* $tmp3846 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3846));
panda$core$String* $tmp3847 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3847));
*(&local0) = $tmp3846;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3846));
// unreffing REF($1:panda.core.String)
// line 1071
panda$core$String* $tmp3848 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param4);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3848));
panda$core$String* $tmp3849 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3849));
*(&local1) = $tmp3848;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3848));
// unreffing REF($13:panda.core.String)
// line 1072
$fn3851 $tmp3850 = ($fn3851) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3852 = $tmp3850(param2);
panda$core$Bit $tmp3853 = org$pandalanguage$pandac$Type$get_isNullable$R$panda$core$Bit($tmp3852);
bool $tmp3854 = $tmp3853.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3852));
// unreffing REF($26:org.pandalanguage.pandac.Type)
if ($tmp3854) goto block1; else goto block2;
block1:;
// line 1073
panda$core$Int64 $tmp3855 = param3.$rawValue;
panda$core$Int64 $tmp3856 = (panda$core$Int64) {61};
panda$core$Bit $tmp3857 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3855, $tmp3856);
bool $tmp3858 = $tmp3857.value;
if ($tmp3858) goto block4; else goto block5;
block4:;
// line 1075
panda$core$Bit $tmp3859 = org$pandalanguage$pandac$CCodeGenerator$isNull$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(param0, param2);
bool $tmp3860 = $tmp3859.value;
if ($tmp3860) goto block6; else goto block7;
block6:;
// line 1076
org$pandalanguage$pandac$CCodeGenerator$writeIsNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, param4);
// line 1077
panda$core$String* $tmp3861 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3861));
// unreffing rightRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3862 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3862));
// unreffing leftRef
*(&local0) = ((panda$core$String*) NULL);
return;
block7:;
// line 1079
panda$core$Bit $tmp3863 = org$pandalanguage$pandac$CCodeGenerator$isNull$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(param0, param4);
bool $tmp3864 = $tmp3863.value;
if ($tmp3864) goto block8; else goto block9;
block8:;
// line 1080
org$pandalanguage$pandac$CCodeGenerator$writeIsNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, param2);
// line 1081
panda$core$String* $tmp3865 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3865));
// unreffing rightRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3866 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3866));
// unreffing leftRef
*(&local0) = ((panda$core$String*) NULL);
return;
block9:;
goto block3;
block5:;
panda$core$Int64 $tmp3867 = (panda$core$Int64) {62};
panda$core$Bit $tmp3868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3855, $tmp3867);
bool $tmp3869 = $tmp3868.value;
if ($tmp3869) goto block10; else goto block3;
block10:;
// line 1085
panda$core$Bit $tmp3870 = org$pandalanguage$pandac$CCodeGenerator$isNull$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(param0, param2);
bool $tmp3871 = $tmp3870.value;
if ($tmp3871) goto block11; else goto block12;
block11:;
// line 1086
org$pandalanguage$pandac$CCodeGenerator$writeIsNonNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, param4);
// line 1087
panda$core$String* $tmp3872 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3872));
// unreffing rightRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3873 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3873));
// unreffing leftRef
*(&local0) = ((panda$core$String*) NULL);
return;
block12:;
// line 1089
panda$core$Bit $tmp3874 = org$pandalanguage$pandac$CCodeGenerator$isNull$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(param0, param4);
bool $tmp3875 = $tmp3874.value;
if ($tmp3875) goto block13; else goto block14;
block13:;
// line 1090
org$pandalanguage$pandac$CCodeGenerator$writeIsNonNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, param2);
// line 1091
panda$core$String* $tmp3876 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3876));
// unreffing rightRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3877 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3877));
// unreffing leftRef
*(&local0) = ((panda$core$String*) NULL);
return;
block14:;
goto block3;
block3:;
goto block2;
block2:;
// line 1096
*(&local2) = ((panda$core$String*) NULL);
// line 1097
panda$core$Int64 $tmp3878 = param3.$rawValue;
panda$core$Int64 $tmp3879 = (panda$core$Int64) {52};
panda$core$Bit $tmp3880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3878, $tmp3879);
bool $tmp3881 = $tmp3880.value;
if ($tmp3881) goto block16; else goto block17;
block16:;
// line 1099
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3882));
panda$core$String* $tmp3883 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3883));
*(&local2) = &$s3884;
goto block15;
block17:;
panda$core$Int64 $tmp3885 = (panda$core$Int64) {53};
panda$core$Bit $tmp3886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3878, $tmp3885);
bool $tmp3887 = $tmp3886.value;
if ($tmp3887) goto block18; else goto block19;
block18:;
// line 1102
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3888));
panda$core$String* $tmp3889 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3889));
*(&local2) = &$s3890;
goto block15;
block19:;
panda$core$Int64 $tmp3891 = (panda$core$Int64) {54};
panda$core$Bit $tmp3892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3878, $tmp3891);
bool $tmp3893 = $tmp3892.value;
if ($tmp3893) goto block20; else goto block21;
block20:;
// line 1105
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3894));
panda$core$String* $tmp3895 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3895));
*(&local2) = &$s3896;
goto block15;
block21:;
panda$core$Int64 $tmp3897 = (panda$core$Int64) {55};
panda$core$Bit $tmp3898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3878, $tmp3897);
bool $tmp3899 = $tmp3898.value;
if ($tmp3899) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp3900 = (panda$core$Int64) {56};
panda$core$Bit $tmp3901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3878, $tmp3900);
bool $tmp3902 = $tmp3901.value;
if ($tmp3902) goto block22; else goto block24;
block22:;
// line 1108
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3903));
panda$core$String* $tmp3904 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3904));
*(&local2) = &$s3905;
goto block15;
block24:;
panda$core$Int64 $tmp3906 = (panda$core$Int64) {57};
panda$core$Bit $tmp3907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3878, $tmp3906);
bool $tmp3908 = $tmp3907.value;
if ($tmp3908) goto block25; else goto block26;
block25:;
// line 1111
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3909));
panda$core$String* $tmp3910 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3910));
*(&local2) = &$s3911;
goto block15;
block26:;
panda$core$Int64 $tmp3912 = (panda$core$Int64) {73};
panda$core$Bit $tmp3913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3878, $tmp3912);
bool $tmp3914 = $tmp3913.value;
if ($tmp3914) goto block27; else goto block28;
block27:;
// line 1114
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3915));
panda$core$String* $tmp3916 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3916));
*(&local2) = &$s3917;
goto block15;
block28:;
panda$core$Int64 $tmp3918 = (panda$core$Int64) {1};
panda$core$Bit $tmp3919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3878, $tmp3918);
bool $tmp3920 = $tmp3919.value;
if ($tmp3920) goto block29; else goto block30;
block29:;
// line 1117
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3921));
panda$core$String* $tmp3922 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3922));
*(&local2) = &$s3923;
goto block15;
block30:;
panda$core$Int64 $tmp3924 = (panda$core$Int64) {67};
panda$core$Bit $tmp3925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3878, $tmp3924);
bool $tmp3926 = $tmp3925.value;
if ($tmp3926) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp3927 = (panda$core$Int64) {68};
panda$core$Bit $tmp3928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3878, $tmp3927);
bool $tmp3929 = $tmp3928.value;
if ($tmp3929) goto block31; else goto block33;
block31:;
// line 1120
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3930));
panda$core$String* $tmp3931 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3931));
*(&local2) = &$s3932;
goto block15;
block33:;
panda$core$Int64 $tmp3933 = (panda$core$Int64) {69};
panda$core$Bit $tmp3934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3878, $tmp3933);
bool $tmp3935 = $tmp3934.value;
if ($tmp3935) goto block34; else goto block35;
block35:;
panda$core$Int64 $tmp3936 = (panda$core$Int64) {70};
panda$core$Bit $tmp3937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3878, $tmp3936);
bool $tmp3938 = $tmp3937.value;
if ($tmp3938) goto block34; else goto block36;
block34:;
// line 1123
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3939));
panda$core$String* $tmp3940 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3940));
*(&local2) = &$s3941;
goto block15;
block36:;
panda$core$Int64 $tmp3942 = (panda$core$Int64) {71};
panda$core$Bit $tmp3943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3878, $tmp3942);
bool $tmp3944 = $tmp3943.value;
if ($tmp3944) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp3945 = (panda$core$Int64) {72};
panda$core$Bit $tmp3946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3878, $tmp3945);
bool $tmp3947 = $tmp3946.value;
if ($tmp3947) goto block37; else goto block39;
block37:;
// line 1126
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3948));
panda$core$String* $tmp3949 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3949));
*(&local2) = &$s3950;
goto block15;
block39:;
panda$core$Int64 $tmp3951 = (panda$core$Int64) {59};
panda$core$Bit $tmp3952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3878, $tmp3951);
bool $tmp3953 = $tmp3952.value;
if ($tmp3953) goto block40; else goto block41;
block41:;
panda$core$Int64 $tmp3954 = (panda$core$Int64) {61};
panda$core$Bit $tmp3955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3878, $tmp3954);
bool $tmp3956 = $tmp3955.value;
if ($tmp3956) goto block40; else goto block42;
block40:;
// line 1129
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3957));
panda$core$String* $tmp3958 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3958));
*(&local2) = &$s3959;
goto block15;
block42:;
panda$core$Int64 $tmp3960 = (panda$core$Int64) {60};
panda$core$Bit $tmp3961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3878, $tmp3960);
bool $tmp3962 = $tmp3961.value;
if ($tmp3962) goto block43; else goto block44;
block44:;
panda$core$Int64 $tmp3963 = (panda$core$Int64) {62};
panda$core$Bit $tmp3964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3878, $tmp3963);
bool $tmp3965 = $tmp3964.value;
if ($tmp3965) goto block43; else goto block45;
block43:;
// line 1132
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3966));
panda$core$String* $tmp3967 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3967));
*(&local2) = &$s3968;
goto block15;
block45:;
panda$core$Int64 $tmp3969 = (panda$core$Int64) {64};
panda$core$Bit $tmp3970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3878, $tmp3969);
bool $tmp3971 = $tmp3970.value;
if ($tmp3971) goto block46; else goto block47;
block46:;
// line 1135
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3972));
panda$core$String* $tmp3973 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3973));
*(&local2) = &$s3974;
goto block15;
block47:;
panda$core$Int64 $tmp3975 = (panda$core$Int64) {63};
panda$core$Bit $tmp3976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3878, $tmp3975);
bool $tmp3977 = $tmp3976.value;
if ($tmp3977) goto block48; else goto block49;
block48:;
// line 1138
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3978));
panda$core$String* $tmp3979 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3979));
*(&local2) = &$s3980;
goto block15;
block49:;
panda$core$Int64 $tmp3981 = (panda$core$Int64) {66};
panda$core$Bit $tmp3982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3878, $tmp3981);
bool $tmp3983 = $tmp3982.value;
if ($tmp3983) goto block50; else goto block51;
block50:;
// line 1141
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3984));
panda$core$String* $tmp3985 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3985));
*(&local2) = &$s3986;
goto block15;
block51:;
panda$core$Int64 $tmp3987 = (panda$core$Int64) {65};
panda$core$Bit $tmp3988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3878, $tmp3987);
bool $tmp3989 = $tmp3988.value;
if ($tmp3989) goto block52; else goto block53;
block52:;
// line 1144
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3990));
panda$core$String* $tmp3991 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3991));
*(&local2) = &$s3992;
goto block15;
block53:;
// line 1147
panda$core$Bit $tmp3993 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3994 = $tmp3993.value;
if ($tmp3994) goto block54; else goto block55;
block55:;
panda$core$Int64 $tmp3995 = (panda$core$Int64) {1147};
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3996;
$tmp3996 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3996->value = param3;
panda$core$String* $tmp3997 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3998, ((panda$core$Object*) $tmp3996));
panda$core$String* $tmp3999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3997, &$s4000);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4001, $tmp3995, $tmp3999);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3999));
// unreffing REF($345:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3997));
// unreffing REF($344:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3996));
// unreffing REF($343:panda.core.Object)
abort(); // unreachable
block54:;
goto block15;
block15:;
// line 1150
panda$core$String* $tmp4002 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4002));
panda$core$String* $tmp4003 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4003));
*(&local3) = $tmp4002;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4002));
// unreffing REF($359:panda.core.String)
// line 1151
panda$io$IndentedOutputStream** $tmp4004 = &param0->out;
panda$io$IndentedOutputStream* $tmp4005 = *$tmp4004;
panda$core$String* $tmp4006 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param5);
panda$core$String* $tmp4007 = panda$core$String$convert$R$panda$core$String($tmp4006);
panda$core$String* $tmp4008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4007, &$s4009);
panda$core$String* $tmp4010 = *(&local3);
panda$core$String* $tmp4011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4008, $tmp4010);
panda$core$String* $tmp4012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4011, &$s4013);
panda$core$String* $tmp4014 = *(&local0);
panda$core$String* $tmp4015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4012, $tmp4014);
panda$core$String* $tmp4016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4015, &$s4017);
panda$core$String* $tmp4018 = *(&local2);
panda$core$String* $tmp4019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4016, $tmp4018);
panda$core$String* $tmp4020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4019, &$s4021);
panda$core$String* $tmp4022 = *(&local1);
panda$core$String* $tmp4023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4020, $tmp4022);
panda$core$String* $tmp4024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4023, &$s4025);
$fn4027 $tmp4026 = ($fn4027) ((panda$io$OutputStream*) $tmp4005)->$class->vtable[19];
$tmp4026(((panda$io$OutputStream*) $tmp4005), $tmp4024);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4024));
// unreffing REF($388:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4023));
// unreffing REF($387:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4020));
// unreffing REF($385:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4019));
// unreffing REF($384:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4016));
// unreffing REF($382:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4015));
// unreffing REF($381:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4012));
// unreffing REF($379:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4011));
// unreffing REF($378:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4008));
// unreffing REF($376:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4007));
// unreffing REF($375:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4006));
// unreffing REF($374:panda.core.String)
// line 1152
panda$collections$HashMap** $tmp4028 = &param0->refs;
panda$collections$HashMap* $tmp4029 = *$tmp4028;
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4030;
$tmp4030 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4030->value = param1;
panda$core$String* $tmp4031 = *(&local3);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4029, ((panda$collections$Key*) $tmp4030), ((panda$core$Object*) $tmp4031));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4030)));
// unreffing REF($428:panda.collections.HashMap.K)
panda$core$String* $tmp4032 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4032));
// unreffing result
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4033 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4033));
// unreffing cOp
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4034 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4034));
// unreffing rightRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4035 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4035));
// unreffing leftRef
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeBranch$org$pandalanguage$pandac$IR$Block$ID(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Block$ID param1) {

// line 1156
panda$io$IndentedOutputStream** $tmp4036 = &param0->out;
panda$io$IndentedOutputStream* $tmp4037 = *$tmp4036;
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp4038;
$tmp4038 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp4038->value = param1;
panda$core$String* $tmp4039 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4040, ((panda$core$Object*) $tmp4038));
panda$core$String* $tmp4041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4039, &$s4042);
$fn4044 $tmp4043 = ($fn4044) ((panda$io$OutputStream*) $tmp4037)->$class->vtable[19];
$tmp4043(((panda$io$OutputStream*) $tmp4037), $tmp4041);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4041));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4039));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4038));
// unreffing REF($4:panda.core.Object)
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeCast$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$Type* param3) {

// line 1160
panda$collections$HashMap** $tmp4045 = &param0->refs;
panda$collections$HashMap* $tmp4046 = *$tmp4045;
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4047;
$tmp4047 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4047->value = param1;
panda$core$String* $tmp4048 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
$fn4050 $tmp4049 = ($fn4050) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4051 = $tmp4049(param2);
panda$core$String* $tmp4052 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4048, $tmp4051, param3);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4046, ((panda$collections$Key*) $tmp4047), ((panda$core$Object*) $tmp4052));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4052));
// unreffing REF($8:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4051));
// unreffing REF($7:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4048));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4047)));
// unreffing REF($4:panda.collections.HashMap.K)
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeConditionalBranch$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1, org$pandalanguage$pandac$IR$Block$ID param2, org$pandalanguage$pandac$IR$Block$ID param3) {

// line 1164
panda$io$IndentedOutputStream** $tmp4053 = &param0->out;
panda$io$IndentedOutputStream* $tmp4054 = *$tmp4053;
panda$core$String* $tmp4055 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param1);
panda$core$String* $tmp4056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4057, $tmp4055);
panda$core$String* $tmp4058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4056, &$s4059);
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp4060;
$tmp4060 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp4060->value = param2;
panda$core$String* $tmp4061 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4058, ((panda$core$Object*) $tmp4060));
panda$core$String* $tmp4062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4061, &$s4063);
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp4064;
$tmp4064 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp4064->value = param3;
panda$core$String* $tmp4065 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4062, ((panda$core$Object*) $tmp4064));
panda$core$String* $tmp4066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4065, &$s4067);
$fn4069 $tmp4068 = ($fn4069) ((panda$io$OutputStream*) $tmp4054)->$class->vtable[19];
$tmp4068(((panda$io$OutputStream*) $tmp4054), $tmp4066);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4066));
// unreffing REF($12:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4065));
// unreffing REF($11:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4064));
// unreffing REF($10:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4062));
// unreffing REF($9:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4061));
// unreffing REF($8:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4060));
// unreffing REF($7:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4058));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4056));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4055));
// unreffing REF($4:panda.core.String)
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeConstruct$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$ClassDecl* param2) {

org$pandalanguage$pandac$CCodeGenerator$ClassConstant* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$Type* local3 = NULL;
// line 1168
panda$core$Weak** $tmp4070 = &param0->compiler;
panda$core$Weak* $tmp4071 = *$tmp4070;
panda$core$Object* $tmp4072 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4071);
panda$core$Bit $tmp4073 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp4072), param2);
panda$core$Bit $tmp4074 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4073);
bool $tmp4075 = $tmp4074.value;
if ($tmp4075) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp4076 = (panda$core$Int64) {1168};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s4077, $tmp4076);
abort(); // unreachable
block1:;
panda$core$Panda$unref$panda$core$Object$Q($tmp4072);
// unreffing REF($4:panda.core.Weak.T)
// line 1169
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4078 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, param2);
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4078));
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4079 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4079));
*(&local0) = $tmp4078;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4078));
// unreffing REF($19:org.pandalanguage.pandac.CCodeGenerator.ClassConstant)
// line 1170
*(&local1) = ((panda$core$String*) NULL);
// line 1171
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4080 = *(&local0);
panda$core$String** $tmp4081 = &$tmp4080->type;
panda$core$String* $tmp4082 = *$tmp4081;
ITable* $tmp4084 = ((panda$core$Equatable*) $tmp4082)->$class->itable;
while ($tmp4084->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4084 = $tmp4084->next;
}
$fn4086 $tmp4085 = $tmp4084->methods[1];
panda$core$Bit $tmp4087 = $tmp4085(((panda$core$Equatable*) $tmp4082), ((panda$core$Equatable*) &$s4083));
bool $tmp4088 = $tmp4087.value;
if ($tmp4088) goto block3; else goto block5;
block3:;
// line 1172
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4089 = *(&local0);
panda$core$String** $tmp4090 = &$tmp4089->name;
panda$core$String* $tmp4091 = *$tmp4090;
panda$core$String* $tmp4092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4093, $tmp4091);
panda$core$String* $tmp4094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4092, &$s4095);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4094));
panda$core$String* $tmp4096 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4096));
*(&local1) = $tmp4094;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4094));
// unreffing REF($48:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4092));
// unreffing REF($47:panda.core.String)
goto block4;
block5:;
// line 1
// line 1175
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4097 = *(&local0);
panda$core$String** $tmp4098 = &$tmp4097->name;
panda$core$String* $tmp4099 = *$tmp4098;
panda$core$String* $tmp4100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4101, $tmp4099);
panda$core$String* $tmp4102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4100, &$s4103);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4102));
panda$core$String* $tmp4104 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4104));
*(&local1) = $tmp4102;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4102));
// unreffing REF($68:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4100));
// unreffing REF($67:panda.core.String)
goto block4;
block4:;
// line 1177
panda$core$String* $tmp4105 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4105));
panda$core$String* $tmp4106 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4106));
*(&local2) = $tmp4105;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4105));
// unreffing REF($83:panda.core.String)
// line 1178
org$pandalanguage$pandac$Type** $tmp4107 = &param2->type;
org$pandalanguage$pandac$Type* $tmp4108 = *$tmp4107;
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4108));
org$pandalanguage$pandac$Type* $tmp4109 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4109));
*(&local3) = $tmp4108;
// line 1179
panda$io$IndentedOutputStream** $tmp4110 = &param0->out;
panda$io$IndentedOutputStream* $tmp4111 = *$tmp4110;
org$pandalanguage$pandac$Type* $tmp4112 = *(&local3);
panda$core$String* $tmp4113 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4112);
panda$core$String* $tmp4114 = panda$core$String$convert$R$panda$core$String($tmp4113);
panda$core$String* $tmp4115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4114, &$s4116);
panda$core$String* $tmp4117 = *(&local2);
panda$core$String* $tmp4118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4115, $tmp4117);
panda$core$String* $tmp4119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4118, &$s4120);
org$pandalanguage$pandac$Type* $tmp4121 = *(&local3);
panda$core$String* $tmp4122 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4121);
panda$core$String* $tmp4123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4119, $tmp4122);
panda$core$String* $tmp4124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4123, &$s4125);
org$pandalanguage$pandac$Type* $tmp4126 = *(&local3);
panda$core$Int64 $tmp4127 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, $tmp4126);
panda$core$String* $tmp4128 = panda$core$Int64$convert$R$panda$core$String($tmp4127);
panda$core$String* $tmp4129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4128, &$s4130);
panda$core$String* $tmp4131 = *(&local1);
panda$core$String* $tmp4132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4129, $tmp4131);
panda$core$String* $tmp4133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4132, &$s4134);
panda$core$String* $tmp4135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4124, $tmp4133);
$fn4137 $tmp4136 = ($fn4137) ((panda$io$OutputStream*) $tmp4111)->$class->vtable[19];
$tmp4136(((panda$io$OutputStream*) $tmp4111), $tmp4135);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4135));
// unreffing REF($126:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4133));
// unreffing REF($125:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4132));
// unreffing REF($124:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4129));
// unreffing REF($122:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4128));
// unreffing REF($121:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4124));
// unreffing REF($118:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4123));
// unreffing REF($117:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4122));
// unreffing REF($116:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4119));
// unreffing REF($114:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4118));
// unreffing REF($113:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4115));
// unreffing REF($111:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4114));
// unreffing REF($110:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4113));
// unreffing REF($109:panda.core.String)
// line 1181
panda$collections$HashMap** $tmp4138 = &param0->refs;
panda$collections$HashMap* $tmp4139 = *$tmp4138;
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4140;
$tmp4140 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4140->value = param1;
panda$core$String* $tmp4141 = *(&local2);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4139, ((panda$collections$Key*) $tmp4140), ((panda$core$Object*) $tmp4141));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4140)));
// unreffing REF($172:panda.collections.HashMap.K)
org$pandalanguage$pandac$Type* $tmp4142 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4142));
// unreffing target
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp4143 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4143));
// unreffing result
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4144 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4144));
// unreffing ccCast
*(&local1) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4145 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4145));
// unreffing cc
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeCreateStruct$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$IR$Value$GT(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$ClassDecl* param2, org$pandalanguage$pandac$FixedArray* param3) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$Type* local1 = NULL;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$IR$Value* local3 = NULL;
// line 1185
panda$core$Weak** $tmp4146 = &param0->compiler;
panda$core$Weak* $tmp4147 = *$tmp4146;
panda$core$Object* $tmp4148 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4147);
panda$core$Bit $tmp4149 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp4148), param2);
bool $tmp4150 = $tmp4149.value;
if ($tmp4150) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp4151 = (panda$core$Int64) {1185};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s4152, $tmp4151);
abort(); // unreachable
block1:;
panda$core$Panda$unref$panda$core$Object$Q($tmp4148);
// unreffing REF($4:panda.core.Weak.T)
// line 1186
panda$core$String* $tmp4153 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4153));
panda$core$String* $tmp4154 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4154));
*(&local0) = $tmp4153;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4153));
// unreffing REF($18:panda.core.String)
// line 1187
org$pandalanguage$pandac$Type** $tmp4155 = &param2->type;
org$pandalanguage$pandac$Type* $tmp4156 = *$tmp4155;
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4156));
org$pandalanguage$pandac$Type* $tmp4157 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4157));
*(&local1) = $tmp4156;
// line 1188
panda$io$IndentedOutputStream** $tmp4158 = &param0->out;
panda$io$IndentedOutputStream* $tmp4159 = *$tmp4158;
org$pandalanguage$pandac$Type* $tmp4160 = *(&local1);
panda$core$String* $tmp4161 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4160);
panda$core$String* $tmp4162 = panda$core$String$convert$R$panda$core$String($tmp4161);
panda$core$String* $tmp4163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4162, &$s4164);
panda$core$String* $tmp4165 = *(&local0);
panda$core$String* $tmp4166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4163, $tmp4165);
panda$core$String* $tmp4167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4166, &$s4168);
org$pandalanguage$pandac$Type* $tmp4169 = *(&local1);
panda$core$String* $tmp4170 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4169);
panda$core$String* $tmp4171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4167, $tmp4170);
panda$core$String* $tmp4172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4171, &$s4173);
$fn4175 $tmp4174 = ($fn4175) ((panda$io$OutputStream*) $tmp4159)->$class->vtable[17];
$tmp4174(((panda$io$OutputStream*) $tmp4159), $tmp4172);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4172));
// unreffing REF($53:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4171));
// unreffing REF($52:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4170));
// unreffing REF($51:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4167));
// unreffing REF($49:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4166));
// unreffing REF($48:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4163));
// unreffing REF($46:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4162));
// unreffing REF($45:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4161));
// unreffing REF($44:panda.core.String)
// line 1189
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4176));
panda$core$String* $tmp4177 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4177));
*(&local2) = &$s4178;
// line 1190
ITable* $tmp4179 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp4179->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp4179 = $tmp4179->next;
}
$fn4181 $tmp4180 = $tmp4179->methods[0];
panda$collections$Iterator* $tmp4182 = $tmp4180(((panda$collections$Iterable*) param3));
goto block3;
block3:;
ITable* $tmp4183 = $tmp4182->$class->itable;
while ($tmp4183->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp4183 = $tmp4183->next;
}
$fn4185 $tmp4184 = $tmp4183->methods[0];
panda$core$Bit $tmp4186 = $tmp4184($tmp4182);
bool $tmp4187 = $tmp4186.value;
if ($tmp4187) goto block5; else goto block4;
block4:;
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
ITable* $tmp4188 = $tmp4182->$class->itable;
while ($tmp4188->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp4188 = $tmp4188->next;
}
$fn4190 $tmp4189 = $tmp4188->methods[1];
panda$core$Object* $tmp4191 = $tmp4189($tmp4182);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) $tmp4191)));
org$pandalanguage$pandac$IR$Value* $tmp4192 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4192));
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) $tmp4191);
// line 1191
panda$io$IndentedOutputStream** $tmp4193 = &param0->out;
panda$io$IndentedOutputStream* $tmp4194 = *$tmp4193;
panda$core$String* $tmp4195 = *(&local2);
panda$core$String* $tmp4196 = panda$core$String$convert$R$panda$core$String($tmp4195);
panda$core$String* $tmp4197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4196, &$s4198);
org$pandalanguage$pandac$IR$Value* $tmp4199 = *(&local3);
panda$core$String* $tmp4200 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, $tmp4199);
panda$core$String* $tmp4201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4197, $tmp4200);
panda$core$String* $tmp4202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4201, &$s4203);
$fn4205 $tmp4204 = ($fn4205) ((panda$io$OutputStream*) $tmp4194)->$class->vtable[17];
$tmp4204(((panda$io$OutputStream*) $tmp4194), $tmp4202);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4202));
// unreffing REF($121:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4201));
// unreffing REF($120:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4200));
// unreffing REF($119:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4197));
// unreffing REF($117:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4196));
// unreffing REF($116:panda.core.String)
// line 1192
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4206));
panda$core$String* $tmp4207 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4207));
*(&local2) = &$s4208;
panda$core$Panda$unref$panda$core$Object$Q($tmp4191);
// unreffing REF($103:panda.collections.Iterator.T)
org$pandalanguage$pandac$IR$Value* $tmp4209 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4209));
// unreffing v
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4182));
// unreffing REF($92:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 1194
panda$io$IndentedOutputStream** $tmp4210 = &param0->out;
panda$io$IndentedOutputStream* $tmp4211 = *$tmp4210;
$fn4213 $tmp4212 = ($fn4213) ((panda$io$OutputStream*) $tmp4211)->$class->vtable[19];
$tmp4212(((panda$io$OutputStream*) $tmp4211), &$s4214);
// line 1195
panda$collections$HashMap** $tmp4215 = &param0->refs;
panda$collections$HashMap* $tmp4216 = *$tmp4215;
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4217;
$tmp4217 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4217->value = param1;
panda$core$String* $tmp4218 = *(&local0);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4216, ((panda$collections$Key*) $tmp4217), ((panda$core$Object*) $tmp4218));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4217)));
// unreffing REF($168:panda.collections.HashMap.K)
panda$core$String* $tmp4219 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4219));
// unreffing separator
*(&local2) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$Type* $tmp4220 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4220));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp4221 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4221));
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
// line 1199
$fn4223 $tmp4222 = ($fn4223) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4224 = $tmp4222(param2);
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4224));
org$pandalanguage$pandac$Type* $tmp4225 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4225));
*(&local0) = $tmp4224;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4224));
// unreffing REF($2:org.pandalanguage.pandac.Type)
// line 1200
org$pandalanguage$pandac$Type* $tmp4226 = *(&local0);
panda$core$Bit $tmp4227 = org$pandalanguage$pandac$Type$get_isPointer$R$panda$core$Bit($tmp4226);
bool $tmp4228 = $tmp4227.value;
if ($tmp4228) goto block1; else goto block2;
block1:;
// line 1201
org$pandalanguage$pandac$Type* $tmp4229 = *(&local0);
org$pandalanguage$pandac$FixedArray** $tmp4230 = &$tmp4229->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp4231 = *$tmp4230;
panda$core$Int64 $tmp4232 = (panda$core$Int64) {1};
panda$core$Object* $tmp4233 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp4231, $tmp4232);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp4233)));
org$pandalanguage$pandac$Type* $tmp4234 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4234));
*(&local0) = ((org$pandalanguage$pandac$Type*) $tmp4233);
panda$core$Panda$unref$panda$core$Object$Q($tmp4233);
// unreffing REF($25:org.pandalanguage.pandac.FixedArray.T)
goto block2;
block2:;
// line 1203
org$pandalanguage$pandac$Type* $tmp4235 = *(&local0);
org$pandalanguage$pandac$Type* $tmp4236 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp4235);
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4236));
org$pandalanguage$pandac$Type* $tmp4237 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4237));
*(&local1) = $tmp4236;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4236));
// unreffing REF($39:org.pandalanguage.pandac.Type)
// line 1204
org$pandalanguage$pandac$Type* $tmp4238 = *(&local1);
org$pandalanguage$pandac$Type* $tmp4239 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp4240 = ((panda$core$Equatable*) $tmp4238)->$class->itable;
while ($tmp4240->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4240 = $tmp4240->next;
}
$fn4242 $tmp4241 = $tmp4240->methods[1];
panda$core$Bit $tmp4243 = $tmp4241(((panda$core$Equatable*) $tmp4238), ((panda$core$Equatable*) $tmp4239));
bool $tmp4244 = $tmp4243.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4239));
// unreffing REF($54:org.pandalanguage.pandac.Type)
if ($tmp4244) goto block3; else goto block4;
block3:;
// line 1205
panda$core$String* $tmp4245 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4245));
panda$core$String* $tmp4246 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4246));
*(&local2) = $tmp4245;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4245));
// unreffing REF($64:panda.core.String)
// line 1206
panda$io$IndentedOutputStream** $tmp4247 = &param0->out;
panda$io$IndentedOutputStream* $tmp4248 = *$tmp4247;
org$pandalanguage$pandac$Type* $tmp4249 = *(&local1);
panda$core$String* $tmp4250 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4249);
panda$core$String* $tmp4251 = panda$core$String$convert$R$panda$core$String($tmp4250);
panda$core$String* $tmp4252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4251, &$s4253);
panda$core$String* $tmp4254 = *(&local2);
panda$core$String* $tmp4255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4252, $tmp4254);
panda$core$String* $tmp4256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4255, &$s4257);
$fn4259 $tmp4258 = ($fn4259) ((panda$io$OutputStream*) $tmp4248)->$class->vtable[17];
$tmp4258(((panda$io$OutputStream*) $tmp4248), $tmp4256);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4256));
// unreffing REF($85:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4255));
// unreffing REF($84:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4252));
// unreffing REF($82:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4251));
// unreffing REF($81:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4250));
// unreffing REF($80:panda.core.String)
// line 1207
panda$collections$HashMap** $tmp4260 = &param0->refs;
panda$collections$HashMap* $tmp4261 = *$tmp4260;
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4262;
$tmp4262 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4262->value = param1;
panda$core$String* $tmp4263 = *(&local2);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4261, ((panda$collections$Key*) $tmp4262), ((panda$core$Object*) $tmp4263));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4262)));
// unreffing REF($107:panda.collections.HashMap.K)
panda$core$String* $tmp4264 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4264));
// unreffing result
*(&local2) = ((panda$core$String*) NULL);
goto block4;
block4:;
// line 1209
panda$io$IndentedOutputStream** $tmp4265 = &param0->out;
panda$io$IndentedOutputStream* $tmp4266 = *$tmp4265;
panda$core$String* $tmp4267 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4268 = panda$core$String$convert$R$panda$core$String($tmp4267);
panda$core$String* $tmp4269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4268, &$s4270);
$fn4272 $tmp4271 = ($fn4272) ((panda$io$OutputStream*) $tmp4266)->$class->vtable[17];
$tmp4271(((panda$io$OutputStream*) $tmp4266), $tmp4269);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4269));
// unreffing REF($126:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4268));
// unreffing REF($125:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4267));
// unreffing REF($124:panda.core.String)
// line 1210
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4273));
panda$core$String* $tmp4274 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4274));
*(&local3) = &$s4275;
// line 1211
ITable* $tmp4276 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp4276->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp4276 = $tmp4276->next;
}
$fn4278 $tmp4277 = $tmp4276->methods[0];
panda$collections$Iterator* $tmp4279 = $tmp4277(((panda$collections$Iterable*) param3));
goto block5;
block5:;
ITable* $tmp4280 = $tmp4279->$class->itable;
while ($tmp4280->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp4280 = $tmp4280->next;
}
$fn4282 $tmp4281 = $tmp4280->methods[0];
panda$core$Bit $tmp4283 = $tmp4281($tmp4279);
bool $tmp4284 = $tmp4283.value;
if ($tmp4284) goto block7; else goto block6;
block6:;
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
ITable* $tmp4285 = $tmp4279->$class->itable;
while ($tmp4285->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp4285 = $tmp4285->next;
}
$fn4287 $tmp4286 = $tmp4285->methods[1];
panda$core$Object* $tmp4288 = $tmp4286($tmp4279);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) $tmp4288)));
org$pandalanguage$pandac$IR$Value* $tmp4289 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4289));
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) $tmp4288);
// line 1212
panda$io$IndentedOutputStream** $tmp4290 = &param0->out;
panda$io$IndentedOutputStream* $tmp4291 = *$tmp4290;
panda$core$String* $tmp4292 = *(&local3);
$fn4294 $tmp4293 = ($fn4294) ((panda$io$OutputStream*) $tmp4291)->$class->vtable[17];
$tmp4293(((panda$io$OutputStream*) $tmp4291), $tmp4292);
// line 1213
panda$io$IndentedOutputStream** $tmp4295 = &param0->out;
panda$io$IndentedOutputStream* $tmp4296 = *$tmp4295;
org$pandalanguage$pandac$IR$Value* $tmp4297 = *(&local4);
panda$core$String* $tmp4298 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, $tmp4297);
$fn4300 $tmp4299 = ($fn4300) ((panda$io$OutputStream*) $tmp4296)->$class->vtable[17];
$tmp4299(((panda$io$OutputStream*) $tmp4296), $tmp4298);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4298));
// unreffing REF($181:panda.core.String)
// line 1214
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4301));
panda$core$String* $tmp4302 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4302));
*(&local3) = &$s4303;
panda$core$Panda$unref$panda$core$Object$Q($tmp4288);
// unreffing REF($161:panda.collections.Iterator.T)
org$pandalanguage$pandac$IR$Value* $tmp4304 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4304));
// unreffing a
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block5;
block7:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4279));
// unreffing REF($150:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 1216
panda$io$IndentedOutputStream** $tmp4305 = &param0->out;
panda$io$IndentedOutputStream* $tmp4306 = *$tmp4305;
$fn4308 $tmp4307 = ($fn4308) ((panda$io$OutputStream*) $tmp4306)->$class->vtable[19];
$tmp4307(((panda$io$OutputStream*) $tmp4306), &$s4309);
panda$core$String* $tmp4310 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4310));
// unreffing separator
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$Type* $tmp4311 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4311));
// unreffing returnType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp4312 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4312));
// unreffing type
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeExtractField$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$FieldDecl* param3) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
// line 1220
panda$core$Weak** $tmp4313 = &param0->compiler;
panda$core$Weak* $tmp4314 = *$tmp4313;
panda$core$Object* $tmp4315 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4314);
panda$core$Bit $tmp4316 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp4315), param3);
panda$core$Panda$unref$panda$core$Object$Q($tmp4315);
// unreffing REF($4:panda.core.Weak.T)
// line 1221
panda$core$String* $tmp4317 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4317));
panda$core$String* $tmp4318 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4318));
*(&local0) = $tmp4317;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4317));
// unreffing REF($12:panda.core.String)
// line 1222
panda$core$String* $tmp4319 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4319));
panda$core$String* $tmp4320 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4320));
*(&local1) = $tmp4319;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4319));
// unreffing REF($24:panda.core.String)
// line 1223
panda$io$IndentedOutputStream** $tmp4321 = &param0->out;
panda$io$IndentedOutputStream* $tmp4322 = *$tmp4321;
org$pandalanguage$pandac$Type** $tmp4323 = &param3->type;
org$pandalanguage$pandac$Type* $tmp4324 = *$tmp4323;
panda$core$String* $tmp4325 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4324);
panda$core$String* $tmp4326 = panda$core$String$convert$R$panda$core$String($tmp4325);
panda$core$String* $tmp4327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4326, &$s4328);
panda$core$String* $tmp4329 = *(&local1);
panda$core$String* $tmp4330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4327, $tmp4329);
panda$core$String* $tmp4331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4330, &$s4332);
panda$core$String* $tmp4333 = *(&local0);
panda$core$String* $tmp4334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4331, $tmp4333);
panda$core$String* $tmp4335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4334, &$s4336);
panda$core$String** $tmp4337 = &((org$pandalanguage$pandac$Symbol*) param3)->name;
panda$core$String* $tmp4338 = *$tmp4337;
panda$core$String* $tmp4339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4335, $tmp4338);
panda$core$String* $tmp4340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4339, &$s4341);
$fn4343 $tmp4342 = ($fn4343) ((panda$io$OutputStream*) $tmp4322)->$class->vtable[19];
$tmp4342(((panda$io$OutputStream*) $tmp4322), $tmp4340);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4340));
// unreffing REF($54:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4339));
// unreffing REF($53:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4335));
// unreffing REF($49:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4334));
// unreffing REF($48:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4331));
// unreffing REF($46:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4330));
// unreffing REF($45:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4327));
// unreffing REF($43:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4326));
// unreffing REF($42:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4325));
// unreffing REF($41:panda.core.String)
// line 1224
panda$collections$HashMap** $tmp4344 = &param0->refs;
panda$collections$HashMap* $tmp4345 = *$tmp4344;
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4346;
$tmp4346 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4346->value = param1;
panda$core$String* $tmp4347 = *(&local1);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4345, ((panda$collections$Key*) $tmp4346), ((panda$core$Object*) $tmp4347));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4346)));
// unreffing REF($88:panda.collections.HashMap.K)
panda$core$String* $tmp4348 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4348));
// unreffing result
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4349 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4349));
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
// line 1229
panda$core$Weak** $tmp4350 = &param3->owner;
panda$core$Weak* $tmp4351 = *$tmp4350;
panda$core$Object* $tmp4352 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4351);
panda$collections$Array** $tmp4353 = &((org$pandalanguage$pandac$ClassDecl*) $tmp4352)->fields;
panda$collections$Array* $tmp4354 = *$tmp4353;
panda$core$Int64 $tmp4355 = (panda$core$Int64) {1};
panda$core$Object* $tmp4356 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4354, $tmp4355);
*(&local0) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp4356)));
org$pandalanguage$pandac$FieldDecl* $tmp4357 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4357));
*(&local0) = ((org$pandalanguage$pandac$FieldDecl*) $tmp4356);
panda$core$Panda$unref$panda$core$Object$Q($tmp4356);
// unreffing REF($10:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp4352);
// unreffing REF($4:panda.core.Weak.T)
// line 1230
org$pandalanguage$pandac$FieldDecl* $tmp4358 = *(&local0);
panda$core$String** $tmp4359 = &((org$pandalanguage$pandac$Symbol*) $tmp4358)->name;
panda$core$String* $tmp4360 = *$tmp4359;
panda$core$Bit $tmp4361 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp4360, &$s4362);
bool $tmp4363 = $tmp4361.value;
if ($tmp4363) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp4364 = (panda$core$Int64) {1230};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s4365, $tmp4364);
abort(); // unreachable
block1:;
// line 1231
panda$core$String* $tmp4366 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4366));
panda$core$String* $tmp4367 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4367));
*(&local1) = $tmp4366;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4366));
// unreffing REF($37:panda.core.String)
// line 1232
panda$core$Weak** $tmp4368 = &param0->compiler;
panda$core$Weak* $tmp4369 = *$tmp4368;
panda$core$Object* $tmp4370 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4369);
org$pandalanguage$pandac$FieldDecl* $tmp4371 = *(&local0);
panda$core$Int64 $tmp4372 = org$pandalanguage$pandac$Compiler$getIndex$org$pandalanguage$pandac$FieldDecl$R$panda$core$Int64(((org$pandalanguage$pandac$Compiler*) $tmp4370), $tmp4371);
*(&local2) = $tmp4372;
panda$core$Panda$unref$panda$core$Object$Q($tmp4370);
// unreffing REF($52:panda.core.Weak.T)
// line 1233
panda$core$String* $tmp4373 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4373));
panda$core$String* $tmp4374 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4374));
*(&local3) = $tmp4373;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4373));
// unreffing REF($62:panda.core.String)
// line 1234
panda$collections$Array** $tmp4375 = &param3->fields;
panda$collections$Array* $tmp4376 = *$tmp4375;
panda$core$Object* $tmp4377 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4376, param4);
panda$core$String* $tmp4378 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp4377));
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4378));
panda$core$String* $tmp4379 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4379));
*(&local4) = $tmp4378;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4378));
// unreffing REF($79:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp4377);
// unreffing REF($77:panda.collections.Array.T)
// line 1235
panda$io$IndentedOutputStream** $tmp4380 = &param0->out;
panda$io$IndentedOutputStream* $tmp4381 = *$tmp4380;
panda$core$String* $tmp4382 = *(&local4);
panda$core$String* $tmp4383 = panda$core$String$convert$R$panda$core$String($tmp4382);
panda$core$String* $tmp4384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4383, &$s4385);
panda$core$String* $tmp4386 = *(&local3);
panda$core$String* $tmp4387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4384, $tmp4386);
panda$core$String* $tmp4388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4387, &$s4389);
panda$core$String* $tmp4390 = *(&local4);
panda$core$String* $tmp4391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4388, $tmp4390);
panda$core$String* $tmp4392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4391, &$s4393);
panda$core$String* $tmp4394 = *(&local1);
panda$core$String* $tmp4395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4392, $tmp4394);
panda$core$String* $tmp4396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4395, &$s4397);
panda$core$Int64 $tmp4398 = org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldOffset$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64$R$panda$core$Int64(param0, param3, param4);
panda$core$Int64$wrapper* $tmp4399;
$tmp4399 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp4399->value = $tmp4398;
panda$core$String* $tmp4400 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4401, ((panda$core$Object*) $tmp4399));
panda$core$String* $tmp4402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4400, &$s4403);
panda$core$String* $tmp4404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4396, $tmp4402);
$fn4406 $tmp4405 = ($fn4406) ((panda$io$OutputStream*) $tmp4381)->$class->vtable[19];
$tmp4405(((panda$io$OutputStream*) $tmp4381), $tmp4404);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4404));
// unreffing REF($113:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4402));
// unreffing REF($112:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4400));
// unreffing REF($111:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4399));
// unreffing REF($110:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4396));
// unreffing REF($108:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4395));
// unreffing REF($107:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4392));
// unreffing REF($105:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4391));
// unreffing REF($104:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4388));
// unreffing REF($102:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4387));
// unreffing REF($101:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4384));
// unreffing REF($99:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4383));
// unreffing REF($98:panda.core.String)
// line 1237
panda$collections$HashMap** $tmp4407 = &param0->refs;
panda$collections$HashMap* $tmp4408 = *$tmp4407;
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4409;
$tmp4409 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4409->value = param1;
panda$core$String* $tmp4410 = *(&local3);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4408, ((panda$collections$Key*) $tmp4409), ((panda$core$Object*) $tmp4410));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4409)));
// unreffing REF($156:panda.collections.HashMap.K)
panda$core$String* $tmp4411 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4411));
// unreffing type
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp4412 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4412));
// unreffing result
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4413 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4413));
// unreffing targetRef
*(&local1) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp4414 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4414));
// unreffing data
*(&local0) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeGetFieldPointer$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$FieldDecl* param3) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
// line 1241
panda$core$String* $tmp4415 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4415));
panda$core$String* $tmp4416 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4416));
*(&local0) = $tmp4415;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4415));
// unreffing REF($1:panda.core.String)
// line 1242
panda$core$String* $tmp4417 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4417));
panda$core$String* $tmp4418 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4418));
*(&local1) = $tmp4417;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4417));
// unreffing REF($13:panda.core.String)
// line 1243
panda$io$IndentedOutputStream** $tmp4419 = &param0->out;
panda$io$IndentedOutputStream* $tmp4420 = *$tmp4419;
org$pandalanguage$pandac$Type** $tmp4421 = &param3->type;
org$pandalanguage$pandac$Type* $tmp4422 = *$tmp4421;
panda$core$String* $tmp4423 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4422);
panda$core$String* $tmp4424 = panda$core$String$convert$R$panda$core$String($tmp4423);
panda$core$String* $tmp4425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4424, &$s4426);
panda$core$String* $tmp4427 = *(&local1);
panda$core$String* $tmp4428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4425, $tmp4427);
panda$core$String* $tmp4429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4428, &$s4430);
panda$core$String* $tmp4431 = *(&local0);
panda$core$String* $tmp4432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4429, $tmp4431);
panda$core$String* $tmp4433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4432, &$s4434);
panda$core$String** $tmp4435 = &((org$pandalanguage$pandac$Symbol*) param3)->name;
panda$core$String* $tmp4436 = *$tmp4435;
panda$core$String* $tmp4437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4433, $tmp4436);
panda$core$String* $tmp4438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4437, &$s4439);
$fn4441 $tmp4440 = ($fn4441) ((panda$io$OutputStream*) $tmp4420)->$class->vtable[19];
$tmp4440(((panda$io$OutputStream*) $tmp4420), $tmp4438);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4438));
// unreffing REF($43:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4437));
// unreffing REF($42:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4433));
// unreffing REF($38:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4432));
// unreffing REF($37:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4429));
// unreffing REF($35:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4428));
// unreffing REF($34:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4425));
// unreffing REF($32:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4424));
// unreffing REF($31:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4423));
// unreffing REF($30:panda.core.String)
// line 1244
panda$collections$HashMap** $tmp4442 = &param0->refs;
panda$collections$HashMap* $tmp4443 = *$tmp4442;
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4444;
$tmp4444 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4444->value = param1;
panda$core$String* $tmp4445 = *(&local1);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4443, ((panda$collections$Key*) $tmp4444), ((panda$core$Object*) $tmp4445));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4444)));
// unreffing REF($77:panda.collections.HashMap.K)
panda$core$String* $tmp4446 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4446));
// unreffing result
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4447 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4447));
// unreffing targetRef
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeGetInterfaceMethod$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$ClassDecl* param3, panda$core$Int64 param4, org$pandalanguage$pandac$Type* param5) {

org$pandalanguage$pandac$CCodeGenerator$ClassConstant* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
// line 1249
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4448 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, param3);
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4448));
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4449 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4449));
*(&local0) = $tmp4448;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4448));
// unreffing REF($1:org.pandalanguage.pandac.CCodeGenerator.ClassConstant)
// line 1250
panda$core$String* $tmp4450 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4450));
panda$core$String* $tmp4451 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4451));
*(&local1) = $tmp4450;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4450));
// unreffing REF($13:panda.core.String)
// line 1251
panda$io$IndentedOutputStream** $tmp4452 = &param0->out;
panda$io$IndentedOutputStream* $tmp4453 = *$tmp4452;
panda$core$String* $tmp4454 = *(&local1);
panda$core$String* $tmp4455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4456, $tmp4454);
panda$core$String* $tmp4457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4455, &$s4458);
panda$core$String* $tmp4459 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4457, $tmp4459);
panda$core$String* $tmp4461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4460, &$s4462);
$fn4464 $tmp4463 = ($fn4464) ((panda$io$OutputStream*) $tmp4453)->$class->vtable[19];
$tmp4463(((panda$io$OutputStream*) $tmp4453), $tmp4461);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4461));
// unreffing REF($33:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4460));
// unreffing REF($32:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4459));
// unreffing REF($31:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4457));
// unreffing REF($30:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4455));
// unreffing REF($29:panda.core.String)
// line 1252
panda$io$IndentedOutputStream** $tmp4465 = &param0->out;
panda$io$IndentedOutputStream* $tmp4466 = *$tmp4465;
panda$core$String* $tmp4467 = *(&local1);
panda$core$String* $tmp4468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4469, $tmp4467);
panda$core$String* $tmp4470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4468, &$s4471);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4472 = *(&local0);
panda$core$String** $tmp4473 = &$tmp4472->name;
panda$core$String* $tmp4474 = *$tmp4473;
panda$core$String* $tmp4475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4470, $tmp4474);
panda$core$String* $tmp4476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4475, &$s4477);
$fn4479 $tmp4478 = ($fn4479) ((panda$io$OutputStream*) $tmp4466)->$class->vtable[19];
$tmp4478(((panda$io$OutputStream*) $tmp4466), $tmp4476);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4476));
// unreffing REF($62:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4475));
// unreffing REF($61:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4470));
// unreffing REF($57:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4468));
// unreffing REF($56:panda.core.String)
// line 1253
panda$io$IndentedOutputStream** $tmp4480 = &param0->out;
panda$io$IndentedOutputStream* $tmp4481 = *$tmp4480;
panda$core$Int64* $tmp4482 = &$tmp4481->level;
panda$core$Int64 $tmp4483 = *$tmp4482;
panda$core$Int64 $tmp4484 = (panda$core$Int64) {1};
int64_t $tmp4485 = $tmp4483.value;
int64_t $tmp4486 = $tmp4484.value;
int64_t $tmp4487 = $tmp4485 + $tmp4486;
panda$core$Int64 $tmp4488 = (panda$core$Int64) {$tmp4487};
panda$core$Int64* $tmp4489 = &$tmp4481->level;
*$tmp4489 = $tmp4488;
// line 1254
panda$io$IndentedOutputStream** $tmp4490 = &param0->out;
panda$io$IndentedOutputStream* $tmp4491 = *$tmp4490;
panda$core$String* $tmp4492 = *(&local1);
panda$core$String* $tmp4493 = panda$core$String$convert$R$panda$core$String($tmp4492);
panda$core$String* $tmp4494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4493, &$s4495);
panda$core$String* $tmp4496 = *(&local1);
panda$core$String* $tmp4497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4494, $tmp4496);
panda$core$String* $tmp4498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4497, &$s4499);
$fn4501 $tmp4500 = ($fn4501) ((panda$io$OutputStream*) $tmp4491)->$class->vtable[19];
$tmp4500(((panda$io$OutputStream*) $tmp4491), $tmp4498);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4498));
// unreffing REF($98:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4497));
// unreffing REF($97:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4494));
// unreffing REF($95:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4493));
// unreffing REF($94:panda.core.String)
// line 1255
panda$io$IndentedOutputStream** $tmp4502 = &param0->out;
panda$io$IndentedOutputStream* $tmp4503 = *$tmp4502;
panda$core$Int64* $tmp4504 = &$tmp4503->level;
panda$core$Int64 $tmp4505 = *$tmp4504;
panda$core$Int64 $tmp4506 = (panda$core$Int64) {1};
int64_t $tmp4507 = $tmp4505.value;
int64_t $tmp4508 = $tmp4506.value;
int64_t $tmp4509 = $tmp4507 - $tmp4508;
panda$core$Int64 $tmp4510 = (panda$core$Int64) {$tmp4509};
panda$core$Int64* $tmp4511 = &$tmp4503->level;
*$tmp4511 = $tmp4510;
// line 1256
panda$io$IndentedOutputStream** $tmp4512 = &param0->out;
panda$io$IndentedOutputStream* $tmp4513 = *$tmp4512;
$fn4515 $tmp4514 = ($fn4515) ((panda$io$OutputStream*) $tmp4513)->$class->vtable[19];
$tmp4514(((panda$io$OutputStream*) $tmp4513), &$s4516);
// line 1257
panda$core$String* $tmp4517 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4517));
panda$core$String* $tmp4518 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4518));
*(&local2) = $tmp4517;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4517));
// unreffing REF($132:panda.core.String)
// line 1258
panda$core$String* $tmp4519 = org$pandalanguage$pandac$CCodeGenerator$cMethodType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$Q$R$panda$core$String(param0, param5, ((org$pandalanguage$pandac$Type*) NULL));
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4519));
panda$core$String* $tmp4520 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4520));
*(&local3) = $tmp4519;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4519));
// unreffing REF($144:panda.core.String)
// line 1259
panda$io$IndentedOutputStream** $tmp4521 = &param0->out;
panda$io$IndentedOutputStream* $tmp4522 = *$tmp4521;
panda$core$String* $tmp4523 = *(&local3);
panda$core$String* $tmp4524 = panda$core$String$convert$R$panda$core$String($tmp4523);
panda$core$String* $tmp4525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4524, &$s4526);
panda$core$String* $tmp4527 = *(&local2);
panda$core$String* $tmp4528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4525, $tmp4527);
panda$core$String* $tmp4529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4528, &$s4530);
panda$core$String* $tmp4531 = *(&local1);
panda$core$String* $tmp4532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4529, $tmp4531);
panda$core$String* $tmp4533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4532, &$s4534);
panda$core$Int64$wrapper* $tmp4535;
$tmp4535 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp4535->value = param4;
panda$core$String* $tmp4536 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4533, ((panda$core$Object*) $tmp4535));
panda$core$String* $tmp4537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4536, &$s4538);
$fn4540 $tmp4539 = ($fn4540) ((panda$io$OutputStream*) $tmp4522)->$class->vtable[19];
$tmp4539(((panda$io$OutputStream*) $tmp4522), $tmp4537);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4537));
// unreffing REF($170:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4536));
// unreffing REF($169:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4535));
// unreffing REF($168:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4533));
// unreffing REF($167:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4532));
// unreffing REF($166:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4529));
// unreffing REF($164:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4528));
// unreffing REF($163:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4525));
// unreffing REF($161:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4524));
// unreffing REF($160:panda.core.String)
// line 1260
panda$collections$HashMap** $tmp4541 = &param0->refs;
panda$collections$HashMap* $tmp4542 = *$tmp4541;
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4543;
$tmp4543 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4543->value = param1;
panda$core$String* $tmp4544 = *(&local2);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4542, ((panda$collections$Key*) $tmp4543), ((panda$core$Object*) $tmp4544));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4543)));
// unreffing REF($204:panda.collections.HashMap.K)
panda$core$String* $tmp4545 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4545));
// unreffing methodType
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4546 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4546));
// unreffing result
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4547 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4547));
// unreffing itable
*(&local1) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4548 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4548));
// unreffing cc
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeGetVirtualMethod$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, panda$core$Int64 param3, org$pandalanguage$pandac$Type* param4) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
// line 1264
panda$core$String* $tmp4549 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4549));
panda$core$String* $tmp4550 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4550));
*(&local0) = $tmp4549;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4549));
// unreffing REF($1:panda.core.String)
// line 1265
panda$core$String* $tmp4551 = org$pandalanguage$pandac$CCodeGenerator$cMethodType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$Q$R$panda$core$String(param0, param4, ((org$pandalanguage$pandac$Type*) NULL));
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4551));
panda$core$String* $tmp4552 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4552));
*(&local1) = $tmp4551;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4551));
// unreffing REF($13:panda.core.String)
// line 1266
panda$io$IndentedOutputStream** $tmp4553 = &param0->out;
panda$io$IndentedOutputStream* $tmp4554 = *$tmp4553;
panda$core$String* $tmp4555 = *(&local1);
panda$core$String* $tmp4556 = panda$core$String$convert$R$panda$core$String($tmp4555);
panda$core$String* $tmp4557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4556, &$s4558);
panda$core$String* $tmp4559 = *(&local0);
panda$core$String* $tmp4560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4557, $tmp4559);
panda$core$String* $tmp4561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4560, &$s4562);
panda$core$String* $tmp4563 = *(&local1);
panda$core$String* $tmp4564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4561, $tmp4563);
panda$core$String* $tmp4565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4564, &$s4566);
panda$core$String* $tmp4567 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4568 = panda$core$String$convert$R$panda$core$String($tmp4567);
panda$core$String* $tmp4569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4568, &$s4570);
panda$core$Int64$wrapper* $tmp4571;
$tmp4571 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp4571->value = param3;
panda$core$String* $tmp4572 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4569, ((panda$core$Object*) $tmp4571));
panda$core$String* $tmp4573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4572, &$s4574);
panda$core$String* $tmp4575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4565, $tmp4573);
$fn4577 $tmp4576 = ($fn4577) ((panda$io$OutputStream*) $tmp4554)->$class->vtable[19];
$tmp4576(((panda$io$OutputStream*) $tmp4554), $tmp4575);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4575));
// unreffing REF($43:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4573));
// unreffing REF($42:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4572));
// unreffing REF($41:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4571));
// unreffing REF($40:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4569));
// unreffing REF($39:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4568));
// unreffing REF($38:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4567));
// unreffing REF($37:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4565));
// unreffing REF($36:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4564));
// unreffing REF($35:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4561));
// unreffing REF($33:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4560));
// unreffing REF($32:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4557));
// unreffing REF($30:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4556));
// unreffing REF($29:panda.core.String)
// line 1268
panda$collections$HashMap** $tmp4578 = &param0->refs;
panda$collections$HashMap* $tmp4579 = *$tmp4578;
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4580;
$tmp4580 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4580->value = param1;
panda$core$String* $tmp4581 = *(&local0);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4579, ((panda$collections$Key*) $tmp4580), ((panda$core$Object*) $tmp4581));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4580)));
// unreffing REF($89:panda.collections.HashMap.K)
panda$core$String* $tmp4582 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4582));
// unreffing methodType
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4583 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4583));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeLoad$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2) {

panda$core$String* local0 = NULL;
// line 1272
panda$core$String* $tmp4584 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4584));
panda$core$String* $tmp4585 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4585));
*(&local0) = $tmp4584;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4584));
// unreffing REF($1:panda.core.String)
// line 1273
panda$io$IndentedOutputStream** $tmp4586 = &param0->out;
panda$io$IndentedOutputStream* $tmp4587 = *$tmp4586;
$fn4589 $tmp4588 = ($fn4589) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4590 = $tmp4588(param2);
panda$core$String* $tmp4591 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4590);
panda$core$String* $tmp4592 = panda$core$String$convert$R$panda$core$String($tmp4591);
panda$core$String* $tmp4593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4592, &$s4594);
panda$core$String* $tmp4595 = *(&local0);
panda$core$String* $tmp4596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4593, $tmp4595);
panda$core$String* $tmp4597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4596, &$s4598);
panda$core$String* $tmp4599 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4597, $tmp4599);
panda$core$String* $tmp4601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4600, &$s4602);
$fn4604 $tmp4603 = ($fn4604) ((panda$io$OutputStream*) $tmp4587)->$class->vtable[19];
$tmp4603(((panda$io$OutputStream*) $tmp4587), $tmp4601);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4601));
// unreffing REF($26:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4600));
// unreffing REF($25:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4599));
// unreffing REF($24:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4597));
// unreffing REF($23:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4596));
// unreffing REF($22:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4593));
// unreffing REF($20:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4592));
// unreffing REF($19:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4591));
// unreffing REF($18:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4590));
// unreffing REF($17:org.pandalanguage.pandac.Type)
// line 1274
panda$collections$HashMap** $tmp4605 = &param0->refs;
panda$collections$HashMap* $tmp4606 = *$tmp4605;
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4607;
$tmp4607 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4607->value = param1;
panda$core$String* $tmp4608 = *(&local0);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4606, ((panda$collections$Key*) $tmp4607), ((panda$core$Object*) $tmp4608));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4607)));
// unreffing REF($60:panda.collections.HashMap.K)
panda$core$String* $tmp4609 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4609));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeNegate$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2) {

panda$core$String* local0 = NULL;
// line 1278
panda$core$String* $tmp4610 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4610));
panda$core$String* $tmp4611 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4611));
*(&local0) = $tmp4610;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4610));
// unreffing REF($1:panda.core.String)
// line 1279
panda$io$IndentedOutputStream** $tmp4612 = &param0->out;
panda$io$IndentedOutputStream* $tmp4613 = *$tmp4612;
$fn4615 $tmp4614 = ($fn4615) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4616 = $tmp4614(param2);
panda$core$String* $tmp4617 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4616);
panda$core$String* $tmp4618 = panda$core$String$convert$R$panda$core$String($tmp4617);
panda$core$String* $tmp4619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4618, &$s4620);
panda$core$String* $tmp4621 = *(&local0);
panda$core$String* $tmp4622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4619, $tmp4621);
panda$core$String* $tmp4623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4622, &$s4624);
panda$core$String* $tmp4625 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4623, $tmp4625);
panda$core$String* $tmp4627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4626, &$s4628);
$fn4630 $tmp4629 = ($fn4630) ((panda$io$OutputStream*) $tmp4613)->$class->vtable[19];
$tmp4629(((panda$io$OutputStream*) $tmp4613), $tmp4627);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4627));
// unreffing REF($26:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4626));
// unreffing REF($25:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4625));
// unreffing REF($24:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4623));
// unreffing REF($23:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4622));
// unreffing REF($22:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4619));
// unreffing REF($20:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4618));
// unreffing REF($19:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4617));
// unreffing REF($18:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4616));
// unreffing REF($17:org.pandalanguage.pandac.Type)
// line 1280
panda$collections$HashMap** $tmp4631 = &param0->refs;
panda$collections$HashMap* $tmp4632 = *$tmp4631;
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4633;
$tmp4633 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4633->value = param1;
panda$core$String* $tmp4634 = *(&local0);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4632, ((panda$collections$Key*) $tmp4633), ((panda$core$Object*) $tmp4634));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4633)));
// unreffing REF($60:panda.collections.HashMap.K)
panda$core$String* $tmp4635 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4635));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeNot$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2) {

panda$core$String* local0 = NULL;
// line 1284
panda$core$String* $tmp4636 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4636));
panda$core$String* $tmp4637 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4637));
*(&local0) = $tmp4636;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4636));
// unreffing REF($1:panda.core.String)
// line 1285
panda$io$IndentedOutputStream** $tmp4638 = &param0->out;
panda$io$IndentedOutputStream* $tmp4639 = *$tmp4638;
$fn4641 $tmp4640 = ($fn4641) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4642 = $tmp4640(param2);
panda$core$String* $tmp4643 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4642);
panda$core$String* $tmp4644 = panda$core$String$convert$R$panda$core$String($tmp4643);
panda$core$String* $tmp4645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4644, &$s4646);
panda$core$String* $tmp4647 = *(&local0);
panda$core$String* $tmp4648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4645, $tmp4647);
panda$core$String* $tmp4649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4648, &$s4650);
panda$core$String* $tmp4651 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4649, $tmp4651);
panda$core$String* $tmp4653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4652, &$s4654);
$fn4656 $tmp4655 = ($fn4656) ((panda$io$OutputStream*) $tmp4639)->$class->vtable[19];
$tmp4655(((panda$io$OutputStream*) $tmp4639), $tmp4653);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4653));
// unreffing REF($26:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4652));
// unreffing REF($25:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4651));
// unreffing REF($24:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4649));
// unreffing REF($23:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4648));
// unreffing REF($22:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4645));
// unreffing REF($20:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4644));
// unreffing REF($19:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4643));
// unreffing REF($18:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4642));
// unreffing REF($17:org.pandalanguage.pandac.Type)
// line 1286
panda$collections$HashMap** $tmp4657 = &param0->refs;
panda$collections$HashMap* $tmp4658 = *$tmp4657;
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4659;
$tmp4659 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4659->value = param1;
panda$core$String* $tmp4660 = *(&local0);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4658, ((panda$collections$Key*) $tmp4659), ((panda$core$Object*) $tmp4660));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4659)));
// unreffing REF($60:panda.collections.HashMap.K)
panda$core$String* $tmp4661 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4661));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writePointerAlloc$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$Type* param3) {

panda$core$String* local0 = NULL;
panda$core$Int64 local1;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
// line 1290
panda$core$String* $tmp4662 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4662));
panda$core$String* $tmp4663 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4663));
*(&local0) = $tmp4662;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4662));
// unreffing REF($1:panda.core.String)
// line 1291
panda$core$Int64 $tmp4664 = org$pandalanguage$pandac$CCodeGenerator$stride$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param3);
*(&local1) = $tmp4664;
// line 1292
panda$core$String* $tmp4665 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4665));
panda$core$String* $tmp4666 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4666));
*(&local2) = $tmp4665;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4665));
// unreffing REF($16:panda.core.String)
// line 1293
panda$core$String* $tmp4667 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4667));
panda$core$String* $tmp4668 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4668));
*(&local3) = $tmp4667;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4667));
// unreffing REF($28:panda.core.String)
// line 1294
panda$io$IndentedOutputStream** $tmp4669 = &param0->out;
panda$io$IndentedOutputStream* $tmp4670 = *$tmp4669;
panda$core$String* $tmp4671 = *(&local2);
panda$core$String* $tmp4672 = panda$core$String$convert$R$panda$core$String($tmp4671);
panda$core$String* $tmp4673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4672, &$s4674);
panda$core$String* $tmp4675 = *(&local3);
panda$core$String* $tmp4676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4673, $tmp4675);
panda$core$String* $tmp4677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4676, &$s4678);
panda$core$String* $tmp4679 = *(&local2);
panda$core$String* $tmp4680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4677, $tmp4679);
panda$core$String* $tmp4681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4680, &$s4682);
panda$core$String* $tmp4683 = *(&local0);
panda$core$String* $tmp4684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4681, $tmp4683);
panda$core$String* $tmp4685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4684, &$s4686);
panda$core$Int64 $tmp4687 = *(&local1);
panda$core$String* $tmp4688 = panda$core$Int64$convert$R$panda$core$String($tmp4687);
panda$core$String* $tmp4689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4688, &$s4690);
panda$core$String* $tmp4691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4685, $tmp4689);
$fn4693 $tmp4692 = ($fn4693) ((panda$io$OutputStream*) $tmp4670)->$class->vtable[19];
$tmp4692(((panda$io$OutputStream*) $tmp4670), $tmp4691);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4691));
// unreffing REF($58:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4689));
// unreffing REF($57:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4688));
// unreffing REF($56:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4685));
// unreffing REF($54:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4684));
// unreffing REF($53:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4681));
// unreffing REF($51:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4680));
// unreffing REF($50:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4677));
// unreffing REF($48:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4676));
// unreffing REF($47:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4673));
// unreffing REF($45:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4672));
// unreffing REF($44:panda.core.String)
// line 1296
panda$collections$HashMap** $tmp4694 = &param0->refs;
panda$collections$HashMap* $tmp4695 = *$tmp4694;
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4696;
$tmp4696 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4696->value = param1;
panda$core$String* $tmp4697 = *(&local3);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4695, ((panda$collections$Key*) $tmp4696), ((panda$core$Object*) $tmp4697));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4696)));
// unreffing REF($98:panda.collections.HashMap.K)
panda$core$String* $tmp4698 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4698));
// unreffing result
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4699 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4699));
// unreffing type
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4700 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4700));
// unreffing countRef
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writePointerDestroy$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1) {

panda$core$String* local0 = NULL;
// line 1300
panda$core$String* $tmp4701 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param1);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4701));
panda$core$String* $tmp4702 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4702));
*(&local0) = $tmp4701;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4701));
// unreffing REF($1:panda.core.String)
// line 1301
panda$io$IndentedOutputStream** $tmp4703 = &param0->out;
panda$io$IndentedOutputStream* $tmp4704 = *$tmp4703;
panda$core$String* $tmp4705 = *(&local0);
panda$core$String* $tmp4706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4707, $tmp4705);
panda$core$String* $tmp4708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4706, &$s4709);
$fn4711 $tmp4710 = ($fn4711) ((panda$io$OutputStream*) $tmp4704)->$class->vtable[19];
$tmp4710(((panda$io$OutputStream*) $tmp4704), $tmp4708);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4708));
// unreffing REF($18:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4706));
// unreffing REF($17:panda.core.String)
panda$core$String* $tmp4712 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4712));
// unreffing ptrRef
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writePointerGetIndex$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$IR$Value* param3) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
// line 1305
panda$core$String* $tmp4713 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4713));
panda$core$String* $tmp4714 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4714));
*(&local0) = $tmp4713;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4713));
// unreffing REF($1:panda.core.String)
// line 1306
panda$core$String* $tmp4715 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param3);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4715));
panda$core$String* $tmp4716 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4716));
*(&local1) = $tmp4715;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4715));
// unreffing REF($13:panda.core.String)
// line 1307
panda$core$String* $tmp4717 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4717));
panda$core$String* $tmp4718 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4718));
*(&local2) = $tmp4717;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4717));
// unreffing REF($25:panda.core.String)
// line 1308
panda$io$IndentedOutputStream** $tmp4719 = &param0->out;
panda$io$IndentedOutputStream* $tmp4720 = *$tmp4719;
$fn4722 $tmp4721 = ($fn4722) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4723 = $tmp4721(param2);
org$pandalanguage$pandac$FixedArray** $tmp4724 = &$tmp4723->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp4725 = *$tmp4724;
panda$core$Int64 $tmp4726 = (panda$core$Int64) {1};
panda$core$Object* $tmp4727 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp4725, $tmp4726);
panda$core$String* $tmp4728 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp4727));
panda$core$String* $tmp4729 = panda$core$String$convert$R$panda$core$String($tmp4728);
panda$core$String* $tmp4730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4729, &$s4731);
panda$core$String* $tmp4732 = *(&local2);
panda$core$String* $tmp4733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4730, $tmp4732);
panda$core$String* $tmp4734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4733, &$s4735);
panda$core$String* $tmp4736 = *(&local0);
panda$core$String* $tmp4737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4734, $tmp4736);
panda$core$String* $tmp4738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4737, &$s4739);
panda$core$String* $tmp4740 = *(&local1);
panda$core$String* $tmp4741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4738, $tmp4740);
panda$core$String* $tmp4742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4741, &$s4743);
$fn4745 $tmp4744 = ($fn4745) ((panda$io$OutputStream*) $tmp4720)->$class->vtable[19];
$tmp4744(((panda$io$OutputStream*) $tmp4720), $tmp4742);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4742));
// unreffing REF($60:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4741));
// unreffing REF($59:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4738));
// unreffing REF($57:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4737));
// unreffing REF($56:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4734));
// unreffing REF($54:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4733));
// unreffing REF($53:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4730));
// unreffing REF($51:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4729));
// unreffing REF($50:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4728));
// unreffing REF($49:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp4727);
// unreffing REF($47:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4723));
// unreffing REF($41:org.pandalanguage.pandac.Type)
// line 1309
panda$collections$HashMap** $tmp4746 = &param0->refs;
panda$collections$HashMap* $tmp4747 = *$tmp4746;
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4748;
$tmp4748 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4748->value = param1;
panda$core$String* $tmp4749 = *(&local2);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4747, ((panda$collections$Key*) $tmp4748), ((panda$core$Object*) $tmp4749));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4748)));
// unreffing REF($100:panda.collections.HashMap.K)
panda$core$String* $tmp4750 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4750));
// unreffing result
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4751 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4751));
// unreffing indexRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4752 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4752));
// unreffing base
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writePointerOffset$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$IR$Value* param3) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
// line 1313
panda$core$String* $tmp4753 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4753));
panda$core$String* $tmp4754 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4754));
*(&local0) = $tmp4753;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4753));
// unreffing REF($1:panda.core.String)
// line 1314
panda$core$String* $tmp4755 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param3);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4755));
panda$core$String* $tmp4756 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4756));
*(&local1) = $tmp4755;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4755));
// unreffing REF($13:panda.core.String)
// line 1315
panda$core$String* $tmp4757 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4757));
panda$core$String* $tmp4758 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4758));
*(&local2) = $tmp4757;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4757));
// unreffing REF($25:panda.core.String)
// line 1316
panda$io$IndentedOutputStream** $tmp4759 = &param0->out;
panda$io$IndentedOutputStream* $tmp4760 = *$tmp4759;
$fn4762 $tmp4761 = ($fn4762) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4763 = $tmp4761(param2);
panda$core$String* $tmp4764 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4763);
panda$core$String* $tmp4765 = panda$core$String$convert$R$panda$core$String($tmp4764);
panda$core$String* $tmp4766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4765, &$s4767);
panda$core$String* $tmp4768 = *(&local2);
panda$core$String* $tmp4769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4766, $tmp4768);
panda$core$String* $tmp4770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4769, &$s4771);
panda$core$String* $tmp4772 = *(&local0);
panda$core$String* $tmp4773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4770, $tmp4772);
panda$core$String* $tmp4774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4773, &$s4775);
panda$core$String* $tmp4776 = *(&local1);
panda$core$String* $tmp4777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4774, $tmp4776);
panda$core$String* $tmp4778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4777, &$s4779);
$fn4781 $tmp4780 = ($fn4781) ((panda$io$OutputStream*) $tmp4760)->$class->vtable[19];
$tmp4780(((panda$io$OutputStream*) $tmp4760), $tmp4778);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4778));
// unreffing REF($53:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4777));
// unreffing REF($52:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4774));
// unreffing REF($50:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4773));
// unreffing REF($49:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4770));
// unreffing REF($47:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4769));
// unreffing REF($46:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4766));
// unreffing REF($44:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4765));
// unreffing REF($43:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4764));
// unreffing REF($42:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4763));
// unreffing REF($41:org.pandalanguage.pandac.Type)
// line 1317
panda$collections$HashMap** $tmp4782 = &param0->refs;
panda$collections$HashMap* $tmp4783 = *$tmp4782;
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4784;
$tmp4784 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4784->value = param1;
panda$core$String* $tmp4785 = *(&local2);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4783, ((panda$collections$Key*) $tmp4784), ((panda$core$Object*) $tmp4785));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4784)));
// unreffing REF($90:panda.collections.HashMap.K)
panda$core$String* $tmp4786 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4786));
// unreffing result
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4787 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4787));
// unreffing offsetRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4788 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4788));
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
// line 1322
panda$core$String* $tmp4789 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4789));
panda$core$String* $tmp4790 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4790));
*(&local0) = $tmp4789;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4789));
// unreffing REF($1:panda.core.String)
// line 1323
panda$core$String* $tmp4791 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param3);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4791));
panda$core$String* $tmp4792 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4792));
*(&local1) = $tmp4791;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4791));
// unreffing REF($13:panda.core.String)
// line 1324
panda$core$String* $tmp4793 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param4);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4793));
panda$core$String* $tmp4794 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4794));
*(&local2) = $tmp4793;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4793));
// unreffing REF($25:panda.core.String)
// line 1325
$fn4796 $tmp4795 = ($fn4796) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4797 = $tmp4795(param2);
panda$core$Int64 $tmp4798 = org$pandalanguage$pandac$CCodeGenerator$stride$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, $tmp4797);
*(&local3) = $tmp4798;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4797));
// unreffing REF($38:org.pandalanguage.pandac.Type)
// line 1326
panda$core$Int64 $tmp4799 = *(&local3);
panda$core$Int64 $tmp4800 = (panda$core$Int64) {0};
int64_t $tmp4801 = $tmp4799.value;
int64_t $tmp4802 = $tmp4800.value;
bool $tmp4803 = $tmp4801 > $tmp4802;
panda$core$Bit $tmp4804 = (panda$core$Bit) {$tmp4803};
bool $tmp4805 = $tmp4804.value;
if ($tmp4805) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp4806 = (panda$core$Int64) {1326};
$fn4808 $tmp4807 = ($fn4808) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4809 = $tmp4807(param2);
panda$core$String* $tmp4810 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4811, ((panda$core$Object*) $tmp4809));
panda$core$String* $tmp4812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4810, &$s4813);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4814, $tmp4806, $tmp4812);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4812));
// unreffing REF($58:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4810));
// unreffing REF($57:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4809));
// unreffing REF($55:org.pandalanguage.pandac.Type)
abort(); // unreachable
block1:;
// line 1327
panda$core$String* $tmp4815 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4815));
panda$core$String* $tmp4816 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4816));
*(&local4) = $tmp4815;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4815));
// unreffing REF($71:panda.core.String)
// line 1328
panda$io$IndentedOutputStream** $tmp4817 = &param0->out;
panda$io$IndentedOutputStream* $tmp4818 = *$tmp4817;
$fn4820 $tmp4819 = ($fn4820) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4821 = $tmp4819(param2);
panda$core$String* $tmp4822 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4821);
panda$core$String* $tmp4823 = panda$core$String$convert$R$panda$core$String($tmp4822);
panda$core$String* $tmp4824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4823, &$s4825);
panda$core$String* $tmp4826 = *(&local4);
panda$core$String* $tmp4827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4824, $tmp4826);
panda$core$String* $tmp4828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4827, &$s4829);
$fn4831 $tmp4830 = ($fn4831) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4832 = $tmp4830(param2);
panda$core$String* $tmp4833 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4832);
panda$core$String* $tmp4834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4828, $tmp4833);
panda$core$String* $tmp4835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4834, &$s4836);
panda$core$String* $tmp4837 = *(&local0);
panda$core$String* $tmp4838 = panda$core$String$convert$R$panda$core$String($tmp4837);
panda$core$String* $tmp4839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4838, &$s4840);
panda$core$String* $tmp4841 = *(&local1);
panda$core$String* $tmp4842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4839, $tmp4841);
panda$core$String* $tmp4843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4842, &$s4844);
panda$core$Int64 $tmp4845 = *(&local3);
panda$core$Int64$wrapper* $tmp4846;
$tmp4846 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp4846->value = $tmp4845;
panda$core$String* $tmp4847 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4843, ((panda$core$Object*) $tmp4846));
panda$core$String* $tmp4848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4847, &$s4849);
panda$core$String* $tmp4850 = *(&local2);
panda$core$String* $tmp4851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4848, $tmp4850);
panda$core$String* $tmp4852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4851, &$s4853);
panda$core$Int64 $tmp4854 = *(&local3);
panda$core$Int64$wrapper* $tmp4855;
$tmp4855 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp4855->value = $tmp4854;
panda$core$String* $tmp4856 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4852, ((panda$core$Object*) $tmp4855));
panda$core$String* $tmp4857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4856, &$s4858);
panda$core$String* $tmp4859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4835, $tmp4857);
$fn4861 $tmp4860 = ($fn4861) ((panda$io$OutputStream*) $tmp4818)->$class->vtable[19];
$tmp4860(((panda$io$OutputStream*) $tmp4818), $tmp4859);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4859));
// unreffing REF($116:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4857));
// unreffing REF($115:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4856));
// unreffing REF($114:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4855));
// unreffing REF($113:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4852));
// unreffing REF($111:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4851));
// unreffing REF($110:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4848));
// unreffing REF($108:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4847));
// unreffing REF($107:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4846));
// unreffing REF($106:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4843));
// unreffing REF($104:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4842));
// unreffing REF($103:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4839));
// unreffing REF($101:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4838));
// unreffing REF($100:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4835));
// unreffing REF($98:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4834));
// unreffing REF($97:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4833));
// unreffing REF($96:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4832));
// unreffing REF($95:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4828));
// unreffing REF($93:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4827));
// unreffing REF($92:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4824));
// unreffing REF($90:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4823));
// unreffing REF($89:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4822));
// unreffing REF($88:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4821));
// unreffing REF($87:org.pandalanguage.pandac.Type)
// line 1330
panda$collections$HashMap** $tmp4862 = &param0->refs;
panda$collections$HashMap* $tmp4863 = *$tmp4862;
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4864;
$tmp4864 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4864->value = param1;
panda$core$String* $tmp4865 = *(&local4);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4863, ((panda$collections$Key*) $tmp4864), ((panda$core$Object*) $tmp4865));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4864)));
// unreffing REF($192:panda.collections.HashMap.K)
panda$core$String* $tmp4866 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4866));
// unreffing result
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp4867 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4867));
// unreffing newCountRef
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4868 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4868));
// unreffing oldCountRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4869 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4869));
// unreffing ptrRef
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writePointerSetIndex$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$IR$Value* param3) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
// line 1334
panda$core$String* $tmp4870 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4870));
panda$core$String* $tmp4871 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4871));
*(&local0) = $tmp4870;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4870));
// unreffing REF($1:panda.core.String)
// line 1335
panda$core$String* $tmp4872 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param3);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4872));
panda$core$String* $tmp4873 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4873));
*(&local1) = $tmp4872;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4872));
// unreffing REF($13:panda.core.String)
// line 1336
panda$core$String* $tmp4874 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param1);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4874));
panda$core$String* $tmp4875 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4875));
*(&local2) = $tmp4874;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4874));
// unreffing REF($25:panda.core.String)
// line 1337
panda$io$IndentedOutputStream** $tmp4876 = &param0->out;
panda$io$IndentedOutputStream* $tmp4877 = *$tmp4876;
panda$core$String* $tmp4878 = *(&local0);
panda$core$String* $tmp4879 = panda$core$String$convert$R$panda$core$String($tmp4878);
panda$core$String* $tmp4880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4879, &$s4881);
panda$core$String* $tmp4882 = *(&local1);
panda$core$String* $tmp4883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4880, $tmp4882);
panda$core$String* $tmp4884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4883, &$s4885);
panda$core$String* $tmp4886 = *(&local2);
panda$core$String* $tmp4887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4884, $tmp4886);
panda$core$String* $tmp4888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4887, &$s4889);
$fn4891 $tmp4890 = ($fn4891) ((panda$io$OutputStream*) $tmp4877)->$class->vtable[19];
$tmp4890(((panda$io$OutputStream*) $tmp4877), $tmp4888);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4888));
// unreffing REF($48:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4887));
// unreffing REF($47:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4884));
// unreffing REF($45:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4883));
// unreffing REF($44:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4880));
// unreffing REF($42:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4879));
// unreffing REF($41:panda.core.String)
panda$core$String* $tmp4892 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4892));
// unreffing valueRef
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4893 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4893));
// unreffing indexRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4894 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4894));
// unreffing base
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1) {

// line 1341
panda$core$Bit $tmp4895 = panda$core$Bit$init$builtin_bit(param1 != NULL);
bool $tmp4896 = $tmp4895.value;
if ($tmp4896) goto block1; else goto block3;
block1:;
// line 1342
panda$io$IndentedOutputStream** $tmp4897 = &param0->out;
panda$io$IndentedOutputStream* $tmp4898 = *$tmp4897;
panda$core$String* $tmp4899 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param1);
panda$core$String* $tmp4900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4901, $tmp4899);
panda$core$String* $tmp4902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4900, &$s4903);
$fn4905 $tmp4904 = ($fn4905) ((panda$io$OutputStream*) $tmp4898)->$class->vtable[19];
$tmp4904(((panda$io$OutputStream*) $tmp4898), $tmp4902);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4902));
// unreffing REF($12:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4900));
// unreffing REF($11:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4899));
// unreffing REF($10:panda.core.String)
goto block2;
block3:;
// line 1
// line 1345
panda$io$IndentedOutputStream** $tmp4906 = &param0->out;
panda$io$IndentedOutputStream* $tmp4907 = *$tmp4906;
$fn4909 $tmp4908 = ($fn4909) ((panda$io$OutputStream*) $tmp4907)->$class->vtable[19];
$tmp4908(((panda$io$OutputStream*) $tmp4907), &$s4910);
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
// line 1350
panda$core$Weak** $tmp4911 = &param2->owner;
panda$core$Weak* $tmp4912 = *$tmp4911;
panda$core$Object* $tmp4913 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4912);
panda$core$Bit* $tmp4914 = &((org$pandalanguage$pandac$ClassDecl*) $tmp4913)->external;
panda$core$Bit $tmp4915 = *$tmp4914;
bool $tmp4916 = $tmp4915.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp4913);
// unreffing REF($4:panda.core.Weak.T)
if ($tmp4916) goto block1; else goto block2;
block1:;
// line 1351
org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(param0, param2);
goto block2;
block2:;
// line 1353
panda$core$Bit $tmp4917 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(param0, param2);
*(&local0) = $tmp4917;
// line 1354
org$pandalanguage$pandac$Type** $tmp4918 = &param2->returnType;
org$pandalanguage$pandac$Type* $tmp4919 = *$tmp4918;
panda$core$String* $tmp4920 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4919);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4920));
panda$core$String* $tmp4921 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4921));
*(&local1) = $tmp4920;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4920));
// unreffing REF($22:panda.core.String)
// line 1355
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4922));
panda$core$String* $tmp4923 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4923));
*(&local2) = &$s4924;
// line 1356
*(&local3) = ((panda$core$String*) NULL);
// line 1357
org$pandalanguage$pandac$Type** $tmp4925 = &param2->returnType;
org$pandalanguage$pandac$Type* $tmp4926 = *$tmp4925;
org$pandalanguage$pandac$Type* $tmp4927 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp4928 = ((panda$core$Equatable*) $tmp4926)->$class->itable;
while ($tmp4928->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4928 = $tmp4928->next;
}
$fn4930 $tmp4929 = $tmp4928->methods[1];
panda$core$Bit $tmp4931 = $tmp4929(((panda$core$Equatable*) $tmp4926), ((panda$core$Equatable*) $tmp4927));
bool $tmp4932 = $tmp4931.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4927));
// unreffing REF($48:org.pandalanguage.pandac.Type)
if ($tmp4932) goto block3; else goto block4;
block3:;
// line 1358
panda$core$String* $tmp4933 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4933));
panda$core$String* $tmp4934 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4934));
*(&local3) = $tmp4933;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4933));
// unreffing REF($58:panda.core.String)
// line 1359
panda$core$Bit $tmp4935 = *(&local0);
bool $tmp4936 = $tmp4935.value;
if ($tmp4936) goto block5; else goto block7;
block5:;
// line 1360
panda$io$IndentedOutputStream** $tmp4937 = &param0->out;
panda$io$IndentedOutputStream* $tmp4938 = *$tmp4937;
panda$core$String* $tmp4939 = *(&local1);
panda$core$String* $tmp4940 = panda$core$String$convert$R$panda$core$String($tmp4939);
panda$core$String* $tmp4941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4940, &$s4942);
panda$core$String* $tmp4943 = *(&local3);
panda$core$String* $tmp4944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4941, $tmp4943);
panda$core$String* $tmp4945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4944, &$s4946);
$fn4948 $tmp4947 = ($fn4948) ((panda$io$OutputStream*) $tmp4938)->$class->vtable[19];
$tmp4947(((panda$io$OutputStream*) $tmp4938), $tmp4945);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4945));
// unreffing REF($83:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4944));
// unreffing REF($82:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4941));
// unreffing REF($79:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4940));
// unreffing REF($78:panda.core.String)
goto block6;
block7:;
// line 1
// line 1363
panda$io$IndentedOutputStream** $tmp4949 = &param0->out;
panda$io$IndentedOutputStream* $tmp4950 = *$tmp4949;
panda$core$String* $tmp4951 = *(&local1);
panda$core$String* $tmp4952 = panda$core$String$convert$R$panda$core$String($tmp4951);
panda$core$String* $tmp4953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4952, &$s4954);
panda$core$String* $tmp4955 = *(&local3);
panda$core$String* $tmp4956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4953, $tmp4955);
panda$core$String* $tmp4957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4956, &$s4958);
$fn4960 $tmp4959 = ($fn4960) ((panda$io$OutputStream*) $tmp4950)->$class->vtable[17];
$tmp4959(((panda$io$OutputStream*) $tmp4950), $tmp4957);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4957));
// unreffing REF($110:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4956));
// unreffing REF($109:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4953));
// unreffing REF($106:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4952));
// unreffing REF($105:panda.core.String)
goto block6;
block6:;
// line 1365
panda$collections$HashMap** $tmp4961 = &param0->refs;
panda$collections$HashMap* $tmp4962 = *$tmp4961;
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4963;
$tmp4963 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4963->value = param1;
panda$core$String* $tmp4964 = *(&local3);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4962, ((panda$collections$Key*) $tmp4963), ((panda$core$Object*) $tmp4964));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4963)));
// unreffing REF($130:panda.collections.HashMap.K)
goto block4;
block4:;
// line 1367
panda$io$IndentedOutputStream** $tmp4965 = &param0->out;
panda$io$IndentedOutputStream* $tmp4966 = *$tmp4965;
panda$core$String* $tmp4967 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param2);
panda$core$String* $tmp4968 = panda$core$String$convert$R$panda$core$String($tmp4967);
panda$core$String* $tmp4969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4968, &$s4970);
$fn4972 $tmp4971 = ($fn4972) ((panda$io$OutputStream*) $tmp4966)->$class->vtable[17];
$tmp4971(((panda$io$OutputStream*) $tmp4966), $tmp4969);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4969));
// unreffing REF($145:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4968));
// unreffing REF($144:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4967));
// unreffing REF($143:panda.core.String)
// line 1368
panda$core$Bit $tmp4973 = *(&local0);
bool $tmp4974 = $tmp4973.value;
if ($tmp4974) goto block8; else goto block9;
block8:;
// line 1369
panda$io$IndentedOutputStream** $tmp4975 = &param0->out;
panda$io$IndentedOutputStream* $tmp4976 = *$tmp4975;
panda$core$String* $tmp4977 = *(&local3);
panda$core$String* $tmp4978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4979, $tmp4977);
panda$core$String* $tmp4980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4978, &$s4981);
$fn4983 $tmp4982 = ($fn4983) ((panda$io$OutputStream*) $tmp4976)->$class->vtable[17];
$tmp4982(((panda$io$OutputStream*) $tmp4976), $tmp4980);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4980));
// unreffing REF($168:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4978));
// unreffing REF($167:panda.core.String)
// line 1370
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4984));
panda$core$String* $tmp4985 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4985));
*(&local2) = &$s4986;
goto block9;
block9:;
// line 1372
ITable* $tmp4987 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp4987->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp4987 = $tmp4987->next;
}
$fn4989 $tmp4988 = $tmp4987->methods[0];
panda$collections$Iterator* $tmp4990 = $tmp4988(((panda$collections$Iterable*) param3));
goto block10;
block10:;
ITable* $tmp4991 = $tmp4990->$class->itable;
while ($tmp4991->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp4991 = $tmp4991->next;
}
$fn4993 $tmp4992 = $tmp4991->methods[0];
panda$core$Bit $tmp4994 = $tmp4992($tmp4990);
bool $tmp4995 = $tmp4994.value;
if ($tmp4995) goto block12; else goto block11;
block11:;
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
ITable* $tmp4996 = $tmp4990->$class->itable;
while ($tmp4996->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp4996 = $tmp4996->next;
}
$fn4998 $tmp4997 = $tmp4996->methods[1];
panda$core$Object* $tmp4999 = $tmp4997($tmp4990);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) $tmp4999)));
org$pandalanguage$pandac$IR$Value* $tmp5000 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5000));
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) $tmp4999);
// line 1373
panda$io$IndentedOutputStream** $tmp5001 = &param0->out;
panda$io$IndentedOutputStream* $tmp5002 = *$tmp5001;
panda$core$String* $tmp5003 = *(&local2);
$fn5005 $tmp5004 = ($fn5005) ((panda$io$OutputStream*) $tmp5002)->$class->vtable[17];
$tmp5004(((panda$io$OutputStream*) $tmp5002), $tmp5003);
// line 1374
panda$io$IndentedOutputStream** $tmp5006 = &param0->out;
panda$io$IndentedOutputStream* $tmp5007 = *$tmp5006;
org$pandalanguage$pandac$IR$Value* $tmp5008 = *(&local4);
panda$core$String* $tmp5009 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, $tmp5008);
$fn5011 $tmp5010 = ($fn5011) ((panda$io$OutputStream*) $tmp5007)->$class->vtable[17];
$tmp5010(((panda$io$OutputStream*) $tmp5007), $tmp5009);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5009));
// unreffing REF($220:panda.core.String)
// line 1375
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s5012));
panda$core$String* $tmp5013 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5013));
*(&local2) = &$s5014;
panda$core$Panda$unref$panda$core$Object$Q($tmp4999);
// unreffing REF($200:panda.collections.Iterator.T)
org$pandalanguage$pandac$IR$Value* $tmp5015 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5015));
// unreffing a
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block10;
block12:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4990));
// unreffing REF($189:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 1377
panda$io$IndentedOutputStream** $tmp5016 = &param0->out;
panda$io$IndentedOutputStream* $tmp5017 = *$tmp5016;
$fn5019 $tmp5018 = ($fn5019) ((panda$io$OutputStream*) $tmp5017)->$class->vtable[19];
$tmp5018(((panda$io$OutputStream*) $tmp5017), &$s5020);
panda$core$String* $tmp5021 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5021));
// unreffing result
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp5022 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5022));
// unreffing separator
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp5023 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5023));
// unreffing actualResultType
*(&local1) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeStore$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1, org$pandalanguage$pandac$IR$Value* param2) {

// line 1381
panda$io$IndentedOutputStream** $tmp5024 = &param0->out;
panda$io$IndentedOutputStream* $tmp5025 = *$tmp5024;
panda$core$String* $tmp5026 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp5027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5028, $tmp5026);
panda$core$String* $tmp5029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5027, &$s5030);
panda$core$String* $tmp5031 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param1);
panda$core$String* $tmp5032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5029, $tmp5031);
panda$core$String* $tmp5033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5032, &$s5034);
$fn5036 $tmp5035 = ($fn5036) ((panda$io$OutputStream*) $tmp5025)->$class->vtable[19];
$tmp5035(((panda$io$OutputStream*) $tmp5025), $tmp5033);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5033));
// unreffing REF($9:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5032));
// unreffing REF($8:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5031));
// unreffing REF($7:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5029));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5027));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5026));
// unreffing REF($4:panda.core.String)
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
org$pandalanguage$pandac$FixedArray* local19 = NULL;
org$pandalanguage$pandac$Position local20;
org$pandalanguage$pandac$IR$Value* local21 = NULL;
org$pandalanguage$pandac$FixedArray* local22 = NULL;
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
org$pandalanguage$pandac$FixedArray* local71 = NULL;
org$pandalanguage$pandac$Position local72;
org$pandalanguage$pandac$IR$Value* local73 = NULL;
org$pandalanguage$pandac$IR$Value* local74 = NULL;
org$pandalanguage$pandac$Position local75;
// line 1385
panda$core$Int64* $tmp5037 = &param2->$rawValue;
panda$core$Int64 $tmp5038 = *$tmp5037;
panda$core$Int64 $tmp5039 = (panda$core$Int64) {0};
panda$core$Bit $tmp5040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5039);
bool $tmp5041 = $tmp5040.value;
if ($tmp5041) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp5042 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5043 = *$tmp5042;
*(&local0) = $tmp5043;
org$pandalanguage$pandac$IR$Value** $tmp5044 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5045 = *$tmp5044;
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5045));
org$pandalanguage$pandac$IR$Value* $tmp5046 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5046));
*(&local1) = $tmp5045;
org$pandalanguage$pandac$parser$Token$Kind* $tmp5047 = (org$pandalanguage$pandac$parser$Token$Kind*) (param2->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp5048 = *$tmp5047;
*(&local2) = $tmp5048;
org$pandalanguage$pandac$IR$Value** $tmp5049 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp5050 = *$tmp5049;
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5050));
org$pandalanguage$pandac$IR$Value* $tmp5051 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5051));
*(&local3) = $tmp5050;
org$pandalanguage$pandac$Type** $tmp5052 = (org$pandalanguage$pandac$Type**) (param2->$data + 40);
org$pandalanguage$pandac$Type* $tmp5053 = *$tmp5052;
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5053));
org$pandalanguage$pandac$Type* $tmp5054 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5054));
*(&local4) = $tmp5053;
// line 1387
org$pandalanguage$pandac$IR$Value* $tmp5055 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp5056 = *(&local2);
org$pandalanguage$pandac$IR$Value* $tmp5057 = *(&local3);
org$pandalanguage$pandac$Type* $tmp5058 = *(&local4);
org$pandalanguage$pandac$CCodeGenerator$writeBinary$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(param0, param1, $tmp5055, $tmp5056, $tmp5057, $tmp5058);
org$pandalanguage$pandac$Type* $tmp5059 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5059));
// unreffing type
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5060 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5060));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5061 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5061));
// unreffing left
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp5062 = (panda$core$Int64) {1};
panda$core$Bit $tmp5063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5062);
bool $tmp5064 = $tmp5063.value;
if ($tmp5064) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp5065 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5066 = *$tmp5065;
*(&local5) = $tmp5066;
org$pandalanguage$pandac$IR$Block$ID* $tmp5067 = (org$pandalanguage$pandac$IR$Block$ID*) (param2->$data + 16);
org$pandalanguage$pandac$IR$Block$ID $tmp5068 = *$tmp5067;
*(&local6) = $tmp5068;
// line 1390
org$pandalanguage$pandac$IR$Block$ID $tmp5069 = *(&local6);
org$pandalanguage$pandac$CCodeGenerator$writeBranch$org$pandalanguage$pandac$IR$Block$ID(param0, $tmp5069);
goto block1;
block5:;
panda$core$Int64 $tmp5070 = (panda$core$Int64) {2};
panda$core$Bit $tmp5071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5070);
bool $tmp5072 = $tmp5071.value;
if ($tmp5072) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Position* $tmp5073 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5074 = *$tmp5073;
*(&local7) = $tmp5074;
org$pandalanguage$pandac$IR$Value** $tmp5075 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5076 = *$tmp5075;
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5076));
org$pandalanguage$pandac$IR$Value* $tmp5077 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5077));
*(&local8) = $tmp5076;
org$pandalanguage$pandac$Type** $tmp5078 = (org$pandalanguage$pandac$Type**) (param2->$data + 24);
org$pandalanguage$pandac$Type* $tmp5079 = *$tmp5078;
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5079));
org$pandalanguage$pandac$Type* $tmp5080 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5080));
*(&local9) = $tmp5079;
// line 1393
org$pandalanguage$pandac$IR$Value* $tmp5081 = *(&local8);
org$pandalanguage$pandac$Type* $tmp5082 = *(&local9);
org$pandalanguage$pandac$CCodeGenerator$writeCast$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(param0, param1, $tmp5081, $tmp5082);
org$pandalanguage$pandac$Type* $tmp5083 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5083));
// unreffing type
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5084 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5084));
// unreffing value
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block7:;
panda$core$Int64 $tmp5085 = (panda$core$Int64) {3};
panda$core$Bit $tmp5086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5085);
bool $tmp5087 = $tmp5086.value;
if ($tmp5087) goto block8; else goto block9;
block8:;
panda$core$String** $tmp5088 = (panda$core$String**) (param2->$data + 0);
panda$core$String* $tmp5089 = *$tmp5088;
*(&local10) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5089));
panda$core$String* $tmp5090 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5090));
*(&local10) = $tmp5089;
// line 1396
panda$io$IndentedOutputStream** $tmp5091 = &param0->out;
panda$io$IndentedOutputStream* $tmp5092 = *$tmp5091;
panda$core$String* $tmp5093 = *(&local10);
panda$core$String* $tmp5094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5095, $tmp5093);
panda$core$String* $tmp5096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5094, &$s5097);
$fn5099 $tmp5098 = ($fn5099) ((panda$io$OutputStream*) $tmp5092)->$class->vtable[19];
$tmp5098(((panda$io$OutputStream*) $tmp5092), $tmp5096);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5096));
// unreffing REF($135:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5094));
// unreffing REF($134:panda.core.String)
panda$core$String* $tmp5100 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5100));
// unreffing text
*(&local10) = ((panda$core$String*) NULL);
goto block1;
block9:;
panda$core$Int64 $tmp5101 = (panda$core$Int64) {5};
panda$core$Bit $tmp5102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5101);
bool $tmp5103 = $tmp5102.value;
if ($tmp5103) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp5104 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5105 = *$tmp5104;
*(&local11) = $tmp5105;
org$pandalanguage$pandac$IR$Value** $tmp5106 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5107 = *$tmp5106;
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5107));
org$pandalanguage$pandac$IR$Value* $tmp5108 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5108));
*(&local12) = $tmp5107;
org$pandalanguage$pandac$IR$Block$ID* $tmp5109 = (org$pandalanguage$pandac$IR$Block$ID*) (param2->$data + 24);
org$pandalanguage$pandac$IR$Block$ID $tmp5110 = *$tmp5109;
*(&local13) = $tmp5110;
org$pandalanguage$pandac$IR$Block$ID* $tmp5111 = (org$pandalanguage$pandac$IR$Block$ID*) (param2->$data + 32);
org$pandalanguage$pandac$IR$Block$ID $tmp5112 = *$tmp5111;
*(&local14) = $tmp5112;
// line 1399
org$pandalanguage$pandac$IR$Value* $tmp5113 = *(&local12);
org$pandalanguage$pandac$IR$Block$ID $tmp5114 = *(&local13);
org$pandalanguage$pandac$IR$Block$ID $tmp5115 = *(&local14);
org$pandalanguage$pandac$CCodeGenerator$writeConditionalBranch$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID(param0, $tmp5113, $tmp5114, $tmp5115);
org$pandalanguage$pandac$IR$Value* $tmp5116 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5116));
// unreffing test
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block11:;
panda$core$Int64 $tmp5117 = (panda$core$Int64) {6};
panda$core$Bit $tmp5118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5117);
bool $tmp5119 = $tmp5118.value;
if ($tmp5119) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp5120 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5121 = *$tmp5120;
*(&local15) = $tmp5121;
org$pandalanguage$pandac$ClassDecl** $tmp5122 = (org$pandalanguage$pandac$ClassDecl**) (param2->$data + 16);
org$pandalanguage$pandac$ClassDecl* $tmp5123 = *$tmp5122;
*(&local16) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5123));
org$pandalanguage$pandac$ClassDecl* $tmp5124 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5124));
*(&local16) = $tmp5123;
// line 1402
org$pandalanguage$pandac$ClassDecl* $tmp5125 = *(&local16);
org$pandalanguage$pandac$CCodeGenerator$writeConstruct$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$ClassDecl(param0, param1, $tmp5125);
org$pandalanguage$pandac$ClassDecl* $tmp5126 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5126));
// unreffing cl
*(&local16) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block1;
block13:;
panda$core$Int64 $tmp5127 = (panda$core$Int64) {7};
panda$core$Bit $tmp5128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5127);
bool $tmp5129 = $tmp5128.value;
if ($tmp5129) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$Position* $tmp5130 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5131 = *$tmp5130;
*(&local17) = $tmp5131;
org$pandalanguage$pandac$ClassDecl** $tmp5132 = (org$pandalanguage$pandac$ClassDecl**) (param2->$data + 16);
org$pandalanguage$pandac$ClassDecl* $tmp5133 = *$tmp5132;
*(&local18) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5133));
org$pandalanguage$pandac$ClassDecl* $tmp5134 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5134));
*(&local18) = $tmp5133;
org$pandalanguage$pandac$FixedArray** $tmp5135 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp5136 = *$tmp5135;
*(&local19) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5136));
org$pandalanguage$pandac$FixedArray* $tmp5137 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5137));
*(&local19) = $tmp5136;
// line 1405
org$pandalanguage$pandac$ClassDecl* $tmp5138 = *(&local18);
org$pandalanguage$pandac$FixedArray* $tmp5139 = *(&local19);
org$pandalanguage$pandac$CCodeGenerator$writeCreateStruct$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$IR$Value$GT(param0, param1, $tmp5138, $tmp5139);
org$pandalanguage$pandac$FixedArray* $tmp5140 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5140));
// unreffing args
*(&local19) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp5141 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5141));
// unreffing cl
*(&local18) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block1;
block15:;
panda$core$Int64 $tmp5142 = (panda$core$Int64) {8};
panda$core$Bit $tmp5143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5142);
bool $tmp5144 = $tmp5143.value;
if ($tmp5144) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Position* $tmp5145 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5146 = *$tmp5145;
*(&local20) = $tmp5146;
org$pandalanguage$pandac$IR$Value** $tmp5147 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5148 = *$tmp5147;
*(&local21) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5148));
org$pandalanguage$pandac$IR$Value* $tmp5149 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5149));
*(&local21) = $tmp5148;
org$pandalanguage$pandac$FixedArray** $tmp5150 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp5151 = *$tmp5150;
*(&local22) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5151));
org$pandalanguage$pandac$FixedArray* $tmp5152 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5152));
*(&local22) = $tmp5151;
// line 1408
org$pandalanguage$pandac$IR$Value* $tmp5153 = *(&local21);
org$pandalanguage$pandac$FixedArray* $tmp5154 = *(&local22);
org$pandalanguage$pandac$CCodeGenerator$writeDynamicCall$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$IR$Value$GT(param0, param1, $tmp5153, ((panda$collections$ListView*) $tmp5154));
org$pandalanguage$pandac$FixedArray* $tmp5155 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5155));
// unreffing args
*(&local22) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5156 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5156));
// unreffing m
*(&local21) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block17:;
panda$core$Int64 $tmp5157 = (panda$core$Int64) {9};
panda$core$Bit $tmp5158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5157);
bool $tmp5159 = $tmp5158.value;
if ($tmp5159) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp5160 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5161 = *$tmp5160;
*(&local23) = $tmp5161;
org$pandalanguage$pandac$IR$Value** $tmp5162 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5163 = *$tmp5162;
*(&local24) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5163));
org$pandalanguage$pandac$IR$Value* $tmp5164 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5164));
*(&local24) = $tmp5163;
org$pandalanguage$pandac$FieldDecl** $tmp5165 = (org$pandalanguage$pandac$FieldDecl**) (param2->$data + 24);
org$pandalanguage$pandac$FieldDecl* $tmp5166 = *$tmp5165;
*(&local25) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5166));
org$pandalanguage$pandac$FieldDecl* $tmp5167 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5167));
*(&local25) = $tmp5166;
// line 1411
org$pandalanguage$pandac$IR$Value* $tmp5168 = *(&local24);
org$pandalanguage$pandac$FieldDecl* $tmp5169 = *(&local25);
org$pandalanguage$pandac$CCodeGenerator$writeExtractField$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl(param0, param1, $tmp5168, $tmp5169);
org$pandalanguage$pandac$FieldDecl* $tmp5170 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5170));
// unreffing field
*(&local25) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5171 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5171));
// unreffing target
*(&local24) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block19:;
panda$core$Int64 $tmp5172 = (panda$core$Int64) {4};
panda$core$Bit $tmp5173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5172);
bool $tmp5174 = $tmp5173.value;
if ($tmp5174) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp5175 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5176 = *$tmp5175;
*(&local26) = $tmp5176;
org$pandalanguage$pandac$IR$Value** $tmp5177 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5178 = *$tmp5177;
*(&local27) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5178));
org$pandalanguage$pandac$IR$Value* $tmp5179 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5179));
*(&local27) = $tmp5178;
org$pandalanguage$pandac$ChoiceCase** $tmp5180 = (org$pandalanguage$pandac$ChoiceCase**) (param2->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp5181 = *$tmp5180;
*(&local28) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5181));
org$pandalanguage$pandac$ChoiceCase* $tmp5182 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5182));
*(&local28) = $tmp5181;
panda$core$Int64* $tmp5183 = (panda$core$Int64*) (param2->$data + 32);
panda$core$Int64 $tmp5184 = *$tmp5183;
*(&local29) = $tmp5184;
// line 1414
org$pandalanguage$pandac$IR$Value* $tmp5185 = *(&local27);
org$pandalanguage$pandac$ChoiceCase* $tmp5186 = *(&local28);
panda$core$Int64 $tmp5187 = *(&local29);
org$pandalanguage$pandac$CCodeGenerator$writeGetChoiceFieldPointer$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64(param0, param1, $tmp5185, $tmp5186, $tmp5187);
org$pandalanguage$pandac$ChoiceCase* $tmp5188 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5188));
// unreffing cc
*(&local28) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5189 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5189));
// unreffing target
*(&local27) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block21:;
panda$core$Int64 $tmp5190 = (panda$core$Int64) {10};
panda$core$Bit $tmp5191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5190);
bool $tmp5192 = $tmp5191.value;
if ($tmp5192) goto block22; else goto block23;
block22:;
org$pandalanguage$pandac$Position* $tmp5193 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5194 = *$tmp5193;
*(&local30) = $tmp5194;
org$pandalanguage$pandac$IR$Value** $tmp5195 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5196 = *$tmp5195;
*(&local31) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5196));
org$pandalanguage$pandac$IR$Value* $tmp5197 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5197));
*(&local31) = $tmp5196;
org$pandalanguage$pandac$FieldDecl** $tmp5198 = (org$pandalanguage$pandac$FieldDecl**) (param2->$data + 24);
org$pandalanguage$pandac$FieldDecl* $tmp5199 = *$tmp5198;
*(&local32) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5199));
org$pandalanguage$pandac$FieldDecl* $tmp5200 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5200));
*(&local32) = $tmp5199;
// line 1417
org$pandalanguage$pandac$IR$Value* $tmp5201 = *(&local31);
org$pandalanguage$pandac$FieldDecl* $tmp5202 = *(&local32);
org$pandalanguage$pandac$CCodeGenerator$writeGetFieldPointer$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl(param0, param1, $tmp5201, $tmp5202);
org$pandalanguage$pandac$FieldDecl* $tmp5203 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5203));
// unreffing field
*(&local32) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5204 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5204));
// unreffing target
*(&local31) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block23:;
panda$core$Int64 $tmp5205 = (panda$core$Int64) {12};
panda$core$Bit $tmp5206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5205);
bool $tmp5207 = $tmp5206.value;
if ($tmp5207) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp5208 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5209 = *$tmp5208;
*(&local33) = $tmp5209;
org$pandalanguage$pandac$IR$Value** $tmp5210 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5211 = *$tmp5210;
*(&local34) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5211));
org$pandalanguage$pandac$IR$Value* $tmp5212 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5212));
*(&local34) = $tmp5211;
org$pandalanguage$pandac$ClassDecl** $tmp5213 = (org$pandalanguage$pandac$ClassDecl**) (param2->$data + 24);
org$pandalanguage$pandac$ClassDecl* $tmp5214 = *$tmp5213;
*(&local35) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5214));
org$pandalanguage$pandac$ClassDecl* $tmp5215 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5215));
*(&local35) = $tmp5214;
panda$core$Int64* $tmp5216 = (panda$core$Int64*) (param2->$data + 32);
panda$core$Int64 $tmp5217 = *$tmp5216;
*(&local36) = $tmp5217;
org$pandalanguage$pandac$Type** $tmp5218 = (org$pandalanguage$pandac$Type**) (param2->$data + 40);
org$pandalanguage$pandac$Type* $tmp5219 = *$tmp5218;
*(&local37) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5219));
org$pandalanguage$pandac$Type* $tmp5220 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5220));
*(&local37) = $tmp5219;
// line 1420
org$pandalanguage$pandac$IR$Value* $tmp5221 = *(&local34);
org$pandalanguage$pandac$ClassDecl* $tmp5222 = *(&local35);
panda$core$Int64 $tmp5223 = *(&local36);
org$pandalanguage$pandac$Type* $tmp5224 = *(&local37);
org$pandalanguage$pandac$CCodeGenerator$writeGetInterfaceMethod$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$org$pandalanguage$pandac$Type(param0, param1, $tmp5221, $tmp5222, $tmp5223, $tmp5224);
org$pandalanguage$pandac$Type* $tmp5225 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5225));
// unreffing type
*(&local37) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp5226 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5226));
// unreffing cl
*(&local35) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5227 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5227));
// unreffing value
*(&local34) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block25:;
panda$core$Int64 $tmp5228 = (panda$core$Int64) {11};
panda$core$Bit $tmp5229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5228);
bool $tmp5230 = $tmp5229.value;
if ($tmp5230) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$Position* $tmp5231 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5232 = *$tmp5231;
*(&local38) = $tmp5232;
org$pandalanguage$pandac$IR$Value** $tmp5233 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5234 = *$tmp5233;
*(&local39) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5234));
org$pandalanguage$pandac$IR$Value* $tmp5235 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5235));
*(&local39) = $tmp5234;
panda$core$Int64* $tmp5236 = (panda$core$Int64*) (param2->$data + 24);
panda$core$Int64 $tmp5237 = *$tmp5236;
*(&local40) = $tmp5237;
org$pandalanguage$pandac$Type** $tmp5238 = (org$pandalanguage$pandac$Type**) (param2->$data + 32);
org$pandalanguage$pandac$Type* $tmp5239 = *$tmp5238;
*(&local41) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5239));
org$pandalanguage$pandac$Type* $tmp5240 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5240));
*(&local41) = $tmp5239;
// line 1423
org$pandalanguage$pandac$IR$Value* $tmp5241 = *(&local39);
panda$core$Int64 $tmp5242 = *(&local40);
org$pandalanguage$pandac$Type* $tmp5243 = *(&local41);
org$pandalanguage$pandac$CCodeGenerator$writeGetVirtualMethod$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$panda$core$Int64$org$pandalanguage$pandac$Type(param0, param1, $tmp5241, $tmp5242, $tmp5243);
org$pandalanguage$pandac$Type* $tmp5244 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5244));
// unreffing type
*(&local41) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5245 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5245));
// unreffing value
*(&local39) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block27:;
panda$core$Int64 $tmp5246 = (panda$core$Int64) {13};
panda$core$Bit $tmp5247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5246);
bool $tmp5248 = $tmp5247.value;
if ($tmp5248) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$Position* $tmp5249 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5250 = *$tmp5249;
*(&local42) = $tmp5250;
org$pandalanguage$pandac$IR$Value** $tmp5251 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5252 = *$tmp5251;
*(&local43) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5252));
org$pandalanguage$pandac$IR$Value* $tmp5253 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5253));
*(&local43) = $tmp5252;
// line 1426
org$pandalanguage$pandac$IR$Value* $tmp5254 = *(&local43);
org$pandalanguage$pandac$CCodeGenerator$writeLoad$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp5254);
org$pandalanguage$pandac$IR$Value* $tmp5255 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5255));
// unreffing ptr
*(&local43) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block29:;
panda$core$Int64 $tmp5256 = (panda$core$Int64) {14};
panda$core$Bit $tmp5257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5256);
bool $tmp5258 = $tmp5257.value;
if ($tmp5258) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Position* $tmp5259 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5260 = *$tmp5259;
*(&local44) = $tmp5260;
org$pandalanguage$pandac$IR$Value** $tmp5261 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5262 = *$tmp5261;
*(&local45) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5262));
org$pandalanguage$pandac$IR$Value* $tmp5263 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5263));
*(&local45) = $tmp5262;
// line 1429
org$pandalanguage$pandac$IR$Value* $tmp5264 = *(&local45);
org$pandalanguage$pandac$CCodeGenerator$writeNegate$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp5264);
org$pandalanguage$pandac$IR$Value* $tmp5265 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5265));
// unreffing value
*(&local45) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block31:;
panda$core$Int64 $tmp5266 = (panda$core$Int64) {15};
panda$core$Bit $tmp5267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5266);
bool $tmp5268 = $tmp5267.value;
if ($tmp5268) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$Position* $tmp5269 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5270 = *$tmp5269;
*(&local46) = $tmp5270;
org$pandalanguage$pandac$IR$Value** $tmp5271 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5272 = *$tmp5271;
*(&local47) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5272));
org$pandalanguage$pandac$IR$Value* $tmp5273 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5273));
*(&local47) = $tmp5272;
// line 1432
org$pandalanguage$pandac$IR$Value* $tmp5274 = *(&local47);
org$pandalanguage$pandac$CCodeGenerator$writeNot$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp5274);
org$pandalanguage$pandac$IR$Value* $tmp5275 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5275));
// unreffing value
*(&local47) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block33:;
panda$core$Int64 $tmp5276 = (panda$core$Int64) {16};
panda$core$Bit $tmp5277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5276);
bool $tmp5278 = $tmp5277.value;
if ($tmp5278) goto block34; else goto block35;
block34:;
org$pandalanguage$pandac$Position* $tmp5279 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5280 = *$tmp5279;
*(&local48) = $tmp5280;
org$pandalanguage$pandac$IR$Value** $tmp5281 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5282 = *$tmp5281;
*(&local49) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5282));
org$pandalanguage$pandac$IR$Value* $tmp5283 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5283));
*(&local49) = $tmp5282;
org$pandalanguage$pandac$Type** $tmp5284 = (org$pandalanguage$pandac$Type**) (param2->$data + 24);
org$pandalanguage$pandac$Type* $tmp5285 = *$tmp5284;
*(&local50) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5285));
org$pandalanguage$pandac$Type* $tmp5286 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5286));
*(&local50) = $tmp5285;
// line 1435
org$pandalanguage$pandac$IR$Value* $tmp5287 = *(&local49);
org$pandalanguage$pandac$Type* $tmp5288 = *(&local50);
org$pandalanguage$pandac$CCodeGenerator$writePointerAlloc$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(param0, param1, $tmp5287, $tmp5288);
org$pandalanguage$pandac$Type* $tmp5289 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5289));
// unreffing type
*(&local50) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5290 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5290));
// unreffing count
*(&local49) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block35:;
panda$core$Int64 $tmp5291 = (panda$core$Int64) {17};
panda$core$Bit $tmp5292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5291);
bool $tmp5293 = $tmp5292.value;
if ($tmp5293) goto block36; else goto block37;
block36:;
org$pandalanguage$pandac$Position* $tmp5294 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5295 = *$tmp5294;
*(&local51) = $tmp5295;
org$pandalanguage$pandac$IR$Value** $tmp5296 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5297 = *$tmp5296;
*(&local52) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5297));
org$pandalanguage$pandac$IR$Value* $tmp5298 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5298));
*(&local52) = $tmp5297;
// line 1438
org$pandalanguage$pandac$IR$Value* $tmp5299 = *(&local52);
org$pandalanguage$pandac$CCodeGenerator$writePointerDestroy$org$pandalanguage$pandac$IR$Value(param0, $tmp5299);
org$pandalanguage$pandac$IR$Value* $tmp5300 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5300));
// unreffing ptr
*(&local52) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block37:;
panda$core$Int64 $tmp5301 = (panda$core$Int64) {19};
panda$core$Bit $tmp5302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5301);
bool $tmp5303 = $tmp5302.value;
if ($tmp5303) goto block38; else goto block39;
block38:;
org$pandalanguage$pandac$Position* $tmp5304 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5305 = *$tmp5304;
*(&local53) = $tmp5305;
org$pandalanguage$pandac$IR$Value** $tmp5306 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5307 = *$tmp5306;
*(&local54) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5307));
org$pandalanguage$pandac$IR$Value* $tmp5308 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5308));
*(&local54) = $tmp5307;
org$pandalanguage$pandac$IR$Value** $tmp5309 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp5310 = *$tmp5309;
*(&local55) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5310));
org$pandalanguage$pandac$IR$Value* $tmp5311 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5311));
*(&local55) = $tmp5310;
// line 1441
org$pandalanguage$pandac$IR$Value* $tmp5312 = *(&local54);
org$pandalanguage$pandac$IR$Value* $tmp5313 = *(&local55);
org$pandalanguage$pandac$CCodeGenerator$writePointerGetIndex$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp5312, $tmp5313);
org$pandalanguage$pandac$IR$Value* $tmp5314 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5314));
// unreffing index
*(&local55) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5315 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5315));
// unreffing ptr
*(&local54) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block39:;
panda$core$Int64 $tmp5316 = (panda$core$Int64) {20};
panda$core$Bit $tmp5317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5316);
bool $tmp5318 = $tmp5317.value;
if ($tmp5318) goto block40; else goto block41;
block40:;
org$pandalanguage$pandac$Position* $tmp5319 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5320 = *$tmp5319;
*(&local56) = $tmp5320;
org$pandalanguage$pandac$IR$Value** $tmp5321 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5322 = *$tmp5321;
*(&local57) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5322));
org$pandalanguage$pandac$IR$Value* $tmp5323 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5323));
*(&local57) = $tmp5322;
org$pandalanguage$pandac$IR$Value** $tmp5324 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp5325 = *$tmp5324;
*(&local58) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5325));
org$pandalanguage$pandac$IR$Value* $tmp5326 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5326));
*(&local58) = $tmp5325;
// line 1444
org$pandalanguage$pandac$IR$Value* $tmp5327 = *(&local57);
org$pandalanguage$pandac$IR$Value* $tmp5328 = *(&local58);
org$pandalanguage$pandac$CCodeGenerator$writePointerOffset$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp5327, $tmp5328);
org$pandalanguage$pandac$IR$Value* $tmp5329 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5329));
// unreffing offset
*(&local58) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5330 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5330));
// unreffing ptr
*(&local57) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block41:;
panda$core$Int64 $tmp5331 = (panda$core$Int64) {21};
panda$core$Bit $tmp5332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5331);
bool $tmp5333 = $tmp5332.value;
if ($tmp5333) goto block42; else goto block43;
block42:;
org$pandalanguage$pandac$Position* $tmp5334 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5335 = *$tmp5334;
*(&local59) = $tmp5335;
org$pandalanguage$pandac$IR$Value** $tmp5336 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5337 = *$tmp5336;
*(&local60) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5337));
org$pandalanguage$pandac$IR$Value* $tmp5338 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5338));
*(&local60) = $tmp5337;
org$pandalanguage$pandac$IR$Value** $tmp5339 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp5340 = *$tmp5339;
*(&local61) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5340));
org$pandalanguage$pandac$IR$Value* $tmp5341 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5341));
*(&local61) = $tmp5340;
org$pandalanguage$pandac$IR$Value** $tmp5342 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp5343 = *$tmp5342;
*(&local62) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5343));
org$pandalanguage$pandac$IR$Value* $tmp5344 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5344));
*(&local62) = $tmp5343;
// line 1447
org$pandalanguage$pandac$IR$Value* $tmp5345 = *(&local60);
org$pandalanguage$pandac$IR$Value* $tmp5346 = *(&local61);
org$pandalanguage$pandac$IR$Value* $tmp5347 = *(&local62);
org$pandalanguage$pandac$CCodeGenerator$writePointerRealloc$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp5345, $tmp5346, $tmp5347);
org$pandalanguage$pandac$IR$Value* $tmp5348 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5348));
// unreffing newCount
*(&local62) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5349 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5349));
// unreffing oldCount
*(&local61) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5350 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5350));
// unreffing ptr
*(&local60) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block43:;
panda$core$Int64 $tmp5351 = (panda$core$Int64) {23};
panda$core$Bit $tmp5352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5351);
bool $tmp5353 = $tmp5352.value;
if ($tmp5353) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$Position* $tmp5354 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5355 = *$tmp5354;
*(&local63) = $tmp5355;
org$pandalanguage$pandac$IR$Value** $tmp5356 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5357 = *$tmp5356;
*(&local64) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5357));
org$pandalanguage$pandac$IR$Value* $tmp5358 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5358));
*(&local64) = $tmp5357;
org$pandalanguage$pandac$IR$Value** $tmp5359 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp5360 = *$tmp5359;
*(&local65) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5360));
org$pandalanguage$pandac$IR$Value* $tmp5361 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5361));
*(&local65) = $tmp5360;
org$pandalanguage$pandac$IR$Value** $tmp5362 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp5363 = *$tmp5362;
*(&local66) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5363));
org$pandalanguage$pandac$IR$Value* $tmp5364 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5364));
*(&local66) = $tmp5363;
// line 1450
org$pandalanguage$pandac$IR$Value* $tmp5365 = *(&local64);
org$pandalanguage$pandac$IR$Value* $tmp5366 = *(&local65);
org$pandalanguage$pandac$IR$Value* $tmp5367 = *(&local66);
org$pandalanguage$pandac$CCodeGenerator$writePointerSetIndex$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(param0, $tmp5365, $tmp5366, $tmp5367);
org$pandalanguage$pandac$IR$Value* $tmp5368 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5368));
// unreffing index
*(&local66) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5369 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5369));
// unreffing ptr
*(&local65) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5370 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5370));
// unreffing value
*(&local64) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block45:;
panda$core$Int64 $tmp5371 = (panda$core$Int64) {24};
panda$core$Bit $tmp5372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5371);
bool $tmp5373 = $tmp5372.value;
if ($tmp5373) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$Position* $tmp5374 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5375 = *$tmp5374;
*(&local67) = $tmp5375;
org$pandalanguage$pandac$IR$Value** $tmp5376 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5377 = *$tmp5376;
*(&local68) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5377));
org$pandalanguage$pandac$IR$Value* $tmp5378 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5378));
*(&local68) = $tmp5377;
// line 1453
org$pandalanguage$pandac$IR$Value* $tmp5379 = *(&local68);
org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp5379);
org$pandalanguage$pandac$IR$Value* $tmp5380 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5380));
// unreffing value
*(&local68) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block47:;
panda$core$Int64 $tmp5381 = (panda$core$Int64) {25};
panda$core$Bit $tmp5382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5381);
bool $tmp5383 = $tmp5382.value;
if ($tmp5383) goto block48; else goto block49;
block48:;
org$pandalanguage$pandac$Position* $tmp5384 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5385 = *$tmp5384;
*(&local69) = $tmp5385;
org$pandalanguage$pandac$MethodDecl** $tmp5386 = (org$pandalanguage$pandac$MethodDecl**) (param2->$data + 16);
org$pandalanguage$pandac$MethodDecl* $tmp5387 = *$tmp5386;
*(&local70) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5387));
org$pandalanguage$pandac$MethodDecl* $tmp5388 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5388));
*(&local70) = $tmp5387;
org$pandalanguage$pandac$FixedArray** $tmp5389 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp5390 = *$tmp5389;
*(&local71) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5390));
org$pandalanguage$pandac$FixedArray* $tmp5391 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5391));
*(&local71) = $tmp5390;
// line 1456
org$pandalanguage$pandac$MethodDecl* $tmp5392 = *(&local70);
org$pandalanguage$pandac$FixedArray* $tmp5393 = *(&local71);
org$pandalanguage$pandac$CCodeGenerator$writeStaticCall$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$IR$Value$GT(param0, param1, $tmp5392, ((panda$collections$ListView*) $tmp5393));
org$pandalanguage$pandac$FixedArray* $tmp5394 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5394));
// unreffing args
*(&local71) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp5395 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5395));
// unreffing m
*(&local70) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block1;
block49:;
panda$core$Int64 $tmp5396 = (panda$core$Int64) {26};
panda$core$Bit $tmp5397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5396);
bool $tmp5398 = $tmp5397.value;
if ($tmp5398) goto block50; else goto block51;
block50:;
org$pandalanguage$pandac$Position* $tmp5399 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5400 = *$tmp5399;
*(&local72) = $tmp5400;
org$pandalanguage$pandac$IR$Value** $tmp5401 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5402 = *$tmp5401;
*(&local73) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5402));
org$pandalanguage$pandac$IR$Value* $tmp5403 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5403));
*(&local73) = $tmp5402;
org$pandalanguage$pandac$IR$Value** $tmp5404 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp5405 = *$tmp5404;
*(&local74) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5405));
org$pandalanguage$pandac$IR$Value* $tmp5406 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5406));
*(&local74) = $tmp5405;
// line 1459
org$pandalanguage$pandac$IR$Value* $tmp5407 = *(&local73);
org$pandalanguage$pandac$IR$Value* $tmp5408 = *(&local74);
org$pandalanguage$pandac$CCodeGenerator$writeStore$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(param0, $tmp5407, $tmp5408);
org$pandalanguage$pandac$IR$Value* $tmp5409 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5409));
// unreffing slot
*(&local74) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5410 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5410));
// unreffing value
*(&local73) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block51:;
panda$core$Int64 $tmp5411 = (panda$core$Int64) {27};
panda$core$Bit $tmp5412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5038, $tmp5411);
bool $tmp5413 = $tmp5412.value;
if ($tmp5413) goto block52; else goto block53;
block52:;
org$pandalanguage$pandac$Position* $tmp5414 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5415 = *$tmp5414;
*(&local75) = $tmp5415;
// line 1462
panda$io$IndentedOutputStream** $tmp5416 = &param0->out;
panda$io$IndentedOutputStream* $tmp5417 = *$tmp5416;
$fn5419 $tmp5418 = ($fn5419) ((panda$io$OutputStream*) $tmp5417)->$class->vtable[19];
$tmp5418(((panda$io$OutputStream*) $tmp5417), &$s5420);
goto block1;
block53:;
// line 1465
panda$core$Bit $tmp5421 = panda$core$Bit$init$builtin_bit(false);
bool $tmp5422 = $tmp5421.value;
if ($tmp5422) goto block54; else goto block55;
block55:;
panda$core$Int64 $tmp5423 = (panda$core$Int64) {1465};
panda$core$String* $tmp5424 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5425, ((panda$core$Object*) param2));
panda$core$String* $tmp5426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5424, &$s5427);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5428, $tmp5423, $tmp5426);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5426));
// unreffing REF($973:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5424));
// unreffing REF($972:panda.core.String)
abort(); // unreachable
block54:;
goto block1;
block1:;
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

// line 1472
panda$core$Weak** $tmp5429 = &param1->owner;
panda$core$Weak* $tmp5430 = *$tmp5429;
panda$core$Object* $tmp5431 = panda$core$Weak$get$R$panda$core$Weak$T($tmp5430);
org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp5431));
panda$core$Panda$unref$panda$core$Object$Q($tmp5431);
// unreffing REF($4:panda.core.Weak.T)
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeIR$org$pandalanguage$pandac$IR(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR* param1) {

panda$core$Int64 local0;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$Int64 local3;
org$pandalanguage$pandac$IR$Block* local4 = NULL;
panda$core$Int64 local5;
// line 1476
panda$core$Int64 $tmp5432 = (panda$core$Int64) {0};
panda$collections$Array** $tmp5433 = &param1->locals;
panda$collections$Array* $tmp5434 = *$tmp5433;
ITable* $tmp5435 = ((panda$collections$CollectionView*) $tmp5434)->$class->itable;
while ($tmp5435->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp5435 = $tmp5435->next;
}
$fn5437 $tmp5436 = $tmp5435->methods[0];
panda$core$Int64 $tmp5438 = $tmp5436(((panda$collections$CollectionView*) $tmp5434));
panda$core$Bit $tmp5439 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp5440 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp5432, $tmp5438, $tmp5439);
panda$core$Int64 $tmp5441 = $tmp5440.min;
*(&local0) = $tmp5441;
panda$core$Int64 $tmp5442 = $tmp5440.max;
panda$core$Bit $tmp5443 = $tmp5440.inclusive;
bool $tmp5444 = $tmp5443.value;
panda$core$Int64 $tmp5445 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp5446 = panda$core$Int64$convert$R$panda$core$UInt64($tmp5445);
if ($tmp5444) goto block4; else goto block5;
block4:;
int64_t $tmp5447 = $tmp5441.value;
int64_t $tmp5448 = $tmp5442.value;
bool $tmp5449 = $tmp5447 <= $tmp5448;
panda$core$Bit $tmp5450 = (panda$core$Bit) {$tmp5449};
bool $tmp5451 = $tmp5450.value;
if ($tmp5451) goto block1; else goto block2;
block5:;
int64_t $tmp5452 = $tmp5441.value;
int64_t $tmp5453 = $tmp5442.value;
bool $tmp5454 = $tmp5452 < $tmp5453;
panda$core$Bit $tmp5455 = (panda$core$Bit) {$tmp5454};
bool $tmp5456 = $tmp5455.value;
if ($tmp5456) goto block1; else goto block2;
block1:;
// line 1477
panda$core$Int64 $tmp5457 = *(&local0);
panda$core$Int64$wrapper* $tmp5458;
$tmp5458 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp5458->value = $tmp5457;
panda$core$String* $tmp5459 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5460, ((panda$core$Object*) $tmp5458));
panda$core$String* $tmp5461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5459, &$s5462);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5461));
panda$core$String* $tmp5463 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5463));
*(&local1) = $tmp5461;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5461));
// unreffing REF($33:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5459));
// unreffing REF($32:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5458));
// unreffing REF($31:panda.core.Object)
// line 1478
panda$collections$Array** $tmp5464 = &param1->locals;
panda$collections$Array* $tmp5465 = *$tmp5464;
panda$core$Int64 $tmp5466 = *(&local0);
panda$core$Object* $tmp5467 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp5465, $tmp5466);
panda$core$String* $tmp5468 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp5467));
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5468));
panda$core$String* $tmp5469 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5469));
*(&local2) = $tmp5468;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5468));
// unreffing REF($57:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp5467);
// unreffing REF($55:panda.collections.Array.T)
// line 1479
panda$io$IndentedOutputStream** $tmp5470 = &param0->out;
panda$io$IndentedOutputStream* $tmp5471 = *$tmp5470;
panda$core$String* $tmp5472 = *(&local2);
panda$core$String* $tmp5473 = panda$core$String$convert$R$panda$core$String($tmp5472);
panda$core$String* $tmp5474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5473, &$s5475);
panda$core$String* $tmp5476 = *(&local1);
panda$core$String* $tmp5477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5474, $tmp5476);
panda$core$String* $tmp5478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5477, &$s5479);
$fn5481 $tmp5480 = ($fn5481) ((panda$io$OutputStream*) $tmp5471)->$class->vtable[17];
$tmp5480(((panda$io$OutputStream*) $tmp5471), $tmp5478);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5478));
// unreffing REF($80:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5477));
// unreffing REF($79:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5474));
// unreffing REF($77:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5473));
// unreffing REF($76:panda.core.String)
// line 1480
panda$core$Weak** $tmp5482 = &param0->compiler;
panda$core$Weak* $tmp5483 = *$tmp5482;
panda$core$Object* $tmp5484 = panda$core$Weak$get$R$panda$core$Weak$T($tmp5483);
panda$collections$Array** $tmp5485 = &param1->locals;
panda$collections$Array* $tmp5486 = *$tmp5485;
panda$core$Int64 $tmp5487 = *(&local0);
panda$core$Object* $tmp5488 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp5486, $tmp5487);
panda$core$Bit $tmp5489 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp5484), ((org$pandalanguage$pandac$Type*) $tmp5488));
bool $tmp5490 = $tmp5489.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp5488);
// unreffing REF($106:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp5484);
// unreffing REF($99:panda.core.Weak.T)
if ($tmp5490) goto block6; else goto block7;
block6:;
// line 1481
panda$io$IndentedOutputStream** $tmp5491 = &param0->out;
panda$io$IndentedOutputStream* $tmp5492 = *$tmp5491;
$fn5494 $tmp5493 = ($fn5494) ((panda$io$OutputStream*) $tmp5492)->$class->vtable[17];
$tmp5493(((panda$io$OutputStream*) $tmp5492), &$s5495);
goto block7;
block7:;
// line 1483
panda$io$IndentedOutputStream** $tmp5496 = &param0->out;
panda$io$IndentedOutputStream* $tmp5497 = *$tmp5496;
$fn5499 $tmp5498 = ($fn5499) ((panda$io$OutputStream*) $tmp5497)->$class->vtable[19];
$tmp5498(((panda$io$OutputStream*) $tmp5497), &$s5500);
panda$core$String* $tmp5501 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5501));
// unreffing type
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp5502 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5502));
// unreffing name
*(&local1) = ((panda$core$String*) NULL);
goto block3;
block3:;
panda$core$Int64 $tmp5503 = *(&local0);
int64_t $tmp5504 = $tmp5442.value;
int64_t $tmp5505 = $tmp5503.value;
int64_t $tmp5506 = $tmp5504 - $tmp5505;
panda$core$Int64 $tmp5507 = (panda$core$Int64) {$tmp5506};
panda$core$UInt64 $tmp5508 = panda$core$Int64$convert$R$panda$core$UInt64($tmp5507);
if ($tmp5444) goto block9; else goto block10;
block9:;
uint64_t $tmp5509 = $tmp5508.value;
uint64_t $tmp5510 = $tmp5446.value;
bool $tmp5511 = $tmp5509 >= $tmp5510;
panda$core$Bit $tmp5512 = (panda$core$Bit) {$tmp5511};
bool $tmp5513 = $tmp5512.value;
if ($tmp5513) goto block8; else goto block2;
block10:;
uint64_t $tmp5514 = $tmp5508.value;
uint64_t $tmp5515 = $tmp5446.value;
bool $tmp5516 = $tmp5514 > $tmp5515;
panda$core$Bit $tmp5517 = (panda$core$Bit) {$tmp5516};
bool $tmp5518 = $tmp5517.value;
if ($tmp5518) goto block8; else goto block2;
block8:;
int64_t $tmp5519 = $tmp5503.value;
int64_t $tmp5520 = $tmp5445.value;
int64_t $tmp5521 = $tmp5519 + $tmp5520;
panda$core$Int64 $tmp5522 = (panda$core$Int64) {$tmp5521};
*(&local0) = $tmp5522;
goto block1;
block2:;
// line 1485
panda$core$Int64 $tmp5523 = (panda$core$Int64) {0};
panda$collections$Array** $tmp5524 = &param1->blocks;
panda$collections$Array* $tmp5525 = *$tmp5524;
ITable* $tmp5526 = ((panda$collections$CollectionView*) $tmp5525)->$class->itable;
while ($tmp5526->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp5526 = $tmp5526->next;
}
$fn5528 $tmp5527 = $tmp5526->methods[0];
panda$core$Int64 $tmp5529 = $tmp5527(((panda$collections$CollectionView*) $tmp5525));
panda$core$Bit $tmp5530 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp5531 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp5523, $tmp5529, $tmp5530);
panda$core$Int64 $tmp5532 = $tmp5531.min;
*(&local3) = $tmp5532;
panda$core$Int64 $tmp5533 = $tmp5531.max;
panda$core$Bit $tmp5534 = $tmp5531.inclusive;
bool $tmp5535 = $tmp5534.value;
panda$core$Int64 $tmp5536 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp5537 = panda$core$Int64$convert$R$panda$core$UInt64($tmp5536);
if ($tmp5535) goto block14; else goto block15;
block14:;
int64_t $tmp5538 = $tmp5532.value;
int64_t $tmp5539 = $tmp5533.value;
bool $tmp5540 = $tmp5538 <= $tmp5539;
panda$core$Bit $tmp5541 = (panda$core$Bit) {$tmp5540};
bool $tmp5542 = $tmp5541.value;
if ($tmp5542) goto block11; else goto block12;
block15:;
int64_t $tmp5543 = $tmp5532.value;
int64_t $tmp5544 = $tmp5533.value;
bool $tmp5545 = $tmp5543 < $tmp5544;
panda$core$Bit $tmp5546 = (panda$core$Bit) {$tmp5545};
bool $tmp5547 = $tmp5546.value;
if ($tmp5547) goto block11; else goto block12;
block11:;
// line 1486
panda$collections$Array** $tmp5548 = &param1->blocks;
panda$collections$Array* $tmp5549 = *$tmp5548;
panda$core$Int64 $tmp5550 = *(&local3);
panda$core$Object* $tmp5551 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp5549, $tmp5550);
*(&local4) = ((org$pandalanguage$pandac$IR$Block*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Block*) $tmp5551)));
org$pandalanguage$pandac$IR$Block* $tmp5552 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5552));
*(&local4) = ((org$pandalanguage$pandac$IR$Block*) $tmp5551);
panda$core$Panda$unref$panda$core$Object$Q($tmp5551);
// unreffing REF($200:panda.collections.Array.T)
// line 1487
panda$core$Int64 $tmp5553 = *(&local3);
panda$core$Int64 $tmp5554 = (panda$core$Int64) {0};
int64_t $tmp5555 = $tmp5553.value;
int64_t $tmp5556 = $tmp5554.value;
bool $tmp5557 = $tmp5555 != $tmp5556;
panda$core$Bit $tmp5558 = (panda$core$Bit) {$tmp5557};
bool $tmp5559 = $tmp5558.value;
if ($tmp5559) goto block16; else goto block18;
block16:;
// line 1488
org$pandalanguage$pandac$IR$Block* $tmp5560 = *(&local4);
org$pandalanguage$pandac$IR$Block$ID* $tmp5561 = &$tmp5560->id;
org$pandalanguage$pandac$IR$Block$ID $tmp5562 = *$tmp5561;
panda$core$String* $tmp5563 = org$pandalanguage$pandac$IR$Block$ID$convert$R$panda$core$String($tmp5562);
panda$core$String* $tmp5564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5563, &$s5565);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5564));
panda$core$String** $tmp5566 = &param0->currentBlock;
panda$core$String* $tmp5567 = *$tmp5566;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5567));
panda$core$String** $tmp5568 = &param0->currentBlock;
*$tmp5568 = $tmp5564;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5564));
// unreffing REF($226:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5563));
// unreffing REF($225:panda.core.String)
// line 1489
panda$io$IndentedOutputStream** $tmp5569 = &param0->out;
panda$io$IndentedOutputStream* $tmp5570 = *$tmp5569;
panda$core$String** $tmp5571 = &param0->currentBlock;
panda$core$String* $tmp5572 = *$tmp5571;
panda$core$String* $tmp5573 = panda$core$String$convert$R$panda$core$String($tmp5572);
panda$core$String* $tmp5574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5573, &$s5575);
$fn5577 $tmp5576 = ($fn5577) ((panda$io$OutputStream*) $tmp5570)->$class->vtable[19];
$tmp5576(((panda$io$OutputStream*) $tmp5570), $tmp5574);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5574));
// unreffing REF($248:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5573));
// unreffing REF($247:panda.core.String)
goto block17;
block18:;
// line 1
// line 1492
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s5578));
panda$core$String** $tmp5579 = &param0->currentBlock;
panda$core$String* $tmp5580 = *$tmp5579;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5580));
panda$core$String** $tmp5581 = &param0->currentBlock;
*$tmp5581 = &$s5582;
goto block17;
block17:;
// line 1494
panda$core$Int64 $tmp5583 = (panda$core$Int64) {0};
org$pandalanguage$pandac$IR$Block* $tmp5584 = *(&local4);
panda$collections$Array** $tmp5585 = &$tmp5584->statements;
panda$collections$Array* $tmp5586 = *$tmp5585;
ITable* $tmp5587 = ((panda$collections$CollectionView*) $tmp5586)->$class->itable;
while ($tmp5587->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp5587 = $tmp5587->next;
}
$fn5589 $tmp5588 = $tmp5587->methods[0];
panda$core$Int64 $tmp5590 = $tmp5588(((panda$collections$CollectionView*) $tmp5586));
panda$core$Bit $tmp5591 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp5592 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp5583, $tmp5590, $tmp5591);
panda$core$Int64 $tmp5593 = $tmp5592.min;
*(&local5) = $tmp5593;
panda$core$Int64 $tmp5594 = $tmp5592.max;
panda$core$Bit $tmp5595 = $tmp5592.inclusive;
bool $tmp5596 = $tmp5595.value;
panda$core$Int64 $tmp5597 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp5598 = panda$core$Int64$convert$R$panda$core$UInt64($tmp5597);
if ($tmp5596) goto block22; else goto block23;
block22:;
int64_t $tmp5599 = $tmp5593.value;
int64_t $tmp5600 = $tmp5594.value;
bool $tmp5601 = $tmp5599 <= $tmp5600;
panda$core$Bit $tmp5602 = (panda$core$Bit) {$tmp5601};
bool $tmp5603 = $tmp5602.value;
if ($tmp5603) goto block19; else goto block20;
block23:;
int64_t $tmp5604 = $tmp5593.value;
int64_t $tmp5605 = $tmp5594.value;
bool $tmp5606 = $tmp5604 < $tmp5605;
panda$core$Bit $tmp5607 = (panda$core$Bit) {$tmp5606};
bool $tmp5608 = $tmp5607.value;
if ($tmp5608) goto block19; else goto block20;
block19:;
// line 1495
org$pandalanguage$pandac$IR$Block* $tmp5609 = *(&local4);
panda$collections$Array** $tmp5610 = &$tmp5609->ids;
panda$collections$Array* $tmp5611 = *$tmp5610;
panda$core$Int64 $tmp5612 = *(&local5);
panda$core$Object* $tmp5613 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp5611, $tmp5612);
org$pandalanguage$pandac$IR$Block* $tmp5614 = *(&local4);
panda$collections$Array** $tmp5615 = &$tmp5614->statements;
panda$collections$Array* $tmp5616 = *$tmp5615;
panda$core$Int64 $tmp5617 = *(&local5);
panda$core$Object* $tmp5618 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp5616, $tmp5617);
org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Statement(param0, ((org$pandalanguage$pandac$IR$Statement$ID$wrapper*) $tmp5613)->value, ((org$pandalanguage$pandac$IR$Statement*) $tmp5618));
panda$core$Panda$unref$panda$core$Object$Q($tmp5618);
// unreffing REF($312:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp5613);
// unreffing REF($305:panda.collections.Array.T)
goto block21;
block21:;
panda$core$Int64 $tmp5619 = *(&local5);
int64_t $tmp5620 = $tmp5594.value;
int64_t $tmp5621 = $tmp5619.value;
int64_t $tmp5622 = $tmp5620 - $tmp5621;
panda$core$Int64 $tmp5623 = (panda$core$Int64) {$tmp5622};
panda$core$UInt64 $tmp5624 = panda$core$Int64$convert$R$panda$core$UInt64($tmp5623);
if ($tmp5596) goto block25; else goto block26;
block25:;
uint64_t $tmp5625 = $tmp5624.value;
uint64_t $tmp5626 = $tmp5598.value;
bool $tmp5627 = $tmp5625 >= $tmp5626;
panda$core$Bit $tmp5628 = (panda$core$Bit) {$tmp5627};
bool $tmp5629 = $tmp5628.value;
if ($tmp5629) goto block24; else goto block20;
block26:;
uint64_t $tmp5630 = $tmp5624.value;
uint64_t $tmp5631 = $tmp5598.value;
bool $tmp5632 = $tmp5630 > $tmp5631;
panda$core$Bit $tmp5633 = (panda$core$Bit) {$tmp5632};
bool $tmp5634 = $tmp5633.value;
if ($tmp5634) goto block24; else goto block20;
block24:;
int64_t $tmp5635 = $tmp5619.value;
int64_t $tmp5636 = $tmp5597.value;
int64_t $tmp5637 = $tmp5635 + $tmp5636;
panda$core$Int64 $tmp5638 = (panda$core$Int64) {$tmp5637};
*(&local5) = $tmp5638;
goto block19;
block20:;
org$pandalanguage$pandac$IR$Block* $tmp5639 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5639));
// unreffing block
*(&local4) = ((org$pandalanguage$pandac$IR$Block*) NULL);
goto block13;
block13:;
panda$core$Int64 $tmp5640 = *(&local3);
int64_t $tmp5641 = $tmp5533.value;
int64_t $tmp5642 = $tmp5640.value;
int64_t $tmp5643 = $tmp5641 - $tmp5642;
panda$core$Int64 $tmp5644 = (panda$core$Int64) {$tmp5643};
panda$core$UInt64 $tmp5645 = panda$core$Int64$convert$R$panda$core$UInt64($tmp5644);
if ($tmp5535) goto block28; else goto block29;
block28:;
uint64_t $tmp5646 = $tmp5645.value;
uint64_t $tmp5647 = $tmp5537.value;
bool $tmp5648 = $tmp5646 >= $tmp5647;
panda$core$Bit $tmp5649 = (panda$core$Bit) {$tmp5648};
bool $tmp5650 = $tmp5649.value;
if ($tmp5650) goto block27; else goto block12;
block29:;
uint64_t $tmp5651 = $tmp5645.value;
uint64_t $tmp5652 = $tmp5537.value;
bool $tmp5653 = $tmp5651 > $tmp5652;
panda$core$Bit $tmp5654 = (panda$core$Bit) {$tmp5653};
bool $tmp5655 = $tmp5654.value;
if ($tmp5655) goto block27; else goto block12;
block27:;
int64_t $tmp5656 = $tmp5640.value;
int64_t $tmp5657 = $tmp5536.value;
int64_t $tmp5658 = $tmp5656 + $tmp5657;
panda$core$Int64 $tmp5659 = (panda$core$Int64) {$tmp5658};
*(&local3) = $tmp5659;
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
// line 1503
panda$io$IndentedOutputStream** $tmp5660 = &param0->out;
panda$io$IndentedOutputStream* $tmp5661 = *$tmp5660;
*(&local0) = ((panda$io$IndentedOutputStream*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5661));
panda$io$IndentedOutputStream* $tmp5662 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5662));
*(&local0) = $tmp5661;
// line 1504
panda$io$IndentedOutputStream** $tmp5663 = &param0->methods;
panda$io$IndentedOutputStream* $tmp5664 = *$tmp5663;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5664));
panda$io$IndentedOutputStream** $tmp5665 = &param0->out;
panda$io$IndentedOutputStream* $tmp5666 = *$tmp5665;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5666));
panda$io$IndentedOutputStream** $tmp5667 = &param0->out;
*$tmp5667 = $tmp5664;
// line 1505
panda$io$MemoryOutputStream** $tmp5668 = &param0->methodHeaderBuffer;
panda$io$MemoryOutputStream* $tmp5669 = *$tmp5668;
panda$io$MemoryOutputStream$clear($tmp5669);
// line 1506
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$IR** $tmp5670 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp5671 = *$tmp5670;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5671));
org$pandalanguage$pandac$IR** $tmp5672 = &param0->ir;
*$tmp5672 = param2;
// line 1507
panda$io$IndentedOutputStream** $tmp5673 = &param0->out;
panda$io$IndentedOutputStream* $tmp5674 = *$tmp5673;
org$pandalanguage$pandac$Type** $tmp5675 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp5676 = *$tmp5675;
panda$core$String* $tmp5677 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp5676);
panda$core$String* $tmp5678 = panda$core$String$convert$R$panda$core$String($tmp5677);
panda$core$String* $tmp5679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5678, &$s5680);
panda$core$String* $tmp5681 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp5682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5679, $tmp5681);
panda$core$String* $tmp5683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5682, &$s5684);
$fn5686 $tmp5685 = ($fn5686) ((panda$io$OutputStream*) $tmp5674)->$class->vtable[17];
$tmp5685(((panda$io$OutputStream*) $tmp5674), $tmp5683);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5683));
// unreffing REF($45:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5682));
// unreffing REF($44:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5681));
// unreffing REF($43:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5679));
// unreffing REF($42:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5678));
// unreffing REF($41:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5677));
// unreffing REF($40:panda.core.String)
// line 1508
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s5687));
panda$core$String* $tmp5688 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5688));
*(&local1) = &$s5689;
// line 1509
panda$core$Int64 $tmp5690 = (panda$core$Int64) {0};
*(&local2) = $tmp5690;
// line 1510
panda$core$Weak** $tmp5691 = &param0->compiler;
panda$core$Weak* $tmp5692 = *$tmp5691;
panda$core$Object* $tmp5693 = panda$core$Weak$get$R$panda$core$Weak$T($tmp5692);
panda$core$Bit $tmp5694 = org$pandalanguage$pandac$Compiler$hasSelfParam$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp5693), param1);
bool $tmp5695 = $tmp5694.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp5693);
// unreffing REF($81:panda.core.Weak.T)
if ($tmp5695) goto block1; else goto block2;
block1:;
// line 1511
panda$io$IndentedOutputStream** $tmp5696 = &param0->out;
panda$io$IndentedOutputStream* $tmp5697 = *$tmp5696;
panda$core$String* $tmp5698 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp5699 = panda$core$String$convert$R$panda$core$String($tmp5698);
panda$core$String* $tmp5700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5699, &$s5701);
panda$core$Int64 $tmp5702 = *(&local2);
panda$core$Int64$wrapper* $tmp5703;
$tmp5703 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp5703->value = $tmp5702;
panda$core$String* $tmp5704 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5700, ((panda$core$Object*) $tmp5703));
panda$core$String* $tmp5705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5704, &$s5706);
$fn5708 $tmp5707 = ($fn5708) ((panda$io$OutputStream*) $tmp5697)->$class->vtable[17];
$tmp5707(((panda$io$OutputStream*) $tmp5697), $tmp5705);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5705));
// unreffing REF($100:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5704));
// unreffing REF($99:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5703));
// unreffing REF($98:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5700));
// unreffing REF($96:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5699));
// unreffing REF($95:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5698));
// unreffing REF($94:panda.core.String)
// line 1512
panda$core$Int64 $tmp5709 = *(&local2);
panda$core$Int64 $tmp5710 = (panda$core$Int64) {1};
int64_t $tmp5711 = $tmp5709.value;
int64_t $tmp5712 = $tmp5710.value;
int64_t $tmp5713 = $tmp5711 + $tmp5712;
panda$core$Int64 $tmp5714 = (panda$core$Int64) {$tmp5713};
*(&local2) = $tmp5714;
// line 1513
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s5715));
panda$core$String* $tmp5716 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5716));
*(&local1) = &$s5717;
goto block2;
block2:;
// line 1515
panda$collections$Array** $tmp5718 = &param1->parameters;
panda$collections$Array* $tmp5719 = *$tmp5718;
ITable* $tmp5720 = ((panda$collections$Iterable*) $tmp5719)->$class->itable;
while ($tmp5720->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp5720 = $tmp5720->next;
}
$fn5722 $tmp5721 = $tmp5720->methods[0];
panda$collections$Iterator* $tmp5723 = $tmp5721(((panda$collections$Iterable*) $tmp5719));
goto block3;
block3:;
ITable* $tmp5724 = $tmp5723->$class->itable;
while ($tmp5724->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp5724 = $tmp5724->next;
}
$fn5726 $tmp5725 = $tmp5724->methods[0];
panda$core$Bit $tmp5727 = $tmp5725($tmp5723);
bool $tmp5728 = $tmp5727.value;
if ($tmp5728) goto block5; else goto block4;
block4:;
*(&local3) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp5729 = $tmp5723->$class->itable;
while ($tmp5729->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp5729 = $tmp5729->next;
}
$fn5731 $tmp5730 = $tmp5729->methods[1];
panda$core$Object* $tmp5732 = $tmp5730($tmp5723);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp5732)));
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp5733 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5733));
*(&local3) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp5732);
// line 1516
panda$io$IndentedOutputStream** $tmp5734 = &param0->out;
panda$io$IndentedOutputStream* $tmp5735 = *$tmp5734;
panda$core$String* $tmp5736 = *(&local1);
panda$core$String* $tmp5737 = panda$core$String$convert$R$panda$core$String($tmp5736);
panda$core$String* $tmp5738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5737, &$s5739);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp5740 = *(&local3);
org$pandalanguage$pandac$Type** $tmp5741 = &$tmp5740->type;
org$pandalanguage$pandac$Type* $tmp5742 = *$tmp5741;
panda$core$String* $tmp5743 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp5742);
panda$core$String* $tmp5744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5738, $tmp5743);
panda$core$String* $tmp5745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5744, &$s5746);
panda$core$Int64 $tmp5747 = *(&local2);
panda$core$Int64$wrapper* $tmp5748;
$tmp5748 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp5748->value = $tmp5747;
panda$core$String* $tmp5749 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5745, ((panda$core$Object*) $tmp5748));
panda$core$String* $tmp5750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5749, &$s5751);
$fn5753 $tmp5752 = ($fn5753) ((panda$io$OutputStream*) $tmp5735)->$class->vtable[17];
$tmp5752(((panda$io$OutputStream*) $tmp5735), $tmp5750);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5750));
// unreffing REF($178:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5749));
// unreffing REF($177:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5748));
// unreffing REF($176:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5745));
// unreffing REF($174:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5744));
// unreffing REF($173:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5743));
// unreffing REF($172:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5738));
// unreffing REF($168:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5737));
// unreffing REF($167:panda.core.String)
// line 1517
panda$core$Int64 $tmp5754 = *(&local2);
panda$core$Int64 $tmp5755 = (panda$core$Int64) {1};
int64_t $tmp5756 = $tmp5754.value;
int64_t $tmp5757 = $tmp5755.value;
int64_t $tmp5758 = $tmp5756 + $tmp5757;
panda$core$Int64 $tmp5759 = (panda$core$Int64) {$tmp5758};
*(&local2) = $tmp5759;
// line 1518
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s5760));
panda$core$String* $tmp5761 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5761));
*(&local1) = &$s5762;
panda$core$Panda$unref$panda$core$Object$Q($tmp5732);
// unreffing REF($154:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp5763 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5763));
// unreffing p
*(&local3) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5723));
// unreffing REF($143:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 1520
panda$io$IndentedOutputStream** $tmp5764 = &param0->out;
panda$io$IndentedOutputStream* $tmp5765 = *$tmp5764;
$fn5767 $tmp5766 = ($fn5767) ((panda$io$OutputStream*) $tmp5765)->$class->vtable[19];
$tmp5766(((panda$io$OutputStream*) $tmp5765), &$s5768);
// line 1521
panda$io$MemoryOutputStream* $tmp5769 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp5769);
*(&local4) = ((panda$io$MemoryOutputStream*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5769));
panda$io$MemoryOutputStream* $tmp5770 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5770));
*(&local4) = $tmp5769;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5769));
// unreffing REF($239:panda.io.MemoryOutputStream)
// line 1522
panda$io$IndentedOutputStream* $tmp5771 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream* $tmp5772 = *(&local4);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp5771, ((panda$io$OutputStream*) $tmp5772));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5771));
panda$io$IndentedOutputStream** $tmp5773 = &param0->out;
panda$io$IndentedOutputStream* $tmp5774 = *$tmp5773;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5774));
panda$io$IndentedOutputStream** $tmp5775 = &param0->out;
*$tmp5775 = $tmp5771;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5771));
// unreffing REF($252:panda.io.IndentedOutputStream)
// line 1523
org$pandalanguage$pandac$CCodeGenerator$writeIR$org$pandalanguage$pandac$IR(param0, param2);
// line 1524
panda$io$IndentedOutputStream** $tmp5776 = &param0->methods;
panda$io$IndentedOutputStream* $tmp5777 = *$tmp5776;
panda$io$MemoryOutputStream** $tmp5778 = &param0->methodHeaderBuffer;
panda$io$MemoryOutputStream* $tmp5779 = *$tmp5778;
$fn5781 $tmp5780 = ($fn5781) ((panda$io$OutputStream*) $tmp5777)->$class->vtable[20];
$tmp5780(((panda$io$OutputStream*) $tmp5777), ((panda$core$Object*) $tmp5779));
// line 1525
panda$io$IndentedOutputStream** $tmp5782 = &param0->methods;
panda$io$IndentedOutputStream* $tmp5783 = *$tmp5782;
panda$io$MemoryOutputStream* $tmp5784 = *(&local4);
$fn5786 $tmp5785 = ($fn5786) ((panda$io$OutputStream*) $tmp5783)->$class->vtable[20];
$tmp5785(((panda$io$OutputStream*) $tmp5783), ((panda$core$Object*) $tmp5784));
// line 1526
panda$io$IndentedOutputStream** $tmp5787 = &param0->methods;
panda$io$IndentedOutputStream* $tmp5788 = *$tmp5787;
$fn5790 $tmp5789 = ($fn5790) ((panda$io$OutputStream*) $tmp5788)->$class->vtable[19];
$tmp5789(((panda$io$OutputStream*) $tmp5788), &$s5791);
// line 1527
panda$io$IndentedOutputStream* $tmp5792 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5792));
panda$io$IndentedOutputStream** $tmp5793 = &param0->out;
panda$io$IndentedOutputStream* $tmp5794 = *$tmp5793;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5794));
panda$io$IndentedOutputStream** $tmp5795 = &param0->out;
*$tmp5795 = $tmp5792;
panda$io$MemoryOutputStream* $tmp5796 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5796));
// unreffing buffer
*(&local4) = ((panda$io$MemoryOutputStream*) NULL);
panda$core$String* $tmp5797 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5797));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$io$IndentedOutputStream* $tmp5798 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5798));
// unreffing old
*(&local0) = ((panda$io$IndentedOutputStream*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

panda$io$File* local0 = NULL;
// line 1532
org$pandalanguage$pandac$ClassDecl** $tmp5799 = &param0->currentClass;
org$pandalanguage$pandac$ClassDecl* $tmp5800 = *$tmp5799;
panda$core$Bit $tmp5801 = panda$core$Bit$init$builtin_bit($tmp5800 == NULL);
bool $tmp5802 = $tmp5801.value;
if ($tmp5802) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp5803 = (panda$core$Int64) {1532};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s5804, $tmp5803);
abort(); // unreachable
block1:;
// line 1533
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$ClassDecl** $tmp5805 = &param0->currentClass;
org$pandalanguage$pandac$ClassDecl* $tmp5806 = *$tmp5805;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5806));
org$pandalanguage$pandac$ClassDecl** $tmp5807 = &param0->currentClass;
*$tmp5807 = param1;
// line 1534
panda$collections$HashSet** $tmp5808 = &param0->imports;
panda$collections$HashSet* $tmp5809 = *$tmp5808;
panda$collections$HashSet$clear($tmp5809);
// line 1535
panda$io$MemoryOutputStream** $tmp5810 = &param0->strings;
panda$io$MemoryOutputStream* $tmp5811 = *$tmp5810;
panda$io$MemoryOutputStream$clear($tmp5811);
// line 1536
panda$io$MemoryOutputStream** $tmp5812 = &param0->declarations;
panda$io$MemoryOutputStream* $tmp5813 = *$tmp5812;
panda$io$MemoryOutputStream$clear($tmp5813);
// line 1537
panda$io$MemoryOutputStream** $tmp5814 = &param0->types;
panda$io$MemoryOutputStream* $tmp5815 = *$tmp5814;
panda$io$MemoryOutputStream$clear($tmp5815);
// line 1538
panda$io$MemoryOutputStream** $tmp5816 = &param0->methodsBuffer;
panda$io$MemoryOutputStream* $tmp5817 = *$tmp5816;
panda$io$MemoryOutputStream$clear($tmp5817);
// line 1539
panda$io$MemoryOutputStream** $tmp5818 = &param0->shimsBuffer;
panda$io$MemoryOutputStream* $tmp5819 = *$tmp5818;
panda$io$MemoryOutputStream$clear($tmp5819);
// line 1540
panda$collections$HashSet** $tmp5820 = &param0->declared;
panda$collections$HashSet* $tmp5821 = *$tmp5820;
panda$collections$HashSet$clear($tmp5821);
// line 1541
panda$collections$HashSet** $tmp5822 = &param0->writtenTypes;
panda$collections$HashSet* $tmp5823 = *$tmp5822;
panda$collections$HashSet$clear($tmp5823);
// line 1542
panda$collections$HashSet** $tmp5824 = &param0->writtenWrappers;
panda$collections$HashSet* $tmp5825 = *$tmp5824;
panda$collections$HashSet$clear($tmp5825);
// line 1543
panda$collections$HashMap** $tmp5826 = &param0->classConstants;
panda$collections$HashMap* $tmp5827 = *$tmp5826;
panda$collections$HashMap$clear($tmp5827);
// line 1544
panda$collections$IdentityMap** $tmp5828 = &param0->variableNames;
panda$collections$IdentityMap* $tmp5829 = *$tmp5828;
panda$collections$IdentityMap$clear($tmp5829);
// line 1545
panda$core$Int64 $tmp5830 = (panda$core$Int64) {0};
panda$core$Int64* $tmp5831 = &param0->varCount;
*$tmp5831 = $tmp5830;
// line 1546
panda$collections$IdentityMap** $tmp5832 = &param0->methodShims;
panda$collections$IdentityMap* $tmp5833 = *$tmp5832;
panda$collections$IdentityMap$clear($tmp5833);
// line 1547
panda$core$Weak** $tmp5834 = &param0->hCodeGen;
panda$core$Weak* $tmp5835 = *$tmp5834;
panda$core$Object* $tmp5836 = panda$core$Weak$get$R$panda$core$Weak$T($tmp5835);
panda$io$File* $tmp5837 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(((org$pandalanguage$pandac$HCodeGenerator*) $tmp5836), param1, &$s5838);
*(&local0) = ((panda$io$File*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5837));
panda$io$File* $tmp5839 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5839));
*(&local0) = $tmp5837;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5837));
// unreffing REF($85:panda.io.File)
panda$core$Panda$unref$panda$core$Object$Q($tmp5836);
// unreffing REF($83:panda.core.Weak.T)
// line 1548
panda$io$File* $tmp5840 = *(&local0);
panda$io$File* $tmp5841 = panda$io$File$get_parent$R$panda$io$File$Q($tmp5840);
panda$io$File$createDirectories($tmp5841);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5841));
// unreffing REF($101:panda.io.File?)
// line 1549
panda$io$IndentedOutputStream* $tmp5842 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$File* $tmp5843 = *(&local0);
panda$io$OutputStream* $tmp5844 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp5843);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp5842, $tmp5844);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5842));
panda$io$IndentedOutputStream** $tmp5845 = &param0->out;
panda$io$IndentedOutputStream* $tmp5846 = *$tmp5845;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5846));
panda$io$IndentedOutputStream** $tmp5847 = &param0->out;
*$tmp5847 = $tmp5842;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5844));
// unreffing REF($110:panda.io.OutputStream)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5842));
// unreffing REF($108:panda.io.IndentedOutputStream)
// line 1550
panda$io$IndentedOutputStream** $tmp5848 = &param0->out;
panda$io$IndentedOutputStream* $tmp5849 = *$tmp5848;
$fn5851 $tmp5850 = ($fn5851) ((panda$io$OutputStream*) $tmp5849)->$class->vtable[22];
$tmp5850(((panda$io$OutputStream*) $tmp5849));
// line 1551
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp5852 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, param1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5852));
// unreffing REF($133:org.pandalanguage.pandac.CCodeGenerator.ClassConstant)
// line 1552
panda$core$Weak** $tmp5853 = &param0->compiler;
panda$core$Weak* $tmp5854 = *$tmp5853;
panda$core$Object* $tmp5855 = panda$core$Weak$get$R$panda$core$Weak$T($tmp5854);
panda$core$Bit $tmp5856 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp5855), param1);
bool $tmp5857 = $tmp5856.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp5855);
// unreffing REF($141:panda.core.Weak.T)
if ($tmp5857) goto block3; else goto block4;
block3:;
// line 1553
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp5858 = org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, param1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5858));
// unreffing REF($152:org.pandalanguage.pandac.CCodeGenerator.ClassConstant)
goto block4;
block4:;
panda$io$File* $tmp5859 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5859));
// unreffing path
*(&local0) = ((panda$io$File*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

// line 1559
org$pandalanguage$pandac$CCodeGenerator$finish(param0);
// line 1560
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
org$pandalanguage$pandac$ClassDecl** $tmp5860 = &param0->currentClass;
org$pandalanguage$pandac$ClassDecl* $tmp5861 = *$tmp5860;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5861));
org$pandalanguage$pandac$ClassDecl** $tmp5862 = &param0->currentClass;
*$tmp5862 = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* param0) {

// line 1565
panda$io$IndentedOutputStream** $tmp5863 = &param0->out;
panda$io$IndentedOutputStream* $tmp5864 = *$tmp5863;
panda$io$MemoryOutputStream** $tmp5865 = &param0->includes;
panda$io$MemoryOutputStream* $tmp5866 = *$tmp5865;
$fn5868 $tmp5867 = ($fn5868) ((panda$io$OutputStream*) $tmp5864)->$class->vtable[20];
$tmp5867(((panda$io$OutputStream*) $tmp5864), ((panda$core$Object*) $tmp5866));
// line 1566
panda$io$MemoryOutputStream** $tmp5869 = &param0->includes;
panda$io$MemoryOutputStream* $tmp5870 = *$tmp5869;
panda$io$MemoryOutputStream$clear($tmp5870);
// line 1567
panda$io$IndentedOutputStream** $tmp5871 = &param0->out;
panda$io$IndentedOutputStream* $tmp5872 = *$tmp5871;
panda$io$MemoryOutputStream** $tmp5873 = &param0->shimsBuffer;
panda$io$MemoryOutputStream* $tmp5874 = *$tmp5873;
$fn5876 $tmp5875 = ($fn5876) ((panda$io$OutputStream*) $tmp5872)->$class->vtable[20];
$tmp5875(((panda$io$OutputStream*) $tmp5872), ((panda$core$Object*) $tmp5874));
// line 1568
panda$io$MemoryOutputStream** $tmp5877 = &param0->shimsBuffer;
panda$io$MemoryOutputStream* $tmp5878 = *$tmp5877;
panda$io$MemoryOutputStream$clear($tmp5878);
// line 1569
panda$io$IndentedOutputStream** $tmp5879 = &param0->out;
panda$io$IndentedOutputStream* $tmp5880 = *$tmp5879;
panda$io$MemoryOutputStream** $tmp5881 = &param0->types;
panda$io$MemoryOutputStream* $tmp5882 = *$tmp5881;
$fn5884 $tmp5883 = ($fn5884) ((panda$io$OutputStream*) $tmp5880)->$class->vtable[20];
$tmp5883(((panda$io$OutputStream*) $tmp5880), ((panda$core$Object*) $tmp5882));
// line 1570
panda$io$MemoryOutputStream** $tmp5885 = &param0->types;
panda$io$MemoryOutputStream* $tmp5886 = *$tmp5885;
panda$io$MemoryOutputStream$clear($tmp5886);
// line 1571
panda$io$IndentedOutputStream** $tmp5887 = &param0->out;
panda$io$IndentedOutputStream* $tmp5888 = *$tmp5887;
panda$io$MemoryOutputStream** $tmp5889 = &param0->strings;
panda$io$MemoryOutputStream* $tmp5890 = *$tmp5889;
$fn5892 $tmp5891 = ($fn5892) ((panda$io$OutputStream*) $tmp5888)->$class->vtable[20];
$tmp5891(((panda$io$OutputStream*) $tmp5888), ((panda$core$Object*) $tmp5890));
// line 1572
panda$io$MemoryOutputStream** $tmp5893 = &param0->strings;
panda$io$MemoryOutputStream* $tmp5894 = *$tmp5893;
panda$io$MemoryOutputStream$clear($tmp5894);
// line 1573
panda$io$IndentedOutputStream** $tmp5895 = &param0->out;
panda$io$IndentedOutputStream* $tmp5896 = *$tmp5895;
panda$io$MemoryOutputStream** $tmp5897 = &param0->methodsBuffer;
panda$io$MemoryOutputStream* $tmp5898 = *$tmp5897;
$fn5900 $tmp5899 = ($fn5900) ((panda$io$OutputStream*) $tmp5896)->$class->vtable[20];
$tmp5899(((panda$io$OutputStream*) $tmp5896), ((panda$core$Object*) $tmp5898));
// line 1574
panda$io$MemoryOutputStream** $tmp5901 = &param0->methodsBuffer;
panda$io$MemoryOutputStream* $tmp5902 = *$tmp5901;
panda$io$MemoryOutputStream$clear($tmp5902);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$cleanup(org$pandalanguage$pandac$CCodeGenerator* param0) {

// line 11
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$Weak** $tmp5903 = &param0->compiler;
panda$core$Weak* $tmp5904 = *$tmp5903;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5904));
panda$io$File** $tmp5905 = &param0->outDir;
panda$io$File* $tmp5906 = *$tmp5905;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5906));
panda$io$IndentedOutputStream** $tmp5907 = &param0->out;
panda$io$IndentedOutputStream* $tmp5908 = *$tmp5907;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5908));
panda$io$MemoryOutputStream** $tmp5909 = &param0->strings;
panda$io$MemoryOutputStream* $tmp5910 = *$tmp5909;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5910));
panda$collections$HashSet** $tmp5911 = &param0->imports;
panda$collections$HashSet* $tmp5912 = *$tmp5911;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5912));
panda$core$Weak** $tmp5913 = &param0->hCodeGen;
panda$core$Weak* $tmp5914 = *$tmp5913;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5914));
org$pandalanguage$pandac$HCodeGenerator** $tmp5915 = &param0->hCodeGenRetain;
org$pandalanguage$pandac$HCodeGenerator* $tmp5916 = *$tmp5915;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5916));
org$pandalanguage$pandac$ClassDecl** $tmp5917 = &param0->currentClass;
org$pandalanguage$pandac$ClassDecl* $tmp5918 = *$tmp5917;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5918));
panda$io$MemoryOutputStream** $tmp5919 = &param0->includes;
panda$io$MemoryOutputStream* $tmp5920 = *$tmp5919;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5920));
panda$io$MemoryOutputStream** $tmp5921 = &param0->declarations;
panda$io$MemoryOutputStream* $tmp5922 = *$tmp5921;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5922));
panda$io$MemoryOutputStream** $tmp5923 = &param0->types;
panda$io$MemoryOutputStream* $tmp5924 = *$tmp5923;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5924));
panda$io$MemoryOutputStream** $tmp5925 = &param0->methodsBuffer;
panda$io$MemoryOutputStream* $tmp5926 = *$tmp5925;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5926));
panda$io$IndentedOutputStream** $tmp5927 = &param0->methods;
panda$io$IndentedOutputStream* $tmp5928 = *$tmp5927;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5928));
panda$io$MemoryOutputStream** $tmp5929 = &param0->methodHeaderBuffer;
panda$io$MemoryOutputStream* $tmp5930 = *$tmp5929;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5930));
panda$io$IndentedOutputStream** $tmp5931 = &param0->methodHeader;
panda$io$IndentedOutputStream* $tmp5932 = *$tmp5931;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5932));
panda$io$MemoryOutputStream** $tmp5933 = &param0->shimsBuffer;
panda$io$MemoryOutputStream* $tmp5934 = *$tmp5933;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5934));
panda$io$IndentedOutputStream** $tmp5935 = &param0->shims;
panda$io$IndentedOutputStream* $tmp5936 = *$tmp5935;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5936));
panda$collections$HashSet** $tmp5937 = &param0->declared;
panda$collections$HashSet* $tmp5938 = *$tmp5937;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5938));
panda$collections$HashSet** $tmp5939 = &param0->writtenTypes;
panda$collections$HashSet* $tmp5940 = *$tmp5939;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5940));
panda$collections$HashSet** $tmp5941 = &param0->writtenWrappers;
panda$collections$HashSet* $tmp5942 = *$tmp5941;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5942));
panda$collections$HashMap** $tmp5943 = &param0->classConstants;
panda$collections$HashMap* $tmp5944 = *$tmp5943;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5944));
panda$collections$IdentityMap** $tmp5945 = &param0->variableNames;
panda$collections$IdentityMap* $tmp5946 = *$tmp5945;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5946));
panda$core$String** $tmp5947 = &param0->currentBlock;
panda$core$String* $tmp5948 = *$tmp5947;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5948));
org$pandalanguage$pandac$MethodDecl** $tmp5949 = &param0->currentMethod;
org$pandalanguage$pandac$MethodDecl* $tmp5950 = *$tmp5949;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5950));
panda$core$String** $tmp5951 = &param0->returnValueVar;
panda$core$String* $tmp5952 = *$tmp5951;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5952));
panda$collections$Stack** $tmp5953 = &param0->enclosingContexts;
panda$collections$Stack* $tmp5954 = *$tmp5953;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5954));
panda$collections$IdentityMap** $tmp5955 = &param0->methodShims;
panda$collections$IdentityMap* $tmp5956 = *$tmp5955;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5956));
panda$collections$IdentityMap** $tmp5957 = &param0->choiceDataSizes;
panda$collections$IdentityMap* $tmp5958 = *$tmp5957;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5958));
panda$collections$HashMap** $tmp5959 = &param0->refs;
panda$collections$HashMap* $tmp5960 = *$tmp5959;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5960));
org$pandalanguage$pandac$IR** $tmp5961 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp5962 = *$tmp5961;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5962));
return;

}

