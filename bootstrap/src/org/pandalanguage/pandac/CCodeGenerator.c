#include "org/pandalanguage/pandac/CCodeGenerator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "panda/io/File.h"
#include "panda/io/MemoryOutputStream.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/io/IndentedOutputStream.h"
#include "panda/io/OutputStream.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/IdentityMap.h"
#include "panda/collections/Stack.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/HCodeGenerator.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/MutableString.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/collections/Array.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/CCodeGenerator/ClassConstant.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/CCodeGenerator/MethodShim.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/CCodeGenerator/LoopDescriptor.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

org$pandalanguage$pandac$CCodeGenerator$class_type org$pandalanguage$pandac$CCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim, org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

typedef void (*$fn65)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn128)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn144)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn176)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn182)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn188)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn218)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn224)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn230)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn328)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn334)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn340)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn370)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn392)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn398)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn404)(panda$collections$Iterator*);
typedef void (*$fn411)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn449)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn456)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn489)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn502)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn557)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn563)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn589)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn602)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn611)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn614)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn619)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn645)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn680)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn693)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn743)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn749)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn775)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn788)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn791)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn800)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn806)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn812)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn842)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn869)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn875)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn881)(panda$collections$Iterator*);
typedef void (*$fn888)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn971)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn977)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn983)(panda$collections$Iterator*);
typedef void (*$fn990)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1010)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1068)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1091)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1117)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1157)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1167)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1181)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1197)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1207)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1221)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1244)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1250)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1264)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1312)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1334)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1371)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1379)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1388)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1391)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1398)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1420)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1438)(panda$collections$CollectionView*);
typedef void (*$fn1460)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1599)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1617)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1715)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1723)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1735)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1739)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1745)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1751)(panda$collections$Iterator*);
typedef void (*$fn1760)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1763)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1996)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2022)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2038)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2043)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2069)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2074)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2080)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2086)(panda$collections$Iterator*);
typedef void (*$fn2091)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn2098)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2100)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Object* (*$fn2107)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2109)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Int64 (*$fn2114)(panda$collections$CollectionView*);
typedef void (*$fn2119)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2238)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2243)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2249)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2255)(panda$collections$Iterator*);
typedef void (*$fn2259)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2280)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2309)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2320)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2424)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2435)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2441)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2445)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2451)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2457)(panda$collections$Iterator*);
typedef void (*$fn2459)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2460)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2463)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2482)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2485)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2489)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2492)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2528)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2535)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2554)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2569)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2582)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2595)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2605)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2643)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2655)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2672)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2686)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2700)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2717)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2731)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2747)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2764)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2780)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2797)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2811)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2827)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2843)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2860)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2874)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2888)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2898)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2903)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2925)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2931)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2954)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2965)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2968)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2979)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2989)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3006)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3012)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3018)(panda$collections$Iterator*);
typedef void (*$fn3064)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3073)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3077)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3125)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3132)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3147)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3154)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3206)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3222)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3227)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3242)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3257)(panda$io$MemoryOutputStream*);
typedef void (*$fn3267)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3277)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3282)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3288)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3294)(panda$collections$Iterator*);
typedef void (*$fn3308)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3311)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3323)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3329)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3335)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3337)(panda$io$MemoryOutputStream*);
typedef void (*$fn3339)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3340)(panda$io$MemoryOutputStream*);
typedef void (*$fn3342)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3345)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3346)(panda$io$MemoryOutputStream*);
typedef void (*$fn3347)(panda$io$MemoryOutputStream*);
typedef void (*$fn3348)(panda$io$MemoryOutputStream*);
typedef void (*$fn3349)(panda$io$MemoryOutputStream*);
typedef void (*$fn3350)(panda$io$MemoryOutputStream*);
typedef void (*$fn3351)(panda$io$MemoryOutputStream*);
typedef void (*$fn3375)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3392)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3400)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3402)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3404)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3406)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3407)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3408)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3409)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3410)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3411)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3412)(panda$core$Object*);

static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x68", 2, 1 };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22", 10, 1 };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x66\x6E", 3, 1 };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20", 8, 1 };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28\x2A", 3, 1 };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x28", 2, 1 };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, 1 };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6C", 2, 1 };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3B", 2, 1 };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x38", 1, 1 };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x36", 2, 1 };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x33\x32", 2, 1 };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34", 2, 1 };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 1 };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 1 };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, 1 };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x5F", 2, 1 };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7B\x20", 9, 1 };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6C\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x6E\x65\x78\x74\x3B\x20", 19, 1 };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x6D\x65\x74\x68\x6F\x64\x73\x5B", 14, 1 };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, 1 };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 1 };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, 1 };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6C\x65\x2A\x29\x20\x26", 11, 1 };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5, 1 };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70", 2, 1 };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70", 1, 1 };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x72\x65\x73\x75\x6C\x74\x20\x3D\x20", 10, 1 };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x73\x75\x6C\x74", 6, 1 };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6D", 12, 1 };
static panda$core$String $s629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A", 9, 1 };
static panda$core$String $s634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6C\x66\x2D\x3E\x76\x61\x6C\x75\x65", 12, 1 };
static panda$core$String $s770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5F", 9, 1 };
static panda$core$String $s828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7B\x20", 9, 1 };
static panda$core$String $s837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6C\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B\x20", 21, 1 };
static panda$core$String $s839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x6D\x65\x74\x68\x6F\x64\x73\x5B", 14, 1 };
static panda$core$String $s845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, 1 };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x26", 3, 1 };
static panda$core$String $s858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 1 };
static panda$core$String $s865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, 1 };
static panda$core$String $s889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6C\x65\x2A\x29\x20\x26", 11, 1 };
static panda$core$String $s891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 1 };
static panda$core$String $s924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 1 };
static panda$core$String $s935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74\x79\x70\x65\x20", 6, 1 };
static panda$core$String $s952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20", 5, 1 };
static panda$core$String $s959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 1 };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, 1 };
static panda$core$String $s992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 1 };
static panda$core$String $s1002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 1 };
static panda$core$String $s1003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 1 };
static panda$core$String $s1008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 1 };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 1 };
static panda$core$String $s1032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s1034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74\x79\x70\x65\x20", 6, 1 };
static panda$core$String $s1050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s1052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s1054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20", 5, 1 };
static panda$core$String $s1057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 1 };
static panda$core$String $s1064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B", 4, 1 };
static panda$core$String $s1119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x5F", 2, 1 };
static panda$core$String $s1121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1 };
static panda$core$String $s1150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s1152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 1 };
static panda$core$String $s1162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s1165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1 };
static panda$core$String $s1174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1 };
static panda$core$String $s1190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s1192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s1202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s1205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1 };
static panda$core$String $s1214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s1225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s1226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s1227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s1228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s1231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s1232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s1233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s1234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s1235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 1 };
static panda$core$String $s1236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s1237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s1238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s1239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s1240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s1243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s1245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, 1 };
static panda$core$String $s1271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x3D\x20", 4, 1 };
static panda$core$String $s1274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s1280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, 1 };
static panda$core$String $s1282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20", 4, 1 };
static panda$core$String $s1285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s1348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x2D\x3E\x76\x74\x61\x62\x6C\x65\x5B", 17, 1 };
static panda$core$String $s1358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x29", 2, 1 };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x54\x61\x62\x6C\x65\x2A\x20", 8, 1 };
static panda$core$String $s1366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x2D\x3E\x69\x74\x61\x62\x6C\x65\x3B", 17, 1 };
static panda$core$String $s1372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28", 7, 1 };
static panda$core$String $s1374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x20\x21\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 33, 1 };
static panda$core$String $s1377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s1381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x6E\x65\x78\x74\x3B", 7, 1 };
static panda$core$String $s1390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x6D\x65\x74\x68\x6F\x64\x73\x5B", 10, 1 };
static panda$core$String $s1458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B", 2, 1 };
static panda$core$String $s1473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, 1 };
static panda$core$String $s1487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 9, 1 };
static panda$core$String $s1493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2A\x20", 9, 1 };
static panda$core$String $s1496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 1 };
static panda$core$String $s1498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 1 };
static panda$core$String $s1505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x2A", 2, 1 };
static panda$core$String $s1507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s1524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D", 7, 1 };
static panda$core$String $s1526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, 1 };
static panda$core$String $s1543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x72\x65\x61\x6C\x6C\x6F\x63\x28", 10, 1 };
static panda$core$String $s1549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2A\x20", 9, 1 };
static panda$core$String $s1555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 1 };
static panda$core$String $s1557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, 1 };
static panda$core$String $s1567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2B\x20", 3, 1 };
static panda$core$String $s1572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29", 7, 1 };
static panda$core$String $s1576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s1580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, 1 };
static panda$core$String $s1582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s1592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 15, 1 };
static panda$core$String $s1594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s1597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1 };
static panda$core$String $s1600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s1610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 15, 1 };
static panda$core$String $s1612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s1615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1 };
static panda$core$String $s1706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x26", 2, 1 };
static panda$core$String $s1721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s1777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3F\x20", 11, 1 };
static panda$core$String $s1782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x4E\x55\x4C\x4C\x29", 8, 1 };
static panda$core$String $s1785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x77\x72\x61\x70\x5F", 7, 1 };
static panda$core$String $s1793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 1 };
static panda$core$String $s1801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3F\x20", 11, 1 };
static panda$core$String $s1806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x4E\x55\x4C\x4C\x29", 8, 1 };
static panda$core$String $s1821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, 1 };
static panda$core$String $s1835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2D\x3E\x76\x61\x6C\x75\x65", 8, 1 };
static panda$core$String $s1853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C\x20\x3F\x20", 11, 1 };
static panda$core$String $s1858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x28", 4, 1 };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x30\x20\x7D\x29", 19, 1 };
static panda$core$String $s1864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20", 4, 1 };
static panda$core$String $s1870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x74\x72\x75\x65\x20\x7D\x29", 9, 1 };
static panda$core$String $s1872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29", 7, 1 };
static panda$core$String $s1883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8, 1 };
static panda$core$String $s1937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20", 4, 1 };
static panda$core$String $s1980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s1985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, 1 };
static panda$core$String $s1987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x28", 4, 1 };
static panda$core$String $s2014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s2016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x6C\x6C\x6F\x63\x28", 7, 1 };
static panda$core$String $s2019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 32, 1 };
static panda$core$String $s2036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x3B", 7, 1 };
static panda$core$String $s2039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x72\x65\x66\x43\x6F\x75\x6E\x74\x2E\x76\x61\x6C\x75\x65\x20\x3D\x20\x31\x3B", 21, 1 };
static panda$core$String $s2045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s2054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 1 };
static panda$core$String $s2058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73", 2, 1 };
static panda$core$String $s2060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20", 25, 1 };
static panda$core$String $s2065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s2067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x63\x6C\x61\x73\x73\x2C\x20\x32\x2C\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x20\x22", 70, 1 };
static panda$core$String $s2090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C\x78", 2, 1 };
static panda$core$String $s2092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 1 };
static panda$core$String $s2101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 1 };
static panda$core$String $s2110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22\x2C\x20", 3, 1 };
static panda$core$String $s2117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x20\x7D\x3B", 6, 1 };
static panda$core$String $s2120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, 1 };
static panda$core$String $s2125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s2128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x73\x65\x6C\x66\x29", 7, 1 };
static panda$core$String $s2143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 1 };
static panda$core$String $s2144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s2148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x3D\x20\x4E\x55\x4C\x4C", 8, 1 };
static panda$core$String $s2152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, 1 };
static panda$core$String $s2154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s2169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s2170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C", 8, 1 };
static panda$core$String $s2178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, 1 };
static panda$core$String $s2180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s2187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s2190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x66\x61\x6C\x73\x65\x20\x7D\x29", 23, 1 };
static panda$core$String $s2192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s2202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s2212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s2258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s2262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 1 };
static panda$core$String $s2273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x32\x20", 7, 1 };
static panda$core$String $s2275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s2304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D\x20\x3D\x20", 10, 1 };
static panda$core$String $s2307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, 1 };
static panda$core$String $s2314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x72\x65\x65\x28", 5, 1 };
static panda$core$String $s2318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s2323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s2409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, 1 };
static panda$core$String $s2417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s2478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x7B", 9, 1 };
static panda$core$String $s2484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s2488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x6C\x73\x65\x20\x7B", 6, 1 };
static panda$core$String $s2491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s2505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, 1 };
static panda$core$String $s2544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x61\x72\x74\x2E\x76\x61\x6C\x75\x65\x3B", 13, 1 };
static panda$core$String $s2557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s2567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1 };
static panda$core$String $s2572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x65\x6E\x64\x2E\x76\x61\x6C\x75\x65\x3B", 11, 1 };
static panda$core$String $s2585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x65\x70\x2E\x76\x61\x6C\x75\x65\x3B", 12, 1 };
static panda$core$String $s2598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s2600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x69\x6E\x63\x6C\x75\x73\x69\x76\x65\x2E\x76\x61\x6C\x75\x65\x3B", 17, 1 };
static panda$core$String $s2621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, 1 };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s2625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1 };
static panda$core$String $s2628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1 };
static panda$core$String $s2631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 1 };
static panda$core$String $s2633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s2636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s2638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x30\x3B", 5, 1 };
static panda$core$String $s2644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s2645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x3D\x20", 4, 1 };
static panda$core$String $s2678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x20", 3, 1 };
static panda$core$String $s2692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, 1 };
static panda$core$String $s2723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, 1 };
static panda$core$String $s2739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x20", 3, 1 };
static panda$core$String $s2778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x3B", 7, 1 };
static panda$core$String $s2785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, 1 };
static panda$core$String $s2803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, 1 };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2D\x20", 9, 1 };
static panda$core$String $s2841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20\x2D", 5, 1 };
static panda$core$String $s2866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x2D", 4, 1 };
static panda$core$String $s2880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2B\x3D\x20", 10, 1 };
static panda$core$String $s2896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s2901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 1 };
static panda$core$String $s2920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, 1 };
static panda$core$String $s2923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s2929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, 1 };
static panda$core$String $s2952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7B", 14, 1 };
static panda$core$String $s2967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s2970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, 1 };
static panda$core$String $s3037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s3062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s3071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x3B", 7, 1 };
static panda$core$String $s3121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s3123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s3130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x50\x41\x4E\x44\x41\x5F\x41\x53\x53\x45\x52\x54\x28", 13, 1 };
static panda$core$String $s3145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s3148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20\x28", 8, 1 };
static panda$core$String $s3152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x7B", 9, 1 };
static panda$core$String $s3200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x73\x65\x20", 5, 1 };
static panda$core$String $s3204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s3221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B\x3B", 6, 1 };
static panda$core$String $s3226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x61\x75\x6C\x74\x3A", 8, 1 };
static panda$core$String $s3241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s3249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s3253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s3256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 1 };
static panda$core$String $s3258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s3269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s3278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70\x5F", 3, 1 };
static panda$core$String $s3306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s3344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s3353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x63", 2, 1 };
static panda$core$String $s3360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x77\x72\x61\x70\x5F", 15, 1 };
static panda$core$String $s3367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s3369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66\x29\x20\x7B", 8, 1 };
static panda$core$String $s3376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20", 4, 1 };
static panda$core$String $s3379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x72\x65\x73\x75\x6C\x74\x20\x3D\x20", 19, 1 };
static panda$core$String $s3381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s3384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 18, 1 };
static panda$core$String $s3389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s3393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x63\x6C\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20", 37, 1 };
static panda$core$String $s3394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s3397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x3B", 14, 1 };
static panda$core$String $s3401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x76\x61\x6C\x75\x65\x20\x3D\x20\x73\x65\x6C\x66\x3B", 25, 1 };
static panda$core$String $s3403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6E\x20\x72\x65\x73\x75\x6C\x74\x3B", 18, 1 };
static panda$core$String $s3405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };

