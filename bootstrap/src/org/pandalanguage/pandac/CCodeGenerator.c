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
#include "panda/collections/Array.h"
#include "panda/core/SimpleRange.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/IRNode.h"
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

org$pandalanguage$pandac$CCodeGenerator$class_type org$pandalanguage$pandac$CCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim, org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

typedef void (*$fn65)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn127)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn143)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn175)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn181)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn187)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn217)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn223)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn229)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn326)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn332)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn338)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn368)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn390)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn396)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn402)(panda$collections$Iterator*);
typedef void (*$fn409)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn447)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn454)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn486)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn499)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn553)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn559)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn584)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn597)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn606)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn609)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn614)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn640)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn674)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn687)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn736)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn742)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn767)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn780)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn783)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn792)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn798)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn804)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn834)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn861)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn867)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn873)(panda$collections$Iterator*);
typedef void (*$fn880)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn963)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn969)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn975)(panda$collections$Iterator*);
typedef void (*$fn982)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1002)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1060)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1082)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1108)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1148)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1158)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1172)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1188)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1198)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1212)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1235)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1241)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1255)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1303)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1324)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1361)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1369)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1378)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1381)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1388)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1409)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1427)(panda$collections$CollectionView*);
typedef void (*$fn1449)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1588)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1606)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1703)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1711)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1723)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1727)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1733)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1739)(panda$collections$Iterator*);
typedef void (*$fn1748)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1751)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1984)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2010)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2026)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2031)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2057)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2062)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2068)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2074)(panda$collections$Iterator*);
typedef void (*$fn2079)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn2086)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2088)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Object* (*$fn2095)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2097)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Int64 (*$fn2102)(panda$collections$CollectionView*);
typedef void (*$fn2107)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2226)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2231)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2237)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2243)(panda$collections$Iterator*);
typedef void (*$fn2247)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2268)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2297)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2308)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2411)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2422)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2428)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2432)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2438)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2444)(panda$collections$Iterator*);
typedef void (*$fn2446)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2447)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2450)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2469)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2472)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2476)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2479)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2515)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2522)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2541)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2556)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2569)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2581)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2619)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2631)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2648)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2662)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2676)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2693)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2707)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2723)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2740)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2756)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2773)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2787)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2803)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2819)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2836)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2850)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2864)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2874)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2879)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2915)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2922)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2941)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2956)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2969)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2982)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2992)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3030)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3042)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3059)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3073)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3087)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3104)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3118)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3134)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3151)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3167)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3184)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3198)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3214)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3230)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3247)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3261)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3275)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3285)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3290)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3316)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3322)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3345)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3356)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3359)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3370)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3380)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3397)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3403)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3409)(panda$collections$Iterator*);
typedef void (*$fn3455)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3464)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3468)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3515)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3522)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3537)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3544)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3594)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3610)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3615)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3630)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3645)(panda$io$MemoryOutputStream*);
typedef void (*$fn3655)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3665)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3670)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3676)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3682)(panda$collections$Iterator*);
typedef void (*$fn3696)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3699)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3711)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3717)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3723)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3725)(panda$io$MemoryOutputStream*);
typedef void (*$fn3727)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3728)(panda$io$MemoryOutputStream*);
typedef void (*$fn3730)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3733)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3734)(panda$io$MemoryOutputStream*);
typedef void (*$fn3735)(panda$io$MemoryOutputStream*);
typedef void (*$fn3736)(panda$io$MemoryOutputStream*);
typedef void (*$fn3737)(panda$io$MemoryOutputStream*);
typedef void (*$fn3738)(panda$io$MemoryOutputStream*);
typedef void (*$fn3739)(panda$io$MemoryOutputStream*);
typedef void (*$fn3763)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3780)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3788)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3790)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3792)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3794)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3795)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3796)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3797)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3798)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3799)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3800)(panda$core$Object*);

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
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, 1 };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6C", 2, 1 };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3B", 2, 1 };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x38", 1, 1 };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x36", 2, 1 };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x33\x32", 2, 1 };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34", 2, 1 };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 1 };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 1 };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, 1 };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x5F", 2, 1 };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7B\x20", 9, 1 };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6C\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x6E\x65\x78\x74\x3B\x20", 19, 1 };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x6D\x65\x74\x68\x6F\x64\x73\x5B", 14, 1 };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, 1 };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 1 };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, 1 };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6C\x65\x2A\x29\x20\x26", 11, 1 };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5, 1 };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70", 2, 1 };
static panda$core$String $s484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70", 1, 1 };
static panda$core$String $s527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x72\x65\x73\x75\x6C\x74\x20\x3D\x20", 10, 1 };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x73\x75\x6C\x74", 6, 1 };
static panda$core$String $s604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6D", 12, 1 };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A", 9, 1 };
static panda$core$String $s629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6C\x66\x2D\x3E\x76\x61\x6C\x75\x65", 12, 1 };
static panda$core$String $s762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5F", 9, 1 };
static panda$core$String $s820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7B\x20", 9, 1 };
static panda$core$String $s829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6C\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B\x20", 21, 1 };
static panda$core$String $s831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x6D\x65\x74\x68\x6F\x64\x73\x5B", 14, 1 };
static panda$core$String $s837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, 1 };
static panda$core$String $s840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x26", 3, 1 };
static panda$core$String $s850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 1 };
static panda$core$String $s857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, 1 };
static panda$core$String $s881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6C\x65\x2A\x29\x20\x26", 11, 1 };
static panda$core$String $s883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 1 };
static panda$core$String $s916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 1 };
static panda$core$String $s927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74\x79\x70\x65\x20", 6, 1 };
static panda$core$String $s944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20", 5, 1 };
static panda$core$String $s951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 1 };
static panda$core$String $s959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, 1 };
static panda$core$String $s984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 1 };
static panda$core$String $s994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 1 };
static panda$core$String $s995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 1 };
static panda$core$String $s1000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 1 };
static panda$core$String $s1017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 1 };
static panda$core$String $s1024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s1026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74\x79\x70\x65\x20", 6, 1 };
static panda$core$String $s1042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s1044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s1046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20", 5, 1 };
static panda$core$String $s1049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 1 };
static panda$core$String $s1056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
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
static panda$core$String $s1125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1 };
static panda$core$String $s1141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s1143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 1 };
static panda$core$String $s1153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s1156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1 };
static panda$core$String $s1165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1 };
static panda$core$String $s1181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s1183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s1193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s1196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1 };
static panda$core$String $s1205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s1216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s1217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s1218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s1219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s1220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s1222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s1223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s1224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s1225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s1226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 1 };
static panda$core$String $s1227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s1228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s1230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s1231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s1234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s1236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, 1 };
static panda$core$String $s1262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x3D\x20", 4, 1 };
static panda$core$String $s1265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s1271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, 1 };
static panda$core$String $s1273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20", 4, 1 };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s1338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x2D\x3E\x76\x74\x61\x62\x6C\x65\x5B", 17, 1 };
static panda$core$String $s1348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x29", 2, 1 };
static panda$core$String $s1354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x54\x61\x62\x6C\x65\x2A\x20", 8, 1 };
static panda$core$String $s1356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x2D\x3E\x69\x74\x61\x62\x6C\x65\x3B", 17, 1 };
static panda$core$String $s1362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28", 7, 1 };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x20\x21\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 33, 1 };
static panda$core$String $s1367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s1371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x6E\x65\x78\x74\x3B", 7, 1 };
static panda$core$String $s1380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s1436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x6D\x65\x74\x68\x6F\x64\x73\x5B", 10, 1 };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B", 2, 1 };
static panda$core$String $s1462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, 1 };
static panda$core$String $s1476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 9, 1 };
static panda$core$String $s1482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2A\x20", 9, 1 };
static panda$core$String $s1485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 1 };
static panda$core$String $s1487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 1 };
static panda$core$String $s1494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x2A", 2, 1 };
static panda$core$String $s1496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s1513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D", 7, 1 };
static panda$core$String $s1515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, 1 };
static panda$core$String $s1532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x72\x65\x61\x6C\x6C\x6F\x63\x28", 10, 1 };
static panda$core$String $s1538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2A\x20", 9, 1 };
static panda$core$String $s1544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 1 };
static panda$core$String $s1546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, 1 };
static panda$core$String $s1556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2B\x20", 3, 1 };
static panda$core$String $s1561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29", 7, 1 };
static panda$core$String $s1565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s1569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, 1 };
static panda$core$String $s1571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s1581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 15, 1 };
static panda$core$String $s1583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s1586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1 };
static panda$core$String $s1589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s1599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 15, 1 };
static panda$core$String $s1601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s1604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1 };
static panda$core$String $s1694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x26", 2, 1 };
static panda$core$String $s1709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s1765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3F\x20", 11, 1 };
static panda$core$String $s1770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x4E\x55\x4C\x4C\x29", 8, 1 };
static panda$core$String $s1773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x77\x72\x61\x70\x5F", 7, 1 };
static panda$core$String $s1781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 1 };
static panda$core$String $s1789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3F\x20", 11, 1 };
static panda$core$String $s1794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x4E\x55\x4C\x4C\x29", 8, 1 };
static panda$core$String $s1809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, 1 };
static panda$core$String $s1823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2D\x3E\x76\x61\x6C\x75\x65", 8, 1 };
static panda$core$String $s1841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C\x20\x3F\x20", 11, 1 };
static panda$core$String $s1846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x28", 4, 1 };
static panda$core$String $s1850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x30\x20\x7D\x29", 19, 1 };
static panda$core$String $s1852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20", 4, 1 };
static panda$core$String $s1858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x74\x72\x75\x65\x20\x7D\x29", 9, 1 };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29", 7, 1 };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8, 1 };
static panda$core$String $s1925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20", 4, 1 };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s1973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, 1 };
static panda$core$String $s1975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x28", 4, 1 };
static panda$core$String $s2002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x6C\x6C\x6F\x63\x28", 7, 1 };
static panda$core$String $s2007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s2018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 32, 1 };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x3B", 7, 1 };
static panda$core$String $s2027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x72\x65\x66\x43\x6F\x75\x6E\x74\x2E\x76\x61\x6C\x75\x65\x20\x3D\x20\x31\x3B", 21, 1 };
static panda$core$String $s2033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s2042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 1 };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73", 2, 1 };
static panda$core$String $s2048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20", 25, 1 };
static panda$core$String $s2053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s2055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x63\x6C\x61\x73\x73\x2C\x20\x32\x2C\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x20\x22", 70, 1 };
static panda$core$String $s2078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C\x78", 2, 1 };
static panda$core$String $s2080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 1 };
static panda$core$String $s2089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 1 };
static panda$core$String $s2098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22\x2C\x20", 3, 1 };
static panda$core$String $s2105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x20\x7D\x3B", 6, 1 };
static panda$core$String $s2108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, 1 };
static panda$core$String $s2113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s2116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x73\x65\x6C\x66\x29", 7, 1 };
static panda$core$String $s2131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 1 };
static panda$core$String $s2132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s2136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x3D\x20\x4E\x55\x4C\x4C", 8, 1 };
static panda$core$String $s2140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, 1 };
static panda$core$String $s2142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s2157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s2158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s2162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C", 8, 1 };
static panda$core$String $s2166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, 1 };
static panda$core$String $s2168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s2175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s2178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x66\x61\x6C\x73\x65\x20\x7D\x29", 23, 1 };
static panda$core$String $s2180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s2190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s2200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s2246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s2250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 1 };
static panda$core$String $s2261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x32\x20", 7, 1 };
static panda$core$String $s2263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s2292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D\x20\x3D\x20", 10, 1 };
static panda$core$String $s2295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, 1 };
static panda$core$String $s2302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x72\x65\x65\x28", 5, 1 };
static panda$core$String $s2306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s2311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s2396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, 1 };
static panda$core$String $s2404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s2465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x7B", 9, 1 };
static panda$core$String $s2471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s2475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x6C\x73\x65\x20\x7B", 6, 1 };
static panda$core$String $s2478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s2492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x69\x6D\x70\x6C\x65\x52\x61\x6E\x67\x65", 22, 1 };
static panda$core$String $s2531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6D\x69\x6E\x2E\x76\x61\x6C\x75\x65\x3B", 11, 1 };
static panda$core$String $s2544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s2554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1 };
static panda$core$String $s2559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6D\x61\x78\x2E\x76\x61\x6C\x75\x65\x3B", 11, 1 };
static panda$core$String $s2571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31", 1, 1 };
static panda$core$String $s2574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s2576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x69\x6E\x63\x6C\x75\x73\x69\x76\x65\x2E\x76\x61\x6C\x75\x65\x3B", 17, 1 };
static panda$core$String $s2597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, 1 };
static panda$core$String $s2599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s2601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1 };
static panda$core$String $s2604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1 };
static panda$core$String $s2607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 1 };
static panda$core$String $s2609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s2612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s2614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x30\x3B", 5, 1 };
static panda$core$String $s2620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s2621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x3D\x20", 4, 1 };
static panda$core$String $s2654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x20", 3, 1 };
static panda$core$String $s2668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, 1 };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, 1 };
static panda$core$String $s2715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x20", 3, 1 };
static panda$core$String $s2754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x3B", 7, 1 };
static panda$core$String $s2761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, 1 };
static panda$core$String $s2779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, 1 };
static panda$core$String $s2795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2D\x20", 9, 1 };
static panda$core$String $s2817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20\x2D", 5, 1 };
static panda$core$String $s2842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x2D", 4, 1 };
static panda$core$String $s2856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2B\x3D\x20", 10, 1 };
static panda$core$String $s2872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s2877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, 1 };
static panda$core$String $s2931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x61\x72\x74\x2E\x76\x61\x6C\x75\x65\x3B", 13, 1 };
static panda$core$String $s2944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s2954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1 };
static panda$core$String $s2959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x65\x6E\x64\x2E\x76\x61\x6C\x75\x65\x3B", 11, 1 };
static panda$core$String $s2972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x65\x70\x2E\x76\x61\x6C\x75\x65\x3B", 12, 1 };
static panda$core$String $s2985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s2987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x69\x6E\x63\x6C\x75\x73\x69\x76\x65\x2E\x76\x61\x6C\x75\x65\x3B", 17, 1 };
static panda$core$String $s3008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, 1 };
static panda$core$String $s3010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s3012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1 };
static panda$core$String $s3015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1 };
static panda$core$String $s3018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 1 };
static panda$core$String $s3020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s3023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s3025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s3028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x30\x3B", 5, 1 };
static panda$core$String $s3031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s3032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s3034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s3037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s3040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s3049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s3052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s3054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s3062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x3D\x20", 4, 1 };
static panda$core$String $s3065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s3068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s3071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s3076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x20", 3, 1 };
static panda$core$String $s3079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s3082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s3085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s3094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s3097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s3099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s3107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, 1 };
static panda$core$String $s3110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s3113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s3116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s3123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, 1 };
static panda$core$String $s3126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s3129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s3132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s3143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s3146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s3149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s3162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x20", 3, 1 };
static panda$core$String $s3165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x3B", 7, 1 };
static panda$core$String $s3172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s3174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s3177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s3179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s3187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, 1 };
static panda$core$String $s3190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s3193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s3196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s3203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, 1 };
static panda$core$String $s3206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s3209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s3212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s3225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2D\x20", 9, 1 };
static panda$core$String $s3228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s3237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s3240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s3242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s3250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20\x2D", 5, 1 };
static panda$core$String $s3253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s3256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s3259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s3264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x2D", 4, 1 };
static panda$core$String $s3267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s3270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s3273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2B\x3D\x20", 10, 1 };
static panda$core$String $s3283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s3288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 1 };
static panda$core$String $s3311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, 1 };
static panda$core$String $s3314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s3320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s3340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, 1 };
static panda$core$String $s3343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7B", 14, 1 };
static panda$core$String $s3358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s3361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s3378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, 1 };
static panda$core$String $s3428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s3453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s3462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x3B", 7, 1 };
static panda$core$String $s3511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s3513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s3520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x50\x41\x4E\x44\x41\x5F\x41\x53\x53\x45\x52\x54\x28", 13, 1 };
static panda$core$String $s3535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s3538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20\x28", 8, 1 };
static panda$core$String $s3542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x7B", 9, 1 };
static panda$core$String $s3588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x73\x65\x20", 5, 1 };
static panda$core$String $s3592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s3609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B\x3B", 6, 1 };
static panda$core$String $s3614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x61\x75\x6C\x74\x3A", 8, 1 };
static panda$core$String $s3629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s3637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s3641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s3644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 1 };
static panda$core$String $s3646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s3657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s3666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70\x5F", 3, 1 };
static panda$core$String $s3694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s3732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s3741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x63", 2, 1 };
static panda$core$String $s3748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x77\x72\x61\x70\x5F", 15, 1 };
static panda$core$String $s3755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s3757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66\x29\x20\x7B", 8, 1 };
static panda$core$String $s3764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20", 4, 1 };
static panda$core$String $s3767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x72\x65\x73\x75\x6C\x74\x20\x3D\x20", 19, 1 };
static panda$core$String $s3769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s3772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 18, 1 };
static panda$core$String $s3777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s3781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x63\x6C\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20", 37, 1 };
static panda$core$String $s3782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s3785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x3B", 14, 1 };
static panda$core$String $s3789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x76\x61\x6C\x75\x65\x20\x3D\x20\x73\x65\x6C\x66\x3B", 25, 1 };
static panda$core$String $s3791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6E\x20\x72\x65\x73\x75\x6C\x74\x3B", 18, 1 };
static panda$core$String $s3793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };

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
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp92;
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
        panda$core$Int64 $tmp84 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
        panda$core$Int64 $tmp85 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp84, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp86 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp85);
        panda$core$String* $tmp87 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp86));
        panda$core$MutableString$append$panda$core$String(code80, $tmp87);
        panda$core$MutableString$append$panda$core$String(code80, &$s88);
        panda$core$MutableString$append$panda$core$String(code80, result75);
        panda$core$MutableString$append$panda$core$String(code80, &$s89);
        separator90 = &$s91;
        panda$core$Int64 $tmp93 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
        panda$core$Int64 $tmp94 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp93, ((panda$core$Int64) { 1 }));
        panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp92, ((panda$core$Int64) { 0 }), $tmp94, ((panda$core$Bit) { false }));
        int64_t $tmp96 = $tmp92.min.value;
        panda$core$Int64 i95 = { $tmp96 };
        int64_t $tmp98 = $tmp92.max.value;
        bool $tmp99 = $tmp92.inclusive.value;
        bool $tmp106 = 1 > 0;
        if ($tmp106) goto $l104; else goto $l105;
        $l104:;
        if ($tmp99) goto $l107; else goto $l108;
        $l107:;
        if ($tmp96 <= $tmp98) goto $l100; else goto $l102;
        $l108:;
        if ($tmp96 < $tmp98) goto $l100; else goto $l102;
        $l105:;
        if ($tmp99) goto $l109; else goto $l110;
        $l109:;
        if ($tmp96 >= $tmp98) goto $l100; else goto $l102;
        $l110:;
        if ($tmp96 > $tmp98) goto $l100; else goto $l102;
        $l100:;
        {
            panda$core$MutableString$append$panda$core$String(code80, separator90);
            panda$core$Object* $tmp112 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, i95);
            panda$core$String* $tmp113 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp112));
            panda$core$MutableString$append$panda$core$String(code80, $tmp113);
            separator90 = &$s114;
        }
        $l103:;
        if ($tmp106) goto $l116; else goto $l117;
        $l116:;
        int64_t $tmp118 = $tmp98 - i95.value;
        if ($tmp99) goto $l119; else goto $l120;
        $l119:;
        if ($tmp118 >= 1) goto $l115; else goto $l102;
        $l120:;
        if ($tmp118 > 1) goto $l115; else goto $l102;
        $l117:;
        int64_t $tmp122 = i95.value - $tmp98;
        if ($tmp99) goto $l123; else goto $l124;
        $l123:;
        if ($tmp122 >= -1) goto $l115; else goto $l102;
        $l124:;
        if ($tmp122 > -1) goto $l115; else goto $l102;
        $l115:;
        i95.value += 1;
        goto $l100;
        $l102:;
        panda$core$MutableString$append$panda$core$String(code80, &$s126);
        (($fn127) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code80));
        return result75;
    }
    }
    panda$core$String* $tmp128 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self->hCodeGen, p_t);
    return $tmp128;
}
void org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->compiler = p_compiler;
    org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->hCodeGen, p_compiler);
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp129 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp129;
    panda$core$String* $tmp131 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s130, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp131, &$s132);
    return $tmp133;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp134 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp134;
    panda$core$String* $tmp136 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s135, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp136, &$s137);
    return $tmp138;
}
void org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s139, p_label);
    panda$core$String* $tmp142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp140, &$s141);
    (($fn143) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp142);
    self->currentBlock = p_label;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt) {
    switch (p_stmt->kind.value) {
        case 1000:
        {
            panda$core$Int64 $tmp144 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp144, ((panda$core$Int64) { 0 }));
            if ($tmp145.value) {
            {
                return ((panda$core$Bit) { false });
            }
            }
            panda$core$Int64 $tmp146 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Int64 $tmp147 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp146, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp148 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, $tmp147);
            panda$core$Bit $tmp149 = org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp148));
            return $tmp149;
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
    org$pandalanguage$pandac$ClassDecl* cl161;
    panda$core$Int64 result170;
    panda$collections$Iterator* f$Iter171;
    org$pandalanguage$pandac$FieldDecl* f184;
    panda$core$Int64 size190;
    panda$core$Int64 align192;
    PANDA_ASSERT(p_t->resolved.value);
    panda$core$Bit $tmp150 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_t);
    if ($tmp150.value) {
    {
        panda$core$Bit $tmp152 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s151);
        if ($tmp152.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        panda$core$Bit $tmp154 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s153);
        if ($tmp154.value) {
        {
            return ((panda$core$Int64) { 2 });
        }
        }
        panda$core$Bit $tmp156 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s155);
        if ($tmp156.value) {
        {
            return ((panda$core$Int64) { 4 });
        }
        }
        panda$core$Bit $tmp158 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s157);
        PANDA_ASSERT($tmp158.value);
        return ((panda$core$Int64) { 8 });
    }
    }
    org$pandalanguage$pandac$Type* $tmp159 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp160 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp159);
    if ($tmp160.value) {
    {
        return ((panda$core$Int64) { 1 });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp162 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl161 = $tmp162;
    PANDA_ASSERT(((panda$core$Bit) { cl161 != NULL }).value);
    panda$core$Bit $tmp164 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl161);
    panda$core$Bit $tmp165 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp164);
    bool $tmp163 = $tmp165.value;
    if ($tmp163) goto $l166;
    panda$core$Bit $tmp168 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl161)->name, &$s167);
    $tmp163 = $tmp168.value;
    $l166:;
    panda$core$Bit $tmp169 = { $tmp163 };
    if ($tmp169.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    result170 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp172 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl161);
        ITable* $tmp173 = ((panda$collections$Iterable*) $tmp172)->$class->itable;
        while ($tmp173->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp173 = $tmp173->next;
        }
        $fn175 $tmp174 = $tmp173->methods[0];
        panda$collections$Iterator* $tmp176 = $tmp174(((panda$collections$Iterable*) $tmp172));
        f$Iter171 = $tmp176;
        $l177:;
        ITable* $tmp179 = f$Iter171->$class->itable;
        while ($tmp179->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp179 = $tmp179->next;
        }
        $fn181 $tmp180 = $tmp179->methods[0];
        panda$core$Bit $tmp182 = $tmp180(f$Iter171);
        panda$core$Bit $tmp183 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp182);
        if (!$tmp183.value) goto $l178;
        {
            ITable* $tmp185 = f$Iter171->$class->itable;
            while ($tmp185->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp185 = $tmp185->next;
            }
            $fn187 $tmp186 = $tmp185->methods[1];
            panda$core$Object* $tmp188 = $tmp186(f$Iter171);
            f184 = ((org$pandalanguage$pandac$FieldDecl*) $tmp188);
            panda$core$Bit $tmp189 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f184->annotations);
            if ($tmp189.value) {
            {
                goto $l177;
            }
            }
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f184);
            panda$core$Int64 $tmp191 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f184->type);
            size190 = $tmp191;
            panda$core$Int64 $tmp193 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result170, size190);
            align192 = $tmp193;
            panda$core$Bit $tmp194 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align192, ((panda$core$Int64) { 0 }));
            if ($tmp194.value) {
            {
                panda$core$Int64 $tmp195 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size190, align192);
                panda$core$Int64 $tmp196 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result170, $tmp195);
                result170 = $tmp196;
            }
            }
            panda$core$Int64 $tmp197 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result170, size190);
            panda$core$Bit $tmp198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp197, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp198.value);
            panda$core$Int64 $tmp199 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result170, size190);
            result170 = $tmp199;
        }
        goto $l177;
        $l178:;
    }
    panda$core$Bit $tmp200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp200.value) {
    {
        panda$core$Int64 $tmp201 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result170, ((panda$core$Int64) { 1 }));
        result170 = $tmp201;
    }
    }
    return result170;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp202 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
    panda$core$Int64 $tmp203 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp202, ((panda$core$Int64) { 8 }));
    return $tmp203;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl204;
    panda$core$Int64 result210;
    panda$collections$Iterator* f$Iter213;
    org$pandalanguage$pandac$FieldDecl* f226;
    panda$core$Int64 size231;
    panda$core$Int64 align233;
    org$pandalanguage$pandac$ClassDecl* $tmp205 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl204 = $tmp205;
    bool $tmp206 = ((panda$core$Bit) { cl204 != NULL }).value;
    if (!$tmp206) goto $l207;
    panda$core$Bit $tmp208 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl204);
    $tmp206 = $tmp208.value;
    $l207:;
    panda$core$Bit $tmp209 = { $tmp206 };
    PANDA_ASSERT($tmp209.value);
    org$pandalanguage$pandac$Type* $tmp211 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$Int64 $tmp212 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp211);
    result210 = $tmp212;
    {
        panda$collections$ListView* $tmp214 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl204);
        ITable* $tmp215 = ((panda$collections$Iterable*) $tmp214)->$class->itable;
        while ($tmp215->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp215 = $tmp215->next;
        }
        $fn217 $tmp216 = $tmp215->methods[0];
        panda$collections$Iterator* $tmp218 = $tmp216(((panda$collections$Iterable*) $tmp214));
        f$Iter213 = $tmp218;
        $l219:;
        ITable* $tmp221 = f$Iter213->$class->itable;
        while ($tmp221->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp221 = $tmp221->next;
        }
        $fn223 $tmp222 = $tmp221->methods[0];
        panda$core$Bit $tmp224 = $tmp222(f$Iter213);
        panda$core$Bit $tmp225 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp224);
        if (!$tmp225.value) goto $l220;
        {
            ITable* $tmp227 = f$Iter213->$class->itable;
            while ($tmp227->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp227 = $tmp227->next;
            }
            $fn229 $tmp228 = $tmp227->methods[1];
            panda$core$Object* $tmp230 = $tmp228(f$Iter213);
            f226 = ((org$pandalanguage$pandac$FieldDecl*) $tmp230);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f226);
            panda$core$Int64 $tmp232 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f226->type);
            size231 = $tmp232;
            panda$core$Int64 $tmp234 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result210, size231);
            align233 = $tmp234;
            panda$core$Bit $tmp235 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align233, ((panda$core$Int64) { 0 }));
            if ($tmp235.value) {
            {
                panda$core$Int64 $tmp236 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size231, align233);
                panda$core$Int64 $tmp237 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result210, $tmp236);
                result210 = $tmp237;
            }
            }
            panda$core$Int64 $tmp238 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result210, size231);
            panda$core$Bit $tmp239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp238, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp239.value);
            panda$core$Int64 $tmp240 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result210, size231);
            result210 = $tmp240;
        }
        goto $l219;
        $l220:;
    }
    panda$core$Bit $tmp241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp241.value) {
    {
        panda$core$Int64 $tmp242 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result210, ((panda$core$Int64) { 1 }));
        result210 = $tmp242;
    }
    }
    return result210;
}
void org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp243 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp243.value) {
    {
        return;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp244 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    return $tmp244;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp245.value) {
    {
        panda$core$Object* $tmp246 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp247 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp246));
        return $tmp247;
    }
    }
    panda$core$String* $tmp249 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s248, $tmp249);
    panda$core$String* $tmp252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp250, &$s251);
    return $tmp252;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp253 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp253, &$s254);
    return $tmp255;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType256;
    panda$core$MutableString* result258;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp275;
    org$pandalanguage$pandac$Type* $tmp257 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedType256 = $tmp257;
    panda$core$MutableString* $tmp259 = (panda$core$MutableString*) malloc(40);
    $tmp259->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp259->refCount.value = 1;
    panda$core$MutableString$init($tmp259);
    result258 = $tmp259;
    panda$core$Int64 $tmp261 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType256->subtypes);
    panda$core$Int64 $tmp262 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp261, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp263 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType256->subtypes, $tmp262);
    panda$core$String* $tmp264 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp263));
    panda$core$MutableString$append$panda$core$String(result258, $tmp264);
    panda$core$MutableString$append$panda$core$String(result258, &$s265);
    panda$core$Bit $tmp266 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp266.value);
    panda$core$String* $tmp268 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s267, $tmp268);
    panda$core$String* $tmp271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp269, &$s270);
    panda$core$MutableString$append$panda$core$String(result258, $tmp271);
    panda$core$Bit $tmp272 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_m->owner);
    if ($tmp272.value) {
    {
        panda$core$MutableString$append$panda$core$String(result258, &$s273);
    }
    }
    panda$core$MutableString$append$panda$core$String(result258, &$s274);
    panda$core$Int64 $tmp276 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType256->subtypes);
    panda$core$Int64 $tmp277 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp276, ((panda$core$Int64) { 1 }));
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp275, ((panda$core$Int64) { 0 }), $tmp277, ((panda$core$Bit) { false }));
    int64_t $tmp279 = $tmp275.min.value;
    panda$core$Int64 i278 = { $tmp279 };
    int64_t $tmp281 = $tmp275.max.value;
    bool $tmp282 = $tmp275.inclusive.value;
    bool $tmp289 = 1 > 0;
    if ($tmp289) goto $l287; else goto $l288;
    $l287:;
    if ($tmp282) goto $l290; else goto $l291;
    $l290:;
    if ($tmp279 <= $tmp281) goto $l283; else goto $l285;
    $l291:;
    if ($tmp279 < $tmp281) goto $l283; else goto $l285;
    $l288:;
    if ($tmp282) goto $l292; else goto $l293;
    $l292:;
    if ($tmp279 >= $tmp281) goto $l283; else goto $l285;
    $l293:;
    if ($tmp279 > $tmp281) goto $l283; else goto $l285;
    $l283:;
    {
        panda$core$MutableString$append$panda$core$String(result258, &$s295);
        panda$core$Object* $tmp296 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType256->subtypes, i278);
        panda$core$String* $tmp297 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp296));
        panda$core$MutableString$append$panda$core$String(result258, $tmp297);
    }
    $l286:;
    if ($tmp289) goto $l299; else goto $l300;
    $l299:;
    int64_t $tmp301 = $tmp281 - i278.value;
    if ($tmp282) goto $l302; else goto $l303;
    $l302:;
    if ($tmp301 >= 1) goto $l298; else goto $l285;
    $l303:;
    if ($tmp301 > 1) goto $l298; else goto $l285;
    $l300:;
    int64_t $tmp305 = i278.value - $tmp281;
    if ($tmp282) goto $l306; else goto $l307;
    $l306:;
    if ($tmp305 >= -1) goto $l298; else goto $l285;
    $l307:;
    if ($tmp305 > -1) goto $l298; else goto $l285;
    $l298:;
    i278.value += 1;
    goto $l283;
    $l285:;
    panda$core$MutableString$append$panda$core$String(result258, &$s309);
    panda$core$String* $tmp310 = panda$core$MutableString$convert$R$panda$core$String(result258);
    return $tmp310;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp311.value);
    panda$core$Object* $tmp313 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp314 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp313));
    panda$core$String* $tmp315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s312, $tmp314);
    panda$core$String* $tmp317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp315, &$s316);
    return $tmp317;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces318;
    panda$core$String* previous321;
    panda$collections$Iterator* intfType$Iter323;
    org$pandalanguage$pandac$Type* intfType335;
    org$pandalanguage$pandac$ClassDecl* intf340;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC342;
    panda$collections$ListView* methods344;
    panda$core$String* name346;
    panda$core$MutableString* result356;
    panda$core$String* separator385;
    panda$collections$Iterator* m$Iter387;
    org$pandalanguage$pandac$MethodDecl* m399;
    org$pandalanguage$pandac$Type* $tmp319 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp320 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp319);
    interfaces318 = $tmp320;
    previous321 = &$s322;
    {
        ITable* $tmp324 = ((panda$collections$Iterable*) interfaces318)->$class->itable;
        while ($tmp324->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp324 = $tmp324->next;
        }
        $fn326 $tmp325 = $tmp324->methods[0];
        panda$collections$Iterator* $tmp327 = $tmp325(((panda$collections$Iterable*) interfaces318));
        intfType$Iter323 = $tmp327;
        $l328:;
        ITable* $tmp330 = intfType$Iter323->$class->itable;
        while ($tmp330->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp330 = $tmp330->next;
        }
        $fn332 $tmp331 = $tmp330->methods[0];
        panda$core$Bit $tmp333 = $tmp331(intfType$Iter323);
        panda$core$Bit $tmp334 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp333);
        if (!$tmp334.value) goto $l329;
        {
            ITable* $tmp336 = intfType$Iter323->$class->itable;
            while ($tmp336->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp336 = $tmp336->next;
            }
            $fn338 $tmp337 = $tmp336->methods[1];
            panda$core$Object* $tmp339 = $tmp337(intfType$Iter323);
            intfType335 = ((org$pandalanguage$pandac$Type*) $tmp339);
            org$pandalanguage$pandac$ClassDecl* $tmp341 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType335);
            intf340 = $tmp341;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp343 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf340);
            intfCC342 = $tmp343;
            panda$collections$ListView* $tmp345 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType335);
            methods344 = $tmp345;
            panda$core$String* $tmp348 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s347, $tmp348);
            panda$core$String* $tmp351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp349, &$s350);
            panda$core$String* $tmp352 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf340)->name);
            panda$core$String* $tmp353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp351, $tmp352);
            panda$core$String* $tmp355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp353, &$s354);
            name346 = $tmp355;
            panda$core$MutableString* $tmp357 = (panda$core$MutableString*) malloc(40);
            $tmp357->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp357->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp360 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp361 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp360);
            panda$core$String* $tmp362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s359, $tmp361);
            panda$core$String* $tmp364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp362, &$s363);
            ITable* $tmp366 = ((panda$collections$CollectionView*) methods344)->$class->itable;
            while ($tmp366->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp366 = $tmp366->next;
            }
            $fn368 $tmp367 = $tmp366->methods[0];
            panda$core$Int64 $tmp369 = $tmp367(((panda$collections$CollectionView*) methods344));
            panda$core$String* $tmp370 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s365, ((panda$core$Object*) wrap_panda$core$Int64($tmp369)));
            panda$core$String* $tmp372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp370, &$s371);
            panda$core$String* $tmp373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp372, name346);
            panda$core$String* $tmp375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp373, &$s374);
            panda$core$String* $tmp376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp364, $tmp375);
            panda$core$String* $tmp378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s377, intfCC342->name);
            panda$core$String* $tmp380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp378, &$s379);
            panda$core$String* $tmp381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp380, previous321);
            panda$core$String* $tmp383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp381, &$s382);
            panda$core$String* $tmp384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp376, $tmp383);
            panda$core$MutableString$init$panda$core$String($tmp357, $tmp384);
            result356 = $tmp357;
            separator385 = &$s386;
            {
                ITable* $tmp388 = ((panda$collections$Iterable*) methods344)->$class->itable;
                while ($tmp388->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp388 = $tmp388->next;
                }
                $fn390 $tmp389 = $tmp388->methods[0];
                panda$collections$Iterator* $tmp391 = $tmp389(((panda$collections$Iterable*) methods344));
                m$Iter387 = $tmp391;
                $l392:;
                ITable* $tmp394 = m$Iter387->$class->itable;
                while ($tmp394->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp394 = $tmp394->next;
                }
                $fn396 $tmp395 = $tmp394->methods[0];
                panda$core$Bit $tmp397 = $tmp395(m$Iter387);
                panda$core$Bit $tmp398 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp397);
                if (!$tmp398.value) goto $l393;
                {
                    ITable* $tmp400 = m$Iter387->$class->itable;
                    while ($tmp400->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp400 = $tmp400->next;
                    }
                    $fn402 $tmp401 = $tmp400->methods[1];
                    panda$core$Object* $tmp403 = $tmp401(m$Iter387);
                    m399 = ((org$pandalanguage$pandac$MethodDecl*) $tmp403);
                    panda$core$MutableString$append$panda$core$String(result356, separator385);
                    separator385 = &$s404;
                    panda$core$Bit $tmp405 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m399->annotations);
                    if ($tmp405.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result356, &$s406);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp407 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m399);
                        panda$core$MutableString$append$panda$core$String(result356, $tmp407);
                    }
                    }
                }
                goto $l392;
                $l393:;
            }
            panda$core$MutableString$append$panda$core$String(result356, &$s408);
            (($fn409) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result356));
            panda$core$String* $tmp411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s410, name346);
            panda$core$String* $tmp413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp411, &$s412);
            previous321 = $tmp413;
        }
        goto $l328;
        $l329:;
    }
    return previous321;
}
org$pandalanguage$pandac$CCodeGenerator$MethodShim* org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer414;
    panda$io$IndentedOutputStream* out417;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* found420;
    org$pandalanguage$pandac$Type* effectiveReturnType428;
    panda$core$String* resultName432;
    panda$core$MutableString* resultType436;
    panda$core$String* self_t448;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp456;
    panda$core$String* pType475;
    panda$collections$Array* casts502;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp505;
    panda$core$String* p524;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp560;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* result610;
    panda$io$MemoryOutputStream* $tmp415 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp415->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp415->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp415);
    outBuffer414 = $tmp415;
    panda$io$IndentedOutputStream* $tmp418 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp418->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp418->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp418, ((panda$io$OutputStream*) outBuffer414));
    out417 = $tmp418;
    panda$core$Object* $tmp421 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    found420 = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp421);
    if (((panda$core$Bit) { found420 != NULL }).value) {
    {
        return found420;
    }
    }
    panda$core$Bit $tmp422 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_effective);
    PANDA_ASSERT($tmp422.value);
    panda$core$Int64 $tmp423 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp424 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Int64 $tmp425 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp424, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp423, $tmp425);
    PANDA_ASSERT($tmp426.value);
    panda$core$Bit $tmp427 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_raw);
    PANDA_ASSERT($tmp427.value);
    panda$core$Int64 $tmp429 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp430 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp429, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp431 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, $tmp430);
    effectiveReturnType428 = ((org$pandalanguage$pandac$Type*) $tmp431);
    panda$core$String* $tmp433 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp433, &$s434);
    resultName432 = $tmp435;
    panda$core$MutableString* $tmp437 = (panda$core$MutableString*) malloc(40);
    $tmp437->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp437->refCount.value = 1;
    panda$core$String* $tmp439 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType428);
    panda$core$MutableString$init$panda$core$String($tmp437, $tmp439);
    resultType436 = $tmp437;
    panda$core$String* $tmp441 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s440, ((panda$core$Object*) resultType436));
    panda$core$String* $tmp443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp441, &$s442);
    panda$core$String* $tmp444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp443, resultName432);
    panda$core$String* $tmp446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp444, &$s445);
    (($fn447) ((panda$io$OutputStream*) out417)->$class->vtable[16])(((panda$io$OutputStream*) out417), $tmp446);
    panda$core$String* $tmp449 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t448 = $tmp449;
    panda$core$String* $tmp451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s450, self_t448);
    panda$core$String* $tmp453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp451, &$s452);
    (($fn454) ((panda$io$OutputStream*) out417)->$class->vtable[16])(((panda$io$OutputStream*) out417), $tmp453);
    panda$core$MutableString$append$panda$core$String(resultType436, &$s455);
    panda$core$MutableString$append$panda$core$String(resultType436, self_t448);
    panda$core$Int64 $tmp457 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp456, ((panda$core$Int64) { 0 }), $tmp457, ((panda$core$Bit) { false }));
    int64_t $tmp459 = $tmp456.min.value;
    panda$core$Int64 i458 = { $tmp459 };
    int64_t $tmp461 = $tmp456.max.value;
    bool $tmp462 = $tmp456.inclusive.value;
    bool $tmp469 = 1 > 0;
    if ($tmp469) goto $l467; else goto $l468;
    $l467:;
    if ($tmp462) goto $l470; else goto $l471;
    $l470:;
    if ($tmp459 <= $tmp461) goto $l463; else goto $l465;
    $l471:;
    if ($tmp459 < $tmp461) goto $l463; else goto $l465;
    $l468:;
    if ($tmp462) goto $l472; else goto $l473;
    $l472:;
    if ($tmp459 >= $tmp461) goto $l463; else goto $l465;
    $l473:;
    if ($tmp459 > $tmp461) goto $l463; else goto $l465;
    $l463:;
    {
        panda$core$Object* $tmp476 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i458);
        panda$core$String* $tmp477 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp476));
        pType475 = $tmp477;
        panda$core$MutableString$append$panda$core$String(resultType436, &$s478);
        panda$core$MutableString$append$panda$core$String(resultType436, pType475);
        panda$core$String* $tmp480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s479, pType475);
        panda$core$String* $tmp482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp480, &$s481);
        panda$core$String* $tmp483 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp482, ((panda$core$Object*) wrap_panda$core$Int64(i458)));
        panda$core$String* $tmp485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp483, &$s484);
        (($fn486) ((panda$io$OutputStream*) out417)->$class->vtable[16])(((panda$io$OutputStream*) out417), $tmp485);
    }
    $l466:;
    if ($tmp469) goto $l488; else goto $l489;
    $l488:;
    int64_t $tmp490 = $tmp461 - i458.value;
    if ($tmp462) goto $l491; else goto $l492;
    $l491:;
    if ($tmp490 >= 1) goto $l487; else goto $l465;
    $l492:;
    if ($tmp490 > 1) goto $l487; else goto $l465;
    $l489:;
    int64_t $tmp494 = i458.value - $tmp461;
    if ($tmp462) goto $l495; else goto $l496;
    $l495:;
    if ($tmp494 >= -1) goto $l487; else goto $l465;
    $l496:;
    if ($tmp494 > -1) goto $l487; else goto $l465;
    $l487:;
    i458.value += 1;
    goto $l463;
    $l465:;
    (($fn499) ((panda$io$OutputStream*) out417)->$class->vtable[19])(((panda$io$OutputStream*) out417), &$s498);
    panda$core$Int64 $tmp500 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(out417->level, ((panda$core$Int64) { 1 }));
    out417->level = $tmp500;
    panda$core$MutableString$append$panda$core$String(resultType436, &$s501);
    panda$collections$Array* $tmp503 = (panda$collections$Array*) malloc(40);
    $tmp503->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp503->refCount.value = 1;
    panda$collections$Array$init($tmp503);
    casts502 = $tmp503;
    panda$core$Int64 $tmp506 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp505, ((panda$core$Int64) { 0 }), $tmp506, ((panda$core$Bit) { false }));
    int64_t $tmp508 = $tmp505.min.value;
    panda$core$Int64 i507 = { $tmp508 };
    int64_t $tmp510 = $tmp505.max.value;
    bool $tmp511 = $tmp505.inclusive.value;
    bool $tmp518 = 1 > 0;
    if ($tmp518) goto $l516; else goto $l517;
    $l516:;
    if ($tmp511) goto $l519; else goto $l520;
    $l519:;
    if ($tmp508 <= $tmp510) goto $l512; else goto $l514;
    $l520:;
    if ($tmp508 < $tmp510) goto $l512; else goto $l514;
    $l517:;
    if ($tmp511) goto $l521; else goto $l522;
    $l521:;
    if ($tmp508 >= $tmp510) goto $l512; else goto $l514;
    $l522:;
    if ($tmp508 > $tmp510) goto $l512; else goto $l514;
    $l512:;
    {
        panda$core$String* $tmp526 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s525, ((panda$core$Object*) wrap_panda$core$Int64(i507)));
        panda$core$String* $tmp528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp526, &$s527);
        p524 = $tmp528;
        panda$core$Object* $tmp529 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i507);
        panda$core$Object* $tmp530 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i507);
        panda$core$Bit $tmp531 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp529)->type, ((org$pandalanguage$pandac$Type*) $tmp530));
        if ($tmp531.value) {
        {
            panda$core$Object* $tmp532 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i507);
            panda$core$Object* $tmp533 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i507);
            panda$core$String* $tmp534 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p524, ((org$pandalanguage$pandac$Type*) $tmp532), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp533)->type, out417);
            panda$collections$Array$add$panda$collections$Array$T(casts502, ((panda$core$Object*) $tmp534));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts502, ((panda$core$Object*) p524));
        }
        }
    }
    $l515:;
    if ($tmp518) goto $l536; else goto $l537;
    $l536:;
    int64_t $tmp538 = $tmp510 - i507.value;
    if ($tmp511) goto $l539; else goto $l540;
    $l539:;
    if ($tmp538 >= 1) goto $l535; else goto $l514;
    $l540:;
    if ($tmp538 > 1) goto $l535; else goto $l514;
    $l537:;
    int64_t $tmp542 = i507.value - $tmp510;
    if ($tmp511) goto $l543; else goto $l544;
    $l543:;
    if ($tmp542 >= -1) goto $l535; else goto $l514;
    $l544:;
    if ($tmp542 > -1) goto $l535; else goto $l514;
    $l535:;
    i507.value += 1;
    goto $l512;
    $l514:;
    org$pandalanguage$pandac$Type* $tmp546 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp547 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp546);
    if ($tmp547.value) {
    {
        panda$core$String* $tmp549 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
        panda$core$String* $tmp550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s548, $tmp549);
        panda$core$String* $tmp552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp550, &$s551);
        (($fn553) ((panda$io$OutputStream*) out417)->$class->vtable[16])(((panda$io$OutputStream*) out417), $tmp552);
    }
    }
    panda$core$String* $tmp555 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s554, $tmp555);
    panda$core$String* $tmp558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp556, &$s557);
    (($fn559) ((panda$io$OutputStream*) out417)->$class->vtable[16])(((panda$io$OutputStream*) out417), $tmp558);
    panda$core$Int64 $tmp561 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp560, ((panda$core$Int64) { 0 }), $tmp561, ((panda$core$Bit) { false }));
    int64_t $tmp563 = $tmp560.min.value;
    panda$core$Int64 i562 = { $tmp563 };
    int64_t $tmp565 = $tmp560.max.value;
    bool $tmp566 = $tmp560.inclusive.value;
    bool $tmp573 = 1 > 0;
    if ($tmp573) goto $l571; else goto $l572;
    $l571:;
    if ($tmp566) goto $l574; else goto $l575;
    $l574:;
    if ($tmp563 <= $tmp565) goto $l567; else goto $l569;
    $l575:;
    if ($tmp563 < $tmp565) goto $l567; else goto $l569;
    $l572:;
    if ($tmp566) goto $l576; else goto $l577;
    $l576:;
    if ($tmp563 >= $tmp565) goto $l567; else goto $l569;
    $l577:;
    if ($tmp563 > $tmp565) goto $l567; else goto $l569;
    $l567:;
    {
        panda$core$Object* $tmp580 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts502, i562);
        panda$core$String* $tmp581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s579, ((panda$core$String*) $tmp580));
        panda$core$String* $tmp583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp581, &$s582);
        (($fn584) ((panda$io$OutputStream*) out417)->$class->vtable[16])(((panda$io$OutputStream*) out417), $tmp583);
    }
    $l570:;
    if ($tmp573) goto $l586; else goto $l587;
    $l586:;
    int64_t $tmp588 = $tmp565 - i562.value;
    if ($tmp566) goto $l589; else goto $l590;
    $l589:;
    if ($tmp588 >= 1) goto $l585; else goto $l569;
    $l590:;
    if ($tmp588 > 1) goto $l585; else goto $l569;
    $l587:;
    int64_t $tmp592 = i562.value - $tmp565;
    if ($tmp566) goto $l593; else goto $l594;
    $l593:;
    if ($tmp592 >= -1) goto $l585; else goto $l569;
    $l594:;
    if ($tmp592 > -1) goto $l585; else goto $l569;
    $l585:;
    i562.value += 1;
    goto $l567;
    $l569:;
    (($fn597) ((panda$io$OutputStream*) out417)->$class->vtable[19])(((panda$io$OutputStream*) out417), &$s596);
    org$pandalanguage$pandac$Type* $tmp598 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp599 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp598);
    if ($tmp599.value) {
    {
        panda$core$String* $tmp602 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, &$s601, p_raw->returnType, effectiveReturnType428, out417);
        panda$core$String* $tmp603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s600, $tmp602);
        panda$core$String* $tmp605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp603, &$s604);
        (($fn606) ((panda$io$OutputStream*) out417)->$class->vtable[19])(((panda$io$OutputStream*) out417), $tmp605);
    }
    }
    panda$core$Int64 $tmp607 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(out417->level, ((panda$core$Int64) { 1 }));
    out417->level = $tmp607;
    (($fn609) ((panda$io$OutputStream*) out417)->$class->vtable[19])(((panda$io$OutputStream*) out417), &$s608);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp611 = (org$pandalanguage$pandac$CCodeGenerator$MethodShim*) malloc(32);
    $tmp611->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$MethodShim$class;
    $tmp611->refCount.value = 1;
    panda$core$String* $tmp613 = panda$core$MutableString$convert$R$panda$core$String(resultType436);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp611, resultName432, $tmp613);
    result610 = $tmp611;
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result610));
    (($fn614) p_rawOut->$class->vtable[15])(p_rawOut, ((panda$core$Object*) outBuffer414));
    return result610;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* oldMethod616;
    panda$core$String* result617;
    panda$core$String* selfType623;
    org$pandalanguage$pandac$Type* actualMethodType641;
    org$pandalanguage$pandac$Type* inheritedMethodType643;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp645;
    panda$collections$Array* parameters689;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp692;
    panda$collections$Array* children726;
    org$pandalanguage$pandac$Position $tmp731;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp743;
    panda$core$Bit $tmp615 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp615.value);
    oldMethod616 = self->currentMethod;
    self->currentMethod = p_m;
    panda$core$String* $tmp619 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s618, $tmp619);
    panda$core$String* $tmp622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp620, &$s621);
    result617 = $tmp622;
    panda$core$String* $tmp625 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s624, $tmp625);
    panda$core$String* $tmp628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp626, &$s627);
    selfType623 = $tmp628;
    panda$core$String* $tmp630 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s629, $tmp630);
    panda$core$String* $tmp633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp631, &$s632);
    panda$core$String* $tmp634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp633, result617);
    panda$core$String* $tmp636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp634, &$s635);
    panda$core$String* $tmp637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp636, selfType623);
    panda$core$String* $tmp639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp637, &$s638);
    (($fn640) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp639);
    org$pandalanguage$pandac$Type* $tmp642 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    actualMethodType641 = $tmp642;
    org$pandalanguage$pandac$Type* $tmp644 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedMethodType643 = $tmp644;
    panda$core$Int64 $tmp646 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp645, ((panda$core$Int64) { 0 }), $tmp646, ((panda$core$Bit) { false }));
    int64_t $tmp648 = $tmp645.min.value;
    panda$core$Int64 i647 = { $tmp648 };
    int64_t $tmp650 = $tmp645.max.value;
    bool $tmp651 = $tmp645.inclusive.value;
    bool $tmp658 = 1 > 0;
    if ($tmp658) goto $l656; else goto $l657;
    $l656:;
    if ($tmp651) goto $l659; else goto $l660;
    $l659:;
    if ($tmp648 <= $tmp650) goto $l652; else goto $l654;
    $l660:;
    if ($tmp648 < $tmp650) goto $l652; else goto $l654;
    $l657:;
    if ($tmp651) goto $l661; else goto $l662;
    $l661:;
    if ($tmp648 >= $tmp650) goto $l652; else goto $l654;
    $l662:;
    if ($tmp648 > $tmp650) goto $l652; else goto $l654;
    $l652:;
    {
        panda$core$Object* $tmp665 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType643->subtypes, i647);
        panda$core$String* $tmp666 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp665));
        panda$core$String* $tmp667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s664, $tmp666);
        panda$core$String* $tmp669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp667, &$s668);
        panda$core$Object* $tmp670 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i647);
        panda$core$String* $tmp671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp669, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp670)->name);
        panda$core$String* $tmp673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp671, &$s672);
        (($fn674) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp673);
    }
    $l655:;
    if ($tmp658) goto $l676; else goto $l677;
    $l676:;
    int64_t $tmp678 = $tmp650 - i647.value;
    if ($tmp651) goto $l679; else goto $l680;
    $l679:;
    if ($tmp678 >= 1) goto $l675; else goto $l654;
    $l680:;
    if ($tmp678 > 1) goto $l675; else goto $l654;
    $l677:;
    int64_t $tmp682 = i647.value - $tmp650;
    if ($tmp651) goto $l683; else goto $l684;
    $l683:;
    if ($tmp682 >= -1) goto $l675; else goto $l654;
    $l684:;
    if ($tmp682 > -1) goto $l675; else goto $l654;
    $l675:;
    i647.value += 1;
    goto $l652;
    $l654:;
    (($fn687) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s686);
    panda$core$Int64 $tmp688 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp688;
    panda$collections$Array* $tmp690 = (panda$collections$Array*) malloc(40);
    $tmp690->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp690->refCount.value = 1;
    panda$collections$Array$init($tmp690);
    parameters689 = $tmp690;
    panda$core$Int64 $tmp693 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp692, ((panda$core$Int64) { 0 }), $tmp693, ((panda$core$Bit) { false }));
    int64_t $tmp695 = $tmp692.min.value;
    panda$core$Int64 i694 = { $tmp695 };
    int64_t $tmp697 = $tmp692.max.value;
    bool $tmp698 = $tmp692.inclusive.value;
    bool $tmp705 = 1 > 0;
    if ($tmp705) goto $l703; else goto $l704;
    $l703:;
    if ($tmp698) goto $l706; else goto $l707;
    $l706:;
    if ($tmp695 <= $tmp697) goto $l699; else goto $l701;
    $l707:;
    if ($tmp695 < $tmp697) goto $l699; else goto $l701;
    $l704:;
    if ($tmp698) goto $l708; else goto $l709;
    $l708:;
    if ($tmp695 >= $tmp697) goto $l699; else goto $l701;
    $l709:;
    if ($tmp695 > $tmp697) goto $l699; else goto $l701;
    $l699:;
    {
        panda$core$Object* $tmp711 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i694);
        panda$core$Object* $tmp712 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType643->subtypes, i694);
        panda$core$Object* $tmp713 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType641->subtypes, i694);
        panda$core$String* $tmp714 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp711)->name, ((org$pandalanguage$pandac$Type*) $tmp712), ((org$pandalanguage$pandac$Type*) $tmp713), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters689, ((panda$core$Object*) $tmp714));
    }
    $l702:;
    if ($tmp705) goto $l716; else goto $l717;
    $l716:;
    int64_t $tmp718 = $tmp697 - i694.value;
    if ($tmp698) goto $l719; else goto $l720;
    $l719:;
    if ($tmp718 >= 1) goto $l715; else goto $l701;
    $l720:;
    if ($tmp718 > 1) goto $l715; else goto $l701;
    $l717:;
    int64_t $tmp722 = i694.value - $tmp697;
    if ($tmp698) goto $l723; else goto $l724;
    $l723:;
    if ($tmp722 >= -1) goto $l715; else goto $l701;
    $l724:;
    if ($tmp722 > -1) goto $l715; else goto $l701;
    $l715:;
    i694.value += 1;
    goto $l699;
    $l701:;
    panda$collections$Array* $tmp727 = (panda$collections$Array*) malloc(40);
    $tmp727->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp727->refCount.value = 1;
    panda$collections$Array$init($tmp727);
    children726 = $tmp727;
    org$pandalanguage$pandac$IRNode* $tmp729 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp729->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp729->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp731);
    org$pandalanguage$pandac$Type* $tmp732 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp729, ((panda$core$Int64) { 1025 }), $tmp731, $tmp732);
    panda$collections$Array$add$panda$collections$Array$T(children726, ((panda$core$Object*) $tmp729));
    org$pandalanguage$pandac$Type* $tmp733 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp734 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp733);
    if ($tmp734.value) {
    {
        (($fn736) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s735);
    }
    }
    panda$core$String* $tmp738 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s737, $tmp738);
    panda$core$String* $tmp741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp739, &$s740);
    (($fn742) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp741);
    panda$core$Int64 $tmp744 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp743, ((panda$core$Int64) { 0 }), $tmp744, ((panda$core$Bit) { false }));
    int64_t $tmp746 = $tmp743.min.value;
    panda$core$Int64 i745 = { $tmp746 };
    int64_t $tmp748 = $tmp743.max.value;
    bool $tmp749 = $tmp743.inclusive.value;
    bool $tmp756 = 1 > 0;
    if ($tmp756) goto $l754; else goto $l755;
    $l754:;
    if ($tmp749) goto $l757; else goto $l758;
    $l757:;
    if ($tmp746 <= $tmp748) goto $l750; else goto $l752;
    $l758:;
    if ($tmp746 < $tmp748) goto $l750; else goto $l752;
    $l755:;
    if ($tmp749) goto $l759; else goto $l760;
    $l759:;
    if ($tmp746 >= $tmp748) goto $l750; else goto $l752;
    $l760:;
    if ($tmp746 > $tmp748) goto $l750; else goto $l752;
    $l750:;
    {
        panda$core$Object* $tmp763 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters689, i745);
        panda$core$String* $tmp764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s762, ((panda$core$String*) $tmp763));
        panda$core$String* $tmp766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp764, &$s765);
        (($fn767) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp766);
    }
    $l753:;
    if ($tmp756) goto $l769; else goto $l770;
    $l769:;
    int64_t $tmp771 = $tmp748 - i745.value;
    if ($tmp749) goto $l772; else goto $l773;
    $l772:;
    if ($tmp771 >= 1) goto $l768; else goto $l752;
    $l773:;
    if ($tmp771 > 1) goto $l768; else goto $l752;
    $l770:;
    int64_t $tmp775 = i745.value - $tmp748;
    if ($tmp749) goto $l776; else goto $l777;
    $l776:;
    if ($tmp775 >= -1) goto $l768; else goto $l752;
    $l777:;
    if ($tmp775 > -1) goto $l768; else goto $l752;
    $l768:;
    i745.value += 1;
    goto $l750;
    $l752:;
    (($fn780) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s779);
    panda$core$Int64 $tmp781 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp781;
    (($fn783) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s782);
    self->currentMethod = oldMethod616;
    return result617;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces784;
    panda$core$String* previous787;
    panda$collections$Iterator* intfType$Iter789;
    org$pandalanguage$pandac$Type* intfType801;
    org$pandalanguage$pandac$ClassDecl* intf806;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC808;
    panda$collections$ListView* methods810;
    panda$core$String* name812;
    panda$core$MutableString* result822;
    panda$core$String* separator856;
    panda$collections$Iterator* m$Iter858;
    org$pandalanguage$pandac$MethodDecl* m870;
    org$pandalanguage$pandac$Type* $tmp785 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp786 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp785);
    interfaces784 = $tmp786;
    previous787 = &$s788;
    {
        ITable* $tmp790 = ((panda$collections$Iterable*) interfaces784)->$class->itable;
        while ($tmp790->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp790 = $tmp790->next;
        }
        $fn792 $tmp791 = $tmp790->methods[0];
        panda$collections$Iterator* $tmp793 = $tmp791(((panda$collections$Iterable*) interfaces784));
        intfType$Iter789 = $tmp793;
        $l794:;
        ITable* $tmp796 = intfType$Iter789->$class->itable;
        while ($tmp796->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp796 = $tmp796->next;
        }
        $fn798 $tmp797 = $tmp796->methods[0];
        panda$core$Bit $tmp799 = $tmp797(intfType$Iter789);
        panda$core$Bit $tmp800 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp799);
        if (!$tmp800.value) goto $l795;
        {
            ITable* $tmp802 = intfType$Iter789->$class->itable;
            while ($tmp802->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp802 = $tmp802->next;
            }
            $fn804 $tmp803 = $tmp802->methods[1];
            panda$core$Object* $tmp805 = $tmp803(intfType$Iter789);
            intfType801 = ((org$pandalanguage$pandac$Type*) $tmp805);
            org$pandalanguage$pandac$ClassDecl* $tmp807 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType801);
            intf806 = $tmp807;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp809 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf806);
            intfCC808 = $tmp809;
            panda$collections$ListView* $tmp811 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType801);
            methods810 = $tmp811;
            panda$core$String* $tmp814 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s813, $tmp814);
            panda$core$String* $tmp817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp815, &$s816);
            panda$core$String* $tmp818 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf806)->name);
            panda$core$String* $tmp819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp817, $tmp818);
            panda$core$String* $tmp821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp819, &$s820);
            name812 = $tmp821;
            panda$core$MutableString* $tmp823 = (panda$core$MutableString*) malloc(40);
            $tmp823->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp823->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp826 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp827 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp826);
            panda$core$String* $tmp828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s825, $tmp827);
            panda$core$String* $tmp830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp828, &$s829);
            ITable* $tmp832 = ((panda$collections$CollectionView*) methods810)->$class->itable;
            while ($tmp832->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp832 = $tmp832->next;
            }
            $fn834 $tmp833 = $tmp832->methods[0];
            panda$core$Int64 $tmp835 = $tmp833(((panda$collections$CollectionView*) methods810));
            panda$core$String* $tmp836 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s831, ((panda$core$Object*) wrap_panda$core$Int64($tmp835)));
            panda$core$String* $tmp838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp836, &$s837);
            panda$core$String* $tmp839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp838, name812);
            panda$core$String* $tmp841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp839, &$s840);
            panda$core$String* $tmp842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp830, $tmp841);
            org$pandalanguage$pandac$Type* $tmp844 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp845 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp844);
            panda$core$String* $tmp846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s843, $tmp845);
            panda$core$String* $tmp848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp846, &$s847);
            panda$core$String* $tmp849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp848, intfCC808->name);
            panda$core$String* $tmp851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp849, &$s850);
            panda$core$String* $tmp852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp851, previous787);
            panda$core$String* $tmp854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp852, &$s853);
            panda$core$String* $tmp855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp842, $tmp854);
            panda$core$MutableString$init$panda$core$String($tmp823, $tmp855);
            result822 = $tmp823;
            separator856 = &$s857;
            {
                ITable* $tmp859 = ((panda$collections$Iterable*) methods810)->$class->itable;
                while ($tmp859->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp859 = $tmp859->next;
                }
                $fn861 $tmp860 = $tmp859->methods[0];
                panda$collections$Iterator* $tmp862 = $tmp860(((panda$collections$Iterable*) methods810));
                m$Iter858 = $tmp862;
                $l863:;
                ITable* $tmp865 = m$Iter858->$class->itable;
                while ($tmp865->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp865 = $tmp865->next;
                }
                $fn867 $tmp866 = $tmp865->methods[0];
                panda$core$Bit $tmp868 = $tmp866(m$Iter858);
                panda$core$Bit $tmp869 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp868);
                if (!$tmp869.value) goto $l864;
                {
                    ITable* $tmp871 = m$Iter858->$class->itable;
                    while ($tmp871->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp871 = $tmp871->next;
                    }
                    $fn873 $tmp872 = $tmp871->methods[1];
                    panda$core$Object* $tmp874 = $tmp872(m$Iter858);
                    m870 = ((org$pandalanguage$pandac$MethodDecl*) $tmp874);
                    panda$core$MutableString$append$panda$core$String(result822, separator856);
                    separator856 = &$s875;
                    panda$core$Bit $tmp876 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m870->annotations);
                    if ($tmp876.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result822, &$s877);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp878 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m870, self->wrapperShims);
                        panda$core$MutableString$append$panda$core$String(result822, $tmp878);
                    }
                    }
                }
                goto $l863;
                $l864:;
            }
            panda$core$MutableString$append$panda$core$String(result822, &$s879);
            (($fn880) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result822));
            panda$core$String* $tmp882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s881, name812);
            panda$core$String* $tmp884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp882, &$s883);
            previous787 = $tmp884;
        }
        goto $l794;
        $l795:;
    }
    return previous787;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $tmp885 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self->hCodeGen, p_m);
    return $tmp885;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result887;
    org$pandalanguage$pandac$Type* declared888;
    org$pandalanguage$pandac$Type* inherited891;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* shim894;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    panda$core$Bit $tmp886 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
    if ($tmp886.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp889 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp890 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp889);
    declared888 = $tmp890;
    org$pandalanguage$pandac$Type* $tmp892 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited891 = $tmp892;
    panda$core$Bit $tmp893 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared888, inherited891);
    if ($tmp893.value) {
    {
        org$pandalanguage$pandac$Type* $tmp895 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp896 = org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(self, p_m, $tmp895, ((panda$io$OutputStream*) self->shims));
        shim894 = $tmp896;
        result887 = shim894->name;
    }
    }
    else {
    {
        panda$core$String* $tmp897 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        result887 = $tmp897;
    }
    }
    return result887;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result898;
    panda$core$String* type900;
    panda$collections$ListView* vtable912;
    panda$core$String* superPtr923;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC924;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant932;
    panda$core$MutableString* code936;
    panda$core$String* separator958;
    panda$collections$Iterator* m$Iter960;
    org$pandalanguage$pandac$MethodDecl* m972;
    panda$core$Object* $tmp899 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result898 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp899);
    if (((panda$core$Bit) { result898 == NULL }).value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        panda$core$Bit $tmp901 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp901.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp902 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp902->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp902->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp905 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp906 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp905)->name);
            panda$core$String* $tmp907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s904, $tmp906);
            panda$core$String* $tmp909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp907, &$s908);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp902, $tmp909, &$s910);
            result898 = $tmp902;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result898));
            panda$core$Object* $tmp911 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
            return ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp911);
        }
        }
        panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) p_cl));
        panda$collections$ListView* $tmp913 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable912 = $tmp913;
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp914 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
        $tmp914->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
        $tmp914->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp917 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp918 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp917)->name);
        panda$core$String* $tmp919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s916, $tmp918);
        panda$core$String* $tmp921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp919, &$s920);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp914, $tmp921, &$s922);
        result898 = $tmp914;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result898));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp925 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp926 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp925);
            superCC924 = $tmp926;
            panda$core$String* $tmp928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s927, superCC924->name);
            panda$core$String* $tmp930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp928, &$s929);
            superPtr923 = $tmp930;
        }
        }
        else {
        {
            superPtr923 = &$s931;
        }
        }
        org$pandalanguage$pandac$Type* $tmp933 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp934 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp933);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp935 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp934);
        clConstant932 = $tmp935;
        panda$core$MutableString* $tmp937 = (panda$core$MutableString*) malloc(40);
        $tmp937->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp937->refCount.value = 1;
        panda$core$String* $tmp940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s939, result898->name);
        panda$core$String* $tmp942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp940, &$s941);
        panda$core$String* $tmp943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp942, result898->name);
        panda$core$String* $tmp945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp943, &$s944);
        panda$core$String* $tmp947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s946, clConstant932->name);
        panda$core$String* $tmp949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp947, &$s948);
        panda$core$String* $tmp950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp949, superPtr923);
        panda$core$String* $tmp952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp950, &$s951);
        panda$core$String* $tmp953 = org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp952, $tmp953);
        panda$core$String* $tmp956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp954, &$s955);
        panda$core$String* $tmp957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp945, $tmp956);
        panda$core$MutableString$init$panda$core$String($tmp937, $tmp957);
        code936 = $tmp937;
        separator958 = &$s959;
        {
            ITable* $tmp961 = ((panda$collections$Iterable*) vtable912)->$class->itable;
            while ($tmp961->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp961 = $tmp961->next;
            }
            $fn963 $tmp962 = $tmp961->methods[0];
            panda$collections$Iterator* $tmp964 = $tmp962(((panda$collections$Iterable*) vtable912));
            m$Iter960 = $tmp964;
            $l965:;
            ITable* $tmp967 = m$Iter960->$class->itable;
            while ($tmp967->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp967 = $tmp967->next;
            }
            $fn969 $tmp968 = $tmp967->methods[0];
            panda$core$Bit $tmp970 = $tmp968(m$Iter960);
            panda$core$Bit $tmp971 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp970);
            if (!$tmp971.value) goto $l966;
            {
                ITable* $tmp973 = m$Iter960->$class->itable;
                while ($tmp973->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp973 = $tmp973->next;
                }
                $fn975 $tmp974 = $tmp973->methods[1];
                panda$core$Object* $tmp976 = $tmp974(m$Iter960);
                m972 = ((org$pandalanguage$pandac$MethodDecl*) $tmp976);
                panda$core$MutableString$append$panda$core$String(code936, separator958);
                panda$core$Bit $tmp977 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m972->annotations);
                if ($tmp977.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code936, &$s978);
                }
                }
                else {
                {
                    panda$core$String* $tmp979 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m972);
                    panda$core$MutableString$append$panda$core$String(code936, $tmp979);
                }
                }
                separator958 = &$s980;
            }
            goto $l965;
            $l966:;
        }
        panda$core$MutableString$append$panda$core$String(code936, &$s981);
        (($fn982) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code936));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    }
    }
    return result898;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name983;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result989;
    panda$core$String* type993;
    org$pandalanguage$pandac$ClassDecl* value1005;
    panda$collections$ListView* valueVTable1008;
    panda$collections$ListView* vtable1018;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC1020;
    panda$core$String* superCast1023;
    panda$core$String* itable1028;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant1030;
    panda$core$MutableString* code1034;
    panda$core$String* separator1055;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp1057;
    org$pandalanguage$pandac$MethodDecl* m1079;
    panda$core$String* methodName1084;
    panda$core$String* $tmp985 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s984, $tmp985);
    panda$core$String* $tmp988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp986, &$s987);
    name983 = $tmp988;
    panda$core$Object* $tmp990 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name983));
    result989 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp990);
    if (((panda$core$Bit) { result989 == NULL }).value) {
    {
        panda$core$Bit $tmp991 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp991.value) {
        {
            org$pandalanguage$pandac$Type* $tmp992 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp992);
            type993 = &$s994;
            panda$core$String* $tmp996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s995, name983);
            panda$core$String* $tmp998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp996, &$s997);
            panda$core$String* $tmp999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp998, type993);
            panda$core$String* $tmp1001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp999, &$s1000);
            (($fn1002) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1001);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1003 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp1003->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp1003->refCount.value = 1;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1003, name983, type993);
            result989 = $tmp1003;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp1006 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1007 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1006);
            value1005 = $tmp1007;
            panda$collections$ListView* $tmp1009 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value1005);
            valueVTable1008 = $tmp1009;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1010 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp1010->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp1010->refCount.value = 1;
            panda$core$String* $tmp1013 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1012, $tmp1013);
            panda$core$String* $tmp1016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1014, &$s1015);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1010, $tmp1016, &$s1017);
            result989 = $tmp1010;
            panda$collections$ListView* $tmp1019 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable1018 = $tmp1019;
            org$pandalanguage$pandac$ClassDecl* $tmp1021 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1022 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp1021);
            superCC1020 = $tmp1022;
            panda$core$String* $tmp1025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1024, superCC1020->name);
            panda$core$String* $tmp1027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1025, &$s1026);
            superCast1023 = $tmp1027;
            panda$core$String* $tmp1029 = org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable1028 = $tmp1029;
            org$pandalanguage$pandac$Type* $tmp1031 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1032 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1031);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1033 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp1032);
            clConstant1030 = $tmp1033;
            panda$core$MutableString* $tmp1035 = (panda$core$MutableString*) malloc(40);
            $tmp1035->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1035->refCount.value = 1;
            panda$core$String* $tmp1038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1037, result989->name);
            panda$core$String* $tmp1040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1038, &$s1039);
            panda$core$String* $tmp1041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1040, result989->name);
            panda$core$String* $tmp1043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1041, &$s1042);
            panda$core$String* $tmp1045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1044, clConstant1030->name);
            panda$core$String* $tmp1047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1045, &$s1046);
            panda$core$String* $tmp1048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1047, superCast1023);
            panda$core$String* $tmp1050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1048, &$s1049);
            panda$core$String* $tmp1051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1050, itable1028);
            panda$core$String* $tmp1053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1051, &$s1052);
            panda$core$String* $tmp1054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1043, $tmp1053);
            panda$core$MutableString$init$panda$core$String($tmp1035, $tmp1054);
            code1034 = $tmp1035;
            separator1055 = &$s1056;
            ITable* $tmp1058 = ((panda$collections$CollectionView*) valueVTable1008)->$class->itable;
            while ($tmp1058->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1058 = $tmp1058->next;
            }
            $fn1060 $tmp1059 = $tmp1058->methods[0];
            panda$core$Int64 $tmp1061 = $tmp1059(((panda$collections$CollectionView*) valueVTable1008));
            panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1057, ((panda$core$Int64) { 0 }), $tmp1061, ((panda$core$Bit) { false }));
            int64_t $tmp1063 = $tmp1057.min.value;
            panda$core$Int64 i1062 = { $tmp1063 };
            int64_t $tmp1065 = $tmp1057.max.value;
            bool $tmp1066 = $tmp1057.inclusive.value;
            bool $tmp1073 = 1 > 0;
            if ($tmp1073) goto $l1071; else goto $l1072;
            $l1071:;
            if ($tmp1066) goto $l1074; else goto $l1075;
            $l1074:;
            if ($tmp1063 <= $tmp1065) goto $l1067; else goto $l1069;
            $l1075:;
            if ($tmp1063 < $tmp1065) goto $l1067; else goto $l1069;
            $l1072:;
            if ($tmp1066) goto $l1076; else goto $l1077;
            $l1076:;
            if ($tmp1063 >= $tmp1065) goto $l1067; else goto $l1069;
            $l1077:;
            if ($tmp1063 > $tmp1065) goto $l1067; else goto $l1069;
            $l1067:;
            {
                ITable* $tmp1080 = vtable1018->$class->itable;
                while ($tmp1080->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1080 = $tmp1080->next;
                }
                $fn1082 $tmp1081 = $tmp1080->methods[0];
                panda$core$Object* $tmp1083 = $tmp1081(vtable1018, i1062);
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
                panda$core$String* $tmp1089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1088, separator1055);
                panda$core$String* $tmp1091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1089, &$s1090);
                panda$core$String* $tmp1092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1091, methodName1084);
                panda$core$String* $tmp1094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1092, &$s1093);
                panda$core$MutableString$append$panda$core$String(code1034, $tmp1094);
                separator1055 = &$s1095;
            }
            $l1070:;
            if ($tmp1073) goto $l1097; else goto $l1098;
            $l1097:;
            int64_t $tmp1099 = $tmp1065 - i1062.value;
            if ($tmp1066) goto $l1100; else goto $l1101;
            $l1100:;
            if ($tmp1099 >= 1) goto $l1096; else goto $l1069;
            $l1101:;
            if ($tmp1099 > 1) goto $l1096; else goto $l1069;
            $l1098:;
            int64_t $tmp1103 = i1062.value - $tmp1065;
            if ($tmp1066) goto $l1104; else goto $l1105;
            $l1104:;
            if ($tmp1103 >= -1) goto $l1096; else goto $l1069;
            $l1105:;
            if ($tmp1103 > -1) goto $l1096; else goto $l1069;
            $l1096:;
            i1062.value += 1;
            goto $l1067;
            $l1069:;
            panda$core$MutableString$append$panda$core$String(code1034, &$s1107);
            (($fn1108) ((panda$io$OutputStream*) self->types)->$class->vtable[15])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code1034));
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name983), ((panda$core$Object*) result989));
    }
    }
    return result989;
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
    panda$core$Bit $tmp1124 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1124.value);
    panda$core$String* $tmp1126 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1125, $tmp1126);
    panda$core$String* $tmp1129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1127, &$s1128);
    panda$core$String* $tmp1130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1129, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1130, &$s1131);
    return $tmp1132;
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
    panda$core$String* result1133;
    panda$core$String* leftRef1135;
    panda$core$String* falseLabel1149;
    panda$core$String* rightRef1159;
    panda$core$String* $tmp1134 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1133 = $tmp1134;
    panda$core$String* $tmp1136 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1135 = $tmp1136;
    org$pandalanguage$pandac$Type* $tmp1137 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1138 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1137);
    if ($tmp1138.value) {
    {
        panda$core$String* $tmp1140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1135, &$s1139);
        leftRef1135 = $tmp1140;
    }
    }
    panda$core$String* $tmp1142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1141, result1133);
    panda$core$String* $tmp1144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1142, &$s1143);
    panda$core$String* $tmp1145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1144, leftRef1135);
    panda$core$String* $tmp1147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1145, &$s1146);
    (($fn1148) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1147);
    panda$core$String* $tmp1150 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel1149 = $tmp1150;
    panda$core$String* $tmp1152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1151, result1133);
    panda$core$String* $tmp1154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1152, &$s1153);
    panda$core$String* $tmp1155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1154, falseLabel1149);
    panda$core$String* $tmp1157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1155, &$s1156);
    (($fn1158) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1157);
    panda$core$String* $tmp1160 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1159 = $tmp1160;
    org$pandalanguage$pandac$Type* $tmp1161 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1162 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1161);
    if ($tmp1162.value) {
    {
        panda$core$String* $tmp1164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1159, &$s1163);
        rightRef1159 = $tmp1164;
    }
    }
    panda$core$String* $tmp1166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1165, result1133);
    panda$core$String* $tmp1168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1166, &$s1167);
    panda$core$String* $tmp1169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1168, rightRef1159);
    panda$core$String* $tmp1171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1169, &$s1170);
    (($fn1172) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1171);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel1149, p_out);
    return result1133;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1173;
    panda$core$String* leftRef1175;
    panda$core$String* trueLabel1189;
    panda$core$String* rightRef1199;
    panda$core$String* $tmp1174 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1173 = $tmp1174;
    panda$core$String* $tmp1176 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1175 = $tmp1176;
    org$pandalanguage$pandac$Type* $tmp1177 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1178 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1177);
    if ($tmp1178.value) {
    {
        panda$core$String* $tmp1180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1175, &$s1179);
        leftRef1175 = $tmp1180;
    }
    }
    panda$core$String* $tmp1182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1181, result1173);
    panda$core$String* $tmp1184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1182, &$s1183);
    panda$core$String* $tmp1185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1184, leftRef1175);
    panda$core$String* $tmp1187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1185, &$s1186);
    (($fn1188) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1187);
    panda$core$String* $tmp1190 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel1189 = $tmp1190;
    panda$core$String* $tmp1192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1191, result1173);
    panda$core$String* $tmp1194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1192, &$s1193);
    panda$core$String* $tmp1195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1194, trueLabel1189);
    panda$core$String* $tmp1197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1195, &$s1196);
    (($fn1198) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1197);
    panda$core$String* $tmp1200 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1199 = $tmp1200;
    org$pandalanguage$pandac$Type* $tmp1201 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1202 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1201);
    if ($tmp1202.value) {
    {
        panda$core$String* $tmp1204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1199, &$s1203);
        rightRef1199 = $tmp1204;
    }
    }
    panda$core$String* $tmp1206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1205, result1173);
    panda$core$String* $tmp1208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1206, &$s1207);
    panda$core$String* $tmp1209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1208, rightRef1199);
    panda$core$String* $tmp1211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1209, &$s1210);
    (($fn1212) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1211);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel1189, p_out);
    return result1173;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Int64 p_cl, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* cOp1213;
    panda$core$Bit logical1214;
    panda$core$String* result1232;
    logical1214 = ((panda$core$Bit) { false });
    switch (p_op.value) {
        case 51:
        {
            cOp1213 = &$s1215;
        }
        break;
        case 52:
        {
            cOp1213 = &$s1216;
        }
        break;
        case 53:
        {
            cOp1213 = &$s1217;
        }
        break;
        case 55:
        {
            cOp1213 = &$s1218;
        }
        break;
        case 54:
        {
            cOp1213 = &$s1219;
        }
        break;
        case 56:
        {
            cOp1213 = &$s1220;
        }
        break;
        case 72:
        {
            cOp1213 = &$s1221;
        }
        break;
        case 1:
        {
            cOp1213 = &$s1222;
        }
        break;
        case 67:
        {
            cOp1213 = &$s1223;
        }
        break;
        case 69:
        {
            cOp1213 = &$s1224;
        }
        break;
        case 70:
        case 71:
        {
            cOp1213 = &$s1225;
        }
        break;
        case 58:
        {
            cOp1213 = &$s1226;
            logical1214 = ((panda$core$Bit) { true });
        }
        break;
        case 59:
        {
            cOp1213 = &$s1227;
            logical1214 = ((panda$core$Bit) { true });
        }
        break;
        case 63:
        {
            cOp1213 = &$s1228;
            logical1214 = ((panda$core$Bit) { true });
        }
        break;
        case 62:
        {
            cOp1213 = &$s1229;
            logical1214 = ((panda$core$Bit) { true });
        }
        break;
        case 65:
        {
            cOp1213 = &$s1230;
            logical1214 = ((panda$core$Bit) { true });
        }
        break;
        case 64:
        {
            logical1214 = ((panda$core$Bit) { true });
            cOp1213 = &$s1231;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$String* $tmp1233 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1232 = $tmp1233;
    if (logical1214.value) {
    {
        (($fn1235) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s1234);
    }
    }
    else {
    {
        panda$core$String* $tmp1237 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp1238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1236, $tmp1237);
        panda$core$String* $tmp1240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1238, &$s1239);
        (($fn1241) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1240);
    }
    }
    panda$core$String* $tmp1243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1242, result1232);
    panda$core$String* $tmp1245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1243, &$s1244);
    panda$core$String* $tmp1246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1245, p_leftRef);
    panda$core$String* $tmp1248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1246, &$s1247);
    panda$core$String* $tmp1249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1248, cOp1213);
    panda$core$String* $tmp1251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1249, &$s1250);
    panda$core$String* $tmp1252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1251, p_rightRef);
    panda$core$String* $tmp1254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1252, &$s1253);
    (($fn1255) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1254);
    return result1232;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1256;
    panda$core$String* rightRef1258;
    panda$core$String* $tmp1257 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1256 = $tmp1257;
    panda$core$String* $tmp1259 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1258 = $tmp1259;
    panda$core$String* $tmp1261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1260, leftRef1256);
    panda$core$String* $tmp1263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1261, &$s1262);
    panda$core$String* $tmp1264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1263, rightRef1258);
    panda$core$String* $tmp1266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1264, &$s1265);
    return $tmp1266;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1267;
    panda$core$String* rightRef1269;
    panda$core$String* $tmp1268 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1267 = $tmp1268;
    panda$core$String* $tmp1270 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1269 = $tmp1270;
    panda$core$String* $tmp1272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1271, leftRef1267);
    panda$core$String* $tmp1274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1272, &$s1273);
    panda$core$String* $tmp1275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1274, rightRef1269);
    panda$core$String* $tmp1277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1275, &$s1276);
    return $tmp1277;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1283;
    panda$core$String* rightRef1285;
    panda$core$Bit $tmp1278 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, p_right->type);
    PANDA_ASSERT($tmp1278.value);
    switch (p_op.value) {
        case 66:
        {
            panda$core$String* $tmp1279 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1279;
        }
        break;
        case 68:
        {
            panda$core$String* $tmp1280 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1280;
        }
        break;
        case 60:
        {
            panda$core$String* $tmp1281 = org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1281;
        }
        break;
        case 61:
        {
            panda$core$String* $tmp1282 = org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1282;
        }
        break;
        default:
        {
            panda$core$String* $tmp1284 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1283 = $tmp1284;
            panda$core$String* $tmp1286 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1285 = $tmp1286;
            panda$core$Int64 $tmp1287 = org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_left->type);
            panda$core$String* $tmp1288 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1287, p_left->type, leftRef1283, p_op, rightRef1285, p_out);
            return $tmp1288;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp1289.value);
    panda$core$Int64 $tmp1290 = panda$collections$Array$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp1291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1290, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp1291.value);
    panda$core$Object* $tmp1292 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp1293 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1294 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1292), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp1293), p_out);
    return $tmp1294;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1295;
    panda$core$Int64 index1297;
    panda$collections$ListView* vtable1298;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp1300;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1296 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1295 = $tmp1296;
    index1297 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1299 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1298 = $tmp1299;
    ITable* $tmp1301 = ((panda$collections$CollectionView*) vtable1298)->$class->itable;
    while ($tmp1301->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1301 = $tmp1301->next;
    }
    $fn1303 $tmp1302 = $tmp1301->methods[0];
    panda$core$Int64 $tmp1304 = $tmp1302(((panda$collections$CollectionView*) vtable1298));
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1300, ((panda$core$Int64) { 0 }), $tmp1304, ((panda$core$Bit) { false }));
    int64_t $tmp1306 = $tmp1300.min.value;
    panda$core$Int64 i1305 = { $tmp1306 };
    int64_t $tmp1308 = $tmp1300.max.value;
    bool $tmp1309 = $tmp1300.inclusive.value;
    bool $tmp1316 = 1 > 0;
    if ($tmp1316) goto $l1314; else goto $l1315;
    $l1314:;
    if ($tmp1309) goto $l1317; else goto $l1318;
    $l1317:;
    if ($tmp1306 <= $tmp1308) goto $l1310; else goto $l1312;
    $l1318:;
    if ($tmp1306 < $tmp1308) goto $l1310; else goto $l1312;
    $l1315:;
    if ($tmp1309) goto $l1319; else goto $l1320;
    $l1319:;
    if ($tmp1306 >= $tmp1308) goto $l1310; else goto $l1312;
    $l1320:;
    if ($tmp1306 > $tmp1308) goto $l1310; else goto $l1312;
    $l1310:;
    {
        ITable* $tmp1322 = vtable1298->$class->itable;
        while ($tmp1322->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1322 = $tmp1322->next;
        }
        $fn1324 $tmp1323 = $tmp1322->methods[0];
        panda$core$Object* $tmp1325 = $tmp1323(vtable1298, i1305);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1325)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1297 = i1305;
            goto $l1312;
        }
        }
    }
    $l1313:;
    if ($tmp1316) goto $l1327; else goto $l1328;
    $l1327:;
    int64_t $tmp1329 = $tmp1308 - i1305.value;
    if ($tmp1309) goto $l1330; else goto $l1331;
    $l1330:;
    if ($tmp1329 >= 1) goto $l1326; else goto $l1312;
    $l1331:;
    if ($tmp1329 > 1) goto $l1326; else goto $l1312;
    $l1328:;
    int64_t $tmp1333 = i1305.value - $tmp1308;
    if ($tmp1309) goto $l1334; else goto $l1335;
    $l1334:;
    if ($tmp1333 >= -1) goto $l1326; else goto $l1312;
    $l1335:;
    if ($tmp1333 > -1) goto $l1326; else goto $l1312;
    $l1326:;
    i1305.value += 1;
    goto $l1310;
    $l1312:;
    panda$core$Bit $tmp1337 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1297, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1337.value);
    org$pandalanguage$pandac$Type* $tmp1339 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1340 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1339);
    panda$core$String* $tmp1341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1338, $tmp1340);
    panda$core$String* $tmp1343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1341, &$s1342);
    panda$core$String* $tmp1344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1343, p_target);
    panda$core$String* $tmp1346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1344, &$s1345);
    panda$core$String* $tmp1347 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1346, ((panda$core$Object*) wrap_panda$core$Int64(index1297)));
    panda$core$String* $tmp1349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1347, &$s1348);
    return $tmp1349;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1350;
    panda$core$String* itable1352;
    panda$core$Int64 index1382;
    panda$collections$ListView* vtable1383;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp1385;
    panda$core$String* result1431;
    panda$core$String* methodType1433;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1351 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1350 = $tmp1351;
    panda$core$String* $tmp1353 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    itable1352 = $tmp1353;
    panda$core$String* $tmp1355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1354, itable1352);
    panda$core$String* $tmp1357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1355, &$s1356);
    panda$core$String* $tmp1358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1357, p_target);
    panda$core$String* $tmp1360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1358, &$s1359);
    (($fn1361) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1360);
    panda$core$String* $tmp1363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1362, itable1352);
    panda$core$String* $tmp1365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1363, &$s1364);
    panda$core$String* $tmp1366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1365, cc1350->name);
    panda$core$String* $tmp1368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1366, &$s1367);
    (($fn1369) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1368);
    panda$core$Int64 $tmp1370 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1370;
    panda$core$String* $tmp1372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1371, itable1352);
    panda$core$String* $tmp1374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1372, &$s1373);
    panda$core$String* $tmp1375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1374, itable1352);
    panda$core$String* $tmp1377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1375, &$s1376);
    (($fn1378) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1377);
    panda$core$Int64 $tmp1379 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1379;
    (($fn1381) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1380);
    index1382 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1384 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1383 = $tmp1384;
    ITable* $tmp1386 = ((panda$collections$CollectionView*) vtable1383)->$class->itable;
    while ($tmp1386->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1386 = $tmp1386->next;
    }
    $fn1388 $tmp1387 = $tmp1386->methods[0];
    panda$core$Int64 $tmp1389 = $tmp1387(((panda$collections$CollectionView*) vtable1383));
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1385, ((panda$core$Int64) { 0 }), $tmp1389, ((panda$core$Bit) { false }));
    int64_t $tmp1391 = $tmp1385.min.value;
    panda$core$Int64 i1390 = { $tmp1391 };
    int64_t $tmp1393 = $tmp1385.max.value;
    bool $tmp1394 = $tmp1385.inclusive.value;
    bool $tmp1401 = 1 > 0;
    if ($tmp1401) goto $l1399; else goto $l1400;
    $l1399:;
    if ($tmp1394) goto $l1402; else goto $l1403;
    $l1402:;
    if ($tmp1391 <= $tmp1393) goto $l1395; else goto $l1397;
    $l1403:;
    if ($tmp1391 < $tmp1393) goto $l1395; else goto $l1397;
    $l1400:;
    if ($tmp1394) goto $l1404; else goto $l1405;
    $l1404:;
    if ($tmp1391 >= $tmp1393) goto $l1395; else goto $l1397;
    $l1405:;
    if ($tmp1391 > $tmp1393) goto $l1395; else goto $l1397;
    $l1395:;
    {
        ITable* $tmp1407 = vtable1383->$class->itable;
        while ($tmp1407->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1407 = $tmp1407->next;
        }
        $fn1409 $tmp1408 = $tmp1407->methods[0];
        panda$core$Object* $tmp1410 = $tmp1408(vtable1383, i1390);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1410)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1382 = i1390;
            goto $l1397;
        }
        }
    }
    $l1398:;
    if ($tmp1401) goto $l1412; else goto $l1413;
    $l1412:;
    int64_t $tmp1414 = $tmp1393 - i1390.value;
    if ($tmp1394) goto $l1415; else goto $l1416;
    $l1415:;
    if ($tmp1414 >= 1) goto $l1411; else goto $l1397;
    $l1416:;
    if ($tmp1414 > 1) goto $l1411; else goto $l1397;
    $l1413:;
    int64_t $tmp1418 = i1390.value - $tmp1393;
    if ($tmp1394) goto $l1419; else goto $l1420;
    $l1419:;
    if ($tmp1418 >= -1) goto $l1411; else goto $l1397;
    $l1420:;
    if ($tmp1418 > -1) goto $l1411; else goto $l1397;
    $l1411:;
    i1390.value += 1;
    goto $l1395;
    $l1397:;
    org$pandalanguage$pandac$Type* $tmp1422 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp1423 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1422);
    panda$collections$ListView* $tmp1424 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp1423);
    ITable* $tmp1425 = ((panda$collections$CollectionView*) $tmp1424)->$class->itable;
    while ($tmp1425->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1425 = $tmp1425->next;
    }
    $fn1427 $tmp1426 = $tmp1425->methods[0];
    panda$core$Int64 $tmp1428 = $tmp1426(((panda$collections$CollectionView*) $tmp1424));
    panda$core$Int64 $tmp1429 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index1382, $tmp1428);
    index1382 = $tmp1429;
    panda$core$Bit $tmp1430 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1382, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1430.value);
    panda$core$String* $tmp1432 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1431 = $tmp1432;
    org$pandalanguage$pandac$Type* $tmp1434 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1435 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1434);
    methodType1433 = $tmp1435;
    panda$core$String* $tmp1437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1436, methodType1433);
    panda$core$String* $tmp1439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1437, &$s1438);
    panda$core$String* $tmp1440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1439, result1431);
    panda$core$String* $tmp1442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1440, &$s1441);
    panda$core$String* $tmp1443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1442, itable1352);
    panda$core$String* $tmp1445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1443, &$s1444);
    panda$core$String* $tmp1446 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1445, ((panda$core$Object*) wrap_panda$core$Int64(index1382)));
    panda$core$String* $tmp1448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1446, &$s1447);
    (($fn1449) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1448);
    return result1431;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1451 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp1450 = $tmp1451.value;
    if (!$tmp1450) goto $l1452;
    panda$core$Bit $tmp1453 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp1450 = $tmp1453.value;
    $l1452:;
    panda$core$Bit $tmp1454 = { $tmp1450 };
    if ($tmp1454.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp1455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp1455.value) {
        {
            panda$core$String* $tmp1456 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1456;
        }
        }
        else {
        {
            panda$core$String* $tmp1457 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1457;
        }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp1458 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
        if ($tmp1458.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
        }
        }
        panda$core$String* $tmp1459 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp1459;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m1460;
    panda$core$String* $match$862_91461;
    panda$core$String* count1466;
    panda$core$Int64 elementSize1472;
    panda$core$String* ptr1491;
    panda$core$String* ptr1502;
    panda$core$String* index1505;
    panda$core$String* ptr1519;
    panda$core$String* count1522;
    panda$core$Int64 elementSize1528;
    panda$core$String* ptr1550;
    panda$core$String* offset1553;
    m1460 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$862_91461 = ((org$pandalanguage$pandac$Symbol*) m1460->value)->name;
        panda$core$Bit $tmp1463 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91461, &$s1462);
        if ($tmp1463.value) {
        {
            panda$core$Int64 $tmp1464 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1464, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1465.value);
            panda$core$Object* $tmp1467 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1468 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1467), p_out);
            count1466 = $tmp1468;
            org$pandalanguage$pandac$Type* $tmp1469 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1460);
            panda$core$Int64 $tmp1470 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1469->subtypes);
            panda$core$Bit $tmp1471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1470, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1471.value);
            org$pandalanguage$pandac$Type* $tmp1473 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1460);
            panda$core$Object* $tmp1474 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1473->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1475 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1474));
            elementSize1472 = $tmp1475;
            panda$core$String* $tmp1477 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1476, $tmp1477);
            panda$core$String* $tmp1480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1478, &$s1479);
            panda$core$String* $tmp1481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1480, count1466);
            panda$core$String* $tmp1483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1481, &$s1482);
            panda$core$String* $tmp1484 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1483, ((panda$core$Object*) wrap_panda$core$Int64(elementSize1472)));
            panda$core$String* $tmp1486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1484, &$s1485);
            return $tmp1486;
        }
        }
        else {
        panda$core$Bit $tmp1488 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91461, &$s1487);
        if ($tmp1488.value) {
        {
            panda$core$Int64 $tmp1489 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1489, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1490.value);
            panda$core$Object* $tmp1492 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1493 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1492), p_out);
            ptr1491 = $tmp1493;
            panda$core$String* $tmp1495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1494, ptr1491);
            panda$core$String* $tmp1497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1495, &$s1496);
            return $tmp1497;
        }
        }
        else {
        panda$core$Bit $tmp1499 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91461, &$s1498);
        if ($tmp1499.value) {
        {
            panda$core$Int64 $tmp1500 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1500, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1501.value);
            panda$core$Object* $tmp1503 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1504 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1503), p_out);
            ptr1502 = $tmp1504;
            panda$core$Object* $tmp1506 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1507 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1506), p_out);
            index1505 = $tmp1507;
            panda$core$String* $tmp1509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1508, ptr1502);
            panda$core$String* $tmp1511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1509, &$s1510);
            panda$core$String* $tmp1512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1511, index1505);
            panda$core$String* $tmp1514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1512, &$s1513);
            return $tmp1514;
        }
        }
        else {
        panda$core$Bit $tmp1516 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91461, &$s1515);
        if ($tmp1516.value) {
        {
            panda$core$Int64 $tmp1517 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1517, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1518.value);
            panda$core$Object* $tmp1520 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1521 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1520), p_out);
            ptr1519 = $tmp1521;
            panda$core$Object* $tmp1523 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1524 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1523), p_out);
            count1522 = $tmp1524;
            org$pandalanguage$pandac$Type* $tmp1525 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1460);
            panda$core$Int64 $tmp1526 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1525->subtypes);
            panda$core$Bit $tmp1527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1526, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1527.value);
            org$pandalanguage$pandac$Type* $tmp1529 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1460);
            panda$core$Object* $tmp1530 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1529->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1531 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1530));
            elementSize1528 = $tmp1531;
            panda$core$String* $tmp1533 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1532, $tmp1533);
            panda$core$String* $tmp1536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1534, &$s1535);
            panda$core$String* $tmp1537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1536, ptr1519);
            panda$core$String* $tmp1539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1537, &$s1538);
            panda$core$String* $tmp1540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1539, count1522);
            panda$core$String* $tmp1542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1540, &$s1541);
            panda$core$String* $tmp1543 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1542, ((panda$core$Object*) wrap_panda$core$Int64(elementSize1528)));
            panda$core$String* $tmp1545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1543, &$s1544);
            return $tmp1545;
        }
        }
        else {
        panda$core$Bit $tmp1547 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91461, &$s1546);
        if ($tmp1547.value) {
        {
            panda$core$Int64 $tmp1548 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1548, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1549.value);
            panda$core$Object* $tmp1551 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1552 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1551), p_out);
            ptr1550 = $tmp1552;
            panda$core$Object* $tmp1554 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1555 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1554), p_out);
            offset1553 = $tmp1555;
            panda$core$String* $tmp1557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1556, ptr1550);
            panda$core$String* $tmp1559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1557, &$s1558);
            panda$core$String* $tmp1560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1559, offset1553);
            panda$core$String* $tmp1562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1560, &$s1561);
            return $tmp1562;
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
    org$pandalanguage$pandac$MethodDecl* m1564;
    panda$core$String* bit1575;
    panda$core$String* result1579;
    panda$core$String* bit1593;
    panda$core$String* result1597;
    panda$collections$Array* args1607;
    org$pandalanguage$pandac$Type* actualMethodType1611;
    panda$core$String* actualResultType1612;
    panda$core$Bit isSuper1613;
    panda$core$Int64 offset1633;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp1638;
    panda$core$String* arg1657;
    panda$core$String* target1683;
    panda$core$String* methodRef1687;
    panda$core$Bit indirect1689;
    panda$core$String* result1691;
    panda$core$String* separator1693;
    panda$core$String* indirectVar1695;
    panda$collections$Iterator* arg$Iter1724;
    panda$core$String* arg1736;
    panda$core$Bit $tmp1563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp1563.value);
    m1564 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp1566 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1564->owner)->name, &$s1565);
    if ($tmp1566.value) {
    {
        panda$core$String* $tmp1567 = org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp1567;
    }
    }
    panda$core$Bit $tmp1568 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1564->owner);
    if ($tmp1568.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1564);
    }
    }
    panda$core$Bit $tmp1570 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1564->owner)->name, &$s1569);
    if ($tmp1570.value) {
    {
        panda$core$Bit $tmp1572 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1564)->name, &$s1571);
        if ($tmp1572.value) {
        {
            panda$core$Int64 $tmp1573 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1573, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1574.value);
            panda$core$Object* $tmp1576 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1577 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1578 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1576), ((org$pandalanguage$pandac$IRNode*) $tmp1577), p_out);
            bit1575 = $tmp1578;
            panda$core$String* $tmp1580 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1579 = $tmp1580;
            panda$core$String* $tmp1582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1581, result1579);
            panda$core$String* $tmp1584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1582, &$s1583);
            panda$core$String* $tmp1585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1584, bit1575);
            panda$core$String* $tmp1587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1585, &$s1586);
            (($fn1588) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1587);
            return result1579;
        }
        }
        panda$core$Bit $tmp1590 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1564)->name, &$s1589);
        if ($tmp1590.value) {
        {
            panda$core$Int64 $tmp1591 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1591, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1592.value);
            panda$core$Object* $tmp1594 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1595 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1596 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1594), ((org$pandalanguage$pandac$IRNode*) $tmp1595), p_out);
            bit1593 = $tmp1596;
            panda$core$String* $tmp1598 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1597 = $tmp1598;
            panda$core$String* $tmp1600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1599, result1597);
            panda$core$String* $tmp1602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1600, &$s1601);
            panda$core$String* $tmp1603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1602, bit1593);
            panda$core$String* $tmp1605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1603, &$s1604);
            (($fn1606) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1605);
            return result1597;
        }
        }
    }
    }
    panda$collections$Array* $tmp1608 = (panda$collections$Array*) malloc(40);
    $tmp1608->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1608->refCount.value = 1;
    panda$core$Int64 $tmp1610 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp1608, $tmp1610);
    args1607 = $tmp1608;
    panda$core$Int64 $tmp1615 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp1616 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1615, ((panda$core$Int64) { 1 }));
    bool $tmp1614 = $tmp1616.value;
    if (!$tmp1614) goto $l1617;
    panda$core$Object* $tmp1618 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp1619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1618)->kind, ((panda$core$Int64) { 1024 }));
    $tmp1614 = $tmp1619.value;
    $l1617:;
    panda$core$Bit $tmp1620 = { $tmp1614 };
    isSuper1613 = $tmp1620;
    panda$core$Bit $tmp1622 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper1613);
    bool $tmp1621 = $tmp1622.value;
    if (!$tmp1621) goto $l1623;
    panda$core$Bit $tmp1624 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m1564);
    $tmp1621 = $tmp1624.value;
    $l1623:;
    panda$core$Bit $tmp1625 = { $tmp1621 };
    if ($tmp1625.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1626 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1564);
        actualMethodType1611 = $tmp1626;
        panda$core$Int64 $tmp1627 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1611->subtypes);
        panda$core$Int64 $tmp1628 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1627, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1629 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1611->subtypes, $tmp1628);
        panda$core$String* $tmp1630 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1629));
        actualResultType1612 = $tmp1630;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp1631 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1564);
        actualMethodType1611 = $tmp1631;
        panda$core$String* $tmp1632 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType1612 = $tmp1632;
    }
    }
    panda$core$Int64 $tmp1634 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp1635 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1611->subtypes);
    panda$core$Int64 $tmp1636 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1634, $tmp1635);
    panda$core$Int64 $tmp1637 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1636, ((panda$core$Int64) { 1 }));
    offset1633 = $tmp1637;
    panda$core$Int64 $tmp1639 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1638, ((panda$core$Int64) { 0 }), $tmp1639, ((panda$core$Bit) { false }));
    int64_t $tmp1641 = $tmp1638.min.value;
    panda$core$Int64 i1640 = { $tmp1641 };
    int64_t $tmp1643 = $tmp1638.max.value;
    bool $tmp1644 = $tmp1638.inclusive.value;
    bool $tmp1651 = 1 > 0;
    if ($tmp1651) goto $l1649; else goto $l1650;
    $l1649:;
    if ($tmp1644) goto $l1652; else goto $l1653;
    $l1652:;
    if ($tmp1641 <= $tmp1643) goto $l1645; else goto $l1647;
    $l1653:;
    if ($tmp1641 < $tmp1643) goto $l1645; else goto $l1647;
    $l1650:;
    if ($tmp1644) goto $l1654; else goto $l1655;
    $l1654:;
    if ($tmp1641 >= $tmp1643) goto $l1645; else goto $l1647;
    $l1655:;
    if ($tmp1641 > $tmp1643) goto $l1645; else goto $l1647;
    $l1645:;
    {
        panda$core$Object* $tmp1658 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1640);
        panda$core$String* $tmp1659 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1658), p_out);
        arg1657 = $tmp1659;
        panda$core$Bit $tmp1661 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i1640, offset1633);
        bool $tmp1660 = $tmp1661.value;
        if (!$tmp1660) goto $l1662;
        panda$core$Int64 $tmp1663 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1640, offset1633);
        panda$core$Object* $tmp1664 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1611->subtypes, $tmp1663);
        panda$core$Object* $tmp1665 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1640);
        panda$core$Bit $tmp1666 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1664), ((org$pandalanguage$pandac$IRNode*) $tmp1665)->type);
        $tmp1660 = $tmp1666.value;
        $l1662:;
        panda$core$Bit $tmp1667 = { $tmp1660 };
        if ($tmp1667.value) {
        {
            panda$core$Object* $tmp1668 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1640);
            panda$core$Int64 $tmp1669 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1640, offset1633);
            panda$core$Object* $tmp1670 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1611->subtypes, $tmp1669);
            panda$core$String* $tmp1671 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg1657, ((org$pandalanguage$pandac$IRNode*) $tmp1668)->type, ((org$pandalanguage$pandac$Type*) $tmp1670), p_out);
            arg1657 = $tmp1671;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args1607, ((panda$core$Object*) arg1657));
    }
    $l1648:;
    if ($tmp1651) goto $l1673; else goto $l1674;
    $l1673:;
    int64_t $tmp1675 = $tmp1643 - i1640.value;
    if ($tmp1644) goto $l1676; else goto $l1677;
    $l1676:;
    if ($tmp1675 >= 1) goto $l1672; else goto $l1647;
    $l1677:;
    if ($tmp1675 > 1) goto $l1672; else goto $l1647;
    $l1674:;
    int64_t $tmp1679 = i1640.value - $tmp1643;
    if ($tmp1644) goto $l1680; else goto $l1681;
    $l1680:;
    if ($tmp1679 >= -1) goto $l1672; else goto $l1647;
    $l1681:;
    if ($tmp1679 > -1) goto $l1672; else goto $l1647;
    $l1672:;
    i1640.value += 1;
    goto $l1645;
    $l1647:;
    panda$core$Int64 $tmp1684 = panda$collections$Array$get_count$R$panda$core$Int64(args1607);
    panda$core$Bit $tmp1685 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1684, ((panda$core$Int64) { 0 }));
    if ($tmp1685.value) {
    {
        panda$core$Object* $tmp1686 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args1607, ((panda$core$Int64) { 0 }));
        target1683 = ((panda$core$String*) $tmp1686);
    }
    }
    else {
    {
        target1683 = NULL;
    }
    }
    panda$core$String* $tmp1688 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target1683, m1564, isSuper1613, p_out);
    methodRef1687 = $tmp1688;
    panda$core$Bit $tmp1690 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m1564);
    indirect1689 = $tmp1690;
    panda$core$String* $tmp1692 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1691 = $tmp1692;
    separator1693 = &$s1694;
    if (indirect1689.value) {
    {
        panda$core$String* $tmp1697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1696, actualResultType1612);
        panda$core$String* $tmp1699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1697, &$s1698);
        panda$core$String* $tmp1700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1699, result1691);
        panda$core$String* $tmp1702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1700, &$s1701);
        (($fn1703) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1702);
        panda$core$String* $tmp1705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1704, methodRef1687);
        panda$core$String* $tmp1707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1705, &$s1706);
        panda$core$String* $tmp1708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1707, result1691);
        panda$core$String* $tmp1710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1708, &$s1709);
        (($fn1711) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1710);
        separator1693 = &$s1712;
    }
    }
    else {
    {
        panda$core$String* $tmp1714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1713, actualResultType1612);
        panda$core$String* $tmp1716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1714, &$s1715);
        panda$core$String* $tmp1717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1716, result1691);
        panda$core$String* $tmp1719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1717, &$s1718);
        panda$core$String* $tmp1720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1719, methodRef1687);
        panda$core$String* $tmp1722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1720, &$s1721);
        (($fn1723) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1722);
    }
    }
    {
        ITable* $tmp1725 = ((panda$collections$Iterable*) args1607)->$class->itable;
        while ($tmp1725->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1725 = $tmp1725->next;
        }
        $fn1727 $tmp1726 = $tmp1725->methods[0];
        panda$collections$Iterator* $tmp1728 = $tmp1726(((panda$collections$Iterable*) args1607));
        arg$Iter1724 = $tmp1728;
        $l1729:;
        ITable* $tmp1731 = arg$Iter1724->$class->itable;
        while ($tmp1731->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1731 = $tmp1731->next;
        }
        $fn1733 $tmp1732 = $tmp1731->methods[0];
        panda$core$Bit $tmp1734 = $tmp1732(arg$Iter1724);
        panda$core$Bit $tmp1735 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1734);
        if (!$tmp1735.value) goto $l1730;
        {
            ITable* $tmp1737 = arg$Iter1724->$class->itable;
            while ($tmp1737->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1737 = $tmp1737->next;
            }
            $fn1739 $tmp1738 = $tmp1737->methods[1];
            panda$core$Object* $tmp1740 = $tmp1738(arg$Iter1724);
            arg1736 = ((panda$core$String*) $tmp1740);
            panda$core$String* $tmp1742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1741, separator1693);
            panda$core$String* $tmp1744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1742, &$s1743);
            panda$core$String* $tmp1745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1744, arg1736);
            panda$core$String* $tmp1747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1745, &$s1746);
            (($fn1748) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1747);
            separator1693 = &$s1749;
        }
        goto $l1729;
        $l1730:;
    }
    (($fn1751) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1750);
    panda$core$String* $tmp1752 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp1753 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp1752, actualResultType1612);
    if ($tmp1753.value) {
    {
        panda$core$Int64 $tmp1754 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1611->subtypes);
        panda$core$Int64 $tmp1755 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1754, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1756 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1611->subtypes, $tmp1755);
        panda$core$String* $tmp1757 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result1691, ((org$pandalanguage$pandac$Type*) $tmp1756), p_call->type, p_out);
        return $tmp1757;
    }
    }
    return result1691;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* unwrapped1759;
    panda$core$String* nonNullValue1762;
    panda$core$String* wrapped1772;
    panda$core$Bit $tmp1758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1758.value) {
    {
        panda$core$Object* $tmp1760 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1761 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1760), p_out);
        unwrapped1759 = $tmp1761;
        panda$core$Object* $tmp1763 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1764 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped1759, ((org$pandalanguage$pandac$Type*) $tmp1763), p_dstType, p_out);
        nonNullValue1762 = $tmp1764;
        panda$core$String* $tmp1766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1765, p_value);
        panda$core$String* $tmp1768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1766, &$s1767);
        panda$core$String* $tmp1769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1768, nonNullValue1762);
        panda$core$String* $tmp1771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1769, &$s1770);
        return $tmp1771;
    }
    }
    panda$core$String* $tmp1774 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1773, $tmp1774);
    panda$core$String* $tmp1777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1775, &$s1776);
    org$pandalanguage$pandac$ClassDecl* $tmp1778 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    panda$core$String* $tmp1779 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1778)->name);
    panda$core$String* $tmp1780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1777, $tmp1779);
    panda$core$String* $tmp1782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1780, &$s1781);
    panda$core$String* $tmp1784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1783, p_value);
    panda$core$String* $tmp1786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1784, &$s1785);
    panda$core$String* $tmp1787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1782, $tmp1786);
    wrapped1772 = $tmp1787;
    panda$core$Bit $tmp1788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1788.value) {
    {
        panda$core$String* $tmp1790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1789, p_value);
        panda$core$String* $tmp1792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1790, &$s1791);
        panda$core$String* $tmp1793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1792, wrapped1772);
        panda$core$String* $tmp1795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1793, &$s1794);
        return $tmp1795;
    }
    }
    return wrapped1772;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field1799;
    org$pandalanguage$pandac$ClassDecl* cl1802;
    panda$core$String* base1805;
    panda$core$Bit $tmp1796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp1796.value);
    panda$core$Int64 $tmp1797 = panda$collections$Array$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp1798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1797, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1798.value);
    field1799 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$Bit $tmp1800 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field1799->annotations);
    if ($tmp1800.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field1799->value != NULL }).value);
        panda$core$String* $tmp1801 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field1799->value, p_out);
        return $tmp1801;
    }
    }
    panda$core$Object* $tmp1803 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp1804 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp1803)->type);
    cl1802 = $tmp1804;
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl1802);
    panda$core$Object* $tmp1806 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1807 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1806), p_out);
    base1805 = $tmp1807;
    PANDA_ASSERT(((panda$core$Bit) { cl1802 != NULL }).value);
    panda$core$Bit $tmp1808 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1802);
    if ($tmp1808.value) {
    {
        panda$core$String* $tmp1810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1809, base1805);
        panda$core$String* $tmp1812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1810, &$s1811);
        panda$core$String* $tmp1813 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1799)->name);
        panda$core$String* $tmp1814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1812, $tmp1813);
        panda$core$String* $tmp1816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1814, &$s1815);
        return $tmp1816;
    }
    }
    panda$core$String* $tmp1818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1817, base1805);
    panda$core$String* $tmp1820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1818, &$s1819);
    panda$core$String* $tmp1821 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1799)->name);
    panda$core$String* $tmp1822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1820, $tmp1821);
    panda$core$String* $tmp1824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1822, &$s1823);
    return $tmp1824;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1825;
    panda$core$String* wrapped1835;
    panda$core$String* nonNullValue1838;
    panda$core$String* $tmp1827 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1826, $tmp1827);
    panda$core$String* $tmp1830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1828, &$s1829);
    panda$core$String* $tmp1831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1830, p_value);
    panda$core$String* $tmp1833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1831, &$s1832);
    result1825 = $tmp1833;
    panda$core$Bit $tmp1834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1834.value) {
    {
        panda$core$Object* $tmp1836 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1837 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1836), p_out);
        wrapped1835 = $tmp1837;
        panda$core$Object* $tmp1839 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1840 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped1835, ((org$pandalanguage$pandac$Type*) $tmp1839), p_dstType, p_out);
        nonNullValue1838 = $tmp1840;
        panda$core$String* $tmp1842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1841, p_value);
        panda$core$String* $tmp1844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1842, &$s1843);
        panda$core$String* $tmp1845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1844, nonNullValue1838);
        panda$core$String* $tmp1847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1845, &$s1846);
        panda$core$String* $tmp1848 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp1849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1847, $tmp1848);
        panda$core$String* $tmp1851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1849, &$s1850);
        return $tmp1851;
    }
    }
    return result1825;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1853 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1852, $tmp1853);
    panda$core$String* $tmp1856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1854, &$s1855);
    panda$core$String* $tmp1857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1856, p_value);
    panda$core$String* $tmp1859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1857, &$s1858);
    return $tmp1859;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1861 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1860, $tmp1861);
    panda$core$String* $tmp1864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1862, &$s1863);
    panda$core$String* $tmp1865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1864, p_value);
    panda$core$String* $tmp1867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1865, &$s1866);
    return $tmp1867;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op1868;
    org$pandalanguage$pandac$ClassDecl* srcClass1879;
    org$pandalanguage$pandac$ClassDecl* targetClass1881;
    panda$core$String* srcType1920;
    panda$core$String* dstType1922;
    panda$core$Bit $tmp1869 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp1869.value) {
    {
        panda$core$Bit $tmp1870 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp1870.value);
        panda$core$String* $tmp1872 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
        panda$core$String* $tmp1873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1871, $tmp1872);
        panda$core$String* $tmp1875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1873, &$s1874);
        panda$core$String* $tmp1876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1875, p_value);
        panda$core$String* $tmp1878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1876, &$s1877);
        return $tmp1878;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1880 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass1879 = $tmp1880;
        PANDA_ASSERT(((panda$core$Bit) { srcClass1879 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp1882 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass1881 = $tmp1882;
        PANDA_ASSERT(((panda$core$Bit) { targetClass1881 != NULL }).value);
        panda$core$Bit $tmp1884 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1879);
        bool $tmp1883 = $tmp1884.value;
        if (!$tmp1883) goto $l1885;
        panda$core$Bit $tmp1886 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1881);
        panda$core$Bit $tmp1887 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1886);
        $tmp1883 = $tmp1887.value;
        $l1885:;
        panda$core$Bit $tmp1888 = { $tmp1883 };
        if ($tmp1888.value) {
        {
            panda$core$String* $tmp1889 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1889;
        }
        }
        else {
        panda$core$Bit $tmp1891 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1879);
        panda$core$Bit $tmp1892 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1891);
        bool $tmp1890 = $tmp1892.value;
        if (!$tmp1890) goto $l1893;
        panda$core$Bit $tmp1894 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1881);
        $tmp1890 = $tmp1894.value;
        $l1893:;
        panda$core$Bit $tmp1895 = { $tmp1890 };
        if ($tmp1895.value) {
        {
            panda$core$String* $tmp1896 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1896;
        }
        }
        else {
        panda$core$Bit $tmp1899 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1879);
        bool $tmp1898 = $tmp1899.value;
        if (!$tmp1898) goto $l1900;
        panda$core$Bit $tmp1901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1898 = $tmp1901.value;
        $l1900:;
        panda$core$Bit $tmp1902 = { $tmp1898 };
        bool $tmp1897 = $tmp1902.value;
        if (!$tmp1897) goto $l1903;
        panda$core$Object* $tmp1904 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1905 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1904), p_src);
        $tmp1897 = $tmp1905.value;
        $l1903:;
        panda$core$Bit $tmp1906 = { $tmp1897 };
        if ($tmp1906.value) {
        {
            panda$core$String* $tmp1907 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1907;
        }
        }
        else {
        panda$core$Bit $tmp1910 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1881);
        bool $tmp1909 = $tmp1910.value;
        if (!$tmp1909) goto $l1911;
        panda$core$Bit $tmp1912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1909 = $tmp1912.value;
        $l1911:;
        panda$core$Bit $tmp1913 = { $tmp1909 };
        bool $tmp1908 = $tmp1913.value;
        if (!$tmp1908) goto $l1914;
        panda$core$Object* $tmp1915 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1916 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1915), p_target);
        $tmp1908 = $tmp1916.value;
        $l1914:;
        panda$core$Bit $tmp1917 = { $tmp1908 };
        if ($tmp1917.value) {
        {
            panda$core$String* $tmp1918 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1918;
        }
        }
        }
        }
        }
        op1868 = &$s1919;
    }
    }
    panda$core$String* $tmp1921 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType1920 = $tmp1921;
    panda$core$String* $tmp1923 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType1922 = $tmp1923;
    panda$core$Bit $tmp1924 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType1920, dstType1922);
    if ($tmp1924.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp1926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1925, dstType1922);
    panda$core$String* $tmp1928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1926, &$s1927);
    panda$core$String* $tmp1929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1928, p_value);
    panda$core$String* $tmp1931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1929, &$s1930);
    return $tmp1931;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base1935;
    panda$core$Bit $tmp1932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp1932.value);
    panda$core$Int64 $tmp1933 = panda$collections$Array$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp1934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1933, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1934.value);
    panda$core$Object* $tmp1936 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1937 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1936), p_out);
    base1935 = $tmp1937;
    panda$core$Object* $tmp1938 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1939 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base1935, ((org$pandalanguage$pandac$IRNode*) $tmp1938)->type, p_cast->type, p_out);
    return $tmp1939;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl1943;
    panda$core$String* t1945;
    panda$core$String* value1958;
    panda$core$String* tmp1972;
    panda$core$String* result1990;
    panda$core$String* classPtr2011;
    panda$core$String* className2013;
    panda$core$Bit $tmp1940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp1940.value);
    panda$core$Int64 $tmp1941 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp1942 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1941, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1942.value);
    org$pandalanguage$pandac$ClassDecl* $tmp1944 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl1943 = $tmp1944;
    PANDA_ASSERT(((panda$core$Bit) { cl1943 != NULL }).value);
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
        panda$core$Int64 $tmp1953 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp1954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1953, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp1954.value);
        panda$core$Object* $tmp1955 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp1956 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1955)->children);
        panda$core$Bit $tmp1957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1956, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp1957.value);
        panda$core$Object* $tmp1959 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp1960 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp1959)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1961 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1960), p_out);
        value1958 = $tmp1961;
        panda$core$String* $tmp1963 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        panda$core$String* $tmp1964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1962, $tmp1963);
        panda$core$String* $tmp1966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1964, &$s1965);
        panda$core$String* $tmp1967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1966, value1958);
        panda$core$String* $tmp1969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1967, &$s1968);
        return $tmp1969;
    }
    }
    panda$core$Bit $tmp1970 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1943);
    if ($tmp1970.value) {
    {
        panda$core$Int64 $tmp1971 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1971;
        panda$core$String* $tmp1974 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1973, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        panda$core$String* $tmp1976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1974, &$s1975);
        tmp1972 = $tmp1976;
        panda$core$String* $tmp1978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1977, t1945);
        panda$core$String* $tmp1980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1978, &$s1979);
        panda$core$String* $tmp1981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1980, tmp1972);
        panda$core$String* $tmp1983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1981, &$s1982);
        (($fn1984) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1983);
        panda$core$Object* $tmp1985 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1986, tmp1972);
        panda$core$String* $tmp1989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1987, &$s1988);
        org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp1985), $tmp1989, p_out);
        return tmp1972;
    }
    }
    panda$core$String* $tmp1991 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1990 = $tmp1991;
    panda$core$String* $tmp1993 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp1994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1992, $tmp1993);
    panda$core$String* $tmp1996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1994, &$s1995);
    panda$core$String* $tmp1997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1996, result1990);
    panda$core$String* $tmp1999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1997, &$s1998);
    panda$core$String* $tmp2000 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp2001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1999, $tmp2000);
    panda$core$String* $tmp2003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2001, &$s2002);
    panda$core$Int64 $tmp2005 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp2006 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2004, ((panda$core$Object*) wrap_panda$core$Int64($tmp2005)));
    panda$core$String* $tmp2008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2006, &$s2007);
    panda$core$String* $tmp2009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2003, $tmp2008);
    (($fn2010) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2009);
    panda$core$String* $tmp2012 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr2011 = $tmp2012;
    panda$core$Bit $tmp2014 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    if ($tmp2014.value) {
    {
        panda$core$Object* $tmp2015 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2016 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2015));
        className2013 = $tmp2016;
    }
    }
    else {
    {
        panda$core$String* $tmp2017 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className2013 = $tmp2017;
    }
    }
    panda$core$String* $tmp2019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2018, result1990);
    panda$core$String* $tmp2021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2019, &$s2020);
    panda$core$String* $tmp2022 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) cl1943)->name);
    panda$core$String* $tmp2023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2021, $tmp2022);
    panda$core$String* $tmp2025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2023, &$s2024);
    (($fn2026) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2025);
    panda$core$String* $tmp2028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2027, result1990);
    panda$core$String* $tmp2030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2028, &$s2029);
    (($fn2031) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2030);
    panda$core$Object* $tmp2032 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2033, result1990);
    panda$core$String* $tmp2036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2034, &$s2035);
    org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2032), $tmp2036, p_out);
    return result1990;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2037 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    return $tmp2037;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2039 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp2040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2038, $tmp2039);
    return $tmp2040;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s2041;
    }
    }
    return &$s2042;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2043 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    return $tmp2043;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result2045;
    panda$collections$Iterator* raw$Iter2058;
    panda$core$Char8 raw2071;
    panda$core$UInt8 c2076;
    panda$core$Int64 $tmp2044 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp2044;
    panda$core$String* $tmp2047 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2046, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp2049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2047, &$s2048);
    result2045 = $tmp2049;
    org$pandalanguage$pandac$Type* $tmp2050 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2050);
    panda$core$String* $tmp2052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2051, result2045);
    panda$core$String* $tmp2054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2052, &$s2053);
    panda$core$String* $tmp2056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2054, &$s2055);
    (($fn2057) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2056);
    {
        panda$collections$ListView* $tmp2059 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp2060 = ((panda$collections$Iterable*) $tmp2059)->$class->itable;
        while ($tmp2060->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2060 = $tmp2060->next;
        }
        $fn2062 $tmp2061 = $tmp2060->methods[0];
        panda$collections$Iterator* $tmp2063 = $tmp2061(((panda$collections$Iterable*) $tmp2059));
        raw$Iter2058 = $tmp2063;
        $l2064:;
        ITable* $tmp2066 = raw$Iter2058->$class->itable;
        while ($tmp2066->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2066 = $tmp2066->next;
        }
        $fn2068 $tmp2067 = $tmp2066->methods[0];
        panda$core$Bit $tmp2069 = $tmp2067(raw$Iter2058);
        panda$core$Bit $tmp2070 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2069);
        if (!$tmp2070.value) goto $l2065;
        {
            ITable* $tmp2072 = raw$Iter2058->$class->itable;
            while ($tmp2072->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2072 = $tmp2072->next;
            }
            $fn2074 $tmp2073 = $tmp2072->methods[1];
            panda$core$Object* $tmp2075 = $tmp2073(raw$Iter2058);
            raw2071 = ((panda$core$Char8$wrapper*) $tmp2075)->value;
            panda$core$UInt8 $tmp2077 = panda$core$Char8$convert$R$panda$core$UInt8(raw2071);
            c2076 = $tmp2077;
            (($fn2079) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), &$s2078);
            panda$collections$ListView* $tmp2081 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s2080);
            panda$core$UInt32 $tmp2082 = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(c2076, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp2083 = panda$core$UInt32$convert$R$panda$core$Int64($tmp2082);
            ITable* $tmp2084 = $tmp2081->$class->itable;
            while ($tmp2084->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2084 = $tmp2084->next;
            }
            $fn2086 $tmp2085 = $tmp2084->methods[0];
            panda$core$Object* $tmp2087 = $tmp2085($tmp2081, $tmp2083);
            (($fn2088) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp2087)->value)));
            panda$collections$ListView* $tmp2090 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s2089);
            panda$core$UInt32 $tmp2091 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(c2076, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp2092 = panda$core$UInt32$convert$R$panda$core$Int64($tmp2091);
            ITable* $tmp2093 = $tmp2090->$class->itable;
            while ($tmp2093->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2093 = $tmp2093->next;
            }
            $fn2095 $tmp2094 = $tmp2093->methods[0];
            panda$core$Object* $tmp2096 = $tmp2094($tmp2090, $tmp2092);
            (($fn2097) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp2096)->value)));
        }
        goto $l2064;
        $l2065:;
    }
    panda$collections$ListView* $tmp2099 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp2100 = ((panda$collections$CollectionView*) $tmp2099)->$class->itable;
    while ($tmp2100->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2100 = $tmp2100->next;
    }
    $fn2102 $tmp2101 = $tmp2100->methods[0];
    panda$core$Int64 $tmp2103 = $tmp2101(((panda$collections$CollectionView*) $tmp2099));
    panda$core$String* $tmp2104 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2098, ((panda$core$Object*) wrap_panda$core$Int64($tmp2103)));
    panda$core$String* $tmp2106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2104, &$s2105);
    (($fn2107) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp2106);
    panda$core$String* $tmp2109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2108, result2045);
    panda$core$String* $tmp2111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2109, &$s2110);
    return $tmp2111;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    return &$s2112;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2114 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp2115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2113, $tmp2114);
    panda$core$String* $tmp2117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2115, &$s2116);
    return $tmp2117;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2121;
    org$pandalanguage$pandac$ClassDecl* cl2124;
    panda$core$String* bit2127;
    panda$core$Bit $tmp2118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp2118.value);
    panda$core$Int64 $tmp2119 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp2120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2119, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2120.value);
    panda$core$Object* $tmp2122 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2123 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2122), p_out);
    value2121 = $tmp2123;
    panda$core$Object* $tmp2125 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2126 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2125)->type);
    cl2124 = $tmp2126;
    panda$core$Bit $tmp2128 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2124);
    if ($tmp2128.value) {
    {
        panda$core$Object* $tmp2129 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2130 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2129)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2130.value) {
        {
            bit2127 = &$s2131;
        }
        }
        else {
        {
            panda$core$String* $tmp2133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2132, value2121);
            panda$core$String* $tmp2135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2133, &$s2134);
            bit2127 = $tmp2135;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2136, value2121);
        panda$core$String* $tmp2139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2137, &$s2138);
        bit2127 = $tmp2139;
    }
    }
    panda$core$String* $tmp2141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2140, bit2127);
    panda$core$String* $tmp2143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2141, &$s2142);
    return $tmp2143;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2147;
    org$pandalanguage$pandac$ClassDecl* cl2150;
    panda$core$String* bit2153;
    panda$core$Bit $tmp2144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp2144.value);
    panda$core$Int64 $tmp2145 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp2146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2145, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2146.value);
    panda$core$Object* $tmp2148 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2149 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2148), p_out);
    value2147 = $tmp2149;
    panda$core$Object* $tmp2151 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2152 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2151)->type);
    cl2150 = $tmp2152;
    panda$core$Bit $tmp2154 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2150);
    if ($tmp2154.value) {
    {
        panda$core$Object* $tmp2155 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2156 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2155)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2156.value) {
        {
            bit2153 = &$s2157;
        }
        }
        else {
        {
            panda$core$String* $tmp2159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2158, value2147);
            panda$core$String* $tmp2161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2159, &$s2160);
            bit2153 = $tmp2161;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2162, value2147);
        panda$core$String* $tmp2165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2163, &$s2164);
        bit2153 = $tmp2165;
    }
    }
    panda$core$String* $tmp2167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2166, bit2153);
    panda$core$String* $tmp2169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2167, &$s2168);
    return $tmp2169;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2171;
    panda$core$Bit $tmp2170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp2170.value);
    panda$core$Object* $tmp2172 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2173 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp2172));
    cl2171 = $tmp2173;
    PANDA_ASSERT(((panda$core$Bit) { cl2171 != NULL }).value);
    panda$core$Bit $tmp2174 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2171);
    if ($tmp2174.value) {
    {
        panda$core$String* $tmp2176 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
        panda$core$String* $tmp2177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2175, $tmp2176);
        panda$core$String* $tmp2179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2177, &$s2178);
        return $tmp2179;
    }
    }
    else {
    {
        return &$s2180;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base2184;
    panda$core$String* result2187;
    panda$core$Bit $tmp2181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp2181.value);
    panda$core$Int64 $tmp2182 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp2183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2182, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2183.value);
    panda$core$Object* $tmp2185 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2186 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2185), p_out);
    base2184 = $tmp2186;
    panda$core$String* $tmp2188 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2187 = $tmp2188;
    panda$core$Int64 $tmp2189 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp2189.value) {
        case 52:
        {
            panda$core$String* $tmp2191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2190, base2184);
            panda$core$String* $tmp2193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2191, &$s2192);
            return $tmp2193;
        }
        break;
        case 49:
        {
            panda$core$String* $tmp2195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2194, base2184);
            panda$core$String* $tmp2197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2195, &$s2196);
            return $tmp2197;
        }
        break;
        case 50:
        {
            panda$core$String* $tmp2199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2198, base2184);
            panda$core$String* $tmp2201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2199, &$s2200);
            return $tmp2201;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2214;
    panda$core$String* result2217;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp2202 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2202;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp2203 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2203;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp2204 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2204;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp2205 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2205;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp2206 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2206;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp2207 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2207;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp2208 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2208;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp2209 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp2209;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp2210 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2210;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp2211 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp2211;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp2212 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2212;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp2213 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2213;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp2215 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2216 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2215), p_out);
            value2214 = $tmp2216;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value2214));
            return value2214;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp2218 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result2217 = ((panda$core$String*) $tmp2218);
            PANDA_ASSERT(((panda$core$Bit) { result2217 != NULL }).value);
            return result2217;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp2219 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2219;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp2220 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2220;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp2221 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2221;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp2222 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2222;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2223 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2223;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter2228;
    org$pandalanguage$pandac$IRNode* s2240;
    panda$core$Bit $tmp2224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp2224.value);
    (($fn2226) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2225);
    panda$core$Int64 $tmp2227 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2227;
    {
        ITable* $tmp2229 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp2229->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2229 = $tmp2229->next;
        }
        $fn2231 $tmp2230 = $tmp2229->methods[0];
        panda$collections$Iterator* $tmp2232 = $tmp2230(((panda$collections$Iterable*) p_block->children));
        s$Iter2228 = $tmp2232;
        $l2233:;
        ITable* $tmp2235 = s$Iter2228->$class->itable;
        while ($tmp2235->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2235 = $tmp2235->next;
        }
        $fn2237 $tmp2236 = $tmp2235->methods[0];
        panda$core$Bit $tmp2238 = $tmp2236(s$Iter2228);
        panda$core$Bit $tmp2239 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2238);
        if (!$tmp2239.value) goto $l2234;
        {
            ITable* $tmp2241 = s$Iter2228->$class->itable;
            while ($tmp2241->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2241 = $tmp2241->next;
            }
            $fn2243 $tmp2242 = $tmp2241->methods[1];
            panda$core$Object* $tmp2244 = $tmp2242(s$Iter2228);
            s2240 = ((org$pandalanguage$pandac$IRNode*) $tmp2244);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2240, p_out);
        }
        goto $l2233;
        $l2234:;
    }
    panda$core$Int64 $tmp2245 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2245;
    (($fn2247) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2246);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2248;
    panda$core$String* $match$1286_92249;
    panda$core$String* ptr2254;
    panda$core$String* arg2257;
    panda$core$String* base2277;
    panda$core$String* index2280;
    panda$core$String* value2283;
    m2248 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$1286_92249 = ((org$pandalanguage$pandac$Symbol*) m2248->value)->name;
        panda$core$Bit $tmp2251 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1286_92249, &$s2250);
        if ($tmp2251.value) {
        {
            panda$core$Int64 $tmp2252 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2252, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2253.value);
            panda$core$Object* $tmp2255 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2256 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2255), p_out);
            ptr2254 = $tmp2256;
            panda$core$Object* $tmp2258 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2259 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2258));
            panda$core$String* $tmp2260 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2259, p_out);
            arg2257 = $tmp2260;
            panda$core$String* $tmp2262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2261, arg2257);
            panda$core$String* $tmp2264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2262, &$s2263);
            panda$core$String* $tmp2265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2264, ptr2254);
            panda$core$String* $tmp2267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2265, &$s2266);
            (($fn2268) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2267);
        }
        }
        else {
        panda$core$Bit $tmp2270 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1286_92249, &$s2269);
        if ($tmp2270.value) {
        {
            panda$core$Int64 $tmp2271 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2271, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp2272.value);
            panda$core$Object* $tmp2273 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2274 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2273));
            panda$core$Int64 $tmp2275 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2274->type->subtypes);
            panda$core$Bit $tmp2276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2275, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2276.value);
            panda$core$Object* $tmp2278 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2279 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2278), p_out);
            base2277 = $tmp2279;
            panda$core$Object* $tmp2281 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2282 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2281), p_out);
            index2280 = $tmp2282;
            panda$core$Object* $tmp2284 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2285 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2284));
            panda$core$String* $tmp2286 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2285, p_out);
            value2283 = $tmp2286;
            panda$core$String* $tmp2288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2287, base2277);
            panda$core$String* $tmp2290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2288, &$s2289);
            panda$core$String* $tmp2291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2290, index2280);
            panda$core$String* $tmp2293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2291, &$s2292);
            panda$core$String* $tmp2294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2293, value2283);
            panda$core$String* $tmp2296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2294, &$s2295);
            (($fn2297) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2296);
        }
        }
        else {
        panda$core$Bit $tmp2299 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1286_92249, &$s2298);
        if ($tmp2299.value) {
        {
            panda$core$Int64 $tmp2300 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2300, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2301.value);
            panda$core$Object* $tmp2303 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2304 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2303), p_out);
            panda$core$String* $tmp2305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2302, $tmp2304);
            panda$core$String* $tmp2307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2305, &$s2306);
            (($fn2308) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2307);
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
    org$pandalanguage$pandac$MethodDecl* m2310;
    org$pandalanguage$pandac$Type* actualMethodType2314;
    panda$core$String* actualResultType2315;
    panda$core$Bit isSuper2316;
    panda$collections$Array* args2336;
    panda$core$Int64 offset2339;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp2344;
    panda$core$String* arg2363;
    panda$core$String* refTarget2389;
    panda$core$String* methodRef2393;
    panda$core$String* separator2395;
    panda$core$String* indirectVar2399;
    panda$core$String* resultType2402;
    panda$collections$Iterator* a$Iter2429;
    panda$core$String* a2441;
    panda$core$Bit $tmp2309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2309.value);
    m2310 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2312 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2310->owner)->name, &$s2311);
    if ($tmp2312.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    panda$core$Bit $tmp2313 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m2310->owner);
    if ($tmp2313.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2310);
    }
    }
    panda$core$Int64 $tmp2318 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2319 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2318, ((panda$core$Int64) { 1 }));
    bool $tmp2317 = $tmp2319.value;
    if (!$tmp2317) goto $l2320;
    panda$core$Object* $tmp2321 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2321)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2317 = $tmp2322.value;
    $l2320:;
    panda$core$Bit $tmp2323 = { $tmp2317 };
    isSuper2316 = $tmp2323;
    panda$core$Bit $tmp2325 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2316);
    bool $tmp2324 = $tmp2325.value;
    if (!$tmp2324) goto $l2326;
    panda$core$Bit $tmp2327 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2310);
    $tmp2324 = $tmp2327.value;
    $l2326:;
    panda$core$Bit $tmp2328 = { $tmp2324 };
    if ($tmp2328.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2329 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2310);
        actualMethodType2314 = $tmp2329;
        panda$core$Int64 $tmp2330 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2314->subtypes);
        panda$core$Int64 $tmp2331 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2330, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2332 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2314->subtypes, $tmp2331);
        panda$core$String* $tmp2333 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2332));
        actualResultType2315 = $tmp2333;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2334 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2310);
        actualMethodType2314 = $tmp2334;
        panda$core$String* $tmp2335 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2315 = $tmp2335;
    }
    }
    panda$collections$Array* $tmp2337 = (panda$collections$Array*) malloc(40);
    $tmp2337->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2337->refCount.value = 1;
    panda$collections$Array$init($tmp2337);
    args2336 = $tmp2337;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args2336, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2340 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2341 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2314->subtypes);
    panda$core$Int64 $tmp2342 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2340, $tmp2341);
    panda$core$Int64 $tmp2343 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2342, ((panda$core$Int64) { 1 }));
    offset2339 = $tmp2343;
    panda$core$Int64 $tmp2345 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2344, ((panda$core$Int64) { 0 }), $tmp2345, ((panda$core$Bit) { false }));
    int64_t $tmp2347 = $tmp2344.min.value;
    panda$core$Int64 i2346 = { $tmp2347 };
    int64_t $tmp2349 = $tmp2344.max.value;
    bool $tmp2350 = $tmp2344.inclusive.value;
    bool $tmp2357 = 1 > 0;
    if ($tmp2357) goto $l2355; else goto $l2356;
    $l2355:;
    if ($tmp2350) goto $l2358; else goto $l2359;
    $l2358:;
    if ($tmp2347 <= $tmp2349) goto $l2351; else goto $l2353;
    $l2359:;
    if ($tmp2347 < $tmp2349) goto $l2351; else goto $l2353;
    $l2356:;
    if ($tmp2350) goto $l2360; else goto $l2361;
    $l2360:;
    if ($tmp2347 >= $tmp2349) goto $l2351; else goto $l2353;
    $l2361:;
    if ($tmp2347 > $tmp2349) goto $l2351; else goto $l2353;
    $l2351:;
    {
        panda$core$Object* $tmp2364 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2346);
        panda$core$String* $tmp2365 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2364), p_out);
        arg2363 = $tmp2365;
        panda$core$Bit $tmp2367 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2346, offset2339);
        bool $tmp2366 = $tmp2367.value;
        if (!$tmp2366) goto $l2368;
        panda$core$Int64 $tmp2369 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2346, offset2339);
        panda$core$Object* $tmp2370 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2314->subtypes, $tmp2369);
        panda$core$Object* $tmp2371 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2346);
        panda$core$Bit $tmp2372 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2370), ((org$pandalanguage$pandac$IRNode*) $tmp2371)->type);
        $tmp2366 = $tmp2372.value;
        $l2368:;
        panda$core$Bit $tmp2373 = { $tmp2366 };
        if ($tmp2373.value) {
        {
            panda$core$Object* $tmp2374 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2346);
            panda$core$Int64 $tmp2375 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2346, offset2339);
            panda$core$Object* $tmp2376 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2314->subtypes, $tmp2375);
            panda$core$String* $tmp2377 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2363, ((org$pandalanguage$pandac$IRNode*) $tmp2374)->type, ((org$pandalanguage$pandac$Type*) $tmp2376), p_out);
            arg2363 = $tmp2377;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2336, ((panda$core$Object*) arg2363));
    }
    $l2354:;
    if ($tmp2357) goto $l2379; else goto $l2380;
    $l2379:;
    int64_t $tmp2381 = $tmp2349 - i2346.value;
    if ($tmp2350) goto $l2382; else goto $l2383;
    $l2382:;
    if ($tmp2381 >= 1) goto $l2378; else goto $l2353;
    $l2383:;
    if ($tmp2381 > 1) goto $l2378; else goto $l2353;
    $l2380:;
    int64_t $tmp2385 = i2346.value - $tmp2349;
    if ($tmp2350) goto $l2386; else goto $l2387;
    $l2386:;
    if ($tmp2385 >= -1) goto $l2378; else goto $l2353;
    $l2387:;
    if ($tmp2385 > -1) goto $l2378; else goto $l2353;
    $l2378:;
    i2346.value += 1;
    goto $l2351;
    $l2353:;
    panda$core$Int64 $tmp2390 = panda$collections$Array$get_count$R$panda$core$Int64(args2336);
    panda$core$Bit $tmp2391 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2390, ((panda$core$Int64) { 0 }));
    if ($tmp2391.value) {
    {
        panda$core$Object* $tmp2392 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2336, ((panda$core$Int64) { 0 }));
        refTarget2389 = ((panda$core$String*) $tmp2392);
    }
    }
    else {
    {
        refTarget2389 = NULL;
    }
    }
    panda$core$String* $tmp2394 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget2389, m2310, isSuper2316, p_out);
    methodRef2393 = $tmp2394;
    separator2395 = &$s2396;
    panda$core$Bit $tmp2397 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2310);
    if ($tmp2397.value) {
    {
        panda$core$Int64 $tmp2398 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2398;
        panda$core$String* $tmp2401 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2400, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        indirectVar2399 = $tmp2401;
        panda$core$String* $tmp2403 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType2402 = $tmp2403;
        panda$core$String* $tmp2405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2404, resultType2402);
        panda$core$String* $tmp2407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2405, &$s2406);
        panda$core$String* $tmp2408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2407, indirectVar2399);
        panda$core$String* $tmp2410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2408, &$s2409);
        (($fn2411) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2410);
        panda$core$String* $tmp2413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2412, methodRef2393);
        panda$core$String* $tmp2415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2413, &$s2414);
        panda$core$String* $tmp2416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2415, resultType2402);
        panda$core$String* $tmp2418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2416, &$s2417);
        panda$core$String* $tmp2419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2418, indirectVar2399);
        panda$core$String* $tmp2421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2419, &$s2420);
        (($fn2422) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2421);
        separator2395 = &$s2423;
    }
    }
    else {
    {
        panda$core$String* $tmp2425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2424, methodRef2393);
        panda$core$String* $tmp2427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2425, &$s2426);
        (($fn2428) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2427);
    }
    }
    {
        ITable* $tmp2430 = ((panda$collections$Iterable*) args2336)->$class->itable;
        while ($tmp2430->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2430 = $tmp2430->next;
        }
        $fn2432 $tmp2431 = $tmp2430->methods[0];
        panda$collections$Iterator* $tmp2433 = $tmp2431(((panda$collections$Iterable*) args2336));
        a$Iter2429 = $tmp2433;
        $l2434:;
        ITable* $tmp2436 = a$Iter2429->$class->itable;
        while ($tmp2436->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2436 = $tmp2436->next;
        }
        $fn2438 $tmp2437 = $tmp2436->methods[0];
        panda$core$Bit $tmp2439 = $tmp2437(a$Iter2429);
        panda$core$Bit $tmp2440 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2439);
        if (!$tmp2440.value) goto $l2435;
        {
            ITable* $tmp2442 = a$Iter2429->$class->itable;
            while ($tmp2442->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2442 = $tmp2442->next;
            }
            $fn2444 $tmp2443 = $tmp2442->methods[1];
            panda$core$Object* $tmp2445 = $tmp2443(a$Iter2429);
            a2441 = ((panda$core$String*) $tmp2445);
            (($fn2446) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2395);
            (($fn2447) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2441);
            separator2395 = &$s2448;
        }
        goto $l2434;
        $l2435:;
    }
    (($fn2450) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2449);
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test2462;
    panda$core$Bit $tmp2451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp2451.value);
    panda$core$Int64 $tmp2453 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2453, ((panda$core$Int64) { 2 }));
    bool $tmp2452 = $tmp2454.value;
    if ($tmp2452) goto $l2455;
    panda$core$Int64 $tmp2456 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2456, ((panda$core$Int64) { 3 }));
    $tmp2452 = $tmp2457.value;
    $l2455:;
    panda$core$Bit $tmp2458 = { $tmp2452 };
    PANDA_ASSERT($tmp2458.value);
    panda$core$Object* $tmp2459 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2460 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2461 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2459)->type, $tmp2460);
    PANDA_ASSERT($tmp2461.value);
    panda$core$Object* $tmp2463 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2464 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2463), p_out);
    test2462 = $tmp2464;
    panda$core$String* $tmp2466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2465, test2462);
    panda$core$String* $tmp2468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2466, &$s2467);
    (($fn2469) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2468);
    panda$core$Object* $tmp2470 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2470), p_out);
    (($fn2472) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2471);
    panda$core$Int64 $tmp2473 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2473, ((panda$core$Int64) { 3 }));
    if ($tmp2474.value) {
    {
        (($fn2476) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2475);
        panda$core$Object* $tmp2477 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2477), p_out);
        (($fn2479) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2478);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2483;
    panda$core$String* range2494;
    org$pandalanguage$pandac$IRNode* block2497;
    org$pandalanguage$pandac$Type* t2499;
    panda$core$String* llt2502;
    panda$core$String* indexType2504;
    org$pandalanguage$pandac$ClassDecl* cl2510;
    org$pandalanguage$pandac$FieldDecl* field2518;
    panda$core$String* numberType2524;
    panda$core$String* index2527;
    panda$core$String* start2529;
    panda$core$String* indexValuePtr2542;
    panda$core$String* end2557;
    panda$core$String* step2570;
    panda$core$String* inclusive2572;
    panda$core$String* loopStart2582;
    panda$core$String* loopBody2584;
    panda$core$String* loopEnd2586;
    panda$core$String* loopTest2588;
    panda$core$String* forwardEntry2592;
    panda$core$String* backwardEntry2594;
    panda$core$String* signPrefix2596;
    panda$core$String* direction2608;
    panda$core$String* forwardEntryInclusive2632;
    panda$core$String* forwardEntryExclusive2634;
    panda$core$String* backwardEntryInclusive2677;
    panda$core$String* backwardEntryExclusive2679;
    panda$core$String* backwardEntryExclusiveTest2708;
    panda$core$String* loopInc2724;
    panda$core$String* forwardLabel2726;
    panda$core$String* backwardLabel2728;
    panda$core$String* forwardDelta2741;
    panda$core$String* forwardInclusiveLabel2757;
    panda$core$String* forwardExclusiveLabel2759;
    panda$core$String* forwardExclusiveTest2788;
    panda$core$String* backwardDelta2804;
    panda$core$String* backwardInclusiveLabel2820;
    panda$core$String* backwardExclusiveLabel2822;
    panda$core$String* inc2865;
    panda$core$Bit $tmp2480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp2480.value);
    panda$core$Int64 $tmp2481 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp2482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2481, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2482.value);
    panda$core$Object* $tmp2484 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2483 = ((org$pandalanguage$pandac$IRNode*) $tmp2484);
    panda$core$Object* $tmp2485 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2485)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2486.value);
    panda$core$Object* $tmp2487 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2488 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp2487)->type->subtypes);
    panda$core$Bit $tmp2489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2488, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2489.value);
    panda$core$Object* $tmp2490 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2491 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2490)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2493 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2491))->name, &$s2492);
    PANDA_ASSERT($tmp2493.value);
    panda$core$Object* $tmp2495 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2496 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2495), p_out);
    range2494 = $tmp2496;
    panda$core$Object* $tmp2498 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2497 = ((org$pandalanguage$pandac$IRNode*) $tmp2498);
    panda$core$Object* $tmp2500 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2501 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2500)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2499 = ((org$pandalanguage$pandac$Type*) $tmp2501);
    panda$core$String* $tmp2503 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2499);
    llt2502 = $tmp2503;
    panda$core$Bit $tmp2505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2499->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2505.value) {
    {
        panda$core$Int64 $tmp2506 = panda$collections$Array$get_count$R$panda$core$Int64(t2499->subtypes);
        panda$core$Bit $tmp2507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2506, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2507.value);
        panda$core$Object* $tmp2508 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2499->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2509 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2508));
        indexType2504 = $tmp2509;
    }
    }
    else {
    {
        indexType2504 = llt2502;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2511 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2499);
    cl2510 = $tmp2511;
    PANDA_ASSERT(((panda$core$Bit) { cl2510 != NULL }).value);
    panda$collections$ListView* $tmp2512 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2510);
    ITable* $tmp2513 = ((panda$collections$CollectionView*) $tmp2512)->$class->itable;
    while ($tmp2513->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2513 = $tmp2513->next;
    }
    $fn2515 $tmp2514 = $tmp2513->methods[0];
    panda$core$Int64 $tmp2516 = $tmp2514(((panda$collections$CollectionView*) $tmp2512));
    panda$core$Bit $tmp2517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2516, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2517.value);
    panda$collections$ListView* $tmp2519 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2510);
    ITable* $tmp2520 = $tmp2519->$class->itable;
    while ($tmp2520->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2520 = $tmp2520->next;
    }
    $fn2522 $tmp2521 = $tmp2520->methods[0];
    panda$core$Object* $tmp2523 = $tmp2521($tmp2519, ((panda$core$Int64) { 0 }));
    field2518 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2523);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2518);
    panda$core$String* $tmp2525 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2518->type);
    numberType2524 = $tmp2525;
    panda$core$Bit $tmp2526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2483->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2526.value);
    panda$core$String* $tmp2528 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2483->payload));
    index2527 = $tmp2528;
    panda$core$String* $tmp2530 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2529 = $tmp2530;
    panda$core$String* $tmp2532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2531, numberType2524);
    panda$core$String* $tmp2534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2532, &$s2533);
    panda$core$String* $tmp2535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2534, start2529);
    panda$core$String* $tmp2537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2535, &$s2536);
    panda$core$String* $tmp2538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2537, range2494);
    panda$core$String* $tmp2540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2538, &$s2539);
    (($fn2541) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2540);
    panda$core$String* $tmp2543 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2542 = $tmp2543;
    org$pandalanguage$pandac$Type* $tmp2545 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2510);
    panda$core$String* $tmp2546 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2545);
    panda$core$String* $tmp2547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2544, $tmp2546);
    panda$core$String* $tmp2549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2547, &$s2548);
    panda$core$String* $tmp2550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2549, index2527);
    panda$core$String* $tmp2552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2550, &$s2551);
    panda$core$String* $tmp2553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2552, start2529);
    panda$core$String* $tmp2555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2553, &$s2554);
    (($fn2556) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2555);
    panda$core$String* $tmp2558 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2557 = $tmp2558;
    panda$core$String* $tmp2560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2559, numberType2524);
    panda$core$String* $tmp2562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2560, &$s2561);
    panda$core$String* $tmp2563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2562, end2557);
    panda$core$String* $tmp2565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2563, &$s2564);
    panda$core$String* $tmp2566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2565, range2494);
    panda$core$String* $tmp2568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2566, &$s2567);
    (($fn2569) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2568);
    step2570 = &$s2571;
    panda$core$String* $tmp2573 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2572 = $tmp2573;
    panda$core$String* $tmp2575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2574, inclusive2572);
    panda$core$String* $tmp2577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2575, &$s2576);
    panda$core$String* $tmp2578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2577, range2494);
    panda$core$String* $tmp2580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2578, &$s2579);
    (($fn2581) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2580);
    panda$core$String* $tmp2583 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2582 = $tmp2583;
    panda$core$String* $tmp2585 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2584 = $tmp2585;
    panda$core$String* $tmp2587 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2586 = $tmp2587;
    panda$core$String* $tmp2589 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2588 = $tmp2589;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2590 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2590->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2590->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2590, ((panda$core$String*) p_f->payload), loopEnd2586, loopTest2588);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2590));
    panda$core$String* $tmp2593 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2592 = $tmp2593;
    panda$core$String* $tmp2595 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2594 = $tmp2595;
    panda$core$Bit $tmp2598 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2499)->name, &$s2597);
    if ($tmp2598.value) {
    {
        signPrefix2596 = &$s2599;
    }
    }
    else {
    {
        panda$core$Bit $tmp2602 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2499)->name, &$s2601);
        bool $tmp2600 = $tmp2602.value;
        if ($tmp2600) goto $l2603;
        panda$core$Bit $tmp2605 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2499)->name, &$s2604);
        $tmp2600 = $tmp2605.value;
        $l2603:;
        panda$core$Bit $tmp2606 = { $tmp2600 };
        PANDA_ASSERT($tmp2606.value);
        signPrefix2596 = &$s2607;
    }
    }
    panda$core$Bit $tmp2610 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix2596, &$s2609);
    if ($tmp2610.value) {
    {
        panda$core$String* $tmp2611 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
        direction2608 = $tmp2611;
        panda$core$String* $tmp2613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2612, direction2608);
        panda$core$String* $tmp2615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2613, &$s2614);
        panda$core$String* $tmp2616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2615, step2570);
        panda$core$String* $tmp2618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2616, &$s2617);
        (($fn2619) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2618);
    }
    }
    else {
    {
        direction2608 = &$s2620;
    }
    }
    panda$core$String* $tmp2622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2621, direction2608);
    panda$core$String* $tmp2624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2622, &$s2623);
    panda$core$String* $tmp2625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2624, forwardEntry2592);
    panda$core$String* $tmp2627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2625, &$s2626);
    panda$core$String* $tmp2628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2627, backwardEntry2594);
    panda$core$String* $tmp2630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2628, &$s2629);
    (($fn2631) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2630);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry2592, p_out);
    panda$core$String* $tmp2633 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2632 = $tmp2633;
    panda$core$String* $tmp2635 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2634 = $tmp2635;
    panda$core$String* $tmp2637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2636, inclusive2572);
    panda$core$String* $tmp2639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2637, &$s2638);
    panda$core$String* $tmp2640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2639, forwardEntryInclusive2632);
    panda$core$String* $tmp2642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2640, &$s2641);
    panda$core$String* $tmp2644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2643, forwardEntryExclusive2634);
    panda$core$String* $tmp2646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2644, &$s2645);
    panda$core$String* $tmp2647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2642, $tmp2646);
    (($fn2648) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2647);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2632, p_out);
    panda$core$String* $tmp2650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2649, start2529);
    panda$core$String* $tmp2652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2650, &$s2651);
    panda$core$String* $tmp2653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2652, end2557);
    panda$core$String* $tmp2655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2653, &$s2654);
    panda$core$String* $tmp2656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2655, loopStart2582);
    panda$core$String* $tmp2658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2656, &$s2657);
    panda$core$String* $tmp2659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2658, loopEnd2586);
    panda$core$String* $tmp2661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2659, &$s2660);
    (($fn2662) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2661);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2634, p_out);
    panda$core$String* $tmp2664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2663, start2529);
    panda$core$String* $tmp2666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2664, &$s2665);
    panda$core$String* $tmp2667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2666, end2557);
    panda$core$String* $tmp2669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2667, &$s2668);
    panda$core$String* $tmp2670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2669, loopStart2582);
    panda$core$String* $tmp2672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2670, &$s2671);
    panda$core$String* $tmp2673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2672, loopEnd2586);
    panda$core$String* $tmp2675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2673, &$s2674);
    (($fn2676) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2675);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry2594, p_out);
    panda$core$String* $tmp2678 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive2677 = $tmp2678;
    panda$core$String* $tmp2680 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive2679 = $tmp2680;
    panda$core$String* $tmp2682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2681, inclusive2572);
    panda$core$String* $tmp2684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2682, &$s2683);
    panda$core$String* $tmp2685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2684, backwardEntryInclusive2677);
    panda$core$String* $tmp2687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2685, &$s2686);
    panda$core$String* $tmp2689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2688, backwardEntryExclusive2679);
    panda$core$String* $tmp2691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2689, &$s2690);
    panda$core$String* $tmp2692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2687, $tmp2691);
    (($fn2693) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2692);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive2677, p_out);
    panda$core$String* $tmp2695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2694, start2529);
    panda$core$String* $tmp2697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2695, &$s2696);
    panda$core$String* $tmp2698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2697, end2557);
    panda$core$String* $tmp2700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2698, &$s2699);
    panda$core$String* $tmp2701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2700, loopStart2582);
    panda$core$String* $tmp2703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2701, &$s2702);
    panda$core$String* $tmp2704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2703, loopEnd2586);
    panda$core$String* $tmp2706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2704, &$s2705);
    (($fn2707) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2706);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive2679, p_out);
    panda$core$String* $tmp2709 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest2708 = $tmp2709;
    panda$core$String* $tmp2711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2710, start2529);
    panda$core$String* $tmp2713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2711, &$s2712);
    panda$core$String* $tmp2714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2713, end2557);
    panda$core$String* $tmp2716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2714, &$s2715);
    panda$core$String* $tmp2717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2716, loopStart2582);
    panda$core$String* $tmp2719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2717, &$s2718);
    panda$core$String* $tmp2720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2719, loopEnd2586);
    panda$core$String* $tmp2722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2720, &$s2721);
    (($fn2723) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2722);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2582, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2497, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2588, p_out);
    panda$core$String* $tmp2725 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2724 = $tmp2725;
    panda$core$String* $tmp2727 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel2726 = $tmp2727;
    panda$core$String* $tmp2729 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel2728 = $tmp2729;
    panda$core$String* $tmp2731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2730, direction2608);
    panda$core$String* $tmp2733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2731, &$s2732);
    panda$core$String* $tmp2734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2733, forwardLabel2726);
    panda$core$String* $tmp2736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2734, &$s2735);
    panda$core$String* $tmp2737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2736, backwardLabel2728);
    panda$core$String* $tmp2739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2737, &$s2738);
    (($fn2740) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2739);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel2726, p_out);
    panda$core$String* $tmp2742 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2741 = $tmp2742;
    panda$core$String* $tmp2744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2743, numberType2524);
    panda$core$String* $tmp2746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2744, &$s2745);
    panda$core$String* $tmp2747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2746, forwardDelta2741);
    panda$core$String* $tmp2749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2747, &$s2748);
    panda$core$String* $tmp2750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2749, end2557);
    panda$core$String* $tmp2752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2750, &$s2751);
    panda$core$String* $tmp2753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2752, index2527);
    panda$core$String* $tmp2755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2753, &$s2754);
    (($fn2756) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2755);
    panda$core$String* $tmp2758 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2757 = $tmp2758;
    panda$core$String* $tmp2760 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2759 = $tmp2760;
    panda$core$String* $tmp2762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2761, inclusive2572);
    panda$core$String* $tmp2764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2762, &$s2763);
    panda$core$String* $tmp2765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2764, forwardInclusiveLabel2757);
    panda$core$String* $tmp2767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2765, &$s2766);
    panda$core$String* $tmp2769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2768, forwardExclusiveLabel2759);
    panda$core$String* $tmp2771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2769, &$s2770);
    panda$core$String* $tmp2772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2767, $tmp2771);
    (($fn2773) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2772);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2757, p_out);
    panda$core$String* $tmp2775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2774, forwardDelta2741);
    panda$core$String* $tmp2777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2775, &$s2776);
    panda$core$String* $tmp2778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2777, step2570);
    panda$core$String* $tmp2780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2778, &$s2779);
    panda$core$String* $tmp2781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2780, loopInc2724);
    panda$core$String* $tmp2783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2781, &$s2782);
    panda$core$String* $tmp2784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2783, loopEnd2586);
    panda$core$String* $tmp2786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2784, &$s2785);
    (($fn2787) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2786);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2759, p_out);
    panda$core$String* $tmp2789 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2788 = $tmp2789;
    panda$core$String* $tmp2791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2790, forwardDelta2741);
    panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2791, &$s2792);
    panda$core$String* $tmp2794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2793, step2570);
    panda$core$String* $tmp2796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2794, &$s2795);
    panda$core$String* $tmp2797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2796, loopInc2724);
    panda$core$String* $tmp2799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2797, &$s2798);
    panda$core$String* $tmp2800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2799, loopEnd2586);
    panda$core$String* $tmp2802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2800, &$s2801);
    (($fn2803) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2802);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel2728, p_out);
    panda$core$String* $tmp2805 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta2804 = $tmp2805;
    panda$core$String* $tmp2807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2806, numberType2524);
    panda$core$String* $tmp2809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2807, &$s2808);
    panda$core$String* $tmp2810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2809, backwardDelta2804);
    panda$core$String* $tmp2812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2810, &$s2811);
    panda$core$String* $tmp2813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2812, index2527);
    panda$core$String* $tmp2815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2813, &$s2814);
    panda$core$String* $tmp2816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2815, end2557);
    panda$core$String* $tmp2818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2816, &$s2817);
    (($fn2819) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2818);
    panda$core$String* $tmp2821 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel2820 = $tmp2821;
    panda$core$String* $tmp2823 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel2822 = $tmp2823;
    panda$core$String* $tmp2825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2824, inclusive2572);
    panda$core$String* $tmp2827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2825, &$s2826);
    panda$core$String* $tmp2828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2827, backwardInclusiveLabel2820);
    panda$core$String* $tmp2830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2828, &$s2829);
    panda$core$String* $tmp2832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2831, backwardExclusiveLabel2822);
    panda$core$String* $tmp2834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2832, &$s2833);
    panda$core$String* $tmp2835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2830, $tmp2834);
    (($fn2836) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2835);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel2820, p_out);
    panda$core$String* $tmp2838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2837, backwardDelta2804);
    panda$core$String* $tmp2840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2838, &$s2839);
    panda$core$String* $tmp2841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2840, step2570);
    panda$core$String* $tmp2843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2841, &$s2842);
    panda$core$String* $tmp2844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2843, loopInc2724);
    panda$core$String* $tmp2846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2844, &$s2845);
    panda$core$String* $tmp2847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2846, loopEnd2586);
    panda$core$String* $tmp2849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2847, &$s2848);
    (($fn2850) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2849);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel2822, p_out);
    panda$core$String* $tmp2852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2851, backwardDelta2804);
    panda$core$String* $tmp2854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2852, &$s2853);
    panda$core$String* $tmp2855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2854, step2570);
    panda$core$String* $tmp2857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2855, &$s2856);
    panda$core$String* $tmp2858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2857, loopInc2724);
    panda$core$String* $tmp2860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2858, &$s2859);
    panda$core$String* $tmp2861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2860, loopEnd2586);
    panda$core$String* $tmp2863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2861, &$s2862);
    (($fn2864) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2863);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2724, p_out);
    panda$core$String* $tmp2866 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc2865 = $tmp2866;
    panda$core$String* $tmp2868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2867, index2527);
    panda$core$String* $tmp2870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2868, &$s2869);
    panda$core$String* $tmp2871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2870, step2570);
    panda$core$String* $tmp2873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2871, &$s2872);
    (($fn2874) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2873);
    panda$core$String* $tmp2876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2875, loopStart2582);
    panda$core$String* $tmp2878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2876, &$s2877);
    (($fn2879) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2878);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2586, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2883;
    panda$core$String* range2894;
    org$pandalanguage$pandac$IRNode* block2897;
    org$pandalanguage$pandac$Type* t2899;
    panda$core$String* llt2902;
    panda$core$String* indexType2904;
    org$pandalanguage$pandac$ClassDecl* cl2910;
    org$pandalanguage$pandac$FieldDecl* field2918;
    panda$core$String* numberType2924;
    panda$core$String* index2927;
    panda$core$String* start2929;
    panda$core$String* indexValuePtr2942;
    panda$core$String* end2957;
    panda$core$String* step2970;
    panda$core$String* inclusive2983;
    panda$core$String* loopStart2993;
    panda$core$String* loopBody2995;
    panda$core$String* loopEnd2997;
    panda$core$String* loopTest2999;
    panda$core$String* forwardEntry3003;
    panda$core$String* backwardEntry3005;
    panda$core$String* signPrefix3007;
    panda$core$String* direction3019;
    panda$core$String* forwardEntryInclusive3043;
    panda$core$String* forwardEntryExclusive3045;
    panda$core$String* backwardEntryInclusive3088;
    panda$core$String* backwardEntryExclusive3090;
    panda$core$String* backwardEntryExclusiveTest3119;
    panda$core$String* loopInc3135;
    panda$core$String* forwardLabel3137;
    panda$core$String* backwardLabel3139;
    panda$core$String* forwardDelta3152;
    panda$core$String* forwardInclusiveLabel3168;
    panda$core$String* forwardExclusiveLabel3170;
    panda$core$String* forwardExclusiveTest3199;
    panda$core$String* backwardDelta3215;
    panda$core$String* backwardInclusiveLabel3231;
    panda$core$String* backwardExclusiveLabel3233;
    panda$core$String* inc3276;
    panda$core$Bit $tmp2880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp2880.value);
    panda$core$Int64 $tmp2881 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp2882 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2881, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2882.value);
    panda$core$Object* $tmp2884 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2883 = ((org$pandalanguage$pandac$IRNode*) $tmp2884);
    panda$core$Object* $tmp2885 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2885)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2886.value);
    panda$core$Object* $tmp2887 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2888 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp2887)->type->subtypes);
    panda$core$Bit $tmp2889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2888, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2889.value);
    panda$core$Object* $tmp2890 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2891 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2890)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2893 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2891))->name, &$s2892);
    PANDA_ASSERT($tmp2893.value);
    panda$core$Object* $tmp2895 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2896 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2895), p_out);
    range2894 = $tmp2896;
    panda$core$Object* $tmp2898 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2897 = ((org$pandalanguage$pandac$IRNode*) $tmp2898);
    panda$core$Object* $tmp2900 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2901 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2900)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2899 = ((org$pandalanguage$pandac$Type*) $tmp2901);
    panda$core$String* $tmp2903 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2899);
    llt2902 = $tmp2903;
    panda$core$Bit $tmp2905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2899->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2905.value) {
    {
        panda$core$Int64 $tmp2906 = panda$collections$Array$get_count$R$panda$core$Int64(t2899->subtypes);
        panda$core$Bit $tmp2907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2906, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2907.value);
        panda$core$Object* $tmp2908 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2899->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2909 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2908));
        indexType2904 = $tmp2909;
    }
    }
    else {
    {
        indexType2904 = llt2902;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2911 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2899);
    cl2910 = $tmp2911;
    PANDA_ASSERT(((panda$core$Bit) { cl2910 != NULL }).value);
    panda$collections$ListView* $tmp2912 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2910);
    ITable* $tmp2913 = ((panda$collections$CollectionView*) $tmp2912)->$class->itable;
    while ($tmp2913->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2913 = $tmp2913->next;
    }
    $fn2915 $tmp2914 = $tmp2913->methods[0];
    panda$core$Int64 $tmp2916 = $tmp2914(((panda$collections$CollectionView*) $tmp2912));
    panda$core$Bit $tmp2917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2916, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2917.value);
    panda$collections$ListView* $tmp2919 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2910);
    ITable* $tmp2920 = $tmp2919->$class->itable;
    while ($tmp2920->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2920 = $tmp2920->next;
    }
    $fn2922 $tmp2921 = $tmp2920->methods[0];
    panda$core$Object* $tmp2923 = $tmp2921($tmp2919, ((panda$core$Int64) { 0 }));
    field2918 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2923);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2918);
    panda$core$String* $tmp2925 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2918->type);
    numberType2924 = $tmp2925;
    panda$core$Bit $tmp2926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2883->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2926.value);
    panda$core$String* $tmp2928 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2883->payload));
    index2927 = $tmp2928;
    panda$core$String* $tmp2930 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2929 = $tmp2930;
    panda$core$String* $tmp2932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2931, numberType2924);
    panda$core$String* $tmp2934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2932, &$s2933);
    panda$core$String* $tmp2935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2934, start2929);
    panda$core$String* $tmp2937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2935, &$s2936);
    panda$core$String* $tmp2938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2937, range2894);
    panda$core$String* $tmp2940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2938, &$s2939);
    (($fn2941) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2940);
    panda$core$String* $tmp2943 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2942 = $tmp2943;
    org$pandalanguage$pandac$Type* $tmp2945 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2910);
    panda$core$String* $tmp2946 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2945);
    panda$core$String* $tmp2947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2944, $tmp2946);
    panda$core$String* $tmp2949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2947, &$s2948);
    panda$core$String* $tmp2950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2949, index2927);
    panda$core$String* $tmp2952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2950, &$s2951);
    panda$core$String* $tmp2953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2952, start2929);
    panda$core$String* $tmp2955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2953, &$s2954);
    (($fn2956) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2955);
    panda$core$String* $tmp2958 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2957 = $tmp2958;
    panda$core$String* $tmp2960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2959, numberType2924);
    panda$core$String* $tmp2962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2960, &$s2961);
    panda$core$String* $tmp2963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2962, end2957);
    panda$core$String* $tmp2965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2963, &$s2964);
    panda$core$String* $tmp2966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2965, range2894);
    panda$core$String* $tmp2968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2966, &$s2967);
    (($fn2969) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2968);
    panda$core$String* $tmp2971 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    step2970 = $tmp2971;
    panda$core$String* $tmp2973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2972, numberType2924);
    panda$core$String* $tmp2975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2973, &$s2974);
    panda$core$String* $tmp2976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2975, step2970);
    panda$core$String* $tmp2978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2976, &$s2977);
    panda$core$String* $tmp2979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2978, range2894);
    panda$core$String* $tmp2981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2979, &$s2980);
    (($fn2982) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2981);
    panda$core$String* $tmp2984 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2983 = $tmp2984;
    panda$core$String* $tmp2986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2985, inclusive2983);
    panda$core$String* $tmp2988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2986, &$s2987);
    panda$core$String* $tmp2989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2988, range2894);
    panda$core$String* $tmp2991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2989, &$s2990);
    (($fn2992) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2991);
    panda$core$String* $tmp2994 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2993 = $tmp2994;
    panda$core$String* $tmp2996 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2995 = $tmp2996;
    panda$core$String* $tmp2998 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2997 = $tmp2998;
    panda$core$String* $tmp3000 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2999 = $tmp3000;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3001 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3001->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3001->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3001, ((panda$core$String*) p_f->payload), loopEnd2997, loopTest2999);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3001));
    panda$core$String* $tmp3004 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry3003 = $tmp3004;
    panda$core$String* $tmp3006 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry3005 = $tmp3006;
    panda$core$Bit $tmp3009 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2899)->name, &$s3008);
    if ($tmp3009.value) {
    {
        signPrefix3007 = &$s3010;
    }
    }
    else {
    {
        panda$core$Bit $tmp3013 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2899)->name, &$s3012);
        bool $tmp3011 = $tmp3013.value;
        if ($tmp3011) goto $l3014;
        panda$core$Bit $tmp3016 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2899)->name, &$s3015);
        $tmp3011 = $tmp3016.value;
        $l3014:;
        panda$core$Bit $tmp3017 = { $tmp3011 };
        PANDA_ASSERT($tmp3017.value);
        signPrefix3007 = &$s3018;
    }
    }
    panda$core$Bit $tmp3021 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix3007, &$s3020);
    if ($tmp3021.value) {
    {
        panda$core$String* $tmp3022 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
        direction3019 = $tmp3022;
        panda$core$String* $tmp3024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3023, direction3019);
        panda$core$String* $tmp3026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3024, &$s3025);
        panda$core$String* $tmp3027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3026, step2970);
        panda$core$String* $tmp3029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3027, &$s3028);
        (($fn3030) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3029);
    }
    }
    else {
    {
        direction3019 = &$s3031;
    }
    }
    panda$core$String* $tmp3033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3032, direction3019);
    panda$core$String* $tmp3035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3033, &$s3034);
    panda$core$String* $tmp3036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3035, forwardEntry3003);
    panda$core$String* $tmp3038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3036, &$s3037);
    panda$core$String* $tmp3039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3038, backwardEntry3005);
    panda$core$String* $tmp3041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3039, &$s3040);
    (($fn3042) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3041);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry3003, p_out);
    panda$core$String* $tmp3044 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive3043 = $tmp3044;
    panda$core$String* $tmp3046 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive3045 = $tmp3046;
    panda$core$String* $tmp3048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3047, inclusive2983);
    panda$core$String* $tmp3050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3048, &$s3049);
    panda$core$String* $tmp3051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3050, forwardEntryInclusive3043);
    panda$core$String* $tmp3053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3051, &$s3052);
    panda$core$String* $tmp3055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3054, forwardEntryExclusive3045);
    panda$core$String* $tmp3057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3055, &$s3056);
    panda$core$String* $tmp3058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3053, $tmp3057);
    (($fn3059) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3058);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive3043, p_out);
    panda$core$String* $tmp3061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3060, start2929);
    panda$core$String* $tmp3063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3061, &$s3062);
    panda$core$String* $tmp3064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3063, end2957);
    panda$core$String* $tmp3066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3064, &$s3065);
    panda$core$String* $tmp3067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3066, loopStart2993);
    panda$core$String* $tmp3069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3067, &$s3068);
    panda$core$String* $tmp3070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3069, loopEnd2997);
    panda$core$String* $tmp3072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3070, &$s3071);
    (($fn3073) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3072);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive3045, p_out);
    panda$core$String* $tmp3075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3074, start2929);
    panda$core$String* $tmp3077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3075, &$s3076);
    panda$core$String* $tmp3078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3077, end2957);
    panda$core$String* $tmp3080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3078, &$s3079);
    panda$core$String* $tmp3081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3080, loopStart2993);
    panda$core$String* $tmp3083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3081, &$s3082);
    panda$core$String* $tmp3084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3083, loopEnd2997);
    panda$core$String* $tmp3086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3084, &$s3085);
    (($fn3087) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3086);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry3005, p_out);
    panda$core$String* $tmp3089 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive3088 = $tmp3089;
    panda$core$String* $tmp3091 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive3090 = $tmp3091;
    panda$core$String* $tmp3093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3092, inclusive2983);
    panda$core$String* $tmp3095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3093, &$s3094);
    panda$core$String* $tmp3096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3095, backwardEntryInclusive3088);
    panda$core$String* $tmp3098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3096, &$s3097);
    panda$core$String* $tmp3100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3099, backwardEntryExclusive3090);
    panda$core$String* $tmp3102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3100, &$s3101);
    panda$core$String* $tmp3103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3098, $tmp3102);
    (($fn3104) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3103);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive3088, p_out);
    panda$core$String* $tmp3106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3105, start2929);
    panda$core$String* $tmp3108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3106, &$s3107);
    panda$core$String* $tmp3109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3108, end2957);
    panda$core$String* $tmp3111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3109, &$s3110);
    panda$core$String* $tmp3112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3111, loopStart2993);
    panda$core$String* $tmp3114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3112, &$s3113);
    panda$core$String* $tmp3115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3114, loopEnd2997);
    panda$core$String* $tmp3117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3115, &$s3116);
    (($fn3118) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3117);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive3090, p_out);
    panda$core$String* $tmp3120 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest3119 = $tmp3120;
    panda$core$String* $tmp3122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3121, start2929);
    panda$core$String* $tmp3124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3122, &$s3123);
    panda$core$String* $tmp3125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3124, end2957);
    panda$core$String* $tmp3127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3125, &$s3126);
    panda$core$String* $tmp3128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3127, loopStart2993);
    panda$core$String* $tmp3130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3128, &$s3129);
    panda$core$String* $tmp3131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3130, loopEnd2997);
    panda$core$String* $tmp3133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3131, &$s3132);
    (($fn3134) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3133);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2993, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2897, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2999, p_out);
    panda$core$String* $tmp3136 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc3135 = $tmp3136;
    panda$core$String* $tmp3138 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel3137 = $tmp3138;
    panda$core$String* $tmp3140 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel3139 = $tmp3140;
    panda$core$String* $tmp3142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3141, direction3019);
    panda$core$String* $tmp3144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3142, &$s3143);
    panda$core$String* $tmp3145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3144, forwardLabel3137);
    panda$core$String* $tmp3147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3145, &$s3146);
    panda$core$String* $tmp3148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3147, backwardLabel3139);
    panda$core$String* $tmp3150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3148, &$s3149);
    (($fn3151) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3150);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel3137, p_out);
    panda$core$String* $tmp3153 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta3152 = $tmp3153;
    panda$core$String* $tmp3155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3154, numberType2924);
    panda$core$String* $tmp3157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3155, &$s3156);
    panda$core$String* $tmp3158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3157, forwardDelta3152);
    panda$core$String* $tmp3160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3158, &$s3159);
    panda$core$String* $tmp3161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3160, end2957);
    panda$core$String* $tmp3163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3161, &$s3162);
    panda$core$String* $tmp3164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3163, index2927);
    panda$core$String* $tmp3166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3164, &$s3165);
    (($fn3167) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3166);
    panda$core$String* $tmp3169 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel3168 = $tmp3169;
    panda$core$String* $tmp3171 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel3170 = $tmp3171;
    panda$core$String* $tmp3173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3172, inclusive2983);
    panda$core$String* $tmp3175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3173, &$s3174);
    panda$core$String* $tmp3176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3175, forwardInclusiveLabel3168);
    panda$core$String* $tmp3178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3176, &$s3177);
    panda$core$String* $tmp3180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3179, forwardExclusiveLabel3170);
    panda$core$String* $tmp3182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3180, &$s3181);
    panda$core$String* $tmp3183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3178, $tmp3182);
    (($fn3184) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3183);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel3168, p_out);
    panda$core$String* $tmp3186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3185, forwardDelta3152);
    panda$core$String* $tmp3188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3186, &$s3187);
    panda$core$String* $tmp3189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3188, step2970);
    panda$core$String* $tmp3191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3189, &$s3190);
    panda$core$String* $tmp3192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3191, loopInc3135);
    panda$core$String* $tmp3194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3192, &$s3193);
    panda$core$String* $tmp3195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3194, loopEnd2997);
    panda$core$String* $tmp3197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3195, &$s3196);
    (($fn3198) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3197);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel3170, p_out);
    panda$core$String* $tmp3200 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest3199 = $tmp3200;
    panda$core$String* $tmp3202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3201, forwardDelta3152);
    panda$core$String* $tmp3204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3202, &$s3203);
    panda$core$String* $tmp3205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3204, step2970);
    panda$core$String* $tmp3207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3205, &$s3206);
    panda$core$String* $tmp3208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3207, loopInc3135);
    panda$core$String* $tmp3210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3208, &$s3209);
    panda$core$String* $tmp3211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3210, loopEnd2997);
    panda$core$String* $tmp3213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3211, &$s3212);
    (($fn3214) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3213);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel3139, p_out);
    panda$core$String* $tmp3216 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta3215 = $tmp3216;
    panda$core$String* $tmp3218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3217, numberType2924);
    panda$core$String* $tmp3220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3218, &$s3219);
    panda$core$String* $tmp3221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3220, backwardDelta3215);
    panda$core$String* $tmp3223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3221, &$s3222);
    panda$core$String* $tmp3224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3223, index2927);
    panda$core$String* $tmp3226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3224, &$s3225);
    panda$core$String* $tmp3227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3226, end2957);
    panda$core$String* $tmp3229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3227, &$s3228);
    (($fn3230) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3229);
    panda$core$String* $tmp3232 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel3231 = $tmp3232;
    panda$core$String* $tmp3234 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel3233 = $tmp3234;
    panda$core$String* $tmp3236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3235, inclusive2983);
    panda$core$String* $tmp3238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3236, &$s3237);
    panda$core$String* $tmp3239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3238, backwardInclusiveLabel3231);
    panda$core$String* $tmp3241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3239, &$s3240);
    panda$core$String* $tmp3243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3242, backwardExclusiveLabel3233);
    panda$core$String* $tmp3245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3243, &$s3244);
    panda$core$String* $tmp3246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3241, $tmp3245);
    (($fn3247) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3246);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel3231, p_out);
    panda$core$String* $tmp3249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3248, backwardDelta3215);
    panda$core$String* $tmp3251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3249, &$s3250);
    panda$core$String* $tmp3252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3251, step2970);
    panda$core$String* $tmp3254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3252, &$s3253);
    panda$core$String* $tmp3255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3254, loopInc3135);
    panda$core$String* $tmp3257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3255, &$s3256);
    panda$core$String* $tmp3258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3257, loopEnd2997);
    panda$core$String* $tmp3260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3258, &$s3259);
    (($fn3261) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3260);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel3233, p_out);
    panda$core$String* $tmp3263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3262, backwardDelta3215);
    panda$core$String* $tmp3265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3263, &$s3264);
    panda$core$String* $tmp3266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3265, step2970);
    panda$core$String* $tmp3268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3266, &$s3267);
    panda$core$String* $tmp3269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3268, loopInc3135);
    panda$core$String* $tmp3271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3269, &$s3270);
    panda$core$String* $tmp3272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3271, loopEnd2997);
    panda$core$String* $tmp3274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3272, &$s3273);
    (($fn3275) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3274);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc3135, p_out);
    panda$core$String* $tmp3277 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc3276 = $tmp3277;
    panda$core$String* $tmp3279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3278, index2927);
    panda$core$String* $tmp3281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3279, &$s3280);
    panda$core$String* $tmp3282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3281, step2970);
    panda$core$String* $tmp3284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3282, &$s3283);
    (($fn3285) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3284);
    panda$core$String* $tmp3287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3286, loopStart2993);
    panda$core$String* $tmp3289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3287, &$s3288);
    (($fn3290) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3289);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2997, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    panda$core$Object* $tmp3291 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3292 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3291)->type);
    if ($tmp3292.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp3293 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3294 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3293)->type);
    if ($tmp3294.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_f, p_out);
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_w, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3301;
    panda$core$String* loopEnd3303;
    panda$core$Bit $tmp3295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp3295.value);
    panda$core$Int64 $tmp3296 = panda$collections$Array$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3296, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3297.value);
    panda$core$Object* $tmp3298 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3299 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3300 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3298)->type, $tmp3299);
    PANDA_ASSERT($tmp3300.value);
    panda$core$String* $tmp3302 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3301 = $tmp3302;
    panda$core$String* $tmp3304 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3303 = $tmp3304;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3305 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3305->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3305->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3305, ((panda$core$String*) p_w->payload), loopEnd3303, loopStart3301);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3305));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3301, p_out);
    panda$core$Object* $tmp3308 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3309 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3308), p_out);
    panda$core$String* $tmp3310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3307, $tmp3309);
    panda$core$String* $tmp3312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3310, &$s3311);
    panda$core$String* $tmp3313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3312, loopEnd3303);
    panda$core$String* $tmp3315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3313, &$s3314);
    (($fn3316) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3315);
    panda$core$Object* $tmp3317 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3317), p_out);
    panda$core$String* $tmp3319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3318, loopStart3301);
    panda$core$String* $tmp3321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3319, &$s3320);
    (($fn3322) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3321);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3303, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3329;
    panda$core$String* loopEnd3331;
    panda$core$Bit $tmp3323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp3323.value);
    panda$core$Int64 $tmp3324 = panda$collections$Array$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3324, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3325.value);
    panda$core$Object* $tmp3326 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3327 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3328 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3326)->type, $tmp3327);
    PANDA_ASSERT($tmp3328.value);
    panda$core$String* $tmp3330 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3329 = $tmp3330;
    panda$core$String* $tmp3332 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3331 = $tmp3332;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3333 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3333->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3333->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3333, ((panda$core$String*) p_d->payload), loopEnd3331, loopStart3329);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3333));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3329, p_out);
    panda$core$Object* $tmp3335 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3335), p_out);
    panda$core$Object* $tmp3337 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3338 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3337), p_out);
    panda$core$String* $tmp3339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3336, $tmp3338);
    panda$core$String* $tmp3341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3339, &$s3340);
    panda$core$String* $tmp3342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3341, loopStart3329);
    panda$core$String* $tmp3344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3342, &$s3343);
    (($fn3345) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3344);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3331, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3349;
    panda$core$String* loopEnd3351;
    panda$core$Bit $tmp3346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp3346.value);
    panda$core$Int64 $tmp3347 = panda$collections$Array$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3347, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3348.value);
    panda$core$String* $tmp3350 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3349 = $tmp3350;
    panda$core$String* $tmp3352 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3351 = $tmp3352;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3353 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3353->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3353->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3353, ((panda$core$String*) p_l->payload), loopEnd3351, loopStart3349);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3353));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3349, p_out);
    (($fn3356) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3355);
    panda$core$Object* $tmp3357 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3357), p_out);
    (($fn3359) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3358);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3351, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v3360;
    switch (p_target->kind.value) {
        case 1016:
        {
            v3360 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp3362 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v3360->type);
            panda$core$String* $tmp3363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3361, $tmp3362);
            panda$core$String* $tmp3365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3363, &$s3364);
            panda$core$String* $tmp3366 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3360);
            panda$core$String* $tmp3367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3365, $tmp3366);
            panda$core$String* $tmp3369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3367, &$s3368);
            (($fn3370) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3369);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp3372 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3360);
                panda$core$String* $tmp3373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3371, $tmp3372);
                panda$core$String* $tmp3375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3373, &$s3374);
                panda$core$String* $tmp3376 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp3377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3375, $tmp3376);
                panda$core$String* $tmp3379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3377, &$s3378);
                (($fn3380) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3379);
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
    panda$collections$Iterator* decl$Iter3394;
    org$pandalanguage$pandac$IRNode* decl3406;
    panda$core$Bit $tmp3384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp3383 = $tmp3384.value;
    if ($tmp3383) goto $l3385;
    panda$core$Bit $tmp3386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp3383 = $tmp3386.value;
    $l3385:;
    panda$core$Bit $tmp3387 = { $tmp3383 };
    bool $tmp3382 = $tmp3387.value;
    if ($tmp3382) goto $l3388;
    panda$core$Bit $tmp3389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp3382 = $tmp3389.value;
    $l3388:;
    panda$core$Bit $tmp3390 = { $tmp3382 };
    bool $tmp3381 = $tmp3390.value;
    if ($tmp3381) goto $l3391;
    panda$core$Bit $tmp3392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp3381 = $tmp3392.value;
    $l3391:;
    panda$core$Bit $tmp3393 = { $tmp3381 };
    PANDA_ASSERT($tmp3393.value);
    {
        ITable* $tmp3395 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3395->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3395 = $tmp3395->next;
        }
        $fn3397 $tmp3396 = $tmp3395->methods[0];
        panda$collections$Iterator* $tmp3398 = $tmp3396(((panda$collections$Iterable*) p_v->children));
        decl$Iter3394 = $tmp3398;
        $l3399:;
        ITable* $tmp3401 = decl$Iter3394->$class->itable;
        while ($tmp3401->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3401 = $tmp3401->next;
        }
        $fn3403 $tmp3402 = $tmp3401->methods[0];
        panda$core$Bit $tmp3404 = $tmp3402(decl$Iter3394);
        panda$core$Bit $tmp3405 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3404);
        if (!$tmp3405.value) goto $l3400;
        {
            ITable* $tmp3407 = decl$Iter3394->$class->itable;
            while ($tmp3407->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3407 = $tmp3407->next;
            }
            $fn3409 $tmp3408 = $tmp3407->methods[1];
            panda$core$Object* $tmp3410 = $tmp3408(decl$Iter3394);
            decl3406 = ((org$pandalanguage$pandac$IRNode*) $tmp3410);
            panda$core$Bit $tmp3411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl3406->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp3411.value);
            panda$core$Int64 $tmp3412 = panda$collections$Array$get_count$R$panda$core$Int64(decl3406->children);
            panda$core$Bit $tmp3413 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3412, ((panda$core$Int64) { 1 }));
            if ($tmp3413.value) {
            {
                panda$core$Object* $tmp3414 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3406->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp3415 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3406->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3414), ((org$pandalanguage$pandac$IRNode*) $tmp3415), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp3416 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3406->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3416), NULL, p_out);
            }
            }
        }
        goto $l3399;
        $l3400:;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3420;
    panda$core$String* result3430;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp3417 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp3418 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp3417, p_out);
            return $tmp3418;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp3419 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp3419;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp3421 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3422 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3421), p_out);
            base3420 = $tmp3422;
            panda$core$String* $tmp3424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3423, base3420);
            panda$core$String* $tmp3426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3424, &$s3425);
            panda$core$String* $tmp3427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3426, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name);
            panda$core$String* $tmp3429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3427, &$s3428);
            return $tmp3429;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp3431 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3432 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3431), p_out);
            result3430 = $tmp3432;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) result3430));
            return result3430;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue3436;
    panda$core$String* value3439;
    panda$core$String* t3440;
    panda$core$Int64 op3443;
    panda$core$String* right3445;
    panda$core$Bit $tmp3433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp3433.value);
    panda$core$Int64 $tmp3434 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3434, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3435.value);
    panda$core$Object* $tmp3437 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3438 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3437), p_out);
    lvalue3436 = $tmp3438;
    panda$core$Object* $tmp3441 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3442 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3441)->type);
    t3440 = $tmp3442;
    op3443 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp3444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op3443, ((panda$core$Int64) { 73 }));
    if ($tmp3444.value) {
    {
        panda$core$Object* $tmp3446 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp3447 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3446), p_out);
        right3445 = $tmp3447;
        value3439 = right3445;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp3449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3448, lvalue3436);
    panda$core$String* $tmp3451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3449, &$s3450);
    panda$core$String* $tmp3452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3451, value3439);
    panda$core$String* $tmp3454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3452, &$s3453);
    (($fn3455) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3454);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $tmp3456 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3456, ((panda$core$Int64) { 1 }));
    if ($tmp3457.value) {
    {
        panda$core$Object* $tmp3459 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3460 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3459), p_out);
        panda$core$String* $tmp3461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3458, $tmp3460);
        panda$core$String* $tmp3463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3461, &$s3462);
        (($fn3464) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3463);
    }
    }
    else {
    {
        panda$core$Int64 $tmp3465 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp3466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3465, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp3466.value);
        (($fn3468) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3467);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp3472;
    panda$core$Int64 $tmp3469 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp3470 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3469, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3470.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp3471 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3471);
    }
    }
    panda$core$Int64 $tmp3473 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3472, ((panda$core$Int64) { 0 }), $tmp3473, ((panda$core$Bit) { false }));
    int64_t $tmp3475 = $tmp3472.min.value;
    panda$core$Int64 i3474 = { $tmp3475 };
    int64_t $tmp3477 = $tmp3472.max.value;
    bool $tmp3478 = $tmp3472.inclusive.value;
    bool $tmp3485 = 1 > 0;
    if ($tmp3485) goto $l3483; else goto $l3484;
    $l3483:;
    if ($tmp3478) goto $l3486; else goto $l3487;
    $l3486:;
    if ($tmp3475 <= $tmp3477) goto $l3479; else goto $l3481;
    $l3487:;
    if ($tmp3475 < $tmp3477) goto $l3479; else goto $l3481;
    $l3484:;
    if ($tmp3478) goto $l3488; else goto $l3489;
    $l3488:;
    if ($tmp3475 >= $tmp3477) goto $l3479; else goto $l3481;
    $l3489:;
    if ($tmp3475 > $tmp3477) goto $l3479; else goto $l3481;
    $l3479:;
    {
        panda$core$Object* $tmp3492 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3474);
        bool $tmp3491 = ((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3492)->loopLabel != NULL }).value;
        if (!$tmp3491) goto $l3493;
        panda$core$Object* $tmp3494 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3474);
        panda$core$Bit $tmp3495 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3494)->loopLabel, p_name);
        $tmp3491 = $tmp3495.value;
        $l3493:;
        panda$core$Bit $tmp3496 = { $tmp3491 };
        if ($tmp3496.value) {
        {
            panda$core$Object* $tmp3497 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3474);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3497);
        }
        }
    }
    $l3482:;
    if ($tmp3485) goto $l3499; else goto $l3500;
    $l3499:;
    int64_t $tmp3501 = $tmp3477 - i3474.value;
    if ($tmp3478) goto $l3502; else goto $l3503;
    $l3502:;
    if ($tmp3501 >= 1) goto $l3498; else goto $l3481;
    $l3503:;
    if ($tmp3501 > 1) goto $l3498; else goto $l3481;
    $l3500:;
    int64_t $tmp3505 = i3474.value - $tmp3477;
    if ($tmp3478) goto $l3506; else goto $l3507;
    $l3506:;
    if ($tmp3505 >= -1) goto $l3498; else goto $l3481;
    $l3507:;
    if ($tmp3505 > -1) goto $l3498; else goto $l3481;
    $l3498:;
    i3474.value += 1;
    goto $l3479;
    $l3481:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3509;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3510 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc3509 = $tmp3510;
    panda$core$String* $tmp3512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3511, desc3509->breakLabel);
    panda$core$String* $tmp3514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3512, &$s3513);
    (($fn3515) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3514);
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3516;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3517 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc3516 = $tmp3517;
    panda$core$String* $tmp3519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3518, desc3516->continueLabel);
    panda$core$String* $tmp3521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3519, &$s3520);
    (($fn3522) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3521);
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp3523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp3523.value);
    panda$core$Int64 $tmp3525 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3525, ((panda$core$Int64) { 1 }));
    bool $tmp3524 = $tmp3526.value;
    if ($tmp3524) goto $l3527;
    panda$core$Int64 $tmp3528 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3528, ((panda$core$Int64) { 2 }));
    $tmp3524 = $tmp3529.value;
    $l3527:;
    panda$core$Bit $tmp3530 = { $tmp3524 };
    PANDA_ASSERT($tmp3530.value);
    panda$core$Object* $tmp3532 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3533 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3532), p_out);
    panda$core$String* $tmp3534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3531, $tmp3533);
    panda$core$String* $tmp3536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3534, &$s3535);
    (($fn3537) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3536);
}
void org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp3546;
    org$pandalanguage$pandac$IRNode* w3565;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp3568;
    panda$core$Object* $tmp3539 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3540 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3539), p_out);
    panda$core$String* $tmp3541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3538, $tmp3540);
    panda$core$String* $tmp3543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3541, &$s3542);
    (($fn3544) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3543);
    panda$core$Int64 $tmp3545 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3545;
    panda$core$Int64 $tmp3547 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3546, ((panda$core$Int64) { 1 }), $tmp3547, ((panda$core$Bit) { false }));
    int64_t $tmp3549 = $tmp3546.min.value;
    panda$core$Int64 i3548 = { $tmp3549 };
    int64_t $tmp3551 = $tmp3546.max.value;
    bool $tmp3552 = $tmp3546.inclusive.value;
    bool $tmp3559 = 1 > 0;
    if ($tmp3559) goto $l3557; else goto $l3558;
    $l3557:;
    if ($tmp3552) goto $l3560; else goto $l3561;
    $l3560:;
    if ($tmp3549 <= $tmp3551) goto $l3553; else goto $l3555;
    $l3561:;
    if ($tmp3549 < $tmp3551) goto $l3553; else goto $l3555;
    $l3558:;
    if ($tmp3552) goto $l3562; else goto $l3563;
    $l3562:;
    if ($tmp3549 >= $tmp3551) goto $l3553; else goto $l3555;
    $l3563:;
    if ($tmp3549 > $tmp3551) goto $l3553; else goto $l3555;
    $l3553:;
    {
        panda$core$Object* $tmp3566 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i3548);
        w3565 = ((org$pandalanguage$pandac$IRNode*) $tmp3566);
        panda$core$Bit $tmp3567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3565->kind, ((panda$core$Int64) { 1042 }));
        if ($tmp3567.value) {
        {
            panda$core$Int64 $tmp3569 = panda$collections$Array$get_count$R$panda$core$Int64(w3565->children);
            panda$core$Int64 $tmp3570 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3569, ((panda$core$Int64) { 1 }));
            panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3568, ((panda$core$Int64) { 0 }), $tmp3570, ((panda$core$Bit) { false }));
            int64_t $tmp3572 = $tmp3568.min.value;
            panda$core$Int64 j3571 = { $tmp3572 };
            int64_t $tmp3574 = $tmp3568.max.value;
            bool $tmp3575 = $tmp3568.inclusive.value;
            bool $tmp3582 = 1 > 0;
            if ($tmp3582) goto $l3580; else goto $l3581;
            $l3580:;
            if ($tmp3575) goto $l3583; else goto $l3584;
            $l3583:;
            if ($tmp3572 <= $tmp3574) goto $l3576; else goto $l3578;
            $l3584:;
            if ($tmp3572 < $tmp3574) goto $l3576; else goto $l3578;
            $l3581:;
            if ($tmp3575) goto $l3585; else goto $l3586;
            $l3585:;
            if ($tmp3572 >= $tmp3574) goto $l3576; else goto $l3578;
            $l3586:;
            if ($tmp3572 > $tmp3574) goto $l3576; else goto $l3578;
            $l3576:;
            {
                panda$core$Object* $tmp3589 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w3565->children, j3571);
                panda$core$UInt64 $tmp3590 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3589));
                panda$core$String* $tmp3591 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3588, ((panda$core$Object*) wrap_panda$core$UInt64($tmp3590)));
                panda$core$String* $tmp3593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3591, &$s3592);
                (($fn3594) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3593);
            }
            $l3579:;
            if ($tmp3582) goto $l3596; else goto $l3597;
            $l3596:;
            int64_t $tmp3598 = $tmp3574 - j3571.value;
            if ($tmp3575) goto $l3599; else goto $l3600;
            $l3599:;
            if ($tmp3598 >= 1) goto $l3595; else goto $l3578;
            $l3600:;
            if ($tmp3598 > 1) goto $l3595; else goto $l3578;
            $l3597:;
            int64_t $tmp3602 = j3571.value - $tmp3574;
            if ($tmp3575) goto $l3603; else goto $l3604;
            $l3603:;
            if ($tmp3602 >= -1) goto $l3595; else goto $l3578;
            $l3604:;
            if ($tmp3602 > -1) goto $l3595; else goto $l3578;
            $l3595:;
            j3571.value += 1;
            goto $l3576;
            $l3578:;
            panda$core$Int64 $tmp3606 = panda$collections$Array$get_count$R$panda$core$Int64(w3565->children);
            panda$core$Int64 $tmp3607 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3606, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp3608 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w3565->children, $tmp3607);
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3608), p_out);
            (($fn3610) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3609);
        }
        }
        else {
        {
            panda$core$Bit $tmp3611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3565->kind, ((panda$core$Int64) { 1043 }));
            PANDA_ASSERT($tmp3611.value);
            panda$core$Int64 $tmp3612 = panda$collections$Array$get_count$R$panda$core$Int64(w3565->children);
            panda$core$Bit $tmp3613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3612, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp3613.value);
            (($fn3615) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3614);
            panda$core$Object* $tmp3616 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w3565->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3616), p_out);
        }
        }
    }
    $l3556:;
    if ($tmp3559) goto $l3618; else goto $l3619;
    $l3618:;
    int64_t $tmp3620 = $tmp3551 - i3548.value;
    if ($tmp3552) goto $l3621; else goto $l3622;
    $l3621:;
    if ($tmp3620 >= 1) goto $l3617; else goto $l3555;
    $l3622:;
    if ($tmp3620 > 1) goto $l3617; else goto $l3555;
    $l3619:;
    int64_t $tmp3624 = i3548.value - $tmp3551;
    if ($tmp3552) goto $l3625; else goto $l3626;
    $l3625:;
    if ($tmp3624 >= -1) goto $l3617; else goto $l3555;
    $l3626:;
    if ($tmp3624 > -1) goto $l3617; else goto $l3555;
    $l3617:;
    i3548.value += 1;
    goto $l3553;
    $l3555:;
    panda$core$Int64 $tmp3628 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3628;
    (($fn3630) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3629);
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
    panda$core$String* result3631;
    org$pandalanguage$pandac$Type* $tmp3632 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp3633 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3632);
    result3631 = $tmp3633;
    panda$core$Bit $tmp3635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp3634 = $tmp3635.value;
    if (!$tmp3634) goto $l3636;
    panda$core$Bit $tmp3638 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result3631, &$s3637);
    panda$core$Bit $tmp3639 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3638);
    $tmp3634 = $tmp3639.value;
    $l3636:;
    panda$core$Bit $tmp3640 = { $tmp3634 };
    if ($tmp3640.value) {
    {
        panda$core$String* $tmp3642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3631, &$s3641);
        return $tmp3642;
    }
    }
    return result3631;
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator3656;
    panda$collections$Iterator* p$Iter3667;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3679;
    panda$io$MemoryOutputStream* bodyBuffer3702;
    panda$io$IndentedOutputStream* indentedBody3705;
    panda$collections$Iterator* s$Iter3708;
    org$pandalanguage$pandac$IRNode* s3720;
    panda$core$Object* $tmp3643 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3643)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s3644;
    (($fn3645) self->methodHeaderBuffer->$class->vtable[20])(self->methodHeaderBuffer);
    panda$core$String* $tmp3647 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp3648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3646, $tmp3647);
    panda$core$String* $tmp3650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3648, &$s3649);
    panda$core$String* $tmp3651 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp3652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3650, $tmp3651);
    panda$core$String* $tmp3654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3652, &$s3653);
    (($fn3655) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3654);
    separator3656 = &$s3657;
    panda$core$Bit $tmp3658 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp3659 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3658);
    if ($tmp3659.value) {
    {
        panda$core$String* $tmp3661 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp3662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3660, $tmp3661);
        panda$core$String* $tmp3664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3662, &$s3663);
        (($fn3665) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3664);
        separator3656 = &$s3666;
    }
    }
    {
        ITable* $tmp3668 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3668->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3668 = $tmp3668->next;
        }
        $fn3670 $tmp3669 = $tmp3668->methods[0];
        panda$collections$Iterator* $tmp3671 = $tmp3669(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3667 = $tmp3671;
        $l3672:;
        ITable* $tmp3674 = p$Iter3667->$class->itable;
        while ($tmp3674->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3674 = $tmp3674->next;
        }
        $fn3676 $tmp3675 = $tmp3674->methods[0];
        panda$core$Bit $tmp3677 = $tmp3675(p$Iter3667);
        panda$core$Bit $tmp3678 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3677);
        if (!$tmp3678.value) goto $l3673;
        {
            ITable* $tmp3680 = p$Iter3667->$class->itable;
            while ($tmp3680->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3680 = $tmp3680->next;
            }
            $fn3682 $tmp3681 = $tmp3680->methods[1];
            panda$core$Object* $tmp3683 = $tmp3681(p$Iter3667);
            p3679 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3683);
            panda$core$String* $tmp3685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3684, separator3656);
            panda$core$String* $tmp3687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3685, &$s3686);
            panda$core$String* $tmp3688 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p3679->type);
            panda$core$String* $tmp3689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3687, $tmp3688);
            panda$core$String* $tmp3691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3689, &$s3690);
            panda$core$String* $tmp3692 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p3679->name);
            panda$core$String* $tmp3693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3691, $tmp3692);
            panda$core$String* $tmp3695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3693, &$s3694);
            (($fn3696) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3695);
            separator3656 = &$s3697;
        }
        goto $l3672;
        $l3673:;
    }
    (($fn3699) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3698);
    panda$core$Int64 $tmp3700 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3700;
    panda$core$Bit $tmp3701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp3701.value);
    panda$io$MemoryOutputStream* $tmp3703 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp3703->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp3703->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp3703);
    bodyBuffer3702 = $tmp3703;
    panda$io$IndentedOutputStream* $tmp3706 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp3706->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3706->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3706, ((panda$io$OutputStream*) bodyBuffer3702));
    indentedBody3705 = $tmp3706;
    {
        ITable* $tmp3709 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp3709->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3709 = $tmp3709->next;
        }
        $fn3711 $tmp3710 = $tmp3709->methods[0];
        panda$collections$Iterator* $tmp3712 = $tmp3710(((panda$collections$Iterable*) p_body->children));
        s$Iter3708 = $tmp3712;
        $l3713:;
        ITable* $tmp3715 = s$Iter3708->$class->itable;
        while ($tmp3715->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3715 = $tmp3715->next;
        }
        $fn3717 $tmp3716 = $tmp3715->methods[0];
        panda$core$Bit $tmp3718 = $tmp3716(s$Iter3708);
        panda$core$Bit $tmp3719 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3718);
        if (!$tmp3719.value) goto $l3714;
        {
            ITable* $tmp3721 = s$Iter3708->$class->itable;
            while ($tmp3721->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3721 = $tmp3721->next;
            }
            $fn3723 $tmp3722 = $tmp3721->methods[1];
            panda$core$Object* $tmp3724 = $tmp3722(s$Iter3708);
            s3720 = ((org$pandalanguage$pandac$IRNode*) $tmp3724);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s3720, indentedBody3705);
        }
        goto $l3713;
        $l3714:;
    }
    panda$core$String* $tmp3726 = (($fn3725) self->methodHeaderBuffer->$class->vtable[0])(self->methodHeaderBuffer);
    (($fn3727) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3726);
    panda$core$String* $tmp3729 = (($fn3728) bodyBuffer3702->$class->vtable[0])(bodyBuffer3702);
    (($fn3730) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3729);
    panda$core$Int64 $tmp3731 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3731;
    (($fn3733) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3732);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path3740;
    PANDA_ASSERT(((panda$core$Bit) { self->currentClass == NULL }).value);
    self->currentClass = p_cl;
    panda$collections$Set$clear(self->imports);
    (($fn3734) self->strings->$class->vtable[20])(self->strings);
    (($fn3735) self->declarations->$class->vtable[20])(self->declarations);
    (($fn3736) self->types->$class->vtable[20])(self->types);
    (($fn3737) self->methodsBuffer->$class->vtable[20])(self->methodsBuffer);
    (($fn3738) self->wrapperShimsBuffer->$class->vtable[20])(self->wrapperShimsBuffer);
    (($fn3739) self->shimsBuffer->$class->vtable[20])(self->shimsBuffer);
    panda$collections$Set$clear(self->declared);
    panda$collections$Set$clear(self->writtenTypes);
    panda$collections$Set$clear(self->writtenWrappers);
    panda$collections$HashMap$clear(self->classConstants);
    panda$collections$IdentityMap$clear(self->variableNames);
    self->varCount = ((panda$core$Int64) { 0 });
    panda$collections$HashMap$clear(self->reusedValues);
    panda$collections$IdentityMap$clear(self->methodShims);
    panda$io$File* $tmp3742 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self->hCodeGen, p_cl, &$s3741);
    path3740 = $tmp3742;
    panda$io$File* $tmp3743 = panda$io$File$parent$R$panda$io$File$Q(path3740);
    panda$io$File$createDirectories($tmp3743);
    panda$io$IndentedOutputStream* $tmp3744 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp3744->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3744->refCount.value = 1;
    panda$io$OutputStream* $tmp3746 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path3740);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3744, $tmp3746);
    self->out = $tmp3744;
    org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Bit $tmp3747 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp3747.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
        panda$core$String* $tmp3749 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3748, $tmp3749);
        panda$core$String* $tmp3752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3750, &$s3751);
        panda$core$String* $tmp3753 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3752, $tmp3753);
        panda$core$String* $tmp3756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3754, &$s3755);
        panda$core$String* $tmp3758 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3757, $tmp3758);
        panda$core$String* $tmp3761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3759, &$s3760);
        panda$core$String* $tmp3762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3756, $tmp3761);
        (($fn3763) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3762);
        panda$core$String* $tmp3765 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3764, $tmp3765);
        panda$core$String* $tmp3768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3766, &$s3767);
        panda$core$String* $tmp3770 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3769, $tmp3770);
        panda$core$String* $tmp3773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3771, &$s3772);
        org$pandalanguage$pandac$Type* $tmp3774 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$Int64 $tmp3775 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3774);
        panda$core$String* $tmp3776 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3773, ((panda$core$Object*) wrap_panda$core$Int64($tmp3775)));
        panda$core$String* $tmp3778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3776, &$s3777);
        panda$core$String* $tmp3779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3768, $tmp3778);
        (($fn3780) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3779);
        panda$core$String* $tmp3783 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3782, $tmp3783);
        panda$core$String* $tmp3786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3784, &$s3785);
        panda$core$String* $tmp3787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3781, $tmp3786);
        (($fn3788) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3787);
        (($fn3790) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3789);
        (($fn3792) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3791);
        (($fn3794) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3793);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$finish(self);
    self->currentClass = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* self) {
    (($fn3795) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->shimsBuffer));
    (($fn3796) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->wrapperShimsBuffer));
    (($fn3797) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->types));
    (($fn3798) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->strings));
    (($fn3799) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->methodsBuffer));
    (($fn3800) ((panda$core$Object*) self->out->out)->$class->vtable[1])(((panda$core$Object*) self->out->out));
}

