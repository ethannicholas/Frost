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
typedef void (*$fn2087)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2211)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2240)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2276)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2509)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2516)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2532)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2554)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2578)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2649)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2662)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2680)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2690)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2705)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2729)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2767)(panda$collections$CollectionView*);
typedef void (*$fn2808)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn2840)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2864)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn2878)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2884)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2915)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2925)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2928)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2943)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2953)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2970)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn2979)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn2987)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3020)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3029)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn3038)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn3050)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3053)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3068)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3078)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn3107)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3242)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3272)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn3373)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3377)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3381)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3386)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3395)(panda$core$Formattable*, panda$core$String*);
typedef void (*$fn3405)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3411)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn3420)(panda$collections$Key*);
typedef void (*$fn3427)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn3442)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3685)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn3706)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn3722)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn3732)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn3762)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn3778)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn3788)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn3823)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn3999)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4016)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4021)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4041)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn4058)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn4109)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4147)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4153)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4157)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4162)(panda$collections$Iterator*);
typedef void (*$fn4177)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4185)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4195)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn4214)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn4231)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4244)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4250)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4254)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4259)(panda$collections$Iterator*);
typedef void (*$fn4266)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4272)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4280)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4315)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4378)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4413)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4436)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4451)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4473)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4487)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4512)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4549)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4561)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4576)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4587)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4602)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4613)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4628)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4665)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4683)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4694)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4717)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4734)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4753)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4768)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn4780)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn4792)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn4803)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4833)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4863)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4877)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4881)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn4902)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn4920)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4932)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4944)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4955)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4961)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4965)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4970)(panda$collections$Iterator*);
typedef void (*$fn4977)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4983)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4991)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5008)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5071)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5391)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn5409)(panda$collections$CollectionView*);
typedef void (*$fn5453)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5466)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5471)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn5500)(panda$collections$CollectionView*);
typedef void (*$fn5549)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn5561)(panda$collections$CollectionView*);
typedef void (*$fn5658)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5680)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5694)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5698)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5703)(panda$collections$Iterator*);
typedef void (*$fn5725)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5739)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5753)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn5758)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn5762)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5823)(panda$io$OutputStream*);
typedef void (*$fn5840)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn5848)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn5856)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn5864)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn5872)(panda$io$OutputStream*, panda$core$Object*);

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
static panda$core$String $s1004 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
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
static panda$core$String $s1086 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
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
static panda$core$String $s1217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70", 2, 13545, NULL };
static panda$core$String $s1273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
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
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x73\x75\x6c\x74", 6, 2270301397372, NULL };
static panda$core$String $s1574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1576 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
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
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1719 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
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
static panda$core$String $s1929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
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
static panda$core$String $s1999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2000 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s2029 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s2059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s2074 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s2075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s2081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x65\x78\x74\x65\x72\x6e\x61\x6c\x20\x67\x6c\x6f\x62\x61\x6c\x20", 19, 7395979908803736066, NULL };
static panda$core$String $s2085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s2112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s2131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s2133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s2163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static panda$core$String $s2169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s2175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s2183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x7d\x3b", 4, 233187142, NULL };
static panda$core$String $s2304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s2306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s2358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x6f\x70\x43\x6c\x61\x73\x73\x28\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x4f\x70\x43\x6c\x61\x73\x73\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 162, 4168334865051673726, NULL };
static panda$core$String $s2393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s2394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s2399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s2412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s2417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s2418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s2423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s2424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s2429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s2430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s2435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s2436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s2441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s2448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s2456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s2457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s2462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s2463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s2469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s2470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s2476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s2484 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s2490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s2491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s2498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s2499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s2503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static panda$core$String $s2629 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x29", 2, 19635, NULL };
static panda$core$String $s2642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static panda$core$String $s2644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static panda$core$String $s2652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static panda$core$String $s2654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, 318867264039102424, NULL };
static panda$core$String $s2660 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s2674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static panda$core$String $s2691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static panda$core$String $s2806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s2825 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6c\x6c\x69\x6e\x67\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20", 17, 6273213310080951380, NULL };
static panda$core$String $s2827 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x61\x20\x74\x61\x72\x67\x65\x74", 17, 4566770767977439161, NULL };
static panda$core$String $s2828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x67\x65\x74\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x28\x74\x61\x72\x67\x65\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x6d\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2c\x20\x69\x73\x53\x75\x70\x65\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x6f\x75\x74\x3a\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 233, -6328376933645788478, NULL };
static panda$core$String $s2872 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static panda$core$String $s2909 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s2941 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c\x3b", 8, 14324497440495800, NULL };
static panda$core$String $s2954 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2964 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2983 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static panda$core$String $s2999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s3003 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3007 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 17, 3278627383872437575, NULL };
static panda$core$String $s3009 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20", 22, -5027409806946055905, NULL };
static panda$core$String $s3015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3017 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x29\x3b", 15, -9084967859609473468, NULL };
static panda$core$String $s3024 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x76\x61\x6c\x75\x65\x20\x3d\x20", 10, -5658520382000078270, NULL };
static panda$core$String $s3027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3051 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3054 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s3066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x3b", 8, 14324500803727928, NULL };
static panda$core$String $s3079 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3082 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3094 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3097 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2d\x3e\x76\x61\x6c\x75\x65", 8, 15272754413107790, NULL };
static panda$core$String $s3124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c\x20\x3f\x20", 11, 7728168270859090233, NULL };
static panda$core$String $s3130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20\x28", 4, 137624963, NULL };
static panda$core$String $s3134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x30\x20\x7d\x29", 19, 3502995608209124108, NULL };
static panda$core$String $s3142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s3147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x74\x72\x75\x65\x20\x7d\x29", 9, 1573697403055851823, NULL };
static panda$core$String $s3150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s3161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x30", 2, 14895, NULL };
static panda$core$String $s3334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73", 2, 13952, NULL };
static panda$core$String $s3352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s3362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s3366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x24\x63\x6c\x61\x73\x73\x2c\x20", 46, -5089590097621792313, NULL };
static panda$core$String $s3368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x68\x61\x72\x38\x2a\x29\x20\x22", 21, 2848555729212071077, NULL };
static panda$core$String $s3397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s3399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x3e\x32", 3, 1526261, NULL };
static panda$core$String $s3401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x78", 2, 19613, NULL };
static panda$core$String $s3403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x2c\x20", 3, 1381611, NULL };
static panda$core$String $s3417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x4e\x55\x4c\x4c\x20\x7d\x3b", 9, 1573656756204980508, NULL };
static panda$core$String $s3430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x74\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3a\x20", 14, 4299600041167827879, NULL };
static panda$core$String $s3449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x66\x61\x6c\x73\x65\x20\x7d\x29", 23, 6429304196845160675, NULL };
static panda$core$String $s3479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x4e\x55\x4c\x4c\x29", 7, 151080389671230, NULL };
static panda$core$String $s3486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x67\x65\x74\x4e\x75\x6c\x6c\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x28\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 139, 5606836112822051941, NULL };
static panda$core$String $s3516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x26\x6c\x6f\x63\x61\x6c", 7, 150085078960302, NULL };
static panda$core$String $s3518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x6d", 5, 22265977430, NULL };
static panda$core$String $s3559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x20\x72\x65\x66\x3a\x20", 15, -4631094845120441450, NULL };
static panda$core$String $s3591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x76\x61\x6c\x75\x65\x20", 18, -3453142811018688841, NULL };
static panda$core$String $s3612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x67\x65\x74\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x28\x76\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 139, -7969864358283313808, NULL };
static panda$core$String $s3690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3737 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s3742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s3747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x3d\x20\x4e\x55\x4c\x4c", 8, 14324797439511602, NULL };
static panda$core$String $s3770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s3802 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c", 8, 14295074875294774, NULL };
static panda$core$String $s3855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s3856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s3861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s3862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s3867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s3877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s3882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s3883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s3888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s3889 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s3894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s3895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s3903 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3912 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s3913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s3921 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s3922 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s3930 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s3931 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s3939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s3940 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s3945 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s3946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s3951 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s3952 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s3957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s3958 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s3963 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s3964 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s3970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x3a\x20", 22, 2546911445157482260, NULL };
static panda$core$String $s3972 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3973 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3981 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3989 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3997 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4012 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s4014 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4029 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s4031 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s4035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s4039 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4049 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s4055 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 16, -2035714527346219032, NULL };
static panda$core$String $s4065 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s4067 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4073 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s4075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s4097 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 19, -1805496395169551456, NULL };
static panda$core$String $s4102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s4124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s4136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s4145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s4149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x3b", 2, 22885, NULL };
static panda$core$String $s4225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s4300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s4313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s4337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s4357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s4361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s4365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x29\x20\x28", 4, 147754556, NULL };
static panda$core$String $s4369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x64\x61\x74\x61\x20", 8, 15719379260890086, NULL };
static panda$core$String $s4373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b\x20", 2, 14576, NULL };
static panda$core$String $s4375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s4398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s4402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x26", 4, 137655564, NULL };
static panda$core$String $s4406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s4411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static panda$core$String $s4430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static panda$core$String $s4441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static panda$core$String $s4443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, 318867264039102424, NULL };
static panda$core$String $s4449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s4467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static panda$core$String $s4488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s4498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static panda$core$String $s4510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s4530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s4538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s4542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static panda$core$String $s4546 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s4566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x2a", 4, 137655568, NULL };
static panda$core$String $s4574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x2d", 4, 137655571, NULL };
static panda$core$String $s4600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x21", 4, 137655559, NULL };
static panda$core$String $s4626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s4650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28\x28", 5, 13903212206, NULL };
static panda$core$String $s4654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x29\x20\x70\x61\x6e\x64\x61\x5a\x41\x6c\x6c\x6f\x63\x28", 15, 5261903096392821497, NULL };
static panda$core$String $s4658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static panda$core$String $s4662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static panda$core$String $s4679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x46\x72\x65\x65\x28", 10, -5790438204225352665, NULL };
static panda$core$String $s4681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s4703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s4715 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s4739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s4751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x69\x7a\x65\x20\x66\x6f\x72\x20\x74\x79\x70\x65\x20", 22, 6026307984013519672, NULL };
static panda$core$String $s4785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s4797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s4808 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x52\x65\x61\x6c\x6c\x6f\x63\x28", 15, 2191018519584705024, NULL };
static panda$core$String $s4812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static panda$core$String $s4821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4825 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static panda$core$String $s4830 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s4853 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s4857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x20\x3d\x20", 4, 200211019, NULL };
static panda$core$String $s4861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s4875 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x3b", 7, 229300545255632, NULL };
static panda$core$String $s4895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4930 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4942 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4951 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s4953 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4958 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4986 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4992 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s5000 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s5002 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s5006 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5067 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x2f\x20", 3, 1514527, NULL };
static panda$core$String $s5069 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x62\x6f\x72\x74\x28\x29\x3b\x20\x2f\x2f\x20\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 23, 8273563093259754029, NULL };
static panda$core$String $s5397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x20", 22, 6964540114321148707, NULL };
static panda$core$String $s5399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s5432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 21864007024, NULL };
static panda$core$String $s5434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c", 7, 141826707331641, NULL };
static panda$core$String $s5472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5537 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5547 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x3b", 2, 16118, NULL };
static panda$core$String $s5552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s5554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s5652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5656 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s5660 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x61\x72\x61\x6d", 6, 1409599243562, NULL };
static panda$core$String $s5678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s5689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s5711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x61\x72\x61\x6d", 6, 1409599243562, NULL };
static panda$core$String $s5723 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s5734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s5740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s5763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s5776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s5810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };

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
panda$core$Panda$unref$panda$core$Object$Q($tmp463);
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
panda$core$Panda$unref$panda$core$Object$Q($tmp485);
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
panda$core$Panda$unref$panda$core$Object$Q($tmp585);
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
int64_t $tmp625 = $tmp623.value;
int64_t $tmp626 = $tmp624.value;
bool $tmp627 = $tmp625 != $tmp626;
panda$core$Bit $tmp628 = (panda$core$Bit) {$tmp627};
bool $tmp629 = $tmp628.value;
if ($tmp629) goto block30; else goto block31;
block30:;
// line 285
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
// line 287
panda$core$Int64 $tmp641 = *(&local2);
panda$core$Int64 $tmp642 = *(&local4);
panda$core$Int64 $tmp643 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp641, $tmp642);
panda$core$Int64 $tmp644 = (panda$core$Int64) {0};
panda$core$Bit $tmp645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp643, $tmp644);
bool $tmp646 = $tmp645.value;
if ($tmp646) goto block32; else goto block33;
block33:;
panda$core$Int64 $tmp647 = (panda$core$Int64) {287};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s648, $tmp647);
abort(); // unreachable
block32:;
// line 288
panda$core$Int64 $tmp649 = *(&local2);
panda$core$Int64 $tmp650 = *(&local4);
int64_t $tmp651 = $tmp649.value;
int64_t $tmp652 = $tmp650.value;
int64_t $tmp653 = $tmp651 + $tmp652;
panda$core$Int64 $tmp654 = (panda$core$Int64) {$tmp653};
*(&local2) = $tmp654;
goto block28;
block28:;
org$pandalanguage$pandac$FieldDecl* $tmp655 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp655));
// unreffing f
*(&local3) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block22;
block24:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp572));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp576));
// line 291
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp658)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp661)));
bool $tmp666 = $tmp665.value;
if ($tmp666) goto block34; else goto block35;
block34:;
// line 292
panda$core$Int64 $tmp667 = *(&local2);
panda$core$Int64 $tmp668 = (panda$core$Int64) {1};
int64_t $tmp669 = $tmp667.value;
int64_t $tmp670 = $tmp668.value;
int64_t $tmp671 = $tmp669 + $tmp670;
panda$core$Int64 $tmp672 = (panda$core$Int64) {$tmp671};
*(&local2) = $tmp672;
goto block35;
block35:;
// line 294
panda$core$Int64 $tmp673 = *(&local2);
org$pandalanguage$pandac$ClassDecl* $tmp674 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp674));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp673;

}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

// line 298
panda$core$Int64 $tmp675 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param1);
panda$core$Int64 $tmp676 = (panda$core$Int64) {8};
panda$core$Int64 $tmp677 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp675, $tmp676);
return $tmp677;

}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$stride$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 302
panda$core$Int64 $tmp678 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param1);
*(&local0) = $tmp678;
// line 303
panda$core$Int64 $tmp679 = org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param1);
*(&local1) = $tmp679;
// line 304
panda$core$Int64 $tmp680 = *(&local0);
panda$core$Int64 $tmp681 = *(&local1);
panda$core$Int64 $tmp682 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp680, $tmp681);
panda$core$Int64 $tmp683 = (panda$core$Int64) {0};
panda$core$Bit $tmp684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp682, $tmp683);
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block1; else goto block2;
block1:;
// line 305
panda$core$Int64 $tmp686 = *(&local0);
return $tmp686;
block2:;
// line 307
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
// line 311
panda$core$Weak** $tmp700 = &param0->compiler;
panda$core$Weak* $tmp701 = *$tmp700;
panda$core$Object* $tmp702 = panda$core$Weak$get$R$panda$core$Weak$T($tmp701);
panda$core$Panda$unref$panda$core$Object$Q($tmp702);
org$pandalanguage$pandac$ClassDecl* $tmp703 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp702), param1);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp704 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp704));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp703));
*(&local0) = $tmp703;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp703));
// line 312
org$pandalanguage$pandac$ClassDecl* $tmp705 = *(&local0);
panda$core$Bit $tmp706 = panda$core$Bit$init$builtin_bit($tmp705 != NULL);
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block1; else goto block2;
block1:;
panda$core$Weak** $tmp708 = &param0->compiler;
panda$core$Weak* $tmp709 = *$tmp708;
panda$core$Object* $tmp710 = panda$core$Weak$get$R$panda$core$Weak$T($tmp709);
panda$core$Panda$unref$panda$core$Object$Q($tmp710);
org$pandalanguage$pandac$ClassDecl* $tmp711 = *(&local0);
panda$core$Bit $tmp712 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp710), $tmp711);
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
panda$core$Int64 $tmp715 = (panda$core$Int64) {312};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s716, $tmp715);
abort(); // unreachable
block4:;
// line 313
org$pandalanguage$pandac$Type* $tmp717 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
panda$core$Int64 $tmp718 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, $tmp717);
*(&local2) = $tmp718;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp717));
// line 314
panda$core$Weak** $tmp719 = &param0->compiler;
panda$core$Weak* $tmp720 = *$tmp719;
panda$core$Object* $tmp721 = panda$core$Weak$get$R$panda$core$Weak$T($tmp720);
panda$core$Panda$unref$panda$core$Object$Q($tmp721);
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
panda$core$Panda$unref$panda$core$Object$Q($tmp736);
org$pandalanguage$pandac$FieldDecl* $tmp737 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp737));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp736)));
*(&local3) = ((org$pandalanguage$pandac$FieldDecl*) $tmp736);
// line 315
panda$core$Weak** $tmp738 = &param0->compiler;
panda$core$Weak* $tmp739 = *$tmp738;
panda$core$Object* $tmp740 = panda$core$Weak$get$R$panda$core$Weak$T($tmp739);
panda$core$Panda$unref$panda$core$Object$Q($tmp740);
org$pandalanguage$pandac$FieldDecl* $tmp741 = *(&local3);
panda$core$Bit $tmp742 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp740), $tmp741);
// line 316
org$pandalanguage$pandac$FieldDecl* $tmp743 = *(&local3);
org$pandalanguage$pandac$Type** $tmp744 = &$tmp743->type;
org$pandalanguage$pandac$Type* $tmp745 = *$tmp744;
org$pandalanguage$pandac$Type* $tmp746 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp747 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp745, $tmp746);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp746));
bool $tmp748 = $tmp747.value;
if ($tmp748) goto block9; else goto block11;
block9:;
// line 318
panda$core$Int64 $tmp749 = *(&local2);
panda$core$Weak** $tmp750 = &param0->hCodeGen;
panda$core$Weak* $tmp751 = *$tmp750;
panda$core$Object* $tmp752 = panda$core$Weak$get$R$panda$core$Weak$T($tmp751);
panda$core$Panda$unref$panda$core$Object$Q($tmp752);
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp753 = &((org$pandalanguage$pandac$HCodeGenerator*) $tmp752)->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp754 = *$tmp753;
org$pandalanguage$pandac$ClassDecl* $tmp755 = *(&local0);
panda$core$Int64 $tmp756 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64($tmp754, $tmp755);
int64_t $tmp757 = $tmp749.value;
int64_t $tmp758 = $tmp756.value;
int64_t $tmp759 = $tmp757 + $tmp758;
panda$core$Int64 $tmp760 = (panda$core$Int64) {$tmp759};
*(&local2) = $tmp760;
goto block10;
block11:;
// line 1
// line 321
org$pandalanguage$pandac$FieldDecl* $tmp761 = *(&local3);
org$pandalanguage$pandac$Type** $tmp762 = &$tmp761->type;
org$pandalanguage$pandac$Type* $tmp763 = *$tmp762;
panda$core$Int64 $tmp764 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, $tmp763);
*(&local4) = $tmp764;
// line 322
panda$core$Int64 $tmp765 = *(&local2);
panda$core$Int64 $tmp766 = *(&local4);
panda$core$Int64 $tmp767 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp765, $tmp766);
*(&local5) = $tmp767;
// line 323
panda$core$Int64 $tmp768 = *(&local5);
panda$core$Int64 $tmp769 = (panda$core$Int64) {0};
int64_t $tmp770 = $tmp768.value;
int64_t $tmp771 = $tmp769.value;
bool $tmp772 = $tmp770 != $tmp771;
panda$core$Bit $tmp773 = (panda$core$Bit) {$tmp772};
bool $tmp774 = $tmp773.value;
if ($tmp774) goto block12; else goto block13;
block12:;
// line 324
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
// line 326
panda$core$Int64 $tmp786 = *(&local2);
panda$core$Int64 $tmp787 = *(&local4);
panda$core$Int64 $tmp788 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp786, $tmp787);
panda$core$Int64 $tmp789 = (panda$core$Int64) {0};
panda$core$Bit $tmp790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp788, $tmp789);
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp792 = (panda$core$Int64) {326};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s793, $tmp792);
abort(); // unreachable
block14:;
// line 327
panda$core$Int64 $tmp794 = *(&local2);
panda$core$Int64 $tmp795 = *(&local4);
int64_t $tmp796 = $tmp794.value;
int64_t $tmp797 = $tmp795.value;
int64_t $tmp798 = $tmp796 + $tmp797;
panda$core$Int64 $tmp799 = (panda$core$Int64) {$tmp798};
*(&local2) = $tmp799;
goto block10;
block10:;
org$pandalanguage$pandac$FieldDecl* $tmp800 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp800));
// unreffing f
*(&local3) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block6;
block8:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp723));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp727));
// line 330
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp803)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp806)));
bool $tmp811 = $tmp810.value;
if ($tmp811) goto block16; else goto block17;
block16:;
// line 331
panda$core$Int64 $tmp812 = *(&local2);
panda$core$Int64 $tmp813 = (panda$core$Int64) {1};
int64_t $tmp814 = $tmp812.value;
int64_t $tmp815 = $tmp813.value;
int64_t $tmp816 = $tmp814 + $tmp815;
panda$core$Int64 $tmp817 = (panda$core$Int64) {$tmp816};
*(&local2) = $tmp817;
goto block17;
block17:;
// line 333
panda$core$Int64 $tmp818 = *(&local2);
org$pandalanguage$pandac$ClassDecl* $tmp819 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp819));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp818;

}
void org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

// line 337
panda$collections$HashSet** $tmp820 = &param0->writtenTypes;
panda$collections$HashSet* $tmp821 = *$tmp820;
panda$core$String** $tmp822 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp823 = *$tmp822;
panda$core$Bit $tmp824 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp821, ((panda$collections$Key*) $tmp823));
bool $tmp825 = $tmp824.value;
if ($tmp825) goto block1; else goto block2;
block1:;
// line 338
return;
block2:;
return;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

// line 343
panda$core$String** $tmp826 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp827 = *$tmp826;
panda$core$String* $tmp828 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp827);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
return $tmp828;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
// line 347
panda$core$Weak** $tmp829 = &param0->compiler;
panda$core$Weak* $tmp830 = *$tmp829;
panda$core$Object* $tmp831 = panda$core$Weak$get$R$panda$core$Weak$T($tmp830);
panda$core$Panda$unref$panda$core$Object$Q($tmp831);
org$pandalanguage$pandac$ClassDecl* $tmp832 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp831), param1);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp833 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp833));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp832));
*(&local0) = $tmp832;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp832));
// line 348
org$pandalanguage$pandac$ClassDecl* $tmp834 = *(&local0);
panda$core$Bit $tmp835 = panda$core$Bit$init$builtin_bit($tmp834 != NULL);
bool $tmp836 = $tmp835.value;
if ($tmp836) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp837 = (panda$core$Int64) {348};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s838, $tmp837);
abort(); // unreachable
block1:;
// line 349
org$pandalanguage$pandac$ClassDecl* $tmp839 = *(&local0);
org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(param0, $tmp839);
// line 350
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp842)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp845)));
bool $tmp850 = $tmp849.value;
if ($tmp850) goto block3; else goto block4;
block3:;
// line 351
panda$collections$ImmutableArray** $tmp851 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp852 = *$tmp851;
panda$core$Int64 $tmp853 = (panda$core$Int64) {0};
panda$core$Object* $tmp854 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp852, $tmp853);
panda$core$String* $tmp855 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp854));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp855));
panda$core$Panda$unref$panda$core$Object$Q($tmp854);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp855));
org$pandalanguage$pandac$ClassDecl* $tmp856 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp856));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp855;
block4:;
// line 353
panda$core$String** $tmp857 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp858 = *$tmp857;
panda$core$String* $tmp859 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp858);
panda$core$String* $tmp860 = panda$core$String$convert$R$panda$core$String($tmp859);
panda$core$String* $tmp861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp860, &$s862);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp859));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp860));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
org$pandalanguage$pandac$ClassDecl* $tmp863 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp863));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp861;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

// line 357
panda$core$String* $tmp864 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param1);
panda$core$String* $tmp865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp864, &$s866);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp865));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp864));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp865));
return $tmp865;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

org$pandalanguage$pandac$Type* local0 = NULL;
panda$core$MutableString* local1 = NULL;
panda$core$Int64 local2;
// line 361
panda$core$Weak** $tmp867 = &param0->compiler;
panda$core$Weak* $tmp868 = *$tmp867;
panda$core$Object* $tmp869 = panda$core$Weak$get$R$panda$core$Weak$T($tmp868);
panda$core$Panda$unref$panda$core$Object$Q($tmp869);
org$pandalanguage$pandac$Type* $tmp870 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp869), param1);
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp871 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp871));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp870));
*(&local0) = $tmp870;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp870));
// line 362
panda$core$MutableString* $tmp872 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp872);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp873 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp873));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp872));
*(&local1) = $tmp872;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp872));
// line 363
panda$core$MutableString* $tmp874 = *(&local1);
org$pandalanguage$pandac$Type* $tmp875 = *(&local0);
org$pandalanguage$pandac$Type* $tmp876 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp875);
panda$core$String* $tmp877 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp876);
panda$core$MutableString$append$panda$core$String($tmp874, $tmp877);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp876));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp877));
// line 364
panda$core$MutableString* $tmp878 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp878, &$s879);
// line 365
panda$core$Bit $tmp880 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(param1);
bool $tmp881 = $tmp880.value;
if ($tmp881) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp882 = (panda$core$Int64) {365};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s883, $tmp882);
abort(); // unreachable
block1:;
// line 366
panda$core$MutableString* $tmp884 = *(&local1);
panda$core$Weak** $tmp885 = &param1->owner;
panda$core$Weak* $tmp886 = *$tmp885;
panda$core$Object* $tmp887 = panda$core$Weak$get$R$panda$core$Weak$T($tmp886);
panda$core$Panda$unref$panda$core$Object$Q($tmp887);
panda$core$String** $tmp888 = &((org$pandalanguage$pandac$ClassDecl*) $tmp887)->name;
panda$core$String* $tmp889 = *$tmp888;
panda$core$String* $tmp890 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp889);
panda$core$String* $tmp891 = panda$core$String$convert$R$panda$core$String($tmp890);
panda$core$String* $tmp892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp891, &$s893);
panda$core$MutableString$append$panda$core$String($tmp884, $tmp892);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp890));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp891));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp892));
// line 367
panda$core$Weak** $tmp894 = &param0->compiler;
panda$core$Weak* $tmp895 = *$tmp894;
panda$core$Object* $tmp896 = panda$core$Weak$get$R$panda$core$Weak$T($tmp895);
panda$core$Panda$unref$panda$core$Object$Q($tmp896);
panda$core$Weak** $tmp897 = &param1->owner;
panda$core$Weak* $tmp898 = *$tmp897;
panda$core$Object* $tmp899 = panda$core$Weak$get$R$panda$core$Weak$T($tmp898);
panda$core$Panda$unref$panda$core$Object$Q($tmp899);
panda$core$Bit $tmp900 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp896), ((org$pandalanguage$pandac$ClassDecl*) $tmp899));
bool $tmp901 = $tmp900.value;
if ($tmp901) goto block3; else goto block4;
block3:;
// line 368
panda$core$MutableString* $tmp902 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp902, &$s903);
goto block4;
block4:;
// line 370
panda$core$MutableString* $tmp904 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp904, &$s905);
// line 371
panda$core$Int64 $tmp906 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp907 = *(&local0);
panda$collections$ImmutableArray** $tmp908 = &$tmp907->subtypes;
panda$collections$ImmutableArray* $tmp909 = *$tmp908;
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
// line 372
panda$core$MutableString* $tmp937 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp937, &$s938);
// line 373
panda$core$MutableString* $tmp939 = *(&local1);
org$pandalanguage$pandac$Type* $tmp940 = *(&local0);
panda$collections$ImmutableArray** $tmp941 = &$tmp940->subtypes;
panda$collections$ImmutableArray* $tmp942 = *$tmp941;
panda$core$Int64 $tmp943 = *(&local2);
panda$core$Object* $tmp944 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp942, $tmp943);
panda$core$String* $tmp945 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp944));
panda$core$MutableString$append$panda$core$String($tmp939, $tmp945);
panda$core$Panda$unref$panda$core$Object$Q($tmp944);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp945));
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
// line 375
panda$core$MutableString* $tmp966 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp966, &$s967);
// line 376
panda$core$MutableString* $tmp968 = *(&local1);
panda$core$String* $tmp969 = panda$core$MutableString$finish$R$panda$core$String($tmp968);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp969));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp969));
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

// line 380
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
panda$core$Int64 $tmp983 = (panda$core$Int64) {380};
panda$core$String* $tmp984 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(param1);
panda$core$String* $tmp985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp984, &$s986);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s987, $tmp983, $tmp985);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp984));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp985));
abort(); // unreachable
block1:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp974)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp977)));
// line 381
panda$collections$ImmutableArray** $tmp988 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp989 = *$tmp988;
panda$core$Int64 $tmp990 = (panda$core$Int64) {0};
panda$core$Object* $tmp991 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp989, $tmp990);
panda$core$String* $tmp992 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp991));
panda$core$String* $tmp993 = panda$core$String$convert$R$panda$core$String($tmp992);
panda$core$String* $tmp994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp993, &$s995);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp994));
panda$core$Panda$unref$panda$core$Object$Q($tmp991);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp992));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp993));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp994));
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
// line 385
panda$core$Weak** $tmp996 = &param0->compiler;
panda$core$Weak* $tmp997 = *$tmp996;
panda$core$Object* $tmp998 = panda$core$Weak$get$R$panda$core$Weak$T($tmp997);
panda$core$Panda$unref$panda$core$Object$Q($tmp998);
org$pandalanguage$pandac$Type** $tmp999 = &param1->type;
org$pandalanguage$pandac$Type* $tmp1000 = *$tmp999;
panda$collections$HashSet* $tmp1001 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$HashSet$LTorg$pandalanguage$pandac$Type$GT(((org$pandalanguage$pandac$Compiler*) $tmp998), $tmp1000);
*(&local0) = ((panda$collections$HashSet*) NULL);
panda$collections$HashSet* $tmp1002 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1002));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1001));
*(&local0) = $tmp1001;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1001));
// line 386
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp1003 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1003));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1004));
*(&local1) = &$s1005;
// line 387
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
panda$core$Panda$unref$panda$core$Object$Q($tmp1019);
org$pandalanguage$pandac$Type* $tmp1020 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1020));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1019)));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp1019);
// line 388
panda$core$Weak** $tmp1021 = &param0->compiler;
panda$core$Weak* $tmp1022 = *$tmp1021;
panda$core$Object* $tmp1023 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1022);
panda$core$Panda$unref$panda$core$Object$Q($tmp1023);
org$pandalanguage$pandac$Type* $tmp1024 = *(&local2);
org$pandalanguage$pandac$ClassDecl* $tmp1025 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1023), $tmp1024);
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp1026 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1026));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1025));
*(&local3) = $tmp1025;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1025));
// line 389
org$pandalanguage$pandac$ClassDecl* $tmp1027 = *(&local3);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1028 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, $tmp1027);
*(&local4) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1029 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1029));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
*(&local4) = $tmp1028;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
// line 390
panda$core$Weak** $tmp1030 = &param0->compiler;
panda$core$Weak* $tmp1031 = *$tmp1030;
panda$core$Object* $tmp1032 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1031);
panda$core$Panda$unref$panda$core$Object$Q($tmp1032);
org$pandalanguage$pandac$Type* $tmp1033 = *(&local2);
panda$collections$ListView* $tmp1034 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp1032), param1, $tmp1033);
*(&local5) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp1035 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1035));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1034));
*(&local5) = $tmp1034;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1034));
// line 391
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
panda$core$String* $tmp1049 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1049));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1047));
*(&local6) = $tmp1047;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1038));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1039));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1040));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1045));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1046));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1047));
// line 392
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
panda$core$MutableString* $tmp1084 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1084));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1050));
*(&local7) = $tmp1050;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1050));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1051));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1052));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1053));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1055));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1062));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1063));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1065));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1068));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1069));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1071));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1075));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1077));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1080));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1081));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1083));
// line 395
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp1085 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1085));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1086));
*(&local8) = &$s1087;
// line 396
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
panda$core$Panda$unref$panda$core$Object$Q($tmp1101);
org$pandalanguage$pandac$MethodDecl* $tmp1102 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1102));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1101)));
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) $tmp1101);
// line 397
panda$core$MutableString* $tmp1103 = *(&local7);
panda$core$String* $tmp1104 = *(&local8);
panda$core$MutableString$append$panda$core$String($tmp1103, $tmp1104);
// line 398
panda$core$String* $tmp1105 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1105));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1106));
*(&local8) = &$s1107;
// line 399
org$pandalanguage$pandac$MethodDecl* $tmp1108 = *(&local9);
org$pandalanguage$pandac$Annotations** $tmp1109 = &$tmp1108->annotations;
org$pandalanguage$pandac$Annotations* $tmp1110 = *$tmp1109;
panda$core$Bit $tmp1111 = org$pandalanguage$pandac$Annotations$get_isAbstract$R$panda$core$Bit($tmp1110);
bool $tmp1112 = $tmp1111.value;
if ($tmp1112) goto block7; else goto block9;
block7:;
// line 400
panda$core$MutableString* $tmp1113 = *(&local7);
panda$core$MutableString$append$panda$core$String($tmp1113, &$s1114);
goto block8;
block9:;
// line 1
// line 403
panda$core$MutableString* $tmp1115 = *(&local7);
org$pandalanguage$pandac$MethodDecl* $tmp1116 = *(&local9);
panda$core$String* $tmp1117 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, $tmp1116);
panda$core$MutableString$append$panda$core$String($tmp1115, $tmp1117);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1117));
goto block8;
block8:;
org$pandalanguage$pandac$MethodDecl* $tmp1118 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1118));
// unreffing m
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block4;
block6:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1092));
// line 406
panda$core$MutableString* $tmp1119 = *(&local7);
panda$core$MutableString$append$panda$core$String($tmp1119, &$s1120);
// line 407
panda$io$MemoryOutputStream** $tmp1121 = &param0->types;
panda$io$MemoryOutputStream* $tmp1122 = *$tmp1121;
panda$core$MutableString* $tmp1123 = *(&local7);
panda$core$String* $tmp1124 = panda$core$MutableString$finish$R$panda$core$String($tmp1123);
$fn1126 $tmp1125 = ($fn1126) ((panda$io$OutputStream*) $tmp1122)->$class->vtable[19];
$tmp1125(((panda$io$OutputStream*) $tmp1122), $tmp1124);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1124));
// line 408
panda$core$String* $tmp1127 = *(&local6);
panda$core$String* $tmp1128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1129, $tmp1127);
panda$core$String* $tmp1130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1128, &$s1131);
panda$core$String* $tmp1132 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1132));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1130));
*(&local1) = $tmp1130;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1128));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1130));
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
org$pandalanguage$pandac$Type* $tmp1139 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1139));
// unreffing intfType
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1010));
// line 410
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
// line 415
panda$collections$IdentityMap** $tmp1143 = &param0->methodShims;
panda$collections$IdentityMap* $tmp1144 = *$tmp1143;
panda$core$Object* $tmp1145 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q($tmp1144, ((panda$core$Object*) param1));
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) NULL);
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1146 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1146));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp1145)));
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp1145);
panda$core$Panda$unref$panda$core$Object$Q($tmp1145);
// line 416
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1147 = *(&local0);
panda$core$Bit $tmp1148 = panda$core$Bit$init$builtin_bit($tmp1147 != NULL);
bool $tmp1149 = $tmp1148.value;
if ($tmp1149) goto block1; else goto block2;
block1:;
// line 417
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1150 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1150));
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1151 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1151));
// unreffing found
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) NULL);
return $tmp1150;
block2:;
// line 419
panda$io$IndentedOutputStream** $tmp1152 = &param0->out;
panda$io$IndentedOutputStream* $tmp1153 = *$tmp1152;
*(&local1) = ((panda$io$IndentedOutputStream*) NULL);
panda$io$IndentedOutputStream* $tmp1154 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1154));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1153));
*(&local1) = $tmp1153;
// line 420
panda$io$MemoryOutputStream* $tmp1155 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp1155);
*(&local2) = ((panda$io$MemoryOutputStream*) NULL);
panda$io$MemoryOutputStream* $tmp1156 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1156));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1155));
*(&local2) = $tmp1155;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1155));
// line 421
panda$io$IndentedOutputStream* $tmp1157 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream* $tmp1158 = *(&local2);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp1157, ((panda$io$OutputStream*) $tmp1158));
panda$io$IndentedOutputStream** $tmp1159 = &param0->out;
panda$io$IndentedOutputStream* $tmp1160 = *$tmp1159;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1160));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1157));
panda$io$IndentedOutputStream** $tmp1161 = &param0->out;
*$tmp1161 = $tmp1157;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1157));
// line 422
panda$core$Bit $tmp1162 = org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit(param2);
bool $tmp1163 = $tmp1162.value;
if ($tmp1163) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp1164 = (panda$core$Int64) {422};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1165, $tmp1164);
abort(); // unreachable
block3:;
// line 423
panda$collections$ImmutableArray** $tmp1166 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp1167 = *$tmp1166;
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
panda$core$Int64 $tmp1185 = (panda$core$Int64) {423};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1186, $tmp1185);
abort(); // unreachable
block5:;
// line 424
panda$core$Bit $tmp1187 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(param1);
bool $tmp1188 = $tmp1187.value;
if ($tmp1188) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp1189 = (panda$core$Int64) {424};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1190, $tmp1189);
abort(); // unreachable
block7:;
// line 425
org$pandalanguage$pandac$Type* $tmp1191 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type(param2);
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1192 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1192));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1191));
*(&local3) = $tmp1191;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1191));
// line 426
panda$core$String* $tmp1193 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp1194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1193, &$s1195);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp1196 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1196));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1194));
*(&local4) = $tmp1194;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1193));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1194));
// line 427
panda$core$MutableString* $tmp1197 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$Type* $tmp1198 = *(&local3);
panda$core$String* $tmp1199 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp1198);
panda$core$MutableString$init$panda$core$String($tmp1197, $tmp1199);
*(&local5) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp1200 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1200));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1197));
*(&local5) = $tmp1197;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1197));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1199));
// line 428
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1204));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1206));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1209));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1210));
// line 429
panda$core$MutableString* $tmp1214 = *(&local5);
panda$core$MutableString$append$panda$core$String($tmp1214, &$s1215);
// line 430
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp1216 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1216));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1217));
*(&local6) = &$s1218;
// line 431
panda$core$Int64 $tmp1219 = (panda$core$Int64) {0};
panda$collections$ImmutableArray** $tmp1220 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp1221 = *$tmp1220;
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
// line 432
panda$collections$ImmutableArray** $tmp1249 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp1250 = *$tmp1249;
panda$core$Int64 $tmp1251 = *(&local7);
panda$core$Object* $tmp1252 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1250, $tmp1251);
panda$core$String* $tmp1253 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp1252));
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp1254 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1254));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1253));
*(&local8) = $tmp1253;
panda$core$Panda$unref$panda$core$Object$Q($tmp1252);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1253));
// line 433
panda$core$MutableString* $tmp1255 = *(&local5);
panda$core$MutableString$append$panda$core$String($tmp1255, &$s1256);
// line 434
panda$core$MutableString* $tmp1257 = *(&local5);
panda$core$String* $tmp1258 = *(&local8);
panda$core$MutableString$append$panda$core$String($tmp1257, $tmp1258);
// line 435
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1262));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1263));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1266));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1267));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1270));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1271));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1272));
// line 436
panda$core$String* $tmp1276 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1276));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1277));
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
// line 438
panda$io$IndentedOutputStream** $tmp1300 = &param0->out;
panda$io$IndentedOutputStream* $tmp1301 = *$tmp1300;
$fn1303 $tmp1302 = ($fn1303) ((panda$io$OutputStream*) $tmp1301)->$class->vtable[19];
$tmp1302(((panda$io$OutputStream*) $tmp1301), &$s1304);
// line 439
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
// line 440
panda$core$MutableString* $tmp1315 = *(&local5);
panda$core$MutableString$append$panda$core$String($tmp1315, &$s1316);
// line 441
panda$io$MemoryOutputStream* $tmp1317 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp1317);
*(&local9) = ((panda$io$MemoryOutputStream*) NULL);
panda$io$MemoryOutputStream* $tmp1318 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1318));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1317));
*(&local9) = $tmp1317;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1317));
// line 442
panda$collections$Array* $tmp1319 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1319);
*(&local10) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1320 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1320));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1319));
*(&local10) = $tmp1319;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1319));
// line 443
panda$core$Int64 $tmp1321 = (panda$core$Int64) {0};
panda$collections$ImmutableArray** $tmp1322 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp1323 = *$tmp1322;
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
// line 444
panda$core$Int64 $tmp1351 = *(&local11);
panda$core$Int64$wrapper* $tmp1352;
$tmp1352 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1352->value = $tmp1351;
panda$core$String* $tmp1353 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1354, ((panda$core$Object*) $tmp1352));
panda$core$String* $tmp1355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1353, &$s1356);
*(&local12) = ((panda$core$String*) NULL);
panda$core$String* $tmp1357 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1357));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1355));
*(&local12) = $tmp1355;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1352));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1353));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1355));
// line 445
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
// line 446
panda$core$Int64 $tmp1358 = *(&local11);
panda$core$Int64 $tmp1359 = (panda$core$Int64) {0};
panda$core$Bit $tmp1360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1358, $tmp1359);
bool $tmp1361 = $tmp1360.value;
if ($tmp1361) goto block22; else goto block24;
block22:;
// line 447
panda$core$Weak** $tmp1362 = &param1->owner;
panda$core$Weak* $tmp1363 = *$tmp1362;
panda$core$Object* $tmp1364 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1363);
panda$core$Panda$unref$panda$core$Object$Q($tmp1364);
org$pandalanguage$pandac$Type** $tmp1365 = &((org$pandalanguage$pandac$ClassDecl*) $tmp1364)->type;
org$pandalanguage$pandac$Type* $tmp1366 = *$tmp1365;
org$pandalanguage$pandac$Type* $tmp1367 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1367));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1366));
*(&local13) = $tmp1366;
goto block23;
block24:;
// line 1
// line 450
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
org$pandalanguage$pandac$Type* $tmp1379 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1379));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1378));
*(&local13) = $tmp1378;
panda$core$Panda$unref$panda$core$Object$Q($tmp1376);
goto block23;
block23:;
// line 452
org$pandalanguage$pandac$Type* $tmp1380 = *(&local13);
panda$collections$ImmutableArray** $tmp1381 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp1382 = *$tmp1381;
panda$core$Int64 $tmp1383 = *(&local11);
panda$core$Object* $tmp1384 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1382, $tmp1383);
ITable* $tmp1385 = ((panda$core$Equatable*) $tmp1380)->$class->itable;
while ($tmp1385->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1385 = $tmp1385->next;
}
$fn1387 $tmp1386 = $tmp1385->methods[1];
panda$core$Bit $tmp1388 = $tmp1386(((panda$core$Equatable*) $tmp1380), ((panda$core$Equatable*) ((org$pandalanguage$pandac$Type*) $tmp1384)));
panda$core$Panda$unref$panda$core$Object$Q($tmp1384);
bool $tmp1389 = $tmp1388.value;
if ($tmp1389) goto block25; else goto block27;
block25:;
// line 453
panda$core$String* $tmp1390 = *(&local12);
panda$collections$ImmutableArray** $tmp1391 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp1392 = *$tmp1391;
panda$core$Int64 $tmp1393 = *(&local11);
panda$core$Object* $tmp1394 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1392, $tmp1393);
org$pandalanguage$pandac$Type* $tmp1395 = *(&local13);
panda$core$String* $tmp1396 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp1390, ((org$pandalanguage$pandac$Type*) $tmp1394), $tmp1395);
*(&local14) = ((panda$core$String*) NULL);
panda$core$String* $tmp1397 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1397));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1396));
*(&local14) = $tmp1396;
panda$core$Panda$unref$panda$core$Object$Q($tmp1394);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1396));
// line 454
panda$collections$Array* $tmp1398 = *(&local10);
panda$core$String* $tmp1399 = *(&local14);
panda$collections$Array$add$panda$collections$Array$T($tmp1398, ((panda$core$Object*) $tmp1399));
// line 455
panda$core$Weak** $tmp1400 = &param0->compiler;
panda$core$Weak* $tmp1401 = *$tmp1400;
panda$core$Object* $tmp1402 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1401);
panda$core$Panda$unref$panda$core$Object$Q($tmp1402);
panda$collections$ImmutableArray** $tmp1403 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp1404 = *$tmp1403;
panda$core$Int64 $tmp1405 = *(&local11);
panda$core$Object* $tmp1406 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1404, $tmp1405);
panda$core$Bit $tmp1407 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1402), ((org$pandalanguage$pandac$Type*) $tmp1406));
panda$core$Panda$unref$panda$core$Object$Q($tmp1406);
bool $tmp1408 = $tmp1407.value;
if ($tmp1408) goto block28; else goto block29;
block28:;
panda$core$Weak** $tmp1409 = &param0->compiler;
panda$core$Weak* $tmp1410 = *$tmp1409;
panda$core$Object* $tmp1411 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1410);
panda$core$Panda$unref$panda$core$Object$Q($tmp1411);
org$pandalanguage$pandac$Type* $tmp1412 = *(&local13);
panda$core$Bit $tmp1413 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1411), $tmp1412);
panda$core$Bit $tmp1414 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1413);
*(&local15) = $tmp1414;
goto block30;
block29:;
*(&local15) = $tmp1407;
goto block30;
block30:;
panda$core$Bit $tmp1415 = *(&local15);
bool $tmp1416 = $tmp1415.value;
if ($tmp1416) goto block31; else goto block32;
block31:;
// line 456
panda$io$MemoryOutputStream* $tmp1417 = *(&local9);
panda$core$String* $tmp1418 = *(&local14);
panda$core$String* $tmp1419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1420, $tmp1418);
panda$core$String* $tmp1421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1419, &$s1422);
panda$core$String* $tmp1423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1424, $tmp1421);
$fn1426 $tmp1425 = ($fn1426) ((panda$io$OutputStream*) $tmp1417)->$class->vtable[19];
$tmp1425(((panda$io$OutputStream*) $tmp1417), $tmp1423);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1419));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1421));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1423));
goto block32;
block32:;
panda$core$String* $tmp1427 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1427));
// unreffing cast
*(&local14) = ((panda$core$String*) NULL);
goto block26;
block27:;
// line 1
// line 461
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
// line 464
org$pandalanguage$pandac$Type** $tmp1452 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp1453 = *$tmp1452;
org$pandalanguage$pandac$Type* $tmp1454 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp1455 = ((panda$core$Equatable*) $tmp1453)->$class->itable;
while ($tmp1455->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1455 = $tmp1455->next;
}
$fn1457 $tmp1456 = $tmp1455->methods[1];
panda$core$Bit $tmp1458 = $tmp1456(((panda$core$Equatable*) $tmp1453), ((panda$core$Equatable*) $tmp1454));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1454));
bool $tmp1459 = $tmp1458.value;
if ($tmp1459) goto block36; else goto block37;
block36:;
// line 465
panda$io$IndentedOutputStream** $tmp1460 = &param0->out;
panda$io$IndentedOutputStream* $tmp1461 = *$tmp1460;
org$pandalanguage$pandac$Type** $tmp1462 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp1463 = *$tmp1462;
panda$core$String* $tmp1464 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp1463);
panda$core$String* $tmp1465 = panda$core$String$convert$R$panda$core$String($tmp1464);
panda$core$String* $tmp1466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1465, &$s1467);
$fn1469 $tmp1468 = ($fn1469) ((panda$io$OutputStream*) $tmp1461)->$class->vtable[17];
$tmp1468(((panda$io$OutputStream*) $tmp1461), $tmp1466);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1464));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1465));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1466));
goto block37;
block37:;
// line 467
panda$io$IndentedOutputStream** $tmp1470 = &param0->out;
panda$io$IndentedOutputStream* $tmp1471 = *$tmp1470;
panda$core$String* $tmp1472 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp1473 = panda$core$String$convert$R$panda$core$String($tmp1472);
panda$core$String* $tmp1474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1473, &$s1475);
$fn1477 $tmp1476 = ($fn1477) ((panda$io$OutputStream*) $tmp1471)->$class->vtable[17];
$tmp1476(((panda$io$OutputStream*) $tmp1471), $tmp1474);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1472));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1473));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1474));
// line 468
panda$core$String* $tmp1478 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1478));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1479));
*(&local6) = &$s1480;
// line 469
panda$core$Int64 $tmp1481 = (panda$core$Int64) {0};
panda$collections$ImmutableArray** $tmp1482 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp1483 = *$tmp1482;
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
// line 470
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1514));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1515));
panda$core$Panda$unref$panda$core$Object$Q($tmp1519);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1520));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1521));
// line 471
panda$core$String* $tmp1525 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1525));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1526));
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
// line 473
panda$io$IndentedOutputStream** $tmp1548 = &param0->out;
panda$io$IndentedOutputStream* $tmp1549 = *$tmp1548;
$fn1551 $tmp1550 = ($fn1551) ((panda$io$OutputStream*) $tmp1549)->$class->vtable[19];
$tmp1550(((panda$io$OutputStream*) $tmp1549), &$s1552);
// line 474
panda$io$IndentedOutputStream** $tmp1553 = &param0->out;
panda$io$IndentedOutputStream* $tmp1554 = *$tmp1553;
panda$io$MemoryOutputStream* $tmp1555 = *(&local9);
$fn1557 $tmp1556 = ($fn1557) ((panda$io$OutputStream*) $tmp1554)->$class->vtable[20];
$tmp1556(((panda$io$OutputStream*) $tmp1554), ((panda$core$Object*) $tmp1555));
// line 475
org$pandalanguage$pandac$Type** $tmp1558 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp1559 = *$tmp1558;
org$pandalanguage$pandac$Type* $tmp1560 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp1561 = ((panda$core$Equatable*) $tmp1559)->$class->itable;
while ($tmp1561->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1561 = $tmp1561->next;
}
$fn1563 $tmp1562 = $tmp1561->methods[1];
panda$core$Bit $tmp1564 = $tmp1562(((panda$core$Equatable*) $tmp1559), ((panda$core$Equatable*) $tmp1560));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1560));
bool $tmp1565 = $tmp1564.value;
if ($tmp1565) goto block46; else goto block47;
block46:;
// line 476
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1571));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1573));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1575));
goto block47;
block47:;
// line 479
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
// line 480
panda$io$IndentedOutputStream** $tmp1589 = &param0->out;
panda$io$IndentedOutputStream* $tmp1590 = *$tmp1589;
$fn1592 $tmp1591 = ($fn1592) ((panda$io$OutputStream*) $tmp1590)->$class->vtable[19];
$tmp1591(((panda$io$OutputStream*) $tmp1590), &$s1593);
// line 481
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1594 = (org$pandalanguage$pandac$CCodeGenerator$MethodShim*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$MethodShim$class);
panda$core$String* $tmp1595 = *(&local4);
panda$core$MutableString* $tmp1596 = *(&local5);
panda$core$String* $tmp1597 = panda$core$MutableString$finish$R$panda$core$String($tmp1596);
org$pandalanguage$pandac$CCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp1594, $tmp1595, $tmp1597);
*(&local17) = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) NULL);
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1598 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1598));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1594));
*(&local17) = $tmp1594;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1594));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1597));
// line 482
panda$collections$IdentityMap** $tmp1599 = &param0->methodShims;
panda$collections$IdentityMap* $tmp1600 = *$tmp1599;
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1601 = *(&local17);
panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V($tmp1600, ((panda$core$Object*) param1), ((panda$core$Object*) $tmp1601));
// line 483
panda$io$IndentedOutputStream** $tmp1602 = &param0->shims;
panda$io$IndentedOutputStream* $tmp1603 = *$tmp1602;
panda$io$MemoryOutputStream* $tmp1604 = *(&local2);
panda$core$String* $tmp1605 = panda$io$MemoryOutputStream$finish$R$panda$core$String($tmp1604);
$fn1607 $tmp1606 = ($fn1607) ((panda$io$OutputStream*) $tmp1603)->$class->vtable[17];
$tmp1606(((panda$io$OutputStream*) $tmp1603), $tmp1605);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1605));
// line 484
panda$io$IndentedOutputStream* $tmp1608 = *(&local1);
panda$io$IndentedOutputStream** $tmp1609 = &param0->out;
panda$io$IndentedOutputStream* $tmp1610 = *$tmp1609;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1610));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1608));
panda$io$IndentedOutputStream** $tmp1611 = &param0->out;
*$tmp1611 = $tmp1608;
// line 485
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
// line 489
panda$core$Weak** $tmp1623 = &param0->compiler;
panda$core$Weak* $tmp1624 = *$tmp1623;
panda$core$Object* $tmp1625 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1624);
panda$core$Panda$unref$panda$core$Object$Q($tmp1625);
org$pandalanguage$pandac$Type** $tmp1626 = &param1->type;
org$pandalanguage$pandac$Type* $tmp1627 = *$tmp1626;
panda$collections$HashSet* $tmp1628 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$HashSet$LTorg$pandalanguage$pandac$Type$GT(((org$pandalanguage$pandac$Compiler*) $tmp1625), $tmp1627);
*(&local0) = ((panda$collections$HashSet*) NULL);
panda$collections$HashSet* $tmp1629 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1629));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1628));
*(&local0) = $tmp1628;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1628));
// line 490
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp1630 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1630));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1631));
*(&local1) = &$s1632;
// line 491
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
panda$core$Panda$unref$panda$core$Object$Q($tmp1646);
org$pandalanguage$pandac$Type* $tmp1647 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1647));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1646)));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp1646);
// line 492
panda$core$Weak** $tmp1648 = &param0->compiler;
panda$core$Weak* $tmp1649 = *$tmp1648;
panda$core$Object* $tmp1650 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1649);
panda$core$Panda$unref$panda$core$Object$Q($tmp1650);
org$pandalanguage$pandac$Type* $tmp1651 = *(&local2);
org$pandalanguage$pandac$ClassDecl* $tmp1652 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1650), $tmp1651);
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp1653 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1653));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1652));
*(&local3) = $tmp1652;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1652));
// line 493
org$pandalanguage$pandac$ClassDecl* $tmp1654 = *(&local3);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1655 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, $tmp1654);
*(&local4) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1656 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1656));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1655));
*(&local4) = $tmp1655;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1655));
// line 494
panda$core$Weak** $tmp1657 = &param0->compiler;
panda$core$Weak* $tmp1658 = *$tmp1657;
panda$core$Object* $tmp1659 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1658);
panda$core$Panda$unref$panda$core$Object$Q($tmp1659);
org$pandalanguage$pandac$Type* $tmp1660 = *(&local2);
panda$collections$ListView* $tmp1661 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp1659), param1, $tmp1660);
*(&local5) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp1662 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1662));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1661));
*(&local5) = $tmp1661;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1661));
// line 495
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
panda$core$String* $tmp1676 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1676));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1674));
*(&local6) = $tmp1674;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1665));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1666));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1667));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1672));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1673));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1674));
// line 496
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
panda$core$MutableString* $tmp1716 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1716));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1677));
*(&local7) = $tmp1677;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1677));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1678));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1679));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1680));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1682));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1689));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1690));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1692));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1695));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1696));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1698));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1699));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1700));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1701));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1703));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1708));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1709));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1712));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1713));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1715));
// line 499
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp1717 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1717));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1718));
*(&local8) = &$s1719;
// line 500
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
panda$core$Panda$unref$panda$core$Object$Q($tmp1733);
org$pandalanguage$pandac$MethodDecl* $tmp1734 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1734));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1733)));
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) $tmp1733);
// line 501
panda$core$MutableString* $tmp1735 = *(&local7);
panda$core$String* $tmp1736 = *(&local8);
panda$core$MutableString$append$panda$core$String($tmp1735, $tmp1736);
// line 502
panda$core$String* $tmp1737 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1737));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1738));
*(&local8) = &$s1739;
// line 503
org$pandalanguage$pandac$MethodDecl* $tmp1740 = *(&local9);
org$pandalanguage$pandac$Annotations** $tmp1741 = &$tmp1740->annotations;
org$pandalanguage$pandac$Annotations* $tmp1742 = *$tmp1741;
panda$core$Bit $tmp1743 = org$pandalanguage$pandac$Annotations$get_isAbstract$R$panda$core$Bit($tmp1742);
bool $tmp1744 = $tmp1743.value;
if ($tmp1744) goto block7; else goto block9;
block7:;
// line 504
panda$core$MutableString* $tmp1745 = *(&local7);
panda$core$MutableString$append$panda$core$String($tmp1745, &$s1746);
goto block8;
block9:;
// line 1
// line 507
panda$core$MutableString* $tmp1747 = *(&local7);
org$pandalanguage$pandac$MethodDecl* $tmp1748 = *(&local9);
panda$core$String* $tmp1749 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, $tmp1748);
panda$core$MutableString$append$panda$core$String($tmp1747, $tmp1749);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1749));
goto block8;
block8:;
org$pandalanguage$pandac$MethodDecl* $tmp1750 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1750));
// unreffing m
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block4;
block6:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1724));
// line 510
panda$core$MutableString* $tmp1751 = *(&local7);
panda$core$MutableString$append$panda$core$String($tmp1751, &$s1752);
// line 511
panda$io$MemoryOutputStream** $tmp1753 = &param0->types;
panda$io$MemoryOutputStream* $tmp1754 = *$tmp1753;
panda$core$MutableString* $tmp1755 = *(&local7);
panda$core$String* $tmp1756 = panda$core$MutableString$finish$R$panda$core$String($tmp1755);
$fn1758 $tmp1757 = ($fn1758) ((panda$io$OutputStream*) $tmp1754)->$class->vtable[19];
$tmp1757(((panda$io$OutputStream*) $tmp1754), $tmp1756);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1756));
// line 512
panda$core$String* $tmp1759 = *(&local6);
panda$core$String* $tmp1760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1761, $tmp1759);
panda$core$String* $tmp1762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1760, &$s1763);
panda$core$String* $tmp1764 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1764));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1762));
*(&local1) = $tmp1762;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1760));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1762));
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
org$pandalanguage$pandac$Type* $tmp1771 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1771));
// unreffing intfType
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1637));
// line 514
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

// line 518
panda$core$Weak** $tmp1775 = &param0->hCodeGen;
panda$core$Weak* $tmp1776 = *$tmp1775;
panda$core$Object* $tmp1777 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1776);
panda$core$Panda$unref$panda$core$Object$Q($tmp1777);
panda$core$Bit $tmp1778 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(((org$pandalanguage$pandac$HCodeGenerator*) $tmp1777), param1);
return $tmp1778;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$Type* local1 = NULL;
org$pandalanguage$pandac$Type* local2 = NULL;
org$pandalanguage$pandac$Type* local3 = NULL;
org$pandalanguage$pandac$CCodeGenerator$MethodShim* local4 = NULL;
// line 522
panda$core$Weak** $tmp1779 = &param0->compiler;
panda$core$Weak* $tmp1780 = *$tmp1779;
panda$core$Object* $tmp1781 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1780);
panda$core$Panda$unref$panda$core$Object$Q($tmp1781);
panda$core$Bit $tmp1782 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1781), param1);
// line 523
panda$core$Weak** $tmp1783 = &param1->owner;
panda$core$Weak* $tmp1784 = *$tmp1783;
panda$core$Object* $tmp1785 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1784);
panda$core$Panda$unref$panda$core$Object$Q($tmp1785);
panda$core$Bit $tmp1786 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp1785));
bool $tmp1787 = $tmp1786.value;
if ($tmp1787) goto block1; else goto block2;
block1:;
// line 524
org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(param0, param1);
goto block2;
block2:;
// line 526
*(&local0) = ((panda$core$String*) NULL);
// line 527
panda$core$Weak** $tmp1788 = &param0->compiler;
panda$core$Weak* $tmp1789 = *$tmp1788;
panda$core$Object* $tmp1790 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1789);
panda$core$Panda$unref$panda$core$Object$Q($tmp1790);
panda$core$Weak** $tmp1791 = &param1->owner;
panda$core$Weak* $tmp1792 = *$tmp1791;
panda$core$Object* $tmp1793 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1792);
panda$core$Panda$unref$panda$core$Object$Q($tmp1793);
org$pandalanguage$pandac$Type** $tmp1794 = &((org$pandalanguage$pandac$ClassDecl*) $tmp1793)->type;
org$pandalanguage$pandac$Type* $tmp1795 = *$tmp1794;
panda$core$Bit $tmp1796 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type* $tmp1797 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp1790), param1, $tmp1795, $tmp1796);
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1798 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1798));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1797));
*(&local1) = $tmp1797;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1797));
// line 528
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
// line 529
panda$core$Weak** $tmp1799 = &param0->compiler;
panda$core$Weak* $tmp1800 = *$tmp1799;
panda$core$Object* $tmp1801 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1800);
panda$core$Panda$unref$panda$core$Object$Q($tmp1801);
panda$core$Weak** $tmp1802 = &param1->owner;
panda$core$Weak* $tmp1803 = *$tmp1802;
panda$core$Object* $tmp1804 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1803);
panda$core$Panda$unref$panda$core$Object$Q($tmp1804);
panda$core$Bit $tmp1805 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1801), ((org$pandalanguage$pandac$ClassDecl*) $tmp1804));
bool $tmp1806 = $tmp1805.value;
if ($tmp1806) goto block3; else goto block5;
block3:;
// line 530
org$pandalanguage$pandac$Type* $tmp1807 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp1808 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1808));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1807));
*(&local2) = $tmp1807;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1807));
goto block4;
block5:;
// line 1
// line 533
panda$core$Weak** $tmp1809 = &param1->owner;
panda$core$Weak* $tmp1810 = *$tmp1809;
panda$core$Object* $tmp1811 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1810);
panda$core$Panda$unref$panda$core$Object$Q($tmp1811);
org$pandalanguage$pandac$Type** $tmp1812 = &((org$pandalanguage$pandac$ClassDecl*) $tmp1811)->type;
org$pandalanguage$pandac$Type* $tmp1813 = *$tmp1812;
org$pandalanguage$pandac$Type* $tmp1814 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1814));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1813));
*(&local2) = $tmp1813;
goto block4;
block4:;
// line 535
panda$core$Weak** $tmp1815 = &param0->compiler;
panda$core$Weak* $tmp1816 = *$tmp1815;
panda$core$Object* $tmp1817 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1816);
panda$core$Panda$unref$panda$core$Object$Q($tmp1817);
org$pandalanguage$pandac$Type* $tmp1818 = *(&local2);
org$pandalanguage$pandac$Type* $tmp1819 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp1817), param1, $tmp1818);
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1820 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1820));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1819));
*(&local3) = $tmp1819;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1819));
// line 536
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
// line 537
org$pandalanguage$pandac$Type* $tmp1828 = *(&local3);
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1829 = org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(param0, param1, $tmp1828);
*(&local4) = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) NULL);
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1830 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1830));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1829));
*(&local4) = $tmp1829;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1829));
// line 538
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1831 = *(&local4);
panda$core$String** $tmp1832 = &$tmp1831->name;
panda$core$String* $tmp1833 = *$tmp1832;
panda$core$String* $tmp1834 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1834));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1833));
*(&local0) = $tmp1833;
org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp1835 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1835));
// unreffing shim
*(&local4) = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) NULL);
goto block7;
block8:;
// line 1
// line 541
panda$core$String* $tmp1836 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp1837 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1837));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1836));
*(&local0) = $tmp1836;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1836));
goto block7;
block7:;
// line 543
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
// line 547
panda$collections$HashMap** $tmp1843 = &param0->classConstants;
panda$collections$HashMap* $tmp1844 = *$tmp1843;
panda$core$String** $tmp1845 = &param1->name;
panda$core$String* $tmp1846 = *$tmp1845;
panda$core$Object* $tmp1847 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp1844, ((panda$collections$Key*) $tmp1846));
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1848 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1848));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1847)));
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1847);
panda$core$Panda$unref$panda$core$Object$Q($tmp1847);
// line 548
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1849 = *(&local0);
panda$core$Bit $tmp1850 = panda$core$Bit$init$builtin_bit($tmp1849 == NULL);
bool $tmp1851 = $tmp1850.value;
if ($tmp1851) goto block1; else goto block2;
block1:;
// line 549
org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(param0, param1);
// line 550
panda$core$Weak** $tmp1852 = &param0->compiler;
panda$core$Weak* $tmp1853 = *$tmp1852;
panda$core$Object* $tmp1854 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1853);
panda$core$Panda$unref$panda$core$Object$Q($tmp1854);
panda$core$Bit $tmp1855 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1854), param1);
// line 551
*(&local1) = ((panda$core$String*) NULL);
// line 552
panda$core$Bit $tmp1856 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(param0, param1);
bool $tmp1857 = $tmp1856.value;
if ($tmp1857) goto block3; else goto block4;
block3:;
// line 553
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1858 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
org$pandalanguage$pandac$Type** $tmp1859 = &param1->type;
org$pandalanguage$pandac$Type* $tmp1860 = *$tmp1859;
panda$core$String** $tmp1861 = &((org$pandalanguage$pandac$Symbol*) $tmp1860)->name;
panda$core$String* $tmp1862 = *$tmp1861;
panda$core$String* $tmp1863 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp1862);
panda$core$String* $tmp1864 = panda$core$String$convert$R$panda$core$String($tmp1863);
panda$core$String* $tmp1865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1864, &$s1866);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1858, $tmp1865, &$s1867);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1868 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1868));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1858));
*(&local0) = $tmp1858;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1858));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1863));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1864));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1865));
// line 555
panda$collections$HashMap** $tmp1869 = &param0->classConstants;
panda$collections$HashMap* $tmp1870 = *$tmp1869;
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1871 = *(&local0);
panda$core$String** $tmp1872 = &param1->name;
panda$core$String* $tmp1873 = *$tmp1872;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp1870, ((panda$collections$Key*) $tmp1873), ((panda$core$Object*) $tmp1871));
// line 556
panda$collections$HashMap** $tmp1874 = &param0->classConstants;
panda$collections$HashMap* $tmp1875 = *$tmp1874;
panda$core$String** $tmp1876 = &param1->name;
panda$core$String* $tmp1877 = *$tmp1876;
panda$core$Object* $tmp1878 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp1875, ((panda$collections$Key*) $tmp1877));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp1878)));
panda$core$Panda$unref$panda$core$Object$Q($tmp1878);
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
// line 558
panda$core$Weak** $tmp1881 = &param0->compiler;
panda$core$Weak* $tmp1882 = *$tmp1881;
panda$core$Object* $tmp1883 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1882);
panda$core$Panda$unref$panda$core$Object$Q($tmp1883);
panda$collections$Stack** $tmp1884 = &((org$pandalanguage$pandac$Compiler*) $tmp1883)->currentClass;
panda$collections$Stack* $tmp1885 = *$tmp1884;
panda$collections$Stack$push$panda$collections$Stack$T($tmp1885, ((panda$core$Object*) param1));
// line 559
panda$core$Weak** $tmp1886 = &param0->compiler;
panda$core$Weak* $tmp1887 = *$tmp1886;
panda$core$Object* $tmp1888 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1887);
panda$core$Panda$unref$panda$core$Object$Q($tmp1888);
panda$collections$ListView* $tmp1889 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp1888), param1);
*(&local2) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp1890 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1890));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1889));
*(&local2) = $tmp1889;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1889));
// line 560
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1891 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
org$pandalanguage$pandac$Type** $tmp1892 = &param1->type;
org$pandalanguage$pandac$Type* $tmp1893 = *$tmp1892;
panda$core$String** $tmp1894 = &((org$pandalanguage$pandac$Symbol*) $tmp1893)->name;
panda$core$String* $tmp1895 = *$tmp1894;
panda$core$String* $tmp1896 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp1895);
panda$core$String* $tmp1897 = panda$core$String$convert$R$panda$core$String($tmp1896);
panda$core$String* $tmp1898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1897, &$s1899);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1891, $tmp1898, &$s1900);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1901 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1901));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1891));
*(&local0) = $tmp1891;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1891));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1896));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1897));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1898));
// line 561
panda$collections$HashMap** $tmp1902 = &param0->classConstants;
panda$collections$HashMap* $tmp1903 = *$tmp1902;
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1904 = *(&local0);
panda$core$String** $tmp1905 = &param1->name;
panda$core$String* $tmp1906 = *$tmp1905;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp1903, ((panda$collections$Key*) $tmp1906), ((panda$core$Object*) $tmp1904));
// line 562
*(&local3) = ((panda$core$String*) NULL);
// line 563
org$pandalanguage$pandac$Type** $tmp1907 = &param1->rawSuper;
org$pandalanguage$pandac$Type* $tmp1908 = *$tmp1907;
panda$core$Bit $tmp1909 = panda$core$Bit$init$builtin_bit($tmp1908 != NULL);
bool $tmp1910 = $tmp1909.value;
if ($tmp1910) goto block5; else goto block7;
block5:;
// line 564
panda$core$Weak** $tmp1911 = &param0->compiler;
panda$core$Weak* $tmp1912 = *$tmp1911;
panda$core$Object* $tmp1913 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1912);
panda$core$Panda$unref$panda$core$Object$Q($tmp1913);
org$pandalanguage$pandac$Type** $tmp1914 = &param1->rawSuper;
org$pandalanguage$pandac$Type* $tmp1915 = *$tmp1914;
org$pandalanguage$pandac$ClassDecl* $tmp1916 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1913), $tmp1915);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1917 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, $tmp1916);
*(&local4) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1918 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1918));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1917));
*(&local4) = $tmp1917;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1916));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1917));
// line 565
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1919 = *(&local4);
panda$core$String** $tmp1920 = &$tmp1919->name;
panda$core$String* $tmp1921 = *$tmp1920;
panda$core$String* $tmp1922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1923, $tmp1921);
panda$core$String* $tmp1924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1922, &$s1925);
panda$core$String* $tmp1926 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1926));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1924));
*(&local3) = $tmp1924;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1922));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1924));
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1927 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1927));
// unreffing superCC
*(&local4) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
goto block6;
block7:;
// line 1
// line 568
panda$core$String* $tmp1928 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1928));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1929));
*(&local3) = &$s1930;
goto block6;
block6:;
// line 570
panda$core$Weak** $tmp1931 = &param0->compiler;
panda$core$Weak* $tmp1932 = *$tmp1931;
panda$core$Object* $tmp1933 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1932);
panda$core$Panda$unref$panda$core$Object$Q($tmp1933);
org$pandalanguage$pandac$Type* $tmp1934 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$ClassDecl* $tmp1935 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1933), $tmp1934);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1936 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, $tmp1935);
*(&local5) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1937 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1937));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1936));
*(&local5) = $tmp1936;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1934));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1935));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1936));
// line 571
panda$core$String** $tmp1938 = &param1->name;
panda$core$String* $tmp1939 = *$tmp1938;
panda$core$String* $tmp1940 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(param0, $tmp1939);
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp1941 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1941));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1940));
*(&local6) = $tmp1940;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1940));
// line 572
panda$core$String* $tmp1942 = *(&local6);
panda$core$Bit $tmp1943 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1942, &$s1944);
bool $tmp1945 = $tmp1943.value;
if ($tmp1945) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp1946 = (panda$core$Int64) {572};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1947, $tmp1946);
abort(); // unreachable
block8:;
// line 573
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
panda$core$MutableString* $tmp1997 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1997));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1948));
*(&local7) = $tmp1948;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1948));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1953));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1954));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1956));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1961));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1962));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1967));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1968));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1970));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1974));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1976));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1979));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1980));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1981));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1983));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1985));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1986));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1989));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1990));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1992));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1993));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1994));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1996));
// line 577
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp1998 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1998));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1999));
*(&local8) = &$s2000;
// line 578
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
panda$core$Panda$unref$panda$core$Object$Q($tmp2014);
org$pandalanguage$pandac$MethodDecl* $tmp2015 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2015));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2014)));
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) $tmp2014);
// line 579
panda$core$MutableString* $tmp2016 = *(&local7);
panda$core$String* $tmp2017 = *(&local8);
panda$core$MutableString$append$panda$core$String($tmp2016, $tmp2017);
// line 580
org$pandalanguage$pandac$MethodDecl* $tmp2018 = *(&local9);
org$pandalanguage$pandac$Annotations** $tmp2019 = &$tmp2018->annotations;
org$pandalanguage$pandac$Annotations* $tmp2020 = *$tmp2019;
panda$core$Bit $tmp2021 = org$pandalanguage$pandac$Annotations$get_isAbstract$R$panda$core$Bit($tmp2020);
bool $tmp2022 = $tmp2021.value;
if ($tmp2022) goto block13; else goto block15;
block13:;
// line 581
panda$core$MutableString* $tmp2023 = *(&local7);
panda$core$MutableString$append$panda$core$String($tmp2023, &$s2024);
goto block14;
block15:;
// line 1
// line 584
panda$core$MutableString* $tmp2025 = *(&local7);
org$pandalanguage$pandac$MethodDecl* $tmp2026 = *(&local9);
panda$core$String* $tmp2027 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, $tmp2026);
panda$core$MutableString$append$panda$core$String($tmp2025, $tmp2027);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2027));
goto block14;
block14:;
// line 586
panda$core$String* $tmp2028 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2028));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2029));
*(&local8) = &$s2030;
org$pandalanguage$pandac$MethodDecl* $tmp2031 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2031));
// unreffing m
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block10;
block12:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2005));
// line 588
panda$core$MutableString* $tmp2032 = *(&local7);
panda$core$MutableString$append$panda$core$String($tmp2032, &$s2033);
// line 589
panda$io$MemoryOutputStream** $tmp2034 = &param0->types;
panda$io$MemoryOutputStream* $tmp2035 = *$tmp2034;
panda$core$MutableString* $tmp2036 = *(&local7);
panda$core$String* $tmp2037 = panda$core$MutableString$finish$R$panda$core$String($tmp2036);
$fn2039 $tmp2038 = ($fn2039) ((panda$io$OutputStream*) $tmp2035)->$class->vtable[19];
$tmp2038(((panda$io$OutputStream*) $tmp2035), $tmp2037);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2037));
// line 590
panda$core$Weak** $tmp2040 = &param0->compiler;
panda$core$Weak* $tmp2041 = *$tmp2040;
panda$core$Object* $tmp2042 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2041);
panda$core$Panda$unref$panda$core$Object$Q($tmp2042);
panda$collections$Stack** $tmp2043 = &((org$pandalanguage$pandac$Compiler*) $tmp2042)->currentClass;
panda$collections$Stack* $tmp2044 = *$tmp2043;
panda$collections$Stack$pop$panda$collections$Stack$T($tmp2044, ((panda$core$Object*) param1));
panda$core$String* $tmp2045 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2045));
// unreffing separator
*(&local8) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2046 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2046));
// unreffing code
*(&local7) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp2047 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2047));
// unreffing name
*(&local6) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2048 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2048));
// unreffing clConstant
*(&local5) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
panda$core$String* $tmp2049 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2049));
// unreffing superPtr
*(&local3) = ((panda$core$String*) NULL);
panda$collections$ListView* $tmp2050 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2050));
// unreffing vtable
*(&local2) = ((panda$collections$ListView*) NULL);
panda$core$String* $tmp2051 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2051));
// unreffing type
*(&local1) = ((panda$core$String*) NULL);
goto block2;
block2:;
// line 592
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2052 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2052));
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2053 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2053));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
return $tmp2052;

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
panda$core$String** $tmp2054 = &param1->name;
panda$core$String* $tmp2055 = *$tmp2054;
panda$core$String* $tmp2056 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp2055);
panda$core$String* $tmp2057 = panda$core$String$convert$R$panda$core$String($tmp2056);
panda$core$String* $tmp2058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2057, &$s2059);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp2060 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2060));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2058));
*(&local0) = $tmp2058;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2056));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2057));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2058));
// line 597
panda$collections$HashMap** $tmp2061 = &param0->classConstants;
panda$collections$HashMap* $tmp2062 = *$tmp2061;
panda$core$String* $tmp2063 = *(&local0);
panda$core$Object* $tmp2064 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp2062, ((panda$collections$Key*) $tmp2063));
*(&local1) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2065 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2065));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp2064)));
*(&local1) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp2064);
panda$core$Panda$unref$panda$core$Object$Q($tmp2064);
// line 598
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2066 = *(&local1);
panda$core$Bit $tmp2067 = panda$core$Bit$init$builtin_bit($tmp2066 == NULL);
bool $tmp2068 = $tmp2067.value;
if ($tmp2068) goto block1; else goto block2;
block1:;
// line 599
panda$core$Bit $tmp2069 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(param0, param1);
bool $tmp2070 = $tmp2069.value;
if ($tmp2070) goto block3; else goto block5;
block3:;
// line 600
org$pandalanguage$pandac$Type* $tmp2071 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp2072 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp2071);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2071));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2072));
// line 601
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp2073 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2073));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2074));
*(&local2) = &$s2075;
// line 602
panda$io$MemoryOutputStream** $tmp2076 = &param0->types;
panda$io$MemoryOutputStream* $tmp2077 = *$tmp2076;
panda$core$String* $tmp2078 = *(&local0);
panda$core$String* $tmp2079 = panda$core$String$convert$R$panda$core$String($tmp2078);
panda$core$String* $tmp2080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2079, &$s2081);
panda$core$String* $tmp2082 = *(&local2);
panda$core$String* $tmp2083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2080, $tmp2082);
panda$core$String* $tmp2084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2083, &$s2085);
$fn2087 $tmp2086 = ($fn2087) ((panda$io$OutputStream*) $tmp2077)->$class->vtable[19];
$tmp2086(((panda$io$OutputStream*) $tmp2077), $tmp2084);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2079));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2080));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2083));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2084));
// line 603
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2088 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
panda$core$String* $tmp2089 = *(&local0);
panda$core$String* $tmp2090 = *(&local2);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp2088, $tmp2089, $tmp2090);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2091 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2091));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2088));
*(&local1) = $tmp2088;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2088));
panda$core$String* $tmp2092 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2092));
// unreffing type
*(&local2) = ((panda$core$String*) NULL);
goto block4;
block5:;
// line 1
// line 606
panda$core$Weak** $tmp2093 = &param0->compiler;
panda$core$Weak* $tmp2094 = *$tmp2093;
panda$core$Object* $tmp2095 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2094);
panda$core$Panda$unref$panda$core$Object$Q($tmp2095);
org$pandalanguage$pandac$Type* $tmp2096 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$ClassDecl* $tmp2097 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp2095), $tmp2096);
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2098 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2098));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2097));
*(&local3) = $tmp2097;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2096));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2097));
// line 607
panda$core$Weak** $tmp2099 = &param0->compiler;
panda$core$Weak* $tmp2100 = *$tmp2099;
panda$core$Object* $tmp2101 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2100);
panda$core$Panda$unref$panda$core$Object$Q($tmp2101);
org$pandalanguage$pandac$ClassDecl* $tmp2102 = *(&local3);
panda$collections$ListView* $tmp2103 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp2101), $tmp2102);
*(&local4) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp2104 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2104));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2103));
*(&local4) = $tmp2103;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2103));
// line 608
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2105 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class);
panda$core$String** $tmp2106 = &param1->name;
panda$core$String* $tmp2107 = *$tmp2106;
panda$core$String* $tmp2108 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp2107);
panda$core$String* $tmp2109 = panda$core$String$convert$R$panda$core$String($tmp2108);
panda$core$String* $tmp2110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2109, &$s2111);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp2105, $tmp2110, &$s2112);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2113 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2113));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2105));
*(&local1) = $tmp2105;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2105));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2108));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2109));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2110));
// line 609
panda$core$Weak** $tmp2114 = &param0->compiler;
panda$core$Weak* $tmp2115 = *$tmp2114;
panda$core$Object* $tmp2116 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2115);
panda$core$Panda$unref$panda$core$Object$Q($tmp2116);
panda$collections$ListView* $tmp2117 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp2116), param1);
*(&local5) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp2118 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2118));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2117));
*(&local5) = $tmp2117;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2117));
// line 610
panda$core$Weak** $tmp2119 = &param0->compiler;
panda$core$Weak* $tmp2120 = *$tmp2119;
panda$core$Object* $tmp2121 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2120);
panda$core$Panda$unref$panda$core$Object$Q($tmp2121);
org$pandalanguage$pandac$Type** $tmp2122 = &param1->rawSuper;
org$pandalanguage$pandac$Type* $tmp2123 = *$tmp2122;
org$pandalanguage$pandac$ClassDecl* $tmp2124 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp2121), $tmp2123);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2125 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, $tmp2124);
*(&local6) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2126 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2126));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2125));
*(&local6) = $tmp2125;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2124));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2125));
// line 611
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2127 = *(&local6);
panda$core$String** $tmp2128 = &$tmp2127->name;
panda$core$String* $tmp2129 = *$tmp2128;
panda$core$String* $tmp2130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2131, $tmp2129);
panda$core$String* $tmp2132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2130, &$s2133);
*(&local7) = ((panda$core$String*) NULL);
panda$core$String* $tmp2134 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2134));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2132));
*(&local7) = $tmp2132;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2130));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2132));
// line 612
panda$core$String* $tmp2135 = org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(param0, param1);
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp2136 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2136));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2135));
*(&local8) = $tmp2135;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2135));
// line 613
panda$core$Weak** $tmp2137 = &param0->compiler;
panda$core$Weak* $tmp2138 = *$tmp2137;
panda$core$Object* $tmp2139 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2138);
panda$core$Panda$unref$panda$core$Object$Q($tmp2139);
org$pandalanguage$pandac$Type* $tmp2140 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$ClassDecl* $tmp2141 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp2139), $tmp2140);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2142 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, $tmp2141);
*(&local9) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2143 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2143));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2142));
*(&local9) = $tmp2142;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2140));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2141));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2142));
// line 614
panda$core$String** $tmp2144 = &param1->name;
panda$core$String* $tmp2145 = *$tmp2144;
panda$core$String* $tmp2146 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(param0, $tmp2145);
*(&local10) = ((panda$core$String*) NULL);
panda$core$String* $tmp2147 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2147));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2146));
*(&local10) = $tmp2146;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2146));
// line 615
panda$core$String* $tmp2148 = *(&local10);
panda$core$Bit $tmp2149 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp2148, &$s2150);
bool $tmp2151 = $tmp2149.value;
if ($tmp2151) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp2152 = (panda$core$Int64) {615};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2153, $tmp2152);
abort(); // unreachable
block6:;
// line 616
panda$core$MutableString* $tmp2154 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String* $tmp2155 = *(&local10);
panda$core$Int64 $tmp2156 = (panda$core$Int64) {1};
panda$core$Bit $tmp2157 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2158 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp2156, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp2157);
panda$core$String* $tmp2159 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp2155, $tmp2158);
panda$core$String* $tmp2160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2161, $tmp2159);
panda$core$String* $tmp2162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2160, &$s2163);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2164 = *(&local1);
panda$core$String** $tmp2165 = &$tmp2164->name;
panda$core$String* $tmp2166 = *$tmp2165;
panda$core$String* $tmp2167 = panda$core$String$convert$R$panda$core$String($tmp2166);
panda$core$String* $tmp2168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2167, &$s2169);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2170 = *(&local1);
panda$core$String** $tmp2171 = &$tmp2170->name;
panda$core$String* $tmp2172 = *$tmp2171;
panda$core$String* $tmp2173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2168, $tmp2172);
panda$core$String* $tmp2174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2173, &$s2175);
panda$core$String* $tmp2176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2162, $tmp2174);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2177 = *(&local9);
panda$core$String** $tmp2178 = &$tmp2177->name;
panda$core$String* $tmp2179 = *$tmp2178;
panda$core$String* $tmp2180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2181, $tmp2179);
panda$core$String* $tmp2182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2180, &$s2183);
panda$core$Int64 $tmp2184 = (panda$core$Int64) {18446744073709550617};
panda$core$Int64$wrapper* $tmp2185;
$tmp2185 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp2185->value = $tmp2184;
panda$core$String* $tmp2186 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2182, ((panda$core$Object*) $tmp2185));
panda$core$String* $tmp2187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2186, &$s2188);
panda$core$String* $tmp2189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2176, $tmp2187);
panda$core$String* $tmp2190 = *(&local10);
panda$core$String* $tmp2191 = panda$core$String$convert$R$panda$core$String($tmp2190);
panda$core$String* $tmp2192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2191, &$s2193);
panda$core$String* $tmp2194 = *(&local7);
panda$core$String* $tmp2195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2192, $tmp2194);
panda$core$String* $tmp2196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2195, &$s2197);
panda$core$String* $tmp2198 = *(&local8);
panda$core$String* $tmp2199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2196, $tmp2198);
panda$core$String* $tmp2200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2199, &$s2201);
panda$core$String* $tmp2202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2189, $tmp2200);
panda$core$MutableString$init$panda$core$String($tmp2154, $tmp2202);
*(&local11) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp2203 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2203));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2154));
*(&local11) = $tmp2154;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2154));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2159));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2160));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2162));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2167));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2168));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2173));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2174));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2176));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2180));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2182));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2185));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2186));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2187));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2189));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2191));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2192));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2195));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2196));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2199));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2200));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2202));
// line 620
*(&local12) = ((panda$core$String*) NULL);
panda$core$String* $tmp2204 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2204));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2205));
*(&local12) = &$s2206;
// line 621
panda$core$Int64 $tmp2207 = (panda$core$Int64) {0};
panda$collections$ListView* $tmp2208 = *(&local4);
ITable* $tmp2209 = ((panda$collections$CollectionView*) $tmp2208)->$class->itable;
while ($tmp2209->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2209 = $tmp2209->next;
}
$fn2211 $tmp2210 = $tmp2209->methods[0];
panda$core$Int64 $tmp2212 = $tmp2210(((panda$collections$CollectionView*) $tmp2208));
panda$core$Bit $tmp2213 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2214 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2207, $tmp2212, $tmp2213);
panda$core$Int64 $tmp2215 = $tmp2214.min;
*(&local13) = $tmp2215;
panda$core$Int64 $tmp2216 = $tmp2214.max;
panda$core$Bit $tmp2217 = $tmp2214.inclusive;
bool $tmp2218 = $tmp2217.value;
panda$core$Int64 $tmp2219 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2220 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2219);
if ($tmp2218) goto block11; else goto block12;
block11:;
int64_t $tmp2221 = $tmp2215.value;
int64_t $tmp2222 = $tmp2216.value;
bool $tmp2223 = $tmp2221 <= $tmp2222;
panda$core$Bit $tmp2224 = (panda$core$Bit) {$tmp2223};
bool $tmp2225 = $tmp2224.value;
if ($tmp2225) goto block8; else goto block9;
block12:;
int64_t $tmp2226 = $tmp2215.value;
int64_t $tmp2227 = $tmp2216.value;
bool $tmp2228 = $tmp2226 < $tmp2227;
panda$core$Bit $tmp2229 = (panda$core$Bit) {$tmp2228};
bool $tmp2230 = $tmp2229.value;
if ($tmp2230) goto block8; else goto block9;
block8:;
// line 622
panda$core$MutableString* $tmp2231 = *(&local11);
panda$core$String* $tmp2232 = *(&local12);
panda$core$String* $tmp2233 = panda$core$String$convert$R$panda$core$String($tmp2232);
panda$core$String* $tmp2234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2233, &$s2235);
panda$collections$ListView* $tmp2236 = *(&local5);
panda$core$Int64 $tmp2237 = *(&local13);
ITable* $tmp2238 = $tmp2236->$class->itable;
while ($tmp2238->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp2238 = $tmp2238->next;
}
$fn2240 $tmp2239 = $tmp2238->methods[0];
panda$core$Object* $tmp2241 = $tmp2239($tmp2236, $tmp2237);
panda$core$String* $tmp2242 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, ((org$pandalanguage$pandac$MethodDecl*) $tmp2241));
panda$core$String* $tmp2243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2234, $tmp2242);
panda$core$String* $tmp2244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2243, &$s2245);
panda$core$MutableString$append$panda$core$String($tmp2231, $tmp2244);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2233));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2234));
panda$core$Panda$unref$panda$core$Object$Q($tmp2241);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2242));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2243));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2244));
// line 623
panda$core$String* $tmp2246 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2246));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2247));
*(&local12) = &$s2248;
goto block10;
block10:;
panda$core$Int64 $tmp2249 = *(&local13);
int64_t $tmp2250 = $tmp2216.value;
int64_t $tmp2251 = $tmp2249.value;
int64_t $tmp2252 = $tmp2250 - $tmp2251;
panda$core$Int64 $tmp2253 = (panda$core$Int64) {$tmp2252};
panda$core$UInt64 $tmp2254 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2253);
if ($tmp2218) goto block14; else goto block15;
block14:;
uint64_t $tmp2255 = $tmp2254.value;
uint64_t $tmp2256 = $tmp2220.value;
bool $tmp2257 = $tmp2255 >= $tmp2256;
panda$core$Bit $tmp2258 = (panda$core$Bit) {$tmp2257};
bool $tmp2259 = $tmp2258.value;
if ($tmp2259) goto block13; else goto block9;
block15:;
uint64_t $tmp2260 = $tmp2254.value;
uint64_t $tmp2261 = $tmp2220.value;
bool $tmp2262 = $tmp2260 > $tmp2261;
panda$core$Bit $tmp2263 = (panda$core$Bit) {$tmp2262};
bool $tmp2264 = $tmp2263.value;
if ($tmp2264) goto block13; else goto block9;
block13:;
int64_t $tmp2265 = $tmp2249.value;
int64_t $tmp2266 = $tmp2219.value;
int64_t $tmp2267 = $tmp2265 + $tmp2266;
panda$core$Int64 $tmp2268 = (panda$core$Int64) {$tmp2267};
*(&local13) = $tmp2268;
goto block8;
block9:;
// line 625
panda$core$MutableString* $tmp2269 = *(&local11);
panda$core$MutableString$append$panda$core$String($tmp2269, &$s2270);
// line 626
panda$io$MemoryOutputStream** $tmp2271 = &param0->types;
panda$io$MemoryOutputStream* $tmp2272 = *$tmp2271;
panda$core$MutableString* $tmp2273 = *(&local11);
panda$core$String* $tmp2274 = panda$core$MutableString$finish$R$panda$core$String($tmp2273);
$fn2276 $tmp2275 = ($fn2276) ((panda$io$OutputStream*) $tmp2272)->$class->vtable[17];
$tmp2275(((panda$io$OutputStream*) $tmp2272), $tmp2274);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2274));
panda$core$String* $tmp2277 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2277));
// unreffing separator
*(&local12) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2278 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2278));
// unreffing code
*(&local11) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp2279 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2279));
// unreffing name
*(&local10) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2280 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2280));
// unreffing clConstant
*(&local9) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
panda$core$String* $tmp2281 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2281));
// unreffing itable
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp2282 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2282));
// unreffing superCast
*(&local7) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2283 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2283));
// unreffing superCC
*(&local6) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
panda$collections$ListView* $tmp2284 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2284));
// unreffing vtable
*(&local5) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp2285 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2285));
// unreffing valueVTable
*(&local4) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2286 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2286));
// unreffing value
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block4;
block4:;
// line 628
panda$collections$HashMap** $tmp2287 = &param0->classConstants;
panda$collections$HashMap* $tmp2288 = *$tmp2287;
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2289 = *(&local1);
panda$core$String* $tmp2290 = *(&local0);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp2288, ((panda$collections$Key*) $tmp2290), ((panda$core$Object*) $tmp2289));
goto block2;
block2:;
// line 630
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2291 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2291));
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2292 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2292));
// unreffing result
*(&local1) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
panda$core$String* $tmp2293 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2293));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp2291;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Variable* param1) {

panda$core$String* local0 = NULL;
// line 634
org$pandalanguage$pandac$Variable$Storage** $tmp2294 = &param1->storage;
org$pandalanguage$pandac$Variable$Storage* $tmp2295 = *$tmp2294;
panda$core$Int64* $tmp2296 = &$tmp2295->$rawValue;
panda$core$Int64 $tmp2297 = *$tmp2296;
panda$core$Int64 $tmp2298 = (panda$core$Int64) {1};
panda$core$Bit $tmp2299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2297, $tmp2298);
bool $tmp2300 = $tmp2299.value;
if ($tmp2300) goto block2; else goto block1;
block2:;
// line 636
panda$core$String** $tmp2301 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp2302 = *$tmp2301;
panda$core$String* $tmp2303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2304, $tmp2302);
panda$core$String* $tmp2305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2303, &$s2306);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2305));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2303));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2305));
return $tmp2305;
block1:;
// line 638
panda$collections$IdentityMap** $tmp2307 = &param0->variableNames;
panda$collections$IdentityMap* $tmp2308 = *$tmp2307;
panda$core$Object* $tmp2309 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q($tmp2308, ((panda$core$Object*) param1));
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp2310 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2310));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp2309)));
*(&local0) = ((panda$core$String*) $tmp2309);
panda$core$Panda$unref$panda$core$Object$Q($tmp2309);
// line 639
panda$core$String* $tmp2311 = *(&local0);
panda$core$Bit $tmp2312 = panda$core$Bit$init$builtin_bit($tmp2311 == NULL);
bool $tmp2313 = $tmp2312.value;
if ($tmp2313) goto block3; else goto block4;
block3:;
// line 640
panda$core$Int64* $tmp2314 = &param0->varCount;
panda$core$Int64 $tmp2315 = *$tmp2314;
panda$core$Int64 $tmp2316 = (panda$core$Int64) {1};
int64_t $tmp2317 = $tmp2315.value;
int64_t $tmp2318 = $tmp2316.value;
int64_t $tmp2319 = $tmp2317 + $tmp2318;
panda$core$Int64 $tmp2320 = (panda$core$Int64) {$tmp2319};
panda$core$Int64* $tmp2321 = &param0->varCount;
*$tmp2321 = $tmp2320;
// line 641
panda$core$String** $tmp2322 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp2323 = *$tmp2322;
panda$core$String* $tmp2324 = panda$core$String$convert$R$panda$core$String($tmp2323);
panda$core$String* $tmp2325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2324, &$s2326);
panda$core$Int64* $tmp2327 = &param0->varCount;
panda$core$Int64 $tmp2328 = *$tmp2327;
panda$core$Int64$wrapper* $tmp2329;
$tmp2329 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp2329->value = $tmp2328;
panda$core$String* $tmp2330 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2325, ((panda$core$Object*) $tmp2329));
panda$core$String* $tmp2331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2330, &$s2332);
panda$core$String* $tmp2333 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2333));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2331));
*(&local0) = $tmp2331;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2324));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2325));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2329));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2330));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2331));
// line 642
panda$collections$IdentityMap** $tmp2334 = &param0->variableNames;
panda$collections$IdentityMap* $tmp2335 = *$tmp2334;
panda$core$String* $tmp2336 = *(&local0);
panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V($tmp2335, ((panda$core$Object*) param1), ((panda$core$Object*) $tmp2336));
goto block4;
block4:;
// line 644
panda$core$String* $tmp2337 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2337));
panda$core$String* $tmp2338 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2338));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp2337;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$FieldDecl* param1) {

// line 648
org$pandalanguage$pandac$Annotations** $tmp2339 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp2340 = *$tmp2339;
panda$core$Bit $tmp2341 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp2340);
bool $tmp2342 = $tmp2341.value;
if ($tmp2342) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp2343 = (panda$core$Int64) {648};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2344, $tmp2343);
abort(); // unreachable
block1:;
// line 649
panda$core$Weak** $tmp2345 = &param1->owner;
panda$core$Weak* $tmp2346 = *$tmp2345;
panda$core$Object* $tmp2347 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2346);
panda$core$Panda$unref$panda$core$Object$Q($tmp2347);
panda$core$String** $tmp2348 = &((org$pandalanguage$pandac$ClassDecl*) $tmp2347)->name;
panda$core$String* $tmp2349 = *$tmp2348;
panda$core$String* $tmp2350 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp2349);
panda$core$String* $tmp2351 = panda$core$String$convert$R$panda$core$String($tmp2350);
panda$core$String* $tmp2352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2351, &$s2353);
panda$core$String** $tmp2354 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp2355 = *$tmp2354;
panda$core$String* $tmp2356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2352, $tmp2355);
panda$core$String* $tmp2357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2356, &$s2358);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2357));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2350));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2351));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2352));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2356));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2357));
return $tmp2357;

}
org$pandalanguage$pandac$CCodeGenerator$OpClass org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$OpClass(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

// line 660
org$pandalanguage$pandac$Type$Kind* $tmp2359 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp2360 = *$tmp2359;
panda$core$Int64 $tmp2361 = $tmp2360.$rawValue;
panda$core$Int64 $tmp2362 = (panda$core$Int64) {2};
panda$core$Bit $tmp2363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2361, $tmp2362);
bool $tmp2364 = $tmp2363.value;
if ($tmp2364) goto block2; else goto block3;
block2:;
// line 662
panda$core$Int64 $tmp2365 = (panda$core$Int64) {0};
org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp2366 = org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64($tmp2365);
return $tmp2366;
block3:;
panda$core$Int64 $tmp2367 = (panda$core$Int64) {3};
panda$core$Bit $tmp2368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2361, $tmp2367);
bool $tmp2369 = $tmp2368.value;
if ($tmp2369) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp2370 = (panda$core$Int64) {9};
panda$core$Bit $tmp2371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2361, $tmp2370);
bool $tmp2372 = $tmp2371.value;
if ($tmp2372) goto block4; else goto block6;
block4:;
// line 664
panda$core$Int64 $tmp2373 = (panda$core$Int64) {1};
org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp2374 = org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64($tmp2373);
return $tmp2374;
block6:;
panda$core$Int64 $tmp2375 = (panda$core$Int64) {10};
panda$core$Bit $tmp2376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2361, $tmp2375);
bool $tmp2377 = $tmp2376.value;
if ($tmp2377) goto block7; else goto block8;
block7:;
// line 666
panda$core$Int64 $tmp2378 = (panda$core$Int64) {2};
org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp2379 = org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64($tmp2378);
return $tmp2379;
block8:;
// line 668
panda$core$Int64 $tmp2380 = (panda$core$Int64) {3};
org$pandalanguage$pandac$CCodeGenerator$OpClass $tmp2381 = org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64($tmp2380);
return $tmp2381;
block1:;
panda$core$Bit $tmp2382 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2383 = $tmp2382.value;
if ($tmp2383) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp2384 = (panda$core$Int64) {659};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2385, $tmp2384, &$s2386);
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
panda$core$Bit $tmp2387 = panda$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp2387;
// line 676
panda$core$Int64 $tmp2388 = param3.$rawValue;
panda$core$Int64 $tmp2389 = (panda$core$Int64) {52};
panda$core$Bit $tmp2390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2388, $tmp2389);
bool $tmp2391 = $tmp2390.value;
if ($tmp2391) goto block2; else goto block3;
block2:;
// line 678
panda$core$String* $tmp2392 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2392));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2393));
*(&local0) = &$s2394;
goto block1;
block3:;
panda$core$Int64 $tmp2395 = (panda$core$Int64) {53};
panda$core$Bit $tmp2396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2388, $tmp2395);
bool $tmp2397 = $tmp2396.value;
if ($tmp2397) goto block4; else goto block5;
block4:;
// line 680
panda$core$String* $tmp2398 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2398));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2399));
*(&local0) = &$s2400;
goto block1;
block5:;
panda$core$Int64 $tmp2401 = (panda$core$Int64) {54};
panda$core$Bit $tmp2402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2388, $tmp2401);
bool $tmp2403 = $tmp2402.value;
if ($tmp2403) goto block6; else goto block7;
block6:;
// line 682
panda$core$String* $tmp2404 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2404));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2405));
*(&local0) = &$s2406;
goto block1;
block7:;
panda$core$Int64 $tmp2407 = (panda$core$Int64) {56};
panda$core$Bit $tmp2408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2388, $tmp2407);
bool $tmp2409 = $tmp2408.value;
if ($tmp2409) goto block8; else goto block9;
block8:;
// line 684
panda$core$String* $tmp2410 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2410));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2411));
*(&local0) = &$s2412;
goto block1;
block9:;
panda$core$Int64 $tmp2413 = (panda$core$Int64) {55};
panda$core$Bit $tmp2414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2388, $tmp2413);
bool $tmp2415 = $tmp2414.value;
if ($tmp2415) goto block10; else goto block11;
block10:;
// line 686
panda$core$String* $tmp2416 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2416));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2417));
*(&local0) = &$s2418;
goto block1;
block11:;
panda$core$Int64 $tmp2419 = (panda$core$Int64) {57};
panda$core$Bit $tmp2420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2388, $tmp2419);
bool $tmp2421 = $tmp2420.value;
if ($tmp2421) goto block12; else goto block13;
block12:;
// line 688
panda$core$String* $tmp2422 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2422));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2423));
*(&local0) = &$s2424;
goto block1;
block13:;
panda$core$Int64 $tmp2425 = (panda$core$Int64) {73};
panda$core$Bit $tmp2426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2388, $tmp2425);
bool $tmp2427 = $tmp2426.value;
if ($tmp2427) goto block14; else goto block15;
block14:;
// line 690
panda$core$String* $tmp2428 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2428));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2429));
*(&local0) = &$s2430;
goto block1;
block15:;
panda$core$Int64 $tmp2431 = (panda$core$Int64) {1};
panda$core$Bit $tmp2432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2388, $tmp2431);
bool $tmp2433 = $tmp2432.value;
if ($tmp2433) goto block16; else goto block17;
block16:;
// line 692
panda$core$String* $tmp2434 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2434));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2435));
*(&local0) = &$s2436;
goto block1;
block17:;
panda$core$Int64 $tmp2437 = (panda$core$Int64) {68};
panda$core$Bit $tmp2438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2388, $tmp2437);
bool $tmp2439 = $tmp2438.value;
if ($tmp2439) goto block18; else goto block19;
block18:;
// line 694
panda$core$String* $tmp2440 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2440));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2441));
*(&local0) = &$s2442;
goto block1;
block19:;
panda$core$Int64 $tmp2443 = (panda$core$Int64) {70};
panda$core$Bit $tmp2444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2388, $tmp2443);
bool $tmp2445 = $tmp2444.value;
if ($tmp2445) goto block20; else goto block21;
block20:;
// line 696
panda$core$String* $tmp2446 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2446));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2447));
*(&local0) = &$s2448;
goto block1;
block21:;
panda$core$Int64 $tmp2449 = (panda$core$Int64) {71};
panda$core$Bit $tmp2450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2388, $tmp2449);
bool $tmp2451 = $tmp2450.value;
if ($tmp2451) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp2452 = (panda$core$Int64) {72};
panda$core$Bit $tmp2453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2388, $tmp2452);
bool $tmp2454 = $tmp2453.value;
if ($tmp2454) goto block22; else goto block24;
block22:;
// line 698
panda$core$String* $tmp2455 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2455));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2456));
*(&local0) = &$s2457;
goto block1;
block24:;
panda$core$Int64 $tmp2458 = (panda$core$Int64) {59};
panda$core$Bit $tmp2459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2388, $tmp2458);
bool $tmp2460 = $tmp2459.value;
if ($tmp2460) goto block25; else goto block26;
block25:;
// line 700
panda$core$String* $tmp2461 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2461));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2462));
*(&local0) = &$s2463;
// line 701
panda$core$Bit $tmp2464 = panda$core$Bit$init$builtin_bit(true);
*(&local1) = $tmp2464;
goto block1;
block26:;
panda$core$Int64 $tmp2465 = (panda$core$Int64) {60};
panda$core$Bit $tmp2466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2388, $tmp2465);
bool $tmp2467 = $tmp2466.value;
if ($tmp2467) goto block27; else goto block28;
block27:;
// line 703
panda$core$String* $tmp2468 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2468));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2469));
*(&local0) = &$s2470;
// line 704
panda$core$Bit $tmp2471 = panda$core$Bit$init$builtin_bit(true);
*(&local1) = $tmp2471;
goto block1;
block28:;
panda$core$Int64 $tmp2472 = (panda$core$Int64) {64};
panda$core$Bit $tmp2473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2388, $tmp2472);
bool $tmp2474 = $tmp2473.value;
if ($tmp2474) goto block29; else goto block30;
block29:;
// line 706
panda$core$String* $tmp2475 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2475));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2476));
*(&local0) = &$s2477;
// line 707
panda$core$Bit $tmp2478 = panda$core$Bit$init$builtin_bit(true);
*(&local1) = $tmp2478;
goto block1;
block30:;
panda$core$Int64 $tmp2479 = (panda$core$Int64) {63};
panda$core$Bit $tmp2480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2388, $tmp2479);
bool $tmp2481 = $tmp2480.value;
if ($tmp2481) goto block31; else goto block32;
block31:;
// line 709
panda$core$String* $tmp2482 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2482));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2483));
*(&local0) = &$s2484;
// line 710
panda$core$Bit $tmp2485 = panda$core$Bit$init$builtin_bit(true);
*(&local1) = $tmp2485;
goto block1;
block32:;
panda$core$Int64 $tmp2486 = (panda$core$Int64) {66};
panda$core$Bit $tmp2487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2388, $tmp2486);
bool $tmp2488 = $tmp2487.value;
if ($tmp2488) goto block33; else goto block34;
block33:;
// line 712
panda$core$String* $tmp2489 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2489));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2490));
*(&local0) = &$s2491;
// line 713
panda$core$Bit $tmp2492 = panda$core$Bit$init$builtin_bit(true);
*(&local1) = $tmp2492;
goto block1;
block34:;
panda$core$Int64 $tmp2493 = (panda$core$Int64) {65};
panda$core$Bit $tmp2494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2388, $tmp2493);
bool $tmp2495 = $tmp2494.value;
if ($tmp2495) goto block35; else goto block36;
block35:;
// line 715
panda$core$Bit $tmp2496 = panda$core$Bit$init$builtin_bit(true);
*(&local1) = $tmp2496;
// line 716
panda$core$String* $tmp2497 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2497));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2498));
*(&local0) = &$s2499;
goto block1;
block36:;
// line 718
panda$core$Bit $tmp2500 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2501 = $tmp2500.value;
if ($tmp2501) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp2502 = (panda$core$Int64) {718};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2503, $tmp2502);
abort(); // unreachable
block37:;
goto block1;
block1:;
// line 720
panda$core$String* $tmp2504 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp2505 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2505));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2504));
*(&local2) = $tmp2504;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2504));
// line 721
panda$core$Bit $tmp2506 = *(&local1);
bool $tmp2507 = $tmp2506.value;
if ($tmp2507) goto block39; else goto block41;
block39:;
// line 722
$fn2509 $tmp2508 = ($fn2509) ((panda$io$OutputStream*) param5)->$class->vtable[17];
$tmp2508(((panda$io$OutputStream*) param5), &$s2510);
goto block40;
block41:;
// line 1
// line 725
panda$core$String* $tmp2511 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param1);
panda$core$String* $tmp2512 = panda$core$String$convert$R$panda$core$String($tmp2511);
panda$core$String* $tmp2513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2512, &$s2514);
$fn2516 $tmp2515 = ($fn2516) ((panda$io$OutputStream*) param5)->$class->vtable[17];
$tmp2515(((panda$io$OutputStream*) param5), $tmp2513);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2511));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2512));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2513));
goto block40;
block40:;
// line 727
panda$core$String* $tmp2517 = *(&local2);
panda$core$String* $tmp2518 = panda$core$String$convert$R$panda$core$String($tmp2517);
panda$core$String* $tmp2519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2518, &$s2520);
panda$core$String* $tmp2521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2519, param2);
panda$core$String* $tmp2522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2521, &$s2523);
panda$core$String* $tmp2524 = *(&local0);
panda$core$String* $tmp2525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2522, $tmp2524);
panda$core$String* $tmp2526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2525, &$s2527);
panda$core$String* $tmp2528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2526, param4);
panda$core$String* $tmp2529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2528, &$s2530);
$fn2532 $tmp2531 = ($fn2532) ((panda$io$OutputStream*) param5)->$class->vtable[19];
$tmp2531(((panda$io$OutputStream*) param5), $tmp2529);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2518));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2519));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2521));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2522));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2525));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2526));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2528));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2529));
// line 728
panda$core$String* $tmp2533 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2533));
panda$core$String* $tmp2534 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2534));
// unreffing result
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp2535 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2535));
// unreffing cOp
*(&local0) = ((panda$core$String*) NULL);
return $tmp2533;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1, org$pandalanguage$pandac$MethodDecl* param2, panda$io$IndentedOutputStream* param3) {

org$pandalanguage$pandac$CCodeGenerator$ClassConstant* local0 = NULL;
panda$core$Int64 local1;
panda$collections$ListView* local2 = NULL;
panda$core$Int64 local3;
// line 732
panda$core$Weak** $tmp2536 = &param2->owner;
panda$core$Weak* $tmp2537 = *$tmp2536;
panda$core$Object* $tmp2538 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2537);
panda$core$Panda$unref$panda$core$Object$Q($tmp2538);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2539 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp2538));
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2540 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2540));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2539));
*(&local0) = $tmp2539;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2539));
// line 733
panda$core$Int64 $tmp2541 = (panda$core$Int64) {18446744073709551615};
*(&local1) = $tmp2541;
// line 734
panda$core$Weak** $tmp2542 = &param0->compiler;
panda$core$Weak* $tmp2543 = *$tmp2542;
panda$core$Object* $tmp2544 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2543);
panda$core$Panda$unref$panda$core$Object$Q($tmp2544);
panda$core$Weak** $tmp2545 = &param2->owner;
panda$core$Weak* $tmp2546 = *$tmp2545;
panda$core$Object* $tmp2547 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2546);
panda$core$Panda$unref$panda$core$Object$Q($tmp2547);
panda$collections$ListView* $tmp2548 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp2544), ((org$pandalanguage$pandac$ClassDecl*) $tmp2547));
*(&local2) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp2549 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2549));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2548));
*(&local2) = $tmp2548;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2548));
// line 735
panda$core$Int64 $tmp2550 = (panda$core$Int64) {0};
panda$collections$ListView* $tmp2551 = *(&local2);
ITable* $tmp2552 = ((panda$collections$CollectionView*) $tmp2551)->$class->itable;
while ($tmp2552->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2552 = $tmp2552->next;
}
$fn2554 $tmp2553 = $tmp2552->methods[0];
panda$core$Int64 $tmp2555 = $tmp2553(((panda$collections$CollectionView*) $tmp2551));
panda$core$Bit $tmp2556 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2557 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2550, $tmp2555, $tmp2556);
panda$core$Int64 $tmp2558 = $tmp2557.min;
*(&local3) = $tmp2558;
panda$core$Int64 $tmp2559 = $tmp2557.max;
panda$core$Bit $tmp2560 = $tmp2557.inclusive;
bool $tmp2561 = $tmp2560.value;
panda$core$Int64 $tmp2562 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2563 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2562);
if ($tmp2561) goto block4; else goto block5;
block4:;
int64_t $tmp2564 = $tmp2558.value;
int64_t $tmp2565 = $tmp2559.value;
bool $tmp2566 = $tmp2564 <= $tmp2565;
panda$core$Bit $tmp2567 = (panda$core$Bit) {$tmp2566};
bool $tmp2568 = $tmp2567.value;
if ($tmp2568) goto block1; else goto block2;
block5:;
int64_t $tmp2569 = $tmp2558.value;
int64_t $tmp2570 = $tmp2559.value;
bool $tmp2571 = $tmp2569 < $tmp2570;
panda$core$Bit $tmp2572 = (panda$core$Bit) {$tmp2571};
bool $tmp2573 = $tmp2572.value;
if ($tmp2573) goto block1; else goto block2;
block1:;
// line 736
panda$collections$ListView* $tmp2574 = *(&local2);
panda$core$Int64 $tmp2575 = *(&local3);
ITable* $tmp2576 = $tmp2574->$class->itable;
while ($tmp2576->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp2576 = $tmp2576->next;
}
$fn2578 $tmp2577 = $tmp2576->methods[0];
panda$core$Object* $tmp2579 = $tmp2577($tmp2574, $tmp2575);
bool $tmp2580 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2579) == param2;
panda$core$Bit $tmp2581 = panda$core$Bit$init$builtin_bit($tmp2580);
panda$core$Panda$unref$panda$core$Object$Q($tmp2579);
bool $tmp2582 = $tmp2581.value;
if ($tmp2582) goto block6; else goto block7;
block6:;
// line 737
panda$core$Int64 $tmp2583 = *(&local3);
*(&local1) = $tmp2583;
// line 738
goto block2;
block7:;
goto block3;
block3:;
panda$core$Int64 $tmp2584 = *(&local3);
int64_t $tmp2585 = $tmp2559.value;
int64_t $tmp2586 = $tmp2584.value;
int64_t $tmp2587 = $tmp2585 - $tmp2586;
panda$core$Int64 $tmp2588 = (panda$core$Int64) {$tmp2587};
panda$core$UInt64 $tmp2589 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2588);
if ($tmp2561) goto block9; else goto block10;
block9:;
uint64_t $tmp2590 = $tmp2589.value;
uint64_t $tmp2591 = $tmp2563.value;
bool $tmp2592 = $tmp2590 >= $tmp2591;
panda$core$Bit $tmp2593 = (panda$core$Bit) {$tmp2592};
bool $tmp2594 = $tmp2593.value;
if ($tmp2594) goto block8; else goto block2;
block10:;
uint64_t $tmp2595 = $tmp2589.value;
uint64_t $tmp2596 = $tmp2563.value;
bool $tmp2597 = $tmp2595 > $tmp2596;
panda$core$Bit $tmp2598 = (panda$core$Bit) {$tmp2597};
bool $tmp2599 = $tmp2598.value;
if ($tmp2599) goto block8; else goto block2;
block8:;
int64_t $tmp2600 = $tmp2584.value;
int64_t $tmp2601 = $tmp2562.value;
int64_t $tmp2602 = $tmp2600 + $tmp2601;
panda$core$Int64 $tmp2603 = (panda$core$Int64) {$tmp2602};
*(&local3) = $tmp2603;
goto block1;
block2:;
// line 741
panda$core$Int64 $tmp2604 = *(&local1);
panda$core$Int64 $tmp2605 = (panda$core$Int64) {18446744073709551615};
int64_t $tmp2606 = $tmp2604.value;
int64_t $tmp2607 = $tmp2605.value;
bool $tmp2608 = $tmp2606 != $tmp2607;
panda$core$Bit $tmp2609 = (panda$core$Bit) {$tmp2608};
bool $tmp2610 = $tmp2609.value;
if ($tmp2610) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp2611 = (panda$core$Int64) {741};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2612, $tmp2611);
abort(); // unreachable
block11:;
// line 742
panda$core$Weak** $tmp2613 = &param0->compiler;
panda$core$Weak* $tmp2614 = *$tmp2613;
panda$core$Object* $tmp2615 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2614);
panda$core$Panda$unref$panda$core$Object$Q($tmp2615);
org$pandalanguage$pandac$Type* $tmp2616 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp2615), param2);
panda$core$String* $tmp2617 = org$pandalanguage$pandac$CCodeGenerator$cMethodType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$Q$R$panda$core$String(param0, $tmp2616, ((org$pandalanguage$pandac$Type*) NULL));
panda$core$String* $tmp2618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2619, $tmp2617);
panda$core$String* $tmp2620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2618, &$s2621);
panda$core$String* $tmp2622 = panda$core$String$convert$R$panda$core$String(param1);
panda$core$String* $tmp2623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2622, &$s2624);
panda$core$Int64 $tmp2625 = *(&local1);
panda$core$Int64$wrapper* $tmp2626;
$tmp2626 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp2626->value = $tmp2625;
panda$core$String* $tmp2627 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2623, ((panda$core$Object*) $tmp2626));
panda$core$String* $tmp2628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2627, &$s2629);
panda$core$String* $tmp2630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2620, $tmp2628);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2630));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2616));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2617));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2618));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2620));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2622));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2623));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2626));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2627));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2628));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2630));
panda$collections$ListView* $tmp2631 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2631));
// unreffing vtable
*(&local2) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2632 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2632));
// unreffing cc
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
return $tmp2630;

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
panda$core$Weak** $tmp2633 = &param2->owner;
panda$core$Weak* $tmp2634 = *$tmp2633;
panda$core$Object* $tmp2635 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2634);
panda$core$Panda$unref$panda$core$Object$Q($tmp2635);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2636 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp2635));
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2637 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2637));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2636));
*(&local0) = $tmp2636;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2636));
// line 749
panda$core$String* $tmp2638 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp2639 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2639));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2638));
*(&local1) = $tmp2638;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2638));
// line 750
panda$core$String* $tmp2640 = *(&local1);
panda$core$String* $tmp2641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2642, $tmp2640);
panda$core$String* $tmp2643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2641, &$s2644);
panda$core$String* $tmp2645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2643, param1);
panda$core$String* $tmp2646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2645, &$s2647);
$fn2649 $tmp2648 = ($fn2649) ((panda$io$OutputStream*) param3)->$class->vtable[19];
$tmp2648(((panda$io$OutputStream*) param3), $tmp2646);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2641));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2643));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2645));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2646));
// line 751
panda$core$String* $tmp2650 = *(&local1);
panda$core$String* $tmp2651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2652, $tmp2650);
panda$core$String* $tmp2653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2651, &$s2654);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2655 = *(&local0);
panda$core$String** $tmp2656 = &$tmp2655->name;
panda$core$String* $tmp2657 = *$tmp2656;
panda$core$String* $tmp2658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2653, $tmp2657);
panda$core$String* $tmp2659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2658, &$s2660);
$fn2662 $tmp2661 = ($fn2662) ((panda$io$OutputStream*) param3)->$class->vtable[19];
$tmp2661(((panda$io$OutputStream*) param3), $tmp2659);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2651));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2653));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2658));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2659));
// line 752
panda$core$Int64* $tmp2663 = &param3->level;
panda$core$Int64 $tmp2664 = *$tmp2663;
panda$core$Int64 $tmp2665 = (panda$core$Int64) {1};
int64_t $tmp2666 = $tmp2664.value;
int64_t $tmp2667 = $tmp2665.value;
int64_t $tmp2668 = $tmp2666 + $tmp2667;
panda$core$Int64 $tmp2669 = (panda$core$Int64) {$tmp2668};
panda$core$Int64* $tmp2670 = &param3->level;
*$tmp2670 = $tmp2669;
// line 753
panda$core$String* $tmp2671 = *(&local1);
panda$core$String* $tmp2672 = panda$core$String$convert$R$panda$core$String($tmp2671);
panda$core$String* $tmp2673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2672, &$s2674);
panda$core$String* $tmp2675 = *(&local1);
panda$core$String* $tmp2676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2673, $tmp2675);
panda$core$String* $tmp2677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2676, &$s2678);
$fn2680 $tmp2679 = ($fn2680) ((panda$io$OutputStream*) param3)->$class->vtable[19];
$tmp2679(((panda$io$OutputStream*) param3), $tmp2677);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2672));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2673));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2676));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2677));
// line 754
panda$core$Int64* $tmp2681 = &param3->level;
panda$core$Int64 $tmp2682 = *$tmp2681;
panda$core$Int64 $tmp2683 = (panda$core$Int64) {1};
int64_t $tmp2684 = $tmp2682.value;
int64_t $tmp2685 = $tmp2683.value;
int64_t $tmp2686 = $tmp2684 - $tmp2685;
panda$core$Int64 $tmp2687 = (panda$core$Int64) {$tmp2686};
panda$core$Int64* $tmp2688 = &param3->level;
*$tmp2688 = $tmp2687;
// line 755
$fn2690 $tmp2689 = ($fn2690) ((panda$io$OutputStream*) param3)->$class->vtable[19];
$tmp2689(((panda$io$OutputStream*) param3), &$s2691);
// line 756
panda$core$Int64 $tmp2692 = (panda$core$Int64) {18446744073709551615};
*(&local2) = $tmp2692;
// line 757
panda$core$Weak** $tmp2693 = &param0->compiler;
panda$core$Weak* $tmp2694 = *$tmp2693;
panda$core$Object* $tmp2695 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2694);
panda$core$Panda$unref$panda$core$Object$Q($tmp2695);
panda$core$Weak** $tmp2696 = &param2->owner;
panda$core$Weak* $tmp2697 = *$tmp2696;
panda$core$Object* $tmp2698 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2697);
panda$core$Panda$unref$panda$core$Object$Q($tmp2698);
panda$collections$ListView* $tmp2699 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp2695), ((org$pandalanguage$pandac$ClassDecl*) $tmp2698));
*(&local3) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp2700 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2700));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2699));
*(&local3) = $tmp2699;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2699));
// line 758
panda$core$Int64 $tmp2701 = (panda$core$Int64) {0};
panda$collections$ListView* $tmp2702 = *(&local3);
ITable* $tmp2703 = ((panda$collections$CollectionView*) $tmp2702)->$class->itable;
while ($tmp2703->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2703 = $tmp2703->next;
}
$fn2705 $tmp2704 = $tmp2703->methods[0];
panda$core$Int64 $tmp2706 = $tmp2704(((panda$collections$CollectionView*) $tmp2702));
panda$core$Bit $tmp2707 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2708 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2701, $tmp2706, $tmp2707);
panda$core$Int64 $tmp2709 = $tmp2708.min;
*(&local4) = $tmp2709;
panda$core$Int64 $tmp2710 = $tmp2708.max;
panda$core$Bit $tmp2711 = $tmp2708.inclusive;
bool $tmp2712 = $tmp2711.value;
panda$core$Int64 $tmp2713 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2714 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2713);
if ($tmp2712) goto block4; else goto block5;
block4:;
int64_t $tmp2715 = $tmp2709.value;
int64_t $tmp2716 = $tmp2710.value;
bool $tmp2717 = $tmp2715 <= $tmp2716;
panda$core$Bit $tmp2718 = (panda$core$Bit) {$tmp2717};
bool $tmp2719 = $tmp2718.value;
if ($tmp2719) goto block1; else goto block2;
block5:;
int64_t $tmp2720 = $tmp2709.value;
int64_t $tmp2721 = $tmp2710.value;
bool $tmp2722 = $tmp2720 < $tmp2721;
panda$core$Bit $tmp2723 = (panda$core$Bit) {$tmp2722};
bool $tmp2724 = $tmp2723.value;
if ($tmp2724) goto block1; else goto block2;
block1:;
// line 759
panda$collections$ListView* $tmp2725 = *(&local3);
panda$core$Int64 $tmp2726 = *(&local4);
ITable* $tmp2727 = $tmp2725->$class->itable;
while ($tmp2727->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp2727 = $tmp2727->next;
}
$fn2729 $tmp2728 = $tmp2727->methods[0];
panda$core$Object* $tmp2730 = $tmp2728($tmp2725, $tmp2726);
bool $tmp2731 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2730) == param2;
panda$core$Bit $tmp2732 = panda$core$Bit$init$builtin_bit($tmp2731);
panda$core$Panda$unref$panda$core$Object$Q($tmp2730);
bool $tmp2733 = $tmp2732.value;
if ($tmp2733) goto block6; else goto block7;
block6:;
// line 760
panda$core$Int64 $tmp2734 = *(&local4);
*(&local2) = $tmp2734;
// line 761
goto block2;
block7:;
goto block3;
block3:;
panda$core$Int64 $tmp2735 = *(&local4);
int64_t $tmp2736 = $tmp2710.value;
int64_t $tmp2737 = $tmp2735.value;
int64_t $tmp2738 = $tmp2736 - $tmp2737;
panda$core$Int64 $tmp2739 = (panda$core$Int64) {$tmp2738};
panda$core$UInt64 $tmp2740 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2739);
if ($tmp2712) goto block9; else goto block10;
block9:;
uint64_t $tmp2741 = $tmp2740.value;
uint64_t $tmp2742 = $tmp2714.value;
bool $tmp2743 = $tmp2741 >= $tmp2742;
panda$core$Bit $tmp2744 = (panda$core$Bit) {$tmp2743};
bool $tmp2745 = $tmp2744.value;
if ($tmp2745) goto block8; else goto block2;
block10:;
uint64_t $tmp2746 = $tmp2740.value;
uint64_t $tmp2747 = $tmp2714.value;
bool $tmp2748 = $tmp2746 > $tmp2747;
panda$core$Bit $tmp2749 = (panda$core$Bit) {$tmp2748};
bool $tmp2750 = $tmp2749.value;
if ($tmp2750) goto block8; else goto block2;
block8:;
int64_t $tmp2751 = $tmp2735.value;
int64_t $tmp2752 = $tmp2713.value;
int64_t $tmp2753 = $tmp2751 + $tmp2752;
panda$core$Int64 $tmp2754 = (panda$core$Int64) {$tmp2753};
*(&local4) = $tmp2754;
goto block1;
block2:;
// line 764
panda$core$Int64 $tmp2755 = *(&local2);
panda$core$Weak** $tmp2756 = &param0->compiler;
panda$core$Weak* $tmp2757 = *$tmp2756;
panda$core$Object* $tmp2758 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2757);
panda$core$Panda$unref$panda$core$Object$Q($tmp2758);
panda$core$Weak** $tmp2759 = &param0->compiler;
panda$core$Weak* $tmp2760 = *$tmp2759;
panda$core$Object* $tmp2761 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2760);
panda$core$Panda$unref$panda$core$Object$Q($tmp2761);
org$pandalanguage$pandac$Type* $tmp2762 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$ClassDecl* $tmp2763 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp2761), $tmp2762);
panda$collections$ListView* $tmp2764 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp2758), $tmp2763);
ITable* $tmp2765 = ((panda$collections$CollectionView*) $tmp2764)->$class->itable;
while ($tmp2765->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2765 = $tmp2765->next;
}
$fn2767 $tmp2766 = $tmp2765->methods[0];
panda$core$Int64 $tmp2768 = $tmp2766(((panda$collections$CollectionView*) $tmp2764));
int64_t $tmp2769 = $tmp2755.value;
int64_t $tmp2770 = $tmp2768.value;
int64_t $tmp2771 = $tmp2769 - $tmp2770;
panda$core$Int64 $tmp2772 = (panda$core$Int64) {$tmp2771};
*(&local2) = $tmp2772;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2762));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2763));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2764));
// line 765
panda$core$Int64 $tmp2773 = *(&local2);
panda$core$Int64 $tmp2774 = (panda$core$Int64) {18446744073709551615};
int64_t $tmp2775 = $tmp2773.value;
int64_t $tmp2776 = $tmp2774.value;
bool $tmp2777 = $tmp2775 != $tmp2776;
panda$core$Bit $tmp2778 = (panda$core$Bit) {$tmp2777};
bool $tmp2779 = $tmp2778.value;
if ($tmp2779) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp2780 = (panda$core$Int64) {765};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2781, $tmp2780);
abort(); // unreachable
block11:;
// line 766
panda$core$String* $tmp2782 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local5) = ((panda$core$String*) NULL);
panda$core$String* $tmp2783 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2783));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2782));
*(&local5) = $tmp2782;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2782));
// line 767
panda$core$Weak** $tmp2784 = &param0->compiler;
panda$core$Weak* $tmp2785 = *$tmp2784;
panda$core$Object* $tmp2786 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2785);
panda$core$Panda$unref$panda$core$Object$Q($tmp2786);
org$pandalanguage$pandac$Type* $tmp2787 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp2786), param2);
panda$core$String* $tmp2788 = org$pandalanguage$pandac$CCodeGenerator$cMethodType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$Q$R$panda$core$String(param0, $tmp2787, ((org$pandalanguage$pandac$Type*) NULL));
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp2789 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2789));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2788));
*(&local6) = $tmp2788;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2787));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2788));
// line 768
panda$core$String* $tmp2790 = *(&local6);
panda$core$String* $tmp2791 = panda$core$String$convert$R$panda$core$String($tmp2790);
panda$core$String* $tmp2792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2791, &$s2793);
panda$core$String* $tmp2794 = *(&local5);
panda$core$String* $tmp2795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2792, $tmp2794);
panda$core$String* $tmp2796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2795, &$s2797);
panda$core$String* $tmp2798 = *(&local1);
panda$core$String* $tmp2799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2796, $tmp2798);
panda$core$String* $tmp2800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2799, &$s2801);
panda$core$Int64 $tmp2802 = *(&local2);
panda$core$Int64$wrapper* $tmp2803;
$tmp2803 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp2803->value = $tmp2802;
panda$core$String* $tmp2804 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2800, ((panda$core$Object*) $tmp2803));
panda$core$String* $tmp2805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2804, &$s2806);
$fn2808 $tmp2807 = ($fn2808) ((panda$io$OutputStream*) param3)->$class->vtable[19];
$tmp2807(((panda$io$OutputStream*) param3), $tmp2805);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2791));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2792));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2795));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2796));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2799));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2800));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2803));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2804));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2805));
// line 769
panda$core$String* $tmp2809 = *(&local5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2809));
panda$core$String* $tmp2810 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2810));
// unreffing methodType
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp2811 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2811));
// unreffing result
*(&local5) = ((panda$core$String*) NULL);
panda$collections$ListView* $tmp2812 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2812));
// unreffing vtable
*(&local3) = ((panda$collections$ListView*) NULL);
panda$core$String* $tmp2813 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2813));
// unreffing itable
*(&local1) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2814 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2814));
// unreffing cc
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
return $tmp2809;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1, org$pandalanguage$pandac$MethodDecl* param2, panda$core$Bit param3, panda$io$IndentedOutputStream* param4) {

panda$core$Bit local0;
// line 774
panda$core$Bit $tmp2815 = panda$core$Bit$$NOT$R$panda$core$Bit(param3);
bool $tmp2816 = $tmp2815.value;
if ($tmp2816) goto block1; else goto block2;
block1:;
panda$core$Bit $tmp2817 = org$pandalanguage$pandac$MethodDecl$get_isVirtual$R$panda$core$Bit(param2);
*(&local0) = $tmp2817;
goto block3;
block2:;
*(&local0) = $tmp2815;
goto block3;
block3:;
panda$core$Bit $tmp2818 = *(&local0);
bool $tmp2819 = $tmp2818.value;
if ($tmp2819) goto block4; else goto block6;
block4:;
// line 775
panda$core$Bit $tmp2820 = panda$core$Bit$init$builtin_bit(param1 != NULL);
bool $tmp2821 = $tmp2820.value;
if ($tmp2821) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp2822 = (panda$core$Int64) {775};
panda$core$String* $tmp2823 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param2);
panda$core$String* $tmp2824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2825, $tmp2823);
panda$core$String* $tmp2826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2824, &$s2827);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2828, $tmp2822, $tmp2826);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2823));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2824));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2826));
abort(); // unreachable
block7:;
// line 776
panda$core$Weak** $tmp2829 = &param2->owner;
panda$core$Weak* $tmp2830 = *$tmp2829;
panda$core$Object* $tmp2831 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2830);
panda$core$Panda$unref$panda$core$Object$Q($tmp2831);
org$pandalanguage$pandac$ClassDecl$Kind* $tmp2832 = &((org$pandalanguage$pandac$ClassDecl*) $tmp2831)->classKind;
org$pandalanguage$pandac$ClassDecl$Kind $tmp2833 = *$tmp2832;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2834;
$tmp2834 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2834->value = $tmp2833;
panda$core$Int64 $tmp2835 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2836 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2835);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2837;
$tmp2837 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2837->value = $tmp2836;
ITable* $tmp2838 = ((panda$core$Equatable*) $tmp2834)->$class->itable;
while ($tmp2838->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2838 = $tmp2838->next;
}
$fn2840 $tmp2839 = $tmp2838->methods[0];
panda$core$Bit $tmp2841 = $tmp2839(((panda$core$Equatable*) $tmp2834), ((panda$core$Equatable*) $tmp2837));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2834)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2837)));
bool $tmp2842 = $tmp2841.value;
if ($tmp2842) goto block9; else goto block11;
block9:;
// line 777
panda$core$String* $tmp2843 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2843));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2843));
return $tmp2843;
block11:;
// line 1
// line 780
panda$core$String* $tmp2844 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2844));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2844));
return $tmp2844;
block10:;
goto block5;
block6:;
// line 1
// line 784
panda$core$Weak** $tmp2845 = &param2->owner;
panda$core$Weak* $tmp2846 = *$tmp2845;
panda$core$Object* $tmp2847 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2846);
panda$core$Panda$unref$panda$core$Object$Q($tmp2847);
panda$core$Bit $tmp2848 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp2847));
bool $tmp2849 = $tmp2848.value;
if ($tmp2849) goto block12; else goto block13;
block12:;
// line 785
org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(param0, param2);
goto block13;
block13:;
// line 787
panda$core$String* $tmp2850 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2850));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2850));
return $tmp2850;
block5:;
panda$core$Bit $tmp2851 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2852 = $tmp2851.value;
if ($tmp2852) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp2853 = (panda$core$Int64) {772};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2854, $tmp2853, &$s2855);
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
org$pandalanguage$pandac$Type$Kind* $tmp2856 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp2857 = *$tmp2856;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp2858;
$tmp2858 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp2858->value = $tmp2857;
panda$core$Int64 $tmp2859 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp2860 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp2859);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp2861;
$tmp2861 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp2861->value = $tmp2860;
ITable* $tmp2862 = ((panda$core$Equatable*) $tmp2858)->$class->itable;
while ($tmp2862->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2862 = $tmp2862->next;
}
$fn2864 $tmp2863 = $tmp2862->methods[0];
panda$core$Bit $tmp2865 = $tmp2863(((panda$core$Equatable*) $tmp2858), ((panda$core$Equatable*) $tmp2861));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2858)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2861)));
bool $tmp2866 = $tmp2865.value;
if ($tmp2866) goto block1; else goto block2;
block1:;
// line 794
panda$core$String* $tmp2867 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp2868 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2868));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2867));
*(&local0) = $tmp2867;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2867));
// line 795
panda$core$String* $tmp2869 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp2870 = panda$core$String$convert$R$panda$core$String($tmp2869);
panda$core$String* $tmp2871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2870, &$s2872);
panda$core$String* $tmp2873 = *(&local0);
panda$core$String* $tmp2874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2871, $tmp2873);
panda$core$String* $tmp2875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2874, &$s2876);
$fn2878 $tmp2877 = ($fn2878) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2877(((panda$io$OutputStream*) param4), $tmp2875);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2869));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2870));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2871));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2874));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2875));
// line 796
panda$core$String* $tmp2879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2880, param1);
panda$core$String* $tmp2881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2879, &$s2882);
$fn2884 $tmp2883 = ($fn2884) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2883(((panda$io$OutputStream*) param4), $tmp2881);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2879));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2881));
// line 797
panda$core$Int64* $tmp2885 = &param4->level;
panda$core$Int64 $tmp2886 = *$tmp2885;
panda$core$Int64 $tmp2887 = (panda$core$Int64) {1};
int64_t $tmp2888 = $tmp2886.value;
int64_t $tmp2889 = $tmp2887.value;
int64_t $tmp2890 = $tmp2888 + $tmp2889;
panda$core$Int64 $tmp2891 = (panda$core$Int64) {$tmp2890};
panda$core$Int64* $tmp2892 = &param4->level;
*$tmp2892 = $tmp2891;
// line 798
panda$collections$ImmutableArray** $tmp2893 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp2894 = *$tmp2893;
panda$core$Int64 $tmp2895 = (panda$core$Int64) {0};
panda$core$Object* $tmp2896 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp2894, $tmp2895);
panda$core$String* $tmp2897 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, ((org$pandalanguage$pandac$Type*) $tmp2896), param4);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp2898 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2898));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2897));
*(&local1) = $tmp2897;
panda$core$Panda$unref$panda$core$Object$Q($tmp2896);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2897));
// line 799
panda$core$String* $tmp2899 = *(&local1);
panda$collections$ImmutableArray** $tmp2900 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp2901 = *$tmp2900;
panda$core$Int64 $tmp2902 = (panda$core$Int64) {0};
panda$core$Object* $tmp2903 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp2901, $tmp2902);
panda$core$String* $tmp2904 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, $tmp2899, ((org$pandalanguage$pandac$Type*) $tmp2903), param3, param4);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp2905 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2905));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2904));
*(&local2) = $tmp2904;
panda$core$Panda$unref$panda$core$Object$Q($tmp2903);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2904));
// line 800
panda$core$String* $tmp2906 = *(&local0);
panda$core$String* $tmp2907 = panda$core$String$convert$R$panda$core$String($tmp2906);
panda$core$String* $tmp2908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2907, &$s2909);
panda$core$String* $tmp2910 = *(&local2);
panda$core$String* $tmp2911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2908, $tmp2910);
panda$core$String* $tmp2912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2911, &$s2913);
$fn2915 $tmp2914 = ($fn2915) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2914(((panda$io$OutputStream*) param4), $tmp2912);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2907));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2908));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2911));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2912));
// line 801
panda$core$Int64* $tmp2916 = &param4->level;
panda$core$Int64 $tmp2917 = *$tmp2916;
panda$core$Int64 $tmp2918 = (panda$core$Int64) {1};
int64_t $tmp2919 = $tmp2917.value;
int64_t $tmp2920 = $tmp2918.value;
int64_t $tmp2921 = $tmp2919 - $tmp2920;
panda$core$Int64 $tmp2922 = (panda$core$Int64) {$tmp2921};
panda$core$Int64* $tmp2923 = &param4->level;
*$tmp2923 = $tmp2922;
// line 802
$fn2925 $tmp2924 = ($fn2925) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2924(((panda$io$OutputStream*) param4), &$s2926);
// line 803
$fn2928 $tmp2927 = ($fn2928) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2927(((panda$io$OutputStream*) param4), &$s2929);
// line 804
panda$core$Int64* $tmp2930 = &param4->level;
panda$core$Int64 $tmp2931 = *$tmp2930;
panda$core$Int64 $tmp2932 = (panda$core$Int64) {1};
int64_t $tmp2933 = $tmp2931.value;
int64_t $tmp2934 = $tmp2932.value;
int64_t $tmp2935 = $tmp2933 + $tmp2934;
panda$core$Int64 $tmp2936 = (panda$core$Int64) {$tmp2935};
panda$core$Int64* $tmp2937 = &param4->level;
*$tmp2937 = $tmp2936;
// line 805
panda$core$String* $tmp2938 = *(&local0);
panda$core$String* $tmp2939 = panda$core$String$convert$R$panda$core$String($tmp2938);
panda$core$String* $tmp2940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2939, &$s2941);
$fn2943 $tmp2942 = ($fn2943) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2942(((panda$io$OutputStream*) param4), $tmp2940);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2939));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2940));
// line 806
panda$core$Int64* $tmp2944 = &param4->level;
panda$core$Int64 $tmp2945 = *$tmp2944;
panda$core$Int64 $tmp2946 = (panda$core$Int64) {1};
int64_t $tmp2947 = $tmp2945.value;
int64_t $tmp2948 = $tmp2946.value;
int64_t $tmp2949 = $tmp2947 - $tmp2948;
panda$core$Int64 $tmp2950 = (panda$core$Int64) {$tmp2949};
panda$core$Int64* $tmp2951 = &param4->level;
*$tmp2951 = $tmp2950;
// line 807
$fn2953 $tmp2952 = ($fn2953) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2952(((panda$io$OutputStream*) param4), &$s2954);
// line 808
panda$core$String* $tmp2955 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2955));
panda$core$String* $tmp2956 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2956));
// unreffing nonNullValue
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp2957 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2957));
// unreffing unwrapped
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp2958 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2958));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp2955;
block2:;
// line 810
panda$core$String* $tmp2959 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp2960 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2960));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2959));
*(&local3) = $tmp2959;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2959));
// line 811
panda$core$String* $tmp2961 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param2);
panda$core$String* $tmp2962 = panda$core$String$convert$R$panda$core$String($tmp2961);
panda$core$String* $tmp2963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2962, &$s2964);
panda$core$String* $tmp2965 = *(&local3);
panda$core$String* $tmp2966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2963, $tmp2965);
panda$core$String* $tmp2967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2966, &$s2968);
$fn2970 $tmp2969 = ($fn2970) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2969(((panda$io$OutputStream*) param4), $tmp2967);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2961));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2962));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2963));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2966));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2967));
// line 812
org$pandalanguage$pandac$Type$Kind* $tmp2971 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp2972 = *$tmp2971;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp2973;
$tmp2973 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp2973->value = $tmp2972;
panda$core$Int64 $tmp2974 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp2975 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp2974);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp2976;
$tmp2976 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp2976->value = $tmp2975;
ITable* $tmp2977 = ((panda$core$Equatable*) $tmp2973)->$class->itable;
while ($tmp2977->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2977 = $tmp2977->next;
}
$fn2979 $tmp2978 = $tmp2977->methods[0];
panda$core$Bit $tmp2980 = $tmp2978(((panda$core$Equatable*) $tmp2973), ((panda$core$Equatable*) $tmp2976));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2973)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2976)));
bool $tmp2981 = $tmp2980.value;
if ($tmp2981) goto block3; else goto block4;
block3:;
// line 813
panda$core$String* $tmp2982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2983, param1);
panda$core$String* $tmp2984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2982, &$s2985);
$fn2987 $tmp2986 = ($fn2987) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2986(((panda$io$OutputStream*) param4), $tmp2984);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2982));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2984));
// line 814
panda$core$Int64* $tmp2988 = &param4->level;
panda$core$Int64 $tmp2989 = *$tmp2988;
panda$core$Int64 $tmp2990 = (panda$core$Int64) {1};
int64_t $tmp2991 = $tmp2989.value;
int64_t $tmp2992 = $tmp2990.value;
int64_t $tmp2993 = $tmp2991 + $tmp2992;
panda$core$Int64 $tmp2994 = (panda$core$Int64) {$tmp2993};
panda$core$Int64* $tmp2995 = &param4->level;
*$tmp2995 = $tmp2994;
goto block4;
block4:;
// line 816
panda$core$String* $tmp2996 = *(&local3);
panda$core$String* $tmp2997 = panda$core$String$convert$R$panda$core$String($tmp2996);
panda$core$String* $tmp2998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2997, &$s2999);
panda$core$String* $tmp3000 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param2);
panda$core$String* $tmp3001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2998, $tmp3000);
panda$core$String* $tmp3002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3001, &$s3003);
panda$core$Int64 $tmp3004 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param2);
panda$core$Int64$wrapper* $tmp3005;
$tmp3005 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3005->value = $tmp3004;
panda$core$String* $tmp3006 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3007, ((panda$core$Object*) $tmp3005));
panda$core$String* $tmp3008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3006, &$s3009);
panda$core$String* $tmp3010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3002, $tmp3008);
panda$core$String** $tmp3011 = &((org$pandalanguage$pandac$Symbol*) param2)->name;
panda$core$String* $tmp3012 = *$tmp3011;
panda$core$String* $tmp3013 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp3012);
panda$core$String* $tmp3014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3015, $tmp3013);
panda$core$String* $tmp3016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3014, &$s3017);
panda$core$String* $tmp3018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3010, $tmp3016);
$fn3020 $tmp3019 = ($fn3020) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp3019(((panda$io$OutputStream*) param4), $tmp3018);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2997));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2998));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3000));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3001));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3002));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3005));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3006));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3008));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3010));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3013));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3014));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3016));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3018));
// line 819
panda$core$String* $tmp3021 = *(&local3);
panda$core$String* $tmp3022 = panda$core$String$convert$R$panda$core$String($tmp3021);
panda$core$String* $tmp3023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3022, &$s3024);
panda$core$String* $tmp3025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3023, param1);
panda$core$String* $tmp3026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3025, &$s3027);
$fn3029 $tmp3028 = ($fn3029) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp3028(((panda$io$OutputStream*) param4), $tmp3026);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3022));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3023));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3025));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3026));
// line 820
org$pandalanguage$pandac$Type$Kind* $tmp3030 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3031 = *$tmp3030;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3032;
$tmp3032 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3032->value = $tmp3031;
panda$core$Int64 $tmp3033 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3034 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3033);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3035;
$tmp3035 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3035->value = $tmp3034;
ITable* $tmp3036 = ((panda$core$Equatable*) $tmp3032)->$class->itable;
while ($tmp3036->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3036 = $tmp3036->next;
}
$fn3038 $tmp3037 = $tmp3036->methods[0];
panda$core$Bit $tmp3039 = $tmp3037(((panda$core$Equatable*) $tmp3032), ((panda$core$Equatable*) $tmp3035));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3032)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3035)));
bool $tmp3040 = $tmp3039.value;
if ($tmp3040) goto block5; else goto block6;
block5:;
// line 821
panda$core$Int64* $tmp3041 = &param4->level;
panda$core$Int64 $tmp3042 = *$tmp3041;
panda$core$Int64 $tmp3043 = (panda$core$Int64) {1};
int64_t $tmp3044 = $tmp3042.value;
int64_t $tmp3045 = $tmp3043.value;
int64_t $tmp3046 = $tmp3044 - $tmp3045;
panda$core$Int64 $tmp3047 = (panda$core$Int64) {$tmp3046};
panda$core$Int64* $tmp3048 = &param4->level;
*$tmp3048 = $tmp3047;
// line 822
$fn3050 $tmp3049 = ($fn3050) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp3049(((panda$io$OutputStream*) param4), &$s3051);
// line 823
$fn3053 $tmp3052 = ($fn3053) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp3052(((panda$io$OutputStream*) param4), &$s3054);
// line 824
panda$core$Int64* $tmp3055 = &param4->level;
panda$core$Int64 $tmp3056 = *$tmp3055;
panda$core$Int64 $tmp3057 = (panda$core$Int64) {1};
int64_t $tmp3058 = $tmp3056.value;
int64_t $tmp3059 = $tmp3057.value;
int64_t $tmp3060 = $tmp3058 + $tmp3059;
panda$core$Int64 $tmp3061 = (panda$core$Int64) {$tmp3060};
panda$core$Int64* $tmp3062 = &param4->level;
*$tmp3062 = $tmp3061;
// line 825
panda$core$String* $tmp3063 = *(&local3);
panda$core$String* $tmp3064 = panda$core$String$convert$R$panda$core$String($tmp3063);
panda$core$String* $tmp3065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3064, &$s3066);
$fn3068 $tmp3067 = ($fn3068) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp3067(((panda$io$OutputStream*) param4), $tmp3065);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3064));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3065));
// line 826
panda$core$Int64* $tmp3069 = &param4->level;
panda$core$Int64 $tmp3070 = *$tmp3069;
panda$core$Int64 $tmp3071 = (panda$core$Int64) {1};
int64_t $tmp3072 = $tmp3070.value;
int64_t $tmp3073 = $tmp3071.value;
int64_t $tmp3074 = $tmp3072 - $tmp3073;
panda$core$Int64 $tmp3075 = (panda$core$Int64) {$tmp3074};
panda$core$Int64* $tmp3076 = &param4->level;
*$tmp3076 = $tmp3075;
// line 827
$fn3078 $tmp3077 = ($fn3078) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp3077(((panda$io$OutputStream*) param4), &$s3079);
goto block6;
block6:;
// line 829
panda$core$String* $tmp3080 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp3081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3082, $tmp3080);
panda$core$String* $tmp3083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3081, &$s3084);
panda$core$String* $tmp3085 = *(&local3);
panda$core$String* $tmp3086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3083, $tmp3085);
panda$core$String* $tmp3087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3086, &$s3088);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3087));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3080));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3081));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3083));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3086));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3087));
panda$core$String* $tmp3089 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3089));
// unreffing wrapped
*(&local3) = ((panda$core$String*) NULL);
return $tmp3087;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1, org$pandalanguage$pandac$Type* param2, org$pandalanguage$pandac$Type* param3, panda$io$IndentedOutputStream* param4) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
// line 833
panda$core$String* $tmp3090 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp3091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3092, $tmp3090);
panda$core$String* $tmp3093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3091, &$s3094);
panda$core$String* $tmp3095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3093, param1);
panda$core$String* $tmp3096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3095, &$s3097);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp3098 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3098));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3096));
*(&local0) = $tmp3096;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3090));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3091));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3093));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3095));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3096));
// line 834
org$pandalanguage$pandac$Type$Kind* $tmp3099 = &param3->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3100 = *$tmp3099;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3101;
$tmp3101 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3101->value = $tmp3100;
panda$core$Int64 $tmp3102 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3103 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3102);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3104;
$tmp3104 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3104->value = $tmp3103;
ITable* $tmp3105 = ((panda$core$Equatable*) $tmp3101)->$class->itable;
while ($tmp3105->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3105 = $tmp3105->next;
}
$fn3107 $tmp3106 = $tmp3105->methods[0];
panda$core$Bit $tmp3108 = $tmp3106(((panda$core$Equatable*) $tmp3101), ((panda$core$Equatable*) $tmp3104));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3101)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3104)));
bool $tmp3109 = $tmp3108.value;
if ($tmp3109) goto block1; else goto block2;
block1:;
// line 836
panda$collections$ImmutableArray** $tmp3110 = &param3->subtypes;
panda$collections$ImmutableArray* $tmp3111 = *$tmp3110;
panda$core$Int64 $tmp3112 = (panda$core$Int64) {0};
panda$core$Object* $tmp3113 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp3111, $tmp3112);
panda$core$String* $tmp3114 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, ((org$pandalanguage$pandac$Type*) $tmp3113), param4);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3115 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3115));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3114));
*(&local1) = $tmp3114;
panda$core$Panda$unref$panda$core$Object$Q($tmp3113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3114));
// line 837
panda$core$String* $tmp3116 = *(&local1);
panda$collections$ImmutableArray** $tmp3117 = &param3->subtypes;
panda$collections$ImmutableArray* $tmp3118 = *$tmp3117;
panda$core$Int64 $tmp3119 = (panda$core$Int64) {0};
panda$core$Object* $tmp3120 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp3118, $tmp3119);
panda$core$String* $tmp3121 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, $tmp3116, ((org$pandalanguage$pandac$Type*) $tmp3120), param3, param4);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp3122 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3122));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3121));
*(&local2) = $tmp3121;
panda$core$Panda$unref$panda$core$Object$Q($tmp3120);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3121));
// line 838
panda$core$String* $tmp3123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3124, param1);
panda$core$String* $tmp3125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3123, &$s3126);
panda$core$String* $tmp3127 = *(&local2);
panda$core$String* $tmp3128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3125, $tmp3127);
panda$core$String* $tmp3129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3128, &$s3130);
panda$core$String* $tmp3131 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp3132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3129, $tmp3131);
panda$core$String* $tmp3133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3132, &$s3134);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3133));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3123));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3125));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3128));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3129));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3131));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3132));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3133));
panda$core$String* $tmp3135 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3135));
// unreffing nonNullValue
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp3136 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3136));
// unreffing wrapped
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3137 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3137));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3133;
block2:;
// line 840
panda$core$String* $tmp3138 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3138));
panda$core$String* $tmp3139 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3139));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3138;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1, org$pandalanguage$pandac$Type* param2, org$pandalanguage$pandac$Type* param3, panda$io$IndentedOutputStream* param4) {

// line 845
panda$core$String* $tmp3140 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp3141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3142, $tmp3140);
panda$core$String* $tmp3143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3141, &$s3144);
panda$core$String* $tmp3145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3143, param1);
panda$core$String* $tmp3146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3145, &$s3147);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3146));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3140));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3141));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3143));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3145));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3146));
return $tmp3146;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1, org$pandalanguage$pandac$Type* param2, org$pandalanguage$pandac$Type* param3, panda$io$IndentedOutputStream* param4) {

// line 850
panda$core$String* $tmp3148 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp3149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3150, $tmp3148);
panda$core$String* $tmp3151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3149, &$s3152);
panda$core$String* $tmp3153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3151, param1);
panda$core$String* $tmp3154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3153, &$s3155);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3154));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3148));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3149));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3151));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3153));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3154));
return $tmp3154;

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
panda$core$Bit $tmp3156 = org$pandalanguage$pandac$Type$get_isBuiltinNumber$R$panda$core$Bit(param3);
bool $tmp3157 = $tmp3156.value;
if ($tmp3157) goto block1; else goto block3;
block1:;
// line 855
panda$core$Bit $tmp3158 = org$pandalanguage$pandac$Type$get_isBuiltinNumber$R$panda$core$Bit(param2);
bool $tmp3159 = $tmp3158.value;
if ($tmp3159) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp3160 = (panda$core$Int64) {855};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3161, $tmp3160);
abort(); // unreachable
block4:;
// line 856
panda$core$String* $tmp3162 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp3163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3164, $tmp3162);
panda$core$String* $tmp3165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3163, &$s3166);
panda$core$String* $tmp3167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3165, param1);
panda$core$String* $tmp3168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3167, &$s3169);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3168));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3162));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3163));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3165));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3167));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3168));
return $tmp3168;
block3:;
// line 1
// line 859
panda$core$Weak** $tmp3170 = &param0->compiler;
panda$core$Weak* $tmp3171 = *$tmp3170;
panda$core$Object* $tmp3172 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3171);
panda$core$Panda$unref$panda$core$Object$Q($tmp3172);
org$pandalanguage$pandac$ClassDecl* $tmp3173 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3172), param2);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3174 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3174));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3173));
*(&local0) = $tmp3173;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3173));
// line 860
org$pandalanguage$pandac$ClassDecl* $tmp3175 = *(&local0);
panda$core$Bit $tmp3176 = panda$core$Bit$init$builtin_bit($tmp3175 != NULL);
bool $tmp3177 = $tmp3176.value;
if ($tmp3177) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp3178 = (panda$core$Int64) {860};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3179, $tmp3178);
abort(); // unreachable
block6:;
// line 861
panda$core$Weak** $tmp3180 = &param0->compiler;
panda$core$Weak* $tmp3181 = *$tmp3180;
panda$core$Object* $tmp3182 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3181);
panda$core$Panda$unref$panda$core$Object$Q($tmp3182);
org$pandalanguage$pandac$ClassDecl* $tmp3183 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3182), param3);
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3184 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3184));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3183));
*(&local1) = $tmp3183;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3183));
// line 862
org$pandalanguage$pandac$ClassDecl* $tmp3185 = *(&local1);
panda$core$Bit $tmp3186 = panda$core$Bit$init$builtin_bit($tmp3185 != NULL);
bool $tmp3187 = $tmp3186.value;
if ($tmp3187) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp3188 = (panda$core$Int64) {862};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3189, $tmp3188);
abort(); // unreachable
block8:;
// line 863
panda$core$Weak** $tmp3190 = &param0->compiler;
panda$core$Weak* $tmp3191 = *$tmp3190;
panda$core$Object* $tmp3192 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3191);
panda$core$Panda$unref$panda$core$Object$Q($tmp3192);
org$pandalanguage$pandac$ClassDecl* $tmp3193 = *(&local0);
panda$core$Bit $tmp3194 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3192), $tmp3193);
bool $tmp3195 = $tmp3194.value;
if ($tmp3195) goto block10; else goto block11;
block10:;
panda$core$Weak** $tmp3196 = &param0->compiler;
panda$core$Weak* $tmp3197 = *$tmp3196;
panda$core$Object* $tmp3198 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3197);
panda$core$Panda$unref$panda$core$Object$Q($tmp3198);
org$pandalanguage$pandac$ClassDecl* $tmp3199 = *(&local1);
panda$core$Bit $tmp3200 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3198), $tmp3199);
panda$core$Bit $tmp3201 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3200);
*(&local2) = $tmp3201;
goto block12;
block11:;
*(&local2) = $tmp3194;
goto block12;
block12:;
panda$core$Bit $tmp3202 = *(&local2);
bool $tmp3203 = $tmp3202.value;
if ($tmp3203) goto block13; else goto block15;
block13:;
// line 864
panda$io$IndentedOutputStream** $tmp3204 = &param0->out;
panda$io$IndentedOutputStream* $tmp3205 = *$tmp3204;
panda$core$String* $tmp3206 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, param3, $tmp3205);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3206));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3206));
org$pandalanguage$pandac$ClassDecl* $tmp3207 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3207));
// unreffing targetClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3208 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3208));
// unreffing srcClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3206;
block15:;
// line 866
panda$core$Weak** $tmp3209 = &param0->compiler;
panda$core$Weak* $tmp3210 = *$tmp3209;
panda$core$Object* $tmp3211 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3210);
panda$core$Panda$unref$panda$core$Object$Q($tmp3211);
org$pandalanguage$pandac$ClassDecl* $tmp3212 = *(&local0);
panda$core$Bit $tmp3213 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3211), $tmp3212);
panda$core$Bit $tmp3214 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3213);
bool $tmp3215 = $tmp3214.value;
if ($tmp3215) goto block16; else goto block17;
block16:;
panda$core$Weak** $tmp3216 = &param0->compiler;
panda$core$Weak* $tmp3217 = *$tmp3216;
panda$core$Object* $tmp3218 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3217);
panda$core$Panda$unref$panda$core$Object$Q($tmp3218);
org$pandalanguage$pandac$ClassDecl* $tmp3219 = *(&local1);
panda$core$Bit $tmp3220 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3218), $tmp3219);
*(&local3) = $tmp3220;
goto block18;
block17:;
*(&local3) = $tmp3214;
goto block18;
block18:;
panda$core$Bit $tmp3221 = *(&local3);
bool $tmp3222 = $tmp3221.value;
if ($tmp3222) goto block19; else goto block21;
block19:;
// line 867
panda$io$IndentedOutputStream** $tmp3223 = &param0->out;
panda$io$IndentedOutputStream* $tmp3224 = *$tmp3223;
panda$core$String* $tmp3225 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, param3, $tmp3224);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3225));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3225));
org$pandalanguage$pandac$ClassDecl* $tmp3226 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3226));
// unreffing targetClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3227 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3227));
// unreffing srcClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3225;
block21:;
// line 869
panda$core$Weak** $tmp3228 = &param0->compiler;
panda$core$Weak* $tmp3229 = *$tmp3228;
panda$core$Object* $tmp3230 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3229);
panda$core$Panda$unref$panda$core$Object$Q($tmp3230);
org$pandalanguage$pandac$ClassDecl* $tmp3231 = *(&local0);
panda$core$Bit $tmp3232 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3230), $tmp3231);
bool $tmp3233 = $tmp3232.value;
if ($tmp3233) goto block22; else goto block23;
block22:;
org$pandalanguage$pandac$Type$Kind* $tmp3234 = &param3->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3235 = *$tmp3234;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3236;
$tmp3236 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3236->value = $tmp3235;
panda$core$Int64 $tmp3237 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3238 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3237);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3239;
$tmp3239 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3239->value = $tmp3238;
ITable* $tmp3240 = ((panda$core$Equatable*) $tmp3236)->$class->itable;
while ($tmp3240->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3240 = $tmp3240->next;
}
$fn3242 $tmp3241 = $tmp3240->methods[0];
panda$core$Bit $tmp3243 = $tmp3241(((panda$core$Equatable*) $tmp3236), ((panda$core$Equatable*) $tmp3239));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3236)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3239)));
*(&local5) = $tmp3243;
goto block24;
block23:;
*(&local5) = $tmp3232;
goto block24;
block24:;
panda$core$Bit $tmp3244 = *(&local5);
bool $tmp3245 = $tmp3244.value;
if ($tmp3245) goto block25; else goto block26;
block25:;
panda$collections$ImmutableArray** $tmp3246 = &param3->subtypes;
panda$collections$ImmutableArray* $tmp3247 = *$tmp3246;
panda$core$Int64 $tmp3248 = (panda$core$Int64) {0};
panda$core$Object* $tmp3249 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp3247, $tmp3248);
panda$core$Bit $tmp3250 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3249), param2);
panda$core$Panda$unref$panda$core$Object$Q($tmp3249);
*(&local4) = $tmp3250;
goto block27;
block26:;
*(&local4) = $tmp3244;
goto block27;
block27:;
panda$core$Bit $tmp3251 = *(&local4);
bool $tmp3252 = $tmp3251.value;
if ($tmp3252) goto block28; else goto block30;
block28:;
// line 871
panda$io$IndentedOutputStream** $tmp3253 = &param0->out;
panda$io$IndentedOutputStream* $tmp3254 = *$tmp3253;
panda$core$String* $tmp3255 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, param3, $tmp3254);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3255));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3255));
org$pandalanguage$pandac$ClassDecl* $tmp3256 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3256));
// unreffing targetClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3257 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3257));
// unreffing srcClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3255;
block30:;
// line 873
panda$core$Weak** $tmp3258 = &param0->compiler;
panda$core$Weak* $tmp3259 = *$tmp3258;
panda$core$Object* $tmp3260 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3259);
panda$core$Panda$unref$panda$core$Object$Q($tmp3260);
org$pandalanguage$pandac$ClassDecl* $tmp3261 = *(&local1);
panda$core$Bit $tmp3262 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3260), $tmp3261);
bool $tmp3263 = $tmp3262.value;
if ($tmp3263) goto block31; else goto block32;
block31:;
org$pandalanguage$pandac$Type$Kind* $tmp3264 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3265 = *$tmp3264;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3266;
$tmp3266 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3266->value = $tmp3265;
panda$core$Int64 $tmp3267 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3268 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3267);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3269;
$tmp3269 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3269->value = $tmp3268;
ITable* $tmp3270 = ((panda$core$Equatable*) $tmp3266)->$class->itable;
while ($tmp3270->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3270 = $tmp3270->next;
}
$fn3272 $tmp3271 = $tmp3270->methods[0];
panda$core$Bit $tmp3273 = $tmp3271(((panda$core$Equatable*) $tmp3266), ((panda$core$Equatable*) $tmp3269));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3266)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3269)));
*(&local7) = $tmp3273;
goto block33;
block32:;
*(&local7) = $tmp3262;
goto block33;
block33:;
panda$core$Bit $tmp3274 = *(&local7);
bool $tmp3275 = $tmp3274.value;
if ($tmp3275) goto block34; else goto block35;
block34:;
panda$collections$ImmutableArray** $tmp3276 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp3277 = *$tmp3276;
panda$core$Int64 $tmp3278 = (panda$core$Int64) {0};
panda$core$Object* $tmp3279 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp3277, $tmp3278);
panda$core$Bit $tmp3280 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3279), param3);
panda$core$Panda$unref$panda$core$Object$Q($tmp3279);
*(&local6) = $tmp3280;
goto block36;
block35:;
*(&local6) = $tmp3274;
goto block36;
block36:;
panda$core$Bit $tmp3281 = *(&local6);
bool $tmp3282 = $tmp3281.value;
if ($tmp3282) goto block37; else goto block38;
block37:;
// line 875
panda$io$IndentedOutputStream** $tmp3283 = &param0->out;
panda$io$IndentedOutputStream* $tmp3284 = *$tmp3283;
panda$core$String* $tmp3285 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, param3, $tmp3284);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3285));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3285));
org$pandalanguage$pandac$ClassDecl* $tmp3286 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3286));
// unreffing targetClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3287 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3287));
// unreffing srcClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3285;
block38:;
goto block29;
block29:;
goto block20;
block20:;
goto block14;
block14:;
org$pandalanguage$pandac$ClassDecl* $tmp3288 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3288));
// unreffing targetClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3289 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3289));
// unreffing srcClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block2;
block2:;
// line 878
panda$core$String* $tmp3290 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param2);
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp3291 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3291));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3290));
*(&local8) = $tmp3290;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3290));
// line 879
panda$core$String* $tmp3292 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
*(&local9) = ((panda$core$String*) NULL);
panda$core$String* $tmp3293 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3293));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3292));
*(&local9) = $tmp3292;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3292));
// line 880
panda$core$String* $tmp3294 = *(&local8);
panda$core$String* $tmp3295 = *(&local9);
panda$core$Bit $tmp3296 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp3294, $tmp3295);
bool $tmp3297 = $tmp3296.value;
if ($tmp3297) goto block39; else goto block40;
block39:;
// line 881
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$core$String* $tmp3298 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3298));
// unreffing dstType
*(&local9) = ((panda$core$String*) NULL);
panda$core$String* $tmp3299 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3299));
// unreffing srcType
*(&local8) = ((panda$core$String*) NULL);
return param1;
block40:;
// line 883
panda$core$String* $tmp3300 = *(&local9);
panda$core$String* $tmp3301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3302, $tmp3300);
panda$core$String* $tmp3303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3301, &$s3304);
panda$core$String* $tmp3305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3303, param1);
panda$core$String* $tmp3306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3305, &$s3307);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3306));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3301));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3303));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3305));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3306));
panda$core$String* $tmp3308 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3308));
// unreffing dstType
*(&local9) = ((panda$core$String*) NULL);
panda$core$String* $tmp3309 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3309));
// unreffing srcType
*(&local8) = ((panda$core$String*) NULL);
return $tmp3306;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIntReference$panda$core$UInt64$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$UInt64 param1) {

// line 887
panda$core$Int64 $tmp3310 = (panda$core$Int64) {9223372036854775807};
panda$core$UInt64 $tmp3311 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3310);
uint64_t $tmp3312 = param1.value;
uint64_t $tmp3313 = $tmp3311.value;
bool $tmp3314 = $tmp3312 > $tmp3313;
panda$core$Bit $tmp3315 = (panda$core$Bit) {$tmp3314};
bool $tmp3316 = $tmp3315.value;
if ($tmp3316) goto block1; else goto block2;
block1:;
// line 888
panda$core$UInt64$wrapper* $tmp3317;
$tmp3317 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
$tmp3317->value = param1;
panda$core$String* $tmp3318 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp3317), &$s3319);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3318));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3317));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3318));
return $tmp3318;
block2:;
// line 890
panda$core$String* $tmp3320 = panda$core$UInt64$convert$R$panda$core$String(param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3320));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3320));
return $tmp3320;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$Type$panda$core$Real64$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1, panda$core$Real64 param2) {

panda$core$String* local0 = NULL;
// line 894
panda$core$String* $tmp3321 = panda$core$Real64$convert$R$panda$core$String(param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp3322 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3322));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3321));
*(&local0) = $tmp3321;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3321));
// line 895
panda$core$String* $tmp3323 = *(&local0);
panda$core$Bit $tmp3324 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp3323, &$s3325);
bool $tmp3326 = $tmp3324.value;
if ($tmp3326) goto block1; else goto block2;
block1:;
// line 896
panda$core$String* $tmp3327 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3327));
panda$core$String* $tmp3328 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3328));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3327;
block2:;
// line 898
panda$core$String* $tmp3329 = *(&local0);
panda$core$String* $tmp3330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3329, &$s3331);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3330));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3330));
panda$core$String* $tmp3332 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3332));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3330;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$Bit param1, panda$io$IndentedOutputStream* param2) {

// line 902
bool $tmp3333 = param1.value;
if ($tmp3333) goto block1; else goto block2;
block1:;
// line 903
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3334));
return &$s3335;
block2:;
// line 905
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3336));
return &$s3337;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1) {

panda$core$String* local0 = NULL;
panda$core$Char8 local1;
// line 909
panda$core$Int64* $tmp3338 = &param0->varCount;
panda$core$Int64 $tmp3339 = *$tmp3338;
panda$core$Int64 $tmp3340 = (panda$core$Int64) {1};
int64_t $tmp3341 = $tmp3339.value;
int64_t $tmp3342 = $tmp3340.value;
int64_t $tmp3343 = $tmp3341 + $tmp3342;
panda$core$Int64 $tmp3344 = (panda$core$Int64) {$tmp3343};
panda$core$Int64* $tmp3345 = &param0->varCount;
*$tmp3345 = $tmp3344;
// line 910
panda$core$Int64* $tmp3346 = &param0->varCount;
panda$core$Int64 $tmp3347 = *$tmp3346;
panda$core$Int64$wrapper* $tmp3348;
$tmp3348 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3348->value = $tmp3347;
panda$core$String* $tmp3349 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3350, ((panda$core$Object*) $tmp3348));
panda$core$String* $tmp3351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3349, &$s3352);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp3353 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3353));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3351));
*(&local0) = $tmp3351;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3348));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3349));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3351));
// line 911
org$pandalanguage$pandac$Type* $tmp3354 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp3355 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp3354);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3354));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3355));
// line 912
panda$io$MemoryOutputStream** $tmp3356 = &param0->strings;
panda$io$MemoryOutputStream* $tmp3357 = *$tmp3356;
panda$core$String* $tmp3358 = *(&local0);
panda$core$String* $tmp3359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3360, $tmp3358);
panda$core$String* $tmp3361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3359, &$s3362);
panda$core$Int64 $tmp3363 = (panda$core$Int64) {18446744073709550617};
panda$core$Int64$wrapper* $tmp3364;
$tmp3364 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3364->value = $tmp3363;
panda$core$String* $tmp3365 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3366, ((panda$core$Object*) $tmp3364));
panda$core$String* $tmp3367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3365, &$s3368);
panda$core$String* $tmp3369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3361, $tmp3367);
panda$core$String* $tmp3370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3369, &$s3371);
$fn3373 $tmp3372 = ($fn3373) ((panda$io$OutputStream*) $tmp3357)->$class->vtable[17];
$tmp3372(((panda$io$OutputStream*) $tmp3357), $tmp3370);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3359));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3361));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3364));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3365));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3367));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3369));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3370));
// line 915
panda$collections$ListView* $tmp3374 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(param1);
ITable* $tmp3375 = ((panda$collections$Iterable*) $tmp3374)->$class->itable;
while ($tmp3375->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp3375 = $tmp3375->next;
}
$fn3377 $tmp3376 = $tmp3375->methods[0];
panda$collections$Iterator* $tmp3378 = $tmp3376(((panda$collections$Iterable*) $tmp3374));
goto block1;
block1:;
ITable* $tmp3379 = $tmp3378->$class->itable;
while ($tmp3379->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp3379 = $tmp3379->next;
}
$fn3381 $tmp3380 = $tmp3379->methods[0];
panda$core$Bit $tmp3382 = $tmp3380($tmp3378);
bool $tmp3383 = $tmp3382.value;
if ($tmp3383) goto block3; else goto block2;
block2:;
ITable* $tmp3384 = $tmp3378->$class->itable;
while ($tmp3384->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp3384 = $tmp3384->next;
}
$fn3386 $tmp3385 = $tmp3384->methods[1];
panda$core$Object* $tmp3387 = $tmp3385($tmp3378);
panda$core$Panda$unref$panda$core$Object$Q($tmp3387);
*(&local1) = ((panda$core$Char8$wrapper*) $tmp3387)->value;
// line 916
panda$io$MemoryOutputStream** $tmp3388 = &param0->strings;
panda$io$MemoryOutputStream* $tmp3389 = *$tmp3388;
panda$core$Char8 $tmp3390 = *(&local1);
panda$core$UInt8 $tmp3391 = panda$core$Char8$convert$R$panda$core$UInt8($tmp3390);
panda$core$UInt8$wrapper* $tmp3392;
$tmp3392 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
$tmp3392->value = $tmp3391;
ITable* $tmp3393 = ((panda$core$Formattable*) $tmp3392)->$class->itable;
while ($tmp3393->$class != (panda$core$Class*) &panda$core$Formattable$class) {
    $tmp3393 = $tmp3393->next;
}
$fn3395 $tmp3394 = $tmp3393->methods[0];
panda$core$String* $tmp3396 = $tmp3394(((panda$core$Formattable*) $tmp3392), &$s3397);
panda$core$String* $tmp3398 = panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String($tmp3396, &$s3399);
panda$core$String* $tmp3400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3401, $tmp3398);
panda$core$String* $tmp3402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3400, &$s3403);
$fn3405 $tmp3404 = ($fn3405) ((panda$io$OutputStream*) $tmp3389)->$class->vtable[17];
$tmp3404(((panda$io$OutputStream*) $tmp3389), $tmp3402);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Formattable*) $tmp3392)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3396));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3398));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3400));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3402));
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3374));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3378));
// line 918
panda$io$MemoryOutputStream** $tmp3406 = &param0->strings;
panda$io$MemoryOutputStream* $tmp3407 = *$tmp3406;
panda$collections$ListView* $tmp3408 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(param1);
ITable* $tmp3409 = ((panda$collections$CollectionView*) $tmp3408)->$class->itable;
while ($tmp3409->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp3409 = $tmp3409->next;
}
$fn3411 $tmp3410 = $tmp3409->methods[0];
panda$core$Int64 $tmp3412 = $tmp3410(((panda$collections$CollectionView*) $tmp3408));
panda$core$Int64$wrapper* $tmp3413;
$tmp3413 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3413->value = $tmp3412;
panda$core$String* $tmp3414 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3415, ((panda$core$Object*) $tmp3413));
panda$core$String* $tmp3416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3414, &$s3417);
ITable* $tmp3418 = ((panda$collections$Key*) param1)->$class->itable;
while ($tmp3418->$class != (panda$core$Class*) &panda$collections$Key$class) {
    $tmp3418 = $tmp3418->next;
}
$fn3420 $tmp3419 = $tmp3418->methods[0];
panda$core$Int64 $tmp3421 = $tmp3419(((panda$collections$Key*) param1));
panda$core$Int64$wrapper* $tmp3422;
$tmp3422 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3422->value = $tmp3421;
panda$core$String* $tmp3423 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3416, ((panda$core$Object*) $tmp3422));
panda$core$String* $tmp3424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3423, &$s3425);
$fn3427 $tmp3426 = ($fn3427) ((panda$io$OutputStream*) $tmp3407)->$class->vtable[19];
$tmp3426(((panda$io$OutputStream*) $tmp3407), $tmp3424);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3408));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3413));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3414));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3416));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3422));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3423));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3424));
// line 919
panda$core$String* $tmp3428 = *(&local0);
panda$core$String* $tmp3429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3430, $tmp3428);
panda$core$String* $tmp3431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3429, &$s3432);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3431));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3429));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3431));
panda$core$String* $tmp3433 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3433));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3431;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
// line 923
org$pandalanguage$pandac$Type$Kind* $tmp3434 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3435 = *$tmp3434;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3436;
$tmp3436 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3436->value = $tmp3435;
panda$core$Int64 $tmp3437 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3438 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3437);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3439;
$tmp3439 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3439->value = $tmp3438;
ITable* $tmp3440 = ((panda$core$Equatable*) $tmp3436)->$class->itable;
while ($tmp3440->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3440 = $tmp3440->next;
}
$fn3442 $tmp3441 = $tmp3440->methods[0];
panda$core$Bit $tmp3443 = $tmp3441(((panda$core$Equatable*) $tmp3436), ((panda$core$Equatable*) $tmp3439));
bool $tmp3444 = $tmp3443.value;
if ($tmp3444) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp3445 = (panda$core$Int64) {923};
panda$core$String* $tmp3446 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3447, ((panda$core$Object*) param1));
panda$core$String* $tmp3448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3446, &$s3449);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3450, $tmp3445, $tmp3448);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3446));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3448));
abort(); // unreachable
block1:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3436)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3439)));
// line 924
panda$core$Weak** $tmp3451 = &param0->compiler;
panda$core$Weak* $tmp3452 = *$tmp3451;
panda$core$Object* $tmp3453 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3452);
panda$core$Panda$unref$panda$core$Object$Q($tmp3453);
panda$collections$ImmutableArray** $tmp3454 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp3455 = *$tmp3454;
panda$core$Int64 $tmp3456 = (panda$core$Int64) {0};
panda$core$Object* $tmp3457 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp3455, $tmp3456);
org$pandalanguage$pandac$ClassDecl* $tmp3458 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3453), ((org$pandalanguage$pandac$Type*) $tmp3457));
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3459 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3459));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3458));
*(&local0) = $tmp3458;
panda$core$Panda$unref$panda$core$Object$Q($tmp3457);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3458));
// line 925
org$pandalanguage$pandac$ClassDecl* $tmp3460 = *(&local0);
panda$core$Bit $tmp3461 = panda$core$Bit$init$builtin_bit($tmp3460 != NULL);
bool $tmp3462 = $tmp3461.value;
if ($tmp3462) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp3463 = (panda$core$Int64) {925};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3464, $tmp3463);
abort(); // unreachable
block3:;
// line 926
panda$core$Weak** $tmp3465 = &param0->compiler;
panda$core$Weak* $tmp3466 = *$tmp3465;
panda$core$Object* $tmp3467 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3466);
panda$core$Panda$unref$panda$core$Object$Q($tmp3467);
org$pandalanguage$pandac$ClassDecl* $tmp3468 = *(&local0);
panda$core$Bit $tmp3469 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3467), $tmp3468);
bool $tmp3470 = $tmp3469.value;
if ($tmp3470) goto block5; else goto block7;
block5:;
// line 927
panda$core$String* $tmp3471 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param1);
panda$core$String* $tmp3472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3473, $tmp3471);
panda$core$String* $tmp3474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3472, &$s3475);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3474));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3471));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3472));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3474));
org$pandalanguage$pandac$ClassDecl* $tmp3476 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3476));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3474;
block7:;
// line 1
// line 930
panda$core$String* $tmp3477 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param1);
panda$core$String* $tmp3478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3479, $tmp3477);
panda$core$String* $tmp3480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3478, &$s3481);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3480));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3477));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3478));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3480));
org$pandalanguage$pandac$ClassDecl* $tmp3482 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3482));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3480;
block6:;
panda$core$Bit $tmp3483 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3484 = $tmp3483.value;
if ($tmp3484) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp3485 = (panda$core$Int64) {922};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3486, $tmp3485, &$s3487);
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
panda$core$Int64* $tmp3488 = &param1->$rawValue;
panda$core$Int64 $tmp3489 = *$tmp3488;
panda$core$Int64 $tmp3490 = (panda$core$Int64) {0};
panda$core$Bit $tmp3491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3489, $tmp3490);
bool $tmp3492 = $tmp3491.value;
if ($tmp3492) goto block2; else goto block3;
block2:;
panda$core$Bit* $tmp3493 = (panda$core$Bit*) (param1->$data + 0);
panda$core$Bit $tmp3494 = *$tmp3493;
*(&local0) = $tmp3494;
// line 937
panda$core$Bit $tmp3495 = *(&local0);
panda$core$String* $tmp3496 = panda$core$Bit$convert$R$panda$core$String($tmp3495);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3496));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3496));
return $tmp3496;
block3:;
panda$core$Int64 $tmp3497 = (panda$core$Int64) {1};
panda$core$Bit $tmp3498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3489, $tmp3497);
bool $tmp3499 = $tmp3498.value;
if ($tmp3499) goto block4; else goto block5;
block4:;
panda$core$UInt64* $tmp3500 = (panda$core$UInt64*) (param1->$data + 0);
panda$core$UInt64 $tmp3501 = *$tmp3500;
*(&local1) = $tmp3501;
org$pandalanguage$pandac$Type** $tmp3502 = (org$pandalanguage$pandac$Type**) (param1->$data + 8);
org$pandalanguage$pandac$Type* $tmp3503 = *$tmp3502;
// line 939
panda$core$UInt64 $tmp3504 = *(&local1);
panda$core$String* $tmp3505 = panda$core$UInt64$convert$R$panda$core$String($tmp3504);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3505));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3505));
return $tmp3505;
block5:;
panda$core$Int64 $tmp3506 = (panda$core$Int64) {2};
panda$core$Bit $tmp3507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3489, $tmp3506);
bool $tmp3508 = $tmp3507.value;
if ($tmp3508) goto block6; else goto block7;
block6:;
panda$core$Int64* $tmp3509 = (panda$core$Int64*) (param1->$data + 0);
panda$core$Int64 $tmp3510 = *$tmp3509;
*(&local2) = $tmp3510;
org$pandalanguage$pandac$Type** $tmp3511 = (org$pandalanguage$pandac$Type**) (param1->$data + 8);
org$pandalanguage$pandac$Type* $tmp3512 = *$tmp3511;
// line 941
panda$core$Int64 $tmp3513 = *(&local2);
panda$core$Int64$wrapper* $tmp3514;
$tmp3514 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3514->value = $tmp3513;
panda$core$String* $tmp3515 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3516, ((panda$core$Object*) $tmp3514));
panda$core$String* $tmp3517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3515, &$s3518);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3517));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3514));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3515));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3517));
return $tmp3517;
block7:;
panda$core$Int64 $tmp3519 = (panda$core$Int64) {3};
panda$core$Bit $tmp3520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3489, $tmp3519);
bool $tmp3521 = $tmp3520.value;
if ($tmp3521) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$MethodDecl** $tmp3522 = (org$pandalanguage$pandac$MethodDecl**) (param1->$data + 0);
org$pandalanguage$pandac$MethodDecl* $tmp3523 = *$tmp3522;
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp3524 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3524));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3523));
*(&local3) = $tmp3523;
org$pandalanguage$pandac$Type** $tmp3525 = (org$pandalanguage$pandac$Type**) (param1->$data + 8);
org$pandalanguage$pandac$Type* $tmp3526 = *$tmp3525;
// line 943
org$pandalanguage$pandac$MethodDecl* $tmp3527 = *(&local3);
panda$core$Weak** $tmp3528 = &$tmp3527->owner;
panda$core$Weak* $tmp3529 = *$tmp3528;
panda$core$Object* $tmp3530 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3529);
panda$core$Panda$unref$panda$core$Object$Q($tmp3530);
panda$core$Bit* $tmp3531 = &((org$pandalanguage$pandac$ClassDecl*) $tmp3530)->external;
panda$core$Bit $tmp3532 = *$tmp3531;
bool $tmp3533 = $tmp3532.value;
if ($tmp3533) goto block10; else goto block11;
block10:;
// line 944
org$pandalanguage$pandac$MethodDecl* $tmp3534 = *(&local3);
org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(param0, $tmp3534);
goto block11;
block11:;
// line 946
org$pandalanguage$pandac$MethodDecl* $tmp3535 = *(&local3);
panda$core$String* $tmp3536 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, $tmp3535);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3536));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3536));
org$pandalanguage$pandac$MethodDecl* $tmp3537 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3537));
// unreffing m
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
return $tmp3536;
block9:;
panda$core$Int64 $tmp3538 = (panda$core$Int64) {4};
panda$core$Bit $tmp3539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3489, $tmp3538);
bool $tmp3540 = $tmp3539.value;
if ($tmp3540) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Type** $tmp3541 = (org$pandalanguage$pandac$Type**) (param1->$data + 0);
org$pandalanguage$pandac$Type* $tmp3542 = *$tmp3541;
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp3543 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3543));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3542));
*(&local4) = $tmp3542;
// line 948
org$pandalanguage$pandac$Type* $tmp3544 = *(&local4);
panda$core$String* $tmp3545 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp3544);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3545));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3545));
org$pandalanguage$pandac$Type* $tmp3546 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3546));
// unreffing type
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp3545;
block13:;
panda$core$Int64 $tmp3547 = (panda$core$Int64) {5};
panda$core$Bit $tmp3548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3489, $tmp3547);
bool $tmp3549 = $tmp3548.value;
if ($tmp3549) goto block14; else goto block15;
block14:;
panda$core$Int64* $tmp3550 = (panda$core$Int64*) (param1->$data + 0);
panda$core$Int64 $tmp3551 = *$tmp3550;
*(&local5) = $tmp3551;
org$pandalanguage$pandac$Type** $tmp3552 = (org$pandalanguage$pandac$Type**) (param1->$data + 8);
org$pandalanguage$pandac$Type* $tmp3553 = *$tmp3552;
// line 950
panda$core$Int64 $tmp3554 = *(&local5);
panda$core$Int64$wrapper* $tmp3555;
$tmp3555 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3555->value = $tmp3554;
panda$core$String* $tmp3556 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3557, ((panda$core$Object*) $tmp3555));
panda$core$String* $tmp3558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3556, &$s3559);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3558));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3555));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3556));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3558));
return $tmp3558;
block15:;
panda$core$Int64 $tmp3560 = (panda$core$Int64) {6};
panda$core$Bit $tmp3561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3489, $tmp3560);
bool $tmp3562 = $tmp3561.value;
if ($tmp3562) goto block16; else goto block17;
block16:;
panda$core$Real64* $tmp3563 = (panda$core$Real64*) (param1->$data + 0);
panda$core$Real64 $tmp3564 = *$tmp3563;
*(&local6) = $tmp3564;
org$pandalanguage$pandac$Type** $tmp3565 = (org$pandalanguage$pandac$Type**) (param1->$data + 8);
org$pandalanguage$pandac$Type* $tmp3566 = *$tmp3565;
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp3567 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3567));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3566));
*(&local7) = $tmp3566;
// line 952
org$pandalanguage$pandac$Type* $tmp3568 = *(&local7);
panda$core$Real64 $tmp3569 = *(&local6);
panda$core$String* $tmp3570 = org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$Type$panda$core$Real64$R$panda$core$String(param0, $tmp3568, $tmp3569);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3570));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3570));
org$pandalanguage$pandac$Type* $tmp3571 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3571));
// unreffing type
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp3570;
block17:;
panda$core$Int64 $tmp3572 = (panda$core$Int64) {7};
panda$core$Bit $tmp3573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3489, $tmp3572);
bool $tmp3574 = $tmp3573.value;
if ($tmp3574) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$IR$Statement$ID* $tmp3575 = (org$pandalanguage$pandac$IR$Statement$ID*) (param1->$data + 0);
org$pandalanguage$pandac$IR$Statement$ID $tmp3576 = *$tmp3575;
*(&local8) = $tmp3576;
org$pandalanguage$pandac$Type** $tmp3577 = (org$pandalanguage$pandac$Type**) (param1->$data + 8);
org$pandalanguage$pandac$Type* $tmp3578 = *$tmp3577;
// line 955
panda$collections$HashMap** $tmp3579 = &param0->refs;
panda$collections$HashMap* $tmp3580 = *$tmp3579;
org$pandalanguage$pandac$IR$Statement$ID $tmp3581 = *(&local8);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp3582;
$tmp3582 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp3582->value = $tmp3581;
panda$core$Object* $tmp3583 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp3580, ((panda$collections$Key*) $tmp3582));
panda$core$Bit $tmp3584 = panda$core$Bit$init$builtin_bit(((panda$core$String*) $tmp3583) == NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp3582)));
panda$core$Panda$unref$panda$core$Object$Q($tmp3583);
bool $tmp3585 = $tmp3584.value;
if ($tmp3585) goto block20; else goto block21;
block20:;
// line 956
org$pandalanguage$pandac$IR$Statement$ID $tmp3586 = *(&local8);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp3587;
$tmp3587 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp3587->value = $tmp3586;
panda$core$String* $tmp3588 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3589, ((panda$core$Object*) $tmp3587));
panda$core$String* $tmp3590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3588, &$s3591);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3590));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3587));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3588));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3590));
return $tmp3590;
block21:;
// line 958
panda$collections$HashMap** $tmp3592 = &param0->refs;
panda$collections$HashMap* $tmp3593 = *$tmp3592;
org$pandalanguage$pandac$IR$Statement$ID $tmp3594 = *(&local8);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp3595;
$tmp3595 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp3595->value = $tmp3594;
panda$core$Object* $tmp3596 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp3593, ((panda$collections$Key*) $tmp3595));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp3596)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp3595)));
panda$core$Panda$unref$panda$core$Object$Q($tmp3596);
return ((panda$core$String*) $tmp3596);
block19:;
panda$core$Int64 $tmp3597 = (panda$core$Int64) {8};
panda$core$Bit $tmp3598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3489, $tmp3597);
bool $tmp3599 = $tmp3598.value;
if ($tmp3599) goto block22; else goto block23;
block22:;
panda$core$String** $tmp3600 = (panda$core$String**) (param1->$data + 0);
panda$core$String* $tmp3601 = *$tmp3600;
*(&local9) = ((panda$core$String*) NULL);
panda$core$String* $tmp3602 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3602));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3601));
*(&local9) = $tmp3601;
// line 960
panda$core$String* $tmp3603 = *(&local9);
panda$core$String* $tmp3604 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(param0, $tmp3603);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3604));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3604));
panda$core$String* $tmp3605 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3605));
// unreffing s
*(&local9) = ((panda$core$String*) NULL);
return $tmp3604;
block23:;
// line 962
panda$core$Bit $tmp3606 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3607 = $tmp3606.value;
if ($tmp3607) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp3608 = (panda$core$Int64) {962};
panda$core$String* $tmp3609 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3610, ((panda$core$Object*) param1));
panda$core$String* $tmp3611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3609, &$s3612);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3613, $tmp3608, $tmp3611);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3609));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3611));
abort(); // unreachable
block24:;
goto block1;
block1:;
panda$core$Bit $tmp3614 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3615 = $tmp3614.value;
if ($tmp3615) goto block26; else goto block27;
block27:;
panda$core$Int64 $tmp3616 = (panda$core$Int64) {934};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3617, $tmp3616, &$s3618);
abort(); // unreachable
block26:;
abort(); // unreachable

}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldOffset$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ChoiceCase* param1, panda$core$Int64 param2) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 967
panda$core$Int64 $tmp3619 = (panda$core$Int64) {0};
*(&local0) = $tmp3619;
// line 968
panda$core$Int64 $tmp3620 = (panda$core$Int64) {0};
panda$core$Bit $tmp3621 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp3622 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp3620, param2, $tmp3621);
panda$core$Int64 $tmp3623 = $tmp3622.min;
*(&local1) = $tmp3623;
panda$core$Int64 $tmp3624 = $tmp3622.max;
panda$core$Bit $tmp3625 = $tmp3622.inclusive;
bool $tmp3626 = $tmp3625.value;
panda$core$Int64 $tmp3627 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp3628 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3627);
if ($tmp3626) goto block4; else goto block5;
block4:;
int64_t $tmp3629 = $tmp3623.value;
int64_t $tmp3630 = $tmp3624.value;
bool $tmp3631 = $tmp3629 <= $tmp3630;
panda$core$Bit $tmp3632 = (panda$core$Bit) {$tmp3631};
bool $tmp3633 = $tmp3632.value;
if ($tmp3633) goto block1; else goto block2;
block5:;
int64_t $tmp3634 = $tmp3623.value;
int64_t $tmp3635 = $tmp3624.value;
bool $tmp3636 = $tmp3634 < $tmp3635;
panda$core$Bit $tmp3637 = (panda$core$Bit) {$tmp3636};
bool $tmp3638 = $tmp3637.value;
if ($tmp3638) goto block1; else goto block2;
block1:;
// line 970
panda$core$Int64 $tmp3639 = *(&local0);
panda$collections$Array** $tmp3640 = &param1->fields;
panda$collections$Array* $tmp3641 = *$tmp3640;
panda$core$Int64 $tmp3642 = *(&local1);
panda$core$Object* $tmp3643 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp3641, $tmp3642);
panda$core$Int64 $tmp3644 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, ((org$pandalanguage$pandac$Type*) $tmp3643));
int64_t $tmp3645 = $tmp3639.value;
int64_t $tmp3646 = $tmp3644.value;
int64_t $tmp3647 = $tmp3645 + $tmp3646;
panda$core$Int64 $tmp3648 = (panda$core$Int64) {$tmp3647};
*(&local0) = $tmp3648;
panda$core$Panda$unref$panda$core$Object$Q($tmp3643);
goto block3;
block3:;
panda$core$Int64 $tmp3649 = *(&local1);
int64_t $tmp3650 = $tmp3624.value;
int64_t $tmp3651 = $tmp3649.value;
int64_t $tmp3652 = $tmp3650 - $tmp3651;
panda$core$Int64 $tmp3653 = (panda$core$Int64) {$tmp3652};
panda$core$UInt64 $tmp3654 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3653);
if ($tmp3626) goto block7; else goto block8;
block7:;
uint64_t $tmp3655 = $tmp3654.value;
uint64_t $tmp3656 = $tmp3628.value;
bool $tmp3657 = $tmp3655 >= $tmp3656;
panda$core$Bit $tmp3658 = (panda$core$Bit) {$tmp3657};
bool $tmp3659 = $tmp3658.value;
if ($tmp3659) goto block6; else goto block2;
block8:;
uint64_t $tmp3660 = $tmp3654.value;
uint64_t $tmp3661 = $tmp3628.value;
bool $tmp3662 = $tmp3660 > $tmp3661;
panda$core$Bit $tmp3663 = (panda$core$Bit) {$tmp3662};
bool $tmp3664 = $tmp3663.value;
if ($tmp3664) goto block6; else goto block2;
block6:;
int64_t $tmp3665 = $tmp3649.value;
int64_t $tmp3666 = $tmp3627.value;
int64_t $tmp3667 = $tmp3665 + $tmp3666;
panda$core$Int64 $tmp3668 = (panda$core$Int64) {$tmp3667};
*(&local1) = $tmp3668;
goto block1;
block2:;
// line 972
panda$core$Int64 $tmp3669 = *(&local0);
return $tmp3669;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$String* local0 = NULL;
panda$core$Bit local1;
// line 976
panda$core$Weak** $tmp3670 = &param1->owner;
panda$core$Weak* $tmp3671 = *$tmp3670;
panda$core$Object* $tmp3672 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3671);
panda$core$Panda$unref$panda$core$Object$Q($tmp3672);
org$pandalanguage$pandac$Type** $tmp3673 = &((org$pandalanguage$pandac$ClassDecl*) $tmp3672)->type;
org$pandalanguage$pandac$Type* $tmp3674 = *$tmp3673;
panda$core$String* $tmp3675 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp3674);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp3676 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3676));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3675));
*(&local0) = $tmp3675;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3675));
// line 977
org$pandalanguage$pandac$MethodDecl$Kind* $tmp3677 = &param1->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp3678 = *$tmp3677;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp3679;
$tmp3679 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp3679->value = $tmp3678;
panda$core$Int64 $tmp3680 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp3681 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp3680);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp3682;
$tmp3682 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp3682->value = $tmp3681;
ITable* $tmp3683 = ((panda$core$Equatable*) $tmp3679)->$class->itable;
while ($tmp3683->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3683 = $tmp3683->next;
}
$fn3685 $tmp3684 = $tmp3683->methods[0];
panda$core$Bit $tmp3686 = $tmp3684(((panda$core$Equatable*) $tmp3679), ((panda$core$Equatable*) $tmp3682));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3679)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3682)));
bool $tmp3687 = $tmp3686.value;
if ($tmp3687) goto block1; else goto block2;
block1:;
panda$core$String* $tmp3688 = *(&local0);
panda$core$Bit $tmp3689 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp3688, &$s3690);
panda$core$Bit $tmp3691 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3689);
*(&local1) = $tmp3691;
goto block3;
block2:;
*(&local1) = $tmp3686;
goto block3;
block3:;
panda$core$Bit $tmp3692 = *(&local1);
bool $tmp3693 = $tmp3692.value;
if ($tmp3693) goto block4; else goto block5;
block4:;
// line 978
panda$core$String* $tmp3694 = *(&local0);
panda$core$String* $tmp3695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3694, &$s3696);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3695));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3695));
panda$core$String* $tmp3697 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3697));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3695;
block5:;
// line 980
panda$core$String* $tmp3698 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3698));
panda$core$String* $tmp3699 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3699));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3698;

}
void org$pandalanguage$pandac$CCodeGenerator$writeIsNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$ClassDecl* local1 = NULL;
panda$core$String* local2 = NULL;
// line 984
panda$core$String* $tmp3700 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp3701 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3701));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3700));
*(&local0) = $tmp3700;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3700));
// line 985
panda$core$Weak** $tmp3702 = &param0->compiler;
panda$core$Weak* $tmp3703 = *$tmp3702;
panda$core$Object* $tmp3704 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3703);
panda$core$Panda$unref$panda$core$Object$Q($tmp3704);
$fn3706 $tmp3705 = ($fn3706) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3707 = $tmp3705(param2);
org$pandalanguage$pandac$ClassDecl* $tmp3708 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3704), $tmp3707);
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3709 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3709));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3708));
*(&local1) = $tmp3708;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3707));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3708));
// line 986
org$pandalanguage$pandac$ClassDecl* $tmp3710 = *(&local1);
panda$core$Bit $tmp3711 = panda$core$Bit$init$builtin_bit($tmp3710 != NULL);
bool $tmp3712 = $tmp3711.value;
if ($tmp3712) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp3713 = (panda$core$Int64) {986};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3714, $tmp3713);
abort(); // unreachable
block1:;
// line 987
*(&local2) = ((panda$core$String*) NULL);
// line 988
panda$core$Weak** $tmp3715 = &param0->compiler;
panda$core$Weak* $tmp3716 = *$tmp3715;
panda$core$Object* $tmp3717 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3716);
panda$core$Panda$unref$panda$core$Object$Q($tmp3717);
org$pandalanguage$pandac$ClassDecl* $tmp3718 = *(&local1);
panda$core$Bit $tmp3719 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3717), $tmp3718);
bool $tmp3720 = $tmp3719.value;
if ($tmp3720) goto block3; else goto block5;
block3:;
// line 989
$fn3722 $tmp3721 = ($fn3722) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3723 = $tmp3721(param2);
org$pandalanguage$pandac$Type$Kind* $tmp3724 = &$tmp3723->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3725 = *$tmp3724;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3726;
$tmp3726 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3726->value = $tmp3725;
panda$core$Int64 $tmp3727 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3728 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3727);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3729;
$tmp3729 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3729->value = $tmp3728;
ITable* $tmp3730 = ((panda$core$Equatable*) $tmp3726)->$class->itable;
while ($tmp3730->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3730 = $tmp3730->next;
}
$fn3732 $tmp3731 = $tmp3730->methods[1];
panda$core$Bit $tmp3733 = $tmp3731(((panda$core$Equatable*) $tmp3726), ((panda$core$Equatable*) $tmp3729));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3723));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3726)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3729)));
bool $tmp3734 = $tmp3733.value;
if ($tmp3734) goto block6; else goto block8;
block6:;
// line 990
panda$core$String* $tmp3735 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3735));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3736));
*(&local2) = &$s3737;
goto block7;
block8:;
// line 1
// line 993
panda$core$String* $tmp3738 = *(&local0);
panda$core$String* $tmp3739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3740, $tmp3738);
panda$core$String* $tmp3741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3739, &$s3742);
panda$core$String* $tmp3743 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3743));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3741));
*(&local2) = $tmp3741;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3739));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3741));
goto block7;
block7:;
goto block4;
block5:;
// line 1
// line 997
panda$core$String* $tmp3744 = *(&local0);
panda$core$String* $tmp3745 = panda$core$String$convert$R$panda$core$String($tmp3744);
panda$core$String* $tmp3746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3745, &$s3747);
panda$core$String* $tmp3748 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3748));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3746));
*(&local2) = $tmp3746;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3745));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3746));
goto block4;
block4:;
// line 999
panda$collections$HashMap** $tmp3749 = &param0->refs;
panda$collections$HashMap* $tmp3750 = *$tmp3749;
panda$core$String* $tmp3751 = *(&local2);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp3752;
$tmp3752 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp3752->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp3750, ((panda$collections$Key*) $tmp3752), ((panda$core$Object*) $tmp3751));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp3752)));
panda$core$String* $tmp3753 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3753));
// unreffing bit
*(&local2) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3754 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3754));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$String* $tmp3755 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3755));
// unreffing ref
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeIsNonNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$ClassDecl* local1 = NULL;
panda$core$String* local2 = NULL;
// line 1003
panda$core$String* $tmp3756 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp3757 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3757));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3756));
*(&local0) = $tmp3756;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3756));
// line 1004
panda$core$Weak** $tmp3758 = &param0->compiler;
panda$core$Weak* $tmp3759 = *$tmp3758;
panda$core$Object* $tmp3760 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3759);
panda$core$Panda$unref$panda$core$Object$Q($tmp3760);
$fn3762 $tmp3761 = ($fn3762) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3763 = $tmp3761(param2);
org$pandalanguage$pandac$ClassDecl* $tmp3764 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3760), $tmp3763);
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3765 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3765));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3764));
*(&local1) = $tmp3764;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3763));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3764));
// line 1005
org$pandalanguage$pandac$ClassDecl* $tmp3766 = *(&local1);
panda$core$Bit $tmp3767 = panda$core$Bit$init$builtin_bit($tmp3766 != NULL);
bool $tmp3768 = $tmp3767.value;
if ($tmp3768) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp3769 = (panda$core$Int64) {1005};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3770, $tmp3769);
abort(); // unreachable
block1:;
// line 1006
*(&local2) = ((panda$core$String*) NULL);
// line 1007
panda$core$Weak** $tmp3771 = &param0->compiler;
panda$core$Weak* $tmp3772 = *$tmp3771;
panda$core$Object* $tmp3773 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3772);
panda$core$Panda$unref$panda$core$Object$Q($tmp3773);
org$pandalanguage$pandac$ClassDecl* $tmp3774 = *(&local1);
panda$core$Bit $tmp3775 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3773), $tmp3774);
bool $tmp3776 = $tmp3775.value;
if ($tmp3776) goto block3; else goto block5;
block3:;
// line 1008
$fn3778 $tmp3777 = ($fn3778) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3779 = $tmp3777(param2);
org$pandalanguage$pandac$Type$Kind* $tmp3780 = &$tmp3779->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3781 = *$tmp3780;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3782;
$tmp3782 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3782->value = $tmp3781;
panda$core$Int64 $tmp3783 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3784 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3783);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3785;
$tmp3785 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3785->value = $tmp3784;
ITable* $tmp3786 = ((panda$core$Equatable*) $tmp3782)->$class->itable;
while ($tmp3786->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3786 = $tmp3786->next;
}
$fn3788 $tmp3787 = $tmp3786->methods[1];
panda$core$Bit $tmp3789 = $tmp3787(((panda$core$Equatable*) $tmp3782), ((panda$core$Equatable*) $tmp3785));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3779));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3782)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3785)));
bool $tmp3790 = $tmp3789.value;
if ($tmp3790) goto block6; else goto block8;
block6:;
// line 1009
panda$core$String* $tmp3791 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3791));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3792));
*(&local2) = &$s3793;
goto block7;
block8:;
// line 1
// line 1012
panda$core$String* $tmp3794 = *(&local0);
panda$core$String* $tmp3795 = panda$core$String$convert$R$panda$core$String($tmp3794);
panda$core$String* $tmp3796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3795, &$s3797);
panda$core$String* $tmp3798 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3798));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3796));
*(&local2) = $tmp3796;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3795));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3796));
goto block7;
block7:;
goto block4;
block5:;
// line 1
// line 1016
panda$core$String* $tmp3799 = *(&local0);
panda$core$String* $tmp3800 = panda$core$String$convert$R$panda$core$String($tmp3799);
panda$core$String* $tmp3801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3800, &$s3802);
panda$core$String* $tmp3803 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3803));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3801));
*(&local2) = $tmp3801;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3800));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3801));
goto block4;
block4:;
// line 1018
panda$collections$HashMap** $tmp3804 = &param0->refs;
panda$collections$HashMap* $tmp3805 = *$tmp3804;
panda$core$String* $tmp3806 = *(&local2);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp3807;
$tmp3807 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp3807->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp3805, ((panda$collections$Key*) $tmp3807), ((panda$core$Object*) $tmp3806));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp3807)));
panda$core$String* $tmp3808 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3808));
// unreffing bit
*(&local2) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3809 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3809));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$String* $tmp3810 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3810));
// unreffing ref
*(&local0) = ((panda$core$String*) NULL);
return;

}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$isNull$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1) {

// line 1022
panda$core$Int64* $tmp3811 = &param1->$rawValue;
panda$core$Int64 $tmp3812 = *$tmp3811;
panda$core$Int64 $tmp3813 = (panda$core$Int64) {4};
panda$core$Bit $tmp3814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3812, $tmp3813);
bool $tmp3815 = $tmp3814.value;
if ($tmp3815) goto block2; else goto block1;
block2:;
// line 1024
panda$core$Bit $tmp3816 = panda$core$Bit$init$builtin_bit(true);
return $tmp3816;
block1:;
// line 1026
panda$core$Bit $tmp3817 = panda$core$Bit$init$builtin_bit(false);
return $tmp3817;

}
void org$pandalanguage$pandac$CCodeGenerator$writeBinary$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$parser$Token$Kind param3, org$pandalanguage$pandac$IR$Value* param4, org$pandalanguage$pandac$Type* param5) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
// line 1031
panda$core$String* $tmp3818 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp3819 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3819));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3818));
*(&local0) = $tmp3818;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3818));
// line 1032
panda$core$String* $tmp3820 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param4);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3821 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3821));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3820));
*(&local1) = $tmp3820;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3820));
// line 1033
$fn3823 $tmp3822 = ($fn3823) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3824 = $tmp3822(param2);
panda$core$Bit $tmp3825 = org$pandalanguage$pandac$Type$get_isNullable$R$panda$core$Bit($tmp3824);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3824));
bool $tmp3826 = $tmp3825.value;
if ($tmp3826) goto block1; else goto block2;
block1:;
// line 1034
panda$core$Int64 $tmp3827 = param3.$rawValue;
panda$core$Int64 $tmp3828 = (panda$core$Int64) {61};
panda$core$Bit $tmp3829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3827, $tmp3828);
bool $tmp3830 = $tmp3829.value;
if ($tmp3830) goto block4; else goto block5;
block4:;
// line 1036
panda$core$Bit $tmp3831 = org$pandalanguage$pandac$CCodeGenerator$isNull$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(param0, param2);
bool $tmp3832 = $tmp3831.value;
if ($tmp3832) goto block6; else goto block7;
block6:;
// line 1037
org$pandalanguage$pandac$CCodeGenerator$writeIsNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, param4);
// line 1038
panda$core$String* $tmp3833 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3833));
// unreffing rightRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3834 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3834));
// unreffing leftRef
*(&local0) = ((panda$core$String*) NULL);
return;
block7:;
// line 1040
panda$core$Bit $tmp3835 = org$pandalanguage$pandac$CCodeGenerator$isNull$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(param0, param4);
bool $tmp3836 = $tmp3835.value;
if ($tmp3836) goto block8; else goto block9;
block8:;
// line 1041
org$pandalanguage$pandac$CCodeGenerator$writeIsNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, param2);
// line 1042
panda$core$String* $tmp3837 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3837));
// unreffing rightRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3838 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3838));
// unreffing leftRef
*(&local0) = ((panda$core$String*) NULL);
return;
block9:;
goto block3;
block5:;
panda$core$Int64 $tmp3839 = (panda$core$Int64) {62};
panda$core$Bit $tmp3840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3827, $tmp3839);
bool $tmp3841 = $tmp3840.value;
if ($tmp3841) goto block10; else goto block3;
block10:;
// line 1045
panda$core$Bit $tmp3842 = org$pandalanguage$pandac$CCodeGenerator$isNull$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(param0, param2);
bool $tmp3843 = $tmp3842.value;
if ($tmp3843) goto block11; else goto block12;
block11:;
// line 1046
org$pandalanguage$pandac$CCodeGenerator$writeIsNonNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, param4);
// line 1047
panda$core$String* $tmp3844 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3844));
// unreffing rightRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3845 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3845));
// unreffing leftRef
*(&local0) = ((panda$core$String*) NULL);
return;
block12:;
// line 1049
panda$core$Bit $tmp3846 = org$pandalanguage$pandac$CCodeGenerator$isNull$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(param0, param4);
bool $tmp3847 = $tmp3846.value;
if ($tmp3847) goto block13; else goto block14;
block13:;
// line 1050
org$pandalanguage$pandac$CCodeGenerator$writeIsNonNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, param2);
// line 1051
panda$core$String* $tmp3848 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3848));
// unreffing rightRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3849 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3849));
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
panda$core$Int64 $tmp3850 = param3.$rawValue;
panda$core$Int64 $tmp3851 = (panda$core$Int64) {52};
panda$core$Bit $tmp3852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3850, $tmp3851);
bool $tmp3853 = $tmp3852.value;
if ($tmp3853) goto block16; else goto block17;
block16:;
// line 1058
panda$core$String* $tmp3854 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3854));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3855));
*(&local2) = &$s3856;
goto block15;
block17:;
panda$core$Int64 $tmp3857 = (panda$core$Int64) {53};
panda$core$Bit $tmp3858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3850, $tmp3857);
bool $tmp3859 = $tmp3858.value;
if ($tmp3859) goto block18; else goto block19;
block18:;
// line 1060
panda$core$String* $tmp3860 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3860));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3861));
*(&local2) = &$s3862;
goto block15;
block19:;
panda$core$Int64 $tmp3863 = (panda$core$Int64) {54};
panda$core$Bit $tmp3864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3850, $tmp3863);
bool $tmp3865 = $tmp3864.value;
if ($tmp3865) goto block20; else goto block21;
block20:;
// line 1062
panda$core$String* $tmp3866 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3866));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3867));
*(&local2) = &$s3868;
goto block15;
block21:;
panda$core$Int64 $tmp3869 = (panda$core$Int64) {55};
panda$core$Bit $tmp3870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3850, $tmp3869);
bool $tmp3871 = $tmp3870.value;
if ($tmp3871) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp3872 = (panda$core$Int64) {56};
panda$core$Bit $tmp3873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3850, $tmp3872);
bool $tmp3874 = $tmp3873.value;
if ($tmp3874) goto block22; else goto block24;
block22:;
// line 1064
panda$core$String* $tmp3875 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3875));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3876));
*(&local2) = &$s3877;
goto block15;
block24:;
panda$core$Int64 $tmp3878 = (panda$core$Int64) {57};
panda$core$Bit $tmp3879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3850, $tmp3878);
bool $tmp3880 = $tmp3879.value;
if ($tmp3880) goto block25; else goto block26;
block25:;
// line 1066
panda$core$String* $tmp3881 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3881));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3882));
*(&local2) = &$s3883;
goto block15;
block26:;
panda$core$Int64 $tmp3884 = (panda$core$Int64) {73};
panda$core$Bit $tmp3885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3850, $tmp3884);
bool $tmp3886 = $tmp3885.value;
if ($tmp3886) goto block27; else goto block28;
block27:;
// line 1068
panda$core$String* $tmp3887 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3887));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3888));
*(&local2) = &$s3889;
goto block15;
block28:;
panda$core$Int64 $tmp3890 = (panda$core$Int64) {1};
panda$core$Bit $tmp3891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3850, $tmp3890);
bool $tmp3892 = $tmp3891.value;
if ($tmp3892) goto block29; else goto block30;
block29:;
// line 1070
panda$core$String* $tmp3893 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3893));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3894));
*(&local2) = &$s3895;
goto block15;
block30:;
panda$core$Int64 $tmp3896 = (panda$core$Int64) {67};
panda$core$Bit $tmp3897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3850, $tmp3896);
bool $tmp3898 = $tmp3897.value;
if ($tmp3898) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp3899 = (panda$core$Int64) {68};
panda$core$Bit $tmp3900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3850, $tmp3899);
bool $tmp3901 = $tmp3900.value;
if ($tmp3901) goto block31; else goto block33;
block31:;
// line 1072
panda$core$String* $tmp3902 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3902));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3903));
*(&local2) = &$s3904;
goto block15;
block33:;
panda$core$Int64 $tmp3905 = (panda$core$Int64) {69};
panda$core$Bit $tmp3906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3850, $tmp3905);
bool $tmp3907 = $tmp3906.value;
if ($tmp3907) goto block34; else goto block35;
block35:;
panda$core$Int64 $tmp3908 = (panda$core$Int64) {70};
panda$core$Bit $tmp3909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3850, $tmp3908);
bool $tmp3910 = $tmp3909.value;
if ($tmp3910) goto block34; else goto block36;
block34:;
// line 1074
panda$core$String* $tmp3911 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3911));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3912));
*(&local2) = &$s3913;
goto block15;
block36:;
panda$core$Int64 $tmp3914 = (panda$core$Int64) {71};
panda$core$Bit $tmp3915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3850, $tmp3914);
bool $tmp3916 = $tmp3915.value;
if ($tmp3916) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp3917 = (panda$core$Int64) {72};
panda$core$Bit $tmp3918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3850, $tmp3917);
bool $tmp3919 = $tmp3918.value;
if ($tmp3919) goto block37; else goto block39;
block37:;
// line 1076
panda$core$String* $tmp3920 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3920));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3921));
*(&local2) = &$s3922;
goto block15;
block39:;
panda$core$Int64 $tmp3923 = (panda$core$Int64) {59};
panda$core$Bit $tmp3924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3850, $tmp3923);
bool $tmp3925 = $tmp3924.value;
if ($tmp3925) goto block40; else goto block41;
block41:;
panda$core$Int64 $tmp3926 = (panda$core$Int64) {61};
panda$core$Bit $tmp3927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3850, $tmp3926);
bool $tmp3928 = $tmp3927.value;
if ($tmp3928) goto block40; else goto block42;
block40:;
// line 1078
panda$core$String* $tmp3929 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3929));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3930));
*(&local2) = &$s3931;
goto block15;
block42:;
panda$core$Int64 $tmp3932 = (panda$core$Int64) {60};
panda$core$Bit $tmp3933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3850, $tmp3932);
bool $tmp3934 = $tmp3933.value;
if ($tmp3934) goto block43; else goto block44;
block44:;
panda$core$Int64 $tmp3935 = (panda$core$Int64) {62};
panda$core$Bit $tmp3936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3850, $tmp3935);
bool $tmp3937 = $tmp3936.value;
if ($tmp3937) goto block43; else goto block45;
block43:;
// line 1080
panda$core$String* $tmp3938 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3938));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3939));
*(&local2) = &$s3940;
goto block15;
block45:;
panda$core$Int64 $tmp3941 = (panda$core$Int64) {64};
panda$core$Bit $tmp3942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3850, $tmp3941);
bool $tmp3943 = $tmp3942.value;
if ($tmp3943) goto block46; else goto block47;
block46:;
// line 1082
panda$core$String* $tmp3944 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3944));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3945));
*(&local2) = &$s3946;
goto block15;
block47:;
panda$core$Int64 $tmp3947 = (panda$core$Int64) {63};
panda$core$Bit $tmp3948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3850, $tmp3947);
bool $tmp3949 = $tmp3948.value;
if ($tmp3949) goto block48; else goto block49;
block48:;
// line 1084
panda$core$String* $tmp3950 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3950));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3951));
*(&local2) = &$s3952;
goto block15;
block49:;
panda$core$Int64 $tmp3953 = (panda$core$Int64) {66};
panda$core$Bit $tmp3954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3850, $tmp3953);
bool $tmp3955 = $tmp3954.value;
if ($tmp3955) goto block50; else goto block51;
block50:;
// line 1086
panda$core$String* $tmp3956 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3956));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3957));
*(&local2) = &$s3958;
goto block15;
block51:;
panda$core$Int64 $tmp3959 = (panda$core$Int64) {65};
panda$core$Bit $tmp3960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3850, $tmp3959);
bool $tmp3961 = $tmp3960.value;
if ($tmp3961) goto block52; else goto block53;
block52:;
// line 1088
panda$core$String* $tmp3962 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3962));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3963));
*(&local2) = &$s3964;
goto block15;
block53:;
// line 1090
panda$core$Bit $tmp3965 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3966 = $tmp3965.value;
if ($tmp3966) goto block54; else goto block55;
block55:;
panda$core$Int64 $tmp3967 = (panda$core$Int64) {1090};
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3968;
$tmp3968 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3968->value = param3;
panda$core$String* $tmp3969 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3970, ((panda$core$Object*) $tmp3968));
panda$core$String* $tmp3971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3969, &$s3972);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3973, $tmp3967, $tmp3971);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3968));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3969));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3971));
abort(); // unreachable
block54:;
goto block15;
block15:;
// line 1092
panda$core$String* $tmp3974 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp3975 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3975));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3974));
*(&local3) = $tmp3974;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3974));
// line 1093
panda$io$IndentedOutputStream** $tmp3976 = &param0->out;
panda$io$IndentedOutputStream* $tmp3977 = *$tmp3976;
panda$core$String* $tmp3978 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param5);
panda$core$String* $tmp3979 = panda$core$String$convert$R$panda$core$String($tmp3978);
panda$core$String* $tmp3980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3979, &$s3981);
panda$core$String* $tmp3982 = *(&local3);
panda$core$String* $tmp3983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3980, $tmp3982);
panda$core$String* $tmp3984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3983, &$s3985);
panda$core$String* $tmp3986 = *(&local0);
panda$core$String* $tmp3987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3984, $tmp3986);
panda$core$String* $tmp3988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3987, &$s3989);
panda$core$String* $tmp3990 = *(&local2);
panda$core$String* $tmp3991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3988, $tmp3990);
panda$core$String* $tmp3992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3991, &$s3993);
panda$core$String* $tmp3994 = *(&local1);
panda$core$String* $tmp3995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3992, $tmp3994);
panda$core$String* $tmp3996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3995, &$s3997);
$fn3999 $tmp3998 = ($fn3999) ((panda$io$OutputStream*) $tmp3977)->$class->vtable[19];
$tmp3998(((panda$io$OutputStream*) $tmp3977), $tmp3996);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3978));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3979));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3980));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3983));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3984));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3987));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3988));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3991));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3992));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3995));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3996));
// line 1094
panda$collections$HashMap** $tmp4000 = &param0->refs;
panda$collections$HashMap* $tmp4001 = *$tmp4000;
panda$core$String* $tmp4002 = *(&local3);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4003;
$tmp4003 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4003->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4001, ((panda$collections$Key*) $tmp4003), ((panda$core$Object*) $tmp4002));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4003)));
panda$core$String* $tmp4004 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4004));
// unreffing result
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4005 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4005));
// unreffing cOp
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4006 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4006));
// unreffing rightRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4007 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4007));
// unreffing leftRef
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeBranch$org$pandalanguage$pandac$IR$Block$ID(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Block$ID param1) {

// line 1098
panda$io$IndentedOutputStream** $tmp4008 = &param0->out;
panda$io$IndentedOutputStream* $tmp4009 = *$tmp4008;
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp4010;
$tmp4010 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp4010->value = param1;
panda$core$String* $tmp4011 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4012, ((panda$core$Object*) $tmp4010));
panda$core$String* $tmp4013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4011, &$s4014);
$fn4016 $tmp4015 = ($fn4016) ((panda$io$OutputStream*) $tmp4009)->$class->vtable[19];
$tmp4015(((panda$io$OutputStream*) $tmp4009), $tmp4013);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4010));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4011));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4013));
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeCast$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$Type* param3) {

// line 1102
panda$collections$HashMap** $tmp4017 = &param0->refs;
panda$collections$HashMap* $tmp4018 = *$tmp4017;
panda$core$String* $tmp4019 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
$fn4021 $tmp4020 = ($fn4021) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4022 = $tmp4020(param2);
panda$core$String* $tmp4023 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4019, $tmp4022, param3);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4024;
$tmp4024 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4024->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4018, ((panda$collections$Key*) $tmp4024), ((panda$core$Object*) $tmp4023));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4019));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4022));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4023));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4024)));
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeConditionalBranch$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1, org$pandalanguage$pandac$IR$Block$ID param2, org$pandalanguage$pandac$IR$Block$ID param3) {

// line 1106
panda$io$IndentedOutputStream** $tmp4025 = &param0->out;
panda$io$IndentedOutputStream* $tmp4026 = *$tmp4025;
panda$core$String* $tmp4027 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param1);
panda$core$String* $tmp4028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4029, $tmp4027);
panda$core$String* $tmp4030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4028, &$s4031);
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp4032;
$tmp4032 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp4032->value = param2;
panda$core$String* $tmp4033 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4030, ((panda$core$Object*) $tmp4032));
panda$core$String* $tmp4034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4033, &$s4035);
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp4036;
$tmp4036 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp4036->value = param3;
panda$core$String* $tmp4037 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4034, ((panda$core$Object*) $tmp4036));
panda$core$String* $tmp4038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4037, &$s4039);
$fn4041 $tmp4040 = ($fn4041) ((panda$io$OutputStream*) $tmp4026)->$class->vtable[19];
$tmp4040(((panda$io$OutputStream*) $tmp4026), $tmp4038);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4027));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4028));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4030));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4032));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4033));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4034));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4036));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4037));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4038));
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeConstruct$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$ClassDecl* param2) {

org$pandalanguage$pandac$CCodeGenerator$ClassConstant* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$Type* local3 = NULL;
// line 1110
panda$core$Weak** $tmp4042 = &param0->compiler;
panda$core$Weak* $tmp4043 = *$tmp4042;
panda$core$Object* $tmp4044 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4043);
panda$core$Panda$unref$panda$core$Object$Q($tmp4044);
panda$core$Bit $tmp4045 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp4044), param2);
panda$core$Bit $tmp4046 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4045);
bool $tmp4047 = $tmp4046.value;
if ($tmp4047) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp4048 = (panda$core$Int64) {1110};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s4049, $tmp4048);
abort(); // unreachable
block1:;
// line 1111
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4050 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, param2);
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4051 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4051));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4050));
*(&local0) = $tmp4050;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4050));
// line 1112
*(&local1) = ((panda$core$String*) NULL);
// line 1113
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4052 = *(&local0);
panda$core$String** $tmp4053 = &$tmp4052->type;
panda$core$String* $tmp4054 = *$tmp4053;
ITable* $tmp4056 = ((panda$core$Equatable*) $tmp4054)->$class->itable;
while ($tmp4056->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4056 = $tmp4056->next;
}
$fn4058 $tmp4057 = $tmp4056->methods[1];
panda$core$Bit $tmp4059 = $tmp4057(((panda$core$Equatable*) $tmp4054), ((panda$core$Equatable*) &$s4055));
bool $tmp4060 = $tmp4059.value;
if ($tmp4060) goto block3; else goto block5;
block3:;
// line 1114
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4061 = *(&local0);
panda$core$String** $tmp4062 = &$tmp4061->name;
panda$core$String* $tmp4063 = *$tmp4062;
panda$core$String* $tmp4064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4065, $tmp4063);
panda$core$String* $tmp4066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4064, &$s4067);
panda$core$String* $tmp4068 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4068));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4066));
*(&local1) = $tmp4066;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4064));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4066));
goto block4;
block5:;
// line 1
// line 1117
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4069 = *(&local0);
panda$core$String** $tmp4070 = &$tmp4069->name;
panda$core$String* $tmp4071 = *$tmp4070;
panda$core$String* $tmp4072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4073, $tmp4071);
panda$core$String* $tmp4074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4072, &$s4075);
panda$core$String* $tmp4076 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4076));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4074));
*(&local1) = $tmp4074;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4072));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4074));
goto block4;
block4:;
// line 1119
panda$core$String* $tmp4077 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4078 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4078));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4077));
*(&local2) = $tmp4077;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4077));
// line 1120
org$pandalanguage$pandac$Type** $tmp4079 = &param2->type;
org$pandalanguage$pandac$Type* $tmp4080 = *$tmp4079;
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp4081 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4081));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4080));
*(&local3) = $tmp4080;
// line 1121
panda$io$IndentedOutputStream** $tmp4082 = &param0->out;
panda$io$IndentedOutputStream* $tmp4083 = *$tmp4082;
org$pandalanguage$pandac$Type* $tmp4084 = *(&local3);
panda$core$String* $tmp4085 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4084);
panda$core$String* $tmp4086 = panda$core$String$convert$R$panda$core$String($tmp4085);
panda$core$String* $tmp4087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4086, &$s4088);
panda$core$String* $tmp4089 = *(&local2);
panda$core$String* $tmp4090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4087, $tmp4089);
panda$core$String* $tmp4091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4090, &$s4092);
org$pandalanguage$pandac$Type* $tmp4093 = *(&local3);
panda$core$String* $tmp4094 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4093);
panda$core$String* $tmp4095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4091, $tmp4094);
panda$core$String* $tmp4096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4095, &$s4097);
org$pandalanguage$pandac$Type* $tmp4098 = *(&local3);
panda$core$Int64 $tmp4099 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, $tmp4098);
panda$core$String* $tmp4100 = panda$core$Int64$convert$R$panda$core$String($tmp4099);
panda$core$String* $tmp4101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4100, &$s4102);
panda$core$String* $tmp4103 = *(&local1);
panda$core$String* $tmp4104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4101, $tmp4103);
panda$core$String* $tmp4105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4104, &$s4106);
panda$core$String* $tmp4107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4096, $tmp4105);
$fn4109 $tmp4108 = ($fn4109) ((panda$io$OutputStream*) $tmp4083)->$class->vtable[19];
$tmp4108(((panda$io$OutputStream*) $tmp4083), $tmp4107);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4085));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4086));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4087));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4090));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4091));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4094));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4095));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4096));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4100));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4101));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4104));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4105));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4107));
// line 1123
panda$collections$HashMap** $tmp4110 = &param0->refs;
panda$collections$HashMap* $tmp4111 = *$tmp4110;
panda$core$String* $tmp4112 = *(&local2);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4113;
$tmp4113 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4113->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4111, ((panda$collections$Key*) $tmp4113), ((panda$core$Object*) $tmp4112));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4113)));
org$pandalanguage$pandac$Type* $tmp4114 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4114));
// unreffing target
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp4115 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4115));
// unreffing result
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4116 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4116));
// unreffing ccCast
*(&local1) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4117 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4117));
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
panda$core$Weak** $tmp4118 = &param0->compiler;
panda$core$Weak* $tmp4119 = *$tmp4118;
panda$core$Object* $tmp4120 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4119);
panda$core$Panda$unref$panda$core$Object$Q($tmp4120);
panda$core$Bit $tmp4121 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp4120), param2);
bool $tmp4122 = $tmp4121.value;
if ($tmp4122) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp4123 = (panda$core$Int64) {1127};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s4124, $tmp4123);
abort(); // unreachable
block1:;
// line 1128
panda$core$String* $tmp4125 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4126 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4126));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4125));
*(&local0) = $tmp4125;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4125));
// line 1129
org$pandalanguage$pandac$Type** $tmp4127 = &param2->type;
org$pandalanguage$pandac$Type* $tmp4128 = *$tmp4127;
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp4129 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4129));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4128));
*(&local1) = $tmp4128;
// line 1130
panda$io$IndentedOutputStream** $tmp4130 = &param0->out;
panda$io$IndentedOutputStream* $tmp4131 = *$tmp4130;
org$pandalanguage$pandac$Type* $tmp4132 = *(&local1);
panda$core$String* $tmp4133 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4132);
panda$core$String* $tmp4134 = panda$core$String$convert$R$panda$core$String($tmp4133);
panda$core$String* $tmp4135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4134, &$s4136);
panda$core$String* $tmp4137 = *(&local0);
panda$core$String* $tmp4138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4135, $tmp4137);
panda$core$String* $tmp4139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4138, &$s4140);
org$pandalanguage$pandac$Type* $tmp4141 = *(&local1);
panda$core$String* $tmp4142 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4141);
panda$core$String* $tmp4143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4139, $tmp4142);
panda$core$String* $tmp4144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4143, &$s4145);
$fn4147 $tmp4146 = ($fn4147) ((panda$io$OutputStream*) $tmp4131)->$class->vtable[17];
$tmp4146(((panda$io$OutputStream*) $tmp4131), $tmp4144);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4133));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4134));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4135));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4138));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4139));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4142));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4143));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4144));
// line 1131
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4148 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4148));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4149));
*(&local2) = &$s4150;
// line 1132
ITable* $tmp4151 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp4151->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp4151 = $tmp4151->next;
}
$fn4153 $tmp4152 = $tmp4151->methods[0];
panda$collections$Iterator* $tmp4154 = $tmp4152(((panda$collections$Iterable*) param3));
goto block3;
block3:;
ITable* $tmp4155 = $tmp4154->$class->itable;
while ($tmp4155->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp4155 = $tmp4155->next;
}
$fn4157 $tmp4156 = $tmp4155->methods[0];
panda$core$Bit $tmp4158 = $tmp4156($tmp4154);
bool $tmp4159 = $tmp4158.value;
if ($tmp4159) goto block5; else goto block4;
block4:;
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
ITable* $tmp4160 = $tmp4154->$class->itable;
while ($tmp4160->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp4160 = $tmp4160->next;
}
$fn4162 $tmp4161 = $tmp4160->methods[1];
panda$core$Object* $tmp4163 = $tmp4161($tmp4154);
panda$core$Panda$unref$panda$core$Object$Q($tmp4163);
org$pandalanguage$pandac$IR$Value* $tmp4164 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4164));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) $tmp4163)));
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) $tmp4163);
// line 1133
panda$io$IndentedOutputStream** $tmp4165 = &param0->out;
panda$io$IndentedOutputStream* $tmp4166 = *$tmp4165;
panda$core$String* $tmp4167 = *(&local2);
panda$core$String* $tmp4168 = panda$core$String$convert$R$panda$core$String($tmp4167);
panda$core$String* $tmp4169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4168, &$s4170);
org$pandalanguage$pandac$IR$Value* $tmp4171 = *(&local3);
panda$core$String* $tmp4172 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, $tmp4171);
panda$core$String* $tmp4173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4169, $tmp4172);
panda$core$String* $tmp4174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4173, &$s4175);
$fn4177 $tmp4176 = ($fn4177) ((panda$io$OutputStream*) $tmp4166)->$class->vtable[17];
$tmp4176(((panda$io$OutputStream*) $tmp4166), $tmp4174);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4168));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4169));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4172));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4173));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4174));
// line 1134
panda$core$String* $tmp4178 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4178));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4179));
*(&local2) = &$s4180;
org$pandalanguage$pandac$IR$Value* $tmp4181 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4181));
// unreffing v
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4154));
// line 1136
panda$io$IndentedOutputStream** $tmp4182 = &param0->out;
panda$io$IndentedOutputStream* $tmp4183 = *$tmp4182;
$fn4185 $tmp4184 = ($fn4185) ((panda$io$OutputStream*) $tmp4183)->$class->vtable[19];
$tmp4184(((panda$io$OutputStream*) $tmp4183), &$s4186);
// line 1137
panda$collections$HashMap** $tmp4187 = &param0->refs;
panda$collections$HashMap* $tmp4188 = *$tmp4187;
panda$core$String* $tmp4189 = *(&local0);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4190;
$tmp4190 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4190->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4188, ((panda$collections$Key*) $tmp4190), ((panda$core$Object*) $tmp4189));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4190)));
panda$core$String* $tmp4191 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4191));
// unreffing separator
*(&local2) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$Type* $tmp4192 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4192));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp4193 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4193));
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
$fn4195 $tmp4194 = ($fn4195) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4196 = $tmp4194(param2);
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp4197 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4197));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4196));
*(&local0) = $tmp4196;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4196));
// line 1142
org$pandalanguage$pandac$Type* $tmp4198 = *(&local0);
panda$core$Bit $tmp4199 = org$pandalanguage$pandac$Type$get_isPointer$R$panda$core$Bit($tmp4198);
bool $tmp4200 = $tmp4199.value;
if ($tmp4200) goto block1; else goto block2;
block1:;
// line 1143
org$pandalanguage$pandac$Type* $tmp4201 = *(&local0);
panda$collections$ImmutableArray** $tmp4202 = &$tmp4201->subtypes;
panda$collections$ImmutableArray* $tmp4203 = *$tmp4202;
panda$core$Int64 $tmp4204 = (panda$core$Int64) {1};
panda$core$Object* $tmp4205 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp4203, $tmp4204);
org$pandalanguage$pandac$Type* $tmp4206 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4206));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp4205)));
*(&local0) = ((org$pandalanguage$pandac$Type*) $tmp4205);
panda$core$Panda$unref$panda$core$Object$Q($tmp4205);
goto block2;
block2:;
// line 1145
org$pandalanguage$pandac$Type* $tmp4207 = *(&local0);
org$pandalanguage$pandac$Type* $tmp4208 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp4207);
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp4209 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4209));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4208));
*(&local1) = $tmp4208;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4208));
// line 1146
org$pandalanguage$pandac$Type* $tmp4210 = *(&local1);
org$pandalanguage$pandac$Type* $tmp4211 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp4212 = ((panda$core$Equatable*) $tmp4210)->$class->itable;
while ($tmp4212->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4212 = $tmp4212->next;
}
$fn4214 $tmp4213 = $tmp4212->methods[1];
panda$core$Bit $tmp4215 = $tmp4213(((panda$core$Equatable*) $tmp4210), ((panda$core$Equatable*) $tmp4211));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4211));
bool $tmp4216 = $tmp4215.value;
if ($tmp4216) goto block3; else goto block4;
block3:;
// line 1147
panda$core$String* $tmp4217 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4218 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4218));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4217));
*(&local2) = $tmp4217;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4217));
// line 1148
panda$io$IndentedOutputStream** $tmp4219 = &param0->out;
panda$io$IndentedOutputStream* $tmp4220 = *$tmp4219;
org$pandalanguage$pandac$Type* $tmp4221 = *(&local1);
panda$core$String* $tmp4222 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4221);
panda$core$String* $tmp4223 = panda$core$String$convert$R$panda$core$String($tmp4222);
panda$core$String* $tmp4224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4223, &$s4225);
panda$core$String* $tmp4226 = *(&local2);
panda$core$String* $tmp4227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4224, $tmp4226);
panda$core$String* $tmp4228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4227, &$s4229);
$fn4231 $tmp4230 = ($fn4231) ((panda$io$OutputStream*) $tmp4220)->$class->vtable[17];
$tmp4230(((panda$io$OutputStream*) $tmp4220), $tmp4228);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4222));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4223));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4224));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4227));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4228));
// line 1149
panda$collections$HashMap** $tmp4232 = &param0->refs;
panda$collections$HashMap* $tmp4233 = *$tmp4232;
panda$core$String* $tmp4234 = *(&local2);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4235;
$tmp4235 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4235->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4233, ((panda$collections$Key*) $tmp4235), ((panda$core$Object*) $tmp4234));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4235)));
panda$core$String* $tmp4236 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4236));
// unreffing result
*(&local2) = ((panda$core$String*) NULL);
goto block4;
block4:;
// line 1151
panda$io$IndentedOutputStream** $tmp4237 = &param0->out;
panda$io$IndentedOutputStream* $tmp4238 = *$tmp4237;
panda$core$String* $tmp4239 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4240 = panda$core$String$convert$R$panda$core$String($tmp4239);
panda$core$String* $tmp4241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4240, &$s4242);
$fn4244 $tmp4243 = ($fn4244) ((panda$io$OutputStream*) $tmp4238)->$class->vtable[17];
$tmp4243(((panda$io$OutputStream*) $tmp4238), $tmp4241);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4239));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4240));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4241));
// line 1152
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4245 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4245));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4246));
*(&local3) = &$s4247;
// line 1153
ITable* $tmp4248 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp4248->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp4248 = $tmp4248->next;
}
$fn4250 $tmp4249 = $tmp4248->methods[0];
panda$collections$Iterator* $tmp4251 = $tmp4249(((panda$collections$Iterable*) param3));
goto block5;
block5:;
ITable* $tmp4252 = $tmp4251->$class->itable;
while ($tmp4252->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp4252 = $tmp4252->next;
}
$fn4254 $tmp4253 = $tmp4252->methods[0];
panda$core$Bit $tmp4255 = $tmp4253($tmp4251);
bool $tmp4256 = $tmp4255.value;
if ($tmp4256) goto block7; else goto block6;
block6:;
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
ITable* $tmp4257 = $tmp4251->$class->itable;
while ($tmp4257->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp4257 = $tmp4257->next;
}
$fn4259 $tmp4258 = $tmp4257->methods[1];
panda$core$Object* $tmp4260 = $tmp4258($tmp4251);
panda$core$Panda$unref$panda$core$Object$Q($tmp4260);
org$pandalanguage$pandac$IR$Value* $tmp4261 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4261));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) $tmp4260)));
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) $tmp4260);
// line 1154
panda$io$IndentedOutputStream** $tmp4262 = &param0->out;
panda$io$IndentedOutputStream* $tmp4263 = *$tmp4262;
panda$core$String* $tmp4264 = *(&local3);
$fn4266 $tmp4265 = ($fn4266) ((panda$io$OutputStream*) $tmp4263)->$class->vtable[17];
$tmp4265(((panda$io$OutputStream*) $tmp4263), $tmp4264);
// line 1155
panda$io$IndentedOutputStream** $tmp4267 = &param0->out;
panda$io$IndentedOutputStream* $tmp4268 = *$tmp4267;
org$pandalanguage$pandac$IR$Value* $tmp4269 = *(&local4);
panda$core$String* $tmp4270 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, $tmp4269);
$fn4272 $tmp4271 = ($fn4272) ((panda$io$OutputStream*) $tmp4268)->$class->vtable[17];
$tmp4271(((panda$io$OutputStream*) $tmp4268), $tmp4270);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4270));
// line 1156
panda$core$String* $tmp4273 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4273));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4274));
*(&local3) = &$s4275;
org$pandalanguage$pandac$IR$Value* $tmp4276 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4276));
// unreffing a
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block5;
block7:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4251));
// line 1158
panda$io$IndentedOutputStream** $tmp4277 = &param0->out;
panda$io$IndentedOutputStream* $tmp4278 = *$tmp4277;
$fn4280 $tmp4279 = ($fn4280) ((panda$io$OutputStream*) $tmp4278)->$class->vtable[19];
$tmp4279(((panda$io$OutputStream*) $tmp4278), &$s4281);
panda$core$String* $tmp4282 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4282));
// unreffing separator
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$Type* $tmp4283 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4283));
// unreffing returnType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp4284 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4284));
// unreffing type
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeExtractField$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$FieldDecl* param3) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
// line 1162
panda$core$Weak** $tmp4285 = &param0->compiler;
panda$core$Weak* $tmp4286 = *$tmp4285;
panda$core$Object* $tmp4287 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4286);
panda$core$Panda$unref$panda$core$Object$Q($tmp4287);
panda$core$Bit $tmp4288 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp4287), param3);
// line 1163
panda$core$String* $tmp4289 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4290 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4290));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4289));
*(&local0) = $tmp4289;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4289));
// line 1164
panda$core$String* $tmp4291 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4292 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4292));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4291));
*(&local1) = $tmp4291;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4291));
// line 1165
panda$io$IndentedOutputStream** $tmp4293 = &param0->out;
panda$io$IndentedOutputStream* $tmp4294 = *$tmp4293;
org$pandalanguage$pandac$Type** $tmp4295 = &param3->type;
org$pandalanguage$pandac$Type* $tmp4296 = *$tmp4295;
panda$core$String* $tmp4297 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4296);
panda$core$String* $tmp4298 = panda$core$String$convert$R$panda$core$String($tmp4297);
panda$core$String* $tmp4299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4298, &$s4300);
panda$core$String* $tmp4301 = *(&local1);
panda$core$String* $tmp4302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4299, $tmp4301);
panda$core$String* $tmp4303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4302, &$s4304);
panda$core$String* $tmp4305 = *(&local0);
panda$core$String* $tmp4306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4303, $tmp4305);
panda$core$String* $tmp4307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4306, &$s4308);
panda$core$String** $tmp4309 = &((org$pandalanguage$pandac$Symbol*) param3)->name;
panda$core$String* $tmp4310 = *$tmp4309;
panda$core$String* $tmp4311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4307, $tmp4310);
panda$core$String* $tmp4312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4311, &$s4313);
$fn4315 $tmp4314 = ($fn4315) ((panda$io$OutputStream*) $tmp4294)->$class->vtable[19];
$tmp4314(((panda$io$OutputStream*) $tmp4294), $tmp4312);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4297));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4298));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4299));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4302));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4303));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4306));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4307));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4311));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4312));
// line 1166
panda$collections$HashMap** $tmp4316 = &param0->refs;
panda$collections$HashMap* $tmp4317 = *$tmp4316;
panda$core$String* $tmp4318 = *(&local1);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4319;
$tmp4319 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4319->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4317, ((panda$collections$Key*) $tmp4319), ((panda$core$Object*) $tmp4318));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4319)));
panda$core$String* $tmp4320 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4320));
// unreffing result
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4321 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4321));
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
panda$core$Weak** $tmp4322 = &param3->owner;
panda$core$Weak* $tmp4323 = *$tmp4322;
panda$core$Object* $tmp4324 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4323);
panda$core$Panda$unref$panda$core$Object$Q($tmp4324);
panda$collections$Array** $tmp4325 = &((org$pandalanguage$pandac$ClassDecl*) $tmp4324)->fields;
panda$collections$Array* $tmp4326 = *$tmp4325;
panda$core$Int64 $tmp4327 = (panda$core$Int64) {1};
panda$core$Object* $tmp4328 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4326, $tmp4327);
*(&local0) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp4329 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4329));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp4328)));
*(&local0) = ((org$pandalanguage$pandac$FieldDecl*) $tmp4328);
panda$core$Panda$unref$panda$core$Object$Q($tmp4328);
// line 1172
org$pandalanguage$pandac$FieldDecl* $tmp4330 = *(&local0);
panda$core$String** $tmp4331 = &((org$pandalanguage$pandac$Symbol*) $tmp4330)->name;
panda$core$String* $tmp4332 = *$tmp4331;
panda$core$Bit $tmp4333 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp4332, &$s4334);
bool $tmp4335 = $tmp4333.value;
if ($tmp4335) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp4336 = (panda$core$Int64) {1172};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s4337, $tmp4336);
abort(); // unreachable
block1:;
// line 1173
panda$core$String* $tmp4338 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4339 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4339));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4338));
*(&local1) = $tmp4338;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4338));
// line 1174
panda$core$Weak** $tmp4340 = &param0->compiler;
panda$core$Weak* $tmp4341 = *$tmp4340;
panda$core$Object* $tmp4342 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4341);
panda$core$Panda$unref$panda$core$Object$Q($tmp4342);
org$pandalanguage$pandac$FieldDecl* $tmp4343 = *(&local0);
panda$core$Int64 $tmp4344 = org$pandalanguage$pandac$Compiler$getIndex$org$pandalanguage$pandac$FieldDecl$R$panda$core$Int64(((org$pandalanguage$pandac$Compiler*) $tmp4342), $tmp4343);
*(&local2) = $tmp4344;
// line 1175
panda$core$String* $tmp4345 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4346 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4346));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4345));
*(&local3) = $tmp4345;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4345));
// line 1176
panda$collections$Array** $tmp4347 = &param3->fields;
panda$collections$Array* $tmp4348 = *$tmp4347;
panda$core$Object* $tmp4349 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4348, param4);
panda$core$String* $tmp4350 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp4349));
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp4351 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4351));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4350));
*(&local4) = $tmp4350;
panda$core$Panda$unref$panda$core$Object$Q($tmp4349);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4350));
// line 1177
panda$io$IndentedOutputStream** $tmp4352 = &param0->out;
panda$io$IndentedOutputStream* $tmp4353 = *$tmp4352;
panda$core$String* $tmp4354 = *(&local4);
panda$core$String* $tmp4355 = panda$core$String$convert$R$panda$core$String($tmp4354);
panda$core$String* $tmp4356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4355, &$s4357);
panda$core$String* $tmp4358 = *(&local3);
panda$core$String* $tmp4359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4356, $tmp4358);
panda$core$String* $tmp4360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4359, &$s4361);
panda$core$String* $tmp4362 = *(&local4);
panda$core$String* $tmp4363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4360, $tmp4362);
panda$core$String* $tmp4364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4363, &$s4365);
panda$core$String* $tmp4366 = *(&local1);
panda$core$String* $tmp4367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4364, $tmp4366);
panda$core$String* $tmp4368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4367, &$s4369);
panda$core$Int64 $tmp4370 = org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldOffset$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64$R$panda$core$Int64(param0, param3, param4);
panda$core$Int64$wrapper* $tmp4371;
$tmp4371 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp4371->value = $tmp4370;
panda$core$String* $tmp4372 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4373, ((panda$core$Object*) $tmp4371));
panda$core$String* $tmp4374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4372, &$s4375);
panda$core$String* $tmp4376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4368, $tmp4374);
$fn4378 $tmp4377 = ($fn4378) ((panda$io$OutputStream*) $tmp4353)->$class->vtable[19];
$tmp4377(((panda$io$OutputStream*) $tmp4353), $tmp4376);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4355));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4356));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4359));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4360));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4363));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4364));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4367));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4368));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4371));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4372));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4374));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4376));
// line 1179
panda$collections$HashMap** $tmp4379 = &param0->refs;
panda$collections$HashMap* $tmp4380 = *$tmp4379;
panda$core$String* $tmp4381 = *(&local3);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4382;
$tmp4382 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4382->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4380, ((panda$collections$Key*) $tmp4382), ((panda$core$Object*) $tmp4381));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4382)));
panda$core$String* $tmp4383 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4383));
// unreffing type
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp4384 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4384));
// unreffing result
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4385 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4385));
// unreffing targetRef
*(&local1) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp4386 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4386));
// unreffing data
*(&local0) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeGetFieldPointer$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$FieldDecl* param3) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
// line 1183
panda$core$String* $tmp4387 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4388 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4388));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4387));
*(&local0) = $tmp4387;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4387));
// line 1184
panda$core$String* $tmp4389 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4390 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4390));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4389));
*(&local1) = $tmp4389;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4389));
// line 1185
panda$io$IndentedOutputStream** $tmp4391 = &param0->out;
panda$io$IndentedOutputStream* $tmp4392 = *$tmp4391;
org$pandalanguage$pandac$Type** $tmp4393 = &param3->type;
org$pandalanguage$pandac$Type* $tmp4394 = *$tmp4393;
panda$core$String* $tmp4395 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4394);
panda$core$String* $tmp4396 = panda$core$String$convert$R$panda$core$String($tmp4395);
panda$core$String* $tmp4397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4396, &$s4398);
panda$core$String* $tmp4399 = *(&local1);
panda$core$String* $tmp4400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4397, $tmp4399);
panda$core$String* $tmp4401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4400, &$s4402);
panda$core$String* $tmp4403 = *(&local0);
panda$core$String* $tmp4404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4401, $tmp4403);
panda$core$String* $tmp4405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4404, &$s4406);
panda$core$String** $tmp4407 = &((org$pandalanguage$pandac$Symbol*) param3)->name;
panda$core$String* $tmp4408 = *$tmp4407;
panda$core$String* $tmp4409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4405, $tmp4408);
panda$core$String* $tmp4410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4409, &$s4411);
$fn4413 $tmp4412 = ($fn4413) ((panda$io$OutputStream*) $tmp4392)->$class->vtable[19];
$tmp4412(((panda$io$OutputStream*) $tmp4392), $tmp4410);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4395));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4396));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4397));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4400));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4401));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4404));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4405));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4409));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4410));
// line 1186
panda$collections$HashMap** $tmp4414 = &param0->refs;
panda$collections$HashMap* $tmp4415 = *$tmp4414;
panda$core$String* $tmp4416 = *(&local1);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4417;
$tmp4417 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4417->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4415, ((panda$collections$Key*) $tmp4417), ((panda$core$Object*) $tmp4416));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4417)));
panda$core$String* $tmp4418 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4418));
// unreffing result
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4419 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4419));
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
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4420 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, param3);
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4421 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4421));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4420));
*(&local0) = $tmp4420;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4420));
// line 1192
panda$core$String* $tmp4422 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4423 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4423));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4422));
*(&local1) = $tmp4422;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4422));
// line 1193
panda$io$IndentedOutputStream** $tmp4424 = &param0->out;
panda$io$IndentedOutputStream* $tmp4425 = *$tmp4424;
panda$core$String* $tmp4426 = *(&local1);
panda$core$String* $tmp4427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4428, $tmp4426);
panda$core$String* $tmp4429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4427, &$s4430);
panda$core$String* $tmp4431 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4429, $tmp4431);
panda$core$String* $tmp4433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4432, &$s4434);
$fn4436 $tmp4435 = ($fn4436) ((panda$io$OutputStream*) $tmp4425)->$class->vtable[19];
$tmp4435(((panda$io$OutputStream*) $tmp4425), $tmp4433);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4427));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4429));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4431));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4432));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4433));
// line 1194
panda$io$IndentedOutputStream** $tmp4437 = &param0->out;
panda$io$IndentedOutputStream* $tmp4438 = *$tmp4437;
panda$core$String* $tmp4439 = *(&local1);
panda$core$String* $tmp4440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4441, $tmp4439);
panda$core$String* $tmp4442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4440, &$s4443);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4444 = *(&local0);
panda$core$String** $tmp4445 = &$tmp4444->name;
panda$core$String* $tmp4446 = *$tmp4445;
panda$core$String* $tmp4447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4442, $tmp4446);
panda$core$String* $tmp4448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4447, &$s4449);
$fn4451 $tmp4450 = ($fn4451) ((panda$io$OutputStream*) $tmp4438)->$class->vtable[19];
$tmp4450(((panda$io$OutputStream*) $tmp4438), $tmp4448);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4440));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4442));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4447));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4448));
// line 1195
panda$io$IndentedOutputStream** $tmp4452 = &param0->out;
panda$io$IndentedOutputStream* $tmp4453 = *$tmp4452;
panda$core$Int64* $tmp4454 = &$tmp4453->level;
panda$core$Int64 $tmp4455 = *$tmp4454;
panda$core$Int64 $tmp4456 = (panda$core$Int64) {1};
int64_t $tmp4457 = $tmp4455.value;
int64_t $tmp4458 = $tmp4456.value;
int64_t $tmp4459 = $tmp4457 + $tmp4458;
panda$core$Int64 $tmp4460 = (panda$core$Int64) {$tmp4459};
panda$core$Int64* $tmp4461 = &$tmp4453->level;
*$tmp4461 = $tmp4460;
// line 1196
panda$io$IndentedOutputStream** $tmp4462 = &param0->out;
panda$io$IndentedOutputStream* $tmp4463 = *$tmp4462;
panda$core$String* $tmp4464 = *(&local1);
panda$core$String* $tmp4465 = panda$core$String$convert$R$panda$core$String($tmp4464);
panda$core$String* $tmp4466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4465, &$s4467);
panda$core$String* $tmp4468 = *(&local1);
panda$core$String* $tmp4469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4466, $tmp4468);
panda$core$String* $tmp4470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4469, &$s4471);
$fn4473 $tmp4472 = ($fn4473) ((panda$io$OutputStream*) $tmp4463)->$class->vtable[19];
$tmp4472(((panda$io$OutputStream*) $tmp4463), $tmp4470);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4465));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4466));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4469));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4470));
// line 1197
panda$io$IndentedOutputStream** $tmp4474 = &param0->out;
panda$io$IndentedOutputStream* $tmp4475 = *$tmp4474;
panda$core$Int64* $tmp4476 = &$tmp4475->level;
panda$core$Int64 $tmp4477 = *$tmp4476;
panda$core$Int64 $tmp4478 = (panda$core$Int64) {1};
int64_t $tmp4479 = $tmp4477.value;
int64_t $tmp4480 = $tmp4478.value;
int64_t $tmp4481 = $tmp4479 - $tmp4480;
panda$core$Int64 $tmp4482 = (panda$core$Int64) {$tmp4481};
panda$core$Int64* $tmp4483 = &$tmp4475->level;
*$tmp4483 = $tmp4482;
// line 1198
panda$io$IndentedOutputStream** $tmp4484 = &param0->out;
panda$io$IndentedOutputStream* $tmp4485 = *$tmp4484;
$fn4487 $tmp4486 = ($fn4487) ((panda$io$OutputStream*) $tmp4485)->$class->vtable[19];
$tmp4486(((panda$io$OutputStream*) $tmp4485), &$s4488);
// line 1199
panda$core$String* $tmp4489 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4490 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4490));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4489));
*(&local2) = $tmp4489;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4489));
// line 1200
panda$core$String* $tmp4491 = org$pandalanguage$pandac$CCodeGenerator$cMethodType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$Q$R$panda$core$String(param0, param5, ((org$pandalanguage$pandac$Type*) NULL));
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4492 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4492));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4491));
*(&local3) = $tmp4491;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4491));
// line 1201
panda$io$IndentedOutputStream** $tmp4493 = &param0->out;
panda$io$IndentedOutputStream* $tmp4494 = *$tmp4493;
panda$core$String* $tmp4495 = *(&local3);
panda$core$String* $tmp4496 = panda$core$String$convert$R$panda$core$String($tmp4495);
panda$core$String* $tmp4497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4496, &$s4498);
panda$core$String* $tmp4499 = *(&local2);
panda$core$String* $tmp4500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4497, $tmp4499);
panda$core$String* $tmp4501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4500, &$s4502);
panda$core$String* $tmp4503 = *(&local1);
panda$core$String* $tmp4504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4501, $tmp4503);
panda$core$String* $tmp4505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4504, &$s4506);
panda$core$Int64$wrapper* $tmp4507;
$tmp4507 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp4507->value = param4;
panda$core$String* $tmp4508 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4505, ((panda$core$Object*) $tmp4507));
panda$core$String* $tmp4509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4508, &$s4510);
$fn4512 $tmp4511 = ($fn4512) ((panda$io$OutputStream*) $tmp4494)->$class->vtable[19];
$tmp4511(((panda$io$OutputStream*) $tmp4494), $tmp4509);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4496));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4497));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4500));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4501));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4504));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4505));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4507));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4508));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4509));
// line 1202
panda$collections$HashMap** $tmp4513 = &param0->refs;
panda$collections$HashMap* $tmp4514 = *$tmp4513;
panda$core$String* $tmp4515 = *(&local2);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4516;
$tmp4516 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4516->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4514, ((panda$collections$Key*) $tmp4516), ((panda$core$Object*) $tmp4515));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4516)));
panda$core$String* $tmp4517 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4517));
// unreffing methodType
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4518 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4518));
// unreffing result
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4519 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4519));
// unreffing itable
*(&local1) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4520 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4520));
// unreffing cc
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeGetVirtualMethod$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, panda$core$Int64 param3, org$pandalanguage$pandac$Type* param4) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
// line 1206
panda$core$String* $tmp4521 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4522 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4522));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4521));
*(&local0) = $tmp4521;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4521));
// line 1207
panda$core$String* $tmp4523 = org$pandalanguage$pandac$CCodeGenerator$cMethodType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$Q$R$panda$core$String(param0, param4, ((org$pandalanguage$pandac$Type*) NULL));
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4524 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4524));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4523));
*(&local1) = $tmp4523;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4523));
// line 1208
panda$io$IndentedOutputStream** $tmp4525 = &param0->out;
panda$io$IndentedOutputStream* $tmp4526 = *$tmp4525;
panda$core$String* $tmp4527 = *(&local1);
panda$core$String* $tmp4528 = panda$core$String$convert$R$panda$core$String($tmp4527);
panda$core$String* $tmp4529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4528, &$s4530);
panda$core$String* $tmp4531 = *(&local0);
panda$core$String* $tmp4532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4529, $tmp4531);
panda$core$String* $tmp4533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4532, &$s4534);
panda$core$String* $tmp4535 = *(&local1);
panda$core$String* $tmp4536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4533, $tmp4535);
panda$core$String* $tmp4537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4536, &$s4538);
panda$core$String* $tmp4539 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4540 = panda$core$String$convert$R$panda$core$String($tmp4539);
panda$core$String* $tmp4541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4540, &$s4542);
panda$core$Int64$wrapper* $tmp4543;
$tmp4543 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp4543->value = param3;
panda$core$String* $tmp4544 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4541, ((panda$core$Object*) $tmp4543));
panda$core$String* $tmp4545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4544, &$s4546);
panda$core$String* $tmp4547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4537, $tmp4545);
$fn4549 $tmp4548 = ($fn4549) ((panda$io$OutputStream*) $tmp4526)->$class->vtable[19];
$tmp4548(((panda$io$OutputStream*) $tmp4526), $tmp4547);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4528));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4529));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4532));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4533));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4536));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4537));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4539));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4540));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4541));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4543));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4544));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4545));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4547));
// line 1210
panda$collections$HashMap** $tmp4550 = &param0->refs;
panda$collections$HashMap* $tmp4551 = *$tmp4550;
panda$core$String* $tmp4552 = *(&local0);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4553;
$tmp4553 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4553->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4551, ((panda$collections$Key*) $tmp4553), ((panda$core$Object*) $tmp4552));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4553)));
panda$core$String* $tmp4554 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4554));
// unreffing methodType
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4555 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4555));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeLoad$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2) {

panda$core$String* local0 = NULL;
// line 1214
panda$core$String* $tmp4556 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4557 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4557));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4556));
*(&local0) = $tmp4556;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4556));
// line 1215
panda$io$IndentedOutputStream** $tmp4558 = &param0->out;
panda$io$IndentedOutputStream* $tmp4559 = *$tmp4558;
$fn4561 $tmp4560 = ($fn4561) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4562 = $tmp4560(param2);
panda$core$String* $tmp4563 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4562);
panda$core$String* $tmp4564 = panda$core$String$convert$R$panda$core$String($tmp4563);
panda$core$String* $tmp4565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4564, &$s4566);
panda$core$String* $tmp4567 = *(&local0);
panda$core$String* $tmp4568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4565, $tmp4567);
panda$core$String* $tmp4569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4568, &$s4570);
panda$core$String* $tmp4571 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4569, $tmp4571);
panda$core$String* $tmp4573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4572, &$s4574);
$fn4576 $tmp4575 = ($fn4576) ((panda$io$OutputStream*) $tmp4559)->$class->vtable[19];
$tmp4575(((panda$io$OutputStream*) $tmp4559), $tmp4573);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4562));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4563));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4564));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4565));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4568));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4569));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4571));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4572));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4573));
// line 1216
panda$collections$HashMap** $tmp4577 = &param0->refs;
panda$collections$HashMap* $tmp4578 = *$tmp4577;
panda$core$String* $tmp4579 = *(&local0);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4580;
$tmp4580 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4580->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4578, ((panda$collections$Key*) $tmp4580), ((panda$core$Object*) $tmp4579));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4580)));
panda$core$String* $tmp4581 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4581));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeNegate$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2) {

panda$core$String* local0 = NULL;
// line 1220
panda$core$String* $tmp4582 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4583 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4583));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4582));
*(&local0) = $tmp4582;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4582));
// line 1221
panda$io$IndentedOutputStream** $tmp4584 = &param0->out;
panda$io$IndentedOutputStream* $tmp4585 = *$tmp4584;
$fn4587 $tmp4586 = ($fn4587) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4588 = $tmp4586(param2);
panda$core$String* $tmp4589 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4588);
panda$core$String* $tmp4590 = panda$core$String$convert$R$panda$core$String($tmp4589);
panda$core$String* $tmp4591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4590, &$s4592);
panda$core$String* $tmp4593 = *(&local0);
panda$core$String* $tmp4594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4591, $tmp4593);
panda$core$String* $tmp4595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4594, &$s4596);
panda$core$String* $tmp4597 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4595, $tmp4597);
panda$core$String* $tmp4599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4598, &$s4600);
$fn4602 $tmp4601 = ($fn4602) ((panda$io$OutputStream*) $tmp4585)->$class->vtable[19];
$tmp4601(((panda$io$OutputStream*) $tmp4585), $tmp4599);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4588));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4589));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4590));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4591));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4594));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4595));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4597));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4598));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4599));
// line 1222
panda$collections$HashMap** $tmp4603 = &param0->refs;
panda$collections$HashMap* $tmp4604 = *$tmp4603;
panda$core$String* $tmp4605 = *(&local0);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4606;
$tmp4606 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4606->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4604, ((panda$collections$Key*) $tmp4606), ((panda$core$Object*) $tmp4605));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4606)));
panda$core$String* $tmp4607 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4607));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeNot$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2) {

panda$core$String* local0 = NULL;
// line 1226
panda$core$String* $tmp4608 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4609 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4609));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4608));
*(&local0) = $tmp4608;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4608));
// line 1227
panda$io$IndentedOutputStream** $tmp4610 = &param0->out;
panda$io$IndentedOutputStream* $tmp4611 = *$tmp4610;
$fn4613 $tmp4612 = ($fn4613) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4614 = $tmp4612(param2);
panda$core$String* $tmp4615 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4614);
panda$core$String* $tmp4616 = panda$core$String$convert$R$panda$core$String($tmp4615);
panda$core$String* $tmp4617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4616, &$s4618);
panda$core$String* $tmp4619 = *(&local0);
panda$core$String* $tmp4620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4617, $tmp4619);
panda$core$String* $tmp4621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4620, &$s4622);
panda$core$String* $tmp4623 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4621, $tmp4623);
panda$core$String* $tmp4625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4624, &$s4626);
$fn4628 $tmp4627 = ($fn4628) ((panda$io$OutputStream*) $tmp4611)->$class->vtable[19];
$tmp4627(((panda$io$OutputStream*) $tmp4611), $tmp4625);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4614));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4615));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4616));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4617));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4620));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4621));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4623));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4624));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4625));
// line 1228
panda$collections$HashMap** $tmp4629 = &param0->refs;
panda$collections$HashMap* $tmp4630 = *$tmp4629;
panda$core$String* $tmp4631 = *(&local0);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4632;
$tmp4632 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4632->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4630, ((panda$collections$Key*) $tmp4632), ((panda$core$Object*) $tmp4631));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4632)));
panda$core$String* $tmp4633 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4633));
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
panda$core$String* $tmp4634 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4635 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4635));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4634));
*(&local0) = $tmp4634;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4634));
// line 1233
panda$core$Int64 $tmp4636 = org$pandalanguage$pandac$CCodeGenerator$stride$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param3);
*(&local1) = $tmp4636;
// line 1234
panda$core$String* $tmp4637 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4638 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4638));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4637));
*(&local2) = $tmp4637;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4637));
// line 1235
panda$core$String* $tmp4639 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4640 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4640));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4639));
*(&local3) = $tmp4639;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4639));
// line 1236
panda$io$IndentedOutputStream** $tmp4641 = &param0->out;
panda$io$IndentedOutputStream* $tmp4642 = *$tmp4641;
panda$core$String* $tmp4643 = *(&local2);
panda$core$String* $tmp4644 = panda$core$String$convert$R$panda$core$String($tmp4643);
panda$core$String* $tmp4645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4644, &$s4646);
panda$core$String* $tmp4647 = *(&local3);
panda$core$String* $tmp4648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4645, $tmp4647);
panda$core$String* $tmp4649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4648, &$s4650);
panda$core$String* $tmp4651 = *(&local2);
panda$core$String* $tmp4652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4649, $tmp4651);
panda$core$String* $tmp4653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4652, &$s4654);
panda$core$String* $tmp4655 = *(&local0);
panda$core$String* $tmp4656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4653, $tmp4655);
panda$core$String* $tmp4657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4656, &$s4658);
panda$core$Int64 $tmp4659 = *(&local1);
panda$core$String* $tmp4660 = panda$core$Int64$convert$R$panda$core$String($tmp4659);
panda$core$String* $tmp4661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4660, &$s4662);
panda$core$String* $tmp4663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4657, $tmp4661);
$fn4665 $tmp4664 = ($fn4665) ((panda$io$OutputStream*) $tmp4642)->$class->vtable[19];
$tmp4664(((panda$io$OutputStream*) $tmp4642), $tmp4663);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4644));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4645));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4648));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4649));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4652));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4653));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4656));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4657));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4660));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4661));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4663));
// line 1238
panda$collections$HashMap** $tmp4666 = &param0->refs;
panda$collections$HashMap* $tmp4667 = *$tmp4666;
panda$core$String* $tmp4668 = *(&local3);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4669;
$tmp4669 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4669->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4667, ((panda$collections$Key*) $tmp4669), ((panda$core$Object*) $tmp4668));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4669)));
panda$core$String* $tmp4670 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4670));
// unreffing result
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4671 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4671));
// unreffing type
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4672 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4672));
// unreffing countRef
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writePointerDestroy$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1) {

panda$core$String* local0 = NULL;
// line 1242
panda$core$String* $tmp4673 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param1);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4674 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4674));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4673));
*(&local0) = $tmp4673;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4673));
// line 1243
panda$io$IndentedOutputStream** $tmp4675 = &param0->out;
panda$io$IndentedOutputStream* $tmp4676 = *$tmp4675;
panda$core$String* $tmp4677 = *(&local0);
panda$core$String* $tmp4678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4679, $tmp4677);
panda$core$String* $tmp4680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4678, &$s4681);
$fn4683 $tmp4682 = ($fn4683) ((panda$io$OutputStream*) $tmp4676)->$class->vtable[19];
$tmp4682(((panda$io$OutputStream*) $tmp4676), $tmp4680);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4678));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4680));
panda$core$String* $tmp4684 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4684));
// unreffing ptrRef
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writePointerGetIndex$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$IR$Value* param3) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
// line 1247
panda$core$String* $tmp4685 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4686 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4686));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4685));
*(&local0) = $tmp4685;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4685));
// line 1248
panda$core$String* $tmp4687 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param3);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4688 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4688));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4687));
*(&local1) = $tmp4687;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4687));
// line 1249
panda$core$String* $tmp4689 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4690 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4690));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4689));
*(&local2) = $tmp4689;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4689));
// line 1250
panda$io$IndentedOutputStream** $tmp4691 = &param0->out;
panda$io$IndentedOutputStream* $tmp4692 = *$tmp4691;
$fn4694 $tmp4693 = ($fn4694) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4695 = $tmp4693(param2);
panda$collections$ImmutableArray** $tmp4696 = &$tmp4695->subtypes;
panda$collections$ImmutableArray* $tmp4697 = *$tmp4696;
panda$core$Int64 $tmp4698 = (panda$core$Int64) {1};
panda$core$Object* $tmp4699 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp4697, $tmp4698);
panda$core$String* $tmp4700 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp4699));
panda$core$String* $tmp4701 = panda$core$String$convert$R$panda$core$String($tmp4700);
panda$core$String* $tmp4702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4701, &$s4703);
panda$core$String* $tmp4704 = *(&local2);
panda$core$String* $tmp4705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4702, $tmp4704);
panda$core$String* $tmp4706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4705, &$s4707);
panda$core$String* $tmp4708 = *(&local0);
panda$core$String* $tmp4709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4706, $tmp4708);
panda$core$String* $tmp4710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4709, &$s4711);
panda$core$String* $tmp4712 = *(&local1);
panda$core$String* $tmp4713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4710, $tmp4712);
panda$core$String* $tmp4714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4713, &$s4715);
$fn4717 $tmp4716 = ($fn4717) ((panda$io$OutputStream*) $tmp4692)->$class->vtable[19];
$tmp4716(((panda$io$OutputStream*) $tmp4692), $tmp4714);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4695));
panda$core$Panda$unref$panda$core$Object$Q($tmp4699);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4700));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4701));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4702));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4705));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4706));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4709));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4710));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4713));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4714));
// line 1251
panda$collections$HashMap** $tmp4718 = &param0->refs;
panda$collections$HashMap* $tmp4719 = *$tmp4718;
panda$core$String* $tmp4720 = *(&local2);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4721;
$tmp4721 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4721->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4719, ((panda$collections$Key*) $tmp4721), ((panda$core$Object*) $tmp4720));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4721)));
panda$core$String* $tmp4722 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4722));
// unreffing result
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4723 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4723));
// unreffing indexRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4724 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4724));
// unreffing base
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writePointerOffset$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$IR$Value* param3) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
// line 1255
panda$core$String* $tmp4725 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4726 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4726));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4725));
*(&local0) = $tmp4725;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4725));
// line 1256
panda$core$String* $tmp4727 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param3);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4728 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4728));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4727));
*(&local1) = $tmp4727;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4727));
// line 1257
panda$core$String* $tmp4729 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4730 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4730));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4729));
*(&local2) = $tmp4729;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4729));
// line 1258
panda$io$IndentedOutputStream** $tmp4731 = &param0->out;
panda$io$IndentedOutputStream* $tmp4732 = *$tmp4731;
$fn4734 $tmp4733 = ($fn4734) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4735 = $tmp4733(param2);
panda$core$String* $tmp4736 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4735);
panda$core$String* $tmp4737 = panda$core$String$convert$R$panda$core$String($tmp4736);
panda$core$String* $tmp4738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4737, &$s4739);
panda$core$String* $tmp4740 = *(&local2);
panda$core$String* $tmp4741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4738, $tmp4740);
panda$core$String* $tmp4742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4741, &$s4743);
panda$core$String* $tmp4744 = *(&local0);
panda$core$String* $tmp4745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4742, $tmp4744);
panda$core$String* $tmp4746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4745, &$s4747);
panda$core$String* $tmp4748 = *(&local1);
panda$core$String* $tmp4749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4746, $tmp4748);
panda$core$String* $tmp4750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4749, &$s4751);
$fn4753 $tmp4752 = ($fn4753) ((panda$io$OutputStream*) $tmp4732)->$class->vtable[19];
$tmp4752(((panda$io$OutputStream*) $tmp4732), $tmp4750);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4735));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4736));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4737));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4738));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4741));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4742));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4745));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4746));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4749));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4750));
// line 1259
panda$collections$HashMap** $tmp4754 = &param0->refs;
panda$collections$HashMap* $tmp4755 = *$tmp4754;
panda$core$String* $tmp4756 = *(&local2);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4757;
$tmp4757 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4757->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4755, ((panda$collections$Key*) $tmp4757), ((panda$core$Object*) $tmp4756));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4757)));
panda$core$String* $tmp4758 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4758));
// unreffing result
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4759 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4759));
// unreffing offsetRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4760 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4760));
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
panda$core$String* $tmp4761 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4762 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4762));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4761));
*(&local0) = $tmp4761;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4761));
// line 1265
panda$core$String* $tmp4763 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param3);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4764 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4764));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4763));
*(&local1) = $tmp4763;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4763));
// line 1266
panda$core$String* $tmp4765 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param4);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4766 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4766));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4765));
*(&local2) = $tmp4765;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4765));
// line 1267
$fn4768 $tmp4767 = ($fn4768) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4769 = $tmp4767(param2);
panda$core$Int64 $tmp4770 = org$pandalanguage$pandac$CCodeGenerator$stride$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, $tmp4769);
*(&local3) = $tmp4770;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4769));
// line 1268
panda$core$Int64 $tmp4771 = *(&local3);
panda$core$Int64 $tmp4772 = (panda$core$Int64) {0};
int64_t $tmp4773 = $tmp4771.value;
int64_t $tmp4774 = $tmp4772.value;
bool $tmp4775 = $tmp4773 > $tmp4774;
panda$core$Bit $tmp4776 = (panda$core$Bit) {$tmp4775};
bool $tmp4777 = $tmp4776.value;
if ($tmp4777) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp4778 = (panda$core$Int64) {1268};
$fn4780 $tmp4779 = ($fn4780) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4781 = $tmp4779(param2);
panda$core$String* $tmp4782 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4783, ((panda$core$Object*) $tmp4781));
panda$core$String* $tmp4784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4782, &$s4785);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4786, $tmp4778, $tmp4784);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4781));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4782));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4784));
abort(); // unreachable
block1:;
// line 1269
panda$core$String* $tmp4787 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp4788 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4788));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4787));
*(&local4) = $tmp4787;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4787));
// line 1270
panda$io$IndentedOutputStream** $tmp4789 = &param0->out;
panda$io$IndentedOutputStream* $tmp4790 = *$tmp4789;
$fn4792 $tmp4791 = ($fn4792) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4793 = $tmp4791(param2);
panda$core$String* $tmp4794 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4793);
panda$core$String* $tmp4795 = panda$core$String$convert$R$panda$core$String($tmp4794);
panda$core$String* $tmp4796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4795, &$s4797);
panda$core$String* $tmp4798 = *(&local4);
panda$core$String* $tmp4799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4796, $tmp4798);
panda$core$String* $tmp4800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4799, &$s4801);
$fn4803 $tmp4802 = ($fn4803) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4804 = $tmp4802(param2);
panda$core$String* $tmp4805 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4804);
panda$core$String* $tmp4806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4800, $tmp4805);
panda$core$String* $tmp4807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4806, &$s4808);
panda$core$String* $tmp4809 = *(&local0);
panda$core$String* $tmp4810 = panda$core$String$convert$R$panda$core$String($tmp4809);
panda$core$String* $tmp4811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4810, &$s4812);
panda$core$String* $tmp4813 = *(&local1);
panda$core$String* $tmp4814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4811, $tmp4813);
panda$core$String* $tmp4815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4814, &$s4816);
panda$core$Int64 $tmp4817 = *(&local3);
panda$core$Int64$wrapper* $tmp4818;
$tmp4818 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp4818->value = $tmp4817;
panda$core$String* $tmp4819 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4815, ((panda$core$Object*) $tmp4818));
panda$core$String* $tmp4820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4819, &$s4821);
panda$core$String* $tmp4822 = *(&local2);
panda$core$String* $tmp4823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4820, $tmp4822);
panda$core$String* $tmp4824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4823, &$s4825);
panda$core$Int64 $tmp4826 = *(&local3);
panda$core$Int64$wrapper* $tmp4827;
$tmp4827 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp4827->value = $tmp4826;
panda$core$String* $tmp4828 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4824, ((panda$core$Object*) $tmp4827));
panda$core$String* $tmp4829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4828, &$s4830);
panda$core$String* $tmp4831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4807, $tmp4829);
$fn4833 $tmp4832 = ($fn4833) ((panda$io$OutputStream*) $tmp4790)->$class->vtable[19];
$tmp4832(((panda$io$OutputStream*) $tmp4790), $tmp4831);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4793));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4794));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4795));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4796));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4799));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4800));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4804));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4805));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4806));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4807));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4810));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4811));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4814));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4815));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4818));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4819));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4820));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4823));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4824));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4827));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4828));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4829));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4831));
// line 1272
panda$collections$HashMap** $tmp4834 = &param0->refs;
panda$collections$HashMap* $tmp4835 = *$tmp4834;
panda$core$String* $tmp4836 = *(&local4);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4837;
$tmp4837 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4837->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4835, ((panda$collections$Key*) $tmp4837), ((panda$core$Object*) $tmp4836));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4837)));
panda$core$String* $tmp4838 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4838));
// unreffing result
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp4839 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4839));
// unreffing newCountRef
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4840 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4840));
// unreffing oldCountRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4841 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4841));
// unreffing ptrRef
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writePointerSetIndex$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$IR$Value* param3) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
// line 1276
panda$core$String* $tmp4842 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4843 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4843));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4842));
*(&local0) = $tmp4842;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4842));
// line 1277
panda$core$String* $tmp4844 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param3);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4845 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4845));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4844));
*(&local1) = $tmp4844;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4844));
// line 1278
panda$core$String* $tmp4846 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param1);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4847 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4847));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4846));
*(&local2) = $tmp4846;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4846));
// line 1279
panda$io$IndentedOutputStream** $tmp4848 = &param0->out;
panda$io$IndentedOutputStream* $tmp4849 = *$tmp4848;
panda$core$String* $tmp4850 = *(&local0);
panda$core$String* $tmp4851 = panda$core$String$convert$R$panda$core$String($tmp4850);
panda$core$String* $tmp4852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4851, &$s4853);
panda$core$String* $tmp4854 = *(&local1);
panda$core$String* $tmp4855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4852, $tmp4854);
panda$core$String* $tmp4856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4855, &$s4857);
panda$core$String* $tmp4858 = *(&local2);
panda$core$String* $tmp4859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4856, $tmp4858);
panda$core$String* $tmp4860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4859, &$s4861);
$fn4863 $tmp4862 = ($fn4863) ((panda$io$OutputStream*) $tmp4849)->$class->vtable[19];
$tmp4862(((panda$io$OutputStream*) $tmp4849), $tmp4860);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4851));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4852));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4855));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4856));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4859));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4860));
panda$core$String* $tmp4864 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4864));
// unreffing valueRef
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4865 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4865));
// unreffing indexRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4866 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4866));
// unreffing base
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1) {

// line 1283
panda$core$Bit $tmp4867 = panda$core$Bit$init$builtin_bit(param1 != NULL);
bool $tmp4868 = $tmp4867.value;
if ($tmp4868) goto block1; else goto block3;
block1:;
// line 1284
panda$io$IndentedOutputStream** $tmp4869 = &param0->out;
panda$io$IndentedOutputStream* $tmp4870 = *$tmp4869;
panda$core$String* $tmp4871 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param1);
panda$core$String* $tmp4872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4873, $tmp4871);
panda$core$String* $tmp4874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4872, &$s4875);
$fn4877 $tmp4876 = ($fn4877) ((panda$io$OutputStream*) $tmp4870)->$class->vtable[19];
$tmp4876(((panda$io$OutputStream*) $tmp4870), $tmp4874);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4871));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4872));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4874));
goto block2;
block3:;
// line 1
// line 1287
panda$io$IndentedOutputStream** $tmp4878 = &param0->out;
panda$io$IndentedOutputStream* $tmp4879 = *$tmp4878;
$fn4881 $tmp4880 = ($fn4881) ((panda$io$OutputStream*) $tmp4879)->$class->vtable[19];
$tmp4880(((panda$io$OutputStream*) $tmp4879), &$s4882);
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
panda$core$Weak** $tmp4883 = &param2->owner;
panda$core$Weak* $tmp4884 = *$tmp4883;
panda$core$Object* $tmp4885 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4884);
panda$core$Panda$unref$panda$core$Object$Q($tmp4885);
panda$core$Bit* $tmp4886 = &((org$pandalanguage$pandac$ClassDecl*) $tmp4885)->external;
panda$core$Bit $tmp4887 = *$tmp4886;
bool $tmp4888 = $tmp4887.value;
if ($tmp4888) goto block1; else goto block2;
block1:;
// line 1293
org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(param0, param2);
goto block2;
block2:;
// line 1295
panda$core$Bit $tmp4889 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(param0, param2);
*(&local0) = $tmp4889;
// line 1296
org$pandalanguage$pandac$Type** $tmp4890 = &param2->returnType;
org$pandalanguage$pandac$Type* $tmp4891 = *$tmp4890;
panda$core$String* $tmp4892 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4891);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4893 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4893));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4892));
*(&local1) = $tmp4892;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4892));
// line 1297
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4894 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4894));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4895));
*(&local2) = &$s4896;
// line 1298
*(&local3) = ((panda$core$String*) NULL);
// line 1299
org$pandalanguage$pandac$Type** $tmp4897 = &param2->returnType;
org$pandalanguage$pandac$Type* $tmp4898 = *$tmp4897;
org$pandalanguage$pandac$Type* $tmp4899 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp4900 = ((panda$core$Equatable*) $tmp4898)->$class->itable;
while ($tmp4900->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4900 = $tmp4900->next;
}
$fn4902 $tmp4901 = $tmp4900->methods[1];
panda$core$Bit $tmp4903 = $tmp4901(((panda$core$Equatable*) $tmp4898), ((panda$core$Equatable*) $tmp4899));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4899));
bool $tmp4904 = $tmp4903.value;
if ($tmp4904) goto block3; else goto block4;
block3:;
// line 1300
panda$core$String* $tmp4905 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
panda$core$String* $tmp4906 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4906));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4905));
*(&local3) = $tmp4905;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4905));
// line 1301
panda$core$Bit $tmp4907 = *(&local0);
bool $tmp4908 = $tmp4907.value;
if ($tmp4908) goto block5; else goto block7;
block5:;
// line 1302
panda$io$IndentedOutputStream** $tmp4909 = &param0->out;
panda$io$IndentedOutputStream* $tmp4910 = *$tmp4909;
panda$core$String* $tmp4911 = *(&local1);
panda$core$String* $tmp4912 = panda$core$String$convert$R$panda$core$String($tmp4911);
panda$core$String* $tmp4913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4912, &$s4914);
panda$core$String* $tmp4915 = *(&local3);
panda$core$String* $tmp4916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4913, $tmp4915);
panda$core$String* $tmp4917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4916, &$s4918);
$fn4920 $tmp4919 = ($fn4920) ((panda$io$OutputStream*) $tmp4910)->$class->vtable[19];
$tmp4919(((panda$io$OutputStream*) $tmp4910), $tmp4917);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4912));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4913));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4916));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4917));
goto block6;
block7:;
// line 1
// line 1305
panda$io$IndentedOutputStream** $tmp4921 = &param0->out;
panda$io$IndentedOutputStream* $tmp4922 = *$tmp4921;
panda$core$String* $tmp4923 = *(&local1);
panda$core$String* $tmp4924 = panda$core$String$convert$R$panda$core$String($tmp4923);
panda$core$String* $tmp4925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4924, &$s4926);
panda$core$String* $tmp4927 = *(&local3);
panda$core$String* $tmp4928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4925, $tmp4927);
panda$core$String* $tmp4929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4928, &$s4930);
$fn4932 $tmp4931 = ($fn4932) ((panda$io$OutputStream*) $tmp4922)->$class->vtable[17];
$tmp4931(((panda$io$OutputStream*) $tmp4922), $tmp4929);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4924));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4925));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4928));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4929));
goto block6;
block6:;
// line 1307
panda$collections$HashMap** $tmp4933 = &param0->refs;
panda$collections$HashMap* $tmp4934 = *$tmp4933;
panda$core$String* $tmp4935 = *(&local3);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4936;
$tmp4936 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4936->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4934, ((panda$collections$Key*) $tmp4936), ((panda$core$Object*) $tmp4935));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4936)));
goto block4;
block4:;
// line 1309
panda$io$IndentedOutputStream** $tmp4937 = &param0->out;
panda$io$IndentedOutputStream* $tmp4938 = *$tmp4937;
panda$core$String* $tmp4939 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param2);
panda$core$String* $tmp4940 = panda$core$String$convert$R$panda$core$String($tmp4939);
panda$core$String* $tmp4941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4940, &$s4942);
$fn4944 $tmp4943 = ($fn4944) ((panda$io$OutputStream*) $tmp4938)->$class->vtable[17];
$tmp4943(((panda$io$OutputStream*) $tmp4938), $tmp4941);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4939));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4940));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4941));
// line 1310
panda$core$Bit $tmp4945 = *(&local0);
bool $tmp4946 = $tmp4945.value;
if ($tmp4946) goto block8; else goto block9;
block8:;
// line 1311
panda$io$IndentedOutputStream** $tmp4947 = &param0->out;
panda$io$IndentedOutputStream* $tmp4948 = *$tmp4947;
panda$core$String* $tmp4949 = *(&local3);
panda$core$String* $tmp4950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4951, $tmp4949);
panda$core$String* $tmp4952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4950, &$s4953);
$fn4955 $tmp4954 = ($fn4955) ((panda$io$OutputStream*) $tmp4948)->$class->vtable[17];
$tmp4954(((panda$io$OutputStream*) $tmp4948), $tmp4952);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4950));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4952));
// line 1312
panda$core$String* $tmp4956 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4956));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4957));
*(&local2) = &$s4958;
goto block9;
block9:;
// line 1314
ITable* $tmp4959 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp4959->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp4959 = $tmp4959->next;
}
$fn4961 $tmp4960 = $tmp4959->methods[0];
panda$collections$Iterator* $tmp4962 = $tmp4960(((panda$collections$Iterable*) param3));
goto block10;
block10:;
ITable* $tmp4963 = $tmp4962->$class->itable;
while ($tmp4963->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp4963 = $tmp4963->next;
}
$fn4965 $tmp4964 = $tmp4963->methods[0];
panda$core$Bit $tmp4966 = $tmp4964($tmp4962);
bool $tmp4967 = $tmp4966.value;
if ($tmp4967) goto block12; else goto block11;
block11:;
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
ITable* $tmp4968 = $tmp4962->$class->itable;
while ($tmp4968->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp4968 = $tmp4968->next;
}
$fn4970 $tmp4969 = $tmp4968->methods[1];
panda$core$Object* $tmp4971 = $tmp4969($tmp4962);
panda$core$Panda$unref$panda$core$Object$Q($tmp4971);
org$pandalanguage$pandac$IR$Value* $tmp4972 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4972));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) $tmp4971)));
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) $tmp4971);
// line 1315
panda$io$IndentedOutputStream** $tmp4973 = &param0->out;
panda$io$IndentedOutputStream* $tmp4974 = *$tmp4973;
panda$core$String* $tmp4975 = *(&local2);
$fn4977 $tmp4976 = ($fn4977) ((panda$io$OutputStream*) $tmp4974)->$class->vtable[17];
$tmp4976(((panda$io$OutputStream*) $tmp4974), $tmp4975);
// line 1316
panda$io$IndentedOutputStream** $tmp4978 = &param0->out;
panda$io$IndentedOutputStream* $tmp4979 = *$tmp4978;
org$pandalanguage$pandac$IR$Value* $tmp4980 = *(&local4);
panda$core$String* $tmp4981 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, $tmp4980);
$fn4983 $tmp4982 = ($fn4983) ((panda$io$OutputStream*) $tmp4979)->$class->vtable[17];
$tmp4982(((panda$io$OutputStream*) $tmp4979), $tmp4981);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4981));
// line 1317
panda$core$String* $tmp4984 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4984));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4985));
*(&local2) = &$s4986;
org$pandalanguage$pandac$IR$Value* $tmp4987 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4987));
// unreffing a
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block10;
block12:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4962));
// line 1319
panda$io$IndentedOutputStream** $tmp4988 = &param0->out;
panda$io$IndentedOutputStream* $tmp4989 = *$tmp4988;
$fn4991 $tmp4990 = ($fn4991) ((panda$io$OutputStream*) $tmp4989)->$class->vtable[19];
$tmp4990(((panda$io$OutputStream*) $tmp4989), &$s4992);
panda$core$String* $tmp4993 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4993));
// unreffing result
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4994 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4994));
// unreffing separator
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4995 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4995));
// unreffing actualResultType
*(&local1) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeStore$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1, org$pandalanguage$pandac$IR$Value* param2) {

// line 1323
panda$io$IndentedOutputStream** $tmp4996 = &param0->out;
panda$io$IndentedOutputStream* $tmp4997 = *$tmp4996;
panda$core$String* $tmp4998 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5000, $tmp4998);
panda$core$String* $tmp5001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4999, &$s5002);
panda$core$String* $tmp5003 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param1);
panda$core$String* $tmp5004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5001, $tmp5003);
panda$core$String* $tmp5005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5004, &$s5006);
$fn5008 $tmp5007 = ($fn5008) ((panda$io$OutputStream*) $tmp4997)->$class->vtable[19];
$tmp5007(((panda$io$OutputStream*) $tmp4997), $tmp5005);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4998));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4999));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5001));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5003));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5004));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5005));
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
panda$core$Int64* $tmp5009 = &param2->$rawValue;
panda$core$Int64 $tmp5010 = *$tmp5009;
panda$core$Int64 $tmp5011 = (panda$core$Int64) {0};
panda$core$Bit $tmp5012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5011);
bool $tmp5013 = $tmp5012.value;
if ($tmp5013) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp5014 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5015 = *$tmp5014;
*(&local0) = $tmp5015;
org$pandalanguage$pandac$IR$Value** $tmp5016 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5017 = *$tmp5016;
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5018 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5018));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5017));
*(&local1) = $tmp5017;
org$pandalanguage$pandac$parser$Token$Kind* $tmp5019 = (org$pandalanguage$pandac$parser$Token$Kind*) (param2->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp5020 = *$tmp5019;
*(&local2) = $tmp5020;
org$pandalanguage$pandac$IR$Value** $tmp5021 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp5022 = *$tmp5021;
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5023 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5023));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5022));
*(&local3) = $tmp5022;
org$pandalanguage$pandac$Type** $tmp5024 = (org$pandalanguage$pandac$Type**) (param2->$data + 40);
org$pandalanguage$pandac$Type* $tmp5025 = *$tmp5024;
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp5026 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5026));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5025));
*(&local4) = $tmp5025;
// line 1329
org$pandalanguage$pandac$IR$Value* $tmp5027 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp5028 = *(&local2);
org$pandalanguage$pandac$IR$Value* $tmp5029 = *(&local3);
org$pandalanguage$pandac$Type* $tmp5030 = *(&local4);
org$pandalanguage$pandac$CCodeGenerator$writeBinary$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(param0, param1, $tmp5027, $tmp5028, $tmp5029, $tmp5030);
org$pandalanguage$pandac$Type* $tmp5031 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5031));
// unreffing type
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5032 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5032));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5033 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5033));
// unreffing left
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp5034 = (panda$core$Int64) {1};
panda$core$Bit $tmp5035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5034);
bool $tmp5036 = $tmp5035.value;
if ($tmp5036) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp5037 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5038 = *$tmp5037;
*(&local5) = $tmp5038;
org$pandalanguage$pandac$IR$Block$ID* $tmp5039 = (org$pandalanguage$pandac$IR$Block$ID*) (param2->$data + 16);
org$pandalanguage$pandac$IR$Block$ID $tmp5040 = *$tmp5039;
*(&local6) = $tmp5040;
// line 1331
org$pandalanguage$pandac$IR$Block$ID $tmp5041 = *(&local6);
org$pandalanguage$pandac$CCodeGenerator$writeBranch$org$pandalanguage$pandac$IR$Block$ID(param0, $tmp5041);
goto block1;
block5:;
panda$core$Int64 $tmp5042 = (panda$core$Int64) {2};
panda$core$Bit $tmp5043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5042);
bool $tmp5044 = $tmp5043.value;
if ($tmp5044) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Position* $tmp5045 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5046 = *$tmp5045;
*(&local7) = $tmp5046;
org$pandalanguage$pandac$IR$Value** $tmp5047 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5048 = *$tmp5047;
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5049 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5049));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5048));
*(&local8) = $tmp5048;
org$pandalanguage$pandac$Type** $tmp5050 = (org$pandalanguage$pandac$Type**) (param2->$data + 24);
org$pandalanguage$pandac$Type* $tmp5051 = *$tmp5050;
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp5052 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5052));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5051));
*(&local9) = $tmp5051;
// line 1333
org$pandalanguage$pandac$IR$Value* $tmp5053 = *(&local8);
org$pandalanguage$pandac$Type* $tmp5054 = *(&local9);
org$pandalanguage$pandac$CCodeGenerator$writeCast$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(param0, param1, $tmp5053, $tmp5054);
org$pandalanguage$pandac$Type* $tmp5055 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5055));
// unreffing type
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5056 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5056));
// unreffing value
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block7:;
panda$core$Int64 $tmp5057 = (panda$core$Int64) {3};
panda$core$Bit $tmp5058 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5057);
bool $tmp5059 = $tmp5058.value;
if ($tmp5059) goto block8; else goto block9;
block8:;
panda$core$String** $tmp5060 = (panda$core$String**) (param2->$data + 0);
panda$core$String* $tmp5061 = *$tmp5060;
*(&local10) = ((panda$core$String*) NULL);
panda$core$String* $tmp5062 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5062));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5061));
*(&local10) = $tmp5061;
// line 1335
panda$io$IndentedOutputStream** $tmp5063 = &param0->out;
panda$io$IndentedOutputStream* $tmp5064 = *$tmp5063;
panda$core$String* $tmp5065 = *(&local10);
panda$core$String* $tmp5066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5067, $tmp5065);
panda$core$String* $tmp5068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5066, &$s5069);
$fn5071 $tmp5070 = ($fn5071) ((panda$io$OutputStream*) $tmp5064)->$class->vtable[19];
$tmp5070(((panda$io$OutputStream*) $tmp5064), $tmp5068);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5066));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5068));
panda$core$String* $tmp5072 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5072));
// unreffing text
*(&local10) = ((panda$core$String*) NULL);
goto block1;
block9:;
panda$core$Int64 $tmp5073 = (panda$core$Int64) {5};
panda$core$Bit $tmp5074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5073);
bool $tmp5075 = $tmp5074.value;
if ($tmp5075) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp5076 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5077 = *$tmp5076;
*(&local11) = $tmp5077;
org$pandalanguage$pandac$IR$Value** $tmp5078 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5079 = *$tmp5078;
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5080 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5080));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5079));
*(&local12) = $tmp5079;
org$pandalanguage$pandac$IR$Block$ID* $tmp5081 = (org$pandalanguage$pandac$IR$Block$ID*) (param2->$data + 24);
org$pandalanguage$pandac$IR$Block$ID $tmp5082 = *$tmp5081;
*(&local13) = $tmp5082;
org$pandalanguage$pandac$IR$Block$ID* $tmp5083 = (org$pandalanguage$pandac$IR$Block$ID*) (param2->$data + 32);
org$pandalanguage$pandac$IR$Block$ID $tmp5084 = *$tmp5083;
*(&local14) = $tmp5084;
// line 1337
org$pandalanguage$pandac$IR$Value* $tmp5085 = *(&local12);
org$pandalanguage$pandac$IR$Block$ID $tmp5086 = *(&local13);
org$pandalanguage$pandac$IR$Block$ID $tmp5087 = *(&local14);
org$pandalanguage$pandac$CCodeGenerator$writeConditionalBranch$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID(param0, $tmp5085, $tmp5086, $tmp5087);
org$pandalanguage$pandac$IR$Value* $tmp5088 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5088));
// unreffing test
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block11:;
panda$core$Int64 $tmp5089 = (panda$core$Int64) {6};
panda$core$Bit $tmp5090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5089);
bool $tmp5091 = $tmp5090.value;
if ($tmp5091) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp5092 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5093 = *$tmp5092;
*(&local15) = $tmp5093;
org$pandalanguage$pandac$ClassDecl** $tmp5094 = (org$pandalanguage$pandac$ClassDecl**) (param2->$data + 16);
org$pandalanguage$pandac$ClassDecl* $tmp5095 = *$tmp5094;
*(&local16) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp5096 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5096));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5095));
*(&local16) = $tmp5095;
// line 1339
org$pandalanguage$pandac$ClassDecl* $tmp5097 = *(&local16);
org$pandalanguage$pandac$CCodeGenerator$writeConstruct$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$ClassDecl(param0, param1, $tmp5097);
org$pandalanguage$pandac$ClassDecl* $tmp5098 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5098));
// unreffing cl
*(&local16) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block1;
block13:;
panda$core$Int64 $tmp5099 = (panda$core$Int64) {7};
panda$core$Bit $tmp5100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5099);
bool $tmp5101 = $tmp5100.value;
if ($tmp5101) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$Position* $tmp5102 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5103 = *$tmp5102;
*(&local17) = $tmp5103;
org$pandalanguage$pandac$ClassDecl** $tmp5104 = (org$pandalanguage$pandac$ClassDecl**) (param2->$data + 16);
org$pandalanguage$pandac$ClassDecl* $tmp5105 = *$tmp5104;
*(&local18) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp5106 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5106));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5105));
*(&local18) = $tmp5105;
panda$collections$ImmutableArray** $tmp5107 = (panda$collections$ImmutableArray**) (param2->$data + 24);
panda$collections$ImmutableArray* $tmp5108 = *$tmp5107;
*(&local19) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5109 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5109));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5108));
*(&local19) = $tmp5108;
// line 1341
org$pandalanguage$pandac$ClassDecl* $tmp5110 = *(&local18);
panda$collections$ImmutableArray* $tmp5111 = *(&local19);
org$pandalanguage$pandac$CCodeGenerator$writeCreateStruct$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$ClassDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IR$Value$GT(param0, param1, $tmp5110, $tmp5111);
panda$collections$ImmutableArray* $tmp5112 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5112));
// unreffing args
*(&local19) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp5113 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5113));
// unreffing cl
*(&local18) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block1;
block15:;
panda$core$Int64 $tmp5114 = (panda$core$Int64) {8};
panda$core$Bit $tmp5115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5114);
bool $tmp5116 = $tmp5115.value;
if ($tmp5116) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Position* $tmp5117 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5118 = *$tmp5117;
*(&local20) = $tmp5118;
org$pandalanguage$pandac$IR$Value** $tmp5119 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5120 = *$tmp5119;
*(&local21) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5121 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5121));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5120));
*(&local21) = $tmp5120;
panda$collections$ImmutableArray** $tmp5122 = (panda$collections$ImmutableArray**) (param2->$data + 24);
panda$collections$ImmutableArray* $tmp5123 = *$tmp5122;
*(&local22) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5124 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5124));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5123));
*(&local22) = $tmp5123;
// line 1343
org$pandalanguage$pandac$IR$Value* $tmp5125 = *(&local21);
panda$collections$ImmutableArray* $tmp5126 = *(&local22);
org$pandalanguage$pandac$CCodeGenerator$writeDynamicCall$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$IR$Value$GT(param0, param1, $tmp5125, ((panda$collections$ListView*) $tmp5126));
panda$collections$ImmutableArray* $tmp5127 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5127));
// unreffing args
*(&local22) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5128 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5128));
// unreffing m
*(&local21) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block17:;
panda$core$Int64 $tmp5129 = (panda$core$Int64) {9};
panda$core$Bit $tmp5130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5129);
bool $tmp5131 = $tmp5130.value;
if ($tmp5131) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp5132 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5133 = *$tmp5132;
*(&local23) = $tmp5133;
org$pandalanguage$pandac$IR$Value** $tmp5134 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5135 = *$tmp5134;
*(&local24) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5136 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5136));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5135));
*(&local24) = $tmp5135;
org$pandalanguage$pandac$FieldDecl** $tmp5137 = (org$pandalanguage$pandac$FieldDecl**) (param2->$data + 24);
org$pandalanguage$pandac$FieldDecl* $tmp5138 = *$tmp5137;
*(&local25) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp5139 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5139));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5138));
*(&local25) = $tmp5138;
// line 1345
org$pandalanguage$pandac$IR$Value* $tmp5140 = *(&local24);
org$pandalanguage$pandac$FieldDecl* $tmp5141 = *(&local25);
org$pandalanguage$pandac$CCodeGenerator$writeExtractField$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl(param0, param1, $tmp5140, $tmp5141);
org$pandalanguage$pandac$FieldDecl* $tmp5142 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5142));
// unreffing field
*(&local25) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5143 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5143));
// unreffing target
*(&local24) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block19:;
panda$core$Int64 $tmp5144 = (panda$core$Int64) {4};
panda$core$Bit $tmp5145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5144);
bool $tmp5146 = $tmp5145.value;
if ($tmp5146) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp5147 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5148 = *$tmp5147;
*(&local26) = $tmp5148;
org$pandalanguage$pandac$IR$Value** $tmp5149 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5150 = *$tmp5149;
*(&local27) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5151 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5151));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5150));
*(&local27) = $tmp5150;
org$pandalanguage$pandac$ChoiceCase** $tmp5152 = (org$pandalanguage$pandac$ChoiceCase**) (param2->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp5153 = *$tmp5152;
*(&local28) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$ChoiceCase* $tmp5154 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5154));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5153));
*(&local28) = $tmp5153;
panda$core$Int64* $tmp5155 = (panda$core$Int64*) (param2->$data + 32);
panda$core$Int64 $tmp5156 = *$tmp5155;
*(&local29) = $tmp5156;
// line 1347
org$pandalanguage$pandac$IR$Value* $tmp5157 = *(&local27);
org$pandalanguage$pandac$ChoiceCase* $tmp5158 = *(&local28);
panda$core$Int64 $tmp5159 = *(&local29);
org$pandalanguage$pandac$CCodeGenerator$writeGetChoiceFieldPointer$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64(param0, param1, $tmp5157, $tmp5158, $tmp5159);
org$pandalanguage$pandac$ChoiceCase* $tmp5160 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5160));
// unreffing cc
*(&local28) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5161 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5161));
// unreffing target
*(&local27) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block21:;
panda$core$Int64 $tmp5162 = (panda$core$Int64) {10};
panda$core$Bit $tmp5163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5162);
bool $tmp5164 = $tmp5163.value;
if ($tmp5164) goto block22; else goto block23;
block22:;
org$pandalanguage$pandac$Position* $tmp5165 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5166 = *$tmp5165;
*(&local30) = $tmp5166;
org$pandalanguage$pandac$IR$Value** $tmp5167 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5168 = *$tmp5167;
*(&local31) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5169 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5169));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5168));
*(&local31) = $tmp5168;
org$pandalanguage$pandac$FieldDecl** $tmp5170 = (org$pandalanguage$pandac$FieldDecl**) (param2->$data + 24);
org$pandalanguage$pandac$FieldDecl* $tmp5171 = *$tmp5170;
*(&local32) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp5172 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5172));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5171));
*(&local32) = $tmp5171;
// line 1349
org$pandalanguage$pandac$IR$Value* $tmp5173 = *(&local31);
org$pandalanguage$pandac$FieldDecl* $tmp5174 = *(&local32);
org$pandalanguage$pandac$CCodeGenerator$writeGetFieldPointer$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl(param0, param1, $tmp5173, $tmp5174);
org$pandalanguage$pandac$FieldDecl* $tmp5175 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5175));
// unreffing field
*(&local32) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5176 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5176));
// unreffing target
*(&local31) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block23:;
panda$core$Int64 $tmp5177 = (panda$core$Int64) {12};
panda$core$Bit $tmp5178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5177);
bool $tmp5179 = $tmp5178.value;
if ($tmp5179) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp5180 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5181 = *$tmp5180;
*(&local33) = $tmp5181;
org$pandalanguage$pandac$IR$Value** $tmp5182 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5183 = *$tmp5182;
*(&local34) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5184 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5184));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5183));
*(&local34) = $tmp5183;
org$pandalanguage$pandac$ClassDecl** $tmp5185 = (org$pandalanguage$pandac$ClassDecl**) (param2->$data + 24);
org$pandalanguage$pandac$ClassDecl* $tmp5186 = *$tmp5185;
*(&local35) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp5187 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5187));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5186));
*(&local35) = $tmp5186;
panda$core$Int64* $tmp5188 = (panda$core$Int64*) (param2->$data + 32);
panda$core$Int64 $tmp5189 = *$tmp5188;
*(&local36) = $tmp5189;
org$pandalanguage$pandac$Type** $tmp5190 = (org$pandalanguage$pandac$Type**) (param2->$data + 40);
org$pandalanguage$pandac$Type* $tmp5191 = *$tmp5190;
*(&local37) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp5192 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5192));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5191));
*(&local37) = $tmp5191;
// line 1351
org$pandalanguage$pandac$IR$Value* $tmp5193 = *(&local34);
org$pandalanguage$pandac$ClassDecl* $tmp5194 = *(&local35);
panda$core$Int64 $tmp5195 = *(&local36);
org$pandalanguage$pandac$Type* $tmp5196 = *(&local37);
org$pandalanguage$pandac$CCodeGenerator$writeGetInterfaceMethod$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$org$pandalanguage$pandac$Type(param0, param1, $tmp5193, $tmp5194, $tmp5195, $tmp5196);
org$pandalanguage$pandac$Type* $tmp5197 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5197));
// unreffing type
*(&local37) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp5198 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5198));
// unreffing cl
*(&local35) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5199 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5199));
// unreffing value
*(&local34) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block25:;
panda$core$Int64 $tmp5200 = (panda$core$Int64) {11};
panda$core$Bit $tmp5201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5200);
bool $tmp5202 = $tmp5201.value;
if ($tmp5202) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$Position* $tmp5203 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5204 = *$tmp5203;
*(&local38) = $tmp5204;
org$pandalanguage$pandac$IR$Value** $tmp5205 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5206 = *$tmp5205;
*(&local39) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5207 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5207));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5206));
*(&local39) = $tmp5206;
panda$core$Int64* $tmp5208 = (panda$core$Int64*) (param2->$data + 24);
panda$core$Int64 $tmp5209 = *$tmp5208;
*(&local40) = $tmp5209;
org$pandalanguage$pandac$Type** $tmp5210 = (org$pandalanguage$pandac$Type**) (param2->$data + 32);
org$pandalanguage$pandac$Type* $tmp5211 = *$tmp5210;
*(&local41) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp5212 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5212));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5211));
*(&local41) = $tmp5211;
// line 1353
org$pandalanguage$pandac$IR$Value* $tmp5213 = *(&local39);
panda$core$Int64 $tmp5214 = *(&local40);
org$pandalanguage$pandac$Type* $tmp5215 = *(&local41);
org$pandalanguage$pandac$CCodeGenerator$writeGetVirtualMethod$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$panda$core$Int64$org$pandalanguage$pandac$Type(param0, param1, $tmp5213, $tmp5214, $tmp5215);
org$pandalanguage$pandac$Type* $tmp5216 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5216));
// unreffing type
*(&local41) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5217 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5217));
// unreffing value
*(&local39) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block27:;
panda$core$Int64 $tmp5218 = (panda$core$Int64) {13};
panda$core$Bit $tmp5219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5218);
bool $tmp5220 = $tmp5219.value;
if ($tmp5220) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$Position* $tmp5221 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5222 = *$tmp5221;
*(&local42) = $tmp5222;
org$pandalanguage$pandac$IR$Value** $tmp5223 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5224 = *$tmp5223;
*(&local43) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5225 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5225));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5224));
*(&local43) = $tmp5224;
// line 1355
org$pandalanguage$pandac$IR$Value* $tmp5226 = *(&local43);
org$pandalanguage$pandac$CCodeGenerator$writeLoad$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp5226);
org$pandalanguage$pandac$IR$Value* $tmp5227 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5227));
// unreffing ptr
*(&local43) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block29:;
panda$core$Int64 $tmp5228 = (panda$core$Int64) {14};
panda$core$Bit $tmp5229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5228);
bool $tmp5230 = $tmp5229.value;
if ($tmp5230) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Position* $tmp5231 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5232 = *$tmp5231;
*(&local44) = $tmp5232;
org$pandalanguage$pandac$IR$Value** $tmp5233 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5234 = *$tmp5233;
*(&local45) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5235 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5235));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5234));
*(&local45) = $tmp5234;
// line 1357
org$pandalanguage$pandac$IR$Value* $tmp5236 = *(&local45);
org$pandalanguage$pandac$CCodeGenerator$writeNegate$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp5236);
org$pandalanguage$pandac$IR$Value* $tmp5237 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5237));
// unreffing value
*(&local45) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block31:;
panda$core$Int64 $tmp5238 = (panda$core$Int64) {15};
panda$core$Bit $tmp5239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5238);
bool $tmp5240 = $tmp5239.value;
if ($tmp5240) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$Position* $tmp5241 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5242 = *$tmp5241;
*(&local46) = $tmp5242;
org$pandalanguage$pandac$IR$Value** $tmp5243 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5244 = *$tmp5243;
*(&local47) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5245 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5245));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5244));
*(&local47) = $tmp5244;
// line 1359
org$pandalanguage$pandac$IR$Value* $tmp5246 = *(&local47);
org$pandalanguage$pandac$CCodeGenerator$writeNot$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp5246);
org$pandalanguage$pandac$IR$Value* $tmp5247 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5247));
// unreffing value
*(&local47) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block33:;
panda$core$Int64 $tmp5248 = (panda$core$Int64) {16};
panda$core$Bit $tmp5249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5248);
bool $tmp5250 = $tmp5249.value;
if ($tmp5250) goto block34; else goto block35;
block34:;
org$pandalanguage$pandac$Position* $tmp5251 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5252 = *$tmp5251;
*(&local48) = $tmp5252;
org$pandalanguage$pandac$IR$Value** $tmp5253 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5254 = *$tmp5253;
*(&local49) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5255 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5255));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5254));
*(&local49) = $tmp5254;
org$pandalanguage$pandac$Type** $tmp5256 = (org$pandalanguage$pandac$Type**) (param2->$data + 24);
org$pandalanguage$pandac$Type* $tmp5257 = *$tmp5256;
*(&local50) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp5258 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5258));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5257));
*(&local50) = $tmp5257;
// line 1361
org$pandalanguage$pandac$IR$Value* $tmp5259 = *(&local49);
org$pandalanguage$pandac$Type* $tmp5260 = *(&local50);
org$pandalanguage$pandac$CCodeGenerator$writePointerAlloc$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(param0, param1, $tmp5259, $tmp5260);
org$pandalanguage$pandac$Type* $tmp5261 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5261));
// unreffing type
*(&local50) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5262 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5262));
// unreffing count
*(&local49) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block35:;
panda$core$Int64 $tmp5263 = (panda$core$Int64) {17};
panda$core$Bit $tmp5264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5263);
bool $tmp5265 = $tmp5264.value;
if ($tmp5265) goto block36; else goto block37;
block36:;
org$pandalanguage$pandac$Position* $tmp5266 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5267 = *$tmp5266;
*(&local51) = $tmp5267;
org$pandalanguage$pandac$IR$Value** $tmp5268 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5269 = *$tmp5268;
*(&local52) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5270 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5270));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5269));
*(&local52) = $tmp5269;
// line 1363
org$pandalanguage$pandac$IR$Value* $tmp5271 = *(&local52);
org$pandalanguage$pandac$CCodeGenerator$writePointerDestroy$org$pandalanguage$pandac$IR$Value(param0, $tmp5271);
org$pandalanguage$pandac$IR$Value* $tmp5272 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5272));
// unreffing ptr
*(&local52) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block37:;
panda$core$Int64 $tmp5273 = (panda$core$Int64) {19};
panda$core$Bit $tmp5274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5273);
bool $tmp5275 = $tmp5274.value;
if ($tmp5275) goto block38; else goto block39;
block38:;
org$pandalanguage$pandac$Position* $tmp5276 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5277 = *$tmp5276;
*(&local53) = $tmp5277;
org$pandalanguage$pandac$IR$Value** $tmp5278 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5279 = *$tmp5278;
*(&local54) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5280 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5280));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5279));
*(&local54) = $tmp5279;
org$pandalanguage$pandac$IR$Value** $tmp5281 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp5282 = *$tmp5281;
*(&local55) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5283 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5283));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5282));
*(&local55) = $tmp5282;
// line 1365
org$pandalanguage$pandac$IR$Value* $tmp5284 = *(&local54);
org$pandalanguage$pandac$IR$Value* $tmp5285 = *(&local55);
org$pandalanguage$pandac$CCodeGenerator$writePointerGetIndex$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp5284, $tmp5285);
org$pandalanguage$pandac$IR$Value* $tmp5286 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5286));
// unreffing index
*(&local55) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5287 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5287));
// unreffing ptr
*(&local54) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block39:;
panda$core$Int64 $tmp5288 = (panda$core$Int64) {20};
panda$core$Bit $tmp5289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5288);
bool $tmp5290 = $tmp5289.value;
if ($tmp5290) goto block40; else goto block41;
block40:;
org$pandalanguage$pandac$Position* $tmp5291 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5292 = *$tmp5291;
*(&local56) = $tmp5292;
org$pandalanguage$pandac$IR$Value** $tmp5293 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5294 = *$tmp5293;
*(&local57) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5295 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5295));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5294));
*(&local57) = $tmp5294;
org$pandalanguage$pandac$IR$Value** $tmp5296 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp5297 = *$tmp5296;
*(&local58) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5298 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5298));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5297));
*(&local58) = $tmp5297;
// line 1367
org$pandalanguage$pandac$IR$Value* $tmp5299 = *(&local57);
org$pandalanguage$pandac$IR$Value* $tmp5300 = *(&local58);
org$pandalanguage$pandac$CCodeGenerator$writePointerOffset$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp5299, $tmp5300);
org$pandalanguage$pandac$IR$Value* $tmp5301 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5301));
// unreffing offset
*(&local58) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5302 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5302));
// unreffing ptr
*(&local57) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block41:;
panda$core$Int64 $tmp5303 = (panda$core$Int64) {21};
panda$core$Bit $tmp5304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5303);
bool $tmp5305 = $tmp5304.value;
if ($tmp5305) goto block42; else goto block43;
block42:;
org$pandalanguage$pandac$Position* $tmp5306 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5307 = *$tmp5306;
*(&local59) = $tmp5307;
org$pandalanguage$pandac$IR$Value** $tmp5308 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5309 = *$tmp5308;
*(&local60) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5310 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5310));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5309));
*(&local60) = $tmp5309;
org$pandalanguage$pandac$IR$Value** $tmp5311 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp5312 = *$tmp5311;
*(&local61) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5313 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5313));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5312));
*(&local61) = $tmp5312;
org$pandalanguage$pandac$IR$Value** $tmp5314 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp5315 = *$tmp5314;
*(&local62) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5316 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5316));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5315));
*(&local62) = $tmp5315;
// line 1369
org$pandalanguage$pandac$IR$Value* $tmp5317 = *(&local60);
org$pandalanguage$pandac$IR$Value* $tmp5318 = *(&local61);
org$pandalanguage$pandac$IR$Value* $tmp5319 = *(&local62);
org$pandalanguage$pandac$CCodeGenerator$writePointerRealloc$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp5317, $tmp5318, $tmp5319);
org$pandalanguage$pandac$IR$Value* $tmp5320 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5320));
// unreffing newCount
*(&local62) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5321 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5321));
// unreffing oldCount
*(&local61) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5322 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5322));
// unreffing ptr
*(&local60) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block43:;
panda$core$Int64 $tmp5323 = (panda$core$Int64) {23};
panda$core$Bit $tmp5324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5323);
bool $tmp5325 = $tmp5324.value;
if ($tmp5325) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$Position* $tmp5326 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5327 = *$tmp5326;
*(&local63) = $tmp5327;
org$pandalanguage$pandac$IR$Value** $tmp5328 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5329 = *$tmp5328;
*(&local64) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5330 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5330));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5329));
*(&local64) = $tmp5329;
org$pandalanguage$pandac$IR$Value** $tmp5331 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp5332 = *$tmp5331;
*(&local65) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5333 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5333));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5332));
*(&local65) = $tmp5332;
org$pandalanguage$pandac$IR$Value** $tmp5334 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp5335 = *$tmp5334;
*(&local66) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5336 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5336));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5335));
*(&local66) = $tmp5335;
// line 1371
org$pandalanguage$pandac$IR$Value* $tmp5337 = *(&local64);
org$pandalanguage$pandac$IR$Value* $tmp5338 = *(&local65);
org$pandalanguage$pandac$IR$Value* $tmp5339 = *(&local66);
org$pandalanguage$pandac$CCodeGenerator$writePointerSetIndex$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(param0, $tmp5337, $tmp5338, $tmp5339);
org$pandalanguage$pandac$IR$Value* $tmp5340 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5340));
// unreffing index
*(&local66) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5341 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5341));
// unreffing ptr
*(&local65) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5342 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5342));
// unreffing value
*(&local64) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block45:;
panda$core$Int64 $tmp5343 = (panda$core$Int64) {24};
panda$core$Bit $tmp5344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5343);
bool $tmp5345 = $tmp5344.value;
if ($tmp5345) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$Position* $tmp5346 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5347 = *$tmp5346;
*(&local67) = $tmp5347;
org$pandalanguage$pandac$IR$Value** $tmp5348 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5349 = *$tmp5348;
*(&local68) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5350 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5350));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5349));
*(&local68) = $tmp5349;
// line 1373
org$pandalanguage$pandac$IR$Value* $tmp5351 = *(&local68);
org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp5351);
org$pandalanguage$pandac$IR$Value* $tmp5352 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5352));
// unreffing value
*(&local68) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block47:;
panda$core$Int64 $tmp5353 = (panda$core$Int64) {25};
panda$core$Bit $tmp5354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5353);
bool $tmp5355 = $tmp5354.value;
if ($tmp5355) goto block48; else goto block49;
block48:;
org$pandalanguage$pandac$Position* $tmp5356 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5357 = *$tmp5356;
*(&local69) = $tmp5357;
org$pandalanguage$pandac$MethodDecl** $tmp5358 = (org$pandalanguage$pandac$MethodDecl**) (param2->$data + 16);
org$pandalanguage$pandac$MethodDecl* $tmp5359 = *$tmp5358;
*(&local70) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp5360 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5360));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5359));
*(&local70) = $tmp5359;
panda$collections$ImmutableArray** $tmp5361 = (panda$collections$ImmutableArray**) (param2->$data + 24);
panda$collections$ImmutableArray* $tmp5362 = *$tmp5361;
*(&local71) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5363 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5363));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5362));
*(&local71) = $tmp5362;
// line 1375
org$pandalanguage$pandac$MethodDecl* $tmp5364 = *(&local70);
panda$collections$ImmutableArray* $tmp5365 = *(&local71);
org$pandalanguage$pandac$CCodeGenerator$writeStaticCall$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$IR$Value$GT(param0, param1, $tmp5364, ((panda$collections$ListView*) $tmp5365));
panda$collections$ImmutableArray* $tmp5366 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5366));
// unreffing args
*(&local71) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp5367 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5367));
// unreffing m
*(&local70) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block1;
block49:;
panda$core$Int64 $tmp5368 = (panda$core$Int64) {26};
panda$core$Bit $tmp5369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5368);
bool $tmp5370 = $tmp5369.value;
if ($tmp5370) goto block50; else goto block51;
block50:;
org$pandalanguage$pandac$Position* $tmp5371 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5372 = *$tmp5371;
*(&local72) = $tmp5372;
org$pandalanguage$pandac$IR$Value** $tmp5373 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5374 = *$tmp5373;
*(&local73) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5375 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5375));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5374));
*(&local73) = $tmp5374;
org$pandalanguage$pandac$IR$Value** $tmp5376 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp5377 = *$tmp5376;
*(&local74) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5378 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5378));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5377));
*(&local74) = $tmp5377;
// line 1377
org$pandalanguage$pandac$IR$Value* $tmp5379 = *(&local73);
org$pandalanguage$pandac$IR$Value* $tmp5380 = *(&local74);
org$pandalanguage$pandac$CCodeGenerator$writeStore$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(param0, $tmp5379, $tmp5380);
org$pandalanguage$pandac$IR$Value* $tmp5381 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5381));
// unreffing slot
*(&local74) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5382 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5382));
// unreffing value
*(&local73) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block51:;
panda$core$Int64 $tmp5383 = (panda$core$Int64) {27};
panda$core$Bit $tmp5384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5010, $tmp5383);
bool $tmp5385 = $tmp5384.value;
if ($tmp5385) goto block52; else goto block53;
block52:;
org$pandalanguage$pandac$Position* $tmp5386 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5387 = *$tmp5386;
*(&local75) = $tmp5387;
// line 1379
panda$io$IndentedOutputStream** $tmp5388 = &param0->out;
panda$io$IndentedOutputStream* $tmp5389 = *$tmp5388;
$fn5391 $tmp5390 = ($fn5391) ((panda$io$OutputStream*) $tmp5389)->$class->vtable[19];
$tmp5390(((panda$io$OutputStream*) $tmp5389), &$s5392);
goto block1;
block53:;
// line 1381
panda$core$Bit $tmp5393 = panda$core$Bit$init$builtin_bit(false);
bool $tmp5394 = $tmp5393.value;
if ($tmp5394) goto block54; else goto block55;
block55:;
panda$core$Int64 $tmp5395 = (panda$core$Int64) {1381};
panda$core$String* $tmp5396 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5397, ((panda$core$Object*) param2));
panda$core$String* $tmp5398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5396, &$s5399);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5400, $tmp5395, $tmp5398);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5396));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5398));
abort(); // unreachable
block54:;
goto block1;
block1:;
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

// line 1387
panda$core$Weak** $tmp5401 = &param1->owner;
panda$core$Weak* $tmp5402 = *$tmp5401;
panda$core$Object* $tmp5403 = panda$core$Weak$get$R$panda$core$Weak$T($tmp5402);
panda$core$Panda$unref$panda$core$Object$Q($tmp5403);
org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp5403));
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
panda$core$Int64 $tmp5404 = (panda$core$Int64) {0};
panda$collections$Array** $tmp5405 = &param1->locals;
panda$collections$Array* $tmp5406 = *$tmp5405;
ITable* $tmp5407 = ((panda$collections$CollectionView*) $tmp5406)->$class->itable;
while ($tmp5407->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp5407 = $tmp5407->next;
}
$fn5409 $tmp5408 = $tmp5407->methods[0];
panda$core$Int64 $tmp5410 = $tmp5408(((panda$collections$CollectionView*) $tmp5406));
panda$core$Bit $tmp5411 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp5412 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp5404, $tmp5410, $tmp5411);
panda$core$Int64 $tmp5413 = $tmp5412.min;
*(&local0) = $tmp5413;
panda$core$Int64 $tmp5414 = $tmp5412.max;
panda$core$Bit $tmp5415 = $tmp5412.inclusive;
bool $tmp5416 = $tmp5415.value;
panda$core$Int64 $tmp5417 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp5418 = panda$core$Int64$convert$R$panda$core$UInt64($tmp5417);
if ($tmp5416) goto block4; else goto block5;
block4:;
int64_t $tmp5419 = $tmp5413.value;
int64_t $tmp5420 = $tmp5414.value;
bool $tmp5421 = $tmp5419 <= $tmp5420;
panda$core$Bit $tmp5422 = (panda$core$Bit) {$tmp5421};
bool $tmp5423 = $tmp5422.value;
if ($tmp5423) goto block1; else goto block2;
block5:;
int64_t $tmp5424 = $tmp5413.value;
int64_t $tmp5425 = $tmp5414.value;
bool $tmp5426 = $tmp5424 < $tmp5425;
panda$core$Bit $tmp5427 = (panda$core$Bit) {$tmp5426};
bool $tmp5428 = $tmp5427.value;
if ($tmp5428) goto block1; else goto block2;
block1:;
// line 1392
panda$core$Int64 $tmp5429 = *(&local0);
panda$core$Int64$wrapper* $tmp5430;
$tmp5430 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp5430->value = $tmp5429;
panda$core$String* $tmp5431 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5432, ((panda$core$Object*) $tmp5430));
panda$core$String* $tmp5433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5431, &$s5434);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp5435 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5435));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5433));
*(&local1) = $tmp5433;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5430));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5431));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5433));
// line 1393
panda$collections$Array** $tmp5436 = &param1->locals;
panda$collections$Array* $tmp5437 = *$tmp5436;
panda$core$Int64 $tmp5438 = *(&local0);
panda$core$Object* $tmp5439 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp5437, $tmp5438);
panda$core$String* $tmp5440 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp5439));
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp5441 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5441));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5440));
*(&local2) = $tmp5440;
panda$core$Panda$unref$panda$core$Object$Q($tmp5439);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5440));
// line 1394
panda$io$IndentedOutputStream** $tmp5442 = &param0->out;
panda$io$IndentedOutputStream* $tmp5443 = *$tmp5442;
panda$core$String* $tmp5444 = *(&local2);
panda$core$String* $tmp5445 = panda$core$String$convert$R$panda$core$String($tmp5444);
panda$core$String* $tmp5446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5445, &$s5447);
panda$core$String* $tmp5448 = *(&local1);
panda$core$String* $tmp5449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5446, $tmp5448);
panda$core$String* $tmp5450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5449, &$s5451);
$fn5453 $tmp5452 = ($fn5453) ((panda$io$OutputStream*) $tmp5443)->$class->vtable[17];
$tmp5452(((panda$io$OutputStream*) $tmp5443), $tmp5450);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5445));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5446));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5449));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5450));
// line 1395
panda$core$Weak** $tmp5454 = &param0->compiler;
panda$core$Weak* $tmp5455 = *$tmp5454;
panda$core$Object* $tmp5456 = panda$core$Weak$get$R$panda$core$Weak$T($tmp5455);
panda$core$Panda$unref$panda$core$Object$Q($tmp5456);
panda$collections$Array** $tmp5457 = &param1->locals;
panda$collections$Array* $tmp5458 = *$tmp5457;
panda$core$Int64 $tmp5459 = *(&local0);
panda$core$Object* $tmp5460 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp5458, $tmp5459);
panda$core$Bit $tmp5461 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp5456), ((org$pandalanguage$pandac$Type*) $tmp5460));
panda$core$Panda$unref$panda$core$Object$Q($tmp5460);
bool $tmp5462 = $tmp5461.value;
if ($tmp5462) goto block6; else goto block7;
block6:;
// line 1396
panda$io$IndentedOutputStream** $tmp5463 = &param0->out;
panda$io$IndentedOutputStream* $tmp5464 = *$tmp5463;
$fn5466 $tmp5465 = ($fn5466) ((panda$io$OutputStream*) $tmp5464)->$class->vtable[17];
$tmp5465(((panda$io$OutputStream*) $tmp5464), &$s5467);
goto block7;
block7:;
// line 1398
panda$io$IndentedOutputStream** $tmp5468 = &param0->out;
panda$io$IndentedOutputStream* $tmp5469 = *$tmp5468;
$fn5471 $tmp5470 = ($fn5471) ((panda$io$OutputStream*) $tmp5469)->$class->vtable[19];
$tmp5470(((panda$io$OutputStream*) $tmp5469), &$s5472);
panda$core$String* $tmp5473 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5473));
// unreffing type
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp5474 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5474));
// unreffing name
*(&local1) = ((panda$core$String*) NULL);
goto block3;
block3:;
panda$core$Int64 $tmp5475 = *(&local0);
int64_t $tmp5476 = $tmp5414.value;
int64_t $tmp5477 = $tmp5475.value;
int64_t $tmp5478 = $tmp5476 - $tmp5477;
panda$core$Int64 $tmp5479 = (panda$core$Int64) {$tmp5478};
panda$core$UInt64 $tmp5480 = panda$core$Int64$convert$R$panda$core$UInt64($tmp5479);
if ($tmp5416) goto block9; else goto block10;
block9:;
uint64_t $tmp5481 = $tmp5480.value;
uint64_t $tmp5482 = $tmp5418.value;
bool $tmp5483 = $tmp5481 >= $tmp5482;
panda$core$Bit $tmp5484 = (panda$core$Bit) {$tmp5483};
bool $tmp5485 = $tmp5484.value;
if ($tmp5485) goto block8; else goto block2;
block10:;
uint64_t $tmp5486 = $tmp5480.value;
uint64_t $tmp5487 = $tmp5418.value;
bool $tmp5488 = $tmp5486 > $tmp5487;
panda$core$Bit $tmp5489 = (panda$core$Bit) {$tmp5488};
bool $tmp5490 = $tmp5489.value;
if ($tmp5490) goto block8; else goto block2;
block8:;
int64_t $tmp5491 = $tmp5475.value;
int64_t $tmp5492 = $tmp5417.value;
int64_t $tmp5493 = $tmp5491 + $tmp5492;
panda$core$Int64 $tmp5494 = (panda$core$Int64) {$tmp5493};
*(&local0) = $tmp5494;
goto block1;
block2:;
// line 1400
panda$core$Int64 $tmp5495 = (panda$core$Int64) {0};
panda$collections$Array** $tmp5496 = &param1->blocks;
panda$collections$Array* $tmp5497 = *$tmp5496;
ITable* $tmp5498 = ((panda$collections$CollectionView*) $tmp5497)->$class->itable;
while ($tmp5498->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp5498 = $tmp5498->next;
}
$fn5500 $tmp5499 = $tmp5498->methods[0];
panda$core$Int64 $tmp5501 = $tmp5499(((panda$collections$CollectionView*) $tmp5497));
panda$core$Bit $tmp5502 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp5503 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp5495, $tmp5501, $tmp5502);
panda$core$Int64 $tmp5504 = $tmp5503.min;
*(&local3) = $tmp5504;
panda$core$Int64 $tmp5505 = $tmp5503.max;
panda$core$Bit $tmp5506 = $tmp5503.inclusive;
bool $tmp5507 = $tmp5506.value;
panda$core$Int64 $tmp5508 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp5509 = panda$core$Int64$convert$R$panda$core$UInt64($tmp5508);
if ($tmp5507) goto block14; else goto block15;
block14:;
int64_t $tmp5510 = $tmp5504.value;
int64_t $tmp5511 = $tmp5505.value;
bool $tmp5512 = $tmp5510 <= $tmp5511;
panda$core$Bit $tmp5513 = (panda$core$Bit) {$tmp5512};
bool $tmp5514 = $tmp5513.value;
if ($tmp5514) goto block11; else goto block12;
block15:;
int64_t $tmp5515 = $tmp5504.value;
int64_t $tmp5516 = $tmp5505.value;
bool $tmp5517 = $tmp5515 < $tmp5516;
panda$core$Bit $tmp5518 = (panda$core$Bit) {$tmp5517};
bool $tmp5519 = $tmp5518.value;
if ($tmp5519) goto block11; else goto block12;
block11:;
// line 1401
panda$collections$Array** $tmp5520 = &param1->blocks;
panda$collections$Array* $tmp5521 = *$tmp5520;
panda$core$Int64 $tmp5522 = *(&local3);
panda$core$Object* $tmp5523 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp5521, $tmp5522);
*(&local4) = ((org$pandalanguage$pandac$IR$Block*) NULL);
org$pandalanguage$pandac$IR$Block* $tmp5524 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5524));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Block*) $tmp5523)));
*(&local4) = ((org$pandalanguage$pandac$IR$Block*) $tmp5523);
panda$core$Panda$unref$panda$core$Object$Q($tmp5523);
// line 1402
panda$core$Int64 $tmp5525 = *(&local3);
panda$core$Int64 $tmp5526 = (panda$core$Int64) {0};
int64_t $tmp5527 = $tmp5525.value;
int64_t $tmp5528 = $tmp5526.value;
bool $tmp5529 = $tmp5527 != $tmp5528;
panda$core$Bit $tmp5530 = (panda$core$Bit) {$tmp5529};
bool $tmp5531 = $tmp5530.value;
if ($tmp5531) goto block16; else goto block18;
block16:;
// line 1403
org$pandalanguage$pandac$IR$Block* $tmp5532 = *(&local4);
org$pandalanguage$pandac$IR$Block$ID* $tmp5533 = &$tmp5532->id;
org$pandalanguage$pandac$IR$Block$ID $tmp5534 = *$tmp5533;
panda$core$String* $tmp5535 = org$pandalanguage$pandac$IR$Block$ID$convert$R$panda$core$String($tmp5534);
panda$core$String* $tmp5536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5535, &$s5537);
panda$core$String** $tmp5538 = &param0->currentBlock;
panda$core$String* $tmp5539 = *$tmp5538;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5539));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5536));
panda$core$String** $tmp5540 = &param0->currentBlock;
*$tmp5540 = $tmp5536;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5535));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5536));
// line 1404
panda$io$IndentedOutputStream** $tmp5541 = &param0->out;
panda$io$IndentedOutputStream* $tmp5542 = *$tmp5541;
panda$core$String** $tmp5543 = &param0->currentBlock;
panda$core$String* $tmp5544 = *$tmp5543;
panda$core$String* $tmp5545 = panda$core$String$convert$R$panda$core$String($tmp5544);
panda$core$String* $tmp5546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5545, &$s5547);
$fn5549 $tmp5548 = ($fn5549) ((panda$io$OutputStream*) $tmp5542)->$class->vtable[19];
$tmp5548(((panda$io$OutputStream*) $tmp5542), $tmp5546);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5545));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5546));
goto block17;
block18:;
// line 1
// line 1407
panda$core$String** $tmp5550 = &param0->currentBlock;
panda$core$String* $tmp5551 = *$tmp5550;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5551));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s5552));
panda$core$String** $tmp5553 = &param0->currentBlock;
*$tmp5553 = &$s5554;
goto block17;
block17:;
// line 1409
panda$core$Int64 $tmp5555 = (panda$core$Int64) {0};
org$pandalanguage$pandac$IR$Block* $tmp5556 = *(&local4);
panda$collections$Array** $tmp5557 = &$tmp5556->statements;
panda$collections$Array* $tmp5558 = *$tmp5557;
ITable* $tmp5559 = ((panda$collections$CollectionView*) $tmp5558)->$class->itable;
while ($tmp5559->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp5559 = $tmp5559->next;
}
$fn5561 $tmp5560 = $tmp5559->methods[0];
panda$core$Int64 $tmp5562 = $tmp5560(((panda$collections$CollectionView*) $tmp5558));
panda$core$Bit $tmp5563 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp5564 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp5555, $tmp5562, $tmp5563);
panda$core$Int64 $tmp5565 = $tmp5564.min;
*(&local5) = $tmp5565;
panda$core$Int64 $tmp5566 = $tmp5564.max;
panda$core$Bit $tmp5567 = $tmp5564.inclusive;
bool $tmp5568 = $tmp5567.value;
panda$core$Int64 $tmp5569 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp5570 = panda$core$Int64$convert$R$panda$core$UInt64($tmp5569);
if ($tmp5568) goto block22; else goto block23;
block22:;
int64_t $tmp5571 = $tmp5565.value;
int64_t $tmp5572 = $tmp5566.value;
bool $tmp5573 = $tmp5571 <= $tmp5572;
panda$core$Bit $tmp5574 = (panda$core$Bit) {$tmp5573};
bool $tmp5575 = $tmp5574.value;
if ($tmp5575) goto block19; else goto block20;
block23:;
int64_t $tmp5576 = $tmp5565.value;
int64_t $tmp5577 = $tmp5566.value;
bool $tmp5578 = $tmp5576 < $tmp5577;
panda$core$Bit $tmp5579 = (panda$core$Bit) {$tmp5578};
bool $tmp5580 = $tmp5579.value;
if ($tmp5580) goto block19; else goto block20;
block19:;
// line 1410
org$pandalanguage$pandac$IR$Block* $tmp5581 = *(&local4);
panda$collections$Array** $tmp5582 = &$tmp5581->ids;
panda$collections$Array* $tmp5583 = *$tmp5582;
panda$core$Int64 $tmp5584 = *(&local5);
panda$core$Object* $tmp5585 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp5583, $tmp5584);
org$pandalanguage$pandac$IR$Block* $tmp5586 = *(&local4);
panda$collections$Array** $tmp5587 = &$tmp5586->statements;
panda$collections$Array* $tmp5588 = *$tmp5587;
panda$core$Int64 $tmp5589 = *(&local5);
panda$core$Object* $tmp5590 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp5588, $tmp5589);
org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Statement(param0, ((org$pandalanguage$pandac$IR$Statement$ID$wrapper*) $tmp5585)->value, ((org$pandalanguage$pandac$IR$Statement*) $tmp5590));
panda$core$Panda$unref$panda$core$Object$Q($tmp5585);
panda$core$Panda$unref$panda$core$Object$Q($tmp5590);
goto block21;
block21:;
panda$core$Int64 $tmp5591 = *(&local5);
int64_t $tmp5592 = $tmp5566.value;
int64_t $tmp5593 = $tmp5591.value;
int64_t $tmp5594 = $tmp5592 - $tmp5593;
panda$core$Int64 $tmp5595 = (panda$core$Int64) {$tmp5594};
panda$core$UInt64 $tmp5596 = panda$core$Int64$convert$R$panda$core$UInt64($tmp5595);
if ($tmp5568) goto block25; else goto block26;
block25:;
uint64_t $tmp5597 = $tmp5596.value;
uint64_t $tmp5598 = $tmp5570.value;
bool $tmp5599 = $tmp5597 >= $tmp5598;
panda$core$Bit $tmp5600 = (panda$core$Bit) {$tmp5599};
bool $tmp5601 = $tmp5600.value;
if ($tmp5601) goto block24; else goto block20;
block26:;
uint64_t $tmp5602 = $tmp5596.value;
uint64_t $tmp5603 = $tmp5570.value;
bool $tmp5604 = $tmp5602 > $tmp5603;
panda$core$Bit $tmp5605 = (panda$core$Bit) {$tmp5604};
bool $tmp5606 = $tmp5605.value;
if ($tmp5606) goto block24; else goto block20;
block24:;
int64_t $tmp5607 = $tmp5591.value;
int64_t $tmp5608 = $tmp5569.value;
int64_t $tmp5609 = $tmp5607 + $tmp5608;
panda$core$Int64 $tmp5610 = (panda$core$Int64) {$tmp5609};
*(&local5) = $tmp5610;
goto block19;
block20:;
org$pandalanguage$pandac$IR$Block* $tmp5611 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5611));
// unreffing block
*(&local4) = ((org$pandalanguage$pandac$IR$Block*) NULL);
goto block13;
block13:;
panda$core$Int64 $tmp5612 = *(&local3);
int64_t $tmp5613 = $tmp5505.value;
int64_t $tmp5614 = $tmp5612.value;
int64_t $tmp5615 = $tmp5613 - $tmp5614;
panda$core$Int64 $tmp5616 = (panda$core$Int64) {$tmp5615};
panda$core$UInt64 $tmp5617 = panda$core$Int64$convert$R$panda$core$UInt64($tmp5616);
if ($tmp5507) goto block28; else goto block29;
block28:;
uint64_t $tmp5618 = $tmp5617.value;
uint64_t $tmp5619 = $tmp5509.value;
bool $tmp5620 = $tmp5618 >= $tmp5619;
panda$core$Bit $tmp5621 = (panda$core$Bit) {$tmp5620};
bool $tmp5622 = $tmp5621.value;
if ($tmp5622) goto block27; else goto block12;
block29:;
uint64_t $tmp5623 = $tmp5617.value;
uint64_t $tmp5624 = $tmp5509.value;
bool $tmp5625 = $tmp5623 > $tmp5624;
panda$core$Bit $tmp5626 = (panda$core$Bit) {$tmp5625};
bool $tmp5627 = $tmp5626.value;
if ($tmp5627) goto block27; else goto block12;
block27:;
int64_t $tmp5628 = $tmp5612.value;
int64_t $tmp5629 = $tmp5508.value;
int64_t $tmp5630 = $tmp5628 + $tmp5629;
panda$core$Int64 $tmp5631 = (panda$core$Int64) {$tmp5630};
*(&local3) = $tmp5631;
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
panda$io$IndentedOutputStream** $tmp5632 = &param0->out;
panda$io$IndentedOutputStream* $tmp5633 = *$tmp5632;
*(&local0) = ((panda$io$IndentedOutputStream*) NULL);
panda$io$IndentedOutputStream* $tmp5634 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5634));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5633));
*(&local0) = $tmp5633;
// line 1419
panda$io$IndentedOutputStream** $tmp5635 = &param0->methods;
panda$io$IndentedOutputStream* $tmp5636 = *$tmp5635;
panda$io$IndentedOutputStream** $tmp5637 = &param0->out;
panda$io$IndentedOutputStream* $tmp5638 = *$tmp5637;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5638));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5636));
panda$io$IndentedOutputStream** $tmp5639 = &param0->out;
*$tmp5639 = $tmp5636;
// line 1420
panda$io$MemoryOutputStream** $tmp5640 = &param0->methodHeaderBuffer;
panda$io$MemoryOutputStream* $tmp5641 = *$tmp5640;
panda$io$MemoryOutputStream$clear($tmp5641);
// line 1421
org$pandalanguage$pandac$IR** $tmp5642 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp5643 = *$tmp5642;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5643));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$IR** $tmp5644 = &param0->ir;
*$tmp5644 = param2;
// line 1422
panda$io$IndentedOutputStream** $tmp5645 = &param0->out;
panda$io$IndentedOutputStream* $tmp5646 = *$tmp5645;
org$pandalanguage$pandac$Type** $tmp5647 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp5648 = *$tmp5647;
panda$core$String* $tmp5649 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp5648);
panda$core$String* $tmp5650 = panda$core$String$convert$R$panda$core$String($tmp5649);
panda$core$String* $tmp5651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5650, &$s5652);
panda$core$String* $tmp5653 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp5654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5651, $tmp5653);
panda$core$String* $tmp5655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5654, &$s5656);
$fn5658 $tmp5657 = ($fn5658) ((panda$io$OutputStream*) $tmp5646)->$class->vtable[17];
$tmp5657(((panda$io$OutputStream*) $tmp5646), $tmp5655);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5649));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5650));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5651));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5653));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5654));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5655));
// line 1423
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp5659 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5659));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s5660));
*(&local1) = &$s5661;
// line 1424
panda$core$Int64 $tmp5662 = (panda$core$Int64) {0};
*(&local2) = $tmp5662;
// line 1425
panda$core$Weak** $tmp5663 = &param0->compiler;
panda$core$Weak* $tmp5664 = *$tmp5663;
panda$core$Object* $tmp5665 = panda$core$Weak$get$R$panda$core$Weak$T($tmp5664);
panda$core$Panda$unref$panda$core$Object$Q($tmp5665);
panda$core$Bit $tmp5666 = org$pandalanguage$pandac$Compiler$hasSelfParam$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp5665), param1);
bool $tmp5667 = $tmp5666.value;
if ($tmp5667) goto block1; else goto block2;
block1:;
// line 1426
panda$io$IndentedOutputStream** $tmp5668 = &param0->out;
panda$io$IndentedOutputStream* $tmp5669 = *$tmp5668;
panda$core$String* $tmp5670 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp5671 = panda$core$String$convert$R$panda$core$String($tmp5670);
panda$core$String* $tmp5672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5671, &$s5673);
panda$core$Int64 $tmp5674 = *(&local2);
panda$core$Int64$wrapper* $tmp5675;
$tmp5675 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp5675->value = $tmp5674;
panda$core$String* $tmp5676 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5672, ((panda$core$Object*) $tmp5675));
panda$core$String* $tmp5677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5676, &$s5678);
$fn5680 $tmp5679 = ($fn5680) ((panda$io$OutputStream*) $tmp5669)->$class->vtable[17];
$tmp5679(((panda$io$OutputStream*) $tmp5669), $tmp5677);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5670));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5671));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5672));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5675));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5676));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5677));
// line 1427
panda$core$Int64 $tmp5681 = *(&local2);
panda$core$Int64 $tmp5682 = (panda$core$Int64) {1};
int64_t $tmp5683 = $tmp5681.value;
int64_t $tmp5684 = $tmp5682.value;
int64_t $tmp5685 = $tmp5683 + $tmp5684;
panda$core$Int64 $tmp5686 = (panda$core$Int64) {$tmp5685};
*(&local2) = $tmp5686;
// line 1428
panda$core$String* $tmp5687 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5687));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s5688));
*(&local1) = &$s5689;
goto block2;
block2:;
// line 1430
panda$collections$Array** $tmp5690 = &param1->parameters;
panda$collections$Array* $tmp5691 = *$tmp5690;
ITable* $tmp5692 = ((panda$collections$Iterable*) $tmp5691)->$class->itable;
while ($tmp5692->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp5692 = $tmp5692->next;
}
$fn5694 $tmp5693 = $tmp5692->methods[0];
panda$collections$Iterator* $tmp5695 = $tmp5693(((panda$collections$Iterable*) $tmp5691));
goto block3;
block3:;
ITable* $tmp5696 = $tmp5695->$class->itable;
while ($tmp5696->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp5696 = $tmp5696->next;
}
$fn5698 $tmp5697 = $tmp5696->methods[0];
panda$core$Bit $tmp5699 = $tmp5697($tmp5695);
bool $tmp5700 = $tmp5699.value;
if ($tmp5700) goto block5; else goto block4;
block4:;
*(&local3) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp5701 = $tmp5695->$class->itable;
while ($tmp5701->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp5701 = $tmp5701->next;
}
$fn5703 $tmp5702 = $tmp5701->methods[1];
panda$core$Object* $tmp5704 = $tmp5702($tmp5695);
panda$core$Panda$unref$panda$core$Object$Q($tmp5704);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp5705 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5705));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp5704)));
*(&local3) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp5704);
// line 1431
panda$io$IndentedOutputStream** $tmp5706 = &param0->out;
panda$io$IndentedOutputStream* $tmp5707 = *$tmp5706;
panda$core$String* $tmp5708 = *(&local1);
panda$core$String* $tmp5709 = panda$core$String$convert$R$panda$core$String($tmp5708);
panda$core$String* $tmp5710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5709, &$s5711);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp5712 = *(&local3);
org$pandalanguage$pandac$Type** $tmp5713 = &$tmp5712->type;
org$pandalanguage$pandac$Type* $tmp5714 = *$tmp5713;
panda$core$String* $tmp5715 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp5714);
panda$core$String* $tmp5716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5710, $tmp5715);
panda$core$String* $tmp5717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5716, &$s5718);
panda$core$Int64 $tmp5719 = *(&local2);
panda$core$Int64$wrapper* $tmp5720;
$tmp5720 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp5720->value = $tmp5719;
panda$core$String* $tmp5721 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5717, ((panda$core$Object*) $tmp5720));
panda$core$String* $tmp5722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5721, &$s5723);
$fn5725 $tmp5724 = ($fn5725) ((panda$io$OutputStream*) $tmp5707)->$class->vtable[17];
$tmp5724(((panda$io$OutputStream*) $tmp5707), $tmp5722);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5709));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5710));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5715));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5716));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5717));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5720));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5721));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5722));
// line 1432
panda$core$Int64 $tmp5726 = *(&local2);
panda$core$Int64 $tmp5727 = (panda$core$Int64) {1};
int64_t $tmp5728 = $tmp5726.value;
int64_t $tmp5729 = $tmp5727.value;
int64_t $tmp5730 = $tmp5728 + $tmp5729;
panda$core$Int64 $tmp5731 = (panda$core$Int64) {$tmp5730};
*(&local2) = $tmp5731;
// line 1433
panda$core$String* $tmp5732 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5732));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s5733));
*(&local1) = &$s5734;
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp5735 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5735));
// unreffing p
*(&local3) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5695));
// line 1435
panda$io$IndentedOutputStream** $tmp5736 = &param0->out;
panda$io$IndentedOutputStream* $tmp5737 = *$tmp5736;
$fn5739 $tmp5738 = ($fn5739) ((panda$io$OutputStream*) $tmp5737)->$class->vtable[19];
$tmp5738(((panda$io$OutputStream*) $tmp5737), &$s5740);
// line 1436
panda$io$MemoryOutputStream* $tmp5741 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp5741);
*(&local4) = ((panda$io$MemoryOutputStream*) NULL);
panda$io$MemoryOutputStream* $tmp5742 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5742));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5741));
*(&local4) = $tmp5741;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5741));
// line 1437
panda$io$IndentedOutputStream* $tmp5743 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream* $tmp5744 = *(&local4);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp5743, ((panda$io$OutputStream*) $tmp5744));
panda$io$IndentedOutputStream** $tmp5745 = &param0->out;
panda$io$IndentedOutputStream* $tmp5746 = *$tmp5745;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5746));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5743));
panda$io$IndentedOutputStream** $tmp5747 = &param0->out;
*$tmp5747 = $tmp5743;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5743));
// line 1438
org$pandalanguage$pandac$CCodeGenerator$writeIR$org$pandalanguage$pandac$IR(param0, param2);
// line 1439
panda$io$IndentedOutputStream** $tmp5748 = &param0->methods;
panda$io$IndentedOutputStream* $tmp5749 = *$tmp5748;
panda$io$MemoryOutputStream** $tmp5750 = &param0->methodHeaderBuffer;
panda$io$MemoryOutputStream* $tmp5751 = *$tmp5750;
$fn5753 $tmp5752 = ($fn5753) ((panda$io$OutputStream*) $tmp5749)->$class->vtable[20];
$tmp5752(((panda$io$OutputStream*) $tmp5749), ((panda$core$Object*) $tmp5751));
// line 1440
panda$io$IndentedOutputStream** $tmp5754 = &param0->methods;
panda$io$IndentedOutputStream* $tmp5755 = *$tmp5754;
panda$io$MemoryOutputStream* $tmp5756 = *(&local4);
$fn5758 $tmp5757 = ($fn5758) ((panda$io$OutputStream*) $tmp5755)->$class->vtable[20];
$tmp5757(((panda$io$OutputStream*) $tmp5755), ((panda$core$Object*) $tmp5756));
// line 1441
panda$io$IndentedOutputStream** $tmp5759 = &param0->methods;
panda$io$IndentedOutputStream* $tmp5760 = *$tmp5759;
$fn5762 $tmp5761 = ($fn5762) ((panda$io$OutputStream*) $tmp5760)->$class->vtable[19];
$tmp5761(((panda$io$OutputStream*) $tmp5760), &$s5763);
// line 1442
panda$io$IndentedOutputStream* $tmp5764 = *(&local0);
panda$io$IndentedOutputStream** $tmp5765 = &param0->out;
panda$io$IndentedOutputStream* $tmp5766 = *$tmp5765;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5766));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5764));
panda$io$IndentedOutputStream** $tmp5767 = &param0->out;
*$tmp5767 = $tmp5764;
panda$io$MemoryOutputStream* $tmp5768 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5768));
// unreffing buffer
*(&local4) = ((panda$io$MemoryOutputStream*) NULL);
panda$core$String* $tmp5769 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5769));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$io$IndentedOutputStream* $tmp5770 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5770));
// unreffing old
*(&local0) = ((panda$io$IndentedOutputStream*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

panda$io$File* local0 = NULL;
// line 1447
org$pandalanguage$pandac$ClassDecl** $tmp5771 = &param0->currentClass;
org$pandalanguage$pandac$ClassDecl* $tmp5772 = *$tmp5771;
panda$core$Bit $tmp5773 = panda$core$Bit$init$builtin_bit($tmp5772 == NULL);
bool $tmp5774 = $tmp5773.value;
if ($tmp5774) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp5775 = (panda$core$Int64) {1447};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s5776, $tmp5775);
abort(); // unreachable
block1:;
// line 1448
org$pandalanguage$pandac$ClassDecl** $tmp5777 = &param0->currentClass;
org$pandalanguage$pandac$ClassDecl* $tmp5778 = *$tmp5777;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5778));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$ClassDecl** $tmp5779 = &param0->currentClass;
*$tmp5779 = param1;
// line 1449
panda$collections$HashSet** $tmp5780 = &param0->imports;
panda$collections$HashSet* $tmp5781 = *$tmp5780;
panda$collections$HashSet$clear($tmp5781);
// line 1450
panda$io$MemoryOutputStream** $tmp5782 = &param0->strings;
panda$io$MemoryOutputStream* $tmp5783 = *$tmp5782;
panda$io$MemoryOutputStream$clear($tmp5783);
// line 1451
panda$io$MemoryOutputStream** $tmp5784 = &param0->declarations;
panda$io$MemoryOutputStream* $tmp5785 = *$tmp5784;
panda$io$MemoryOutputStream$clear($tmp5785);
// line 1452
panda$io$MemoryOutputStream** $tmp5786 = &param0->types;
panda$io$MemoryOutputStream* $tmp5787 = *$tmp5786;
panda$io$MemoryOutputStream$clear($tmp5787);
// line 1453
panda$io$MemoryOutputStream** $tmp5788 = &param0->methodsBuffer;
panda$io$MemoryOutputStream* $tmp5789 = *$tmp5788;
panda$io$MemoryOutputStream$clear($tmp5789);
// line 1454
panda$io$MemoryOutputStream** $tmp5790 = &param0->shimsBuffer;
panda$io$MemoryOutputStream* $tmp5791 = *$tmp5790;
panda$io$MemoryOutputStream$clear($tmp5791);
// line 1455
panda$collections$HashSet** $tmp5792 = &param0->declared;
panda$collections$HashSet* $tmp5793 = *$tmp5792;
panda$collections$HashSet$clear($tmp5793);
// line 1456
panda$collections$HashSet** $tmp5794 = &param0->writtenTypes;
panda$collections$HashSet* $tmp5795 = *$tmp5794;
panda$collections$HashSet$clear($tmp5795);
// line 1457
panda$collections$HashSet** $tmp5796 = &param0->writtenWrappers;
panda$collections$HashSet* $tmp5797 = *$tmp5796;
panda$collections$HashSet$clear($tmp5797);
// line 1458
panda$collections$HashMap** $tmp5798 = &param0->classConstants;
panda$collections$HashMap* $tmp5799 = *$tmp5798;
panda$collections$HashMap$clear($tmp5799);
// line 1459
panda$collections$IdentityMap** $tmp5800 = &param0->variableNames;
panda$collections$IdentityMap* $tmp5801 = *$tmp5800;
panda$collections$IdentityMap$clear($tmp5801);
// line 1460
panda$core$Int64 $tmp5802 = (panda$core$Int64) {0};
panda$core$Int64* $tmp5803 = &param0->varCount;
*$tmp5803 = $tmp5802;
// line 1461
panda$collections$IdentityMap** $tmp5804 = &param0->methodShims;
panda$collections$IdentityMap* $tmp5805 = *$tmp5804;
panda$collections$IdentityMap$clear($tmp5805);
// line 1462
panda$core$Weak** $tmp5806 = &param0->hCodeGen;
panda$core$Weak* $tmp5807 = *$tmp5806;
panda$core$Object* $tmp5808 = panda$core$Weak$get$R$panda$core$Weak$T($tmp5807);
panda$core$Panda$unref$panda$core$Object$Q($tmp5808);
panda$io$File* $tmp5809 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(((org$pandalanguage$pandac$HCodeGenerator*) $tmp5808), param1, &$s5810);
*(&local0) = ((panda$io$File*) NULL);
panda$io$File* $tmp5811 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5811));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5809));
*(&local0) = $tmp5809;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5809));
// line 1463
panda$io$File* $tmp5812 = *(&local0);
panda$io$File* $tmp5813 = panda$io$File$parent$R$panda$io$File$Q($tmp5812);
panda$io$File$createDirectories($tmp5813);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5813));
// line 1464
panda$io$IndentedOutputStream* $tmp5814 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$File* $tmp5815 = *(&local0);
panda$io$OutputStream* $tmp5816 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp5815);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp5814, $tmp5816);
panda$io$IndentedOutputStream** $tmp5817 = &param0->out;
panda$io$IndentedOutputStream* $tmp5818 = *$tmp5817;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5818));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5814));
panda$io$IndentedOutputStream** $tmp5819 = &param0->out;
*$tmp5819 = $tmp5814;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5814));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5816));
// line 1465
panda$io$IndentedOutputStream** $tmp5820 = &param0->out;
panda$io$IndentedOutputStream* $tmp5821 = *$tmp5820;
$fn5823 $tmp5822 = ($fn5823) ((panda$io$OutputStream*) $tmp5821)->$class->vtable[22];
$tmp5822(((panda$io$OutputStream*) $tmp5821));
// line 1466
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp5824 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, param1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5824));
// line 1467
panda$core$Weak** $tmp5825 = &param0->compiler;
panda$core$Weak* $tmp5826 = *$tmp5825;
panda$core$Object* $tmp5827 = panda$core$Weak$get$R$panda$core$Weak$T($tmp5826);
panda$core$Panda$unref$panda$core$Object$Q($tmp5827);
panda$core$Bit $tmp5828 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp5827), param1);
bool $tmp5829 = $tmp5828.value;
if ($tmp5829) goto block3; else goto block4;
block3:;
// line 1468
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp5830 = org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, param1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5830));
goto block4;
block4:;
panda$io$File* $tmp5831 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5831));
// unreffing path
*(&local0) = ((panda$io$File*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

// line 1474
org$pandalanguage$pandac$CCodeGenerator$finish(param0);
// line 1475
org$pandalanguage$pandac$ClassDecl** $tmp5832 = &param0->currentClass;
org$pandalanguage$pandac$ClassDecl* $tmp5833 = *$tmp5832;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5833));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
org$pandalanguage$pandac$ClassDecl** $tmp5834 = &param0->currentClass;
*$tmp5834 = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* param0) {

// line 1480
panda$io$IndentedOutputStream** $tmp5835 = &param0->out;
panda$io$IndentedOutputStream* $tmp5836 = *$tmp5835;
panda$io$MemoryOutputStream** $tmp5837 = &param0->includes;
panda$io$MemoryOutputStream* $tmp5838 = *$tmp5837;
$fn5840 $tmp5839 = ($fn5840) ((panda$io$OutputStream*) $tmp5836)->$class->vtable[20];
$tmp5839(((panda$io$OutputStream*) $tmp5836), ((panda$core$Object*) $tmp5838));
// line 1481
panda$io$MemoryOutputStream** $tmp5841 = &param0->includes;
panda$io$MemoryOutputStream* $tmp5842 = *$tmp5841;
panda$io$MemoryOutputStream$clear($tmp5842);
// line 1482
panda$io$IndentedOutputStream** $tmp5843 = &param0->out;
panda$io$IndentedOutputStream* $tmp5844 = *$tmp5843;
panda$io$MemoryOutputStream** $tmp5845 = &param0->shimsBuffer;
panda$io$MemoryOutputStream* $tmp5846 = *$tmp5845;
$fn5848 $tmp5847 = ($fn5848) ((panda$io$OutputStream*) $tmp5844)->$class->vtable[20];
$tmp5847(((panda$io$OutputStream*) $tmp5844), ((panda$core$Object*) $tmp5846));
// line 1483
panda$io$MemoryOutputStream** $tmp5849 = &param0->shimsBuffer;
panda$io$MemoryOutputStream* $tmp5850 = *$tmp5849;
panda$io$MemoryOutputStream$clear($tmp5850);
// line 1484
panda$io$IndentedOutputStream** $tmp5851 = &param0->out;
panda$io$IndentedOutputStream* $tmp5852 = *$tmp5851;
panda$io$MemoryOutputStream** $tmp5853 = &param0->types;
panda$io$MemoryOutputStream* $tmp5854 = *$tmp5853;
$fn5856 $tmp5855 = ($fn5856) ((panda$io$OutputStream*) $tmp5852)->$class->vtable[20];
$tmp5855(((panda$io$OutputStream*) $tmp5852), ((panda$core$Object*) $tmp5854));
// line 1485
panda$io$MemoryOutputStream** $tmp5857 = &param0->types;
panda$io$MemoryOutputStream* $tmp5858 = *$tmp5857;
panda$io$MemoryOutputStream$clear($tmp5858);
// line 1486
panda$io$IndentedOutputStream** $tmp5859 = &param0->out;
panda$io$IndentedOutputStream* $tmp5860 = *$tmp5859;
panda$io$MemoryOutputStream** $tmp5861 = &param0->strings;
panda$io$MemoryOutputStream* $tmp5862 = *$tmp5861;
$fn5864 $tmp5863 = ($fn5864) ((panda$io$OutputStream*) $tmp5860)->$class->vtable[20];
$tmp5863(((panda$io$OutputStream*) $tmp5860), ((panda$core$Object*) $tmp5862));
// line 1487
panda$io$MemoryOutputStream** $tmp5865 = &param0->strings;
panda$io$MemoryOutputStream* $tmp5866 = *$tmp5865;
panda$io$MemoryOutputStream$clear($tmp5866);
// line 1488
panda$io$IndentedOutputStream** $tmp5867 = &param0->out;
panda$io$IndentedOutputStream* $tmp5868 = *$tmp5867;
panda$io$MemoryOutputStream** $tmp5869 = &param0->methodsBuffer;
panda$io$MemoryOutputStream* $tmp5870 = *$tmp5869;
$fn5872 $tmp5871 = ($fn5872) ((panda$io$OutputStream*) $tmp5868)->$class->vtable[20];
$tmp5871(((panda$io$OutputStream*) $tmp5868), ((panda$core$Object*) $tmp5870));
// line 1489
panda$io$MemoryOutputStream** $tmp5873 = &param0->methodsBuffer;
panda$io$MemoryOutputStream* $tmp5874 = *$tmp5873;
panda$io$MemoryOutputStream$clear($tmp5874);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$cleanup(org$pandalanguage$pandac$CCodeGenerator* param0) {

panda$core$Weak** $tmp5875 = &param0->compiler;
panda$core$Weak* $tmp5876 = *$tmp5875;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5876));
panda$io$File** $tmp5877 = &param0->outDir;
panda$io$File* $tmp5878 = *$tmp5877;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5878));
panda$io$IndentedOutputStream** $tmp5879 = &param0->out;
panda$io$IndentedOutputStream* $tmp5880 = *$tmp5879;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5880));
panda$io$MemoryOutputStream** $tmp5881 = &param0->strings;
panda$io$MemoryOutputStream* $tmp5882 = *$tmp5881;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5882));
panda$collections$HashSet** $tmp5883 = &param0->imports;
panda$collections$HashSet* $tmp5884 = *$tmp5883;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5884));
panda$core$Weak** $tmp5885 = &param0->hCodeGen;
panda$core$Weak* $tmp5886 = *$tmp5885;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5886));
org$pandalanguage$pandac$HCodeGenerator** $tmp5887 = &param0->hCodeGenRetain;
org$pandalanguage$pandac$HCodeGenerator* $tmp5888 = *$tmp5887;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5888));
org$pandalanguage$pandac$ClassDecl** $tmp5889 = &param0->currentClass;
org$pandalanguage$pandac$ClassDecl* $tmp5890 = *$tmp5889;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5890));
panda$io$MemoryOutputStream** $tmp5891 = &param0->includes;
panda$io$MemoryOutputStream* $tmp5892 = *$tmp5891;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5892));
panda$io$MemoryOutputStream** $tmp5893 = &param0->declarations;
panda$io$MemoryOutputStream* $tmp5894 = *$tmp5893;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5894));
panda$io$MemoryOutputStream** $tmp5895 = &param0->types;
panda$io$MemoryOutputStream* $tmp5896 = *$tmp5895;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5896));
panda$io$MemoryOutputStream** $tmp5897 = &param0->methodsBuffer;
panda$io$MemoryOutputStream* $tmp5898 = *$tmp5897;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5898));
panda$io$IndentedOutputStream** $tmp5899 = &param0->methods;
panda$io$IndentedOutputStream* $tmp5900 = *$tmp5899;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5900));
panda$io$MemoryOutputStream** $tmp5901 = &param0->methodHeaderBuffer;
panda$io$MemoryOutputStream* $tmp5902 = *$tmp5901;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5902));
panda$io$IndentedOutputStream** $tmp5903 = &param0->methodHeader;
panda$io$IndentedOutputStream* $tmp5904 = *$tmp5903;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5904));
panda$io$MemoryOutputStream** $tmp5905 = &param0->shimsBuffer;
panda$io$MemoryOutputStream* $tmp5906 = *$tmp5905;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5906));
panda$io$IndentedOutputStream** $tmp5907 = &param0->shims;
panda$io$IndentedOutputStream* $tmp5908 = *$tmp5907;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5908));
panda$collections$HashSet** $tmp5909 = &param0->declared;
panda$collections$HashSet* $tmp5910 = *$tmp5909;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5910));
panda$collections$HashSet** $tmp5911 = &param0->writtenTypes;
panda$collections$HashSet* $tmp5912 = *$tmp5911;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5912));
panda$collections$HashSet** $tmp5913 = &param0->writtenWrappers;
panda$collections$HashSet* $tmp5914 = *$tmp5913;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5914));
panda$collections$HashMap** $tmp5915 = &param0->classConstants;
panda$collections$HashMap* $tmp5916 = *$tmp5915;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5916));
panda$collections$IdentityMap** $tmp5917 = &param0->variableNames;
panda$collections$IdentityMap* $tmp5918 = *$tmp5917;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5918));
panda$core$String** $tmp5919 = &param0->currentBlock;
panda$core$String* $tmp5920 = *$tmp5919;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5920));
org$pandalanguage$pandac$MethodDecl** $tmp5921 = &param0->currentMethod;
org$pandalanguage$pandac$MethodDecl* $tmp5922 = *$tmp5921;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5922));
panda$core$String** $tmp5923 = &param0->returnValueVar;
panda$core$String* $tmp5924 = *$tmp5923;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5924));
panda$collections$Stack** $tmp5925 = &param0->enclosingContexts;
panda$collections$Stack* $tmp5926 = *$tmp5925;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5926));
panda$collections$IdentityMap** $tmp5927 = &param0->methodShims;
panda$collections$IdentityMap* $tmp5928 = *$tmp5927;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5928));
panda$collections$IdentityMap** $tmp5929 = &param0->choiceDataSizes;
panda$collections$IdentityMap* $tmp5930 = *$tmp5929;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5930));
panda$collections$HashMap** $tmp5931 = &param0->refs;
panda$collections$HashMap* $tmp5932 = *$tmp5931;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5932));
org$pandalanguage$pandac$IR** $tmp5933 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp5934 = *$tmp5933;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5934));
return;

}