void org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File(org$pandalanguage$pandac$CCodeGenerator* self, panda$io$File* p_outDir) {
    panda$io$MemoryOutputStream* $tmp1 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp1->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp1->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp1);
    self->strings = $tmp1;
    panda$collections$Set* $tmp3 = (panda$collections$Set*) malloc(24);
    $tmp3->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp3->refCount.value = 1;
    panda$collections$Set$init($tmp3);
    self->imports = $tmp3;
    self->currentClass = NULL;
    panda$io$MemoryOutputStream* $tmp5 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp5->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp5->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp5);
    self->declarations = $tmp5;
    panda$io$MemoryOutputStream* $tmp7 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp7->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp7->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp7);
    self->types = $tmp7;
    panda$io$MemoryOutputStream* $tmp9 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp9->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp9->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp9);
    self->methodsBuffer = $tmp9;
    panda$io$IndentedOutputStream* $tmp11 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp11->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp11->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp11, ((panda$io$OutputStream*) self->methodsBuffer));
    self->methods = $tmp11;
    panda$io$MemoryOutputStream* $tmp13 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp13->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp13->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp13);
    self->methodHeaderBuffer = $tmp13;
    panda$io$IndentedOutputStream* $tmp15 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp15->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp15->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp15, ((panda$io$OutputStream*) self->methodHeaderBuffer));
    self->methodHeader = $tmp15;
    panda$io$MemoryOutputStream* $tmp17 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp17->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp17->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp17);
    self->wrapperShimsBuffer = $tmp17;
    panda$io$IndentedOutputStream* $tmp19 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp19->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp19->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp19, ((panda$io$OutputStream*) self->wrapperShimsBuffer));
    self->wrapperShims = $tmp19;
    panda$io$MemoryOutputStream* $tmp21 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp21->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp21->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp21);
    self->shimsBuffer = $tmp21;
    panda$io$IndentedOutputStream* $tmp23 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp23->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp23->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp23, ((panda$io$OutputStream*) self->shimsBuffer));
    self->shims = $tmp23;
    panda$collections$Set* $tmp25 = (panda$collections$Set*) malloc(24);
    $tmp25->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp25->refCount.value = 1;
    panda$collections$Set$init($tmp25);
    self->declared = $tmp25;
    panda$collections$Set* $tmp27 = (panda$collections$Set*) malloc(24);
    $tmp27->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp27->refCount.value = 1;
    panda$collections$Set$init($tmp27);
    self->writtenTypes = $tmp27;
    panda$collections$Set* $tmp29 = (panda$collections$Set*) malloc(24);
    $tmp29->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp29->refCount.value = 1;
    panda$collections$Set$init($tmp29);
    self->writtenWrappers = $tmp29;
    panda$collections$HashMap* $tmp31 = (panda$collections$HashMap*) malloc(56);
    $tmp31->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp31->refCount.value = 1;
    panda$collections$HashMap$init($tmp31);
    self->classConstants = $tmp31;
    panda$collections$IdentityMap* $tmp33 = (panda$collections$IdentityMap*) malloc(56);
    $tmp33->$class = (panda$core$Class*) &panda$collections$IdentityMap$class;
    $tmp33->refCount.value = 1;
    panda$collections$IdentityMap$init($tmp33);
    self->variableNames = $tmp33;
    panda$collections$Stack* $tmp35 = (panda$collections$Stack*) malloc(24);
    $tmp35->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp35->refCount.value = 1;
    panda$collections$Stack$init($tmp35);
    self->loopDescriptors = $tmp35;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$collections$HashMap* $tmp37 = (panda$collections$HashMap*) malloc(56);
    $tmp37->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp37->refCount.value = 1;
    panda$collections$HashMap$init($tmp37);
    self->reusedValues = $tmp37;
    panda$collections$IdentityMap* $tmp39 = (panda$collections$IdentityMap*) malloc(56);
    $tmp39->$class = (panda$core$Class*) &panda$collections$IdentityMap$class;
    $tmp39->refCount.value = 1;
    panda$collections$IdentityMap$init($tmp39);
    self->methodShims = $tmp39;
    panda$collections$Stack* $tmp41 = (panda$collections$Stack*) malloc(24);
    $tmp41->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp41->refCount.value = 1;
    panda$collections$Stack$init($tmp41);
    self->inlineContext = $tmp41;
    panda$collections$IdentityMap* $tmp43 = (panda$collections$IdentityMap*) malloc(56);
    $tmp43->$class = (panda$core$Class*) &panda$collections$IdentityMap$class;
    $tmp43->refCount.value = 1;
    panda$collections$IdentityMap$init($tmp43);
    self->currentlyInlining = $tmp43;
    self->outDir = p_outDir;
    panda$io$IndentedOutputStream* $tmp45 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp45->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp45->refCount.value = 1;
    panda$io$MemoryOutputStream* $tmp47 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp47->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp47->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp47);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp45, ((panda$io$OutputStream*) $tmp47));
    self->out = $tmp45;
    org$pandalanguage$pandac$HCodeGenerator* $tmp49 = (org$pandalanguage$pandac$HCodeGenerator*) malloc(129);
    $tmp49->$class = (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class;
    $tmp49->refCount.value = 1;
    org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp49, p_outDir);
    self->hCodeGen = $tmp49;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp51 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self->hCodeGen, p_s);
    return $tmp51;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* $tmp52 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self->hCodeGen, p_m);
    return $tmp52;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp53 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->hCodeGen, p_t);
    return $tmp53;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    return ((panda$core$Bit) { ((panda$core$Object*) p_cl) != ((panda$core$Object*) self->currentClass) });
}
void org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* includePath56;
    panda$core$Bit $tmp55 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s54);
    if ($tmp55.value) {
    {
        return;
    }
    }
    panda$core$String* $tmp58 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self->hCodeGen, p_cl, &$s57);
    includePath56 = $tmp58;
    panda$core$Bit $tmp59 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath56));
    panda$core$Bit $tmp60 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp59);
    if ($tmp60.value) {
    {
        panda$core$String* $tmp62 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s61, includePath56);
        panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp62, &$s63);
        (($fn65) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp64);
        panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath56));
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl67;
    panda$core$String* result75;
    panda$core$MutableString* code80;
    panda$core$String* separator90;
    panda$core$Range$LTpanda$core$Int64$GT $tmp92;
    panda$core$Bit $tmp66 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_t);
    if ($tmp66.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp68 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
        cl67 = $tmp68;
        PANDA_ASSERT(((panda$core$Bit) { cl67 != NULL }).value);
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl67);
    }
    }
    panda$core$Bit $tmp70 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp69 = $tmp70.value;
    if ($tmp69) goto $l71;
    panda$core$Bit $tmp72 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 24 }));
    $tmp69 = $tmp72.value;
    $l71:;
    panda$core$Bit $tmp73 = { $tmp69 };
    if ($tmp73.value) {
    {
        panda$core$Int64 $tmp74 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp74;
        panda$core$String* $tmp77 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s76, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        panda$core$String* $tmp79 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp77, &$s78);
        result75 = $tmp79;
        panda$core$MutableString* $tmp81 = (panda$core$MutableString*) malloc(40);
        $tmp81->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp81->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp81, &$s83);
        code80 = $tmp81;
        panda$core$Int64 $tmp84 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->subtypes);
        panda$core$Int64 $tmp85 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp84, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp86 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, $tmp85);
        panda$core$String* $tmp87 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp86));
        panda$core$MutableString$append$panda$core$String(code80, $tmp87);
        panda$core$MutableString$append$panda$core$String(code80, &$s88);
        panda$core$MutableString$append$panda$core$String(code80, result75);
        panda$core$MutableString$append$panda$core$String(code80, &$s89);
        separator90 = &$s91;
        panda$core$Int64 $tmp93 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->subtypes);
        panda$core$Int64 $tmp94 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp93, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp92, ((panda$core$Int64) { 0 }), $tmp94, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp96 = $tmp92.start.value;
        panda$core$Int64 i95 = { $tmp96 };
        int64_t $tmp98 = $tmp92.end.value;
        int64_t $tmp99 = $tmp92.step.value;
        bool $tmp100 = $tmp92.inclusive.value;
        bool $tmp107 = $tmp99 > 0;
        if ($tmp107) goto $l105; else goto $l106;
        $l105:;
        if ($tmp100) goto $l108; else goto $l109;
        $l108:;
        if ($tmp96 <= $tmp98) goto $l101; else goto $l103;
        $l109:;
        if ($tmp96 < $tmp98) goto $l101; else goto $l103;
        $l106:;
        if ($tmp100) goto $l110; else goto $l111;
        $l110:;
        if ($tmp96 >= $tmp98) goto $l101; else goto $l103;
        $l111:;
        if ($tmp96 > $tmp98) goto $l101; else goto $l103;
        $l101:;
        {
            panda$core$MutableString$append$panda$core$String(code80, separator90);
            panda$core$Object* $tmp113 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, i95);
            panda$core$String* $tmp114 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp113));
            panda$core$MutableString$append$panda$core$String(code80, $tmp114);
            separator90 = &$s115;
        }
        $l104:;
        if ($tmp107) goto $l117; else goto $l118;
        $l117:;
        int64_t $tmp119 = $tmp98 - i95.value;
        if ($tmp100) goto $l120; else goto $l121;
        $l120:;
        if ($tmp119 >= $tmp99) goto $l116; else goto $l103;
        $l121:;
        if ($tmp119 > $tmp99) goto $l116; else goto $l103;
        $l118:;
        int64_t $tmp123 = i95.value - $tmp98;
        if ($tmp100) goto $l124; else goto $l125;
        $l124:;
        if ($tmp123 >= -$tmp99) goto $l116; else goto $l103;
        $l125:;
        if ($tmp123 > -$tmp99) goto $l116; else goto $l103;
        $l116:;
        i95.value += $tmp99;
        goto $l101;
        $l103:;
        panda$core$MutableString$append$panda$core$String(code80, &$s127);
        (($fn128) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code80));
        return result75;
    }
    }
    panda$core$String* $tmp129 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self->hCodeGen, p_t);
    return $tmp129;
}
void org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->compiler = p_compiler;
    org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->hCodeGen, p_compiler);
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp130 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp130;
    panda$core$String* $tmp132 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s131, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp132, &$s133);
    return $tmp134;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp135 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp135;
    panda$core$String* $tmp137 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s136, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp137, &$s138);
    return $tmp139;
}
void org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s140, p_label);
    panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp141, &$s142);
    (($fn144) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp143);
    self->currentBlock = p_label;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt) {
    switch (p_stmt->kind.value) {
        case 1000:
        {
            panda$core$Int64 $tmp145 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp145, ((panda$core$Int64) { 0 }));
            if ($tmp146.value) {
            {
                return ((panda$core$Bit) { false });
            }
            }
            panda$core$Int64 $tmp147 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Int64 $tmp148 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp147, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp149 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, $tmp148);
            panda$core$Bit $tmp150 = org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp149));
            return $tmp150;
        }
        break;
        case 1006:
        case 1007:
        case 1008:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl162;
    panda$core$Int64 result171;
    panda$collections$Iterator* f$Iter172;
    org$pandalanguage$pandac$FieldDecl* f185;
    panda$core$Int64 size191;
    panda$core$Int64 align193;
    PANDA_ASSERT(p_t->resolved.value);
    panda$core$Bit $tmp151 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_t);
    if ($tmp151.value) {
    {
        panda$core$Bit $tmp153 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s152);
        if ($tmp153.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        panda$core$Bit $tmp155 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s154);
        if ($tmp155.value) {
        {
            return ((panda$core$Int64) { 2 });
        }
        }
        panda$core$Bit $tmp157 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s156);
        if ($tmp157.value) {
        {
            return ((panda$core$Int64) { 4 });
        }
        }
        panda$core$Bit $tmp159 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s158);
        PANDA_ASSERT($tmp159.value);
        return ((panda$core$Int64) { 8 });
    }
    }
    org$pandalanguage$pandac$Type* $tmp160 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp161 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp160);
    if ($tmp161.value) {
    {
        return ((panda$core$Int64) { 1 });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp163 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl162 = $tmp163;
    PANDA_ASSERT(((panda$core$Bit) { cl162 != NULL }).value);
    panda$core$Bit $tmp165 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl162);
    panda$core$Bit $tmp166 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp165);
    bool $tmp164 = $tmp166.value;
    if ($tmp164) goto $l167;
    panda$core$Bit $tmp169 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl162)->name, &$s168);
    $tmp164 = $tmp169.value;
    $l167:;
    panda$core$Bit $tmp170 = { $tmp164 };
    if ($tmp170.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    result171 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp173 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl162);
        ITable* $tmp174 = ((panda$collections$Iterable*) $tmp173)->$class->itable;
        while ($tmp174->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp174 = $tmp174->next;
        }
        $fn176 $tmp175 = $tmp174->methods[0];
        panda$collections$Iterator* $tmp177 = $tmp175(((panda$collections$Iterable*) $tmp173));
        f$Iter172 = $tmp177;
        $l178:;
        ITable* $tmp180 = f$Iter172->$class->itable;
        while ($tmp180->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp180 = $tmp180->next;
        }
        $fn182 $tmp181 = $tmp180->methods[0];
        panda$core$Bit $tmp183 = $tmp181(f$Iter172);
        panda$core$Bit $tmp184 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp183);
        if (!$tmp184.value) goto $l179;
        {
            ITable* $tmp186 = f$Iter172->$class->itable;
            while ($tmp186->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp186 = $tmp186->next;
            }
            $fn188 $tmp187 = $tmp186->methods[1];
            panda$core$Object* $tmp189 = $tmp187(f$Iter172);
            f185 = ((org$pandalanguage$pandac$FieldDecl*) $tmp189);
            panda$core$Bit $tmp190 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f185->annotations);
            if ($tmp190.value) {
            {
                goto $l178;
            }
            }
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f185);
            panda$core$Int64 $tmp192 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f185->type);
            size191 = $tmp192;
            panda$core$Int64 $tmp194 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result171, size191);
            align193 = $tmp194;
            panda$core$Bit $tmp195 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align193, ((panda$core$Int64) { 0 }));
            if ($tmp195.value) {
            {
                panda$core$Int64 $tmp196 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size191, align193);
                panda$core$Int64 $tmp197 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result171, $tmp196);
                result171 = $tmp197;
            }
            }
            panda$core$Int64 $tmp198 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result171, size191);
            panda$core$Bit $tmp199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp198, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp199.value);
            panda$core$Int64 $tmp200 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result171, size191);
            result171 = $tmp200;
        }
        goto $l178;
        $l179:;
    }
    panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp201.value) {
    {
        panda$core$Int64 $tmp202 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result171, ((panda$core$Int64) { 1 }));
        result171 = $tmp202;
    }
    }
    return result171;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp203 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
    panda$core$Int64 $tmp204 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp203, ((panda$core$Int64) { 8 }));
    return $tmp204;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl205;
    panda$core$Int64 result211;
    panda$collections$Iterator* f$Iter214;
    org$pandalanguage$pandac$FieldDecl* f227;
    panda$core$Int64 size232;
    panda$core$Int64 align234;
    org$pandalanguage$pandac$ClassDecl* $tmp206 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl205 = $tmp206;
    bool $tmp207 = ((panda$core$Bit) { cl205 != NULL }).value;
    if (!$tmp207) goto $l208;
    panda$core$Bit $tmp209 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl205);
    $tmp207 = $tmp209.value;
    $l208:;
    panda$core$Bit $tmp210 = { $tmp207 };
    PANDA_ASSERT($tmp210.value);
    org$pandalanguage$pandac$Type* $tmp212 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$Int64 $tmp213 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp212);
    result211 = $tmp213;
    {
        panda$collections$ListView* $tmp215 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl205);
        ITable* $tmp216 = ((panda$collections$Iterable*) $tmp215)->$class->itable;
        while ($tmp216->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp216 = $tmp216->next;
        }
        $fn218 $tmp217 = $tmp216->methods[0];
        panda$collections$Iterator* $tmp219 = $tmp217(((panda$collections$Iterable*) $tmp215));
        f$Iter214 = $tmp219;
        $l220:;
        ITable* $tmp222 = f$Iter214->$class->itable;
        while ($tmp222->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp222 = $tmp222->next;
        }
        $fn224 $tmp223 = $tmp222->methods[0];
        panda$core$Bit $tmp225 = $tmp223(f$Iter214);
        panda$core$Bit $tmp226 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp225);
        if (!$tmp226.value) goto $l221;
        {
            ITable* $tmp228 = f$Iter214->$class->itable;
            while ($tmp228->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp228 = $tmp228->next;
            }
            $fn230 $tmp229 = $tmp228->methods[1];
            panda$core$Object* $tmp231 = $tmp229(f$Iter214);
            f227 = ((org$pandalanguage$pandac$FieldDecl*) $tmp231);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f227);
            panda$core$Int64 $tmp233 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f227->type);
            size232 = $tmp233;
            panda$core$Int64 $tmp235 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result211, size232);
            align234 = $tmp235;
            panda$core$Bit $tmp236 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align234, ((panda$core$Int64) { 0 }));
            if ($tmp236.value) {
            {
                panda$core$Int64 $tmp237 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size232, align234);
                panda$core$Int64 $tmp238 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result211, $tmp237);
                result211 = $tmp238;
            }
            }
            panda$core$Int64 $tmp239 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result211, size232);
            panda$core$Bit $tmp240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp239, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp240.value);
            panda$core$Int64 $tmp241 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result211, size232);
            result211 = $tmp241;
        }
        goto $l220;
        $l221:;
    }
    panda$core$Bit $tmp242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp242.value) {
    {
        panda$core$Int64 $tmp243 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result211, ((panda$core$Int64) { 1 }));
        result211 = $tmp243;
    }
    }
    return result211;
}
void org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp244 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp244.value) {
    {
        return;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp245 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    return $tmp245;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp246.value) {
    {
        panda$core$Object* $tmp247 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp248 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp247));
        return $tmp248;
    }
    }
    panda$core$String* $tmp250 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s249, $tmp250);
    panda$core$String* $tmp253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp251, &$s252);
    return $tmp253;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp254 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp254, &$s255);
    return $tmp256;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType257;
    panda$core$MutableString* result259;
    panda$core$Range$LTpanda$core$Int64$GT $tmp276;
    org$pandalanguage$pandac$Type* $tmp258 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedType257 = $tmp258;
    panda$core$MutableString* $tmp260 = (panda$core$MutableString*) malloc(40);
    $tmp260->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp260->refCount.value = 1;
    panda$core$MutableString$init($tmp260);
    result259 = $tmp260;
    panda$core$Int64 $tmp262 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(inheritedType257->subtypes);
    panda$core$Int64 $tmp263 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp262, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp264 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inheritedType257->subtypes, $tmp263);
    panda$core$String* $tmp265 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp264));
    panda$core$MutableString$append$panda$core$String(result259, $tmp265);
    panda$core$MutableString$append$panda$core$String(result259, &$s266);
    panda$core$Bit $tmp267 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp267.value);
    panda$core$String* $tmp269 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s268, $tmp269);
    panda$core$String* $tmp272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp270, &$s271);
    panda$core$MutableString$append$panda$core$String(result259, $tmp272);
    panda$core$Bit $tmp273 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_m->owner);
    if ($tmp273.value) {
    {
        panda$core$MutableString$append$panda$core$String(result259, &$s274);
    }
    }
    panda$core$MutableString$append$panda$core$String(result259, &$s275);
    panda$core$Int64 $tmp277 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(inheritedType257->subtypes);
    panda$core$Int64 $tmp278 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp277, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp276, ((panda$core$Int64) { 0 }), $tmp278, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp280 = $tmp276.start.value;
    panda$core$Int64 i279 = { $tmp280 };
    int64_t $tmp282 = $tmp276.end.value;
    int64_t $tmp283 = $tmp276.step.value;
    bool $tmp284 = $tmp276.inclusive.value;
    bool $tmp291 = $tmp283 > 0;
    if ($tmp291) goto $l289; else goto $l290;
    $l289:;
    if ($tmp284) goto $l292; else goto $l293;
    $l292:;
    if ($tmp280 <= $tmp282) goto $l285; else goto $l287;
    $l293:;
    if ($tmp280 < $tmp282) goto $l285; else goto $l287;
    $l290:;
    if ($tmp284) goto $l294; else goto $l295;
    $l294:;
    if ($tmp280 >= $tmp282) goto $l285; else goto $l287;
    $l295:;
    if ($tmp280 > $tmp282) goto $l285; else goto $l287;
    $l285:;
    {
        panda$core$MutableString$append$panda$core$String(result259, &$s297);
        panda$core$Object* $tmp298 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inheritedType257->subtypes, i279);
        panda$core$String* $tmp299 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp298));
        panda$core$MutableString$append$panda$core$String(result259, $tmp299);
    }
    $l288:;
    if ($tmp291) goto $l301; else goto $l302;
    $l301:;
    int64_t $tmp303 = $tmp282 - i279.value;
    if ($tmp284) goto $l304; else goto $l305;
    $l304:;
    if ($tmp303 >= $tmp283) goto $l300; else goto $l287;
    $l305:;
    if ($tmp303 > $tmp283) goto $l300; else goto $l287;
    $l302:;
    int64_t $tmp307 = i279.value - $tmp282;
    if ($tmp284) goto $l308; else goto $l309;
    $l308:;
    if ($tmp307 >= -$tmp283) goto $l300; else goto $l287;
    $l309:;
    if ($tmp307 > -$tmp283) goto $l300; else goto $l287;
    $l300:;
    i279.value += $tmp283;
    goto $l285;
    $l287:;
    panda$core$MutableString$append$panda$core$String(result259, &$s311);
    panda$core$String* $tmp312 = panda$core$MutableString$convert$R$panda$core$String(result259);
    return $tmp312;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp313.value);
    panda$core$Object* $tmp315 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp316 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp315));
    panda$core$String* $tmp317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s314, $tmp316);
    panda$core$String* $tmp319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp317, &$s318);
    return $tmp319;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces320;
    panda$core$String* previous323;
    panda$collections$Iterator* intfType$Iter325;
    org$pandalanguage$pandac$Type* intfType337;
    org$pandalanguage$pandac$ClassDecl* intf342;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC344;
    panda$collections$ListView* methods346;
    panda$core$String* name348;
    panda$core$MutableString* result358;
    panda$core$String* separator387;
    panda$collections$Iterator* m$Iter389;
    org$pandalanguage$pandac$MethodDecl* m401;
    org$pandalanguage$pandac$Type* $tmp321 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp322 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp321);
    interfaces320 = $tmp322;
    previous323 = &$s324;
    {
        ITable* $tmp326 = ((panda$collections$Iterable*) interfaces320)->$class->itable;
        while ($tmp326->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp326 = $tmp326->next;
        }
        $fn328 $tmp327 = $tmp326->methods[0];
        panda$collections$Iterator* $tmp329 = $tmp327(((panda$collections$Iterable*) interfaces320));
        intfType$Iter325 = $tmp329;
        $l330:;
        ITable* $tmp332 = intfType$Iter325->$class->itable;
        while ($tmp332->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp332 = $tmp332->next;
        }
        $fn334 $tmp333 = $tmp332->methods[0];
        panda$core$Bit $tmp335 = $tmp333(intfType$Iter325);
        panda$core$Bit $tmp336 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp335);
        if (!$tmp336.value) goto $l331;
        {
            ITable* $tmp338 = intfType$Iter325->$class->itable;
            while ($tmp338->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp338 = $tmp338->next;
            }
            $fn340 $tmp339 = $tmp338->methods[1];
            panda$core$Object* $tmp341 = $tmp339(intfType$Iter325);
            intfType337 = ((org$pandalanguage$pandac$Type*) $tmp341);
            org$pandalanguage$pandac$ClassDecl* $tmp343 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType337);
            intf342 = $tmp343;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp345 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf342);
            intfCC344 = $tmp345;
            panda$collections$ListView* $tmp347 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType337);
            methods346 = $tmp347;
            panda$core$String* $tmp350 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s349, $tmp350);
            panda$core$String* $tmp353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp351, &$s352);
            panda$core$String* $tmp354 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf342)->name);
            panda$core$String* $tmp355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp353, $tmp354);
            panda$core$String* $tmp357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp355, &$s356);
            name348 = $tmp357;
            panda$core$MutableString* $tmp359 = (panda$core$MutableString*) malloc(40);
            $tmp359->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp359->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp362 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp363 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp362);
            panda$core$String* $tmp364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s361, $tmp363);
            panda$core$String* $tmp366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp364, &$s365);
            ITable* $tmp368 = ((panda$collections$CollectionView*) methods346)->$class->itable;
            while ($tmp368->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp368 = $tmp368->next;
            }
            $fn370 $tmp369 = $tmp368->methods[0];
            panda$core$Int64 $tmp371 = $tmp369(((panda$collections$CollectionView*) methods346));
            panda$core$String* $tmp372 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s367, ((panda$core$Object*) wrap_panda$core$Int64($tmp371)));
            panda$core$String* $tmp374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp372, &$s373);
            panda$core$String* $tmp375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp374, name348);
            panda$core$String* $tmp377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp375, &$s376);
            panda$core$String* $tmp378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp366, $tmp377);
            panda$core$String* $tmp380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s379, intfCC344->name);
            panda$core$String* $tmp382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp380, &$s381);
            panda$core$String* $tmp383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp382, previous323);
            panda$core$String* $tmp385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp383, &$s384);
            panda$core$String* $tmp386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp378, $tmp385);
            panda$core$MutableString$init$panda$core$String($tmp359, $tmp386);
            result358 = $tmp359;
            separator387 = &$s388;
            {
                ITable* $tmp390 = ((panda$collections$Iterable*) methods346)->$class->itable;
                while ($tmp390->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp390 = $tmp390->next;
                }
                $fn392 $tmp391 = $tmp390->methods[0];
                panda$collections$Iterator* $tmp393 = $tmp391(((panda$collections$Iterable*) methods346));
                m$Iter389 = $tmp393;
                $l394:;
                ITable* $tmp396 = m$Iter389->$class->itable;
                while ($tmp396->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp396 = $tmp396->next;
                }
                $fn398 $tmp397 = $tmp396->methods[0];
                panda$core$Bit $tmp399 = $tmp397(m$Iter389);
                panda$core$Bit $tmp400 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp399);
                if (!$tmp400.value) goto $l395;
                {
                    ITable* $tmp402 = m$Iter389->$class->itable;
                    while ($tmp402->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp402 = $tmp402->next;
                    }
                    $fn404 $tmp403 = $tmp402->methods[1];
                    panda$core$Object* $tmp405 = $tmp403(m$Iter389);
                    m401 = ((org$pandalanguage$pandac$MethodDecl*) $tmp405);
                    panda$core$MutableString$append$panda$core$String(result358, separator387);
                    separator387 = &$s406;
                    panda$core$Bit $tmp407 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m401->annotations);
                    if ($tmp407.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result358, &$s408);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp409 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m401);
                        panda$core$MutableString$append$panda$core$String(result358, $tmp409);
                    }
                    }
                }
                goto $l394;
                $l395:;
            }
            panda$core$MutableString$append$panda$core$String(result358, &$s410);
            (($fn411) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result358));
            panda$core$String* $tmp413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s412, name348);
            panda$core$String* $tmp415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp413, &$s414);
            previous323 = $tmp415;
        }
        goto $l330;
        $l331:;
    }
    return previous323;
}
org$pandalanguage$pandac$CCodeGenerator$MethodShim* org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer416;
    panda$io$IndentedOutputStream* out419;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* found422;
    org$pandalanguage$pandac$Type* effectiveReturnType430;
    panda$core$String* resultName434;
    panda$core$MutableString* resultType438;
    panda$core$String* self_t450;
    panda$core$Range$LTpanda$core$Int64$GT $tmp458;
    panda$core$String* pType478;
    panda$collections$Array* casts505;
    panda$core$Range$LTpanda$core$Int64$GT $tmp508;
    panda$core$String* p528;
    panda$core$Range$LTpanda$core$Int64$GT $tmp564;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* result615;
    panda$io$MemoryOutputStream* $tmp417 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp417->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp417->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp417);
    outBuffer416 = $tmp417;
    panda$io$IndentedOutputStream* $tmp420 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp420->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp420->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp420, ((panda$io$OutputStream*) outBuffer416));
    out419 = $tmp420;
    panda$core$Object* $tmp423 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    found422 = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp423);
    if (((panda$core$Bit) { found422 != NULL }).value) {
    {
        return found422;
    }
    }
    panda$core$Bit $tmp424 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_effective);
    PANDA_ASSERT($tmp424.value);
    panda$core$Int64 $tmp425 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp426 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Int64 $tmp427 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp426, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp425, $tmp427);
    PANDA_ASSERT($tmp428.value);
    panda$core$Bit $tmp429 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_raw);
    PANDA_ASSERT($tmp429.value);
    panda$core$Int64 $tmp431 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp432 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp431, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp433 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_effective->subtypes, $tmp432);
    effectiveReturnType430 = ((org$pandalanguage$pandac$Type*) $tmp433);
    panda$core$String* $tmp435 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp435, &$s436);
    resultName434 = $tmp437;
    panda$core$MutableString* $tmp439 = (panda$core$MutableString*) malloc(40);
    $tmp439->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp439->refCount.value = 1;
    panda$core$String* $tmp441 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType430);
    panda$core$MutableString$init$panda$core$String($tmp439, $tmp441);
    resultType438 = $tmp439;
    panda$core$String* $tmp443 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s442, ((panda$core$Object*) resultType438));
    panda$core$String* $tmp445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp443, &$s444);
    panda$core$String* $tmp446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp445, resultName434);
    panda$core$String* $tmp448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp446, &$s447);
    (($fn449) ((panda$io$OutputStream*) out419)->$class->vtable[16])(((panda$io$OutputStream*) out419), $tmp448);
    panda$core$String* $tmp451 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t450 = $tmp451;
    panda$core$String* $tmp453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s452, self_t450);
    panda$core$String* $tmp455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp453, &$s454);
    (($fn456) ((panda$io$OutputStream*) out419)->$class->vtable[16])(((panda$io$OutputStream*) out419), $tmp455);
    panda$core$MutableString$append$panda$core$String(resultType438, &$s457);
    panda$core$MutableString$append$panda$core$String(resultType438, self_t450);
    panda$core$Int64 $tmp459 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp458, ((panda$core$Int64) { 0 }), $tmp459, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp461 = $tmp458.start.value;
    panda$core$Int64 i460 = { $tmp461 };
    int64_t $tmp463 = $tmp458.end.value;
    int64_t $tmp464 = $tmp458.step.value;
    bool $tmp465 = $tmp458.inclusive.value;
    bool $tmp472 = $tmp464 > 0;
    if ($tmp472) goto $l470; else goto $l471;
    $l470:;
    if ($tmp465) goto $l473; else goto $l474;
    $l473:;
    if ($tmp461 <= $tmp463) goto $l466; else goto $l468;
    $l474:;
    if ($tmp461 < $tmp463) goto $l466; else goto $l468;
    $l471:;
    if ($tmp465) goto $l475; else goto $l476;
    $l475:;
    if ($tmp461 >= $tmp463) goto $l466; else goto $l468;
    $l476:;
    if ($tmp461 > $tmp463) goto $l466; else goto $l468;
    $l466:;
    {
        panda$core$Object* $tmp479 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_effective->subtypes, i460);
        panda$core$String* $tmp480 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp479));
        pType478 = $tmp480;
        panda$core$MutableString$append$panda$core$String(resultType438, &$s481);
        panda$core$MutableString$append$panda$core$String(resultType438, pType478);
        panda$core$String* $tmp483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s482, pType478);
        panda$core$String* $tmp485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp483, &$s484);
        panda$core$String* $tmp486 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp485, ((panda$core$Object*) wrap_panda$core$Int64(i460)));
        panda$core$String* $tmp488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp486, &$s487);
        (($fn489) ((panda$io$OutputStream*) out419)->$class->vtable[16])(((panda$io$OutputStream*) out419), $tmp488);
    }
    $l469:;
    if ($tmp472) goto $l491; else goto $l492;
    $l491:;
    int64_t $tmp493 = $tmp463 - i460.value;
    if ($tmp465) goto $l494; else goto $l495;
    $l494:;
    if ($tmp493 >= $tmp464) goto $l490; else goto $l468;
    $l495:;
    if ($tmp493 > $tmp464) goto $l490; else goto $l468;
    $l492:;
    int64_t $tmp497 = i460.value - $tmp463;
    if ($tmp465) goto $l498; else goto $l499;
    $l498:;
    if ($tmp497 >= -$tmp464) goto $l490; else goto $l468;
    $l499:;
    if ($tmp497 > -$tmp464) goto $l490; else goto $l468;
    $l490:;
    i460.value += $tmp464;
    goto $l466;
    $l468:;
    (($fn502) ((panda$io$OutputStream*) out419)->$class->vtable[19])(((panda$io$OutputStream*) out419), &$s501);
    panda$core$Int64 $tmp503 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(out419->level, ((panda$core$Int64) { 1 }));
    out419->level = $tmp503;
    panda$core$MutableString$append$panda$core$String(resultType438, &$s504);
    panda$collections$Array* $tmp506 = (panda$collections$Array*) malloc(40);
    $tmp506->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp506->refCount.value = 1;
    panda$collections$Array$init($tmp506);
    casts505 = $tmp506;
    panda$core$Int64 $tmp509 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp508, ((panda$core$Int64) { 0 }), $tmp509, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp511 = $tmp508.start.value;
    panda$core$Int64 i510 = { $tmp511 };
    int64_t $tmp513 = $tmp508.end.value;
    int64_t $tmp514 = $tmp508.step.value;
    bool $tmp515 = $tmp508.inclusive.value;
    bool $tmp522 = $tmp514 > 0;
    if ($tmp522) goto $l520; else goto $l521;
    $l520:;
    if ($tmp515) goto $l523; else goto $l524;
    $l523:;
    if ($tmp511 <= $tmp513) goto $l516; else goto $l518;
    $l524:;
    if ($tmp511 < $tmp513) goto $l516; else goto $l518;
    $l521:;
    if ($tmp515) goto $l525; else goto $l526;
    $l525:;
    if ($tmp511 >= $tmp513) goto $l516; else goto $l518;
    $l526:;
    if ($tmp511 > $tmp513) goto $l516; else goto $l518;
    $l516:;
    {
        panda$core$String* $tmp530 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s529, ((panda$core$Object*) wrap_panda$core$Int64(i510)));
        panda$core$String* $tmp532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp530, &$s531);
        p528 = $tmp532;
        panda$core$Object* $tmp533 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i510);
        panda$core$Object* $tmp534 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_effective->subtypes, i510);
        panda$core$Bit $tmp535 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp533)->type, ((org$pandalanguage$pandac$Type*) $tmp534));
        if ($tmp535.value) {
        {
            panda$core$Object* $tmp536 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_effective->subtypes, i510);
            panda$core$Object* $tmp537 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i510);
            panda$core$String* $tmp538 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p528, ((org$pandalanguage$pandac$Type*) $tmp536), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp537)->type, out419);
            panda$collections$Array$add$panda$collections$Array$T(casts505, ((panda$core$Object*) $tmp538));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts505, ((panda$core$Object*) p528));
        }
        }
    }
    $l519:;
    if ($tmp522) goto $l540; else goto $l541;
    $l540:;
    int64_t $tmp542 = $tmp513 - i510.value;
    if ($tmp515) goto $l543; else goto $l544;
    $l543:;
    if ($tmp542 >= $tmp514) goto $l539; else goto $l518;
    $l544:;
    if ($tmp542 > $tmp514) goto $l539; else goto $l518;
    $l541:;
    int64_t $tmp546 = i510.value - $tmp513;
    if ($tmp515) goto $l547; else goto $l548;
    $l547:;
    if ($tmp546 >= -$tmp514) goto $l539; else goto $l518;
    $l548:;
    if ($tmp546 > -$tmp514) goto $l539; else goto $l518;
    $l539:;
    i510.value += $tmp514;
    goto $l516;
    $l518:;
    org$pandalanguage$pandac$Type* $tmp550 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp551 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp550);
    if ($tmp551.value) {
    {
        panda$core$String* $tmp553 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
        panda$core$String* $tmp554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s552, $tmp553);
        panda$core$String* $tmp556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp554, &$s555);
        (($fn557) ((panda$io$OutputStream*) out419)->$class->vtable[16])(((panda$io$OutputStream*) out419), $tmp556);
    }
    }
    panda$core$String* $tmp559 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s558, $tmp559);
    panda$core$String* $tmp562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp560, &$s561);
    (($fn563) ((panda$io$OutputStream*) out419)->$class->vtable[16])(((panda$io$OutputStream*) out419), $tmp562);
    panda$core$Int64 $tmp565 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp564, ((panda$core$Int64) { 0 }), $tmp565, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp567 = $tmp564.start.value;
    panda$core$Int64 i566 = { $tmp567 };
    int64_t $tmp569 = $tmp564.end.value;
    int64_t $tmp570 = $tmp564.step.value;
    bool $tmp571 = $tmp564.inclusive.value;
    bool $tmp578 = $tmp570 > 0;
    if ($tmp578) goto $l576; else goto $l577;
    $l576:;
    if ($tmp571) goto $l579; else goto $l580;
    $l579:;
    if ($tmp567 <= $tmp569) goto $l572; else goto $l574;
    $l580:;
    if ($tmp567 < $tmp569) goto $l572; else goto $l574;
    $l577:;
    if ($tmp571) goto $l581; else goto $l582;
    $l581:;
    if ($tmp567 >= $tmp569) goto $l572; else goto $l574;
    $l582:;
    if ($tmp567 > $tmp569) goto $l572; else goto $l574;
    $l572:;
    {
        panda$core$Object* $tmp585 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts505, i566);
        panda$core$String* $tmp586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s584, ((panda$core$String*) $tmp585));
        panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp586, &$s587);
        (($fn589) ((panda$io$OutputStream*) out419)->$class->vtable[16])(((panda$io$OutputStream*) out419), $tmp588);
    }
    $l575:;
    if ($tmp578) goto $l591; else goto $l592;
    $l591:;
    int64_t $tmp593 = $tmp569 - i566.value;
    if ($tmp571) goto $l594; else goto $l595;
    $l594:;
    if ($tmp593 >= $tmp570) goto $l590; else goto $l574;
    $l595:;
    if ($tmp593 > $tmp570) goto $l590; else goto $l574;
    $l592:;
    int64_t $tmp597 = i566.value - $tmp569;
    if ($tmp571) goto $l598; else goto $l599;
    $l598:;
    if ($tmp597 >= -$tmp570) goto $l590; else goto $l574;
    $l599:;
    if ($tmp597 > -$tmp570) goto $l590; else goto $l574;
    $l590:;
    i566.value += $tmp570;
    goto $l572;
    $l574:;
    (($fn602) ((panda$io$OutputStream*) out419)->$class->vtable[19])(((panda$io$OutputStream*) out419), &$s601);
    org$pandalanguage$pandac$Type* $tmp603 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp604 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp603);
    if ($tmp604.value) {
    {
        panda$core$String* $tmp607 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, &$s606, p_raw->returnType, effectiveReturnType430, out419);
        panda$core$String* $tmp608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s605, $tmp607);
        panda$core$String* $tmp610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp608, &$s609);
        (($fn611) ((panda$io$OutputStream*) out419)->$class->vtable[19])(((panda$io$OutputStream*) out419), $tmp610);
    }
    }
    panda$core$Int64 $tmp612 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(out419->level, ((panda$core$Int64) { 1 }));
    out419->level = $tmp612;
    (($fn614) ((panda$io$OutputStream*) out419)->$class->vtable[19])(((panda$io$OutputStream*) out419), &$s613);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp616 = (org$pandalanguage$pandac$CCodeGenerator$MethodShim*) malloc(32);
    $tmp616->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$MethodShim$class;
    $tmp616->refCount.value = 1;
    panda$core$String* $tmp618 = panda$core$MutableString$convert$R$panda$core$String(resultType438);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp616, resultName434, $tmp618);
    result615 = $tmp616;
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result615));
    (($fn619) p_rawOut->$class->vtable[15])(p_rawOut, ((panda$core$Object*) outBuffer416));
    return result615;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* oldMethod621;
    panda$core$String* result622;
    panda$core$String* selfType628;
    org$pandalanguage$pandac$Type* actualMethodType646;
    org$pandalanguage$pandac$Type* inheritedMethodType648;
    panda$core$Range$LTpanda$core$Int64$GT $tmp650;
    panda$collections$Array* parameters695;
    panda$core$Range$LTpanda$core$Int64$GT $tmp698;
    panda$collections$Array* children733;
    org$pandalanguage$pandac$Position $tmp738;
    panda$core$Range$LTpanda$core$Int64$GT $tmp750;
    panda$core$Bit $tmp620 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp620.value);
    oldMethod621 = self->currentMethod;
    self->currentMethod = p_m;
    panda$core$String* $tmp624 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s623, $tmp624);
    panda$core$String* $tmp627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp625, &$s626);
    result622 = $tmp627;
    panda$core$String* $tmp630 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s629, $tmp630);
    panda$core$String* $tmp633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp631, &$s632);
    selfType628 = $tmp633;
    panda$core$String* $tmp635 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s634, $tmp635);
    panda$core$String* $tmp638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp636, &$s637);
    panda$core$String* $tmp639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp638, result622);
    panda$core$String* $tmp641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp639, &$s640);
    panda$core$String* $tmp642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp641, selfType628);
    panda$core$String* $tmp644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp642, &$s643);
    (($fn645) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp644);
    org$pandalanguage$pandac$Type* $tmp647 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    actualMethodType646 = $tmp647;
    org$pandalanguage$pandac$Type* $tmp649 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedMethodType648 = $tmp649;
    panda$core$Int64 $tmp651 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp650, ((panda$core$Int64) { 0 }), $tmp651, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp653 = $tmp650.start.value;
    panda$core$Int64 i652 = { $tmp653 };
    int64_t $tmp655 = $tmp650.end.value;
    int64_t $tmp656 = $tmp650.step.value;
    bool $tmp657 = $tmp650.inclusive.value;
    bool $tmp664 = $tmp656 > 0;
    if ($tmp664) goto $l662; else goto $l663;
    $l662:;
    if ($tmp657) goto $l665; else goto $l666;
    $l665:;
    if ($tmp653 <= $tmp655) goto $l658; else goto $l660;
    $l666:;
    if ($tmp653 < $tmp655) goto $l658; else goto $l660;
    $l663:;
    if ($tmp657) goto $l667; else goto $l668;
    $l667:;
    if ($tmp653 >= $tmp655) goto $l658; else goto $l660;
    $l668:;
    if ($tmp653 > $tmp655) goto $l658; else goto $l660;
    $l658:;
    {
        panda$core$Object* $tmp671 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inheritedMethodType648->subtypes, i652);
        panda$core$String* $tmp672 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp671));
        panda$core$String* $tmp673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s670, $tmp672);
        panda$core$String* $tmp675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp673, &$s674);
        panda$core$Object* $tmp676 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i652);
        panda$core$String* $tmp677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp675, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp676)->name);
        panda$core$String* $tmp679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp677, &$s678);
        (($fn680) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp679);
    }
    $l661:;
    if ($tmp664) goto $l682; else goto $l683;
    $l682:;
    int64_t $tmp684 = $tmp655 - i652.value;
    if ($tmp657) goto $l685; else goto $l686;
    $l685:;
    if ($tmp684 >= $tmp656) goto $l681; else goto $l660;
    $l686:;
    if ($tmp684 > $tmp656) goto $l681; else goto $l660;
    $l683:;
    int64_t $tmp688 = i652.value - $tmp655;
    if ($tmp657) goto $l689; else goto $l690;
    $l689:;
    if ($tmp688 >= -$tmp656) goto $l681; else goto $l660;
    $l690:;
    if ($tmp688 > -$tmp656) goto $l681; else goto $l660;
    $l681:;
    i652.value += $tmp656;
    goto $l658;
    $l660:;
    (($fn693) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s692);
    panda$core$Int64 $tmp694 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp694;
    panda$collections$Array* $tmp696 = (panda$collections$Array*) malloc(40);
    $tmp696->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp696->refCount.value = 1;
    panda$collections$Array$init($tmp696);
    parameters695 = $tmp696;
    panda$core$Int64 $tmp699 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp698, ((panda$core$Int64) { 0 }), $tmp699, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp701 = $tmp698.start.value;
    panda$core$Int64 i700 = { $tmp701 };
    int64_t $tmp703 = $tmp698.end.value;
    int64_t $tmp704 = $tmp698.step.value;
    bool $tmp705 = $tmp698.inclusive.value;
    bool $tmp712 = $tmp704 > 0;
    if ($tmp712) goto $l710; else goto $l711;
    $l710:;
    if ($tmp705) goto $l713; else goto $l714;
    $l713:;
    if ($tmp701 <= $tmp703) goto $l706; else goto $l708;
    $l714:;
    if ($tmp701 < $tmp703) goto $l706; else goto $l708;
    $l711:;
    if ($tmp705) goto $l715; else goto $l716;
    $l715:;
    if ($tmp701 >= $tmp703) goto $l706; else goto $l708;
    $l716:;
    if ($tmp701 > $tmp703) goto $l706; else goto $l708;
    $l706:;
    {
        panda$core$Object* $tmp718 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i700);
        panda$core$Object* $tmp719 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inheritedMethodType648->subtypes, i700);
        panda$core$Object* $tmp720 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType646->subtypes, i700);
        panda$core$String* $tmp721 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp718)->name, ((org$pandalanguage$pandac$Type*) $tmp719), ((org$pandalanguage$pandac$Type*) $tmp720), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters695, ((panda$core$Object*) $tmp721));
    }
    $l709:;
    if ($tmp712) goto $l723; else goto $l724;
    $l723:;
    int64_t $tmp725 = $tmp703 - i700.value;
    if ($tmp705) goto $l726; else goto $l727;
    $l726:;
    if ($tmp725 >= $tmp704) goto $l722; else goto $l708;
    $l727:;
    if ($tmp725 > $tmp704) goto $l722; else goto $l708;
    $l724:;
    int64_t $tmp729 = i700.value - $tmp703;
    if ($tmp705) goto $l730; else goto $l731;
    $l730:;
    if ($tmp729 >= -$tmp704) goto $l722; else goto $l708;
    $l731:;
    if ($tmp729 > -$tmp704) goto $l722; else goto $l708;
    $l722:;
    i700.value += $tmp704;
    goto $l706;
    $l708:;
    panda$collections$Array* $tmp734 = (panda$collections$Array*) malloc(40);
    $tmp734->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp734->refCount.value = 1;
    panda$collections$Array$init($tmp734);
    children733 = $tmp734;
    org$pandalanguage$pandac$IRNode* $tmp736 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp736->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp736->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp738);
    org$pandalanguage$pandac$Type* $tmp739 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp736, ((panda$core$Int64) { 1025 }), $tmp738, $tmp739);
    panda$collections$Array$add$panda$collections$Array$T(children733, ((panda$core$Object*) $tmp736));
    org$pandalanguage$pandac$Type* $tmp740 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp741 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp740);
    if ($tmp741.value) {
    {
        (($fn743) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s742);
    }
    }
    panda$core$String* $tmp745 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s744, $tmp745);
    panda$core$String* $tmp748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp746, &$s747);
    (($fn749) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp748);
    panda$core$Int64 $tmp751 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp750, ((panda$core$Int64) { 0 }), $tmp751, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp753 = $tmp750.start.value;
    panda$core$Int64 i752 = { $tmp753 };
    int64_t $tmp755 = $tmp750.end.value;
    int64_t $tmp756 = $tmp750.step.value;
    bool $tmp757 = $tmp750.inclusive.value;
    bool $tmp764 = $tmp756 > 0;
    if ($tmp764) goto $l762; else goto $l763;
    $l762:;
    if ($tmp757) goto $l765; else goto $l766;
    $l765:;
    if ($tmp753 <= $tmp755) goto $l758; else goto $l760;
    $l766:;
    if ($tmp753 < $tmp755) goto $l758; else goto $l760;
    $l763:;
    if ($tmp757) goto $l767; else goto $l768;
    $l767:;
    if ($tmp753 >= $tmp755) goto $l758; else goto $l760;
    $l768:;
    if ($tmp753 > $tmp755) goto $l758; else goto $l760;
    $l758:;
    {
        panda$core$Object* $tmp771 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters695, i752);
        panda$core$String* $tmp772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s770, ((panda$core$String*) $tmp771));
        panda$core$String* $tmp774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp772, &$s773);
        (($fn775) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp774);
    }
    $l761:;
    if ($tmp764) goto $l777; else goto $l778;
    $l777:;
    int64_t $tmp779 = $tmp755 - i752.value;
    if ($tmp757) goto $l780; else goto $l781;
    $l780:;
    if ($tmp779 >= $tmp756) goto $l776; else goto $l760;
    $l781:;
    if ($tmp779 > $tmp756) goto $l776; else goto $l760;
    $l778:;
    int64_t $tmp783 = i752.value - $tmp755;
    if ($tmp757) goto $l784; else goto $l785;
    $l784:;
    if ($tmp783 >= -$tmp756) goto $l776; else goto $l760;
    $l785:;
    if ($tmp783 > -$tmp756) goto $l776; else goto $l760;
    $l776:;
    i752.value += $tmp756;
    goto $l758;
    $l760:;
    (($fn788) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s787);
    panda$core$Int64 $tmp789 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp789;
    (($fn791) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s790);
    self->currentMethod = oldMethod621;
    return result622;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces792;
    panda$core$String* previous795;
    panda$collections$Iterator* intfType$Iter797;
    org$pandalanguage$pandac$Type* intfType809;
    org$pandalanguage$pandac$ClassDecl* intf814;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC816;
    panda$collections$ListView* methods818;
    panda$core$String* name820;
    panda$core$MutableString* result830;
    panda$core$String* separator864;
    panda$collections$Iterator* m$Iter866;
    org$pandalanguage$pandac$MethodDecl* m878;
    org$pandalanguage$pandac$Type* $tmp793 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp794 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp793);
    interfaces792 = $tmp794;
    previous795 = &$s796;
    {
        ITable* $tmp798 = ((panda$collections$Iterable*) interfaces792)->$class->itable;
        while ($tmp798->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp798 = $tmp798->next;
        }
        $fn800 $tmp799 = $tmp798->methods[0];
        panda$collections$Iterator* $tmp801 = $tmp799(((panda$collections$Iterable*) interfaces792));
        intfType$Iter797 = $tmp801;
        $l802:;
        ITable* $tmp804 = intfType$Iter797->$class->itable;
        while ($tmp804->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp804 = $tmp804->next;
        }
        $fn806 $tmp805 = $tmp804->methods[0];
        panda$core$Bit $tmp807 = $tmp805(intfType$Iter797);
        panda$core$Bit $tmp808 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp807);
        if (!$tmp808.value) goto $l803;
        {
            ITable* $tmp810 = intfType$Iter797->$class->itable;
            while ($tmp810->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp810 = $tmp810->next;
            }
            $fn812 $tmp811 = $tmp810->methods[1];
            panda$core$Object* $tmp813 = $tmp811(intfType$Iter797);
            intfType809 = ((org$pandalanguage$pandac$Type*) $tmp813);
            org$pandalanguage$pandac$ClassDecl* $tmp815 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType809);
            intf814 = $tmp815;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp817 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf814);
            intfCC816 = $tmp817;
            panda$collections$ListView* $tmp819 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType809);
            methods818 = $tmp819;
            panda$core$String* $tmp822 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s821, $tmp822);
            panda$core$String* $tmp825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp823, &$s824);
            panda$core$String* $tmp826 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf814)->name);
            panda$core$String* $tmp827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp825, $tmp826);
            panda$core$String* $tmp829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp827, &$s828);
            name820 = $tmp829;
            panda$core$MutableString* $tmp831 = (panda$core$MutableString*) malloc(40);
            $tmp831->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp831->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp834 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp835 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp834);
            panda$core$String* $tmp836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s833, $tmp835);
            panda$core$String* $tmp838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp836, &$s837);
            ITable* $tmp840 = ((panda$collections$CollectionView*) methods818)->$class->itable;
            while ($tmp840->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp840 = $tmp840->next;
            }
            $fn842 $tmp841 = $tmp840->methods[0];
            panda$core$Int64 $tmp843 = $tmp841(((panda$collections$CollectionView*) methods818));
            panda$core$String* $tmp844 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s839, ((panda$core$Object*) wrap_panda$core$Int64($tmp843)));
            panda$core$String* $tmp846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp844, &$s845);
            panda$core$String* $tmp847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp846, name820);
            panda$core$String* $tmp849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp847, &$s848);
            panda$core$String* $tmp850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp838, $tmp849);
            org$pandalanguage$pandac$Type* $tmp852 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp853 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp852);
            panda$core$String* $tmp854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s851, $tmp853);
            panda$core$String* $tmp856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp854, &$s855);
            panda$core$String* $tmp857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp856, intfCC816->name);
            panda$core$String* $tmp859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp857, &$s858);
            panda$core$String* $tmp860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp859, previous795);
            panda$core$String* $tmp862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp860, &$s861);
            panda$core$String* $tmp863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp850, $tmp862);
            panda$core$MutableString$init$panda$core$String($tmp831, $tmp863);
            result830 = $tmp831;
            separator864 = &$s865;
            {
                ITable* $tmp867 = ((panda$collections$Iterable*) methods818)->$class->itable;
                while ($tmp867->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp867 = $tmp867->next;
                }
                $fn869 $tmp868 = $tmp867->methods[0];
                panda$collections$Iterator* $tmp870 = $tmp868(((panda$collections$Iterable*) methods818));
                m$Iter866 = $tmp870;
                $l871:;
                ITable* $tmp873 = m$Iter866->$class->itable;
                while ($tmp873->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp873 = $tmp873->next;
                }
                $fn875 $tmp874 = $tmp873->methods[0];
                panda$core$Bit $tmp876 = $tmp874(m$Iter866);
                panda$core$Bit $tmp877 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp876);
                if (!$tmp877.value) goto $l872;
                {
                    ITable* $tmp879 = m$Iter866->$class->itable;
                    while ($tmp879->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp879 = $tmp879->next;
                    }
                    $fn881 $tmp880 = $tmp879->methods[1];
                    panda$core$Object* $tmp882 = $tmp880(m$Iter866);
                    m878 = ((org$pandalanguage$pandac$MethodDecl*) $tmp882);
                    panda$core$MutableString$append$panda$core$String(result830, separator864);
                    separator864 = &$s883;
                    panda$core$Bit $tmp884 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m878->annotations);
                    if ($tmp884.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result830, &$s885);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp886 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m878, self->wrapperShims);
                        panda$core$MutableString$append$panda$core$String(result830, $tmp886);
                    }
                    }
                }
                goto $l871;
                $l872:;
            }
            panda$core$MutableString$append$panda$core$String(result830, &$s887);
            (($fn888) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result830));
            panda$core$String* $tmp890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s889, name820);
            panda$core$String* $tmp892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp890, &$s891);
            previous795 = $tmp892;
        }
        goto $l802;
        $l803:;
    }
    return previous795;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $tmp893 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self->hCodeGen, p_m);
    return $tmp893;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result895;
    org$pandalanguage$pandac$Type* declared896;
    org$pandalanguage$pandac$Type* inherited899;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* shim902;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    panda$core$Bit $tmp894 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
    if ($tmp894.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp897 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp898 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp897);
    declared896 = $tmp898;
    org$pandalanguage$pandac$Type* $tmp900 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited899 = $tmp900;
    panda$core$Bit $tmp901 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared896, inherited899);
    if ($tmp901.value) {
    {
        org$pandalanguage$pandac$Type* $tmp903 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp904 = org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(self, p_m, $tmp903, ((panda$io$OutputStream*) self->shims));
        shim902 = $tmp904;
        result895 = shim902->name;
    }
    }
    else {
    {
        panda$core$String* $tmp905 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        result895 = $tmp905;
    }
    }
    return result895;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result906;
    panda$core$String* type908;
    panda$collections$ListView* vtable920;
    panda$core$String* superPtr931;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC932;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant940;
    panda$core$MutableString* code944;
    panda$core$String* separator966;
    panda$collections$Iterator* m$Iter968;
    org$pandalanguage$pandac$MethodDecl* m980;
    panda$core$Object* $tmp907 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result906 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp907);
    if (((panda$core$Bit) { result906 == NULL }).value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        panda$core$Bit $tmp909 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp909.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp910 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp910->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp910->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp913 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp914 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp913)->name);
            panda$core$String* $tmp915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s912, $tmp914);
            panda$core$String* $tmp917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp915, &$s916);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp910, $tmp917, &$s918);
            result906 = $tmp910;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result906));
            panda$core$Object* $tmp919 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
            return ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp919);
        }
        }
        panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) p_cl));
        panda$collections$ListView* $tmp921 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable920 = $tmp921;
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp922 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
        $tmp922->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
        $tmp922->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp925 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp926 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp925)->name);
        panda$core$String* $tmp927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s924, $tmp926);
        panda$core$String* $tmp929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp927, &$s928);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp922, $tmp929, &$s930);
        result906 = $tmp922;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result906));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp933 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp934 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp933);
            superCC932 = $tmp934;
            panda$core$String* $tmp936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s935, superCC932->name);
            panda$core$String* $tmp938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp936, &$s937);
            superPtr931 = $tmp938;
        }
        }
        else {
        {
            superPtr931 = &$s939;
        }
        }
        org$pandalanguage$pandac$Type* $tmp941 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp942 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp941);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp943 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp942);
        clConstant940 = $tmp943;
        panda$core$MutableString* $tmp945 = (panda$core$MutableString*) malloc(40);
        $tmp945->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp945->refCount.value = 1;
        panda$core$String* $tmp948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s947, result906->name);
        panda$core$String* $tmp950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp948, &$s949);
        panda$core$String* $tmp951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp950, result906->name);
        panda$core$String* $tmp953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp951, &$s952);
        panda$core$String* $tmp955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s954, clConstant940->name);
        panda$core$String* $tmp957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp955, &$s956);
        panda$core$String* $tmp958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp957, superPtr931);
        panda$core$String* $tmp960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp958, &$s959);
        panda$core$String* $tmp961 = org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp960, $tmp961);
        panda$core$String* $tmp964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp962, &$s963);
        panda$core$String* $tmp965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp953, $tmp964);
        panda$core$MutableString$init$panda$core$String($tmp945, $tmp965);
        code944 = $tmp945;
        separator966 = &$s967;
        {
            ITable* $tmp969 = ((panda$collections$Iterable*) vtable920)->$class->itable;
            while ($tmp969->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp969 = $tmp969->next;
            }
            $fn971 $tmp970 = $tmp969->methods[0];
            panda$collections$Iterator* $tmp972 = $tmp970(((panda$collections$Iterable*) vtable920));
            m$Iter968 = $tmp972;
            $l973:;
            ITable* $tmp975 = m$Iter968->$class->itable;
            while ($tmp975->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp975 = $tmp975->next;
            }
            $fn977 $tmp976 = $tmp975->methods[0];
            panda$core$Bit $tmp978 = $tmp976(m$Iter968);
            panda$core$Bit $tmp979 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp978);
            if (!$tmp979.value) goto $l974;
            {
                ITable* $tmp981 = m$Iter968->$class->itable;
                while ($tmp981->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp981 = $tmp981->next;
                }
                $fn983 $tmp982 = $tmp981->methods[1];
                panda$core$Object* $tmp984 = $tmp982(m$Iter968);
                m980 = ((org$pandalanguage$pandac$MethodDecl*) $tmp984);
                panda$core$MutableString$append$panda$core$String(code944, separator966);
                panda$core$Bit $tmp985 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m980->annotations);
                if ($tmp985.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code944, &$s986);
                }
                }
                else {
                {
                    panda$core$String* $tmp987 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m980);
                    panda$core$MutableString$append$panda$core$String(code944, $tmp987);
                }
                }
                separator966 = &$s988;
            }
            goto $l973;
            $l974:;
        }
        panda$core$MutableString$append$panda$core$String(code944, &$s989);
        (($fn990) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code944));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    }
    }
    return result906;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name991;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result997;
    panda$core$String* type1001;
    org$pandalanguage$pandac$ClassDecl* value1013;
    panda$collections$ListView* valueVTable1016;
    panda$collections$ListView* vtable1026;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC1028;
    panda$core$String* superCast1031;
    panda$core$String* itable1036;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant1038;
    panda$core$MutableString* code1042;
    panda$core$String* separator1063;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1065;
    org$pandalanguage$pandac$MethodDecl* m1088;
    panda$core$String* methodName1093;
    panda$core$String* $tmp993 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s992, $tmp993);
    panda$core$String* $tmp996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp994, &$s995);
    name991 = $tmp996;
    panda$core$Object* $tmp998 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name991));
    result997 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp998);
    if (((panda$core$Bit) { result997 == NULL }).value) {
    {
        panda$core$Bit $tmp999 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp999.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1000 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1000);
            type1001 = &$s1002;
            panda$core$String* $tmp1004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1003, name991);
            panda$core$String* $tmp1006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1004, &$s1005);
            panda$core$String* $tmp1007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1006, type1001);
            panda$core$String* $tmp1009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1007, &$s1008);
            (($fn1010) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1009);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1011 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp1011->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp1011->refCount.value = 1;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1011, name991, type1001);
            result997 = $tmp1011;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp1014 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1015 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1014);
            value1013 = $tmp1015;
            panda$collections$ListView* $tmp1017 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value1013);
            valueVTable1016 = $tmp1017;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1018 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp1018->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp1018->refCount.value = 1;
            panda$core$String* $tmp1021 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1020, $tmp1021);
            panda$core$String* $tmp1024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1022, &$s1023);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1018, $tmp1024, &$s1025);
            result997 = $tmp1018;
            panda$collections$ListView* $tmp1027 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable1026 = $tmp1027;
            org$pandalanguage$pandac$ClassDecl* $tmp1029 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1030 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp1029);
            superCC1028 = $tmp1030;
            panda$core$String* $tmp1033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1032, superCC1028->name);
            panda$core$String* $tmp1035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1033, &$s1034);
            superCast1031 = $tmp1035;
            panda$core$String* $tmp1037 = org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable1036 = $tmp1037;
            org$pandalanguage$pandac$Type* $tmp1039 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1040 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1039);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1041 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp1040);
            clConstant1038 = $tmp1041;
            panda$core$MutableString* $tmp1043 = (panda$core$MutableString*) malloc(40);
            $tmp1043->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1043->refCount.value = 1;
            panda$core$String* $tmp1046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1045, result997->name);
            panda$core$String* $tmp1048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1046, &$s1047);
            panda$core$String* $tmp1049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1048, result997->name);
            panda$core$String* $tmp1051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1049, &$s1050);
            panda$core$String* $tmp1053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1052, clConstant1038->name);
            panda$core$String* $tmp1055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1053, &$s1054);
            panda$core$String* $tmp1056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1055, superCast1031);
            panda$core$String* $tmp1058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1056, &$s1057);
            panda$core$String* $tmp1059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1058, itable1036);
            panda$core$String* $tmp1061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1059, &$s1060);
            panda$core$String* $tmp1062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1051, $tmp1061);
            panda$core$MutableString$init$panda$core$String($tmp1043, $tmp1062);
            code1042 = $tmp1043;
            separator1063 = &$s1064;
            ITable* $tmp1066 = ((panda$collections$CollectionView*) valueVTable1016)->$class->itable;
            while ($tmp1066->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1066 = $tmp1066->next;
            }
            $fn1068 $tmp1067 = $tmp1066->methods[0];
            panda$core$Int64 $tmp1069 = $tmp1067(((panda$collections$CollectionView*) valueVTable1016));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1065, ((panda$core$Int64) { 0 }), $tmp1069, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1071 = $tmp1065.start.value;
            panda$core$Int64 i1070 = { $tmp1071 };
            int64_t $tmp1073 = $tmp1065.end.value;
            int64_t $tmp1074 = $tmp1065.step.value;
            bool $tmp1075 = $tmp1065.inclusive.value;
            bool $tmp1082 = $tmp1074 > 0;
            if ($tmp1082) goto $l1080; else goto $l1081;
            $l1080:;
            if ($tmp1075) goto $l1083; else goto $l1084;
            $l1083:;
            if ($tmp1071 <= $tmp1073) goto $l1076; else goto $l1078;
            $l1084:;
            if ($tmp1071 < $tmp1073) goto $l1076; else goto $l1078;
            $l1081:;
            if ($tmp1075) goto $l1085; else goto $l1086;
            $l1085:;
            if ($tmp1071 >= $tmp1073) goto $l1076; else goto $l1078;
            $l1086:;
            if ($tmp1071 > $tmp1073) goto $l1076; else goto $l1078;
            $l1076:;
            {
                ITable* $tmp1089 = vtable1026->$class->itable;
                while ($tmp1089->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1089 = $tmp1089->next;
                }
                $fn1091 $tmp1090 = $tmp1089->methods[0];
                panda$core$Object* $tmp1092 = $tmp1090(vtable1026, i1070);
                m1088 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1092);
                if (((panda$core$Bit) { ((panda$core$Object*) m1088->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp1094 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1088, self->wrapperShims);
                    methodName1093 = $tmp1094;
                }
                }
                else {
                {
                    panda$core$String* $tmp1095 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1088);
                    methodName1093 = $tmp1095;
                    panda$core$Bit $tmp1096 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1088->owner);
                    if ($tmp1096.value) {
                    {
                        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1088);
                    }
                    }
                }
                }
                panda$core$String* $tmp1098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1097, separator1063);
                panda$core$String* $tmp1100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1098, &$s1099);
                panda$core$String* $tmp1101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1100, methodName1093);
                panda$core$String* $tmp1103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1101, &$s1102);
                panda$core$MutableString$append$panda$core$String(code1042, $tmp1103);
                separator1063 = &$s1104;
            }
            $l1079:;
            if ($tmp1082) goto $l1106; else goto $l1107;
            $l1106:;
            int64_t $tmp1108 = $tmp1073 - i1070.value;
            if ($tmp1075) goto $l1109; else goto $l1110;
            $l1109:;
            if ($tmp1108 >= $tmp1074) goto $l1105; else goto $l1078;
            $l1110:;
            if ($tmp1108 > $tmp1074) goto $l1105; else goto $l1078;
            $l1107:;
            int64_t $tmp1112 = i1070.value - $tmp1073;
            if ($tmp1075) goto $l1113; else goto $l1114;
            $l1113:;
            if ($tmp1112 >= -$tmp1074) goto $l1105; else goto $l1078;
            $l1114:;
            if ($tmp1112 > -$tmp1074) goto $l1105; else goto $l1078;
            $l1105:;
            i1070.value += $tmp1074;
            goto $l1076;
            $l1078:;
            panda$core$MutableString$append$panda$core$String(code1042, &$s1116);
            (($fn1117) ((panda$io$OutputStream*) self->types)->$class->vtable[15])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code1042));
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name991), ((panda$core$Object*) result997));
    }
    }
    return result997;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$String* result1123;
    panda$core$Bit $tmp1118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1118.value) {
    {
        panda$core$String* $tmp1120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1119, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1120, &$s1121);
        return $tmp1122;
    }
    }
    panda$core$Object* $tmp1124 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1123 = ((panda$core$String*) $tmp1124);
    if (((panda$core$Bit) { result1123 == NULL }).value) {
    {
        panda$core$Int64 $tmp1125 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1125;
        panda$core$String* $tmp1127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1126, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1127, &$s1128);
        panda$core$String* $tmp1130 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1129, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        panda$core$String* $tmp1132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1130, &$s1131);
        result1123 = $tmp1132;
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1123));
    }
    }
    return result1123;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1133 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1133.value);
    panda$core$String* $tmp1135 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1134, $tmp1135);
    panda$core$String* $tmp1138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1136, &$s1137);
    panda$core$String* $tmp1139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1138, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1139, &$s1140);
    return $tmp1141;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    switch (p_t->typeKind.value) {
        case 12:
        {
            return ((panda$core$Int64) { 10121 });
        }
        break;
        case 13:
        case 19:
        {
            return ((panda$core$Int64) { 10122 });
        }
        break;
        case 20:
        {
            return ((panda$core$Int64) { 10123 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1142;
    panda$core$String* leftRef1144;
    panda$core$String* falseLabel1158;
    panda$core$String* rightRef1168;
    panda$core$String* $tmp1143 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1142 = $tmp1143;
    panda$core$String* $tmp1145 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1144 = $tmp1145;
    org$pandalanguage$pandac$Type* $tmp1146 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1147 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1146);
    if ($tmp1147.value) {
    {
        panda$core$String* $tmp1149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1144, &$s1148);
        leftRef1144 = $tmp1149;
    }
    }
    panda$core$String* $tmp1151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1150, result1142);
    panda$core$String* $tmp1153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1151, &$s1152);
    panda$core$String* $tmp1154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1153, leftRef1144);
    panda$core$String* $tmp1156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1154, &$s1155);
    (($fn1157) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1156);
    panda$core$String* $tmp1159 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel1158 = $tmp1159;
    panda$core$String* $tmp1161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1160, result1142);
    panda$core$String* $tmp1163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1161, &$s1162);
    panda$core$String* $tmp1164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1163, falseLabel1158);
    panda$core$String* $tmp1166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1164, &$s1165);
    (($fn1167) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1166);
    panda$core$String* $tmp1169 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1168 = $tmp1169;
    org$pandalanguage$pandac$Type* $tmp1170 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1171 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1170);
    if ($tmp1171.value) {
    {
        panda$core$String* $tmp1173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1168, &$s1172);
        rightRef1168 = $tmp1173;
    }
    }
    panda$core$String* $tmp1175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1174, result1142);
    panda$core$String* $tmp1177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1175, &$s1176);
    panda$core$String* $tmp1178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1177, rightRef1168);
    panda$core$String* $tmp1180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1178, &$s1179);
    (($fn1181) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1180);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel1158, p_out);
    return result1142;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1182;
    panda$core$String* leftRef1184;
    panda$core$String* trueLabel1198;
    panda$core$String* rightRef1208;
    panda$core$String* $tmp1183 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1182 = $tmp1183;
    panda$core$String* $tmp1185 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1184 = $tmp1185;
    org$pandalanguage$pandac$Type* $tmp1186 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1187 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1186);
    if ($tmp1187.value) {
    {
        panda$core$String* $tmp1189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1184, &$s1188);
        leftRef1184 = $tmp1189;
    }
    }
    panda$core$String* $tmp1191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1190, result1182);
    panda$core$String* $tmp1193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1191, &$s1192);
    panda$core$String* $tmp1194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1193, leftRef1184);
    panda$core$String* $tmp1196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1194, &$s1195);
    (($fn1197) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1196);
    panda$core$String* $tmp1199 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel1198 = $tmp1199;
    panda$core$String* $tmp1201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1200, result1182);
    panda$core$String* $tmp1203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1201, &$s1202);
    panda$core$String* $tmp1204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1203, trueLabel1198);
    panda$core$String* $tmp1206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1204, &$s1205);
    (($fn1207) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1206);
    panda$core$String* $tmp1209 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1208 = $tmp1209;
    org$pandalanguage$pandac$Type* $tmp1210 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1211 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1210);
    if ($tmp1211.value) {
    {
        panda$core$String* $tmp1213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1208, &$s1212);
        rightRef1208 = $tmp1213;
    }
    }
    panda$core$String* $tmp1215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1214, result1182);
    panda$core$String* $tmp1217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1215, &$s1216);
    panda$core$String* $tmp1218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1217, rightRef1208);
    panda$core$String* $tmp1220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1218, &$s1219);
    (($fn1221) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1220);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel1198, p_out);
    return result1182;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Int64 p_cl, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* cOp1222;
    panda$core$Bit logical1223;
    panda$core$String* result1241;
    logical1223 = ((panda$core$Bit) { false });
    switch (p_op.value) {
        case 51:
        {
            cOp1222 = &$s1224;
        }
        break;
        case 52:
        {
            cOp1222 = &$s1225;
        }
        break;
        case 53:
        {
            cOp1222 = &$s1226;
        }
        break;
        case 55:
        {
            cOp1222 = &$s1227;
        }
        break;
        case 54:
        {
            cOp1222 = &$s1228;
        }
        break;
        case 56:
        {
            cOp1222 = &$s1229;
        }
        break;
        case 72:
        {
            cOp1222 = &$s1230;
        }
        break;
        case 1:
        {
            cOp1222 = &$s1231;
        }
        break;
        case 67:
        {
            cOp1222 = &$s1232;
        }
        break;
        case 69:
        {
            cOp1222 = &$s1233;
        }
        break;
        case 70:
        case 71:
        {
            cOp1222 = &$s1234;
        }
        break;
        case 58:
        {
            cOp1222 = &$s1235;
            logical1223 = ((panda$core$Bit) { true });
        }
        break;
        case 59:
        {
            cOp1222 = &$s1236;
            logical1223 = ((panda$core$Bit) { true });
        }
        break;
        case 63:
        {
            cOp1222 = &$s1237;
            logical1223 = ((panda$core$Bit) { true });
        }
        break;
        case 62:
        {
            cOp1222 = &$s1238;
            logical1223 = ((panda$core$Bit) { true });
        }
        break;
        case 65:
        {
            cOp1222 = &$s1239;
            logical1223 = ((panda$core$Bit) { true });
        }
        break;
        case 64:
        {
            logical1223 = ((panda$core$Bit) { true });
            cOp1222 = &$s1240;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$String* $tmp1242 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1241 = $tmp1242;
    if (logical1223.value) {
    {
        (($fn1244) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s1243);
    }
    }
    else {
    {
        panda$core$String* $tmp1246 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp1247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1245, $tmp1246);
        panda$core$String* $tmp1249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1247, &$s1248);
        (($fn1250) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1249);
    }
    }
    panda$core$String* $tmp1252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1251, result1241);
    panda$core$String* $tmp1254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1252, &$s1253);
    panda$core$String* $tmp1255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1254, p_leftRef);
    panda$core$String* $tmp1257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1255, &$s1256);
    panda$core$String* $tmp1258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1257, cOp1222);
    panda$core$String* $tmp1260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1258, &$s1259);
    panda$core$String* $tmp1261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1260, p_rightRef);
    panda$core$String* $tmp1263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1261, &$s1262);
    (($fn1264) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1263);
    return result1241;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1265;
    panda$core$String* rightRef1267;
    panda$core$String* $tmp1266 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1265 = $tmp1266;
    panda$core$String* $tmp1268 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1267 = $tmp1268;
    panda$core$String* $tmp1270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1269, leftRef1265);
    panda$core$String* $tmp1272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1270, &$s1271);
    panda$core$String* $tmp1273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1272, rightRef1267);
    panda$core$String* $tmp1275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1273, &$s1274);
    return $tmp1275;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1276;
    panda$core$String* rightRef1278;
    panda$core$String* $tmp1277 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1276 = $tmp1277;
    panda$core$String* $tmp1279 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1278 = $tmp1279;
    panda$core$String* $tmp1281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1280, leftRef1276);
    panda$core$String* $tmp1283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1281, &$s1282);
    panda$core$String* $tmp1284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1283, rightRef1278);
    panda$core$String* $tmp1286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1284, &$s1285);
    return $tmp1286;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1292;
    panda$core$String* rightRef1294;
    panda$core$Bit $tmp1287 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, p_right->type);
    PANDA_ASSERT($tmp1287.value);
    switch (p_op.value) {
        case 66:
        {
            panda$core$String* $tmp1288 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1288;
        }
        break;
        case 68:
        {
            panda$core$String* $tmp1289 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1289;
        }
        break;
        case 60:
        {
            panda$core$String* $tmp1290 = org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1290;
        }
        break;
        case 61:
        {
            panda$core$String* $tmp1291 = org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1291;
        }
        break;
        default:
        {
            panda$core$String* $tmp1293 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1292 = $tmp1293;
            panda$core$String* $tmp1295 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1294 = $tmp1295;
            panda$core$Int64 $tmp1296 = org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_left->type);
            panda$core$String* $tmp1297 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1296, p_left->type, leftRef1292, p_op, rightRef1294, p_out);
            return $tmp1297;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp1298.value);
    panda$core$Int64 $tmp1299 = panda$collections$Array$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp1300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1299, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp1300.value);
    panda$core$Object* $tmp1301 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp1302 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1303 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1301), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp1302), p_out);
    return $tmp1303;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1304;
    panda$core$Int64 index1306;
    panda$collections$ListView* vtable1307;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1309;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1305 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1304 = $tmp1305;
    index1306 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1308 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1307 = $tmp1308;
    ITable* $tmp1310 = ((panda$collections$CollectionView*) vtable1307)->$class->itable;
    while ($tmp1310->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1310 = $tmp1310->next;
    }
    $fn1312 $tmp1311 = $tmp1310->methods[0];
    panda$core$Int64 $tmp1313 = $tmp1311(((panda$collections$CollectionView*) vtable1307));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1309, ((panda$core$Int64) { 0 }), $tmp1313, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1315 = $tmp1309.start.value;
    panda$core$Int64 i1314 = { $tmp1315 };
    int64_t $tmp1317 = $tmp1309.end.value;
    int64_t $tmp1318 = $tmp1309.step.value;
    bool $tmp1319 = $tmp1309.inclusive.value;
    bool $tmp1326 = $tmp1318 > 0;
    if ($tmp1326) goto $l1324; else goto $l1325;
    $l1324:;
    if ($tmp1319) goto $l1327; else goto $l1328;
    $l1327:;
    if ($tmp1315 <= $tmp1317) goto $l1320; else goto $l1322;
    $l1328:;
    if ($tmp1315 < $tmp1317) goto $l1320; else goto $l1322;
    $l1325:;
    if ($tmp1319) goto $l1329; else goto $l1330;
    $l1329:;
    if ($tmp1315 >= $tmp1317) goto $l1320; else goto $l1322;
    $l1330:;
    if ($tmp1315 > $tmp1317) goto $l1320; else goto $l1322;
    $l1320:;
    {
        ITable* $tmp1332 = vtable1307->$class->itable;
        while ($tmp1332->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1332 = $tmp1332->next;
        }
        $fn1334 $tmp1333 = $tmp1332->methods[0];
        panda$core$Object* $tmp1335 = $tmp1333(vtable1307, i1314);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1335)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1306 = i1314;
            goto $l1322;
        }
        }
    }
    $l1323:;
    if ($tmp1326) goto $l1337; else goto $l1338;
    $l1337:;
    int64_t $tmp1339 = $tmp1317 - i1314.value;
    if ($tmp1319) goto $l1340; else goto $l1341;
    $l1340:;
    if ($tmp1339 >= $tmp1318) goto $l1336; else goto $l1322;
    $l1341:;
    if ($tmp1339 > $tmp1318) goto $l1336; else goto $l1322;
    $l1338:;
    int64_t $tmp1343 = i1314.value - $tmp1317;
    if ($tmp1319) goto $l1344; else goto $l1345;
    $l1344:;
    if ($tmp1343 >= -$tmp1318) goto $l1336; else goto $l1322;
    $l1345:;
    if ($tmp1343 > -$tmp1318) goto $l1336; else goto $l1322;
    $l1336:;
    i1314.value += $tmp1318;
    goto $l1320;
    $l1322:;
    panda$core$Bit $tmp1347 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1306, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1347.value);
    org$pandalanguage$pandac$Type* $tmp1349 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1350 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1349);
    panda$core$String* $tmp1351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1348, $tmp1350);
    panda$core$String* $tmp1353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1351, &$s1352);
    panda$core$String* $tmp1354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1353, p_target);
    panda$core$String* $tmp1356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1354, &$s1355);
    panda$core$String* $tmp1357 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1356, ((panda$core$Object*) wrap_panda$core$Int64(index1306)));
    panda$core$String* $tmp1359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1357, &$s1358);
    return $tmp1359;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1360;
    panda$core$String* itable1362;
    panda$core$Int64 index1392;
    panda$collections$ListView* vtable1393;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1395;
    panda$core$String* result1442;
    panda$core$String* methodType1444;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1361 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1360 = $tmp1361;
    panda$core$String* $tmp1363 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    itable1362 = $tmp1363;
    panda$core$String* $tmp1365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1364, itable1362);
    panda$core$String* $tmp1367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1365, &$s1366);
    panda$core$String* $tmp1368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1367, p_target);
    panda$core$String* $tmp1370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1368, &$s1369);
    (($fn1371) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1370);
    panda$core$String* $tmp1373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1372, itable1362);
    panda$core$String* $tmp1375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1373, &$s1374);
    panda$core$String* $tmp1376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1375, cc1360->name);
    panda$core$String* $tmp1378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1376, &$s1377);
    (($fn1379) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1378);
    panda$core$Int64 $tmp1380 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1380;
    panda$core$String* $tmp1382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1381, itable1362);
    panda$core$String* $tmp1384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1382, &$s1383);
    panda$core$String* $tmp1385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1384, itable1362);
    panda$core$String* $tmp1387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1385, &$s1386);
    (($fn1388) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1387);
    panda$core$Int64 $tmp1389 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1389;
    (($fn1391) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1390);
    index1392 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1394 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1393 = $tmp1394;
    ITable* $tmp1396 = ((panda$collections$CollectionView*) vtable1393)->$class->itable;
    while ($tmp1396->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1396 = $tmp1396->next;
    }
    $fn1398 $tmp1397 = $tmp1396->methods[0];
    panda$core$Int64 $tmp1399 = $tmp1397(((panda$collections$CollectionView*) vtable1393));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1395, ((panda$core$Int64) { 0 }), $tmp1399, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1401 = $tmp1395.start.value;
    panda$core$Int64 i1400 = { $tmp1401 };
    int64_t $tmp1403 = $tmp1395.end.value;
    int64_t $tmp1404 = $tmp1395.step.value;
    bool $tmp1405 = $tmp1395.inclusive.value;
    bool $tmp1412 = $tmp1404 > 0;
    if ($tmp1412) goto $l1410; else goto $l1411;
    $l1410:;
    if ($tmp1405) goto $l1413; else goto $l1414;
    $l1413:;
    if ($tmp1401 <= $tmp1403) goto $l1406; else goto $l1408;
    $l1414:;
    if ($tmp1401 < $tmp1403) goto $l1406; else goto $l1408;
    $l1411:;
    if ($tmp1405) goto $l1415; else goto $l1416;
    $l1415:;
    if ($tmp1401 >= $tmp1403) goto $l1406; else goto $l1408;
    $l1416:;
    if ($tmp1401 > $tmp1403) goto $l1406; else goto $l1408;
    $l1406:;
    {
        ITable* $tmp1418 = vtable1393->$class->itable;
        while ($tmp1418->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1418 = $tmp1418->next;
        }
        $fn1420 $tmp1419 = $tmp1418->methods[0];
        panda$core$Object* $tmp1421 = $tmp1419(vtable1393, i1400);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1421)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1392 = i1400;
            goto $l1408;
        }
        }
    }
    $l1409:;
    if ($tmp1412) goto $l1423; else goto $l1424;
    $l1423:;
    int64_t $tmp1425 = $tmp1403 - i1400.value;
    if ($tmp1405) goto $l1426; else goto $l1427;
    $l1426:;
    if ($tmp1425 >= $tmp1404) goto $l1422; else goto $l1408;
    $l1427:;
    if ($tmp1425 > $tmp1404) goto $l1422; else goto $l1408;
    $l1424:;
    int64_t $tmp1429 = i1400.value - $tmp1403;
    if ($tmp1405) goto $l1430; else goto $l1431;
    $l1430:;
    if ($tmp1429 >= -$tmp1404) goto $l1422; else goto $l1408;
    $l1431:;
    if ($tmp1429 > -$tmp1404) goto $l1422; else goto $l1408;
    $l1422:;
    i1400.value += $tmp1404;
    goto $l1406;
    $l1408:;
    org$pandalanguage$pandac$Type* $tmp1433 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp1434 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1433);
    panda$collections$ListView* $tmp1435 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp1434);
    ITable* $tmp1436 = ((panda$collections$CollectionView*) $tmp1435)->$class->itable;
    while ($tmp1436->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1436 = $tmp1436->next;
    }
    $fn1438 $tmp1437 = $tmp1436->methods[0];
    panda$core$Int64 $tmp1439 = $tmp1437(((panda$collections$CollectionView*) $tmp1435));
    panda$core$Int64 $tmp1440 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index1392, $tmp1439);
    index1392 = $tmp1440;
    panda$core$Bit $tmp1441 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1392, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1441.value);
    panda$core$String* $tmp1443 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1442 = $tmp1443;
    org$pandalanguage$pandac$Type* $tmp1445 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1446 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1445);
    methodType1444 = $tmp1446;
    panda$core$String* $tmp1448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1447, methodType1444);
    panda$core$String* $tmp1450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1448, &$s1449);
    panda$core$String* $tmp1451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1450, result1442);
    panda$core$String* $tmp1453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1451, &$s1452);
    panda$core$String* $tmp1454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1453, itable1362);
    panda$core$String* $tmp1456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1454, &$s1455);
    panda$core$String* $tmp1457 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1456, ((panda$core$Object*) wrap_panda$core$Int64(index1392)));
    panda$core$String* $tmp1459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1457, &$s1458);
    (($fn1460) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1459);
    return result1442;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1462 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp1461 = $tmp1462.value;
    if (!$tmp1461) goto $l1463;
    panda$core$Bit $tmp1464 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp1461 = $tmp1464.value;
    $l1463:;
    panda$core$Bit $tmp1465 = { $tmp1461 };
    if ($tmp1465.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp1466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp1466.value) {
        {
            panda$core$String* $tmp1467 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1467;
        }
        }
        else {
        {
            panda$core$String* $tmp1468 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1468;
        }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp1469 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
        if ($tmp1469.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
        }
        }
        panda$core$String* $tmp1470 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp1470;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m1471;
    panda$core$String* $match$862_91472;
    panda$core$String* count1477;
    panda$core$Int64 elementSize1483;
    panda$core$String* ptr1502;
    panda$core$String* ptr1513;
    panda$core$String* index1516;
    panda$core$String* ptr1530;
    panda$core$String* count1533;
    panda$core$Int64 elementSize1539;
    panda$core$String* ptr1561;
    panda$core$String* offset1564;
    m1471 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$862_91472 = ((org$pandalanguage$pandac$Symbol*) m1471->value)->name;
        panda$core$Bit $tmp1474 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91472, &$s1473);
        if ($tmp1474.value) {
        {
            panda$core$Int64 $tmp1475 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1475, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1476.value);
            panda$core$Object* $tmp1478 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1479 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1478), p_out);
            count1477 = $tmp1479;
            org$pandalanguage$pandac$Type* $tmp1480 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1471);
            panda$core$Int64 $tmp1481 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64($tmp1480->subtypes);
            panda$core$Bit $tmp1482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1481, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1482.value);
            org$pandalanguage$pandac$Type* $tmp1484 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1471);
            panda$core$Object* $tmp1485 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1484->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1486 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1485));
            elementSize1483 = $tmp1486;
            panda$core$String* $tmp1488 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1487, $tmp1488);
            panda$core$String* $tmp1491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1489, &$s1490);
            panda$core$String* $tmp1492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1491, count1477);
            panda$core$String* $tmp1494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1492, &$s1493);
            panda$core$String* $tmp1495 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1494, ((panda$core$Object*) wrap_panda$core$Int64(elementSize1483)));
            panda$core$String* $tmp1497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1495, &$s1496);
            return $tmp1497;
        }
        }
        else {
        panda$core$Bit $tmp1499 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91472, &$s1498);
        if ($tmp1499.value) {
        {
            panda$core$Int64 $tmp1500 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1500, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1501.value);
            panda$core$Object* $tmp1503 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1504 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1503), p_out);
            ptr1502 = $tmp1504;
            panda$core$String* $tmp1506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1505, ptr1502);
            panda$core$String* $tmp1508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1506, &$s1507);
            return $tmp1508;
        }
        }
        else {
        panda$core$Bit $tmp1510 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91472, &$s1509);
        if ($tmp1510.value) {
        {
            panda$core$Int64 $tmp1511 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1511, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1512.value);
            panda$core$Object* $tmp1514 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1515 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1514), p_out);
            ptr1513 = $tmp1515;
            panda$core$Object* $tmp1517 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1518 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1517), p_out);
            index1516 = $tmp1518;
            panda$core$String* $tmp1520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1519, ptr1513);
            panda$core$String* $tmp1522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1520, &$s1521);
            panda$core$String* $tmp1523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1522, index1516);
            panda$core$String* $tmp1525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1523, &$s1524);
            return $tmp1525;
        }
        }
        else {
        panda$core$Bit $tmp1527 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91472, &$s1526);
        if ($tmp1527.value) {
        {
            panda$core$Int64 $tmp1528 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1528, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1529.value);
            panda$core$Object* $tmp1531 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1532 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1531), p_out);
            ptr1530 = $tmp1532;
            panda$core$Object* $tmp1534 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1535 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1534), p_out);
            count1533 = $tmp1535;
            org$pandalanguage$pandac$Type* $tmp1536 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1471);
            panda$core$Int64 $tmp1537 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64($tmp1536->subtypes);
            panda$core$Bit $tmp1538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1537, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1538.value);
            org$pandalanguage$pandac$Type* $tmp1540 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1471);
            panda$core$Object* $tmp1541 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1540->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1542 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1541));
            elementSize1539 = $tmp1542;
            panda$core$String* $tmp1544 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1543, $tmp1544);
            panda$core$String* $tmp1547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1545, &$s1546);
            panda$core$String* $tmp1548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1547, ptr1530);
            panda$core$String* $tmp1550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1548, &$s1549);
            panda$core$String* $tmp1551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1550, count1533);
            panda$core$String* $tmp1553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1551, &$s1552);
            panda$core$String* $tmp1554 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1553, ((panda$core$Object*) wrap_panda$core$Int64(elementSize1539)));
            panda$core$String* $tmp1556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1554, &$s1555);
            return $tmp1556;
        }
        }
        else {
        panda$core$Bit $tmp1558 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91472, &$s1557);
        if ($tmp1558.value) {
        {
            panda$core$Int64 $tmp1559 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1559, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1560.value);
            panda$core$Object* $tmp1562 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1563 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1562), p_out);
            ptr1561 = $tmp1563;
            panda$core$Object* $tmp1565 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1566 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1565), p_out);
            offset1564 = $tmp1566;
            panda$core$String* $tmp1568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1567, ptr1561);
            panda$core$String* $tmp1570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1568, &$s1569);
            panda$core$String* $tmp1571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1570, offset1564);
            panda$core$String* $tmp1573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1571, &$s1572);
            return $tmp1573;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m1575;
    panda$core$String* bit1586;
    panda$core$String* result1590;
    panda$core$String* bit1604;
    panda$core$String* result1608;
    panda$collections$Array* args1618;
    org$pandalanguage$pandac$Type* actualMethodType1622;
    panda$core$String* actualResultType1623;
    panda$core$Bit isSuper1624;
    panda$core$Int64 offset1644;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1649;
    panda$core$String* arg1669;
    panda$core$String* target1695;
    panda$core$String* methodRef1699;
    panda$core$Bit indirect1701;
    panda$core$String* result1703;
    panda$core$String* separator1705;
    panda$core$String* indirectVar1707;
    panda$collections$Iterator* arg$Iter1736;
    panda$core$String* arg1748;
    panda$core$Bit $tmp1574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp1574.value);
    m1575 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp1577 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1575->owner)->name, &$s1576);
    if ($tmp1577.value) {
    {
        panda$core$String* $tmp1578 = org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp1578;
    }
    }
    panda$core$Bit $tmp1579 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1575->owner);
    if ($tmp1579.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1575);
    }
    }
    panda$core$Bit $tmp1581 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1575->owner)->name, &$s1580);
    if ($tmp1581.value) {
    {
        panda$core$Bit $tmp1583 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1575)->name, &$s1582);
        if ($tmp1583.value) {
        {
            panda$core$Int64 $tmp1584 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1584, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1585.value);
            panda$core$Object* $tmp1587 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1588 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1589 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1587), ((org$pandalanguage$pandac$IRNode*) $tmp1588), p_out);
            bit1586 = $tmp1589;
            panda$core$String* $tmp1591 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1590 = $tmp1591;
            panda$core$String* $tmp1593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1592, result1590);
            panda$core$String* $tmp1595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1593, &$s1594);
            panda$core$String* $tmp1596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1595, bit1586);
            panda$core$String* $tmp1598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1596, &$s1597);
            (($fn1599) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1598);
            return result1590;
        }
        }
        panda$core$Bit $tmp1601 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1575)->name, &$s1600);
        if ($tmp1601.value) {
        {
            panda$core$Int64 $tmp1602 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1602, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1603.value);
            panda$core$Object* $tmp1605 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1606 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1607 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1605), ((org$pandalanguage$pandac$IRNode*) $tmp1606), p_out);
            bit1604 = $tmp1607;
            panda$core$String* $tmp1609 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1608 = $tmp1609;
            panda$core$String* $tmp1611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1610, result1608);
            panda$core$String* $tmp1613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1611, &$s1612);
            panda$core$String* $tmp1614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1613, bit1604);
            panda$core$String* $tmp1616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1614, &$s1615);
            (($fn1617) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1616);
            return result1608;
        }
        }
    }
    }
    panda$collections$Array* $tmp1619 = (panda$collections$Array*) malloc(40);
    $tmp1619->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1619->refCount.value = 1;
    panda$core$Int64 $tmp1621 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp1619, $tmp1621);
    args1618 = $tmp1619;
    panda$core$Int64 $tmp1626 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp1627 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1626, ((panda$core$Int64) { 1 }));
    bool $tmp1625 = $tmp1627.value;
    if (!$tmp1625) goto $l1628;
    panda$core$Object* $tmp1629 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp1630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1629)->kind, ((panda$core$Int64) { 1024 }));
    $tmp1625 = $tmp1630.value;
    $l1628:;
    panda$core$Bit $tmp1631 = { $tmp1625 };
    isSuper1624 = $tmp1631;
    panda$core$Bit $tmp1633 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper1624);
    bool $tmp1632 = $tmp1633.value;
    if (!$tmp1632) goto $l1634;
    panda$core$Bit $tmp1635 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m1575);
    $tmp1632 = $tmp1635.value;
    $l1634:;
    panda$core$Bit $tmp1636 = { $tmp1632 };
    if ($tmp1636.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1637 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1575);
        actualMethodType1622 = $tmp1637;
        panda$core$Int64 $tmp1638 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType1622->subtypes);
        panda$core$Int64 $tmp1639 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1638, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1640 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType1622->subtypes, $tmp1639);
        panda$core$String* $tmp1641 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1640));
        actualResultType1623 = $tmp1641;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp1642 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1575);
        actualMethodType1622 = $tmp1642;
        panda$core$String* $tmp1643 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType1623 = $tmp1643;
    }
    }
    panda$core$Int64 $tmp1645 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp1646 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType1622->subtypes);
    panda$core$Int64 $tmp1647 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1645, $tmp1646);
    panda$core$Int64 $tmp1648 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1647, ((panda$core$Int64) { 1 }));
    offset1644 = $tmp1648;
    panda$core$Int64 $tmp1650 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1649, ((panda$core$Int64) { 0 }), $tmp1650, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1652 = $tmp1649.start.value;
    panda$core$Int64 i1651 = { $tmp1652 };
    int64_t $tmp1654 = $tmp1649.end.value;
    int64_t $tmp1655 = $tmp1649.step.value;
    bool $tmp1656 = $tmp1649.inclusive.value;
    bool $tmp1663 = $tmp1655 > 0;
    if ($tmp1663) goto $l1661; else goto $l1662;
    $l1661:;
    if ($tmp1656) goto $l1664; else goto $l1665;
    $l1664:;
    if ($tmp1652 <= $tmp1654) goto $l1657; else goto $l1659;
    $l1665:;
    if ($tmp1652 < $tmp1654) goto $l1657; else goto $l1659;
    $l1662:;
    if ($tmp1656) goto $l1666; else goto $l1667;
    $l1666:;
    if ($tmp1652 >= $tmp1654) goto $l1657; else goto $l1659;
    $l1667:;
    if ($tmp1652 > $tmp1654) goto $l1657; else goto $l1659;
    $l1657:;
    {
        panda$core$Object* $tmp1670 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1651);
        panda$core$String* $tmp1671 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1670), p_out);
        arg1669 = $tmp1671;
        panda$core$Bit $tmp1673 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i1651, offset1644);
        bool $tmp1672 = $tmp1673.value;
        if (!$tmp1672) goto $l1674;
        panda$core$Int64 $tmp1675 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1651, offset1644);
        panda$core$Object* $tmp1676 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType1622->subtypes, $tmp1675);
        panda$core$Object* $tmp1677 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1651);
        panda$core$Bit $tmp1678 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1676), ((org$pandalanguage$pandac$IRNode*) $tmp1677)->type);
        $tmp1672 = $tmp1678.value;
        $l1674:;
        panda$core$Bit $tmp1679 = { $tmp1672 };
        if ($tmp1679.value) {
        {
            panda$core$Object* $tmp1680 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1651);
            panda$core$Int64 $tmp1681 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1651, offset1644);
            panda$core$Object* $tmp1682 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType1622->subtypes, $tmp1681);
            panda$core$String* $tmp1683 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg1669, ((org$pandalanguage$pandac$IRNode*) $tmp1680)->type, ((org$pandalanguage$pandac$Type*) $tmp1682), p_out);
            arg1669 = $tmp1683;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args1618, ((panda$core$Object*) arg1669));
    }
    $l1660:;
    if ($tmp1663) goto $l1685; else goto $l1686;
    $l1685:;
    int64_t $tmp1687 = $tmp1654 - i1651.value;
    if ($tmp1656) goto $l1688; else goto $l1689;
    $l1688:;
    if ($tmp1687 >= $tmp1655) goto $l1684; else goto $l1659;
    $l1689:;
    if ($tmp1687 > $tmp1655) goto $l1684; else goto $l1659;
    $l1686:;
    int64_t $tmp1691 = i1651.value - $tmp1654;
    if ($tmp1656) goto $l1692; else goto $l1693;
    $l1692:;
    if ($tmp1691 >= -$tmp1655) goto $l1684; else goto $l1659;
    $l1693:;
    if ($tmp1691 > -$tmp1655) goto $l1684; else goto $l1659;
    $l1684:;
    i1651.value += $tmp1655;
    goto $l1657;
    $l1659:;
    panda$core$Int64 $tmp1696 = panda$collections$Array$get_count$R$panda$core$Int64(args1618);
    panda$core$Bit $tmp1697 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1696, ((panda$core$Int64) { 0 }));
    if ($tmp1697.value) {
    {
        panda$core$Object* $tmp1698 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args1618, ((panda$core$Int64) { 0 }));
        target1695 = ((panda$core$String*) $tmp1698);
    }
    }
    else {
    {
        target1695 = NULL;
    }
    }
    panda$core$String* $tmp1700 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target1695, m1575, isSuper1624, p_out);
    methodRef1699 = $tmp1700;
    panda$core$Bit $tmp1702 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m1575);
    indirect1701 = $tmp1702;
    panda$core$String* $tmp1704 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1703 = $tmp1704;
    separator1705 = &$s1706;
    if (indirect1701.value) {
    {
        panda$core$String* $tmp1709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1708, actualResultType1623);
        panda$core$String* $tmp1711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1709, &$s1710);
        panda$core$String* $tmp1712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1711, result1703);
        panda$core$String* $tmp1714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1712, &$s1713);
        (($fn1715) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1714);
        panda$core$String* $tmp1717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1716, methodRef1699);
        panda$core$String* $tmp1719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1717, &$s1718);
        panda$core$String* $tmp1720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1719, result1703);
        panda$core$String* $tmp1722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1720, &$s1721);
        (($fn1723) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1722);
        separator1705 = &$s1724;
    }
    }
    else {
    {
        panda$core$String* $tmp1726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1725, actualResultType1623);
        panda$core$String* $tmp1728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1726, &$s1727);
        panda$core$String* $tmp1729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1728, result1703);
        panda$core$String* $tmp1731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1729, &$s1730);
        panda$core$String* $tmp1732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1731, methodRef1699);
        panda$core$String* $tmp1734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1732, &$s1733);
        (($fn1735) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1734);
    }
    }
    {
        ITable* $tmp1737 = ((panda$collections$Iterable*) args1618)->$class->itable;
        while ($tmp1737->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1737 = $tmp1737->next;
        }
        $fn1739 $tmp1738 = $tmp1737->methods[0];
        panda$collections$Iterator* $tmp1740 = $tmp1738(((panda$collections$Iterable*) args1618));
        arg$Iter1736 = $tmp1740;
        $l1741:;
        ITable* $tmp1743 = arg$Iter1736->$class->itable;
        while ($tmp1743->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1743 = $tmp1743->next;
        }
        $fn1745 $tmp1744 = $tmp1743->methods[0];
        panda$core$Bit $tmp1746 = $tmp1744(arg$Iter1736);
        panda$core$Bit $tmp1747 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1746);
        if (!$tmp1747.value) goto $l1742;
        {
            ITable* $tmp1749 = arg$Iter1736->$class->itable;
            while ($tmp1749->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1749 = $tmp1749->next;
            }
            $fn1751 $tmp1750 = $tmp1749->methods[1];
            panda$core$Object* $tmp1752 = $tmp1750(arg$Iter1736);
            arg1748 = ((panda$core$String*) $tmp1752);
            panda$core$String* $tmp1754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1753, separator1705);
            panda$core$String* $tmp1756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1754, &$s1755);
            panda$core$String* $tmp1757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1756, arg1748);
            panda$core$String* $tmp1759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1757, &$s1758);
            (($fn1760) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1759);
            separator1705 = &$s1761;
        }
        goto $l1741;
        $l1742:;
    }
    (($fn1763) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1762);
    panda$core$String* $tmp1764 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp1765 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp1764, actualResultType1623);
    if ($tmp1765.value) {
    {
        panda$core$Int64 $tmp1766 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType1622->subtypes);
        panda$core$Int64 $tmp1767 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1766, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1768 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType1622->subtypes, $tmp1767);
        panda$core$String* $tmp1769 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result1703, ((org$pandalanguage$pandac$Type*) $tmp1768), p_call->type, p_out);
        return $tmp1769;
    }
    }
    return result1703;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* unwrapped1771;
    panda$core$String* nonNullValue1774;
    panda$core$String* wrapped1784;
    panda$core$Bit $tmp1770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1770.value) {
    {
        panda$core$Object* $tmp1772 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1773 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1772), p_out);
        unwrapped1771 = $tmp1773;
        panda$core$Object* $tmp1775 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1776 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped1771, ((org$pandalanguage$pandac$Type*) $tmp1775), p_dstType, p_out);
        nonNullValue1774 = $tmp1776;
        panda$core$String* $tmp1778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1777, p_value);
        panda$core$String* $tmp1780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1778, &$s1779);
        panda$core$String* $tmp1781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1780, nonNullValue1774);
        panda$core$String* $tmp1783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1781, &$s1782);
        return $tmp1783;
    }
    }
    panda$core$String* $tmp1786 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1785, $tmp1786);
    panda$core$String* $tmp1789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1787, &$s1788);
    org$pandalanguage$pandac$ClassDecl* $tmp1790 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    panda$core$String* $tmp1791 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1790)->name);
    panda$core$String* $tmp1792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1789, $tmp1791);
    panda$core$String* $tmp1794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1792, &$s1793);
    panda$core$String* $tmp1796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1795, p_value);
    panda$core$String* $tmp1798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1796, &$s1797);
    panda$core$String* $tmp1799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1794, $tmp1798);
    wrapped1784 = $tmp1799;
    panda$core$Bit $tmp1800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1800.value) {
    {
        panda$core$String* $tmp1802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1801, p_value);
        panda$core$String* $tmp1804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1802, &$s1803);
        panda$core$String* $tmp1805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1804, wrapped1784);
        panda$core$String* $tmp1807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1805, &$s1806);
        return $tmp1807;
    }
    }
    return wrapped1784;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field1811;
    org$pandalanguage$pandac$ClassDecl* cl1814;
    panda$core$String* base1817;
    panda$core$Bit $tmp1808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp1808.value);
    panda$core$Int64 $tmp1809 = panda$collections$Array$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp1810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1809, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1810.value);
    field1811 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$Bit $tmp1812 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field1811->annotations);
    if ($tmp1812.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field1811->value != NULL }).value);
        panda$core$String* $tmp1813 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field1811->value, p_out);
        return $tmp1813;
    }
    }
    panda$core$Object* $tmp1815 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp1816 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp1815)->type);
    cl1814 = $tmp1816;
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl1814);
    panda$core$Object* $tmp1818 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1819 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1818), p_out);
    base1817 = $tmp1819;
    PANDA_ASSERT(((panda$core$Bit) { cl1814 != NULL }).value);
    panda$core$Bit $tmp1820 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1814);
    if ($tmp1820.value) {
    {
        panda$core$String* $tmp1822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1821, base1817);
        panda$core$String* $tmp1824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1822, &$s1823);
        panda$core$String* $tmp1825 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1811)->name);
        panda$core$String* $tmp1826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1824, $tmp1825);
        panda$core$String* $tmp1828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1826, &$s1827);
        return $tmp1828;
    }
    }
    panda$core$String* $tmp1830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1829, base1817);
    panda$core$String* $tmp1832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1830, &$s1831);
    panda$core$String* $tmp1833 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1811)->name);
    panda$core$String* $tmp1834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1832, $tmp1833);
    panda$core$String* $tmp1836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1834, &$s1835);
    return $tmp1836;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1837;
    panda$core$String* wrapped1847;
    panda$core$String* nonNullValue1850;
    panda$core$String* $tmp1839 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1838, $tmp1839);
    panda$core$String* $tmp1842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1840, &$s1841);
    panda$core$String* $tmp1843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1842, p_value);
    panda$core$String* $tmp1845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1843, &$s1844);
    result1837 = $tmp1845;
    panda$core$Bit $tmp1846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1846.value) {
    {
        panda$core$Object* $tmp1848 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1849 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1848), p_out);
        wrapped1847 = $tmp1849;
        panda$core$Object* $tmp1851 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1852 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped1847, ((org$pandalanguage$pandac$Type*) $tmp1851), p_dstType, p_out);
        nonNullValue1850 = $tmp1852;
        panda$core$String* $tmp1854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1853, p_value);
        panda$core$String* $tmp1856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1854, &$s1855);
        panda$core$String* $tmp1857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1856, nonNullValue1850);
        panda$core$String* $tmp1859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1857, &$s1858);
        panda$core$String* $tmp1860 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp1861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1859, $tmp1860);
        panda$core$String* $tmp1863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1861, &$s1862);
        return $tmp1863;
    }
    }
    return result1837;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1865 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1864, $tmp1865);
    panda$core$String* $tmp1868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1866, &$s1867);
    panda$core$String* $tmp1869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1868, p_value);
    panda$core$String* $tmp1871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1869, &$s1870);
    return $tmp1871;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1873 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1872, $tmp1873);
    panda$core$String* $tmp1876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1874, &$s1875);
    panda$core$String* $tmp1877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1876, p_value);
    panda$core$String* $tmp1879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1877, &$s1878);
    return $tmp1879;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op1880;
    org$pandalanguage$pandac$ClassDecl* srcClass1891;
    org$pandalanguage$pandac$ClassDecl* targetClass1893;
    panda$core$String* srcType1932;
    panda$core$String* dstType1934;
    panda$core$Bit $tmp1881 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp1881.value) {
    {
        panda$core$Bit $tmp1882 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp1882.value);
        panda$core$String* $tmp1884 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
        panda$core$String* $tmp1885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1883, $tmp1884);
        panda$core$String* $tmp1887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1885, &$s1886);
        panda$core$String* $tmp1888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1887, p_value);
        panda$core$String* $tmp1890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1888, &$s1889);
        return $tmp1890;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1892 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass1891 = $tmp1892;
        PANDA_ASSERT(((panda$core$Bit) { srcClass1891 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp1894 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass1893 = $tmp1894;
        PANDA_ASSERT(((panda$core$Bit) { targetClass1893 != NULL }).value);
        panda$core$Bit $tmp1896 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1891);
        bool $tmp1895 = $tmp1896.value;
        if (!$tmp1895) goto $l1897;
        panda$core$Bit $tmp1898 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1893);
        panda$core$Bit $tmp1899 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1898);
        $tmp1895 = $tmp1899.value;
        $l1897:;
        panda$core$Bit $tmp1900 = { $tmp1895 };
        if ($tmp1900.value) {
        {
            panda$core$String* $tmp1901 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1901;
        }
        }
        else {
        panda$core$Bit $tmp1903 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1891);
        panda$core$Bit $tmp1904 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1903);
        bool $tmp1902 = $tmp1904.value;
        if (!$tmp1902) goto $l1905;
        panda$core$Bit $tmp1906 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1893);
        $tmp1902 = $tmp1906.value;
        $l1905:;
        panda$core$Bit $tmp1907 = { $tmp1902 };
        if ($tmp1907.value) {
        {
            panda$core$String* $tmp1908 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1908;
        }
        }
        else {
        panda$core$Bit $tmp1911 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1891);
        bool $tmp1910 = $tmp1911.value;
        if (!$tmp1910) goto $l1912;
        panda$core$Bit $tmp1913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1910 = $tmp1913.value;
        $l1912:;
        panda$core$Bit $tmp1914 = { $tmp1910 };
        bool $tmp1909 = $tmp1914.value;
        if (!$tmp1909) goto $l1915;
        panda$core$Object* $tmp1916 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1917 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1916), p_src);
        $tmp1909 = $tmp1917.value;
        $l1915:;
        panda$core$Bit $tmp1918 = { $tmp1909 };
        if ($tmp1918.value) {
        {
            panda$core$String* $tmp1919 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1919;
        }
        }
        else {
        panda$core$Bit $tmp1922 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1893);
        bool $tmp1921 = $tmp1922.value;
        if (!$tmp1921) goto $l1923;
        panda$core$Bit $tmp1924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1921 = $tmp1924.value;
        $l1923:;
        panda$core$Bit $tmp1925 = { $tmp1921 };
        bool $tmp1920 = $tmp1925.value;
        if (!$tmp1920) goto $l1926;
        panda$core$Object* $tmp1927 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1928 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1927), p_target);
        $tmp1920 = $tmp1928.value;
        $l1926:;
        panda$core$Bit $tmp1929 = { $tmp1920 };
        if ($tmp1929.value) {
        {
            panda$core$String* $tmp1930 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1930;
        }
        }
        }
        }
        }
        op1880 = &$s1931;
    }
    }
    panda$core$String* $tmp1933 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType1932 = $tmp1933;
    panda$core$String* $tmp1935 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType1934 = $tmp1935;
    panda$core$Bit $tmp1936 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType1932, dstType1934);
    if ($tmp1936.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp1938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1937, dstType1934);
    panda$core$String* $tmp1940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1938, &$s1939);
    panda$core$String* $tmp1941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1940, p_value);
    panda$core$String* $tmp1943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1941, &$s1942);
    return $tmp1943;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base1947;
    panda$core$Bit $tmp1944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp1944.value);
    panda$core$Int64 $tmp1945 = panda$collections$Array$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp1946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1945, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1946.value);
    panda$core$Object* $tmp1948 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1949 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1948), p_out);
    base1947 = $tmp1949;
    panda$core$Object* $tmp1950 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1951 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base1947, ((org$pandalanguage$pandac$IRNode*) $tmp1950)->type, p_cast->type, p_out);
    return $tmp1951;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl1955;
    panda$core$String* t1957;
    panda$core$String* value1970;
    panda$core$String* tmp1984;
    panda$core$String* result2002;
    panda$core$String* classPtr2023;
    panda$core$String* className2025;
    panda$core$Bit $tmp1952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp1952.value);
    panda$core$Int64 $tmp1953 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp1954 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1953, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1954.value);
    org$pandalanguage$pandac$ClassDecl* $tmp1956 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl1955 = $tmp1956;
    PANDA_ASSERT(((panda$core$Bit) { cl1955 != NULL }).value);
    panda$core$String* $tmp1958 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t1957 = $tmp1958;
    panda$core$Bit $tmp1960 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    bool $tmp1959 = $tmp1960.value;
    if ($tmp1959) goto $l1961;
    org$pandalanguage$pandac$Type* $tmp1962 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1963 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp1962);
    $tmp1959 = $tmp1963.value;
    $l1961:;
    panda$core$Bit $tmp1964 = { $tmp1959 };
    if ($tmp1964.value) {
    {
        panda$core$Int64 $tmp1965 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp1966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1965, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp1966.value);
        panda$core$Object* $tmp1967 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp1968 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1967)->children);
        panda$core$Bit $tmp1969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1968, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp1969.value);
        panda$core$Object* $tmp1971 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp1972 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp1971)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1973 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1972), p_out);
        value1970 = $tmp1973;
        panda$core$String* $tmp1975 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        panda$core$String* $tmp1976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1974, $tmp1975);
        panda$core$String* $tmp1978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1976, &$s1977);
        panda$core$String* $tmp1979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1978, value1970);
        panda$core$String* $tmp1981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1979, &$s1980);
        return $tmp1981;
    }
    }
    panda$core$Bit $tmp1982 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1955);
    if ($tmp1982.value) {
    {
        panda$core$Int64 $tmp1983 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1983;
        panda$core$String* $tmp1986 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1985, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        panda$core$String* $tmp1988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1986, &$s1987);
        tmp1984 = $tmp1988;
        panda$core$String* $tmp1990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1989, t1957);
        panda$core$String* $tmp1992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1990, &$s1991);
        panda$core$String* $tmp1993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1992, tmp1984);
        panda$core$String* $tmp1995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1993, &$s1994);
        (($fn1996) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1995);
        panda$core$Object* $tmp1997 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1998, tmp1984);
        panda$core$String* $tmp2001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1999, &$s2000);
        org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp1997), $tmp2001, p_out);
        return tmp1984;
    }
    }
    panda$core$String* $tmp2003 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2002 = $tmp2003;
    panda$core$String* $tmp2005 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp2006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2004, $tmp2005);
    panda$core$String* $tmp2008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2006, &$s2007);
    panda$core$String* $tmp2009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2008, result2002);
    panda$core$String* $tmp2011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2009, &$s2010);
    panda$core$String* $tmp2012 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp2013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2011, $tmp2012);
    panda$core$String* $tmp2015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2013, &$s2014);
    panda$core$Int64 $tmp2017 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp2018 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2016, ((panda$core$Object*) wrap_panda$core$Int64($tmp2017)));
    panda$core$String* $tmp2020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2018, &$s2019);
    panda$core$String* $tmp2021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2015, $tmp2020);
    (($fn2022) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2021);
    panda$core$String* $tmp2024 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr2023 = $tmp2024;
    panda$core$Bit $tmp2026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    if ($tmp2026.value) {
    {
        panda$core$Object* $tmp2027 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2028 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2027));
        className2025 = $tmp2028;
    }
    }
    else {
    {
        panda$core$String* $tmp2029 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className2025 = $tmp2029;
    }
    }
    panda$core$String* $tmp2031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2030, result2002);
    panda$core$String* $tmp2033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2031, &$s2032);
    panda$core$String* $tmp2034 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) cl1955)->name);
    panda$core$String* $tmp2035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2033, $tmp2034);
    panda$core$String* $tmp2037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2035, &$s2036);
    (($fn2038) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2037);
    panda$core$String* $tmp2040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2039, result2002);
    panda$core$String* $tmp2042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2040, &$s2041);
    (($fn2043) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2042);
    panda$core$Object* $tmp2044 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2045, result2002);
    panda$core$String* $tmp2048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2046, &$s2047);
    org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2044), $tmp2048, p_out);
    return result2002;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2049 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    return $tmp2049;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2051 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp2052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2050, $tmp2051);
    return $tmp2052;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s2053;
    }
    }
    return &$s2054;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2055 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    return $tmp2055;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result2057;
    panda$collections$Iterator* raw$Iter2070;
    panda$core$Char8 raw2083;
    panda$core$UInt8 c2088;
    panda$core$Int64 $tmp2056 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp2056;
    panda$core$String* $tmp2059 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2058, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp2061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2059, &$s2060);
    result2057 = $tmp2061;
    org$pandalanguage$pandac$Type* $tmp2062 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2062);
    panda$core$String* $tmp2064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2063, result2057);
    panda$core$String* $tmp2066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2064, &$s2065);
    panda$core$String* $tmp2068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2066, &$s2067);
    (($fn2069) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2068);
    {
        panda$collections$ListView* $tmp2071 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp2072 = ((panda$collections$Iterable*) $tmp2071)->$class->itable;
        while ($tmp2072->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2072 = $tmp2072->next;
        }
        $fn2074 $tmp2073 = $tmp2072->methods[0];
        panda$collections$Iterator* $tmp2075 = $tmp2073(((panda$collections$Iterable*) $tmp2071));
        raw$Iter2070 = $tmp2075;
        $l2076:;
        ITable* $tmp2078 = raw$Iter2070->$class->itable;
        while ($tmp2078->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2078 = $tmp2078->next;
        }
        $fn2080 $tmp2079 = $tmp2078->methods[0];
        panda$core$Bit $tmp2081 = $tmp2079(raw$Iter2070);
        panda$core$Bit $tmp2082 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2081);
        if (!$tmp2082.value) goto $l2077;
        {
            ITable* $tmp2084 = raw$Iter2070->$class->itable;
            while ($tmp2084->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2084 = $tmp2084->next;
            }
            $fn2086 $tmp2085 = $tmp2084->methods[1];
            panda$core$Object* $tmp2087 = $tmp2085(raw$Iter2070);
            raw2083 = ((panda$core$Char8$wrapper*) $tmp2087)->value;
            panda$core$UInt8 $tmp2089 = panda$core$Char8$convert$R$panda$core$UInt8(raw2083);
            c2088 = $tmp2089;
            (($fn2091) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), &$s2090);
            panda$collections$ListView* $tmp2093 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s2092);
            panda$core$UInt32 $tmp2094 = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(c2088, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp2095 = panda$core$UInt32$convert$R$panda$core$Int64($tmp2094);
            ITable* $tmp2096 = $tmp2093->$class->itable;
            while ($tmp2096->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2096 = $tmp2096->next;
            }
            $fn2098 $tmp2097 = $tmp2096->methods[0];
            panda$core$Object* $tmp2099 = $tmp2097($tmp2093, $tmp2095);
            (($fn2100) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp2099)->value)));
            panda$collections$ListView* $tmp2102 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s2101);
            panda$core$UInt32 $tmp2103 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(c2088, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp2104 = panda$core$UInt32$convert$R$panda$core$Int64($tmp2103);
            ITable* $tmp2105 = $tmp2102->$class->itable;
            while ($tmp2105->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2105 = $tmp2105->next;
            }
            $fn2107 $tmp2106 = $tmp2105->methods[0];
            panda$core$Object* $tmp2108 = $tmp2106($tmp2102, $tmp2104);
            (($fn2109) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp2108)->value)));
        }
        goto $l2076;
        $l2077:;
    }
    panda$collections$ListView* $tmp2111 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp2112 = ((panda$collections$CollectionView*) $tmp2111)->$class->itable;
    while ($tmp2112->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2112 = $tmp2112->next;
    }
    $fn2114 $tmp2113 = $tmp2112->methods[0];
    panda$core$Int64 $tmp2115 = $tmp2113(((panda$collections$CollectionView*) $tmp2111));
    panda$core$String* $tmp2116 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2110, ((panda$core$Object*) wrap_panda$core$Int64($tmp2115)));
    panda$core$String* $tmp2118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2116, &$s2117);
    (($fn2119) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp2118);
    panda$core$String* $tmp2121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2120, result2057);
    panda$core$String* $tmp2123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2121, &$s2122);
    return $tmp2123;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    return &$s2124;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2126 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp2127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2125, $tmp2126);
    panda$core$String* $tmp2129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2127, &$s2128);
    return $tmp2129;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2133;
    org$pandalanguage$pandac$ClassDecl* cl2136;
    panda$core$String* bit2139;
    panda$core$Bit $tmp2130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp2130.value);
    panda$core$Int64 $tmp2131 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp2132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2131, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2132.value);
    panda$core$Object* $tmp2134 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2135 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2134), p_out);
    value2133 = $tmp2135;
    panda$core$Object* $tmp2137 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2138 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2137)->type);
    cl2136 = $tmp2138;
    panda$core$Bit $tmp2140 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2136);
    if ($tmp2140.value) {
    {
        panda$core$Object* $tmp2141 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2142 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2141)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2142.value) {
        {
            bit2139 = &$s2143;
        }
        }
        else {
        {
            panda$core$String* $tmp2145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2144, value2133);
            panda$core$String* $tmp2147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2145, &$s2146);
            bit2139 = $tmp2147;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2148, value2133);
        panda$core$String* $tmp2151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2149, &$s2150);
        bit2139 = $tmp2151;
    }
    }
    panda$core$String* $tmp2153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2152, bit2139);
    panda$core$String* $tmp2155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2153, &$s2154);
    return $tmp2155;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2159;
    org$pandalanguage$pandac$ClassDecl* cl2162;
    panda$core$String* bit2165;
    panda$core$Bit $tmp2156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp2156.value);
    panda$core$Int64 $tmp2157 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp2158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2157, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2158.value);
    panda$core$Object* $tmp2160 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2161 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2160), p_out);
    value2159 = $tmp2161;
    panda$core$Object* $tmp2163 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2164 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2163)->type);
    cl2162 = $tmp2164;
    panda$core$Bit $tmp2166 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2162);
    if ($tmp2166.value) {
    {
        panda$core$Object* $tmp2167 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2168 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2167)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2168.value) {
        {
            bit2165 = &$s2169;
        }
        }
        else {
        {
            panda$core$String* $tmp2171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2170, value2159);
            panda$core$String* $tmp2173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2171, &$s2172);
            bit2165 = $tmp2173;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2174, value2159);
        panda$core$String* $tmp2177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2175, &$s2176);
        bit2165 = $tmp2177;
    }
    }
    panda$core$String* $tmp2179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2178, bit2165);
    panda$core$String* $tmp2181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2179, &$s2180);
    return $tmp2181;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2183;
    panda$core$Bit $tmp2182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp2182.value);
    panda$core$Object* $tmp2184 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2185 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp2184));
    cl2183 = $tmp2185;
    PANDA_ASSERT(((panda$core$Bit) { cl2183 != NULL }).value);
    panda$core$Bit $tmp2186 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2183);
    if ($tmp2186.value) {
    {
        panda$core$String* $tmp2188 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
        panda$core$String* $tmp2189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2187, $tmp2188);
        panda$core$String* $tmp2191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2189, &$s2190);
        return $tmp2191;
    }
    }
    else {
    {
        return &$s2192;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base2196;
    panda$core$String* result2199;
    panda$core$Bit $tmp2193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp2193.value);
    panda$core$Int64 $tmp2194 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp2195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2194, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2195.value);
    panda$core$Object* $tmp2197 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2198 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2197), p_out);
    base2196 = $tmp2198;
    panda$core$String* $tmp2200 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2199 = $tmp2200;
    panda$core$Int64 $tmp2201 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp2201.value) {
        case 52:
        {
            panda$core$String* $tmp2203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2202, base2196);
            panda$core$String* $tmp2205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2203, &$s2204);
            return $tmp2205;
        }
        break;
        case 49:
        {
            panda$core$String* $tmp2207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2206, base2196);
            panda$core$String* $tmp2209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2207, &$s2208);
            return $tmp2209;
        }
        break;
        case 50:
        {
            panda$core$String* $tmp2211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2210, base2196);
            panda$core$String* $tmp2213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2211, &$s2212);
            return $tmp2213;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2226;
    panda$core$String* result2229;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp2214 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2214;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp2215 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2215;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp2216 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2216;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp2217 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2217;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp2218 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2218;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp2219 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2219;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp2220 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2220;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp2221 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp2221;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp2222 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2222;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp2223 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp2223;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp2224 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2224;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp2225 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2225;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp2227 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2228 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2227), p_out);
            value2226 = $tmp2228;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value2226));
            return value2226;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp2230 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result2229 = ((panda$core$String*) $tmp2230);
            PANDA_ASSERT(((panda$core$Bit) { result2229 != NULL }).value);
            return result2229;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp2231 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2231;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp2232 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2232;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp2233 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2233;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp2234 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2234;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2235 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2235;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter2240;
    org$pandalanguage$pandac$IRNode* s2252;
    panda$core$Bit $tmp2236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp2236.value);
    (($fn2238) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2237);
    panda$core$Int64 $tmp2239 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2239;
    {
        ITable* $tmp2241 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp2241->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2241 = $tmp2241->next;
        }
        $fn2243 $tmp2242 = $tmp2241->methods[0];
        panda$collections$Iterator* $tmp2244 = $tmp2242(((panda$collections$Iterable*) p_block->children));
        s$Iter2240 = $tmp2244;
        $l2245:;
        ITable* $tmp2247 = s$Iter2240->$class->itable;
        while ($tmp2247->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2247 = $tmp2247->next;
        }
        $fn2249 $tmp2248 = $tmp2247->methods[0];
        panda$core$Bit $tmp2250 = $tmp2248(s$Iter2240);
        panda$core$Bit $tmp2251 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2250);
        if (!$tmp2251.value) goto $l2246;
        {
            ITable* $tmp2253 = s$Iter2240->$class->itable;
            while ($tmp2253->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2253 = $tmp2253->next;
            }
            $fn2255 $tmp2254 = $tmp2253->methods[1];
            panda$core$Object* $tmp2256 = $tmp2254(s$Iter2240);
            s2252 = ((org$pandalanguage$pandac$IRNode*) $tmp2256);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2252, p_out);
        }
        goto $l2245;
        $l2246:;
    }
    panda$core$Int64 $tmp2257 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2257;
    (($fn2259) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2258);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2260;
    panda$core$String* $match$1286_92261;
    panda$core$String* ptr2266;
    panda$core$String* arg2269;
    panda$core$String* base2289;
    panda$core$String* index2292;
    panda$core$String* value2295;
    m2260 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$1286_92261 = ((org$pandalanguage$pandac$Symbol*) m2260->value)->name;
        panda$core$Bit $tmp2263 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1286_92261, &$s2262);
        if ($tmp2263.value) {
        {
            panda$core$Int64 $tmp2264 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2264, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2265.value);
            panda$core$Object* $tmp2267 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2268 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2267), p_out);
            ptr2266 = $tmp2268;
            panda$core$Object* $tmp2270 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2271 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2270));
            panda$core$String* $tmp2272 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2271, p_out);
            arg2269 = $tmp2272;
            panda$core$String* $tmp2274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2273, arg2269);
            panda$core$String* $tmp2276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2274, &$s2275);
            panda$core$String* $tmp2277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2276, ptr2266);
            panda$core$String* $tmp2279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2277, &$s2278);
            (($fn2280) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2279);
        }
        }
        else {
        panda$core$Bit $tmp2282 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1286_92261, &$s2281);
        if ($tmp2282.value) {
        {
            panda$core$Int64 $tmp2283 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2283, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp2284.value);
            panda$core$Object* $tmp2285 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2286 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2285));
            panda$core$Int64 $tmp2287 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64($tmp2286->type->subtypes);
            panda$core$Bit $tmp2288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2287, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2288.value);
            panda$core$Object* $tmp2290 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2291 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2290), p_out);
            base2289 = $tmp2291;
            panda$core$Object* $tmp2293 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2294 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2293), p_out);
            index2292 = $tmp2294;
            panda$core$Object* $tmp2296 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2297 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2296));
            panda$core$String* $tmp2298 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2297, p_out);
            value2295 = $tmp2298;
            panda$core$String* $tmp2300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2299, base2289);
            panda$core$String* $tmp2302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2300, &$s2301);
            panda$core$String* $tmp2303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2302, index2292);
            panda$core$String* $tmp2305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2303, &$s2304);
            panda$core$String* $tmp2306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2305, value2295);
            panda$core$String* $tmp2308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2306, &$s2307);
            (($fn2309) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2308);
        }
        }
        else {
        panda$core$Bit $tmp2311 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1286_92261, &$s2310);
        if ($tmp2311.value) {
        {
            panda$core$Int64 $tmp2312 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2312, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2313.value);
            panda$core$Object* $tmp2315 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2316 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2315), p_out);
            panda$core$String* $tmp2317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2314, $tmp2316);
            panda$core$String* $tmp2319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2317, &$s2318);
            (($fn2320) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2319);
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$core$String* p_target, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2322;
    org$pandalanguage$pandac$Type* actualMethodType2326;
    panda$core$String* actualResultType2327;
    panda$core$Bit isSuper2328;
    panda$collections$Array* args2348;
    panda$core$Int64 offset2351;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2356;
    panda$core$String* arg2376;
    panda$core$String* refTarget2402;
    panda$core$String* methodRef2406;
    panda$core$String* separator2408;
    panda$core$String* indirectVar2412;
    panda$core$String* resultType2415;
    panda$collections$Iterator* a$Iter2442;
    panda$core$String* a2454;
    panda$core$Bit $tmp2321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2321.value);
    m2322 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2324 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2322->owner)->name, &$s2323);
    if ($tmp2324.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    panda$core$Bit $tmp2325 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m2322->owner);
    if ($tmp2325.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2322);
    }
    }
    panda$core$Int64 $tmp2330 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2331 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2330, ((panda$core$Int64) { 1 }));
    bool $tmp2329 = $tmp2331.value;
    if (!$tmp2329) goto $l2332;
    panda$core$Object* $tmp2333 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2333)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2329 = $tmp2334.value;
    $l2332:;
    panda$core$Bit $tmp2335 = { $tmp2329 };
    isSuper2328 = $tmp2335;
    panda$core$Bit $tmp2337 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2328);
    bool $tmp2336 = $tmp2337.value;
    if (!$tmp2336) goto $l2338;
    panda$core$Bit $tmp2339 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2322);
    $tmp2336 = $tmp2339.value;
    $l2338:;
    panda$core$Bit $tmp2340 = { $tmp2336 };
    if ($tmp2340.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2341 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2322);
        actualMethodType2326 = $tmp2341;
        panda$core$Int64 $tmp2342 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType2326->subtypes);
        panda$core$Int64 $tmp2343 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2342, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2344 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType2326->subtypes, $tmp2343);
        panda$core$String* $tmp2345 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2344));
        actualResultType2327 = $tmp2345;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2346 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2322);
        actualMethodType2326 = $tmp2346;
        panda$core$String* $tmp2347 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2327 = $tmp2347;
    }
    }
    panda$collections$Array* $tmp2349 = (panda$collections$Array*) malloc(40);
    $tmp2349->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2349->refCount.value = 1;
    panda$collections$Array$init($tmp2349);
    args2348 = $tmp2349;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args2348, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2352 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2353 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType2326->subtypes);
    panda$core$Int64 $tmp2354 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2352, $tmp2353);
    panda$core$Int64 $tmp2355 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2354, ((panda$core$Int64) { 1 }));
    offset2351 = $tmp2355;
    panda$core$Int64 $tmp2357 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2356, ((panda$core$Int64) { 0 }), $tmp2357, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp2359 = $tmp2356.start.value;
    panda$core$Int64 i2358 = { $tmp2359 };
    int64_t $tmp2361 = $tmp2356.end.value;
    int64_t $tmp2362 = $tmp2356.step.value;
    bool $tmp2363 = $tmp2356.inclusive.value;
    bool $tmp2370 = $tmp2362 > 0;
    if ($tmp2370) goto $l2368; else goto $l2369;
    $l2368:;
    if ($tmp2363) goto $l2371; else goto $l2372;
    $l2371:;
    if ($tmp2359 <= $tmp2361) goto $l2364; else goto $l2366;
    $l2372:;
    if ($tmp2359 < $tmp2361) goto $l2364; else goto $l2366;
    $l2369:;
    if ($tmp2363) goto $l2373; else goto $l2374;
    $l2373:;
    if ($tmp2359 >= $tmp2361) goto $l2364; else goto $l2366;
    $l2374:;
    if ($tmp2359 > $tmp2361) goto $l2364; else goto $l2366;
    $l2364:;
    {
        panda$core$Object* $tmp2377 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2358);
        panda$core$String* $tmp2378 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2377), p_out);
        arg2376 = $tmp2378;
        panda$core$Bit $tmp2380 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2358, offset2351);
        bool $tmp2379 = $tmp2380.value;
        if (!$tmp2379) goto $l2381;
        panda$core$Int64 $tmp2382 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2358, offset2351);
        panda$core$Object* $tmp2383 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType2326->subtypes, $tmp2382);
        panda$core$Object* $tmp2384 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2358);
        panda$core$Bit $tmp2385 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2383), ((org$pandalanguage$pandac$IRNode*) $tmp2384)->type);
        $tmp2379 = $tmp2385.value;
        $l2381:;
        panda$core$Bit $tmp2386 = { $tmp2379 };
        if ($tmp2386.value) {
        {
            panda$core$Object* $tmp2387 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2358);
            panda$core$Int64 $tmp2388 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2358, offset2351);
            panda$core$Object* $tmp2389 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType2326->subtypes, $tmp2388);
            panda$core$String* $tmp2390 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2376, ((org$pandalanguage$pandac$IRNode*) $tmp2387)->type, ((org$pandalanguage$pandac$Type*) $tmp2389), p_out);
            arg2376 = $tmp2390;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2348, ((panda$core$Object*) arg2376));
    }
    $l2367:;
    if ($tmp2370) goto $l2392; else goto $l2393;
    $l2392:;
    int64_t $tmp2394 = $tmp2361 - i2358.value;
    if ($tmp2363) goto $l2395; else goto $l2396;
    $l2395:;
    if ($tmp2394 >= $tmp2362) goto $l2391; else goto $l2366;
    $l2396:;
    if ($tmp2394 > $tmp2362) goto $l2391; else goto $l2366;
    $l2393:;
    int64_t $tmp2398 = i2358.value - $tmp2361;
    if ($tmp2363) goto $l2399; else goto $l2400;
    $l2399:;
    if ($tmp2398 >= -$tmp2362) goto $l2391; else goto $l2366;
    $l2400:;
    if ($tmp2398 > -$tmp2362) goto $l2391; else goto $l2366;
    $l2391:;
    i2358.value += $tmp2362;
    goto $l2364;
    $l2366:;
    panda$core$Int64 $tmp2403 = panda$collections$Array$get_count$R$panda$core$Int64(args2348);
    panda$core$Bit $tmp2404 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2403, ((panda$core$Int64) { 0 }));
    if ($tmp2404.value) {
    {
        panda$core$Object* $tmp2405 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2348, ((panda$core$Int64) { 0 }));
        refTarget2402 = ((panda$core$String*) $tmp2405);
    }
    }
    else {
    {
        refTarget2402 = NULL;
    }
    }
    panda$core$String* $tmp2407 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget2402, m2322, isSuper2328, p_out);
    methodRef2406 = $tmp2407;
    separator2408 = &$s2409;
    panda$core$Bit $tmp2410 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2322);
    if ($tmp2410.value) {
    {
        panda$core$Int64 $tmp2411 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2411;
        panda$core$String* $tmp2414 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2413, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        indirectVar2412 = $tmp2414;
        panda$core$String* $tmp2416 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType2415 = $tmp2416;
        panda$core$String* $tmp2418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2417, resultType2415);
        panda$core$String* $tmp2420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2418, &$s2419);
        panda$core$String* $tmp2421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2420, indirectVar2412);
        panda$core$String* $tmp2423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2421, &$s2422);
        (($fn2424) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2423);
        panda$core$String* $tmp2426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2425, methodRef2406);
        panda$core$String* $tmp2428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2426, &$s2427);
        panda$core$String* $tmp2429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2428, resultType2415);
        panda$core$String* $tmp2431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2429, &$s2430);
        panda$core$String* $tmp2432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2431, indirectVar2412);
        panda$core$String* $tmp2434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2432, &$s2433);
        (($fn2435) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2434);
        separator2408 = &$s2436;
    }
    }
    else {
    {
        panda$core$String* $tmp2438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2437, methodRef2406);
        panda$core$String* $tmp2440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2438, &$s2439);
        (($fn2441) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2440);
    }
    }
    {
        ITable* $tmp2443 = ((panda$collections$Iterable*) args2348)->$class->itable;
        while ($tmp2443->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2443 = $tmp2443->next;
        }
        $fn2445 $tmp2444 = $tmp2443->methods[0];
        panda$collections$Iterator* $tmp2446 = $tmp2444(((panda$collections$Iterable*) args2348));
        a$Iter2442 = $tmp2446;
        $l2447:;
        ITable* $tmp2449 = a$Iter2442->$class->itable;
        while ($tmp2449->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2449 = $tmp2449->next;
        }
        $fn2451 $tmp2450 = $tmp2449->methods[0];
        panda$core$Bit $tmp2452 = $tmp2450(a$Iter2442);
        panda$core$Bit $tmp2453 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2452);
        if (!$tmp2453.value) goto $l2448;
        {
            ITable* $tmp2455 = a$Iter2442->$class->itable;
            while ($tmp2455->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2455 = $tmp2455->next;
            }
            $fn2457 $tmp2456 = $tmp2455->methods[1];
            panda$core$Object* $tmp2458 = $tmp2456(a$Iter2442);
            a2454 = ((panda$core$String*) $tmp2458);
            (($fn2459) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2408);
            (($fn2460) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2454);
            separator2408 = &$s2461;
        }
        goto $l2447;
        $l2448:;
    }
    (($fn2463) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2462);
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test2475;
    panda$core$Bit $tmp2464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp2464.value);
    panda$core$Int64 $tmp2466 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2466, ((panda$core$Int64) { 2 }));
    bool $tmp2465 = $tmp2467.value;
    if ($tmp2465) goto $l2468;
    panda$core$Int64 $tmp2469 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2469, ((panda$core$Int64) { 3 }));
    $tmp2465 = $tmp2470.value;
    $l2468:;
    panda$core$Bit $tmp2471 = { $tmp2465 };
    PANDA_ASSERT($tmp2471.value);
    panda$core$Object* $tmp2472 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2473 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2474 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2472)->type, $tmp2473);
    PANDA_ASSERT($tmp2474.value);
    panda$core$Object* $tmp2476 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2477 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2476), p_out);
    test2475 = $tmp2477;
    panda$core$String* $tmp2479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2478, test2475);
    panda$core$String* $tmp2481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2479, &$s2480);
    (($fn2482) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2481);
    panda$core$Object* $tmp2483 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2483), p_out);
    (($fn2485) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2484);
    panda$core$Int64 $tmp2486 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2486, ((panda$core$Int64) { 3 }));
    if ($tmp2487.value) {
    {
        (($fn2489) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2488);
        panda$core$Object* $tmp2490 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2490), p_out);
        (($fn2492) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2491);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2496;
    panda$core$String* range2507;
    org$pandalanguage$pandac$IRNode* block2510;
    org$pandalanguage$pandac$Type* t2512;
    panda$core$String* llt2515;
    panda$core$String* indexType2517;
    org$pandalanguage$pandac$ClassDecl* cl2523;
    org$pandalanguage$pandac$FieldDecl* field2531;
    panda$core$String* numberType2537;
    panda$core$String* index2540;
    panda$core$String* start2542;
    panda$core$String* indexValuePtr2555;
    panda$core$String* end2570;
    panda$core$String* step2583;
    panda$core$String* inclusive2596;
    panda$core$String* loopStart2606;
    panda$core$String* loopBody2608;
    panda$core$String* loopEnd2610;
    panda$core$String* loopTest2612;
    panda$core$String* forwardEntry2616;
    panda$core$String* backwardEntry2618;
    panda$core$String* signPrefix2620;
    panda$core$String* direction2632;
    panda$core$String* forwardEntryInclusive2656;
    panda$core$String* forwardEntryExclusive2658;
    panda$core$String* backwardEntryInclusive2701;
    panda$core$String* backwardEntryExclusive2703;
    panda$core$String* backwardEntryExclusiveTest2732;
    panda$core$String* loopInc2748;
    panda$core$String* forwardLabel2750;
    panda$core$String* backwardLabel2752;
    panda$core$String* forwardDelta2765;
    panda$core$String* forwardInclusiveLabel2781;
    panda$core$String* forwardExclusiveLabel2783;
    panda$core$String* forwardExclusiveTest2812;
    panda$core$String* backwardDelta2828;
    panda$core$String* backwardInclusiveLabel2844;
    panda$core$String* backwardExclusiveLabel2846;
    panda$core$String* inc2889;
    panda$core$Bit $tmp2493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp2493.value);
    panda$core$Int64 $tmp2494 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp2495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2494, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2495.value);
    panda$core$Object* $tmp2497 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2496 = ((org$pandalanguage$pandac$IRNode*) $tmp2497);
    panda$core$Object* $tmp2498 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2498)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2499.value);
    panda$core$Object* $tmp2500 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2501 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp2500)->type->subtypes);
    panda$core$Bit $tmp2502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2501, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2502.value);
    panda$core$Object* $tmp2503 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2504 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp2503)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2506 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2504))->name, &$s2505);
    PANDA_ASSERT($tmp2506.value);
    panda$core$Object* $tmp2508 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2509 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2508), p_out);
    range2507 = $tmp2509;
    panda$core$Object* $tmp2511 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2510 = ((org$pandalanguage$pandac$IRNode*) $tmp2511);
    panda$core$Object* $tmp2513 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2514 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp2513)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2512 = ((org$pandalanguage$pandac$Type*) $tmp2514);
    panda$core$String* $tmp2516 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2512);
    llt2515 = $tmp2516;
    panda$core$Bit $tmp2518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2512->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2518.value) {
    {
        panda$core$Int64 $tmp2519 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(t2512->subtypes);
        panda$core$Bit $tmp2520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2519, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2520.value);
        panda$core$Object* $tmp2521 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(t2512->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2522 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2521));
        indexType2517 = $tmp2522;
    }
    }
    else {
    {
        indexType2517 = llt2515;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2524 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2512);
    cl2523 = $tmp2524;
    PANDA_ASSERT(((panda$core$Bit) { cl2523 != NULL }).value);
    panda$collections$ListView* $tmp2525 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2523);
    ITable* $tmp2526 = ((panda$collections$CollectionView*) $tmp2525)->$class->itable;
    while ($tmp2526->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2526 = $tmp2526->next;
    }
    $fn2528 $tmp2527 = $tmp2526->methods[0];
    panda$core$Int64 $tmp2529 = $tmp2527(((panda$collections$CollectionView*) $tmp2525));
    panda$core$Bit $tmp2530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2529, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2530.value);
    panda$collections$ListView* $tmp2532 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2523);
    ITable* $tmp2533 = $tmp2532->$class->itable;
    while ($tmp2533->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2533 = $tmp2533->next;
    }
    $fn2535 $tmp2534 = $tmp2533->methods[0];
    panda$core$Object* $tmp2536 = $tmp2534($tmp2532, ((panda$core$Int64) { 0 }));
    field2531 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2536);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2531);
    panda$core$String* $tmp2538 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2531->type);
    numberType2537 = $tmp2538;
    panda$core$Bit $tmp2539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2496->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2539.value);
    panda$core$String* $tmp2541 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2496->payload));
    index2540 = $tmp2541;
    panda$core$String* $tmp2543 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2542 = $tmp2543;
    panda$core$String* $tmp2545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2544, numberType2537);
    panda$core$String* $tmp2547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2545, &$s2546);
    panda$core$String* $tmp2548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2547, start2542);
    panda$core$String* $tmp2550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2548, &$s2549);
    panda$core$String* $tmp2551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2550, range2507);
    panda$core$String* $tmp2553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2551, &$s2552);
    (($fn2554) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2553);
    panda$core$String* $tmp2556 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2555 = $tmp2556;
    org$pandalanguage$pandac$Type* $tmp2558 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2523);
    panda$core$String* $tmp2559 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2558);
    panda$core$String* $tmp2560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2557, $tmp2559);
    panda$core$String* $tmp2562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2560, &$s2561);
    panda$core$String* $tmp2563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2562, index2540);
    panda$core$String* $tmp2565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2563, &$s2564);
    panda$core$String* $tmp2566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2565, start2542);
    panda$core$String* $tmp2568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2566, &$s2567);
    (($fn2569) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2568);
    panda$core$String* $tmp2571 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2570 = $tmp2571;
    panda$core$String* $tmp2573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2572, numberType2537);
    panda$core$String* $tmp2575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2573, &$s2574);
    panda$core$String* $tmp2576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2575, end2570);
    panda$core$String* $tmp2578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2576, &$s2577);
    panda$core$String* $tmp2579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2578, range2507);
    panda$core$String* $tmp2581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2579, &$s2580);
    (($fn2582) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2581);
    panda$core$String* $tmp2584 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    step2583 = $tmp2584;
    panda$core$String* $tmp2586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2585, numberType2537);
    panda$core$String* $tmp2588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2586, &$s2587);
    panda$core$String* $tmp2589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2588, step2583);
    panda$core$String* $tmp2591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2589, &$s2590);
    panda$core$String* $tmp2592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2591, range2507);
    panda$core$String* $tmp2594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2592, &$s2593);
    (($fn2595) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2594);
    panda$core$String* $tmp2597 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2596 = $tmp2597;
    panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2598, inclusive2596);
    panda$core$String* $tmp2601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2599, &$s2600);
    panda$core$String* $tmp2602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2601, range2507);
    panda$core$String* $tmp2604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2602, &$s2603);
    (($fn2605) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2604);
    panda$core$String* $tmp2607 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2606 = $tmp2607;
    panda$core$String* $tmp2609 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2608 = $tmp2609;
    panda$core$String* $tmp2611 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2610 = $tmp2611;
    panda$core$String* $tmp2613 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2612 = $tmp2613;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2614 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2614->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2614->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2614, ((panda$core$String*) p_f->payload), loopEnd2610, loopTest2612);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2614));
    panda$core$String* $tmp2617 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2616 = $tmp2617;
    panda$core$String* $tmp2619 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2618 = $tmp2619;
    panda$core$Bit $tmp2622 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2512)->name, &$s2621);
    if ($tmp2622.value) {
    {
        signPrefix2620 = &$s2623;
    }
    }
    else {
    {
        panda$core$Bit $tmp2626 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2512)->name, &$s2625);
        bool $tmp2624 = $tmp2626.value;
        if ($tmp2624) goto $l2627;
        panda$core$Bit $tmp2629 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2512)->name, &$s2628);
        $tmp2624 = $tmp2629.value;
        $l2627:;
        panda$core$Bit $tmp2630 = { $tmp2624 };
        PANDA_ASSERT($tmp2630.value);
        signPrefix2620 = &$s2631;
    }
    }
    panda$core$Bit $tmp2634 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix2620, &$s2633);
    if ($tmp2634.value) {
    {
        panda$core$String* $tmp2635 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
        direction2632 = $tmp2635;
        panda$core$String* $tmp2637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2636, direction2632);
        panda$core$String* $tmp2639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2637, &$s2638);
        panda$core$String* $tmp2640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2639, step2583);
        panda$core$String* $tmp2642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2640, &$s2641);
        (($fn2643) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2642);
    }
    }
    else {
    {
        direction2632 = &$s2644;
    }
    }
    panda$core$String* $tmp2646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2645, direction2632);
    panda$core$String* $tmp2648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2646, &$s2647);
    panda$core$String* $tmp2649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2648, forwardEntry2616);
    panda$core$String* $tmp2651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2649, &$s2650);
    panda$core$String* $tmp2652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2651, backwardEntry2618);
    panda$core$String* $tmp2654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2652, &$s2653);
    (($fn2655) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2654);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry2616, p_out);
    panda$core$String* $tmp2657 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2656 = $tmp2657;
    panda$core$String* $tmp2659 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2658 = $tmp2659;
    panda$core$String* $tmp2661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2660, inclusive2596);
    panda$core$String* $tmp2663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2661, &$s2662);
    panda$core$String* $tmp2664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2663, forwardEntryInclusive2656);
    panda$core$String* $tmp2666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2664, &$s2665);
    panda$core$String* $tmp2668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2667, forwardEntryExclusive2658);
    panda$core$String* $tmp2670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2668, &$s2669);
    panda$core$String* $tmp2671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2666, $tmp2670);
    (($fn2672) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2671);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2656, p_out);
    panda$core$String* $tmp2674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2673, start2542);
    panda$core$String* $tmp2676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2674, &$s2675);
    panda$core$String* $tmp2677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2676, end2570);
    panda$core$String* $tmp2679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2677, &$s2678);
    panda$core$String* $tmp2680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2679, loopStart2606);
    panda$core$String* $tmp2682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2680, &$s2681);
    panda$core$String* $tmp2683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2682, loopEnd2610);
    panda$core$String* $tmp2685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2683, &$s2684);
    (($fn2686) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2685);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2658, p_out);
    panda$core$String* $tmp2688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2687, start2542);
    panda$core$String* $tmp2690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2688, &$s2689);
    panda$core$String* $tmp2691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2690, end2570);
    panda$core$String* $tmp2693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2691, &$s2692);
    panda$core$String* $tmp2694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2693, loopStart2606);
    panda$core$String* $tmp2696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2694, &$s2695);
    panda$core$String* $tmp2697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2696, loopEnd2610);
    panda$core$String* $tmp2699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2697, &$s2698);
    (($fn2700) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2699);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry2618, p_out);
    panda$core$String* $tmp2702 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive2701 = $tmp2702;
    panda$core$String* $tmp2704 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive2703 = $tmp2704;
    panda$core$String* $tmp2706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2705, inclusive2596);
    panda$core$String* $tmp2708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2706, &$s2707);
    panda$core$String* $tmp2709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2708, backwardEntryInclusive2701);
    panda$core$String* $tmp2711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2709, &$s2710);
    panda$core$String* $tmp2713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2712, backwardEntryExclusive2703);
    panda$core$String* $tmp2715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2713, &$s2714);
    panda$core$String* $tmp2716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2711, $tmp2715);
    (($fn2717) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2716);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive2701, p_out);
    panda$core$String* $tmp2719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2718, start2542);
    panda$core$String* $tmp2721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2719, &$s2720);
    panda$core$String* $tmp2722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2721, end2570);
    panda$core$String* $tmp2724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2722, &$s2723);
    panda$core$String* $tmp2725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2724, loopStart2606);
    panda$core$String* $tmp2727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2725, &$s2726);
    panda$core$String* $tmp2728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2727, loopEnd2610);
    panda$core$String* $tmp2730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2728, &$s2729);
    (($fn2731) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2730);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive2703, p_out);
    panda$core$String* $tmp2733 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest2732 = $tmp2733;
    panda$core$String* $tmp2735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2734, start2542);
    panda$core$String* $tmp2737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2735, &$s2736);
    panda$core$String* $tmp2738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2737, end2570);
    panda$core$String* $tmp2740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2738, &$s2739);
    panda$core$String* $tmp2741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2740, loopStart2606);
    panda$core$String* $tmp2743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2741, &$s2742);
    panda$core$String* $tmp2744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2743, loopEnd2610);
    panda$core$String* $tmp2746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2744, &$s2745);
    (($fn2747) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2746);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2606, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2510, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2612, p_out);
    panda$core$String* $tmp2749 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2748 = $tmp2749;
    panda$core$String* $tmp2751 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel2750 = $tmp2751;
    panda$core$String* $tmp2753 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel2752 = $tmp2753;
    panda$core$String* $tmp2755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2754, direction2632);
    panda$core$String* $tmp2757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2755, &$s2756);
    panda$core$String* $tmp2758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2757, forwardLabel2750);
    panda$core$String* $tmp2760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2758, &$s2759);
    panda$core$String* $tmp2761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2760, backwardLabel2752);
    panda$core$String* $tmp2763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2761, &$s2762);
    (($fn2764) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2763);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel2750, p_out);
    panda$core$String* $tmp2766 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2765 = $tmp2766;
    panda$core$String* $tmp2768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2767, numberType2537);
    panda$core$String* $tmp2770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2768, &$s2769);
    panda$core$String* $tmp2771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2770, forwardDelta2765);
    panda$core$String* $tmp2773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2771, &$s2772);
    panda$core$String* $tmp2774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2773, end2570);
    panda$core$String* $tmp2776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2774, &$s2775);
    panda$core$String* $tmp2777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2776, index2540);
    panda$core$String* $tmp2779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2777, &$s2778);
    (($fn2780) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2779);
    panda$core$String* $tmp2782 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2781 = $tmp2782;
    panda$core$String* $tmp2784 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2783 = $tmp2784;
    panda$core$String* $tmp2786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2785, inclusive2596);
    panda$core$String* $tmp2788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2786, &$s2787);
    panda$core$String* $tmp2789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2788, forwardInclusiveLabel2781);
    panda$core$String* $tmp2791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2789, &$s2790);
    panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2792, forwardExclusiveLabel2783);
    panda$core$String* $tmp2795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2793, &$s2794);
    panda$core$String* $tmp2796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2791, $tmp2795);
    (($fn2797) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2796);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2781, p_out);
    panda$core$String* $tmp2799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2798, forwardDelta2765);
    panda$core$String* $tmp2801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2799, &$s2800);
    panda$core$String* $tmp2802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2801, step2583);
    panda$core$String* $tmp2804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2802, &$s2803);
    panda$core$String* $tmp2805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2804, loopInc2748);
    panda$core$String* $tmp2807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2805, &$s2806);
    panda$core$String* $tmp2808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2807, loopEnd2610);
    panda$core$String* $tmp2810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2808, &$s2809);
    (($fn2811) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2810);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2783, p_out);
    panda$core$String* $tmp2813 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2812 = $tmp2813;
    panda$core$String* $tmp2815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2814, forwardDelta2765);
    panda$core$String* $tmp2817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2815, &$s2816);
    panda$core$String* $tmp2818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2817, step2583);
    panda$core$String* $tmp2820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2818, &$s2819);
    panda$core$String* $tmp2821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2820, loopInc2748);
    panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2821, &$s2822);
    panda$core$String* $tmp2824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2823, loopEnd2610);
    panda$core$String* $tmp2826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2824, &$s2825);
    (($fn2827) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2826);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel2752, p_out);
    panda$core$String* $tmp2829 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta2828 = $tmp2829;
    panda$core$String* $tmp2831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2830, numberType2537);
    panda$core$String* $tmp2833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2831, &$s2832);
    panda$core$String* $tmp2834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2833, backwardDelta2828);
    panda$core$String* $tmp2836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2834, &$s2835);
    panda$core$String* $tmp2837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2836, index2540);
    panda$core$String* $tmp2839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2837, &$s2838);
    panda$core$String* $tmp2840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2839, end2570);
    panda$core$String* $tmp2842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2840, &$s2841);
    (($fn2843) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2842);
    panda$core$String* $tmp2845 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel2844 = $tmp2845;
    panda$core$String* $tmp2847 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel2846 = $tmp2847;
    panda$core$String* $tmp2849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2848, inclusive2596);
    panda$core$String* $tmp2851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2849, &$s2850);
    panda$core$String* $tmp2852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2851, backwardInclusiveLabel2844);
    panda$core$String* $tmp2854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2852, &$s2853);
    panda$core$String* $tmp2856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2855, backwardExclusiveLabel2846);
    panda$core$String* $tmp2858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2856, &$s2857);
    panda$core$String* $tmp2859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2854, $tmp2858);
    (($fn2860) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2859);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel2844, p_out);
    panda$core$String* $tmp2862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2861, backwardDelta2828);
    panda$core$String* $tmp2864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2862, &$s2863);
    panda$core$String* $tmp2865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2864, step2583);
    panda$core$String* $tmp2867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2865, &$s2866);
    panda$core$String* $tmp2868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2867, loopInc2748);
    panda$core$String* $tmp2870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2868, &$s2869);
    panda$core$String* $tmp2871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2870, loopEnd2610);
    panda$core$String* $tmp2873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2871, &$s2872);
    (($fn2874) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2873);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel2846, p_out);
    panda$core$String* $tmp2876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2875, backwardDelta2828);
    panda$core$String* $tmp2878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2876, &$s2877);
    panda$core$String* $tmp2879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2878, step2583);
    panda$core$String* $tmp2881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2879, &$s2880);
    panda$core$String* $tmp2882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2881, loopInc2748);
    panda$core$String* $tmp2884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2882, &$s2883);
    panda$core$String* $tmp2885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2884, loopEnd2610);
    panda$core$String* $tmp2887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2885, &$s2886);
    (($fn2888) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2887);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2748, p_out);
    panda$core$String* $tmp2890 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc2889 = $tmp2890;
    panda$core$String* $tmp2892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2891, index2540);
    panda$core$String* $tmp2894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2892, &$s2893);
    panda$core$String* $tmp2895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2894, step2583);
    panda$core$String* $tmp2897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2895, &$s2896);
    (($fn2898) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2897);
    panda$core$String* $tmp2900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2899, loopStart2606);
    panda$core$String* $tmp2902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2900, &$s2901);
    (($fn2903) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2902);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2610, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_w, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart2910;
    panda$core$String* loopEnd2912;
    panda$core$Bit $tmp2904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp2904.value);
    panda$core$Int64 $tmp2905 = panda$collections$Array$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp2906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2905, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2906.value);
    panda$core$Object* $tmp2907 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2908 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2909 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2907)->type, $tmp2908);
    PANDA_ASSERT($tmp2909.value);
    panda$core$String* $tmp2911 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2910 = $tmp2911;
    panda$core$String* $tmp2913 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2912 = $tmp2913;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2914 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2914->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2914->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2914, ((panda$core$String*) p_w->payload), loopEnd2912, loopStart2910);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2914));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2910, p_out);
    panda$core$Object* $tmp2917 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2918 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2917), p_out);
    panda$core$String* $tmp2919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2916, $tmp2918);
    panda$core$String* $tmp2921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2919, &$s2920);
    panda$core$String* $tmp2922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2921, loopEnd2912);
    panda$core$String* $tmp2924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2922, &$s2923);
    (($fn2925) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2924);
    panda$core$Object* $tmp2926 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2926), p_out);
    panda$core$String* $tmp2928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2927, loopStart2910);
    panda$core$String* $tmp2930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2928, &$s2929);
    (($fn2931) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2930);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2912, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart2938;
    panda$core$String* loopEnd2940;
    panda$core$Bit $tmp2932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp2932.value);
    panda$core$Int64 $tmp2933 = panda$collections$Array$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp2934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2933, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2934.value);
    panda$core$Object* $tmp2935 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp2936 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2937 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2935)->type, $tmp2936);
    PANDA_ASSERT($tmp2937.value);
    panda$core$String* $tmp2939 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2938 = $tmp2939;
    panda$core$String* $tmp2941 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2940 = $tmp2941;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2942 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2942->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2942->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2942, ((panda$core$String*) p_d->payload), loopEnd2940, loopStart2938);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2942));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2938, p_out);
    panda$core$Object* $tmp2944 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2944), p_out);
    panda$core$Object* $tmp2946 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2947 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2946), p_out);
    panda$core$String* $tmp2948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2945, $tmp2947);
    panda$core$String* $tmp2950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2948, &$s2949);
    panda$core$String* $tmp2951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2950, loopStart2938);
    panda$core$String* $tmp2953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2951, &$s2952);
    (($fn2954) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2953);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2940, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart2958;
    panda$core$String* loopEnd2960;
    panda$core$Bit $tmp2955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp2955.value);
    panda$core$Int64 $tmp2956 = panda$collections$Array$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp2957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2956, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2957.value);
    panda$core$String* $tmp2959 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2958 = $tmp2959;
    panda$core$String* $tmp2961 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2960 = $tmp2961;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2962 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2962->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2962->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2962, ((panda$core$String*) p_l->payload), loopEnd2960, loopStart2958);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2962));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2958, p_out);
    (($fn2965) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2964);
    panda$core$Object* $tmp2966 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2966), p_out);
    (($fn2968) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2967);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2960, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v2969;
    switch (p_target->kind.value) {
        case 1016:
        {
            v2969 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp2971 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v2969->type);
            panda$core$String* $tmp2972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2970, $tmp2971);
            panda$core$String* $tmp2974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2972, &$s2973);
            panda$core$String* $tmp2975 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v2969);
            panda$core$String* $tmp2976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2974, $tmp2975);
            panda$core$String* $tmp2978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2976, &$s2977);
            (($fn2979) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2978);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp2981 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v2969);
                panda$core$String* $tmp2982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2980, $tmp2981);
                panda$core$String* $tmp2984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2982, &$s2983);
                panda$core$String* $tmp2985 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp2986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2984, $tmp2985);
                panda$core$String* $tmp2988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2986, &$s2987);
                (($fn2989) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2988);
            }
            }
        }
        break;
        case 1022:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* decl$Iter3003;
    org$pandalanguage$pandac$IRNode* decl3015;
    panda$core$Bit $tmp2993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp2992 = $tmp2993.value;
    if ($tmp2992) goto $l2994;
    panda$core$Bit $tmp2995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp2992 = $tmp2995.value;
    $l2994:;
    panda$core$Bit $tmp2996 = { $tmp2992 };
    bool $tmp2991 = $tmp2996.value;
    if ($tmp2991) goto $l2997;
    panda$core$Bit $tmp2998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp2991 = $tmp2998.value;
    $l2997:;
    panda$core$Bit $tmp2999 = { $tmp2991 };
    bool $tmp2990 = $tmp2999.value;
    if ($tmp2990) goto $l3000;
    panda$core$Bit $tmp3001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp2990 = $tmp3001.value;
    $l3000:;
    panda$core$Bit $tmp3002 = { $tmp2990 };
    PANDA_ASSERT($tmp3002.value);
    {
        ITable* $tmp3004 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3004->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3004 = $tmp3004->next;
        }
        $fn3006 $tmp3005 = $tmp3004->methods[0];
        panda$collections$Iterator* $tmp3007 = $tmp3005(((panda$collections$Iterable*) p_v->children));
        decl$Iter3003 = $tmp3007;
        $l3008:;
        ITable* $tmp3010 = decl$Iter3003->$class->itable;
        while ($tmp3010->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3010 = $tmp3010->next;
        }
        $fn3012 $tmp3011 = $tmp3010->methods[0];
        panda$core$Bit $tmp3013 = $tmp3011(decl$Iter3003);
        panda$core$Bit $tmp3014 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3013);
        if (!$tmp3014.value) goto $l3009;
        {
            ITable* $tmp3016 = decl$Iter3003->$class->itable;
            while ($tmp3016->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3016 = $tmp3016->next;
            }
            $fn3018 $tmp3017 = $tmp3016->methods[1];
            panda$core$Object* $tmp3019 = $tmp3017(decl$Iter3003);
            decl3015 = ((org$pandalanguage$pandac$IRNode*) $tmp3019);
            panda$core$Bit $tmp3020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl3015->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp3020.value);
            panda$core$Int64 $tmp3021 = panda$collections$Array$get_count$R$panda$core$Int64(decl3015->children);
            panda$core$Bit $tmp3022 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3021, ((panda$core$Int64) { 1 }));
            if ($tmp3022.value) {
            {
                panda$core$Object* $tmp3023 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3015->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp3024 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3015->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3023), ((org$pandalanguage$pandac$IRNode*) $tmp3024), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp3025 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3015->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3025), NULL, p_out);
            }
            }
        }
        goto $l3008;
        $l3009:;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3029;
    panda$core$String* result3039;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp3026 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp3027 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp3026, p_out);
            return $tmp3027;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp3028 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp3028;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp3030 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3031 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3030), p_out);
            base3029 = $tmp3031;
            panda$core$String* $tmp3033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3032, base3029);
            panda$core$String* $tmp3035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3033, &$s3034);
            panda$core$String* $tmp3036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3035, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name);
            panda$core$String* $tmp3038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3036, &$s3037);
            return $tmp3038;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp3040 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3041 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3040), p_out);
            result3039 = $tmp3041;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) result3039));
            return result3039;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue3045;
    panda$core$String* value3048;
    panda$core$String* t3049;
    panda$core$Int64 op3052;
    panda$core$String* right3054;
    panda$core$Bit $tmp3042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp3042.value);
    panda$core$Int64 $tmp3043 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3043, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3044.value);
    panda$core$Object* $tmp3046 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3047 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3046), p_out);
    lvalue3045 = $tmp3047;
    panda$core$Object* $tmp3050 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3051 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3050)->type);
    t3049 = $tmp3051;
    op3052 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp3053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op3052, ((panda$core$Int64) { 73 }));
    if ($tmp3053.value) {
    {
        panda$core$Object* $tmp3055 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp3056 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3055), p_out);
        right3054 = $tmp3056;
        value3048 = right3054;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp3058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3057, lvalue3045);
    panda$core$String* $tmp3060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3058, &$s3059);
    panda$core$String* $tmp3061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3060, value3048);
    panda$core$String* $tmp3063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3061, &$s3062);
    (($fn3064) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3063);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $tmp3065 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3066 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3065, ((panda$core$Int64) { 1 }));
    if ($tmp3066.value) {
    {
        panda$core$Object* $tmp3068 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3069 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3068), p_out);
        panda$core$String* $tmp3070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3067, $tmp3069);
        panda$core$String* $tmp3072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3070, &$s3071);
        (($fn3073) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3072);
    }
    }
    else {
    {
        panda$core$Int64 $tmp3074 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp3075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3074, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp3075.value);
        (($fn3077) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3076);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3081;
    panda$core$Int64 $tmp3078 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp3079 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3078, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3079.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp3080 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3080);
    }
    }
    panda$core$Int64 $tmp3082 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3081, ((panda$core$Int64) { 0 }), $tmp3082, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3084 = $tmp3081.start.value;
    panda$core$Int64 i3083 = { $tmp3084 };
    int64_t $tmp3086 = $tmp3081.end.value;
    int64_t $tmp3087 = $tmp3081.step.value;
    bool $tmp3088 = $tmp3081.inclusive.value;
    bool $tmp3095 = $tmp3087 > 0;
    if ($tmp3095) goto $l3093; else goto $l3094;
    $l3093:;
    if ($tmp3088) goto $l3096; else goto $l3097;
    $l3096:;
    if ($tmp3084 <= $tmp3086) goto $l3089; else goto $l3091;
    $l3097:;
    if ($tmp3084 < $tmp3086) goto $l3089; else goto $l3091;
    $l3094:;
    if ($tmp3088) goto $l3098; else goto $l3099;
    $l3098:;
    if ($tmp3084 >= $tmp3086) goto $l3089; else goto $l3091;
    $l3099:;
    if ($tmp3084 > $tmp3086) goto $l3089; else goto $l3091;
    $l3089:;
    {
        panda$core$Object* $tmp3102 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3083);
        bool $tmp3101 = ((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3102)->loopLabel != NULL }).value;
        if (!$tmp3101) goto $l3103;
        panda$core$Object* $tmp3104 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3083);
        panda$core$Bit $tmp3105 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3104)->loopLabel, p_name);
        $tmp3101 = $tmp3105.value;
        $l3103:;
        panda$core$Bit $tmp3106 = { $tmp3101 };
        if ($tmp3106.value) {
        {
            panda$core$Object* $tmp3107 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3083);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3107);
        }
        }
    }
    $l3092:;
    if ($tmp3095) goto $l3109; else goto $l3110;
    $l3109:;
    int64_t $tmp3111 = $tmp3086 - i3083.value;
    if ($tmp3088) goto $l3112; else goto $l3113;
    $l3112:;
    if ($tmp3111 >= $tmp3087) goto $l3108; else goto $l3091;
    $l3113:;
    if ($tmp3111 > $tmp3087) goto $l3108; else goto $l3091;
    $l3110:;
    int64_t $tmp3115 = i3083.value - $tmp3086;
    if ($tmp3088) goto $l3116; else goto $l3117;
    $l3116:;
    if ($tmp3115 >= -$tmp3087) goto $l3108; else goto $l3091;
    $l3117:;
    if ($tmp3115 > -$tmp3087) goto $l3108; else goto $l3091;
    $l3108:;
    i3083.value += $tmp3087;
    goto $l3089;
    $l3091:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3119;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3120 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc3119 = $tmp3120;
    panda$core$String* $tmp3122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3121, desc3119->breakLabel);
    panda$core$String* $tmp3124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3122, &$s3123);
    (($fn3125) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3124);
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3126;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3127 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc3126 = $tmp3127;
    panda$core$String* $tmp3129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3128, desc3126->continueLabel);
    panda$core$String* $tmp3131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3129, &$s3130);
    (($fn3132) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3131);
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp3133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp3133.value);
    panda$core$Int64 $tmp3135 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3135, ((panda$core$Int64) { 1 }));
    bool $tmp3134 = $tmp3136.value;
    if ($tmp3134) goto $l3137;
    panda$core$Int64 $tmp3138 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3138, ((panda$core$Int64) { 2 }));
    $tmp3134 = $tmp3139.value;
    $l3137:;
    panda$core$Bit $tmp3140 = { $tmp3134 };
    PANDA_ASSERT($tmp3140.value);
    panda$core$Object* $tmp3142 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3143 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3142), p_out);
    panda$core$String* $tmp3144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3141, $tmp3143);
    panda$core$String* $tmp3146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3144, &$s3145);
    (($fn3147) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3146);
}
void org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3156;
    org$pandalanguage$pandac$IRNode* w3176;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3179;
    panda$core$Object* $tmp3149 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3150 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3149), p_out);
    panda$core$String* $tmp3151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3148, $tmp3150);
    panda$core$String* $tmp3153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3151, &$s3152);
    (($fn3154) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3153);
    panda$core$Int64 $tmp3155 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3155;
    panda$core$Int64 $tmp3157 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3156, ((panda$core$Int64) { 1 }), $tmp3157, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3159 = $tmp3156.start.value;
    panda$core$Int64 i3158 = { $tmp3159 };
    int64_t $tmp3161 = $tmp3156.end.value;
    int64_t $tmp3162 = $tmp3156.step.value;
    bool $tmp3163 = $tmp3156.inclusive.value;
    bool $tmp3170 = $tmp3162 > 0;
    if ($tmp3170) goto $l3168; else goto $l3169;
    $l3168:;
    if ($tmp3163) goto $l3171; else goto $l3172;
    $l3171:;
    if ($tmp3159 <= $tmp3161) goto $l3164; else goto $l3166;
    $l3172:;
    if ($tmp3159 < $tmp3161) goto $l3164; else goto $l3166;
    $l3169:;
    if ($tmp3163) goto $l3173; else goto $l3174;
    $l3173:;
    if ($tmp3159 >= $tmp3161) goto $l3164; else goto $l3166;
    $l3174:;
    if ($tmp3159 > $tmp3161) goto $l3164; else goto $l3166;
    $l3164:;
    {
        panda$core$Object* $tmp3177 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i3158);
        w3176 = ((org$pandalanguage$pandac$IRNode*) $tmp3177);
        panda$core$Bit $tmp3178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3176->kind, ((panda$core$Int64) { 1042 }));
        if ($tmp3178.value) {
        {
            panda$core$Int64 $tmp3180 = panda$collections$Array$get_count$R$panda$core$Int64(w3176->children);
            panda$core$Int64 $tmp3181 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3180, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3179, ((panda$core$Int64) { 0 }), $tmp3181, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp3183 = $tmp3179.start.value;
            panda$core$Int64 j3182 = { $tmp3183 };
            int64_t $tmp3185 = $tmp3179.end.value;
            int64_t $tmp3186 = $tmp3179.step.value;
            bool $tmp3187 = $tmp3179.inclusive.value;
            bool $tmp3194 = $tmp3186 > 0;
            if ($tmp3194) goto $l3192; else goto $l3193;
            $l3192:;
            if ($tmp3187) goto $l3195; else goto $l3196;
            $l3195:;
            if ($tmp3183 <= $tmp3185) goto $l3188; else goto $l3190;
            $l3196:;
            if ($tmp3183 < $tmp3185) goto $l3188; else goto $l3190;
            $l3193:;
            if ($tmp3187) goto $l3197; else goto $l3198;
            $l3197:;
            if ($tmp3183 >= $tmp3185) goto $l3188; else goto $l3190;
            $l3198:;
            if ($tmp3183 > $tmp3185) goto $l3188; else goto $l3190;
            $l3188:;
            {
                panda$core$Object* $tmp3201 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w3176->children, j3182);
                panda$core$UInt64 $tmp3202 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3201));
                panda$core$String* $tmp3203 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3200, ((panda$core$Object*) wrap_panda$core$UInt64($tmp3202)));
                panda$core$String* $tmp3205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3203, &$s3204);
                (($fn3206) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3205);
            }
            $l3191:;
            if ($tmp3194) goto $l3208; else goto $l3209;
            $l3208:;
            int64_t $tmp3210 = $tmp3185 - j3182.value;
            if ($tmp3187) goto $l3211; else goto $l3212;
            $l3211:;
            if ($tmp3210 >= $tmp3186) goto $l3207; else goto $l3190;
            $l3212:;
            if ($tmp3210 > $tmp3186) goto $l3207; else goto $l3190;
            $l3209:;
            int64_t $tmp3214 = j3182.value - $tmp3185;
            if ($tmp3187) goto $l3215; else goto $l3216;
            $l3215:;
            if ($tmp3214 >= -$tmp3186) goto $l3207; else goto $l3190;
            $l3216:;
            if ($tmp3214 > -$tmp3186) goto $l3207; else goto $l3190;
            $l3207:;
            j3182.value += $tmp3186;
            goto $l3188;
            $l3190:;
            panda$core$Int64 $tmp3218 = panda$collections$Array$get_count$R$panda$core$Int64(w3176->children);
            panda$core$Int64 $tmp3219 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3218, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp3220 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w3176->children, $tmp3219);
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3220), p_out);
            (($fn3222) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3221);
        }
        }
        else {
        {
            panda$core$Bit $tmp3223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3176->kind, ((panda$core$Int64) { 1043 }));
            PANDA_ASSERT($tmp3223.value);
            panda$core$Int64 $tmp3224 = panda$collections$Array$get_count$R$panda$core$Int64(w3176->children);
            panda$core$Bit $tmp3225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3224, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp3225.value);
            (($fn3227) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3226);
            panda$core$Object* $tmp3228 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w3176->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3228), p_out);
        }
        }
    }
    $l3167:;
    if ($tmp3170) goto $l3230; else goto $l3231;
    $l3230:;
    int64_t $tmp3232 = $tmp3161 - i3158.value;
    if ($tmp3163) goto $l3233; else goto $l3234;
    $l3233:;
    if ($tmp3232 >= $tmp3162) goto $l3229; else goto $l3166;
    $l3234:;
    if ($tmp3232 > $tmp3162) goto $l3229; else goto $l3166;
    $l3231:;
    int64_t $tmp3236 = i3158.value - $tmp3161;
    if ($tmp3163) goto $l3237; else goto $l3238;
    $l3237:;
    if ($tmp3236 >= -$tmp3162) goto $l3229; else goto $l3166;
    $l3238:;
    if ($tmp3236 > -$tmp3162) goto $l3229; else goto $l3166;
    $l3229:;
    i3158.value += $tmp3162;
    goto $l3164;
    $l3166:;
    panda$core$Int64 $tmp3240 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3240;
    (($fn3242) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3241);
}
void org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    switch (p_stmt->kind.value) {
        case 1023:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1000:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1005:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, p_stmt, NULL, p_out);
        }
        break;
        case 1012:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1029:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1013:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1014:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1015:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1017:
        case 1018:
        case 1019:
        case 1020:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1008:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1006:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1007:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1034:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1042:
        {
            org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result3243;
    org$pandalanguage$pandac$Type* $tmp3244 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp3245 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3244);
    result3243 = $tmp3245;
    panda$core$Bit $tmp3247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp3246 = $tmp3247.value;
    if (!$tmp3246) goto $l3248;
    panda$core$Bit $tmp3250 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result3243, &$s3249);
    panda$core$Bit $tmp3251 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3250);
    $tmp3246 = $tmp3251.value;
    $l3248:;
    panda$core$Bit $tmp3252 = { $tmp3246 };
    if ($tmp3252.value) {
    {
        panda$core$String* $tmp3254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3243, &$s3253);
        return $tmp3254;
    }
    }
    return result3243;
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator3268;
    panda$collections$Iterator* p$Iter3279;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3291;
    panda$io$MemoryOutputStream* bodyBuffer3314;
    panda$io$IndentedOutputStream* indentedBody3317;
    panda$collections$Iterator* s$Iter3320;
    org$pandalanguage$pandac$IRNode* s3332;
    panda$core$Object* $tmp3255 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3255)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s3256;
    (($fn3257) self->methodHeaderBuffer->$class->vtable[20])(self->methodHeaderBuffer);
    panda$core$String* $tmp3259 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp3260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3258, $tmp3259);
    panda$core$String* $tmp3262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3260, &$s3261);
    panda$core$String* $tmp3263 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp3264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3262, $tmp3263);
    panda$core$String* $tmp3266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3264, &$s3265);
    (($fn3267) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3266);
    separator3268 = &$s3269;
    panda$core$Bit $tmp3270 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp3271 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3270);
    if ($tmp3271.value) {
    {
        panda$core$String* $tmp3273 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp3274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3272, $tmp3273);
        panda$core$String* $tmp3276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3274, &$s3275);
        (($fn3277) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3276);
        separator3268 = &$s3278;
    }
    }
    {
        ITable* $tmp3280 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3280->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3280 = $tmp3280->next;
        }
        $fn3282 $tmp3281 = $tmp3280->methods[0];
        panda$collections$Iterator* $tmp3283 = $tmp3281(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3279 = $tmp3283;
        $l3284:;
        ITable* $tmp3286 = p$Iter3279->$class->itable;
        while ($tmp3286->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3286 = $tmp3286->next;
        }
        $fn3288 $tmp3287 = $tmp3286->methods[0];
        panda$core$Bit $tmp3289 = $tmp3287(p$Iter3279);
        panda$core$Bit $tmp3290 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3289);
        if (!$tmp3290.value) goto $l3285;
        {
            ITable* $tmp3292 = p$Iter3279->$class->itable;
            while ($tmp3292->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3292 = $tmp3292->next;
            }
            $fn3294 $tmp3293 = $tmp3292->methods[1];
            panda$core$Object* $tmp3295 = $tmp3293(p$Iter3279);
            p3291 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3295);
            panda$core$String* $tmp3297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3296, separator3268);
            panda$core$String* $tmp3299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3297, &$s3298);
            panda$core$String* $tmp3300 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p3291->type);
            panda$core$String* $tmp3301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3299, $tmp3300);
            panda$core$String* $tmp3303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3301, &$s3302);
            panda$core$String* $tmp3304 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p3291->name);
            panda$core$String* $tmp3305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3303, $tmp3304);
            panda$core$String* $tmp3307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3305, &$s3306);
            (($fn3308) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3307);
            separator3268 = &$s3309;
        }
        goto $l3284;
        $l3285:;
    }
    (($fn3311) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3310);
    panda$core$Int64 $tmp3312 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3312;
    panda$core$Bit $tmp3313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp3313.value);
    panda$io$MemoryOutputStream* $tmp3315 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp3315->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp3315->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp3315);
    bodyBuffer3314 = $tmp3315;
    panda$io$IndentedOutputStream* $tmp3318 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp3318->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3318->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3318, ((panda$io$OutputStream*) bodyBuffer3314));
    indentedBody3317 = $tmp3318;
    {
        ITable* $tmp3321 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp3321->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3321 = $tmp3321->next;
        }
        $fn3323 $tmp3322 = $tmp3321->methods[0];
        panda$collections$Iterator* $tmp3324 = $tmp3322(((panda$collections$Iterable*) p_body->children));
        s$Iter3320 = $tmp3324;
        $l3325:;
        ITable* $tmp3327 = s$Iter3320->$class->itable;
        while ($tmp3327->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3327 = $tmp3327->next;
        }
        $fn3329 $tmp3328 = $tmp3327->methods[0];
        panda$core$Bit $tmp3330 = $tmp3328(s$Iter3320);
        panda$core$Bit $tmp3331 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3330);
        if (!$tmp3331.value) goto $l3326;
        {
            ITable* $tmp3333 = s$Iter3320->$class->itable;
            while ($tmp3333->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3333 = $tmp3333->next;
            }
            $fn3335 $tmp3334 = $tmp3333->methods[1];
            panda$core$Object* $tmp3336 = $tmp3334(s$Iter3320);
            s3332 = ((org$pandalanguage$pandac$IRNode*) $tmp3336);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s3332, indentedBody3317);
        }
        goto $l3325;
        $l3326:;
    }
    panda$core$String* $tmp3338 = (($fn3337) self->methodHeaderBuffer->$class->vtable[0])(self->methodHeaderBuffer);
    (($fn3339) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3338);
    panda$core$String* $tmp3341 = (($fn3340) bodyBuffer3314->$class->vtable[0])(bodyBuffer3314);
    (($fn3342) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3341);
    panda$core$Int64 $tmp3343 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3343;
    (($fn3345) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3344);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path3352;
    PANDA_ASSERT(((panda$core$Bit) { self->currentClass == NULL }).value);
    self->currentClass = p_cl;
    panda$collections$Set$clear(self->imports);
    (($fn3346) self->strings->$class->vtable[20])(self->strings);
    (($fn3347) self->declarations->$class->vtable[20])(self->declarations);
    (($fn3348) self->types->$class->vtable[20])(self->types);
    (($fn3349) self->methodsBuffer->$class->vtable[20])(self->methodsBuffer);
    (($fn3350) self->wrapperShimsBuffer->$class->vtable[20])(self->wrapperShimsBuffer);
    (($fn3351) self->shimsBuffer->$class->vtable[20])(self->shimsBuffer);
    panda$collections$Set$clear(self->declared);
    panda$collections$Set$clear(self->writtenTypes);
    panda$collections$Set$clear(self->writtenWrappers);
    panda$collections$HashMap$clear(self->classConstants);
    panda$collections$IdentityMap$clear(self->variableNames);
    self->varCount = ((panda$core$Int64) { 0 });
    panda$collections$HashMap$clear(self->reusedValues);
    panda$collections$IdentityMap$clear(self->methodShims);
    panda$io$File* $tmp3354 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self->hCodeGen, p_cl, &$s3353);
    path3352 = $tmp3354;
    panda$io$File* $tmp3355 = panda$io$File$parent$R$panda$io$File$Q(path3352);
    panda$io$File$createDirectories($tmp3355);
    panda$io$IndentedOutputStream* $tmp3356 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp3356->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3356->refCount.value = 1;
    panda$io$OutputStream* $tmp3358 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path3352);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3356, $tmp3358);
    self->out = $tmp3356;
    org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Bit $tmp3359 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp3359.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
        panda$core$String* $tmp3361 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3360, $tmp3361);
        panda$core$String* $tmp3364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3362, &$s3363);
        panda$core$String* $tmp3365 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3364, $tmp3365);
        panda$core$String* $tmp3368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3366, &$s3367);
        panda$core$String* $tmp3370 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3369, $tmp3370);
        panda$core$String* $tmp3373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3371, &$s3372);
        panda$core$String* $tmp3374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3368, $tmp3373);
        (($fn3375) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3374);
        panda$core$String* $tmp3377 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3376, $tmp3377);
        panda$core$String* $tmp3380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3378, &$s3379);
        panda$core$String* $tmp3382 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3381, $tmp3382);
        panda$core$String* $tmp3385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3383, &$s3384);
        org$pandalanguage$pandac$Type* $tmp3386 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$Int64 $tmp3387 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3386);
        panda$core$String* $tmp3388 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3385, ((panda$core$Object*) wrap_panda$core$Int64($tmp3387)));
        panda$core$String* $tmp3390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3388, &$s3389);
        panda$core$String* $tmp3391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3380, $tmp3390);
        (($fn3392) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3391);
        panda$core$String* $tmp3395 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3394, $tmp3395);
        panda$core$String* $tmp3398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3396, &$s3397);
        panda$core$String* $tmp3399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3393, $tmp3398);
        (($fn3400) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3399);
        (($fn3402) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3401);
        (($fn3404) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3403);
        (($fn3406) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3405);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$finish(self);
    self->currentClass = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* self) {
    (($fn3407) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->shimsBuffer));
    (($fn3408) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->wrapperShimsBuffer));
    (($fn3409) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->types));
    (($fn3410) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->strings));
    (($fn3411) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->methodsBuffer));
    (($fn3412) ((panda$core$Object*) self->out->out)->$class->vtable[1])(((panda$core$Object*) self->out->out));
}

