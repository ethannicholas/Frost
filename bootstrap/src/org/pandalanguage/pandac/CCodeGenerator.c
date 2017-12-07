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
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/CCodeGenerator/LoopDescriptor.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

org$pandalanguage$pandac$CCodeGenerator$class_type org$pandalanguage$pandac$CCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim, org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

typedef void (*$fn65)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn128)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn144)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn185)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn191)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn197)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn221)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn227)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn233)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn327)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn333)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn339)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn369)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn391)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn397)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn403)(panda$collections$Iterator*);
typedef void (*$fn410)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn442)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn449)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn482)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn495)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn550)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn556)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn582)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn595)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn604)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn607)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn612)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn637)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn672)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn685)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn734)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn740)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn766)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn779)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn782)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn791)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn797)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn803)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn833)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn860)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn866)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn872)(panda$collections$Iterator*);
typedef void (*$fn879)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn962)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn968)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn974)(panda$collections$Iterator*);
typedef void (*$fn981)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1001)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1059)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1082)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1108)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1155)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1165)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1179)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1195)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1205)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1219)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1264)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1270)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1284)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1333)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1355)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1391)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1399)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1408)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1411)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1418)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1440)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1458)(panda$collections$CollectionView*);
typedef void (*$fn1479)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1599)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1615)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1713)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1721)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1733)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1737)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1743)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1749)(panda$collections$Iterator*);
typedef void (*$fn1758)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1761)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1979)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2005)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2021)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2026)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2052)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2057)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2063)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2069)(panda$collections$Iterator*);
typedef void (*$fn2074)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn2081)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2083)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Object* (*$fn2090)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2092)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Int64 (*$fn2097)(panda$collections$CollectionView*);
typedef void (*$fn2102)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2233)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2238)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2244)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2250)(panda$collections$Iterator*);
typedef void (*$fn2254)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2273)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2296)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2305)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2408)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2419)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2425)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2429)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2435)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2441)(panda$collections$Iterator*);
typedef void (*$fn2443)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2444)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2447)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2455)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2458)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2462)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2465)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn2488)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2506)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2521)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2534)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2547)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2557)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2588)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2600)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2617)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2631)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2645)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2662)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2676)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2692)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2709)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2725)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2742)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2756)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2772)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2788)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2805)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2819)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2833)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2843)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2848)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2864)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2870)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2887)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2895)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2898)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2911)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2921)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2926)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2932)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2938)(panda$collections$Iterator*);
typedef void (*$fn2985)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2994)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2996)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3042)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3049)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3089)(panda$io$MemoryOutputStream*);
typedef void (*$fn3099)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3109)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3114)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3120)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3126)(panda$collections$Iterator*);
typedef void (*$fn3140)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3143)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3154)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3160)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3166)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3168)(panda$io$MemoryOutputStream*);
typedef void (*$fn3170)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3171)(panda$io$MemoryOutputStream*);
typedef void (*$fn3173)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3176)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3177)(panda$io$MemoryOutputStream*);
typedef void (*$fn3178)(panda$io$MemoryOutputStream*);
typedef void (*$fn3179)(panda$io$MemoryOutputStream*);
typedef void (*$fn3180)(panda$io$MemoryOutputStream*);
typedef void (*$fn3181)(panda$io$MemoryOutputStream*);
typedef void (*$fn3182)(panda$io$MemoryOutputStream*);
typedef void (*$fn3206)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3223)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3231)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3233)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3235)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3237)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3238)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3239)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3240)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3241)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3242)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3243)(panda$core$Object*);

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
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x38", 1, 1 };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x36", 2, 1 };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x33\x32", 2, 1 };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 1 };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 1 };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, 1 };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x5F", 2, 1 };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7B\x20", 9, 1 };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6C\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x6E\x65\x78\x74\x3B\x20", 19, 1 };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x6D\x65\x74\x68\x6F\x64\x73\x5B", 14, 1 };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, 1 };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 1 };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, 1 };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6C\x65\x2A\x29\x20\x26", 11, 1 };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5, 1 };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70", 2, 1 };
static panda$core$String $s480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70", 1, 1 };
static panda$core$String $s524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x72\x65\x73\x75\x6C\x74\x20\x3D\x20", 10, 1 };
static panda$core$String $s551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x73\x75\x6C\x74", 6, 1 };
static panda$core$String $s602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6D", 12, 1 };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A", 9, 1 };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6C\x66\x2D\x3E\x76\x61\x6C\x75\x65", 12, 1 };
static panda$core$String $s761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5F", 9, 1 };
static panda$core$String $s819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7B\x20", 9, 1 };
static panda$core$String $s828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6C\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B\x20", 21, 1 };
static panda$core$String $s830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x6D\x65\x74\x68\x6F\x64\x73\x5B", 14, 1 };
static panda$core$String $s836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, 1 };
static panda$core$String $s839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x26", 3, 1 };
static panda$core$String $s849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 1 };
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, 1 };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6C\x65\x2A\x29\x20\x26", 11, 1 };
static panda$core$String $s882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 1 };
static panda$core$String $s915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 1 };
static panda$core$String $s926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74\x79\x70\x65\x20", 6, 1 };
static panda$core$String $s943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20", 5, 1 };
static panda$core$String $s950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 1 };
static panda$core$String $s958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, 1 };
static panda$core$String $s983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 1 };
static panda$core$String $s993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 1 };
static panda$core$String $s994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 1 };
static panda$core$String $s999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 1 };
static panda$core$String $s1016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 1 };
static panda$core$String $s1023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74\x79\x70\x65\x20", 6, 1 };
static panda$core$String $s1041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s1043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s1045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20", 5, 1 };
static panda$core$String $s1048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 1 };
static panda$core$String $s1055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B", 4, 1 };
static panda$core$String $s1110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x5F", 2, 1 };
static panda$core$String $s1112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1 };
static panda$core$String $s1148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s1150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 1 };
static panda$core$String $s1160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s1163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1 };
static panda$core$String $s1172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1 };
static panda$core$String $s1188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s1190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s1200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s1203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1 };
static panda$core$String $s1212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s1226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s1228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s1230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s1232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s1234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s1238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s1240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s1242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s1248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s1250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 1 };
static panda$core$String $s1252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s1254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s1256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s1258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s1260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s1263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s1265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, 1 };
static panda$core$String $s1291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x3D\x20", 4, 1 };
static panda$core$String $s1294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s1300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, 1 };
static panda$core$String $s1302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20", 4, 1 };
static panda$core$String $s1305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s1368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x2D\x3E\x76\x74\x61\x62\x6C\x65\x5B", 17, 1 };
static panda$core$String $s1378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x29", 2, 1 };
static panda$core$String $s1384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x54\x61\x62\x6C\x65\x2A\x20", 8, 1 };
static panda$core$String $s1386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x2D\x3E\x69\x74\x61\x62\x6C\x65\x3B", 17, 1 };
static panda$core$String $s1392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28", 7, 1 };
static panda$core$String $s1394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x20\x21\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 33, 1 };
static panda$core$String $s1397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s1401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x6E\x65\x78\x74\x3B", 7, 1 };
static panda$core$String $s1410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s1466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x6D\x65\x74\x68\x6F\x64\x73\x5B", 10, 1 };
static panda$core$String $s1477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B", 2, 1 };
static panda$core$String $s1492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, 1 };
static panda$core$String $s1501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 9, 1 };
static panda$core$String $s1507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2A\x20", 9, 1 };
static panda$core$String $s1510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 1 };
static panda$core$String $s1512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 1 };
static panda$core$String $s1517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x2A", 2, 1 };
static panda$core$String $s1519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s1534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D", 7, 1 };
static panda$core$String $s1536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, 1 };
static panda$core$String $s1548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x72\x65\x61\x6C\x6C\x6F\x63\x28", 10, 1 };
static panda$core$String $s1554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2A\x20", 9, 1 };
static panda$core$String $s1560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 1 };
static panda$core$String $s1562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, 1 };
static panda$core$String $s1570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2B\x20", 3, 1 };
static panda$core$String $s1575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29", 7, 1 };
static panda$core$String $s1578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s1582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, 1 };
static panda$core$String $s1584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s1592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 15, 1 };
static panda$core$String $s1594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s1597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1 };
static panda$core$String $s1600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s1608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 15, 1 };
static panda$core$String $s1610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1 };
static panda$core$String $s1704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x26", 2, 1 };
static panda$core$String $s1719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s1775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3F\x20", 11, 1 };
static panda$core$String $s1780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x4E\x55\x4C\x4C\x29", 8, 1 };
static panda$core$String $s1783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x77\x72\x61\x70\x5F", 7, 1 };
static panda$core$String $s1791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 1 };
static panda$core$String $s1799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3F\x20", 11, 1 };
static panda$core$String $s1804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x4E\x55\x4C\x4C\x29", 8, 1 };
static panda$core$String $s1816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, 1 };
static panda$core$String $s1830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2D\x3E\x76\x61\x6C\x75\x65", 8, 1 };
static panda$core$String $s1848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C\x20\x3F\x20", 11, 1 };
static panda$core$String $s1853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x28", 4, 1 };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x30\x20\x7D\x29", 19, 1 };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20", 4, 1 };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x74\x72\x75\x65\x20\x7D\x29", 9, 1 };
static panda$core$String $s1867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29", 7, 1 };
static panda$core$String $s1877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8, 1 };
static panda$core$String $s1931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20", 4, 1 };
static panda$core$String $s1963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, 1 };
static panda$core$String $s1970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s1983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x28", 4, 1 };
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x6C\x6C\x6F\x63\x28", 7, 1 };
static panda$core$String $s2002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s2013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 32, 1 };
static panda$core$String $s2019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x3B", 7, 1 };
static panda$core$String $s2022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x72\x65\x66\x43\x6F\x75\x6E\x74\x2E\x76\x61\x6C\x75\x65\x20\x3D\x20\x31\x3B", 21, 1 };
static panda$core$String $s2028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s2037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 1 };
static panda$core$String $s2041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73", 2, 1 };
static panda$core$String $s2043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20", 25, 1 };
static panda$core$String $s2048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s2050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x63\x6C\x61\x73\x73\x2C\x20\x32\x2C\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x20\x22", 70, 1 };
static panda$core$String $s2073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C\x78", 2, 1 };
static panda$core$String $s2075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 1 };
static panda$core$String $s2084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 1 };
static panda$core$String $s2093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22\x2C\x20", 3, 1 };
static panda$core$String $s2100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x20\x7D\x3B", 6, 1 };
static panda$core$String $s2103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, 1 };
static panda$core$String $s2108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s2111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x73\x65\x6C\x66\x29", 7, 1 };
static panda$core$String $s2123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 1 };
static panda$core$String $s2124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s2128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x3D\x20\x4E\x55\x4C\x4C", 8, 1 };
static panda$core$String $s2132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, 1 };
static panda$core$String $s2134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s2146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s2147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s2151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C", 8, 1 };
static panda$core$String $s2155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, 1 };
static panda$core$String $s2157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s2163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s2166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x66\x61\x6C\x73\x65\x20\x7D\x29", 23, 1 };
static panda$core$String $s2168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s2177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s2189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s2253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s2257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 1 };
static panda$core$String $s2266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x32\x20", 7, 1 };
static panda$core$String $s2268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D\x20\x3D\x20", 10, 1 };
static panda$core$String $s2294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, 1 };
static panda$core$String $s2299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x72\x65\x65\x28", 5, 1 };
static panda$core$String $s2303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s2307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s2393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, 1 };
static panda$core$String $s2401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s2451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x7B", 9, 1 };
static panda$core$String $s2457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s2461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x6C\x73\x65\x20\x7B", 6, 1 };
static panda$core$String $s2464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s2496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x61\x72\x74\x2E\x76\x61\x6C\x75\x65\x3B", 13, 1 };
static panda$core$String $s2509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s2519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1 };
static panda$core$String $s2524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x65\x6E\x64\x2E\x76\x61\x6C\x75\x65\x3B", 11, 1 };
static panda$core$String $s2537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x65\x70\x2E\x76\x61\x6C\x75\x65\x3B", 12, 1 };
static panda$core$String $s2550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s2552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x69\x6E\x63\x6C\x75\x73\x69\x76\x65\x2E\x76\x61\x6C\x75\x65\x3B", 17, 1 };
static panda$core$String $s2573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, 1 };
static panda$core$String $s2575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s2576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 1 };
static panda$core$String $s2578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s2581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s2583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x30\x3B", 5, 1 };
static panda$core$String $s2589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s2590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x3D\x20", 4, 1 };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x20", 3, 1 };
static panda$core$String $s2637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, 1 };
static panda$core$String $s2668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, 1 };
static panda$core$String $s2684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x20", 3, 1 };
static panda$core$String $s2723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x3B", 7, 1 };
static panda$core$String $s2730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, 1 };
static panda$core$String $s2748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, 1 };
static panda$core$String $s2764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2D\x20", 9, 1 };
static panda$core$String $s2786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20\x2D", 5, 1 };
static panda$core$String $s2811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x2D", 4, 1 };
static panda$core$String $s2825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2B\x3D\x20", 10, 1 };
static panda$core$String $s2841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s2846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 1 };
static panda$core$String $s2859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, 1 };
static panda$core$String $s2862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s2868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, 1 };
static panda$core$String $s2885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7B", 14, 1 };
static panda$core$String $s2897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s2902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, 1 };
static panda$core$String $s2960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s2992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x3B", 7, 1 };
static panda$core$String $s3038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s3040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s3047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s3086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s3088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 1 };
static panda$core$String $s3090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s3101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s3110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70\x5F", 3, 1 };
static panda$core$String $s3138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s3175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s3184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x63", 2, 1 };
static panda$core$String $s3191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x77\x72\x61\x70\x5F", 15, 1 };
static panda$core$String $s3198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s3200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66\x29\x20\x7B", 8, 1 };
static panda$core$String $s3207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20", 4, 1 };
static panda$core$String $s3210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x72\x65\x73\x75\x6C\x74\x20\x3D\x20", 19, 1 };
static panda$core$String $s3212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s3215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 18, 1 };
static panda$core$String $s3220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s3224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x63\x6C\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20", 37, 1 };
static panda$core$String $s3225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s3228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x3B", 14, 1 };
static panda$core$String $s3232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x76\x61\x6C\x75\x65\x20\x3D\x20\x73\x65\x6C\x66\x3B", 25, 1 };
static panda$core$String $s3234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6E\x20\x72\x65\x73\x75\x6C\x74\x3B", 18, 1 };
static panda$core$String $s3236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };

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
    panda$core$Int64 $match$7210145;
    {
        $match$7210145 = p_stmt->kind;
        panda$core$Bit $tmp146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7210145, ((panda$core$Int64) { 1000 }));
        if ($tmp146.value) {
        {
            panda$core$Int64 $tmp147 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp147, ((panda$core$Int64) { 0 }));
            if ($tmp148.value) {
            {
                return ((panda$core$Bit) { false });
            }
            }
            panda$core$Int64 $tmp149 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Int64 $tmp150 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp149, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp151 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, $tmp150);
            panda$core$Bit $tmp152 = org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp151));
            return $tmp152;
        }
        }
        else {
        panda$core$Bit $tmp155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7210145, ((panda$core$Int64) { 1006 }));
        bool $tmp154 = $tmp155.value;
        if ($tmp154) goto $l156;
        panda$core$Bit $tmp157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7210145, ((panda$core$Int64) { 1007 }));
        $tmp154 = $tmp157.value;
        $l156:;
        panda$core$Bit $tmp158 = { $tmp154 };
        bool $tmp153 = $tmp158.value;
        if ($tmp153) goto $l159;
        panda$core$Bit $tmp160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7210145, ((panda$core$Int64) { 1008 }));
        $tmp153 = $tmp160.value;
        $l159:;
        panda$core$Bit $tmp161 = { $tmp153 };
        if ($tmp161.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        else {
        {
            return ((panda$core$Bit) { false });
        }
        }
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl171;
    panda$core$Int64 result180;
    panda$collections$Iterator* f$Iter181;
    org$pandalanguage$pandac$FieldDecl* f194;
    panda$core$Int64 size200;
    panda$core$Int64 align202;
    panda$core$Bit $tmp162 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_t);
    if ($tmp162.value) {
    {
        panda$core$Bit $tmp164 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s163);
        if ($tmp164.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        panda$core$Bit $tmp166 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s165);
        if ($tmp166.value) {
        {
            return ((panda$core$Int64) { 2 });
        }
        }
        panda$core$Bit $tmp168 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s167);
        if ($tmp168.value) {
        {
            return ((panda$core$Int64) { 4 });
        }
        }
        return ((panda$core$Int64) { 8 });
    }
    }
    org$pandalanguage$pandac$Type* $tmp169 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp170 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp169);
    if ($tmp170.value) {
    {
        return ((panda$core$Int64) { 1 });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp172 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl171 = $tmp172;
    panda$core$Bit $tmp174 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl171);
    panda$core$Bit $tmp175 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp174);
    bool $tmp173 = $tmp175.value;
    if ($tmp173) goto $l176;
    panda$core$Bit $tmp178 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl171)->name, &$s177);
    $tmp173 = $tmp178.value;
    $l176:;
    panda$core$Bit $tmp179 = { $tmp173 };
    if ($tmp179.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    result180 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp182 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl171);
        ITable* $tmp183 = ((panda$collections$Iterable*) $tmp182)->$class->itable;
        while ($tmp183->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp183 = $tmp183->next;
        }
        $fn185 $tmp184 = $tmp183->methods[0];
        panda$collections$Iterator* $tmp186 = $tmp184(((panda$collections$Iterable*) $tmp182));
        f$Iter181 = $tmp186;
        $l187:;
        ITable* $tmp189 = f$Iter181->$class->itable;
        while ($tmp189->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp189 = $tmp189->next;
        }
        $fn191 $tmp190 = $tmp189->methods[0];
        panda$core$Bit $tmp192 = $tmp190(f$Iter181);
        panda$core$Bit $tmp193 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp192);
        if (!$tmp193.value) goto $l188;
        {
            ITable* $tmp195 = f$Iter181->$class->itable;
            while ($tmp195->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp195 = $tmp195->next;
            }
            $fn197 $tmp196 = $tmp195->methods[1];
            panda$core$Object* $tmp198 = $tmp196(f$Iter181);
            f194 = ((org$pandalanguage$pandac$FieldDecl*) $tmp198);
            panda$core$Bit $tmp199 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f194->annotations);
            if ($tmp199.value) {
            {
                goto $l187;
            }
            }
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f194);
            panda$core$Int64 $tmp201 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f194->type);
            size200 = $tmp201;
            panda$core$Int64 $tmp203 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result180, size200);
            align202 = $tmp203;
            panda$core$Bit $tmp204 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align202, ((panda$core$Int64) { 0 }));
            if ($tmp204.value) {
            {
                panda$core$Int64 $tmp205 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size200, align202);
                panda$core$Int64 $tmp206 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result180, $tmp205);
                result180 = $tmp206;
            }
            }
            panda$core$Int64 $tmp207 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result180, size200);
            result180 = $tmp207;
        }
        goto $l187;
        $l188:;
    }
    panda$core$Bit $tmp208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp208.value) {
    {
        panda$core$Int64 $tmp209 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result180, ((panda$core$Int64) { 1 }));
        result180 = $tmp209;
    }
    }
    return result180;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp210 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
    panda$core$Int64 $tmp211 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp210, ((panda$core$Int64) { 8 }));
    return $tmp211;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl212;
    panda$core$Int64 result214;
    panda$collections$Iterator* f$Iter217;
    org$pandalanguage$pandac$FieldDecl* f230;
    panda$core$Int64 size235;
    panda$core$Int64 align237;
    org$pandalanguage$pandac$ClassDecl* $tmp213 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl212 = $tmp213;
    org$pandalanguage$pandac$Type* $tmp215 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$Int64 $tmp216 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp215);
    result214 = $tmp216;
    {
        panda$collections$ListView* $tmp218 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl212);
        ITable* $tmp219 = ((panda$collections$Iterable*) $tmp218)->$class->itable;
        while ($tmp219->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp219 = $tmp219->next;
        }
        $fn221 $tmp220 = $tmp219->methods[0];
        panda$collections$Iterator* $tmp222 = $tmp220(((panda$collections$Iterable*) $tmp218));
        f$Iter217 = $tmp222;
        $l223:;
        ITable* $tmp225 = f$Iter217->$class->itable;
        while ($tmp225->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp225 = $tmp225->next;
        }
        $fn227 $tmp226 = $tmp225->methods[0];
        panda$core$Bit $tmp228 = $tmp226(f$Iter217);
        panda$core$Bit $tmp229 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp228);
        if (!$tmp229.value) goto $l224;
        {
            ITable* $tmp231 = f$Iter217->$class->itable;
            while ($tmp231->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp231 = $tmp231->next;
            }
            $fn233 $tmp232 = $tmp231->methods[1];
            panda$core$Object* $tmp234 = $tmp232(f$Iter217);
            f230 = ((org$pandalanguage$pandac$FieldDecl*) $tmp234);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f230);
            panda$core$Int64 $tmp236 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f230->type);
            size235 = $tmp236;
            panda$core$Int64 $tmp238 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result214, size235);
            align237 = $tmp238;
            panda$core$Bit $tmp239 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align237, ((panda$core$Int64) { 0 }));
            if ($tmp239.value) {
            {
                panda$core$Int64 $tmp240 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size235, align237);
                panda$core$Int64 $tmp241 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result214, $tmp240);
                result214 = $tmp241;
            }
            }
            panda$core$Int64 $tmp242 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result214, size235);
            result214 = $tmp242;
        }
        goto $l223;
        $l224:;
    }
    panda$core$Bit $tmp243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp243.value) {
    {
        panda$core$Int64 $tmp244 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result214, ((panda$core$Int64) { 1 }));
        result214 = $tmp244;
    }
    }
    return result214;
}
void org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp245 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp245.value) {
    {
        return;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp246 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    return $tmp246;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp247.value) {
    {
        panda$core$Object* $tmp248 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp249 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp248));
        return $tmp249;
    }
    }
    panda$core$String* $tmp251 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s250, $tmp251);
    panda$core$String* $tmp254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp252, &$s253);
    return $tmp254;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp255 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp255, &$s256);
    return $tmp257;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType258;
    panda$core$MutableString* result260;
    panda$core$Range$LTpanda$core$Int64$GT $tmp276;
    org$pandalanguage$pandac$Type* $tmp259 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedType258 = $tmp259;
    panda$core$MutableString* $tmp261 = (panda$core$MutableString*) malloc(40);
    $tmp261->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp261->refCount.value = 1;
    panda$core$MutableString$init($tmp261);
    result260 = $tmp261;
    panda$core$Int64 $tmp263 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(inheritedType258->subtypes);
    panda$core$Int64 $tmp264 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp263, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp265 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inheritedType258->subtypes, $tmp264);
    panda$core$String* $tmp266 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp265));
    panda$core$MutableString$append$panda$core$String(result260, $tmp266);
    panda$core$MutableString$append$panda$core$String(result260, &$s267);
    panda$core$String* $tmp269 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s268, $tmp269);
    panda$core$String* $tmp272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp270, &$s271);
    panda$core$MutableString$append$panda$core$String(result260, $tmp272);
    panda$core$Bit $tmp273 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_m->owner);
    if ($tmp273.value) {
    {
        panda$core$MutableString$append$panda$core$String(result260, &$s274);
    }
    }
    panda$core$MutableString$append$panda$core$String(result260, &$s275);
    panda$core$Int64 $tmp277 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(inheritedType258->subtypes);
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
        panda$core$MutableString$append$panda$core$String(result260, &$s297);
        panda$core$Object* $tmp298 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inheritedType258->subtypes, i279);
        panda$core$String* $tmp299 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp298));
        panda$core$MutableString$append$panda$core$String(result260, $tmp299);
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
    panda$core$MutableString$append$panda$core$String(result260, &$s311);
    panda$core$String* $tmp312 = panda$core$MutableString$convert$R$panda$core$String(result260);
    return $tmp312;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Object* $tmp314 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp315 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp314));
    panda$core$String* $tmp316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s313, $tmp315);
    panda$core$String* $tmp318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp316, &$s317);
    return $tmp318;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces319;
    panda$core$String* previous322;
    panda$collections$Iterator* intfType$Iter324;
    org$pandalanguage$pandac$Type* intfType336;
    org$pandalanguage$pandac$ClassDecl* intf341;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC343;
    panda$collections$ListView* methods345;
    panda$core$String* name347;
    panda$core$MutableString* result357;
    panda$core$String* separator386;
    panda$collections$Iterator* m$Iter388;
    org$pandalanguage$pandac$MethodDecl* m400;
    org$pandalanguage$pandac$Type* $tmp320 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp321 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp320);
    interfaces319 = $tmp321;
    previous322 = &$s323;
    {
        ITable* $tmp325 = ((panda$collections$Iterable*) interfaces319)->$class->itable;
        while ($tmp325->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp325 = $tmp325->next;
        }
        $fn327 $tmp326 = $tmp325->methods[0];
        panda$collections$Iterator* $tmp328 = $tmp326(((panda$collections$Iterable*) interfaces319));
        intfType$Iter324 = $tmp328;
        $l329:;
        ITable* $tmp331 = intfType$Iter324->$class->itable;
        while ($tmp331->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp331 = $tmp331->next;
        }
        $fn333 $tmp332 = $tmp331->methods[0];
        panda$core$Bit $tmp334 = $tmp332(intfType$Iter324);
        panda$core$Bit $tmp335 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp334);
        if (!$tmp335.value) goto $l330;
        {
            ITable* $tmp337 = intfType$Iter324->$class->itable;
            while ($tmp337->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp337 = $tmp337->next;
            }
            $fn339 $tmp338 = $tmp337->methods[1];
            panda$core$Object* $tmp340 = $tmp338(intfType$Iter324);
            intfType336 = ((org$pandalanguage$pandac$Type*) $tmp340);
            org$pandalanguage$pandac$ClassDecl* $tmp342 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType336);
            intf341 = $tmp342;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp344 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf341);
            intfCC343 = $tmp344;
            panda$collections$ListView* $tmp346 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType336);
            methods345 = $tmp346;
            panda$core$String* $tmp349 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s348, $tmp349);
            panda$core$String* $tmp352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp350, &$s351);
            panda$core$String* $tmp353 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf341)->name);
            panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp352, $tmp353);
            panda$core$String* $tmp356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp354, &$s355);
            name347 = $tmp356;
            panda$core$MutableString* $tmp358 = (panda$core$MutableString*) malloc(40);
            $tmp358->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp358->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp361 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp362 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp361);
            panda$core$String* $tmp363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s360, $tmp362);
            panda$core$String* $tmp365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp363, &$s364);
            ITable* $tmp367 = ((panda$collections$CollectionView*) methods345)->$class->itable;
            while ($tmp367->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp367 = $tmp367->next;
            }
            $fn369 $tmp368 = $tmp367->methods[0];
            panda$core$Int64 $tmp370 = $tmp368(((panda$collections$CollectionView*) methods345));
            panda$core$String* $tmp371 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s366, ((panda$core$Object*) wrap_panda$core$Int64($tmp370)));
            panda$core$String* $tmp373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp371, &$s372);
            panda$core$String* $tmp374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp373, name347);
            panda$core$String* $tmp376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp374, &$s375);
            panda$core$String* $tmp377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp365, $tmp376);
            panda$core$String* $tmp379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s378, intfCC343->name);
            panda$core$String* $tmp381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp379, &$s380);
            panda$core$String* $tmp382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp381, previous322);
            panda$core$String* $tmp384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp382, &$s383);
            panda$core$String* $tmp385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp377, $tmp384);
            panda$core$MutableString$init$panda$core$String($tmp358, $tmp385);
            result357 = $tmp358;
            separator386 = &$s387;
            {
                ITable* $tmp389 = ((panda$collections$Iterable*) methods345)->$class->itable;
                while ($tmp389->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp389 = $tmp389->next;
                }
                $fn391 $tmp390 = $tmp389->methods[0];
                panda$collections$Iterator* $tmp392 = $tmp390(((panda$collections$Iterable*) methods345));
                m$Iter388 = $tmp392;
                $l393:;
                ITable* $tmp395 = m$Iter388->$class->itable;
                while ($tmp395->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp395 = $tmp395->next;
                }
                $fn397 $tmp396 = $tmp395->methods[0];
                panda$core$Bit $tmp398 = $tmp396(m$Iter388);
                panda$core$Bit $tmp399 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp398);
                if (!$tmp399.value) goto $l394;
                {
                    ITable* $tmp401 = m$Iter388->$class->itable;
                    while ($tmp401->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp401 = $tmp401->next;
                    }
                    $fn403 $tmp402 = $tmp401->methods[1];
                    panda$core$Object* $tmp404 = $tmp402(m$Iter388);
                    m400 = ((org$pandalanguage$pandac$MethodDecl*) $tmp404);
                    panda$core$MutableString$append$panda$core$String(result357, separator386);
                    separator386 = &$s405;
                    panda$core$Bit $tmp406 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m400->annotations);
                    if ($tmp406.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result357, &$s407);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp408 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m400);
                        panda$core$MutableString$append$panda$core$String(result357, $tmp408);
                    }
                    }
                }
                goto $l393;
                $l394:;
            }
            panda$core$MutableString$append$panda$core$String(result357, &$s409);
            (($fn410) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result357));
            panda$core$String* $tmp412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s411, name347);
            panda$core$String* $tmp414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp412, &$s413);
            previous322 = $tmp414;
        }
        goto $l329;
        $l330:;
    }
    return previous322;
}
org$pandalanguage$pandac$CCodeGenerator$MethodShim* org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer415;
    panda$io$IndentedOutputStream* out418;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* found421;
    org$pandalanguage$pandac$Type* effectiveReturnType423;
    panda$core$String* resultName427;
    panda$core$MutableString* resultType431;
    panda$core$String* self_t443;
    panda$core$Range$LTpanda$core$Int64$GT $tmp451;
    panda$core$String* pType471;
    panda$collections$Array* casts498;
    panda$core$Range$LTpanda$core$Int64$GT $tmp501;
    panda$core$String* p521;
    panda$core$Range$LTpanda$core$Int64$GT $tmp557;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* result608;
    panda$io$MemoryOutputStream* $tmp416 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp416->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp416->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp416);
    outBuffer415 = $tmp416;
    panda$io$IndentedOutputStream* $tmp419 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp419->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp419->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp419, ((panda$io$OutputStream*) outBuffer415));
    out418 = $tmp419;
    panda$core$Object* $tmp422 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    found421 = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp422);
    if (((panda$core$Bit) { found421 != NULL }).value) {
    {
        return found421;
    }
    }
    panda$core$Int64 $tmp424 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp425 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp424, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp426 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_effective->subtypes, $tmp425);
    effectiveReturnType423 = ((org$pandalanguage$pandac$Type*) $tmp426);
    panda$core$String* $tmp428 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp428, &$s429);
    resultName427 = $tmp430;
    panda$core$MutableString* $tmp432 = (panda$core$MutableString*) malloc(40);
    $tmp432->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp432->refCount.value = 1;
    panda$core$String* $tmp434 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType423);
    panda$core$MutableString$init$panda$core$String($tmp432, $tmp434);
    resultType431 = $tmp432;
    panda$core$String* $tmp436 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s435, ((panda$core$Object*) resultType431));
    panda$core$String* $tmp438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp436, &$s437);
    panda$core$String* $tmp439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp438, resultName427);
    panda$core$String* $tmp441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp439, &$s440);
    (($fn442) ((panda$io$OutputStream*) out418)->$class->vtable[16])(((panda$io$OutputStream*) out418), $tmp441);
    panda$core$String* $tmp444 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t443 = $tmp444;
    panda$core$String* $tmp446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s445, self_t443);
    panda$core$String* $tmp448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp446, &$s447);
    (($fn449) ((panda$io$OutputStream*) out418)->$class->vtable[16])(((panda$io$OutputStream*) out418), $tmp448);
    panda$core$MutableString$append$panda$core$String(resultType431, &$s450);
    panda$core$MutableString$append$panda$core$String(resultType431, self_t443);
    panda$core$Int64 $tmp452 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp451, ((panda$core$Int64) { 0 }), $tmp452, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp454 = $tmp451.start.value;
    panda$core$Int64 i453 = { $tmp454 };
    int64_t $tmp456 = $tmp451.end.value;
    int64_t $tmp457 = $tmp451.step.value;
    bool $tmp458 = $tmp451.inclusive.value;
    bool $tmp465 = $tmp457 > 0;
    if ($tmp465) goto $l463; else goto $l464;
    $l463:;
    if ($tmp458) goto $l466; else goto $l467;
    $l466:;
    if ($tmp454 <= $tmp456) goto $l459; else goto $l461;
    $l467:;
    if ($tmp454 < $tmp456) goto $l459; else goto $l461;
    $l464:;
    if ($tmp458) goto $l468; else goto $l469;
    $l468:;
    if ($tmp454 >= $tmp456) goto $l459; else goto $l461;
    $l469:;
    if ($tmp454 > $tmp456) goto $l459; else goto $l461;
    $l459:;
    {
        panda$core$Object* $tmp472 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_effective->subtypes, i453);
        panda$core$String* $tmp473 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp472));
        pType471 = $tmp473;
        panda$core$MutableString$append$panda$core$String(resultType431, &$s474);
        panda$core$MutableString$append$panda$core$String(resultType431, pType471);
        panda$core$String* $tmp476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s475, pType471);
        panda$core$String* $tmp478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp476, &$s477);
        panda$core$String* $tmp479 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp478, ((panda$core$Object*) wrap_panda$core$Int64(i453)));
        panda$core$String* $tmp481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp479, &$s480);
        (($fn482) ((panda$io$OutputStream*) out418)->$class->vtable[16])(((panda$io$OutputStream*) out418), $tmp481);
    }
    $l462:;
    if ($tmp465) goto $l484; else goto $l485;
    $l484:;
    int64_t $tmp486 = $tmp456 - i453.value;
    if ($tmp458) goto $l487; else goto $l488;
    $l487:;
    if ($tmp486 >= $tmp457) goto $l483; else goto $l461;
    $l488:;
    if ($tmp486 > $tmp457) goto $l483; else goto $l461;
    $l485:;
    int64_t $tmp490 = i453.value - $tmp456;
    if ($tmp458) goto $l491; else goto $l492;
    $l491:;
    if ($tmp490 >= -$tmp457) goto $l483; else goto $l461;
    $l492:;
    if ($tmp490 > -$tmp457) goto $l483; else goto $l461;
    $l483:;
    i453.value += $tmp457;
    goto $l459;
    $l461:;
    (($fn495) ((panda$io$OutputStream*) out418)->$class->vtable[19])(((panda$io$OutputStream*) out418), &$s494);
    panda$core$Int64 $tmp496 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(out418->level, ((panda$core$Int64) { 1 }));
    out418->level = $tmp496;
    panda$core$MutableString$append$panda$core$String(resultType431, &$s497);
    panda$collections$Array* $tmp499 = (panda$collections$Array*) malloc(40);
    $tmp499->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp499->refCount.value = 1;
    panda$collections$Array$init($tmp499);
    casts498 = $tmp499;
    panda$core$Int64 $tmp502 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp501, ((panda$core$Int64) { 0 }), $tmp502, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp504 = $tmp501.start.value;
    panda$core$Int64 i503 = { $tmp504 };
    int64_t $tmp506 = $tmp501.end.value;
    int64_t $tmp507 = $tmp501.step.value;
    bool $tmp508 = $tmp501.inclusive.value;
    bool $tmp515 = $tmp507 > 0;
    if ($tmp515) goto $l513; else goto $l514;
    $l513:;
    if ($tmp508) goto $l516; else goto $l517;
    $l516:;
    if ($tmp504 <= $tmp506) goto $l509; else goto $l511;
    $l517:;
    if ($tmp504 < $tmp506) goto $l509; else goto $l511;
    $l514:;
    if ($tmp508) goto $l518; else goto $l519;
    $l518:;
    if ($tmp504 >= $tmp506) goto $l509; else goto $l511;
    $l519:;
    if ($tmp504 > $tmp506) goto $l509; else goto $l511;
    $l509:;
    {
        panda$core$String* $tmp523 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s522, ((panda$core$Object*) wrap_panda$core$Int64(i503)));
        panda$core$String* $tmp525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp523, &$s524);
        p521 = $tmp525;
        panda$core$Object* $tmp526 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i503);
        panda$core$Object* $tmp527 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_effective->subtypes, i503);
        panda$core$Bit $tmp528 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp526)->type, ((org$pandalanguage$pandac$Type*) $tmp527));
        if ($tmp528.value) {
        {
            panda$core$Object* $tmp529 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_effective->subtypes, i503);
            panda$core$Object* $tmp530 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i503);
            panda$core$String* $tmp531 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p521, ((org$pandalanguage$pandac$Type*) $tmp529), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp530)->type, out418);
            panda$collections$Array$add$panda$collections$Array$T(casts498, ((panda$core$Object*) $tmp531));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts498, ((panda$core$Object*) p521));
        }
        }
    }
    $l512:;
    if ($tmp515) goto $l533; else goto $l534;
    $l533:;
    int64_t $tmp535 = $tmp506 - i503.value;
    if ($tmp508) goto $l536; else goto $l537;
    $l536:;
    if ($tmp535 >= $tmp507) goto $l532; else goto $l511;
    $l537:;
    if ($tmp535 > $tmp507) goto $l532; else goto $l511;
    $l534:;
    int64_t $tmp539 = i503.value - $tmp506;
    if ($tmp508) goto $l540; else goto $l541;
    $l540:;
    if ($tmp539 >= -$tmp507) goto $l532; else goto $l511;
    $l541:;
    if ($tmp539 > -$tmp507) goto $l532; else goto $l511;
    $l532:;
    i503.value += $tmp507;
    goto $l509;
    $l511:;
    org$pandalanguage$pandac$Type* $tmp543 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp544 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp543);
    if ($tmp544.value) {
    {
        panda$core$String* $tmp546 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
        panda$core$String* $tmp547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s545, $tmp546);
        panda$core$String* $tmp549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp547, &$s548);
        (($fn550) ((panda$io$OutputStream*) out418)->$class->vtable[16])(((panda$io$OutputStream*) out418), $tmp549);
    }
    }
    panda$core$String* $tmp552 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s551, $tmp552);
    panda$core$String* $tmp555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp553, &$s554);
    (($fn556) ((panda$io$OutputStream*) out418)->$class->vtable[16])(((panda$io$OutputStream*) out418), $tmp555);
    panda$core$Int64 $tmp558 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp557, ((panda$core$Int64) { 0 }), $tmp558, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp560 = $tmp557.start.value;
    panda$core$Int64 i559 = { $tmp560 };
    int64_t $tmp562 = $tmp557.end.value;
    int64_t $tmp563 = $tmp557.step.value;
    bool $tmp564 = $tmp557.inclusive.value;
    bool $tmp571 = $tmp563 > 0;
    if ($tmp571) goto $l569; else goto $l570;
    $l569:;
    if ($tmp564) goto $l572; else goto $l573;
    $l572:;
    if ($tmp560 <= $tmp562) goto $l565; else goto $l567;
    $l573:;
    if ($tmp560 < $tmp562) goto $l565; else goto $l567;
    $l570:;
    if ($tmp564) goto $l574; else goto $l575;
    $l574:;
    if ($tmp560 >= $tmp562) goto $l565; else goto $l567;
    $l575:;
    if ($tmp560 > $tmp562) goto $l565; else goto $l567;
    $l565:;
    {
        panda$core$Object* $tmp578 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts498, i559);
        panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s577, ((panda$core$String*) $tmp578));
        panda$core$String* $tmp581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp579, &$s580);
        (($fn582) ((panda$io$OutputStream*) out418)->$class->vtable[16])(((panda$io$OutputStream*) out418), $tmp581);
    }
    $l568:;
    if ($tmp571) goto $l584; else goto $l585;
    $l584:;
    int64_t $tmp586 = $tmp562 - i559.value;
    if ($tmp564) goto $l587; else goto $l588;
    $l587:;
    if ($tmp586 >= $tmp563) goto $l583; else goto $l567;
    $l588:;
    if ($tmp586 > $tmp563) goto $l583; else goto $l567;
    $l585:;
    int64_t $tmp590 = i559.value - $tmp562;
    if ($tmp564) goto $l591; else goto $l592;
    $l591:;
    if ($tmp590 >= -$tmp563) goto $l583; else goto $l567;
    $l592:;
    if ($tmp590 > -$tmp563) goto $l583; else goto $l567;
    $l583:;
    i559.value += $tmp563;
    goto $l565;
    $l567:;
    (($fn595) ((panda$io$OutputStream*) out418)->$class->vtable[19])(((panda$io$OutputStream*) out418), &$s594);
    org$pandalanguage$pandac$Type* $tmp596 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp597 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp596);
    if ($tmp597.value) {
    {
        panda$core$String* $tmp600 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, &$s599, p_raw->returnType, effectiveReturnType423, out418);
        panda$core$String* $tmp601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s598, $tmp600);
        panda$core$String* $tmp603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp601, &$s602);
        (($fn604) ((panda$io$OutputStream*) out418)->$class->vtable[19])(((panda$io$OutputStream*) out418), $tmp603);
    }
    }
    panda$core$Int64 $tmp605 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(out418->level, ((panda$core$Int64) { 1 }));
    out418->level = $tmp605;
    (($fn607) ((panda$io$OutputStream*) out418)->$class->vtable[19])(((panda$io$OutputStream*) out418), &$s606);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp609 = (org$pandalanguage$pandac$CCodeGenerator$MethodShim*) malloc(32);
    $tmp609->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$MethodShim$class;
    $tmp609->refCount.value = 1;
    panda$core$String* $tmp611 = panda$core$MutableString$convert$R$panda$core$String(resultType431);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp609, resultName427, $tmp611);
    result608 = $tmp609;
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result608));
    (($fn612) p_rawOut->$class->vtable[15])(p_rawOut, ((panda$core$Object*) outBuffer415));
    return result608;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* oldMethod613;
    panda$core$String* result614;
    panda$core$String* selfType620;
    org$pandalanguage$pandac$Type* actualMethodType638;
    org$pandalanguage$pandac$Type* inheritedMethodType640;
    panda$core$Range$LTpanda$core$Int64$GT $tmp642;
    panda$collections$Array* parameters687;
    panda$core$Range$LTpanda$core$Int64$GT $tmp690;
    panda$collections$Array* children725;
    panda$core$Range$LTpanda$core$Int64$GT $tmp741;
    oldMethod613 = self->currentMethod;
    self->currentMethod = p_m;
    panda$core$String* $tmp616 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s615, $tmp616);
    panda$core$String* $tmp619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp617, &$s618);
    result614 = $tmp619;
    panda$core$String* $tmp622 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s621, $tmp622);
    panda$core$String* $tmp625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp623, &$s624);
    selfType620 = $tmp625;
    panda$core$String* $tmp627 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s626, $tmp627);
    panda$core$String* $tmp630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp628, &$s629);
    panda$core$String* $tmp631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp630, result614);
    panda$core$String* $tmp633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp631, &$s632);
    panda$core$String* $tmp634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp633, selfType620);
    panda$core$String* $tmp636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp634, &$s635);
    (($fn637) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp636);
    org$pandalanguage$pandac$Type* $tmp639 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    actualMethodType638 = $tmp639;
    org$pandalanguage$pandac$Type* $tmp641 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedMethodType640 = $tmp641;
    panda$core$Int64 $tmp643 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp642, ((panda$core$Int64) { 0 }), $tmp643, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp645 = $tmp642.start.value;
    panda$core$Int64 i644 = { $tmp645 };
    int64_t $tmp647 = $tmp642.end.value;
    int64_t $tmp648 = $tmp642.step.value;
    bool $tmp649 = $tmp642.inclusive.value;
    bool $tmp656 = $tmp648 > 0;
    if ($tmp656) goto $l654; else goto $l655;
    $l654:;
    if ($tmp649) goto $l657; else goto $l658;
    $l657:;
    if ($tmp645 <= $tmp647) goto $l650; else goto $l652;
    $l658:;
    if ($tmp645 < $tmp647) goto $l650; else goto $l652;
    $l655:;
    if ($tmp649) goto $l659; else goto $l660;
    $l659:;
    if ($tmp645 >= $tmp647) goto $l650; else goto $l652;
    $l660:;
    if ($tmp645 > $tmp647) goto $l650; else goto $l652;
    $l650:;
    {
        panda$core$Object* $tmp663 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inheritedMethodType640->subtypes, i644);
        panda$core$String* $tmp664 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp663));
        panda$core$String* $tmp665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s662, $tmp664);
        panda$core$String* $tmp667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp665, &$s666);
        panda$core$Object* $tmp668 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i644);
        panda$core$String* $tmp669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp667, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp668)->name);
        panda$core$String* $tmp671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp669, &$s670);
        (($fn672) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp671);
    }
    $l653:;
    if ($tmp656) goto $l674; else goto $l675;
    $l674:;
    int64_t $tmp676 = $tmp647 - i644.value;
    if ($tmp649) goto $l677; else goto $l678;
    $l677:;
    if ($tmp676 >= $tmp648) goto $l673; else goto $l652;
    $l678:;
    if ($tmp676 > $tmp648) goto $l673; else goto $l652;
    $l675:;
    int64_t $tmp680 = i644.value - $tmp647;
    if ($tmp649) goto $l681; else goto $l682;
    $l681:;
    if ($tmp680 >= -$tmp648) goto $l673; else goto $l652;
    $l682:;
    if ($tmp680 > -$tmp648) goto $l673; else goto $l652;
    $l673:;
    i644.value += $tmp648;
    goto $l650;
    $l652:;
    (($fn685) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s684);
    panda$core$Int64 $tmp686 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp686;
    panda$collections$Array* $tmp688 = (panda$collections$Array*) malloc(40);
    $tmp688->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp688->refCount.value = 1;
    panda$collections$Array$init($tmp688);
    parameters687 = $tmp688;
    panda$core$Int64 $tmp691 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp690, ((panda$core$Int64) { 0 }), $tmp691, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp693 = $tmp690.start.value;
    panda$core$Int64 i692 = { $tmp693 };
    int64_t $tmp695 = $tmp690.end.value;
    int64_t $tmp696 = $tmp690.step.value;
    bool $tmp697 = $tmp690.inclusive.value;
    bool $tmp704 = $tmp696 > 0;
    if ($tmp704) goto $l702; else goto $l703;
    $l702:;
    if ($tmp697) goto $l705; else goto $l706;
    $l705:;
    if ($tmp693 <= $tmp695) goto $l698; else goto $l700;
    $l706:;
    if ($tmp693 < $tmp695) goto $l698; else goto $l700;
    $l703:;
    if ($tmp697) goto $l707; else goto $l708;
    $l707:;
    if ($tmp693 >= $tmp695) goto $l698; else goto $l700;
    $l708:;
    if ($tmp693 > $tmp695) goto $l698; else goto $l700;
    $l698:;
    {
        panda$core$Object* $tmp710 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i692);
        panda$core$Object* $tmp711 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inheritedMethodType640->subtypes, i692);
        panda$core$Object* $tmp712 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType638->subtypes, i692);
        panda$core$String* $tmp713 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp710)->name, ((org$pandalanguage$pandac$Type*) $tmp711), ((org$pandalanguage$pandac$Type*) $tmp712), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters687, ((panda$core$Object*) $tmp713));
    }
    $l701:;
    if ($tmp704) goto $l715; else goto $l716;
    $l715:;
    int64_t $tmp717 = $tmp695 - i692.value;
    if ($tmp697) goto $l718; else goto $l719;
    $l718:;
    if ($tmp717 >= $tmp696) goto $l714; else goto $l700;
    $l719:;
    if ($tmp717 > $tmp696) goto $l714; else goto $l700;
    $l716:;
    int64_t $tmp721 = i692.value - $tmp695;
    if ($tmp697) goto $l722; else goto $l723;
    $l722:;
    if ($tmp721 >= -$tmp696) goto $l714; else goto $l700;
    $l723:;
    if ($tmp721 > -$tmp696) goto $l714; else goto $l700;
    $l714:;
    i692.value += $tmp696;
    goto $l698;
    $l700:;
    panda$collections$Array* $tmp726 = (panda$collections$Array*) malloc(40);
    $tmp726->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp726->refCount.value = 1;
    panda$collections$Array$init($tmp726);
    children725 = $tmp726;
    org$pandalanguage$pandac$IRNode* $tmp728 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp728->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp728->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp730 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp728, ((panda$core$Int64) { 1025 }), ((panda$core$Int64) { -1 }), $tmp730);
    panda$collections$Array$add$panda$collections$Array$T(children725, ((panda$core$Object*) $tmp728));
    org$pandalanguage$pandac$Type* $tmp731 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp732 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp731);
    if ($tmp732.value) {
    {
        (($fn734) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s733);
    }
    }
    panda$core$String* $tmp736 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s735, $tmp736);
    panda$core$String* $tmp739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp737, &$s738);
    (($fn740) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp739);
    panda$core$Int64 $tmp742 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp741, ((panda$core$Int64) { 0 }), $tmp742, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp744 = $tmp741.start.value;
    panda$core$Int64 i743 = { $tmp744 };
    int64_t $tmp746 = $tmp741.end.value;
    int64_t $tmp747 = $tmp741.step.value;
    bool $tmp748 = $tmp741.inclusive.value;
    bool $tmp755 = $tmp747 > 0;
    if ($tmp755) goto $l753; else goto $l754;
    $l753:;
    if ($tmp748) goto $l756; else goto $l757;
    $l756:;
    if ($tmp744 <= $tmp746) goto $l749; else goto $l751;
    $l757:;
    if ($tmp744 < $tmp746) goto $l749; else goto $l751;
    $l754:;
    if ($tmp748) goto $l758; else goto $l759;
    $l758:;
    if ($tmp744 >= $tmp746) goto $l749; else goto $l751;
    $l759:;
    if ($tmp744 > $tmp746) goto $l749; else goto $l751;
    $l749:;
    {
        panda$core$Object* $tmp762 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters687, i743);
        panda$core$String* $tmp763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s761, ((panda$core$String*) $tmp762));
        panda$core$String* $tmp765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp763, &$s764);
        (($fn766) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp765);
    }
    $l752:;
    if ($tmp755) goto $l768; else goto $l769;
    $l768:;
    int64_t $tmp770 = $tmp746 - i743.value;
    if ($tmp748) goto $l771; else goto $l772;
    $l771:;
    if ($tmp770 >= $tmp747) goto $l767; else goto $l751;
    $l772:;
    if ($tmp770 > $tmp747) goto $l767; else goto $l751;
    $l769:;
    int64_t $tmp774 = i743.value - $tmp746;
    if ($tmp748) goto $l775; else goto $l776;
    $l775:;
    if ($tmp774 >= -$tmp747) goto $l767; else goto $l751;
    $l776:;
    if ($tmp774 > -$tmp747) goto $l767; else goto $l751;
    $l767:;
    i743.value += $tmp747;
    goto $l749;
    $l751:;
    (($fn779) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s778);
    panda$core$Int64 $tmp780 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp780;
    (($fn782) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s781);
    self->currentMethod = oldMethod613;
    return result614;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces783;
    panda$core$String* previous786;
    panda$collections$Iterator* intfType$Iter788;
    org$pandalanguage$pandac$Type* intfType800;
    org$pandalanguage$pandac$ClassDecl* intf805;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC807;
    panda$collections$ListView* methods809;
    panda$core$String* name811;
    panda$core$MutableString* result821;
    panda$core$String* separator855;
    panda$collections$Iterator* m$Iter857;
    org$pandalanguage$pandac$MethodDecl* m869;
    org$pandalanguage$pandac$Type* $tmp784 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp785 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp784);
    interfaces783 = $tmp785;
    previous786 = &$s787;
    {
        ITable* $tmp789 = ((panda$collections$Iterable*) interfaces783)->$class->itable;
        while ($tmp789->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp789 = $tmp789->next;
        }
        $fn791 $tmp790 = $tmp789->methods[0];
        panda$collections$Iterator* $tmp792 = $tmp790(((panda$collections$Iterable*) interfaces783));
        intfType$Iter788 = $tmp792;
        $l793:;
        ITable* $tmp795 = intfType$Iter788->$class->itable;
        while ($tmp795->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp795 = $tmp795->next;
        }
        $fn797 $tmp796 = $tmp795->methods[0];
        panda$core$Bit $tmp798 = $tmp796(intfType$Iter788);
        panda$core$Bit $tmp799 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp798);
        if (!$tmp799.value) goto $l794;
        {
            ITable* $tmp801 = intfType$Iter788->$class->itable;
            while ($tmp801->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp801 = $tmp801->next;
            }
            $fn803 $tmp802 = $tmp801->methods[1];
            panda$core$Object* $tmp804 = $tmp802(intfType$Iter788);
            intfType800 = ((org$pandalanguage$pandac$Type*) $tmp804);
            org$pandalanguage$pandac$ClassDecl* $tmp806 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType800);
            intf805 = $tmp806;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp808 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf805);
            intfCC807 = $tmp808;
            panda$collections$ListView* $tmp810 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType800);
            methods809 = $tmp810;
            panda$core$String* $tmp813 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s812, $tmp813);
            panda$core$String* $tmp816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp814, &$s815);
            panda$core$String* $tmp817 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf805)->name);
            panda$core$String* $tmp818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp816, $tmp817);
            panda$core$String* $tmp820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp818, &$s819);
            name811 = $tmp820;
            panda$core$MutableString* $tmp822 = (panda$core$MutableString*) malloc(40);
            $tmp822->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp822->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp825 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp826 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp825);
            panda$core$String* $tmp827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s824, $tmp826);
            panda$core$String* $tmp829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp827, &$s828);
            ITable* $tmp831 = ((panda$collections$CollectionView*) methods809)->$class->itable;
            while ($tmp831->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp831 = $tmp831->next;
            }
            $fn833 $tmp832 = $tmp831->methods[0];
            panda$core$Int64 $tmp834 = $tmp832(((panda$collections$CollectionView*) methods809));
            panda$core$String* $tmp835 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s830, ((panda$core$Object*) wrap_panda$core$Int64($tmp834)));
            panda$core$String* $tmp837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp835, &$s836);
            panda$core$String* $tmp838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp837, name811);
            panda$core$String* $tmp840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp838, &$s839);
            panda$core$String* $tmp841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp829, $tmp840);
            org$pandalanguage$pandac$Type* $tmp843 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp844 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp843);
            panda$core$String* $tmp845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s842, $tmp844);
            panda$core$String* $tmp847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp845, &$s846);
            panda$core$String* $tmp848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp847, intfCC807->name);
            panda$core$String* $tmp850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp848, &$s849);
            panda$core$String* $tmp851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp850, previous786);
            panda$core$String* $tmp853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp851, &$s852);
            panda$core$String* $tmp854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp841, $tmp853);
            panda$core$MutableString$init$panda$core$String($tmp822, $tmp854);
            result821 = $tmp822;
            separator855 = &$s856;
            {
                ITable* $tmp858 = ((panda$collections$Iterable*) methods809)->$class->itable;
                while ($tmp858->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp858 = $tmp858->next;
                }
                $fn860 $tmp859 = $tmp858->methods[0];
                panda$collections$Iterator* $tmp861 = $tmp859(((panda$collections$Iterable*) methods809));
                m$Iter857 = $tmp861;
                $l862:;
                ITable* $tmp864 = m$Iter857->$class->itable;
                while ($tmp864->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp864 = $tmp864->next;
                }
                $fn866 $tmp865 = $tmp864->methods[0];
                panda$core$Bit $tmp867 = $tmp865(m$Iter857);
                panda$core$Bit $tmp868 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp867);
                if (!$tmp868.value) goto $l863;
                {
                    ITable* $tmp870 = m$Iter857->$class->itable;
                    while ($tmp870->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp870 = $tmp870->next;
                    }
                    $fn872 $tmp871 = $tmp870->methods[1];
                    panda$core$Object* $tmp873 = $tmp871(m$Iter857);
                    m869 = ((org$pandalanguage$pandac$MethodDecl*) $tmp873);
                    panda$core$MutableString$append$panda$core$String(result821, separator855);
                    separator855 = &$s874;
                    panda$core$Bit $tmp875 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m869->annotations);
                    if ($tmp875.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result821, &$s876);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp877 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m869, self->wrapperShims);
                        panda$core$MutableString$append$panda$core$String(result821, $tmp877);
                    }
                    }
                }
                goto $l862;
                $l863:;
            }
            panda$core$MutableString$append$panda$core$String(result821, &$s878);
            (($fn879) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result821));
            panda$core$String* $tmp881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s880, name811);
            panda$core$String* $tmp883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp881, &$s882);
            previous786 = $tmp883;
        }
        goto $l793;
        $l794:;
    }
    return previous786;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $tmp884 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self->hCodeGen, p_m);
    return $tmp884;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result886;
    org$pandalanguage$pandac$Type* declared887;
    org$pandalanguage$pandac$Type* inherited890;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* shim893;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    panda$core$Bit $tmp885 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
    if ($tmp885.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp888 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp889 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp888);
    declared887 = $tmp889;
    org$pandalanguage$pandac$Type* $tmp891 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited890 = $tmp891;
    panda$core$Bit $tmp892 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared887, inherited890);
    if ($tmp892.value) {
    {
        org$pandalanguage$pandac$Type* $tmp894 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp895 = org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(self, p_m, $tmp894, ((panda$io$OutputStream*) self->shims));
        shim893 = $tmp895;
        result886 = shim893->name;
    }
    }
    else {
    {
        panda$core$String* $tmp896 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        result886 = $tmp896;
    }
    }
    return result886;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result897;
    panda$core$String* type899;
    panda$collections$ListView* vtable911;
    panda$core$String* superPtr922;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC923;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant931;
    panda$core$MutableString* code935;
    panda$core$String* separator957;
    panda$collections$Iterator* m$Iter959;
    org$pandalanguage$pandac$MethodDecl* m971;
    panda$core$Object* $tmp898 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result897 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp898);
    if (((panda$core$Bit) { result897 == NULL }).value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        panda$core$Bit $tmp900 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp900.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp901 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp901->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp901->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp904 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp905 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp904)->name);
            panda$core$String* $tmp906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s903, $tmp905);
            panda$core$String* $tmp908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp906, &$s907);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp901, $tmp908, &$s909);
            result897 = $tmp901;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result897));
            panda$core$Object* $tmp910 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
            return ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp910);
        }
        }
        panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) p_cl));
        panda$collections$ListView* $tmp912 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable911 = $tmp912;
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp913 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
        $tmp913->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
        $tmp913->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp916 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp917 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp916)->name);
        panda$core$String* $tmp918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s915, $tmp917);
        panda$core$String* $tmp920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp918, &$s919);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp913, $tmp920, &$s921);
        result897 = $tmp913;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result897));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp924 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp925 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp924);
            superCC923 = $tmp925;
            panda$core$String* $tmp927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s926, superCC923->name);
            panda$core$String* $tmp929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp927, &$s928);
            superPtr922 = $tmp929;
        }
        }
        else {
        {
            superPtr922 = &$s930;
        }
        }
        org$pandalanguage$pandac$Type* $tmp932 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp933 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp932);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp934 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp933);
        clConstant931 = $tmp934;
        panda$core$MutableString* $tmp936 = (panda$core$MutableString*) malloc(40);
        $tmp936->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp936->refCount.value = 1;
        panda$core$String* $tmp939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s938, result897->name);
        panda$core$String* $tmp941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp939, &$s940);
        panda$core$String* $tmp942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp941, result897->name);
        panda$core$String* $tmp944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp942, &$s943);
        panda$core$String* $tmp946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s945, clConstant931->name);
        panda$core$String* $tmp948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp946, &$s947);
        panda$core$String* $tmp949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp948, superPtr922);
        panda$core$String* $tmp951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp949, &$s950);
        panda$core$String* $tmp952 = org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp951, $tmp952);
        panda$core$String* $tmp955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp953, &$s954);
        panda$core$String* $tmp956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp944, $tmp955);
        panda$core$MutableString$init$panda$core$String($tmp936, $tmp956);
        code935 = $tmp936;
        separator957 = &$s958;
        {
            ITable* $tmp960 = ((panda$collections$Iterable*) vtable911)->$class->itable;
            while ($tmp960->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp960 = $tmp960->next;
            }
            $fn962 $tmp961 = $tmp960->methods[0];
            panda$collections$Iterator* $tmp963 = $tmp961(((panda$collections$Iterable*) vtable911));
            m$Iter959 = $tmp963;
            $l964:;
            ITable* $tmp966 = m$Iter959->$class->itable;
            while ($tmp966->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp966 = $tmp966->next;
            }
            $fn968 $tmp967 = $tmp966->methods[0];
            panda$core$Bit $tmp969 = $tmp967(m$Iter959);
            panda$core$Bit $tmp970 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp969);
            if (!$tmp970.value) goto $l965;
            {
                ITable* $tmp972 = m$Iter959->$class->itable;
                while ($tmp972->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp972 = $tmp972->next;
                }
                $fn974 $tmp973 = $tmp972->methods[1];
                panda$core$Object* $tmp975 = $tmp973(m$Iter959);
                m971 = ((org$pandalanguage$pandac$MethodDecl*) $tmp975);
                panda$core$MutableString$append$panda$core$String(code935, separator957);
                panda$core$Bit $tmp976 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m971->annotations);
                if ($tmp976.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code935, &$s977);
                }
                }
                else {
                {
                    panda$core$String* $tmp978 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m971);
                    panda$core$MutableString$append$panda$core$String(code935, $tmp978);
                }
                }
                separator957 = &$s979;
            }
            goto $l964;
            $l965:;
        }
        panda$core$MutableString$append$panda$core$String(code935, &$s980);
        (($fn981) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code935));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    }
    }
    return result897;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name982;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result988;
    panda$core$String* type992;
    org$pandalanguage$pandac$ClassDecl* value1004;
    panda$collections$ListView* valueVTable1007;
    panda$collections$ListView* vtable1017;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC1019;
    panda$core$String* superCast1022;
    panda$core$String* itable1027;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant1029;
    panda$core$MutableString* code1033;
    panda$core$String* separator1054;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1056;
    org$pandalanguage$pandac$MethodDecl* m1079;
    panda$core$String* methodName1084;
    panda$core$String* $tmp984 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s983, $tmp984);
    panda$core$String* $tmp987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp985, &$s986);
    name982 = $tmp987;
    panda$core$Object* $tmp989 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name982));
    result988 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp989);
    if (((panda$core$Bit) { result988 == NULL }).value) {
    {
        panda$core$Bit $tmp990 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp990.value) {
        {
            org$pandalanguage$pandac$Type* $tmp991 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp991);
            type992 = &$s993;
            panda$core$String* $tmp995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s994, name982);
            panda$core$String* $tmp997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp995, &$s996);
            panda$core$String* $tmp998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp997, type992);
            panda$core$String* $tmp1000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp998, &$s999);
            (($fn1001) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1000);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1002 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp1002->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp1002->refCount.value = 1;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1002, name982, type992);
            result988 = $tmp1002;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp1005 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1006 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1005);
            value1004 = $tmp1006;
            panda$collections$ListView* $tmp1008 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value1004);
            valueVTable1007 = $tmp1008;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1009 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp1009->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp1009->refCount.value = 1;
            panda$core$String* $tmp1012 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1011, $tmp1012);
            panda$core$String* $tmp1015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1013, &$s1014);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1009, $tmp1015, &$s1016);
            result988 = $tmp1009;
            panda$collections$ListView* $tmp1018 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable1017 = $tmp1018;
            org$pandalanguage$pandac$ClassDecl* $tmp1020 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1021 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp1020);
            superCC1019 = $tmp1021;
            panda$core$String* $tmp1024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1023, superCC1019->name);
            panda$core$String* $tmp1026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1024, &$s1025);
            superCast1022 = $tmp1026;
            panda$core$String* $tmp1028 = org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable1027 = $tmp1028;
            org$pandalanguage$pandac$Type* $tmp1030 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1031 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1030);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1032 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp1031);
            clConstant1029 = $tmp1032;
            panda$core$MutableString* $tmp1034 = (panda$core$MutableString*) malloc(40);
            $tmp1034->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1034->refCount.value = 1;
            panda$core$String* $tmp1037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1036, result988->name);
            panda$core$String* $tmp1039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1037, &$s1038);
            panda$core$String* $tmp1040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1039, result988->name);
            panda$core$String* $tmp1042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1040, &$s1041);
            panda$core$String* $tmp1044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1043, clConstant1029->name);
            panda$core$String* $tmp1046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1044, &$s1045);
            panda$core$String* $tmp1047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1046, superCast1022);
            panda$core$String* $tmp1049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1047, &$s1048);
            panda$core$String* $tmp1050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1049, itable1027);
            panda$core$String* $tmp1052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1050, &$s1051);
            panda$core$String* $tmp1053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1042, $tmp1052);
            panda$core$MutableString$init$panda$core$String($tmp1034, $tmp1053);
            code1033 = $tmp1034;
            separator1054 = &$s1055;
            ITable* $tmp1057 = ((panda$collections$CollectionView*) valueVTable1007)->$class->itable;
            while ($tmp1057->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1057 = $tmp1057->next;
            }
            $fn1059 $tmp1058 = $tmp1057->methods[0];
            panda$core$Int64 $tmp1060 = $tmp1058(((panda$collections$CollectionView*) valueVTable1007));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1056, ((panda$core$Int64) { 0 }), $tmp1060, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1062 = $tmp1056.start.value;
            panda$core$Int64 i1061 = { $tmp1062 };
            int64_t $tmp1064 = $tmp1056.end.value;
            int64_t $tmp1065 = $tmp1056.step.value;
            bool $tmp1066 = $tmp1056.inclusive.value;
            bool $tmp1073 = $tmp1065 > 0;
            if ($tmp1073) goto $l1071; else goto $l1072;
            $l1071:;
            if ($tmp1066) goto $l1074; else goto $l1075;
            $l1074:;
            if ($tmp1062 <= $tmp1064) goto $l1067; else goto $l1069;
            $l1075:;
            if ($tmp1062 < $tmp1064) goto $l1067; else goto $l1069;
            $l1072:;
            if ($tmp1066) goto $l1076; else goto $l1077;
            $l1076:;
            if ($tmp1062 >= $tmp1064) goto $l1067; else goto $l1069;
            $l1077:;
            if ($tmp1062 > $tmp1064) goto $l1067; else goto $l1069;
            $l1067:;
            {
                ITable* $tmp1080 = vtable1017->$class->itable;
                while ($tmp1080->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1080 = $tmp1080->next;
                }
                $fn1082 $tmp1081 = $tmp1080->methods[0];
                panda$core$Object* $tmp1083 = $tmp1081(vtable1017, i1061);
                m1079 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1083);
                if (((panda$core$Bit) { ((panda$core$Object*) m1079->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp1085 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1079, self->wrapperShims);
                    methodName1084 = $tmp1085;
                }
                }
                else {
                {
                    panda$core$String* $tmp1086 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1079);
                    methodName1084 = $tmp1086;
                    panda$core$Bit $tmp1087 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1079->owner);
                    if ($tmp1087.value) {
                    {
                        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1079);
                    }
                    }
                }
                }
                panda$core$String* $tmp1089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1088, separator1054);
                panda$core$String* $tmp1091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1089, &$s1090);
                panda$core$String* $tmp1092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1091, methodName1084);
                panda$core$String* $tmp1094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1092, &$s1093);
                panda$core$MutableString$append$panda$core$String(code1033, $tmp1094);
                separator1054 = &$s1095;
            }
            $l1070:;
            if ($tmp1073) goto $l1097; else goto $l1098;
            $l1097:;
            int64_t $tmp1099 = $tmp1064 - i1061.value;
            if ($tmp1066) goto $l1100; else goto $l1101;
            $l1100:;
            if ($tmp1099 >= $tmp1065) goto $l1096; else goto $l1069;
            $l1101:;
            if ($tmp1099 > $tmp1065) goto $l1096; else goto $l1069;
            $l1098:;
            int64_t $tmp1103 = i1061.value - $tmp1064;
            if ($tmp1066) goto $l1104; else goto $l1105;
            $l1104:;
            if ($tmp1103 >= -$tmp1065) goto $l1096; else goto $l1069;
            $l1105:;
            if ($tmp1103 > -$tmp1065) goto $l1096; else goto $l1069;
            $l1096:;
            i1061.value += $tmp1065;
            goto $l1067;
            $l1069:;
            panda$core$MutableString$append$panda$core$String(code1033, &$s1107);
            (($fn1108) ((panda$io$OutputStream*) self->types)->$class->vtable[15])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code1033));
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name982), ((panda$core$Object*) result988));
    }
    }
    return result988;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$String* result1114;
    panda$core$Bit $tmp1109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1109.value) {
    {
        panda$core$String* $tmp1111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1110, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1111, &$s1112);
        return $tmp1113;
    }
    }
    panda$core$Object* $tmp1115 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1114 = ((panda$core$String*) $tmp1115);
    if (((panda$core$Bit) { result1114 == NULL }).value) {
    {
        panda$core$Int64 $tmp1116 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1116;
        panda$core$String* $tmp1118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1117, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1118, &$s1119);
        panda$core$String* $tmp1121 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1120, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        panda$core$String* $tmp1123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1121, &$s1122);
        result1114 = $tmp1123;
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1114));
    }
    }
    return result1114;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$String* $tmp1125 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1124, $tmp1125);
    panda$core$String* $tmp1128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1126, &$s1127);
    panda$core$String* $tmp1129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1128, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1129, &$s1130);
    return $tmp1131;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $match$221411132;
    {
        $match$221411132 = p_t->typeKind;
        panda$core$Bit $tmp1133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$221411132, ((panda$core$Int64) { 12 }));
        if ($tmp1133.value) {
        {
            return ((panda$core$Int64) { 10121 });
        }
        }
        else {
        panda$core$Bit $tmp1135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$221411132, ((panda$core$Int64) { 13 }));
        bool $tmp1134 = $tmp1135.value;
        if ($tmp1134) goto $l1136;
        panda$core$Bit $tmp1137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$221411132, ((panda$core$Int64) { 19 }));
        $tmp1134 = $tmp1137.value;
        $l1136:;
        panda$core$Bit $tmp1138 = { $tmp1134 };
        if ($tmp1138.value) {
        {
            return ((panda$core$Int64) { 10122 });
        }
        }
        else {
        panda$core$Bit $tmp1139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$221411132, ((panda$core$Int64) { 20 }));
        if ($tmp1139.value) {
        {
            return ((panda$core$Int64) { 10123 });
        }
        }
        else {
        {
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1140;
    panda$core$String* leftRef1142;
    panda$core$String* falseLabel1156;
    panda$core$String* rightRef1166;
    panda$core$String* $tmp1141 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1140 = $tmp1141;
    panda$core$String* $tmp1143 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1142 = $tmp1143;
    org$pandalanguage$pandac$Type* $tmp1144 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1145 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1144);
    if ($tmp1145.value) {
    {
        panda$core$String* $tmp1147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1142, &$s1146);
        leftRef1142 = $tmp1147;
    }
    }
    panda$core$String* $tmp1149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1148, result1140);
    panda$core$String* $tmp1151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1149, &$s1150);
    panda$core$String* $tmp1152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1151, leftRef1142);
    panda$core$String* $tmp1154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1152, &$s1153);
    (($fn1155) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1154);
    panda$core$String* $tmp1157 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel1156 = $tmp1157;
    panda$core$String* $tmp1159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1158, result1140);
    panda$core$String* $tmp1161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1159, &$s1160);
    panda$core$String* $tmp1162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1161, falseLabel1156);
    panda$core$String* $tmp1164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1162, &$s1163);
    (($fn1165) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1164);
    panda$core$String* $tmp1167 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1166 = $tmp1167;
    org$pandalanguage$pandac$Type* $tmp1168 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1169 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1168);
    if ($tmp1169.value) {
    {
        panda$core$String* $tmp1171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1166, &$s1170);
        rightRef1166 = $tmp1171;
    }
    }
    panda$core$String* $tmp1173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1172, result1140);
    panda$core$String* $tmp1175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1173, &$s1174);
    panda$core$String* $tmp1176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1175, rightRef1166);
    panda$core$String* $tmp1178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1176, &$s1177);
    (($fn1179) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1178);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel1156, p_out);
    return result1140;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1180;
    panda$core$String* leftRef1182;
    panda$core$String* trueLabel1196;
    panda$core$String* rightRef1206;
    panda$core$String* $tmp1181 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1180 = $tmp1181;
    panda$core$String* $tmp1183 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1182 = $tmp1183;
    org$pandalanguage$pandac$Type* $tmp1184 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1185 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1184);
    if ($tmp1185.value) {
    {
        panda$core$String* $tmp1187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1182, &$s1186);
        leftRef1182 = $tmp1187;
    }
    }
    panda$core$String* $tmp1189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1188, result1180);
    panda$core$String* $tmp1191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1189, &$s1190);
    panda$core$String* $tmp1192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1191, leftRef1182);
    panda$core$String* $tmp1194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1192, &$s1193);
    (($fn1195) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1194);
    panda$core$String* $tmp1197 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel1196 = $tmp1197;
    panda$core$String* $tmp1199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1198, result1180);
    panda$core$String* $tmp1201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1199, &$s1200);
    panda$core$String* $tmp1202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1201, trueLabel1196);
    panda$core$String* $tmp1204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1202, &$s1203);
    (($fn1205) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1204);
    panda$core$String* $tmp1207 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1206 = $tmp1207;
    org$pandalanguage$pandac$Type* $tmp1208 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1209 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1208);
    if ($tmp1209.value) {
    {
        panda$core$String* $tmp1211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1206, &$s1210);
        rightRef1206 = $tmp1211;
    }
    }
    panda$core$String* $tmp1213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1212, result1180);
    panda$core$String* $tmp1215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1213, &$s1214);
    panda$core$String* $tmp1216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1215, rightRef1206);
    panda$core$String* $tmp1218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1216, &$s1217);
    (($fn1219) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1218);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel1196, p_out);
    return result1180;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Int64 p_cl, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* cOp1220;
    panda$core$Bit logical1221;
    panda$core$Int64 $match$240091222;
    panda$core$String* result1261;
    logical1221 = ((panda$core$Bit) { false });
    {
        $match$240091222 = p_op;
        panda$core$Bit $tmp1223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091222, ((panda$core$Int64) { 51 }));
        if ($tmp1223.value) {
        {
            cOp1220 = &$s1224;
        }
        }
        else {
        panda$core$Bit $tmp1225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091222, ((panda$core$Int64) { 52 }));
        if ($tmp1225.value) {
        {
            cOp1220 = &$s1226;
        }
        }
        else {
        panda$core$Bit $tmp1227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091222, ((panda$core$Int64) { 53 }));
        if ($tmp1227.value) {
        {
            cOp1220 = &$s1228;
        }
        }
        else {
        panda$core$Bit $tmp1229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091222, ((panda$core$Int64) { 55 }));
        if ($tmp1229.value) {
        {
            cOp1220 = &$s1230;
        }
        }
        else {
        panda$core$Bit $tmp1231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091222, ((panda$core$Int64) { 54 }));
        if ($tmp1231.value) {
        {
            cOp1220 = &$s1232;
        }
        }
        else {
        panda$core$Bit $tmp1233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091222, ((panda$core$Int64) { 56 }));
        if ($tmp1233.value) {
        {
            cOp1220 = &$s1234;
        }
        }
        else {
        panda$core$Bit $tmp1235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091222, ((panda$core$Int64) { 72 }));
        if ($tmp1235.value) {
        {
            cOp1220 = &$s1236;
        }
        }
        else {
        panda$core$Bit $tmp1237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091222, ((panda$core$Int64) { 1 }));
        if ($tmp1237.value) {
        {
            cOp1220 = &$s1238;
        }
        }
        else {
        panda$core$Bit $tmp1239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091222, ((panda$core$Int64) { 67 }));
        if ($tmp1239.value) {
        {
            cOp1220 = &$s1240;
        }
        }
        else {
        panda$core$Bit $tmp1241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091222, ((panda$core$Int64) { 69 }));
        if ($tmp1241.value) {
        {
            cOp1220 = &$s1242;
        }
        }
        else {
        panda$core$Bit $tmp1244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091222, ((panda$core$Int64) { 70 }));
        bool $tmp1243 = $tmp1244.value;
        if ($tmp1243) goto $l1245;
        panda$core$Bit $tmp1246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091222, ((panda$core$Int64) { 71 }));
        $tmp1243 = $tmp1246.value;
        $l1245:;
        panda$core$Bit $tmp1247 = { $tmp1243 };
        if ($tmp1247.value) {
        {
            cOp1220 = &$s1248;
        }
        }
        else {
        panda$core$Bit $tmp1249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091222, ((panda$core$Int64) { 58 }));
        if ($tmp1249.value) {
        {
            cOp1220 = &$s1250;
            logical1221 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091222, ((panda$core$Int64) { 59 }));
        if ($tmp1251.value) {
        {
            cOp1220 = &$s1252;
            logical1221 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091222, ((panda$core$Int64) { 63 }));
        if ($tmp1253.value) {
        {
            cOp1220 = &$s1254;
            logical1221 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091222, ((panda$core$Int64) { 62 }));
        if ($tmp1255.value) {
        {
            cOp1220 = &$s1256;
            logical1221 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091222, ((panda$core$Int64) { 65 }));
        if ($tmp1257.value) {
        {
            cOp1220 = &$s1258;
            logical1221 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$240091222, ((panda$core$Int64) { 64 }));
        if ($tmp1259.value) {
        {
            logical1221 = ((panda$core$Bit) { true });
            cOp1220 = &$s1260;
        }
        }
        else {
        {
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    panda$core$String* $tmp1262 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1261 = $tmp1262;
    if (logical1221.value) {
    {
        (($fn1264) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s1263);
    }
    }
    else {
    {
        panda$core$String* $tmp1266 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp1267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1265, $tmp1266);
        panda$core$String* $tmp1269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1267, &$s1268);
        (($fn1270) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1269);
    }
    }
    panda$core$String* $tmp1272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1271, result1261);
    panda$core$String* $tmp1274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1272, &$s1273);
    panda$core$String* $tmp1275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1274, p_leftRef);
    panda$core$String* $tmp1277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1275, &$s1276);
    panda$core$String* $tmp1278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1277, cOp1220);
    panda$core$String* $tmp1280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1278, &$s1279);
    panda$core$String* $tmp1281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1280, p_rightRef);
    panda$core$String* $tmp1283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1281, &$s1282);
    (($fn1284) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1283);
    return result1261;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1285;
    panda$core$String* rightRef1287;
    panda$core$String* $tmp1286 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1285 = $tmp1286;
    panda$core$String* $tmp1288 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1287 = $tmp1288;
    panda$core$String* $tmp1290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1289, leftRef1285);
    panda$core$String* $tmp1292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1290, &$s1291);
    panda$core$String* $tmp1293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1292, rightRef1287);
    panda$core$String* $tmp1295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1293, &$s1294);
    return $tmp1295;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1296;
    panda$core$String* rightRef1298;
    panda$core$String* $tmp1297 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1296 = $tmp1297;
    panda$core$String* $tmp1299 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1298 = $tmp1299;
    panda$core$String* $tmp1301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1300, leftRef1296);
    panda$core$String* $tmp1303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1301, &$s1302);
    panda$core$String* $tmp1304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1303, rightRef1298);
    panda$core$String* $tmp1306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1304, &$s1305);
    return $tmp1306;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$262781307;
    panda$core$String* leftRef1316;
    panda$core$String* rightRef1318;
    {
        $match$262781307 = p_op;
        panda$core$Bit $tmp1308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$262781307, ((panda$core$Int64) { 66 }));
        if ($tmp1308.value) {
        {
            panda$core$String* $tmp1309 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1309;
        }
        }
        else {
        panda$core$Bit $tmp1310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$262781307, ((panda$core$Int64) { 68 }));
        if ($tmp1310.value) {
        {
            panda$core$String* $tmp1311 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1311;
        }
        }
        else {
        panda$core$Bit $tmp1312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$262781307, ((panda$core$Int64) { 60 }));
        if ($tmp1312.value) {
        {
            panda$core$String* $tmp1313 = org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1313;
        }
        }
        else {
        panda$core$Bit $tmp1314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$262781307, ((panda$core$Int64) { 61 }));
        if ($tmp1314.value) {
        {
            panda$core$String* $tmp1315 = org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1315;
        }
        }
        else {
        {
            panda$core$String* $tmp1317 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1316 = $tmp1317;
            panda$core$String* $tmp1319 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1318 = $tmp1319;
            panda$core$Int64 $tmp1320 = org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_left->type);
            panda$core$String* $tmp1321 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1320, p_left->type, leftRef1316, p_op, rightRef1318, p_out);
            return $tmp1321;
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Object* $tmp1322 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp1323 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1324 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1322), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp1323), p_out);
    return $tmp1324;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1325;
    panda$core$Int64 index1327;
    panda$collections$ListView* vtable1328;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1330;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1326 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1325 = $tmp1326;
    index1327 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1329 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1328 = $tmp1329;
    ITable* $tmp1331 = ((panda$collections$CollectionView*) vtable1328)->$class->itable;
    while ($tmp1331->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1331 = $tmp1331->next;
    }
    $fn1333 $tmp1332 = $tmp1331->methods[0];
    panda$core$Int64 $tmp1334 = $tmp1332(((panda$collections$CollectionView*) vtable1328));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1330, ((panda$core$Int64) { 0 }), $tmp1334, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1336 = $tmp1330.start.value;
    panda$core$Int64 i1335 = { $tmp1336 };
    int64_t $tmp1338 = $tmp1330.end.value;
    int64_t $tmp1339 = $tmp1330.step.value;
    bool $tmp1340 = $tmp1330.inclusive.value;
    bool $tmp1347 = $tmp1339 > 0;
    if ($tmp1347) goto $l1345; else goto $l1346;
    $l1345:;
    if ($tmp1340) goto $l1348; else goto $l1349;
    $l1348:;
    if ($tmp1336 <= $tmp1338) goto $l1341; else goto $l1343;
    $l1349:;
    if ($tmp1336 < $tmp1338) goto $l1341; else goto $l1343;
    $l1346:;
    if ($tmp1340) goto $l1350; else goto $l1351;
    $l1350:;
    if ($tmp1336 >= $tmp1338) goto $l1341; else goto $l1343;
    $l1351:;
    if ($tmp1336 > $tmp1338) goto $l1341; else goto $l1343;
    $l1341:;
    {
        ITable* $tmp1353 = vtable1328->$class->itable;
        while ($tmp1353->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1353 = $tmp1353->next;
        }
        $fn1355 $tmp1354 = $tmp1353->methods[0];
        panda$core$Object* $tmp1356 = $tmp1354(vtable1328, i1335);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1356)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1327 = i1335;
            goto $l1343;
        }
        }
    }
    $l1344:;
    if ($tmp1347) goto $l1358; else goto $l1359;
    $l1358:;
    int64_t $tmp1360 = $tmp1338 - i1335.value;
    if ($tmp1340) goto $l1361; else goto $l1362;
    $l1361:;
    if ($tmp1360 >= $tmp1339) goto $l1357; else goto $l1343;
    $l1362:;
    if ($tmp1360 > $tmp1339) goto $l1357; else goto $l1343;
    $l1359:;
    int64_t $tmp1364 = i1335.value - $tmp1338;
    if ($tmp1340) goto $l1365; else goto $l1366;
    $l1365:;
    if ($tmp1364 >= -$tmp1339) goto $l1357; else goto $l1343;
    $l1366:;
    if ($tmp1364 > -$tmp1339) goto $l1357; else goto $l1343;
    $l1357:;
    i1335.value += $tmp1339;
    goto $l1341;
    $l1343:;
    org$pandalanguage$pandac$Type* $tmp1369 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1370 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1369);
    panda$core$String* $tmp1371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1368, $tmp1370);
    panda$core$String* $tmp1373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1371, &$s1372);
    panda$core$String* $tmp1374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1373, p_target);
    panda$core$String* $tmp1376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1374, &$s1375);
    panda$core$String* $tmp1377 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1376, ((panda$core$Object*) wrap_panda$core$Int64(index1327)));
    panda$core$String* $tmp1379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1377, &$s1378);
    return $tmp1379;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1380;
    panda$core$String* itable1382;
    panda$core$Int64 index1412;
    panda$collections$ListView* vtable1413;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1415;
    panda$core$String* result1461;
    panda$core$String* methodType1463;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1381 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1380 = $tmp1381;
    panda$core$String* $tmp1383 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    itable1382 = $tmp1383;
    panda$core$String* $tmp1385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1384, itable1382);
    panda$core$String* $tmp1387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1385, &$s1386);
    panda$core$String* $tmp1388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1387, p_target);
    panda$core$String* $tmp1390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1388, &$s1389);
    (($fn1391) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1390);
    panda$core$String* $tmp1393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1392, itable1382);
    panda$core$String* $tmp1395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1393, &$s1394);
    panda$core$String* $tmp1396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1395, cc1380->name);
    panda$core$String* $tmp1398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1396, &$s1397);
    (($fn1399) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1398);
    panda$core$Int64 $tmp1400 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1400;
    panda$core$String* $tmp1402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1401, itable1382);
    panda$core$String* $tmp1404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1402, &$s1403);
    panda$core$String* $tmp1405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1404, itable1382);
    panda$core$String* $tmp1407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1405, &$s1406);
    (($fn1408) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1407);
    panda$core$Int64 $tmp1409 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1409;
    (($fn1411) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1410);
    index1412 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1414 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1413 = $tmp1414;
    ITable* $tmp1416 = ((panda$collections$CollectionView*) vtable1413)->$class->itable;
    while ($tmp1416->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1416 = $tmp1416->next;
    }
    $fn1418 $tmp1417 = $tmp1416->methods[0];
    panda$core$Int64 $tmp1419 = $tmp1417(((panda$collections$CollectionView*) vtable1413));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1415, ((panda$core$Int64) { 0 }), $tmp1419, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1421 = $tmp1415.start.value;
    panda$core$Int64 i1420 = { $tmp1421 };
    int64_t $tmp1423 = $tmp1415.end.value;
    int64_t $tmp1424 = $tmp1415.step.value;
    bool $tmp1425 = $tmp1415.inclusive.value;
    bool $tmp1432 = $tmp1424 > 0;
    if ($tmp1432) goto $l1430; else goto $l1431;
    $l1430:;
    if ($tmp1425) goto $l1433; else goto $l1434;
    $l1433:;
    if ($tmp1421 <= $tmp1423) goto $l1426; else goto $l1428;
    $l1434:;
    if ($tmp1421 < $tmp1423) goto $l1426; else goto $l1428;
    $l1431:;
    if ($tmp1425) goto $l1435; else goto $l1436;
    $l1435:;
    if ($tmp1421 >= $tmp1423) goto $l1426; else goto $l1428;
    $l1436:;
    if ($tmp1421 > $tmp1423) goto $l1426; else goto $l1428;
    $l1426:;
    {
        ITable* $tmp1438 = vtable1413->$class->itable;
        while ($tmp1438->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1438 = $tmp1438->next;
        }
        $fn1440 $tmp1439 = $tmp1438->methods[0];
        panda$core$Object* $tmp1441 = $tmp1439(vtable1413, i1420);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1441)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1412 = i1420;
            goto $l1428;
        }
        }
    }
    $l1429:;
    if ($tmp1432) goto $l1443; else goto $l1444;
    $l1443:;
    int64_t $tmp1445 = $tmp1423 - i1420.value;
    if ($tmp1425) goto $l1446; else goto $l1447;
    $l1446:;
    if ($tmp1445 >= $tmp1424) goto $l1442; else goto $l1428;
    $l1447:;
    if ($tmp1445 > $tmp1424) goto $l1442; else goto $l1428;
    $l1444:;
    int64_t $tmp1449 = i1420.value - $tmp1423;
    if ($tmp1425) goto $l1450; else goto $l1451;
    $l1450:;
    if ($tmp1449 >= -$tmp1424) goto $l1442; else goto $l1428;
    $l1451:;
    if ($tmp1449 > -$tmp1424) goto $l1442; else goto $l1428;
    $l1442:;
    i1420.value += $tmp1424;
    goto $l1426;
    $l1428:;
    org$pandalanguage$pandac$Type* $tmp1453 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp1454 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1453);
    panda$collections$ListView* $tmp1455 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp1454);
    ITable* $tmp1456 = ((panda$collections$CollectionView*) $tmp1455)->$class->itable;
    while ($tmp1456->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1456 = $tmp1456->next;
    }
    $fn1458 $tmp1457 = $tmp1456->methods[0];
    panda$core$Int64 $tmp1459 = $tmp1457(((panda$collections$CollectionView*) $tmp1455));
    panda$core$Int64 $tmp1460 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index1412, $tmp1459);
    index1412 = $tmp1460;
    panda$core$String* $tmp1462 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1461 = $tmp1462;
    org$pandalanguage$pandac$Type* $tmp1464 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1465 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1464);
    methodType1463 = $tmp1465;
    panda$core$String* $tmp1467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1466, methodType1463);
    panda$core$String* $tmp1469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1467, &$s1468);
    panda$core$String* $tmp1470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1469, result1461);
    panda$core$String* $tmp1472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1470, &$s1471);
    panda$core$String* $tmp1473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1472, itable1382);
    panda$core$String* $tmp1475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1473, &$s1474);
    panda$core$String* $tmp1476 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1475, ((panda$core$Object*) wrap_panda$core$Int64(index1412)));
    panda$core$String* $tmp1478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1476, &$s1477);
    (($fn1479) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1478);
    return result1461;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1481 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp1480 = $tmp1481.value;
    if (!$tmp1480) goto $l1482;
    panda$core$Bit $tmp1483 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp1480 = $tmp1483.value;
    $l1482:;
    panda$core$Bit $tmp1484 = { $tmp1480 };
    if ($tmp1484.value) {
    {
        panda$core$Bit $tmp1485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp1485.value) {
        {
            panda$core$String* $tmp1486 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1486;
        }
        }
        else {
        {
            panda$core$String* $tmp1487 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1487;
        }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp1488 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
        if ($tmp1488.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
        }
        }
        panda$core$String* $tmp1489 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp1489;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m1490;
    panda$core$String* $match$294961491;
    panda$core$String* count1494;
    panda$core$Int64 elementSize1497;
    panda$core$String* ptr1514;
    panda$core$String* ptr1523;
    panda$core$String* index1526;
    panda$core$String* ptr1538;
    panda$core$String* count1541;
    panda$core$Int64 elementSize1544;
    panda$core$String* ptr1564;
    panda$core$String* offset1567;
    m1490 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$294961491 = ((org$pandalanguage$pandac$Symbol*) m1490->value)->name;
        panda$core$Bit $tmp1493 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$294961491, &$s1492);
        if ($tmp1493.value) {
        {
            panda$core$Object* $tmp1495 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1496 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1495), p_out);
            count1494 = $tmp1496;
            org$pandalanguage$pandac$Type* $tmp1498 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1490);
            panda$core$Object* $tmp1499 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1498->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1500 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1499));
            elementSize1497 = $tmp1500;
            panda$core$String* $tmp1502 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1501, $tmp1502);
            panda$core$String* $tmp1505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1503, &$s1504);
            panda$core$String* $tmp1506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1505, count1494);
            panda$core$String* $tmp1508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1506, &$s1507);
            panda$core$String* $tmp1509 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1508, ((panda$core$Object*) wrap_panda$core$Int64(elementSize1497)));
            panda$core$String* $tmp1511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1509, &$s1510);
            return $tmp1511;
        }
        }
        else {
        panda$core$Bit $tmp1513 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$294961491, &$s1512);
        if ($tmp1513.value) {
        {
            panda$core$Object* $tmp1515 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1516 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1515), p_out);
            ptr1514 = $tmp1516;
            panda$core$String* $tmp1518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1517, ptr1514);
            panda$core$String* $tmp1520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1518, &$s1519);
            return $tmp1520;
        }
        }
        else {
        panda$core$Bit $tmp1522 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$294961491, &$s1521);
        if ($tmp1522.value) {
        {
            panda$core$Object* $tmp1524 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1525 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1524), p_out);
            ptr1523 = $tmp1525;
            panda$core$Object* $tmp1527 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1528 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1527), p_out);
            index1526 = $tmp1528;
            panda$core$String* $tmp1530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1529, ptr1523);
            panda$core$String* $tmp1532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1530, &$s1531);
            panda$core$String* $tmp1533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1532, index1526);
            panda$core$String* $tmp1535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1533, &$s1534);
            return $tmp1535;
        }
        }
        else {
        panda$core$Bit $tmp1537 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$294961491, &$s1536);
        if ($tmp1537.value) {
        {
            panda$core$Object* $tmp1539 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1540 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1539), p_out);
            ptr1538 = $tmp1540;
            panda$core$Object* $tmp1542 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1543 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1542), p_out);
            count1541 = $tmp1543;
            org$pandalanguage$pandac$Type* $tmp1545 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1490);
            panda$core$Object* $tmp1546 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1545->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1547 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1546));
            elementSize1544 = $tmp1547;
            panda$core$String* $tmp1549 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1548, $tmp1549);
            panda$core$String* $tmp1552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1550, &$s1551);
            panda$core$String* $tmp1553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1552, ptr1538);
            panda$core$String* $tmp1555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1553, &$s1554);
            panda$core$String* $tmp1556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1555, count1541);
            panda$core$String* $tmp1558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1556, &$s1557);
            panda$core$String* $tmp1559 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1558, ((panda$core$Object*) wrap_panda$core$Int64(elementSize1544)));
            panda$core$String* $tmp1561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1559, &$s1560);
            return $tmp1561;
        }
        }
        else {
        panda$core$Bit $tmp1563 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$294961491, &$s1562);
        if ($tmp1563.value) {
        {
            panda$core$Object* $tmp1565 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1566 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1565), p_out);
            ptr1564 = $tmp1566;
            panda$core$Object* $tmp1568 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1569 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1568), p_out);
            offset1567 = $tmp1569;
            panda$core$String* $tmp1571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1570, ptr1564);
            panda$core$String* $tmp1573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1571, &$s1572);
            panda$core$String* $tmp1574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1573, offset1567);
            panda$core$String* $tmp1576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1574, &$s1575);
            return $tmp1576;
        }
        }
        else {
        {
        }
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m1577;
    panda$core$String* bit1586;
    panda$core$String* result1590;
    panda$core$String* bit1602;
    panda$core$String* result1606;
    panda$collections$Array* args1616;
    org$pandalanguage$pandac$Type* actualMethodType1620;
    panda$core$String* actualResultType1621;
    panda$core$Bit isSuper1622;
    panda$core$Int64 offset1642;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1647;
    panda$core$String* arg1667;
    panda$core$String* target1693;
    panda$core$String* methodRef1697;
    panda$core$Bit indirect1699;
    panda$core$String* result1701;
    panda$core$String* separator1703;
    panda$core$String* indirectVar1705;
    panda$collections$Iterator* arg$Iter1734;
    panda$core$String* arg1746;
    m1577 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp1579 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1577->owner)->name, &$s1578);
    if ($tmp1579.value) {
    {
        panda$core$String* $tmp1580 = org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp1580;
    }
    }
    panda$core$Bit $tmp1581 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1577->owner);
    if ($tmp1581.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1577);
    }
    }
    panda$core$Bit $tmp1583 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1577->owner)->name, &$s1582);
    if ($tmp1583.value) {
    {
        panda$core$Bit $tmp1585 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1577)->name, &$s1584);
        if ($tmp1585.value) {
        {
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
        panda$core$Bit $tmp1601 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1577)->name, &$s1600);
        if ($tmp1601.value) {
        {
            panda$core$Object* $tmp1603 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1604 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1605 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1603), ((org$pandalanguage$pandac$IRNode*) $tmp1604), p_out);
            bit1602 = $tmp1605;
            panda$core$String* $tmp1607 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1606 = $tmp1607;
            panda$core$String* $tmp1609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1608, result1606);
            panda$core$String* $tmp1611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1609, &$s1610);
            panda$core$String* $tmp1612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1611, bit1602);
            panda$core$String* $tmp1614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1612, &$s1613);
            (($fn1615) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1614);
            return result1606;
        }
        }
    }
    }
    panda$collections$Array* $tmp1617 = (panda$collections$Array*) malloc(40);
    $tmp1617->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1617->refCount.value = 1;
    panda$core$Int64 $tmp1619 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp1617, $tmp1619);
    args1616 = $tmp1617;
    panda$core$Int64 $tmp1624 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp1625 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1624, ((panda$core$Int64) { 1 }));
    bool $tmp1623 = $tmp1625.value;
    if (!$tmp1623) goto $l1626;
    panda$core$Object* $tmp1627 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp1628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1627)->kind, ((panda$core$Int64) { 1024 }));
    $tmp1623 = $tmp1628.value;
    $l1626:;
    panda$core$Bit $tmp1629 = { $tmp1623 };
    isSuper1622 = $tmp1629;
    panda$core$Bit $tmp1631 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper1622);
    bool $tmp1630 = $tmp1631.value;
    if (!$tmp1630) goto $l1632;
    panda$core$Bit $tmp1633 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m1577);
    $tmp1630 = $tmp1633.value;
    $l1632:;
    panda$core$Bit $tmp1634 = { $tmp1630 };
    if ($tmp1634.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1635 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1577);
        actualMethodType1620 = $tmp1635;
        panda$core$Int64 $tmp1636 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType1620->subtypes);
        panda$core$Int64 $tmp1637 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1636, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1638 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType1620->subtypes, $tmp1637);
        panda$core$String* $tmp1639 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1638));
        actualResultType1621 = $tmp1639;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp1640 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1577);
        actualMethodType1620 = $tmp1640;
        panda$core$String* $tmp1641 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType1621 = $tmp1641;
    }
    }
    panda$core$Int64 $tmp1643 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp1644 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType1620->subtypes);
    panda$core$Int64 $tmp1645 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1643, $tmp1644);
    panda$core$Int64 $tmp1646 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1645, ((panda$core$Int64) { 1 }));
    offset1642 = $tmp1646;
    panda$core$Int64 $tmp1648 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1647, ((panda$core$Int64) { 0 }), $tmp1648, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1650 = $tmp1647.start.value;
    panda$core$Int64 i1649 = { $tmp1650 };
    int64_t $tmp1652 = $tmp1647.end.value;
    int64_t $tmp1653 = $tmp1647.step.value;
    bool $tmp1654 = $tmp1647.inclusive.value;
    bool $tmp1661 = $tmp1653 > 0;
    if ($tmp1661) goto $l1659; else goto $l1660;
    $l1659:;
    if ($tmp1654) goto $l1662; else goto $l1663;
    $l1662:;
    if ($tmp1650 <= $tmp1652) goto $l1655; else goto $l1657;
    $l1663:;
    if ($tmp1650 < $tmp1652) goto $l1655; else goto $l1657;
    $l1660:;
    if ($tmp1654) goto $l1664; else goto $l1665;
    $l1664:;
    if ($tmp1650 >= $tmp1652) goto $l1655; else goto $l1657;
    $l1665:;
    if ($tmp1650 > $tmp1652) goto $l1655; else goto $l1657;
    $l1655:;
    {
        panda$core$Object* $tmp1668 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1649);
        panda$core$String* $tmp1669 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1668), p_out);
        arg1667 = $tmp1669;
        panda$core$Bit $tmp1671 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i1649, offset1642);
        bool $tmp1670 = $tmp1671.value;
        if (!$tmp1670) goto $l1672;
        panda$core$Int64 $tmp1673 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1649, offset1642);
        panda$core$Object* $tmp1674 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType1620->subtypes, $tmp1673);
        panda$core$Object* $tmp1675 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1649);
        panda$core$Bit $tmp1676 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1674), ((org$pandalanguage$pandac$IRNode*) $tmp1675)->type);
        $tmp1670 = $tmp1676.value;
        $l1672:;
        panda$core$Bit $tmp1677 = { $tmp1670 };
        if ($tmp1677.value) {
        {
            panda$core$Object* $tmp1678 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1649);
            panda$core$Int64 $tmp1679 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1649, offset1642);
            panda$core$Object* $tmp1680 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType1620->subtypes, $tmp1679);
            panda$core$String* $tmp1681 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg1667, ((org$pandalanguage$pandac$IRNode*) $tmp1678)->type, ((org$pandalanguage$pandac$Type*) $tmp1680), p_out);
            arg1667 = $tmp1681;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args1616, ((panda$core$Object*) arg1667));
    }
    $l1658:;
    if ($tmp1661) goto $l1683; else goto $l1684;
    $l1683:;
    int64_t $tmp1685 = $tmp1652 - i1649.value;
    if ($tmp1654) goto $l1686; else goto $l1687;
    $l1686:;
    if ($tmp1685 >= $tmp1653) goto $l1682; else goto $l1657;
    $l1687:;
    if ($tmp1685 > $tmp1653) goto $l1682; else goto $l1657;
    $l1684:;
    int64_t $tmp1689 = i1649.value - $tmp1652;
    if ($tmp1654) goto $l1690; else goto $l1691;
    $l1690:;
    if ($tmp1689 >= -$tmp1653) goto $l1682; else goto $l1657;
    $l1691:;
    if ($tmp1689 > -$tmp1653) goto $l1682; else goto $l1657;
    $l1682:;
    i1649.value += $tmp1653;
    goto $l1655;
    $l1657:;
    panda$core$Int64 $tmp1694 = panda$collections$Array$get_count$R$panda$core$Int64(args1616);
    panda$core$Bit $tmp1695 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1694, ((panda$core$Int64) { 0 }));
    if ($tmp1695.value) {
    {
        panda$core$Object* $tmp1696 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args1616, ((panda$core$Int64) { 0 }));
        target1693 = ((panda$core$String*) $tmp1696);
    }
    }
    else {
    {
        target1693 = NULL;
    }
    }
    panda$core$String* $tmp1698 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target1693, m1577, isSuper1622, p_out);
    methodRef1697 = $tmp1698;
    panda$core$Bit $tmp1700 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m1577);
    indirect1699 = $tmp1700;
    panda$core$String* $tmp1702 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1701 = $tmp1702;
    separator1703 = &$s1704;
    if (indirect1699.value) {
    {
        panda$core$String* $tmp1707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1706, actualResultType1621);
        panda$core$String* $tmp1709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1707, &$s1708);
        panda$core$String* $tmp1710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1709, result1701);
        panda$core$String* $tmp1712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1710, &$s1711);
        (($fn1713) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1712);
        panda$core$String* $tmp1715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1714, methodRef1697);
        panda$core$String* $tmp1717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1715, &$s1716);
        panda$core$String* $tmp1718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1717, result1701);
        panda$core$String* $tmp1720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1718, &$s1719);
        (($fn1721) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1720);
        separator1703 = &$s1722;
    }
    }
    else {
    {
        panda$core$String* $tmp1724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1723, actualResultType1621);
        panda$core$String* $tmp1726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1724, &$s1725);
        panda$core$String* $tmp1727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1726, result1701);
        panda$core$String* $tmp1729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1727, &$s1728);
        panda$core$String* $tmp1730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1729, methodRef1697);
        panda$core$String* $tmp1732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1730, &$s1731);
        (($fn1733) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1732);
    }
    }
    {
        ITable* $tmp1735 = ((panda$collections$Iterable*) args1616)->$class->itable;
        while ($tmp1735->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1735 = $tmp1735->next;
        }
        $fn1737 $tmp1736 = $tmp1735->methods[0];
        panda$collections$Iterator* $tmp1738 = $tmp1736(((panda$collections$Iterable*) args1616));
        arg$Iter1734 = $tmp1738;
        $l1739:;
        ITable* $tmp1741 = arg$Iter1734->$class->itable;
        while ($tmp1741->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1741 = $tmp1741->next;
        }
        $fn1743 $tmp1742 = $tmp1741->methods[0];
        panda$core$Bit $tmp1744 = $tmp1742(arg$Iter1734);
        panda$core$Bit $tmp1745 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1744);
        if (!$tmp1745.value) goto $l1740;
        {
            ITable* $tmp1747 = arg$Iter1734->$class->itable;
            while ($tmp1747->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1747 = $tmp1747->next;
            }
            $fn1749 $tmp1748 = $tmp1747->methods[1];
            panda$core$Object* $tmp1750 = $tmp1748(arg$Iter1734);
            arg1746 = ((panda$core$String*) $tmp1750);
            panda$core$String* $tmp1752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1751, separator1703);
            panda$core$String* $tmp1754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1752, &$s1753);
            panda$core$String* $tmp1755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1754, arg1746);
            panda$core$String* $tmp1757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1755, &$s1756);
            (($fn1758) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1757);
            separator1703 = &$s1759;
        }
        goto $l1739;
        $l1740:;
    }
    (($fn1761) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1760);
    panda$core$String* $tmp1762 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp1763 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp1762, actualResultType1621);
    if ($tmp1763.value) {
    {
        panda$core$Int64 $tmp1764 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType1620->subtypes);
        panda$core$Int64 $tmp1765 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1764, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1766 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType1620->subtypes, $tmp1765);
        panda$core$String* $tmp1767 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result1701, ((org$pandalanguage$pandac$Type*) $tmp1766), p_call->type, p_out);
        return $tmp1767;
    }
    }
    return result1701;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* unwrapped1769;
    panda$core$String* nonNullValue1772;
    panda$core$String* wrapped1782;
    panda$core$Bit $tmp1768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1768.value) {
    {
        panda$core$Object* $tmp1770 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1771 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1770), p_out);
        unwrapped1769 = $tmp1771;
        panda$core$Object* $tmp1773 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1774 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped1769, ((org$pandalanguage$pandac$Type*) $tmp1773), p_dstType, p_out);
        nonNullValue1772 = $tmp1774;
        panda$core$String* $tmp1776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1775, p_value);
        panda$core$String* $tmp1778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1776, &$s1777);
        panda$core$String* $tmp1779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1778, nonNullValue1772);
        panda$core$String* $tmp1781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1779, &$s1780);
        return $tmp1781;
    }
    }
    panda$core$String* $tmp1784 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1783, $tmp1784);
    panda$core$String* $tmp1787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1785, &$s1786);
    org$pandalanguage$pandac$ClassDecl* $tmp1788 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    panda$core$String* $tmp1789 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1788)->name);
    panda$core$String* $tmp1790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1787, $tmp1789);
    panda$core$String* $tmp1792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1790, &$s1791);
    panda$core$String* $tmp1794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1793, p_value);
    panda$core$String* $tmp1796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1794, &$s1795);
    panda$core$String* $tmp1797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1792, $tmp1796);
    wrapped1782 = $tmp1797;
    panda$core$Bit $tmp1798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1798.value) {
    {
        panda$core$String* $tmp1800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1799, p_value);
        panda$core$String* $tmp1802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1800, &$s1801);
        panda$core$String* $tmp1803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1802, wrapped1782);
        panda$core$String* $tmp1805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1803, &$s1804);
        return $tmp1805;
    }
    }
    return wrapped1782;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field1806;
    org$pandalanguage$pandac$ClassDecl* cl1809;
    panda$core$String* base1812;
    field1806 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$Bit $tmp1807 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field1806->annotations);
    if ($tmp1807.value) {
    {
        panda$core$String* $tmp1808 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field1806->value, p_out);
        return $tmp1808;
    }
    }
    panda$core$Object* $tmp1810 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp1811 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp1810)->type);
    cl1809 = $tmp1811;
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl1809);
    panda$core$Object* $tmp1813 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1814 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1813), p_out);
    base1812 = $tmp1814;
    panda$core$Bit $tmp1815 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1809);
    if ($tmp1815.value) {
    {
        panda$core$String* $tmp1817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1816, base1812);
        panda$core$String* $tmp1819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1817, &$s1818);
        panda$core$String* $tmp1820 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1806)->name);
        panda$core$String* $tmp1821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1819, $tmp1820);
        panda$core$String* $tmp1823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1821, &$s1822);
        return $tmp1823;
    }
    }
    panda$core$String* $tmp1825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1824, base1812);
    panda$core$String* $tmp1827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1825, &$s1826);
    panda$core$String* $tmp1828 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1806)->name);
    panda$core$String* $tmp1829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1827, $tmp1828);
    panda$core$String* $tmp1831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1829, &$s1830);
    return $tmp1831;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1832;
    panda$core$String* wrapped1842;
    panda$core$String* nonNullValue1845;
    panda$core$String* $tmp1834 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1833, $tmp1834);
    panda$core$String* $tmp1837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1835, &$s1836);
    panda$core$String* $tmp1838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1837, p_value);
    panda$core$String* $tmp1840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1838, &$s1839);
    result1832 = $tmp1840;
    panda$core$Bit $tmp1841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1841.value) {
    {
        panda$core$Object* $tmp1843 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1844 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1843), p_out);
        wrapped1842 = $tmp1844;
        panda$core$Object* $tmp1846 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1847 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped1842, ((org$pandalanguage$pandac$Type*) $tmp1846), p_dstType, p_out);
        nonNullValue1845 = $tmp1847;
        panda$core$String* $tmp1849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1848, p_value);
        panda$core$String* $tmp1851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1849, &$s1850);
        panda$core$String* $tmp1852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1851, nonNullValue1845);
        panda$core$String* $tmp1854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1852, &$s1853);
        panda$core$String* $tmp1855 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp1856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1854, $tmp1855);
        panda$core$String* $tmp1858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1856, &$s1857);
        return $tmp1858;
    }
    }
    return result1832;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1860 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1859, $tmp1860);
    panda$core$String* $tmp1863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1861, &$s1862);
    panda$core$String* $tmp1864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1863, p_value);
    panda$core$String* $tmp1866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1864, &$s1865);
    return $tmp1866;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1868 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1867, $tmp1868);
    panda$core$String* $tmp1871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1869, &$s1870);
    panda$core$String* $tmp1872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1871, p_value);
    panda$core$String* $tmp1874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1872, &$s1873);
    return $tmp1874;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op1875;
    org$pandalanguage$pandac$ClassDecl* srcClass1885;
    org$pandalanguage$pandac$ClassDecl* targetClass1887;
    panda$core$String* srcType1926;
    panda$core$String* dstType1928;
    panda$core$Bit $tmp1876 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp1876.value) {
    {
        panda$core$String* $tmp1878 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
        panda$core$String* $tmp1879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1877, $tmp1878);
        panda$core$String* $tmp1881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1879, &$s1880);
        panda$core$String* $tmp1882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1881, p_value);
        panda$core$String* $tmp1884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1882, &$s1883);
        return $tmp1884;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1886 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass1885 = $tmp1886;
        org$pandalanguage$pandac$ClassDecl* $tmp1888 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass1887 = $tmp1888;
        panda$core$Bit $tmp1890 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1885);
        bool $tmp1889 = $tmp1890.value;
        if (!$tmp1889) goto $l1891;
        panda$core$Bit $tmp1892 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1887);
        panda$core$Bit $tmp1893 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1892);
        $tmp1889 = $tmp1893.value;
        $l1891:;
        panda$core$Bit $tmp1894 = { $tmp1889 };
        if ($tmp1894.value) {
        {
            panda$core$String* $tmp1895 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1895;
        }
        }
        else {
        panda$core$Bit $tmp1897 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1885);
        panda$core$Bit $tmp1898 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1897);
        bool $tmp1896 = $tmp1898.value;
        if (!$tmp1896) goto $l1899;
        panda$core$Bit $tmp1900 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1887);
        $tmp1896 = $tmp1900.value;
        $l1899:;
        panda$core$Bit $tmp1901 = { $tmp1896 };
        if ($tmp1901.value) {
        {
            panda$core$String* $tmp1902 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1902;
        }
        }
        else {
        panda$core$Bit $tmp1905 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1885);
        bool $tmp1904 = $tmp1905.value;
        if (!$tmp1904) goto $l1906;
        panda$core$Bit $tmp1907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1904 = $tmp1907.value;
        $l1906:;
        panda$core$Bit $tmp1908 = { $tmp1904 };
        bool $tmp1903 = $tmp1908.value;
        if (!$tmp1903) goto $l1909;
        panda$core$Object* $tmp1910 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1911 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1910), p_src);
        $tmp1903 = $tmp1911.value;
        $l1909:;
        panda$core$Bit $tmp1912 = { $tmp1903 };
        if ($tmp1912.value) {
        {
            panda$core$String* $tmp1913 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1913;
        }
        }
        else {
        panda$core$Bit $tmp1916 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1887);
        bool $tmp1915 = $tmp1916.value;
        if (!$tmp1915) goto $l1917;
        panda$core$Bit $tmp1918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1915 = $tmp1918.value;
        $l1917:;
        panda$core$Bit $tmp1919 = { $tmp1915 };
        bool $tmp1914 = $tmp1919.value;
        if (!$tmp1914) goto $l1920;
        panda$core$Object* $tmp1921 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1922 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1921), p_target);
        $tmp1914 = $tmp1922.value;
        $l1920:;
        panda$core$Bit $tmp1923 = { $tmp1914 };
        if ($tmp1923.value) {
        {
            panda$core$String* $tmp1924 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1924;
        }
        }
        }
        }
        }
        op1875 = &$s1925;
    }
    }
    panda$core$String* $tmp1927 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType1926 = $tmp1927;
    panda$core$String* $tmp1929 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType1928 = $tmp1929;
    panda$core$Bit $tmp1930 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType1926, dstType1928);
    if ($tmp1930.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp1932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1931, dstType1928);
    panda$core$String* $tmp1934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1932, &$s1933);
    panda$core$String* $tmp1935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1934, p_value);
    panda$core$String* $tmp1937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1935, &$s1936);
    return $tmp1937;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base1938;
    panda$core$Object* $tmp1939 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1940 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1939), p_out);
    base1938 = $tmp1940;
    panda$core$Object* $tmp1941 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1942 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base1938, ((org$pandalanguage$pandac$IRNode*) $tmp1941)->type, p_cast->type, p_out);
    return $tmp1942;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl1943;
    panda$core$String* t1945;
    panda$core$String* value1953;
    panda$core$String* tmp1967;
    panda$core$String* result1985;
    panda$core$String* classPtr2006;
    panda$core$String* className2008;
    org$pandalanguage$pandac$ClassDecl* $tmp1944 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl1943 = $tmp1944;
    panda$core$String* $tmp1946 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t1945 = $tmp1946;
    panda$core$Bit $tmp1948 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    bool $tmp1947 = $tmp1948.value;
    if ($tmp1947) goto $l1949;
    org$pandalanguage$pandac$Type* $tmp1950 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1951 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp1950);
    $tmp1947 = $tmp1951.value;
    $l1949:;
    panda$core$Bit $tmp1952 = { $tmp1947 };
    if ($tmp1952.value) {
    {
        panda$core$Object* $tmp1954 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp1955 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp1954)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1956 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1955), p_out);
        value1953 = $tmp1956;
        panda$core$String* $tmp1958 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        panda$core$String* $tmp1959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1957, $tmp1958);
        panda$core$String* $tmp1961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1959, &$s1960);
        panda$core$String* $tmp1962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1961, value1953);
        panda$core$String* $tmp1964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1962, &$s1963);
        return $tmp1964;
    }
    }
    panda$core$Bit $tmp1965 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1943);
    if ($tmp1965.value) {
    {
        panda$core$Int64 $tmp1966 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1966;
        panda$core$String* $tmp1969 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1968, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        panda$core$String* $tmp1971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1969, &$s1970);
        tmp1967 = $tmp1971;
        panda$core$String* $tmp1973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1972, t1945);
        panda$core$String* $tmp1975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1973, &$s1974);
        panda$core$String* $tmp1976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1975, tmp1967);
        panda$core$String* $tmp1978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1976, &$s1977);
        (($fn1979) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1978);
        panda$core$Object* $tmp1980 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1981, tmp1967);
        panda$core$String* $tmp1984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1982, &$s1983);
        org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp1980), $tmp1984, p_out);
        return tmp1967;
    }
    }
    panda$core$String* $tmp1986 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1985 = $tmp1986;
    panda$core$String* $tmp1988 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp1989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1987, $tmp1988);
    panda$core$String* $tmp1991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1989, &$s1990);
    panda$core$String* $tmp1992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1991, result1985);
    panda$core$String* $tmp1994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1992, &$s1993);
    panda$core$String* $tmp1995 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp1996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1994, $tmp1995);
    panda$core$String* $tmp1998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1996, &$s1997);
    panda$core$Int64 $tmp2000 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp2001 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1999, ((panda$core$Object*) wrap_panda$core$Int64($tmp2000)));
    panda$core$String* $tmp2003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2001, &$s2002);
    panda$core$String* $tmp2004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1998, $tmp2003);
    (($fn2005) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2004);
    panda$core$String* $tmp2007 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr2006 = $tmp2007;
    panda$core$Bit $tmp2009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    if ($tmp2009.value) {
    {
        panda$core$Object* $tmp2010 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2011 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2010));
        className2008 = $tmp2011;
    }
    }
    else {
    {
        panda$core$String* $tmp2012 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className2008 = $tmp2012;
    }
    }
    panda$core$String* $tmp2014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2013, result1985);
    panda$core$String* $tmp2016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2014, &$s2015);
    panda$core$String* $tmp2017 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) cl1943)->name);
    panda$core$String* $tmp2018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2016, $tmp2017);
    panda$core$String* $tmp2020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2018, &$s2019);
    (($fn2021) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2020);
    panda$core$String* $tmp2023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2022, result1985);
    panda$core$String* $tmp2025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2023, &$s2024);
    (($fn2026) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2025);
    panda$core$Object* $tmp2027 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2028, result1985);
    panda$core$String* $tmp2031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2029, &$s2030);
    org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2027), $tmp2031, p_out);
    return result1985;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2032 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    return $tmp2032;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2034 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp2035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2033, $tmp2034);
    return $tmp2035;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s2036;
    }
    }
    return &$s2037;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2038 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    return $tmp2038;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result2040;
    panda$collections$Iterator* raw$Iter2053;
    panda$core$Char8 raw2066;
    panda$core$UInt8 c2071;
    panda$core$Int64 $tmp2039 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp2039;
    panda$core$String* $tmp2042 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2041, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp2044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2042, &$s2043);
    result2040 = $tmp2044;
    org$pandalanguage$pandac$Type* $tmp2045 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2045);
    panda$core$String* $tmp2047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2046, result2040);
    panda$core$String* $tmp2049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2047, &$s2048);
    panda$core$String* $tmp2051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2049, &$s2050);
    (($fn2052) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2051);
    {
        panda$collections$ListView* $tmp2054 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp2055 = ((panda$collections$Iterable*) $tmp2054)->$class->itable;
        while ($tmp2055->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2055 = $tmp2055->next;
        }
        $fn2057 $tmp2056 = $tmp2055->methods[0];
        panda$collections$Iterator* $tmp2058 = $tmp2056(((panda$collections$Iterable*) $tmp2054));
        raw$Iter2053 = $tmp2058;
        $l2059:;
        ITable* $tmp2061 = raw$Iter2053->$class->itable;
        while ($tmp2061->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2061 = $tmp2061->next;
        }
        $fn2063 $tmp2062 = $tmp2061->methods[0];
        panda$core$Bit $tmp2064 = $tmp2062(raw$Iter2053);
        panda$core$Bit $tmp2065 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2064);
        if (!$tmp2065.value) goto $l2060;
        {
            ITable* $tmp2067 = raw$Iter2053->$class->itable;
            while ($tmp2067->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2067 = $tmp2067->next;
            }
            $fn2069 $tmp2068 = $tmp2067->methods[1];
            panda$core$Object* $tmp2070 = $tmp2068(raw$Iter2053);
            raw2066 = ((panda$core$Char8$wrapper*) $tmp2070)->value;
            panda$core$UInt8 $tmp2072 = panda$core$Char8$convert$R$panda$core$UInt8(raw2066);
            c2071 = $tmp2072;
            (($fn2074) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), &$s2073);
            panda$collections$ListView* $tmp2076 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s2075);
            panda$core$UInt32 $tmp2077 = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(c2071, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp2078 = panda$core$UInt32$convert$R$panda$core$Int64($tmp2077);
            ITable* $tmp2079 = $tmp2076->$class->itable;
            while ($tmp2079->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2079 = $tmp2079->next;
            }
            $fn2081 $tmp2080 = $tmp2079->methods[0];
            panda$core$Object* $tmp2082 = $tmp2080($tmp2076, $tmp2078);
            (($fn2083) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp2082)->value)));
            panda$collections$ListView* $tmp2085 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s2084);
            panda$core$UInt32 $tmp2086 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(c2071, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp2087 = panda$core$UInt32$convert$R$panda$core$Int64($tmp2086);
            ITable* $tmp2088 = $tmp2085->$class->itable;
            while ($tmp2088->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2088 = $tmp2088->next;
            }
            $fn2090 $tmp2089 = $tmp2088->methods[0];
            panda$core$Object* $tmp2091 = $tmp2089($tmp2085, $tmp2087);
            (($fn2092) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp2091)->value)));
        }
        goto $l2059;
        $l2060:;
    }
    panda$collections$ListView* $tmp2094 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp2095 = ((panda$collections$CollectionView*) $tmp2094)->$class->itable;
    while ($tmp2095->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2095 = $tmp2095->next;
    }
    $fn2097 $tmp2096 = $tmp2095->methods[0];
    panda$core$Int64 $tmp2098 = $tmp2096(((panda$collections$CollectionView*) $tmp2094));
    panda$core$String* $tmp2099 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2093, ((panda$core$Object*) wrap_panda$core$Int64($tmp2098)));
    panda$core$String* $tmp2101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2099, &$s2100);
    (($fn2102) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp2101);
    panda$core$String* $tmp2104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2103, result2040);
    panda$core$String* $tmp2106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2104, &$s2105);
    return $tmp2106;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    return &$s2107;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2109 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp2110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2108, $tmp2109);
    panda$core$String* $tmp2112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2110, &$s2111);
    return $tmp2112;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2113;
    org$pandalanguage$pandac$ClassDecl* cl2116;
    panda$core$String* bit2119;
    panda$core$Object* $tmp2114 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2115 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2114), p_out);
    value2113 = $tmp2115;
    panda$core$Object* $tmp2117 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2118 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2117)->type);
    cl2116 = $tmp2118;
    panda$core$Bit $tmp2120 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2116);
    if ($tmp2120.value) {
    {
        panda$core$Object* $tmp2121 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2122 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2121)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2122.value) {
        {
            bit2119 = &$s2123;
        }
        }
        else {
        {
            panda$core$String* $tmp2125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2124, value2113);
            panda$core$String* $tmp2127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2125, &$s2126);
            bit2119 = $tmp2127;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2128, value2113);
        panda$core$String* $tmp2131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2129, &$s2130);
        bit2119 = $tmp2131;
    }
    }
    panda$core$String* $tmp2133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2132, bit2119);
    panda$core$String* $tmp2135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2133, &$s2134);
    return $tmp2135;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2136;
    org$pandalanguage$pandac$ClassDecl* cl2139;
    panda$core$String* bit2142;
    panda$core$Object* $tmp2137 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2138 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2137), p_out);
    value2136 = $tmp2138;
    panda$core$Object* $tmp2140 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2141 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2140)->type);
    cl2139 = $tmp2141;
    panda$core$Bit $tmp2143 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2139);
    if ($tmp2143.value) {
    {
        panda$core$Object* $tmp2144 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2145 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2144)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2145.value) {
        {
            bit2142 = &$s2146;
        }
        }
        else {
        {
            panda$core$String* $tmp2148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2147, value2136);
            panda$core$String* $tmp2150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2148, &$s2149);
            bit2142 = $tmp2150;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2151, value2136);
        panda$core$String* $tmp2154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2152, &$s2153);
        bit2142 = $tmp2154;
    }
    }
    panda$core$String* $tmp2156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2155, bit2142);
    panda$core$String* $tmp2158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2156, &$s2157);
    return $tmp2158;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2159;
    panda$core$Object* $tmp2160 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2161 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp2160));
    cl2159 = $tmp2161;
    panda$core$Bit $tmp2162 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2159);
    if ($tmp2162.value) {
    {
        panda$core$String* $tmp2164 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
        panda$core$String* $tmp2165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2163, $tmp2164);
        panda$core$String* $tmp2167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2165, &$s2166);
        return $tmp2167;
    }
    }
    else {
    {
        return &$s2168;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base2169;
    panda$core$String* result2172;
    panda$core$Int64 $match$437862174;
    panda$core$Object* $tmp2170 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2171 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2170), p_out);
    base2169 = $tmp2171;
    panda$core$String* $tmp2173 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2172 = $tmp2173;
    {
        panda$core$Int64 $tmp2175 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
        $match$437862174 = $tmp2175;
        panda$core$Bit $tmp2176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437862174, ((panda$core$Int64) { 52 }));
        if ($tmp2176.value) {
        {
            panda$core$String* $tmp2178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2177, base2169);
            panda$core$String* $tmp2180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2178, &$s2179);
            return $tmp2180;
        }
        }
        else {
        panda$core$Bit $tmp2181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437862174, ((panda$core$Int64) { 49 }));
        if ($tmp2181.value) {
        {
            panda$core$String* $tmp2183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2182, base2169);
            panda$core$String* $tmp2185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2183, &$s2184);
            return $tmp2185;
        }
        }
        else {
        panda$core$Bit $tmp2186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437862174, ((panda$core$Int64) { 50 }));
        if ($tmp2186.value) {
        {
            panda$core$String* $tmp2188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2187, base2169);
            panda$core$String* $tmp2190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2188, &$s2189);
            return $tmp2190;
        }
        }
        else {
        {
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$442072191;
    panda$core$String* value2217;
    panda$core$String* result2221;
    {
        $match$442072191 = p_expr->kind;
        panda$core$Bit $tmp2192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072191, ((panda$core$Int64) { 1023 }));
        if ($tmp2192.value) {
        {
            panda$core$String* $tmp2193 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2193;
        }
        }
        else {
        panda$core$Bit $tmp2194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072191, ((panda$core$Int64) { 1005 }));
        if ($tmp2194.value) {
        {
            panda$core$String* $tmp2195 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2195;
        }
        }
        else {
        panda$core$Bit $tmp2196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072191, ((panda$core$Int64) { 1009 }));
        if ($tmp2196.value) {
        {
            panda$core$String* $tmp2197 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2197;
        }
        }
        else {
        panda$core$Bit $tmp2198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072191, ((panda$core$Int64) { 1004 }));
        if ($tmp2198.value) {
        {
            panda$core$String* $tmp2199 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2199;
        }
        }
        else {
        panda$core$Bit $tmp2200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072191, ((panda$core$Int64) { 1032 }));
        if ($tmp2200.value) {
        {
            panda$core$String* $tmp2201 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2201;
        }
        }
        else {
        panda$core$Bit $tmp2202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072191, ((panda$core$Int64) { 1011 }));
        if ($tmp2202.value) {
        {
            panda$core$String* $tmp2203 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2203;
        }
        }
        else {
        panda$core$Bit $tmp2204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072191, ((panda$core$Int64) { 1010 }));
        if ($tmp2204.value) {
        {
            panda$core$String* $tmp2205 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2205;
        }
        }
        else {
        panda$core$Bit $tmp2206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072191, ((panda$core$Int64) { 1016 }));
        if ($tmp2206.value) {
        {
            panda$core$String* $tmp2207 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp2207;
        }
        }
        else {
        panda$core$Bit $tmp2208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072191, ((panda$core$Int64) { 1026 }));
        if ($tmp2208.value) {
        {
            panda$core$String* $tmp2209 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2209;
        }
        }
        else {
        panda$core$Bit $tmp2210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072191, ((panda$core$Int64) { 1033 }));
        if ($tmp2210.value) {
        {
            panda$core$String* $tmp2211 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp2211;
        }
        }
        else {
        panda$core$Bit $tmp2212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072191, ((panda$core$Int64) { 1025 }));
        if ($tmp2212.value) {
        {
            panda$core$String* $tmp2213 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2213;
        }
        }
        else {
        panda$core$Bit $tmp2214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072191, ((panda$core$Int64) { 1024 }));
        if ($tmp2214.value) {
        {
            panda$core$String* $tmp2215 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2215;
        }
        }
        else {
        panda$core$Bit $tmp2216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072191, ((panda$core$Int64) { 1027 }));
        if ($tmp2216.value) {
        {
            panda$core$Object* $tmp2218 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2219 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2218), p_out);
            value2217 = $tmp2219;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value2217));
            return value2217;
        }
        }
        else {
        panda$core$Bit $tmp2220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072191, ((panda$core$Int64) { 1028 }));
        if ($tmp2220.value) {
        {
            panda$core$Object* $tmp2222 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result2221 = ((panda$core$String*) $tmp2222);
            return result2221;
        }
        }
        else {
        panda$core$Bit $tmp2223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072191, ((panda$core$Int64) { 1030 }));
        if ($tmp2223.value) {
        {
            panda$core$String* $tmp2224 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2224;
        }
        }
        else {
        panda$core$Bit $tmp2225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072191, ((panda$core$Int64) { 1035 }));
        if ($tmp2225.value) {
        {
            panda$core$String* $tmp2226 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2226;
        }
        }
        else {
        panda$core$Bit $tmp2227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072191, ((panda$core$Int64) { 1036 }));
        if ($tmp2227.value) {
        {
            panda$core$String* $tmp2228 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2228;
        }
        }
        else {
        panda$core$Bit $tmp2229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442072191, ((panda$core$Int64) { 1041 }));
        if ($tmp2229.value) {
        {
            panda$core$String* $tmp2230 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2230;
        }
        }
        else {
        {
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2231 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2231;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter2235;
    org$pandalanguage$pandac$IRNode* s2247;
    (($fn2233) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2232);
    panda$core$Int64 $tmp2234 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2234;
    {
        ITable* $tmp2236 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp2236->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2236 = $tmp2236->next;
        }
        $fn2238 $tmp2237 = $tmp2236->methods[0];
        panda$collections$Iterator* $tmp2239 = $tmp2237(((panda$collections$Iterable*) p_block->children));
        s$Iter2235 = $tmp2239;
        $l2240:;
        ITable* $tmp2242 = s$Iter2235->$class->itable;
        while ($tmp2242->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2242 = $tmp2242->next;
        }
        $fn2244 $tmp2243 = $tmp2242->methods[0];
        panda$core$Bit $tmp2245 = $tmp2243(s$Iter2235);
        panda$core$Bit $tmp2246 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2245);
        if (!$tmp2246.value) goto $l2241;
        {
            ITable* $tmp2248 = s$Iter2235->$class->itable;
            while ($tmp2248->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2248 = $tmp2248->next;
            }
            $fn2250 $tmp2249 = $tmp2248->methods[1];
            panda$core$Object* $tmp2251 = $tmp2249(s$Iter2235);
            s2247 = ((org$pandalanguage$pandac$IRNode*) $tmp2251);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2247, p_out);
        }
        goto $l2240;
        $l2241:;
    }
    panda$core$Int64 $tmp2252 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2252;
    (($fn2254) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2253);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2255;
    panda$core$String* $match$467722256;
    panda$core$String* ptr2259;
    panda$core$String* arg2262;
    panda$core$String* base2276;
    panda$core$String* index2279;
    panda$core$String* value2282;
    m2255 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$467722256 = ((org$pandalanguage$pandac$Symbol*) m2255->value)->name;
        panda$core$Bit $tmp2258 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$467722256, &$s2257);
        if ($tmp2258.value) {
        {
            panda$core$Object* $tmp2260 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2261 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2260), p_out);
            ptr2259 = $tmp2261;
            panda$core$Object* $tmp2263 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2264 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2263));
            panda$core$String* $tmp2265 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2264, p_out);
            arg2262 = $tmp2265;
            panda$core$String* $tmp2267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2266, arg2262);
            panda$core$String* $tmp2269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2267, &$s2268);
            panda$core$String* $tmp2270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2269, ptr2259);
            panda$core$String* $tmp2272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2270, &$s2271);
            (($fn2273) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2272);
        }
        }
        else {
        panda$core$Bit $tmp2275 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$467722256, &$s2274);
        if ($tmp2275.value) {
        {
            panda$core$Object* $tmp2277 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2278 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2277), p_out);
            base2276 = $tmp2278;
            panda$core$Object* $tmp2280 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2281 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2280), p_out);
            index2279 = $tmp2281;
            panda$core$Object* $tmp2283 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2284 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2283));
            panda$core$String* $tmp2285 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2284, p_out);
            value2282 = $tmp2285;
            panda$core$String* $tmp2287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2286, base2276);
            panda$core$String* $tmp2289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2287, &$s2288);
            panda$core$String* $tmp2290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2289, index2279);
            panda$core$String* $tmp2292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2290, &$s2291);
            panda$core$String* $tmp2293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2292, value2282);
            panda$core$String* $tmp2295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2293, &$s2294);
            (($fn2296) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2295);
        }
        }
        else {
        panda$core$Bit $tmp2298 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$467722256, &$s2297);
        if ($tmp2298.value) {
        {
            panda$core$Object* $tmp2300 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2301 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2300), p_out);
            panda$core$String* $tmp2302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2299, $tmp2301);
            panda$core$String* $tmp2304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2302, &$s2303);
            (($fn2305) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2304);
        }
        }
        else {
        {
        }
        }
        }
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$core$String* p_target, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2306;
    org$pandalanguage$pandac$Type* actualMethodType2310;
    panda$core$String* actualResultType2311;
    panda$core$Bit isSuper2312;
    panda$collections$Array* args2332;
    panda$core$Int64 offset2335;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2340;
    panda$core$String* arg2360;
    panda$core$String* refTarget2386;
    panda$core$String* methodRef2390;
    panda$core$String* separator2392;
    panda$core$String* indirectVar2396;
    panda$core$String* resultType2399;
    panda$collections$Iterator* a$Iter2426;
    panda$core$String* a2438;
    m2306 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2308 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2306->owner)->name, &$s2307);
    if ($tmp2308.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    panda$core$Bit $tmp2309 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m2306->owner);
    if ($tmp2309.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2306);
    }
    }
    panda$core$Int64 $tmp2314 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2315 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2314, ((panda$core$Int64) { 1 }));
    bool $tmp2313 = $tmp2315.value;
    if (!$tmp2313) goto $l2316;
    panda$core$Object* $tmp2317 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2317)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2313 = $tmp2318.value;
    $l2316:;
    panda$core$Bit $tmp2319 = { $tmp2313 };
    isSuper2312 = $tmp2319;
    panda$core$Bit $tmp2321 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2312);
    bool $tmp2320 = $tmp2321.value;
    if (!$tmp2320) goto $l2322;
    panda$core$Bit $tmp2323 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2306);
    $tmp2320 = $tmp2323.value;
    $l2322:;
    panda$core$Bit $tmp2324 = { $tmp2320 };
    if ($tmp2324.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2325 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2306);
        actualMethodType2310 = $tmp2325;
        panda$core$Int64 $tmp2326 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType2310->subtypes);
        panda$core$Int64 $tmp2327 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2326, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2328 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType2310->subtypes, $tmp2327);
        panda$core$String* $tmp2329 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2328));
        actualResultType2311 = $tmp2329;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2330 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2306);
        actualMethodType2310 = $tmp2330;
        panda$core$String* $tmp2331 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2311 = $tmp2331;
    }
    }
    panda$collections$Array* $tmp2333 = (panda$collections$Array*) malloc(40);
    $tmp2333->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2333->refCount.value = 1;
    panda$collections$Array$init($tmp2333);
    args2332 = $tmp2333;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args2332, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2336 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2337 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType2310->subtypes);
    panda$core$Int64 $tmp2338 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2336, $tmp2337);
    panda$core$Int64 $tmp2339 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2338, ((panda$core$Int64) { 1 }));
    offset2335 = $tmp2339;
    panda$core$Int64 $tmp2341 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2340, ((panda$core$Int64) { 0 }), $tmp2341, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp2343 = $tmp2340.start.value;
    panda$core$Int64 i2342 = { $tmp2343 };
    int64_t $tmp2345 = $tmp2340.end.value;
    int64_t $tmp2346 = $tmp2340.step.value;
    bool $tmp2347 = $tmp2340.inclusive.value;
    bool $tmp2354 = $tmp2346 > 0;
    if ($tmp2354) goto $l2352; else goto $l2353;
    $l2352:;
    if ($tmp2347) goto $l2355; else goto $l2356;
    $l2355:;
    if ($tmp2343 <= $tmp2345) goto $l2348; else goto $l2350;
    $l2356:;
    if ($tmp2343 < $tmp2345) goto $l2348; else goto $l2350;
    $l2353:;
    if ($tmp2347) goto $l2357; else goto $l2358;
    $l2357:;
    if ($tmp2343 >= $tmp2345) goto $l2348; else goto $l2350;
    $l2358:;
    if ($tmp2343 > $tmp2345) goto $l2348; else goto $l2350;
    $l2348:;
    {
        panda$core$Object* $tmp2361 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2342);
        panda$core$String* $tmp2362 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2361), p_out);
        arg2360 = $tmp2362;
        panda$core$Bit $tmp2364 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2342, offset2335);
        bool $tmp2363 = $tmp2364.value;
        if (!$tmp2363) goto $l2365;
        panda$core$Int64 $tmp2366 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2342, offset2335);
        panda$core$Object* $tmp2367 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType2310->subtypes, $tmp2366);
        panda$core$Object* $tmp2368 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2342);
        panda$core$Bit $tmp2369 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2367), ((org$pandalanguage$pandac$IRNode*) $tmp2368)->type);
        $tmp2363 = $tmp2369.value;
        $l2365:;
        panda$core$Bit $tmp2370 = { $tmp2363 };
        if ($tmp2370.value) {
        {
            panda$core$Object* $tmp2371 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2342);
            panda$core$Int64 $tmp2372 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2342, offset2335);
            panda$core$Object* $tmp2373 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType2310->subtypes, $tmp2372);
            panda$core$String* $tmp2374 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2360, ((org$pandalanguage$pandac$IRNode*) $tmp2371)->type, ((org$pandalanguage$pandac$Type*) $tmp2373), p_out);
            arg2360 = $tmp2374;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2332, ((panda$core$Object*) arg2360));
    }
    $l2351:;
    if ($tmp2354) goto $l2376; else goto $l2377;
    $l2376:;
    int64_t $tmp2378 = $tmp2345 - i2342.value;
    if ($tmp2347) goto $l2379; else goto $l2380;
    $l2379:;
    if ($tmp2378 >= $tmp2346) goto $l2375; else goto $l2350;
    $l2380:;
    if ($tmp2378 > $tmp2346) goto $l2375; else goto $l2350;
    $l2377:;
    int64_t $tmp2382 = i2342.value - $tmp2345;
    if ($tmp2347) goto $l2383; else goto $l2384;
    $l2383:;
    if ($tmp2382 >= -$tmp2346) goto $l2375; else goto $l2350;
    $l2384:;
    if ($tmp2382 > -$tmp2346) goto $l2375; else goto $l2350;
    $l2375:;
    i2342.value += $tmp2346;
    goto $l2348;
    $l2350:;
    panda$core$Int64 $tmp2387 = panda$collections$Array$get_count$R$panda$core$Int64(args2332);
    panda$core$Bit $tmp2388 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2387, ((panda$core$Int64) { 0 }));
    if ($tmp2388.value) {
    {
        panda$core$Object* $tmp2389 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2332, ((panda$core$Int64) { 0 }));
        refTarget2386 = ((panda$core$String*) $tmp2389);
    }
    }
    else {
    {
        refTarget2386 = NULL;
    }
    }
    panda$core$String* $tmp2391 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget2386, m2306, isSuper2312, p_out);
    methodRef2390 = $tmp2391;
    separator2392 = &$s2393;
    panda$core$Bit $tmp2394 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2306);
    if ($tmp2394.value) {
    {
        panda$core$Int64 $tmp2395 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2395;
        panda$core$String* $tmp2398 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2397, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        indirectVar2396 = $tmp2398;
        panda$core$String* $tmp2400 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType2399 = $tmp2400;
        panda$core$String* $tmp2402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2401, resultType2399);
        panda$core$String* $tmp2404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2402, &$s2403);
        panda$core$String* $tmp2405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2404, indirectVar2396);
        panda$core$String* $tmp2407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2405, &$s2406);
        (($fn2408) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2407);
        panda$core$String* $tmp2410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2409, methodRef2390);
        panda$core$String* $tmp2412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2410, &$s2411);
        panda$core$String* $tmp2413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2412, resultType2399);
        panda$core$String* $tmp2415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2413, &$s2414);
        panda$core$String* $tmp2416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2415, indirectVar2396);
        panda$core$String* $tmp2418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2416, &$s2417);
        (($fn2419) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2418);
        separator2392 = &$s2420;
    }
    }
    else {
    {
        panda$core$String* $tmp2422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2421, methodRef2390);
        panda$core$String* $tmp2424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2422, &$s2423);
        (($fn2425) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2424);
    }
    }
    {
        ITable* $tmp2427 = ((panda$collections$Iterable*) args2332)->$class->itable;
        while ($tmp2427->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2427 = $tmp2427->next;
        }
        $fn2429 $tmp2428 = $tmp2427->methods[0];
        panda$collections$Iterator* $tmp2430 = $tmp2428(((panda$collections$Iterable*) args2332));
        a$Iter2426 = $tmp2430;
        $l2431:;
        ITable* $tmp2433 = a$Iter2426->$class->itable;
        while ($tmp2433->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2433 = $tmp2433->next;
        }
        $fn2435 $tmp2434 = $tmp2433->methods[0];
        panda$core$Bit $tmp2436 = $tmp2434(a$Iter2426);
        panda$core$Bit $tmp2437 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2436);
        if (!$tmp2437.value) goto $l2432;
        {
            ITable* $tmp2439 = a$Iter2426->$class->itable;
            while ($tmp2439->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2439 = $tmp2439->next;
            }
            $fn2441 $tmp2440 = $tmp2439->methods[1];
            panda$core$Object* $tmp2442 = $tmp2440(a$Iter2426);
            a2438 = ((panda$core$String*) $tmp2442);
            (($fn2443) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2392);
            (($fn2444) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2438);
            separator2392 = &$s2445;
        }
        goto $l2431;
        $l2432:;
    }
    (($fn2447) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2446);
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test2448;
    panda$core$Object* $tmp2449 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2450 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2449), p_out);
    test2448 = $tmp2450;
    panda$core$String* $tmp2452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2451, test2448);
    panda$core$String* $tmp2454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2452, &$s2453);
    (($fn2455) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2454);
    panda$core$Object* $tmp2456 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2456), p_out);
    (($fn2458) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2457);
    panda$core$Int64 $tmp2459 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2459, ((panda$core$Int64) { 3 }));
    if ($tmp2460.value) {
    {
        (($fn2462) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2461);
        panda$core$Object* $tmp2463 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2463), p_out);
        (($fn2465) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2464);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2466;
    panda$core$String* range2468;
    org$pandalanguage$pandac$IRNode* block2471;
    org$pandalanguage$pandac$Type* t2473;
    panda$core$String* llt2476;
    panda$core$String* indexType2478;
    org$pandalanguage$pandac$ClassDecl* cl2482;
    org$pandalanguage$pandac$FieldDecl* field2484;
    panda$core$String* numberType2490;
    panda$core$String* index2492;
    panda$core$String* start2494;
    panda$core$String* indexValuePtr2507;
    panda$core$String* end2522;
    panda$core$String* step2535;
    panda$core$String* inclusive2548;
    panda$core$String* loopStart2558;
    panda$core$String* loopBody2560;
    panda$core$String* loopEnd2562;
    panda$core$String* loopTest2564;
    panda$core$String* forwardEntry2568;
    panda$core$String* backwardEntry2570;
    panda$core$String* signPrefix2572;
    panda$core$String* direction2577;
    panda$core$String* forwardEntryInclusive2601;
    panda$core$String* forwardEntryExclusive2603;
    panda$core$String* backwardEntryInclusive2646;
    panda$core$String* backwardEntryExclusive2648;
    panda$core$String* backwardEntryExclusiveTest2677;
    panda$core$String* loopInc2693;
    panda$core$String* forwardLabel2695;
    panda$core$String* backwardLabel2697;
    panda$core$String* forwardDelta2710;
    panda$core$String* forwardInclusiveLabel2726;
    panda$core$String* forwardExclusiveLabel2728;
    panda$core$String* forwardExclusiveTest2757;
    panda$core$String* backwardDelta2773;
    panda$core$String* backwardInclusiveLabel2789;
    panda$core$String* backwardExclusiveLabel2791;
    panda$core$String* inc2834;
    panda$core$Object* $tmp2467 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2466 = ((org$pandalanguage$pandac$IRNode*) $tmp2467);
    panda$core$Object* $tmp2469 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2470 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2469), p_out);
    range2468 = $tmp2470;
    panda$core$Object* $tmp2472 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2471 = ((org$pandalanguage$pandac$IRNode*) $tmp2472);
    panda$core$Object* $tmp2474 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2475 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp2474)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2473 = ((org$pandalanguage$pandac$Type*) $tmp2475);
    panda$core$String* $tmp2477 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2473);
    llt2476 = $tmp2477;
    panda$core$Bit $tmp2479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2473->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2479.value) {
    {
        panda$core$Object* $tmp2480 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(t2473->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2481 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2480));
        indexType2478 = $tmp2481;
    }
    }
    else {
    {
        indexType2478 = llt2476;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2483 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2473);
    cl2482 = $tmp2483;
    panda$collections$ListView* $tmp2485 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2482);
    ITable* $tmp2486 = $tmp2485->$class->itable;
    while ($tmp2486->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2486 = $tmp2486->next;
    }
    $fn2488 $tmp2487 = $tmp2486->methods[0];
    panda$core$Object* $tmp2489 = $tmp2487($tmp2485, ((panda$core$Int64) { 0 }));
    field2484 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2489);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2484);
    panda$core$String* $tmp2491 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2484->type);
    numberType2490 = $tmp2491;
    panda$core$String* $tmp2493 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2466->payload));
    index2492 = $tmp2493;
    panda$core$String* $tmp2495 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2494 = $tmp2495;
    panda$core$String* $tmp2497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2496, numberType2490);
    panda$core$String* $tmp2499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2497, &$s2498);
    panda$core$String* $tmp2500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2499, start2494);
    panda$core$String* $tmp2502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2500, &$s2501);
    panda$core$String* $tmp2503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2502, range2468);
    panda$core$String* $tmp2505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2503, &$s2504);
    (($fn2506) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2505);
    panda$core$String* $tmp2508 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2507 = $tmp2508;
    org$pandalanguage$pandac$Type* $tmp2510 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2482);
    panda$core$String* $tmp2511 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2510);
    panda$core$String* $tmp2512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2509, $tmp2511);
    panda$core$String* $tmp2514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2512, &$s2513);
    panda$core$String* $tmp2515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2514, index2492);
    panda$core$String* $tmp2517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2515, &$s2516);
    panda$core$String* $tmp2518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2517, start2494);
    panda$core$String* $tmp2520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2518, &$s2519);
    (($fn2521) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2520);
    panda$core$String* $tmp2523 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2522 = $tmp2523;
    panda$core$String* $tmp2525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2524, numberType2490);
    panda$core$String* $tmp2527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2525, &$s2526);
    panda$core$String* $tmp2528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2527, end2522);
    panda$core$String* $tmp2530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2528, &$s2529);
    panda$core$String* $tmp2531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2530, range2468);
    panda$core$String* $tmp2533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2531, &$s2532);
    (($fn2534) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2533);
    panda$core$String* $tmp2536 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    step2535 = $tmp2536;
    panda$core$String* $tmp2538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2537, numberType2490);
    panda$core$String* $tmp2540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2538, &$s2539);
    panda$core$String* $tmp2541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2540, step2535);
    panda$core$String* $tmp2543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2541, &$s2542);
    panda$core$String* $tmp2544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2543, range2468);
    panda$core$String* $tmp2546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2544, &$s2545);
    (($fn2547) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2546);
    panda$core$String* $tmp2549 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2548 = $tmp2549;
    panda$core$String* $tmp2551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2550, inclusive2548);
    panda$core$String* $tmp2553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2551, &$s2552);
    panda$core$String* $tmp2554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2553, range2468);
    panda$core$String* $tmp2556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2554, &$s2555);
    (($fn2557) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2556);
    panda$core$String* $tmp2559 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2558 = $tmp2559;
    panda$core$String* $tmp2561 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2560 = $tmp2561;
    panda$core$String* $tmp2563 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2562 = $tmp2563;
    panda$core$String* $tmp2565 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2564 = $tmp2565;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2566 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2566->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2566->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2566, ((panda$core$String*) p_f->payload), loopEnd2562, loopTest2564);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2566));
    panda$core$String* $tmp2569 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2568 = $tmp2569;
    panda$core$String* $tmp2571 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2570 = $tmp2571;
    panda$core$Bit $tmp2574 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2473)->name, &$s2573);
    if ($tmp2574.value) {
    {
        signPrefix2572 = &$s2575;
    }
    }
    else {
    {
        signPrefix2572 = &$s2576;
    }
    }
    panda$core$Bit $tmp2579 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix2572, &$s2578);
    if ($tmp2579.value) {
    {
        panda$core$String* $tmp2580 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
        direction2577 = $tmp2580;
        panda$core$String* $tmp2582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2581, direction2577);
        panda$core$String* $tmp2584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2582, &$s2583);
        panda$core$String* $tmp2585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2584, step2535);
        panda$core$String* $tmp2587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2585, &$s2586);
        (($fn2588) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2587);
    }
    }
    else {
    {
        direction2577 = &$s2589;
    }
    }
    panda$core$String* $tmp2591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2590, direction2577);
    panda$core$String* $tmp2593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2591, &$s2592);
    panda$core$String* $tmp2594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2593, forwardEntry2568);
    panda$core$String* $tmp2596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2594, &$s2595);
    panda$core$String* $tmp2597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2596, backwardEntry2570);
    panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2597, &$s2598);
    (($fn2600) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2599);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry2568, p_out);
    panda$core$String* $tmp2602 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2601 = $tmp2602;
    panda$core$String* $tmp2604 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2603 = $tmp2604;
    panda$core$String* $tmp2606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2605, inclusive2548);
    panda$core$String* $tmp2608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2606, &$s2607);
    panda$core$String* $tmp2609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2608, forwardEntryInclusive2601);
    panda$core$String* $tmp2611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2609, &$s2610);
    panda$core$String* $tmp2613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2612, forwardEntryExclusive2603);
    panda$core$String* $tmp2615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2613, &$s2614);
    panda$core$String* $tmp2616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2611, $tmp2615);
    (($fn2617) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2616);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2601, p_out);
    panda$core$String* $tmp2619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2618, start2494);
    panda$core$String* $tmp2621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2619, &$s2620);
    panda$core$String* $tmp2622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2621, end2522);
    panda$core$String* $tmp2624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2622, &$s2623);
    panda$core$String* $tmp2625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2624, loopStart2558);
    panda$core$String* $tmp2627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2625, &$s2626);
    panda$core$String* $tmp2628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2627, loopEnd2562);
    panda$core$String* $tmp2630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2628, &$s2629);
    (($fn2631) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2630);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2603, p_out);
    panda$core$String* $tmp2633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2632, start2494);
    panda$core$String* $tmp2635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2633, &$s2634);
    panda$core$String* $tmp2636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2635, end2522);
    panda$core$String* $tmp2638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2636, &$s2637);
    panda$core$String* $tmp2639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2638, loopStart2558);
    panda$core$String* $tmp2641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2639, &$s2640);
    panda$core$String* $tmp2642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2641, loopEnd2562);
    panda$core$String* $tmp2644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2642, &$s2643);
    (($fn2645) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2644);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry2570, p_out);
    panda$core$String* $tmp2647 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive2646 = $tmp2647;
    panda$core$String* $tmp2649 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive2648 = $tmp2649;
    panda$core$String* $tmp2651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2650, inclusive2548);
    panda$core$String* $tmp2653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2651, &$s2652);
    panda$core$String* $tmp2654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2653, backwardEntryInclusive2646);
    panda$core$String* $tmp2656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2654, &$s2655);
    panda$core$String* $tmp2658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2657, backwardEntryExclusive2648);
    panda$core$String* $tmp2660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2658, &$s2659);
    panda$core$String* $tmp2661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2656, $tmp2660);
    (($fn2662) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2661);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive2646, p_out);
    panda$core$String* $tmp2664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2663, start2494);
    panda$core$String* $tmp2666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2664, &$s2665);
    panda$core$String* $tmp2667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2666, end2522);
    panda$core$String* $tmp2669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2667, &$s2668);
    panda$core$String* $tmp2670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2669, loopStart2558);
    panda$core$String* $tmp2672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2670, &$s2671);
    panda$core$String* $tmp2673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2672, loopEnd2562);
    panda$core$String* $tmp2675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2673, &$s2674);
    (($fn2676) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2675);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive2648, p_out);
    panda$core$String* $tmp2678 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest2677 = $tmp2678;
    panda$core$String* $tmp2680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2679, start2494);
    panda$core$String* $tmp2682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2680, &$s2681);
    panda$core$String* $tmp2683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2682, end2522);
    panda$core$String* $tmp2685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2683, &$s2684);
    panda$core$String* $tmp2686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2685, loopStart2558);
    panda$core$String* $tmp2688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2686, &$s2687);
    panda$core$String* $tmp2689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2688, loopEnd2562);
    panda$core$String* $tmp2691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2689, &$s2690);
    (($fn2692) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2691);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2558, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2471, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2564, p_out);
    panda$core$String* $tmp2694 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2693 = $tmp2694;
    panda$core$String* $tmp2696 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel2695 = $tmp2696;
    panda$core$String* $tmp2698 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel2697 = $tmp2698;
    panda$core$String* $tmp2700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2699, direction2577);
    panda$core$String* $tmp2702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2700, &$s2701);
    panda$core$String* $tmp2703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2702, forwardLabel2695);
    panda$core$String* $tmp2705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2703, &$s2704);
    panda$core$String* $tmp2706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2705, backwardLabel2697);
    panda$core$String* $tmp2708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2706, &$s2707);
    (($fn2709) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2708);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel2695, p_out);
    panda$core$String* $tmp2711 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2710 = $tmp2711;
    panda$core$String* $tmp2713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2712, numberType2490);
    panda$core$String* $tmp2715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2713, &$s2714);
    panda$core$String* $tmp2716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2715, forwardDelta2710);
    panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2716, &$s2717);
    panda$core$String* $tmp2719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2718, end2522);
    panda$core$String* $tmp2721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2719, &$s2720);
    panda$core$String* $tmp2722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2721, index2492);
    panda$core$String* $tmp2724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2722, &$s2723);
    (($fn2725) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2724);
    panda$core$String* $tmp2727 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2726 = $tmp2727;
    panda$core$String* $tmp2729 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2728 = $tmp2729;
    panda$core$String* $tmp2731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2730, inclusive2548);
    panda$core$String* $tmp2733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2731, &$s2732);
    panda$core$String* $tmp2734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2733, forwardInclusiveLabel2726);
    panda$core$String* $tmp2736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2734, &$s2735);
    panda$core$String* $tmp2738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2737, forwardExclusiveLabel2728);
    panda$core$String* $tmp2740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2738, &$s2739);
    panda$core$String* $tmp2741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2736, $tmp2740);
    (($fn2742) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2741);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2726, p_out);
    panda$core$String* $tmp2744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2743, forwardDelta2710);
    panda$core$String* $tmp2746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2744, &$s2745);
    panda$core$String* $tmp2747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2746, step2535);
    panda$core$String* $tmp2749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2747, &$s2748);
    panda$core$String* $tmp2750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2749, loopInc2693);
    panda$core$String* $tmp2752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2750, &$s2751);
    panda$core$String* $tmp2753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2752, loopEnd2562);
    panda$core$String* $tmp2755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2753, &$s2754);
    (($fn2756) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2755);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2728, p_out);
    panda$core$String* $tmp2758 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2757 = $tmp2758;
    panda$core$String* $tmp2760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2759, forwardDelta2710);
    panda$core$String* $tmp2762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2760, &$s2761);
    panda$core$String* $tmp2763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2762, step2535);
    panda$core$String* $tmp2765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2763, &$s2764);
    panda$core$String* $tmp2766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2765, loopInc2693);
    panda$core$String* $tmp2768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2766, &$s2767);
    panda$core$String* $tmp2769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2768, loopEnd2562);
    panda$core$String* $tmp2771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2769, &$s2770);
    (($fn2772) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2771);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel2697, p_out);
    panda$core$String* $tmp2774 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta2773 = $tmp2774;
    panda$core$String* $tmp2776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2775, numberType2490);
    panda$core$String* $tmp2778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2776, &$s2777);
    panda$core$String* $tmp2779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2778, backwardDelta2773);
    panda$core$String* $tmp2781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2779, &$s2780);
    panda$core$String* $tmp2782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2781, index2492);
    panda$core$String* $tmp2784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2782, &$s2783);
    panda$core$String* $tmp2785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2784, end2522);
    panda$core$String* $tmp2787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2785, &$s2786);
    (($fn2788) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2787);
    panda$core$String* $tmp2790 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel2789 = $tmp2790;
    panda$core$String* $tmp2792 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel2791 = $tmp2792;
    panda$core$String* $tmp2794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2793, inclusive2548);
    panda$core$String* $tmp2796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2794, &$s2795);
    panda$core$String* $tmp2797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2796, backwardInclusiveLabel2789);
    panda$core$String* $tmp2799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2797, &$s2798);
    panda$core$String* $tmp2801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2800, backwardExclusiveLabel2791);
    panda$core$String* $tmp2803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2801, &$s2802);
    panda$core$String* $tmp2804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2799, $tmp2803);
    (($fn2805) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2804);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel2789, p_out);
    panda$core$String* $tmp2807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2806, backwardDelta2773);
    panda$core$String* $tmp2809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2807, &$s2808);
    panda$core$String* $tmp2810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2809, step2535);
    panda$core$String* $tmp2812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2810, &$s2811);
    panda$core$String* $tmp2813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2812, loopInc2693);
    panda$core$String* $tmp2815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2813, &$s2814);
    panda$core$String* $tmp2816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2815, loopEnd2562);
    panda$core$String* $tmp2818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2816, &$s2817);
    (($fn2819) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2818);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel2791, p_out);
    panda$core$String* $tmp2821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2820, backwardDelta2773);
    panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2821, &$s2822);
    panda$core$String* $tmp2824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2823, step2535);
    panda$core$String* $tmp2826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2824, &$s2825);
    panda$core$String* $tmp2827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2826, loopInc2693);
    panda$core$String* $tmp2829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2827, &$s2828);
    panda$core$String* $tmp2830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2829, loopEnd2562);
    panda$core$String* $tmp2832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2830, &$s2831);
    (($fn2833) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2832);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2693, p_out);
    panda$core$String* $tmp2835 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc2834 = $tmp2835;
    panda$core$String* $tmp2837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2836, index2492);
    panda$core$String* $tmp2839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2837, &$s2838);
    panda$core$String* $tmp2840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2839, step2535);
    panda$core$String* $tmp2842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2840, &$s2841);
    (($fn2843) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2842);
    panda$core$String* $tmp2845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2844, loopStart2558);
    panda$core$String* $tmp2847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2845, &$s2846);
    (($fn2848) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2847);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2562, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_w, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart2849;
    panda$core$String* loopEnd2851;
    panda$core$String* $tmp2850 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2849 = $tmp2850;
    panda$core$String* $tmp2852 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2851 = $tmp2852;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2853 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2853->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2853->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2853, ((panda$core$String*) p_w->payload), loopEnd2851, loopStart2849);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2853));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2849, p_out);
    panda$core$Object* $tmp2856 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2857 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2856), p_out);
    panda$core$String* $tmp2858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2855, $tmp2857);
    panda$core$String* $tmp2860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2858, &$s2859);
    panda$core$String* $tmp2861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2860, loopEnd2851);
    panda$core$String* $tmp2863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2861, &$s2862);
    (($fn2864) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2863);
    panda$core$Object* $tmp2865 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2865), p_out);
    panda$core$String* $tmp2867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2866, loopStart2849);
    panda$core$String* $tmp2869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2867, &$s2868);
    (($fn2870) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2869);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2851, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart2871;
    panda$core$String* loopEnd2873;
    panda$core$String* $tmp2872 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2871 = $tmp2872;
    panda$core$String* $tmp2874 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2873 = $tmp2874;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2875 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2875->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2875->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2875, ((panda$core$String*) p_d->payload), loopEnd2873, loopStart2871);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2875));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2871, p_out);
    panda$core$Object* $tmp2877 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2877), p_out);
    panda$core$Object* $tmp2879 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2880 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2879), p_out);
    panda$core$String* $tmp2881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2878, $tmp2880);
    panda$core$String* $tmp2883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2881, &$s2882);
    panda$core$String* $tmp2884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2883, loopStart2871);
    panda$core$String* $tmp2886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2884, &$s2885);
    (($fn2887) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2886);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2873, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart2888;
    panda$core$String* loopEnd2890;
    panda$core$String* $tmp2889 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2888 = $tmp2889;
    panda$core$String* $tmp2891 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2890 = $tmp2891;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2892 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2892->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2892->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2892, ((panda$core$String*) p_l->payload), loopEnd2890, loopStart2888);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2892));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2888, p_out);
    (($fn2895) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2894);
    panda$core$Object* $tmp2896 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2896), p_out);
    (($fn2898) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2897);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2890, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$599162899;
    org$pandalanguage$pandac$Variable* v2901;
    {
        $match$599162899 = p_target->kind;
        panda$core$Bit $tmp2900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$599162899, ((panda$core$Int64) { 1016 }));
        if ($tmp2900.value) {
        {
            v2901 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp2903 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v2901->type);
            panda$core$String* $tmp2904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2902, $tmp2903);
            panda$core$String* $tmp2906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2904, &$s2905);
            panda$core$String* $tmp2907 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v2901);
            panda$core$String* $tmp2908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2906, $tmp2907);
            panda$core$String* $tmp2910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2908, &$s2909);
            (($fn2911) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2910);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp2913 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v2901);
                panda$core$String* $tmp2914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2912, $tmp2913);
                panda$core$String* $tmp2916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2914, &$s2915);
                panda$core$String* $tmp2917 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp2918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2916, $tmp2917);
                panda$core$String* $tmp2920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2918, &$s2919);
                (($fn2921) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2920);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$599162899, ((panda$core$Int64) { 1022 }));
        if ($tmp2922.value) {
        {
        }
        }
        else {
        {
        }
        }
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* decl$Iter2923;
    org$pandalanguage$pandac$IRNode* decl2935;
    {
        ITable* $tmp2924 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp2924->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2924 = $tmp2924->next;
        }
        $fn2926 $tmp2925 = $tmp2924->methods[0];
        panda$collections$Iterator* $tmp2927 = $tmp2925(((panda$collections$Iterable*) p_v->children));
        decl$Iter2923 = $tmp2927;
        $l2928:;
        ITable* $tmp2930 = decl$Iter2923->$class->itable;
        while ($tmp2930->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2930 = $tmp2930->next;
        }
        $fn2932 $tmp2931 = $tmp2930->methods[0];
        panda$core$Bit $tmp2933 = $tmp2931(decl$Iter2923);
        panda$core$Bit $tmp2934 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2933);
        if (!$tmp2934.value) goto $l2929;
        {
            ITable* $tmp2936 = decl$Iter2923->$class->itable;
            while ($tmp2936->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2936 = $tmp2936->next;
            }
            $fn2938 $tmp2937 = $tmp2936->methods[1];
            panda$core$Object* $tmp2939 = $tmp2937(decl$Iter2923);
            decl2935 = ((org$pandalanguage$pandac$IRNode*) $tmp2939);
            panda$core$Int64 $tmp2940 = panda$collections$Array$get_count$R$panda$core$Int64(decl2935->children);
            panda$core$Bit $tmp2941 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2940, ((panda$core$Int64) { 1 }));
            if ($tmp2941.value) {
            {
                panda$core$Object* $tmp2942 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl2935->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp2943 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl2935->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2942), ((org$pandalanguage$pandac$IRNode*) $tmp2943), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp2944 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl2935->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2944), NULL, p_out);
            }
            }
        }
        goto $l2928;
        $l2929:;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$610312945;
    panda$core$String* base2952;
    panda$core$String* result2963;
    {
        $match$610312945 = p_lvalue->kind;
        panda$core$Bit $tmp2946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$610312945, ((panda$core$Int64) { 1009 }));
        if ($tmp2946.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2947 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp2948 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2947, p_out);
            return $tmp2948;
        }
        }
        else {
        panda$core$Bit $tmp2949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$610312945, ((panda$core$Int64) { 1016 }));
        if ($tmp2949.value) {
        {
            panda$core$String* $tmp2950 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp2950;
        }
        }
        else {
        panda$core$Bit $tmp2951 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$610312945, ((panda$core$Int64) { 1026 }));
        if ($tmp2951.value) {
        {
            panda$core$Object* $tmp2953 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2954 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2953), p_out);
            base2952 = $tmp2954;
            panda$core$String* $tmp2956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2955, base2952);
            panda$core$String* $tmp2958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2956, &$s2957);
            panda$core$String* $tmp2959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2958, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name);
            panda$core$String* $tmp2961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2959, &$s2960);
            return $tmp2961;
        }
        }
        else {
        panda$core$Bit $tmp2962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$610312945, ((panda$core$Int64) { 1027 }));
        if ($tmp2962.value) {
        {
            panda$core$Object* $tmp2964 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2965 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2964), p_out);
            result2963 = $tmp2965;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) result2963));
            return result2963;
        }
        }
        else {
        {
        }
        }
        }
        }
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue2966;
    panda$core$String* value2969;
    panda$core$String* t2970;
    panda$core$Int64 op2973;
    panda$core$String* right2975;
    panda$core$Object* $tmp2967 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2968 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2967), p_out);
    lvalue2966 = $tmp2968;
    panda$core$Object* $tmp2971 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2972 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2971)->type);
    t2970 = $tmp2972;
    op2973 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp2974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op2973, ((panda$core$Int64) { 73 }));
    if ($tmp2974.value) {
    {
        panda$core$Object* $tmp2976 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp2977 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2976), p_out);
        right2975 = $tmp2977;
        value2969 = right2975;
    }
    }
    else {
    {
    }
    }
    panda$core$String* $tmp2979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2978, lvalue2966);
    panda$core$String* $tmp2981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2979, &$s2980);
    panda$core$String* $tmp2982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2981, value2969);
    panda$core$String* $tmp2984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2982, &$s2983);
    (($fn2985) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2984);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $tmp2986 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp2987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2986, ((panda$core$Int64) { 1 }));
    if ($tmp2987.value) {
    {
        panda$core$Object* $tmp2989 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2990 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2989), p_out);
        panda$core$String* $tmp2991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2988, $tmp2990);
        panda$core$String* $tmp2993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2991, &$s2992);
        (($fn2994) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2993);
    }
    }
    else {
    {
        (($fn2996) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2995);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp2998;
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp2997 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp2997);
    }
    }
    panda$core$Int64 $tmp2999 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2998, ((panda$core$Int64) { 0 }), $tmp2999, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3001 = $tmp2998.start.value;
    panda$core$Int64 i3000 = { $tmp3001 };
    int64_t $tmp3003 = $tmp2998.end.value;
    int64_t $tmp3004 = $tmp2998.step.value;
    bool $tmp3005 = $tmp2998.inclusive.value;
    bool $tmp3012 = $tmp3004 > 0;
    if ($tmp3012) goto $l3010; else goto $l3011;
    $l3010:;
    if ($tmp3005) goto $l3013; else goto $l3014;
    $l3013:;
    if ($tmp3001 <= $tmp3003) goto $l3006; else goto $l3008;
    $l3014:;
    if ($tmp3001 < $tmp3003) goto $l3006; else goto $l3008;
    $l3011:;
    if ($tmp3005) goto $l3015; else goto $l3016;
    $l3015:;
    if ($tmp3001 >= $tmp3003) goto $l3006; else goto $l3008;
    $l3016:;
    if ($tmp3001 > $tmp3003) goto $l3006; else goto $l3008;
    $l3006:;
    {
        panda$core$Object* $tmp3019 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3000);
        bool $tmp3018 = ((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3019)->loopLabel != NULL }).value;
        if (!$tmp3018) goto $l3020;
        panda$core$Object* $tmp3021 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3000);
        panda$core$Bit $tmp3022 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3021)->loopLabel, p_name);
        $tmp3018 = $tmp3022.value;
        $l3020:;
        panda$core$Bit $tmp3023 = { $tmp3018 };
        if ($tmp3023.value) {
        {
            panda$core$Object* $tmp3024 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3000);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3024);
        }
        }
    }
    $l3009:;
    if ($tmp3012) goto $l3026; else goto $l3027;
    $l3026:;
    int64_t $tmp3028 = $tmp3003 - i3000.value;
    if ($tmp3005) goto $l3029; else goto $l3030;
    $l3029:;
    if ($tmp3028 >= $tmp3004) goto $l3025; else goto $l3008;
    $l3030:;
    if ($tmp3028 > $tmp3004) goto $l3025; else goto $l3008;
    $l3027:;
    int64_t $tmp3032 = i3000.value - $tmp3003;
    if ($tmp3005) goto $l3033; else goto $l3034;
    $l3033:;
    if ($tmp3032 >= -$tmp3004) goto $l3025; else goto $l3008;
    $l3034:;
    if ($tmp3032 > -$tmp3004) goto $l3025; else goto $l3008;
    $l3025:;
    i3000.value += $tmp3004;
    goto $l3006;
    $l3008:;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3036;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3037 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc3036 = $tmp3037;
    panda$core$String* $tmp3039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3038, desc3036->breakLabel);
    panda$core$String* $tmp3041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3039, &$s3040);
    (($fn3042) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3041);
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3043;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3044 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc3043 = $tmp3044;
    panda$core$String* $tmp3046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3045, desc3043->continueLabel);
    panda$core$String* $tmp3048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3046, &$s3047);
    (($fn3049) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3048);
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
}
void org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$656653050;
    {
        $match$656653050 = p_stmt->kind;
        panda$core$Bit $tmp3051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653050, ((panda$core$Int64) { 1023 }));
        if ($tmp3051.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653050, ((panda$core$Int64) { 1000 }));
        if ($tmp3052.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653050, ((panda$core$Int64) { 1005 }));
        if ($tmp3053.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, p_stmt, NULL, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653050, ((panda$core$Int64) { 1012 }));
        if ($tmp3054.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653050, ((panda$core$Int64) { 1029 }));
        if ($tmp3055.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653050, ((panda$core$Int64) { 1013 }));
        if ($tmp3056.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653050, ((panda$core$Int64) { 1014 }));
        if ($tmp3057.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3058 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653050, ((panda$core$Int64) { 1015 }));
        if ($tmp3058.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653050, ((panda$core$Int64) { 1017 }));
        bool $tmp3061 = $tmp3062.value;
        if ($tmp3061) goto $l3063;
        panda$core$Bit $tmp3064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653050, ((panda$core$Int64) { 1018 }));
        $tmp3061 = $tmp3064.value;
        $l3063:;
        panda$core$Bit $tmp3065 = { $tmp3061 };
        bool $tmp3060 = $tmp3065.value;
        if ($tmp3060) goto $l3066;
        panda$core$Bit $tmp3067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653050, ((panda$core$Int64) { 1019 }));
        $tmp3060 = $tmp3067.value;
        $l3066:;
        panda$core$Bit $tmp3068 = { $tmp3060 };
        bool $tmp3059 = $tmp3068.value;
        if ($tmp3059) goto $l3069;
        panda$core$Bit $tmp3070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653050, ((panda$core$Int64) { 1020 }));
        $tmp3059 = $tmp3070.value;
        $l3069:;
        panda$core$Bit $tmp3071 = { $tmp3059 };
        if ($tmp3071.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653050, ((panda$core$Int64) { 1008 }));
        if ($tmp3072.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653050, ((panda$core$Int64) { 1006 }));
        if ($tmp3073.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653050, ((panda$core$Int64) { 1007 }));
        if ($tmp3074.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp3075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$656653050, ((panda$core$Int64) { 1034 }));
        if ($tmp3075.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        {
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result3076;
    org$pandalanguage$pandac$Type* $tmp3077 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp3078 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3077);
    result3076 = $tmp3078;
    panda$core$Bit $tmp3080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp3079 = $tmp3080.value;
    if (!$tmp3079) goto $l3081;
    panda$core$Bit $tmp3083 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result3076, &$s3082);
    panda$core$Bit $tmp3084 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3083);
    $tmp3079 = $tmp3084.value;
    $l3081:;
    panda$core$Bit $tmp3085 = { $tmp3079 };
    if ($tmp3085.value) {
    {
        panda$core$String* $tmp3087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3076, &$s3086);
        return $tmp3087;
    }
    }
    return result3076;
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator3100;
    panda$collections$Iterator* p$Iter3111;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3123;
    panda$io$MemoryOutputStream* bodyBuffer3145;
    panda$io$IndentedOutputStream* indentedBody3148;
    panda$collections$Iterator* s$Iter3151;
    org$pandalanguage$pandac$IRNode* s3163;
    self->currentMethod = p_m;
    self->currentBlock = &$s3088;
    (($fn3089) self->methodHeaderBuffer->$class->vtable[20])(self->methodHeaderBuffer);
    panda$core$String* $tmp3091 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp3092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3090, $tmp3091);
    panda$core$String* $tmp3094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3092, &$s3093);
    panda$core$String* $tmp3095 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp3096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3094, $tmp3095);
    panda$core$String* $tmp3098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3096, &$s3097);
    (($fn3099) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3098);
    separator3100 = &$s3101;
    panda$core$Bit $tmp3102 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp3103 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3102);
    if ($tmp3103.value) {
    {
        panda$core$String* $tmp3105 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp3106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3104, $tmp3105);
        panda$core$String* $tmp3108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3106, &$s3107);
        (($fn3109) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3108);
        separator3100 = &$s3110;
    }
    }
    {
        ITable* $tmp3112 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3112->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3112 = $tmp3112->next;
        }
        $fn3114 $tmp3113 = $tmp3112->methods[0];
        panda$collections$Iterator* $tmp3115 = $tmp3113(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3111 = $tmp3115;
        $l3116:;
        ITable* $tmp3118 = p$Iter3111->$class->itable;
        while ($tmp3118->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3118 = $tmp3118->next;
        }
        $fn3120 $tmp3119 = $tmp3118->methods[0];
        panda$core$Bit $tmp3121 = $tmp3119(p$Iter3111);
        panda$core$Bit $tmp3122 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3121);
        if (!$tmp3122.value) goto $l3117;
        {
            ITable* $tmp3124 = p$Iter3111->$class->itable;
            while ($tmp3124->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3124 = $tmp3124->next;
            }
            $fn3126 $tmp3125 = $tmp3124->methods[1];
            panda$core$Object* $tmp3127 = $tmp3125(p$Iter3111);
            p3123 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3127);
            panda$core$String* $tmp3129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3128, separator3100);
            panda$core$String* $tmp3131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3129, &$s3130);
            panda$core$String* $tmp3132 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p3123->type);
            panda$core$String* $tmp3133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3131, $tmp3132);
            panda$core$String* $tmp3135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3133, &$s3134);
            panda$core$String* $tmp3136 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p3123->name);
            panda$core$String* $tmp3137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3135, $tmp3136);
            panda$core$String* $tmp3139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3137, &$s3138);
            (($fn3140) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3139);
            separator3100 = &$s3141;
        }
        goto $l3116;
        $l3117:;
    }
    (($fn3143) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3142);
    panda$core$Int64 $tmp3144 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3144;
    panda$io$MemoryOutputStream* $tmp3146 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp3146->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp3146->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp3146);
    bodyBuffer3145 = $tmp3146;
    panda$io$IndentedOutputStream* $tmp3149 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp3149->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3149->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3149, ((panda$io$OutputStream*) bodyBuffer3145));
    indentedBody3148 = $tmp3149;
    {
        ITable* $tmp3152 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp3152->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3152 = $tmp3152->next;
        }
        $fn3154 $tmp3153 = $tmp3152->methods[0];
        panda$collections$Iterator* $tmp3155 = $tmp3153(((panda$collections$Iterable*) p_body->children));
        s$Iter3151 = $tmp3155;
        $l3156:;
        ITable* $tmp3158 = s$Iter3151->$class->itable;
        while ($tmp3158->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3158 = $tmp3158->next;
        }
        $fn3160 $tmp3159 = $tmp3158->methods[0];
        panda$core$Bit $tmp3161 = $tmp3159(s$Iter3151);
        panda$core$Bit $tmp3162 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3161);
        if (!$tmp3162.value) goto $l3157;
        {
            ITable* $tmp3164 = s$Iter3151->$class->itable;
            while ($tmp3164->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3164 = $tmp3164->next;
            }
            $fn3166 $tmp3165 = $tmp3164->methods[1];
            panda$core$Object* $tmp3167 = $tmp3165(s$Iter3151);
            s3163 = ((org$pandalanguage$pandac$IRNode*) $tmp3167);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s3163, indentedBody3148);
        }
        goto $l3156;
        $l3157:;
    }
    panda$core$String* $tmp3169 = (($fn3168) self->methodHeaderBuffer->$class->vtable[0])(self->methodHeaderBuffer);
    (($fn3170) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3169);
    panda$core$String* $tmp3172 = (($fn3171) bodyBuffer3145->$class->vtable[0])(bodyBuffer3145);
    (($fn3173) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3172);
    panda$core$Int64 $tmp3174 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3174;
    (($fn3176) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3175);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path3183;
    self->currentClass = p_cl;
    panda$collections$Set$clear(self->imports);
    (($fn3177) self->strings->$class->vtable[20])(self->strings);
    (($fn3178) self->declarations->$class->vtable[20])(self->declarations);
    (($fn3179) self->types->$class->vtable[20])(self->types);
    (($fn3180) self->methodsBuffer->$class->vtable[20])(self->methodsBuffer);
    (($fn3181) self->wrapperShimsBuffer->$class->vtable[20])(self->wrapperShimsBuffer);
    (($fn3182) self->shimsBuffer->$class->vtable[20])(self->shimsBuffer);
    panda$collections$Set$clear(self->declared);
    panda$collections$Set$clear(self->writtenTypes);
    panda$collections$Set$clear(self->writtenWrappers);
    panda$collections$HashMap$clear(self->classConstants);
    panda$collections$IdentityMap$clear(self->variableNames);
    self->varCount = ((panda$core$Int64) { 0 });
    panda$collections$HashMap$clear(self->reusedValues);
    panda$collections$IdentityMap$clear(self->methodShims);
    panda$io$File* $tmp3185 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self->hCodeGen, p_cl, &$s3184);
    path3183 = $tmp3185;
    panda$io$File* $tmp3186 = panda$io$File$parent$R$panda$io$File$Q(path3183);
    panda$io$File$createDirectories($tmp3186);
    panda$io$IndentedOutputStream* $tmp3187 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp3187->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3187->refCount.value = 1;
    panda$io$OutputStream* $tmp3189 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path3183);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3187, $tmp3189);
    self->out = $tmp3187;
    org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Bit $tmp3190 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp3190.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
        panda$core$String* $tmp3192 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3191, $tmp3192);
        panda$core$String* $tmp3195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3193, &$s3194);
        panda$core$String* $tmp3196 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3195, $tmp3196);
        panda$core$String* $tmp3199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3197, &$s3198);
        panda$core$String* $tmp3201 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3200, $tmp3201);
        panda$core$String* $tmp3204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3202, &$s3203);
        panda$core$String* $tmp3205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3199, $tmp3204);
        (($fn3206) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3205);
        panda$core$String* $tmp3208 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3207, $tmp3208);
        panda$core$String* $tmp3211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3209, &$s3210);
        panda$core$String* $tmp3213 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3212, $tmp3213);
        panda$core$String* $tmp3216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3214, &$s3215);
        org$pandalanguage$pandac$Type* $tmp3217 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$Int64 $tmp3218 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3217);
        panda$core$String* $tmp3219 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3216, ((panda$core$Object*) wrap_panda$core$Int64($tmp3218)));
        panda$core$String* $tmp3221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3219, &$s3220);
        panda$core$String* $tmp3222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3211, $tmp3221);
        (($fn3223) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3222);
        panda$core$String* $tmp3226 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3225, $tmp3226);
        panda$core$String* $tmp3229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3227, &$s3228);
        panda$core$String* $tmp3230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3224, $tmp3229);
        (($fn3231) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3230);
        (($fn3233) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3232);
        (($fn3235) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3234);
        (($fn3237) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3236);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$finish(self);
    self->currentClass = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* self) {
    (($fn3238) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->shimsBuffer));
    (($fn3239) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->wrapperShimsBuffer));
    (($fn3240) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->types));
    (($fn3241) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->strings));
    (($fn3242) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->methodsBuffer));
    (($fn3243) ((panda$core$Object*) self->out->out)->$class->vtable[1])(((panda$core$Object*) self->out->out));
}

