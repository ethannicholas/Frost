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

typedef void (*$fn160)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn243)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn254)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn266)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn278)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn311)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn341)(panda$collections$CollectionView*);
typedef void (*$fn404)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn459)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn463)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn468)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn481)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn485)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn490)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn581)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn585)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn590)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn667)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn729)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn733)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn738)(panda$collections$Iterator*);
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
typedef void (*$fn2646)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2659)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2677)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2687)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2702)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2726)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2764)(panda$collections$CollectionView*);
typedef void (*$fn2802)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn2834)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2858)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn2872)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2878)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2909)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2919)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2922)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2937)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2947)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2964)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn2973)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn2981)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3014)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3023)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn3032)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn3044)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3047)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3062)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3072)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn3101)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3236)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3266)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn3367)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3371)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3375)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3380)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3389)(panda$core$Formattable*, panda$core$String*);
typedef void (*$fn3399)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3405)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn3414)(panda$collections$Key*);
typedef void (*$fn3421)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn3436)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3679)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn3700)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn3716)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn3726)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn3756)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn3772)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn3782)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn3817)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn3993)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4010)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4015)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4035)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn4052)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn4103)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4141)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4147)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4151)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4156)(panda$collections$Iterator*);
typedef void (*$fn4171)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4179)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4189)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn4208)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn4225)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4238)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4244)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4248)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4253)(panda$collections$Iterator*);
typedef void (*$fn4260)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4266)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4274)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4309)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4372)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4407)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4430)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4445)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4467)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4481)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4506)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4543)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4555)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4570)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4581)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4596)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4607)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4622)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4659)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4677)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4688)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4711)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4728)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4747)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn4762)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn4774)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn4786)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn4797)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn4827)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4857)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4871)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4875)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn4896)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn4914)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4926)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4938)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4949)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4955)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4959)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4964)(panda$collections$Iterator*);
typedef void (*$fn4971)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4977)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4985)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5002)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5065)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5385)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn5403)(panda$collections$CollectionView*);
typedef void (*$fn5447)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5460)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5465)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn5494)(panda$collections$CollectionView*);
typedef void (*$fn5540)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn5552)(panda$collections$CollectionView*);
typedef void (*$fn5649)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5671)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5685)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5689)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5694)(panda$collections$Iterator*);
typedef void (*$fn5716)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5730)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5744)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn5749)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn5753)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5814)(panda$io$OutputStream*);
typedef void (*$fn5831)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn5839)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn5847)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn5855)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn5863)(panda$io$OutputStream*, panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 39, -2051020738728542693, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x74\x79\x70\x65\x20", 16, 7914278075631058822, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x63\x4d\x65\x74\x68\x6f\x64\x54\x79\x70\x65\x28\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x73\x65\x6c\x66\x54\x79\x70\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 175, -7437024946064129403, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x66\x6e", 3, 1407949, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20", 8, 23394968824372186, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x28\x2a", 3, 1360815, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x28", 2, 14382, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6c", 2, 13945, NULL };
static panda$core$String $s447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x38", 1, 157, NULL };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x36", 2, 15204, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x33\x32", 2, 15402, NULL };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s719 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
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
static panda$core$String $s2609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static panda$core$String $s2626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x29", 2, 19635, NULL };
static panda$core$String $s2639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static panda$core$String $s2641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static panda$core$String $s2649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static panda$core$String $s2651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, 318867264039102424, NULL };
static panda$core$String $s2657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s2671 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static panda$core$String $s2688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2795 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static panda$core$String $s2800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6c\x6c\x69\x6e\x67\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20", 17, 6273213310080951380, NULL };
static panda$core$String $s2821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x61\x20\x74\x61\x72\x67\x65\x74", 17, 4566770767977439161, NULL };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s2849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x67\x65\x74\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x28\x74\x61\x72\x67\x65\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x6d\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2c\x20\x69\x73\x53\x75\x70\x65\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x6f\x75\x74\x3a\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 233, -6328376933645788478, NULL };
static panda$core$String $s2866 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2874 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static panda$core$String $s2903 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2907 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2920 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s2935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c\x3b", 8, 14324497440495800, NULL };
static panda$core$String $s2948 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2958 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static panda$core$String $s2993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s2997 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3001 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 17, 3278627383872437575, NULL };
static panda$core$String $s3003 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20", 22, -5027409806946055905, NULL };
static panda$core$String $s3009 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x29\x3b", 15, -9084967859609473468, NULL };
static panda$core$String $s3018 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x76\x61\x6c\x75\x65\x20\x3d\x20", 10, -5658520382000078270, NULL };
static panda$core$String $s3021 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3045 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s3060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x3b", 8, 14324500803727928, NULL };
static panda$core$String $s3073 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3076 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3078 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3082 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3086 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3091 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2d\x3e\x76\x61\x6c\x75\x65", 8, 15272754413107790, NULL };
static panda$core$String $s3118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c\x20\x3f\x20", 11, 7728168270859090233, NULL };
static panda$core$String $s3124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20\x28", 4, 137624963, NULL };
static panda$core$String $s3128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x30\x20\x7d\x29", 19, 3502995608209124108, NULL };
static panda$core$String $s3136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s3141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x74\x72\x75\x65\x20\x7d\x29", 9, 1573697403055851823, NULL };
static panda$core$String $s3144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s3155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s3319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x30", 2, 14895, NULL };
static panda$core$String $s3328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73", 2, 13952, NULL };
static panda$core$String $s3346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s3356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s3360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x24\x63\x6c\x61\x73\x73\x2c\x20", 46, -5089590097621792313, NULL };
static panda$core$String $s3362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x68\x61\x72\x38\x2a\x29\x20\x22", 21, 2848555729212071077, NULL };
static panda$core$String $s3391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s3393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x3e\x32", 3, 1526261, NULL };
static panda$core$String $s3395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x78", 2, 19613, NULL };
static panda$core$String $s3397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x2c\x20", 3, 1381611, NULL };
static panda$core$String $s3411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x4e\x55\x4c\x4c\x20\x7d\x3b", 9, 1573656756204980508, NULL };
static panda$core$String $s3424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x74\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3a\x20", 14, 4299600041167827879, NULL };
static panda$core$String $s3443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x66\x61\x6c\x73\x65\x20\x7d\x29", 23, 6429304196845160675, NULL };
static panda$core$String $s3473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s3475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x4e\x55\x4c\x4c\x29", 7, 151080389671230, NULL };
static panda$core$String $s3480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x67\x65\x74\x4e\x75\x6c\x6c\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x28\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 139, 5606836112822051941, NULL };
static panda$core$String $s3510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x26\x6c\x6f\x63\x61\x6c", 7, 150085078960302, NULL };
static panda$core$String $s3512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x6d", 5, 22265977430, NULL };
static panda$core$String $s3553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x20\x72\x65\x66\x3a\x20", 15, -4631094845120441450, NULL };
static panda$core$String $s3585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x76\x61\x6c\x75\x65\x20", 18, -3453142811018688841, NULL };
static panda$core$String $s3606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x67\x65\x74\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x28\x76\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 139, -7969864358283313808, NULL };
static panda$core$String $s3684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s3734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s3736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s3741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x3d\x20\x4e\x55\x4c\x4c", 8, 14324797439511602, NULL };
static panda$core$String $s3764 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s3791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s3796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c", 8, 14295074875294774, NULL };
static panda$core$String $s3849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s3850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s3855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s3856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s3861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s3871 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s3876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s3877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s3882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s3883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s3888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s3889 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s3897 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3906 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s3907 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s3915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s3916 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s3924 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s3925 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s3933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s3934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s3939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s3940 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s3945 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s3946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s3951 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s3952 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s3957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s3958 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s3964 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x3a\x20", 22, 2546911445157482260, NULL };
static panda$core$String $s3966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s3975 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3983 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4006 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s4008 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4023 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s4025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s4029 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s4033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4043 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s4049 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 16, -2035714527346219032, NULL };
static panda$core$String $s4059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s4061 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4067 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s4069 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4082 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4086 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s4091 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 19, -1805496395169551456, NULL };
static panda$core$String $s4096 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s4118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s4130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s4139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s4143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x3b", 2, 22885, NULL };
static panda$core$String $s4219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s4294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s4307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s4331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s4351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s4355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s4359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x29\x20\x28", 4, 147754556, NULL };
static panda$core$String $s4363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x64\x61\x74\x61\x20", 8, 15719379260890086, NULL };
static panda$core$String $s4367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b\x20", 2, 14576, NULL };
static panda$core$String $s4369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s4392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s4396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x26", 4, 137655564, NULL };
static panda$core$String $s4400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s4405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static panda$core$String $s4424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static panda$core$String $s4435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static panda$core$String $s4437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, 318867264039102424, NULL };
static panda$core$String $s4443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s4461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static panda$core$String $s4482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s4492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static panda$core$String $s4504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s4524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s4532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s4536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static panda$core$String $s4540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s4560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x2a", 4, 137655568, NULL };
static panda$core$String $s4568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x2d", 4, 137655571, NULL };
static panda$core$String $s4594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x21", 4, 137655559, NULL };
static panda$core$String $s4620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s4644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28\x28", 5, 13903212206, NULL };
static panda$core$String $s4648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x29\x20\x70\x61\x6e\x64\x61\x5a\x41\x6c\x6c\x6f\x63\x28", 15, 5261903096392821497, NULL };
static panda$core$String $s4652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static panda$core$String $s4656 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static panda$core$String $s4673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x46\x72\x65\x65\x28", 10, -5790438204225352665, NULL };
static panda$core$String $s4675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s4697 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4701 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4705 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s4709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s4733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4737 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s4745 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x69\x7a\x65\x20\x66\x6f\x72\x20\x74\x79\x70\x65\x20", 22, 6026307984013519672, NULL };
static panda$core$String $s4779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4780 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s4791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4795 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s4802 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x70\x61\x6e\x64\x61\x52\x65\x61\x6c\x6c\x6f\x63\x28", 15, 2191018519584705024, NULL };
static panda$core$String $s4806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static panda$core$String $s4815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static panda$core$String $s4824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s4847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s4851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x20\x3d\x20", 4, 200211019, NULL };
static panda$core$String $s4855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s4869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x3b", 7, 229300545255632, NULL };
static panda$core$String $s4889 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4908 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4912 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s4920 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4924 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s4936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s4945 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s4947 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4951 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4952 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4980 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4986 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s4994 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s4996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s5000 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5061 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x2f\x20", 3, 1514527, NULL };
static panda$core$String $s5063 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x62\x6f\x72\x74\x28\x29\x3b\x20\x2f\x2f\x20\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 23, 8273563093259754029, NULL };
static panda$core$String $s5391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x20", 22, 6964540114321148707, NULL };
static panda$core$String $s5393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s5426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 21864007024, NULL };
static panda$core$String $s5428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c", 7, 141826707331641, NULL };
static panda$core$String $s5466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s5528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x3b", 2, 16118, NULL };
static panda$core$String $s5543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s5545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s5643 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s5647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s5651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x61\x72\x61\x6d", 6, 1409599243562, NULL };
static panda$core$String $s5669 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s5680 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s5702 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x61\x72\x61\x6d", 6, 1409599243562, NULL };
static panda$core$String $s5714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s5725 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s5731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s5754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s5767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 3981553016567077520, NULL };
static panda$core$String $s5801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };

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
bool $tmp11 = $tmp10 != ((panda$core$Weak*) NULL);
if ($tmp11) goto block1; else goto block2;
block1:;
panda$core$Object* $tmp12 = panda$core$Weak$get$R$panda$core$Weak$T($tmp10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler*) $tmp12)));
panda$core$Panda$unref$panda$core$Object$Q($tmp12);
goto block2;
block2:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$Weak** $tmp13 = &param0->compiler;
*$tmp13 = $tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
// line 45
panda$io$MemoryOutputStream* $tmp14 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp14);
panda$io$MemoryOutputStream** $tmp15 = &param0->strings;
panda$io$MemoryOutputStream* $tmp16 = *$tmp15;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
panda$io$MemoryOutputStream** $tmp17 = &param0->strings;
*$tmp17 = $tmp14;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
// line 47
panda$collections$HashSet* $tmp18 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp18);
panda$collections$HashSet** $tmp19 = &param0->imports;
panda$collections$HashSet* $tmp20 = *$tmp19;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$collections$HashSet** $tmp21 = &param0->imports;
*$tmp21 = $tmp18;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
// line 54
org$pandalanguage$pandac$ClassDecl** $tmp22 = &param0->currentClass;
org$pandalanguage$pandac$ClassDecl* $tmp23 = *$tmp22;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
org$pandalanguage$pandac$ClassDecl** $tmp24 = &param0->currentClass;
*$tmp24 = ((org$pandalanguage$pandac$ClassDecl*) NULL);
// line 174
panda$io$MemoryOutputStream* $tmp25 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp25);
panda$io$MemoryOutputStream** $tmp26 = &param0->includes;
panda$io$MemoryOutputStream* $tmp27 = *$tmp26;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
panda$io$MemoryOutputStream** $tmp28 = &param0->includes;
*$tmp28 = $tmp25;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
// line 176
panda$io$MemoryOutputStream* $tmp29 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp29);
panda$io$MemoryOutputStream** $tmp30 = &param0->declarations;
panda$io$MemoryOutputStream* $tmp31 = *$tmp30;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
panda$io$MemoryOutputStream** $tmp32 = &param0->declarations;
*$tmp32 = $tmp29;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
// line 178
panda$io$MemoryOutputStream* $tmp33 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp33);
panda$io$MemoryOutputStream** $tmp34 = &param0->types;
panda$io$MemoryOutputStream* $tmp35 = *$tmp34;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
panda$io$MemoryOutputStream** $tmp36 = &param0->types;
*$tmp36 = $tmp33;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
// line 180
panda$io$MemoryOutputStream* $tmp37 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp37);
panda$io$MemoryOutputStream** $tmp38 = &param0->methodsBuffer;
panda$io$MemoryOutputStream* $tmp39 = *$tmp38;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
panda$io$MemoryOutputStream** $tmp40 = &param0->methodsBuffer;
*$tmp40 = $tmp37;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
// line 182
panda$io$IndentedOutputStream* $tmp41 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream** $tmp42 = &param0->methodsBuffer;
panda$io$MemoryOutputStream* $tmp43 = *$tmp42;
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp41, ((panda$io$OutputStream*) $tmp43));
panda$io$IndentedOutputStream** $tmp44 = &param0->methods;
panda$io$IndentedOutputStream* $tmp45 = *$tmp44;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
panda$io$IndentedOutputStream** $tmp46 = &param0->methods;
*$tmp46 = $tmp41;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// line 184
panda$io$MemoryOutputStream* $tmp47 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp47);
panda$io$MemoryOutputStream** $tmp48 = &param0->methodHeaderBuffer;
panda$io$MemoryOutputStream* $tmp49 = *$tmp48;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
panda$io$MemoryOutputStream** $tmp50 = &param0->methodHeaderBuffer;
*$tmp50 = $tmp47;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
// line 186
panda$io$IndentedOutputStream* $tmp51 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream** $tmp52 = &param0->methodHeaderBuffer;
panda$io$MemoryOutputStream* $tmp53 = *$tmp52;
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp51, ((panda$io$OutputStream*) $tmp53));
panda$io$IndentedOutputStream** $tmp54 = &param0->methodHeader;
panda$io$IndentedOutputStream* $tmp55 = *$tmp54;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
panda$io$IndentedOutputStream** $tmp56 = &param0->methodHeader;
*$tmp56 = $tmp51;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// line 188
panda$io$MemoryOutputStream* $tmp57 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp57);
panda$io$MemoryOutputStream** $tmp58 = &param0->shimsBuffer;
panda$io$MemoryOutputStream* $tmp59 = *$tmp58;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
panda$io$MemoryOutputStream** $tmp60 = &param0->shimsBuffer;
*$tmp60 = $tmp57;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
// line 190
panda$io$IndentedOutputStream* $tmp61 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream** $tmp62 = &param0->shimsBuffer;
panda$io$MemoryOutputStream* $tmp63 = *$tmp62;
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp61, ((panda$io$OutputStream*) $tmp63));
panda$io$IndentedOutputStream** $tmp64 = &param0->shims;
panda$io$IndentedOutputStream* $tmp65 = *$tmp64;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
panda$io$IndentedOutputStream** $tmp66 = &param0->shims;
*$tmp66 = $tmp61;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
// line 192
panda$collections$HashSet* $tmp67 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp67);
panda$collections$HashSet** $tmp68 = &param0->declared;
panda$collections$HashSet* $tmp69 = *$tmp68;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
panda$collections$HashSet** $tmp70 = &param0->declared;
*$tmp70 = $tmp67;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// line 194
panda$collections$HashSet* $tmp71 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp71);
panda$collections$HashSet** $tmp72 = &param0->writtenTypes;
panda$collections$HashSet* $tmp73 = *$tmp72;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
panda$collections$HashSet** $tmp74 = &param0->writtenTypes;
*$tmp74 = $tmp71;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
// line 196
panda$collections$HashSet* $tmp75 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp75);
panda$collections$HashSet** $tmp76 = &param0->writtenWrappers;
panda$collections$HashSet* $tmp77 = *$tmp76;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
panda$collections$HashSet** $tmp78 = &param0->writtenWrappers;
*$tmp78 = $tmp75;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// line 198
panda$collections$HashMap* $tmp79 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp79);
panda$collections$HashMap** $tmp80 = &param0->classConstants;
panda$collections$HashMap* $tmp81 = *$tmp80;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
panda$collections$HashMap** $tmp82 = &param0->classConstants;
*$tmp82 = $tmp79;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
// line 200
panda$collections$IdentityMap* $tmp83 = (panda$collections$IdentityMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$IdentityMap$class);
panda$collections$IdentityMap$init($tmp83);
panda$collections$IdentityMap** $tmp84 = &param0->variableNames;
panda$collections$IdentityMap* $tmp85 = *$tmp84;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
panda$collections$IdentityMap** $tmp86 = &param0->variableNames;
*$tmp86 = $tmp83;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
// line 208
panda$collections$Stack* $tmp87 = (panda$collections$Stack*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Stack$class);
panda$collections$Stack$init($tmp87);
panda$collections$Stack** $tmp88 = &param0->enclosingContexts;
panda$collections$Stack* $tmp89 = *$tmp88;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
panda$collections$Stack** $tmp90 = &param0->enclosingContexts;
*$tmp90 = $tmp87;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
// line 210
panda$core$Int64 $tmp91 = (panda$core$Int64) {0};
panda$core$Int64* $tmp92 = &param0->varCount;
*$tmp92 = $tmp91;
// line 212
panda$collections$IdentityMap* $tmp93 = (panda$collections$IdentityMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$IdentityMap$class);
panda$collections$IdentityMap$init($tmp93);
panda$collections$IdentityMap** $tmp94 = &param0->methodShims;
panda$collections$IdentityMap* $tmp95 = *$tmp94;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
panda$collections$IdentityMap** $tmp96 = &param0->methodShims;
*$tmp96 = $tmp93;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
// line 214
panda$collections$IdentityMap* $tmp97 = (panda$collections$IdentityMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$IdentityMap$class);
panda$collections$IdentityMap$init($tmp97);
panda$collections$IdentityMap** $tmp98 = &param0->choiceDataSizes;
panda$collections$IdentityMap* $tmp99 = *$tmp98;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp99));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
panda$collections$IdentityMap** $tmp100 = &param0->choiceDataSizes;
*$tmp100 = $tmp97;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
// line 216
panda$collections$HashMap* $tmp101 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp101);
panda$collections$HashMap** $tmp102 = &param0->refs;
panda$collections$HashMap* $tmp103 = *$tmp102;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
panda$collections$HashMap** $tmp104 = &param0->refs;
*$tmp104 = $tmp101;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
// line 62
panda$io$File** $tmp105 = &param0->outDir;
panda$io$File* $tmp106 = *$tmp105;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$File** $tmp107 = &param0->outDir;
*$tmp107 = param1;
// line 63
panda$io$IndentedOutputStream* $tmp108 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream* $tmp109 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp109);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp108, ((panda$io$OutputStream*) $tmp109));
panda$io$IndentedOutputStream** $tmp110 = &param0->out;
panda$io$IndentedOutputStream* $tmp111 = *$tmp110;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
panda$io$IndentedOutputStream** $tmp112 = &param0->out;
*$tmp112 = $tmp108;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
// line 64
panda$core$Weak* $tmp113 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp113, ((panda$core$Object*) param2));
panda$core$Weak** $tmp114 = &param0->hCodeGen;
panda$core$Weak* $tmp115 = *$tmp114;
bool $tmp116 = $tmp115 != ((panda$core$Weak*) NULL);
if ($tmp116) goto block3; else goto block4;
block3:;
panda$core$Object* $tmp117 = panda$core$Weak$get$R$panda$core$Weak$T($tmp115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$HCodeGenerator*) $tmp117)));
panda$core$Panda$unref$panda$core$Object$Q($tmp117);
goto block4;
block4:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
panda$core$Weak** $tmp118 = &param0->hCodeGen;
*$tmp118 = $tmp113;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
return;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1) {

// line 68
panda$core$Weak** $tmp119 = &param0->hCodeGen;
panda$core$Weak* $tmp120 = *$tmp119;
panda$core$Object* $tmp121 = panda$core$Weak$get$R$panda$core$Weak$T($tmp120);
panda$core$Panda$unref$panda$core$Object$Q($tmp121);
panda$core$String* $tmp122 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$HCodeGenerator*) $tmp121), param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
return $tmp122;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

// line 72
panda$core$Weak** $tmp123 = &param0->hCodeGen;
panda$core$Weak* $tmp124 = *$tmp123;
panda$core$Object* $tmp125 = panda$core$Weak$get$R$panda$core$Weak$T($tmp124);
panda$core$Panda$unref$panda$core$Object$Q($tmp125);
panda$core$String* $tmp126 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(((org$pandalanguage$pandac$HCodeGenerator*) $tmp125), param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
return $tmp126;

}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

// line 76
panda$core$Weak** $tmp127 = &param0->hCodeGen;
panda$core$Weak* $tmp128 = *$tmp127;
panda$core$Object* $tmp129 = panda$core$Weak$get$R$panda$core$Weak$T($tmp128);
panda$core$Panda$unref$panda$core$Object$Q($tmp129);
panda$core$Int64 $tmp130 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(((org$pandalanguage$pandac$HCodeGenerator*) $tmp129), param1);
return $tmp130;

}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

// line 80
org$pandalanguage$pandac$ClassDecl** $tmp131 = &param0->currentClass;
org$pandalanguage$pandac$ClassDecl* $tmp132 = *$tmp131;
bool $tmp133 = param1 != $tmp132;
panda$core$Bit $tmp134 = panda$core$Bit$init$builtin_bit($tmp133);
return $tmp134;

}
void org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

panda$core$String* local0 = NULL;
// line 84
panda$core$String** $tmp135 = &param1->name;
panda$core$String* $tmp136 = *$tmp135;
panda$core$Bit $tmp137 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp136, &$s138);
bool $tmp139 = $tmp137.value;
if ($tmp139) goto block1; else goto block2;
block1:;
// line 85
return;
block2:;
// line 87
panda$core$Weak** $tmp140 = &param0->hCodeGen;
panda$core$Weak* $tmp141 = *$tmp140;
panda$core$Object* $tmp142 = panda$core$Weak$get$R$panda$core$Weak$T($tmp141);
panda$core$Panda$unref$panda$core$Object$Q($tmp142);
panda$core$String* $tmp143 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$HCodeGenerator*) $tmp142), param1, &$s144);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp145 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp145));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp143));
*(&local0) = $tmp143;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp143));
// line 88
panda$collections$HashSet** $tmp146 = &param0->imports;
panda$collections$HashSet* $tmp147 = *$tmp146;
panda$core$String* $tmp148 = *(&local0);
panda$core$Bit $tmp149 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp147, ((panda$collections$Key*) $tmp148));
panda$core$Bit $tmp150 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp149);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block3; else goto block4;
block3:;
// line 89
panda$io$MemoryOutputStream** $tmp152 = &param0->includes;
panda$io$MemoryOutputStream* $tmp153 = *$tmp152;
panda$core$String* $tmp154 = *(&local0);
panda$core$String* $tmp155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s156, $tmp154);
panda$core$String* $tmp157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp155, &$s158);
$fn160 $tmp159 = ($fn160) ((panda$io$OutputStream*) $tmp153)->$class->vtable[19];
$tmp159(((panda$io$OutputStream*) $tmp153), $tmp157);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
// line 90
panda$collections$HashSet** $tmp161 = &param0->imports;
panda$collections$HashSet* $tmp162 = *$tmp161;
panda$core$String* $tmp163 = *(&local0);
panda$collections$HashSet$add$panda$collections$HashSet$T($tmp162, ((panda$collections$Key*) $tmp163));
goto block4;
block4:;
panda$core$String* $tmp164 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp164));
// unreffing includePath
*(&local0) = ((panda$core$String*) NULL);
return;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
panda$core$Bit local1;
// line 95
panda$core$Bit* $tmp165 = &param1->resolved;
panda$core$Bit $tmp166 = *$tmp165;
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp168 = (panda$core$Int64) {95};
panda$core$String* $tmp169 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s170, ((panda$core$Object*) param1));
panda$core$String* $tmp171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp169, &$s172);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s173, $tmp168, $tmp171);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp169));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
abort(); // unreachable
block1:;
// line 96
panda$core$Bit $tmp174 = org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit(param1);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block3; else goto block4;
block3:;
// line 97
panda$core$Weak** $tmp176 = &param0->compiler;
panda$core$Weak* $tmp177 = *$tmp176;
panda$core$Object* $tmp178 = panda$core$Weak$get$R$panda$core$Weak$T($tmp177);
panda$core$Panda$unref$panda$core$Object$Q($tmp178);
org$pandalanguage$pandac$ClassDecl* $tmp179 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp178), param1);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp180 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
*(&local0) = $tmp179;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
// line 98
org$pandalanguage$pandac$ClassDecl* $tmp181 = *(&local0);
panda$core$Bit $tmp182 = panda$core$Bit$init$builtin_bit($tmp181 != NULL);
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp184 = (panda$core$Int64) {98};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s185, $tmp184);
abort(); // unreachable
block5:;
// line 99
org$pandalanguage$pandac$ClassDecl* $tmp186 = *(&local0);
org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(param0, $tmp186);
org$pandalanguage$pandac$ClassDecl* $tmp187 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp187));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block4;
block4:;
// line 101
org$pandalanguage$pandac$Type$Kind* $tmp188 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp189 = *$tmp188;
panda$core$Int64 $tmp190 = $tmp189.$rawValue;
panda$core$Int64 $tmp191 = (panda$core$Int64) {15};
panda$core$Bit $tmp192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp190, $tmp191);
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp194 = (panda$core$Int64) {14};
panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp190, $tmp194);
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block8; else goto block10;
block8:;
// line 103
org$pandalanguage$pandac$Type* $tmp197 = org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp198 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp197);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
return $tmp198;
block10:;
panda$core$Int64 $tmp199 = (panda$core$Int64) {17};
panda$core$Bit $tmp200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp190, $tmp199);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp202 = (panda$core$Int64) {16};
panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp190, $tmp202);
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block11; else goto block13;
block11:;
// line 105
org$pandalanguage$pandac$Type* $tmp205 = org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp206 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp205);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
return $tmp206;
block13:;
panda$core$Int64 $tmp207 = (panda$core$Int64) {11};
panda$core$Bit $tmp208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp190, $tmp207);
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block14; else goto block7;
block14:;
// line 107
panda$collections$ImmutableArray** $tmp210 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp211 = *$tmp210;
panda$core$Int64 $tmp212 = (panda$core$Int64) {0};
panda$core$Object* $tmp213 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp211, $tmp212);
panda$core$String** $tmp214 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp213))->name;
panda$core$String* $tmp215 = *$tmp214;
panda$core$Bit $tmp216 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp215, &$s217);
panda$core$Panda$unref$panda$core$Object$Q($tmp213);
bool $tmp218 = $tmp216.value;
if ($tmp218) goto block15; else goto block16;
block15:;
panda$collections$ImmutableArray** $tmp219 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp220 = *$tmp219;
panda$core$Int64 $tmp221 = (panda$core$Int64) {1};
panda$core$Object* $tmp222 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp220, $tmp221);
panda$core$Bit $tmp223 = org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp222));
panda$core$Panda$unref$panda$core$Object$Q($tmp222);
*(&local1) = $tmp223;
goto block17;
block16:;
*(&local1) = $tmp216;
goto block17;
block17:;
panda$core$Bit $tmp224 = *(&local1);
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block18; else goto block19;
block18:;
// line 108
panda$collections$ImmutableArray** $tmp226 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp227 = *$tmp226;
panda$core$Int64 $tmp228 = (panda$core$Int64) {1};
panda$core$Object* $tmp229 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp227, $tmp228);
panda$core$String* $tmp230 = org$pandalanguage$pandac$CCodeGenerator$cMethodType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$Q$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp229), ((org$pandalanguage$pandac$Type*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp230));
panda$core$Panda$unref$panda$core$Object$Q($tmp229);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp230));
return $tmp230;
block19:;
goto block7;
block7:;
// line 111
panda$core$Weak** $tmp231 = &param0->hCodeGen;
panda$core$Weak* $tmp232 = *$tmp231;
panda$core$Object* $tmp233 = panda$core$Weak$get$R$panda$core$Weak$T($tmp232);
panda$core$Panda$unref$panda$core$Object$Q($tmp233);
panda$core$String* $tmp234 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(((org$pandalanguage$pandac$HCodeGenerator*) $tmp233), param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
return $tmp234;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$cMethodType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$Q$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1, org$pandalanguage$pandac$Type* param2) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$String* local3 = NULL;
panda$core$MutableString* local4 = NULL;
panda$core$String* local5 = NULL;
panda$core$Int64 local6;
org$pandalanguage$pandac$Type$Kind* $tmp235 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp236 = *$tmp235;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp237;
$tmp237 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp237->value = $tmp236;
panda$core$Int64 $tmp238 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type$Kind $tmp239 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp238);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp240;
$tmp240 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp240->value = $tmp239;
ITable* $tmp241 = ((panda$core$Equatable*) $tmp237)->$class->itable;
while ($tmp241->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp241 = $tmp241->next;
}
$fn243 $tmp242 = $tmp241->methods[0];
panda$core$Bit $tmp244 = $tmp242(((panda$core$Equatable*) $tmp237), ((panda$core$Equatable*) $tmp240));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp237)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp240)));
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block1; else goto block2;
block1:;
*(&local2) = $tmp244;
goto block3;
block2:;
org$pandalanguage$pandac$Type$Kind* $tmp246 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp247 = *$tmp246;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp248;
$tmp248 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp248->value = $tmp247;
panda$core$Int64 $tmp249 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp250 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp249);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp251;
$tmp251 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp251->value = $tmp250;
ITable* $tmp252 = ((panda$core$Equatable*) $tmp248)->$class->itable;
while ($tmp252->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp252 = $tmp252->next;
}
$fn254 $tmp253 = $tmp252->methods[0];
panda$core$Bit $tmp255 = $tmp253(((panda$core$Equatable*) $tmp248), ((panda$core$Equatable*) $tmp251));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp248)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp251)));
*(&local2) = $tmp255;
goto block3;
block3:;
panda$core$Bit $tmp256 = *(&local2);
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block4; else goto block5;
block4:;
*(&local1) = $tmp256;
goto block6;
block5:;
org$pandalanguage$pandac$Type$Kind* $tmp258 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp259 = *$tmp258;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp260;
$tmp260 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp260->value = $tmp259;
panda$core$Int64 $tmp261 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp262 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp261);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp263;
$tmp263 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp263->value = $tmp262;
ITable* $tmp264 = ((panda$core$Equatable*) $tmp260)->$class->itable;
while ($tmp264->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp264 = $tmp264->next;
}
$fn266 $tmp265 = $tmp264->methods[0];
panda$core$Bit $tmp267 = $tmp265(((panda$core$Equatable*) $tmp260), ((panda$core$Equatable*) $tmp263));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp260)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp263)));
*(&local1) = $tmp267;
goto block6;
block6:;
panda$core$Bit $tmp268 = *(&local1);
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block7; else goto block8;
block7:;
*(&local0) = $tmp268;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp270 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp271 = *$tmp270;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp272;
$tmp272 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp272->value = $tmp271;
panda$core$Int64 $tmp273 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp274 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp273);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp275;
$tmp275 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp275->value = $tmp274;
ITable* $tmp276 = ((panda$core$Equatable*) $tmp272)->$class->itable;
while ($tmp276->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp276 = $tmp276->next;
}
$fn278 $tmp277 = $tmp276->methods[0];
panda$core$Bit $tmp279 = $tmp277(((panda$core$Equatable*) $tmp272), ((panda$core$Equatable*) $tmp275));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp272)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp275)));
*(&local0) = $tmp279;
goto block9;
block9:;
panda$core$Bit $tmp280 = *(&local0);
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp282 = (panda$core$Int64) {116};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s283, $tmp282, &$s284);
abort(); // unreachable
block10:;
// line 117
panda$core$Int64* $tmp285 = &param0->varCount;
panda$core$Int64 $tmp286 = *$tmp285;
panda$core$Int64 $tmp287 = (panda$core$Int64) {1};
int64_t $tmp288 = $tmp286.value;
int64_t $tmp289 = $tmp287.value;
int64_t $tmp290 = $tmp288 + $tmp289;
panda$core$Int64 $tmp291 = (panda$core$Int64) {$tmp290};
panda$core$Int64* $tmp292 = &param0->varCount;
*$tmp292 = $tmp291;
// line 118
panda$core$Int64* $tmp293 = &param0->varCount;
panda$core$Int64 $tmp294 = *$tmp293;
panda$core$Int64$wrapper* $tmp295;
$tmp295 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp295->value = $tmp294;
panda$core$String* $tmp296 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s297, ((panda$core$Object*) $tmp295));
panda$core$String* $tmp298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp296, &$s299);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp300 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp300));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
*(&local3) = $tmp298;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
// line 119
panda$core$MutableString* $tmp301 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp301, &$s302);
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp303 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
*(&local4) = $tmp301;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
// line 120
panda$core$MutableString* $tmp304 = *(&local4);
panda$collections$ImmutableArray** $tmp305 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp306 = *$tmp305;
panda$collections$ImmutableArray** $tmp307 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp308 = *$tmp307;
ITable* $tmp309 = ((panda$collections$CollectionView*) $tmp308)->$class->itable;
while ($tmp309->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp309 = $tmp309->next;
}
$fn311 $tmp310 = $tmp309->methods[0];
panda$core$Int64 $tmp312 = $tmp310(((panda$collections$CollectionView*) $tmp308));
panda$core$Int64 $tmp313 = (panda$core$Int64) {1};
int64_t $tmp314 = $tmp312.value;
int64_t $tmp315 = $tmp313.value;
int64_t $tmp316 = $tmp314 - $tmp315;
panda$core$Int64 $tmp317 = (panda$core$Int64) {$tmp316};
panda$core$Object* $tmp318 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp306, $tmp317);
panda$core$String* $tmp319 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp318));
panda$core$MutableString$append$panda$core$String($tmp304, $tmp319);
panda$core$Panda$unref$panda$core$Object$Q($tmp318);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp319));
// line 121
panda$core$MutableString* $tmp320 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp320, &$s321);
// line 122
panda$core$MutableString* $tmp322 = *(&local4);
panda$core$String* $tmp323 = *(&local3);
panda$core$MutableString$append$panda$core$String($tmp322, $tmp323);
// line 123
panda$core$MutableString* $tmp324 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp324, &$s325);
// line 124
*(&local5) = ((panda$core$String*) NULL);
panda$core$String* $tmp326 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp326));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s327));
*(&local5) = &$s328;
// line 125
panda$core$Bit $tmp329 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block12; else goto block13;
block12:;
// line 126
panda$core$MutableString* $tmp331 = *(&local4);
panda$core$String* $tmp332 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param2);
panda$core$MutableString$append$panda$core$String($tmp331, $tmp332);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp332));
// line 127
panda$core$String* $tmp333 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s334));
*(&local5) = &$s335;
goto block13;
block13:;
// line 129
panda$core$Int64 $tmp336 = (panda$core$Int64) {0};
panda$collections$ImmutableArray** $tmp337 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp338 = *$tmp337;
ITable* $tmp339 = ((panda$collections$CollectionView*) $tmp338)->$class->itable;
while ($tmp339->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp339 = $tmp339->next;
}
$fn341 $tmp340 = $tmp339->methods[0];
panda$core$Int64 $tmp342 = $tmp340(((panda$collections$CollectionView*) $tmp338));
panda$core$Int64 $tmp343 = (panda$core$Int64) {1};
int64_t $tmp344 = $tmp342.value;
int64_t $tmp345 = $tmp343.value;
int64_t $tmp346 = $tmp344 - $tmp345;
panda$core$Int64 $tmp347 = (panda$core$Int64) {$tmp346};
panda$core$Bit $tmp348 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp349 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp336, $tmp347, $tmp348);
panda$core$Int64 $tmp350 = $tmp349.min;
*(&local6) = $tmp350;
panda$core$Int64 $tmp351 = $tmp349.max;
panda$core$Bit $tmp352 = $tmp349.inclusive;
bool $tmp353 = $tmp352.value;
panda$core$Int64 $tmp354 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp355 = panda$core$Int64$convert$R$panda$core$UInt64($tmp354);
if ($tmp353) goto block17; else goto block18;
block17:;
int64_t $tmp356 = $tmp350.value;
int64_t $tmp357 = $tmp351.value;
bool $tmp358 = $tmp356 <= $tmp357;
panda$core$Bit $tmp359 = (panda$core$Bit) {$tmp358};
bool $tmp360 = $tmp359.value;
if ($tmp360) goto block14; else goto block15;
block18:;
int64_t $tmp361 = $tmp350.value;
int64_t $tmp362 = $tmp351.value;
bool $tmp363 = $tmp361 < $tmp362;
panda$core$Bit $tmp364 = (panda$core$Bit) {$tmp363};
bool $tmp365 = $tmp364.value;
if ($tmp365) goto block14; else goto block15;
block14:;
// line 130
panda$core$MutableString* $tmp366 = *(&local4);
panda$core$String* $tmp367 = *(&local5);
panda$core$MutableString$append$panda$core$String($tmp366, $tmp367);
// line 131
panda$core$MutableString* $tmp368 = *(&local4);
panda$collections$ImmutableArray** $tmp369 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp370 = *$tmp369;
panda$core$Int64 $tmp371 = *(&local6);
panda$core$Object* $tmp372 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp370, $tmp371);
panda$core$String* $tmp373 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp372));
panda$core$MutableString$append$panda$core$String($tmp368, $tmp373);
panda$core$Panda$unref$panda$core$Object$Q($tmp372);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp373));
// line 132
panda$core$String* $tmp374 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp374));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s375));
*(&local5) = &$s376;
goto block16;
block16:;
panda$core$Int64 $tmp377 = *(&local6);
int64_t $tmp378 = $tmp351.value;
int64_t $tmp379 = $tmp377.value;
int64_t $tmp380 = $tmp378 - $tmp379;
panda$core$Int64 $tmp381 = (panda$core$Int64) {$tmp380};
panda$core$UInt64 $tmp382 = panda$core$Int64$convert$R$panda$core$UInt64($tmp381);
if ($tmp353) goto block20; else goto block21;
block20:;
uint64_t $tmp383 = $tmp382.value;
uint64_t $tmp384 = $tmp355.value;
bool $tmp385 = $tmp383 >= $tmp384;
panda$core$Bit $tmp386 = (panda$core$Bit) {$tmp385};
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block19; else goto block15;
block21:;
uint64_t $tmp388 = $tmp382.value;
uint64_t $tmp389 = $tmp355.value;
bool $tmp390 = $tmp388 > $tmp389;
panda$core$Bit $tmp391 = (panda$core$Bit) {$tmp390};
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block19; else goto block15;
block19:;
int64_t $tmp393 = $tmp377.value;
int64_t $tmp394 = $tmp354.value;
int64_t $tmp395 = $tmp393 + $tmp394;
panda$core$Int64 $tmp396 = (panda$core$Int64) {$tmp395};
*(&local6) = $tmp396;
goto block14;
block15:;
// line 134
panda$core$MutableString* $tmp397 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp397, &$s398);
// line 135
panda$io$MemoryOutputStream** $tmp399 = &param0->types;
panda$io$MemoryOutputStream* $tmp400 = *$tmp399;
panda$core$MutableString* $tmp401 = *(&local4);
panda$core$String* $tmp402 = panda$core$MutableString$finish$R$panda$core$String($tmp401);
$fn404 $tmp403 = ($fn404) ((panda$io$OutputStream*) $tmp400)->$class->vtable[19];
$tmp403(((panda$io$OutputStream*) $tmp400), $tmp402);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
// line 136
panda$core$String* $tmp405 = *(&local3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp405));
panda$core$String* $tmp406 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp406));
// unreffing separator
*(&local5) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp407 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
// unreffing code
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp408 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
// unreffing result
*(&local3) = ((panda$core$String*) NULL);
return $tmp405;

}
void org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Compiler* param1) {

// line 141
panda$core$Weak* $tmp409 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp409, ((panda$core$Object*) param1));
panda$core$Weak** $tmp410 = &param0->compiler;
panda$core$Weak* $tmp411 = *$tmp410;
bool $tmp412 = $tmp411 != ((panda$core$Weak*) NULL);
if ($tmp412) goto block1; else goto block2;
block1:;
panda$core$Object* $tmp413 = panda$core$Weak$get$R$panda$core$Weak$T($tmp411);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler*) $tmp413)));
panda$core$Panda$unref$panda$core$Object$Q($tmp413);
goto block2;
block2:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp409));
panda$core$Weak** $tmp414 = &param0->compiler;
*$tmp414 = $tmp409;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp409));
// line 142
panda$core$Weak** $tmp415 = &param0->hCodeGen;
panda$core$Weak* $tmp416 = *$tmp415;
panda$core$Object* $tmp417 = panda$core$Weak$get$R$panda$core$Weak$T($tmp416);
panda$core$Panda$unref$panda$core$Object$Q($tmp417);
org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(((org$pandalanguage$pandac$HCodeGenerator*) $tmp417), param1);
return;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0) {

// line 221
panda$core$Int64* $tmp418 = &param0->varCount;
panda$core$Int64 $tmp419 = *$tmp418;
panda$core$Int64 $tmp420 = (panda$core$Int64) {1};
int64_t $tmp421 = $tmp419.value;
int64_t $tmp422 = $tmp420.value;
int64_t $tmp423 = $tmp421 + $tmp422;
panda$core$Int64 $tmp424 = (panda$core$Int64) {$tmp423};
panda$core$Int64* $tmp425 = &param0->varCount;
*$tmp425 = $tmp424;
// line 222
panda$core$Int64* $tmp426 = &param0->varCount;
panda$core$Int64 $tmp427 = *$tmp426;
panda$core$Int64$wrapper* $tmp428;
$tmp428 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp428->value = $tmp427;
panda$core$String* $tmp429 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s430, ((panda$core$Object*) $tmp428));
panda$core$String* $tmp431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp429, &$s432);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp431));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp428));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp429));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp431));
return $tmp431;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0) {

// line 226
panda$core$Int64* $tmp433 = &param0->varCount;
panda$core$Int64 $tmp434 = *$tmp433;
panda$core$Int64 $tmp435 = (panda$core$Int64) {1};
int64_t $tmp436 = $tmp434.value;
int64_t $tmp437 = $tmp435.value;
int64_t $tmp438 = $tmp436 + $tmp437;
panda$core$Int64 $tmp439 = (panda$core$Int64) {$tmp438};
panda$core$Int64* $tmp440 = &param0->varCount;
*$tmp440 = $tmp439;
// line 227
panda$core$Int64* $tmp441 = &param0->varCount;
panda$core$Int64 $tmp442 = *$tmp441;
panda$core$Int64$wrapper* $tmp443;
$tmp443 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp443->value = $tmp442;
panda$core$String* $tmp444 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s445, ((panda$core$Object*) $tmp443));
panda$core$String* $tmp446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp444, &$s447);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp446));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp443));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp444));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp446));
return $tmp446;

}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

panda$core$Int64$nullable local0;
org$pandalanguage$pandac$ChoiceCase* local1 = NULL;
panda$core$Int64 local2;
org$pandalanguage$pandac$Type* local3 = NULL;
// line 231
panda$collections$IdentityMap** $tmp448 = &param0->choiceDataSizes;
panda$collections$IdentityMap* $tmp449 = *$tmp448;
panda$core$Object* $tmp450 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q($tmp449, ((panda$core$Object*) param1));
*(&local0) = ($tmp450 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp450)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
panda$core$Panda$unref$panda$core$Object$Q($tmp450);
// line 232
panda$core$Int64$nullable $tmp451 = *(&local0);
panda$core$Bit $tmp452 = panda$core$Bit$init$builtin_bit(!$tmp451.nonnull);
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block1; else goto block2;
block1:;
// line 233
panda$core$Int64 $tmp454 = (panda$core$Int64) {0};
*(&local0) = ((panda$core$Int64$nullable) { $tmp454, true });
// line 234
panda$collections$Array** $tmp455 = &param1->choiceCases;
panda$collections$Array* $tmp456 = *$tmp455;
ITable* $tmp457 = ((panda$collections$Iterable*) $tmp456)->$class->itable;
while ($tmp457->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp457 = $tmp457->next;
}
$fn459 $tmp458 = $tmp457->methods[0];
panda$collections$Iterator* $tmp460 = $tmp458(((panda$collections$Iterable*) $tmp456));
goto block3;
block3:;
ITable* $tmp461 = $tmp460->$class->itable;
while ($tmp461->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp461 = $tmp461->next;
}
$fn463 $tmp462 = $tmp461->methods[0];
panda$core$Bit $tmp464 = $tmp462($tmp460);
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block5; else goto block4;
block4:;
*(&local1) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
ITable* $tmp466 = $tmp460->$class->itable;
while ($tmp466->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp466 = $tmp466->next;
}
$fn468 $tmp467 = $tmp466->methods[1];
panda$core$Object* $tmp469 = $tmp467($tmp460);
org$pandalanguage$pandac$ChoiceCase* $tmp470 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp470));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ChoiceCase*) $tmp469)));
*(&local1) = ((org$pandalanguage$pandac$ChoiceCase*) $tmp469);
// line 235
panda$core$Weak** $tmp471 = &param0->compiler;
panda$core$Weak* $tmp472 = *$tmp471;
panda$core$Object* $tmp473 = panda$core$Weak$get$R$panda$core$Weak$T($tmp472);
panda$core$Panda$unref$panda$core$Object$Q($tmp473);
org$pandalanguage$pandac$ChoiceCase* $tmp474 = *(&local1);
org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceCase(((org$pandalanguage$pandac$Compiler*) $tmp473), $tmp474);
// line 236
panda$core$Int64 $tmp475 = (panda$core$Int64) {0};
*(&local2) = $tmp475;
// line 237
org$pandalanguage$pandac$ChoiceCase* $tmp476 = *(&local1);
panda$collections$Array** $tmp477 = &$tmp476->fields;
panda$collections$Array* $tmp478 = *$tmp477;
ITable* $tmp479 = ((panda$collections$Iterable*) $tmp478)->$class->itable;
while ($tmp479->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp479 = $tmp479->next;
}
$fn481 $tmp480 = $tmp479->methods[0];
panda$collections$Iterator* $tmp482 = $tmp480(((panda$collections$Iterable*) $tmp478));
goto block6;
block6:;
ITable* $tmp483 = $tmp482->$class->itable;
while ($tmp483->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp483 = $tmp483->next;
}
$fn485 $tmp484 = $tmp483->methods[0];
panda$core$Bit $tmp486 = $tmp484($tmp482);
bool $tmp487 = $tmp486.value;
if ($tmp487) goto block8; else goto block7;
block7:;
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp488 = $tmp482->$class->itable;
while ($tmp488->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp488 = $tmp488->next;
}
$fn490 $tmp489 = $tmp488->methods[1];
panda$core$Object* $tmp491 = $tmp489($tmp482);
org$pandalanguage$pandac$Type* $tmp492 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp492));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp491)));
*(&local3) = ((org$pandalanguage$pandac$Type*) $tmp491);
// line 239
panda$core$Int64 $tmp493 = *(&local2);
org$pandalanguage$pandac$Type* $tmp494 = *(&local3);
panda$core$Int64 $tmp495 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, $tmp494);
int64_t $tmp496 = $tmp493.value;
int64_t $tmp497 = $tmp495.value;
int64_t $tmp498 = $tmp496 + $tmp497;
panda$core$Int64 $tmp499 = (panda$core$Int64) {$tmp498};
*(&local2) = $tmp499;
panda$core$Panda$unref$panda$core$Object$Q($tmp491);
org$pandalanguage$pandac$Type* $tmp500 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp500));
// unreffing f
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
goto block6;
block8:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp482));
// line 241
panda$core$Int64$nullable $tmp501 = *(&local0);
panda$core$Int64 $tmp502 = *(&local2);
panda$core$Int64 $tmp503 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) $tmp501.value), $tmp502);
*(&local0) = ((panda$core$Int64$nullable) { $tmp503, true });
panda$core$Panda$unref$panda$core$Object$Q($tmp469);
org$pandalanguage$pandac$ChoiceCase* $tmp504 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp504));
// unreffing entry
*(&local1) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp460));
// line 243
panda$collections$IdentityMap** $tmp505 = &param0->choiceDataSizes;
panda$collections$IdentityMap* $tmp506 = *$tmp505;
panda$core$Int64$nullable $tmp507 = *(&local0);
panda$core$Int64$wrapper* $tmp508;
$tmp508 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp508->value = ((panda$core$Int64) $tmp507.value);
panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V($tmp506, ((panda$core$Object*) param1), ((panda$core$Object*) $tmp508));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp508));
goto block2;
block2:;
// line 245
panda$core$Int64$nullable $tmp509 = *(&local0);
return ((panda$core$Int64) $tmp509.value);

}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
panda$core$Bit local1;
panda$core$Int64 local2;
org$pandalanguage$pandac$FieldDecl* local3 = NULL;
panda$core$Int64 local4;
panda$core$Int64 local5;
// line 249
panda$core$Bit* $tmp510 = &param1->resolved;
panda$core$Bit $tmp511 = *$tmp510;
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp513 = (panda$core$Int64) {249};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s514, $tmp513);
abort(); // unreachable
block1:;
// line 250
panda$core$Bit $tmp515 = org$pandalanguage$pandac$Type$get_isBuiltinNumber$R$panda$core$Bit(param1);
bool $tmp516 = $tmp515.value;
if ($tmp516) goto block3; else goto block4;
block3:;
// line 251
panda$core$String** $tmp517 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp518 = *$tmp517;
panda$core$Bit $tmp519 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp518, &$s520);
bool $tmp521 = $tmp519.value;
if ($tmp521) goto block5; else goto block6;
block5:;
// line 252
panda$core$Int64 $tmp522 = (panda$core$Int64) {1};
return $tmp522;
block6:;
// line 254
panda$core$String** $tmp523 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp524 = *$tmp523;
panda$core$Bit $tmp525 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp524, &$s526);
bool $tmp527 = $tmp525.value;
if ($tmp527) goto block7; else goto block8;
block7:;
// line 255
panda$core$Int64 $tmp528 = (panda$core$Int64) {2};
return $tmp528;
block8:;
// line 257
panda$core$String** $tmp529 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp530 = *$tmp529;
panda$core$Bit $tmp531 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp530, &$s532);
bool $tmp533 = $tmp531.value;
if ($tmp533) goto block9; else goto block10;
block9:;
// line 258
panda$core$Int64 $tmp534 = (panda$core$Int64) {4};
return $tmp534;
block10:;
// line 260
panda$core$String** $tmp535 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp536 = *$tmp535;
panda$core$Bit $tmp537 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp536, &$s538);
bool $tmp539 = $tmp537.value;
if ($tmp539) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp540 = (panda$core$Int64) {260};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s541, $tmp540);
abort(); // unreachable
block11:;
// line 261
panda$core$Int64 $tmp542 = (panda$core$Int64) {8};
return $tmp542;
block4:;
// line 263
org$pandalanguage$pandac$Type* $tmp543 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp544 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(param1, $tmp543);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp543));
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block13; else goto block14;
block13:;
// line 264
panda$core$Int64 $tmp546 = (panda$core$Int64) {1};
return $tmp546;
block14:;
// line 266
panda$core$Weak** $tmp547 = &param0->compiler;
panda$core$Weak* $tmp548 = *$tmp547;
panda$core$Object* $tmp549 = panda$core$Weak$get$R$panda$core$Weak$T($tmp548);
panda$core$Panda$unref$panda$core$Object$Q($tmp549);
org$pandalanguage$pandac$ClassDecl* $tmp550 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp549), param1);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp551 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp551));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp550));
*(&local0) = $tmp550;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp550));
// line 267
org$pandalanguage$pandac$ClassDecl* $tmp552 = *(&local0);
panda$core$Bit $tmp553 = panda$core$Bit$init$builtin_bit($tmp552 != NULL);
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp555 = (panda$core$Int64) {267};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s556, $tmp555);
abort(); // unreachable
block15:;
// line 268
panda$core$Weak** $tmp557 = &param0->compiler;
panda$core$Weak* $tmp558 = *$tmp557;
panda$core$Object* $tmp559 = panda$core$Weak$get$R$panda$core$Weak$T($tmp558);
panda$core$Panda$unref$panda$core$Object$Q($tmp559);
org$pandalanguage$pandac$ClassDecl* $tmp560 = *(&local0);
panda$core$Bit $tmp561 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp559), $tmp560);
panda$core$Bit $tmp562 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp561);
bool $tmp563 = $tmp562.value;
if ($tmp563) goto block17; else goto block18;
block17:;
*(&local1) = $tmp562;
goto block19;
block18:;
org$pandalanguage$pandac$ClassDecl* $tmp564 = *(&local0);
panda$core$String** $tmp565 = &$tmp564->name;
panda$core$String* $tmp566 = *$tmp565;
panda$core$Bit $tmp567 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp566, &$s568);
*(&local1) = $tmp567;
goto block19;
block19:;
panda$core$Bit $tmp569 = *(&local1);
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block20; else goto block21;
block20:;
// line 269
panda$core$Int64 $tmp571 = (panda$core$Int64) {8};
org$pandalanguage$pandac$ClassDecl* $tmp572 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp572));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp571;
block21:;
// line 271
panda$core$Int64 $tmp573 = (panda$core$Int64) {0};
*(&local2) = $tmp573;
// line 272
panda$core$Weak** $tmp574 = &param0->compiler;
panda$core$Weak* $tmp575 = *$tmp574;
panda$core$Object* $tmp576 = panda$core$Weak$get$R$panda$core$Weak$T($tmp575);
panda$core$Panda$unref$panda$core$Object$Q($tmp576);
org$pandalanguage$pandac$ClassDecl* $tmp577 = *(&local0);
panda$collections$ListView* $tmp578 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp576), $tmp577);
ITable* $tmp579 = ((panda$collections$Iterable*) $tmp578)->$class->itable;
while ($tmp579->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp579 = $tmp579->next;
}
$fn581 $tmp580 = $tmp579->methods[0];
panda$collections$Iterator* $tmp582 = $tmp580(((panda$collections$Iterable*) $tmp578));
goto block22;
block22:;
ITable* $tmp583 = $tmp582->$class->itable;
while ($tmp583->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp583 = $tmp583->next;
}
$fn585 $tmp584 = $tmp583->methods[0];
panda$core$Bit $tmp586 = $tmp584($tmp582);
bool $tmp587 = $tmp586.value;
if ($tmp587) goto block24; else goto block23;
block23:;
*(&local3) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
ITable* $tmp588 = $tmp582->$class->itable;
while ($tmp588->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp588 = $tmp588->next;
}
$fn590 $tmp589 = $tmp588->methods[1];
panda$core$Object* $tmp591 = $tmp589($tmp582);
org$pandalanguage$pandac$FieldDecl* $tmp592 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp592));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp591)));
*(&local3) = ((org$pandalanguage$pandac$FieldDecl*) $tmp591);
// line 273
org$pandalanguage$pandac$FieldDecl* $tmp593 = *(&local3);
org$pandalanguage$pandac$Annotations** $tmp594 = &$tmp593->annotations;
org$pandalanguage$pandac$Annotations* $tmp595 = *$tmp594;
panda$core$Bit $tmp596 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp595);
bool $tmp597 = $tmp596.value;
if ($tmp597) goto block25; else goto block26;
block25:;
// line 274
org$pandalanguage$pandac$FieldDecl* $tmp598 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp598));
// unreffing f
*(&local3) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block22;
block26:;
// line 276
panda$core$Weak** $tmp599 = &param0->compiler;
panda$core$Weak* $tmp600 = *$tmp599;
panda$core$Object* $tmp601 = panda$core$Weak$get$R$panda$core$Weak$T($tmp600);
panda$core$Panda$unref$panda$core$Object$Q($tmp601);
org$pandalanguage$pandac$FieldDecl* $tmp602 = *(&local3);
panda$core$Bit $tmp603 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp601), $tmp602);
// line 277
org$pandalanguage$pandac$FieldDecl* $tmp604 = *(&local3);
org$pandalanguage$pandac$Type** $tmp605 = &$tmp604->type;
org$pandalanguage$pandac$Type* $tmp606 = *$tmp605;
org$pandalanguage$pandac$Type* $tmp607 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp608 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp606, $tmp607);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
bool $tmp609 = $tmp608.value;
if ($tmp609) goto block27; else goto block29;
block27:;
// line 279
panda$core$Int64 $tmp610 = *(&local2);
panda$core$Weak** $tmp611 = &param0->hCodeGen;
panda$core$Weak* $tmp612 = *$tmp611;
panda$core$Object* $tmp613 = panda$core$Weak$get$R$panda$core$Weak$T($tmp612);
panda$core$Panda$unref$panda$core$Object$Q($tmp613);
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp614 = &((org$pandalanguage$pandac$HCodeGenerator*) $tmp613)->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp615 = *$tmp614;
org$pandalanguage$pandac$ClassDecl* $tmp616 = *(&local0);
panda$core$Int64 $tmp617 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64($tmp615, $tmp616);
int64_t $tmp618 = $tmp610.value;
int64_t $tmp619 = $tmp617.value;
int64_t $tmp620 = $tmp618 + $tmp619;
panda$core$Int64 $tmp621 = (panda$core$Int64) {$tmp620};
*(&local2) = $tmp621;
goto block28;
block29:;
// line 1
// line 282
org$pandalanguage$pandac$FieldDecl* $tmp622 = *(&local3);
org$pandalanguage$pandac$Type** $tmp623 = &$tmp622->type;
org$pandalanguage$pandac$Type* $tmp624 = *$tmp623;
panda$core$Int64 $tmp625 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, $tmp624);
*(&local4) = $tmp625;
// line 283
panda$core$Int64 $tmp626 = *(&local2);
panda$core$Int64 $tmp627 = *(&local4);
panda$core$Int64 $tmp628 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp626, $tmp627);
*(&local5) = $tmp628;
// line 284
panda$core$Int64 $tmp629 = *(&local5);
panda$core$Int64 $tmp630 = (panda$core$Int64) {0};
panda$core$Bit $tmp631 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp629, $tmp630);
bool $tmp632 = $tmp631.value;
if ($tmp632) goto block30; else goto block31;
block30:;
// line 285
panda$core$Int64 $tmp633 = *(&local2);
panda$core$Int64 $tmp634 = *(&local4);
panda$core$Int64 $tmp635 = *(&local5);
int64_t $tmp636 = $tmp634.value;
int64_t $tmp637 = $tmp635.value;
int64_t $tmp638 = $tmp636 - $tmp637;
panda$core$Int64 $tmp639 = (panda$core$Int64) {$tmp638};
int64_t $tmp640 = $tmp633.value;
int64_t $tmp641 = $tmp639.value;
int64_t $tmp642 = $tmp640 + $tmp641;
panda$core$Int64 $tmp643 = (panda$core$Int64) {$tmp642};
*(&local2) = $tmp643;
goto block31;
block31:;
// line 287
panda$core$Int64 $tmp644 = *(&local2);
panda$core$Int64 $tmp645 = *(&local4);
panda$core$Int64 $tmp646 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp644, $tmp645);
panda$core$Int64 $tmp647 = (panda$core$Int64) {0};
panda$core$Bit $tmp648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp646, $tmp647);
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block32; else goto block33;
block33:;
panda$core$Int64 $tmp650 = (panda$core$Int64) {287};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s651, $tmp650);
abort(); // unreachable
block32:;
// line 288
panda$core$Int64 $tmp652 = *(&local2);
panda$core$Int64 $tmp653 = *(&local4);
int64_t $tmp654 = $tmp652.value;
int64_t $tmp655 = $tmp653.value;
int64_t $tmp656 = $tmp654 + $tmp655;
panda$core$Int64 $tmp657 = (panda$core$Int64) {$tmp656};
*(&local2) = $tmp657;
goto block28;
block28:;
panda$core$Panda$unref$panda$core$Object$Q($tmp591);
org$pandalanguage$pandac$FieldDecl* $tmp658 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp658));
// unreffing f
*(&local3) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block22;
block24:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp578));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp582));
// line 291
org$pandalanguage$pandac$Type$Kind* $tmp659 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp660 = *$tmp659;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp661;
$tmp661 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp661->value = $tmp660;
panda$core$Int64 $tmp662 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp663 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp662);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp664;
$tmp664 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp664->value = $tmp663;
ITable* $tmp665 = ((panda$core$Equatable*) $tmp661)->$class->itable;
while ($tmp665->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp665 = $tmp665->next;
}
$fn667 $tmp666 = $tmp665->methods[0];
panda$core$Bit $tmp668 = $tmp666(((panda$core$Equatable*) $tmp661), ((panda$core$Equatable*) $tmp664));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp661)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp664)));
bool $tmp669 = $tmp668.value;
if ($tmp669) goto block34; else goto block35;
block34:;
// line 292
panda$core$Int64 $tmp670 = *(&local2);
panda$core$Int64 $tmp671 = (panda$core$Int64) {1};
int64_t $tmp672 = $tmp670.value;
int64_t $tmp673 = $tmp671.value;
int64_t $tmp674 = $tmp672 + $tmp673;
panda$core$Int64 $tmp675 = (panda$core$Int64) {$tmp674};
*(&local2) = $tmp675;
goto block35;
block35:;
// line 294
panda$core$Int64 $tmp676 = *(&local2);
org$pandalanguage$pandac$ClassDecl* $tmp677 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp677));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp676;

}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

// line 298
panda$core$Int64 $tmp678 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param1);
panda$core$Int64 $tmp679 = (panda$core$Int64) {8};
panda$core$Int64 $tmp680 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp678, $tmp679);
return $tmp680;

}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$stride$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 302
panda$core$Int64 $tmp681 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param1);
*(&local0) = $tmp681;
// line 303
panda$core$Int64 $tmp682 = org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param1);
*(&local1) = $tmp682;
// line 304
panda$core$Int64 $tmp683 = *(&local0);
panda$core$Int64 $tmp684 = *(&local1);
panda$core$Int64 $tmp685 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp683, $tmp684);
panda$core$Int64 $tmp686 = (panda$core$Int64) {0};
panda$core$Bit $tmp687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp685, $tmp686);
bool $tmp688 = $tmp687.value;
if ($tmp688) goto block1; else goto block2;
block1:;
// line 305
panda$core$Int64 $tmp689 = *(&local0);
return $tmp689;
block2:;
// line 307
panda$core$Int64 $tmp690 = *(&local0);
panda$core$Int64 $tmp691 = *(&local1);
int64_t $tmp692 = $tmp690.value;
int64_t $tmp693 = $tmp691.value;
int64_t $tmp694 = $tmp692 + $tmp693;
panda$core$Int64 $tmp695 = (panda$core$Int64) {$tmp694};
panda$core$Int64 $tmp696 = *(&local0);
panda$core$Int64 $tmp697 = *(&local1);
panda$core$Int64 $tmp698 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp696, $tmp697);
int64_t $tmp699 = $tmp695.value;
int64_t $tmp700 = $tmp698.value;
int64_t $tmp701 = $tmp699 - $tmp700;
panda$core$Int64 $tmp702 = (panda$core$Int64) {$tmp701};
return $tmp702;

}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
panda$core$Bit local1;
panda$core$Int64 local2;
org$pandalanguage$pandac$FieldDecl* local3 = NULL;
panda$core$Int64 local4;
panda$core$Int64 local5;
// line 311
panda$core$Weak** $tmp703 = &param0->compiler;
panda$core$Weak* $tmp704 = *$tmp703;
panda$core$Object* $tmp705 = panda$core$Weak$get$R$panda$core$Weak$T($tmp704);
panda$core$Panda$unref$panda$core$Object$Q($tmp705);
org$pandalanguage$pandac$ClassDecl* $tmp706 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp705), param1);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp707 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp707));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp706));
*(&local0) = $tmp706;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp706));
// line 312
org$pandalanguage$pandac$ClassDecl* $tmp708 = *(&local0);
panda$core$Bit $tmp709 = panda$core$Bit$init$builtin_bit($tmp708 != NULL);
bool $tmp710 = $tmp709.value;
if ($tmp710) goto block1; else goto block2;
block1:;
panda$core$Weak** $tmp711 = &param0->compiler;
panda$core$Weak* $tmp712 = *$tmp711;
panda$core$Object* $tmp713 = panda$core$Weak$get$R$panda$core$Weak$T($tmp712);
panda$core$Panda$unref$panda$core$Object$Q($tmp713);
org$pandalanguage$pandac$ClassDecl* $tmp714 = *(&local0);
panda$core$Bit $tmp715 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp713), $tmp714);
*(&local1) = $tmp715;
goto block3;
block2:;
*(&local1) = $tmp709;
goto block3;
block3:;
panda$core$Bit $tmp716 = *(&local1);
bool $tmp717 = $tmp716.value;
if ($tmp717) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp718 = (panda$core$Int64) {312};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s719, $tmp718);
abort(); // unreachable
block4:;
// line 313
org$pandalanguage$pandac$Type* $tmp720 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
panda$core$Int64 $tmp721 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, $tmp720);
*(&local2) = $tmp721;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp720));
// line 314
panda$core$Weak** $tmp722 = &param0->compiler;
panda$core$Weak* $tmp723 = *$tmp722;
panda$core$Object* $tmp724 = panda$core$Weak$get$R$panda$core$Weak$T($tmp723);
panda$core$Panda$unref$panda$core$Object$Q($tmp724);
org$pandalanguage$pandac$ClassDecl* $tmp725 = *(&local0);
panda$collections$ListView* $tmp726 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp724), $tmp725);
ITable* $tmp727 = ((panda$collections$Iterable*) $tmp726)->$class->itable;
while ($tmp727->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp727 = $tmp727->next;
}
$fn729 $tmp728 = $tmp727->methods[0];
panda$collections$Iterator* $tmp730 = $tmp728(((panda$collections$Iterable*) $tmp726));
goto block6;
block6:;
ITable* $tmp731 = $tmp730->$class->itable;
while ($tmp731->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp731 = $tmp731->next;
}
$fn733 $tmp732 = $tmp731->methods[0];
panda$core$Bit $tmp734 = $tmp732($tmp730);
bool $tmp735 = $tmp734.value;
if ($tmp735) goto block8; else goto block7;
block7:;
*(&local3) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
ITable* $tmp736 = $tmp730->$class->itable;
while ($tmp736->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp736 = $tmp736->next;
}
$fn738 $tmp737 = $tmp736->methods[1];
panda$core$Object* $tmp739 = $tmp737($tmp730);
org$pandalanguage$pandac$FieldDecl* $tmp740 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp740));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp739)));
*(&local3) = ((org$pandalanguage$pandac$FieldDecl*) $tmp739);
// line 315
panda$core$Weak** $tmp741 = &param0->compiler;
panda$core$Weak* $tmp742 = *$tmp741;
panda$core$Object* $tmp743 = panda$core$Weak$get$R$panda$core$Weak$T($tmp742);
panda$core$Panda$unref$panda$core$Object$Q($tmp743);
org$pandalanguage$pandac$FieldDecl* $tmp744 = *(&local3);
panda$core$Bit $tmp745 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp743), $tmp744);
// line 316
org$pandalanguage$pandac$FieldDecl* $tmp746 = *(&local3);
org$pandalanguage$pandac$Type** $tmp747 = &$tmp746->type;
org$pandalanguage$pandac$Type* $tmp748 = *$tmp747;
org$pandalanguage$pandac$Type* $tmp749 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp750 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp748, $tmp749);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp749));
bool $tmp751 = $tmp750.value;
if ($tmp751) goto block9; else goto block11;
block9:;
// line 318
panda$core$Int64 $tmp752 = *(&local2);
panda$core$Weak** $tmp753 = &param0->hCodeGen;
panda$core$Weak* $tmp754 = *$tmp753;
panda$core$Object* $tmp755 = panda$core$Weak$get$R$panda$core$Weak$T($tmp754);
panda$core$Panda$unref$panda$core$Object$Q($tmp755);
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp756 = &((org$pandalanguage$pandac$HCodeGenerator*) $tmp755)->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp757 = *$tmp756;
org$pandalanguage$pandac$ClassDecl* $tmp758 = *(&local0);
panda$core$Int64 $tmp759 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64($tmp757, $tmp758);
int64_t $tmp760 = $tmp752.value;
int64_t $tmp761 = $tmp759.value;
int64_t $tmp762 = $tmp760 + $tmp761;
panda$core$Int64 $tmp763 = (panda$core$Int64) {$tmp762};
*(&local2) = $tmp763;
goto block10;
block11:;
// line 1
// line 321
org$pandalanguage$pandac$FieldDecl* $tmp764 = *(&local3);
org$pandalanguage$pandac$Type** $tmp765 = &$tmp764->type;
org$pandalanguage$pandac$Type* $tmp766 = *$tmp765;
panda$core$Int64 $tmp767 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, $tmp766);
*(&local4) = $tmp767;
// line 322
panda$core$Int64 $tmp768 = *(&local2);
panda$core$Int64 $tmp769 = *(&local4);
panda$core$Int64 $tmp770 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp768, $tmp769);
*(&local5) = $tmp770;
// line 323
panda$core$Int64 $tmp771 = *(&local5);
panda$core$Int64 $tmp772 = (panda$core$Int64) {0};
panda$core$Bit $tmp773 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp771, $tmp772);
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
panda$core$Panda$unref$panda$core$Object$Q($tmp739);
org$pandalanguage$pandac$FieldDecl* $tmp800 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp800));
// unreffing f
*(&local3) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block6;
block8:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp726));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp730));
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
panda$core$Panda$unref$panda$core$Object$Q($tmp1101);
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
panda$core$Panda$unref$panda$core$Object$Q($tmp1019);
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
panda$core$Panda$unref$panda$core$Object$Q($tmp1733);
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
panda$core$Panda$unref$panda$core$Object$Q($tmp1646);
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
panda$core$Panda$unref$panda$core$Object$Q($tmp2014);
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
panda$core$Bit $tmp2606 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2604, $tmp2605);
bool $tmp2607 = $tmp2606.value;
if ($tmp2607) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp2608 = (panda$core$Int64) {741};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2609, $tmp2608);
abort(); // unreachable
block11:;
// line 742
panda$core$Weak** $tmp2610 = &param0->compiler;
panda$core$Weak* $tmp2611 = *$tmp2610;
panda$core$Object* $tmp2612 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2611);
panda$core$Panda$unref$panda$core$Object$Q($tmp2612);
org$pandalanguage$pandac$Type* $tmp2613 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp2612), param2);
panda$core$String* $tmp2614 = org$pandalanguage$pandac$CCodeGenerator$cMethodType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$Q$R$panda$core$String(param0, $tmp2613, ((org$pandalanguage$pandac$Type*) NULL));
panda$core$String* $tmp2615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2616, $tmp2614);
panda$core$String* $tmp2617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2615, &$s2618);
panda$core$String* $tmp2619 = panda$core$String$convert$R$panda$core$String(param1);
panda$core$String* $tmp2620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2619, &$s2621);
panda$core$Int64 $tmp2622 = *(&local1);
panda$core$Int64$wrapper* $tmp2623;
$tmp2623 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp2623->value = $tmp2622;
panda$core$String* $tmp2624 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2620, ((panda$core$Object*) $tmp2623));
panda$core$String* $tmp2625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2624, &$s2626);
panda$core$String* $tmp2627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2617, $tmp2625);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2627));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2613));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2614));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2615));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2617));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2619));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2620));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2623));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2624));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2625));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2627));
panda$collections$ListView* $tmp2628 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2628));
// unreffing vtable
*(&local2) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2629 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2629));
// unreffing cc
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
return $tmp2627;

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
panda$core$Weak** $tmp2630 = &param2->owner;
panda$core$Weak* $tmp2631 = *$tmp2630;
panda$core$Object* $tmp2632 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2631);
panda$core$Panda$unref$panda$core$Object$Q($tmp2632);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2633 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp2632));
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2634 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2634));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2633));
*(&local0) = $tmp2633;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2633));
// line 749
panda$core$String* $tmp2635 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp2636 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2636));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2635));
*(&local1) = $tmp2635;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2635));
// line 750
panda$core$String* $tmp2637 = *(&local1);
panda$core$String* $tmp2638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2639, $tmp2637);
panda$core$String* $tmp2640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2638, &$s2641);
panda$core$String* $tmp2642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2640, param1);
panda$core$String* $tmp2643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2642, &$s2644);
$fn2646 $tmp2645 = ($fn2646) ((panda$io$OutputStream*) param3)->$class->vtable[19];
$tmp2645(((panda$io$OutputStream*) param3), $tmp2643);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2638));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2640));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2642));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2643));
// line 751
panda$core$String* $tmp2647 = *(&local1);
panda$core$String* $tmp2648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2649, $tmp2647);
panda$core$String* $tmp2650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2648, &$s2651);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2652 = *(&local0);
panda$core$String** $tmp2653 = &$tmp2652->name;
panda$core$String* $tmp2654 = *$tmp2653;
panda$core$String* $tmp2655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2650, $tmp2654);
panda$core$String* $tmp2656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2655, &$s2657);
$fn2659 $tmp2658 = ($fn2659) ((panda$io$OutputStream*) param3)->$class->vtable[19];
$tmp2658(((panda$io$OutputStream*) param3), $tmp2656);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2648));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2650));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2655));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2656));
// line 752
panda$core$Int64* $tmp2660 = &param3->level;
panda$core$Int64 $tmp2661 = *$tmp2660;
panda$core$Int64 $tmp2662 = (panda$core$Int64) {1};
int64_t $tmp2663 = $tmp2661.value;
int64_t $tmp2664 = $tmp2662.value;
int64_t $tmp2665 = $tmp2663 + $tmp2664;
panda$core$Int64 $tmp2666 = (panda$core$Int64) {$tmp2665};
panda$core$Int64* $tmp2667 = &param3->level;
*$tmp2667 = $tmp2666;
// line 753
panda$core$String* $tmp2668 = *(&local1);
panda$core$String* $tmp2669 = panda$core$String$convert$R$panda$core$String($tmp2668);
panda$core$String* $tmp2670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2669, &$s2671);
panda$core$String* $tmp2672 = *(&local1);
panda$core$String* $tmp2673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2670, $tmp2672);
panda$core$String* $tmp2674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2673, &$s2675);
$fn2677 $tmp2676 = ($fn2677) ((panda$io$OutputStream*) param3)->$class->vtable[19];
$tmp2676(((panda$io$OutputStream*) param3), $tmp2674);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2669));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2670));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2673));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2674));
// line 754
panda$core$Int64* $tmp2678 = &param3->level;
panda$core$Int64 $tmp2679 = *$tmp2678;
panda$core$Int64 $tmp2680 = (panda$core$Int64) {1};
int64_t $tmp2681 = $tmp2679.value;
int64_t $tmp2682 = $tmp2680.value;
int64_t $tmp2683 = $tmp2681 - $tmp2682;
panda$core$Int64 $tmp2684 = (panda$core$Int64) {$tmp2683};
panda$core$Int64* $tmp2685 = &param3->level;
*$tmp2685 = $tmp2684;
// line 755
$fn2687 $tmp2686 = ($fn2687) ((panda$io$OutputStream*) param3)->$class->vtable[19];
$tmp2686(((panda$io$OutputStream*) param3), &$s2688);
// line 756
panda$core$Int64 $tmp2689 = (panda$core$Int64) {18446744073709551615};
*(&local2) = $tmp2689;
// line 757
panda$core$Weak** $tmp2690 = &param0->compiler;
panda$core$Weak* $tmp2691 = *$tmp2690;
panda$core$Object* $tmp2692 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2691);
panda$core$Panda$unref$panda$core$Object$Q($tmp2692);
panda$core$Weak** $tmp2693 = &param2->owner;
panda$core$Weak* $tmp2694 = *$tmp2693;
panda$core$Object* $tmp2695 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2694);
panda$core$Panda$unref$panda$core$Object$Q($tmp2695);
panda$collections$ListView* $tmp2696 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp2692), ((org$pandalanguage$pandac$ClassDecl*) $tmp2695));
*(&local3) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp2697 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2697));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2696));
*(&local3) = $tmp2696;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2696));
// line 758
panda$core$Int64 $tmp2698 = (panda$core$Int64) {0};
panda$collections$ListView* $tmp2699 = *(&local3);
ITable* $tmp2700 = ((panda$collections$CollectionView*) $tmp2699)->$class->itable;
while ($tmp2700->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2700 = $tmp2700->next;
}
$fn2702 $tmp2701 = $tmp2700->methods[0];
panda$core$Int64 $tmp2703 = $tmp2701(((panda$collections$CollectionView*) $tmp2699));
panda$core$Bit $tmp2704 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2705 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2698, $tmp2703, $tmp2704);
panda$core$Int64 $tmp2706 = $tmp2705.min;
*(&local4) = $tmp2706;
panda$core$Int64 $tmp2707 = $tmp2705.max;
panda$core$Bit $tmp2708 = $tmp2705.inclusive;
bool $tmp2709 = $tmp2708.value;
panda$core$Int64 $tmp2710 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2711 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2710);
if ($tmp2709) goto block4; else goto block5;
block4:;
int64_t $tmp2712 = $tmp2706.value;
int64_t $tmp2713 = $tmp2707.value;
bool $tmp2714 = $tmp2712 <= $tmp2713;
panda$core$Bit $tmp2715 = (panda$core$Bit) {$tmp2714};
bool $tmp2716 = $tmp2715.value;
if ($tmp2716) goto block1; else goto block2;
block5:;
int64_t $tmp2717 = $tmp2706.value;
int64_t $tmp2718 = $tmp2707.value;
bool $tmp2719 = $tmp2717 < $tmp2718;
panda$core$Bit $tmp2720 = (panda$core$Bit) {$tmp2719};
bool $tmp2721 = $tmp2720.value;
if ($tmp2721) goto block1; else goto block2;
block1:;
// line 759
panda$collections$ListView* $tmp2722 = *(&local3);
panda$core$Int64 $tmp2723 = *(&local4);
ITable* $tmp2724 = $tmp2722->$class->itable;
while ($tmp2724->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp2724 = $tmp2724->next;
}
$fn2726 $tmp2725 = $tmp2724->methods[0];
panda$core$Object* $tmp2727 = $tmp2725($tmp2722, $tmp2723);
bool $tmp2728 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2727) == param2;
panda$core$Bit $tmp2729 = panda$core$Bit$init$builtin_bit($tmp2728);
panda$core$Panda$unref$panda$core$Object$Q($tmp2727);
bool $tmp2730 = $tmp2729.value;
if ($tmp2730) goto block6; else goto block7;
block6:;
// line 760
panda$core$Int64 $tmp2731 = *(&local4);
*(&local2) = $tmp2731;
// line 761
goto block2;
block7:;
goto block3;
block3:;
panda$core$Int64 $tmp2732 = *(&local4);
int64_t $tmp2733 = $tmp2707.value;
int64_t $tmp2734 = $tmp2732.value;
int64_t $tmp2735 = $tmp2733 - $tmp2734;
panda$core$Int64 $tmp2736 = (panda$core$Int64) {$tmp2735};
panda$core$UInt64 $tmp2737 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2736);
if ($tmp2709) goto block9; else goto block10;
block9:;
uint64_t $tmp2738 = $tmp2737.value;
uint64_t $tmp2739 = $tmp2711.value;
bool $tmp2740 = $tmp2738 >= $tmp2739;
panda$core$Bit $tmp2741 = (panda$core$Bit) {$tmp2740};
bool $tmp2742 = $tmp2741.value;
if ($tmp2742) goto block8; else goto block2;
block10:;
uint64_t $tmp2743 = $tmp2737.value;
uint64_t $tmp2744 = $tmp2711.value;
bool $tmp2745 = $tmp2743 > $tmp2744;
panda$core$Bit $tmp2746 = (panda$core$Bit) {$tmp2745};
bool $tmp2747 = $tmp2746.value;
if ($tmp2747) goto block8; else goto block2;
block8:;
int64_t $tmp2748 = $tmp2732.value;
int64_t $tmp2749 = $tmp2710.value;
int64_t $tmp2750 = $tmp2748 + $tmp2749;
panda$core$Int64 $tmp2751 = (panda$core$Int64) {$tmp2750};
*(&local4) = $tmp2751;
goto block1;
block2:;
// line 764
panda$core$Int64 $tmp2752 = *(&local2);
panda$core$Weak** $tmp2753 = &param0->compiler;
panda$core$Weak* $tmp2754 = *$tmp2753;
panda$core$Object* $tmp2755 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2754);
panda$core$Panda$unref$panda$core$Object$Q($tmp2755);
panda$core$Weak** $tmp2756 = &param0->compiler;
panda$core$Weak* $tmp2757 = *$tmp2756;
panda$core$Object* $tmp2758 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2757);
panda$core$Panda$unref$panda$core$Object$Q($tmp2758);
org$pandalanguage$pandac$Type* $tmp2759 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$ClassDecl* $tmp2760 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp2758), $tmp2759);
panda$collections$ListView* $tmp2761 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp2755), $tmp2760);
ITable* $tmp2762 = ((panda$collections$CollectionView*) $tmp2761)->$class->itable;
while ($tmp2762->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2762 = $tmp2762->next;
}
$fn2764 $tmp2763 = $tmp2762->methods[0];
panda$core$Int64 $tmp2765 = $tmp2763(((panda$collections$CollectionView*) $tmp2761));
int64_t $tmp2766 = $tmp2752.value;
int64_t $tmp2767 = $tmp2765.value;
int64_t $tmp2768 = $tmp2766 - $tmp2767;
panda$core$Int64 $tmp2769 = (panda$core$Int64) {$tmp2768};
*(&local2) = $tmp2769;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2759));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2760));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2761));
// line 765
panda$core$Int64 $tmp2770 = *(&local2);
panda$core$Int64 $tmp2771 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp2772 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2770, $tmp2771);
bool $tmp2773 = $tmp2772.value;
if ($tmp2773) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp2774 = (panda$core$Int64) {765};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2775, $tmp2774);
abort(); // unreachable
block11:;
// line 766
panda$core$String* $tmp2776 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local5) = ((panda$core$String*) NULL);
panda$core$String* $tmp2777 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2777));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2776));
*(&local5) = $tmp2776;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2776));
// line 767
panda$core$Weak** $tmp2778 = &param0->compiler;
panda$core$Weak* $tmp2779 = *$tmp2778;
panda$core$Object* $tmp2780 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2779);
panda$core$Panda$unref$panda$core$Object$Q($tmp2780);
org$pandalanguage$pandac$Type* $tmp2781 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Compiler*) $tmp2780), param2);
panda$core$String* $tmp2782 = org$pandalanguage$pandac$CCodeGenerator$cMethodType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$Q$R$panda$core$String(param0, $tmp2781, ((org$pandalanguage$pandac$Type*) NULL));
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp2783 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2783));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2782));
*(&local6) = $tmp2782;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2781));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2782));
// line 768
panda$core$String* $tmp2784 = *(&local6);
panda$core$String* $tmp2785 = panda$core$String$convert$R$panda$core$String($tmp2784);
panda$core$String* $tmp2786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2785, &$s2787);
panda$core$String* $tmp2788 = *(&local5);
panda$core$String* $tmp2789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2786, $tmp2788);
panda$core$String* $tmp2790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2789, &$s2791);
panda$core$String* $tmp2792 = *(&local1);
panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2790, $tmp2792);
panda$core$String* $tmp2794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2793, &$s2795);
panda$core$Int64 $tmp2796 = *(&local2);
panda$core$Int64$wrapper* $tmp2797;
$tmp2797 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp2797->value = $tmp2796;
panda$core$String* $tmp2798 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2794, ((panda$core$Object*) $tmp2797));
panda$core$String* $tmp2799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2798, &$s2800);
$fn2802 $tmp2801 = ($fn2802) ((panda$io$OutputStream*) param3)->$class->vtable[19];
$tmp2801(((panda$io$OutputStream*) param3), $tmp2799);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2785));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2786));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2789));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2790));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2793));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2794));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2797));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2798));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2799));
// line 769
panda$core$String* $tmp2803 = *(&local5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2803));
panda$core$String* $tmp2804 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2804));
// unreffing methodType
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp2805 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2805));
// unreffing result
*(&local5) = ((panda$core$String*) NULL);
panda$collections$ListView* $tmp2806 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2806));
// unreffing vtable
*(&local3) = ((panda$collections$ListView*) NULL);
panda$core$String* $tmp2807 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2807));
// unreffing itable
*(&local1) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp2808 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2808));
// unreffing cc
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
return $tmp2803;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1, org$pandalanguage$pandac$MethodDecl* param2, panda$core$Bit param3, panda$io$IndentedOutputStream* param4) {

panda$core$Bit local0;
// line 774
panda$core$Bit $tmp2809 = panda$core$Bit$$NOT$R$panda$core$Bit(param3);
bool $tmp2810 = $tmp2809.value;
if ($tmp2810) goto block1; else goto block2;
block1:;
panda$core$Bit $tmp2811 = org$pandalanguage$pandac$MethodDecl$get_isVirtual$R$panda$core$Bit(param2);
*(&local0) = $tmp2811;
goto block3;
block2:;
*(&local0) = $tmp2809;
goto block3;
block3:;
panda$core$Bit $tmp2812 = *(&local0);
bool $tmp2813 = $tmp2812.value;
if ($tmp2813) goto block4; else goto block6;
block4:;
// line 775
panda$core$Bit $tmp2814 = panda$core$Bit$init$builtin_bit(param1 != NULL);
bool $tmp2815 = $tmp2814.value;
if ($tmp2815) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp2816 = (panda$core$Int64) {775};
panda$core$String* $tmp2817 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param2);
panda$core$String* $tmp2818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2819, $tmp2817);
panda$core$String* $tmp2820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2818, &$s2821);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2822, $tmp2816, $tmp2820);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2817));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2818));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2820));
abort(); // unreachable
block7:;
// line 776
panda$core$Weak** $tmp2823 = &param2->owner;
panda$core$Weak* $tmp2824 = *$tmp2823;
panda$core$Object* $tmp2825 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2824);
panda$core$Panda$unref$panda$core$Object$Q($tmp2825);
org$pandalanguage$pandac$ClassDecl$Kind* $tmp2826 = &((org$pandalanguage$pandac$ClassDecl*) $tmp2825)->classKind;
org$pandalanguage$pandac$ClassDecl$Kind $tmp2827 = *$tmp2826;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2828;
$tmp2828 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2828->value = $tmp2827;
panda$core$Int64 $tmp2829 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2830 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2829);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2831;
$tmp2831 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2831->value = $tmp2830;
ITable* $tmp2832 = ((panda$core$Equatable*) $tmp2828)->$class->itable;
while ($tmp2832->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2832 = $tmp2832->next;
}
$fn2834 $tmp2833 = $tmp2832->methods[0];
panda$core$Bit $tmp2835 = $tmp2833(((panda$core$Equatable*) $tmp2828), ((panda$core$Equatable*) $tmp2831));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2828)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2831)));
bool $tmp2836 = $tmp2835.value;
if ($tmp2836) goto block9; else goto block11;
block9:;
// line 777
panda$core$String* $tmp2837 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2837));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2837));
return $tmp2837;
block11:;
// line 1
// line 780
panda$core$String* $tmp2838 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2838));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2838));
return $tmp2838;
block10:;
goto block5;
block6:;
// line 1
// line 784
panda$core$Weak** $tmp2839 = &param2->owner;
panda$core$Weak* $tmp2840 = *$tmp2839;
panda$core$Object* $tmp2841 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2840);
panda$core$Panda$unref$panda$core$Object$Q($tmp2841);
panda$core$Bit $tmp2842 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp2841));
bool $tmp2843 = $tmp2842.value;
if ($tmp2843) goto block12; else goto block13;
block12:;
// line 785
org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(param0, param2);
goto block13;
block13:;
// line 787
panda$core$String* $tmp2844 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2844));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2844));
return $tmp2844;
block5:;
panda$core$Bit $tmp2845 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2846 = $tmp2845.value;
if ($tmp2846) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp2847 = (panda$core$Int64) {772};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2848, $tmp2847, &$s2849);
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
org$pandalanguage$pandac$Type$Kind* $tmp2850 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp2851 = *$tmp2850;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp2852;
$tmp2852 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp2852->value = $tmp2851;
panda$core$Int64 $tmp2853 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp2854 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp2853);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp2855;
$tmp2855 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp2855->value = $tmp2854;
ITable* $tmp2856 = ((panda$core$Equatable*) $tmp2852)->$class->itable;
while ($tmp2856->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2856 = $tmp2856->next;
}
$fn2858 $tmp2857 = $tmp2856->methods[0];
panda$core$Bit $tmp2859 = $tmp2857(((panda$core$Equatable*) $tmp2852), ((panda$core$Equatable*) $tmp2855));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2852)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2855)));
bool $tmp2860 = $tmp2859.value;
if ($tmp2860) goto block1; else goto block2;
block1:;
// line 794
panda$core$String* $tmp2861 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp2862 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2862));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2861));
*(&local0) = $tmp2861;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2861));
// line 795
panda$core$String* $tmp2863 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp2864 = panda$core$String$convert$R$panda$core$String($tmp2863);
panda$core$String* $tmp2865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2864, &$s2866);
panda$core$String* $tmp2867 = *(&local0);
panda$core$String* $tmp2868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2865, $tmp2867);
panda$core$String* $tmp2869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2868, &$s2870);
$fn2872 $tmp2871 = ($fn2872) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2871(((panda$io$OutputStream*) param4), $tmp2869);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2863));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2864));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2865));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2868));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2869));
// line 796
panda$core$String* $tmp2873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2874, param1);
panda$core$String* $tmp2875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2873, &$s2876);
$fn2878 $tmp2877 = ($fn2878) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2877(((panda$io$OutputStream*) param4), $tmp2875);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2873));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2875));
// line 797
panda$core$Int64* $tmp2879 = &param4->level;
panda$core$Int64 $tmp2880 = *$tmp2879;
panda$core$Int64 $tmp2881 = (panda$core$Int64) {1};
int64_t $tmp2882 = $tmp2880.value;
int64_t $tmp2883 = $tmp2881.value;
int64_t $tmp2884 = $tmp2882 + $tmp2883;
panda$core$Int64 $tmp2885 = (panda$core$Int64) {$tmp2884};
panda$core$Int64* $tmp2886 = &param4->level;
*$tmp2886 = $tmp2885;
// line 798
panda$collections$ImmutableArray** $tmp2887 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp2888 = *$tmp2887;
panda$core$Int64 $tmp2889 = (panda$core$Int64) {0};
panda$core$Object* $tmp2890 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp2888, $tmp2889);
panda$core$String* $tmp2891 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, ((org$pandalanguage$pandac$Type*) $tmp2890), param4);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp2892 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2892));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2891));
*(&local1) = $tmp2891;
panda$core$Panda$unref$panda$core$Object$Q($tmp2890);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2891));
// line 799
panda$core$String* $tmp2893 = *(&local1);
panda$collections$ImmutableArray** $tmp2894 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp2895 = *$tmp2894;
panda$core$Int64 $tmp2896 = (panda$core$Int64) {0};
panda$core$Object* $tmp2897 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp2895, $tmp2896);
panda$core$String* $tmp2898 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, $tmp2893, ((org$pandalanguage$pandac$Type*) $tmp2897), param3, param4);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp2899 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2899));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2898));
*(&local2) = $tmp2898;
panda$core$Panda$unref$panda$core$Object$Q($tmp2897);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2898));
// line 800
panda$core$String* $tmp2900 = *(&local0);
panda$core$String* $tmp2901 = panda$core$String$convert$R$panda$core$String($tmp2900);
panda$core$String* $tmp2902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2901, &$s2903);
panda$core$String* $tmp2904 = *(&local2);
panda$core$String* $tmp2905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2902, $tmp2904);
panda$core$String* $tmp2906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2905, &$s2907);
$fn2909 $tmp2908 = ($fn2909) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2908(((panda$io$OutputStream*) param4), $tmp2906);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2901));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2902));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2905));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2906));
// line 801
panda$core$Int64* $tmp2910 = &param4->level;
panda$core$Int64 $tmp2911 = *$tmp2910;
panda$core$Int64 $tmp2912 = (panda$core$Int64) {1};
int64_t $tmp2913 = $tmp2911.value;
int64_t $tmp2914 = $tmp2912.value;
int64_t $tmp2915 = $tmp2913 - $tmp2914;
panda$core$Int64 $tmp2916 = (panda$core$Int64) {$tmp2915};
panda$core$Int64* $tmp2917 = &param4->level;
*$tmp2917 = $tmp2916;
// line 802
$fn2919 $tmp2918 = ($fn2919) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2918(((panda$io$OutputStream*) param4), &$s2920);
// line 803
$fn2922 $tmp2921 = ($fn2922) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2921(((panda$io$OutputStream*) param4), &$s2923);
// line 804
panda$core$Int64* $tmp2924 = &param4->level;
panda$core$Int64 $tmp2925 = *$tmp2924;
panda$core$Int64 $tmp2926 = (panda$core$Int64) {1};
int64_t $tmp2927 = $tmp2925.value;
int64_t $tmp2928 = $tmp2926.value;
int64_t $tmp2929 = $tmp2927 + $tmp2928;
panda$core$Int64 $tmp2930 = (panda$core$Int64) {$tmp2929};
panda$core$Int64* $tmp2931 = &param4->level;
*$tmp2931 = $tmp2930;
// line 805
panda$core$String* $tmp2932 = *(&local0);
panda$core$String* $tmp2933 = panda$core$String$convert$R$panda$core$String($tmp2932);
panda$core$String* $tmp2934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2933, &$s2935);
$fn2937 $tmp2936 = ($fn2937) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2936(((panda$io$OutputStream*) param4), $tmp2934);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2933));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2934));
// line 806
panda$core$Int64* $tmp2938 = &param4->level;
panda$core$Int64 $tmp2939 = *$tmp2938;
panda$core$Int64 $tmp2940 = (panda$core$Int64) {1};
int64_t $tmp2941 = $tmp2939.value;
int64_t $tmp2942 = $tmp2940.value;
int64_t $tmp2943 = $tmp2941 - $tmp2942;
panda$core$Int64 $tmp2944 = (panda$core$Int64) {$tmp2943};
panda$core$Int64* $tmp2945 = &param4->level;
*$tmp2945 = $tmp2944;
// line 807
$fn2947 $tmp2946 = ($fn2947) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2946(((panda$io$OutputStream*) param4), &$s2948);
// line 808
panda$core$String* $tmp2949 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2949));
panda$core$String* $tmp2950 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2950));
// unreffing nonNullValue
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp2951 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2951));
// unreffing unwrapped
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp2952 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2952));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp2949;
block2:;
// line 810
panda$core$String* $tmp2953 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp2954 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2954));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2953));
*(&local3) = $tmp2953;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2953));
// line 811
panda$core$String* $tmp2955 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param2);
panda$core$String* $tmp2956 = panda$core$String$convert$R$panda$core$String($tmp2955);
panda$core$String* $tmp2957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2956, &$s2958);
panda$core$String* $tmp2959 = *(&local3);
panda$core$String* $tmp2960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2957, $tmp2959);
panda$core$String* $tmp2961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2960, &$s2962);
$fn2964 $tmp2963 = ($fn2964) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2963(((panda$io$OutputStream*) param4), $tmp2961);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2955));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2956));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2957));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2960));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2961));
// line 812
org$pandalanguage$pandac$Type$Kind* $tmp2965 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp2966 = *$tmp2965;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp2967;
$tmp2967 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp2967->value = $tmp2966;
panda$core$Int64 $tmp2968 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp2969 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp2968);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp2970;
$tmp2970 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp2970->value = $tmp2969;
ITable* $tmp2971 = ((panda$core$Equatable*) $tmp2967)->$class->itable;
while ($tmp2971->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2971 = $tmp2971->next;
}
$fn2973 $tmp2972 = $tmp2971->methods[0];
panda$core$Bit $tmp2974 = $tmp2972(((panda$core$Equatable*) $tmp2967), ((panda$core$Equatable*) $tmp2970));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2967)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2970)));
bool $tmp2975 = $tmp2974.value;
if ($tmp2975) goto block3; else goto block4;
block3:;
// line 813
panda$core$String* $tmp2976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2977, param1);
panda$core$String* $tmp2978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2976, &$s2979);
$fn2981 $tmp2980 = ($fn2981) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp2980(((panda$io$OutputStream*) param4), $tmp2978);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2976));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2978));
// line 814
panda$core$Int64* $tmp2982 = &param4->level;
panda$core$Int64 $tmp2983 = *$tmp2982;
panda$core$Int64 $tmp2984 = (panda$core$Int64) {1};
int64_t $tmp2985 = $tmp2983.value;
int64_t $tmp2986 = $tmp2984.value;
int64_t $tmp2987 = $tmp2985 + $tmp2986;
panda$core$Int64 $tmp2988 = (panda$core$Int64) {$tmp2987};
panda$core$Int64* $tmp2989 = &param4->level;
*$tmp2989 = $tmp2988;
goto block4;
block4:;
// line 816
panda$core$String* $tmp2990 = *(&local3);
panda$core$String* $tmp2991 = panda$core$String$convert$R$panda$core$String($tmp2990);
panda$core$String* $tmp2992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2991, &$s2993);
panda$core$String* $tmp2994 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param2);
panda$core$String* $tmp2995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2992, $tmp2994);
panda$core$String* $tmp2996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2995, &$s2997);
panda$core$Int64 $tmp2998 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param2);
panda$core$Int64$wrapper* $tmp2999;
$tmp2999 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp2999->value = $tmp2998;
panda$core$String* $tmp3000 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3001, ((panda$core$Object*) $tmp2999));
panda$core$String* $tmp3002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3000, &$s3003);
panda$core$String* $tmp3004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2996, $tmp3002);
panda$core$String** $tmp3005 = &((org$pandalanguage$pandac$Symbol*) param2)->name;
panda$core$String* $tmp3006 = *$tmp3005;
panda$core$String* $tmp3007 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp3006);
panda$core$String* $tmp3008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3009, $tmp3007);
panda$core$String* $tmp3010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3008, &$s3011);
panda$core$String* $tmp3012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3004, $tmp3010);
$fn3014 $tmp3013 = ($fn3014) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp3013(((panda$io$OutputStream*) param4), $tmp3012);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2991));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2992));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2994));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2995));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2996));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2999));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3000));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3002));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3004));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3007));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3008));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3010));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3012));
// line 819
panda$core$String* $tmp3015 = *(&local3);
panda$core$String* $tmp3016 = panda$core$String$convert$R$panda$core$String($tmp3015);
panda$core$String* $tmp3017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3016, &$s3018);
panda$core$String* $tmp3019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3017, param1);
panda$core$String* $tmp3020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3019, &$s3021);
$fn3023 $tmp3022 = ($fn3023) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp3022(((panda$io$OutputStream*) param4), $tmp3020);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3016));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3017));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3019));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3020));
// line 820
org$pandalanguage$pandac$Type$Kind* $tmp3024 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3025 = *$tmp3024;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3026;
$tmp3026 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3026->value = $tmp3025;
panda$core$Int64 $tmp3027 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3028 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3027);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3029;
$tmp3029 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3029->value = $tmp3028;
ITable* $tmp3030 = ((panda$core$Equatable*) $tmp3026)->$class->itable;
while ($tmp3030->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3030 = $tmp3030->next;
}
$fn3032 $tmp3031 = $tmp3030->methods[0];
panda$core$Bit $tmp3033 = $tmp3031(((panda$core$Equatable*) $tmp3026), ((panda$core$Equatable*) $tmp3029));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3026)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3029)));
bool $tmp3034 = $tmp3033.value;
if ($tmp3034) goto block5; else goto block6;
block5:;
// line 821
panda$core$Int64* $tmp3035 = &param4->level;
panda$core$Int64 $tmp3036 = *$tmp3035;
panda$core$Int64 $tmp3037 = (panda$core$Int64) {1};
int64_t $tmp3038 = $tmp3036.value;
int64_t $tmp3039 = $tmp3037.value;
int64_t $tmp3040 = $tmp3038 - $tmp3039;
panda$core$Int64 $tmp3041 = (panda$core$Int64) {$tmp3040};
panda$core$Int64* $tmp3042 = &param4->level;
*$tmp3042 = $tmp3041;
// line 822
$fn3044 $tmp3043 = ($fn3044) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp3043(((panda$io$OutputStream*) param4), &$s3045);
// line 823
$fn3047 $tmp3046 = ($fn3047) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp3046(((panda$io$OutputStream*) param4), &$s3048);
// line 824
panda$core$Int64* $tmp3049 = &param4->level;
panda$core$Int64 $tmp3050 = *$tmp3049;
panda$core$Int64 $tmp3051 = (panda$core$Int64) {1};
int64_t $tmp3052 = $tmp3050.value;
int64_t $tmp3053 = $tmp3051.value;
int64_t $tmp3054 = $tmp3052 + $tmp3053;
panda$core$Int64 $tmp3055 = (panda$core$Int64) {$tmp3054};
panda$core$Int64* $tmp3056 = &param4->level;
*$tmp3056 = $tmp3055;
// line 825
panda$core$String* $tmp3057 = *(&local3);
panda$core$String* $tmp3058 = panda$core$String$convert$R$panda$core$String($tmp3057);
panda$core$String* $tmp3059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3058, &$s3060);
$fn3062 $tmp3061 = ($fn3062) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp3061(((panda$io$OutputStream*) param4), $tmp3059);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3058));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3059));
// line 826
panda$core$Int64* $tmp3063 = &param4->level;
panda$core$Int64 $tmp3064 = *$tmp3063;
panda$core$Int64 $tmp3065 = (panda$core$Int64) {1};
int64_t $tmp3066 = $tmp3064.value;
int64_t $tmp3067 = $tmp3065.value;
int64_t $tmp3068 = $tmp3066 - $tmp3067;
panda$core$Int64 $tmp3069 = (panda$core$Int64) {$tmp3068};
panda$core$Int64* $tmp3070 = &param4->level;
*$tmp3070 = $tmp3069;
// line 827
$fn3072 $tmp3071 = ($fn3072) ((panda$io$OutputStream*) param4)->$class->vtable[19];
$tmp3071(((panda$io$OutputStream*) param4), &$s3073);
goto block6;
block6:;
// line 829
panda$core$String* $tmp3074 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp3075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3076, $tmp3074);
panda$core$String* $tmp3077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3075, &$s3078);
panda$core$String* $tmp3079 = *(&local3);
panda$core$String* $tmp3080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3077, $tmp3079);
panda$core$String* $tmp3081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3080, &$s3082);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3081));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3074));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3075));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3077));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3080));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3081));
panda$core$String* $tmp3083 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3083));
// unreffing wrapped
*(&local3) = ((panda$core$String*) NULL);
return $tmp3081;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1, org$pandalanguage$pandac$Type* param2, org$pandalanguage$pandac$Type* param3, panda$io$IndentedOutputStream* param4) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
// line 833
panda$core$String* $tmp3084 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp3085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3086, $tmp3084);
panda$core$String* $tmp3087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3085, &$s3088);
panda$core$String* $tmp3089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3087, param1);
panda$core$String* $tmp3090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3089, &$s3091);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp3092 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3092));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3090));
*(&local0) = $tmp3090;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3084));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3085));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3087));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3089));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3090));
// line 834
org$pandalanguage$pandac$Type$Kind* $tmp3093 = &param3->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3094 = *$tmp3093;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3095;
$tmp3095 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3095->value = $tmp3094;
panda$core$Int64 $tmp3096 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3097 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3096);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3098;
$tmp3098 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3098->value = $tmp3097;
ITable* $tmp3099 = ((panda$core$Equatable*) $tmp3095)->$class->itable;
while ($tmp3099->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3099 = $tmp3099->next;
}
$fn3101 $tmp3100 = $tmp3099->methods[0];
panda$core$Bit $tmp3102 = $tmp3100(((panda$core$Equatable*) $tmp3095), ((panda$core$Equatable*) $tmp3098));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3095)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3098)));
bool $tmp3103 = $tmp3102.value;
if ($tmp3103) goto block1; else goto block2;
block1:;
// line 836
panda$collections$ImmutableArray** $tmp3104 = &param3->subtypes;
panda$collections$ImmutableArray* $tmp3105 = *$tmp3104;
panda$core$Int64 $tmp3106 = (panda$core$Int64) {0};
panda$core$Object* $tmp3107 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp3105, $tmp3106);
panda$core$String* $tmp3108 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, ((org$pandalanguage$pandac$Type*) $tmp3107), param4);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3109 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3109));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3108));
*(&local1) = $tmp3108;
panda$core$Panda$unref$panda$core$Object$Q($tmp3107);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3108));
// line 837
panda$core$String* $tmp3110 = *(&local1);
panda$collections$ImmutableArray** $tmp3111 = &param3->subtypes;
panda$collections$ImmutableArray* $tmp3112 = *$tmp3111;
panda$core$Int64 $tmp3113 = (panda$core$Int64) {0};
panda$core$Object* $tmp3114 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp3112, $tmp3113);
panda$core$String* $tmp3115 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, $tmp3110, ((org$pandalanguage$pandac$Type*) $tmp3114), param3, param4);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp3116 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3116));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3115));
*(&local2) = $tmp3115;
panda$core$Panda$unref$panda$core$Object$Q($tmp3114);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3115));
// line 838
panda$core$String* $tmp3117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3118, param1);
panda$core$String* $tmp3119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3117, &$s3120);
panda$core$String* $tmp3121 = *(&local2);
panda$core$String* $tmp3122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3119, $tmp3121);
panda$core$String* $tmp3123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3122, &$s3124);
panda$core$String* $tmp3125 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp3126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3123, $tmp3125);
panda$core$String* $tmp3127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3126, &$s3128);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3127));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3117));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3119));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3122));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3123));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3125));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3126));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3127));
panda$core$String* $tmp3129 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3129));
// unreffing nonNullValue
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp3130 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3130));
// unreffing wrapped
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3131 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3131));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3127;
block2:;
// line 840
panda$core$String* $tmp3132 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3132));
panda$core$String* $tmp3133 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3133));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3132;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1, org$pandalanguage$pandac$Type* param2, org$pandalanguage$pandac$Type* param3, panda$io$IndentedOutputStream* param4) {

// line 845
panda$core$String* $tmp3134 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp3135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3136, $tmp3134);
panda$core$String* $tmp3137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3135, &$s3138);
panda$core$String* $tmp3139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3137, param1);
panda$core$String* $tmp3140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3139, &$s3141);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3140));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3134));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3135));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3137));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3139));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3140));
return $tmp3140;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1, org$pandalanguage$pandac$Type* param2, org$pandalanguage$pandac$Type* param3, panda$io$IndentedOutputStream* param4) {

// line 850
panda$core$String* $tmp3142 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp3143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3144, $tmp3142);
panda$core$String* $tmp3145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3143, &$s3146);
panda$core$String* $tmp3147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3145, param1);
panda$core$String* $tmp3148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3147, &$s3149);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3148));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3142));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3143));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3145));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3147));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3148));
return $tmp3148;

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
panda$core$Bit $tmp3150 = org$pandalanguage$pandac$Type$get_isBuiltinNumber$R$panda$core$Bit(param3);
bool $tmp3151 = $tmp3150.value;
if ($tmp3151) goto block1; else goto block3;
block1:;
// line 855
panda$core$Bit $tmp3152 = org$pandalanguage$pandac$Type$get_isBuiltinNumber$R$panda$core$Bit(param2);
bool $tmp3153 = $tmp3152.value;
if ($tmp3153) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp3154 = (panda$core$Int64) {855};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3155, $tmp3154);
abort(); // unreachable
block4:;
// line 856
panda$core$String* $tmp3156 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
panda$core$String* $tmp3157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3158, $tmp3156);
panda$core$String* $tmp3159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3157, &$s3160);
panda$core$String* $tmp3161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3159, param1);
panda$core$String* $tmp3162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3161, &$s3163);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3162));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3156));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3157));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3159));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3161));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3162));
return $tmp3162;
block3:;
// line 1
// line 859
panda$core$Weak** $tmp3164 = &param0->compiler;
panda$core$Weak* $tmp3165 = *$tmp3164;
panda$core$Object* $tmp3166 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3165);
panda$core$Panda$unref$panda$core$Object$Q($tmp3166);
org$pandalanguage$pandac$ClassDecl* $tmp3167 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3166), param2);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3168 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3168));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3167));
*(&local0) = $tmp3167;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3167));
// line 860
org$pandalanguage$pandac$ClassDecl* $tmp3169 = *(&local0);
panda$core$Bit $tmp3170 = panda$core$Bit$init$builtin_bit($tmp3169 != NULL);
bool $tmp3171 = $tmp3170.value;
if ($tmp3171) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp3172 = (panda$core$Int64) {860};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3173, $tmp3172);
abort(); // unreachable
block6:;
// line 861
panda$core$Weak** $tmp3174 = &param0->compiler;
panda$core$Weak* $tmp3175 = *$tmp3174;
panda$core$Object* $tmp3176 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3175);
panda$core$Panda$unref$panda$core$Object$Q($tmp3176);
org$pandalanguage$pandac$ClassDecl* $tmp3177 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3176), param3);
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3178 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3178));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3177));
*(&local1) = $tmp3177;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3177));
// line 862
org$pandalanguage$pandac$ClassDecl* $tmp3179 = *(&local1);
panda$core$Bit $tmp3180 = panda$core$Bit$init$builtin_bit($tmp3179 != NULL);
bool $tmp3181 = $tmp3180.value;
if ($tmp3181) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp3182 = (panda$core$Int64) {862};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3183, $tmp3182);
abort(); // unreachable
block8:;
// line 863
panda$core$Weak** $tmp3184 = &param0->compiler;
panda$core$Weak* $tmp3185 = *$tmp3184;
panda$core$Object* $tmp3186 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3185);
panda$core$Panda$unref$panda$core$Object$Q($tmp3186);
org$pandalanguage$pandac$ClassDecl* $tmp3187 = *(&local0);
panda$core$Bit $tmp3188 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3186), $tmp3187);
bool $tmp3189 = $tmp3188.value;
if ($tmp3189) goto block10; else goto block11;
block10:;
panda$core$Weak** $tmp3190 = &param0->compiler;
panda$core$Weak* $tmp3191 = *$tmp3190;
panda$core$Object* $tmp3192 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3191);
panda$core$Panda$unref$panda$core$Object$Q($tmp3192);
org$pandalanguage$pandac$ClassDecl* $tmp3193 = *(&local1);
panda$core$Bit $tmp3194 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3192), $tmp3193);
panda$core$Bit $tmp3195 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3194);
*(&local2) = $tmp3195;
goto block12;
block11:;
*(&local2) = $tmp3188;
goto block12;
block12:;
panda$core$Bit $tmp3196 = *(&local2);
bool $tmp3197 = $tmp3196.value;
if ($tmp3197) goto block13; else goto block15;
block13:;
// line 864
panda$io$IndentedOutputStream** $tmp3198 = &param0->out;
panda$io$IndentedOutputStream* $tmp3199 = *$tmp3198;
panda$core$String* $tmp3200 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, param3, $tmp3199);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3200));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3200));
org$pandalanguage$pandac$ClassDecl* $tmp3201 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3201));
// unreffing targetClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3202 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3202));
// unreffing srcClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3200;
block15:;
// line 866
panda$core$Weak** $tmp3203 = &param0->compiler;
panda$core$Weak* $tmp3204 = *$tmp3203;
panda$core$Object* $tmp3205 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3204);
panda$core$Panda$unref$panda$core$Object$Q($tmp3205);
org$pandalanguage$pandac$ClassDecl* $tmp3206 = *(&local0);
panda$core$Bit $tmp3207 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3205), $tmp3206);
panda$core$Bit $tmp3208 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3207);
bool $tmp3209 = $tmp3208.value;
if ($tmp3209) goto block16; else goto block17;
block16:;
panda$core$Weak** $tmp3210 = &param0->compiler;
panda$core$Weak* $tmp3211 = *$tmp3210;
panda$core$Object* $tmp3212 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3211);
panda$core$Panda$unref$panda$core$Object$Q($tmp3212);
org$pandalanguage$pandac$ClassDecl* $tmp3213 = *(&local1);
panda$core$Bit $tmp3214 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3212), $tmp3213);
*(&local3) = $tmp3214;
goto block18;
block17:;
*(&local3) = $tmp3208;
goto block18;
block18:;
panda$core$Bit $tmp3215 = *(&local3);
bool $tmp3216 = $tmp3215.value;
if ($tmp3216) goto block19; else goto block21;
block19:;
// line 867
panda$io$IndentedOutputStream** $tmp3217 = &param0->out;
panda$io$IndentedOutputStream* $tmp3218 = *$tmp3217;
panda$core$String* $tmp3219 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, param3, $tmp3218);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3219));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3219));
org$pandalanguage$pandac$ClassDecl* $tmp3220 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3220));
// unreffing targetClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3221 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3221));
// unreffing srcClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3219;
block21:;
// line 869
panda$core$Weak** $tmp3222 = &param0->compiler;
panda$core$Weak* $tmp3223 = *$tmp3222;
panda$core$Object* $tmp3224 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3223);
panda$core$Panda$unref$panda$core$Object$Q($tmp3224);
org$pandalanguage$pandac$ClassDecl* $tmp3225 = *(&local0);
panda$core$Bit $tmp3226 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3224), $tmp3225);
bool $tmp3227 = $tmp3226.value;
if ($tmp3227) goto block22; else goto block23;
block22:;
org$pandalanguage$pandac$Type$Kind* $tmp3228 = &param3->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3229 = *$tmp3228;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3230;
$tmp3230 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3230->value = $tmp3229;
panda$core$Int64 $tmp3231 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3232 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3231);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3233;
$tmp3233 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3233->value = $tmp3232;
ITable* $tmp3234 = ((panda$core$Equatable*) $tmp3230)->$class->itable;
while ($tmp3234->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3234 = $tmp3234->next;
}
$fn3236 $tmp3235 = $tmp3234->methods[0];
panda$core$Bit $tmp3237 = $tmp3235(((panda$core$Equatable*) $tmp3230), ((panda$core$Equatable*) $tmp3233));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3230)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3233)));
*(&local5) = $tmp3237;
goto block24;
block23:;
*(&local5) = $tmp3226;
goto block24;
block24:;
panda$core$Bit $tmp3238 = *(&local5);
bool $tmp3239 = $tmp3238.value;
if ($tmp3239) goto block25; else goto block26;
block25:;
panda$collections$ImmutableArray** $tmp3240 = &param3->subtypes;
panda$collections$ImmutableArray* $tmp3241 = *$tmp3240;
panda$core$Int64 $tmp3242 = (panda$core$Int64) {0};
panda$core$Object* $tmp3243 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp3241, $tmp3242);
panda$core$Bit $tmp3244 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3243), param2);
panda$core$Panda$unref$panda$core$Object$Q($tmp3243);
*(&local4) = $tmp3244;
goto block27;
block26:;
*(&local4) = $tmp3238;
goto block27;
block27:;
panda$core$Bit $tmp3245 = *(&local4);
bool $tmp3246 = $tmp3245.value;
if ($tmp3246) goto block28; else goto block30;
block28:;
// line 871
panda$io$IndentedOutputStream** $tmp3247 = &param0->out;
panda$io$IndentedOutputStream* $tmp3248 = *$tmp3247;
panda$core$String* $tmp3249 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, param3, $tmp3248);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3249));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3249));
org$pandalanguage$pandac$ClassDecl* $tmp3250 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3250));
// unreffing targetClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3251 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3251));
// unreffing srcClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3249;
block30:;
// line 873
panda$core$Weak** $tmp3252 = &param0->compiler;
panda$core$Weak* $tmp3253 = *$tmp3252;
panda$core$Object* $tmp3254 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3253);
panda$core$Panda$unref$panda$core$Object$Q($tmp3254);
org$pandalanguage$pandac$ClassDecl* $tmp3255 = *(&local1);
panda$core$Bit $tmp3256 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3254), $tmp3255);
bool $tmp3257 = $tmp3256.value;
if ($tmp3257) goto block31; else goto block32;
block31:;
org$pandalanguage$pandac$Type$Kind* $tmp3258 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3259 = *$tmp3258;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3260;
$tmp3260 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3260->value = $tmp3259;
panda$core$Int64 $tmp3261 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3262 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3261);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3263;
$tmp3263 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3263->value = $tmp3262;
ITable* $tmp3264 = ((panda$core$Equatable*) $tmp3260)->$class->itable;
while ($tmp3264->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3264 = $tmp3264->next;
}
$fn3266 $tmp3265 = $tmp3264->methods[0];
panda$core$Bit $tmp3267 = $tmp3265(((panda$core$Equatable*) $tmp3260), ((panda$core$Equatable*) $tmp3263));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3260)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3263)));
*(&local7) = $tmp3267;
goto block33;
block32:;
*(&local7) = $tmp3256;
goto block33;
block33:;
panda$core$Bit $tmp3268 = *(&local7);
bool $tmp3269 = $tmp3268.value;
if ($tmp3269) goto block34; else goto block35;
block34:;
panda$collections$ImmutableArray** $tmp3270 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp3271 = *$tmp3270;
panda$core$Int64 $tmp3272 = (panda$core$Int64) {0};
panda$core$Object* $tmp3273 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp3271, $tmp3272);
panda$core$Bit $tmp3274 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3273), param3);
panda$core$Panda$unref$panda$core$Object$Q($tmp3273);
*(&local6) = $tmp3274;
goto block36;
block35:;
*(&local6) = $tmp3268;
goto block36;
block36:;
panda$core$Bit $tmp3275 = *(&local6);
bool $tmp3276 = $tmp3275.value;
if ($tmp3276) goto block37; else goto block38;
block37:;
// line 875
panda$io$IndentedOutputStream** $tmp3277 = &param0->out;
panda$io$IndentedOutputStream* $tmp3278 = *$tmp3277;
panda$core$String* $tmp3279 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(param0, param1, param2, param3, $tmp3278);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3279));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3279));
org$pandalanguage$pandac$ClassDecl* $tmp3280 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3280));
// unreffing targetClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3281 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3281));
// unreffing srcClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3279;
block38:;
goto block29;
block29:;
goto block20;
block20:;
goto block14;
block14:;
org$pandalanguage$pandac$ClassDecl* $tmp3282 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3282));
// unreffing targetClass
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3283 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3283));
// unreffing srcClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block2;
block2:;
// line 878
panda$core$String* $tmp3284 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param2);
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp3285 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3285));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3284));
*(&local8) = $tmp3284;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3284));
// line 879
panda$core$String* $tmp3286 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
*(&local9) = ((panda$core$String*) NULL);
panda$core$String* $tmp3287 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3287));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3286));
*(&local9) = $tmp3286;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3286));
// line 880
panda$core$String* $tmp3288 = *(&local8);
panda$core$String* $tmp3289 = *(&local9);
panda$core$Bit $tmp3290 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp3288, $tmp3289);
bool $tmp3291 = $tmp3290.value;
if ($tmp3291) goto block39; else goto block40;
block39:;
// line 881
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$core$String* $tmp3292 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3292));
// unreffing dstType
*(&local9) = ((panda$core$String*) NULL);
panda$core$String* $tmp3293 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3293));
// unreffing srcType
*(&local8) = ((panda$core$String*) NULL);
return param1;
block40:;
// line 883
panda$core$String* $tmp3294 = *(&local9);
panda$core$String* $tmp3295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3296, $tmp3294);
panda$core$String* $tmp3297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3295, &$s3298);
panda$core$String* $tmp3299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3297, param1);
panda$core$String* $tmp3300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3299, &$s3301);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3300));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3295));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3297));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3299));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3300));
panda$core$String* $tmp3302 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3302));
// unreffing dstType
*(&local9) = ((panda$core$String*) NULL);
panda$core$String* $tmp3303 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3303));
// unreffing srcType
*(&local8) = ((panda$core$String*) NULL);
return $tmp3300;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIntReference$panda$core$UInt64$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$UInt64 param1) {

// line 887
panda$core$Int64 $tmp3304 = (panda$core$Int64) {9223372036854775807};
panda$core$UInt64 $tmp3305 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3304);
uint64_t $tmp3306 = param1.value;
uint64_t $tmp3307 = $tmp3305.value;
bool $tmp3308 = $tmp3306 > $tmp3307;
panda$core$Bit $tmp3309 = (panda$core$Bit) {$tmp3308};
bool $tmp3310 = $tmp3309.value;
if ($tmp3310) goto block1; else goto block2;
block1:;
// line 888
panda$core$UInt64$wrapper* $tmp3311;
$tmp3311 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
$tmp3311->value = param1;
panda$core$String* $tmp3312 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp3311), &$s3313);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3312));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3311));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3312));
return $tmp3312;
block2:;
// line 890
panda$core$String* $tmp3314 = panda$core$UInt64$convert$R$panda$core$String(param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3314));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3314));
return $tmp3314;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$Type$panda$core$Real64$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1, panda$core$Real64 param2) {

panda$core$String* local0 = NULL;
// line 894
panda$core$String* $tmp3315 = panda$core$Real64$convert$R$panda$core$String(param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp3316 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3316));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3315));
*(&local0) = $tmp3315;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3315));
// line 895
panda$core$String* $tmp3317 = *(&local0);
panda$core$Bit $tmp3318 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp3317, &$s3319);
bool $tmp3320 = $tmp3318.value;
if ($tmp3320) goto block1; else goto block2;
block1:;
// line 896
panda$core$String* $tmp3321 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3321));
panda$core$String* $tmp3322 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3322));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3321;
block2:;
// line 898
panda$core$String* $tmp3323 = *(&local0);
panda$core$String* $tmp3324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3323, &$s3325);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3324));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3324));
panda$core$String* $tmp3326 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3326));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3324;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$Bit param1, panda$io$IndentedOutputStream* param2) {

// line 902
bool $tmp3327 = param1.value;
if ($tmp3327) goto block1; else goto block2;
block1:;
// line 903
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3328));
return &$s3329;
block2:;
// line 905
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3330));
return &$s3331;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, panda$core$String* param1) {

panda$core$String* local0 = NULL;
panda$core$Char8 local1;
// line 909
panda$core$Int64* $tmp3332 = &param0->varCount;
panda$core$Int64 $tmp3333 = *$tmp3332;
panda$core$Int64 $tmp3334 = (panda$core$Int64) {1};
int64_t $tmp3335 = $tmp3333.value;
int64_t $tmp3336 = $tmp3334.value;
int64_t $tmp3337 = $tmp3335 + $tmp3336;
panda$core$Int64 $tmp3338 = (panda$core$Int64) {$tmp3337};
panda$core$Int64* $tmp3339 = &param0->varCount;
*$tmp3339 = $tmp3338;
// line 910
panda$core$Int64* $tmp3340 = &param0->varCount;
panda$core$Int64 $tmp3341 = *$tmp3340;
panda$core$Int64$wrapper* $tmp3342;
$tmp3342 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3342->value = $tmp3341;
panda$core$String* $tmp3343 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3344, ((panda$core$Object*) $tmp3342));
panda$core$String* $tmp3345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3343, &$s3346);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp3347 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3347));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3345));
*(&local0) = $tmp3345;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3342));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3343));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3345));
// line 911
org$pandalanguage$pandac$Type* $tmp3348 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp3349 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp3348);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3348));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3349));
// line 912
panda$io$MemoryOutputStream** $tmp3350 = &param0->strings;
panda$io$MemoryOutputStream* $tmp3351 = *$tmp3350;
panda$core$String* $tmp3352 = *(&local0);
panda$core$String* $tmp3353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3354, $tmp3352);
panda$core$String* $tmp3355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3353, &$s3356);
panda$core$Int64 $tmp3357 = (panda$core$Int64) {18446744073709550617};
panda$core$Int64$wrapper* $tmp3358;
$tmp3358 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3358->value = $tmp3357;
panda$core$String* $tmp3359 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3360, ((panda$core$Object*) $tmp3358));
panda$core$String* $tmp3361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3359, &$s3362);
panda$core$String* $tmp3363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3355, $tmp3361);
panda$core$String* $tmp3364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3363, &$s3365);
$fn3367 $tmp3366 = ($fn3367) ((panda$io$OutputStream*) $tmp3351)->$class->vtable[17];
$tmp3366(((panda$io$OutputStream*) $tmp3351), $tmp3364);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3353));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3355));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3358));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3359));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3361));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3363));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3364));
// line 915
panda$collections$ListView* $tmp3368 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(param1);
ITable* $tmp3369 = ((panda$collections$Iterable*) $tmp3368)->$class->itable;
while ($tmp3369->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp3369 = $tmp3369->next;
}
$fn3371 $tmp3370 = $tmp3369->methods[0];
panda$collections$Iterator* $tmp3372 = $tmp3370(((panda$collections$Iterable*) $tmp3368));
goto block1;
block1:;
ITable* $tmp3373 = $tmp3372->$class->itable;
while ($tmp3373->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp3373 = $tmp3373->next;
}
$fn3375 $tmp3374 = $tmp3373->methods[0];
panda$core$Bit $tmp3376 = $tmp3374($tmp3372);
bool $tmp3377 = $tmp3376.value;
if ($tmp3377) goto block3; else goto block2;
block2:;
ITable* $tmp3378 = $tmp3372->$class->itable;
while ($tmp3378->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp3378 = $tmp3378->next;
}
$fn3380 $tmp3379 = $tmp3378->methods[1];
panda$core$Object* $tmp3381 = $tmp3379($tmp3372);
*(&local1) = ((panda$core$Char8$wrapper*) $tmp3381)->value;
// line 916
panda$io$MemoryOutputStream** $tmp3382 = &param0->strings;
panda$io$MemoryOutputStream* $tmp3383 = *$tmp3382;
panda$core$Char8 $tmp3384 = *(&local1);
panda$core$UInt8 $tmp3385 = panda$core$Char8$convert$R$panda$core$UInt8($tmp3384);
panda$core$UInt8$wrapper* $tmp3386;
$tmp3386 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
$tmp3386->value = $tmp3385;
ITable* $tmp3387 = ((panda$core$Formattable*) $tmp3386)->$class->itable;
while ($tmp3387->$class != (panda$core$Class*) &panda$core$Formattable$class) {
    $tmp3387 = $tmp3387->next;
}
$fn3389 $tmp3388 = $tmp3387->methods[0];
panda$core$String* $tmp3390 = $tmp3388(((panda$core$Formattable*) $tmp3386), &$s3391);
panda$core$String* $tmp3392 = panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String($tmp3390, &$s3393);
panda$core$String* $tmp3394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3395, $tmp3392);
panda$core$String* $tmp3396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3394, &$s3397);
$fn3399 $tmp3398 = ($fn3399) ((panda$io$OutputStream*) $tmp3383)->$class->vtable[17];
$tmp3398(((panda$io$OutputStream*) $tmp3383), $tmp3396);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Formattable*) $tmp3386)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3390));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3392));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3394));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3396));
panda$core$Panda$unref$panda$core$Object$Q($tmp3381);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3368));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3372));
// line 918
panda$io$MemoryOutputStream** $tmp3400 = &param0->strings;
panda$io$MemoryOutputStream* $tmp3401 = *$tmp3400;
panda$collections$ListView* $tmp3402 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(param1);
ITable* $tmp3403 = ((panda$collections$CollectionView*) $tmp3402)->$class->itable;
while ($tmp3403->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp3403 = $tmp3403->next;
}
$fn3405 $tmp3404 = $tmp3403->methods[0];
panda$core$Int64 $tmp3406 = $tmp3404(((panda$collections$CollectionView*) $tmp3402));
panda$core$Int64$wrapper* $tmp3407;
$tmp3407 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3407->value = $tmp3406;
panda$core$String* $tmp3408 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3409, ((panda$core$Object*) $tmp3407));
panda$core$String* $tmp3410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3408, &$s3411);
ITable* $tmp3412 = ((panda$collections$Key*) param1)->$class->itable;
while ($tmp3412->$class != (panda$core$Class*) &panda$collections$Key$class) {
    $tmp3412 = $tmp3412->next;
}
$fn3414 $tmp3413 = $tmp3412->methods[0];
panda$core$Int64 $tmp3415 = $tmp3413(((panda$collections$Key*) param1));
panda$core$Int64$wrapper* $tmp3416;
$tmp3416 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3416->value = $tmp3415;
panda$core$String* $tmp3417 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3410, ((panda$core$Object*) $tmp3416));
panda$core$String* $tmp3418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3417, &$s3419);
$fn3421 $tmp3420 = ($fn3421) ((panda$io$OutputStream*) $tmp3401)->$class->vtable[19];
$tmp3420(((panda$io$OutputStream*) $tmp3401), $tmp3418);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3402));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3407));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3408));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3410));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3416));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3417));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3418));
// line 919
panda$core$String* $tmp3422 = *(&local0);
panda$core$String* $tmp3423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3424, $tmp3422);
panda$core$String* $tmp3425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3423, &$s3426);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3425));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3423));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3425));
panda$core$String* $tmp3427 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3427));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3425;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
// line 923
org$pandalanguage$pandac$Type$Kind* $tmp3428 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3429 = *$tmp3428;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3430;
$tmp3430 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3430->value = $tmp3429;
panda$core$Int64 $tmp3431 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3432 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3431);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3433;
$tmp3433 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3433->value = $tmp3432;
ITable* $tmp3434 = ((panda$core$Equatable*) $tmp3430)->$class->itable;
while ($tmp3434->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3434 = $tmp3434->next;
}
$fn3436 $tmp3435 = $tmp3434->methods[0];
panda$core$Bit $tmp3437 = $tmp3435(((panda$core$Equatable*) $tmp3430), ((panda$core$Equatable*) $tmp3433));
bool $tmp3438 = $tmp3437.value;
if ($tmp3438) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp3439 = (panda$core$Int64) {923};
panda$core$String* $tmp3440 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3441, ((panda$core$Object*) param1));
panda$core$String* $tmp3442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3440, &$s3443);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3444, $tmp3439, $tmp3442);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3440));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3442));
abort(); // unreachable
block1:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3430)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3433)));
// line 924
panda$core$Weak** $tmp3445 = &param0->compiler;
panda$core$Weak* $tmp3446 = *$tmp3445;
panda$core$Object* $tmp3447 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3446);
panda$core$Panda$unref$panda$core$Object$Q($tmp3447);
panda$collections$ImmutableArray** $tmp3448 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp3449 = *$tmp3448;
panda$core$Int64 $tmp3450 = (panda$core$Int64) {0};
panda$core$Object* $tmp3451 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp3449, $tmp3450);
org$pandalanguage$pandac$ClassDecl* $tmp3452 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3447), ((org$pandalanguage$pandac$Type*) $tmp3451));
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3453 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3453));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3452));
*(&local0) = $tmp3452;
panda$core$Panda$unref$panda$core$Object$Q($tmp3451);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3452));
// line 925
org$pandalanguage$pandac$ClassDecl* $tmp3454 = *(&local0);
panda$core$Bit $tmp3455 = panda$core$Bit$init$builtin_bit($tmp3454 != NULL);
bool $tmp3456 = $tmp3455.value;
if ($tmp3456) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp3457 = (panda$core$Int64) {925};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3458, $tmp3457);
abort(); // unreachable
block3:;
// line 926
panda$core$Weak** $tmp3459 = &param0->compiler;
panda$core$Weak* $tmp3460 = *$tmp3459;
panda$core$Object* $tmp3461 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3460);
panda$core$Panda$unref$panda$core$Object$Q($tmp3461);
org$pandalanguage$pandac$ClassDecl* $tmp3462 = *(&local0);
panda$core$Bit $tmp3463 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3461), $tmp3462);
bool $tmp3464 = $tmp3463.value;
if ($tmp3464) goto block5; else goto block7;
block5:;
// line 927
panda$core$String* $tmp3465 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param1);
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
block7:;
// line 1
// line 930
panda$core$String* $tmp3471 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param1);
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
block6:;
panda$core$Bit $tmp3477 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3478 = $tmp3477.value;
if ($tmp3478) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp3479 = (panda$core$Int64) {922};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3480, $tmp3479, &$s3481);
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
panda$core$Int64* $tmp3482 = &param1->$rawValue;
panda$core$Int64 $tmp3483 = *$tmp3482;
panda$core$Int64 $tmp3484 = (panda$core$Int64) {0};
panda$core$Bit $tmp3485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3483, $tmp3484);
bool $tmp3486 = $tmp3485.value;
if ($tmp3486) goto block2; else goto block3;
block2:;
panda$core$Bit* $tmp3487 = (panda$core$Bit*) (param1->$data + 0);
panda$core$Bit $tmp3488 = *$tmp3487;
*(&local0) = $tmp3488;
// line 937
panda$core$Bit $tmp3489 = *(&local0);
panda$core$String* $tmp3490 = panda$core$Bit$convert$R$panda$core$String($tmp3489);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3490));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3490));
return $tmp3490;
block3:;
panda$core$Int64 $tmp3491 = (panda$core$Int64) {1};
panda$core$Bit $tmp3492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3483, $tmp3491);
bool $tmp3493 = $tmp3492.value;
if ($tmp3493) goto block4; else goto block5;
block4:;
panda$core$UInt64* $tmp3494 = (panda$core$UInt64*) (param1->$data + 0);
panda$core$UInt64 $tmp3495 = *$tmp3494;
*(&local1) = $tmp3495;
org$pandalanguage$pandac$Type** $tmp3496 = (org$pandalanguage$pandac$Type**) (param1->$data + 8);
org$pandalanguage$pandac$Type* $tmp3497 = *$tmp3496;
// line 939
panda$core$UInt64 $tmp3498 = *(&local1);
panda$core$String* $tmp3499 = panda$core$UInt64$convert$R$panda$core$String($tmp3498);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3499));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3499));
return $tmp3499;
block5:;
panda$core$Int64 $tmp3500 = (panda$core$Int64) {2};
panda$core$Bit $tmp3501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3483, $tmp3500);
bool $tmp3502 = $tmp3501.value;
if ($tmp3502) goto block6; else goto block7;
block6:;
panda$core$Int64* $tmp3503 = (panda$core$Int64*) (param1->$data + 0);
panda$core$Int64 $tmp3504 = *$tmp3503;
*(&local2) = $tmp3504;
org$pandalanguage$pandac$Type** $tmp3505 = (org$pandalanguage$pandac$Type**) (param1->$data + 8);
org$pandalanguage$pandac$Type* $tmp3506 = *$tmp3505;
// line 941
panda$core$Int64 $tmp3507 = *(&local2);
panda$core$Int64$wrapper* $tmp3508;
$tmp3508 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3508->value = $tmp3507;
panda$core$String* $tmp3509 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3510, ((panda$core$Object*) $tmp3508));
panda$core$String* $tmp3511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3509, &$s3512);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3511));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3508));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3509));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3511));
return $tmp3511;
block7:;
panda$core$Int64 $tmp3513 = (panda$core$Int64) {3};
panda$core$Bit $tmp3514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3483, $tmp3513);
bool $tmp3515 = $tmp3514.value;
if ($tmp3515) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$MethodDecl** $tmp3516 = (org$pandalanguage$pandac$MethodDecl**) (param1->$data + 0);
org$pandalanguage$pandac$MethodDecl* $tmp3517 = *$tmp3516;
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp3518 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3518));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3517));
*(&local3) = $tmp3517;
org$pandalanguage$pandac$Type** $tmp3519 = (org$pandalanguage$pandac$Type**) (param1->$data + 8);
org$pandalanguage$pandac$Type* $tmp3520 = *$tmp3519;
// line 943
org$pandalanguage$pandac$MethodDecl* $tmp3521 = *(&local3);
panda$core$Weak** $tmp3522 = &$tmp3521->owner;
panda$core$Weak* $tmp3523 = *$tmp3522;
panda$core$Object* $tmp3524 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3523);
panda$core$Panda$unref$panda$core$Object$Q($tmp3524);
panda$core$Bit* $tmp3525 = &((org$pandalanguage$pandac$ClassDecl*) $tmp3524)->external;
panda$core$Bit $tmp3526 = *$tmp3525;
bool $tmp3527 = $tmp3526.value;
if ($tmp3527) goto block10; else goto block11;
block10:;
// line 944
org$pandalanguage$pandac$MethodDecl* $tmp3528 = *(&local3);
org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(param0, $tmp3528);
goto block11;
block11:;
// line 946
org$pandalanguage$pandac$MethodDecl* $tmp3529 = *(&local3);
panda$core$String* $tmp3530 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, $tmp3529);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3530));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3530));
org$pandalanguage$pandac$MethodDecl* $tmp3531 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3531));
// unreffing m
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
return $tmp3530;
block9:;
panda$core$Int64 $tmp3532 = (panda$core$Int64) {4};
panda$core$Bit $tmp3533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3483, $tmp3532);
bool $tmp3534 = $tmp3533.value;
if ($tmp3534) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Type** $tmp3535 = (org$pandalanguage$pandac$Type**) (param1->$data + 0);
org$pandalanguage$pandac$Type* $tmp3536 = *$tmp3535;
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp3537 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3537));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3536));
*(&local4) = $tmp3536;
// line 948
org$pandalanguage$pandac$Type* $tmp3538 = *(&local4);
panda$core$String* $tmp3539 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp3538);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3539));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3539));
org$pandalanguage$pandac$Type* $tmp3540 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3540));
// unreffing type
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp3539;
block13:;
panda$core$Int64 $tmp3541 = (panda$core$Int64) {5};
panda$core$Bit $tmp3542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3483, $tmp3541);
bool $tmp3543 = $tmp3542.value;
if ($tmp3543) goto block14; else goto block15;
block14:;
panda$core$Int64* $tmp3544 = (panda$core$Int64*) (param1->$data + 0);
panda$core$Int64 $tmp3545 = *$tmp3544;
*(&local5) = $tmp3545;
org$pandalanguage$pandac$Type** $tmp3546 = (org$pandalanguage$pandac$Type**) (param1->$data + 8);
org$pandalanguage$pandac$Type* $tmp3547 = *$tmp3546;
// line 950
panda$core$Int64 $tmp3548 = *(&local5);
panda$core$Int64$wrapper* $tmp3549;
$tmp3549 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3549->value = $tmp3548;
panda$core$String* $tmp3550 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3551, ((panda$core$Object*) $tmp3549));
panda$core$String* $tmp3552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3550, &$s3553);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3552));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3549));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3550));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3552));
return $tmp3552;
block15:;
panda$core$Int64 $tmp3554 = (panda$core$Int64) {6};
panda$core$Bit $tmp3555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3483, $tmp3554);
bool $tmp3556 = $tmp3555.value;
if ($tmp3556) goto block16; else goto block17;
block16:;
panda$core$Real64* $tmp3557 = (panda$core$Real64*) (param1->$data + 0);
panda$core$Real64 $tmp3558 = *$tmp3557;
*(&local6) = $tmp3558;
org$pandalanguage$pandac$Type** $tmp3559 = (org$pandalanguage$pandac$Type**) (param1->$data + 8);
org$pandalanguage$pandac$Type* $tmp3560 = *$tmp3559;
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp3561 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3561));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3560));
*(&local7) = $tmp3560;
// line 952
org$pandalanguage$pandac$Type* $tmp3562 = *(&local7);
panda$core$Real64 $tmp3563 = *(&local6);
panda$core$String* $tmp3564 = org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$Type$panda$core$Real64$R$panda$core$String(param0, $tmp3562, $tmp3563);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3564));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3564));
org$pandalanguage$pandac$Type* $tmp3565 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3565));
// unreffing type
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp3564;
block17:;
panda$core$Int64 $tmp3566 = (panda$core$Int64) {7};
panda$core$Bit $tmp3567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3483, $tmp3566);
bool $tmp3568 = $tmp3567.value;
if ($tmp3568) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$IR$Statement$ID* $tmp3569 = (org$pandalanguage$pandac$IR$Statement$ID*) (param1->$data + 0);
org$pandalanguage$pandac$IR$Statement$ID $tmp3570 = *$tmp3569;
*(&local8) = $tmp3570;
org$pandalanguage$pandac$Type** $tmp3571 = (org$pandalanguage$pandac$Type**) (param1->$data + 8);
org$pandalanguage$pandac$Type* $tmp3572 = *$tmp3571;
// line 955
panda$collections$HashMap** $tmp3573 = &param0->refs;
panda$collections$HashMap* $tmp3574 = *$tmp3573;
org$pandalanguage$pandac$IR$Statement$ID $tmp3575 = *(&local8);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp3576;
$tmp3576 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp3576->value = $tmp3575;
panda$core$Object* $tmp3577 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp3574, ((panda$collections$Key*) $tmp3576));
panda$core$Bit $tmp3578 = panda$core$Bit$init$builtin_bit(((panda$core$String*) $tmp3577) == NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp3576)));
panda$core$Panda$unref$panda$core$Object$Q($tmp3577);
bool $tmp3579 = $tmp3578.value;
if ($tmp3579) goto block20; else goto block21;
block20:;
// line 956
org$pandalanguage$pandac$IR$Statement$ID $tmp3580 = *(&local8);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp3581;
$tmp3581 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp3581->value = $tmp3580;
panda$core$String* $tmp3582 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3583, ((panda$core$Object*) $tmp3581));
panda$core$String* $tmp3584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3582, &$s3585);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3584));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3581));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3582));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3584));
return $tmp3584;
block21:;
// line 958
panda$collections$HashMap** $tmp3586 = &param0->refs;
panda$collections$HashMap* $tmp3587 = *$tmp3586;
org$pandalanguage$pandac$IR$Statement$ID $tmp3588 = *(&local8);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp3589;
$tmp3589 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp3589->value = $tmp3588;
panda$core$Object* $tmp3590 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp3587, ((panda$collections$Key*) $tmp3589));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp3590)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp3589)));
panda$core$Panda$unref$panda$core$Object$Q($tmp3590);
return ((panda$core$String*) $tmp3590);
block19:;
panda$core$Int64 $tmp3591 = (panda$core$Int64) {8};
panda$core$Bit $tmp3592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3483, $tmp3591);
bool $tmp3593 = $tmp3592.value;
if ($tmp3593) goto block22; else goto block23;
block22:;
panda$core$String** $tmp3594 = (panda$core$String**) (param1->$data + 0);
panda$core$String* $tmp3595 = *$tmp3594;
*(&local9) = ((panda$core$String*) NULL);
panda$core$String* $tmp3596 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3596));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3595));
*(&local9) = $tmp3595;
// line 960
panda$core$String* $tmp3597 = *(&local9);
panda$core$String* $tmp3598 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$R$panda$core$String(param0, $tmp3597);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3598));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3598));
panda$core$String* $tmp3599 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3599));
// unreffing s
*(&local9) = ((panda$core$String*) NULL);
return $tmp3598;
block23:;
// line 962
panda$core$Bit $tmp3600 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3601 = $tmp3600.value;
if ($tmp3601) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp3602 = (panda$core$Int64) {962};
panda$core$String* $tmp3603 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3604, ((panda$core$Object*) param1));
panda$core$String* $tmp3605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3603, &$s3606);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3607, $tmp3602, $tmp3605);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3603));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3605));
abort(); // unreachable
block24:;
goto block1;
block1:;
panda$core$Bit $tmp3608 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3609 = $tmp3608.value;
if ($tmp3609) goto block26; else goto block27;
block27:;
panda$core$Int64 $tmp3610 = (panda$core$Int64) {934};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3611, $tmp3610, &$s3612);
abort(); // unreachable
block26:;
abort(); // unreachable

}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldOffset$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ChoiceCase* param1, panda$core$Int64 param2) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 967
panda$core$Int64 $tmp3613 = (panda$core$Int64) {0};
*(&local0) = $tmp3613;
// line 968
panda$core$Int64 $tmp3614 = (panda$core$Int64) {0};
panda$core$Bit $tmp3615 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp3616 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp3614, param2, $tmp3615);
panda$core$Int64 $tmp3617 = $tmp3616.min;
*(&local1) = $tmp3617;
panda$core$Int64 $tmp3618 = $tmp3616.max;
panda$core$Bit $tmp3619 = $tmp3616.inclusive;
bool $tmp3620 = $tmp3619.value;
panda$core$Int64 $tmp3621 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp3622 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3621);
if ($tmp3620) goto block4; else goto block5;
block4:;
int64_t $tmp3623 = $tmp3617.value;
int64_t $tmp3624 = $tmp3618.value;
bool $tmp3625 = $tmp3623 <= $tmp3624;
panda$core$Bit $tmp3626 = (panda$core$Bit) {$tmp3625};
bool $tmp3627 = $tmp3626.value;
if ($tmp3627) goto block1; else goto block2;
block5:;
int64_t $tmp3628 = $tmp3617.value;
int64_t $tmp3629 = $tmp3618.value;
bool $tmp3630 = $tmp3628 < $tmp3629;
panda$core$Bit $tmp3631 = (panda$core$Bit) {$tmp3630};
bool $tmp3632 = $tmp3631.value;
if ($tmp3632) goto block1; else goto block2;
block1:;
// line 970
panda$core$Int64 $tmp3633 = *(&local0);
panda$collections$Array** $tmp3634 = &param1->fields;
panda$collections$Array* $tmp3635 = *$tmp3634;
panda$core$Int64 $tmp3636 = *(&local1);
panda$core$Object* $tmp3637 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp3635, $tmp3636);
panda$core$Int64 $tmp3638 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, ((org$pandalanguage$pandac$Type*) $tmp3637));
int64_t $tmp3639 = $tmp3633.value;
int64_t $tmp3640 = $tmp3638.value;
int64_t $tmp3641 = $tmp3639 + $tmp3640;
panda$core$Int64 $tmp3642 = (panda$core$Int64) {$tmp3641};
*(&local0) = $tmp3642;
panda$core$Panda$unref$panda$core$Object$Q($tmp3637);
goto block3;
block3:;
panda$core$Int64 $tmp3643 = *(&local1);
int64_t $tmp3644 = $tmp3618.value;
int64_t $tmp3645 = $tmp3643.value;
int64_t $tmp3646 = $tmp3644 - $tmp3645;
panda$core$Int64 $tmp3647 = (panda$core$Int64) {$tmp3646};
panda$core$UInt64 $tmp3648 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3647);
if ($tmp3620) goto block7; else goto block8;
block7:;
uint64_t $tmp3649 = $tmp3648.value;
uint64_t $tmp3650 = $tmp3622.value;
bool $tmp3651 = $tmp3649 >= $tmp3650;
panda$core$Bit $tmp3652 = (panda$core$Bit) {$tmp3651};
bool $tmp3653 = $tmp3652.value;
if ($tmp3653) goto block6; else goto block2;
block8:;
uint64_t $tmp3654 = $tmp3648.value;
uint64_t $tmp3655 = $tmp3622.value;
bool $tmp3656 = $tmp3654 > $tmp3655;
panda$core$Bit $tmp3657 = (panda$core$Bit) {$tmp3656};
bool $tmp3658 = $tmp3657.value;
if ($tmp3658) goto block6; else goto block2;
block6:;
int64_t $tmp3659 = $tmp3643.value;
int64_t $tmp3660 = $tmp3621.value;
int64_t $tmp3661 = $tmp3659 + $tmp3660;
panda$core$Int64 $tmp3662 = (panda$core$Int64) {$tmp3661};
*(&local1) = $tmp3662;
goto block1;
block2:;
// line 972
panda$core$Int64 $tmp3663 = *(&local0);
return $tmp3663;

}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$String* local0 = NULL;
panda$core$Bit local1;
// line 976
panda$core$Weak** $tmp3664 = &param1->owner;
panda$core$Weak* $tmp3665 = *$tmp3664;
panda$core$Object* $tmp3666 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3665);
panda$core$Panda$unref$panda$core$Object$Q($tmp3666);
org$pandalanguage$pandac$Type** $tmp3667 = &((org$pandalanguage$pandac$ClassDecl*) $tmp3666)->type;
org$pandalanguage$pandac$Type* $tmp3668 = *$tmp3667;
panda$core$String* $tmp3669 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp3668);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp3670 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3670));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3669));
*(&local0) = $tmp3669;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3669));
// line 977
org$pandalanguage$pandac$MethodDecl$Kind* $tmp3671 = &param1->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp3672 = *$tmp3671;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp3673;
$tmp3673 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp3673->value = $tmp3672;
panda$core$Int64 $tmp3674 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp3675 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp3674);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp3676;
$tmp3676 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp3676->value = $tmp3675;
ITable* $tmp3677 = ((panda$core$Equatable*) $tmp3673)->$class->itable;
while ($tmp3677->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3677 = $tmp3677->next;
}
$fn3679 $tmp3678 = $tmp3677->methods[0];
panda$core$Bit $tmp3680 = $tmp3678(((panda$core$Equatable*) $tmp3673), ((panda$core$Equatable*) $tmp3676));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3673)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3676)));
bool $tmp3681 = $tmp3680.value;
if ($tmp3681) goto block1; else goto block2;
block1:;
panda$core$String* $tmp3682 = *(&local0);
panda$core$Bit $tmp3683 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp3682, &$s3684);
panda$core$Bit $tmp3685 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3683);
*(&local1) = $tmp3685;
goto block3;
block2:;
*(&local1) = $tmp3680;
goto block3;
block3:;
panda$core$Bit $tmp3686 = *(&local1);
bool $tmp3687 = $tmp3686.value;
if ($tmp3687) goto block4; else goto block5;
block4:;
// line 978
panda$core$String* $tmp3688 = *(&local0);
panda$core$String* $tmp3689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3688, &$s3690);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3689));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3689));
panda$core$String* $tmp3691 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3691));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3689;
block5:;
// line 980
panda$core$String* $tmp3692 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3692));
panda$core$String* $tmp3693 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3693));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp3692;

}
void org$pandalanguage$pandac$CCodeGenerator$writeIsNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$ClassDecl* local1 = NULL;
panda$core$String* local2 = NULL;
// line 984
panda$core$String* $tmp3694 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp3695 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3695));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3694));
*(&local0) = $tmp3694;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3694));
// line 985
panda$core$Weak** $tmp3696 = &param0->compiler;
panda$core$Weak* $tmp3697 = *$tmp3696;
panda$core$Object* $tmp3698 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3697);
panda$core$Panda$unref$panda$core$Object$Q($tmp3698);
$fn3700 $tmp3699 = ($fn3700) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3701 = $tmp3699(param2);
org$pandalanguage$pandac$ClassDecl* $tmp3702 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3698), $tmp3701);
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3703 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3703));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3702));
*(&local1) = $tmp3702;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3701));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3702));
// line 986
org$pandalanguage$pandac$ClassDecl* $tmp3704 = *(&local1);
panda$core$Bit $tmp3705 = panda$core$Bit$init$builtin_bit($tmp3704 != NULL);
bool $tmp3706 = $tmp3705.value;
if ($tmp3706) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp3707 = (panda$core$Int64) {986};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3708, $tmp3707);
abort(); // unreachable
block1:;
// line 987
*(&local2) = ((panda$core$String*) NULL);
// line 988
panda$core$Weak** $tmp3709 = &param0->compiler;
panda$core$Weak* $tmp3710 = *$tmp3709;
panda$core$Object* $tmp3711 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3710);
panda$core$Panda$unref$panda$core$Object$Q($tmp3711);
org$pandalanguage$pandac$ClassDecl* $tmp3712 = *(&local1);
panda$core$Bit $tmp3713 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3711), $tmp3712);
bool $tmp3714 = $tmp3713.value;
if ($tmp3714) goto block3; else goto block5;
block3:;
// line 989
$fn3716 $tmp3715 = ($fn3716) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3717 = $tmp3715(param2);
org$pandalanguage$pandac$Type$Kind* $tmp3718 = &$tmp3717->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3719 = *$tmp3718;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3720;
$tmp3720 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3720->value = $tmp3719;
panda$core$Int64 $tmp3721 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3722 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3721);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3723;
$tmp3723 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3723->value = $tmp3722;
ITable* $tmp3724 = ((panda$core$Equatable*) $tmp3720)->$class->itable;
while ($tmp3724->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3724 = $tmp3724->next;
}
$fn3726 $tmp3725 = $tmp3724->methods[1];
panda$core$Bit $tmp3727 = $tmp3725(((panda$core$Equatable*) $tmp3720), ((panda$core$Equatable*) $tmp3723));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3717));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3720)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3723)));
bool $tmp3728 = $tmp3727.value;
if ($tmp3728) goto block6; else goto block8;
block6:;
// line 990
panda$core$String* $tmp3729 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3729));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3730));
*(&local2) = &$s3731;
goto block7;
block8:;
// line 1
// line 993
panda$core$String* $tmp3732 = *(&local0);
panda$core$String* $tmp3733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3734, $tmp3732);
panda$core$String* $tmp3735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3733, &$s3736);
panda$core$String* $tmp3737 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3737));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3735));
*(&local2) = $tmp3735;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3733));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3735));
goto block7;
block7:;
goto block4;
block5:;
// line 1
// line 997
panda$core$String* $tmp3738 = *(&local0);
panda$core$String* $tmp3739 = panda$core$String$convert$R$panda$core$String($tmp3738);
panda$core$String* $tmp3740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3739, &$s3741);
panda$core$String* $tmp3742 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3742));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3740));
*(&local2) = $tmp3740;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3739));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3740));
goto block4;
block4:;
// line 999
panda$collections$HashMap** $tmp3743 = &param0->refs;
panda$collections$HashMap* $tmp3744 = *$tmp3743;
panda$core$String* $tmp3745 = *(&local2);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp3746;
$tmp3746 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp3746->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp3744, ((panda$collections$Key*) $tmp3746), ((panda$core$Object*) $tmp3745));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp3746)));
panda$core$String* $tmp3747 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3747));
// unreffing bit
*(&local2) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3748 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3748));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$String* $tmp3749 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3749));
// unreffing ref
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeIsNonNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$ClassDecl* local1 = NULL;
panda$core$String* local2 = NULL;
// line 1003
panda$core$String* $tmp3750 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp3751 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3751));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3750));
*(&local0) = $tmp3750;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3750));
// line 1004
panda$core$Weak** $tmp3752 = &param0->compiler;
panda$core$Weak* $tmp3753 = *$tmp3752;
panda$core$Object* $tmp3754 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3753);
panda$core$Panda$unref$panda$core$Object$Q($tmp3754);
$fn3756 $tmp3755 = ($fn3756) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3757 = $tmp3755(param2);
org$pandalanguage$pandac$ClassDecl* $tmp3758 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp3754), $tmp3757);
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3759 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3759));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3758));
*(&local1) = $tmp3758;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3757));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3758));
// line 1005
org$pandalanguage$pandac$ClassDecl* $tmp3760 = *(&local1);
panda$core$Bit $tmp3761 = panda$core$Bit$init$builtin_bit($tmp3760 != NULL);
bool $tmp3762 = $tmp3761.value;
if ($tmp3762) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp3763 = (panda$core$Int64) {1005};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3764, $tmp3763);
abort(); // unreachable
block1:;
// line 1006
*(&local2) = ((panda$core$String*) NULL);
// line 1007
panda$core$Weak** $tmp3765 = &param0->compiler;
panda$core$Weak* $tmp3766 = *$tmp3765;
panda$core$Object* $tmp3767 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3766);
panda$core$Panda$unref$panda$core$Object$Q($tmp3767);
org$pandalanguage$pandac$ClassDecl* $tmp3768 = *(&local1);
panda$core$Bit $tmp3769 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp3767), $tmp3768);
bool $tmp3770 = $tmp3769.value;
if ($tmp3770) goto block3; else goto block5;
block3:;
// line 1008
$fn3772 $tmp3771 = ($fn3772) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3773 = $tmp3771(param2);
org$pandalanguage$pandac$Type$Kind* $tmp3774 = &$tmp3773->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3775 = *$tmp3774;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3776;
$tmp3776 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3776->value = $tmp3775;
panda$core$Int64 $tmp3777 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp3778 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp3777);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp3779;
$tmp3779 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp3779->value = $tmp3778;
ITable* $tmp3780 = ((panda$core$Equatable*) $tmp3776)->$class->itable;
while ($tmp3780->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3780 = $tmp3780->next;
}
$fn3782 $tmp3781 = $tmp3780->methods[1];
panda$core$Bit $tmp3783 = $tmp3781(((panda$core$Equatable*) $tmp3776), ((panda$core$Equatable*) $tmp3779));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3773));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3776)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3779)));
bool $tmp3784 = $tmp3783.value;
if ($tmp3784) goto block6; else goto block8;
block6:;
// line 1009
panda$core$String* $tmp3785 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3785));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3786));
*(&local2) = &$s3787;
goto block7;
block8:;
// line 1
// line 1012
panda$core$String* $tmp3788 = *(&local0);
panda$core$String* $tmp3789 = panda$core$String$convert$R$panda$core$String($tmp3788);
panda$core$String* $tmp3790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3789, &$s3791);
panda$core$String* $tmp3792 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3792));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3790));
*(&local2) = $tmp3790;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3789));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3790));
goto block7;
block7:;
goto block4;
block5:;
// line 1
// line 1016
panda$core$String* $tmp3793 = *(&local0);
panda$core$String* $tmp3794 = panda$core$String$convert$R$panda$core$String($tmp3793);
panda$core$String* $tmp3795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3794, &$s3796);
panda$core$String* $tmp3797 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3797));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3795));
*(&local2) = $tmp3795;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3794));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3795));
goto block4;
block4:;
// line 1018
panda$collections$HashMap** $tmp3798 = &param0->refs;
panda$collections$HashMap* $tmp3799 = *$tmp3798;
panda$core$String* $tmp3800 = *(&local2);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp3801;
$tmp3801 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp3801->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp3799, ((panda$collections$Key*) $tmp3801), ((panda$core$Object*) $tmp3800));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp3801)));
panda$core$String* $tmp3802 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3802));
// unreffing bit
*(&local2) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3803 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3803));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$String* $tmp3804 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3804));
// unreffing ref
*(&local0) = ((panda$core$String*) NULL);
return;

}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$isNull$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1) {

// line 1022
panda$core$Int64* $tmp3805 = &param1->$rawValue;
panda$core$Int64 $tmp3806 = *$tmp3805;
panda$core$Int64 $tmp3807 = (panda$core$Int64) {4};
panda$core$Bit $tmp3808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3806, $tmp3807);
bool $tmp3809 = $tmp3808.value;
if ($tmp3809) goto block2; else goto block1;
block2:;
// line 1024
panda$core$Bit $tmp3810 = panda$core$Bit$init$builtin_bit(true);
return $tmp3810;
block1:;
// line 1026
panda$core$Bit $tmp3811 = panda$core$Bit$init$builtin_bit(false);
return $tmp3811;

}
void org$pandalanguage$pandac$CCodeGenerator$writeBinary$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$parser$Token$Kind param3, org$pandalanguage$pandac$IR$Value* param4, org$pandalanguage$pandac$Type* param5) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
// line 1031
panda$core$String* $tmp3812 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp3813 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3813));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3812));
*(&local0) = $tmp3812;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3812));
// line 1032
panda$core$String* $tmp3814 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param4);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3815 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3815));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3814));
*(&local1) = $tmp3814;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3814));
// line 1033
$fn3817 $tmp3816 = ($fn3817) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3818 = $tmp3816(param2);
panda$core$Bit $tmp3819 = org$pandalanguage$pandac$Type$get_isNullable$R$panda$core$Bit($tmp3818);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3818));
bool $tmp3820 = $tmp3819.value;
if ($tmp3820) goto block1; else goto block2;
block1:;
// line 1034
panda$core$Int64 $tmp3821 = param3.$rawValue;
panda$core$Int64 $tmp3822 = (panda$core$Int64) {61};
panda$core$Bit $tmp3823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3821, $tmp3822);
bool $tmp3824 = $tmp3823.value;
if ($tmp3824) goto block4; else goto block5;
block4:;
// line 1036
panda$core$Bit $tmp3825 = org$pandalanguage$pandac$CCodeGenerator$isNull$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(param0, param2);
bool $tmp3826 = $tmp3825.value;
if ($tmp3826) goto block6; else goto block7;
block6:;
// line 1037
org$pandalanguage$pandac$CCodeGenerator$writeIsNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, param4);
// line 1038
panda$core$String* $tmp3827 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3827));
// unreffing rightRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3828 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3828));
// unreffing leftRef
*(&local0) = ((panda$core$String*) NULL);
return;
block7:;
// line 1040
panda$core$Bit $tmp3829 = org$pandalanguage$pandac$CCodeGenerator$isNull$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(param0, param4);
bool $tmp3830 = $tmp3829.value;
if ($tmp3830) goto block8; else goto block9;
block8:;
// line 1041
org$pandalanguage$pandac$CCodeGenerator$writeIsNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, param2);
// line 1042
panda$core$String* $tmp3831 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3831));
// unreffing rightRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3832 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3832));
// unreffing leftRef
*(&local0) = ((panda$core$String*) NULL);
return;
block9:;
goto block3;
block5:;
panda$core$Int64 $tmp3833 = (panda$core$Int64) {62};
panda$core$Bit $tmp3834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3821, $tmp3833);
bool $tmp3835 = $tmp3834.value;
if ($tmp3835) goto block10; else goto block3;
block10:;
// line 1045
panda$core$Bit $tmp3836 = org$pandalanguage$pandac$CCodeGenerator$isNull$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(param0, param2);
bool $tmp3837 = $tmp3836.value;
if ($tmp3837) goto block11; else goto block12;
block11:;
// line 1046
org$pandalanguage$pandac$CCodeGenerator$writeIsNonNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, param4);
// line 1047
panda$core$String* $tmp3838 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3838));
// unreffing rightRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3839 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3839));
// unreffing leftRef
*(&local0) = ((panda$core$String*) NULL);
return;
block12:;
// line 1049
panda$core$Bit $tmp3840 = org$pandalanguage$pandac$CCodeGenerator$isNull$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(param0, param4);
bool $tmp3841 = $tmp3840.value;
if ($tmp3841) goto block13; else goto block14;
block13:;
// line 1050
org$pandalanguage$pandac$CCodeGenerator$writeIsNonNull$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, param2);
// line 1051
panda$core$String* $tmp3842 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3842));
// unreffing rightRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp3843 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3843));
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
panda$core$Int64 $tmp3844 = param3.$rawValue;
panda$core$Int64 $tmp3845 = (panda$core$Int64) {52};
panda$core$Bit $tmp3846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3844, $tmp3845);
bool $tmp3847 = $tmp3846.value;
if ($tmp3847) goto block16; else goto block17;
block16:;
// line 1058
panda$core$String* $tmp3848 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3848));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3849));
*(&local2) = &$s3850;
goto block15;
block17:;
panda$core$Int64 $tmp3851 = (panda$core$Int64) {53};
panda$core$Bit $tmp3852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3844, $tmp3851);
bool $tmp3853 = $tmp3852.value;
if ($tmp3853) goto block18; else goto block19;
block18:;
// line 1060
panda$core$String* $tmp3854 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3854));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3855));
*(&local2) = &$s3856;
goto block15;
block19:;
panda$core$Int64 $tmp3857 = (panda$core$Int64) {54};
panda$core$Bit $tmp3858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3844, $tmp3857);
bool $tmp3859 = $tmp3858.value;
if ($tmp3859) goto block20; else goto block21;
block20:;
// line 1062
panda$core$String* $tmp3860 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3860));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3861));
*(&local2) = &$s3862;
goto block15;
block21:;
panda$core$Int64 $tmp3863 = (panda$core$Int64) {55};
panda$core$Bit $tmp3864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3844, $tmp3863);
bool $tmp3865 = $tmp3864.value;
if ($tmp3865) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp3866 = (panda$core$Int64) {56};
panda$core$Bit $tmp3867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3844, $tmp3866);
bool $tmp3868 = $tmp3867.value;
if ($tmp3868) goto block22; else goto block24;
block22:;
// line 1064
panda$core$String* $tmp3869 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3869));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3870));
*(&local2) = &$s3871;
goto block15;
block24:;
panda$core$Int64 $tmp3872 = (panda$core$Int64) {57};
panda$core$Bit $tmp3873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3844, $tmp3872);
bool $tmp3874 = $tmp3873.value;
if ($tmp3874) goto block25; else goto block26;
block25:;
// line 1066
panda$core$String* $tmp3875 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3875));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3876));
*(&local2) = &$s3877;
goto block15;
block26:;
panda$core$Int64 $tmp3878 = (panda$core$Int64) {73};
panda$core$Bit $tmp3879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3844, $tmp3878);
bool $tmp3880 = $tmp3879.value;
if ($tmp3880) goto block27; else goto block28;
block27:;
// line 1068
panda$core$String* $tmp3881 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3881));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3882));
*(&local2) = &$s3883;
goto block15;
block28:;
panda$core$Int64 $tmp3884 = (panda$core$Int64) {1};
panda$core$Bit $tmp3885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3844, $tmp3884);
bool $tmp3886 = $tmp3885.value;
if ($tmp3886) goto block29; else goto block30;
block29:;
// line 1070
panda$core$String* $tmp3887 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3887));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3888));
*(&local2) = &$s3889;
goto block15;
block30:;
panda$core$Int64 $tmp3890 = (panda$core$Int64) {67};
panda$core$Bit $tmp3891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3844, $tmp3890);
bool $tmp3892 = $tmp3891.value;
if ($tmp3892) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp3893 = (panda$core$Int64) {68};
panda$core$Bit $tmp3894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3844, $tmp3893);
bool $tmp3895 = $tmp3894.value;
if ($tmp3895) goto block31; else goto block33;
block31:;
// line 1072
panda$core$String* $tmp3896 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3896));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3897));
*(&local2) = &$s3898;
goto block15;
block33:;
panda$core$Int64 $tmp3899 = (panda$core$Int64) {69};
panda$core$Bit $tmp3900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3844, $tmp3899);
bool $tmp3901 = $tmp3900.value;
if ($tmp3901) goto block34; else goto block35;
block35:;
panda$core$Int64 $tmp3902 = (panda$core$Int64) {70};
panda$core$Bit $tmp3903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3844, $tmp3902);
bool $tmp3904 = $tmp3903.value;
if ($tmp3904) goto block34; else goto block36;
block34:;
// line 1074
panda$core$String* $tmp3905 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3905));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3906));
*(&local2) = &$s3907;
goto block15;
block36:;
panda$core$Int64 $tmp3908 = (panda$core$Int64) {71};
panda$core$Bit $tmp3909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3844, $tmp3908);
bool $tmp3910 = $tmp3909.value;
if ($tmp3910) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp3911 = (panda$core$Int64) {72};
panda$core$Bit $tmp3912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3844, $tmp3911);
bool $tmp3913 = $tmp3912.value;
if ($tmp3913) goto block37; else goto block39;
block37:;
// line 1076
panda$core$String* $tmp3914 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3914));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3915));
*(&local2) = &$s3916;
goto block15;
block39:;
panda$core$Int64 $tmp3917 = (panda$core$Int64) {59};
panda$core$Bit $tmp3918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3844, $tmp3917);
bool $tmp3919 = $tmp3918.value;
if ($tmp3919) goto block40; else goto block41;
block41:;
panda$core$Int64 $tmp3920 = (panda$core$Int64) {61};
panda$core$Bit $tmp3921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3844, $tmp3920);
bool $tmp3922 = $tmp3921.value;
if ($tmp3922) goto block40; else goto block42;
block40:;
// line 1078
panda$core$String* $tmp3923 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3923));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3924));
*(&local2) = &$s3925;
goto block15;
block42:;
panda$core$Int64 $tmp3926 = (panda$core$Int64) {60};
panda$core$Bit $tmp3927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3844, $tmp3926);
bool $tmp3928 = $tmp3927.value;
if ($tmp3928) goto block43; else goto block44;
block44:;
panda$core$Int64 $tmp3929 = (panda$core$Int64) {62};
panda$core$Bit $tmp3930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3844, $tmp3929);
bool $tmp3931 = $tmp3930.value;
if ($tmp3931) goto block43; else goto block45;
block43:;
// line 1080
panda$core$String* $tmp3932 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3932));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3933));
*(&local2) = &$s3934;
goto block15;
block45:;
panda$core$Int64 $tmp3935 = (panda$core$Int64) {64};
panda$core$Bit $tmp3936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3844, $tmp3935);
bool $tmp3937 = $tmp3936.value;
if ($tmp3937) goto block46; else goto block47;
block46:;
// line 1082
panda$core$String* $tmp3938 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3938));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3939));
*(&local2) = &$s3940;
goto block15;
block47:;
panda$core$Int64 $tmp3941 = (panda$core$Int64) {63};
panda$core$Bit $tmp3942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3844, $tmp3941);
bool $tmp3943 = $tmp3942.value;
if ($tmp3943) goto block48; else goto block49;
block48:;
// line 1084
panda$core$String* $tmp3944 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3944));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3945));
*(&local2) = &$s3946;
goto block15;
block49:;
panda$core$Int64 $tmp3947 = (panda$core$Int64) {66};
panda$core$Bit $tmp3948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3844, $tmp3947);
bool $tmp3949 = $tmp3948.value;
if ($tmp3949) goto block50; else goto block51;
block50:;
// line 1086
panda$core$String* $tmp3950 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3950));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3951));
*(&local2) = &$s3952;
goto block15;
block51:;
panda$core$Int64 $tmp3953 = (panda$core$Int64) {65};
panda$core$Bit $tmp3954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3844, $tmp3953);
bool $tmp3955 = $tmp3954.value;
if ($tmp3955) goto block52; else goto block53;
block52:;
// line 1088
panda$core$String* $tmp3956 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3956));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3957));
*(&local2) = &$s3958;
goto block15;
block53:;
// line 1090
panda$core$Bit $tmp3959 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3960 = $tmp3959.value;
if ($tmp3960) goto block54; else goto block55;
block55:;
panda$core$Int64 $tmp3961 = (panda$core$Int64) {1090};
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3962;
$tmp3962 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3962->value = param3;
panda$core$String* $tmp3963 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3964, ((panda$core$Object*) $tmp3962));
panda$core$String* $tmp3965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3963, &$s3966);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3967, $tmp3961, $tmp3965);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3962));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3963));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3965));
abort(); // unreachable
block54:;
goto block15;
block15:;
// line 1092
panda$core$String* $tmp3968 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp3969 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3969));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3968));
*(&local3) = $tmp3968;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3968));
// line 1093
panda$io$IndentedOutputStream** $tmp3970 = &param0->out;
panda$io$IndentedOutputStream* $tmp3971 = *$tmp3970;
panda$core$String* $tmp3972 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param5);
panda$core$String* $tmp3973 = panda$core$String$convert$R$panda$core$String($tmp3972);
panda$core$String* $tmp3974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3973, &$s3975);
panda$core$String* $tmp3976 = *(&local3);
panda$core$String* $tmp3977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3974, $tmp3976);
panda$core$String* $tmp3978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3977, &$s3979);
panda$core$String* $tmp3980 = *(&local0);
panda$core$String* $tmp3981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3978, $tmp3980);
panda$core$String* $tmp3982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3981, &$s3983);
panda$core$String* $tmp3984 = *(&local2);
panda$core$String* $tmp3985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3982, $tmp3984);
panda$core$String* $tmp3986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3985, &$s3987);
panda$core$String* $tmp3988 = *(&local1);
panda$core$String* $tmp3989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3986, $tmp3988);
panda$core$String* $tmp3990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3989, &$s3991);
$fn3993 $tmp3992 = ($fn3993) ((panda$io$OutputStream*) $tmp3971)->$class->vtable[19];
$tmp3992(((panda$io$OutputStream*) $tmp3971), $tmp3990);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3972));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3973));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3974));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3977));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3978));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3981));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3982));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3985));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3986));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3989));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3990));
// line 1094
panda$collections$HashMap** $tmp3994 = &param0->refs;
panda$collections$HashMap* $tmp3995 = *$tmp3994;
panda$core$String* $tmp3996 = *(&local3);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp3997;
$tmp3997 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp3997->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp3995, ((panda$collections$Key*) $tmp3997), ((panda$core$Object*) $tmp3996));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp3997)));
panda$core$String* $tmp3998 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3998));
// unreffing result
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp3999 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3999));
// unreffing cOp
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4000 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4000));
// unreffing rightRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4001 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4001));
// unreffing leftRef
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeBranch$org$pandalanguage$pandac$IR$Block$ID(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Block$ID param1) {

// line 1098
panda$io$IndentedOutputStream** $tmp4002 = &param0->out;
panda$io$IndentedOutputStream* $tmp4003 = *$tmp4002;
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp4004;
$tmp4004 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp4004->value = param1;
panda$core$String* $tmp4005 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4006, ((panda$core$Object*) $tmp4004));
panda$core$String* $tmp4007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4005, &$s4008);
$fn4010 $tmp4009 = ($fn4010) ((panda$io$OutputStream*) $tmp4003)->$class->vtable[19];
$tmp4009(((panda$io$OutputStream*) $tmp4003), $tmp4007);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4004));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4005));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4007));
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeCast$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$Type* param3) {

// line 1102
panda$collections$HashMap** $tmp4011 = &param0->refs;
panda$collections$HashMap* $tmp4012 = *$tmp4011;
panda$core$String* $tmp4013 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
$fn4015 $tmp4014 = ($fn4015) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4016 = $tmp4014(param2);
panda$core$String* $tmp4017 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4013, $tmp4016, param3);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4018;
$tmp4018 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4018->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4012, ((panda$collections$Key*) $tmp4018), ((panda$core$Object*) $tmp4017));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4013));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4016));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4017));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4018)));
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeConditionalBranch$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1, org$pandalanguage$pandac$IR$Block$ID param2, org$pandalanguage$pandac$IR$Block$ID param3) {

// line 1106
panda$io$IndentedOutputStream** $tmp4019 = &param0->out;
panda$io$IndentedOutputStream* $tmp4020 = *$tmp4019;
panda$core$String* $tmp4021 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param1);
panda$core$String* $tmp4022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4023, $tmp4021);
panda$core$String* $tmp4024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4022, &$s4025);
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp4026;
$tmp4026 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp4026->value = param2;
panda$core$String* $tmp4027 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4024, ((panda$core$Object*) $tmp4026));
panda$core$String* $tmp4028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4027, &$s4029);
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp4030;
$tmp4030 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp4030->value = param3;
panda$core$String* $tmp4031 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4028, ((panda$core$Object*) $tmp4030));
panda$core$String* $tmp4032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4031, &$s4033);
$fn4035 $tmp4034 = ($fn4035) ((panda$io$OutputStream*) $tmp4020)->$class->vtable[19];
$tmp4034(((panda$io$OutputStream*) $tmp4020), $tmp4032);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4021));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4022));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4024));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4026));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4027));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4028));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4030));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4031));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4032));
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeConstruct$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$ClassDecl* param2) {

org$pandalanguage$pandac$CCodeGenerator$ClassConstant* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$Type* local3 = NULL;
// line 1110
panda$core$Weak** $tmp4036 = &param0->compiler;
panda$core$Weak* $tmp4037 = *$tmp4036;
panda$core$Object* $tmp4038 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4037);
panda$core$Panda$unref$panda$core$Object$Q($tmp4038);
panda$core$Bit $tmp4039 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp4038), param2);
panda$core$Bit $tmp4040 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4039);
bool $tmp4041 = $tmp4040.value;
if ($tmp4041) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp4042 = (panda$core$Int64) {1110};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s4043, $tmp4042);
abort(); // unreachable
block1:;
// line 1111
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4044 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, param2);
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4045 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4045));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4044));
*(&local0) = $tmp4044;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4044));
// line 1112
*(&local1) = ((panda$core$String*) NULL);
// line 1113
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4046 = *(&local0);
panda$core$String** $tmp4047 = &$tmp4046->type;
panda$core$String* $tmp4048 = *$tmp4047;
ITable* $tmp4050 = ((panda$core$Equatable*) $tmp4048)->$class->itable;
while ($tmp4050->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4050 = $tmp4050->next;
}
$fn4052 $tmp4051 = $tmp4050->methods[1];
panda$core$Bit $tmp4053 = $tmp4051(((panda$core$Equatable*) $tmp4048), ((panda$core$Equatable*) &$s4049));
bool $tmp4054 = $tmp4053.value;
if ($tmp4054) goto block3; else goto block5;
block3:;
// line 1114
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4055 = *(&local0);
panda$core$String** $tmp4056 = &$tmp4055->name;
panda$core$String* $tmp4057 = *$tmp4056;
panda$core$String* $tmp4058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4059, $tmp4057);
panda$core$String* $tmp4060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4058, &$s4061);
panda$core$String* $tmp4062 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4062));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4060));
*(&local1) = $tmp4060;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4058));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4060));
goto block4;
block5:;
// line 1
// line 1117
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4063 = *(&local0);
panda$core$String** $tmp4064 = &$tmp4063->name;
panda$core$String* $tmp4065 = *$tmp4064;
panda$core$String* $tmp4066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4067, $tmp4065);
panda$core$String* $tmp4068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4066, &$s4069);
panda$core$String* $tmp4070 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4070));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4068));
*(&local1) = $tmp4068;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4066));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4068));
goto block4;
block4:;
// line 1119
panda$core$String* $tmp4071 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4072 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4072));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4071));
*(&local2) = $tmp4071;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4071));
// line 1120
org$pandalanguage$pandac$Type** $tmp4073 = &param2->type;
org$pandalanguage$pandac$Type* $tmp4074 = *$tmp4073;
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp4075 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4075));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4074));
*(&local3) = $tmp4074;
// line 1121
panda$io$IndentedOutputStream** $tmp4076 = &param0->out;
panda$io$IndentedOutputStream* $tmp4077 = *$tmp4076;
org$pandalanguage$pandac$Type* $tmp4078 = *(&local3);
panda$core$String* $tmp4079 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4078);
panda$core$String* $tmp4080 = panda$core$String$convert$R$panda$core$String($tmp4079);
panda$core$String* $tmp4081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4080, &$s4082);
panda$core$String* $tmp4083 = *(&local2);
panda$core$String* $tmp4084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4081, $tmp4083);
panda$core$String* $tmp4085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4084, &$s4086);
org$pandalanguage$pandac$Type* $tmp4087 = *(&local3);
panda$core$String* $tmp4088 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4087);
panda$core$String* $tmp4089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4085, $tmp4088);
panda$core$String* $tmp4090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4089, &$s4091);
org$pandalanguage$pandac$Type* $tmp4092 = *(&local3);
panda$core$Int64 $tmp4093 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, $tmp4092);
panda$core$String* $tmp4094 = panda$core$Int64$convert$R$panda$core$String($tmp4093);
panda$core$String* $tmp4095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4094, &$s4096);
panda$core$String* $tmp4097 = *(&local1);
panda$core$String* $tmp4098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4095, $tmp4097);
panda$core$String* $tmp4099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4098, &$s4100);
panda$core$String* $tmp4101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4090, $tmp4099);
$fn4103 $tmp4102 = ($fn4103) ((panda$io$OutputStream*) $tmp4077)->$class->vtable[19];
$tmp4102(((panda$io$OutputStream*) $tmp4077), $tmp4101);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4079));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4080));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4081));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4084));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4085));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4088));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4089));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4090));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4094));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4095));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4098));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4099));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4101));
// line 1123
panda$collections$HashMap** $tmp4104 = &param0->refs;
panda$collections$HashMap* $tmp4105 = *$tmp4104;
panda$core$String* $tmp4106 = *(&local2);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4107;
$tmp4107 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4107->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4105, ((panda$collections$Key*) $tmp4107), ((panda$core$Object*) $tmp4106));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4107)));
org$pandalanguage$pandac$Type* $tmp4108 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4108));
// unreffing target
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp4109 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4109));
// unreffing result
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4110 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4110));
// unreffing ccCast
*(&local1) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4111 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4111));
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
panda$core$Weak** $tmp4112 = &param0->compiler;
panda$core$Weak* $tmp4113 = *$tmp4112;
panda$core$Object* $tmp4114 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4113);
panda$core$Panda$unref$panda$core$Object$Q($tmp4114);
panda$core$Bit $tmp4115 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp4114), param2);
bool $tmp4116 = $tmp4115.value;
if ($tmp4116) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp4117 = (panda$core$Int64) {1127};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s4118, $tmp4117);
abort(); // unreachable
block1:;
// line 1128
panda$core$String* $tmp4119 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4120 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4120));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4119));
*(&local0) = $tmp4119;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4119));
// line 1129
org$pandalanguage$pandac$Type** $tmp4121 = &param2->type;
org$pandalanguage$pandac$Type* $tmp4122 = *$tmp4121;
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp4123 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4123));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4122));
*(&local1) = $tmp4122;
// line 1130
panda$io$IndentedOutputStream** $tmp4124 = &param0->out;
panda$io$IndentedOutputStream* $tmp4125 = *$tmp4124;
org$pandalanguage$pandac$Type* $tmp4126 = *(&local1);
panda$core$String* $tmp4127 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4126);
panda$core$String* $tmp4128 = panda$core$String$convert$R$panda$core$String($tmp4127);
panda$core$String* $tmp4129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4128, &$s4130);
panda$core$String* $tmp4131 = *(&local0);
panda$core$String* $tmp4132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4129, $tmp4131);
panda$core$String* $tmp4133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4132, &$s4134);
org$pandalanguage$pandac$Type* $tmp4135 = *(&local1);
panda$core$String* $tmp4136 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4135);
panda$core$String* $tmp4137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4133, $tmp4136);
panda$core$String* $tmp4138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4137, &$s4139);
$fn4141 $tmp4140 = ($fn4141) ((panda$io$OutputStream*) $tmp4125)->$class->vtable[17];
$tmp4140(((panda$io$OutputStream*) $tmp4125), $tmp4138);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4127));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4128));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4129));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4132));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4133));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4136));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4137));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4138));
// line 1131
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4142 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4142));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4143));
*(&local2) = &$s4144;
// line 1132
ITable* $tmp4145 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp4145->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp4145 = $tmp4145->next;
}
$fn4147 $tmp4146 = $tmp4145->methods[0];
panda$collections$Iterator* $tmp4148 = $tmp4146(((panda$collections$Iterable*) param3));
goto block3;
block3:;
ITable* $tmp4149 = $tmp4148->$class->itable;
while ($tmp4149->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp4149 = $tmp4149->next;
}
$fn4151 $tmp4150 = $tmp4149->methods[0];
panda$core$Bit $tmp4152 = $tmp4150($tmp4148);
bool $tmp4153 = $tmp4152.value;
if ($tmp4153) goto block5; else goto block4;
block4:;
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
ITable* $tmp4154 = $tmp4148->$class->itable;
while ($tmp4154->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp4154 = $tmp4154->next;
}
$fn4156 $tmp4155 = $tmp4154->methods[1];
panda$core$Object* $tmp4157 = $tmp4155($tmp4148);
org$pandalanguage$pandac$IR$Value* $tmp4158 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4158));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) $tmp4157)));
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) $tmp4157);
// line 1133
panda$io$IndentedOutputStream** $tmp4159 = &param0->out;
panda$io$IndentedOutputStream* $tmp4160 = *$tmp4159;
panda$core$String* $tmp4161 = *(&local2);
panda$core$String* $tmp4162 = panda$core$String$convert$R$panda$core$String($tmp4161);
panda$core$String* $tmp4163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4162, &$s4164);
org$pandalanguage$pandac$IR$Value* $tmp4165 = *(&local3);
panda$core$String* $tmp4166 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, $tmp4165);
panda$core$String* $tmp4167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4163, $tmp4166);
panda$core$String* $tmp4168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4167, &$s4169);
$fn4171 $tmp4170 = ($fn4171) ((panda$io$OutputStream*) $tmp4160)->$class->vtable[17];
$tmp4170(((panda$io$OutputStream*) $tmp4160), $tmp4168);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4162));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4163));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4166));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4167));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4168));
// line 1134
panda$core$String* $tmp4172 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4172));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4173));
*(&local2) = &$s4174;
panda$core$Panda$unref$panda$core$Object$Q($tmp4157);
org$pandalanguage$pandac$IR$Value* $tmp4175 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4175));
// unreffing v
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4148));
// line 1136
panda$io$IndentedOutputStream** $tmp4176 = &param0->out;
panda$io$IndentedOutputStream* $tmp4177 = *$tmp4176;
$fn4179 $tmp4178 = ($fn4179) ((panda$io$OutputStream*) $tmp4177)->$class->vtable[19];
$tmp4178(((panda$io$OutputStream*) $tmp4177), &$s4180);
// line 1137
panda$collections$HashMap** $tmp4181 = &param0->refs;
panda$collections$HashMap* $tmp4182 = *$tmp4181;
panda$core$String* $tmp4183 = *(&local0);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4184;
$tmp4184 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4184->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4182, ((panda$collections$Key*) $tmp4184), ((panda$core$Object*) $tmp4183));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4184)));
panda$core$String* $tmp4185 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4185));
// unreffing separator
*(&local2) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$Type* $tmp4186 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4186));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp4187 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4187));
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
$fn4189 $tmp4188 = ($fn4189) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4190 = $tmp4188(param2);
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp4191 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4191));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4190));
*(&local0) = $tmp4190;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4190));
// line 1142
org$pandalanguage$pandac$Type* $tmp4192 = *(&local0);
panda$core$Bit $tmp4193 = org$pandalanguage$pandac$Type$get_isPointer$R$panda$core$Bit($tmp4192);
bool $tmp4194 = $tmp4193.value;
if ($tmp4194) goto block1; else goto block2;
block1:;
// line 1143
org$pandalanguage$pandac$Type* $tmp4195 = *(&local0);
panda$collections$ImmutableArray** $tmp4196 = &$tmp4195->subtypes;
panda$collections$ImmutableArray* $tmp4197 = *$tmp4196;
panda$core$Int64 $tmp4198 = (panda$core$Int64) {1};
panda$core$Object* $tmp4199 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp4197, $tmp4198);
org$pandalanguage$pandac$Type* $tmp4200 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4200));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp4199)));
*(&local0) = ((org$pandalanguage$pandac$Type*) $tmp4199);
panda$core$Panda$unref$panda$core$Object$Q($tmp4199);
goto block2;
block2:;
// line 1145
org$pandalanguage$pandac$Type* $tmp4201 = *(&local0);
org$pandalanguage$pandac$Type* $tmp4202 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp4201);
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp4203 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4203));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4202));
*(&local1) = $tmp4202;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4202));
// line 1146
org$pandalanguage$pandac$Type* $tmp4204 = *(&local1);
org$pandalanguage$pandac$Type* $tmp4205 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp4206 = ((panda$core$Equatable*) $tmp4204)->$class->itable;
while ($tmp4206->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4206 = $tmp4206->next;
}
$fn4208 $tmp4207 = $tmp4206->methods[1];
panda$core$Bit $tmp4209 = $tmp4207(((panda$core$Equatable*) $tmp4204), ((panda$core$Equatable*) $tmp4205));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4205));
bool $tmp4210 = $tmp4209.value;
if ($tmp4210) goto block3; else goto block4;
block3:;
// line 1147
panda$core$String* $tmp4211 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4212 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4212));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4211));
*(&local2) = $tmp4211;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4211));
// line 1148
panda$io$IndentedOutputStream** $tmp4213 = &param0->out;
panda$io$IndentedOutputStream* $tmp4214 = *$tmp4213;
org$pandalanguage$pandac$Type* $tmp4215 = *(&local1);
panda$core$String* $tmp4216 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4215);
panda$core$String* $tmp4217 = panda$core$String$convert$R$panda$core$String($tmp4216);
panda$core$String* $tmp4218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4217, &$s4219);
panda$core$String* $tmp4220 = *(&local2);
panda$core$String* $tmp4221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4218, $tmp4220);
panda$core$String* $tmp4222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4221, &$s4223);
$fn4225 $tmp4224 = ($fn4225) ((panda$io$OutputStream*) $tmp4214)->$class->vtable[17];
$tmp4224(((panda$io$OutputStream*) $tmp4214), $tmp4222);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4216));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4217));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4218));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4221));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4222));
// line 1149
panda$collections$HashMap** $tmp4226 = &param0->refs;
panda$collections$HashMap* $tmp4227 = *$tmp4226;
panda$core$String* $tmp4228 = *(&local2);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4229;
$tmp4229 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4229->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4227, ((panda$collections$Key*) $tmp4229), ((panda$core$Object*) $tmp4228));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4229)));
panda$core$String* $tmp4230 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4230));
// unreffing result
*(&local2) = ((panda$core$String*) NULL);
goto block4;
block4:;
// line 1151
panda$io$IndentedOutputStream** $tmp4231 = &param0->out;
panda$io$IndentedOutputStream* $tmp4232 = *$tmp4231;
panda$core$String* $tmp4233 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4234 = panda$core$String$convert$R$panda$core$String($tmp4233);
panda$core$String* $tmp4235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4234, &$s4236);
$fn4238 $tmp4237 = ($fn4238) ((panda$io$OutputStream*) $tmp4232)->$class->vtable[17];
$tmp4237(((panda$io$OutputStream*) $tmp4232), $tmp4235);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4233));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4234));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4235));
// line 1152
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4239 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4239));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4240));
*(&local3) = &$s4241;
// line 1153
ITable* $tmp4242 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp4242->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp4242 = $tmp4242->next;
}
$fn4244 $tmp4243 = $tmp4242->methods[0];
panda$collections$Iterator* $tmp4245 = $tmp4243(((panda$collections$Iterable*) param3));
goto block5;
block5:;
ITable* $tmp4246 = $tmp4245->$class->itable;
while ($tmp4246->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp4246 = $tmp4246->next;
}
$fn4248 $tmp4247 = $tmp4246->methods[0];
panda$core$Bit $tmp4249 = $tmp4247($tmp4245);
bool $tmp4250 = $tmp4249.value;
if ($tmp4250) goto block7; else goto block6;
block6:;
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
ITable* $tmp4251 = $tmp4245->$class->itable;
while ($tmp4251->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp4251 = $tmp4251->next;
}
$fn4253 $tmp4252 = $tmp4251->methods[1];
panda$core$Object* $tmp4254 = $tmp4252($tmp4245);
org$pandalanguage$pandac$IR$Value* $tmp4255 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4255));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) $tmp4254)));
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) $tmp4254);
// line 1154
panda$io$IndentedOutputStream** $tmp4256 = &param0->out;
panda$io$IndentedOutputStream* $tmp4257 = *$tmp4256;
panda$core$String* $tmp4258 = *(&local3);
$fn4260 $tmp4259 = ($fn4260) ((panda$io$OutputStream*) $tmp4257)->$class->vtable[17];
$tmp4259(((panda$io$OutputStream*) $tmp4257), $tmp4258);
// line 1155
panda$io$IndentedOutputStream** $tmp4261 = &param0->out;
panda$io$IndentedOutputStream* $tmp4262 = *$tmp4261;
org$pandalanguage$pandac$IR$Value* $tmp4263 = *(&local4);
panda$core$String* $tmp4264 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, $tmp4263);
$fn4266 $tmp4265 = ($fn4266) ((panda$io$OutputStream*) $tmp4262)->$class->vtable[17];
$tmp4265(((panda$io$OutputStream*) $tmp4262), $tmp4264);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4264));
// line 1156
panda$core$String* $tmp4267 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4267));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4268));
*(&local3) = &$s4269;
panda$core$Panda$unref$panda$core$Object$Q($tmp4254);
org$pandalanguage$pandac$IR$Value* $tmp4270 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4270));
// unreffing a
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block5;
block7:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4245));
// line 1158
panda$io$IndentedOutputStream** $tmp4271 = &param0->out;
panda$io$IndentedOutputStream* $tmp4272 = *$tmp4271;
$fn4274 $tmp4273 = ($fn4274) ((panda$io$OutputStream*) $tmp4272)->$class->vtable[19];
$tmp4273(((panda$io$OutputStream*) $tmp4272), &$s4275);
panda$core$String* $tmp4276 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4276));
// unreffing separator
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$Type* $tmp4277 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4277));
// unreffing returnType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp4278 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4278));
// unreffing type
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeExtractField$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$FieldDecl* param3) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
// line 1162
panda$core$Weak** $tmp4279 = &param0->compiler;
panda$core$Weak* $tmp4280 = *$tmp4279;
panda$core$Object* $tmp4281 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4280);
panda$core$Panda$unref$panda$core$Object$Q($tmp4281);
panda$core$Bit $tmp4282 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp4281), param3);
// line 1163
panda$core$String* $tmp4283 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4284 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4284));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4283));
*(&local0) = $tmp4283;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4283));
// line 1164
panda$core$String* $tmp4285 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4286 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4286));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4285));
*(&local1) = $tmp4285;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4285));
// line 1165
panda$io$IndentedOutputStream** $tmp4287 = &param0->out;
panda$io$IndentedOutputStream* $tmp4288 = *$tmp4287;
org$pandalanguage$pandac$Type** $tmp4289 = &param3->type;
org$pandalanguage$pandac$Type* $tmp4290 = *$tmp4289;
panda$core$String* $tmp4291 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4290);
panda$core$String* $tmp4292 = panda$core$String$convert$R$panda$core$String($tmp4291);
panda$core$String* $tmp4293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4292, &$s4294);
panda$core$String* $tmp4295 = *(&local1);
panda$core$String* $tmp4296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4293, $tmp4295);
panda$core$String* $tmp4297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4296, &$s4298);
panda$core$String* $tmp4299 = *(&local0);
panda$core$String* $tmp4300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4297, $tmp4299);
panda$core$String* $tmp4301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4300, &$s4302);
panda$core$String** $tmp4303 = &((org$pandalanguage$pandac$Symbol*) param3)->name;
panda$core$String* $tmp4304 = *$tmp4303;
panda$core$String* $tmp4305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4301, $tmp4304);
panda$core$String* $tmp4306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4305, &$s4307);
$fn4309 $tmp4308 = ($fn4309) ((panda$io$OutputStream*) $tmp4288)->$class->vtable[19];
$tmp4308(((panda$io$OutputStream*) $tmp4288), $tmp4306);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4291));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4292));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4293));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4296));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4297));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4300));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4301));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4305));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4306));
// line 1166
panda$collections$HashMap** $tmp4310 = &param0->refs;
panda$collections$HashMap* $tmp4311 = *$tmp4310;
panda$core$String* $tmp4312 = *(&local1);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4313;
$tmp4313 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4313->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4311, ((panda$collections$Key*) $tmp4313), ((panda$core$Object*) $tmp4312));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4313)));
panda$core$String* $tmp4314 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4314));
// unreffing result
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4315 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4315));
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
panda$core$Weak** $tmp4316 = &param3->owner;
panda$core$Weak* $tmp4317 = *$tmp4316;
panda$core$Object* $tmp4318 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4317);
panda$core$Panda$unref$panda$core$Object$Q($tmp4318);
panda$collections$Array** $tmp4319 = &((org$pandalanguage$pandac$ClassDecl*) $tmp4318)->fields;
panda$collections$Array* $tmp4320 = *$tmp4319;
panda$core$Int64 $tmp4321 = (panda$core$Int64) {1};
panda$core$Object* $tmp4322 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4320, $tmp4321);
*(&local0) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp4323 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4323));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp4322)));
*(&local0) = ((org$pandalanguage$pandac$FieldDecl*) $tmp4322);
panda$core$Panda$unref$panda$core$Object$Q($tmp4322);
// line 1172
org$pandalanguage$pandac$FieldDecl* $tmp4324 = *(&local0);
panda$core$String** $tmp4325 = &((org$pandalanguage$pandac$Symbol*) $tmp4324)->name;
panda$core$String* $tmp4326 = *$tmp4325;
panda$core$Bit $tmp4327 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp4326, &$s4328);
bool $tmp4329 = $tmp4327.value;
if ($tmp4329) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp4330 = (panda$core$Int64) {1172};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s4331, $tmp4330);
abort(); // unreachable
block1:;
// line 1173
panda$core$String* $tmp4332 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4333 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4333));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4332));
*(&local1) = $tmp4332;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4332));
// line 1174
panda$core$Weak** $tmp4334 = &param0->compiler;
panda$core$Weak* $tmp4335 = *$tmp4334;
panda$core$Object* $tmp4336 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4335);
panda$core$Panda$unref$panda$core$Object$Q($tmp4336);
org$pandalanguage$pandac$FieldDecl* $tmp4337 = *(&local0);
panda$core$Int64 $tmp4338 = org$pandalanguage$pandac$Compiler$getIndex$org$pandalanguage$pandac$FieldDecl$R$panda$core$Int64(((org$pandalanguage$pandac$Compiler*) $tmp4336), $tmp4337);
*(&local2) = $tmp4338;
// line 1175
panda$core$String* $tmp4339 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4340 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4340));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4339));
*(&local3) = $tmp4339;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4339));
// line 1176
panda$collections$Array** $tmp4341 = &param3->fields;
panda$collections$Array* $tmp4342 = *$tmp4341;
panda$core$Object* $tmp4343 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4342, param4);
panda$core$String* $tmp4344 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp4343));
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp4345 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4345));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4344));
*(&local4) = $tmp4344;
panda$core$Panda$unref$panda$core$Object$Q($tmp4343);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4344));
// line 1177
panda$io$IndentedOutputStream** $tmp4346 = &param0->out;
panda$io$IndentedOutputStream* $tmp4347 = *$tmp4346;
panda$core$String* $tmp4348 = *(&local4);
panda$core$String* $tmp4349 = panda$core$String$convert$R$panda$core$String($tmp4348);
panda$core$String* $tmp4350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4349, &$s4351);
panda$core$String* $tmp4352 = *(&local3);
panda$core$String* $tmp4353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4350, $tmp4352);
panda$core$String* $tmp4354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4353, &$s4355);
panda$core$String* $tmp4356 = *(&local4);
panda$core$String* $tmp4357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4354, $tmp4356);
panda$core$String* $tmp4358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4357, &$s4359);
panda$core$String* $tmp4360 = *(&local1);
panda$core$String* $tmp4361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4358, $tmp4360);
panda$core$String* $tmp4362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4361, &$s4363);
panda$core$Int64 $tmp4364 = org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldOffset$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64$R$panda$core$Int64(param0, param3, param4);
panda$core$Int64$wrapper* $tmp4365;
$tmp4365 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp4365->value = $tmp4364;
panda$core$String* $tmp4366 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4367, ((panda$core$Object*) $tmp4365));
panda$core$String* $tmp4368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4366, &$s4369);
panda$core$String* $tmp4370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4362, $tmp4368);
$fn4372 $tmp4371 = ($fn4372) ((panda$io$OutputStream*) $tmp4347)->$class->vtable[19];
$tmp4371(((panda$io$OutputStream*) $tmp4347), $tmp4370);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4349));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4350));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4353));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4354));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4357));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4358));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4361));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4362));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4365));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4366));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4368));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4370));
// line 1179
panda$collections$HashMap** $tmp4373 = &param0->refs;
panda$collections$HashMap* $tmp4374 = *$tmp4373;
panda$core$String* $tmp4375 = *(&local3);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4376;
$tmp4376 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4376->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4374, ((panda$collections$Key*) $tmp4376), ((panda$core$Object*) $tmp4375));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4376)));
panda$core$String* $tmp4377 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4377));
// unreffing type
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp4378 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4378));
// unreffing result
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4379 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4379));
// unreffing targetRef
*(&local1) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp4380 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4380));
// unreffing data
*(&local0) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeGetFieldPointer$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$FieldDecl* param3) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
// line 1183
panda$core$String* $tmp4381 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4382 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4382));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4381));
*(&local0) = $tmp4381;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4381));
// line 1184
panda$core$String* $tmp4383 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4384 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4384));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4383));
*(&local1) = $tmp4383;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4383));
// line 1185
panda$io$IndentedOutputStream** $tmp4385 = &param0->out;
panda$io$IndentedOutputStream* $tmp4386 = *$tmp4385;
org$pandalanguage$pandac$Type** $tmp4387 = &param3->type;
org$pandalanguage$pandac$Type* $tmp4388 = *$tmp4387;
panda$core$String* $tmp4389 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4388);
panda$core$String* $tmp4390 = panda$core$String$convert$R$panda$core$String($tmp4389);
panda$core$String* $tmp4391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4390, &$s4392);
panda$core$String* $tmp4393 = *(&local1);
panda$core$String* $tmp4394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4391, $tmp4393);
panda$core$String* $tmp4395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4394, &$s4396);
panda$core$String* $tmp4397 = *(&local0);
panda$core$String* $tmp4398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4395, $tmp4397);
panda$core$String* $tmp4399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4398, &$s4400);
panda$core$String** $tmp4401 = &((org$pandalanguage$pandac$Symbol*) param3)->name;
panda$core$String* $tmp4402 = *$tmp4401;
panda$core$String* $tmp4403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4399, $tmp4402);
panda$core$String* $tmp4404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4403, &$s4405);
$fn4407 $tmp4406 = ($fn4407) ((panda$io$OutputStream*) $tmp4386)->$class->vtable[19];
$tmp4406(((panda$io$OutputStream*) $tmp4386), $tmp4404);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4389));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4390));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4391));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4394));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4395));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4398));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4399));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4403));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4404));
// line 1186
panda$collections$HashMap** $tmp4408 = &param0->refs;
panda$collections$HashMap* $tmp4409 = *$tmp4408;
panda$core$String* $tmp4410 = *(&local1);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4411;
$tmp4411 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4411->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4409, ((panda$collections$Key*) $tmp4411), ((panda$core$Object*) $tmp4410));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4411)));
panda$core$String* $tmp4412 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4412));
// unreffing result
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4413 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4413));
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
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4414 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, param3);
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4415 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4415));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4414));
*(&local0) = $tmp4414;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4414));
// line 1192
panda$core$String* $tmp4416 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4417 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4417));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4416));
*(&local1) = $tmp4416;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4416));
// line 1193
panda$io$IndentedOutputStream** $tmp4418 = &param0->out;
panda$io$IndentedOutputStream* $tmp4419 = *$tmp4418;
panda$core$String* $tmp4420 = *(&local1);
panda$core$String* $tmp4421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4422, $tmp4420);
panda$core$String* $tmp4423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4421, &$s4424);
panda$core$String* $tmp4425 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4423, $tmp4425);
panda$core$String* $tmp4427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4426, &$s4428);
$fn4430 $tmp4429 = ($fn4430) ((panda$io$OutputStream*) $tmp4419)->$class->vtable[19];
$tmp4429(((panda$io$OutputStream*) $tmp4419), $tmp4427);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4421));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4423));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4425));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4426));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4427));
// line 1194
panda$io$IndentedOutputStream** $tmp4431 = &param0->out;
panda$io$IndentedOutputStream* $tmp4432 = *$tmp4431;
panda$core$String* $tmp4433 = *(&local1);
panda$core$String* $tmp4434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4435, $tmp4433);
panda$core$String* $tmp4436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4434, &$s4437);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4438 = *(&local0);
panda$core$String** $tmp4439 = &$tmp4438->name;
panda$core$String* $tmp4440 = *$tmp4439;
panda$core$String* $tmp4441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4436, $tmp4440);
panda$core$String* $tmp4442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4441, &$s4443);
$fn4445 $tmp4444 = ($fn4445) ((panda$io$OutputStream*) $tmp4432)->$class->vtable[19];
$tmp4444(((panda$io$OutputStream*) $tmp4432), $tmp4442);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4434));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4436));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4441));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4442));
// line 1195
panda$io$IndentedOutputStream** $tmp4446 = &param0->out;
panda$io$IndentedOutputStream* $tmp4447 = *$tmp4446;
panda$core$Int64* $tmp4448 = &$tmp4447->level;
panda$core$Int64 $tmp4449 = *$tmp4448;
panda$core$Int64 $tmp4450 = (panda$core$Int64) {1};
int64_t $tmp4451 = $tmp4449.value;
int64_t $tmp4452 = $tmp4450.value;
int64_t $tmp4453 = $tmp4451 + $tmp4452;
panda$core$Int64 $tmp4454 = (panda$core$Int64) {$tmp4453};
panda$core$Int64* $tmp4455 = &$tmp4447->level;
*$tmp4455 = $tmp4454;
// line 1196
panda$io$IndentedOutputStream** $tmp4456 = &param0->out;
panda$io$IndentedOutputStream* $tmp4457 = *$tmp4456;
panda$core$String* $tmp4458 = *(&local1);
panda$core$String* $tmp4459 = panda$core$String$convert$R$panda$core$String($tmp4458);
panda$core$String* $tmp4460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4459, &$s4461);
panda$core$String* $tmp4462 = *(&local1);
panda$core$String* $tmp4463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4460, $tmp4462);
panda$core$String* $tmp4464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4463, &$s4465);
$fn4467 $tmp4466 = ($fn4467) ((panda$io$OutputStream*) $tmp4457)->$class->vtable[19];
$tmp4466(((panda$io$OutputStream*) $tmp4457), $tmp4464);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4459));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4460));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4463));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4464));
// line 1197
panda$io$IndentedOutputStream** $tmp4468 = &param0->out;
panda$io$IndentedOutputStream* $tmp4469 = *$tmp4468;
panda$core$Int64* $tmp4470 = &$tmp4469->level;
panda$core$Int64 $tmp4471 = *$tmp4470;
panda$core$Int64 $tmp4472 = (panda$core$Int64) {1};
int64_t $tmp4473 = $tmp4471.value;
int64_t $tmp4474 = $tmp4472.value;
int64_t $tmp4475 = $tmp4473 - $tmp4474;
panda$core$Int64 $tmp4476 = (panda$core$Int64) {$tmp4475};
panda$core$Int64* $tmp4477 = &$tmp4469->level;
*$tmp4477 = $tmp4476;
// line 1198
panda$io$IndentedOutputStream** $tmp4478 = &param0->out;
panda$io$IndentedOutputStream* $tmp4479 = *$tmp4478;
$fn4481 $tmp4480 = ($fn4481) ((panda$io$OutputStream*) $tmp4479)->$class->vtable[19];
$tmp4480(((panda$io$OutputStream*) $tmp4479), &$s4482);
// line 1199
panda$core$String* $tmp4483 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4484 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4484));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4483));
*(&local2) = $tmp4483;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4483));
// line 1200
panda$core$String* $tmp4485 = org$pandalanguage$pandac$CCodeGenerator$cMethodType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$Q$R$panda$core$String(param0, param5, ((org$pandalanguage$pandac$Type*) NULL));
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4486 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4486));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4485));
*(&local3) = $tmp4485;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4485));
// line 1201
panda$io$IndentedOutputStream** $tmp4487 = &param0->out;
panda$io$IndentedOutputStream* $tmp4488 = *$tmp4487;
panda$core$String* $tmp4489 = *(&local3);
panda$core$String* $tmp4490 = panda$core$String$convert$R$panda$core$String($tmp4489);
panda$core$String* $tmp4491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4490, &$s4492);
panda$core$String* $tmp4493 = *(&local2);
panda$core$String* $tmp4494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4491, $tmp4493);
panda$core$String* $tmp4495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4494, &$s4496);
panda$core$String* $tmp4497 = *(&local1);
panda$core$String* $tmp4498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4495, $tmp4497);
panda$core$String* $tmp4499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4498, &$s4500);
panda$core$Int64$wrapper* $tmp4501;
$tmp4501 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp4501->value = param4;
panda$core$String* $tmp4502 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4499, ((panda$core$Object*) $tmp4501));
panda$core$String* $tmp4503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4502, &$s4504);
$fn4506 $tmp4505 = ($fn4506) ((panda$io$OutputStream*) $tmp4488)->$class->vtable[19];
$tmp4505(((panda$io$OutputStream*) $tmp4488), $tmp4503);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4490));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4491));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4494));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4495));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4498));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4499));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4501));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4502));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4503));
// line 1202
panda$collections$HashMap** $tmp4507 = &param0->refs;
panda$collections$HashMap* $tmp4508 = *$tmp4507;
panda$core$String* $tmp4509 = *(&local2);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4510;
$tmp4510 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4510->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4508, ((panda$collections$Key*) $tmp4510), ((panda$core$Object*) $tmp4509));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4510)));
panda$core$String* $tmp4511 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4511));
// unreffing methodType
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4512 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4512));
// unreffing result
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4513 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4513));
// unreffing itable
*(&local1) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp4514 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4514));
// unreffing cc
*(&local0) = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeGetVirtualMethod$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, panda$core$Int64 param3, org$pandalanguage$pandac$Type* param4) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
// line 1206
panda$core$String* $tmp4515 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4516 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4516));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4515));
*(&local0) = $tmp4515;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4515));
// line 1207
panda$core$String* $tmp4517 = org$pandalanguage$pandac$CCodeGenerator$cMethodType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$Q$R$panda$core$String(param0, param4, ((org$pandalanguage$pandac$Type*) NULL));
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4518 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4518));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4517));
*(&local1) = $tmp4517;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4517));
// line 1208
panda$io$IndentedOutputStream** $tmp4519 = &param0->out;
panda$io$IndentedOutputStream* $tmp4520 = *$tmp4519;
panda$core$String* $tmp4521 = *(&local1);
panda$core$String* $tmp4522 = panda$core$String$convert$R$panda$core$String($tmp4521);
panda$core$String* $tmp4523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4522, &$s4524);
panda$core$String* $tmp4525 = *(&local0);
panda$core$String* $tmp4526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4523, $tmp4525);
panda$core$String* $tmp4527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4526, &$s4528);
panda$core$String* $tmp4529 = *(&local1);
panda$core$String* $tmp4530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4527, $tmp4529);
panda$core$String* $tmp4531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4530, &$s4532);
panda$core$String* $tmp4533 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4534 = panda$core$String$convert$R$panda$core$String($tmp4533);
panda$core$String* $tmp4535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4534, &$s4536);
panda$core$Int64$wrapper* $tmp4537;
$tmp4537 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp4537->value = param3;
panda$core$String* $tmp4538 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4535, ((panda$core$Object*) $tmp4537));
panda$core$String* $tmp4539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4538, &$s4540);
panda$core$String* $tmp4541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4531, $tmp4539);
$fn4543 $tmp4542 = ($fn4543) ((panda$io$OutputStream*) $tmp4520)->$class->vtable[19];
$tmp4542(((panda$io$OutputStream*) $tmp4520), $tmp4541);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4522));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4523));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4526));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4527));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4530));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4531));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4533));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4534));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4535));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4537));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4538));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4539));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4541));
// line 1210
panda$collections$HashMap** $tmp4544 = &param0->refs;
panda$collections$HashMap* $tmp4545 = *$tmp4544;
panda$core$String* $tmp4546 = *(&local0);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4547;
$tmp4547 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4547->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4545, ((panda$collections$Key*) $tmp4547), ((panda$core$Object*) $tmp4546));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4547)));
panda$core$String* $tmp4548 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4548));
// unreffing methodType
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4549 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4549));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeLoad$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2) {

panda$core$String* local0 = NULL;
// line 1214
panda$core$String* $tmp4550 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4551 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4551));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4550));
*(&local0) = $tmp4550;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4550));
// line 1215
panda$io$IndentedOutputStream** $tmp4552 = &param0->out;
panda$io$IndentedOutputStream* $tmp4553 = *$tmp4552;
$fn4555 $tmp4554 = ($fn4555) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4556 = $tmp4554(param2);
panda$core$String* $tmp4557 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4556);
panda$core$String* $tmp4558 = panda$core$String$convert$R$panda$core$String($tmp4557);
panda$core$String* $tmp4559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4558, &$s4560);
panda$core$String* $tmp4561 = *(&local0);
panda$core$String* $tmp4562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4559, $tmp4561);
panda$core$String* $tmp4563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4562, &$s4564);
panda$core$String* $tmp4565 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4563, $tmp4565);
panda$core$String* $tmp4567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4566, &$s4568);
$fn4570 $tmp4569 = ($fn4570) ((panda$io$OutputStream*) $tmp4553)->$class->vtable[19];
$tmp4569(((panda$io$OutputStream*) $tmp4553), $tmp4567);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4556));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4557));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4558));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4559));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4562));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4563));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4565));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4566));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4567));
// line 1216
panda$collections$HashMap** $tmp4571 = &param0->refs;
panda$collections$HashMap* $tmp4572 = *$tmp4571;
panda$core$String* $tmp4573 = *(&local0);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4574;
$tmp4574 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4574->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4572, ((panda$collections$Key*) $tmp4574), ((panda$core$Object*) $tmp4573));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4574)));
panda$core$String* $tmp4575 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4575));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeNegate$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2) {

panda$core$String* local0 = NULL;
// line 1220
panda$core$String* $tmp4576 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4577 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4577));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4576));
*(&local0) = $tmp4576;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4576));
// line 1221
panda$io$IndentedOutputStream** $tmp4578 = &param0->out;
panda$io$IndentedOutputStream* $tmp4579 = *$tmp4578;
$fn4581 $tmp4580 = ($fn4581) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4582 = $tmp4580(param2);
panda$core$String* $tmp4583 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4582);
panda$core$String* $tmp4584 = panda$core$String$convert$R$panda$core$String($tmp4583);
panda$core$String* $tmp4585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4584, &$s4586);
panda$core$String* $tmp4587 = *(&local0);
panda$core$String* $tmp4588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4585, $tmp4587);
panda$core$String* $tmp4589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4588, &$s4590);
panda$core$String* $tmp4591 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4589, $tmp4591);
panda$core$String* $tmp4593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4592, &$s4594);
$fn4596 $tmp4595 = ($fn4596) ((panda$io$OutputStream*) $tmp4579)->$class->vtable[19];
$tmp4595(((panda$io$OutputStream*) $tmp4579), $tmp4593);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4582));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4583));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4584));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4585));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4588));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4589));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4591));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4592));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4593));
// line 1222
panda$collections$HashMap** $tmp4597 = &param0->refs;
panda$collections$HashMap* $tmp4598 = *$tmp4597;
panda$core$String* $tmp4599 = *(&local0);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4600;
$tmp4600 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4600->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4598, ((panda$collections$Key*) $tmp4600), ((panda$core$Object*) $tmp4599));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4600)));
panda$core$String* $tmp4601 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4601));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeNot$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2) {

panda$core$String* local0 = NULL;
// line 1226
panda$core$String* $tmp4602 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4603 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4603));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4602));
*(&local0) = $tmp4602;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4602));
// line 1227
panda$io$IndentedOutputStream** $tmp4604 = &param0->out;
panda$io$IndentedOutputStream* $tmp4605 = *$tmp4604;
$fn4607 $tmp4606 = ($fn4607) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4608 = $tmp4606(param2);
panda$core$String* $tmp4609 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4608);
panda$core$String* $tmp4610 = panda$core$String$convert$R$panda$core$String($tmp4609);
panda$core$String* $tmp4611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4610, &$s4612);
panda$core$String* $tmp4613 = *(&local0);
panda$core$String* $tmp4614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4611, $tmp4613);
panda$core$String* $tmp4615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4614, &$s4616);
panda$core$String* $tmp4617 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4615, $tmp4617);
panda$core$String* $tmp4619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4618, &$s4620);
$fn4622 $tmp4621 = ($fn4622) ((panda$io$OutputStream*) $tmp4605)->$class->vtable[19];
$tmp4621(((panda$io$OutputStream*) $tmp4605), $tmp4619);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4608));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4609));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4610));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4611));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4614));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4615));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4617));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4618));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4619));
// line 1228
panda$collections$HashMap** $tmp4623 = &param0->refs;
panda$collections$HashMap* $tmp4624 = *$tmp4623;
panda$core$String* $tmp4625 = *(&local0);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4626;
$tmp4626 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4626->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4624, ((panda$collections$Key*) $tmp4626), ((panda$core$Object*) $tmp4625));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4626)));
panda$core$String* $tmp4627 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4627));
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
panda$core$String* $tmp4628 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4629 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4629));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4628));
*(&local0) = $tmp4628;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4628));
// line 1233
panda$core$Int64 $tmp4630 = org$pandalanguage$pandac$CCodeGenerator$stride$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param3);
*(&local1) = $tmp4630;
// line 1234
panda$core$String* $tmp4631 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param3);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4632 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4632));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4631));
*(&local2) = $tmp4631;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4631));
// line 1235
panda$core$String* $tmp4633 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4634 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4634));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4633));
*(&local3) = $tmp4633;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4633));
// line 1236
panda$io$IndentedOutputStream** $tmp4635 = &param0->out;
panda$io$IndentedOutputStream* $tmp4636 = *$tmp4635;
panda$core$String* $tmp4637 = *(&local2);
panda$core$String* $tmp4638 = panda$core$String$convert$R$panda$core$String($tmp4637);
panda$core$String* $tmp4639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4638, &$s4640);
panda$core$String* $tmp4641 = *(&local3);
panda$core$String* $tmp4642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4639, $tmp4641);
panda$core$String* $tmp4643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4642, &$s4644);
panda$core$String* $tmp4645 = *(&local2);
panda$core$String* $tmp4646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4643, $tmp4645);
panda$core$String* $tmp4647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4646, &$s4648);
panda$core$String* $tmp4649 = *(&local0);
panda$core$String* $tmp4650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4647, $tmp4649);
panda$core$String* $tmp4651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4650, &$s4652);
panda$core$Int64 $tmp4653 = *(&local1);
panda$core$String* $tmp4654 = panda$core$Int64$convert$R$panda$core$String($tmp4653);
panda$core$String* $tmp4655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4654, &$s4656);
panda$core$String* $tmp4657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4651, $tmp4655);
$fn4659 $tmp4658 = ($fn4659) ((panda$io$OutputStream*) $tmp4636)->$class->vtable[19];
$tmp4658(((panda$io$OutputStream*) $tmp4636), $tmp4657);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4638));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4639));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4642));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4643));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4646));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4647));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4650));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4651));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4654));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4655));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4657));
// line 1238
panda$collections$HashMap** $tmp4660 = &param0->refs;
panda$collections$HashMap* $tmp4661 = *$tmp4660;
panda$core$String* $tmp4662 = *(&local3);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4663;
$tmp4663 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4663->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4661, ((panda$collections$Key*) $tmp4663), ((panda$core$Object*) $tmp4662));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4663)));
panda$core$String* $tmp4664 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4664));
// unreffing result
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4665 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4665));
// unreffing type
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4666 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4666));
// unreffing countRef
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writePointerDestroy$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1) {

panda$core$String* local0 = NULL;
// line 1242
panda$core$String* $tmp4667 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param1);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4668 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4668));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4667));
*(&local0) = $tmp4667;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4667));
// line 1243
panda$io$IndentedOutputStream** $tmp4669 = &param0->out;
panda$io$IndentedOutputStream* $tmp4670 = *$tmp4669;
panda$core$String* $tmp4671 = *(&local0);
panda$core$String* $tmp4672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4673, $tmp4671);
panda$core$String* $tmp4674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4672, &$s4675);
$fn4677 $tmp4676 = ($fn4677) ((panda$io$OutputStream*) $tmp4670)->$class->vtable[19];
$tmp4676(((panda$io$OutputStream*) $tmp4670), $tmp4674);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4672));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4674));
panda$core$String* $tmp4678 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4678));
// unreffing ptrRef
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writePointerGetIndex$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$IR$Value* param3) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
// line 1247
panda$core$String* $tmp4679 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4680 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4680));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4679));
*(&local0) = $tmp4679;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4679));
// line 1248
panda$core$String* $tmp4681 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param3);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4682 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4682));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4681));
*(&local1) = $tmp4681;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4681));
// line 1249
panda$core$String* $tmp4683 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4684 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4684));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4683));
*(&local2) = $tmp4683;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4683));
// line 1250
panda$io$IndentedOutputStream** $tmp4685 = &param0->out;
panda$io$IndentedOutputStream* $tmp4686 = *$tmp4685;
$fn4688 $tmp4687 = ($fn4688) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4689 = $tmp4687(param2);
panda$collections$ImmutableArray** $tmp4690 = &$tmp4689->subtypes;
panda$collections$ImmutableArray* $tmp4691 = *$tmp4690;
panda$core$Int64 $tmp4692 = (panda$core$Int64) {1};
panda$core$Object* $tmp4693 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp4691, $tmp4692);
panda$core$String* $tmp4694 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp4693));
panda$core$String* $tmp4695 = panda$core$String$convert$R$panda$core$String($tmp4694);
panda$core$String* $tmp4696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4695, &$s4697);
panda$core$String* $tmp4698 = *(&local2);
panda$core$String* $tmp4699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4696, $tmp4698);
panda$core$String* $tmp4700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4699, &$s4701);
panda$core$String* $tmp4702 = *(&local0);
panda$core$String* $tmp4703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4700, $tmp4702);
panda$core$String* $tmp4704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4703, &$s4705);
panda$core$String* $tmp4706 = *(&local1);
panda$core$String* $tmp4707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4704, $tmp4706);
panda$core$String* $tmp4708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4707, &$s4709);
$fn4711 $tmp4710 = ($fn4711) ((panda$io$OutputStream*) $tmp4686)->$class->vtable[19];
$tmp4710(((panda$io$OutputStream*) $tmp4686), $tmp4708);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4689));
panda$core$Panda$unref$panda$core$Object$Q($tmp4693);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4694));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4695));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4696));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4699));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4700));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4703));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4704));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4707));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4708));
// line 1251
panda$collections$HashMap** $tmp4712 = &param0->refs;
panda$collections$HashMap* $tmp4713 = *$tmp4712;
panda$core$String* $tmp4714 = *(&local2);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4715;
$tmp4715 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4715->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4713, ((panda$collections$Key*) $tmp4715), ((panda$core$Object*) $tmp4714));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4715)));
panda$core$String* $tmp4716 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4716));
// unreffing result
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4717 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4717));
// unreffing indexRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4718 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4718));
// unreffing base
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writePointerOffset$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Statement$ID param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$IR$Value* param3) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
// line 1255
panda$core$String* $tmp4719 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4720 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4720));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4719));
*(&local0) = $tmp4719;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4719));
// line 1256
panda$core$String* $tmp4721 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param3);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4722 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4722));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4721));
*(&local1) = $tmp4721;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4721));
// line 1257
panda$core$String* $tmp4723 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4724 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4724));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4723));
*(&local2) = $tmp4723;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4723));
// line 1258
panda$io$IndentedOutputStream** $tmp4725 = &param0->out;
panda$io$IndentedOutputStream* $tmp4726 = *$tmp4725;
$fn4728 $tmp4727 = ($fn4728) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4729 = $tmp4727(param2);
panda$core$String* $tmp4730 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4729);
panda$core$String* $tmp4731 = panda$core$String$convert$R$panda$core$String($tmp4730);
panda$core$String* $tmp4732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4731, &$s4733);
panda$core$String* $tmp4734 = *(&local2);
panda$core$String* $tmp4735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4732, $tmp4734);
panda$core$String* $tmp4736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4735, &$s4737);
panda$core$String* $tmp4738 = *(&local0);
panda$core$String* $tmp4739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4736, $tmp4738);
panda$core$String* $tmp4740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4739, &$s4741);
panda$core$String* $tmp4742 = *(&local1);
panda$core$String* $tmp4743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4740, $tmp4742);
panda$core$String* $tmp4744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4743, &$s4745);
$fn4747 $tmp4746 = ($fn4747) ((panda$io$OutputStream*) $tmp4726)->$class->vtable[19];
$tmp4746(((panda$io$OutputStream*) $tmp4726), $tmp4744);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4729));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4730));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4731));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4732));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4735));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4736));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4739));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4740));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4743));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4744));
// line 1259
panda$collections$HashMap** $tmp4748 = &param0->refs;
panda$collections$HashMap* $tmp4749 = *$tmp4748;
panda$core$String* $tmp4750 = *(&local2);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4751;
$tmp4751 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4751->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4749, ((panda$collections$Key*) $tmp4751), ((panda$core$Object*) $tmp4750));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4751)));
panda$core$String* $tmp4752 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4752));
// unreffing result
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4753 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4753));
// unreffing offsetRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4754 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4754));
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
panda$core$String* $tmp4755 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4756 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4756));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4755));
*(&local0) = $tmp4755;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4755));
// line 1265
panda$core$String* $tmp4757 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param3);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4758 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4758));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4757));
*(&local1) = $tmp4757;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4757));
// line 1266
panda$core$String* $tmp4759 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param4);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4760 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4760));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4759));
*(&local2) = $tmp4759;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4759));
// line 1267
$fn4762 $tmp4761 = ($fn4762) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4763 = $tmp4761(param2);
panda$core$Int64 $tmp4764 = org$pandalanguage$pandac$CCodeGenerator$stride$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, $tmp4763);
*(&local3) = $tmp4764;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4763));
// line 1268
panda$core$Int64 $tmp4765 = *(&local3);
panda$core$Int64 $tmp4766 = (panda$core$Int64) {0};
int64_t $tmp4767 = $tmp4765.value;
int64_t $tmp4768 = $tmp4766.value;
bool $tmp4769 = $tmp4767 > $tmp4768;
panda$core$Bit $tmp4770 = (panda$core$Bit) {$tmp4769};
bool $tmp4771 = $tmp4770.value;
if ($tmp4771) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp4772 = (panda$core$Int64) {1268};
$fn4774 $tmp4773 = ($fn4774) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4775 = $tmp4773(param2);
panda$core$String* $tmp4776 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4777, ((panda$core$Object*) $tmp4775));
panda$core$String* $tmp4778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4776, &$s4779);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4780, $tmp4772, $tmp4778);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4775));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4776));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4778));
abort(); // unreachable
block1:;
// line 1269
panda$core$String* $tmp4781 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp4782 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4782));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4781));
*(&local4) = $tmp4781;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4781));
// line 1270
panda$io$IndentedOutputStream** $tmp4783 = &param0->out;
panda$io$IndentedOutputStream* $tmp4784 = *$tmp4783;
$fn4786 $tmp4785 = ($fn4786) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4787 = $tmp4785(param2);
panda$core$String* $tmp4788 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4787);
panda$core$String* $tmp4789 = panda$core$String$convert$R$panda$core$String($tmp4788);
panda$core$String* $tmp4790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4789, &$s4791);
panda$core$String* $tmp4792 = *(&local4);
panda$core$String* $tmp4793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4790, $tmp4792);
panda$core$String* $tmp4794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4793, &$s4795);
$fn4797 $tmp4796 = ($fn4797) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4798 = $tmp4796(param2);
panda$core$String* $tmp4799 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4798);
panda$core$String* $tmp4800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4794, $tmp4799);
panda$core$String* $tmp4801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4800, &$s4802);
panda$core$String* $tmp4803 = *(&local0);
panda$core$String* $tmp4804 = panda$core$String$convert$R$panda$core$String($tmp4803);
panda$core$String* $tmp4805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4804, &$s4806);
panda$core$String* $tmp4807 = *(&local1);
panda$core$String* $tmp4808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4805, $tmp4807);
panda$core$String* $tmp4809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4808, &$s4810);
panda$core$Int64 $tmp4811 = *(&local3);
panda$core$Int64$wrapper* $tmp4812;
$tmp4812 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp4812->value = $tmp4811;
panda$core$String* $tmp4813 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4809, ((panda$core$Object*) $tmp4812));
panda$core$String* $tmp4814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4813, &$s4815);
panda$core$String* $tmp4816 = *(&local2);
panda$core$String* $tmp4817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4814, $tmp4816);
panda$core$String* $tmp4818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4817, &$s4819);
panda$core$Int64 $tmp4820 = *(&local3);
panda$core$Int64$wrapper* $tmp4821;
$tmp4821 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp4821->value = $tmp4820;
panda$core$String* $tmp4822 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4818, ((panda$core$Object*) $tmp4821));
panda$core$String* $tmp4823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4822, &$s4824);
panda$core$String* $tmp4825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4801, $tmp4823);
$fn4827 $tmp4826 = ($fn4827) ((panda$io$OutputStream*) $tmp4784)->$class->vtable[19];
$tmp4826(((panda$io$OutputStream*) $tmp4784), $tmp4825);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4787));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4788));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4789));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4790));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4793));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4794));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4798));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4799));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4800));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4801));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4804));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4805));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4808));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4809));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4812));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4813));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4814));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4817));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4818));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4821));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4822));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4823));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4825));
// line 1272
panda$collections$HashMap** $tmp4828 = &param0->refs;
panda$collections$HashMap* $tmp4829 = *$tmp4828;
panda$core$String* $tmp4830 = *(&local4);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4831;
$tmp4831 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4831->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4829, ((panda$collections$Key*) $tmp4831), ((panda$core$Object*) $tmp4830));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4831)));
panda$core$String* $tmp4832 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4832));
// unreffing result
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp4833 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4833));
// unreffing newCountRef
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4834 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4834));
// unreffing oldCountRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4835 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4835));
// unreffing ptrRef
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writePointerSetIndex$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$IR$Value* param3) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
// line 1276
panda$core$String* $tmp4836 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp4837 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4837));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4836));
*(&local0) = $tmp4836;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4836));
// line 1277
panda$core$String* $tmp4838 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param3);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4839 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4839));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4838));
*(&local1) = $tmp4838;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4838));
// line 1278
panda$core$String* $tmp4840 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param1);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4841 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4841));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4840));
*(&local2) = $tmp4840;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4840));
// line 1279
panda$io$IndentedOutputStream** $tmp4842 = &param0->out;
panda$io$IndentedOutputStream* $tmp4843 = *$tmp4842;
panda$core$String* $tmp4844 = *(&local0);
panda$core$String* $tmp4845 = panda$core$String$convert$R$panda$core$String($tmp4844);
panda$core$String* $tmp4846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4845, &$s4847);
panda$core$String* $tmp4848 = *(&local1);
panda$core$String* $tmp4849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4846, $tmp4848);
panda$core$String* $tmp4850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4849, &$s4851);
panda$core$String* $tmp4852 = *(&local2);
panda$core$String* $tmp4853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4850, $tmp4852);
panda$core$String* $tmp4854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4853, &$s4855);
$fn4857 $tmp4856 = ($fn4857) ((panda$io$OutputStream*) $tmp4843)->$class->vtable[19];
$tmp4856(((panda$io$OutputStream*) $tmp4843), $tmp4854);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4845));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4846));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4849));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4850));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4853));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4854));
panda$core$String* $tmp4858 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4858));
// unreffing valueRef
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4859 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4859));
// unreffing indexRef
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4860 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4860));
// unreffing base
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1) {

// line 1283
panda$core$Bit $tmp4861 = panda$core$Bit$init$builtin_bit(param1 != NULL);
bool $tmp4862 = $tmp4861.value;
if ($tmp4862) goto block1; else goto block3;
block1:;
// line 1284
panda$io$IndentedOutputStream** $tmp4863 = &param0->out;
panda$io$IndentedOutputStream* $tmp4864 = *$tmp4863;
panda$core$String* $tmp4865 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param1);
panda$core$String* $tmp4866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4867, $tmp4865);
panda$core$String* $tmp4868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4866, &$s4869);
$fn4871 $tmp4870 = ($fn4871) ((panda$io$OutputStream*) $tmp4864)->$class->vtable[19];
$tmp4870(((panda$io$OutputStream*) $tmp4864), $tmp4868);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4865));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4866));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4868));
goto block2;
block3:;
// line 1
// line 1287
panda$io$IndentedOutputStream** $tmp4872 = &param0->out;
panda$io$IndentedOutputStream* $tmp4873 = *$tmp4872;
$fn4875 $tmp4874 = ($fn4875) ((panda$io$OutputStream*) $tmp4873)->$class->vtable[19];
$tmp4874(((panda$io$OutputStream*) $tmp4873), &$s4876);
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
panda$core$Weak** $tmp4877 = &param2->owner;
panda$core$Weak* $tmp4878 = *$tmp4877;
panda$core$Object* $tmp4879 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4878);
panda$core$Panda$unref$panda$core$Object$Q($tmp4879);
panda$core$Bit* $tmp4880 = &((org$pandalanguage$pandac$ClassDecl*) $tmp4879)->external;
panda$core$Bit $tmp4881 = *$tmp4880;
bool $tmp4882 = $tmp4881.value;
if ($tmp4882) goto block1; else goto block2;
block1:;
// line 1293
org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(param0, param2);
goto block2;
block2:;
// line 1295
panda$core$Bit $tmp4883 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(param0, param2);
*(&local0) = $tmp4883;
// line 1296
org$pandalanguage$pandac$Type** $tmp4884 = &param2->returnType;
org$pandalanguage$pandac$Type* $tmp4885 = *$tmp4884;
panda$core$String* $tmp4886 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp4885);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp4887 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4887));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4886));
*(&local1) = $tmp4886;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4886));
// line 1297
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4888 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4888));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4889));
*(&local2) = &$s4890;
// line 1298
*(&local3) = ((panda$core$String*) NULL);
// line 1299
org$pandalanguage$pandac$Type** $tmp4891 = &param2->returnType;
org$pandalanguage$pandac$Type* $tmp4892 = *$tmp4891;
org$pandalanguage$pandac$Type* $tmp4893 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp4894 = ((panda$core$Equatable*) $tmp4892)->$class->itable;
while ($tmp4894->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4894 = $tmp4894->next;
}
$fn4896 $tmp4895 = $tmp4894->methods[1];
panda$core$Bit $tmp4897 = $tmp4895(((panda$core$Equatable*) $tmp4892), ((panda$core$Equatable*) $tmp4893));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4893));
bool $tmp4898 = $tmp4897.value;
if ($tmp4898) goto block3; else goto block4;
block3:;
// line 1300
panda$core$String* $tmp4899 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(param0);
panda$core$String* $tmp4900 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4900));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4899));
*(&local3) = $tmp4899;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4899));
// line 1301
panda$core$Bit $tmp4901 = *(&local0);
bool $tmp4902 = $tmp4901.value;
if ($tmp4902) goto block5; else goto block7;
block5:;
// line 1302
panda$io$IndentedOutputStream** $tmp4903 = &param0->out;
panda$io$IndentedOutputStream* $tmp4904 = *$tmp4903;
panda$core$String* $tmp4905 = *(&local1);
panda$core$String* $tmp4906 = panda$core$String$convert$R$panda$core$String($tmp4905);
panda$core$String* $tmp4907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4906, &$s4908);
panda$core$String* $tmp4909 = *(&local3);
panda$core$String* $tmp4910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4907, $tmp4909);
panda$core$String* $tmp4911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4910, &$s4912);
$fn4914 $tmp4913 = ($fn4914) ((panda$io$OutputStream*) $tmp4904)->$class->vtable[19];
$tmp4913(((panda$io$OutputStream*) $tmp4904), $tmp4911);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4906));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4907));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4910));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4911));
goto block6;
block7:;
// line 1
// line 1305
panda$io$IndentedOutputStream** $tmp4915 = &param0->out;
panda$io$IndentedOutputStream* $tmp4916 = *$tmp4915;
panda$core$String* $tmp4917 = *(&local1);
panda$core$String* $tmp4918 = panda$core$String$convert$R$panda$core$String($tmp4917);
panda$core$String* $tmp4919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4918, &$s4920);
panda$core$String* $tmp4921 = *(&local3);
panda$core$String* $tmp4922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4919, $tmp4921);
panda$core$String* $tmp4923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4922, &$s4924);
$fn4926 $tmp4925 = ($fn4926) ((panda$io$OutputStream*) $tmp4916)->$class->vtable[17];
$tmp4925(((panda$io$OutputStream*) $tmp4916), $tmp4923);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4918));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4919));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4922));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4923));
goto block6;
block6:;
// line 1307
panda$collections$HashMap** $tmp4927 = &param0->refs;
panda$collections$HashMap* $tmp4928 = *$tmp4927;
panda$core$String* $tmp4929 = *(&local3);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp4930;
$tmp4930 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp4930->value = param1;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp4928, ((panda$collections$Key*) $tmp4930), ((panda$core$Object*) $tmp4929));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Key*) $tmp4930)));
goto block4;
block4:;
// line 1309
panda$io$IndentedOutputStream** $tmp4931 = &param0->out;
panda$io$IndentedOutputStream* $tmp4932 = *$tmp4931;
panda$core$String* $tmp4933 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param2);
panda$core$String* $tmp4934 = panda$core$String$convert$R$panda$core$String($tmp4933);
panda$core$String* $tmp4935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4934, &$s4936);
$fn4938 $tmp4937 = ($fn4938) ((panda$io$OutputStream*) $tmp4932)->$class->vtable[17];
$tmp4937(((panda$io$OutputStream*) $tmp4932), $tmp4935);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4933));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4934));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4935));
// line 1310
panda$core$Bit $tmp4939 = *(&local0);
bool $tmp4940 = $tmp4939.value;
if ($tmp4940) goto block8; else goto block9;
block8:;
// line 1311
panda$io$IndentedOutputStream** $tmp4941 = &param0->out;
panda$io$IndentedOutputStream* $tmp4942 = *$tmp4941;
panda$core$String* $tmp4943 = *(&local3);
panda$core$String* $tmp4944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4945, $tmp4943);
panda$core$String* $tmp4946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4944, &$s4947);
$fn4949 $tmp4948 = ($fn4949) ((panda$io$OutputStream*) $tmp4942)->$class->vtable[17];
$tmp4948(((panda$io$OutputStream*) $tmp4942), $tmp4946);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4944));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4946));
// line 1312
panda$core$String* $tmp4950 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4950));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4951));
*(&local2) = &$s4952;
goto block9;
block9:;
// line 1314
ITable* $tmp4953 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp4953->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp4953 = $tmp4953->next;
}
$fn4955 $tmp4954 = $tmp4953->methods[0];
panda$collections$Iterator* $tmp4956 = $tmp4954(((panda$collections$Iterable*) param3));
goto block10;
block10:;
ITable* $tmp4957 = $tmp4956->$class->itable;
while ($tmp4957->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp4957 = $tmp4957->next;
}
$fn4959 $tmp4958 = $tmp4957->methods[0];
panda$core$Bit $tmp4960 = $tmp4958($tmp4956);
bool $tmp4961 = $tmp4960.value;
if ($tmp4961) goto block12; else goto block11;
block11:;
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
ITable* $tmp4962 = $tmp4956->$class->itable;
while ($tmp4962->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp4962 = $tmp4962->next;
}
$fn4964 $tmp4963 = $tmp4962->methods[1];
panda$core$Object* $tmp4965 = $tmp4963($tmp4956);
org$pandalanguage$pandac$IR$Value* $tmp4966 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4966));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) $tmp4965)));
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) $tmp4965);
// line 1315
panda$io$IndentedOutputStream** $tmp4967 = &param0->out;
panda$io$IndentedOutputStream* $tmp4968 = *$tmp4967;
panda$core$String* $tmp4969 = *(&local2);
$fn4971 $tmp4970 = ($fn4971) ((panda$io$OutputStream*) $tmp4968)->$class->vtable[17];
$tmp4970(((panda$io$OutputStream*) $tmp4968), $tmp4969);
// line 1316
panda$io$IndentedOutputStream** $tmp4972 = &param0->out;
panda$io$IndentedOutputStream* $tmp4973 = *$tmp4972;
org$pandalanguage$pandac$IR$Value* $tmp4974 = *(&local4);
panda$core$String* $tmp4975 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, $tmp4974);
$fn4977 $tmp4976 = ($fn4977) ((panda$io$OutputStream*) $tmp4973)->$class->vtable[17];
$tmp4976(((panda$io$OutputStream*) $tmp4973), $tmp4975);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4975));
// line 1317
panda$core$String* $tmp4978 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4978));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s4979));
*(&local2) = &$s4980;
panda$core$Panda$unref$panda$core$Object$Q($tmp4965);
org$pandalanguage$pandac$IR$Value* $tmp4981 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4981));
// unreffing a
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block10;
block12:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4956));
// line 1319
panda$io$IndentedOutputStream** $tmp4982 = &param0->out;
panda$io$IndentedOutputStream* $tmp4983 = *$tmp4982;
$fn4985 $tmp4984 = ($fn4985) ((panda$io$OutputStream*) $tmp4983)->$class->vtable[19];
$tmp4984(((panda$io$OutputStream*) $tmp4983), &$s4986);
panda$core$String* $tmp4987 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4987));
// unreffing result
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp4988 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4988));
// unreffing separator
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4989 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4989));
// unreffing actualResultType
*(&local1) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeStore$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$IR$Value* param1, org$pandalanguage$pandac$IR$Value* param2) {

// line 1323
panda$io$IndentedOutputStream** $tmp4990 = &param0->out;
panda$io$IndentedOutputStream* $tmp4991 = *$tmp4990;
panda$core$String* $tmp4992 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param2);
panda$core$String* $tmp4993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4994, $tmp4992);
panda$core$String* $tmp4995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4993, &$s4996);
panda$core$String* $tmp4997 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IR$Value$R$panda$core$String(param0, param1);
panda$core$String* $tmp4998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4995, $tmp4997);
panda$core$String* $tmp4999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4998, &$s5000);
$fn5002 $tmp5001 = ($fn5002) ((panda$io$OutputStream*) $tmp4991)->$class->vtable[19];
$tmp5001(((panda$io$OutputStream*) $tmp4991), $tmp4999);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4992));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4993));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4995));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4997));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4998));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4999));
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
panda$core$Int64* $tmp5003 = &param2->$rawValue;
panda$core$Int64 $tmp5004 = *$tmp5003;
panda$core$Int64 $tmp5005 = (panda$core$Int64) {0};
panda$core$Bit $tmp5006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5005);
bool $tmp5007 = $tmp5006.value;
if ($tmp5007) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp5008 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5009 = *$tmp5008;
*(&local0) = $tmp5009;
org$pandalanguage$pandac$IR$Value** $tmp5010 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5011 = *$tmp5010;
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5012 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5012));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5011));
*(&local1) = $tmp5011;
org$pandalanguage$pandac$parser$Token$Kind* $tmp5013 = (org$pandalanguage$pandac$parser$Token$Kind*) (param2->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp5014 = *$tmp5013;
*(&local2) = $tmp5014;
org$pandalanguage$pandac$IR$Value** $tmp5015 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp5016 = *$tmp5015;
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5017 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5017));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5016));
*(&local3) = $tmp5016;
org$pandalanguage$pandac$Type** $tmp5018 = (org$pandalanguage$pandac$Type**) (param2->$data + 40);
org$pandalanguage$pandac$Type* $tmp5019 = *$tmp5018;
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp5020 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5020));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5019));
*(&local4) = $tmp5019;
// line 1329
org$pandalanguage$pandac$IR$Value* $tmp5021 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp5022 = *(&local2);
org$pandalanguage$pandac$IR$Value* $tmp5023 = *(&local3);
org$pandalanguage$pandac$Type* $tmp5024 = *(&local4);
org$pandalanguage$pandac$CCodeGenerator$writeBinary$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(param0, param1, $tmp5021, $tmp5022, $tmp5023, $tmp5024);
org$pandalanguage$pandac$Type* $tmp5025 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5025));
// unreffing type
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5026 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5026));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5027 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5027));
// unreffing left
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp5028 = (panda$core$Int64) {1};
panda$core$Bit $tmp5029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5028);
bool $tmp5030 = $tmp5029.value;
if ($tmp5030) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp5031 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5032 = *$tmp5031;
*(&local5) = $tmp5032;
org$pandalanguage$pandac$IR$Block$ID* $tmp5033 = (org$pandalanguage$pandac$IR$Block$ID*) (param2->$data + 16);
org$pandalanguage$pandac$IR$Block$ID $tmp5034 = *$tmp5033;
*(&local6) = $tmp5034;
// line 1331
org$pandalanguage$pandac$IR$Block$ID $tmp5035 = *(&local6);
org$pandalanguage$pandac$CCodeGenerator$writeBranch$org$pandalanguage$pandac$IR$Block$ID(param0, $tmp5035);
goto block1;
block5:;
panda$core$Int64 $tmp5036 = (panda$core$Int64) {2};
panda$core$Bit $tmp5037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5036);
bool $tmp5038 = $tmp5037.value;
if ($tmp5038) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Position* $tmp5039 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5040 = *$tmp5039;
*(&local7) = $tmp5040;
org$pandalanguage$pandac$IR$Value** $tmp5041 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5042 = *$tmp5041;
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5043 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5043));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5042));
*(&local8) = $tmp5042;
org$pandalanguage$pandac$Type** $tmp5044 = (org$pandalanguage$pandac$Type**) (param2->$data + 24);
org$pandalanguage$pandac$Type* $tmp5045 = *$tmp5044;
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp5046 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5046));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5045));
*(&local9) = $tmp5045;
// line 1333
org$pandalanguage$pandac$IR$Value* $tmp5047 = *(&local8);
org$pandalanguage$pandac$Type* $tmp5048 = *(&local9);
org$pandalanguage$pandac$CCodeGenerator$writeCast$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(param0, param1, $tmp5047, $tmp5048);
org$pandalanguage$pandac$Type* $tmp5049 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5049));
// unreffing type
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5050 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5050));
// unreffing value
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block7:;
panda$core$Int64 $tmp5051 = (panda$core$Int64) {3};
panda$core$Bit $tmp5052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5051);
bool $tmp5053 = $tmp5052.value;
if ($tmp5053) goto block8; else goto block9;
block8:;
panda$core$String** $tmp5054 = (panda$core$String**) (param2->$data + 0);
panda$core$String* $tmp5055 = *$tmp5054;
*(&local10) = ((panda$core$String*) NULL);
panda$core$String* $tmp5056 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5056));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5055));
*(&local10) = $tmp5055;
// line 1335
panda$io$IndentedOutputStream** $tmp5057 = &param0->out;
panda$io$IndentedOutputStream* $tmp5058 = *$tmp5057;
panda$core$String* $tmp5059 = *(&local10);
panda$core$String* $tmp5060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5061, $tmp5059);
panda$core$String* $tmp5062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5060, &$s5063);
$fn5065 $tmp5064 = ($fn5065) ((panda$io$OutputStream*) $tmp5058)->$class->vtable[19];
$tmp5064(((panda$io$OutputStream*) $tmp5058), $tmp5062);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5060));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5062));
panda$core$String* $tmp5066 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5066));
// unreffing text
*(&local10) = ((panda$core$String*) NULL);
goto block1;
block9:;
panda$core$Int64 $tmp5067 = (panda$core$Int64) {5};
panda$core$Bit $tmp5068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5067);
bool $tmp5069 = $tmp5068.value;
if ($tmp5069) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp5070 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5071 = *$tmp5070;
*(&local11) = $tmp5071;
org$pandalanguage$pandac$IR$Value** $tmp5072 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5073 = *$tmp5072;
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5074 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5074));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5073));
*(&local12) = $tmp5073;
org$pandalanguage$pandac$IR$Block$ID* $tmp5075 = (org$pandalanguage$pandac$IR$Block$ID*) (param2->$data + 24);
org$pandalanguage$pandac$IR$Block$ID $tmp5076 = *$tmp5075;
*(&local13) = $tmp5076;
org$pandalanguage$pandac$IR$Block$ID* $tmp5077 = (org$pandalanguage$pandac$IR$Block$ID*) (param2->$data + 32);
org$pandalanguage$pandac$IR$Block$ID $tmp5078 = *$tmp5077;
*(&local14) = $tmp5078;
// line 1337
org$pandalanguage$pandac$IR$Value* $tmp5079 = *(&local12);
org$pandalanguage$pandac$IR$Block$ID $tmp5080 = *(&local13);
org$pandalanguage$pandac$IR$Block$ID $tmp5081 = *(&local14);
org$pandalanguage$pandac$CCodeGenerator$writeConditionalBranch$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID(param0, $tmp5079, $tmp5080, $tmp5081);
org$pandalanguage$pandac$IR$Value* $tmp5082 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5082));
// unreffing test
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block11:;
panda$core$Int64 $tmp5083 = (panda$core$Int64) {6};
panda$core$Bit $tmp5084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5083);
bool $tmp5085 = $tmp5084.value;
if ($tmp5085) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp5086 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5087 = *$tmp5086;
*(&local15) = $tmp5087;
org$pandalanguage$pandac$ClassDecl** $tmp5088 = (org$pandalanguage$pandac$ClassDecl**) (param2->$data + 16);
org$pandalanguage$pandac$ClassDecl* $tmp5089 = *$tmp5088;
*(&local16) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp5090 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5090));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5089));
*(&local16) = $tmp5089;
// line 1339
org$pandalanguage$pandac$ClassDecl* $tmp5091 = *(&local16);
org$pandalanguage$pandac$CCodeGenerator$writeConstruct$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$ClassDecl(param0, param1, $tmp5091);
org$pandalanguage$pandac$ClassDecl* $tmp5092 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5092));
// unreffing cl
*(&local16) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block1;
block13:;
panda$core$Int64 $tmp5093 = (panda$core$Int64) {7};
panda$core$Bit $tmp5094 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5093);
bool $tmp5095 = $tmp5094.value;
if ($tmp5095) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$Position* $tmp5096 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5097 = *$tmp5096;
*(&local17) = $tmp5097;
org$pandalanguage$pandac$ClassDecl** $tmp5098 = (org$pandalanguage$pandac$ClassDecl**) (param2->$data + 16);
org$pandalanguage$pandac$ClassDecl* $tmp5099 = *$tmp5098;
*(&local18) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp5100 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5100));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5099));
*(&local18) = $tmp5099;
panda$collections$ImmutableArray** $tmp5101 = (panda$collections$ImmutableArray**) (param2->$data + 24);
panda$collections$ImmutableArray* $tmp5102 = *$tmp5101;
*(&local19) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5103 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5103));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5102));
*(&local19) = $tmp5102;
// line 1341
org$pandalanguage$pandac$ClassDecl* $tmp5104 = *(&local18);
panda$collections$ImmutableArray* $tmp5105 = *(&local19);
org$pandalanguage$pandac$CCodeGenerator$writeCreateStruct$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$ClassDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IR$Value$GT(param0, param1, $tmp5104, $tmp5105);
panda$collections$ImmutableArray* $tmp5106 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5106));
// unreffing args
*(&local19) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp5107 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5107));
// unreffing cl
*(&local18) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block1;
block15:;
panda$core$Int64 $tmp5108 = (panda$core$Int64) {8};
panda$core$Bit $tmp5109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5108);
bool $tmp5110 = $tmp5109.value;
if ($tmp5110) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Position* $tmp5111 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5112 = *$tmp5111;
*(&local20) = $tmp5112;
org$pandalanguage$pandac$IR$Value** $tmp5113 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5114 = *$tmp5113;
*(&local21) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5115 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5115));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5114));
*(&local21) = $tmp5114;
panda$collections$ImmutableArray** $tmp5116 = (panda$collections$ImmutableArray**) (param2->$data + 24);
panda$collections$ImmutableArray* $tmp5117 = *$tmp5116;
*(&local22) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5118 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5118));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5117));
*(&local22) = $tmp5117;
// line 1343
org$pandalanguage$pandac$IR$Value* $tmp5119 = *(&local21);
panda$collections$ImmutableArray* $tmp5120 = *(&local22);
org$pandalanguage$pandac$CCodeGenerator$writeDynamicCall$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$IR$Value$GT(param0, param1, $tmp5119, ((panda$collections$ListView*) $tmp5120));
panda$collections$ImmutableArray* $tmp5121 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5121));
// unreffing args
*(&local22) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5122 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5122));
// unreffing m
*(&local21) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block17:;
panda$core$Int64 $tmp5123 = (panda$core$Int64) {9};
panda$core$Bit $tmp5124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5123);
bool $tmp5125 = $tmp5124.value;
if ($tmp5125) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp5126 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5127 = *$tmp5126;
*(&local23) = $tmp5127;
org$pandalanguage$pandac$IR$Value** $tmp5128 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5129 = *$tmp5128;
*(&local24) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5130 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5130));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5129));
*(&local24) = $tmp5129;
org$pandalanguage$pandac$FieldDecl** $tmp5131 = (org$pandalanguage$pandac$FieldDecl**) (param2->$data + 24);
org$pandalanguage$pandac$FieldDecl* $tmp5132 = *$tmp5131;
*(&local25) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp5133 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5133));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5132));
*(&local25) = $tmp5132;
// line 1345
org$pandalanguage$pandac$IR$Value* $tmp5134 = *(&local24);
org$pandalanguage$pandac$FieldDecl* $tmp5135 = *(&local25);
org$pandalanguage$pandac$CCodeGenerator$writeExtractField$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl(param0, param1, $tmp5134, $tmp5135);
org$pandalanguage$pandac$FieldDecl* $tmp5136 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5136));
// unreffing field
*(&local25) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5137 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5137));
// unreffing target
*(&local24) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block19:;
panda$core$Int64 $tmp5138 = (panda$core$Int64) {4};
panda$core$Bit $tmp5139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5138);
bool $tmp5140 = $tmp5139.value;
if ($tmp5140) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp5141 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5142 = *$tmp5141;
*(&local26) = $tmp5142;
org$pandalanguage$pandac$IR$Value** $tmp5143 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5144 = *$tmp5143;
*(&local27) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5145 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5145));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5144));
*(&local27) = $tmp5144;
org$pandalanguage$pandac$ChoiceCase** $tmp5146 = (org$pandalanguage$pandac$ChoiceCase**) (param2->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp5147 = *$tmp5146;
*(&local28) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$ChoiceCase* $tmp5148 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5148));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5147));
*(&local28) = $tmp5147;
panda$core$Int64* $tmp5149 = (panda$core$Int64*) (param2->$data + 32);
panda$core$Int64 $tmp5150 = *$tmp5149;
*(&local29) = $tmp5150;
// line 1347
org$pandalanguage$pandac$IR$Value* $tmp5151 = *(&local27);
org$pandalanguage$pandac$ChoiceCase* $tmp5152 = *(&local28);
panda$core$Int64 $tmp5153 = *(&local29);
org$pandalanguage$pandac$CCodeGenerator$writeGetChoiceFieldPointer$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64(param0, param1, $tmp5151, $tmp5152, $tmp5153);
org$pandalanguage$pandac$ChoiceCase* $tmp5154 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5154));
// unreffing cc
*(&local28) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5155 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5155));
// unreffing target
*(&local27) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block21:;
panda$core$Int64 $tmp5156 = (panda$core$Int64) {10};
panda$core$Bit $tmp5157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5156);
bool $tmp5158 = $tmp5157.value;
if ($tmp5158) goto block22; else goto block23;
block22:;
org$pandalanguage$pandac$Position* $tmp5159 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5160 = *$tmp5159;
*(&local30) = $tmp5160;
org$pandalanguage$pandac$IR$Value** $tmp5161 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5162 = *$tmp5161;
*(&local31) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5163 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5163));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5162));
*(&local31) = $tmp5162;
org$pandalanguage$pandac$FieldDecl** $tmp5164 = (org$pandalanguage$pandac$FieldDecl**) (param2->$data + 24);
org$pandalanguage$pandac$FieldDecl* $tmp5165 = *$tmp5164;
*(&local32) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp5166 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5166));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5165));
*(&local32) = $tmp5165;
// line 1349
org$pandalanguage$pandac$IR$Value* $tmp5167 = *(&local31);
org$pandalanguage$pandac$FieldDecl* $tmp5168 = *(&local32);
org$pandalanguage$pandac$CCodeGenerator$writeGetFieldPointer$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl(param0, param1, $tmp5167, $tmp5168);
org$pandalanguage$pandac$FieldDecl* $tmp5169 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5169));
// unreffing field
*(&local32) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5170 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5170));
// unreffing target
*(&local31) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block23:;
panda$core$Int64 $tmp5171 = (panda$core$Int64) {12};
panda$core$Bit $tmp5172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5171);
bool $tmp5173 = $tmp5172.value;
if ($tmp5173) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp5174 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5175 = *$tmp5174;
*(&local33) = $tmp5175;
org$pandalanguage$pandac$IR$Value** $tmp5176 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5177 = *$tmp5176;
*(&local34) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5178 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5178));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5177));
*(&local34) = $tmp5177;
org$pandalanguage$pandac$ClassDecl** $tmp5179 = (org$pandalanguage$pandac$ClassDecl**) (param2->$data + 24);
org$pandalanguage$pandac$ClassDecl* $tmp5180 = *$tmp5179;
*(&local35) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp5181 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5181));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5180));
*(&local35) = $tmp5180;
panda$core$Int64* $tmp5182 = (panda$core$Int64*) (param2->$data + 32);
panda$core$Int64 $tmp5183 = *$tmp5182;
*(&local36) = $tmp5183;
org$pandalanguage$pandac$Type** $tmp5184 = (org$pandalanguage$pandac$Type**) (param2->$data + 40);
org$pandalanguage$pandac$Type* $tmp5185 = *$tmp5184;
*(&local37) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp5186 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5186));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5185));
*(&local37) = $tmp5185;
// line 1351
org$pandalanguage$pandac$IR$Value* $tmp5187 = *(&local34);
org$pandalanguage$pandac$ClassDecl* $tmp5188 = *(&local35);
panda$core$Int64 $tmp5189 = *(&local36);
org$pandalanguage$pandac$Type* $tmp5190 = *(&local37);
org$pandalanguage$pandac$CCodeGenerator$writeGetInterfaceMethod$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$org$pandalanguage$pandac$Type(param0, param1, $tmp5187, $tmp5188, $tmp5189, $tmp5190);
org$pandalanguage$pandac$Type* $tmp5191 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5191));
// unreffing type
*(&local37) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp5192 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5192));
// unreffing cl
*(&local35) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5193 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5193));
// unreffing value
*(&local34) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block25:;
panda$core$Int64 $tmp5194 = (panda$core$Int64) {11};
panda$core$Bit $tmp5195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5194);
bool $tmp5196 = $tmp5195.value;
if ($tmp5196) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$Position* $tmp5197 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5198 = *$tmp5197;
*(&local38) = $tmp5198;
org$pandalanguage$pandac$IR$Value** $tmp5199 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5200 = *$tmp5199;
*(&local39) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5201 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5201));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5200));
*(&local39) = $tmp5200;
panda$core$Int64* $tmp5202 = (panda$core$Int64*) (param2->$data + 24);
panda$core$Int64 $tmp5203 = *$tmp5202;
*(&local40) = $tmp5203;
org$pandalanguage$pandac$Type** $tmp5204 = (org$pandalanguage$pandac$Type**) (param2->$data + 32);
org$pandalanguage$pandac$Type* $tmp5205 = *$tmp5204;
*(&local41) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp5206 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5206));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5205));
*(&local41) = $tmp5205;
// line 1353
org$pandalanguage$pandac$IR$Value* $tmp5207 = *(&local39);
panda$core$Int64 $tmp5208 = *(&local40);
org$pandalanguage$pandac$Type* $tmp5209 = *(&local41);
org$pandalanguage$pandac$CCodeGenerator$writeGetVirtualMethod$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$panda$core$Int64$org$pandalanguage$pandac$Type(param0, param1, $tmp5207, $tmp5208, $tmp5209);
org$pandalanguage$pandac$Type* $tmp5210 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5210));
// unreffing type
*(&local41) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5211 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5211));
// unreffing value
*(&local39) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block27:;
panda$core$Int64 $tmp5212 = (panda$core$Int64) {13};
panda$core$Bit $tmp5213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5212);
bool $tmp5214 = $tmp5213.value;
if ($tmp5214) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$Position* $tmp5215 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5216 = *$tmp5215;
*(&local42) = $tmp5216;
org$pandalanguage$pandac$IR$Value** $tmp5217 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5218 = *$tmp5217;
*(&local43) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5219 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5219));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5218));
*(&local43) = $tmp5218;
// line 1355
org$pandalanguage$pandac$IR$Value* $tmp5220 = *(&local43);
org$pandalanguage$pandac$CCodeGenerator$writeLoad$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp5220);
org$pandalanguage$pandac$IR$Value* $tmp5221 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5221));
// unreffing ptr
*(&local43) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block29:;
panda$core$Int64 $tmp5222 = (panda$core$Int64) {14};
panda$core$Bit $tmp5223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5222);
bool $tmp5224 = $tmp5223.value;
if ($tmp5224) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Position* $tmp5225 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5226 = *$tmp5225;
*(&local44) = $tmp5226;
org$pandalanguage$pandac$IR$Value** $tmp5227 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5228 = *$tmp5227;
*(&local45) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5229 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5229));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5228));
*(&local45) = $tmp5228;
// line 1357
org$pandalanguage$pandac$IR$Value* $tmp5230 = *(&local45);
org$pandalanguage$pandac$CCodeGenerator$writeNegate$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp5230);
org$pandalanguage$pandac$IR$Value* $tmp5231 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5231));
// unreffing value
*(&local45) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block31:;
panda$core$Int64 $tmp5232 = (panda$core$Int64) {15};
panda$core$Bit $tmp5233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5232);
bool $tmp5234 = $tmp5233.value;
if ($tmp5234) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$Position* $tmp5235 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5236 = *$tmp5235;
*(&local46) = $tmp5236;
org$pandalanguage$pandac$IR$Value** $tmp5237 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5238 = *$tmp5237;
*(&local47) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5239 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5239));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5238));
*(&local47) = $tmp5238;
// line 1359
org$pandalanguage$pandac$IR$Value* $tmp5240 = *(&local47);
org$pandalanguage$pandac$CCodeGenerator$writeNot$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp5240);
org$pandalanguage$pandac$IR$Value* $tmp5241 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5241));
// unreffing value
*(&local47) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block33:;
panda$core$Int64 $tmp5242 = (panda$core$Int64) {16};
panda$core$Bit $tmp5243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5242);
bool $tmp5244 = $tmp5243.value;
if ($tmp5244) goto block34; else goto block35;
block34:;
org$pandalanguage$pandac$Position* $tmp5245 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5246 = *$tmp5245;
*(&local48) = $tmp5246;
org$pandalanguage$pandac$IR$Value** $tmp5247 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5248 = *$tmp5247;
*(&local49) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5249 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5249));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5248));
*(&local49) = $tmp5248;
org$pandalanguage$pandac$Type** $tmp5250 = (org$pandalanguage$pandac$Type**) (param2->$data + 24);
org$pandalanguage$pandac$Type* $tmp5251 = *$tmp5250;
*(&local50) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp5252 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5252));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5251));
*(&local50) = $tmp5251;
// line 1361
org$pandalanguage$pandac$IR$Value* $tmp5253 = *(&local49);
org$pandalanguage$pandac$Type* $tmp5254 = *(&local50);
org$pandalanguage$pandac$CCodeGenerator$writePointerAlloc$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type(param0, param1, $tmp5253, $tmp5254);
org$pandalanguage$pandac$Type* $tmp5255 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5255));
// unreffing type
*(&local50) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5256 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5256));
// unreffing count
*(&local49) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block35:;
panda$core$Int64 $tmp5257 = (panda$core$Int64) {17};
panda$core$Bit $tmp5258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5257);
bool $tmp5259 = $tmp5258.value;
if ($tmp5259) goto block36; else goto block37;
block36:;
org$pandalanguage$pandac$Position* $tmp5260 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5261 = *$tmp5260;
*(&local51) = $tmp5261;
org$pandalanguage$pandac$IR$Value** $tmp5262 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5263 = *$tmp5262;
*(&local52) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5264 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5264));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5263));
*(&local52) = $tmp5263;
// line 1363
org$pandalanguage$pandac$IR$Value* $tmp5265 = *(&local52);
org$pandalanguage$pandac$CCodeGenerator$writePointerDestroy$org$pandalanguage$pandac$IR$Value(param0, $tmp5265);
org$pandalanguage$pandac$IR$Value* $tmp5266 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5266));
// unreffing ptr
*(&local52) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block37:;
panda$core$Int64 $tmp5267 = (panda$core$Int64) {19};
panda$core$Bit $tmp5268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5267);
bool $tmp5269 = $tmp5268.value;
if ($tmp5269) goto block38; else goto block39;
block38:;
org$pandalanguage$pandac$Position* $tmp5270 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5271 = *$tmp5270;
*(&local53) = $tmp5271;
org$pandalanguage$pandac$IR$Value** $tmp5272 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5273 = *$tmp5272;
*(&local54) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5274 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5274));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5273));
*(&local54) = $tmp5273;
org$pandalanguage$pandac$IR$Value** $tmp5275 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp5276 = *$tmp5275;
*(&local55) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5277 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5277));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5276));
*(&local55) = $tmp5276;
// line 1365
org$pandalanguage$pandac$IR$Value* $tmp5278 = *(&local54);
org$pandalanguage$pandac$IR$Value* $tmp5279 = *(&local55);
org$pandalanguage$pandac$CCodeGenerator$writePointerGetIndex$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp5278, $tmp5279);
org$pandalanguage$pandac$IR$Value* $tmp5280 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5280));
// unreffing index
*(&local55) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5281 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5281));
// unreffing ptr
*(&local54) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block39:;
panda$core$Int64 $tmp5282 = (panda$core$Int64) {20};
panda$core$Bit $tmp5283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5282);
bool $tmp5284 = $tmp5283.value;
if ($tmp5284) goto block40; else goto block41;
block40:;
org$pandalanguage$pandac$Position* $tmp5285 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5286 = *$tmp5285;
*(&local56) = $tmp5286;
org$pandalanguage$pandac$IR$Value** $tmp5287 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5288 = *$tmp5287;
*(&local57) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5289 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5289));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5288));
*(&local57) = $tmp5288;
org$pandalanguage$pandac$IR$Value** $tmp5290 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp5291 = *$tmp5290;
*(&local58) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5292 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5292));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5291));
*(&local58) = $tmp5291;
// line 1367
org$pandalanguage$pandac$IR$Value* $tmp5293 = *(&local57);
org$pandalanguage$pandac$IR$Value* $tmp5294 = *(&local58);
org$pandalanguage$pandac$CCodeGenerator$writePointerOffset$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp5293, $tmp5294);
org$pandalanguage$pandac$IR$Value* $tmp5295 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5295));
// unreffing offset
*(&local58) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5296 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5296));
// unreffing ptr
*(&local57) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block41:;
panda$core$Int64 $tmp5297 = (panda$core$Int64) {21};
panda$core$Bit $tmp5298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5297);
bool $tmp5299 = $tmp5298.value;
if ($tmp5299) goto block42; else goto block43;
block42:;
org$pandalanguage$pandac$Position* $tmp5300 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5301 = *$tmp5300;
*(&local59) = $tmp5301;
org$pandalanguage$pandac$IR$Value** $tmp5302 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5303 = *$tmp5302;
*(&local60) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5304 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5304));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5303));
*(&local60) = $tmp5303;
org$pandalanguage$pandac$IR$Value** $tmp5305 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp5306 = *$tmp5305;
*(&local61) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5307 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5307));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5306));
*(&local61) = $tmp5306;
org$pandalanguage$pandac$IR$Value** $tmp5308 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp5309 = *$tmp5308;
*(&local62) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5310 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5310));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5309));
*(&local62) = $tmp5309;
// line 1369
org$pandalanguage$pandac$IR$Value* $tmp5311 = *(&local60);
org$pandalanguage$pandac$IR$Value* $tmp5312 = *(&local61);
org$pandalanguage$pandac$IR$Value* $tmp5313 = *(&local62);
org$pandalanguage$pandac$CCodeGenerator$writePointerRealloc$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp5311, $tmp5312, $tmp5313);
org$pandalanguage$pandac$IR$Value* $tmp5314 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5314));
// unreffing newCount
*(&local62) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5315 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5315));
// unreffing oldCount
*(&local61) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5316 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5316));
// unreffing ptr
*(&local60) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block43:;
panda$core$Int64 $tmp5317 = (panda$core$Int64) {23};
panda$core$Bit $tmp5318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5317);
bool $tmp5319 = $tmp5318.value;
if ($tmp5319) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$Position* $tmp5320 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5321 = *$tmp5320;
*(&local63) = $tmp5321;
org$pandalanguage$pandac$IR$Value** $tmp5322 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5323 = *$tmp5322;
*(&local64) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5324 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5324));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5323));
*(&local64) = $tmp5323;
org$pandalanguage$pandac$IR$Value** $tmp5325 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp5326 = *$tmp5325;
*(&local65) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5327 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5327));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5326));
*(&local65) = $tmp5326;
org$pandalanguage$pandac$IR$Value** $tmp5328 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 32);
org$pandalanguage$pandac$IR$Value* $tmp5329 = *$tmp5328;
*(&local66) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5330 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5330));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5329));
*(&local66) = $tmp5329;
// line 1371
org$pandalanguage$pandac$IR$Value* $tmp5331 = *(&local64);
org$pandalanguage$pandac$IR$Value* $tmp5332 = *(&local65);
org$pandalanguage$pandac$IR$Value* $tmp5333 = *(&local66);
org$pandalanguage$pandac$CCodeGenerator$writePointerSetIndex$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(param0, $tmp5331, $tmp5332, $tmp5333);
org$pandalanguage$pandac$IR$Value* $tmp5334 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5334));
// unreffing index
*(&local66) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5335 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5335));
// unreffing ptr
*(&local65) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5336 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5336));
// unreffing value
*(&local64) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block45:;
panda$core$Int64 $tmp5337 = (panda$core$Int64) {24};
panda$core$Bit $tmp5338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5337);
bool $tmp5339 = $tmp5338.value;
if ($tmp5339) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$Position* $tmp5340 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5341 = *$tmp5340;
*(&local67) = $tmp5341;
org$pandalanguage$pandac$IR$Value** $tmp5342 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5343 = *$tmp5342;
*(&local68) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5344 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5344));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5343));
*(&local68) = $tmp5343;
// line 1373
org$pandalanguage$pandac$IR$Value* $tmp5345 = *(&local68);
org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp5345);
org$pandalanguage$pandac$IR$Value* $tmp5346 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5346));
// unreffing value
*(&local68) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block47:;
panda$core$Int64 $tmp5347 = (panda$core$Int64) {25};
panda$core$Bit $tmp5348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5347);
bool $tmp5349 = $tmp5348.value;
if ($tmp5349) goto block48; else goto block49;
block48:;
org$pandalanguage$pandac$Position* $tmp5350 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5351 = *$tmp5350;
*(&local69) = $tmp5351;
org$pandalanguage$pandac$MethodDecl** $tmp5352 = (org$pandalanguage$pandac$MethodDecl**) (param2->$data + 16);
org$pandalanguage$pandac$MethodDecl* $tmp5353 = *$tmp5352;
*(&local70) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp5354 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5354));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5353));
*(&local70) = $tmp5353;
panda$collections$ImmutableArray** $tmp5355 = (panda$collections$ImmutableArray**) (param2->$data + 24);
panda$collections$ImmutableArray* $tmp5356 = *$tmp5355;
*(&local71) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5357 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5357));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5356));
*(&local71) = $tmp5356;
// line 1375
org$pandalanguage$pandac$MethodDecl* $tmp5358 = *(&local70);
panda$collections$ImmutableArray* $tmp5359 = *(&local71);
org$pandalanguage$pandac$CCodeGenerator$writeStaticCall$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$IR$Value$GT(param0, param1, $tmp5358, ((panda$collections$ListView*) $tmp5359));
panda$collections$ImmutableArray* $tmp5360 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5360));
// unreffing args
*(&local71) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp5361 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5361));
// unreffing m
*(&local70) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block1;
block49:;
panda$core$Int64 $tmp5362 = (panda$core$Int64) {26};
panda$core$Bit $tmp5363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5362);
bool $tmp5364 = $tmp5363.value;
if ($tmp5364) goto block50; else goto block51;
block50:;
org$pandalanguage$pandac$Position* $tmp5365 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5366 = *$tmp5365;
*(&local72) = $tmp5366;
org$pandalanguage$pandac$IR$Value** $tmp5367 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp5368 = *$tmp5367;
*(&local73) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5369 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5369));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5368));
*(&local73) = $tmp5368;
org$pandalanguage$pandac$IR$Value** $tmp5370 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 24);
org$pandalanguage$pandac$IR$Value* $tmp5371 = *$tmp5370;
*(&local74) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5372 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5372));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5371));
*(&local74) = $tmp5371;
// line 1377
org$pandalanguage$pandac$IR$Value* $tmp5373 = *(&local73);
org$pandalanguage$pandac$IR$Value* $tmp5374 = *(&local74);
org$pandalanguage$pandac$CCodeGenerator$writeStore$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value(param0, $tmp5373, $tmp5374);
org$pandalanguage$pandac$IR$Value* $tmp5375 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5375));
// unreffing slot
*(&local74) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp5376 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5376));
// unreffing value
*(&local73) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block51:;
panda$core$Int64 $tmp5377 = (panda$core$Int64) {27};
panda$core$Bit $tmp5378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5004, $tmp5377);
bool $tmp5379 = $tmp5378.value;
if ($tmp5379) goto block52; else goto block53;
block52:;
org$pandalanguage$pandac$Position* $tmp5380 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp5381 = *$tmp5380;
*(&local75) = $tmp5381;
// line 1379
panda$io$IndentedOutputStream** $tmp5382 = &param0->out;
panda$io$IndentedOutputStream* $tmp5383 = *$tmp5382;
$fn5385 $tmp5384 = ($fn5385) ((panda$io$OutputStream*) $tmp5383)->$class->vtable[19];
$tmp5384(((panda$io$OutputStream*) $tmp5383), &$s5386);
goto block1;
block53:;
// line 1381
panda$core$Bit $tmp5387 = panda$core$Bit$init$builtin_bit(false);
bool $tmp5388 = $tmp5387.value;
if ($tmp5388) goto block54; else goto block55;
block55:;
panda$core$Int64 $tmp5389 = (panda$core$Int64) {1381};
panda$core$String* $tmp5390 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5391, ((panda$core$Object*) param2));
panda$core$String* $tmp5392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5390, &$s5393);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5394, $tmp5389, $tmp5392);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5390));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5392));
abort(); // unreachable
block54:;
goto block1;
block1:;
return;

}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

// line 1387
panda$core$Weak** $tmp5395 = &param1->owner;
panda$core$Weak* $tmp5396 = *$tmp5395;
panda$core$Object* $tmp5397 = panda$core$Weak$get$R$panda$core$Weak$T($tmp5396);
panda$core$Panda$unref$panda$core$Object$Q($tmp5397);
org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp5397));
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
panda$core$Int64 $tmp5398 = (panda$core$Int64) {0};
panda$collections$Array** $tmp5399 = &param1->locals;
panda$collections$Array* $tmp5400 = *$tmp5399;
ITable* $tmp5401 = ((panda$collections$CollectionView*) $tmp5400)->$class->itable;
while ($tmp5401->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp5401 = $tmp5401->next;
}
$fn5403 $tmp5402 = $tmp5401->methods[0];
panda$core$Int64 $tmp5404 = $tmp5402(((panda$collections$CollectionView*) $tmp5400));
panda$core$Bit $tmp5405 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp5406 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp5398, $tmp5404, $tmp5405);
panda$core$Int64 $tmp5407 = $tmp5406.min;
*(&local0) = $tmp5407;
panda$core$Int64 $tmp5408 = $tmp5406.max;
panda$core$Bit $tmp5409 = $tmp5406.inclusive;
bool $tmp5410 = $tmp5409.value;
panda$core$Int64 $tmp5411 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp5412 = panda$core$Int64$convert$R$panda$core$UInt64($tmp5411);
if ($tmp5410) goto block4; else goto block5;
block4:;
int64_t $tmp5413 = $tmp5407.value;
int64_t $tmp5414 = $tmp5408.value;
bool $tmp5415 = $tmp5413 <= $tmp5414;
panda$core$Bit $tmp5416 = (panda$core$Bit) {$tmp5415};
bool $tmp5417 = $tmp5416.value;
if ($tmp5417) goto block1; else goto block2;
block5:;
int64_t $tmp5418 = $tmp5407.value;
int64_t $tmp5419 = $tmp5408.value;
bool $tmp5420 = $tmp5418 < $tmp5419;
panda$core$Bit $tmp5421 = (panda$core$Bit) {$tmp5420};
bool $tmp5422 = $tmp5421.value;
if ($tmp5422) goto block1; else goto block2;
block1:;
// line 1392
panda$core$Int64 $tmp5423 = *(&local0);
panda$core$Int64$wrapper* $tmp5424;
$tmp5424 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp5424->value = $tmp5423;
panda$core$String* $tmp5425 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5426, ((panda$core$Object*) $tmp5424));
panda$core$String* $tmp5427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5425, &$s5428);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp5429 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5429));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5427));
*(&local1) = $tmp5427;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5424));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5425));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5427));
// line 1393
panda$collections$Array** $tmp5430 = &param1->locals;
panda$collections$Array* $tmp5431 = *$tmp5430;
panda$core$Int64 $tmp5432 = *(&local0);
panda$core$Object* $tmp5433 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp5431, $tmp5432);
panda$core$String* $tmp5434 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp5433));
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp5435 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5435));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5434));
*(&local2) = $tmp5434;
panda$core$Panda$unref$panda$core$Object$Q($tmp5433);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5434));
// line 1394
panda$io$IndentedOutputStream** $tmp5436 = &param0->out;
panda$io$IndentedOutputStream* $tmp5437 = *$tmp5436;
panda$core$String* $tmp5438 = *(&local2);
panda$core$String* $tmp5439 = panda$core$String$convert$R$panda$core$String($tmp5438);
panda$core$String* $tmp5440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5439, &$s5441);
panda$core$String* $tmp5442 = *(&local1);
panda$core$String* $tmp5443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5440, $tmp5442);
panda$core$String* $tmp5444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5443, &$s5445);
$fn5447 $tmp5446 = ($fn5447) ((panda$io$OutputStream*) $tmp5437)->$class->vtable[17];
$tmp5446(((panda$io$OutputStream*) $tmp5437), $tmp5444);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5439));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5440));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5443));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5444));
// line 1395
panda$core$Weak** $tmp5448 = &param0->compiler;
panda$core$Weak* $tmp5449 = *$tmp5448;
panda$core$Object* $tmp5450 = panda$core$Weak$get$R$panda$core$Weak$T($tmp5449);
panda$core$Panda$unref$panda$core$Object$Q($tmp5450);
panda$collections$Array** $tmp5451 = &param1->locals;
panda$collections$Array* $tmp5452 = *$tmp5451;
panda$core$Int64 $tmp5453 = *(&local0);
panda$core$Object* $tmp5454 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp5452, $tmp5453);
panda$core$Bit $tmp5455 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp5450), ((org$pandalanguage$pandac$Type*) $tmp5454));
panda$core$Panda$unref$panda$core$Object$Q($tmp5454);
bool $tmp5456 = $tmp5455.value;
if ($tmp5456) goto block6; else goto block7;
block6:;
// line 1396
panda$io$IndentedOutputStream** $tmp5457 = &param0->out;
panda$io$IndentedOutputStream* $tmp5458 = *$tmp5457;
$fn5460 $tmp5459 = ($fn5460) ((panda$io$OutputStream*) $tmp5458)->$class->vtable[17];
$tmp5459(((panda$io$OutputStream*) $tmp5458), &$s5461);
goto block7;
block7:;
// line 1398
panda$io$IndentedOutputStream** $tmp5462 = &param0->out;
panda$io$IndentedOutputStream* $tmp5463 = *$tmp5462;
$fn5465 $tmp5464 = ($fn5465) ((panda$io$OutputStream*) $tmp5463)->$class->vtable[19];
$tmp5464(((panda$io$OutputStream*) $tmp5463), &$s5466);
panda$core$String* $tmp5467 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5467));
// unreffing type
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp5468 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5468));
// unreffing name
*(&local1) = ((panda$core$String*) NULL);
goto block3;
block3:;
panda$core$Int64 $tmp5469 = *(&local0);
int64_t $tmp5470 = $tmp5408.value;
int64_t $tmp5471 = $tmp5469.value;
int64_t $tmp5472 = $tmp5470 - $tmp5471;
panda$core$Int64 $tmp5473 = (panda$core$Int64) {$tmp5472};
panda$core$UInt64 $tmp5474 = panda$core$Int64$convert$R$panda$core$UInt64($tmp5473);
if ($tmp5410) goto block9; else goto block10;
block9:;
uint64_t $tmp5475 = $tmp5474.value;
uint64_t $tmp5476 = $tmp5412.value;
bool $tmp5477 = $tmp5475 >= $tmp5476;
panda$core$Bit $tmp5478 = (panda$core$Bit) {$tmp5477};
bool $tmp5479 = $tmp5478.value;
if ($tmp5479) goto block8; else goto block2;
block10:;
uint64_t $tmp5480 = $tmp5474.value;
uint64_t $tmp5481 = $tmp5412.value;
bool $tmp5482 = $tmp5480 > $tmp5481;
panda$core$Bit $tmp5483 = (panda$core$Bit) {$tmp5482};
bool $tmp5484 = $tmp5483.value;
if ($tmp5484) goto block8; else goto block2;
block8:;
int64_t $tmp5485 = $tmp5469.value;
int64_t $tmp5486 = $tmp5411.value;
int64_t $tmp5487 = $tmp5485 + $tmp5486;
panda$core$Int64 $tmp5488 = (panda$core$Int64) {$tmp5487};
*(&local0) = $tmp5488;
goto block1;
block2:;
// line 1400
panda$core$Int64 $tmp5489 = (panda$core$Int64) {0};
panda$collections$Array** $tmp5490 = &param1->blocks;
panda$collections$Array* $tmp5491 = *$tmp5490;
ITable* $tmp5492 = ((panda$collections$CollectionView*) $tmp5491)->$class->itable;
while ($tmp5492->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp5492 = $tmp5492->next;
}
$fn5494 $tmp5493 = $tmp5492->methods[0];
panda$core$Int64 $tmp5495 = $tmp5493(((panda$collections$CollectionView*) $tmp5491));
panda$core$Bit $tmp5496 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp5497 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp5489, $tmp5495, $tmp5496);
panda$core$Int64 $tmp5498 = $tmp5497.min;
*(&local3) = $tmp5498;
panda$core$Int64 $tmp5499 = $tmp5497.max;
panda$core$Bit $tmp5500 = $tmp5497.inclusive;
bool $tmp5501 = $tmp5500.value;
panda$core$Int64 $tmp5502 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp5503 = panda$core$Int64$convert$R$panda$core$UInt64($tmp5502);
if ($tmp5501) goto block14; else goto block15;
block14:;
int64_t $tmp5504 = $tmp5498.value;
int64_t $tmp5505 = $tmp5499.value;
bool $tmp5506 = $tmp5504 <= $tmp5505;
panda$core$Bit $tmp5507 = (panda$core$Bit) {$tmp5506};
bool $tmp5508 = $tmp5507.value;
if ($tmp5508) goto block11; else goto block12;
block15:;
int64_t $tmp5509 = $tmp5498.value;
int64_t $tmp5510 = $tmp5499.value;
bool $tmp5511 = $tmp5509 < $tmp5510;
panda$core$Bit $tmp5512 = (panda$core$Bit) {$tmp5511};
bool $tmp5513 = $tmp5512.value;
if ($tmp5513) goto block11; else goto block12;
block11:;
// line 1401
panda$collections$Array** $tmp5514 = &param1->blocks;
panda$collections$Array* $tmp5515 = *$tmp5514;
panda$core$Int64 $tmp5516 = *(&local3);
panda$core$Object* $tmp5517 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp5515, $tmp5516);
*(&local4) = ((org$pandalanguage$pandac$IR$Block*) NULL);
org$pandalanguage$pandac$IR$Block* $tmp5518 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5518));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Block*) $tmp5517)));
*(&local4) = ((org$pandalanguage$pandac$IR$Block*) $tmp5517);
panda$core$Panda$unref$panda$core$Object$Q($tmp5517);
// line 1402
panda$core$Int64 $tmp5519 = *(&local3);
panda$core$Int64 $tmp5520 = (panda$core$Int64) {0};
panda$core$Bit $tmp5521 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp5519, $tmp5520);
bool $tmp5522 = $tmp5521.value;
if ($tmp5522) goto block16; else goto block18;
block16:;
// line 1403
org$pandalanguage$pandac$IR$Block* $tmp5523 = *(&local4);
org$pandalanguage$pandac$IR$Block$ID* $tmp5524 = &$tmp5523->id;
org$pandalanguage$pandac$IR$Block$ID $tmp5525 = *$tmp5524;
panda$core$String* $tmp5526 = org$pandalanguage$pandac$IR$Block$ID$convert$R$panda$core$String($tmp5525);
panda$core$String* $tmp5527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5526, &$s5528);
panda$core$String** $tmp5529 = &param0->currentBlock;
panda$core$String* $tmp5530 = *$tmp5529;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5530));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5527));
panda$core$String** $tmp5531 = &param0->currentBlock;
*$tmp5531 = $tmp5527;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5526));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5527));
// line 1404
panda$io$IndentedOutputStream** $tmp5532 = &param0->out;
panda$io$IndentedOutputStream* $tmp5533 = *$tmp5532;
panda$core$String** $tmp5534 = &param0->currentBlock;
panda$core$String* $tmp5535 = *$tmp5534;
panda$core$String* $tmp5536 = panda$core$String$convert$R$panda$core$String($tmp5535);
panda$core$String* $tmp5537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5536, &$s5538);
$fn5540 $tmp5539 = ($fn5540) ((panda$io$OutputStream*) $tmp5533)->$class->vtable[19];
$tmp5539(((panda$io$OutputStream*) $tmp5533), $tmp5537);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5536));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5537));
goto block17;
block18:;
// line 1
// line 1407
panda$core$String** $tmp5541 = &param0->currentBlock;
panda$core$String* $tmp5542 = *$tmp5541;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5542));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s5543));
panda$core$String** $tmp5544 = &param0->currentBlock;
*$tmp5544 = &$s5545;
goto block17;
block17:;
// line 1409
panda$core$Int64 $tmp5546 = (panda$core$Int64) {0};
org$pandalanguage$pandac$IR$Block* $tmp5547 = *(&local4);
panda$collections$Array** $tmp5548 = &$tmp5547->statements;
panda$collections$Array* $tmp5549 = *$tmp5548;
ITable* $tmp5550 = ((panda$collections$CollectionView*) $tmp5549)->$class->itable;
while ($tmp5550->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp5550 = $tmp5550->next;
}
$fn5552 $tmp5551 = $tmp5550->methods[0];
panda$core$Int64 $tmp5553 = $tmp5551(((panda$collections$CollectionView*) $tmp5549));
panda$core$Bit $tmp5554 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp5555 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp5546, $tmp5553, $tmp5554);
panda$core$Int64 $tmp5556 = $tmp5555.min;
*(&local5) = $tmp5556;
panda$core$Int64 $tmp5557 = $tmp5555.max;
panda$core$Bit $tmp5558 = $tmp5555.inclusive;
bool $tmp5559 = $tmp5558.value;
panda$core$Int64 $tmp5560 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp5561 = panda$core$Int64$convert$R$panda$core$UInt64($tmp5560);
if ($tmp5559) goto block22; else goto block23;
block22:;
int64_t $tmp5562 = $tmp5556.value;
int64_t $tmp5563 = $tmp5557.value;
bool $tmp5564 = $tmp5562 <= $tmp5563;
panda$core$Bit $tmp5565 = (panda$core$Bit) {$tmp5564};
bool $tmp5566 = $tmp5565.value;
if ($tmp5566) goto block19; else goto block20;
block23:;
int64_t $tmp5567 = $tmp5556.value;
int64_t $tmp5568 = $tmp5557.value;
bool $tmp5569 = $tmp5567 < $tmp5568;
panda$core$Bit $tmp5570 = (panda$core$Bit) {$tmp5569};
bool $tmp5571 = $tmp5570.value;
if ($tmp5571) goto block19; else goto block20;
block19:;
// line 1410
org$pandalanguage$pandac$IR$Block* $tmp5572 = *(&local4);
panda$collections$Array** $tmp5573 = &$tmp5572->ids;
panda$collections$Array* $tmp5574 = *$tmp5573;
panda$core$Int64 $tmp5575 = *(&local5);
panda$core$Object* $tmp5576 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp5574, $tmp5575);
org$pandalanguage$pandac$IR$Block* $tmp5577 = *(&local4);
panda$collections$Array** $tmp5578 = &$tmp5577->statements;
panda$collections$Array* $tmp5579 = *$tmp5578;
panda$core$Int64 $tmp5580 = *(&local5);
panda$core$Object* $tmp5581 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp5579, $tmp5580);
org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$IR$Statement(param0, ((org$pandalanguage$pandac$IR$Statement$ID$wrapper*) $tmp5576)->value, ((org$pandalanguage$pandac$IR$Statement*) $tmp5581));
panda$core$Panda$unref$panda$core$Object$Q($tmp5576);
panda$core$Panda$unref$panda$core$Object$Q($tmp5581);
goto block21;
block21:;
panda$core$Int64 $tmp5582 = *(&local5);
int64_t $tmp5583 = $tmp5557.value;
int64_t $tmp5584 = $tmp5582.value;
int64_t $tmp5585 = $tmp5583 - $tmp5584;
panda$core$Int64 $tmp5586 = (panda$core$Int64) {$tmp5585};
panda$core$UInt64 $tmp5587 = panda$core$Int64$convert$R$panda$core$UInt64($tmp5586);
if ($tmp5559) goto block25; else goto block26;
block25:;
uint64_t $tmp5588 = $tmp5587.value;
uint64_t $tmp5589 = $tmp5561.value;
bool $tmp5590 = $tmp5588 >= $tmp5589;
panda$core$Bit $tmp5591 = (panda$core$Bit) {$tmp5590};
bool $tmp5592 = $tmp5591.value;
if ($tmp5592) goto block24; else goto block20;
block26:;
uint64_t $tmp5593 = $tmp5587.value;
uint64_t $tmp5594 = $tmp5561.value;
bool $tmp5595 = $tmp5593 > $tmp5594;
panda$core$Bit $tmp5596 = (panda$core$Bit) {$tmp5595};
bool $tmp5597 = $tmp5596.value;
if ($tmp5597) goto block24; else goto block20;
block24:;
int64_t $tmp5598 = $tmp5582.value;
int64_t $tmp5599 = $tmp5560.value;
int64_t $tmp5600 = $tmp5598 + $tmp5599;
panda$core$Int64 $tmp5601 = (panda$core$Int64) {$tmp5600};
*(&local5) = $tmp5601;
goto block19;
block20:;
org$pandalanguage$pandac$IR$Block* $tmp5602 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5602));
// unreffing block
*(&local4) = ((org$pandalanguage$pandac$IR$Block*) NULL);
goto block13;
block13:;
panda$core$Int64 $tmp5603 = *(&local3);
int64_t $tmp5604 = $tmp5499.value;
int64_t $tmp5605 = $tmp5603.value;
int64_t $tmp5606 = $tmp5604 - $tmp5605;
panda$core$Int64 $tmp5607 = (panda$core$Int64) {$tmp5606};
panda$core$UInt64 $tmp5608 = panda$core$Int64$convert$R$panda$core$UInt64($tmp5607);
if ($tmp5501) goto block28; else goto block29;
block28:;
uint64_t $tmp5609 = $tmp5608.value;
uint64_t $tmp5610 = $tmp5503.value;
bool $tmp5611 = $tmp5609 >= $tmp5610;
panda$core$Bit $tmp5612 = (panda$core$Bit) {$tmp5611};
bool $tmp5613 = $tmp5612.value;
if ($tmp5613) goto block27; else goto block12;
block29:;
uint64_t $tmp5614 = $tmp5608.value;
uint64_t $tmp5615 = $tmp5503.value;
bool $tmp5616 = $tmp5614 > $tmp5615;
panda$core$Bit $tmp5617 = (panda$core$Bit) {$tmp5616};
bool $tmp5618 = $tmp5617.value;
if ($tmp5618) goto block27; else goto block12;
block27:;
int64_t $tmp5619 = $tmp5603.value;
int64_t $tmp5620 = $tmp5502.value;
int64_t $tmp5621 = $tmp5619 + $tmp5620;
panda$core$Int64 $tmp5622 = (panda$core$Int64) {$tmp5621};
*(&local3) = $tmp5622;
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
panda$io$IndentedOutputStream** $tmp5623 = &param0->out;
panda$io$IndentedOutputStream* $tmp5624 = *$tmp5623;
*(&local0) = ((panda$io$IndentedOutputStream*) NULL);
panda$io$IndentedOutputStream* $tmp5625 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5625));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5624));
*(&local0) = $tmp5624;
// line 1419
panda$io$IndentedOutputStream** $tmp5626 = &param0->methods;
panda$io$IndentedOutputStream* $tmp5627 = *$tmp5626;
panda$io$IndentedOutputStream** $tmp5628 = &param0->out;
panda$io$IndentedOutputStream* $tmp5629 = *$tmp5628;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5629));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5627));
panda$io$IndentedOutputStream** $tmp5630 = &param0->out;
*$tmp5630 = $tmp5627;
// line 1420
panda$io$MemoryOutputStream** $tmp5631 = &param0->methodHeaderBuffer;
panda$io$MemoryOutputStream* $tmp5632 = *$tmp5631;
panda$io$MemoryOutputStream$clear($tmp5632);
// line 1421
org$pandalanguage$pandac$IR** $tmp5633 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp5634 = *$tmp5633;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5634));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$IR** $tmp5635 = &param0->ir;
*$tmp5635 = param2;
// line 1422
panda$io$IndentedOutputStream** $tmp5636 = &param0->out;
panda$io$IndentedOutputStream* $tmp5637 = *$tmp5636;
org$pandalanguage$pandac$Type** $tmp5638 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp5639 = *$tmp5638;
panda$core$String* $tmp5640 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp5639);
panda$core$String* $tmp5641 = panda$core$String$convert$R$panda$core$String($tmp5640);
panda$core$String* $tmp5642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5641, &$s5643);
panda$core$String* $tmp5644 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp5645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5642, $tmp5644);
panda$core$String* $tmp5646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5645, &$s5647);
$fn5649 $tmp5648 = ($fn5649) ((panda$io$OutputStream*) $tmp5637)->$class->vtable[17];
$tmp5648(((panda$io$OutputStream*) $tmp5637), $tmp5646);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5640));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5641));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5642));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5644));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5645));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5646));
// line 1423
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp5650 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5650));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s5651));
*(&local1) = &$s5652;
// line 1424
panda$core$Int64 $tmp5653 = (panda$core$Int64) {0};
*(&local2) = $tmp5653;
// line 1425
panda$core$Weak** $tmp5654 = &param0->compiler;
panda$core$Weak* $tmp5655 = *$tmp5654;
panda$core$Object* $tmp5656 = panda$core$Weak$get$R$panda$core$Weak$T($tmp5655);
panda$core$Panda$unref$panda$core$Object$Q($tmp5656);
panda$core$Bit $tmp5657 = org$pandalanguage$pandac$Compiler$hasSelfParam$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp5656), param1);
bool $tmp5658 = $tmp5657.value;
if ($tmp5658) goto block1; else goto block2;
block1:;
// line 1426
panda$io$IndentedOutputStream** $tmp5659 = &param0->out;
panda$io$IndentedOutputStream* $tmp5660 = *$tmp5659;
panda$core$String* $tmp5661 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp5662 = panda$core$String$convert$R$panda$core$String($tmp5661);
panda$core$String* $tmp5663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5662, &$s5664);
panda$core$Int64 $tmp5665 = *(&local2);
panda$core$Int64$wrapper* $tmp5666;
$tmp5666 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp5666->value = $tmp5665;
panda$core$String* $tmp5667 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5663, ((panda$core$Object*) $tmp5666));
panda$core$String* $tmp5668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5667, &$s5669);
$fn5671 $tmp5670 = ($fn5671) ((panda$io$OutputStream*) $tmp5660)->$class->vtable[17];
$tmp5670(((panda$io$OutputStream*) $tmp5660), $tmp5668);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5661));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5662));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5663));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5666));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5667));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5668));
// line 1427
panda$core$Int64 $tmp5672 = *(&local2);
panda$core$Int64 $tmp5673 = (panda$core$Int64) {1};
int64_t $tmp5674 = $tmp5672.value;
int64_t $tmp5675 = $tmp5673.value;
int64_t $tmp5676 = $tmp5674 + $tmp5675;
panda$core$Int64 $tmp5677 = (panda$core$Int64) {$tmp5676};
*(&local2) = $tmp5677;
// line 1428
panda$core$String* $tmp5678 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5678));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s5679));
*(&local1) = &$s5680;
goto block2;
block2:;
// line 1430
panda$collections$Array** $tmp5681 = &param1->parameters;
panda$collections$Array* $tmp5682 = *$tmp5681;
ITable* $tmp5683 = ((panda$collections$Iterable*) $tmp5682)->$class->itable;
while ($tmp5683->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp5683 = $tmp5683->next;
}
$fn5685 $tmp5684 = $tmp5683->methods[0];
panda$collections$Iterator* $tmp5686 = $tmp5684(((panda$collections$Iterable*) $tmp5682));
goto block3;
block3:;
ITable* $tmp5687 = $tmp5686->$class->itable;
while ($tmp5687->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp5687 = $tmp5687->next;
}
$fn5689 $tmp5688 = $tmp5687->methods[0];
panda$core$Bit $tmp5690 = $tmp5688($tmp5686);
bool $tmp5691 = $tmp5690.value;
if ($tmp5691) goto block5; else goto block4;
block4:;
*(&local3) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp5692 = $tmp5686->$class->itable;
while ($tmp5692->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp5692 = $tmp5692->next;
}
$fn5694 $tmp5693 = $tmp5692->methods[1];
panda$core$Object* $tmp5695 = $tmp5693($tmp5686);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp5696 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5696));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp5695)));
*(&local3) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp5695);
// line 1431
panda$io$IndentedOutputStream** $tmp5697 = &param0->out;
panda$io$IndentedOutputStream* $tmp5698 = *$tmp5697;
panda$core$String* $tmp5699 = *(&local1);
panda$core$String* $tmp5700 = panda$core$String$convert$R$panda$core$String($tmp5699);
panda$core$String* $tmp5701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5700, &$s5702);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp5703 = *(&local3);
org$pandalanguage$pandac$Type** $tmp5704 = &$tmp5703->type;
org$pandalanguage$pandac$Type* $tmp5705 = *$tmp5704;
panda$core$String* $tmp5706 = org$pandalanguage$pandac$CCodeGenerator$cType$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp5705);
panda$core$String* $tmp5707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5701, $tmp5706);
panda$core$String* $tmp5708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5707, &$s5709);
panda$core$Int64 $tmp5710 = *(&local2);
panda$core$Int64$wrapper* $tmp5711;
$tmp5711 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp5711->value = $tmp5710;
panda$core$String* $tmp5712 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5708, ((panda$core$Object*) $tmp5711));
panda$core$String* $tmp5713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5712, &$s5714);
$fn5716 $tmp5715 = ($fn5716) ((panda$io$OutputStream*) $tmp5698)->$class->vtable[17];
$tmp5715(((panda$io$OutputStream*) $tmp5698), $tmp5713);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5700));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5701));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5706));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5707));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5708));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5711));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5712));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5713));
// line 1432
panda$core$Int64 $tmp5717 = *(&local2);
panda$core$Int64 $tmp5718 = (panda$core$Int64) {1};
int64_t $tmp5719 = $tmp5717.value;
int64_t $tmp5720 = $tmp5718.value;
int64_t $tmp5721 = $tmp5719 + $tmp5720;
panda$core$Int64 $tmp5722 = (panda$core$Int64) {$tmp5721};
*(&local2) = $tmp5722;
// line 1433
panda$core$String* $tmp5723 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5723));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s5724));
*(&local1) = &$s5725;
panda$core$Panda$unref$panda$core$Object$Q($tmp5695);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp5726 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5726));
// unreffing p
*(&local3) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5686));
// line 1435
panda$io$IndentedOutputStream** $tmp5727 = &param0->out;
panda$io$IndentedOutputStream* $tmp5728 = *$tmp5727;
$fn5730 $tmp5729 = ($fn5730) ((panda$io$OutputStream*) $tmp5728)->$class->vtable[19];
$tmp5729(((panda$io$OutputStream*) $tmp5728), &$s5731);
// line 1436
panda$io$MemoryOutputStream* $tmp5732 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp5732);
*(&local4) = ((panda$io$MemoryOutputStream*) NULL);
panda$io$MemoryOutputStream* $tmp5733 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5733));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5732));
*(&local4) = $tmp5732;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5732));
// line 1437
panda$io$IndentedOutputStream* $tmp5734 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream* $tmp5735 = *(&local4);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp5734, ((panda$io$OutputStream*) $tmp5735));
panda$io$IndentedOutputStream** $tmp5736 = &param0->out;
panda$io$IndentedOutputStream* $tmp5737 = *$tmp5736;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5737));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5734));
panda$io$IndentedOutputStream** $tmp5738 = &param0->out;
*$tmp5738 = $tmp5734;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5734));
// line 1438
org$pandalanguage$pandac$CCodeGenerator$writeIR$org$pandalanguage$pandac$IR(param0, param2);
// line 1439
panda$io$IndentedOutputStream** $tmp5739 = &param0->methods;
panda$io$IndentedOutputStream* $tmp5740 = *$tmp5739;
panda$io$MemoryOutputStream** $tmp5741 = &param0->methodHeaderBuffer;
panda$io$MemoryOutputStream* $tmp5742 = *$tmp5741;
$fn5744 $tmp5743 = ($fn5744) ((panda$io$OutputStream*) $tmp5740)->$class->vtable[20];
$tmp5743(((panda$io$OutputStream*) $tmp5740), ((panda$core$Object*) $tmp5742));
// line 1440
panda$io$IndentedOutputStream** $tmp5745 = &param0->methods;
panda$io$IndentedOutputStream* $tmp5746 = *$tmp5745;
panda$io$MemoryOutputStream* $tmp5747 = *(&local4);
$fn5749 $tmp5748 = ($fn5749) ((panda$io$OutputStream*) $tmp5746)->$class->vtable[20];
$tmp5748(((panda$io$OutputStream*) $tmp5746), ((panda$core$Object*) $tmp5747));
// line 1441
panda$io$IndentedOutputStream** $tmp5750 = &param0->methods;
panda$io$IndentedOutputStream* $tmp5751 = *$tmp5750;
$fn5753 $tmp5752 = ($fn5753) ((panda$io$OutputStream*) $tmp5751)->$class->vtable[19];
$tmp5752(((panda$io$OutputStream*) $tmp5751), &$s5754);
// line 1442
panda$io$IndentedOutputStream* $tmp5755 = *(&local0);
panda$io$IndentedOutputStream** $tmp5756 = &param0->out;
panda$io$IndentedOutputStream* $tmp5757 = *$tmp5756;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5757));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5755));
panda$io$IndentedOutputStream** $tmp5758 = &param0->out;
*$tmp5758 = $tmp5755;
panda$io$MemoryOutputStream* $tmp5759 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5759));
// unreffing buffer
*(&local4) = ((panda$io$MemoryOutputStream*) NULL);
panda$core$String* $tmp5760 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5760));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$io$IndentedOutputStream* $tmp5761 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5761));
// unreffing old
*(&local0) = ((panda$io$IndentedOutputStream*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

panda$io$File* local0 = NULL;
// line 1447
org$pandalanguage$pandac$ClassDecl** $tmp5762 = &param0->currentClass;
org$pandalanguage$pandac$ClassDecl* $tmp5763 = *$tmp5762;
panda$core$Bit $tmp5764 = panda$core$Bit$init$builtin_bit($tmp5763 == NULL);
bool $tmp5765 = $tmp5764.value;
if ($tmp5765) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp5766 = (panda$core$Int64) {1447};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s5767, $tmp5766);
abort(); // unreachable
block1:;
// line 1448
org$pandalanguage$pandac$ClassDecl** $tmp5768 = &param0->currentClass;
org$pandalanguage$pandac$ClassDecl* $tmp5769 = *$tmp5768;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5769));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$ClassDecl** $tmp5770 = &param0->currentClass;
*$tmp5770 = param1;
// line 1449
panda$collections$HashSet** $tmp5771 = &param0->imports;
panda$collections$HashSet* $tmp5772 = *$tmp5771;
panda$collections$HashSet$clear($tmp5772);
// line 1450
panda$io$MemoryOutputStream** $tmp5773 = &param0->strings;
panda$io$MemoryOutputStream* $tmp5774 = *$tmp5773;
panda$io$MemoryOutputStream$clear($tmp5774);
// line 1451
panda$io$MemoryOutputStream** $tmp5775 = &param0->declarations;
panda$io$MemoryOutputStream* $tmp5776 = *$tmp5775;
panda$io$MemoryOutputStream$clear($tmp5776);
// line 1452
panda$io$MemoryOutputStream** $tmp5777 = &param0->types;
panda$io$MemoryOutputStream* $tmp5778 = *$tmp5777;
panda$io$MemoryOutputStream$clear($tmp5778);
// line 1453
panda$io$MemoryOutputStream** $tmp5779 = &param0->methodsBuffer;
panda$io$MemoryOutputStream* $tmp5780 = *$tmp5779;
panda$io$MemoryOutputStream$clear($tmp5780);
// line 1454
panda$io$MemoryOutputStream** $tmp5781 = &param0->shimsBuffer;
panda$io$MemoryOutputStream* $tmp5782 = *$tmp5781;
panda$io$MemoryOutputStream$clear($tmp5782);
// line 1455
panda$collections$HashSet** $tmp5783 = &param0->declared;
panda$collections$HashSet* $tmp5784 = *$tmp5783;
panda$collections$HashSet$clear($tmp5784);
// line 1456
panda$collections$HashSet** $tmp5785 = &param0->writtenTypes;
panda$collections$HashSet* $tmp5786 = *$tmp5785;
panda$collections$HashSet$clear($tmp5786);
// line 1457
panda$collections$HashSet** $tmp5787 = &param0->writtenWrappers;
panda$collections$HashSet* $tmp5788 = *$tmp5787;
panda$collections$HashSet$clear($tmp5788);
// line 1458
panda$collections$HashMap** $tmp5789 = &param0->classConstants;
panda$collections$HashMap* $tmp5790 = *$tmp5789;
panda$collections$HashMap$clear($tmp5790);
// line 1459
panda$collections$IdentityMap** $tmp5791 = &param0->variableNames;
panda$collections$IdentityMap* $tmp5792 = *$tmp5791;
panda$collections$IdentityMap$clear($tmp5792);
// line 1460
panda$core$Int64 $tmp5793 = (panda$core$Int64) {0};
panda$core$Int64* $tmp5794 = &param0->varCount;
*$tmp5794 = $tmp5793;
// line 1461
panda$collections$IdentityMap** $tmp5795 = &param0->methodShims;
panda$collections$IdentityMap* $tmp5796 = *$tmp5795;
panda$collections$IdentityMap$clear($tmp5796);
// line 1462
panda$core$Weak** $tmp5797 = &param0->hCodeGen;
panda$core$Weak* $tmp5798 = *$tmp5797;
panda$core$Object* $tmp5799 = panda$core$Weak$get$R$panda$core$Weak$T($tmp5798);
panda$core$Panda$unref$panda$core$Object$Q($tmp5799);
panda$io$File* $tmp5800 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(((org$pandalanguage$pandac$HCodeGenerator*) $tmp5799), param1, &$s5801);
*(&local0) = ((panda$io$File*) NULL);
panda$io$File* $tmp5802 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5802));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5800));
*(&local0) = $tmp5800;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5800));
// line 1463
panda$io$File* $tmp5803 = *(&local0);
panda$io$File* $tmp5804 = panda$io$File$parent$R$panda$io$File$Q($tmp5803);
panda$io$File$createDirectories($tmp5804);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5804));
// line 1464
panda$io$IndentedOutputStream* $tmp5805 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$File* $tmp5806 = *(&local0);
panda$io$OutputStream* $tmp5807 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp5806);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp5805, $tmp5807);
panda$io$IndentedOutputStream** $tmp5808 = &param0->out;
panda$io$IndentedOutputStream* $tmp5809 = *$tmp5808;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5809));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5805));
panda$io$IndentedOutputStream** $tmp5810 = &param0->out;
*$tmp5810 = $tmp5805;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5805));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5807));
// line 1465
panda$io$IndentedOutputStream** $tmp5811 = &param0->out;
panda$io$IndentedOutputStream* $tmp5812 = *$tmp5811;
$fn5814 $tmp5813 = ($fn5814) ((panda$io$OutputStream*) $tmp5812)->$class->vtable[22];
$tmp5813(((panda$io$OutputStream*) $tmp5812));
// line 1466
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp5815 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, param1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5815));
// line 1467
panda$core$Weak** $tmp5816 = &param0->compiler;
panda$core$Weak* $tmp5817 = *$tmp5816;
panda$core$Object* $tmp5818 = panda$core$Weak$get$R$panda$core$Weak$T($tmp5817);
panda$core$Panda$unref$panda$core$Object$Q($tmp5818);
panda$core$Bit $tmp5819 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp5818), param1);
bool $tmp5820 = $tmp5819.value;
if ($tmp5820) goto block3; else goto block4;
block3:;
// line 1468
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp5821 = org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(param0, param1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5821));
goto block4;
block4:;
panda$io$File* $tmp5822 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5822));
// unreffing path
*(&local0) = ((panda$io$File*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

// line 1474
org$pandalanguage$pandac$CCodeGenerator$finish(param0);
// line 1475
org$pandalanguage$pandac$ClassDecl** $tmp5823 = &param0->currentClass;
org$pandalanguage$pandac$ClassDecl* $tmp5824 = *$tmp5823;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5824));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
org$pandalanguage$pandac$ClassDecl** $tmp5825 = &param0->currentClass;
*$tmp5825 = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* param0) {

// line 1480
panda$io$IndentedOutputStream** $tmp5826 = &param0->out;
panda$io$IndentedOutputStream* $tmp5827 = *$tmp5826;
panda$io$MemoryOutputStream** $tmp5828 = &param0->includes;
panda$io$MemoryOutputStream* $tmp5829 = *$tmp5828;
$fn5831 $tmp5830 = ($fn5831) ((panda$io$OutputStream*) $tmp5827)->$class->vtable[20];
$tmp5830(((panda$io$OutputStream*) $tmp5827), ((panda$core$Object*) $tmp5829));
// line 1481
panda$io$MemoryOutputStream** $tmp5832 = &param0->includes;
panda$io$MemoryOutputStream* $tmp5833 = *$tmp5832;
panda$io$MemoryOutputStream$clear($tmp5833);
// line 1482
panda$io$IndentedOutputStream** $tmp5834 = &param0->out;
panda$io$IndentedOutputStream* $tmp5835 = *$tmp5834;
panda$io$MemoryOutputStream** $tmp5836 = &param0->shimsBuffer;
panda$io$MemoryOutputStream* $tmp5837 = *$tmp5836;
$fn5839 $tmp5838 = ($fn5839) ((panda$io$OutputStream*) $tmp5835)->$class->vtable[20];
$tmp5838(((panda$io$OutputStream*) $tmp5835), ((panda$core$Object*) $tmp5837));
// line 1483
panda$io$MemoryOutputStream** $tmp5840 = &param0->shimsBuffer;
panda$io$MemoryOutputStream* $tmp5841 = *$tmp5840;
panda$io$MemoryOutputStream$clear($tmp5841);
// line 1484
panda$io$IndentedOutputStream** $tmp5842 = &param0->out;
panda$io$IndentedOutputStream* $tmp5843 = *$tmp5842;
panda$io$MemoryOutputStream** $tmp5844 = &param0->types;
panda$io$MemoryOutputStream* $tmp5845 = *$tmp5844;
$fn5847 $tmp5846 = ($fn5847) ((panda$io$OutputStream*) $tmp5843)->$class->vtable[20];
$tmp5846(((panda$io$OutputStream*) $tmp5843), ((panda$core$Object*) $tmp5845));
// line 1485
panda$io$MemoryOutputStream** $tmp5848 = &param0->types;
panda$io$MemoryOutputStream* $tmp5849 = *$tmp5848;
panda$io$MemoryOutputStream$clear($tmp5849);
// line 1486
panda$io$IndentedOutputStream** $tmp5850 = &param0->out;
panda$io$IndentedOutputStream* $tmp5851 = *$tmp5850;
panda$io$MemoryOutputStream** $tmp5852 = &param0->strings;
panda$io$MemoryOutputStream* $tmp5853 = *$tmp5852;
$fn5855 $tmp5854 = ($fn5855) ((panda$io$OutputStream*) $tmp5851)->$class->vtable[20];
$tmp5854(((panda$io$OutputStream*) $tmp5851), ((panda$core$Object*) $tmp5853));
// line 1487
panda$io$MemoryOutputStream** $tmp5856 = &param0->strings;
panda$io$MemoryOutputStream* $tmp5857 = *$tmp5856;
panda$io$MemoryOutputStream$clear($tmp5857);
// line 1488
panda$io$IndentedOutputStream** $tmp5858 = &param0->out;
panda$io$IndentedOutputStream* $tmp5859 = *$tmp5858;
panda$io$MemoryOutputStream** $tmp5860 = &param0->methodsBuffer;
panda$io$MemoryOutputStream* $tmp5861 = *$tmp5860;
$fn5863 $tmp5862 = ($fn5863) ((panda$io$OutputStream*) $tmp5859)->$class->vtable[20];
$tmp5862(((panda$io$OutputStream*) $tmp5859), ((panda$core$Object*) $tmp5861));
// line 1489
panda$io$MemoryOutputStream** $tmp5864 = &param0->methodsBuffer;
panda$io$MemoryOutputStream* $tmp5865 = *$tmp5864;
panda$io$MemoryOutputStream$clear($tmp5865);
return;

}
void org$pandalanguage$pandac$CCodeGenerator$cleanup(org$pandalanguage$pandac$CCodeGenerator* param0) {

panda$core$Weak** $tmp5866 = &param0->compiler;
panda$core$Weak* $tmp5867 = *$tmp5866;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5867));
panda$io$File** $tmp5868 = &param0->outDir;
panda$io$File* $tmp5869 = *$tmp5868;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5869));
panda$io$IndentedOutputStream** $tmp5870 = &param0->out;
panda$io$IndentedOutputStream* $tmp5871 = *$tmp5870;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5871));
panda$io$MemoryOutputStream** $tmp5872 = &param0->strings;
panda$io$MemoryOutputStream* $tmp5873 = *$tmp5872;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5873));
panda$collections$HashSet** $tmp5874 = &param0->imports;
panda$collections$HashSet* $tmp5875 = *$tmp5874;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5875));
panda$core$Weak** $tmp5876 = &param0->hCodeGen;
panda$core$Weak* $tmp5877 = *$tmp5876;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5877));
org$pandalanguage$pandac$HCodeGenerator** $tmp5878 = &param0->hCodeGenRetain;
org$pandalanguage$pandac$HCodeGenerator* $tmp5879 = *$tmp5878;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5879));
org$pandalanguage$pandac$ClassDecl** $tmp5880 = &param0->currentClass;
org$pandalanguage$pandac$ClassDecl* $tmp5881 = *$tmp5880;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5881));
panda$io$MemoryOutputStream** $tmp5882 = &param0->includes;
panda$io$MemoryOutputStream* $tmp5883 = *$tmp5882;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5883));
panda$io$MemoryOutputStream** $tmp5884 = &param0->declarations;
panda$io$MemoryOutputStream* $tmp5885 = *$tmp5884;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5885));
panda$io$MemoryOutputStream** $tmp5886 = &param0->types;
panda$io$MemoryOutputStream* $tmp5887 = *$tmp5886;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5887));
panda$io$MemoryOutputStream** $tmp5888 = &param0->methodsBuffer;
panda$io$MemoryOutputStream* $tmp5889 = *$tmp5888;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5889));
panda$io$IndentedOutputStream** $tmp5890 = &param0->methods;
panda$io$IndentedOutputStream* $tmp5891 = *$tmp5890;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5891));
panda$io$MemoryOutputStream** $tmp5892 = &param0->methodHeaderBuffer;
panda$io$MemoryOutputStream* $tmp5893 = *$tmp5892;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5893));
panda$io$IndentedOutputStream** $tmp5894 = &param0->methodHeader;
panda$io$IndentedOutputStream* $tmp5895 = *$tmp5894;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5895));
panda$io$MemoryOutputStream** $tmp5896 = &param0->shimsBuffer;
panda$io$MemoryOutputStream* $tmp5897 = *$tmp5896;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5897));
panda$io$IndentedOutputStream** $tmp5898 = &param0->shims;
panda$io$IndentedOutputStream* $tmp5899 = *$tmp5898;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5899));
panda$collections$HashSet** $tmp5900 = &param0->declared;
panda$collections$HashSet* $tmp5901 = *$tmp5900;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5901));
panda$collections$HashSet** $tmp5902 = &param0->writtenTypes;
panda$collections$HashSet* $tmp5903 = *$tmp5902;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5903));
panda$collections$HashSet** $tmp5904 = &param0->writtenWrappers;
panda$collections$HashSet* $tmp5905 = *$tmp5904;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5905));
panda$collections$HashMap** $tmp5906 = &param0->classConstants;
panda$collections$HashMap* $tmp5907 = *$tmp5906;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5907));
panda$collections$IdentityMap** $tmp5908 = &param0->variableNames;
panda$collections$IdentityMap* $tmp5909 = *$tmp5908;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5909));
panda$core$String** $tmp5910 = &param0->currentBlock;
panda$core$String* $tmp5911 = *$tmp5910;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5911));
org$pandalanguage$pandac$MethodDecl** $tmp5912 = &param0->currentMethod;
org$pandalanguage$pandac$MethodDecl* $tmp5913 = *$tmp5912;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5913));
panda$core$String** $tmp5914 = &param0->returnValueVar;
panda$core$String* $tmp5915 = *$tmp5914;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5915));
panda$collections$Stack** $tmp5916 = &param0->enclosingContexts;
panda$collections$Stack* $tmp5917 = *$tmp5916;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5917));
panda$collections$IdentityMap** $tmp5918 = &param0->methodShims;
panda$collections$IdentityMap* $tmp5919 = *$tmp5918;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5919));
panda$collections$IdentityMap** $tmp5920 = &param0->choiceDataSizes;
panda$collections$IdentityMap* $tmp5921 = *$tmp5920;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5921));
panda$collections$HashMap** $tmp5922 = &param0->refs;
panda$collections$HashMap* $tmp5923 = *$tmp5922;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5923));
org$pandalanguage$pandac$IR** $tmp5924 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp5925 = *$tmp5924;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5925));
return;

}

