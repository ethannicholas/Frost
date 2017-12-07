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
typedef void (*$fn742)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn748)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn774)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn787)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn790)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn799)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn805)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn811)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn841)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn868)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn874)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn880)(panda$collections$Iterator*);
typedef void (*$fn887)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn970)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn976)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn982)(panda$collections$Iterator*);
typedef void (*$fn989)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1009)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1067)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1090)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1116)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1156)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1166)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1180)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1196)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1206)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1220)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1243)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1249)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1263)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1311)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1333)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1370)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1378)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1387)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1390)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1397)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1419)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1437)(panda$collections$CollectionView*);
typedef void (*$fn1459)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1598)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1616)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1714)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1722)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1734)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1738)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1744)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1750)(panda$collections$Iterator*);
typedef void (*$fn1759)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1762)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1995)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2021)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2037)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2042)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2068)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2073)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2079)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2085)(panda$collections$Iterator*);
typedef void (*$fn2090)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn2097)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2099)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Object* (*$fn2106)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2108)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Int64 (*$fn2113)(panda$collections$CollectionView*);
typedef void (*$fn2118)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2237)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2242)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2248)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2254)(panda$collections$Iterator*);
typedef void (*$fn2258)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2279)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2308)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2319)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2423)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2434)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2440)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2444)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2450)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2456)(panda$collections$Iterator*);
typedef void (*$fn2458)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2459)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2462)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2481)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2484)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2488)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2491)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2527)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2534)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2553)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2568)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2581)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2594)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2604)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2642)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2654)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2671)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2685)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2699)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2716)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2730)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2746)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2763)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2779)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2796)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2810)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2826)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2842)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2859)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2873)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2887)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2897)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2902)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2924)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2930)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2953)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2964)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2967)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2978)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2988)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3005)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3011)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3017)(panda$collections$Iterator*);
typedef void (*$fn3063)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3072)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3076)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3124)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3131)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3146)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3153)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3205)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3221)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3226)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3241)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3256)(panda$io$MemoryOutputStream*);
typedef void (*$fn3266)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3276)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3281)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3287)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3293)(panda$collections$Iterator*);
typedef void (*$fn3307)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3310)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3322)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3328)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3334)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3336)(panda$io$MemoryOutputStream*);
typedef void (*$fn3338)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3339)(panda$io$MemoryOutputStream*);
typedef void (*$fn3341)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3344)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3345)(panda$io$MemoryOutputStream*);
typedef void (*$fn3346)(panda$io$MemoryOutputStream*);
typedef void (*$fn3347)(panda$io$MemoryOutputStream*);
typedef void (*$fn3348)(panda$io$MemoryOutputStream*);
typedef void (*$fn3349)(panda$io$MemoryOutputStream*);
typedef void (*$fn3350)(panda$io$MemoryOutputStream*);
typedef void (*$fn3374)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3391)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3399)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3401)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3403)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3405)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3406)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3407)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3408)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3409)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3410)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3411)(panda$core$Object*);

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
static panda$core$String $s741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6C\x66\x2D\x3E\x76\x61\x6C\x75\x65", 12, 1 };
static panda$core$String $s769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5F", 9, 1 };
static panda$core$String $s827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7B\x20", 9, 1 };
static panda$core$String $s836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6C\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B\x20", 21, 1 };
static panda$core$String $s838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x6D\x65\x74\x68\x6F\x64\x73\x5B", 14, 1 };
static panda$core$String $s844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, 1 };
static panda$core$String $s847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x26", 3, 1 };
static panda$core$String $s857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 1 };
static panda$core$String $s864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, 1 };
static panda$core$String $s888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6C\x65\x2A\x29\x20\x26", 11, 1 };
static panda$core$String $s890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 1 };
static panda$core$String $s923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 1 };
static panda$core$String $s934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74\x79\x70\x65\x20", 6, 1 };
static panda$core$String $s951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20", 5, 1 };
static panda$core$String $s958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 1 };
static panda$core$String $s966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, 1 };
static panda$core$String $s991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 1 };
static panda$core$String $s1001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 1 };
static panda$core$String $s1002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 1 };
static panda$core$String $s1007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 1 };
static panda$core$String $s1024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 1 };
static panda$core$String $s1031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s1033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74\x79\x70\x65\x20", 6, 1 };
static panda$core$String $s1049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s1051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 1 };
static panda$core$String $s1053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20", 5, 1 };
static panda$core$String $s1056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 1 };
static panda$core$String $s1063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B", 4, 1 };
static panda$core$String $s1118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x5F", 2, 1 };
static panda$core$String $s1120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1 };
static panda$core$String $s1149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s1151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 1 };
static panda$core$String $s1161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s1164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1 };
static panda$core$String $s1173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1 };
static panda$core$String $s1189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s1191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s1201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s1204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1 };
static panda$core$String $s1213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s1224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s1225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s1226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s1227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s1228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s1230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s1231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s1232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s1233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s1234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 1 };
static panda$core$String $s1235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s1236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s1237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s1238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s1239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s1242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s1244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, 1 };
static panda$core$String $s1270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x3D\x20", 4, 1 };
static panda$core$String $s1273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s1279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, 1 };
static panda$core$String $s1281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20", 4, 1 };
static panda$core$String $s1284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s1347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x2D\x3E\x76\x74\x61\x62\x6C\x65\x5B", 17, 1 };
static panda$core$String $s1357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x29", 2, 1 };
static panda$core$String $s1363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x54\x61\x62\x6C\x65\x2A\x20", 8, 1 };
static panda$core$String $s1365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x2D\x3E\x69\x74\x61\x62\x6C\x65\x3B", 17, 1 };
static panda$core$String $s1371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28", 7, 1 };
static panda$core$String $s1373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x20\x21\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 33, 1 };
static panda$core$String $s1376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s1380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x6E\x65\x78\x74\x3B", 7, 1 };
static panda$core$String $s1389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s1446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x6D\x65\x74\x68\x6F\x64\x73\x5B", 10, 1 };
static panda$core$String $s1457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B", 2, 1 };
static panda$core$String $s1472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, 1 };
static panda$core$String $s1486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 9, 1 };
static panda$core$String $s1492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2A\x20", 9, 1 };
static panda$core$String $s1495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 1 };
static panda$core$String $s1497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 1 };
static panda$core$String $s1504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x2A", 2, 1 };
static panda$core$String $s1506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s1523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D", 7, 1 };
static panda$core$String $s1525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, 1 };
static panda$core$String $s1542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x72\x65\x61\x6C\x6C\x6F\x63\x28", 10, 1 };
static panda$core$String $s1548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2A\x20", 9, 1 };
static panda$core$String $s1554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 1 };
static panda$core$String $s1556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, 1 };
static panda$core$String $s1566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2B\x20", 3, 1 };
static panda$core$String $s1571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29", 7, 1 };
static panda$core$String $s1575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s1579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, 1 };
static panda$core$String $s1581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s1591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 15, 1 };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s1596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1 };
static panda$core$String $s1599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s1609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 15, 1 };
static panda$core$String $s1611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s1614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1 };
static panda$core$String $s1705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x26", 2, 1 };
static panda$core$String $s1720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s1776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3F\x20", 11, 1 };
static panda$core$String $s1781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x4E\x55\x4C\x4C\x29", 8, 1 };
static panda$core$String $s1784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x77\x72\x61\x70\x5F", 7, 1 };
static panda$core$String $s1792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 1 };
static panda$core$String $s1800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3F\x20", 11, 1 };
static panda$core$String $s1805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x4E\x55\x4C\x4C\x29", 8, 1 };
static panda$core$String $s1820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, 1 };
static panda$core$String $s1834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2D\x3E\x76\x61\x6C\x75\x65", 8, 1 };
static panda$core$String $s1852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C\x20\x3F\x20", 11, 1 };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x28", 4, 1 };
static panda$core$String $s1861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x30\x20\x7D\x29", 19, 1 };
static panda$core$String $s1863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20", 4, 1 };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x74\x72\x75\x65\x20\x7D\x29", 9, 1 };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29", 7, 1 };
static panda$core$String $s1882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8, 1 };
static panda$core$String $s1936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s1941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s1976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20", 4, 1 };
static panda$core$String $s1979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s1984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, 1 };
static panda$core$String $s1986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s1999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x28", 4, 1 };
static panda$core$String $s2013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 1 };
static panda$core$String $s2015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x6C\x6C\x6F\x63\x28", 7, 1 };
static panda$core$String $s2018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s2029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 32, 1 };
static panda$core$String $s2035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x3B", 7, 1 };
static panda$core$String $s2038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x72\x65\x66\x43\x6F\x75\x6E\x74\x2E\x76\x61\x6C\x75\x65\x20\x3D\x20\x31\x3B", 21, 1 };
static panda$core$String $s2044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s2053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 1 };
static panda$core$String $s2057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73", 2, 1 };
static panda$core$String $s2059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20", 25, 1 };
static panda$core$String $s2064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x63\x6C\x61\x73\x73\x2C\x20\x32\x2C\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x20\x22", 70, 1 };
static panda$core$String $s2089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C\x78", 2, 1 };
static panda$core$String $s2091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 1 };
static panda$core$String $s2100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 1 };
static panda$core$String $s2109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22\x2C\x20", 3, 1 };
static panda$core$String $s2116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x20\x7D\x3B", 6, 1 };
static panda$core$String $s2119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, 1 };
static panda$core$String $s2124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s2127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x73\x65\x6C\x66\x29", 7, 1 };
static panda$core$String $s2142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 1 };
static panda$core$String $s2143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s2147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x3D\x20\x4E\x55\x4C\x4C", 8, 1 };
static panda$core$String $s2151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, 1 };
static panda$core$String $s2153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s2168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s2169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s2173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C", 8, 1 };
static panda$core$String $s2177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, 1 };
static panda$core$String $s2179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1 };
static panda$core$String $s2186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 1 };
static panda$core$String $s2189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x66\x61\x6C\x73\x65\x20\x7D\x29", 23, 1 };
static panda$core$String $s2191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 1 };
static panda$core$String $s2201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s2211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s2257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s2261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 1 };
static panda$core$String $s2272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x32\x20", 7, 1 };
static panda$core$String $s2274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s2303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D\x20\x3D\x20", 10, 1 };
static panda$core$String $s2306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, 1 };
static panda$core$String $s2313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x72\x65\x65\x28", 5, 1 };
static panda$core$String $s2317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s2322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s2408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, 1 };
static panda$core$String $s2416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s2477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x7B", 9, 1 };
static panda$core$String $s2483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s2487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x6C\x73\x65\x20\x7B", 6, 1 };
static panda$core$String $s2490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s2504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, 1 };
static panda$core$String $s2543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x61\x72\x74\x2E\x76\x61\x6C\x75\x65\x3B", 13, 1 };
static panda$core$String $s2556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 1 };
static panda$core$String $s2566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1 };
static panda$core$String $s2571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x65\x6E\x64\x2E\x76\x61\x6C\x75\x65\x3B", 11, 1 };
static panda$core$String $s2584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x65\x70\x2E\x76\x61\x6C\x75\x65\x3B", 12, 1 };
static panda$core$String $s2597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s2599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x69\x6E\x63\x6C\x75\x73\x69\x76\x65\x2E\x76\x61\x6C\x75\x65\x3B", 17, 1 };
static panda$core$String $s2620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, 1 };
static panda$core$String $s2622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s2624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1 };
static panda$core$String $s2627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1 };
static panda$core$String $s2630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 1 };
static panda$core$String $s2632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s2635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 1 };
static panda$core$String $s2637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x30\x3B", 5, 1 };
static panda$core$String $s2643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s2644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x3D\x20", 4, 1 };
static panda$core$String $s2677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x20", 3, 1 };
static panda$core$String $s2691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, 1 };
static panda$core$String $s2722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, 1 };
static panda$core$String $s2738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x20", 3, 1 };
static panda$core$String $s2777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x3B", 7, 1 };
static panda$core$String $s2784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, 1 };
static panda$core$String $s2802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, 1 };
static panda$core$String $s2818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2D\x20", 9, 1 };
static panda$core$String $s2840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20\x2D", 5, 1 };
static panda$core$String $s2865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x2D", 4, 1 };
static panda$core$String $s2879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 1 };
static panda$core$String $s2882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 1 };
static panda$core$String $s2885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2B\x3D\x20", 10, 1 };
static panda$core$String $s2895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s2900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 1 };
static panda$core$String $s2919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, 1 };
static panda$core$String $s2922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s2928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 1 };
static panda$core$String $s2948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, 1 };
static panda$core$String $s2951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7B", 14, 1 };
static panda$core$String $s2966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s2969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s2979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, 1 };
static panda$core$String $s3036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s3061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s3070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x3B", 7, 1 };
static panda$core$String $s3120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s3122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 1 };
static panda$core$String $s3129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s3140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x50\x41\x4E\x44\x41\x5F\x41\x53\x53\x45\x52\x54\x28", 13, 1 };
static panda$core$String $s3144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s3147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20\x28", 8, 1 };
static panda$core$String $s3151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x7B", 9, 1 };
static panda$core$String $s3199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x73\x65\x20", 5, 1 };
static panda$core$String $s3203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s3220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B\x3B", 6, 1 };
static panda$core$String $s3225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x61\x75\x6C\x74\x3A", 8, 1 };
static panda$core$String $s3240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s3248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s3252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s3255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 1 };
static panda$core$String $s3257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s3268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s3277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70\x5F", 3, 1 };
static panda$core$String $s3305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s3343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s3352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x63", 2, 1 };
static panda$core$String $s3359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x77\x72\x61\x70\x5F", 15, 1 };
static panda$core$String $s3366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s3368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66\x29\x20\x7B", 8, 1 };
static panda$core$String $s3375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20", 4, 1 };
static panda$core$String $s3378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x72\x65\x73\x75\x6C\x74\x20\x3D\x20", 19, 1 };
static panda$core$String $s3380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s3383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 18, 1 };
static panda$core$String $s3388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s3392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x63\x6C\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20", 37, 1 };
static panda$core$String $s3393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s3396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x3B", 14, 1 };
static panda$core$String $s3400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x76\x61\x6C\x75\x65\x20\x3D\x20\x73\x65\x6C\x66\x3B", 25, 1 };
static panda$core$String $s3402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6E\x20\x72\x65\x73\x75\x6C\x74\x3B", 18, 1 };
static panda$core$String $s3404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };

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
    panda$core$Range$LTpanda$core$Int64$GT $tmp749;
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
    org$pandalanguage$pandac$IRNode* $tmp736 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp736->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp736->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp738 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp736, ((panda$core$Int64) { 1025 }), ((panda$core$Int64) { -1 }), $tmp738);
    panda$collections$Array$add$panda$collections$Array$T(children733, ((panda$core$Object*) $tmp736));
    org$pandalanguage$pandac$Type* $tmp739 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp740 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp739);
    if ($tmp740.value) {
    {
        (($fn742) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s741);
    }
    }
    panda$core$String* $tmp744 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s743, $tmp744);
    panda$core$String* $tmp747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp745, &$s746);
    (($fn748) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp747);
    panda$core$Int64 $tmp750 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp749, ((panda$core$Int64) { 0 }), $tmp750, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp752 = $tmp749.start.value;
    panda$core$Int64 i751 = { $tmp752 };
    int64_t $tmp754 = $tmp749.end.value;
    int64_t $tmp755 = $tmp749.step.value;
    bool $tmp756 = $tmp749.inclusive.value;
    bool $tmp763 = $tmp755 > 0;
    if ($tmp763) goto $l761; else goto $l762;
    $l761:;
    if ($tmp756) goto $l764; else goto $l765;
    $l764:;
    if ($tmp752 <= $tmp754) goto $l757; else goto $l759;
    $l765:;
    if ($tmp752 < $tmp754) goto $l757; else goto $l759;
    $l762:;
    if ($tmp756) goto $l766; else goto $l767;
    $l766:;
    if ($tmp752 >= $tmp754) goto $l757; else goto $l759;
    $l767:;
    if ($tmp752 > $tmp754) goto $l757; else goto $l759;
    $l757:;
    {
        panda$core$Object* $tmp770 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters695, i751);
        panda$core$String* $tmp771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s769, ((panda$core$String*) $tmp770));
        panda$core$String* $tmp773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp771, &$s772);
        (($fn774) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp773);
    }
    $l760:;
    if ($tmp763) goto $l776; else goto $l777;
    $l776:;
    int64_t $tmp778 = $tmp754 - i751.value;
    if ($tmp756) goto $l779; else goto $l780;
    $l779:;
    if ($tmp778 >= $tmp755) goto $l775; else goto $l759;
    $l780:;
    if ($tmp778 > $tmp755) goto $l775; else goto $l759;
    $l777:;
    int64_t $tmp782 = i751.value - $tmp754;
    if ($tmp756) goto $l783; else goto $l784;
    $l783:;
    if ($tmp782 >= -$tmp755) goto $l775; else goto $l759;
    $l784:;
    if ($tmp782 > -$tmp755) goto $l775; else goto $l759;
    $l775:;
    i751.value += $tmp755;
    goto $l757;
    $l759:;
    (($fn787) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s786);
    panda$core$Int64 $tmp788 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp788;
    (($fn790) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s789);
    self->currentMethod = oldMethod621;
    return result622;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces791;
    panda$core$String* previous794;
    panda$collections$Iterator* intfType$Iter796;
    org$pandalanguage$pandac$Type* intfType808;
    org$pandalanguage$pandac$ClassDecl* intf813;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC815;
    panda$collections$ListView* methods817;
    panda$core$String* name819;
    panda$core$MutableString* result829;
    panda$core$String* separator863;
    panda$collections$Iterator* m$Iter865;
    org$pandalanguage$pandac$MethodDecl* m877;
    org$pandalanguage$pandac$Type* $tmp792 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp793 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp792);
    interfaces791 = $tmp793;
    previous794 = &$s795;
    {
        ITable* $tmp797 = ((panda$collections$Iterable*) interfaces791)->$class->itable;
        while ($tmp797->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp797 = $tmp797->next;
        }
        $fn799 $tmp798 = $tmp797->methods[0];
        panda$collections$Iterator* $tmp800 = $tmp798(((panda$collections$Iterable*) interfaces791));
        intfType$Iter796 = $tmp800;
        $l801:;
        ITable* $tmp803 = intfType$Iter796->$class->itable;
        while ($tmp803->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp803 = $tmp803->next;
        }
        $fn805 $tmp804 = $tmp803->methods[0];
        panda$core$Bit $tmp806 = $tmp804(intfType$Iter796);
        panda$core$Bit $tmp807 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp806);
        if (!$tmp807.value) goto $l802;
        {
            ITable* $tmp809 = intfType$Iter796->$class->itable;
            while ($tmp809->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp809 = $tmp809->next;
            }
            $fn811 $tmp810 = $tmp809->methods[1];
            panda$core$Object* $tmp812 = $tmp810(intfType$Iter796);
            intfType808 = ((org$pandalanguage$pandac$Type*) $tmp812);
            org$pandalanguage$pandac$ClassDecl* $tmp814 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType808);
            intf813 = $tmp814;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp816 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf813);
            intfCC815 = $tmp816;
            panda$collections$ListView* $tmp818 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType808);
            methods817 = $tmp818;
            panda$core$String* $tmp821 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s820, $tmp821);
            panda$core$String* $tmp824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp822, &$s823);
            panda$core$String* $tmp825 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf813)->name);
            panda$core$String* $tmp826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp824, $tmp825);
            panda$core$String* $tmp828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp826, &$s827);
            name819 = $tmp828;
            panda$core$MutableString* $tmp830 = (panda$core$MutableString*) malloc(40);
            $tmp830->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp830->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp833 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp834 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp833);
            panda$core$String* $tmp835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s832, $tmp834);
            panda$core$String* $tmp837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp835, &$s836);
            ITable* $tmp839 = ((panda$collections$CollectionView*) methods817)->$class->itable;
            while ($tmp839->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp839 = $tmp839->next;
            }
            $fn841 $tmp840 = $tmp839->methods[0];
            panda$core$Int64 $tmp842 = $tmp840(((panda$collections$CollectionView*) methods817));
            panda$core$String* $tmp843 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s838, ((panda$core$Object*) wrap_panda$core$Int64($tmp842)));
            panda$core$String* $tmp845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp843, &$s844);
            panda$core$String* $tmp846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp845, name819);
            panda$core$String* $tmp848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp846, &$s847);
            panda$core$String* $tmp849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp837, $tmp848);
            org$pandalanguage$pandac$Type* $tmp851 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp852 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp851);
            panda$core$String* $tmp853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s850, $tmp852);
            panda$core$String* $tmp855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp853, &$s854);
            panda$core$String* $tmp856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp855, intfCC815->name);
            panda$core$String* $tmp858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp856, &$s857);
            panda$core$String* $tmp859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp858, previous794);
            panda$core$String* $tmp861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp859, &$s860);
            panda$core$String* $tmp862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp849, $tmp861);
            panda$core$MutableString$init$panda$core$String($tmp830, $tmp862);
            result829 = $tmp830;
            separator863 = &$s864;
            {
                ITable* $tmp866 = ((panda$collections$Iterable*) methods817)->$class->itable;
                while ($tmp866->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp866 = $tmp866->next;
                }
                $fn868 $tmp867 = $tmp866->methods[0];
                panda$collections$Iterator* $tmp869 = $tmp867(((panda$collections$Iterable*) methods817));
                m$Iter865 = $tmp869;
                $l870:;
                ITable* $tmp872 = m$Iter865->$class->itable;
                while ($tmp872->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp872 = $tmp872->next;
                }
                $fn874 $tmp873 = $tmp872->methods[0];
                panda$core$Bit $tmp875 = $tmp873(m$Iter865);
                panda$core$Bit $tmp876 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp875);
                if (!$tmp876.value) goto $l871;
                {
                    ITable* $tmp878 = m$Iter865->$class->itable;
                    while ($tmp878->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp878 = $tmp878->next;
                    }
                    $fn880 $tmp879 = $tmp878->methods[1];
                    panda$core$Object* $tmp881 = $tmp879(m$Iter865);
                    m877 = ((org$pandalanguage$pandac$MethodDecl*) $tmp881);
                    panda$core$MutableString$append$panda$core$String(result829, separator863);
                    separator863 = &$s882;
                    panda$core$Bit $tmp883 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m877->annotations);
                    if ($tmp883.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result829, &$s884);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp885 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m877, self->wrapperShims);
                        panda$core$MutableString$append$panda$core$String(result829, $tmp885);
                    }
                    }
                }
                goto $l870;
                $l871:;
            }
            panda$core$MutableString$append$panda$core$String(result829, &$s886);
            (($fn887) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result829));
            panda$core$String* $tmp889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s888, name819);
            panda$core$String* $tmp891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp889, &$s890);
            previous794 = $tmp891;
        }
        goto $l801;
        $l802:;
    }
    return previous794;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $tmp892 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self->hCodeGen, p_m);
    return $tmp892;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result894;
    org$pandalanguage$pandac$Type* declared895;
    org$pandalanguage$pandac$Type* inherited898;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* shim901;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    panda$core$Bit $tmp893 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
    if ($tmp893.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp896 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp897 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp896);
    declared895 = $tmp897;
    org$pandalanguage$pandac$Type* $tmp899 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited898 = $tmp899;
    panda$core$Bit $tmp900 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared895, inherited898);
    if ($tmp900.value) {
    {
        org$pandalanguage$pandac$Type* $tmp902 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp903 = org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(self, p_m, $tmp902, ((panda$io$OutputStream*) self->shims));
        shim901 = $tmp903;
        result894 = shim901->name;
    }
    }
    else {
    {
        panda$core$String* $tmp904 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        result894 = $tmp904;
    }
    }
    return result894;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result905;
    panda$core$String* type907;
    panda$collections$ListView* vtable919;
    panda$core$String* superPtr930;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC931;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant939;
    panda$core$MutableString* code943;
    panda$core$String* separator965;
    panda$collections$Iterator* m$Iter967;
    org$pandalanguage$pandac$MethodDecl* m979;
    panda$core$Object* $tmp906 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result905 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp906);
    if (((panda$core$Bit) { result905 == NULL }).value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        panda$core$Bit $tmp908 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp908.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp909 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp909->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp909->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp912 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp913 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp912)->name);
            panda$core$String* $tmp914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s911, $tmp913);
            panda$core$String* $tmp916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp914, &$s915);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp909, $tmp916, &$s917);
            result905 = $tmp909;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result905));
            panda$core$Object* $tmp918 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
            return ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp918);
        }
        }
        panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) p_cl));
        panda$collections$ListView* $tmp920 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable919 = $tmp920;
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp921 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
        $tmp921->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
        $tmp921->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp924 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp925 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp924)->name);
        panda$core$String* $tmp926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s923, $tmp925);
        panda$core$String* $tmp928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp926, &$s927);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp921, $tmp928, &$s929);
        result905 = $tmp921;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result905));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp932 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp933 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp932);
            superCC931 = $tmp933;
            panda$core$String* $tmp935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s934, superCC931->name);
            panda$core$String* $tmp937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp935, &$s936);
            superPtr930 = $tmp937;
        }
        }
        else {
        {
            superPtr930 = &$s938;
        }
        }
        org$pandalanguage$pandac$Type* $tmp940 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp941 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp940);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp942 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp941);
        clConstant939 = $tmp942;
        panda$core$MutableString* $tmp944 = (panda$core$MutableString*) malloc(40);
        $tmp944->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp944->refCount.value = 1;
        panda$core$String* $tmp947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s946, result905->name);
        panda$core$String* $tmp949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp947, &$s948);
        panda$core$String* $tmp950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp949, result905->name);
        panda$core$String* $tmp952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp950, &$s951);
        panda$core$String* $tmp954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s953, clConstant939->name);
        panda$core$String* $tmp956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp954, &$s955);
        panda$core$String* $tmp957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp956, superPtr930);
        panda$core$String* $tmp959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp957, &$s958);
        panda$core$String* $tmp960 = org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp959, $tmp960);
        panda$core$String* $tmp963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp961, &$s962);
        panda$core$String* $tmp964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp952, $tmp963);
        panda$core$MutableString$init$panda$core$String($tmp944, $tmp964);
        code943 = $tmp944;
        separator965 = &$s966;
        {
            ITable* $tmp968 = ((panda$collections$Iterable*) vtable919)->$class->itable;
            while ($tmp968->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp968 = $tmp968->next;
            }
            $fn970 $tmp969 = $tmp968->methods[0];
            panda$collections$Iterator* $tmp971 = $tmp969(((panda$collections$Iterable*) vtable919));
            m$Iter967 = $tmp971;
            $l972:;
            ITable* $tmp974 = m$Iter967->$class->itable;
            while ($tmp974->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp974 = $tmp974->next;
            }
            $fn976 $tmp975 = $tmp974->methods[0];
            panda$core$Bit $tmp977 = $tmp975(m$Iter967);
            panda$core$Bit $tmp978 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp977);
            if (!$tmp978.value) goto $l973;
            {
                ITable* $tmp980 = m$Iter967->$class->itable;
                while ($tmp980->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp980 = $tmp980->next;
                }
                $fn982 $tmp981 = $tmp980->methods[1];
                panda$core$Object* $tmp983 = $tmp981(m$Iter967);
                m979 = ((org$pandalanguage$pandac$MethodDecl*) $tmp983);
                panda$core$MutableString$append$panda$core$String(code943, separator965);
                panda$core$Bit $tmp984 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m979->annotations);
                if ($tmp984.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code943, &$s985);
                }
                }
                else {
                {
                    panda$core$String* $tmp986 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m979);
                    panda$core$MutableString$append$panda$core$String(code943, $tmp986);
                }
                }
                separator965 = &$s987;
            }
            goto $l972;
            $l973:;
        }
        panda$core$MutableString$append$panda$core$String(code943, &$s988);
        (($fn989) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code943));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    }
    }
    return result905;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name990;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result996;
    panda$core$String* type1000;
    org$pandalanguage$pandac$ClassDecl* value1012;
    panda$collections$ListView* valueVTable1015;
    panda$collections$ListView* vtable1025;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC1027;
    panda$core$String* superCast1030;
    panda$core$String* itable1035;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant1037;
    panda$core$MutableString* code1041;
    panda$core$String* separator1062;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1064;
    org$pandalanguage$pandac$MethodDecl* m1087;
    panda$core$String* methodName1092;
    panda$core$String* $tmp992 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s991, $tmp992);
    panda$core$String* $tmp995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp993, &$s994);
    name990 = $tmp995;
    panda$core$Object* $tmp997 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name990));
    result996 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp997);
    if (((panda$core$Bit) { result996 == NULL }).value) {
    {
        panda$core$Bit $tmp998 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp998.value) {
        {
            org$pandalanguage$pandac$Type* $tmp999 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp999);
            type1000 = &$s1001;
            panda$core$String* $tmp1003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1002, name990);
            panda$core$String* $tmp1005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1003, &$s1004);
            panda$core$String* $tmp1006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1005, type1000);
            panda$core$String* $tmp1008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1006, &$s1007);
            (($fn1009) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1008);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1010 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp1010->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp1010->refCount.value = 1;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1010, name990, type1000);
            result996 = $tmp1010;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp1013 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1014 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1013);
            value1012 = $tmp1014;
            panda$collections$ListView* $tmp1016 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value1012);
            valueVTable1015 = $tmp1016;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1017 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp1017->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp1017->refCount.value = 1;
            panda$core$String* $tmp1020 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1019, $tmp1020);
            panda$core$String* $tmp1023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1021, &$s1022);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1017, $tmp1023, &$s1024);
            result996 = $tmp1017;
            panda$collections$ListView* $tmp1026 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable1025 = $tmp1026;
            org$pandalanguage$pandac$ClassDecl* $tmp1028 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1029 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp1028);
            superCC1027 = $tmp1029;
            panda$core$String* $tmp1032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1031, superCC1027->name);
            panda$core$String* $tmp1034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1032, &$s1033);
            superCast1030 = $tmp1034;
            panda$core$String* $tmp1036 = org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable1035 = $tmp1036;
            org$pandalanguage$pandac$Type* $tmp1038 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1039 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1038);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1040 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp1039);
            clConstant1037 = $tmp1040;
            panda$core$MutableString* $tmp1042 = (panda$core$MutableString*) malloc(40);
            $tmp1042->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1042->refCount.value = 1;
            panda$core$String* $tmp1045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1044, result996->name);
            panda$core$String* $tmp1047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1045, &$s1046);
            panda$core$String* $tmp1048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1047, result996->name);
            panda$core$String* $tmp1050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1048, &$s1049);
            panda$core$String* $tmp1052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1051, clConstant1037->name);
            panda$core$String* $tmp1054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1052, &$s1053);
            panda$core$String* $tmp1055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1054, superCast1030);
            panda$core$String* $tmp1057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1055, &$s1056);
            panda$core$String* $tmp1058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1057, itable1035);
            panda$core$String* $tmp1060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1058, &$s1059);
            panda$core$String* $tmp1061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1050, $tmp1060);
            panda$core$MutableString$init$panda$core$String($tmp1042, $tmp1061);
            code1041 = $tmp1042;
            separator1062 = &$s1063;
            ITable* $tmp1065 = ((panda$collections$CollectionView*) valueVTable1015)->$class->itable;
            while ($tmp1065->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1065 = $tmp1065->next;
            }
            $fn1067 $tmp1066 = $tmp1065->methods[0];
            panda$core$Int64 $tmp1068 = $tmp1066(((panda$collections$CollectionView*) valueVTable1015));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1064, ((panda$core$Int64) { 0 }), $tmp1068, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1070 = $tmp1064.start.value;
            panda$core$Int64 i1069 = { $tmp1070 };
            int64_t $tmp1072 = $tmp1064.end.value;
            int64_t $tmp1073 = $tmp1064.step.value;
            bool $tmp1074 = $tmp1064.inclusive.value;
            bool $tmp1081 = $tmp1073 > 0;
            if ($tmp1081) goto $l1079; else goto $l1080;
            $l1079:;
            if ($tmp1074) goto $l1082; else goto $l1083;
            $l1082:;
            if ($tmp1070 <= $tmp1072) goto $l1075; else goto $l1077;
            $l1083:;
            if ($tmp1070 < $tmp1072) goto $l1075; else goto $l1077;
            $l1080:;
            if ($tmp1074) goto $l1084; else goto $l1085;
            $l1084:;
            if ($tmp1070 >= $tmp1072) goto $l1075; else goto $l1077;
            $l1085:;
            if ($tmp1070 > $tmp1072) goto $l1075; else goto $l1077;
            $l1075:;
            {
                ITable* $tmp1088 = vtable1025->$class->itable;
                while ($tmp1088->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1088 = $tmp1088->next;
                }
                $fn1090 $tmp1089 = $tmp1088->methods[0];
                panda$core$Object* $tmp1091 = $tmp1089(vtable1025, i1069);
                m1087 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1091);
                if (((panda$core$Bit) { ((panda$core$Object*) m1087->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp1093 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1087, self->wrapperShims);
                    methodName1092 = $tmp1093;
                }
                }
                else {
                {
                    panda$core$String* $tmp1094 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1087);
                    methodName1092 = $tmp1094;
                    panda$core$Bit $tmp1095 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1087->owner);
                    if ($tmp1095.value) {
                    {
                        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1087);
                    }
                    }
                }
                }
                panda$core$String* $tmp1097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1096, separator1062);
                panda$core$String* $tmp1099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1097, &$s1098);
                panda$core$String* $tmp1100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1099, methodName1092);
                panda$core$String* $tmp1102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1100, &$s1101);
                panda$core$MutableString$append$panda$core$String(code1041, $tmp1102);
                separator1062 = &$s1103;
            }
            $l1078:;
            if ($tmp1081) goto $l1105; else goto $l1106;
            $l1105:;
            int64_t $tmp1107 = $tmp1072 - i1069.value;
            if ($tmp1074) goto $l1108; else goto $l1109;
            $l1108:;
            if ($tmp1107 >= $tmp1073) goto $l1104; else goto $l1077;
            $l1109:;
            if ($tmp1107 > $tmp1073) goto $l1104; else goto $l1077;
            $l1106:;
            int64_t $tmp1111 = i1069.value - $tmp1072;
            if ($tmp1074) goto $l1112; else goto $l1113;
            $l1112:;
            if ($tmp1111 >= -$tmp1073) goto $l1104; else goto $l1077;
            $l1113:;
            if ($tmp1111 > -$tmp1073) goto $l1104; else goto $l1077;
            $l1104:;
            i1069.value += $tmp1073;
            goto $l1075;
            $l1077:;
            panda$core$MutableString$append$panda$core$String(code1041, &$s1115);
            (($fn1116) ((panda$io$OutputStream*) self->types)->$class->vtable[15])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code1041));
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name990), ((panda$core$Object*) result996));
    }
    }
    return result996;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$String* result1122;
    panda$core$Bit $tmp1117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1117.value) {
    {
        panda$core$String* $tmp1119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1118, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1119, &$s1120);
        return $tmp1121;
    }
    }
    panda$core$Object* $tmp1123 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1122 = ((panda$core$String*) $tmp1123);
    if (((panda$core$Bit) { result1122 == NULL }).value) {
    {
        panda$core$Int64 $tmp1124 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1124;
        panda$core$String* $tmp1126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1125, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1126, &$s1127);
        panda$core$String* $tmp1129 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1128, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        panda$core$String* $tmp1131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1129, &$s1130);
        result1122 = $tmp1131;
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1122));
    }
    }
    return result1122;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1132 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1132.value);
    panda$core$String* $tmp1134 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1133, $tmp1134);
    panda$core$String* $tmp1137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1135, &$s1136);
    panda$core$String* $tmp1138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1137, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1138, &$s1139);
    return $tmp1140;
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
    panda$core$String* result1141;
    panda$core$String* leftRef1143;
    panda$core$String* falseLabel1157;
    panda$core$String* rightRef1167;
    panda$core$String* $tmp1142 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1141 = $tmp1142;
    panda$core$String* $tmp1144 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1143 = $tmp1144;
    org$pandalanguage$pandac$Type* $tmp1145 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1146 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1145);
    if ($tmp1146.value) {
    {
        panda$core$String* $tmp1148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1143, &$s1147);
        leftRef1143 = $tmp1148;
    }
    }
    panda$core$String* $tmp1150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1149, result1141);
    panda$core$String* $tmp1152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1150, &$s1151);
    panda$core$String* $tmp1153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1152, leftRef1143);
    panda$core$String* $tmp1155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1153, &$s1154);
    (($fn1156) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1155);
    panda$core$String* $tmp1158 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel1157 = $tmp1158;
    panda$core$String* $tmp1160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1159, result1141);
    panda$core$String* $tmp1162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1160, &$s1161);
    panda$core$String* $tmp1163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1162, falseLabel1157);
    panda$core$String* $tmp1165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1163, &$s1164);
    (($fn1166) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1165);
    panda$core$String* $tmp1168 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1167 = $tmp1168;
    org$pandalanguage$pandac$Type* $tmp1169 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1170 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1169);
    if ($tmp1170.value) {
    {
        panda$core$String* $tmp1172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1167, &$s1171);
        rightRef1167 = $tmp1172;
    }
    }
    panda$core$String* $tmp1174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1173, result1141);
    panda$core$String* $tmp1176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1174, &$s1175);
    panda$core$String* $tmp1177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1176, rightRef1167);
    panda$core$String* $tmp1179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1177, &$s1178);
    (($fn1180) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1179);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel1157, p_out);
    return result1141;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1181;
    panda$core$String* leftRef1183;
    panda$core$String* trueLabel1197;
    panda$core$String* rightRef1207;
    panda$core$String* $tmp1182 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1181 = $tmp1182;
    panda$core$String* $tmp1184 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1183 = $tmp1184;
    org$pandalanguage$pandac$Type* $tmp1185 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1186 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1185);
    if ($tmp1186.value) {
    {
        panda$core$String* $tmp1188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1183, &$s1187);
        leftRef1183 = $tmp1188;
    }
    }
    panda$core$String* $tmp1190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1189, result1181);
    panda$core$String* $tmp1192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1190, &$s1191);
    panda$core$String* $tmp1193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1192, leftRef1183);
    panda$core$String* $tmp1195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1193, &$s1194);
    (($fn1196) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1195);
    panda$core$String* $tmp1198 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel1197 = $tmp1198;
    panda$core$String* $tmp1200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1199, result1181);
    panda$core$String* $tmp1202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1200, &$s1201);
    panda$core$String* $tmp1203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1202, trueLabel1197);
    panda$core$String* $tmp1205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1203, &$s1204);
    (($fn1206) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1205);
    panda$core$String* $tmp1208 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1207 = $tmp1208;
    org$pandalanguage$pandac$Type* $tmp1209 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1210 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1209);
    if ($tmp1210.value) {
    {
        panda$core$String* $tmp1212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1207, &$s1211);
        rightRef1207 = $tmp1212;
    }
    }
    panda$core$String* $tmp1214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1213, result1181);
    panda$core$String* $tmp1216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1214, &$s1215);
    panda$core$String* $tmp1217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1216, rightRef1207);
    panda$core$String* $tmp1219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1217, &$s1218);
    (($fn1220) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1219);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel1197, p_out);
    return result1181;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Int64 p_cl, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* cOp1221;
    panda$core$Bit logical1222;
    panda$core$String* result1240;
    logical1222 = ((panda$core$Bit) { false });
    switch (p_op.value) {
        case 51:
        {
            cOp1221 = &$s1223;
        }
        break;
        case 52:
        {
            cOp1221 = &$s1224;
        }
        break;
        case 53:
        {
            cOp1221 = &$s1225;
        }
        break;
        case 55:
        {
            cOp1221 = &$s1226;
        }
        break;
        case 54:
        {
            cOp1221 = &$s1227;
        }
        break;
        case 56:
        {
            cOp1221 = &$s1228;
        }
        break;
        case 72:
        {
            cOp1221 = &$s1229;
        }
        break;
        case 1:
        {
            cOp1221 = &$s1230;
        }
        break;
        case 67:
        {
            cOp1221 = &$s1231;
        }
        break;
        case 69:
        {
            cOp1221 = &$s1232;
        }
        break;
        case 70:
        case 71:
        {
            cOp1221 = &$s1233;
        }
        break;
        case 58:
        {
            cOp1221 = &$s1234;
            logical1222 = ((panda$core$Bit) { true });
        }
        break;
        case 59:
        {
            cOp1221 = &$s1235;
            logical1222 = ((panda$core$Bit) { true });
        }
        break;
        case 63:
        {
            cOp1221 = &$s1236;
            logical1222 = ((panda$core$Bit) { true });
        }
        break;
        case 62:
        {
            cOp1221 = &$s1237;
            logical1222 = ((panda$core$Bit) { true });
        }
        break;
        case 65:
        {
            cOp1221 = &$s1238;
            logical1222 = ((panda$core$Bit) { true });
        }
        break;
        case 64:
        {
            logical1222 = ((panda$core$Bit) { true });
            cOp1221 = &$s1239;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$String* $tmp1241 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1240 = $tmp1241;
    if (logical1222.value) {
    {
        (($fn1243) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s1242);
    }
    }
    else {
    {
        panda$core$String* $tmp1245 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp1246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1244, $tmp1245);
        panda$core$String* $tmp1248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1246, &$s1247);
        (($fn1249) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1248);
    }
    }
    panda$core$String* $tmp1251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1250, result1240);
    panda$core$String* $tmp1253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1251, &$s1252);
    panda$core$String* $tmp1254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1253, p_leftRef);
    panda$core$String* $tmp1256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1254, &$s1255);
    panda$core$String* $tmp1257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1256, cOp1221);
    panda$core$String* $tmp1259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1257, &$s1258);
    panda$core$String* $tmp1260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1259, p_rightRef);
    panda$core$String* $tmp1262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1260, &$s1261);
    (($fn1263) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1262);
    return result1240;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1264;
    panda$core$String* rightRef1266;
    panda$core$String* $tmp1265 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1264 = $tmp1265;
    panda$core$String* $tmp1267 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1266 = $tmp1267;
    panda$core$String* $tmp1269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1268, leftRef1264);
    panda$core$String* $tmp1271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1269, &$s1270);
    panda$core$String* $tmp1272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1271, rightRef1266);
    panda$core$String* $tmp1274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1272, &$s1273);
    return $tmp1274;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1275;
    panda$core$String* rightRef1277;
    panda$core$String* $tmp1276 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1275 = $tmp1276;
    panda$core$String* $tmp1278 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1277 = $tmp1278;
    panda$core$String* $tmp1280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1279, leftRef1275);
    panda$core$String* $tmp1282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1280, &$s1281);
    panda$core$String* $tmp1283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1282, rightRef1277);
    panda$core$String* $tmp1285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1283, &$s1284);
    return $tmp1285;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1291;
    panda$core$String* rightRef1293;
    panda$core$Bit $tmp1286 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, p_right->type);
    PANDA_ASSERT($tmp1286.value);
    switch (p_op.value) {
        case 66:
        {
            panda$core$String* $tmp1287 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1287;
        }
        break;
        case 68:
        {
            panda$core$String* $tmp1288 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1288;
        }
        break;
        case 60:
        {
            panda$core$String* $tmp1289 = org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1289;
        }
        break;
        case 61:
        {
            panda$core$String* $tmp1290 = org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1290;
        }
        break;
        default:
        {
            panda$core$String* $tmp1292 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1291 = $tmp1292;
            panda$core$String* $tmp1294 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1293 = $tmp1294;
            panda$core$Int64 $tmp1295 = org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_left->type);
            panda$core$String* $tmp1296 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1295, p_left->type, leftRef1291, p_op, rightRef1293, p_out);
            return $tmp1296;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp1297.value);
    panda$core$Int64 $tmp1298 = panda$collections$Array$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp1299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1298, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp1299.value);
    panda$core$Object* $tmp1300 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp1301 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1302 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1300), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp1301), p_out);
    return $tmp1302;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1303;
    panda$core$Int64 index1305;
    panda$collections$ListView* vtable1306;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1308;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1304 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1303 = $tmp1304;
    index1305 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1307 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1306 = $tmp1307;
    ITable* $tmp1309 = ((panda$collections$CollectionView*) vtable1306)->$class->itable;
    while ($tmp1309->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1309 = $tmp1309->next;
    }
    $fn1311 $tmp1310 = $tmp1309->methods[0];
    panda$core$Int64 $tmp1312 = $tmp1310(((panda$collections$CollectionView*) vtable1306));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1308, ((panda$core$Int64) { 0 }), $tmp1312, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1314 = $tmp1308.start.value;
    panda$core$Int64 i1313 = { $tmp1314 };
    int64_t $tmp1316 = $tmp1308.end.value;
    int64_t $tmp1317 = $tmp1308.step.value;
    bool $tmp1318 = $tmp1308.inclusive.value;
    bool $tmp1325 = $tmp1317 > 0;
    if ($tmp1325) goto $l1323; else goto $l1324;
    $l1323:;
    if ($tmp1318) goto $l1326; else goto $l1327;
    $l1326:;
    if ($tmp1314 <= $tmp1316) goto $l1319; else goto $l1321;
    $l1327:;
    if ($tmp1314 < $tmp1316) goto $l1319; else goto $l1321;
    $l1324:;
    if ($tmp1318) goto $l1328; else goto $l1329;
    $l1328:;
    if ($tmp1314 >= $tmp1316) goto $l1319; else goto $l1321;
    $l1329:;
    if ($tmp1314 > $tmp1316) goto $l1319; else goto $l1321;
    $l1319:;
    {
        ITable* $tmp1331 = vtable1306->$class->itable;
        while ($tmp1331->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1331 = $tmp1331->next;
        }
        $fn1333 $tmp1332 = $tmp1331->methods[0];
        panda$core$Object* $tmp1334 = $tmp1332(vtable1306, i1313);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1334)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1305 = i1313;
            goto $l1321;
        }
        }
    }
    $l1322:;
    if ($tmp1325) goto $l1336; else goto $l1337;
    $l1336:;
    int64_t $tmp1338 = $tmp1316 - i1313.value;
    if ($tmp1318) goto $l1339; else goto $l1340;
    $l1339:;
    if ($tmp1338 >= $tmp1317) goto $l1335; else goto $l1321;
    $l1340:;
    if ($tmp1338 > $tmp1317) goto $l1335; else goto $l1321;
    $l1337:;
    int64_t $tmp1342 = i1313.value - $tmp1316;
    if ($tmp1318) goto $l1343; else goto $l1344;
    $l1343:;
    if ($tmp1342 >= -$tmp1317) goto $l1335; else goto $l1321;
    $l1344:;
    if ($tmp1342 > -$tmp1317) goto $l1335; else goto $l1321;
    $l1335:;
    i1313.value += $tmp1317;
    goto $l1319;
    $l1321:;
    panda$core$Bit $tmp1346 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1305, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1346.value);
    org$pandalanguage$pandac$Type* $tmp1348 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1349 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1348);
    panda$core$String* $tmp1350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1347, $tmp1349);
    panda$core$String* $tmp1352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1350, &$s1351);
    panda$core$String* $tmp1353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1352, p_target);
    panda$core$String* $tmp1355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1353, &$s1354);
    panda$core$String* $tmp1356 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1355, ((panda$core$Object*) wrap_panda$core$Int64(index1305)));
    panda$core$String* $tmp1358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1356, &$s1357);
    return $tmp1358;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1359;
    panda$core$String* itable1361;
    panda$core$Int64 index1391;
    panda$collections$ListView* vtable1392;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1394;
    panda$core$String* result1441;
    panda$core$String* methodType1443;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1360 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1359 = $tmp1360;
    panda$core$String* $tmp1362 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    itable1361 = $tmp1362;
    panda$core$String* $tmp1364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1363, itable1361);
    panda$core$String* $tmp1366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1364, &$s1365);
    panda$core$String* $tmp1367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1366, p_target);
    panda$core$String* $tmp1369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1367, &$s1368);
    (($fn1370) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1369);
    panda$core$String* $tmp1372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1371, itable1361);
    panda$core$String* $tmp1374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1372, &$s1373);
    panda$core$String* $tmp1375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1374, cc1359->name);
    panda$core$String* $tmp1377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1375, &$s1376);
    (($fn1378) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1377);
    panda$core$Int64 $tmp1379 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1379;
    panda$core$String* $tmp1381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1380, itable1361);
    panda$core$String* $tmp1383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1381, &$s1382);
    panda$core$String* $tmp1384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1383, itable1361);
    panda$core$String* $tmp1386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1384, &$s1385);
    (($fn1387) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1386);
    panda$core$Int64 $tmp1388 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1388;
    (($fn1390) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1389);
    index1391 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1393 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1392 = $tmp1393;
    ITable* $tmp1395 = ((panda$collections$CollectionView*) vtable1392)->$class->itable;
    while ($tmp1395->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1395 = $tmp1395->next;
    }
    $fn1397 $tmp1396 = $tmp1395->methods[0];
    panda$core$Int64 $tmp1398 = $tmp1396(((panda$collections$CollectionView*) vtable1392));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1394, ((panda$core$Int64) { 0 }), $tmp1398, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1400 = $tmp1394.start.value;
    panda$core$Int64 i1399 = { $tmp1400 };
    int64_t $tmp1402 = $tmp1394.end.value;
    int64_t $tmp1403 = $tmp1394.step.value;
    bool $tmp1404 = $tmp1394.inclusive.value;
    bool $tmp1411 = $tmp1403 > 0;
    if ($tmp1411) goto $l1409; else goto $l1410;
    $l1409:;
    if ($tmp1404) goto $l1412; else goto $l1413;
    $l1412:;
    if ($tmp1400 <= $tmp1402) goto $l1405; else goto $l1407;
    $l1413:;
    if ($tmp1400 < $tmp1402) goto $l1405; else goto $l1407;
    $l1410:;
    if ($tmp1404) goto $l1414; else goto $l1415;
    $l1414:;
    if ($tmp1400 >= $tmp1402) goto $l1405; else goto $l1407;
    $l1415:;
    if ($tmp1400 > $tmp1402) goto $l1405; else goto $l1407;
    $l1405:;
    {
        ITable* $tmp1417 = vtable1392->$class->itable;
        while ($tmp1417->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1417 = $tmp1417->next;
        }
        $fn1419 $tmp1418 = $tmp1417->methods[0];
        panda$core$Object* $tmp1420 = $tmp1418(vtable1392, i1399);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1420)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1391 = i1399;
            goto $l1407;
        }
        }
    }
    $l1408:;
    if ($tmp1411) goto $l1422; else goto $l1423;
    $l1422:;
    int64_t $tmp1424 = $tmp1402 - i1399.value;
    if ($tmp1404) goto $l1425; else goto $l1426;
    $l1425:;
    if ($tmp1424 >= $tmp1403) goto $l1421; else goto $l1407;
    $l1426:;
    if ($tmp1424 > $tmp1403) goto $l1421; else goto $l1407;
    $l1423:;
    int64_t $tmp1428 = i1399.value - $tmp1402;
    if ($tmp1404) goto $l1429; else goto $l1430;
    $l1429:;
    if ($tmp1428 >= -$tmp1403) goto $l1421; else goto $l1407;
    $l1430:;
    if ($tmp1428 > -$tmp1403) goto $l1421; else goto $l1407;
    $l1421:;
    i1399.value += $tmp1403;
    goto $l1405;
    $l1407:;
    org$pandalanguage$pandac$Type* $tmp1432 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp1433 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1432);
    panda$collections$ListView* $tmp1434 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp1433);
    ITable* $tmp1435 = ((panda$collections$CollectionView*) $tmp1434)->$class->itable;
    while ($tmp1435->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1435 = $tmp1435->next;
    }
    $fn1437 $tmp1436 = $tmp1435->methods[0];
    panda$core$Int64 $tmp1438 = $tmp1436(((panda$collections$CollectionView*) $tmp1434));
    panda$core$Int64 $tmp1439 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index1391, $tmp1438);
    index1391 = $tmp1439;
    panda$core$Bit $tmp1440 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1391, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1440.value);
    panda$core$String* $tmp1442 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1441 = $tmp1442;
    org$pandalanguage$pandac$Type* $tmp1444 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1445 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1444);
    methodType1443 = $tmp1445;
    panda$core$String* $tmp1447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1446, methodType1443);
    panda$core$String* $tmp1449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1447, &$s1448);
    panda$core$String* $tmp1450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1449, result1441);
    panda$core$String* $tmp1452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1450, &$s1451);
    panda$core$String* $tmp1453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1452, itable1361);
    panda$core$String* $tmp1455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1453, &$s1454);
    panda$core$String* $tmp1456 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1455, ((panda$core$Object*) wrap_panda$core$Int64(index1391)));
    panda$core$String* $tmp1458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1456, &$s1457);
    (($fn1459) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1458);
    return result1441;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1461 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp1460 = $tmp1461.value;
    if (!$tmp1460) goto $l1462;
    panda$core$Bit $tmp1463 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp1460 = $tmp1463.value;
    $l1462:;
    panda$core$Bit $tmp1464 = { $tmp1460 };
    if ($tmp1464.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp1465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp1465.value) {
        {
            panda$core$String* $tmp1466 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1466;
        }
        }
        else {
        {
            panda$core$String* $tmp1467 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1467;
        }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp1468 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
        if ($tmp1468.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
        }
        }
        panda$core$String* $tmp1469 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp1469;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m1470;
    panda$core$String* $match$294961471;
    panda$core$String* count1476;
    panda$core$Int64 elementSize1482;
    panda$core$String* ptr1501;
    panda$core$String* ptr1512;
    panda$core$String* index1515;
    panda$core$String* ptr1529;
    panda$core$String* count1532;
    panda$core$Int64 elementSize1538;
    panda$core$String* ptr1560;
    panda$core$String* offset1563;
    m1470 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$294961471 = ((org$pandalanguage$pandac$Symbol*) m1470->value)->name;
        panda$core$Bit $tmp1473 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$294961471, &$s1472);
        if ($tmp1473.value) {
        {
            panda$core$Int64 $tmp1474 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1474, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1475.value);
            panda$core$Object* $tmp1477 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1478 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1477), p_out);
            count1476 = $tmp1478;
            org$pandalanguage$pandac$Type* $tmp1479 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1470);
            panda$core$Int64 $tmp1480 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64($tmp1479->subtypes);
            panda$core$Bit $tmp1481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1480, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1481.value);
            org$pandalanguage$pandac$Type* $tmp1483 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1470);
            panda$core$Object* $tmp1484 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1483->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1485 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1484));
            elementSize1482 = $tmp1485;
            panda$core$String* $tmp1487 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1486, $tmp1487);
            panda$core$String* $tmp1490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1488, &$s1489);
            panda$core$String* $tmp1491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1490, count1476);
            panda$core$String* $tmp1493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1491, &$s1492);
            panda$core$String* $tmp1494 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1493, ((panda$core$Object*) wrap_panda$core$Int64(elementSize1482)));
            panda$core$String* $tmp1496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1494, &$s1495);
            return $tmp1496;
        }
        }
        else {
        panda$core$Bit $tmp1498 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$294961471, &$s1497);
        if ($tmp1498.value) {
        {
            panda$core$Int64 $tmp1499 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1499, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1500.value);
            panda$core$Object* $tmp1502 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1503 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1502), p_out);
            ptr1501 = $tmp1503;
            panda$core$String* $tmp1505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1504, ptr1501);
            panda$core$String* $tmp1507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1505, &$s1506);
            return $tmp1507;
        }
        }
        else {
        panda$core$Bit $tmp1509 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$294961471, &$s1508);
        if ($tmp1509.value) {
        {
            panda$core$Int64 $tmp1510 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1510, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1511.value);
            panda$core$Object* $tmp1513 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1514 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1513), p_out);
            ptr1512 = $tmp1514;
            panda$core$Object* $tmp1516 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1517 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1516), p_out);
            index1515 = $tmp1517;
            panda$core$String* $tmp1519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1518, ptr1512);
            panda$core$String* $tmp1521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1519, &$s1520);
            panda$core$String* $tmp1522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1521, index1515);
            panda$core$String* $tmp1524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1522, &$s1523);
            return $tmp1524;
        }
        }
        else {
        panda$core$Bit $tmp1526 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$294961471, &$s1525);
        if ($tmp1526.value) {
        {
            panda$core$Int64 $tmp1527 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1527, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1528.value);
            panda$core$Object* $tmp1530 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1531 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1530), p_out);
            ptr1529 = $tmp1531;
            panda$core$Object* $tmp1533 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1534 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1533), p_out);
            count1532 = $tmp1534;
            org$pandalanguage$pandac$Type* $tmp1535 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1470);
            panda$core$Int64 $tmp1536 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64($tmp1535->subtypes);
            panda$core$Bit $tmp1537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1536, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1537.value);
            org$pandalanguage$pandac$Type* $tmp1539 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1470);
            panda$core$Object* $tmp1540 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1539->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1541 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1540));
            elementSize1538 = $tmp1541;
            panda$core$String* $tmp1543 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1542, $tmp1543);
            panda$core$String* $tmp1546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1544, &$s1545);
            panda$core$String* $tmp1547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1546, ptr1529);
            panda$core$String* $tmp1549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1547, &$s1548);
            panda$core$String* $tmp1550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1549, count1532);
            panda$core$String* $tmp1552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1550, &$s1551);
            panda$core$String* $tmp1553 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1552, ((panda$core$Object*) wrap_panda$core$Int64(elementSize1538)));
            panda$core$String* $tmp1555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1553, &$s1554);
            return $tmp1555;
        }
        }
        else {
        panda$core$Bit $tmp1557 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$294961471, &$s1556);
        if ($tmp1557.value) {
        {
            panda$core$Int64 $tmp1558 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1558, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1559.value);
            panda$core$Object* $tmp1561 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1562 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1561), p_out);
            ptr1560 = $tmp1562;
            panda$core$Object* $tmp1564 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1565 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1564), p_out);
            offset1563 = $tmp1565;
            panda$core$String* $tmp1567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1566, ptr1560);
            panda$core$String* $tmp1569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1567, &$s1568);
            panda$core$String* $tmp1570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1569, offset1563);
            panda$core$String* $tmp1572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1570, &$s1571);
            return $tmp1572;
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
    org$pandalanguage$pandac$MethodDecl* m1574;
    panda$core$String* bit1585;
    panda$core$String* result1589;
    panda$core$String* bit1603;
    panda$core$String* result1607;
    panda$collections$Array* args1617;
    org$pandalanguage$pandac$Type* actualMethodType1621;
    panda$core$String* actualResultType1622;
    panda$core$Bit isSuper1623;
    panda$core$Int64 offset1643;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1648;
    panda$core$String* arg1668;
    panda$core$String* target1694;
    panda$core$String* methodRef1698;
    panda$core$Bit indirect1700;
    panda$core$String* result1702;
    panda$core$String* separator1704;
    panda$core$String* indirectVar1706;
    panda$collections$Iterator* arg$Iter1735;
    panda$core$String* arg1747;
    panda$core$Bit $tmp1573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp1573.value);
    m1574 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp1576 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1574->owner)->name, &$s1575);
    if ($tmp1576.value) {
    {
        panda$core$String* $tmp1577 = org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp1577;
    }
    }
    panda$core$Bit $tmp1578 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1574->owner);
    if ($tmp1578.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1574);
    }
    }
    panda$core$Bit $tmp1580 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1574->owner)->name, &$s1579);
    if ($tmp1580.value) {
    {
        panda$core$Bit $tmp1582 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1574)->name, &$s1581);
        if ($tmp1582.value) {
        {
            panda$core$Int64 $tmp1583 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1583, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1584.value);
            panda$core$Object* $tmp1586 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1587 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1588 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1586), ((org$pandalanguage$pandac$IRNode*) $tmp1587), p_out);
            bit1585 = $tmp1588;
            panda$core$String* $tmp1590 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1589 = $tmp1590;
            panda$core$String* $tmp1592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1591, result1589);
            panda$core$String* $tmp1594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1592, &$s1593);
            panda$core$String* $tmp1595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1594, bit1585);
            panda$core$String* $tmp1597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1595, &$s1596);
            (($fn1598) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1597);
            return result1589;
        }
        }
        panda$core$Bit $tmp1600 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1574)->name, &$s1599);
        if ($tmp1600.value) {
        {
            panda$core$Int64 $tmp1601 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1601, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1602.value);
            panda$core$Object* $tmp1604 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1605 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1606 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1604), ((org$pandalanguage$pandac$IRNode*) $tmp1605), p_out);
            bit1603 = $tmp1606;
            panda$core$String* $tmp1608 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1607 = $tmp1608;
            panda$core$String* $tmp1610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1609, result1607);
            panda$core$String* $tmp1612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1610, &$s1611);
            panda$core$String* $tmp1613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1612, bit1603);
            panda$core$String* $tmp1615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1613, &$s1614);
            (($fn1616) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1615);
            return result1607;
        }
        }
    }
    }
    panda$collections$Array* $tmp1618 = (panda$collections$Array*) malloc(40);
    $tmp1618->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1618->refCount.value = 1;
    panda$core$Int64 $tmp1620 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp1618, $tmp1620);
    args1617 = $tmp1618;
    panda$core$Int64 $tmp1625 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp1626 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1625, ((panda$core$Int64) { 1 }));
    bool $tmp1624 = $tmp1626.value;
    if (!$tmp1624) goto $l1627;
    panda$core$Object* $tmp1628 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp1629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1628)->kind, ((panda$core$Int64) { 1024 }));
    $tmp1624 = $tmp1629.value;
    $l1627:;
    panda$core$Bit $tmp1630 = { $tmp1624 };
    isSuper1623 = $tmp1630;
    panda$core$Bit $tmp1632 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper1623);
    bool $tmp1631 = $tmp1632.value;
    if (!$tmp1631) goto $l1633;
    panda$core$Bit $tmp1634 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m1574);
    $tmp1631 = $tmp1634.value;
    $l1633:;
    panda$core$Bit $tmp1635 = { $tmp1631 };
    if ($tmp1635.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1636 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1574);
        actualMethodType1621 = $tmp1636;
        panda$core$Int64 $tmp1637 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType1621->subtypes);
        panda$core$Int64 $tmp1638 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1637, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1639 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType1621->subtypes, $tmp1638);
        panda$core$String* $tmp1640 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1639));
        actualResultType1622 = $tmp1640;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp1641 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1574);
        actualMethodType1621 = $tmp1641;
        panda$core$String* $tmp1642 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType1622 = $tmp1642;
    }
    }
    panda$core$Int64 $tmp1644 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp1645 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType1621->subtypes);
    panda$core$Int64 $tmp1646 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1644, $tmp1645);
    panda$core$Int64 $tmp1647 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1646, ((panda$core$Int64) { 1 }));
    offset1643 = $tmp1647;
    panda$core$Int64 $tmp1649 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1648, ((panda$core$Int64) { 0 }), $tmp1649, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1651 = $tmp1648.start.value;
    panda$core$Int64 i1650 = { $tmp1651 };
    int64_t $tmp1653 = $tmp1648.end.value;
    int64_t $tmp1654 = $tmp1648.step.value;
    bool $tmp1655 = $tmp1648.inclusive.value;
    bool $tmp1662 = $tmp1654 > 0;
    if ($tmp1662) goto $l1660; else goto $l1661;
    $l1660:;
    if ($tmp1655) goto $l1663; else goto $l1664;
    $l1663:;
    if ($tmp1651 <= $tmp1653) goto $l1656; else goto $l1658;
    $l1664:;
    if ($tmp1651 < $tmp1653) goto $l1656; else goto $l1658;
    $l1661:;
    if ($tmp1655) goto $l1665; else goto $l1666;
    $l1665:;
    if ($tmp1651 >= $tmp1653) goto $l1656; else goto $l1658;
    $l1666:;
    if ($tmp1651 > $tmp1653) goto $l1656; else goto $l1658;
    $l1656:;
    {
        panda$core$Object* $tmp1669 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1650);
        panda$core$String* $tmp1670 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1669), p_out);
        arg1668 = $tmp1670;
        panda$core$Bit $tmp1672 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i1650, offset1643);
        bool $tmp1671 = $tmp1672.value;
        if (!$tmp1671) goto $l1673;
        panda$core$Int64 $tmp1674 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1650, offset1643);
        panda$core$Object* $tmp1675 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType1621->subtypes, $tmp1674);
        panda$core$Object* $tmp1676 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1650);
        panda$core$Bit $tmp1677 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1675), ((org$pandalanguage$pandac$IRNode*) $tmp1676)->type);
        $tmp1671 = $tmp1677.value;
        $l1673:;
        panda$core$Bit $tmp1678 = { $tmp1671 };
        if ($tmp1678.value) {
        {
            panda$core$Object* $tmp1679 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1650);
            panda$core$Int64 $tmp1680 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1650, offset1643);
            panda$core$Object* $tmp1681 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType1621->subtypes, $tmp1680);
            panda$core$String* $tmp1682 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg1668, ((org$pandalanguage$pandac$IRNode*) $tmp1679)->type, ((org$pandalanguage$pandac$Type*) $tmp1681), p_out);
            arg1668 = $tmp1682;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args1617, ((panda$core$Object*) arg1668));
    }
    $l1659:;
    if ($tmp1662) goto $l1684; else goto $l1685;
    $l1684:;
    int64_t $tmp1686 = $tmp1653 - i1650.value;
    if ($tmp1655) goto $l1687; else goto $l1688;
    $l1687:;
    if ($tmp1686 >= $tmp1654) goto $l1683; else goto $l1658;
    $l1688:;
    if ($tmp1686 > $tmp1654) goto $l1683; else goto $l1658;
    $l1685:;
    int64_t $tmp1690 = i1650.value - $tmp1653;
    if ($tmp1655) goto $l1691; else goto $l1692;
    $l1691:;
    if ($tmp1690 >= -$tmp1654) goto $l1683; else goto $l1658;
    $l1692:;
    if ($tmp1690 > -$tmp1654) goto $l1683; else goto $l1658;
    $l1683:;
    i1650.value += $tmp1654;
    goto $l1656;
    $l1658:;
    panda$core$Int64 $tmp1695 = panda$collections$Array$get_count$R$panda$core$Int64(args1617);
    panda$core$Bit $tmp1696 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1695, ((panda$core$Int64) { 0 }));
    if ($tmp1696.value) {
    {
        panda$core$Object* $tmp1697 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args1617, ((panda$core$Int64) { 0 }));
        target1694 = ((panda$core$String*) $tmp1697);
    }
    }
    else {
    {
        target1694 = NULL;
    }
    }
    panda$core$String* $tmp1699 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target1694, m1574, isSuper1623, p_out);
    methodRef1698 = $tmp1699;
    panda$core$Bit $tmp1701 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m1574);
    indirect1700 = $tmp1701;
    panda$core$String* $tmp1703 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1702 = $tmp1703;
    separator1704 = &$s1705;
    if (indirect1700.value) {
    {
        panda$core$String* $tmp1708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1707, actualResultType1622);
        panda$core$String* $tmp1710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1708, &$s1709);
        panda$core$String* $tmp1711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1710, result1702);
        panda$core$String* $tmp1713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1711, &$s1712);
        (($fn1714) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1713);
        panda$core$String* $tmp1716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1715, methodRef1698);
        panda$core$String* $tmp1718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1716, &$s1717);
        panda$core$String* $tmp1719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1718, result1702);
        panda$core$String* $tmp1721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1719, &$s1720);
        (($fn1722) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1721);
        separator1704 = &$s1723;
    }
    }
    else {
    {
        panda$core$String* $tmp1725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1724, actualResultType1622);
        panda$core$String* $tmp1727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1725, &$s1726);
        panda$core$String* $tmp1728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1727, result1702);
        panda$core$String* $tmp1730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1728, &$s1729);
        panda$core$String* $tmp1731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1730, methodRef1698);
        panda$core$String* $tmp1733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1731, &$s1732);
        (($fn1734) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1733);
    }
    }
    {
        ITable* $tmp1736 = ((panda$collections$Iterable*) args1617)->$class->itable;
        while ($tmp1736->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1736 = $tmp1736->next;
        }
        $fn1738 $tmp1737 = $tmp1736->methods[0];
        panda$collections$Iterator* $tmp1739 = $tmp1737(((panda$collections$Iterable*) args1617));
        arg$Iter1735 = $tmp1739;
        $l1740:;
        ITable* $tmp1742 = arg$Iter1735->$class->itable;
        while ($tmp1742->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1742 = $tmp1742->next;
        }
        $fn1744 $tmp1743 = $tmp1742->methods[0];
        panda$core$Bit $tmp1745 = $tmp1743(arg$Iter1735);
        panda$core$Bit $tmp1746 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1745);
        if (!$tmp1746.value) goto $l1741;
        {
            ITable* $tmp1748 = arg$Iter1735->$class->itable;
            while ($tmp1748->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1748 = $tmp1748->next;
            }
            $fn1750 $tmp1749 = $tmp1748->methods[1];
            panda$core$Object* $tmp1751 = $tmp1749(arg$Iter1735);
            arg1747 = ((panda$core$String*) $tmp1751);
            panda$core$String* $tmp1753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1752, separator1704);
            panda$core$String* $tmp1755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1753, &$s1754);
            panda$core$String* $tmp1756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1755, arg1747);
            panda$core$String* $tmp1758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1756, &$s1757);
            (($fn1759) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1758);
            separator1704 = &$s1760;
        }
        goto $l1740;
        $l1741:;
    }
    (($fn1762) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1761);
    panda$core$String* $tmp1763 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp1764 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp1763, actualResultType1622);
    if ($tmp1764.value) {
    {
        panda$core$Int64 $tmp1765 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType1621->subtypes);
        panda$core$Int64 $tmp1766 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1765, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1767 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType1621->subtypes, $tmp1766);
        panda$core$String* $tmp1768 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result1702, ((org$pandalanguage$pandac$Type*) $tmp1767), p_call->type, p_out);
        return $tmp1768;
    }
    }
    return result1702;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* unwrapped1770;
    panda$core$String* nonNullValue1773;
    panda$core$String* wrapped1783;
    panda$core$Bit $tmp1769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1769.value) {
    {
        panda$core$Object* $tmp1771 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1772 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1771), p_out);
        unwrapped1770 = $tmp1772;
        panda$core$Object* $tmp1774 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1775 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped1770, ((org$pandalanguage$pandac$Type*) $tmp1774), p_dstType, p_out);
        nonNullValue1773 = $tmp1775;
        panda$core$String* $tmp1777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1776, p_value);
        panda$core$String* $tmp1779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1777, &$s1778);
        panda$core$String* $tmp1780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1779, nonNullValue1773);
        panda$core$String* $tmp1782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1780, &$s1781);
        return $tmp1782;
    }
    }
    panda$core$String* $tmp1785 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1784, $tmp1785);
    panda$core$String* $tmp1788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1786, &$s1787);
    org$pandalanguage$pandac$ClassDecl* $tmp1789 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    panda$core$String* $tmp1790 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1789)->name);
    panda$core$String* $tmp1791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1788, $tmp1790);
    panda$core$String* $tmp1793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1791, &$s1792);
    panda$core$String* $tmp1795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1794, p_value);
    panda$core$String* $tmp1797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1795, &$s1796);
    panda$core$String* $tmp1798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1793, $tmp1797);
    wrapped1783 = $tmp1798;
    panda$core$Bit $tmp1799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1799.value) {
    {
        panda$core$String* $tmp1801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1800, p_value);
        panda$core$String* $tmp1803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1801, &$s1802);
        panda$core$String* $tmp1804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1803, wrapped1783);
        panda$core$String* $tmp1806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1804, &$s1805);
        return $tmp1806;
    }
    }
    return wrapped1783;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field1810;
    org$pandalanguage$pandac$ClassDecl* cl1813;
    panda$core$String* base1816;
    panda$core$Bit $tmp1807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp1807.value);
    panda$core$Int64 $tmp1808 = panda$collections$Array$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp1809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1808, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1809.value);
    field1810 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$Bit $tmp1811 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field1810->annotations);
    if ($tmp1811.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field1810->value != NULL }).value);
        panda$core$String* $tmp1812 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field1810->value, p_out);
        return $tmp1812;
    }
    }
    panda$core$Object* $tmp1814 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp1815 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp1814)->type);
    cl1813 = $tmp1815;
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl1813);
    panda$core$Object* $tmp1817 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1818 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1817), p_out);
    base1816 = $tmp1818;
    PANDA_ASSERT(((panda$core$Bit) { cl1813 != NULL }).value);
    panda$core$Bit $tmp1819 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1813);
    if ($tmp1819.value) {
    {
        panda$core$String* $tmp1821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1820, base1816);
        panda$core$String* $tmp1823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1821, &$s1822);
        panda$core$String* $tmp1824 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1810)->name);
        panda$core$String* $tmp1825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1823, $tmp1824);
        panda$core$String* $tmp1827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1825, &$s1826);
        return $tmp1827;
    }
    }
    panda$core$String* $tmp1829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1828, base1816);
    panda$core$String* $tmp1831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1829, &$s1830);
    panda$core$String* $tmp1832 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1810)->name);
    panda$core$String* $tmp1833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1831, $tmp1832);
    panda$core$String* $tmp1835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1833, &$s1834);
    return $tmp1835;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1836;
    panda$core$String* wrapped1846;
    panda$core$String* nonNullValue1849;
    panda$core$String* $tmp1838 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1837, $tmp1838);
    panda$core$String* $tmp1841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1839, &$s1840);
    panda$core$String* $tmp1842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1841, p_value);
    panda$core$String* $tmp1844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1842, &$s1843);
    result1836 = $tmp1844;
    panda$core$Bit $tmp1845 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1845.value) {
    {
        panda$core$Object* $tmp1847 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1848 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1847), p_out);
        wrapped1846 = $tmp1848;
        panda$core$Object* $tmp1850 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1851 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped1846, ((org$pandalanguage$pandac$Type*) $tmp1850), p_dstType, p_out);
        nonNullValue1849 = $tmp1851;
        panda$core$String* $tmp1853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1852, p_value);
        panda$core$String* $tmp1855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1853, &$s1854);
        panda$core$String* $tmp1856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1855, nonNullValue1849);
        panda$core$String* $tmp1858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1856, &$s1857);
        panda$core$String* $tmp1859 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp1860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1858, $tmp1859);
        panda$core$String* $tmp1862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1860, &$s1861);
        return $tmp1862;
    }
    }
    return result1836;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1864 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1863, $tmp1864);
    panda$core$String* $tmp1867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1865, &$s1866);
    panda$core$String* $tmp1868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1867, p_value);
    panda$core$String* $tmp1870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1868, &$s1869);
    return $tmp1870;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1872 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1871, $tmp1872);
    panda$core$String* $tmp1875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1873, &$s1874);
    panda$core$String* $tmp1876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1875, p_value);
    panda$core$String* $tmp1878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1876, &$s1877);
    return $tmp1878;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op1879;
    org$pandalanguage$pandac$ClassDecl* srcClass1890;
    org$pandalanguage$pandac$ClassDecl* targetClass1892;
    panda$core$String* srcType1931;
    panda$core$String* dstType1933;
    panda$core$Bit $tmp1880 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp1880.value) {
    {
        panda$core$Bit $tmp1881 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp1881.value);
        panda$core$String* $tmp1883 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
        panda$core$String* $tmp1884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1882, $tmp1883);
        panda$core$String* $tmp1886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1884, &$s1885);
        panda$core$String* $tmp1887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1886, p_value);
        panda$core$String* $tmp1889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1887, &$s1888);
        return $tmp1889;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1891 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass1890 = $tmp1891;
        PANDA_ASSERT(((panda$core$Bit) { srcClass1890 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp1893 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass1892 = $tmp1893;
        PANDA_ASSERT(((panda$core$Bit) { targetClass1892 != NULL }).value);
        panda$core$Bit $tmp1895 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1890);
        bool $tmp1894 = $tmp1895.value;
        if (!$tmp1894) goto $l1896;
        panda$core$Bit $tmp1897 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1892);
        panda$core$Bit $tmp1898 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1897);
        $tmp1894 = $tmp1898.value;
        $l1896:;
        panda$core$Bit $tmp1899 = { $tmp1894 };
        if ($tmp1899.value) {
        {
            panda$core$String* $tmp1900 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1900;
        }
        }
        else {
        panda$core$Bit $tmp1902 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1890);
        panda$core$Bit $tmp1903 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1902);
        bool $tmp1901 = $tmp1903.value;
        if (!$tmp1901) goto $l1904;
        panda$core$Bit $tmp1905 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1892);
        $tmp1901 = $tmp1905.value;
        $l1904:;
        panda$core$Bit $tmp1906 = { $tmp1901 };
        if ($tmp1906.value) {
        {
            panda$core$String* $tmp1907 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1907;
        }
        }
        else {
        panda$core$Bit $tmp1910 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1890);
        bool $tmp1909 = $tmp1910.value;
        if (!$tmp1909) goto $l1911;
        panda$core$Bit $tmp1912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1909 = $tmp1912.value;
        $l1911:;
        panda$core$Bit $tmp1913 = { $tmp1909 };
        bool $tmp1908 = $tmp1913.value;
        if (!$tmp1908) goto $l1914;
        panda$core$Object* $tmp1915 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1916 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1915), p_src);
        $tmp1908 = $tmp1916.value;
        $l1914:;
        panda$core$Bit $tmp1917 = { $tmp1908 };
        if ($tmp1917.value) {
        {
            panda$core$String* $tmp1918 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1918;
        }
        }
        else {
        panda$core$Bit $tmp1921 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1892);
        bool $tmp1920 = $tmp1921.value;
        if (!$tmp1920) goto $l1922;
        panda$core$Bit $tmp1923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1920 = $tmp1923.value;
        $l1922:;
        panda$core$Bit $tmp1924 = { $tmp1920 };
        bool $tmp1919 = $tmp1924.value;
        if (!$tmp1919) goto $l1925;
        panda$core$Object* $tmp1926 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1927 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1926), p_target);
        $tmp1919 = $tmp1927.value;
        $l1925:;
        panda$core$Bit $tmp1928 = { $tmp1919 };
        if ($tmp1928.value) {
        {
            panda$core$String* $tmp1929 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1929;
        }
        }
        }
        }
        }
        op1879 = &$s1930;
    }
    }
    panda$core$String* $tmp1932 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType1931 = $tmp1932;
    panda$core$String* $tmp1934 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType1933 = $tmp1934;
    panda$core$Bit $tmp1935 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType1931, dstType1933);
    if ($tmp1935.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp1937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1936, dstType1933);
    panda$core$String* $tmp1939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1937, &$s1938);
    panda$core$String* $tmp1940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1939, p_value);
    panda$core$String* $tmp1942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1940, &$s1941);
    return $tmp1942;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base1946;
    panda$core$Bit $tmp1943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp1943.value);
    panda$core$Int64 $tmp1944 = panda$collections$Array$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp1945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1944, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1945.value);
    panda$core$Object* $tmp1947 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1948 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1947), p_out);
    base1946 = $tmp1948;
    panda$core$Object* $tmp1949 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1950 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base1946, ((org$pandalanguage$pandac$IRNode*) $tmp1949)->type, p_cast->type, p_out);
    return $tmp1950;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl1954;
    panda$core$String* t1956;
    panda$core$String* value1969;
    panda$core$String* tmp1983;
    panda$core$String* result2001;
    panda$core$String* classPtr2022;
    panda$core$String* className2024;
    panda$core$Bit $tmp1951 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp1951.value);
    panda$core$Int64 $tmp1952 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp1953 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1952, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1953.value);
    org$pandalanguage$pandac$ClassDecl* $tmp1955 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl1954 = $tmp1955;
    PANDA_ASSERT(((panda$core$Bit) { cl1954 != NULL }).value);
    panda$core$String* $tmp1957 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t1956 = $tmp1957;
    panda$core$Bit $tmp1959 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    bool $tmp1958 = $tmp1959.value;
    if ($tmp1958) goto $l1960;
    org$pandalanguage$pandac$Type* $tmp1961 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1962 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp1961);
    $tmp1958 = $tmp1962.value;
    $l1960:;
    panda$core$Bit $tmp1963 = { $tmp1958 };
    if ($tmp1963.value) {
    {
        panda$core$Int64 $tmp1964 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp1965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1964, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp1965.value);
        panda$core$Object* $tmp1966 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp1967 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1966)->children);
        panda$core$Bit $tmp1968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1967, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp1968.value);
        panda$core$Object* $tmp1970 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp1971 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp1970)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1972 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1971), p_out);
        value1969 = $tmp1972;
        panda$core$String* $tmp1974 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        panda$core$String* $tmp1975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1973, $tmp1974);
        panda$core$String* $tmp1977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1975, &$s1976);
        panda$core$String* $tmp1978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1977, value1969);
        panda$core$String* $tmp1980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1978, &$s1979);
        return $tmp1980;
    }
    }
    panda$core$Bit $tmp1981 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1954);
    if ($tmp1981.value) {
    {
        panda$core$Int64 $tmp1982 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1982;
        panda$core$String* $tmp1985 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1984, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        panda$core$String* $tmp1987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1985, &$s1986);
        tmp1983 = $tmp1987;
        panda$core$String* $tmp1989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1988, t1956);
        panda$core$String* $tmp1991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1989, &$s1990);
        panda$core$String* $tmp1992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1991, tmp1983);
        panda$core$String* $tmp1994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1992, &$s1993);
        (($fn1995) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1994);
        panda$core$Object* $tmp1996 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1997, tmp1983);
        panda$core$String* $tmp2000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1998, &$s1999);
        org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp1996), $tmp2000, p_out);
        return tmp1983;
    }
    }
    panda$core$String* $tmp2002 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2001 = $tmp2002;
    panda$core$String* $tmp2004 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp2005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2003, $tmp2004);
    panda$core$String* $tmp2007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2005, &$s2006);
    panda$core$String* $tmp2008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2007, result2001);
    panda$core$String* $tmp2010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2008, &$s2009);
    panda$core$String* $tmp2011 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp2012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2010, $tmp2011);
    panda$core$String* $tmp2014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2012, &$s2013);
    panda$core$Int64 $tmp2016 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp2017 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2015, ((panda$core$Object*) wrap_panda$core$Int64($tmp2016)));
    panda$core$String* $tmp2019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2017, &$s2018);
    panda$core$String* $tmp2020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2014, $tmp2019);
    (($fn2021) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2020);
    panda$core$String* $tmp2023 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr2022 = $tmp2023;
    panda$core$Bit $tmp2025 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    if ($tmp2025.value) {
    {
        panda$core$Object* $tmp2026 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2027 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2026));
        className2024 = $tmp2027;
    }
    }
    else {
    {
        panda$core$String* $tmp2028 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className2024 = $tmp2028;
    }
    }
    panda$core$String* $tmp2030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2029, result2001);
    panda$core$String* $tmp2032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2030, &$s2031);
    panda$core$String* $tmp2033 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) cl1954)->name);
    panda$core$String* $tmp2034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2032, $tmp2033);
    panda$core$String* $tmp2036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2034, &$s2035);
    (($fn2037) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2036);
    panda$core$String* $tmp2039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2038, result2001);
    panda$core$String* $tmp2041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2039, &$s2040);
    (($fn2042) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2041);
    panda$core$Object* $tmp2043 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2044, result2001);
    panda$core$String* $tmp2047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2045, &$s2046);
    org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2043), $tmp2047, p_out);
    return result2001;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2048 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    return $tmp2048;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2050 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp2051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2049, $tmp2050);
    return $tmp2051;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s2052;
    }
    }
    return &$s2053;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2054 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    return $tmp2054;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result2056;
    panda$collections$Iterator* raw$Iter2069;
    panda$core$Char8 raw2082;
    panda$core$UInt8 c2087;
    panda$core$Int64 $tmp2055 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp2055;
    panda$core$String* $tmp2058 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2057, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp2060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2058, &$s2059);
    result2056 = $tmp2060;
    org$pandalanguage$pandac$Type* $tmp2061 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2061);
    panda$core$String* $tmp2063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2062, result2056);
    panda$core$String* $tmp2065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2063, &$s2064);
    panda$core$String* $tmp2067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2065, &$s2066);
    (($fn2068) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2067);
    {
        panda$collections$ListView* $tmp2070 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp2071 = ((panda$collections$Iterable*) $tmp2070)->$class->itable;
        while ($tmp2071->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2071 = $tmp2071->next;
        }
        $fn2073 $tmp2072 = $tmp2071->methods[0];
        panda$collections$Iterator* $tmp2074 = $tmp2072(((panda$collections$Iterable*) $tmp2070));
        raw$Iter2069 = $tmp2074;
        $l2075:;
        ITable* $tmp2077 = raw$Iter2069->$class->itable;
        while ($tmp2077->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2077 = $tmp2077->next;
        }
        $fn2079 $tmp2078 = $tmp2077->methods[0];
        panda$core$Bit $tmp2080 = $tmp2078(raw$Iter2069);
        panda$core$Bit $tmp2081 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2080);
        if (!$tmp2081.value) goto $l2076;
        {
            ITable* $tmp2083 = raw$Iter2069->$class->itable;
            while ($tmp2083->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2083 = $tmp2083->next;
            }
            $fn2085 $tmp2084 = $tmp2083->methods[1];
            panda$core$Object* $tmp2086 = $tmp2084(raw$Iter2069);
            raw2082 = ((panda$core$Char8$wrapper*) $tmp2086)->value;
            panda$core$UInt8 $tmp2088 = panda$core$Char8$convert$R$panda$core$UInt8(raw2082);
            c2087 = $tmp2088;
            (($fn2090) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), &$s2089);
            panda$collections$ListView* $tmp2092 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s2091);
            panda$core$UInt32 $tmp2093 = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(c2087, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp2094 = panda$core$UInt32$convert$R$panda$core$Int64($tmp2093);
            ITable* $tmp2095 = $tmp2092->$class->itable;
            while ($tmp2095->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2095 = $tmp2095->next;
            }
            $fn2097 $tmp2096 = $tmp2095->methods[0];
            panda$core$Object* $tmp2098 = $tmp2096($tmp2092, $tmp2094);
            (($fn2099) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp2098)->value)));
            panda$collections$ListView* $tmp2101 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s2100);
            panda$core$UInt32 $tmp2102 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(c2087, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp2103 = panda$core$UInt32$convert$R$panda$core$Int64($tmp2102);
            ITable* $tmp2104 = $tmp2101->$class->itable;
            while ($tmp2104->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2104 = $tmp2104->next;
            }
            $fn2106 $tmp2105 = $tmp2104->methods[0];
            panda$core$Object* $tmp2107 = $tmp2105($tmp2101, $tmp2103);
            (($fn2108) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp2107)->value)));
        }
        goto $l2075;
        $l2076:;
    }
    panda$collections$ListView* $tmp2110 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp2111 = ((panda$collections$CollectionView*) $tmp2110)->$class->itable;
    while ($tmp2111->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2111 = $tmp2111->next;
    }
    $fn2113 $tmp2112 = $tmp2111->methods[0];
    panda$core$Int64 $tmp2114 = $tmp2112(((panda$collections$CollectionView*) $tmp2110));
    panda$core$String* $tmp2115 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2109, ((panda$core$Object*) wrap_panda$core$Int64($tmp2114)));
    panda$core$String* $tmp2117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2115, &$s2116);
    (($fn2118) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp2117);
    panda$core$String* $tmp2120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2119, result2056);
    panda$core$String* $tmp2122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2120, &$s2121);
    return $tmp2122;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    return &$s2123;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2125 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp2126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2124, $tmp2125);
    panda$core$String* $tmp2128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2126, &$s2127);
    return $tmp2128;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2132;
    org$pandalanguage$pandac$ClassDecl* cl2135;
    panda$core$String* bit2138;
    panda$core$Bit $tmp2129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp2129.value);
    panda$core$Int64 $tmp2130 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp2131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2130, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2131.value);
    panda$core$Object* $tmp2133 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2134 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2133), p_out);
    value2132 = $tmp2134;
    panda$core$Object* $tmp2136 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2137 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2136)->type);
    cl2135 = $tmp2137;
    panda$core$Bit $tmp2139 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2135);
    if ($tmp2139.value) {
    {
        panda$core$Object* $tmp2140 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2141 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2140)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2141.value) {
        {
            bit2138 = &$s2142;
        }
        }
        else {
        {
            panda$core$String* $tmp2144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2143, value2132);
            panda$core$String* $tmp2146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2144, &$s2145);
            bit2138 = $tmp2146;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2147, value2132);
        panda$core$String* $tmp2150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2148, &$s2149);
        bit2138 = $tmp2150;
    }
    }
    panda$core$String* $tmp2152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2151, bit2138);
    panda$core$String* $tmp2154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2152, &$s2153);
    return $tmp2154;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2158;
    org$pandalanguage$pandac$ClassDecl* cl2161;
    panda$core$String* bit2164;
    panda$core$Bit $tmp2155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp2155.value);
    panda$core$Int64 $tmp2156 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp2157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2156, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2157.value);
    panda$core$Object* $tmp2159 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2160 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2159), p_out);
    value2158 = $tmp2160;
    panda$core$Object* $tmp2162 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2163 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2162)->type);
    cl2161 = $tmp2163;
    panda$core$Bit $tmp2165 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2161);
    if ($tmp2165.value) {
    {
        panda$core$Object* $tmp2166 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2167 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2166)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2167.value) {
        {
            bit2164 = &$s2168;
        }
        }
        else {
        {
            panda$core$String* $tmp2170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2169, value2158);
            panda$core$String* $tmp2172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2170, &$s2171);
            bit2164 = $tmp2172;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2173, value2158);
        panda$core$String* $tmp2176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2174, &$s2175);
        bit2164 = $tmp2176;
    }
    }
    panda$core$String* $tmp2178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2177, bit2164);
    panda$core$String* $tmp2180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2178, &$s2179);
    return $tmp2180;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2182;
    panda$core$Bit $tmp2181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp2181.value);
    panda$core$Object* $tmp2183 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2184 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp2183));
    cl2182 = $tmp2184;
    PANDA_ASSERT(((panda$core$Bit) { cl2182 != NULL }).value);
    panda$core$Bit $tmp2185 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2182);
    if ($tmp2185.value) {
    {
        panda$core$String* $tmp2187 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
        panda$core$String* $tmp2188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2186, $tmp2187);
        panda$core$String* $tmp2190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2188, &$s2189);
        return $tmp2190;
    }
    }
    else {
    {
        return &$s2191;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base2195;
    panda$core$String* result2198;
    panda$core$Bit $tmp2192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp2192.value);
    panda$core$Int64 $tmp2193 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp2194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2193, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2194.value);
    panda$core$Object* $tmp2196 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2197 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2196), p_out);
    base2195 = $tmp2197;
    panda$core$String* $tmp2199 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2198 = $tmp2199;
    panda$core$Int64 $tmp2200 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp2200.value) {
        case 52:
        {
            panda$core$String* $tmp2202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2201, base2195);
            panda$core$String* $tmp2204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2202, &$s2203);
            return $tmp2204;
        }
        break;
        case 49:
        {
            panda$core$String* $tmp2206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2205, base2195);
            panda$core$String* $tmp2208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2206, &$s2207);
            return $tmp2208;
        }
        break;
        case 50:
        {
            panda$core$String* $tmp2210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2209, base2195);
            panda$core$String* $tmp2212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2210, &$s2211);
            return $tmp2212;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2225;
    panda$core$String* result2228;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp2213 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2213;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp2214 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2214;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp2215 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2215;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp2216 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2216;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp2217 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2217;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp2218 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2218;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp2219 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2219;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp2220 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp2220;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp2221 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2221;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp2222 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp2222;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp2223 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2223;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp2224 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2224;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp2226 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2227 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2226), p_out);
            value2225 = $tmp2227;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value2225));
            return value2225;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp2229 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result2228 = ((panda$core$String*) $tmp2229);
            PANDA_ASSERT(((panda$core$Bit) { result2228 != NULL }).value);
            return result2228;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp2230 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2230;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp2231 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2231;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp2232 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2232;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp2233 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2233;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2234 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2234;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter2239;
    org$pandalanguage$pandac$IRNode* s2251;
    panda$core$Bit $tmp2235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp2235.value);
    (($fn2237) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2236);
    panda$core$Int64 $tmp2238 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2238;
    {
        ITable* $tmp2240 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp2240->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2240 = $tmp2240->next;
        }
        $fn2242 $tmp2241 = $tmp2240->methods[0];
        panda$collections$Iterator* $tmp2243 = $tmp2241(((panda$collections$Iterable*) p_block->children));
        s$Iter2239 = $tmp2243;
        $l2244:;
        ITable* $tmp2246 = s$Iter2239->$class->itable;
        while ($tmp2246->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2246 = $tmp2246->next;
        }
        $fn2248 $tmp2247 = $tmp2246->methods[0];
        panda$core$Bit $tmp2249 = $tmp2247(s$Iter2239);
        panda$core$Bit $tmp2250 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2249);
        if (!$tmp2250.value) goto $l2245;
        {
            ITable* $tmp2252 = s$Iter2239->$class->itable;
            while ($tmp2252->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2252 = $tmp2252->next;
            }
            $fn2254 $tmp2253 = $tmp2252->methods[1];
            panda$core$Object* $tmp2255 = $tmp2253(s$Iter2239);
            s2251 = ((org$pandalanguage$pandac$IRNode*) $tmp2255);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2251, p_out);
        }
        goto $l2244;
        $l2245:;
    }
    panda$core$Int64 $tmp2256 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2256;
    (($fn2258) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2257);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2259;
    panda$core$String* $match$467722260;
    panda$core$String* ptr2265;
    panda$core$String* arg2268;
    panda$core$String* base2288;
    panda$core$String* index2291;
    panda$core$String* value2294;
    m2259 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$467722260 = ((org$pandalanguage$pandac$Symbol*) m2259->value)->name;
        panda$core$Bit $tmp2262 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$467722260, &$s2261);
        if ($tmp2262.value) {
        {
            panda$core$Int64 $tmp2263 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2263, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2264.value);
            panda$core$Object* $tmp2266 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2267 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2266), p_out);
            ptr2265 = $tmp2267;
            panda$core$Object* $tmp2269 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2270 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2269));
            panda$core$String* $tmp2271 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2270, p_out);
            arg2268 = $tmp2271;
            panda$core$String* $tmp2273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2272, arg2268);
            panda$core$String* $tmp2275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2273, &$s2274);
            panda$core$String* $tmp2276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2275, ptr2265);
            panda$core$String* $tmp2278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2276, &$s2277);
            (($fn2279) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2278);
        }
        }
        else {
        panda$core$Bit $tmp2281 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$467722260, &$s2280);
        if ($tmp2281.value) {
        {
            panda$core$Int64 $tmp2282 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2282, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp2283.value);
            panda$core$Object* $tmp2284 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2285 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2284));
            panda$core$Int64 $tmp2286 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64($tmp2285->type->subtypes);
            panda$core$Bit $tmp2287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2286, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2287.value);
            panda$core$Object* $tmp2289 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2290 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2289), p_out);
            base2288 = $tmp2290;
            panda$core$Object* $tmp2292 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2293 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2292), p_out);
            index2291 = $tmp2293;
            panda$core$Object* $tmp2295 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2296 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2295));
            panda$core$String* $tmp2297 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2296, p_out);
            value2294 = $tmp2297;
            panda$core$String* $tmp2299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2298, base2288);
            panda$core$String* $tmp2301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2299, &$s2300);
            panda$core$String* $tmp2302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2301, index2291);
            panda$core$String* $tmp2304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2302, &$s2303);
            panda$core$String* $tmp2305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2304, value2294);
            panda$core$String* $tmp2307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2305, &$s2306);
            (($fn2308) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2307);
        }
        }
        else {
        panda$core$Bit $tmp2310 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$467722260, &$s2309);
        if ($tmp2310.value) {
        {
            panda$core$Int64 $tmp2311 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2311, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2312.value);
            panda$core$Object* $tmp2314 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2315 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2314), p_out);
            panda$core$String* $tmp2316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2313, $tmp2315);
            panda$core$String* $tmp2318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2316, &$s2317);
            (($fn2319) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2318);
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
    org$pandalanguage$pandac$MethodDecl* m2321;
    org$pandalanguage$pandac$Type* actualMethodType2325;
    panda$core$String* actualResultType2326;
    panda$core$Bit isSuper2327;
    panda$collections$Array* args2347;
    panda$core$Int64 offset2350;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2355;
    panda$core$String* arg2375;
    panda$core$String* refTarget2401;
    panda$core$String* methodRef2405;
    panda$core$String* separator2407;
    panda$core$String* indirectVar2411;
    panda$core$String* resultType2414;
    panda$collections$Iterator* a$Iter2441;
    panda$core$String* a2453;
    panda$core$Bit $tmp2320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2320.value);
    m2321 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2323 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2321->owner)->name, &$s2322);
    if ($tmp2323.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    panda$core$Bit $tmp2324 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m2321->owner);
    if ($tmp2324.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2321);
    }
    }
    panda$core$Int64 $tmp2329 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2330 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2329, ((panda$core$Int64) { 1 }));
    bool $tmp2328 = $tmp2330.value;
    if (!$tmp2328) goto $l2331;
    panda$core$Object* $tmp2332 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2332)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2328 = $tmp2333.value;
    $l2331:;
    panda$core$Bit $tmp2334 = { $tmp2328 };
    isSuper2327 = $tmp2334;
    panda$core$Bit $tmp2336 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2327);
    bool $tmp2335 = $tmp2336.value;
    if (!$tmp2335) goto $l2337;
    panda$core$Bit $tmp2338 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2321);
    $tmp2335 = $tmp2338.value;
    $l2337:;
    panda$core$Bit $tmp2339 = { $tmp2335 };
    if ($tmp2339.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2340 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2321);
        actualMethodType2325 = $tmp2340;
        panda$core$Int64 $tmp2341 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType2325->subtypes);
        panda$core$Int64 $tmp2342 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2341, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2343 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType2325->subtypes, $tmp2342);
        panda$core$String* $tmp2344 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2343));
        actualResultType2326 = $tmp2344;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2345 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2321);
        actualMethodType2325 = $tmp2345;
        panda$core$String* $tmp2346 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2326 = $tmp2346;
    }
    }
    panda$collections$Array* $tmp2348 = (panda$collections$Array*) malloc(40);
    $tmp2348->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2348->refCount.value = 1;
    panda$collections$Array$init($tmp2348);
    args2347 = $tmp2348;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args2347, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2351 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2352 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType2325->subtypes);
    panda$core$Int64 $tmp2353 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2351, $tmp2352);
    panda$core$Int64 $tmp2354 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2353, ((panda$core$Int64) { 1 }));
    offset2350 = $tmp2354;
    panda$core$Int64 $tmp2356 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2355, ((panda$core$Int64) { 0 }), $tmp2356, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp2358 = $tmp2355.start.value;
    panda$core$Int64 i2357 = { $tmp2358 };
    int64_t $tmp2360 = $tmp2355.end.value;
    int64_t $tmp2361 = $tmp2355.step.value;
    bool $tmp2362 = $tmp2355.inclusive.value;
    bool $tmp2369 = $tmp2361 > 0;
    if ($tmp2369) goto $l2367; else goto $l2368;
    $l2367:;
    if ($tmp2362) goto $l2370; else goto $l2371;
    $l2370:;
    if ($tmp2358 <= $tmp2360) goto $l2363; else goto $l2365;
    $l2371:;
    if ($tmp2358 < $tmp2360) goto $l2363; else goto $l2365;
    $l2368:;
    if ($tmp2362) goto $l2372; else goto $l2373;
    $l2372:;
    if ($tmp2358 >= $tmp2360) goto $l2363; else goto $l2365;
    $l2373:;
    if ($tmp2358 > $tmp2360) goto $l2363; else goto $l2365;
    $l2363:;
    {
        panda$core$Object* $tmp2376 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2357);
        panda$core$String* $tmp2377 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2376), p_out);
        arg2375 = $tmp2377;
        panda$core$Bit $tmp2379 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2357, offset2350);
        bool $tmp2378 = $tmp2379.value;
        if (!$tmp2378) goto $l2380;
        panda$core$Int64 $tmp2381 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2357, offset2350);
        panda$core$Object* $tmp2382 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType2325->subtypes, $tmp2381);
        panda$core$Object* $tmp2383 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2357);
        panda$core$Bit $tmp2384 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2382), ((org$pandalanguage$pandac$IRNode*) $tmp2383)->type);
        $tmp2378 = $tmp2384.value;
        $l2380:;
        panda$core$Bit $tmp2385 = { $tmp2378 };
        if ($tmp2385.value) {
        {
            panda$core$Object* $tmp2386 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2357);
            panda$core$Int64 $tmp2387 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2357, offset2350);
            panda$core$Object* $tmp2388 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType2325->subtypes, $tmp2387);
            panda$core$String* $tmp2389 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2375, ((org$pandalanguage$pandac$IRNode*) $tmp2386)->type, ((org$pandalanguage$pandac$Type*) $tmp2388), p_out);
            arg2375 = $tmp2389;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2347, ((panda$core$Object*) arg2375));
    }
    $l2366:;
    if ($tmp2369) goto $l2391; else goto $l2392;
    $l2391:;
    int64_t $tmp2393 = $tmp2360 - i2357.value;
    if ($tmp2362) goto $l2394; else goto $l2395;
    $l2394:;
    if ($tmp2393 >= $tmp2361) goto $l2390; else goto $l2365;
    $l2395:;
    if ($tmp2393 > $tmp2361) goto $l2390; else goto $l2365;
    $l2392:;
    int64_t $tmp2397 = i2357.value - $tmp2360;
    if ($tmp2362) goto $l2398; else goto $l2399;
    $l2398:;
    if ($tmp2397 >= -$tmp2361) goto $l2390; else goto $l2365;
    $l2399:;
    if ($tmp2397 > -$tmp2361) goto $l2390; else goto $l2365;
    $l2390:;
    i2357.value += $tmp2361;
    goto $l2363;
    $l2365:;
    panda$core$Int64 $tmp2402 = panda$collections$Array$get_count$R$panda$core$Int64(args2347);
    panda$core$Bit $tmp2403 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2402, ((panda$core$Int64) { 0 }));
    if ($tmp2403.value) {
    {
        panda$core$Object* $tmp2404 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2347, ((panda$core$Int64) { 0 }));
        refTarget2401 = ((panda$core$String*) $tmp2404);
    }
    }
    else {
    {
        refTarget2401 = NULL;
    }
    }
    panda$core$String* $tmp2406 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget2401, m2321, isSuper2327, p_out);
    methodRef2405 = $tmp2406;
    separator2407 = &$s2408;
    panda$core$Bit $tmp2409 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2321);
    if ($tmp2409.value) {
    {
        panda$core$Int64 $tmp2410 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2410;
        panda$core$String* $tmp2413 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2412, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        indirectVar2411 = $tmp2413;
        panda$core$String* $tmp2415 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType2414 = $tmp2415;
        panda$core$String* $tmp2417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2416, resultType2414);
        panda$core$String* $tmp2419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2417, &$s2418);
        panda$core$String* $tmp2420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2419, indirectVar2411);
        panda$core$String* $tmp2422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2420, &$s2421);
        (($fn2423) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2422);
        panda$core$String* $tmp2425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2424, methodRef2405);
        panda$core$String* $tmp2427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2425, &$s2426);
        panda$core$String* $tmp2428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2427, resultType2414);
        panda$core$String* $tmp2430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2428, &$s2429);
        panda$core$String* $tmp2431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2430, indirectVar2411);
        panda$core$String* $tmp2433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2431, &$s2432);
        (($fn2434) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2433);
        separator2407 = &$s2435;
    }
    }
    else {
    {
        panda$core$String* $tmp2437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2436, methodRef2405);
        panda$core$String* $tmp2439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2437, &$s2438);
        (($fn2440) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2439);
    }
    }
    {
        ITable* $tmp2442 = ((panda$collections$Iterable*) args2347)->$class->itable;
        while ($tmp2442->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2442 = $tmp2442->next;
        }
        $fn2444 $tmp2443 = $tmp2442->methods[0];
        panda$collections$Iterator* $tmp2445 = $tmp2443(((panda$collections$Iterable*) args2347));
        a$Iter2441 = $tmp2445;
        $l2446:;
        ITable* $tmp2448 = a$Iter2441->$class->itable;
        while ($tmp2448->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2448 = $tmp2448->next;
        }
        $fn2450 $tmp2449 = $tmp2448->methods[0];
        panda$core$Bit $tmp2451 = $tmp2449(a$Iter2441);
        panda$core$Bit $tmp2452 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2451);
        if (!$tmp2452.value) goto $l2447;
        {
            ITable* $tmp2454 = a$Iter2441->$class->itable;
            while ($tmp2454->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2454 = $tmp2454->next;
            }
            $fn2456 $tmp2455 = $tmp2454->methods[1];
            panda$core$Object* $tmp2457 = $tmp2455(a$Iter2441);
            a2453 = ((panda$core$String*) $tmp2457);
            (($fn2458) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2407);
            (($fn2459) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2453);
            separator2407 = &$s2460;
        }
        goto $l2446;
        $l2447:;
    }
    (($fn2462) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2461);
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test2474;
    panda$core$Bit $tmp2463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp2463.value);
    panda$core$Int64 $tmp2465 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2465, ((panda$core$Int64) { 2 }));
    bool $tmp2464 = $tmp2466.value;
    if ($tmp2464) goto $l2467;
    panda$core$Int64 $tmp2468 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2468, ((panda$core$Int64) { 3 }));
    $tmp2464 = $tmp2469.value;
    $l2467:;
    panda$core$Bit $tmp2470 = { $tmp2464 };
    PANDA_ASSERT($tmp2470.value);
    panda$core$Object* $tmp2471 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2472 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2473 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2471)->type, $tmp2472);
    PANDA_ASSERT($tmp2473.value);
    panda$core$Object* $tmp2475 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2476 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2475), p_out);
    test2474 = $tmp2476;
    panda$core$String* $tmp2478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2477, test2474);
    panda$core$String* $tmp2480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2478, &$s2479);
    (($fn2481) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2480);
    panda$core$Object* $tmp2482 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2482), p_out);
    (($fn2484) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2483);
    panda$core$Int64 $tmp2485 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2485, ((panda$core$Int64) { 3 }));
    if ($tmp2486.value) {
    {
        (($fn2488) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2487);
        panda$core$Object* $tmp2489 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2489), p_out);
        (($fn2491) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2490);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2495;
    panda$core$String* range2506;
    org$pandalanguage$pandac$IRNode* block2509;
    org$pandalanguage$pandac$Type* t2511;
    panda$core$String* llt2514;
    panda$core$String* indexType2516;
    org$pandalanguage$pandac$ClassDecl* cl2522;
    org$pandalanguage$pandac$FieldDecl* field2530;
    panda$core$String* numberType2536;
    panda$core$String* index2539;
    panda$core$String* start2541;
    panda$core$String* indexValuePtr2554;
    panda$core$String* end2569;
    panda$core$String* step2582;
    panda$core$String* inclusive2595;
    panda$core$String* loopStart2605;
    panda$core$String* loopBody2607;
    panda$core$String* loopEnd2609;
    panda$core$String* loopTest2611;
    panda$core$String* forwardEntry2615;
    panda$core$String* backwardEntry2617;
    panda$core$String* signPrefix2619;
    panda$core$String* direction2631;
    panda$core$String* forwardEntryInclusive2655;
    panda$core$String* forwardEntryExclusive2657;
    panda$core$String* backwardEntryInclusive2700;
    panda$core$String* backwardEntryExclusive2702;
    panda$core$String* backwardEntryExclusiveTest2731;
    panda$core$String* loopInc2747;
    panda$core$String* forwardLabel2749;
    panda$core$String* backwardLabel2751;
    panda$core$String* forwardDelta2764;
    panda$core$String* forwardInclusiveLabel2780;
    panda$core$String* forwardExclusiveLabel2782;
    panda$core$String* forwardExclusiveTest2811;
    panda$core$String* backwardDelta2827;
    panda$core$String* backwardInclusiveLabel2843;
    panda$core$String* backwardExclusiveLabel2845;
    panda$core$String* inc2888;
    panda$core$Bit $tmp2492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp2492.value);
    panda$core$Int64 $tmp2493 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp2494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2493, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2494.value);
    panda$core$Object* $tmp2496 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2495 = ((org$pandalanguage$pandac$IRNode*) $tmp2496);
    panda$core$Object* $tmp2497 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2497)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2498.value);
    panda$core$Object* $tmp2499 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2500 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp2499)->type->subtypes);
    panda$core$Bit $tmp2501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2500, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2501.value);
    panda$core$Object* $tmp2502 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2503 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp2502)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2505 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2503))->name, &$s2504);
    PANDA_ASSERT($tmp2505.value);
    panda$core$Object* $tmp2507 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2508 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2507), p_out);
    range2506 = $tmp2508;
    panda$core$Object* $tmp2510 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2509 = ((org$pandalanguage$pandac$IRNode*) $tmp2510);
    panda$core$Object* $tmp2512 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2513 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp2512)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2511 = ((org$pandalanguage$pandac$Type*) $tmp2513);
    panda$core$String* $tmp2515 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2511);
    llt2514 = $tmp2515;
    panda$core$Bit $tmp2517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2511->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2517.value) {
    {
        panda$core$Int64 $tmp2518 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(t2511->subtypes);
        panda$core$Bit $tmp2519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2518, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2519.value);
        panda$core$Object* $tmp2520 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(t2511->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2521 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2520));
        indexType2516 = $tmp2521;
    }
    }
    else {
    {
        indexType2516 = llt2514;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2523 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2511);
    cl2522 = $tmp2523;
    PANDA_ASSERT(((panda$core$Bit) { cl2522 != NULL }).value);
    panda$collections$ListView* $tmp2524 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2522);
    ITable* $tmp2525 = ((panda$collections$CollectionView*) $tmp2524)->$class->itable;
    while ($tmp2525->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2525 = $tmp2525->next;
    }
    $fn2527 $tmp2526 = $tmp2525->methods[0];
    panda$core$Int64 $tmp2528 = $tmp2526(((panda$collections$CollectionView*) $tmp2524));
    panda$core$Bit $tmp2529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2528, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2529.value);
    panda$collections$ListView* $tmp2531 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2522);
    ITable* $tmp2532 = $tmp2531->$class->itable;
    while ($tmp2532->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2532 = $tmp2532->next;
    }
    $fn2534 $tmp2533 = $tmp2532->methods[0];
    panda$core$Object* $tmp2535 = $tmp2533($tmp2531, ((panda$core$Int64) { 0 }));
    field2530 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2535);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2530);
    panda$core$String* $tmp2537 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2530->type);
    numberType2536 = $tmp2537;
    panda$core$Bit $tmp2538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2495->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2538.value);
    panda$core$String* $tmp2540 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2495->payload));
    index2539 = $tmp2540;
    panda$core$String* $tmp2542 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2541 = $tmp2542;
    panda$core$String* $tmp2544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2543, numberType2536);
    panda$core$String* $tmp2546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2544, &$s2545);
    panda$core$String* $tmp2547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2546, start2541);
    panda$core$String* $tmp2549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2547, &$s2548);
    panda$core$String* $tmp2550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2549, range2506);
    panda$core$String* $tmp2552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2550, &$s2551);
    (($fn2553) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2552);
    panda$core$String* $tmp2555 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2554 = $tmp2555;
    org$pandalanguage$pandac$Type* $tmp2557 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2522);
    panda$core$String* $tmp2558 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2557);
    panda$core$String* $tmp2559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2556, $tmp2558);
    panda$core$String* $tmp2561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2559, &$s2560);
    panda$core$String* $tmp2562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2561, index2539);
    panda$core$String* $tmp2564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2562, &$s2563);
    panda$core$String* $tmp2565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2564, start2541);
    panda$core$String* $tmp2567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2565, &$s2566);
    (($fn2568) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2567);
    panda$core$String* $tmp2570 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2569 = $tmp2570;
    panda$core$String* $tmp2572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2571, numberType2536);
    panda$core$String* $tmp2574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2572, &$s2573);
    panda$core$String* $tmp2575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2574, end2569);
    panda$core$String* $tmp2577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2575, &$s2576);
    panda$core$String* $tmp2578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2577, range2506);
    panda$core$String* $tmp2580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2578, &$s2579);
    (($fn2581) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2580);
    panda$core$String* $tmp2583 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    step2582 = $tmp2583;
    panda$core$String* $tmp2585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2584, numberType2536);
    panda$core$String* $tmp2587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2585, &$s2586);
    panda$core$String* $tmp2588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2587, step2582);
    panda$core$String* $tmp2590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2588, &$s2589);
    panda$core$String* $tmp2591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2590, range2506);
    panda$core$String* $tmp2593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2591, &$s2592);
    (($fn2594) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2593);
    panda$core$String* $tmp2596 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2595 = $tmp2596;
    panda$core$String* $tmp2598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2597, inclusive2595);
    panda$core$String* $tmp2600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2598, &$s2599);
    panda$core$String* $tmp2601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2600, range2506);
    panda$core$String* $tmp2603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2601, &$s2602);
    (($fn2604) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2603);
    panda$core$String* $tmp2606 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2605 = $tmp2606;
    panda$core$String* $tmp2608 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2607 = $tmp2608;
    panda$core$String* $tmp2610 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2609 = $tmp2610;
    panda$core$String* $tmp2612 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2611 = $tmp2612;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2613 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2613->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2613->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2613, ((panda$core$String*) p_f->payload), loopEnd2609, loopTest2611);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2613));
    panda$core$String* $tmp2616 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2615 = $tmp2616;
    panda$core$String* $tmp2618 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2617 = $tmp2618;
    panda$core$Bit $tmp2621 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2511)->name, &$s2620);
    if ($tmp2621.value) {
    {
        signPrefix2619 = &$s2622;
    }
    }
    else {
    {
        panda$core$Bit $tmp2625 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2511)->name, &$s2624);
        bool $tmp2623 = $tmp2625.value;
        if ($tmp2623) goto $l2626;
        panda$core$Bit $tmp2628 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2511)->name, &$s2627);
        $tmp2623 = $tmp2628.value;
        $l2626:;
        panda$core$Bit $tmp2629 = { $tmp2623 };
        PANDA_ASSERT($tmp2629.value);
        signPrefix2619 = &$s2630;
    }
    }
    panda$core$Bit $tmp2633 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix2619, &$s2632);
    if ($tmp2633.value) {
    {
        panda$core$String* $tmp2634 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
        direction2631 = $tmp2634;
        panda$core$String* $tmp2636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2635, direction2631);
        panda$core$String* $tmp2638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2636, &$s2637);
        panda$core$String* $tmp2639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2638, step2582);
        panda$core$String* $tmp2641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2639, &$s2640);
        (($fn2642) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2641);
    }
    }
    else {
    {
        direction2631 = &$s2643;
    }
    }
    panda$core$String* $tmp2645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2644, direction2631);
    panda$core$String* $tmp2647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2645, &$s2646);
    panda$core$String* $tmp2648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2647, forwardEntry2615);
    panda$core$String* $tmp2650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2648, &$s2649);
    panda$core$String* $tmp2651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2650, backwardEntry2617);
    panda$core$String* $tmp2653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2651, &$s2652);
    (($fn2654) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2653);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry2615, p_out);
    panda$core$String* $tmp2656 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2655 = $tmp2656;
    panda$core$String* $tmp2658 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2657 = $tmp2658;
    panda$core$String* $tmp2660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2659, inclusive2595);
    panda$core$String* $tmp2662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2660, &$s2661);
    panda$core$String* $tmp2663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2662, forwardEntryInclusive2655);
    panda$core$String* $tmp2665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2663, &$s2664);
    panda$core$String* $tmp2667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2666, forwardEntryExclusive2657);
    panda$core$String* $tmp2669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2667, &$s2668);
    panda$core$String* $tmp2670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2665, $tmp2669);
    (($fn2671) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2670);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2655, p_out);
    panda$core$String* $tmp2673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2672, start2541);
    panda$core$String* $tmp2675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2673, &$s2674);
    panda$core$String* $tmp2676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2675, end2569);
    panda$core$String* $tmp2678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2676, &$s2677);
    panda$core$String* $tmp2679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2678, loopStart2605);
    panda$core$String* $tmp2681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2679, &$s2680);
    panda$core$String* $tmp2682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2681, loopEnd2609);
    panda$core$String* $tmp2684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2682, &$s2683);
    (($fn2685) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2684);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2657, p_out);
    panda$core$String* $tmp2687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2686, start2541);
    panda$core$String* $tmp2689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2687, &$s2688);
    panda$core$String* $tmp2690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2689, end2569);
    panda$core$String* $tmp2692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2690, &$s2691);
    panda$core$String* $tmp2693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2692, loopStart2605);
    panda$core$String* $tmp2695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2693, &$s2694);
    panda$core$String* $tmp2696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2695, loopEnd2609);
    panda$core$String* $tmp2698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2696, &$s2697);
    (($fn2699) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2698);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry2617, p_out);
    panda$core$String* $tmp2701 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive2700 = $tmp2701;
    panda$core$String* $tmp2703 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive2702 = $tmp2703;
    panda$core$String* $tmp2705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2704, inclusive2595);
    panda$core$String* $tmp2707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2705, &$s2706);
    panda$core$String* $tmp2708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2707, backwardEntryInclusive2700);
    panda$core$String* $tmp2710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2708, &$s2709);
    panda$core$String* $tmp2712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2711, backwardEntryExclusive2702);
    panda$core$String* $tmp2714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2712, &$s2713);
    panda$core$String* $tmp2715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2710, $tmp2714);
    (($fn2716) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2715);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive2700, p_out);
    panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2717, start2541);
    panda$core$String* $tmp2720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2718, &$s2719);
    panda$core$String* $tmp2721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2720, end2569);
    panda$core$String* $tmp2723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2721, &$s2722);
    panda$core$String* $tmp2724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2723, loopStart2605);
    panda$core$String* $tmp2726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2724, &$s2725);
    panda$core$String* $tmp2727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2726, loopEnd2609);
    panda$core$String* $tmp2729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2727, &$s2728);
    (($fn2730) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2729);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive2702, p_out);
    panda$core$String* $tmp2732 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest2731 = $tmp2732;
    panda$core$String* $tmp2734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2733, start2541);
    panda$core$String* $tmp2736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2734, &$s2735);
    panda$core$String* $tmp2737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2736, end2569);
    panda$core$String* $tmp2739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2737, &$s2738);
    panda$core$String* $tmp2740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2739, loopStart2605);
    panda$core$String* $tmp2742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2740, &$s2741);
    panda$core$String* $tmp2743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2742, loopEnd2609);
    panda$core$String* $tmp2745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2743, &$s2744);
    (($fn2746) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2745);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2605, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2509, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2611, p_out);
    panda$core$String* $tmp2748 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2747 = $tmp2748;
    panda$core$String* $tmp2750 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel2749 = $tmp2750;
    panda$core$String* $tmp2752 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel2751 = $tmp2752;
    panda$core$String* $tmp2754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2753, direction2631);
    panda$core$String* $tmp2756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2754, &$s2755);
    panda$core$String* $tmp2757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2756, forwardLabel2749);
    panda$core$String* $tmp2759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2757, &$s2758);
    panda$core$String* $tmp2760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2759, backwardLabel2751);
    panda$core$String* $tmp2762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2760, &$s2761);
    (($fn2763) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2762);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel2749, p_out);
    panda$core$String* $tmp2765 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2764 = $tmp2765;
    panda$core$String* $tmp2767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2766, numberType2536);
    panda$core$String* $tmp2769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2767, &$s2768);
    panda$core$String* $tmp2770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2769, forwardDelta2764);
    panda$core$String* $tmp2772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2770, &$s2771);
    panda$core$String* $tmp2773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2772, end2569);
    panda$core$String* $tmp2775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2773, &$s2774);
    panda$core$String* $tmp2776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2775, index2539);
    panda$core$String* $tmp2778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2776, &$s2777);
    (($fn2779) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2778);
    panda$core$String* $tmp2781 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2780 = $tmp2781;
    panda$core$String* $tmp2783 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2782 = $tmp2783;
    panda$core$String* $tmp2785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2784, inclusive2595);
    panda$core$String* $tmp2787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2785, &$s2786);
    panda$core$String* $tmp2788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2787, forwardInclusiveLabel2780);
    panda$core$String* $tmp2790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2788, &$s2789);
    panda$core$String* $tmp2792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2791, forwardExclusiveLabel2782);
    panda$core$String* $tmp2794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2792, &$s2793);
    panda$core$String* $tmp2795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2790, $tmp2794);
    (($fn2796) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2795);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2780, p_out);
    panda$core$String* $tmp2798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2797, forwardDelta2764);
    panda$core$String* $tmp2800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2798, &$s2799);
    panda$core$String* $tmp2801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2800, step2582);
    panda$core$String* $tmp2803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2801, &$s2802);
    panda$core$String* $tmp2804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2803, loopInc2747);
    panda$core$String* $tmp2806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2804, &$s2805);
    panda$core$String* $tmp2807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2806, loopEnd2609);
    panda$core$String* $tmp2809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2807, &$s2808);
    (($fn2810) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2809);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2782, p_out);
    panda$core$String* $tmp2812 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2811 = $tmp2812;
    panda$core$String* $tmp2814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2813, forwardDelta2764);
    panda$core$String* $tmp2816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2814, &$s2815);
    panda$core$String* $tmp2817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2816, step2582);
    panda$core$String* $tmp2819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2817, &$s2818);
    panda$core$String* $tmp2820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2819, loopInc2747);
    panda$core$String* $tmp2822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2820, &$s2821);
    panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2822, loopEnd2609);
    panda$core$String* $tmp2825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2823, &$s2824);
    (($fn2826) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2825);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel2751, p_out);
    panda$core$String* $tmp2828 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta2827 = $tmp2828;
    panda$core$String* $tmp2830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2829, numberType2536);
    panda$core$String* $tmp2832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2830, &$s2831);
    panda$core$String* $tmp2833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2832, backwardDelta2827);
    panda$core$String* $tmp2835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2833, &$s2834);
    panda$core$String* $tmp2836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2835, index2539);
    panda$core$String* $tmp2838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2836, &$s2837);
    panda$core$String* $tmp2839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2838, end2569);
    panda$core$String* $tmp2841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2839, &$s2840);
    (($fn2842) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2841);
    panda$core$String* $tmp2844 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel2843 = $tmp2844;
    panda$core$String* $tmp2846 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel2845 = $tmp2846;
    panda$core$String* $tmp2848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2847, inclusive2595);
    panda$core$String* $tmp2850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2848, &$s2849);
    panda$core$String* $tmp2851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2850, backwardInclusiveLabel2843);
    panda$core$String* $tmp2853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2851, &$s2852);
    panda$core$String* $tmp2855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2854, backwardExclusiveLabel2845);
    panda$core$String* $tmp2857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2855, &$s2856);
    panda$core$String* $tmp2858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2853, $tmp2857);
    (($fn2859) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2858);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel2843, p_out);
    panda$core$String* $tmp2861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2860, backwardDelta2827);
    panda$core$String* $tmp2863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2861, &$s2862);
    panda$core$String* $tmp2864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2863, step2582);
    panda$core$String* $tmp2866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2864, &$s2865);
    panda$core$String* $tmp2867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2866, loopInc2747);
    panda$core$String* $tmp2869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2867, &$s2868);
    panda$core$String* $tmp2870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2869, loopEnd2609);
    panda$core$String* $tmp2872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2870, &$s2871);
    (($fn2873) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2872);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel2845, p_out);
    panda$core$String* $tmp2875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2874, backwardDelta2827);
    panda$core$String* $tmp2877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2875, &$s2876);
    panda$core$String* $tmp2878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2877, step2582);
    panda$core$String* $tmp2880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2878, &$s2879);
    panda$core$String* $tmp2881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2880, loopInc2747);
    panda$core$String* $tmp2883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2881, &$s2882);
    panda$core$String* $tmp2884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2883, loopEnd2609);
    panda$core$String* $tmp2886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2884, &$s2885);
    (($fn2887) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2886);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2747, p_out);
    panda$core$String* $tmp2889 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc2888 = $tmp2889;
    panda$core$String* $tmp2891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2890, index2539);
    panda$core$String* $tmp2893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2891, &$s2892);
    panda$core$String* $tmp2894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2893, step2582);
    panda$core$String* $tmp2896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2894, &$s2895);
    (($fn2897) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2896);
    panda$core$String* $tmp2899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2898, loopStart2605);
    panda$core$String* $tmp2901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2899, &$s2900);
    (($fn2902) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2901);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2609, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_w, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart2909;
    panda$core$String* loopEnd2911;
    panda$core$Bit $tmp2903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp2903.value);
    panda$core$Int64 $tmp2904 = panda$collections$Array$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp2905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2904, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2905.value);
    panda$core$Object* $tmp2906 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2907 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2908 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2906)->type, $tmp2907);
    PANDA_ASSERT($tmp2908.value);
    panda$core$String* $tmp2910 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2909 = $tmp2910;
    panda$core$String* $tmp2912 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2911 = $tmp2912;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2913 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2913->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2913->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2913, ((panda$core$String*) p_w->payload), loopEnd2911, loopStart2909);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2913));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2909, p_out);
    panda$core$Object* $tmp2916 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2917 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2916), p_out);
    panda$core$String* $tmp2918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2915, $tmp2917);
    panda$core$String* $tmp2920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2918, &$s2919);
    panda$core$String* $tmp2921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2920, loopEnd2911);
    panda$core$String* $tmp2923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2921, &$s2922);
    (($fn2924) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2923);
    panda$core$Object* $tmp2925 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2925), p_out);
    panda$core$String* $tmp2927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2926, loopStart2909);
    panda$core$String* $tmp2929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2927, &$s2928);
    (($fn2930) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2929);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2911, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart2937;
    panda$core$String* loopEnd2939;
    panda$core$Bit $tmp2931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp2931.value);
    panda$core$Int64 $tmp2932 = panda$collections$Array$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp2933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2932, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2933.value);
    panda$core$Object* $tmp2934 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp2935 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2936 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2934)->type, $tmp2935);
    PANDA_ASSERT($tmp2936.value);
    panda$core$String* $tmp2938 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2937 = $tmp2938;
    panda$core$String* $tmp2940 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2939 = $tmp2940;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2941 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2941->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2941->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2941, ((panda$core$String*) p_d->payload), loopEnd2939, loopStart2937);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2941));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2937, p_out);
    panda$core$Object* $tmp2943 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2943), p_out);
    panda$core$Object* $tmp2945 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2946 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2945), p_out);
    panda$core$String* $tmp2947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2944, $tmp2946);
    panda$core$String* $tmp2949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2947, &$s2948);
    panda$core$String* $tmp2950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2949, loopStart2937);
    panda$core$String* $tmp2952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2950, &$s2951);
    (($fn2953) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2952);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2939, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart2957;
    panda$core$String* loopEnd2959;
    panda$core$Bit $tmp2954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp2954.value);
    panda$core$Int64 $tmp2955 = panda$collections$Array$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp2956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2955, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2956.value);
    panda$core$String* $tmp2958 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2957 = $tmp2958;
    panda$core$String* $tmp2960 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2959 = $tmp2960;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2961 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2961->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2961->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2961, ((panda$core$String*) p_l->payload), loopEnd2959, loopStart2957);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2961));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2957, p_out);
    (($fn2964) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2963);
    panda$core$Object* $tmp2965 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2965), p_out);
    (($fn2967) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2966);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2959, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v2968;
    switch (p_target->kind.value) {
        case 1016:
        {
            v2968 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp2970 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v2968->type);
            panda$core$String* $tmp2971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2969, $tmp2970);
            panda$core$String* $tmp2973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2971, &$s2972);
            panda$core$String* $tmp2974 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v2968);
            panda$core$String* $tmp2975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2973, $tmp2974);
            panda$core$String* $tmp2977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2975, &$s2976);
            (($fn2978) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2977);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp2980 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v2968);
                panda$core$String* $tmp2981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2979, $tmp2980);
                panda$core$String* $tmp2983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2981, &$s2982);
                panda$core$String* $tmp2984 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp2985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2983, $tmp2984);
                panda$core$String* $tmp2987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2985, &$s2986);
                (($fn2988) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2987);
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
    panda$collections$Iterator* decl$Iter3002;
    org$pandalanguage$pandac$IRNode* decl3014;
    panda$core$Bit $tmp2992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp2991 = $tmp2992.value;
    if ($tmp2991) goto $l2993;
    panda$core$Bit $tmp2994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp2991 = $tmp2994.value;
    $l2993:;
    panda$core$Bit $tmp2995 = { $tmp2991 };
    bool $tmp2990 = $tmp2995.value;
    if ($tmp2990) goto $l2996;
    panda$core$Bit $tmp2997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp2990 = $tmp2997.value;
    $l2996:;
    panda$core$Bit $tmp2998 = { $tmp2990 };
    bool $tmp2989 = $tmp2998.value;
    if ($tmp2989) goto $l2999;
    panda$core$Bit $tmp3000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp2989 = $tmp3000.value;
    $l2999:;
    panda$core$Bit $tmp3001 = { $tmp2989 };
    PANDA_ASSERT($tmp3001.value);
    {
        ITable* $tmp3003 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3003->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3003 = $tmp3003->next;
        }
        $fn3005 $tmp3004 = $tmp3003->methods[0];
        panda$collections$Iterator* $tmp3006 = $tmp3004(((panda$collections$Iterable*) p_v->children));
        decl$Iter3002 = $tmp3006;
        $l3007:;
        ITable* $tmp3009 = decl$Iter3002->$class->itable;
        while ($tmp3009->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3009 = $tmp3009->next;
        }
        $fn3011 $tmp3010 = $tmp3009->methods[0];
        panda$core$Bit $tmp3012 = $tmp3010(decl$Iter3002);
        panda$core$Bit $tmp3013 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3012);
        if (!$tmp3013.value) goto $l3008;
        {
            ITable* $tmp3015 = decl$Iter3002->$class->itable;
            while ($tmp3015->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3015 = $tmp3015->next;
            }
            $fn3017 $tmp3016 = $tmp3015->methods[1];
            panda$core$Object* $tmp3018 = $tmp3016(decl$Iter3002);
            decl3014 = ((org$pandalanguage$pandac$IRNode*) $tmp3018);
            panda$core$Bit $tmp3019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl3014->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp3019.value);
            panda$core$Int64 $tmp3020 = panda$collections$Array$get_count$R$panda$core$Int64(decl3014->children);
            panda$core$Bit $tmp3021 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3020, ((panda$core$Int64) { 1 }));
            if ($tmp3021.value) {
            {
                panda$core$Object* $tmp3022 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3014->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp3023 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3014->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3022), ((org$pandalanguage$pandac$IRNode*) $tmp3023), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp3024 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3014->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3024), NULL, p_out);
            }
            }
        }
        goto $l3007;
        $l3008:;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3028;
    panda$core$String* result3038;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp3025 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp3026 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp3025, p_out);
            return $tmp3026;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp3027 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp3027;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp3029 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3030 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3029), p_out);
            base3028 = $tmp3030;
            panda$core$String* $tmp3032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3031, base3028);
            panda$core$String* $tmp3034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3032, &$s3033);
            panda$core$String* $tmp3035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3034, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name);
            panda$core$String* $tmp3037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3035, &$s3036);
            return $tmp3037;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp3039 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3040 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3039), p_out);
            result3038 = $tmp3040;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) result3038));
            return result3038;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue3044;
    panda$core$String* value3047;
    panda$core$String* t3048;
    panda$core$Int64 op3051;
    panda$core$String* right3053;
    panda$core$Bit $tmp3041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp3041.value);
    panda$core$Int64 $tmp3042 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3042, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3043.value);
    panda$core$Object* $tmp3045 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3046 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3045), p_out);
    lvalue3044 = $tmp3046;
    panda$core$Object* $tmp3049 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3050 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3049)->type);
    t3048 = $tmp3050;
    op3051 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp3052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op3051, ((panda$core$Int64) { 73 }));
    if ($tmp3052.value) {
    {
        panda$core$Object* $tmp3054 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp3055 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3054), p_out);
        right3053 = $tmp3055;
        value3047 = right3053;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp3057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3056, lvalue3044);
    panda$core$String* $tmp3059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3057, &$s3058);
    panda$core$String* $tmp3060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3059, value3047);
    panda$core$String* $tmp3062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3060, &$s3061);
    (($fn3063) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3062);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $tmp3064 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3064, ((panda$core$Int64) { 1 }));
    if ($tmp3065.value) {
    {
        panda$core$Object* $tmp3067 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3068 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3067), p_out);
        panda$core$String* $tmp3069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3066, $tmp3068);
        panda$core$String* $tmp3071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3069, &$s3070);
        (($fn3072) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3071);
    }
    }
    else {
    {
        panda$core$Int64 $tmp3073 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp3074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3073, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp3074.value);
        (($fn3076) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3075);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3080;
    panda$core$Int64 $tmp3077 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp3078 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3077, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3078.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp3079 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3079);
    }
    }
    panda$core$Int64 $tmp3081 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3080, ((panda$core$Int64) { 0 }), $tmp3081, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3083 = $tmp3080.start.value;
    panda$core$Int64 i3082 = { $tmp3083 };
    int64_t $tmp3085 = $tmp3080.end.value;
    int64_t $tmp3086 = $tmp3080.step.value;
    bool $tmp3087 = $tmp3080.inclusive.value;
    bool $tmp3094 = $tmp3086 > 0;
    if ($tmp3094) goto $l3092; else goto $l3093;
    $l3092:;
    if ($tmp3087) goto $l3095; else goto $l3096;
    $l3095:;
    if ($tmp3083 <= $tmp3085) goto $l3088; else goto $l3090;
    $l3096:;
    if ($tmp3083 < $tmp3085) goto $l3088; else goto $l3090;
    $l3093:;
    if ($tmp3087) goto $l3097; else goto $l3098;
    $l3097:;
    if ($tmp3083 >= $tmp3085) goto $l3088; else goto $l3090;
    $l3098:;
    if ($tmp3083 > $tmp3085) goto $l3088; else goto $l3090;
    $l3088:;
    {
        panda$core$Object* $tmp3101 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3082);
        bool $tmp3100 = ((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3101)->loopLabel != NULL }).value;
        if (!$tmp3100) goto $l3102;
        panda$core$Object* $tmp3103 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3082);
        panda$core$Bit $tmp3104 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3103)->loopLabel, p_name);
        $tmp3100 = $tmp3104.value;
        $l3102:;
        panda$core$Bit $tmp3105 = { $tmp3100 };
        if ($tmp3105.value) {
        {
            panda$core$Object* $tmp3106 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3082);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3106);
        }
        }
    }
    $l3091:;
    if ($tmp3094) goto $l3108; else goto $l3109;
    $l3108:;
    int64_t $tmp3110 = $tmp3085 - i3082.value;
    if ($tmp3087) goto $l3111; else goto $l3112;
    $l3111:;
    if ($tmp3110 >= $tmp3086) goto $l3107; else goto $l3090;
    $l3112:;
    if ($tmp3110 > $tmp3086) goto $l3107; else goto $l3090;
    $l3109:;
    int64_t $tmp3114 = i3082.value - $tmp3085;
    if ($tmp3087) goto $l3115; else goto $l3116;
    $l3115:;
    if ($tmp3114 >= -$tmp3086) goto $l3107; else goto $l3090;
    $l3116:;
    if ($tmp3114 > -$tmp3086) goto $l3107; else goto $l3090;
    $l3107:;
    i3082.value += $tmp3086;
    goto $l3088;
    $l3090:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3118;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3119 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc3118 = $tmp3119;
    panda$core$String* $tmp3121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3120, desc3118->breakLabel);
    panda$core$String* $tmp3123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3121, &$s3122);
    (($fn3124) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3123);
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3125;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3126 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc3125 = $tmp3126;
    panda$core$String* $tmp3128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3127, desc3125->continueLabel);
    panda$core$String* $tmp3130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3128, &$s3129);
    (($fn3131) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3130);
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp3132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp3132.value);
    panda$core$Int64 $tmp3134 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3134, ((panda$core$Int64) { 1 }));
    bool $tmp3133 = $tmp3135.value;
    if ($tmp3133) goto $l3136;
    panda$core$Int64 $tmp3137 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3137, ((panda$core$Int64) { 2 }));
    $tmp3133 = $tmp3138.value;
    $l3136:;
    panda$core$Bit $tmp3139 = { $tmp3133 };
    PANDA_ASSERT($tmp3139.value);
    panda$core$Object* $tmp3141 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3142 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3141), p_out);
    panda$core$String* $tmp3143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3140, $tmp3142);
    panda$core$String* $tmp3145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3143, &$s3144);
    (($fn3146) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3145);
}
void org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3155;
    org$pandalanguage$pandac$IRNode* w3175;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3178;
    panda$core$Object* $tmp3148 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3149 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3148), p_out);
    panda$core$String* $tmp3150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3147, $tmp3149);
    panda$core$String* $tmp3152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3150, &$s3151);
    (($fn3153) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3152);
    panda$core$Int64 $tmp3154 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3154;
    panda$core$Int64 $tmp3156 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3155, ((panda$core$Int64) { 1 }), $tmp3156, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3158 = $tmp3155.start.value;
    panda$core$Int64 i3157 = { $tmp3158 };
    int64_t $tmp3160 = $tmp3155.end.value;
    int64_t $tmp3161 = $tmp3155.step.value;
    bool $tmp3162 = $tmp3155.inclusive.value;
    bool $tmp3169 = $tmp3161 > 0;
    if ($tmp3169) goto $l3167; else goto $l3168;
    $l3167:;
    if ($tmp3162) goto $l3170; else goto $l3171;
    $l3170:;
    if ($tmp3158 <= $tmp3160) goto $l3163; else goto $l3165;
    $l3171:;
    if ($tmp3158 < $tmp3160) goto $l3163; else goto $l3165;
    $l3168:;
    if ($tmp3162) goto $l3172; else goto $l3173;
    $l3172:;
    if ($tmp3158 >= $tmp3160) goto $l3163; else goto $l3165;
    $l3173:;
    if ($tmp3158 > $tmp3160) goto $l3163; else goto $l3165;
    $l3163:;
    {
        panda$core$Object* $tmp3176 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i3157);
        w3175 = ((org$pandalanguage$pandac$IRNode*) $tmp3176);
        panda$core$Bit $tmp3177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3175->kind, ((panda$core$Int64) { 1042 }));
        if ($tmp3177.value) {
        {
            panda$core$Int64 $tmp3179 = panda$collections$Array$get_count$R$panda$core$Int64(w3175->children);
            panda$core$Int64 $tmp3180 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3179, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3178, ((panda$core$Int64) { 0 }), $tmp3180, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp3182 = $tmp3178.start.value;
            panda$core$Int64 j3181 = { $tmp3182 };
            int64_t $tmp3184 = $tmp3178.end.value;
            int64_t $tmp3185 = $tmp3178.step.value;
            bool $tmp3186 = $tmp3178.inclusive.value;
            bool $tmp3193 = $tmp3185 > 0;
            if ($tmp3193) goto $l3191; else goto $l3192;
            $l3191:;
            if ($tmp3186) goto $l3194; else goto $l3195;
            $l3194:;
            if ($tmp3182 <= $tmp3184) goto $l3187; else goto $l3189;
            $l3195:;
            if ($tmp3182 < $tmp3184) goto $l3187; else goto $l3189;
            $l3192:;
            if ($tmp3186) goto $l3196; else goto $l3197;
            $l3196:;
            if ($tmp3182 >= $tmp3184) goto $l3187; else goto $l3189;
            $l3197:;
            if ($tmp3182 > $tmp3184) goto $l3187; else goto $l3189;
            $l3187:;
            {
                panda$core$Object* $tmp3200 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w3175->children, j3181);
                panda$core$UInt64 $tmp3201 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3200));
                panda$core$String* $tmp3202 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3199, ((panda$core$Object*) wrap_panda$core$UInt64($tmp3201)));
                panda$core$String* $tmp3204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3202, &$s3203);
                (($fn3205) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3204);
            }
            $l3190:;
            if ($tmp3193) goto $l3207; else goto $l3208;
            $l3207:;
            int64_t $tmp3209 = $tmp3184 - j3181.value;
            if ($tmp3186) goto $l3210; else goto $l3211;
            $l3210:;
            if ($tmp3209 >= $tmp3185) goto $l3206; else goto $l3189;
            $l3211:;
            if ($tmp3209 > $tmp3185) goto $l3206; else goto $l3189;
            $l3208:;
            int64_t $tmp3213 = j3181.value - $tmp3184;
            if ($tmp3186) goto $l3214; else goto $l3215;
            $l3214:;
            if ($tmp3213 >= -$tmp3185) goto $l3206; else goto $l3189;
            $l3215:;
            if ($tmp3213 > -$tmp3185) goto $l3206; else goto $l3189;
            $l3206:;
            j3181.value += $tmp3185;
            goto $l3187;
            $l3189:;
            panda$core$Int64 $tmp3217 = panda$collections$Array$get_count$R$panda$core$Int64(w3175->children);
            panda$core$Int64 $tmp3218 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3217, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp3219 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w3175->children, $tmp3218);
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3219), p_out);
            (($fn3221) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3220);
        }
        }
        else {
        {
            panda$core$Bit $tmp3222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3175->kind, ((panda$core$Int64) { 1043 }));
            PANDA_ASSERT($tmp3222.value);
            panda$core$Int64 $tmp3223 = panda$collections$Array$get_count$R$panda$core$Int64(w3175->children);
            panda$core$Bit $tmp3224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3223, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp3224.value);
            (($fn3226) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3225);
            panda$core$Object* $tmp3227 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w3175->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3227), p_out);
        }
        }
    }
    $l3166:;
    if ($tmp3169) goto $l3229; else goto $l3230;
    $l3229:;
    int64_t $tmp3231 = $tmp3160 - i3157.value;
    if ($tmp3162) goto $l3232; else goto $l3233;
    $l3232:;
    if ($tmp3231 >= $tmp3161) goto $l3228; else goto $l3165;
    $l3233:;
    if ($tmp3231 > $tmp3161) goto $l3228; else goto $l3165;
    $l3230:;
    int64_t $tmp3235 = i3157.value - $tmp3160;
    if ($tmp3162) goto $l3236; else goto $l3237;
    $l3236:;
    if ($tmp3235 >= -$tmp3161) goto $l3228; else goto $l3165;
    $l3237:;
    if ($tmp3235 > -$tmp3161) goto $l3228; else goto $l3165;
    $l3228:;
    i3157.value += $tmp3161;
    goto $l3163;
    $l3165:;
    panda$core$Int64 $tmp3239 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3239;
    (($fn3241) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3240);
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
    panda$core$String* result3242;
    org$pandalanguage$pandac$Type* $tmp3243 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp3244 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3243);
    result3242 = $tmp3244;
    panda$core$Bit $tmp3246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp3245 = $tmp3246.value;
    if (!$tmp3245) goto $l3247;
    panda$core$Bit $tmp3249 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result3242, &$s3248);
    panda$core$Bit $tmp3250 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3249);
    $tmp3245 = $tmp3250.value;
    $l3247:;
    panda$core$Bit $tmp3251 = { $tmp3245 };
    if ($tmp3251.value) {
    {
        panda$core$String* $tmp3253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3242, &$s3252);
        return $tmp3253;
    }
    }
    return result3242;
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator3267;
    panda$collections$Iterator* p$Iter3278;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3290;
    panda$io$MemoryOutputStream* bodyBuffer3313;
    panda$io$IndentedOutputStream* indentedBody3316;
    panda$collections$Iterator* s$Iter3319;
    org$pandalanguage$pandac$IRNode* s3331;
    panda$core$Object* $tmp3254 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3254)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s3255;
    (($fn3256) self->methodHeaderBuffer->$class->vtable[20])(self->methodHeaderBuffer);
    panda$core$String* $tmp3258 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp3259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3257, $tmp3258);
    panda$core$String* $tmp3261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3259, &$s3260);
    panda$core$String* $tmp3262 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp3263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3261, $tmp3262);
    panda$core$String* $tmp3265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3263, &$s3264);
    (($fn3266) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3265);
    separator3267 = &$s3268;
    panda$core$Bit $tmp3269 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp3270 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3269);
    if ($tmp3270.value) {
    {
        panda$core$String* $tmp3272 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp3273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3271, $tmp3272);
        panda$core$String* $tmp3275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3273, &$s3274);
        (($fn3276) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3275);
        separator3267 = &$s3277;
    }
    }
    {
        ITable* $tmp3279 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3279->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3279 = $tmp3279->next;
        }
        $fn3281 $tmp3280 = $tmp3279->methods[0];
        panda$collections$Iterator* $tmp3282 = $tmp3280(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3278 = $tmp3282;
        $l3283:;
        ITable* $tmp3285 = p$Iter3278->$class->itable;
        while ($tmp3285->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3285 = $tmp3285->next;
        }
        $fn3287 $tmp3286 = $tmp3285->methods[0];
        panda$core$Bit $tmp3288 = $tmp3286(p$Iter3278);
        panda$core$Bit $tmp3289 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3288);
        if (!$tmp3289.value) goto $l3284;
        {
            ITable* $tmp3291 = p$Iter3278->$class->itable;
            while ($tmp3291->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3291 = $tmp3291->next;
            }
            $fn3293 $tmp3292 = $tmp3291->methods[1];
            panda$core$Object* $tmp3294 = $tmp3292(p$Iter3278);
            p3290 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3294);
            panda$core$String* $tmp3296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3295, separator3267);
            panda$core$String* $tmp3298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3296, &$s3297);
            panda$core$String* $tmp3299 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p3290->type);
            panda$core$String* $tmp3300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3298, $tmp3299);
            panda$core$String* $tmp3302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3300, &$s3301);
            panda$core$String* $tmp3303 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p3290->name);
            panda$core$String* $tmp3304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3302, $tmp3303);
            panda$core$String* $tmp3306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3304, &$s3305);
            (($fn3307) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3306);
            separator3267 = &$s3308;
        }
        goto $l3283;
        $l3284:;
    }
    (($fn3310) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3309);
    panda$core$Int64 $tmp3311 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3311;
    panda$core$Bit $tmp3312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp3312.value);
    panda$io$MemoryOutputStream* $tmp3314 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp3314->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp3314->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp3314);
    bodyBuffer3313 = $tmp3314;
    panda$io$IndentedOutputStream* $tmp3317 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp3317->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3317->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3317, ((panda$io$OutputStream*) bodyBuffer3313));
    indentedBody3316 = $tmp3317;
    {
        ITable* $tmp3320 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp3320->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3320 = $tmp3320->next;
        }
        $fn3322 $tmp3321 = $tmp3320->methods[0];
        panda$collections$Iterator* $tmp3323 = $tmp3321(((panda$collections$Iterable*) p_body->children));
        s$Iter3319 = $tmp3323;
        $l3324:;
        ITable* $tmp3326 = s$Iter3319->$class->itable;
        while ($tmp3326->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3326 = $tmp3326->next;
        }
        $fn3328 $tmp3327 = $tmp3326->methods[0];
        panda$core$Bit $tmp3329 = $tmp3327(s$Iter3319);
        panda$core$Bit $tmp3330 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3329);
        if (!$tmp3330.value) goto $l3325;
        {
            ITable* $tmp3332 = s$Iter3319->$class->itable;
            while ($tmp3332->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3332 = $tmp3332->next;
            }
            $fn3334 $tmp3333 = $tmp3332->methods[1];
            panda$core$Object* $tmp3335 = $tmp3333(s$Iter3319);
            s3331 = ((org$pandalanguage$pandac$IRNode*) $tmp3335);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s3331, indentedBody3316);
        }
        goto $l3324;
        $l3325:;
    }
    panda$core$String* $tmp3337 = (($fn3336) self->methodHeaderBuffer->$class->vtable[0])(self->methodHeaderBuffer);
    (($fn3338) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3337);
    panda$core$String* $tmp3340 = (($fn3339) bodyBuffer3313->$class->vtable[0])(bodyBuffer3313);
    (($fn3341) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3340);
    panda$core$Int64 $tmp3342 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3342;
    (($fn3344) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3343);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path3351;
    PANDA_ASSERT(((panda$core$Bit) { self->currentClass == NULL }).value);
    self->currentClass = p_cl;
    panda$collections$Set$clear(self->imports);
    (($fn3345) self->strings->$class->vtable[20])(self->strings);
    (($fn3346) self->declarations->$class->vtable[20])(self->declarations);
    (($fn3347) self->types->$class->vtable[20])(self->types);
    (($fn3348) self->methodsBuffer->$class->vtable[20])(self->methodsBuffer);
    (($fn3349) self->wrapperShimsBuffer->$class->vtable[20])(self->wrapperShimsBuffer);
    (($fn3350) self->shimsBuffer->$class->vtable[20])(self->shimsBuffer);
    panda$collections$Set$clear(self->declared);
    panda$collections$Set$clear(self->writtenTypes);
    panda$collections$Set$clear(self->writtenWrappers);
    panda$collections$HashMap$clear(self->classConstants);
    panda$collections$IdentityMap$clear(self->variableNames);
    self->varCount = ((panda$core$Int64) { 0 });
    panda$collections$HashMap$clear(self->reusedValues);
    panda$collections$IdentityMap$clear(self->methodShims);
    panda$io$File* $tmp3353 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self->hCodeGen, p_cl, &$s3352);
    path3351 = $tmp3353;
    panda$io$File* $tmp3354 = panda$io$File$parent$R$panda$io$File$Q(path3351);
    panda$io$File$createDirectories($tmp3354);
    panda$io$IndentedOutputStream* $tmp3355 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp3355->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3355->refCount.value = 1;
    panda$io$OutputStream* $tmp3357 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path3351);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3355, $tmp3357);
    self->out = $tmp3355;
    org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Bit $tmp3358 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp3358.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
        panda$core$String* $tmp3360 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3359, $tmp3360);
        panda$core$String* $tmp3363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3361, &$s3362);
        panda$core$String* $tmp3364 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3363, $tmp3364);
        panda$core$String* $tmp3367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3365, &$s3366);
        panda$core$String* $tmp3369 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3368, $tmp3369);
        panda$core$String* $tmp3372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3370, &$s3371);
        panda$core$String* $tmp3373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3367, $tmp3372);
        (($fn3374) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3373);
        panda$core$String* $tmp3376 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3375, $tmp3376);
        panda$core$String* $tmp3379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3377, &$s3378);
        panda$core$String* $tmp3381 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3380, $tmp3381);
        panda$core$String* $tmp3384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3382, &$s3383);
        org$pandalanguage$pandac$Type* $tmp3385 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$Int64 $tmp3386 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3385);
        panda$core$String* $tmp3387 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3384, ((panda$core$Object*) wrap_panda$core$Int64($tmp3386)));
        panda$core$String* $tmp3389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3387, &$s3388);
        panda$core$String* $tmp3390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3379, $tmp3389);
        (($fn3391) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3390);
        panda$core$String* $tmp3394 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3393, $tmp3394);
        panda$core$String* $tmp3397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3395, &$s3396);
        panda$core$String* $tmp3398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3392, $tmp3397);
        (($fn3399) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3398);
        (($fn3401) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3400);
        (($fn3403) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3402);
        (($fn3405) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3404);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$finish(self);
    self->currentClass = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* self) {
    (($fn3406) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->shimsBuffer));
    (($fn3407) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->wrapperShimsBuffer));
    (($fn3408) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->types));
    (($fn3409) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->strings));
    (($fn3410) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->methodsBuffer));
    (($fn3411) ((panda$core$Object*) self->out->out)->$class->vtable[1])(((panda$core$Object*) self->out->out));
}

