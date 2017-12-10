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
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
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
typedef void (*$fn118)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn134)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn166)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn172)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn178)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn208)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn214)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn220)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn308)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn314)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn320)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn350)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn372)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn378)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn384)(panda$collections$Iterator*);
typedef void (*$fn391)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn429)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn436)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn464)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn472)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn517)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn523)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn544)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn552)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn561)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn564)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn569)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn595)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn625)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn633)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn673)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn679)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn700)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn708)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn711)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn720)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn726)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn732)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn762)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn789)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn795)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn801)(panda$collections$Iterator*);
typedef void (*$fn808)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn891)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn897)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn903)(panda$collections$Iterator*);
typedef void (*$fn910)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn930)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn988)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1006)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1027)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1067)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1077)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1091)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1107)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1117)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1131)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1154)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1160)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1174)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1222)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1239)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1271)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1279)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1288)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1291)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1298)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1315)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1328)(panda$collections$CollectionView*);
typedef void (*$fn1350)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1489)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1507)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1595)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1603)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1615)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1619)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1625)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1631)(panda$collections$Iterator*);
typedef void (*$fn1640)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1643)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1876)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1902)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1918)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1923)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1949)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1954)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1960)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1966)(panda$collections$Iterator*);
typedef void (*$fn1971)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn1978)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1980)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Object* (*$fn1987)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1989)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Int64 (*$fn1994)(panda$collections$CollectionView*);
typedef void (*$fn1999)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2118)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2123)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2129)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2135)(panda$collections$Iterator*);
typedef void (*$fn2139)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2160)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2189)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2200)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2294)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2305)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2311)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2315)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2321)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2327)(panda$collections$Iterator*);
typedef void (*$fn2329)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2330)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2333)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2352)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2355)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2359)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2362)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2398)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2405)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2424)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2439)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2452)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2462)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2505)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2519)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2533)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2551)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2568)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2579)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2592)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2599)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2604)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2640)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2647)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2666)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2681)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2694)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2707)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2717)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2755)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2767)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2784)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2798)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2812)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2829)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2843)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2859)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2876)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2892)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2909)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2923)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2939)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2955)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2972)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2986)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3000)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3010)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3015)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3041)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3047)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3070)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3081)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3084)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3095)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3105)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3122)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3128)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3134)(panda$collections$Iterator*);
typedef void (*$fn3180)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3189)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3193)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3231)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3238)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3253)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3260)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3302)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3313)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3318)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3328)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3343)(panda$io$MemoryOutputStream*);
typedef void (*$fn3353)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3363)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3368)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3374)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3380)(panda$collections$Iterator*);
typedef void (*$fn3394)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3397)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3409)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3415)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3421)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3423)(panda$io$MemoryOutputStream*);
typedef void (*$fn3425)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3426)(panda$io$MemoryOutputStream*);
typedef void (*$fn3428)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3431)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3432)(panda$io$MemoryOutputStream*);
typedef void (*$fn3433)(panda$io$MemoryOutputStream*);
typedef void (*$fn3434)(panda$io$MemoryOutputStream*);
typedef void (*$fn3435)(panda$io$MemoryOutputStream*);
typedef void (*$fn3436)(panda$io$MemoryOutputStream*);
typedef void (*$fn3437)(panda$io$MemoryOutputStream*);
typedef void (*$fn3461)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3478)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3486)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3488)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3490)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3492)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3493)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3494)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3495)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3496)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3497)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn3498)(panda$core$Object*);

static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x68", 2, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22", 10, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x66\x6E", 3, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20", 8, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28\x2A", 3, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x28", 2, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6C", 2, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3B", 2, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x38", 1, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x36", 2, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x33\x32", 2, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34", 2, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x5F", 2, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7B\x20", 9, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6C\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x6E\x65\x78\x74\x3B\x20", 19, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x6D\x65\x74\x68\x6F\x64\x73\x5B", 14, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, NULL };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, NULL };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, NULL };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6C\x65\x2A\x29\x20\x26", 11, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5, NULL };
static panda$core$String $s422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, NULL };
static panda$core$String $s437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70", 2, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70", 1, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x72\x65\x73\x75\x6C\x74\x20\x3D\x20", 10, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6C\x66", 5, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x73\x75\x6C\x74", 6, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6D", 12, NULL };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A", 9, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, NULL };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6C\x66\x2D\x3E\x76\x61\x6C\x75\x65", 12, NULL };
static panda$core$String $s695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, NULL };
static panda$core$String $s741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5F", 9, NULL };
static panda$core$String $s748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7B\x20", 9, NULL };
static panda$core$String $s757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6C\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B\x20", 21, NULL };
static panda$core$String $s759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x6D\x65\x74\x68\x6F\x64\x73\x5B", 14, NULL };
static panda$core$String $s765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, NULL };
static panda$core$String $s768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x26", 3, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, NULL };
static panda$core$String $s785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, NULL };
static panda$core$String $s807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, NULL };
static panda$core$String $s809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6C\x65\x2A\x29\x20\x26", 11, NULL };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, NULL };
static panda$core$String $s838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, NULL };
static panda$core$String $s844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, NULL };
static panda$core$String $s850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, NULL };
static panda$core$String $s855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, NULL };
static panda$core$String $s857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74\x79\x70\x65\x20", 6, NULL };
static panda$core$String $s872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, NULL };
static panda$core$String $s876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20", 5, NULL };
static panda$core$String $s879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, NULL };
static panda$core$String $s887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, NULL };
static panda$core$String $s908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, NULL };
static panda$core$String $s912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, NULL };
static panda$core$String $s922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, NULL };
static panda$core$String $s923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, NULL };
static panda$core$String $s928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, NULL };
static panda$core$String $s945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, NULL };
static panda$core$String $s952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, NULL };
static panda$core$String $s954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74\x79\x70\x65\x20", 6, NULL };
static panda$core$String $s970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, NULL };
static panda$core$String $s974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20", 5, NULL };
static panda$core$String $s977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, NULL };
static panda$core$String $s984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B", 4, NULL };
static panda$core$String $s1029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x5F", 2, NULL };
static panda$core$String $s1031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, NULL };
static panda$core$String $s1060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, NULL };
static panda$core$String $s1062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, NULL };
static panda$core$String $s1072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s1075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, NULL };
static panda$core$String $s1084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, NULL };
static panda$core$String $s1100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, NULL };
static panda$core$String $s1102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s1112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s1115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, NULL };
static panda$core$String $s1124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, NULL };
static panda$core$String $s1135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s1136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s1137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s1138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s1140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, NULL };
static panda$core$String $s1141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, NULL };
static panda$core$String $s1142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s1143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, NULL };
static panda$core$String $s1145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, NULL };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, NULL };
static panda$core$String $s1147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s1148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s1149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, NULL };
static panda$core$String $s1150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, NULL };
static panda$core$String $s1153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, NULL };
static panda$core$String $s1155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, NULL };
static panda$core$String $s1181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x3D\x20", 4, NULL };
static panda$core$String $s1184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, NULL };
static panda$core$String $s1190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, NULL };
static panda$core$String $s1192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20", 4, NULL };
static panda$core$String $s1195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, NULL };
static panda$core$String $s1248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, NULL };
static panda$core$String $s1255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x2D\x3E\x76\x74\x61\x62\x6C\x65\x5B", 17, NULL };
static panda$core$String $s1258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x29", 2, NULL };
static panda$core$String $s1264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x54\x61\x62\x6C\x65\x2A\x20", 8, NULL };
static panda$core$String $s1266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x2D\x3E\x69\x74\x61\x62\x6C\x65\x3B", 17, NULL };
static panda$core$String $s1272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28", 7, NULL };
static panda$core$String $s1274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x20\x21\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 33, NULL };
static panda$core$String $s1277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s1281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x6E\x65\x78\x74\x3B", 7, NULL };
static panda$core$String $s1290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s1337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x6D\x65\x74\x68\x6F\x64\x73\x5B", 10, NULL };
static panda$core$String $s1348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B", 2, NULL };
static panda$core$String $s1363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, NULL };
static panda$core$String $s1377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 9, NULL };
static panda$core$String $s1383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2A\x20", 9, NULL };
static panda$core$String $s1386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, NULL };
static panda$core$String $s1388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, NULL };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x2A", 2, NULL };
static panda$core$String $s1397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s1399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s1409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s1414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D", 7, NULL };
static panda$core$String $s1416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, NULL };
static panda$core$String $s1433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x72\x65\x61\x6C\x6C\x6F\x63\x28", 10, NULL };
static panda$core$String $s1439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2A\x20", 9, NULL };
static panda$core$String $s1445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, NULL };
static panda$core$String $s1457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s1459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2B\x20", 3, NULL };
static panda$core$String $s1462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29", 7, NULL };
static panda$core$String $s1466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s1470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, NULL };
static panda$core$String $s1472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s1482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 15, NULL };
static panda$core$String $s1484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s1487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, NULL };
static panda$core$String $s1490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s1500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 15, NULL };
static panda$core$String $s1502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s1505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, NULL };
static panda$core$String $s1586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x26", 2, NULL };
static panda$core$String $s1601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s1633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s1657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3F\x20", 11, NULL };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x4E\x55\x4C\x4C\x29", 8, NULL };
static panda$core$String $s1665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x77\x72\x61\x70\x5F", 7, NULL };
static panda$core$String $s1673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s1677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, NULL };
static panda$core$String $s1681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s1683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3F\x20", 11, NULL };
static panda$core$String $s1686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x4E\x55\x4C\x4C\x29", 8, NULL };
static panda$core$String $s1701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s1707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, NULL };
static panda$core$String $s1715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, NULL };
static panda$core$String $s1724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2D\x3E\x76\x61\x6C\x75\x65", 8, NULL };
static panda$core$String $s1733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s1735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C\x20\x3F\x20", 11, NULL };
static panda$core$String $s1738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x28", 4, NULL };
static panda$core$String $s1742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x30\x20\x7D\x29", 19, NULL };
static panda$core$String $s1744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20", 4, NULL };
static panda$core$String $s1750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x74\x72\x75\x65\x20\x7D\x29", 9, NULL };
static panda$core$String $s1752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, NULL };
static panda$core$String $s1758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29", 7, NULL };
static panda$core$String $s1763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, NULL };
static panda$core$String $s1769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s1811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8, NULL };
static panda$core$String $s1817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, NULL };
static panda$core$String $s1822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20", 4, NULL };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, NULL };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, NULL };
static panda$core$String $s1867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s1880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x28", 4, NULL };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, NULL };
static panda$core$String $s1896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x6C\x6C\x6F\x63\x28", 7, NULL };
static panda$core$String $s1899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s1910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 32, NULL };
static panda$core$String $s1916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x3B", 7, NULL };
static panda$core$String $s1919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x72\x65\x66\x43\x6F\x75\x6E\x74\x2E\x76\x61\x6C\x75\x65\x20\x3D\x20\x31\x3B", 21, NULL };
static panda$core$String $s1925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s1933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, NULL };
static panda$core$String $s1934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, NULL };
static panda$core$String $s1938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73", 2, NULL };
static panda$core$String $s1940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20", 25, NULL };
static panda$core$String $s1945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s1947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x63\x6C\x61\x73\x73\x2C\x20\x32\x2C\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x20\x22", 70, NULL };
static panda$core$String $s1970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C\x78", 2, NULL };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, NULL };
static panda$core$String $s1981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, NULL };
static panda$core$String $s1990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22\x2C\x20", 3, NULL };
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x4E\x55\x4C\x4C\x20\x7D\x3B", 9, NULL };
static panda$core$String $s2000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s2002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, NULL };
static panda$core$String $s2005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x73\x65\x6C\x66\x29", 7, NULL };
static panda$core$String $s2023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, NULL };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, NULL };
static panda$core$String $s2026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8, NULL };
static panda$core$String $s2028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x3D\x20\x4E\x55\x4C\x4C", 8, NULL };
static panda$core$String $s2032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, NULL };
static panda$core$String $s2034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, NULL };
static panda$core$String $s2049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, NULL };
static panda$core$String $s2050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8, NULL };
static panda$core$String $s2054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C", 8, NULL };
static panda$core$String $s2058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, NULL };
static panda$core$String $s2060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, NULL };
static panda$core$String $s2067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s2070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x66\x61\x6C\x73\x65\x20\x7D\x29", 23, NULL };
static panda$core$String $s2072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, NULL };
static panda$core$String $s2082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s2084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, NULL };
static panda$core$String $s2088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, NULL };
static panda$core$String $s2092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, NULL };
static panda$core$String $s2138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s2142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, NULL };
static panda$core$String $s2153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x32\x20", 7, NULL };
static panda$core$String $s2155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, NULL };
static panda$core$String $s2179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s2184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D\x20\x3D\x20", 10, NULL };
static panda$core$String $s2187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, NULL };
static panda$core$String $s2194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x72\x65\x65\x28", 5, NULL };
static panda$core$String $s2198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s2203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s2279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, NULL };
static panda$core$String $s2287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s2300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s2348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x7B", 9, NULL };
static panda$core$String $s2354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s2358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x6C\x73\x65\x20\x7B", 6, NULL };
static panda$core$String $s2361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s2375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, NULL };
static panda$core$String $s2414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6D\x69\x6E\x2E\x76\x61\x6C\x75\x65\x3B", 11, NULL };
static panda$core$String $s2427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s2437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, NULL };
static panda$core$String $s2442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6D\x61\x78\x2E\x76\x61\x6C\x75\x65\x3B", 11, NULL };
static panda$core$String $s2455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, NULL };
static panda$core$String $s2457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x69\x6E\x63\x6C\x75\x73\x69\x76\x65\x2E\x76\x61\x6C\x75\x65\x3B", 17, NULL };
static panda$core$String $s2478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, NULL };
static panda$core$String $s2480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s2482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, NULL };
static panda$core$String $s2485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, NULL };
static panda$core$String $s2488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, NULL };
static panda$core$String $s2493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x3D\x20", 4, NULL };
static panda$core$String $s2511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x20", 3, NULL };
static panda$core$String $s2525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x20", 3, NULL };
static panda$core$String $s2549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x3B", 7, NULL };
static panda$core$String $s2556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20\x31\x29\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x31\x29\x20\x67\x6F\x74\x6F\x20", 11, NULL };
static panda$core$String $s2587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2B\x3D\x20\x31\x3B", 12, NULL };
static panda$core$String $s2600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, NULL };
static panda$core$String $s2602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, NULL };
static panda$core$String $s2656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x61\x72\x74\x2E\x76\x61\x6C\x75\x65\x3B", 13, NULL };
static panda$core$String $s2669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s2679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, NULL };
static panda$core$String $s2684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x65\x6E\x64\x2E\x76\x61\x6C\x75\x65\x3B", 11, NULL };
static panda$core$String $s2697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x65\x70\x2E\x76\x61\x6C\x75\x65\x3B", 12, NULL };
static panda$core$String $s2710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, NULL };
static panda$core$String $s2712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x69\x6E\x63\x6C\x75\x73\x69\x76\x65\x2E\x76\x61\x6C\x75\x65\x3B", 17, NULL };
static panda$core$String $s2733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, NULL };
static panda$core$String $s2735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, NULL };
static panda$core$String $s2740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, NULL };
static panda$core$String $s2743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, NULL };
static panda$core$String $s2745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s2748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, NULL };
static panda$core$String $s2750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x30\x3B", 5, NULL };
static panda$core$String $s2756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, NULL };
static panda$core$String $s2757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x3D\x20", 4, NULL };
static panda$core$String $s2790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x20", 3, NULL };
static panda$core$String $s2804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, NULL };
static panda$core$String $s2835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, NULL };
static panda$core$String $s2851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x20", 3, NULL };
static panda$core$String $s2890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x3B", 7, NULL };
static panda$core$String $s2897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, NULL };
static panda$core$String $s2915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, NULL };
static panda$core$String $s2931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2D\x20", 9, NULL };
static panda$core$String $s2953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20\x2D", 5, NULL };
static panda$core$String $s2978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x2D", 4, NULL };
static panda$core$String $s2992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2B\x3D\x20", 10, NULL };
static panda$core$String $s3008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, NULL };
static panda$core$String $s3013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, NULL };
static panda$core$String $s3036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, NULL };
static panda$core$String $s3039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, NULL };
static panda$core$String $s3045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s3065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, NULL };
static panda$core$String $s3068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7B", 14, NULL };
static panda$core$String $s3083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s3086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s3103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, NULL };
static panda$core$String $s3153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s3178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, NULL };
static panda$core$String $s3187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x3B", 7, NULL };
static panda$core$String $s3227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, NULL };
static panda$core$String $s3229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, NULL };
static panda$core$String $s3236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x50\x41\x4E\x44\x41\x5F\x41\x53\x53\x45\x52\x54\x28", 13, NULL };
static panda$core$String $s3251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s3254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20\x28", 8, NULL };
static panda$core$String $s3258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x7B", 9, NULL };
static panda$core$String $s3296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x73\x65\x20", 5, NULL };
static panda$core$String $s3300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, NULL };
static panda$core$String $s3312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B\x3B", 6, NULL };
static panda$core$String $s3317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x61\x75\x6C\x74\x3A", 8, NULL };
static panda$core$String $s3327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s3335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s3339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, NULL };
static panda$core$String $s3344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s3355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, NULL };
static panda$core$String $s3364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70\x5F", 3, NULL };
static panda$core$String $s3392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s3430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s3439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x63", 2, NULL };
static panda$core$String $s3446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x77\x72\x61\x70\x5F", 15, NULL };
static panda$core$String $s3453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s3455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66\x29\x20\x7B", 8, NULL };
static panda$core$String $s3462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20", 4, NULL };
static panda$core$String $s3465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x72\x65\x73\x75\x6C\x74\x20\x3D\x20", 19, NULL };
static panda$core$String $s3467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s3470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 18, NULL };
static panda$core$String $s3475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s3479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x63\x6C\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20", 37, NULL };
static panda$core$String $s3480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s3483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x3B", 14, NULL };
static panda$core$String $s3487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x76\x61\x6C\x75\x65\x20\x3D\x20\x73\x65\x6C\x66\x3B", 25, NULL };
static panda$core$String $s3489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6E\x20\x72\x65\x73\x75\x6C\x74\x3B", 18, NULL };
static panda$core$String $s3491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };

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
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp92, ((panda$core$Int64) { 0 }), $tmp94, ((panda$core$Bit) { false }));
        int64_t $tmp96 = $tmp92.min.value;
        panda$core$Int64 i95 = { $tmp96 };
        int64_t $tmp98 = $tmp92.max.value;
        bool $tmp99 = $tmp92.inclusive.value;
        if ($tmp99) goto $l106; else goto $l107;
        $l106:;
        if ($tmp96 <= $tmp98) goto $l100; else goto $l102;
        $l107:;
        if ($tmp96 < $tmp98) goto $l100; else goto $l102;
        $l100:;
        {
            panda$core$MutableString$append$panda$core$String(code80, separator90);
            panda$core$Object* $tmp108 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, i95);
            panda$core$String* $tmp109 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp108));
            panda$core$MutableString$append$panda$core$String(code80, $tmp109);
            separator90 = &$s110;
        }
        $l103:;
        int64_t $tmp112 = $tmp98 - i95.value;
        if ($tmp99) goto $l113; else goto $l114;
        $l113:;
        if ($tmp112 >= 1) goto $l111; else goto $l102;
        $l114:;
        if ($tmp112 > 1) goto $l111; else goto $l102;
        $l111:;
        i95.value += 1;
        goto $l100;
        $l102:;
        panda$core$MutableString$append$panda$core$String(code80, &$s117);
        (($fn118) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code80));
        return result75;
    }
    }
    panda$core$String* $tmp119 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self->hCodeGen, p_t);
    return $tmp119;
}
void org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->compiler = p_compiler;
    org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->hCodeGen, p_compiler);
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp120 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp120;
    panda$core$String* $tmp122 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s121, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp122, &$s123);
    return $tmp124;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp125 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp125;
    panda$core$String* $tmp127 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s126, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp127, &$s128);
    return $tmp129;
}
void org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s130, p_label);
    panda$core$String* $tmp133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp131, &$s132);
    (($fn134) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp133);
    self->currentBlock = p_label;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt) {
    switch (p_stmt->kind.value) {
        case 1000:
        {
            panda$core$Int64 $tmp135 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp135, ((panda$core$Int64) { 0 }));
            if ($tmp136.value) {
            {
                return ((panda$core$Bit) { false });
            }
            }
            panda$core$Int64 $tmp137 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Int64 $tmp138 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp137, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp139 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, $tmp138);
            panda$core$Bit $tmp140 = org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp139));
            return $tmp140;
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
    org$pandalanguage$pandac$ClassDecl* cl152;
    panda$core$Int64 result161;
    panda$collections$Iterator* f$Iter162;
    org$pandalanguage$pandac$FieldDecl* f175;
    panda$core$Int64 size181;
    panda$core$Int64 align183;
    PANDA_ASSERT(p_t->resolved.value);
    panda$core$Bit $tmp141 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_t);
    if ($tmp141.value) {
    {
        panda$core$Bit $tmp143 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s142);
        if ($tmp143.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        panda$core$Bit $tmp145 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s144);
        if ($tmp145.value) {
        {
            return ((panda$core$Int64) { 2 });
        }
        }
        panda$core$Bit $tmp147 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s146);
        if ($tmp147.value) {
        {
            return ((panda$core$Int64) { 4 });
        }
        }
        panda$core$Bit $tmp149 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s148);
        PANDA_ASSERT($tmp149.value);
        return ((panda$core$Int64) { 8 });
    }
    }
    org$pandalanguage$pandac$Type* $tmp150 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp151 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp150);
    if ($tmp151.value) {
    {
        return ((panda$core$Int64) { 1 });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp153 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl152 = $tmp153;
    PANDA_ASSERT(((panda$core$Bit) { cl152 != NULL }).value);
    panda$core$Bit $tmp155 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl152);
    panda$core$Bit $tmp156 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp155);
    bool $tmp154 = $tmp156.value;
    if ($tmp154) goto $l157;
    panda$core$Bit $tmp159 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl152)->name, &$s158);
    $tmp154 = $tmp159.value;
    $l157:;
    panda$core$Bit $tmp160 = { $tmp154 };
    if ($tmp160.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    result161 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp163 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl152);
        ITable* $tmp164 = ((panda$collections$Iterable*) $tmp163)->$class->itable;
        while ($tmp164->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp164 = $tmp164->next;
        }
        $fn166 $tmp165 = $tmp164->methods[0];
        panda$collections$Iterator* $tmp167 = $tmp165(((panda$collections$Iterable*) $tmp163));
        f$Iter162 = $tmp167;
        $l168:;
        ITable* $tmp170 = f$Iter162->$class->itable;
        while ($tmp170->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp170 = $tmp170->next;
        }
        $fn172 $tmp171 = $tmp170->methods[0];
        panda$core$Bit $tmp173 = $tmp171(f$Iter162);
        panda$core$Bit $tmp174 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp173);
        if (!$tmp174.value) goto $l169;
        {
            ITable* $tmp176 = f$Iter162->$class->itable;
            while ($tmp176->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp176 = $tmp176->next;
            }
            $fn178 $tmp177 = $tmp176->methods[1];
            panda$core$Object* $tmp179 = $tmp177(f$Iter162);
            f175 = ((org$pandalanguage$pandac$FieldDecl*) $tmp179);
            panda$core$Bit $tmp180 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f175->annotations);
            if ($tmp180.value) {
            {
                goto $l168;
            }
            }
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f175);
            panda$core$Int64 $tmp182 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f175->type);
            size181 = $tmp182;
            panda$core$Int64 $tmp184 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result161, size181);
            align183 = $tmp184;
            panda$core$Bit $tmp185 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align183, ((panda$core$Int64) { 0 }));
            if ($tmp185.value) {
            {
                panda$core$Int64 $tmp186 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size181, align183);
                panda$core$Int64 $tmp187 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result161, $tmp186);
                result161 = $tmp187;
            }
            }
            panda$core$Int64 $tmp188 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result161, size181);
            panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp188, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp189.value);
            panda$core$Int64 $tmp190 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result161, size181);
            result161 = $tmp190;
        }
        goto $l168;
        $l169:;
    }
    panda$core$Bit $tmp191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp191.value) {
    {
        panda$core$Int64 $tmp192 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result161, ((panda$core$Int64) { 1 }));
        result161 = $tmp192;
    }
    }
    return result161;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp193 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
    panda$core$Int64 $tmp194 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp193, ((panda$core$Int64) { 8 }));
    return $tmp194;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl195;
    panda$core$Int64 result201;
    panda$collections$Iterator* f$Iter204;
    org$pandalanguage$pandac$FieldDecl* f217;
    panda$core$Int64 size222;
    panda$core$Int64 align224;
    org$pandalanguage$pandac$ClassDecl* $tmp196 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl195 = $tmp196;
    bool $tmp197 = ((panda$core$Bit) { cl195 != NULL }).value;
    if (!$tmp197) goto $l198;
    panda$core$Bit $tmp199 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl195);
    $tmp197 = $tmp199.value;
    $l198:;
    panda$core$Bit $tmp200 = { $tmp197 };
    PANDA_ASSERT($tmp200.value);
    org$pandalanguage$pandac$Type* $tmp202 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$Int64 $tmp203 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp202);
    result201 = $tmp203;
    {
        panda$collections$ListView* $tmp205 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl195);
        ITable* $tmp206 = ((panda$collections$Iterable*) $tmp205)->$class->itable;
        while ($tmp206->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp206 = $tmp206->next;
        }
        $fn208 $tmp207 = $tmp206->methods[0];
        panda$collections$Iterator* $tmp209 = $tmp207(((panda$collections$Iterable*) $tmp205));
        f$Iter204 = $tmp209;
        $l210:;
        ITable* $tmp212 = f$Iter204->$class->itable;
        while ($tmp212->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp212 = $tmp212->next;
        }
        $fn214 $tmp213 = $tmp212->methods[0];
        panda$core$Bit $tmp215 = $tmp213(f$Iter204);
        panda$core$Bit $tmp216 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp215);
        if (!$tmp216.value) goto $l211;
        {
            ITable* $tmp218 = f$Iter204->$class->itable;
            while ($tmp218->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp218 = $tmp218->next;
            }
            $fn220 $tmp219 = $tmp218->methods[1];
            panda$core$Object* $tmp221 = $tmp219(f$Iter204);
            f217 = ((org$pandalanguage$pandac$FieldDecl*) $tmp221);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f217);
            panda$core$Int64 $tmp223 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f217->type);
            size222 = $tmp223;
            panda$core$Int64 $tmp225 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result201, size222);
            align224 = $tmp225;
            panda$core$Bit $tmp226 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align224, ((panda$core$Int64) { 0 }));
            if ($tmp226.value) {
            {
                panda$core$Int64 $tmp227 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size222, align224);
                panda$core$Int64 $tmp228 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result201, $tmp227);
                result201 = $tmp228;
            }
            }
            panda$core$Int64 $tmp229 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result201, size222);
            panda$core$Bit $tmp230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp229, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp230.value);
            panda$core$Int64 $tmp231 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result201, size222);
            result201 = $tmp231;
        }
        goto $l210;
        $l211:;
    }
    panda$core$Bit $tmp232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp232.value) {
    {
        panda$core$Int64 $tmp233 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result201, ((panda$core$Int64) { 1 }));
        result201 = $tmp233;
    }
    }
    return result201;
}
void org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp234 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp234.value) {
    {
        return;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp235 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    return $tmp235;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp236.value) {
    {
        panda$core$Object* $tmp237 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp238 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp237));
        return $tmp238;
    }
    }
    panda$core$String* $tmp240 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s239, $tmp240);
    panda$core$String* $tmp243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp241, &$s242);
    return $tmp243;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp244 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp244, &$s245);
    return $tmp246;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType247;
    panda$core$MutableString* result249;
    panda$core$Range$LTpanda$core$Int64$GT $tmp266;
    org$pandalanguage$pandac$Type* $tmp248 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedType247 = $tmp248;
    panda$core$MutableString* $tmp250 = (panda$core$MutableString*) malloc(40);
    $tmp250->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp250->refCount.value = 1;
    panda$core$MutableString$init($tmp250);
    result249 = $tmp250;
    panda$core$Int64 $tmp252 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType247->subtypes);
    panda$core$Int64 $tmp253 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp252, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp254 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType247->subtypes, $tmp253);
    panda$core$String* $tmp255 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp254));
    panda$core$MutableString$append$panda$core$String(result249, $tmp255);
    panda$core$MutableString$append$panda$core$String(result249, &$s256);
    panda$core$Bit $tmp257 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp257.value);
    panda$core$String* $tmp259 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s258, $tmp259);
    panda$core$String* $tmp262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp260, &$s261);
    panda$core$MutableString$append$panda$core$String(result249, $tmp262);
    panda$core$Bit $tmp263 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_m->owner);
    if ($tmp263.value) {
    {
        panda$core$MutableString$append$panda$core$String(result249, &$s264);
    }
    }
    panda$core$MutableString$append$panda$core$String(result249, &$s265);
    panda$core$Int64 $tmp267 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType247->subtypes);
    panda$core$Int64 $tmp268 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp267, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp266, ((panda$core$Int64) { 0 }), $tmp268, ((panda$core$Bit) { false }));
    int64_t $tmp270 = $tmp266.min.value;
    panda$core$Int64 i269 = { $tmp270 };
    int64_t $tmp272 = $tmp266.max.value;
    bool $tmp273 = $tmp266.inclusive.value;
    if ($tmp273) goto $l280; else goto $l281;
    $l280:;
    if ($tmp270 <= $tmp272) goto $l274; else goto $l276;
    $l281:;
    if ($tmp270 < $tmp272) goto $l274; else goto $l276;
    $l274:;
    {
        panda$core$MutableString$append$panda$core$String(result249, &$s282);
        panda$core$Object* $tmp283 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType247->subtypes, i269);
        panda$core$String* $tmp284 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp283));
        panda$core$MutableString$append$panda$core$String(result249, $tmp284);
    }
    $l277:;
    int64_t $tmp286 = $tmp272 - i269.value;
    if ($tmp273) goto $l287; else goto $l288;
    $l287:;
    if ($tmp286 >= 1) goto $l285; else goto $l276;
    $l288:;
    if ($tmp286 > 1) goto $l285; else goto $l276;
    $l285:;
    i269.value += 1;
    goto $l274;
    $l276:;
    panda$core$MutableString$append$panda$core$String(result249, &$s291);
    panda$core$String* $tmp292 = panda$core$MutableString$convert$R$panda$core$String(result249);
    return $tmp292;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp293.value);
    panda$core$Object* $tmp295 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp296 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp295));
    panda$core$String* $tmp297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s294, $tmp296);
    panda$core$String* $tmp299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp297, &$s298);
    return $tmp299;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces300;
    panda$core$String* previous303;
    panda$collections$Iterator* intfType$Iter305;
    org$pandalanguage$pandac$Type* intfType317;
    org$pandalanguage$pandac$ClassDecl* intf322;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC324;
    panda$collections$ListView* methods326;
    panda$core$String* name328;
    panda$core$MutableString* result338;
    panda$core$String* separator367;
    panda$collections$Iterator* m$Iter369;
    org$pandalanguage$pandac$MethodDecl* m381;
    org$pandalanguage$pandac$Type* $tmp301 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp302 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp301);
    interfaces300 = $tmp302;
    previous303 = &$s304;
    {
        ITable* $tmp306 = ((panda$collections$Iterable*) interfaces300)->$class->itable;
        while ($tmp306->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp306 = $tmp306->next;
        }
        $fn308 $tmp307 = $tmp306->methods[0];
        panda$collections$Iterator* $tmp309 = $tmp307(((panda$collections$Iterable*) interfaces300));
        intfType$Iter305 = $tmp309;
        $l310:;
        ITable* $tmp312 = intfType$Iter305->$class->itable;
        while ($tmp312->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp312 = $tmp312->next;
        }
        $fn314 $tmp313 = $tmp312->methods[0];
        panda$core$Bit $tmp315 = $tmp313(intfType$Iter305);
        panda$core$Bit $tmp316 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp315);
        if (!$tmp316.value) goto $l311;
        {
            ITable* $tmp318 = intfType$Iter305->$class->itable;
            while ($tmp318->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp318 = $tmp318->next;
            }
            $fn320 $tmp319 = $tmp318->methods[1];
            panda$core$Object* $tmp321 = $tmp319(intfType$Iter305);
            intfType317 = ((org$pandalanguage$pandac$Type*) $tmp321);
            org$pandalanguage$pandac$ClassDecl* $tmp323 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType317);
            intf322 = $tmp323;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp325 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf322);
            intfCC324 = $tmp325;
            panda$collections$ListView* $tmp327 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType317);
            methods326 = $tmp327;
            panda$core$String* $tmp330 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s329, $tmp330);
            panda$core$String* $tmp333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp331, &$s332);
            panda$core$String* $tmp334 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf322)->name);
            panda$core$String* $tmp335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp333, $tmp334);
            panda$core$String* $tmp337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp335, &$s336);
            name328 = $tmp337;
            panda$core$MutableString* $tmp339 = (panda$core$MutableString*) malloc(40);
            $tmp339->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp339->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp342 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp343 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp342);
            panda$core$String* $tmp344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s341, $tmp343);
            panda$core$String* $tmp346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp344, &$s345);
            ITable* $tmp348 = ((panda$collections$CollectionView*) methods326)->$class->itable;
            while ($tmp348->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp348 = $tmp348->next;
            }
            $fn350 $tmp349 = $tmp348->methods[0];
            panda$core$Int64 $tmp351 = $tmp349(((panda$collections$CollectionView*) methods326));
            panda$core$String* $tmp352 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s347, ((panda$core$Object*) wrap_panda$core$Int64($tmp351)));
            panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp352, &$s353);
            panda$core$String* $tmp355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp354, name328);
            panda$core$String* $tmp357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp355, &$s356);
            panda$core$String* $tmp358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp346, $tmp357);
            panda$core$String* $tmp360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s359, intfCC324->name);
            panda$core$String* $tmp362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp360, &$s361);
            panda$core$String* $tmp363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp362, previous303);
            panda$core$String* $tmp365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp363, &$s364);
            panda$core$String* $tmp366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp358, $tmp365);
            panda$core$MutableString$init$panda$core$String($tmp339, $tmp366);
            result338 = $tmp339;
            separator367 = &$s368;
            {
                ITable* $tmp370 = ((panda$collections$Iterable*) methods326)->$class->itable;
                while ($tmp370->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp370 = $tmp370->next;
                }
                $fn372 $tmp371 = $tmp370->methods[0];
                panda$collections$Iterator* $tmp373 = $tmp371(((panda$collections$Iterable*) methods326));
                m$Iter369 = $tmp373;
                $l374:;
                ITable* $tmp376 = m$Iter369->$class->itable;
                while ($tmp376->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp376 = $tmp376->next;
                }
                $fn378 $tmp377 = $tmp376->methods[0];
                panda$core$Bit $tmp379 = $tmp377(m$Iter369);
                panda$core$Bit $tmp380 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp379);
                if (!$tmp380.value) goto $l375;
                {
                    ITable* $tmp382 = m$Iter369->$class->itable;
                    while ($tmp382->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp382 = $tmp382->next;
                    }
                    $fn384 $tmp383 = $tmp382->methods[1];
                    panda$core$Object* $tmp385 = $tmp383(m$Iter369);
                    m381 = ((org$pandalanguage$pandac$MethodDecl*) $tmp385);
                    panda$core$MutableString$append$panda$core$String(result338, separator367);
                    separator367 = &$s386;
                    panda$core$Bit $tmp387 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m381->annotations);
                    if ($tmp387.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result338, &$s388);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp389 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m381);
                        panda$core$MutableString$append$panda$core$String(result338, $tmp389);
                    }
                    }
                }
                goto $l374;
                $l375:;
            }
            panda$core$MutableString$append$panda$core$String(result338, &$s390);
            (($fn391) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result338));
            panda$core$String* $tmp393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s392, name328);
            panda$core$String* $tmp395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp393, &$s394);
            previous303 = $tmp395;
        }
        goto $l310;
        $l311:;
    }
    return previous303;
}
org$pandalanguage$pandac$CCodeGenerator$MethodShim* org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer396;
    panda$io$IndentedOutputStream* out399;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* found402;
    org$pandalanguage$pandac$Type* effectiveReturnType410;
    panda$core$String* resultName414;
    panda$core$MutableString* resultType418;
    panda$core$String* self_t430;
    panda$core$Range$LTpanda$core$Int64$GT $tmp438;
    panda$core$String* pType453;
    panda$collections$Array* casts475;
    panda$core$Range$LTpanda$core$Int64$GT $tmp478;
    panda$core$String* p493;
    panda$core$Range$LTpanda$core$Int64$GT $tmp524;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* result565;
    panda$io$MemoryOutputStream* $tmp397 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp397->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp397->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp397);
    outBuffer396 = $tmp397;
    panda$io$IndentedOutputStream* $tmp400 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp400->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp400->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp400, ((panda$io$OutputStream*) outBuffer396));
    out399 = $tmp400;
    panda$core$Object* $tmp403 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    found402 = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp403);
    if (((panda$core$Bit) { found402 != NULL }).value) {
    {
        return found402;
    }
    }
    panda$core$Bit $tmp404 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_effective);
    PANDA_ASSERT($tmp404.value);
    panda$core$Int64 $tmp405 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp406 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Int64 $tmp407 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp406, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp405, $tmp407);
    PANDA_ASSERT($tmp408.value);
    panda$core$Bit $tmp409 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_raw);
    PANDA_ASSERT($tmp409.value);
    panda$core$Int64 $tmp411 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp412 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp411, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp413 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, $tmp412);
    effectiveReturnType410 = ((org$pandalanguage$pandac$Type*) $tmp413);
    panda$core$String* $tmp415 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp415, &$s416);
    resultName414 = $tmp417;
    panda$core$MutableString* $tmp419 = (panda$core$MutableString*) malloc(40);
    $tmp419->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp419->refCount.value = 1;
    panda$core$String* $tmp421 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType410);
    panda$core$MutableString$init$panda$core$String($tmp419, $tmp421);
    resultType418 = $tmp419;
    panda$core$String* $tmp423 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s422, ((panda$core$Object*) resultType418));
    panda$core$String* $tmp425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp423, &$s424);
    panda$core$String* $tmp426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp425, resultName414);
    panda$core$String* $tmp428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp426, &$s427);
    (($fn429) ((panda$io$OutputStream*) out399)->$class->vtable[16])(((panda$io$OutputStream*) out399), $tmp428);
    panda$core$String* $tmp431 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t430 = $tmp431;
    panda$core$String* $tmp433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s432, self_t430);
    panda$core$String* $tmp435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp433, &$s434);
    (($fn436) ((panda$io$OutputStream*) out399)->$class->vtable[16])(((panda$io$OutputStream*) out399), $tmp435);
    panda$core$MutableString$append$panda$core$String(resultType418, &$s437);
    panda$core$MutableString$append$panda$core$String(resultType418, self_t430);
    panda$core$Int64 $tmp439 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp438, ((panda$core$Int64) { 0 }), $tmp439, ((panda$core$Bit) { false }));
    int64_t $tmp441 = $tmp438.min.value;
    panda$core$Int64 i440 = { $tmp441 };
    int64_t $tmp443 = $tmp438.max.value;
    bool $tmp444 = $tmp438.inclusive.value;
    if ($tmp444) goto $l451; else goto $l452;
    $l451:;
    if ($tmp441 <= $tmp443) goto $l445; else goto $l447;
    $l452:;
    if ($tmp441 < $tmp443) goto $l445; else goto $l447;
    $l445:;
    {
        panda$core$Object* $tmp454 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i440);
        panda$core$String* $tmp455 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp454));
        pType453 = $tmp455;
        panda$core$MutableString$append$panda$core$String(resultType418, &$s456);
        panda$core$MutableString$append$panda$core$String(resultType418, pType453);
        panda$core$String* $tmp458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s457, pType453);
        panda$core$String* $tmp460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp458, &$s459);
        panda$core$String* $tmp461 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp460, ((panda$core$Object*) wrap_panda$core$Int64(i440)));
        panda$core$String* $tmp463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp461, &$s462);
        (($fn464) ((panda$io$OutputStream*) out399)->$class->vtable[16])(((panda$io$OutputStream*) out399), $tmp463);
    }
    $l448:;
    int64_t $tmp466 = $tmp443 - i440.value;
    if ($tmp444) goto $l467; else goto $l468;
    $l467:;
    if ($tmp466 >= 1) goto $l465; else goto $l447;
    $l468:;
    if ($tmp466 > 1) goto $l465; else goto $l447;
    $l465:;
    i440.value += 1;
    goto $l445;
    $l447:;
    (($fn472) ((panda$io$OutputStream*) out399)->$class->vtable[19])(((panda$io$OutputStream*) out399), &$s471);
    panda$core$Int64 $tmp473 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(out399->level, ((panda$core$Int64) { 1 }));
    out399->level = $tmp473;
    panda$core$MutableString$append$panda$core$String(resultType418, &$s474);
    panda$collections$Array* $tmp476 = (panda$collections$Array*) malloc(40);
    $tmp476->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp476->refCount.value = 1;
    panda$collections$Array$init($tmp476);
    casts475 = $tmp476;
    panda$core$Int64 $tmp479 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp478, ((panda$core$Int64) { 0 }), $tmp479, ((panda$core$Bit) { false }));
    int64_t $tmp481 = $tmp478.min.value;
    panda$core$Int64 i480 = { $tmp481 };
    int64_t $tmp483 = $tmp478.max.value;
    bool $tmp484 = $tmp478.inclusive.value;
    if ($tmp484) goto $l491; else goto $l492;
    $l491:;
    if ($tmp481 <= $tmp483) goto $l485; else goto $l487;
    $l492:;
    if ($tmp481 < $tmp483) goto $l485; else goto $l487;
    $l485:;
    {
        panda$core$String* $tmp495 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s494, ((panda$core$Object*) wrap_panda$core$Int64(i480)));
        panda$core$String* $tmp497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp495, &$s496);
        p493 = $tmp497;
        panda$core$Object* $tmp498 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i480);
        panda$core$Object* $tmp499 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i480);
        panda$core$Bit $tmp500 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp498)->type, ((org$pandalanguage$pandac$Type*) $tmp499));
        if ($tmp500.value) {
        {
            panda$core$Object* $tmp501 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i480);
            panda$core$Object* $tmp502 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i480);
            panda$core$String* $tmp503 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p493, ((org$pandalanguage$pandac$Type*) $tmp501), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp502)->type, out399);
            panda$collections$Array$add$panda$collections$Array$T(casts475, ((panda$core$Object*) $tmp503));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts475, ((panda$core$Object*) p493));
        }
        }
    }
    $l488:;
    int64_t $tmp505 = $tmp483 - i480.value;
    if ($tmp484) goto $l506; else goto $l507;
    $l506:;
    if ($tmp505 >= 1) goto $l504; else goto $l487;
    $l507:;
    if ($tmp505 > 1) goto $l504; else goto $l487;
    $l504:;
    i480.value += 1;
    goto $l485;
    $l487:;
    org$pandalanguage$pandac$Type* $tmp510 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp511 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp510);
    if ($tmp511.value) {
    {
        panda$core$String* $tmp513 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
        panda$core$String* $tmp514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s512, $tmp513);
        panda$core$String* $tmp516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp514, &$s515);
        (($fn517) ((panda$io$OutputStream*) out399)->$class->vtable[16])(((panda$io$OutputStream*) out399), $tmp516);
    }
    }
    panda$core$String* $tmp519 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s518, $tmp519);
    panda$core$String* $tmp522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp520, &$s521);
    (($fn523) ((panda$io$OutputStream*) out399)->$class->vtable[16])(((panda$io$OutputStream*) out399), $tmp522);
    panda$core$Int64 $tmp525 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp524, ((panda$core$Int64) { 0 }), $tmp525, ((panda$core$Bit) { false }));
    int64_t $tmp527 = $tmp524.min.value;
    panda$core$Int64 i526 = { $tmp527 };
    int64_t $tmp529 = $tmp524.max.value;
    bool $tmp530 = $tmp524.inclusive.value;
    if ($tmp530) goto $l537; else goto $l538;
    $l537:;
    if ($tmp527 <= $tmp529) goto $l531; else goto $l533;
    $l538:;
    if ($tmp527 < $tmp529) goto $l531; else goto $l533;
    $l531:;
    {
        panda$core$Object* $tmp540 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts475, i526);
        panda$core$String* $tmp541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s539, ((panda$core$String*) $tmp540));
        panda$core$String* $tmp543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp541, &$s542);
        (($fn544) ((panda$io$OutputStream*) out399)->$class->vtable[16])(((panda$io$OutputStream*) out399), $tmp543);
    }
    $l534:;
    int64_t $tmp546 = $tmp529 - i526.value;
    if ($tmp530) goto $l547; else goto $l548;
    $l547:;
    if ($tmp546 >= 1) goto $l545; else goto $l533;
    $l548:;
    if ($tmp546 > 1) goto $l545; else goto $l533;
    $l545:;
    i526.value += 1;
    goto $l531;
    $l533:;
    (($fn552) ((panda$io$OutputStream*) out399)->$class->vtable[19])(((panda$io$OutputStream*) out399), &$s551);
    org$pandalanguage$pandac$Type* $tmp553 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp554 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp553);
    if ($tmp554.value) {
    {
        panda$core$String* $tmp557 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, &$s556, p_raw->returnType, effectiveReturnType410, out399);
        panda$core$String* $tmp558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s555, $tmp557);
        panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp558, &$s559);
        (($fn561) ((panda$io$OutputStream*) out399)->$class->vtable[19])(((panda$io$OutputStream*) out399), $tmp560);
    }
    }
    panda$core$Int64 $tmp562 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(out399->level, ((panda$core$Int64) { 1 }));
    out399->level = $tmp562;
    (($fn564) ((panda$io$OutputStream*) out399)->$class->vtable[19])(((panda$io$OutputStream*) out399), &$s563);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp566 = (org$pandalanguage$pandac$CCodeGenerator$MethodShim*) malloc(32);
    $tmp566->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$MethodShim$class;
    $tmp566->refCount.value = 1;
    panda$core$String* $tmp568 = panda$core$MutableString$convert$R$panda$core$String(resultType418);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp566, resultName414, $tmp568);
    result565 = $tmp566;
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result565));
    (($fn569) p_rawOut->$class->vtable[15])(p_rawOut, ((panda$core$Object*) outBuffer396));
    return result565;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* oldMethod571;
    panda$core$String* result572;
    panda$core$String* selfType578;
    org$pandalanguage$pandac$Type* actualMethodType596;
    org$pandalanguage$pandac$Type* inheritedMethodType598;
    panda$core$Range$LTpanda$core$Int64$GT $tmp600;
    panda$collections$Array* parameters635;
    panda$core$Range$LTpanda$core$Int64$GT $tmp638;
    panda$collections$Array* children663;
    org$pandalanguage$pandac$Position $tmp668;
    panda$core$Range$LTpanda$core$Int64$GT $tmp680;
    panda$core$Bit $tmp570 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp570.value);
    oldMethod571 = self->currentMethod;
    self->currentMethod = p_m;
    panda$core$String* $tmp574 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s573, $tmp574);
    panda$core$String* $tmp577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp575, &$s576);
    result572 = $tmp577;
    panda$core$String* $tmp580 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s579, $tmp580);
    panda$core$String* $tmp583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp581, &$s582);
    selfType578 = $tmp583;
    panda$core$String* $tmp585 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s584, $tmp585);
    panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp586, &$s587);
    panda$core$String* $tmp589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp588, result572);
    panda$core$String* $tmp591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp589, &$s590);
    panda$core$String* $tmp592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp591, selfType578);
    panda$core$String* $tmp594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp592, &$s593);
    (($fn595) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp594);
    org$pandalanguage$pandac$Type* $tmp597 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    actualMethodType596 = $tmp597;
    org$pandalanguage$pandac$Type* $tmp599 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedMethodType598 = $tmp599;
    panda$core$Int64 $tmp601 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp600, ((panda$core$Int64) { 0 }), $tmp601, ((panda$core$Bit) { false }));
    int64_t $tmp603 = $tmp600.min.value;
    panda$core$Int64 i602 = { $tmp603 };
    int64_t $tmp605 = $tmp600.max.value;
    bool $tmp606 = $tmp600.inclusive.value;
    if ($tmp606) goto $l613; else goto $l614;
    $l613:;
    if ($tmp603 <= $tmp605) goto $l607; else goto $l609;
    $l614:;
    if ($tmp603 < $tmp605) goto $l607; else goto $l609;
    $l607:;
    {
        panda$core$Object* $tmp616 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType598->subtypes, i602);
        panda$core$String* $tmp617 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp616));
        panda$core$String* $tmp618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s615, $tmp617);
        panda$core$String* $tmp620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp618, &$s619);
        panda$core$Object* $tmp621 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i602);
        panda$core$String* $tmp622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp620, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp621)->name);
        panda$core$String* $tmp624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp622, &$s623);
        (($fn625) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp624);
    }
    $l610:;
    int64_t $tmp627 = $tmp605 - i602.value;
    if ($tmp606) goto $l628; else goto $l629;
    $l628:;
    if ($tmp627 >= 1) goto $l626; else goto $l609;
    $l629:;
    if ($tmp627 > 1) goto $l626; else goto $l609;
    $l626:;
    i602.value += 1;
    goto $l607;
    $l609:;
    (($fn633) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s632);
    panda$core$Int64 $tmp634 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp634;
    panda$collections$Array* $tmp636 = (panda$collections$Array*) malloc(40);
    $tmp636->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp636->refCount.value = 1;
    panda$collections$Array$init($tmp636);
    parameters635 = $tmp636;
    panda$core$Int64 $tmp639 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp638, ((panda$core$Int64) { 0 }), $tmp639, ((panda$core$Bit) { false }));
    int64_t $tmp641 = $tmp638.min.value;
    panda$core$Int64 i640 = { $tmp641 };
    int64_t $tmp643 = $tmp638.max.value;
    bool $tmp644 = $tmp638.inclusive.value;
    if ($tmp644) goto $l651; else goto $l652;
    $l651:;
    if ($tmp641 <= $tmp643) goto $l645; else goto $l647;
    $l652:;
    if ($tmp641 < $tmp643) goto $l645; else goto $l647;
    $l645:;
    {
        panda$core$Object* $tmp653 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i640);
        panda$core$Object* $tmp654 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType598->subtypes, i640);
        panda$core$Object* $tmp655 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType596->subtypes, i640);
        panda$core$String* $tmp656 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp653)->name, ((org$pandalanguage$pandac$Type*) $tmp654), ((org$pandalanguage$pandac$Type*) $tmp655), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters635, ((panda$core$Object*) $tmp656));
    }
    $l648:;
    int64_t $tmp658 = $tmp643 - i640.value;
    if ($tmp644) goto $l659; else goto $l660;
    $l659:;
    if ($tmp658 >= 1) goto $l657; else goto $l647;
    $l660:;
    if ($tmp658 > 1) goto $l657; else goto $l647;
    $l657:;
    i640.value += 1;
    goto $l645;
    $l647:;
    panda$collections$Array* $tmp664 = (panda$collections$Array*) malloc(40);
    $tmp664->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp664->refCount.value = 1;
    panda$collections$Array$init($tmp664);
    children663 = $tmp664;
    org$pandalanguage$pandac$IRNode* $tmp666 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp666->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp666->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp668);
    org$pandalanguage$pandac$Type* $tmp669 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp666, ((panda$core$Int64) { 1025 }), $tmp668, $tmp669);
    panda$collections$Array$add$panda$collections$Array$T(children663, ((panda$core$Object*) $tmp666));
    org$pandalanguage$pandac$Type* $tmp670 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp671 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp670);
    if ($tmp671.value) {
    {
        (($fn673) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s672);
    }
    }
    panda$core$String* $tmp675 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s674, $tmp675);
    panda$core$String* $tmp678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp676, &$s677);
    (($fn679) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp678);
    panda$core$Int64 $tmp681 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp680, ((panda$core$Int64) { 0 }), $tmp681, ((panda$core$Bit) { false }));
    int64_t $tmp683 = $tmp680.min.value;
    panda$core$Int64 i682 = { $tmp683 };
    int64_t $tmp685 = $tmp680.max.value;
    bool $tmp686 = $tmp680.inclusive.value;
    if ($tmp686) goto $l693; else goto $l694;
    $l693:;
    if ($tmp683 <= $tmp685) goto $l687; else goto $l689;
    $l694:;
    if ($tmp683 < $tmp685) goto $l687; else goto $l689;
    $l687:;
    {
        panda$core$Object* $tmp696 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters635, i682);
        panda$core$String* $tmp697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s695, ((panda$core$String*) $tmp696));
        panda$core$String* $tmp699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp697, &$s698);
        (($fn700) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp699);
    }
    $l690:;
    int64_t $tmp702 = $tmp685 - i682.value;
    if ($tmp686) goto $l703; else goto $l704;
    $l703:;
    if ($tmp702 >= 1) goto $l701; else goto $l689;
    $l704:;
    if ($tmp702 > 1) goto $l701; else goto $l689;
    $l701:;
    i682.value += 1;
    goto $l687;
    $l689:;
    (($fn708) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s707);
    panda$core$Int64 $tmp709 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp709;
    (($fn711) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s710);
    self->currentMethod = oldMethod571;
    return result572;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces712;
    panda$core$String* previous715;
    panda$collections$Iterator* intfType$Iter717;
    org$pandalanguage$pandac$Type* intfType729;
    org$pandalanguage$pandac$ClassDecl* intf734;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC736;
    panda$collections$ListView* methods738;
    panda$core$String* name740;
    panda$core$MutableString* result750;
    panda$core$String* separator784;
    panda$collections$Iterator* m$Iter786;
    org$pandalanguage$pandac$MethodDecl* m798;
    org$pandalanguage$pandac$Type* $tmp713 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp714 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp713);
    interfaces712 = $tmp714;
    previous715 = &$s716;
    {
        ITable* $tmp718 = ((panda$collections$Iterable*) interfaces712)->$class->itable;
        while ($tmp718->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp718 = $tmp718->next;
        }
        $fn720 $tmp719 = $tmp718->methods[0];
        panda$collections$Iterator* $tmp721 = $tmp719(((panda$collections$Iterable*) interfaces712));
        intfType$Iter717 = $tmp721;
        $l722:;
        ITable* $tmp724 = intfType$Iter717->$class->itable;
        while ($tmp724->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp724 = $tmp724->next;
        }
        $fn726 $tmp725 = $tmp724->methods[0];
        panda$core$Bit $tmp727 = $tmp725(intfType$Iter717);
        panda$core$Bit $tmp728 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp727);
        if (!$tmp728.value) goto $l723;
        {
            ITable* $tmp730 = intfType$Iter717->$class->itable;
            while ($tmp730->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp730 = $tmp730->next;
            }
            $fn732 $tmp731 = $tmp730->methods[1];
            panda$core$Object* $tmp733 = $tmp731(intfType$Iter717);
            intfType729 = ((org$pandalanguage$pandac$Type*) $tmp733);
            org$pandalanguage$pandac$ClassDecl* $tmp735 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType729);
            intf734 = $tmp735;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp737 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf734);
            intfCC736 = $tmp737;
            panda$collections$ListView* $tmp739 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType729);
            methods738 = $tmp739;
            panda$core$String* $tmp742 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s741, $tmp742);
            panda$core$String* $tmp745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp743, &$s744);
            panda$core$String* $tmp746 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf734)->name);
            panda$core$String* $tmp747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp745, $tmp746);
            panda$core$String* $tmp749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp747, &$s748);
            name740 = $tmp749;
            panda$core$MutableString* $tmp751 = (panda$core$MutableString*) malloc(40);
            $tmp751->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp751->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp754 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp755 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp754);
            panda$core$String* $tmp756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s753, $tmp755);
            panda$core$String* $tmp758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp756, &$s757);
            ITable* $tmp760 = ((panda$collections$CollectionView*) methods738)->$class->itable;
            while ($tmp760->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp760 = $tmp760->next;
            }
            $fn762 $tmp761 = $tmp760->methods[0];
            panda$core$Int64 $tmp763 = $tmp761(((panda$collections$CollectionView*) methods738));
            panda$core$String* $tmp764 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s759, ((panda$core$Object*) wrap_panda$core$Int64($tmp763)));
            panda$core$String* $tmp766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp764, &$s765);
            panda$core$String* $tmp767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp766, name740);
            panda$core$String* $tmp769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp767, &$s768);
            panda$core$String* $tmp770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp758, $tmp769);
            org$pandalanguage$pandac$Type* $tmp772 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp773 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp772);
            panda$core$String* $tmp774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s771, $tmp773);
            panda$core$String* $tmp776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp774, &$s775);
            panda$core$String* $tmp777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp776, intfCC736->name);
            panda$core$String* $tmp779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp777, &$s778);
            panda$core$String* $tmp780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp779, previous715);
            panda$core$String* $tmp782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp780, &$s781);
            panda$core$String* $tmp783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp770, $tmp782);
            panda$core$MutableString$init$panda$core$String($tmp751, $tmp783);
            result750 = $tmp751;
            separator784 = &$s785;
            {
                ITable* $tmp787 = ((panda$collections$Iterable*) methods738)->$class->itable;
                while ($tmp787->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp787 = $tmp787->next;
                }
                $fn789 $tmp788 = $tmp787->methods[0];
                panda$collections$Iterator* $tmp790 = $tmp788(((panda$collections$Iterable*) methods738));
                m$Iter786 = $tmp790;
                $l791:;
                ITable* $tmp793 = m$Iter786->$class->itable;
                while ($tmp793->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp793 = $tmp793->next;
                }
                $fn795 $tmp794 = $tmp793->methods[0];
                panda$core$Bit $tmp796 = $tmp794(m$Iter786);
                panda$core$Bit $tmp797 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp796);
                if (!$tmp797.value) goto $l792;
                {
                    ITable* $tmp799 = m$Iter786->$class->itable;
                    while ($tmp799->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp799 = $tmp799->next;
                    }
                    $fn801 $tmp800 = $tmp799->methods[1];
                    panda$core$Object* $tmp802 = $tmp800(m$Iter786);
                    m798 = ((org$pandalanguage$pandac$MethodDecl*) $tmp802);
                    panda$core$MutableString$append$panda$core$String(result750, separator784);
                    separator784 = &$s803;
                    panda$core$Bit $tmp804 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m798->annotations);
                    if ($tmp804.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result750, &$s805);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp806 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m798, self->wrapperShims);
                        panda$core$MutableString$append$panda$core$String(result750, $tmp806);
                    }
                    }
                }
                goto $l791;
                $l792:;
            }
            panda$core$MutableString$append$panda$core$String(result750, &$s807);
            (($fn808) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result750));
            panda$core$String* $tmp810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s809, name740);
            panda$core$String* $tmp812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp810, &$s811);
            previous715 = $tmp812;
        }
        goto $l722;
        $l723:;
    }
    return previous715;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $tmp813 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self->hCodeGen, p_m);
    return $tmp813;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result815;
    org$pandalanguage$pandac$Type* declared816;
    org$pandalanguage$pandac$Type* inherited819;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* shim822;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    panda$core$Bit $tmp814 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
    if ($tmp814.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp817 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp818 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp817);
    declared816 = $tmp818;
    org$pandalanguage$pandac$Type* $tmp820 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited819 = $tmp820;
    panda$core$Bit $tmp821 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared816, inherited819);
    if ($tmp821.value) {
    {
        org$pandalanguage$pandac$Type* $tmp823 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp824 = org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(self, p_m, $tmp823, ((panda$io$OutputStream*) self->shims));
        shim822 = $tmp824;
        result815 = shim822->name;
    }
    }
    else {
    {
        panda$core$String* $tmp825 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        result815 = $tmp825;
    }
    }
    return result815;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result826;
    panda$core$String* type828;
    panda$collections$ListView* vtable840;
    panda$core$String* superPtr851;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC852;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant860;
    panda$core$MutableString* code864;
    panda$core$String* separator886;
    panda$collections$Iterator* m$Iter888;
    org$pandalanguage$pandac$MethodDecl* m900;
    panda$core$Object* $tmp827 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result826 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp827);
    if (((panda$core$Bit) { result826 == NULL }).value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        panda$core$Bit $tmp829 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp829.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp830 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp830->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp830->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp833 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp834 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp833)->name);
            panda$core$String* $tmp835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s832, $tmp834);
            panda$core$String* $tmp837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp835, &$s836);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp830, $tmp837, &$s838);
            result826 = $tmp830;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result826));
            panda$core$Object* $tmp839 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
            return ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp839);
        }
        }
        panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) p_cl));
        panda$collections$ListView* $tmp841 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable840 = $tmp841;
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp842 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
        $tmp842->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
        $tmp842->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp845 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp846 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp845)->name);
        panda$core$String* $tmp847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s844, $tmp846);
        panda$core$String* $tmp849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp847, &$s848);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp842, $tmp849, &$s850);
        result826 = $tmp842;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result826));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp853 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp854 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp853);
            superCC852 = $tmp854;
            panda$core$String* $tmp856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s855, superCC852->name);
            panda$core$String* $tmp858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp856, &$s857);
            superPtr851 = $tmp858;
        }
        }
        else {
        {
            superPtr851 = &$s859;
        }
        }
        org$pandalanguage$pandac$Type* $tmp861 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp862 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp861);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp863 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp862);
        clConstant860 = $tmp863;
        panda$core$MutableString* $tmp865 = (panda$core$MutableString*) malloc(40);
        $tmp865->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp865->refCount.value = 1;
        panda$core$String* $tmp868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s867, result826->name);
        panda$core$String* $tmp870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp868, &$s869);
        panda$core$String* $tmp871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp870, result826->name);
        panda$core$String* $tmp873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp871, &$s872);
        panda$core$String* $tmp875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s874, clConstant860->name);
        panda$core$String* $tmp877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp875, &$s876);
        panda$core$String* $tmp878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp877, superPtr851);
        panda$core$String* $tmp880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp878, &$s879);
        panda$core$String* $tmp881 = org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp880, $tmp881);
        panda$core$String* $tmp884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp882, &$s883);
        panda$core$String* $tmp885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp873, $tmp884);
        panda$core$MutableString$init$panda$core$String($tmp865, $tmp885);
        code864 = $tmp865;
        separator886 = &$s887;
        {
            ITable* $tmp889 = ((panda$collections$Iterable*) vtable840)->$class->itable;
            while ($tmp889->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp889 = $tmp889->next;
            }
            $fn891 $tmp890 = $tmp889->methods[0];
            panda$collections$Iterator* $tmp892 = $tmp890(((panda$collections$Iterable*) vtable840));
            m$Iter888 = $tmp892;
            $l893:;
            ITable* $tmp895 = m$Iter888->$class->itable;
            while ($tmp895->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp895 = $tmp895->next;
            }
            $fn897 $tmp896 = $tmp895->methods[0];
            panda$core$Bit $tmp898 = $tmp896(m$Iter888);
            panda$core$Bit $tmp899 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp898);
            if (!$tmp899.value) goto $l894;
            {
                ITable* $tmp901 = m$Iter888->$class->itable;
                while ($tmp901->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp901 = $tmp901->next;
                }
                $fn903 $tmp902 = $tmp901->methods[1];
                panda$core$Object* $tmp904 = $tmp902(m$Iter888);
                m900 = ((org$pandalanguage$pandac$MethodDecl*) $tmp904);
                panda$core$MutableString$append$panda$core$String(code864, separator886);
                panda$core$Bit $tmp905 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m900->annotations);
                if ($tmp905.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code864, &$s906);
                }
                }
                else {
                {
                    panda$core$String* $tmp907 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m900);
                    panda$core$MutableString$append$panda$core$String(code864, $tmp907);
                }
                }
                separator886 = &$s908;
            }
            goto $l893;
            $l894:;
        }
        panda$core$MutableString$append$panda$core$String(code864, &$s909);
        (($fn910) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code864));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    }
    }
    return result826;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name911;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result917;
    panda$core$String* type921;
    org$pandalanguage$pandac$ClassDecl* value933;
    panda$collections$ListView* valueVTable936;
    panda$collections$ListView* vtable946;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC948;
    panda$core$String* superCast951;
    panda$core$String* itable956;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant958;
    panda$core$MutableString* code962;
    panda$core$String* separator983;
    panda$core$Range$LTpanda$core$Int64$GT $tmp985;
    org$pandalanguage$pandac$MethodDecl* m1003;
    panda$core$String* methodName1008;
    panda$core$String* $tmp913 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s912, $tmp913);
    panda$core$String* $tmp916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp914, &$s915);
    name911 = $tmp916;
    panda$core$Object* $tmp918 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name911));
    result917 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp918);
    if (((panda$core$Bit) { result917 == NULL }).value) {
    {
        panda$core$Bit $tmp919 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp919.value) {
        {
            org$pandalanguage$pandac$Type* $tmp920 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp920);
            type921 = &$s922;
            panda$core$String* $tmp924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s923, name911);
            panda$core$String* $tmp926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp924, &$s925);
            panda$core$String* $tmp927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp926, type921);
            panda$core$String* $tmp929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp927, &$s928);
            (($fn930) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp929);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp931 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp931->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp931->refCount.value = 1;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp931, name911, type921);
            result917 = $tmp931;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp934 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp935 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp934);
            value933 = $tmp935;
            panda$collections$ListView* $tmp937 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value933);
            valueVTable936 = $tmp937;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp938 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp938->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp938->refCount.value = 1;
            panda$core$String* $tmp941 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s940, $tmp941);
            panda$core$String* $tmp944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp942, &$s943);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp938, $tmp944, &$s945);
            result917 = $tmp938;
            panda$collections$ListView* $tmp947 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable946 = $tmp947;
            org$pandalanguage$pandac$ClassDecl* $tmp949 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp950 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp949);
            superCC948 = $tmp950;
            panda$core$String* $tmp953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s952, superCC948->name);
            panda$core$String* $tmp955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp953, &$s954);
            superCast951 = $tmp955;
            panda$core$String* $tmp957 = org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable956 = $tmp957;
            org$pandalanguage$pandac$Type* $tmp959 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp960 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp959);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp961 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp960);
            clConstant958 = $tmp961;
            panda$core$MutableString* $tmp963 = (panda$core$MutableString*) malloc(40);
            $tmp963->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp963->refCount.value = 1;
            panda$core$String* $tmp966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s965, result917->name);
            panda$core$String* $tmp968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp966, &$s967);
            panda$core$String* $tmp969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp968, result917->name);
            panda$core$String* $tmp971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp969, &$s970);
            panda$core$String* $tmp973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s972, clConstant958->name);
            panda$core$String* $tmp975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp973, &$s974);
            panda$core$String* $tmp976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp975, superCast951);
            panda$core$String* $tmp978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp976, &$s977);
            panda$core$String* $tmp979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp978, itable956);
            panda$core$String* $tmp981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp979, &$s980);
            panda$core$String* $tmp982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp971, $tmp981);
            panda$core$MutableString$init$panda$core$String($tmp963, $tmp982);
            code962 = $tmp963;
            separator983 = &$s984;
            ITable* $tmp986 = ((panda$collections$CollectionView*) valueVTable936)->$class->itable;
            while ($tmp986->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp986 = $tmp986->next;
            }
            $fn988 $tmp987 = $tmp986->methods[0];
            panda$core$Int64 $tmp989 = $tmp987(((panda$collections$CollectionView*) valueVTable936));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp985, ((panda$core$Int64) { 0 }), $tmp989, ((panda$core$Bit) { false }));
            int64_t $tmp991 = $tmp985.min.value;
            panda$core$Int64 i990 = { $tmp991 };
            int64_t $tmp993 = $tmp985.max.value;
            bool $tmp994 = $tmp985.inclusive.value;
            if ($tmp994) goto $l1001; else goto $l1002;
            $l1001:;
            if ($tmp991 <= $tmp993) goto $l995; else goto $l997;
            $l1002:;
            if ($tmp991 < $tmp993) goto $l995; else goto $l997;
            $l995:;
            {
                ITable* $tmp1004 = vtable946->$class->itable;
                while ($tmp1004->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1004 = $tmp1004->next;
                }
                $fn1006 $tmp1005 = $tmp1004->methods[0];
                panda$core$Object* $tmp1007 = $tmp1005(vtable946, i990);
                m1003 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1007);
                if (((panda$core$Bit) { ((panda$core$Object*) m1003->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp1009 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1003, self->wrapperShims);
                    methodName1008 = $tmp1009;
                }
                }
                else {
                {
                    panda$core$String* $tmp1010 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1003);
                    methodName1008 = $tmp1010;
                    panda$core$Bit $tmp1011 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1003->owner);
                    if ($tmp1011.value) {
                    {
                        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1003);
                    }
                    }
                }
                }
                panda$core$String* $tmp1013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1012, separator983);
                panda$core$String* $tmp1015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1013, &$s1014);
                panda$core$String* $tmp1016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1015, methodName1008);
                panda$core$String* $tmp1018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1016, &$s1017);
                panda$core$MutableString$append$panda$core$String(code962, $tmp1018);
                separator983 = &$s1019;
            }
            $l998:;
            int64_t $tmp1021 = $tmp993 - i990.value;
            if ($tmp994) goto $l1022; else goto $l1023;
            $l1022:;
            if ($tmp1021 >= 1) goto $l1020; else goto $l997;
            $l1023:;
            if ($tmp1021 > 1) goto $l1020; else goto $l997;
            $l1020:;
            i990.value += 1;
            goto $l995;
            $l997:;
            panda$core$MutableString$append$panda$core$String(code962, &$s1026);
            (($fn1027) ((panda$io$OutputStream*) self->types)->$class->vtable[15])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code962));
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name911), ((panda$core$Object*) result917));
    }
    }
    return result917;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$String* result1033;
    panda$core$Bit $tmp1028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1028.value) {
    {
        panda$core$String* $tmp1030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1029, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1030, &$s1031);
        return $tmp1032;
    }
    }
    panda$core$Object* $tmp1034 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1033 = ((panda$core$String*) $tmp1034);
    if (((panda$core$Bit) { result1033 == NULL }).value) {
    {
        panda$core$Int64 $tmp1035 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1035;
        panda$core$String* $tmp1037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1036, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1037, &$s1038);
        panda$core$String* $tmp1040 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1039, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        panda$core$String* $tmp1042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1040, &$s1041);
        result1033 = $tmp1042;
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1033));
    }
    }
    return result1033;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1043 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1043.value);
    panda$core$String* $tmp1045 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1044, $tmp1045);
    panda$core$String* $tmp1048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1046, &$s1047);
    panda$core$String* $tmp1049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1048, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1049, &$s1050);
    return $tmp1051;
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
    panda$core$String* result1052;
    panda$core$String* leftRef1054;
    panda$core$String* falseLabel1068;
    panda$core$String* rightRef1078;
    panda$core$String* $tmp1053 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1052 = $tmp1053;
    panda$core$String* $tmp1055 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1054 = $tmp1055;
    org$pandalanguage$pandac$Type* $tmp1056 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1057 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1056);
    if ($tmp1057.value) {
    {
        panda$core$String* $tmp1059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1054, &$s1058);
        leftRef1054 = $tmp1059;
    }
    }
    panda$core$String* $tmp1061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1060, result1052);
    panda$core$String* $tmp1063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1061, &$s1062);
    panda$core$String* $tmp1064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1063, leftRef1054);
    panda$core$String* $tmp1066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1064, &$s1065);
    (($fn1067) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1066);
    panda$core$String* $tmp1069 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel1068 = $tmp1069;
    panda$core$String* $tmp1071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1070, result1052);
    panda$core$String* $tmp1073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1071, &$s1072);
    panda$core$String* $tmp1074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1073, falseLabel1068);
    panda$core$String* $tmp1076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1074, &$s1075);
    (($fn1077) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1076);
    panda$core$String* $tmp1079 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1078 = $tmp1079;
    org$pandalanguage$pandac$Type* $tmp1080 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1081 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1080);
    if ($tmp1081.value) {
    {
        panda$core$String* $tmp1083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1078, &$s1082);
        rightRef1078 = $tmp1083;
    }
    }
    panda$core$String* $tmp1085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1084, result1052);
    panda$core$String* $tmp1087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1085, &$s1086);
    panda$core$String* $tmp1088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1087, rightRef1078);
    panda$core$String* $tmp1090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1088, &$s1089);
    (($fn1091) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1090);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel1068, p_out);
    return result1052;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1092;
    panda$core$String* leftRef1094;
    panda$core$String* trueLabel1108;
    panda$core$String* rightRef1118;
    panda$core$String* $tmp1093 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1092 = $tmp1093;
    panda$core$String* $tmp1095 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1094 = $tmp1095;
    org$pandalanguage$pandac$Type* $tmp1096 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1097 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1096);
    if ($tmp1097.value) {
    {
        panda$core$String* $tmp1099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1094, &$s1098);
        leftRef1094 = $tmp1099;
    }
    }
    panda$core$String* $tmp1101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1100, result1092);
    panda$core$String* $tmp1103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1101, &$s1102);
    panda$core$String* $tmp1104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1103, leftRef1094);
    panda$core$String* $tmp1106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1104, &$s1105);
    (($fn1107) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1106);
    panda$core$String* $tmp1109 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel1108 = $tmp1109;
    panda$core$String* $tmp1111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1110, result1092);
    panda$core$String* $tmp1113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1111, &$s1112);
    panda$core$String* $tmp1114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1113, trueLabel1108);
    panda$core$String* $tmp1116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1114, &$s1115);
    (($fn1117) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1116);
    panda$core$String* $tmp1119 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1118 = $tmp1119;
    org$pandalanguage$pandac$Type* $tmp1120 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1121 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1120);
    if ($tmp1121.value) {
    {
        panda$core$String* $tmp1123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1118, &$s1122);
        rightRef1118 = $tmp1123;
    }
    }
    panda$core$String* $tmp1125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1124, result1092);
    panda$core$String* $tmp1127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1125, &$s1126);
    panda$core$String* $tmp1128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1127, rightRef1118);
    panda$core$String* $tmp1130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1128, &$s1129);
    (($fn1131) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1130);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel1108, p_out);
    return result1092;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Int64 p_cl, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* cOp1132;
    panda$core$Bit logical1133;
    panda$core$String* result1151;
    logical1133 = ((panda$core$Bit) { false });
    switch (p_op.value) {
        case 51:
        {
            cOp1132 = &$s1134;
        }
        break;
        case 52:
        {
            cOp1132 = &$s1135;
        }
        break;
        case 53:
        {
            cOp1132 = &$s1136;
        }
        break;
        case 55:
        {
            cOp1132 = &$s1137;
        }
        break;
        case 54:
        {
            cOp1132 = &$s1138;
        }
        break;
        case 56:
        {
            cOp1132 = &$s1139;
        }
        break;
        case 72:
        {
            cOp1132 = &$s1140;
        }
        break;
        case 1:
        {
            cOp1132 = &$s1141;
        }
        break;
        case 67:
        {
            cOp1132 = &$s1142;
        }
        break;
        case 69:
        {
            cOp1132 = &$s1143;
        }
        break;
        case 70:
        case 71:
        {
            cOp1132 = &$s1144;
        }
        break;
        case 58:
        {
            cOp1132 = &$s1145;
            logical1133 = ((panda$core$Bit) { true });
        }
        break;
        case 59:
        {
            cOp1132 = &$s1146;
            logical1133 = ((panda$core$Bit) { true });
        }
        break;
        case 63:
        {
            cOp1132 = &$s1147;
            logical1133 = ((panda$core$Bit) { true });
        }
        break;
        case 62:
        {
            cOp1132 = &$s1148;
            logical1133 = ((panda$core$Bit) { true });
        }
        break;
        case 65:
        {
            cOp1132 = &$s1149;
            logical1133 = ((panda$core$Bit) { true });
        }
        break;
        case 64:
        {
            logical1133 = ((panda$core$Bit) { true });
            cOp1132 = &$s1150;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$String* $tmp1152 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1151 = $tmp1152;
    if (logical1133.value) {
    {
        (($fn1154) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s1153);
    }
    }
    else {
    {
        panda$core$String* $tmp1156 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp1157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1155, $tmp1156);
        panda$core$String* $tmp1159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1157, &$s1158);
        (($fn1160) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1159);
    }
    }
    panda$core$String* $tmp1162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1161, result1151);
    panda$core$String* $tmp1164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1162, &$s1163);
    panda$core$String* $tmp1165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1164, p_leftRef);
    panda$core$String* $tmp1167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1165, &$s1166);
    panda$core$String* $tmp1168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1167, cOp1132);
    panda$core$String* $tmp1170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1168, &$s1169);
    panda$core$String* $tmp1171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1170, p_rightRef);
    panda$core$String* $tmp1173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1171, &$s1172);
    (($fn1174) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1173);
    return result1151;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1175;
    panda$core$String* rightRef1177;
    panda$core$String* $tmp1176 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1175 = $tmp1176;
    panda$core$String* $tmp1178 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1177 = $tmp1178;
    panda$core$String* $tmp1180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1179, leftRef1175);
    panda$core$String* $tmp1182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1180, &$s1181);
    panda$core$String* $tmp1183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1182, rightRef1177);
    panda$core$String* $tmp1185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1183, &$s1184);
    return $tmp1185;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1186;
    panda$core$String* rightRef1188;
    panda$core$String* $tmp1187 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1186 = $tmp1187;
    panda$core$String* $tmp1189 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1188 = $tmp1189;
    panda$core$String* $tmp1191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1190, leftRef1186);
    panda$core$String* $tmp1193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1191, &$s1192);
    panda$core$String* $tmp1194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1193, rightRef1188);
    panda$core$String* $tmp1196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1194, &$s1195);
    return $tmp1196;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1202;
    panda$core$String* rightRef1204;
    panda$core$Bit $tmp1197 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, p_right->type);
    PANDA_ASSERT($tmp1197.value);
    switch (p_op.value) {
        case 66:
        {
            panda$core$String* $tmp1198 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1198;
        }
        break;
        case 68:
        {
            panda$core$String* $tmp1199 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1199;
        }
        break;
        case 60:
        {
            panda$core$String* $tmp1200 = org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1200;
        }
        break;
        case 61:
        {
            panda$core$String* $tmp1201 = org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1201;
        }
        break;
        default:
        {
            panda$core$String* $tmp1203 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1202 = $tmp1203;
            panda$core$String* $tmp1205 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1204 = $tmp1205;
            panda$core$Int64 $tmp1206 = org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_left->type);
            panda$core$String* $tmp1207 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1206, p_left->type, leftRef1202, p_op, rightRef1204, p_out);
            return $tmp1207;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp1208.value);
    panda$core$Int64 $tmp1209 = panda$collections$Array$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp1210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1209, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp1210.value);
    panda$core$Object* $tmp1211 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp1212 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1213 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1211), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp1212), p_out);
    return $tmp1213;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1214;
    panda$core$Int64 index1216;
    panda$collections$ListView* vtable1217;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1219;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1215 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1214 = $tmp1215;
    index1216 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1218 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1217 = $tmp1218;
    ITable* $tmp1220 = ((panda$collections$CollectionView*) vtable1217)->$class->itable;
    while ($tmp1220->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1220 = $tmp1220->next;
    }
    $fn1222 $tmp1221 = $tmp1220->methods[0];
    panda$core$Int64 $tmp1223 = $tmp1221(((panda$collections$CollectionView*) vtable1217));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1219, ((panda$core$Int64) { 0 }), $tmp1223, ((panda$core$Bit) { false }));
    int64_t $tmp1225 = $tmp1219.min.value;
    panda$core$Int64 i1224 = { $tmp1225 };
    int64_t $tmp1227 = $tmp1219.max.value;
    bool $tmp1228 = $tmp1219.inclusive.value;
    if ($tmp1228) goto $l1235; else goto $l1236;
    $l1235:;
    if ($tmp1225 <= $tmp1227) goto $l1229; else goto $l1231;
    $l1236:;
    if ($tmp1225 < $tmp1227) goto $l1229; else goto $l1231;
    $l1229:;
    {
        ITable* $tmp1237 = vtable1217->$class->itable;
        while ($tmp1237->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1237 = $tmp1237->next;
        }
        $fn1239 $tmp1238 = $tmp1237->methods[0];
        panda$core$Object* $tmp1240 = $tmp1238(vtable1217, i1224);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1240)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1216 = i1224;
            goto $l1231;
        }
        }
    }
    $l1232:;
    int64_t $tmp1242 = $tmp1227 - i1224.value;
    if ($tmp1228) goto $l1243; else goto $l1244;
    $l1243:;
    if ($tmp1242 >= 1) goto $l1241; else goto $l1231;
    $l1244:;
    if ($tmp1242 > 1) goto $l1241; else goto $l1231;
    $l1241:;
    i1224.value += 1;
    goto $l1229;
    $l1231:;
    panda$core$Bit $tmp1247 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1216, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1247.value);
    org$pandalanguage$pandac$Type* $tmp1249 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1250 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1249);
    panda$core$String* $tmp1251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1248, $tmp1250);
    panda$core$String* $tmp1253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1251, &$s1252);
    panda$core$String* $tmp1254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1253, p_target);
    panda$core$String* $tmp1256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1254, &$s1255);
    panda$core$String* $tmp1257 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1256, ((panda$core$Object*) wrap_panda$core$Int64(index1216)));
    panda$core$String* $tmp1259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1257, &$s1258);
    return $tmp1259;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1260;
    panda$core$String* itable1262;
    panda$core$Int64 index1292;
    panda$collections$ListView* vtable1293;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1295;
    panda$core$String* result1332;
    panda$core$String* methodType1334;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1261 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1260 = $tmp1261;
    panda$core$String* $tmp1263 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    itable1262 = $tmp1263;
    panda$core$String* $tmp1265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1264, itable1262);
    panda$core$String* $tmp1267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1265, &$s1266);
    panda$core$String* $tmp1268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1267, p_target);
    panda$core$String* $tmp1270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1268, &$s1269);
    (($fn1271) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1270);
    panda$core$String* $tmp1273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1272, itable1262);
    panda$core$String* $tmp1275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1273, &$s1274);
    panda$core$String* $tmp1276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1275, cc1260->name);
    panda$core$String* $tmp1278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1276, &$s1277);
    (($fn1279) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1278);
    panda$core$Int64 $tmp1280 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1280;
    panda$core$String* $tmp1282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1281, itable1262);
    panda$core$String* $tmp1284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1282, &$s1283);
    panda$core$String* $tmp1285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1284, itable1262);
    panda$core$String* $tmp1287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1285, &$s1286);
    (($fn1288) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1287);
    panda$core$Int64 $tmp1289 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1289;
    (($fn1291) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1290);
    index1292 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1294 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1293 = $tmp1294;
    ITable* $tmp1296 = ((panda$collections$CollectionView*) vtable1293)->$class->itable;
    while ($tmp1296->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1296 = $tmp1296->next;
    }
    $fn1298 $tmp1297 = $tmp1296->methods[0];
    panda$core$Int64 $tmp1299 = $tmp1297(((panda$collections$CollectionView*) vtable1293));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1295, ((panda$core$Int64) { 0 }), $tmp1299, ((panda$core$Bit) { false }));
    int64_t $tmp1301 = $tmp1295.min.value;
    panda$core$Int64 i1300 = { $tmp1301 };
    int64_t $tmp1303 = $tmp1295.max.value;
    bool $tmp1304 = $tmp1295.inclusive.value;
    if ($tmp1304) goto $l1311; else goto $l1312;
    $l1311:;
    if ($tmp1301 <= $tmp1303) goto $l1305; else goto $l1307;
    $l1312:;
    if ($tmp1301 < $tmp1303) goto $l1305; else goto $l1307;
    $l1305:;
    {
        ITable* $tmp1313 = vtable1293->$class->itable;
        while ($tmp1313->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1313 = $tmp1313->next;
        }
        $fn1315 $tmp1314 = $tmp1313->methods[0];
        panda$core$Object* $tmp1316 = $tmp1314(vtable1293, i1300);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1316)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1292 = i1300;
            goto $l1307;
        }
        }
    }
    $l1308:;
    int64_t $tmp1318 = $tmp1303 - i1300.value;
    if ($tmp1304) goto $l1319; else goto $l1320;
    $l1319:;
    if ($tmp1318 >= 1) goto $l1317; else goto $l1307;
    $l1320:;
    if ($tmp1318 > 1) goto $l1317; else goto $l1307;
    $l1317:;
    i1300.value += 1;
    goto $l1305;
    $l1307:;
    org$pandalanguage$pandac$Type* $tmp1323 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp1324 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1323);
    panda$collections$ListView* $tmp1325 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp1324);
    ITable* $tmp1326 = ((panda$collections$CollectionView*) $tmp1325)->$class->itable;
    while ($tmp1326->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1326 = $tmp1326->next;
    }
    $fn1328 $tmp1327 = $tmp1326->methods[0];
    panda$core$Int64 $tmp1329 = $tmp1327(((panda$collections$CollectionView*) $tmp1325));
    panda$core$Int64 $tmp1330 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index1292, $tmp1329);
    index1292 = $tmp1330;
    panda$core$Bit $tmp1331 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1292, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1331.value);
    panda$core$String* $tmp1333 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1332 = $tmp1333;
    org$pandalanguage$pandac$Type* $tmp1335 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1336 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1335);
    methodType1334 = $tmp1336;
    panda$core$String* $tmp1338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1337, methodType1334);
    panda$core$String* $tmp1340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1338, &$s1339);
    panda$core$String* $tmp1341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1340, result1332);
    panda$core$String* $tmp1343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1341, &$s1342);
    panda$core$String* $tmp1344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1343, itable1262);
    panda$core$String* $tmp1346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1344, &$s1345);
    panda$core$String* $tmp1347 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1346, ((panda$core$Object*) wrap_panda$core$Int64(index1292)));
    panda$core$String* $tmp1349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1347, &$s1348);
    (($fn1350) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1349);
    return result1332;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1352 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp1351 = $tmp1352.value;
    if (!$tmp1351) goto $l1353;
    panda$core$Bit $tmp1354 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp1351 = $tmp1354.value;
    $l1353:;
    panda$core$Bit $tmp1355 = { $tmp1351 };
    if ($tmp1355.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp1356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp1356.value) {
        {
            panda$core$String* $tmp1357 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1357;
        }
        }
        else {
        {
            panda$core$String* $tmp1358 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1358;
        }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp1359 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
        if ($tmp1359.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
        }
        }
        panda$core$String* $tmp1360 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp1360;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m1361;
    panda$core$String* $match$862_91362;
    panda$core$String* count1367;
    panda$core$Int64 elementSize1373;
    panda$core$String* ptr1392;
    panda$core$String* ptr1403;
    panda$core$String* index1406;
    panda$core$String* ptr1420;
    panda$core$String* count1423;
    panda$core$Int64 elementSize1429;
    panda$core$String* ptr1451;
    panda$core$String* offset1454;
    m1361 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$862_91362 = ((org$pandalanguage$pandac$Symbol*) m1361->value)->name;
        panda$core$Bit $tmp1364 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91362, &$s1363);
        if ($tmp1364.value) {
        {
            panda$core$Int64 $tmp1365 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1365, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1366.value);
            panda$core$Object* $tmp1368 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1369 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1368), p_out);
            count1367 = $tmp1369;
            org$pandalanguage$pandac$Type* $tmp1370 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1361);
            panda$core$Int64 $tmp1371 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1370->subtypes);
            panda$core$Bit $tmp1372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1371, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1372.value);
            org$pandalanguage$pandac$Type* $tmp1374 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1361);
            panda$core$Object* $tmp1375 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1374->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1376 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1375));
            elementSize1373 = $tmp1376;
            panda$core$String* $tmp1378 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1377, $tmp1378);
            panda$core$String* $tmp1381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1379, &$s1380);
            panda$core$String* $tmp1382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1381, count1367);
            panda$core$String* $tmp1384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1382, &$s1383);
            panda$core$String* $tmp1385 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1384, ((panda$core$Object*) wrap_panda$core$Int64(elementSize1373)));
            panda$core$String* $tmp1387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1385, &$s1386);
            return $tmp1387;
        }
        }
        else {
        panda$core$Bit $tmp1389 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91362, &$s1388);
        if ($tmp1389.value) {
        {
            panda$core$Int64 $tmp1390 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1390, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1391.value);
            panda$core$Object* $tmp1393 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1394 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1393), p_out);
            ptr1392 = $tmp1394;
            panda$core$String* $tmp1396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1395, ptr1392);
            panda$core$String* $tmp1398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1396, &$s1397);
            return $tmp1398;
        }
        }
        else {
        panda$core$Bit $tmp1400 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91362, &$s1399);
        if ($tmp1400.value) {
        {
            panda$core$Int64 $tmp1401 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1401, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1402.value);
            panda$core$Object* $tmp1404 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1405 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1404), p_out);
            ptr1403 = $tmp1405;
            panda$core$Object* $tmp1407 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1408 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1407), p_out);
            index1406 = $tmp1408;
            panda$core$String* $tmp1410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1409, ptr1403);
            panda$core$String* $tmp1412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1410, &$s1411);
            panda$core$String* $tmp1413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1412, index1406);
            panda$core$String* $tmp1415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1413, &$s1414);
            return $tmp1415;
        }
        }
        else {
        panda$core$Bit $tmp1417 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91362, &$s1416);
        if ($tmp1417.value) {
        {
            panda$core$Int64 $tmp1418 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1418, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1419.value);
            panda$core$Object* $tmp1421 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1422 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1421), p_out);
            ptr1420 = $tmp1422;
            panda$core$Object* $tmp1424 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1425 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1424), p_out);
            count1423 = $tmp1425;
            org$pandalanguage$pandac$Type* $tmp1426 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1361);
            panda$core$Int64 $tmp1427 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1426->subtypes);
            panda$core$Bit $tmp1428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1427, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1428.value);
            org$pandalanguage$pandac$Type* $tmp1430 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1361);
            panda$core$Object* $tmp1431 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1430->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1432 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1431));
            elementSize1429 = $tmp1432;
            panda$core$String* $tmp1434 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1433, $tmp1434);
            panda$core$String* $tmp1437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1435, &$s1436);
            panda$core$String* $tmp1438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1437, ptr1420);
            panda$core$String* $tmp1440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1438, &$s1439);
            panda$core$String* $tmp1441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1440, count1423);
            panda$core$String* $tmp1443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1441, &$s1442);
            panda$core$String* $tmp1444 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1443, ((panda$core$Object*) wrap_panda$core$Int64(elementSize1429)));
            panda$core$String* $tmp1446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1444, &$s1445);
            return $tmp1446;
        }
        }
        else {
        panda$core$Bit $tmp1448 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91362, &$s1447);
        if ($tmp1448.value) {
        {
            panda$core$Int64 $tmp1449 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1449, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1450.value);
            panda$core$Object* $tmp1452 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1453 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1452), p_out);
            ptr1451 = $tmp1453;
            panda$core$Object* $tmp1455 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1456 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1455), p_out);
            offset1454 = $tmp1456;
            panda$core$String* $tmp1458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1457, ptr1451);
            panda$core$String* $tmp1460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1458, &$s1459);
            panda$core$String* $tmp1461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1460, offset1454);
            panda$core$String* $tmp1463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1461, &$s1462);
            return $tmp1463;
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
    org$pandalanguage$pandac$MethodDecl* m1465;
    panda$core$String* bit1476;
    panda$core$String* result1480;
    panda$core$String* bit1494;
    panda$core$String* result1498;
    panda$collections$Array* args1508;
    org$pandalanguage$pandac$Type* actualMethodType1512;
    panda$core$String* actualResultType1513;
    panda$core$Bit isSuper1514;
    panda$core$Int64 offset1534;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1539;
    panda$core$String* arg1554;
    panda$core$String* target1575;
    panda$core$String* methodRef1579;
    panda$core$Bit indirect1581;
    panda$core$String* result1583;
    panda$core$String* separator1585;
    panda$core$String* indirectVar1587;
    panda$collections$Iterator* arg$Iter1616;
    panda$core$String* arg1628;
    panda$core$Bit $tmp1464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp1464.value);
    m1465 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp1467 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1465->owner)->name, &$s1466);
    if ($tmp1467.value) {
    {
        panda$core$String* $tmp1468 = org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp1468;
    }
    }
    panda$core$Bit $tmp1469 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1465->owner);
    if ($tmp1469.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1465);
    }
    }
    panda$core$Bit $tmp1471 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1465->owner)->name, &$s1470);
    if ($tmp1471.value) {
    {
        panda$core$Bit $tmp1473 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1465)->name, &$s1472);
        if ($tmp1473.value) {
        {
            panda$core$Int64 $tmp1474 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1474, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1475.value);
            panda$core$Object* $tmp1477 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1478 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1479 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1477), ((org$pandalanguage$pandac$IRNode*) $tmp1478), p_out);
            bit1476 = $tmp1479;
            panda$core$String* $tmp1481 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1480 = $tmp1481;
            panda$core$String* $tmp1483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1482, result1480);
            panda$core$String* $tmp1485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1483, &$s1484);
            panda$core$String* $tmp1486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1485, bit1476);
            panda$core$String* $tmp1488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1486, &$s1487);
            (($fn1489) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1488);
            return result1480;
        }
        }
        panda$core$Bit $tmp1491 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1465)->name, &$s1490);
        if ($tmp1491.value) {
        {
            panda$core$Int64 $tmp1492 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1492, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1493.value);
            panda$core$Object* $tmp1495 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1496 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1497 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1495), ((org$pandalanguage$pandac$IRNode*) $tmp1496), p_out);
            bit1494 = $tmp1497;
            panda$core$String* $tmp1499 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1498 = $tmp1499;
            panda$core$String* $tmp1501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1500, result1498);
            panda$core$String* $tmp1503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1501, &$s1502);
            panda$core$String* $tmp1504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1503, bit1494);
            panda$core$String* $tmp1506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1504, &$s1505);
            (($fn1507) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1506);
            return result1498;
        }
        }
    }
    }
    panda$collections$Array* $tmp1509 = (panda$collections$Array*) malloc(40);
    $tmp1509->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1509->refCount.value = 1;
    panda$core$Int64 $tmp1511 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp1509, $tmp1511);
    args1508 = $tmp1509;
    panda$core$Int64 $tmp1516 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp1517 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1516, ((panda$core$Int64) { 1 }));
    bool $tmp1515 = $tmp1517.value;
    if (!$tmp1515) goto $l1518;
    panda$core$Object* $tmp1519 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp1520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1519)->kind, ((panda$core$Int64) { 1024 }));
    $tmp1515 = $tmp1520.value;
    $l1518:;
    panda$core$Bit $tmp1521 = { $tmp1515 };
    isSuper1514 = $tmp1521;
    panda$core$Bit $tmp1523 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper1514);
    bool $tmp1522 = $tmp1523.value;
    if (!$tmp1522) goto $l1524;
    panda$core$Bit $tmp1525 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m1465);
    $tmp1522 = $tmp1525.value;
    $l1524:;
    panda$core$Bit $tmp1526 = { $tmp1522 };
    if ($tmp1526.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1527 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1465);
        actualMethodType1512 = $tmp1527;
        panda$core$Int64 $tmp1528 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1512->subtypes);
        panda$core$Int64 $tmp1529 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1528, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1530 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1512->subtypes, $tmp1529);
        panda$core$String* $tmp1531 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1530));
        actualResultType1513 = $tmp1531;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp1532 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1465);
        actualMethodType1512 = $tmp1532;
        panda$core$String* $tmp1533 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType1513 = $tmp1533;
    }
    }
    panda$core$Int64 $tmp1535 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp1536 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1512->subtypes);
    panda$core$Int64 $tmp1537 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1535, $tmp1536);
    panda$core$Int64 $tmp1538 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1537, ((panda$core$Int64) { 1 }));
    offset1534 = $tmp1538;
    panda$core$Int64 $tmp1540 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1539, ((panda$core$Int64) { 0 }), $tmp1540, ((panda$core$Bit) { false }));
    int64_t $tmp1542 = $tmp1539.min.value;
    panda$core$Int64 i1541 = { $tmp1542 };
    int64_t $tmp1544 = $tmp1539.max.value;
    bool $tmp1545 = $tmp1539.inclusive.value;
    if ($tmp1545) goto $l1552; else goto $l1553;
    $l1552:;
    if ($tmp1542 <= $tmp1544) goto $l1546; else goto $l1548;
    $l1553:;
    if ($tmp1542 < $tmp1544) goto $l1546; else goto $l1548;
    $l1546:;
    {
        panda$core$Object* $tmp1555 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1541);
        panda$core$String* $tmp1556 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1555), p_out);
        arg1554 = $tmp1556;
        panda$core$Bit $tmp1558 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i1541, offset1534);
        bool $tmp1557 = $tmp1558.value;
        if (!$tmp1557) goto $l1559;
        panda$core$Int64 $tmp1560 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1541, offset1534);
        panda$core$Object* $tmp1561 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1512->subtypes, $tmp1560);
        panda$core$Object* $tmp1562 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1541);
        panda$core$Bit $tmp1563 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1561), ((org$pandalanguage$pandac$IRNode*) $tmp1562)->type);
        $tmp1557 = $tmp1563.value;
        $l1559:;
        panda$core$Bit $tmp1564 = { $tmp1557 };
        if ($tmp1564.value) {
        {
            panda$core$Object* $tmp1565 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1541);
            panda$core$Int64 $tmp1566 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1541, offset1534);
            panda$core$Object* $tmp1567 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1512->subtypes, $tmp1566);
            panda$core$String* $tmp1568 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg1554, ((org$pandalanguage$pandac$IRNode*) $tmp1565)->type, ((org$pandalanguage$pandac$Type*) $tmp1567), p_out);
            arg1554 = $tmp1568;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args1508, ((panda$core$Object*) arg1554));
    }
    $l1549:;
    int64_t $tmp1570 = $tmp1544 - i1541.value;
    if ($tmp1545) goto $l1571; else goto $l1572;
    $l1571:;
    if ($tmp1570 >= 1) goto $l1569; else goto $l1548;
    $l1572:;
    if ($tmp1570 > 1) goto $l1569; else goto $l1548;
    $l1569:;
    i1541.value += 1;
    goto $l1546;
    $l1548:;
    panda$core$Int64 $tmp1576 = panda$collections$Array$get_count$R$panda$core$Int64(args1508);
    panda$core$Bit $tmp1577 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1576, ((panda$core$Int64) { 0 }));
    if ($tmp1577.value) {
    {
        panda$core$Object* $tmp1578 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args1508, ((panda$core$Int64) { 0 }));
        target1575 = ((panda$core$String*) $tmp1578);
    }
    }
    else {
    {
        target1575 = NULL;
    }
    }
    panda$core$String* $tmp1580 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target1575, m1465, isSuper1514, p_out);
    methodRef1579 = $tmp1580;
    panda$core$Bit $tmp1582 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m1465);
    indirect1581 = $tmp1582;
    panda$core$String* $tmp1584 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1583 = $tmp1584;
    separator1585 = &$s1586;
    if (indirect1581.value) {
    {
        panda$core$String* $tmp1589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1588, actualResultType1513);
        panda$core$String* $tmp1591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1589, &$s1590);
        panda$core$String* $tmp1592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1591, result1583);
        panda$core$String* $tmp1594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1592, &$s1593);
        (($fn1595) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1594);
        panda$core$String* $tmp1597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1596, methodRef1579);
        panda$core$String* $tmp1599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1597, &$s1598);
        panda$core$String* $tmp1600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1599, result1583);
        panda$core$String* $tmp1602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1600, &$s1601);
        (($fn1603) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1602);
        separator1585 = &$s1604;
    }
    }
    else {
    {
        panda$core$String* $tmp1606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1605, actualResultType1513);
        panda$core$String* $tmp1608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1606, &$s1607);
        panda$core$String* $tmp1609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1608, result1583);
        panda$core$String* $tmp1611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1609, &$s1610);
        panda$core$String* $tmp1612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1611, methodRef1579);
        panda$core$String* $tmp1614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1612, &$s1613);
        (($fn1615) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1614);
    }
    }
    {
        ITable* $tmp1617 = ((panda$collections$Iterable*) args1508)->$class->itable;
        while ($tmp1617->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1617 = $tmp1617->next;
        }
        $fn1619 $tmp1618 = $tmp1617->methods[0];
        panda$collections$Iterator* $tmp1620 = $tmp1618(((panda$collections$Iterable*) args1508));
        arg$Iter1616 = $tmp1620;
        $l1621:;
        ITable* $tmp1623 = arg$Iter1616->$class->itable;
        while ($tmp1623->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1623 = $tmp1623->next;
        }
        $fn1625 $tmp1624 = $tmp1623->methods[0];
        panda$core$Bit $tmp1626 = $tmp1624(arg$Iter1616);
        panda$core$Bit $tmp1627 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1626);
        if (!$tmp1627.value) goto $l1622;
        {
            ITable* $tmp1629 = arg$Iter1616->$class->itable;
            while ($tmp1629->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1629 = $tmp1629->next;
            }
            $fn1631 $tmp1630 = $tmp1629->methods[1];
            panda$core$Object* $tmp1632 = $tmp1630(arg$Iter1616);
            arg1628 = ((panda$core$String*) $tmp1632);
            panda$core$String* $tmp1634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1633, separator1585);
            panda$core$String* $tmp1636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1634, &$s1635);
            panda$core$String* $tmp1637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1636, arg1628);
            panda$core$String* $tmp1639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1637, &$s1638);
            (($fn1640) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1639);
            separator1585 = &$s1641;
        }
        goto $l1621;
        $l1622:;
    }
    (($fn1643) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1642);
    panda$core$String* $tmp1644 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp1645 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp1644, actualResultType1513);
    if ($tmp1645.value) {
    {
        panda$core$Int64 $tmp1646 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1512->subtypes);
        panda$core$Int64 $tmp1647 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1646, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1648 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1512->subtypes, $tmp1647);
        panda$core$String* $tmp1649 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result1583, ((org$pandalanguage$pandac$Type*) $tmp1648), p_call->type, p_out);
        return $tmp1649;
    }
    }
    return result1583;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* unwrapped1651;
    panda$core$String* nonNullValue1654;
    panda$core$String* wrapped1664;
    panda$core$Bit $tmp1650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1650.value) {
    {
        panda$core$Object* $tmp1652 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1653 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1652), p_out);
        unwrapped1651 = $tmp1653;
        panda$core$Object* $tmp1655 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1656 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped1651, ((org$pandalanguage$pandac$Type*) $tmp1655), p_dstType, p_out);
        nonNullValue1654 = $tmp1656;
        panda$core$String* $tmp1658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1657, p_value);
        panda$core$String* $tmp1660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1658, &$s1659);
        panda$core$String* $tmp1661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1660, nonNullValue1654);
        panda$core$String* $tmp1663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1661, &$s1662);
        return $tmp1663;
    }
    }
    panda$core$String* $tmp1666 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1665, $tmp1666);
    panda$core$String* $tmp1669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1667, &$s1668);
    org$pandalanguage$pandac$ClassDecl* $tmp1670 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    panda$core$String* $tmp1671 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1670)->name);
    panda$core$String* $tmp1672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1669, $tmp1671);
    panda$core$String* $tmp1674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1672, &$s1673);
    panda$core$String* $tmp1676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1675, p_value);
    panda$core$String* $tmp1678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1676, &$s1677);
    panda$core$String* $tmp1679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1674, $tmp1678);
    wrapped1664 = $tmp1679;
    panda$core$Bit $tmp1680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1680.value) {
    {
        panda$core$String* $tmp1682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1681, p_value);
        panda$core$String* $tmp1684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1682, &$s1683);
        panda$core$String* $tmp1685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1684, wrapped1664);
        panda$core$String* $tmp1687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1685, &$s1686);
        return $tmp1687;
    }
    }
    return wrapped1664;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field1691;
    org$pandalanguage$pandac$ClassDecl* cl1694;
    panda$core$String* base1697;
    panda$core$Bit $tmp1688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp1688.value);
    panda$core$Int64 $tmp1689 = panda$collections$Array$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp1690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1689, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1690.value);
    field1691 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$Bit $tmp1692 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field1691->annotations);
    if ($tmp1692.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field1691->value != NULL }).value);
        panda$core$String* $tmp1693 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field1691->value, p_out);
        return $tmp1693;
    }
    }
    panda$core$Object* $tmp1695 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp1696 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp1695)->type);
    cl1694 = $tmp1696;
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl1694);
    panda$core$Object* $tmp1698 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1699 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1698), p_out);
    base1697 = $tmp1699;
    PANDA_ASSERT(((panda$core$Bit) { cl1694 != NULL }).value);
    panda$core$Bit $tmp1700 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1694);
    if ($tmp1700.value) {
    {
        panda$core$String* $tmp1702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1701, base1697);
        panda$core$String* $tmp1704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1702, &$s1703);
        panda$core$String* $tmp1705 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1691)->name);
        panda$core$String* $tmp1706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1704, $tmp1705);
        panda$core$String* $tmp1708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1706, &$s1707);
        return $tmp1708;
    }
    }
    panda$core$String* $tmp1710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1709, base1697);
    panda$core$String* $tmp1712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1710, &$s1711);
    panda$core$String* $tmp1713 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1691)->name);
    panda$core$String* $tmp1714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1712, $tmp1713);
    panda$core$String* $tmp1716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1714, &$s1715);
    return $tmp1716;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1717;
    panda$core$String* wrapped1727;
    panda$core$String* nonNullValue1730;
    panda$core$String* $tmp1719 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1718, $tmp1719);
    panda$core$String* $tmp1722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1720, &$s1721);
    panda$core$String* $tmp1723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1722, p_value);
    panda$core$String* $tmp1725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1723, &$s1724);
    result1717 = $tmp1725;
    panda$core$Bit $tmp1726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1726.value) {
    {
        panda$core$Object* $tmp1728 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1729 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1728), p_out);
        wrapped1727 = $tmp1729;
        panda$core$Object* $tmp1731 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1732 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped1727, ((org$pandalanguage$pandac$Type*) $tmp1731), p_dstType, p_out);
        nonNullValue1730 = $tmp1732;
        panda$core$String* $tmp1734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1733, p_value);
        panda$core$String* $tmp1736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1734, &$s1735);
        panda$core$String* $tmp1737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1736, nonNullValue1730);
        panda$core$String* $tmp1739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1737, &$s1738);
        panda$core$String* $tmp1740 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp1741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1739, $tmp1740);
        panda$core$String* $tmp1743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1741, &$s1742);
        return $tmp1743;
    }
    }
    return result1717;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1745 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1744, $tmp1745);
    panda$core$String* $tmp1748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1746, &$s1747);
    panda$core$String* $tmp1749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1748, p_value);
    panda$core$String* $tmp1751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1749, &$s1750);
    return $tmp1751;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1753 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1752, $tmp1753);
    panda$core$String* $tmp1756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1754, &$s1755);
    panda$core$String* $tmp1757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1756, p_value);
    panda$core$String* $tmp1759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1757, &$s1758);
    return $tmp1759;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op1760;
    org$pandalanguage$pandac$ClassDecl* srcClass1771;
    org$pandalanguage$pandac$ClassDecl* targetClass1773;
    panda$core$String* srcType1812;
    panda$core$String* dstType1814;
    panda$core$Bit $tmp1761 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp1761.value) {
    {
        panda$core$Bit $tmp1762 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp1762.value);
        panda$core$String* $tmp1764 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
        panda$core$String* $tmp1765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1763, $tmp1764);
        panda$core$String* $tmp1767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1765, &$s1766);
        panda$core$String* $tmp1768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1767, p_value);
        panda$core$String* $tmp1770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1768, &$s1769);
        return $tmp1770;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1772 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass1771 = $tmp1772;
        PANDA_ASSERT(((panda$core$Bit) { srcClass1771 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp1774 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass1773 = $tmp1774;
        PANDA_ASSERT(((panda$core$Bit) { targetClass1773 != NULL }).value);
        panda$core$Bit $tmp1776 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1771);
        bool $tmp1775 = $tmp1776.value;
        if (!$tmp1775) goto $l1777;
        panda$core$Bit $tmp1778 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1773);
        panda$core$Bit $tmp1779 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1778);
        $tmp1775 = $tmp1779.value;
        $l1777:;
        panda$core$Bit $tmp1780 = { $tmp1775 };
        if ($tmp1780.value) {
        {
            panda$core$String* $tmp1781 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1781;
        }
        }
        else {
        panda$core$Bit $tmp1783 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1771);
        panda$core$Bit $tmp1784 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1783);
        bool $tmp1782 = $tmp1784.value;
        if (!$tmp1782) goto $l1785;
        panda$core$Bit $tmp1786 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1773);
        $tmp1782 = $tmp1786.value;
        $l1785:;
        panda$core$Bit $tmp1787 = { $tmp1782 };
        if ($tmp1787.value) {
        {
            panda$core$String* $tmp1788 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1788;
        }
        }
        else {
        panda$core$Bit $tmp1791 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1771);
        bool $tmp1790 = $tmp1791.value;
        if (!$tmp1790) goto $l1792;
        panda$core$Bit $tmp1793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1790 = $tmp1793.value;
        $l1792:;
        panda$core$Bit $tmp1794 = { $tmp1790 };
        bool $tmp1789 = $tmp1794.value;
        if (!$tmp1789) goto $l1795;
        panda$core$Object* $tmp1796 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1797 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1796), p_src);
        $tmp1789 = $tmp1797.value;
        $l1795:;
        panda$core$Bit $tmp1798 = { $tmp1789 };
        if ($tmp1798.value) {
        {
            panda$core$String* $tmp1799 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1799;
        }
        }
        else {
        panda$core$Bit $tmp1802 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1773);
        bool $tmp1801 = $tmp1802.value;
        if (!$tmp1801) goto $l1803;
        panda$core$Bit $tmp1804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1801 = $tmp1804.value;
        $l1803:;
        panda$core$Bit $tmp1805 = { $tmp1801 };
        bool $tmp1800 = $tmp1805.value;
        if (!$tmp1800) goto $l1806;
        panda$core$Object* $tmp1807 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1808 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1807), p_target);
        $tmp1800 = $tmp1808.value;
        $l1806:;
        panda$core$Bit $tmp1809 = { $tmp1800 };
        if ($tmp1809.value) {
        {
            panda$core$String* $tmp1810 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1810;
        }
        }
        }
        }
        }
        op1760 = &$s1811;
    }
    }
    panda$core$String* $tmp1813 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType1812 = $tmp1813;
    panda$core$String* $tmp1815 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType1814 = $tmp1815;
    panda$core$Bit $tmp1816 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType1812, dstType1814);
    if ($tmp1816.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp1818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1817, dstType1814);
    panda$core$String* $tmp1820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1818, &$s1819);
    panda$core$String* $tmp1821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1820, p_value);
    panda$core$String* $tmp1823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1821, &$s1822);
    return $tmp1823;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base1827;
    panda$core$Bit $tmp1824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp1824.value);
    panda$core$Int64 $tmp1825 = panda$collections$Array$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp1826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1825, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1826.value);
    panda$core$Object* $tmp1828 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1829 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1828), p_out);
    base1827 = $tmp1829;
    panda$core$Object* $tmp1830 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1831 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base1827, ((org$pandalanguage$pandac$IRNode*) $tmp1830)->type, p_cast->type, p_out);
    return $tmp1831;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl1835;
    panda$core$String* t1837;
    panda$core$String* value1850;
    panda$core$String* tmp1864;
    panda$core$String* result1882;
    panda$core$String* classPtr1903;
    panda$core$String* className1905;
    panda$core$Bit $tmp1832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp1832.value);
    panda$core$Int64 $tmp1833 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp1834 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1833, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1834.value);
    org$pandalanguage$pandac$ClassDecl* $tmp1836 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl1835 = $tmp1836;
    PANDA_ASSERT(((panda$core$Bit) { cl1835 != NULL }).value);
    panda$core$String* $tmp1838 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t1837 = $tmp1838;
    panda$core$Bit $tmp1840 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    bool $tmp1839 = $tmp1840.value;
    if ($tmp1839) goto $l1841;
    org$pandalanguage$pandac$Type* $tmp1842 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1843 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp1842);
    $tmp1839 = $tmp1843.value;
    $l1841:;
    panda$core$Bit $tmp1844 = { $tmp1839 };
    if ($tmp1844.value) {
    {
        panda$core$Int64 $tmp1845 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp1846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1845, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp1846.value);
        panda$core$Object* $tmp1847 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp1848 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1847)->children);
        panda$core$Bit $tmp1849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1848, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp1849.value);
        panda$core$Object* $tmp1851 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp1852 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp1851)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1853 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1852), p_out);
        value1850 = $tmp1853;
        panda$core$String* $tmp1855 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        panda$core$String* $tmp1856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1854, $tmp1855);
        panda$core$String* $tmp1858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1856, &$s1857);
        panda$core$String* $tmp1859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1858, value1850);
        panda$core$String* $tmp1861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1859, &$s1860);
        return $tmp1861;
    }
    }
    panda$core$Bit $tmp1862 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1835);
    if ($tmp1862.value) {
    {
        panda$core$Int64 $tmp1863 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1863;
        panda$core$String* $tmp1866 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1865, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        panda$core$String* $tmp1868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1866, &$s1867);
        tmp1864 = $tmp1868;
        panda$core$String* $tmp1870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1869, t1837);
        panda$core$String* $tmp1872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1870, &$s1871);
        panda$core$String* $tmp1873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1872, tmp1864);
        panda$core$String* $tmp1875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1873, &$s1874);
        (($fn1876) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1875);
        panda$core$Object* $tmp1877 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1878, tmp1864);
        panda$core$String* $tmp1881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1879, &$s1880);
        org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp1877), $tmp1881, p_out);
        return tmp1864;
    }
    }
    panda$core$String* $tmp1883 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1882 = $tmp1883;
    panda$core$String* $tmp1885 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp1886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1884, $tmp1885);
    panda$core$String* $tmp1888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1886, &$s1887);
    panda$core$String* $tmp1889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1888, result1882);
    panda$core$String* $tmp1891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1889, &$s1890);
    panda$core$String* $tmp1892 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp1893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1891, $tmp1892);
    panda$core$String* $tmp1895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1893, &$s1894);
    panda$core$Int64 $tmp1897 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp1898 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1896, ((panda$core$Object*) wrap_panda$core$Int64($tmp1897)));
    panda$core$String* $tmp1900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1898, &$s1899);
    panda$core$String* $tmp1901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1895, $tmp1900);
    (($fn1902) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1901);
    panda$core$String* $tmp1904 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr1903 = $tmp1904;
    panda$core$Bit $tmp1906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    if ($tmp1906.value) {
    {
        panda$core$Object* $tmp1907 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1908 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1907));
        className1905 = $tmp1908;
    }
    }
    else {
    {
        panda$core$String* $tmp1909 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className1905 = $tmp1909;
    }
    }
    panda$core$String* $tmp1911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1910, result1882);
    panda$core$String* $tmp1913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1911, &$s1912);
    panda$core$String* $tmp1914 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) cl1835)->name);
    panda$core$String* $tmp1915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1913, $tmp1914);
    panda$core$String* $tmp1917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1915, &$s1916);
    (($fn1918) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1917);
    panda$core$String* $tmp1920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1919, result1882);
    panda$core$String* $tmp1922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1920, &$s1921);
    (($fn1923) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1922);
    panda$core$Object* $tmp1924 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1925, result1882);
    panda$core$String* $tmp1928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1926, &$s1927);
    org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp1924), $tmp1928, p_out);
    return result1882;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1929 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    return $tmp1929;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1931 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp1932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1930, $tmp1931);
    return $tmp1932;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s1933;
    }
    }
    return &$s1934;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1935 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    return $tmp1935;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1937;
    panda$collections$Iterator* raw$Iter1950;
    panda$core$Char8 raw1963;
    panda$core$UInt8 c1968;
    panda$core$Int64 $tmp1936 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp1936;
    panda$core$String* $tmp1939 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1938, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp1941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1939, &$s1940);
    result1937 = $tmp1941;
    org$pandalanguage$pandac$Type* $tmp1942 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1942);
    panda$core$String* $tmp1944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1943, result1937);
    panda$core$String* $tmp1946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1944, &$s1945);
    panda$core$String* $tmp1948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1946, &$s1947);
    (($fn1949) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp1948);
    {
        panda$collections$ListView* $tmp1951 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp1952 = ((panda$collections$Iterable*) $tmp1951)->$class->itable;
        while ($tmp1952->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1952 = $tmp1952->next;
        }
        $fn1954 $tmp1953 = $tmp1952->methods[0];
        panda$collections$Iterator* $tmp1955 = $tmp1953(((panda$collections$Iterable*) $tmp1951));
        raw$Iter1950 = $tmp1955;
        $l1956:;
        ITable* $tmp1958 = raw$Iter1950->$class->itable;
        while ($tmp1958->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1958 = $tmp1958->next;
        }
        $fn1960 $tmp1959 = $tmp1958->methods[0];
        panda$core$Bit $tmp1961 = $tmp1959(raw$Iter1950);
        panda$core$Bit $tmp1962 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1961);
        if (!$tmp1962.value) goto $l1957;
        {
            ITable* $tmp1964 = raw$Iter1950->$class->itable;
            while ($tmp1964->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1964 = $tmp1964->next;
            }
            $fn1966 $tmp1965 = $tmp1964->methods[1];
            panda$core$Object* $tmp1967 = $tmp1965(raw$Iter1950);
            raw1963 = ((panda$core$Char8$wrapper*) $tmp1967)->value;
            panda$core$UInt8 $tmp1969 = panda$core$Char8$convert$R$panda$core$UInt8(raw1963);
            c1968 = $tmp1969;
            (($fn1971) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), &$s1970);
            panda$collections$ListView* $tmp1973 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s1972);
            panda$core$UInt32 $tmp1974 = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(c1968, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp1975 = panda$core$UInt32$convert$R$panda$core$Int64($tmp1974);
            ITable* $tmp1976 = $tmp1973->$class->itable;
            while ($tmp1976->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1976 = $tmp1976->next;
            }
            $fn1978 $tmp1977 = $tmp1976->methods[0];
            panda$core$Object* $tmp1979 = $tmp1977($tmp1973, $tmp1975);
            (($fn1980) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp1979)->value)));
            panda$collections$ListView* $tmp1982 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s1981);
            panda$core$UInt32 $tmp1983 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(c1968, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp1984 = panda$core$UInt32$convert$R$panda$core$Int64($tmp1983);
            ITable* $tmp1985 = $tmp1982->$class->itable;
            while ($tmp1985->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1985 = $tmp1985->next;
            }
            $fn1987 $tmp1986 = $tmp1985->methods[0];
            panda$core$Object* $tmp1988 = $tmp1986($tmp1982, $tmp1984);
            (($fn1989) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp1988)->value)));
        }
        goto $l1956;
        $l1957:;
    }
    panda$collections$ListView* $tmp1991 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp1992 = ((panda$collections$CollectionView*) $tmp1991)->$class->itable;
    while ($tmp1992->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1992 = $tmp1992->next;
    }
    $fn1994 $tmp1993 = $tmp1992->methods[0];
    panda$core$Int64 $tmp1995 = $tmp1993(((panda$collections$CollectionView*) $tmp1991));
    panda$core$String* $tmp1996 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1990, ((panda$core$Object*) wrap_panda$core$Int64($tmp1995)));
    panda$core$String* $tmp1998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1996, &$s1997);
    (($fn1999) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp1998);
    panda$core$String* $tmp2001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2000, result1937);
    panda$core$String* $tmp2003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2001, &$s2002);
    return $tmp2003;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    return &$s2004;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2006 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp2007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2005, $tmp2006);
    panda$core$String* $tmp2009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2007, &$s2008);
    return $tmp2009;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2013;
    org$pandalanguage$pandac$ClassDecl* cl2016;
    panda$core$String* bit2019;
    panda$core$Bit $tmp2010 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp2010.value);
    panda$core$Int64 $tmp2011 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp2012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2011, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2012.value);
    panda$core$Object* $tmp2014 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2015 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2014), p_out);
    value2013 = $tmp2015;
    panda$core$Object* $tmp2017 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2018 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2017)->type);
    cl2016 = $tmp2018;
    panda$core$Bit $tmp2020 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2016);
    if ($tmp2020.value) {
    {
        panda$core$Object* $tmp2021 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2022 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2021)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2022.value) {
        {
            bit2019 = &$s2023;
        }
        }
        else {
        {
            panda$core$String* $tmp2025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2024, value2013);
            panda$core$String* $tmp2027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2025, &$s2026);
            bit2019 = $tmp2027;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2028, value2013);
        panda$core$String* $tmp2031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2029, &$s2030);
        bit2019 = $tmp2031;
    }
    }
    panda$core$String* $tmp2033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2032, bit2019);
    panda$core$String* $tmp2035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2033, &$s2034);
    return $tmp2035;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2039;
    org$pandalanguage$pandac$ClassDecl* cl2042;
    panda$core$String* bit2045;
    panda$core$Bit $tmp2036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp2036.value);
    panda$core$Int64 $tmp2037 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp2038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2037, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2038.value);
    panda$core$Object* $tmp2040 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2041 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2040), p_out);
    value2039 = $tmp2041;
    panda$core$Object* $tmp2043 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2044 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2043)->type);
    cl2042 = $tmp2044;
    panda$core$Bit $tmp2046 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2042);
    if ($tmp2046.value) {
    {
        panda$core$Object* $tmp2047 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2048 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2047)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2048.value) {
        {
            bit2045 = &$s2049;
        }
        }
        else {
        {
            panda$core$String* $tmp2051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2050, value2039);
            panda$core$String* $tmp2053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2051, &$s2052);
            bit2045 = $tmp2053;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2054, value2039);
        panda$core$String* $tmp2057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2055, &$s2056);
        bit2045 = $tmp2057;
    }
    }
    panda$core$String* $tmp2059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2058, bit2045);
    panda$core$String* $tmp2061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2059, &$s2060);
    return $tmp2061;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2063;
    panda$core$Bit $tmp2062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp2062.value);
    panda$core$Object* $tmp2064 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2065 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp2064));
    cl2063 = $tmp2065;
    PANDA_ASSERT(((panda$core$Bit) { cl2063 != NULL }).value);
    panda$core$Bit $tmp2066 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2063);
    if ($tmp2066.value) {
    {
        panda$core$String* $tmp2068 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
        panda$core$String* $tmp2069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2067, $tmp2068);
        panda$core$String* $tmp2071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2069, &$s2070);
        return $tmp2071;
    }
    }
    else {
    {
        return &$s2072;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base2076;
    panda$core$String* result2079;
    panda$core$Bit $tmp2073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp2073.value);
    panda$core$Int64 $tmp2074 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp2075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2074, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2075.value);
    panda$core$Object* $tmp2077 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2078 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2077), p_out);
    base2076 = $tmp2078;
    panda$core$String* $tmp2080 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2079 = $tmp2080;
    panda$core$Int64 $tmp2081 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp2081.value) {
        case 52:
        {
            panda$core$String* $tmp2083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2082, base2076);
            panda$core$String* $tmp2085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2083, &$s2084);
            return $tmp2085;
        }
        break;
        case 49:
        {
            panda$core$String* $tmp2087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2086, base2076);
            panda$core$String* $tmp2089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2087, &$s2088);
            return $tmp2089;
        }
        break;
        case 50:
        {
            panda$core$String* $tmp2091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2090, base2076);
            panda$core$String* $tmp2093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2091, &$s2092);
            return $tmp2093;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2106;
    panda$core$String* result2109;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp2094 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2094;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp2095 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2095;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp2096 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2096;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp2097 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2097;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp2098 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2098;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp2099 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2099;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp2100 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2100;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp2101 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp2101;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp2102 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2102;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp2103 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp2103;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp2104 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2104;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp2105 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2105;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp2107 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2108 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2107), p_out);
            value2106 = $tmp2108;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value2106));
            return value2106;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp2110 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result2109 = ((panda$core$String*) $tmp2110);
            PANDA_ASSERT(((panda$core$Bit) { result2109 != NULL }).value);
            return result2109;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp2111 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2111;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp2112 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2112;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp2113 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2113;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp2114 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2114;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2115 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2115;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter2120;
    org$pandalanguage$pandac$IRNode* s2132;
    panda$core$Bit $tmp2116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp2116.value);
    (($fn2118) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2117);
    panda$core$Int64 $tmp2119 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2119;
    {
        ITable* $tmp2121 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp2121->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2121 = $tmp2121->next;
        }
        $fn2123 $tmp2122 = $tmp2121->methods[0];
        panda$collections$Iterator* $tmp2124 = $tmp2122(((panda$collections$Iterable*) p_block->children));
        s$Iter2120 = $tmp2124;
        $l2125:;
        ITable* $tmp2127 = s$Iter2120->$class->itable;
        while ($tmp2127->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2127 = $tmp2127->next;
        }
        $fn2129 $tmp2128 = $tmp2127->methods[0];
        panda$core$Bit $tmp2130 = $tmp2128(s$Iter2120);
        panda$core$Bit $tmp2131 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2130);
        if (!$tmp2131.value) goto $l2126;
        {
            ITable* $tmp2133 = s$Iter2120->$class->itable;
            while ($tmp2133->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2133 = $tmp2133->next;
            }
            $fn2135 $tmp2134 = $tmp2133->methods[1];
            panda$core$Object* $tmp2136 = $tmp2134(s$Iter2120);
            s2132 = ((org$pandalanguage$pandac$IRNode*) $tmp2136);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2132, p_out);
        }
        goto $l2125;
        $l2126:;
    }
    panda$core$Int64 $tmp2137 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2137;
    (($fn2139) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2138);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2140;
    panda$core$String* $match$1286_92141;
    panda$core$String* ptr2146;
    panda$core$String* arg2149;
    panda$core$String* base2169;
    panda$core$String* index2172;
    panda$core$String* value2175;
    m2140 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$1286_92141 = ((org$pandalanguage$pandac$Symbol*) m2140->value)->name;
        panda$core$Bit $tmp2143 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1286_92141, &$s2142);
        if ($tmp2143.value) {
        {
            panda$core$Int64 $tmp2144 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2144, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2145.value);
            panda$core$Object* $tmp2147 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2148 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2147), p_out);
            ptr2146 = $tmp2148;
            panda$core$Object* $tmp2150 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2151 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2150));
            panda$core$String* $tmp2152 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2151, p_out);
            arg2149 = $tmp2152;
            panda$core$String* $tmp2154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2153, arg2149);
            panda$core$String* $tmp2156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2154, &$s2155);
            panda$core$String* $tmp2157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2156, ptr2146);
            panda$core$String* $tmp2159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2157, &$s2158);
            (($fn2160) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2159);
        }
        }
        else {
        panda$core$Bit $tmp2162 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1286_92141, &$s2161);
        if ($tmp2162.value) {
        {
            panda$core$Int64 $tmp2163 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2163, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp2164.value);
            panda$core$Object* $tmp2165 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2166 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2165));
            panda$core$Int64 $tmp2167 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2166->type->subtypes);
            panda$core$Bit $tmp2168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2167, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2168.value);
            panda$core$Object* $tmp2170 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2171 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2170), p_out);
            base2169 = $tmp2171;
            panda$core$Object* $tmp2173 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2174 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2173), p_out);
            index2172 = $tmp2174;
            panda$core$Object* $tmp2176 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2177 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2176));
            panda$core$String* $tmp2178 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2177, p_out);
            value2175 = $tmp2178;
            panda$core$String* $tmp2180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2179, base2169);
            panda$core$String* $tmp2182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2180, &$s2181);
            panda$core$String* $tmp2183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2182, index2172);
            panda$core$String* $tmp2185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2183, &$s2184);
            panda$core$String* $tmp2186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2185, value2175);
            panda$core$String* $tmp2188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2186, &$s2187);
            (($fn2189) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2188);
        }
        }
        else {
        panda$core$Bit $tmp2191 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1286_92141, &$s2190);
        if ($tmp2191.value) {
        {
            panda$core$Int64 $tmp2192 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2192, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2193.value);
            panda$core$Object* $tmp2195 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2196 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2195), p_out);
            panda$core$String* $tmp2197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2194, $tmp2196);
            panda$core$String* $tmp2199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2197, &$s2198);
            (($fn2200) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2199);
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
    org$pandalanguage$pandac$MethodDecl* m2202;
    org$pandalanguage$pandac$Type* actualMethodType2206;
    panda$core$String* actualResultType2207;
    panda$core$Bit isSuper2208;
    panda$collections$Array* args2228;
    panda$core$Int64 offset2231;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2236;
    panda$core$String* arg2251;
    panda$core$String* refTarget2272;
    panda$core$String* methodRef2276;
    panda$core$String* separator2278;
    panda$core$String* indirectVar2282;
    panda$core$String* resultType2285;
    panda$collections$Iterator* a$Iter2312;
    panda$core$String* a2324;
    panda$core$Bit $tmp2201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2201.value);
    m2202 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2204 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2202->owner)->name, &$s2203);
    if ($tmp2204.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    panda$core$Bit $tmp2205 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m2202->owner);
    if ($tmp2205.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2202);
    }
    }
    panda$core$Int64 $tmp2210 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2211 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2210, ((panda$core$Int64) { 1 }));
    bool $tmp2209 = $tmp2211.value;
    if (!$tmp2209) goto $l2212;
    panda$core$Object* $tmp2213 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2213)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2209 = $tmp2214.value;
    $l2212:;
    panda$core$Bit $tmp2215 = { $tmp2209 };
    isSuper2208 = $tmp2215;
    panda$core$Bit $tmp2217 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2208);
    bool $tmp2216 = $tmp2217.value;
    if (!$tmp2216) goto $l2218;
    panda$core$Bit $tmp2219 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2202);
    $tmp2216 = $tmp2219.value;
    $l2218:;
    panda$core$Bit $tmp2220 = { $tmp2216 };
    if ($tmp2220.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2221 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2202);
        actualMethodType2206 = $tmp2221;
        panda$core$Int64 $tmp2222 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2206->subtypes);
        panda$core$Int64 $tmp2223 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2222, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2224 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2206->subtypes, $tmp2223);
        panda$core$String* $tmp2225 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2224));
        actualResultType2207 = $tmp2225;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2226 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2202);
        actualMethodType2206 = $tmp2226;
        panda$core$String* $tmp2227 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2207 = $tmp2227;
    }
    }
    panda$collections$Array* $tmp2229 = (panda$collections$Array*) malloc(40);
    $tmp2229->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2229->refCount.value = 1;
    panda$collections$Array$init($tmp2229);
    args2228 = $tmp2229;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args2228, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2232 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2233 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2206->subtypes);
    panda$core$Int64 $tmp2234 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2232, $tmp2233);
    panda$core$Int64 $tmp2235 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2234, ((panda$core$Int64) { 1 }));
    offset2231 = $tmp2235;
    panda$core$Int64 $tmp2237 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2236, ((panda$core$Int64) { 0 }), $tmp2237, ((panda$core$Bit) { false }));
    int64_t $tmp2239 = $tmp2236.min.value;
    panda$core$Int64 i2238 = { $tmp2239 };
    int64_t $tmp2241 = $tmp2236.max.value;
    bool $tmp2242 = $tmp2236.inclusive.value;
    if ($tmp2242) goto $l2249; else goto $l2250;
    $l2249:;
    if ($tmp2239 <= $tmp2241) goto $l2243; else goto $l2245;
    $l2250:;
    if ($tmp2239 < $tmp2241) goto $l2243; else goto $l2245;
    $l2243:;
    {
        panda$core$Object* $tmp2252 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2238);
        panda$core$String* $tmp2253 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2252), p_out);
        arg2251 = $tmp2253;
        panda$core$Bit $tmp2255 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2238, offset2231);
        bool $tmp2254 = $tmp2255.value;
        if (!$tmp2254) goto $l2256;
        panda$core$Int64 $tmp2257 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2238, offset2231);
        panda$core$Object* $tmp2258 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2206->subtypes, $tmp2257);
        panda$core$Object* $tmp2259 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2238);
        panda$core$Bit $tmp2260 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2258), ((org$pandalanguage$pandac$IRNode*) $tmp2259)->type);
        $tmp2254 = $tmp2260.value;
        $l2256:;
        panda$core$Bit $tmp2261 = { $tmp2254 };
        if ($tmp2261.value) {
        {
            panda$core$Object* $tmp2262 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2238);
            panda$core$Int64 $tmp2263 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2238, offset2231);
            panda$core$Object* $tmp2264 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2206->subtypes, $tmp2263);
            panda$core$String* $tmp2265 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2251, ((org$pandalanguage$pandac$IRNode*) $tmp2262)->type, ((org$pandalanguage$pandac$Type*) $tmp2264), p_out);
            arg2251 = $tmp2265;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2228, ((panda$core$Object*) arg2251));
    }
    $l2246:;
    int64_t $tmp2267 = $tmp2241 - i2238.value;
    if ($tmp2242) goto $l2268; else goto $l2269;
    $l2268:;
    if ($tmp2267 >= 1) goto $l2266; else goto $l2245;
    $l2269:;
    if ($tmp2267 > 1) goto $l2266; else goto $l2245;
    $l2266:;
    i2238.value += 1;
    goto $l2243;
    $l2245:;
    panda$core$Int64 $tmp2273 = panda$collections$Array$get_count$R$panda$core$Int64(args2228);
    panda$core$Bit $tmp2274 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2273, ((panda$core$Int64) { 0 }));
    if ($tmp2274.value) {
    {
        panda$core$Object* $tmp2275 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2228, ((panda$core$Int64) { 0 }));
        refTarget2272 = ((panda$core$String*) $tmp2275);
    }
    }
    else {
    {
        refTarget2272 = NULL;
    }
    }
    panda$core$String* $tmp2277 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget2272, m2202, isSuper2208, p_out);
    methodRef2276 = $tmp2277;
    separator2278 = &$s2279;
    panda$core$Bit $tmp2280 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2202);
    if ($tmp2280.value) {
    {
        panda$core$Int64 $tmp2281 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2281;
        panda$core$String* $tmp2284 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2283, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        indirectVar2282 = $tmp2284;
        panda$core$String* $tmp2286 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType2285 = $tmp2286;
        panda$core$String* $tmp2288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2287, resultType2285);
        panda$core$String* $tmp2290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2288, &$s2289);
        panda$core$String* $tmp2291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2290, indirectVar2282);
        panda$core$String* $tmp2293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2291, &$s2292);
        (($fn2294) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2293);
        panda$core$String* $tmp2296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2295, methodRef2276);
        panda$core$String* $tmp2298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2296, &$s2297);
        panda$core$String* $tmp2299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2298, resultType2285);
        panda$core$String* $tmp2301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2299, &$s2300);
        panda$core$String* $tmp2302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2301, indirectVar2282);
        panda$core$String* $tmp2304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2302, &$s2303);
        (($fn2305) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2304);
        separator2278 = &$s2306;
    }
    }
    else {
    {
        panda$core$String* $tmp2308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2307, methodRef2276);
        panda$core$String* $tmp2310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2308, &$s2309);
        (($fn2311) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2310);
    }
    }
    {
        ITable* $tmp2313 = ((panda$collections$Iterable*) args2228)->$class->itable;
        while ($tmp2313->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2313 = $tmp2313->next;
        }
        $fn2315 $tmp2314 = $tmp2313->methods[0];
        panda$collections$Iterator* $tmp2316 = $tmp2314(((panda$collections$Iterable*) args2228));
        a$Iter2312 = $tmp2316;
        $l2317:;
        ITable* $tmp2319 = a$Iter2312->$class->itable;
        while ($tmp2319->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2319 = $tmp2319->next;
        }
        $fn2321 $tmp2320 = $tmp2319->methods[0];
        panda$core$Bit $tmp2322 = $tmp2320(a$Iter2312);
        panda$core$Bit $tmp2323 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2322);
        if (!$tmp2323.value) goto $l2318;
        {
            ITable* $tmp2325 = a$Iter2312->$class->itable;
            while ($tmp2325->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2325 = $tmp2325->next;
            }
            $fn2327 $tmp2326 = $tmp2325->methods[1];
            panda$core$Object* $tmp2328 = $tmp2326(a$Iter2312);
            a2324 = ((panda$core$String*) $tmp2328);
            (($fn2329) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2278);
            (($fn2330) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2324);
            separator2278 = &$s2331;
        }
        goto $l2317;
        $l2318:;
    }
    (($fn2333) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2332);
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test2345;
    panda$core$Bit $tmp2334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp2334.value);
    panda$core$Int64 $tmp2336 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2336, ((panda$core$Int64) { 2 }));
    bool $tmp2335 = $tmp2337.value;
    if ($tmp2335) goto $l2338;
    panda$core$Int64 $tmp2339 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2339, ((panda$core$Int64) { 3 }));
    $tmp2335 = $tmp2340.value;
    $l2338:;
    panda$core$Bit $tmp2341 = { $tmp2335 };
    PANDA_ASSERT($tmp2341.value);
    panda$core$Object* $tmp2342 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2343 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2344 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2342)->type, $tmp2343);
    PANDA_ASSERT($tmp2344.value);
    panda$core$Object* $tmp2346 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2347 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2346), p_out);
    test2345 = $tmp2347;
    panda$core$String* $tmp2349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2348, test2345);
    panda$core$String* $tmp2351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2349, &$s2350);
    (($fn2352) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2351);
    panda$core$Object* $tmp2353 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2353), p_out);
    (($fn2355) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2354);
    panda$core$Int64 $tmp2356 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2356, ((panda$core$Int64) { 3 }));
    if ($tmp2357.value) {
    {
        (($fn2359) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2358);
        panda$core$Object* $tmp2360 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2360), p_out);
        (($fn2362) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2361);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2366;
    panda$core$String* range2377;
    org$pandalanguage$pandac$IRNode* block2380;
    org$pandalanguage$pandac$Type* t2382;
    panda$core$String* llt2385;
    panda$core$String* indexType2387;
    org$pandalanguage$pandac$ClassDecl* cl2393;
    org$pandalanguage$pandac$FieldDecl* field2401;
    panda$core$String* numberType2407;
    panda$core$String* index2410;
    panda$core$String* start2412;
    panda$core$String* indexValuePtr2425;
    panda$core$String* end2440;
    panda$core$String* inclusive2453;
    panda$core$String* loopStart2463;
    panda$core$String* loopBody2465;
    panda$core$String* loopEnd2467;
    panda$core$String* loopTest2469;
    panda$core$String* forwardEntry2473;
    panda$core$String* backwardEntry2475;
    panda$core$String* signPrefix2477;
    panda$core$String* forwardEntryInclusive2489;
    panda$core$String* forwardEntryExclusive2491;
    panda$core$String* loopInc2534;
    panda$core$String* forwardDelta2536;
    panda$core$String* forwardInclusiveLabel2552;
    panda$core$String* forwardExclusiveLabel2554;
    panda$core$String* forwardExclusiveTest2580;
    panda$core$String* inc2593;
    panda$core$Bit $tmp2363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp2363.value);
    panda$core$Int64 $tmp2364 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp2365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2364, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2365.value);
    panda$core$Object* $tmp2367 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2366 = ((org$pandalanguage$pandac$IRNode*) $tmp2367);
    panda$core$Object* $tmp2368 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2368)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2369.value);
    panda$core$Object* $tmp2370 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2371 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp2370)->type->subtypes);
    panda$core$Bit $tmp2372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2371, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2372.value);
    panda$core$Object* $tmp2373 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2374 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2373)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2376 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2374))->name, &$s2375);
    PANDA_ASSERT($tmp2376.value);
    panda$core$Object* $tmp2378 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2379 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2378), p_out);
    range2377 = $tmp2379;
    panda$core$Object* $tmp2381 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2380 = ((org$pandalanguage$pandac$IRNode*) $tmp2381);
    panda$core$Object* $tmp2383 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2384 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2383)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2382 = ((org$pandalanguage$pandac$Type*) $tmp2384);
    panda$core$String* $tmp2386 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2382);
    llt2385 = $tmp2386;
    panda$core$Bit $tmp2388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2382->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2388.value) {
    {
        panda$core$Int64 $tmp2389 = panda$collections$Array$get_count$R$panda$core$Int64(t2382->subtypes);
        panda$core$Bit $tmp2390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2389, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2390.value);
        panda$core$Object* $tmp2391 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2382->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2392 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2391));
        indexType2387 = $tmp2392;
    }
    }
    else {
    {
        indexType2387 = llt2385;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2394 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2382);
    cl2393 = $tmp2394;
    PANDA_ASSERT(((panda$core$Bit) { cl2393 != NULL }).value);
    panda$collections$ListView* $tmp2395 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2393);
    ITable* $tmp2396 = ((panda$collections$CollectionView*) $tmp2395)->$class->itable;
    while ($tmp2396->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2396 = $tmp2396->next;
    }
    $fn2398 $tmp2397 = $tmp2396->methods[0];
    panda$core$Int64 $tmp2399 = $tmp2397(((panda$collections$CollectionView*) $tmp2395));
    panda$core$Bit $tmp2400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2399, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2400.value);
    panda$collections$ListView* $tmp2402 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2393);
    ITable* $tmp2403 = $tmp2402->$class->itable;
    while ($tmp2403->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2403 = $tmp2403->next;
    }
    $fn2405 $tmp2404 = $tmp2403->methods[0];
    panda$core$Object* $tmp2406 = $tmp2404($tmp2402, ((panda$core$Int64) { 0 }));
    field2401 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2406);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2401);
    panda$core$String* $tmp2408 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2401->type);
    numberType2407 = $tmp2408;
    panda$core$Bit $tmp2409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2366->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2409.value);
    panda$core$String* $tmp2411 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2366->payload));
    index2410 = $tmp2411;
    panda$core$String* $tmp2413 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2412 = $tmp2413;
    panda$core$String* $tmp2415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2414, numberType2407);
    panda$core$String* $tmp2417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2415, &$s2416);
    panda$core$String* $tmp2418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2417, start2412);
    panda$core$String* $tmp2420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2418, &$s2419);
    panda$core$String* $tmp2421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2420, range2377);
    panda$core$String* $tmp2423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2421, &$s2422);
    (($fn2424) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2423);
    panda$core$String* $tmp2426 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2425 = $tmp2426;
    org$pandalanguage$pandac$Type* $tmp2428 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2393);
    panda$core$String* $tmp2429 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2428);
    panda$core$String* $tmp2430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2427, $tmp2429);
    panda$core$String* $tmp2432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2430, &$s2431);
    panda$core$String* $tmp2433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2432, index2410);
    panda$core$String* $tmp2435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2433, &$s2434);
    panda$core$String* $tmp2436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2435, start2412);
    panda$core$String* $tmp2438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2436, &$s2437);
    (($fn2439) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2438);
    panda$core$String* $tmp2441 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2440 = $tmp2441;
    panda$core$String* $tmp2443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2442, numberType2407);
    panda$core$String* $tmp2445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2443, &$s2444);
    panda$core$String* $tmp2446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2445, end2440);
    panda$core$String* $tmp2448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2446, &$s2447);
    panda$core$String* $tmp2449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2448, range2377);
    panda$core$String* $tmp2451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2449, &$s2450);
    (($fn2452) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2451);
    panda$core$String* $tmp2454 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2453 = $tmp2454;
    panda$core$String* $tmp2456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2455, inclusive2453);
    panda$core$String* $tmp2458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2456, &$s2457);
    panda$core$String* $tmp2459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2458, range2377);
    panda$core$String* $tmp2461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2459, &$s2460);
    (($fn2462) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2461);
    panda$core$String* $tmp2464 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2463 = $tmp2464;
    panda$core$String* $tmp2466 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2465 = $tmp2466;
    panda$core$String* $tmp2468 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2467 = $tmp2468;
    panda$core$String* $tmp2470 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2469 = $tmp2470;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2471 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2471->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2471->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2471, ((panda$core$String*) p_f->payload), loopEnd2467, loopTest2469);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2471));
    panda$core$String* $tmp2474 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2473 = $tmp2474;
    panda$core$String* $tmp2476 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2475 = $tmp2476;
    panda$core$Bit $tmp2479 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2382)->name, &$s2478);
    if ($tmp2479.value) {
    {
        signPrefix2477 = &$s2480;
    }
    }
    else {
    {
        panda$core$Bit $tmp2483 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2382)->name, &$s2482);
        bool $tmp2481 = $tmp2483.value;
        if ($tmp2481) goto $l2484;
        panda$core$Bit $tmp2486 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2382)->name, &$s2485);
        $tmp2481 = $tmp2486.value;
        $l2484:;
        panda$core$Bit $tmp2487 = { $tmp2481 };
        PANDA_ASSERT($tmp2487.value);
        signPrefix2477 = &$s2488;
    }
    }
    panda$core$String* $tmp2490 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2489 = $tmp2490;
    panda$core$String* $tmp2492 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2491 = $tmp2492;
    panda$core$String* $tmp2494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2493, inclusive2453);
    panda$core$String* $tmp2496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2494, &$s2495);
    panda$core$String* $tmp2497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2496, forwardEntryInclusive2489);
    panda$core$String* $tmp2499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2497, &$s2498);
    panda$core$String* $tmp2501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2500, forwardEntryExclusive2491);
    panda$core$String* $tmp2503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2501, &$s2502);
    panda$core$String* $tmp2504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2499, $tmp2503);
    (($fn2505) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2504);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2489, p_out);
    panda$core$String* $tmp2507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2506, start2412);
    panda$core$String* $tmp2509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2507, &$s2508);
    panda$core$String* $tmp2510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2509, end2440);
    panda$core$String* $tmp2512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2510, &$s2511);
    panda$core$String* $tmp2513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2512, loopStart2463);
    panda$core$String* $tmp2515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2513, &$s2514);
    panda$core$String* $tmp2516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2515, loopEnd2467);
    panda$core$String* $tmp2518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2516, &$s2517);
    (($fn2519) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2518);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2491, p_out);
    panda$core$String* $tmp2521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2520, start2412);
    panda$core$String* $tmp2523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2521, &$s2522);
    panda$core$String* $tmp2524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2523, end2440);
    panda$core$String* $tmp2526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2524, &$s2525);
    panda$core$String* $tmp2527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2526, loopStart2463);
    panda$core$String* $tmp2529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2527, &$s2528);
    panda$core$String* $tmp2530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2529, loopEnd2467);
    panda$core$String* $tmp2532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2530, &$s2531);
    (($fn2533) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2532);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2463, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2380, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2469, p_out);
    panda$core$String* $tmp2535 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2534 = $tmp2535;
    panda$core$String* $tmp2537 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2536 = $tmp2537;
    panda$core$String* $tmp2539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2538, numberType2407);
    panda$core$String* $tmp2541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2539, &$s2540);
    panda$core$String* $tmp2542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2541, forwardDelta2536);
    panda$core$String* $tmp2544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2542, &$s2543);
    panda$core$String* $tmp2545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2544, end2440);
    panda$core$String* $tmp2547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2545, &$s2546);
    panda$core$String* $tmp2548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2547, index2410);
    panda$core$String* $tmp2550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2548, &$s2549);
    (($fn2551) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2550);
    panda$core$String* $tmp2553 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2552 = $tmp2553;
    panda$core$String* $tmp2555 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2554 = $tmp2555;
    panda$core$String* $tmp2557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2556, inclusive2453);
    panda$core$String* $tmp2559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2557, &$s2558);
    panda$core$String* $tmp2560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2559, forwardInclusiveLabel2552);
    panda$core$String* $tmp2562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2560, &$s2561);
    panda$core$String* $tmp2564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2563, forwardExclusiveLabel2554);
    panda$core$String* $tmp2566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2564, &$s2565);
    panda$core$String* $tmp2567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2562, $tmp2566);
    (($fn2568) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2567);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2552, p_out);
    panda$core$String* $tmp2570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2569, forwardDelta2536);
    panda$core$String* $tmp2572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2570, &$s2571);
    panda$core$String* $tmp2573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2572, loopInc2534);
    panda$core$String* $tmp2575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2573, &$s2574);
    panda$core$String* $tmp2576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2575, loopEnd2467);
    panda$core$String* $tmp2578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2576, &$s2577);
    (($fn2579) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2578);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2554, p_out);
    panda$core$String* $tmp2581 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2580 = $tmp2581;
    panda$core$String* $tmp2583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2582, forwardDelta2536);
    panda$core$String* $tmp2585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2583, &$s2584);
    panda$core$String* $tmp2586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2585, loopInc2534);
    panda$core$String* $tmp2588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2586, &$s2587);
    panda$core$String* $tmp2589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2588, loopEnd2467);
    panda$core$String* $tmp2591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2589, &$s2590);
    (($fn2592) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2591);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2534, p_out);
    panda$core$String* $tmp2594 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc2593 = $tmp2594;
    panda$core$String* $tmp2596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2595, index2410);
    panda$core$String* $tmp2598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2596, &$s2597);
    (($fn2599) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2598);
    panda$core$String* $tmp2601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2600, loopStart2463);
    panda$core$String* $tmp2603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2601, &$s2602);
    (($fn2604) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2603);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2467, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2608;
    panda$core$String* range2619;
    org$pandalanguage$pandac$IRNode* block2622;
    org$pandalanguage$pandac$Type* t2624;
    panda$core$String* llt2627;
    panda$core$String* indexType2629;
    org$pandalanguage$pandac$ClassDecl* cl2635;
    org$pandalanguage$pandac$FieldDecl* field2643;
    panda$core$String* numberType2649;
    panda$core$String* index2652;
    panda$core$String* start2654;
    panda$core$String* indexValuePtr2667;
    panda$core$String* end2682;
    panda$core$String* step2695;
    panda$core$String* inclusive2708;
    panda$core$String* loopStart2718;
    panda$core$String* loopBody2720;
    panda$core$String* loopEnd2722;
    panda$core$String* loopTest2724;
    panda$core$String* forwardEntry2728;
    panda$core$String* backwardEntry2730;
    panda$core$String* signPrefix2732;
    panda$core$String* direction2744;
    panda$core$String* forwardEntryInclusive2768;
    panda$core$String* forwardEntryExclusive2770;
    panda$core$String* backwardEntryInclusive2813;
    panda$core$String* backwardEntryExclusive2815;
    panda$core$String* backwardEntryExclusiveTest2844;
    panda$core$String* loopInc2860;
    panda$core$String* forwardLabel2862;
    panda$core$String* backwardLabel2864;
    panda$core$String* forwardDelta2877;
    panda$core$String* forwardInclusiveLabel2893;
    panda$core$String* forwardExclusiveLabel2895;
    panda$core$String* forwardExclusiveTest2924;
    panda$core$String* backwardDelta2940;
    panda$core$String* backwardInclusiveLabel2956;
    panda$core$String* backwardExclusiveLabel2958;
    panda$core$String* inc3001;
    panda$core$Bit $tmp2605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp2605.value);
    panda$core$Int64 $tmp2606 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp2607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2606, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2607.value);
    panda$core$Object* $tmp2609 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2608 = ((org$pandalanguage$pandac$IRNode*) $tmp2609);
    panda$core$Object* $tmp2610 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2610)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2611.value);
    panda$core$Object* $tmp2612 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2613 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp2612)->type->subtypes);
    panda$core$Bit $tmp2614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2613, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2614.value);
    panda$core$Object* $tmp2615 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2616 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2615)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2618 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2616))->name, &$s2617);
    PANDA_ASSERT($tmp2618.value);
    panda$core$Object* $tmp2620 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2621 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2620), p_out);
    range2619 = $tmp2621;
    panda$core$Object* $tmp2623 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2622 = ((org$pandalanguage$pandac$IRNode*) $tmp2623);
    panda$core$Object* $tmp2625 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2626 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2625)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2624 = ((org$pandalanguage$pandac$Type*) $tmp2626);
    panda$core$String* $tmp2628 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2624);
    llt2627 = $tmp2628;
    panda$core$Bit $tmp2630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2624->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2630.value) {
    {
        panda$core$Int64 $tmp2631 = panda$collections$Array$get_count$R$panda$core$Int64(t2624->subtypes);
        panda$core$Bit $tmp2632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2631, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2632.value);
        panda$core$Object* $tmp2633 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2624->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2634 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2633));
        indexType2629 = $tmp2634;
    }
    }
    else {
    {
        indexType2629 = llt2627;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2636 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2624);
    cl2635 = $tmp2636;
    PANDA_ASSERT(((panda$core$Bit) { cl2635 != NULL }).value);
    panda$collections$ListView* $tmp2637 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2635);
    ITable* $tmp2638 = ((panda$collections$CollectionView*) $tmp2637)->$class->itable;
    while ($tmp2638->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2638 = $tmp2638->next;
    }
    $fn2640 $tmp2639 = $tmp2638->methods[0];
    panda$core$Int64 $tmp2641 = $tmp2639(((panda$collections$CollectionView*) $tmp2637));
    panda$core$Bit $tmp2642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2641, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2642.value);
    panda$collections$ListView* $tmp2644 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2635);
    ITable* $tmp2645 = $tmp2644->$class->itable;
    while ($tmp2645->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2645 = $tmp2645->next;
    }
    $fn2647 $tmp2646 = $tmp2645->methods[0];
    panda$core$Object* $tmp2648 = $tmp2646($tmp2644, ((panda$core$Int64) { 0 }));
    field2643 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2648);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2643);
    panda$core$String* $tmp2650 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2643->type);
    numberType2649 = $tmp2650;
    panda$core$Bit $tmp2651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2608->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2651.value);
    panda$core$String* $tmp2653 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2608->payload));
    index2652 = $tmp2653;
    panda$core$String* $tmp2655 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2654 = $tmp2655;
    panda$core$String* $tmp2657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2656, numberType2649);
    panda$core$String* $tmp2659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2657, &$s2658);
    panda$core$String* $tmp2660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2659, start2654);
    panda$core$String* $tmp2662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2660, &$s2661);
    panda$core$String* $tmp2663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2662, range2619);
    panda$core$String* $tmp2665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2663, &$s2664);
    (($fn2666) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2665);
    panda$core$String* $tmp2668 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2667 = $tmp2668;
    org$pandalanguage$pandac$Type* $tmp2670 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2635);
    panda$core$String* $tmp2671 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2670);
    panda$core$String* $tmp2672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2669, $tmp2671);
    panda$core$String* $tmp2674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2672, &$s2673);
    panda$core$String* $tmp2675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2674, index2652);
    panda$core$String* $tmp2677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2675, &$s2676);
    panda$core$String* $tmp2678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2677, start2654);
    panda$core$String* $tmp2680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2678, &$s2679);
    (($fn2681) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2680);
    panda$core$String* $tmp2683 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2682 = $tmp2683;
    panda$core$String* $tmp2685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2684, numberType2649);
    panda$core$String* $tmp2687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2685, &$s2686);
    panda$core$String* $tmp2688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2687, end2682);
    panda$core$String* $tmp2690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2688, &$s2689);
    panda$core$String* $tmp2691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2690, range2619);
    panda$core$String* $tmp2693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2691, &$s2692);
    (($fn2694) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2693);
    panda$core$String* $tmp2696 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    step2695 = $tmp2696;
    panda$core$String* $tmp2698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2697, numberType2649);
    panda$core$String* $tmp2700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2698, &$s2699);
    panda$core$String* $tmp2701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2700, step2695);
    panda$core$String* $tmp2703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2701, &$s2702);
    panda$core$String* $tmp2704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2703, range2619);
    panda$core$String* $tmp2706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2704, &$s2705);
    (($fn2707) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2706);
    panda$core$String* $tmp2709 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2708 = $tmp2709;
    panda$core$String* $tmp2711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2710, inclusive2708);
    panda$core$String* $tmp2713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2711, &$s2712);
    panda$core$String* $tmp2714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2713, range2619);
    panda$core$String* $tmp2716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2714, &$s2715);
    (($fn2717) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2716);
    panda$core$String* $tmp2719 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2718 = $tmp2719;
    panda$core$String* $tmp2721 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2720 = $tmp2721;
    panda$core$String* $tmp2723 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2722 = $tmp2723;
    panda$core$String* $tmp2725 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2724 = $tmp2725;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2726 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2726->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2726->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2726, ((panda$core$String*) p_f->payload), loopEnd2722, loopTest2724);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2726));
    panda$core$String* $tmp2729 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2728 = $tmp2729;
    panda$core$String* $tmp2731 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2730 = $tmp2731;
    panda$core$Bit $tmp2734 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2624)->name, &$s2733);
    if ($tmp2734.value) {
    {
        signPrefix2732 = &$s2735;
    }
    }
    else {
    {
        panda$core$Bit $tmp2738 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2624)->name, &$s2737);
        bool $tmp2736 = $tmp2738.value;
        if ($tmp2736) goto $l2739;
        panda$core$Bit $tmp2741 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2624)->name, &$s2740);
        $tmp2736 = $tmp2741.value;
        $l2739:;
        panda$core$Bit $tmp2742 = { $tmp2736 };
        PANDA_ASSERT($tmp2742.value);
        signPrefix2732 = &$s2743;
    }
    }
    panda$core$Bit $tmp2746 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix2732, &$s2745);
    if ($tmp2746.value) {
    {
        panda$core$String* $tmp2747 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
        direction2744 = $tmp2747;
        panda$core$String* $tmp2749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2748, direction2744);
        panda$core$String* $tmp2751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2749, &$s2750);
        panda$core$String* $tmp2752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2751, step2695);
        panda$core$String* $tmp2754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2752, &$s2753);
        (($fn2755) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2754);
    }
    }
    else {
    {
        direction2744 = &$s2756;
    }
    }
    panda$core$String* $tmp2758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2757, direction2744);
    panda$core$String* $tmp2760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2758, &$s2759);
    panda$core$String* $tmp2761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2760, forwardEntry2728);
    panda$core$String* $tmp2763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2761, &$s2762);
    panda$core$String* $tmp2764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2763, backwardEntry2730);
    panda$core$String* $tmp2766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2764, &$s2765);
    (($fn2767) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2766);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry2728, p_out);
    panda$core$String* $tmp2769 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2768 = $tmp2769;
    panda$core$String* $tmp2771 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2770 = $tmp2771;
    panda$core$String* $tmp2773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2772, inclusive2708);
    panda$core$String* $tmp2775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2773, &$s2774);
    panda$core$String* $tmp2776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2775, forwardEntryInclusive2768);
    panda$core$String* $tmp2778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2776, &$s2777);
    panda$core$String* $tmp2780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2779, forwardEntryExclusive2770);
    panda$core$String* $tmp2782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2780, &$s2781);
    panda$core$String* $tmp2783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2778, $tmp2782);
    (($fn2784) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2783);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2768, p_out);
    panda$core$String* $tmp2786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2785, start2654);
    panda$core$String* $tmp2788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2786, &$s2787);
    panda$core$String* $tmp2789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2788, end2682);
    panda$core$String* $tmp2791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2789, &$s2790);
    panda$core$String* $tmp2792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2791, loopStart2718);
    panda$core$String* $tmp2794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2792, &$s2793);
    panda$core$String* $tmp2795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2794, loopEnd2722);
    panda$core$String* $tmp2797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2795, &$s2796);
    (($fn2798) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2797);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2770, p_out);
    panda$core$String* $tmp2800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2799, start2654);
    panda$core$String* $tmp2802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2800, &$s2801);
    panda$core$String* $tmp2803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2802, end2682);
    panda$core$String* $tmp2805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2803, &$s2804);
    panda$core$String* $tmp2806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2805, loopStart2718);
    panda$core$String* $tmp2808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2806, &$s2807);
    panda$core$String* $tmp2809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2808, loopEnd2722);
    panda$core$String* $tmp2811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2809, &$s2810);
    (($fn2812) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2811);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry2730, p_out);
    panda$core$String* $tmp2814 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive2813 = $tmp2814;
    panda$core$String* $tmp2816 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive2815 = $tmp2816;
    panda$core$String* $tmp2818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2817, inclusive2708);
    panda$core$String* $tmp2820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2818, &$s2819);
    panda$core$String* $tmp2821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2820, backwardEntryInclusive2813);
    panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2821, &$s2822);
    panda$core$String* $tmp2825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2824, backwardEntryExclusive2815);
    panda$core$String* $tmp2827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2825, &$s2826);
    panda$core$String* $tmp2828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2823, $tmp2827);
    (($fn2829) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2828);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive2813, p_out);
    panda$core$String* $tmp2831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2830, start2654);
    panda$core$String* $tmp2833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2831, &$s2832);
    panda$core$String* $tmp2834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2833, end2682);
    panda$core$String* $tmp2836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2834, &$s2835);
    panda$core$String* $tmp2837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2836, loopStart2718);
    panda$core$String* $tmp2839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2837, &$s2838);
    panda$core$String* $tmp2840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2839, loopEnd2722);
    panda$core$String* $tmp2842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2840, &$s2841);
    (($fn2843) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2842);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive2815, p_out);
    panda$core$String* $tmp2845 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest2844 = $tmp2845;
    panda$core$String* $tmp2847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2846, start2654);
    panda$core$String* $tmp2849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2847, &$s2848);
    panda$core$String* $tmp2850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2849, end2682);
    panda$core$String* $tmp2852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2850, &$s2851);
    panda$core$String* $tmp2853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2852, loopStart2718);
    panda$core$String* $tmp2855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2853, &$s2854);
    panda$core$String* $tmp2856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2855, loopEnd2722);
    panda$core$String* $tmp2858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2856, &$s2857);
    (($fn2859) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2858);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2718, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2622, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2724, p_out);
    panda$core$String* $tmp2861 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2860 = $tmp2861;
    panda$core$String* $tmp2863 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel2862 = $tmp2863;
    panda$core$String* $tmp2865 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel2864 = $tmp2865;
    panda$core$String* $tmp2867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2866, direction2744);
    panda$core$String* $tmp2869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2867, &$s2868);
    panda$core$String* $tmp2870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2869, forwardLabel2862);
    panda$core$String* $tmp2872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2870, &$s2871);
    panda$core$String* $tmp2873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2872, backwardLabel2864);
    panda$core$String* $tmp2875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2873, &$s2874);
    (($fn2876) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2875);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel2862, p_out);
    panda$core$String* $tmp2878 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2877 = $tmp2878;
    panda$core$String* $tmp2880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2879, numberType2649);
    panda$core$String* $tmp2882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2880, &$s2881);
    panda$core$String* $tmp2883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2882, forwardDelta2877);
    panda$core$String* $tmp2885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2883, &$s2884);
    panda$core$String* $tmp2886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2885, end2682);
    panda$core$String* $tmp2888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2886, &$s2887);
    panda$core$String* $tmp2889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2888, index2652);
    panda$core$String* $tmp2891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2889, &$s2890);
    (($fn2892) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2891);
    panda$core$String* $tmp2894 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2893 = $tmp2894;
    panda$core$String* $tmp2896 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2895 = $tmp2896;
    panda$core$String* $tmp2898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2897, inclusive2708);
    panda$core$String* $tmp2900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2898, &$s2899);
    panda$core$String* $tmp2901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2900, forwardInclusiveLabel2893);
    panda$core$String* $tmp2903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2901, &$s2902);
    panda$core$String* $tmp2905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2904, forwardExclusiveLabel2895);
    panda$core$String* $tmp2907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2905, &$s2906);
    panda$core$String* $tmp2908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2903, $tmp2907);
    (($fn2909) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2908);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2893, p_out);
    panda$core$String* $tmp2911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2910, forwardDelta2877);
    panda$core$String* $tmp2913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2911, &$s2912);
    panda$core$String* $tmp2914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2913, step2695);
    panda$core$String* $tmp2916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2914, &$s2915);
    panda$core$String* $tmp2917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2916, loopInc2860);
    panda$core$String* $tmp2919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2917, &$s2918);
    panda$core$String* $tmp2920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2919, loopEnd2722);
    panda$core$String* $tmp2922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2920, &$s2921);
    (($fn2923) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2922);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2895, p_out);
    panda$core$String* $tmp2925 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2924 = $tmp2925;
    panda$core$String* $tmp2927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2926, forwardDelta2877);
    panda$core$String* $tmp2929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2927, &$s2928);
    panda$core$String* $tmp2930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2929, step2695);
    panda$core$String* $tmp2932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2930, &$s2931);
    panda$core$String* $tmp2933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2932, loopInc2860);
    panda$core$String* $tmp2935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2933, &$s2934);
    panda$core$String* $tmp2936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2935, loopEnd2722);
    panda$core$String* $tmp2938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2936, &$s2937);
    (($fn2939) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2938);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel2864, p_out);
    panda$core$String* $tmp2941 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta2940 = $tmp2941;
    panda$core$String* $tmp2943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2942, numberType2649);
    panda$core$String* $tmp2945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2943, &$s2944);
    panda$core$String* $tmp2946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2945, backwardDelta2940);
    panda$core$String* $tmp2948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2946, &$s2947);
    panda$core$String* $tmp2949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2948, index2652);
    panda$core$String* $tmp2951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2949, &$s2950);
    panda$core$String* $tmp2952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2951, end2682);
    panda$core$String* $tmp2954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2952, &$s2953);
    (($fn2955) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2954);
    panda$core$String* $tmp2957 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel2956 = $tmp2957;
    panda$core$String* $tmp2959 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel2958 = $tmp2959;
    panda$core$String* $tmp2961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2960, inclusive2708);
    panda$core$String* $tmp2963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2961, &$s2962);
    panda$core$String* $tmp2964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2963, backwardInclusiveLabel2956);
    panda$core$String* $tmp2966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2964, &$s2965);
    panda$core$String* $tmp2968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2967, backwardExclusiveLabel2958);
    panda$core$String* $tmp2970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2968, &$s2969);
    panda$core$String* $tmp2971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2966, $tmp2970);
    (($fn2972) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2971);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel2956, p_out);
    panda$core$String* $tmp2974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2973, backwardDelta2940);
    panda$core$String* $tmp2976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2974, &$s2975);
    panda$core$String* $tmp2977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2976, step2695);
    panda$core$String* $tmp2979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2977, &$s2978);
    panda$core$String* $tmp2980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2979, loopInc2860);
    panda$core$String* $tmp2982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2980, &$s2981);
    panda$core$String* $tmp2983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2982, loopEnd2722);
    panda$core$String* $tmp2985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2983, &$s2984);
    (($fn2986) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2985);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel2958, p_out);
    panda$core$String* $tmp2988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2987, backwardDelta2940);
    panda$core$String* $tmp2990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2988, &$s2989);
    panda$core$String* $tmp2991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2990, step2695);
    panda$core$String* $tmp2993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2991, &$s2992);
    panda$core$String* $tmp2994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2993, loopInc2860);
    panda$core$String* $tmp2996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2994, &$s2995);
    panda$core$String* $tmp2997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2996, loopEnd2722);
    panda$core$String* $tmp2999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2997, &$s2998);
    (($fn3000) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2999);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2860, p_out);
    panda$core$String* $tmp3002 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc3001 = $tmp3002;
    panda$core$String* $tmp3004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3003, index2652);
    panda$core$String* $tmp3006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3004, &$s3005);
    panda$core$String* $tmp3007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3006, step2695);
    panda$core$String* $tmp3009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3007, &$s3008);
    (($fn3010) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3009);
    panda$core$String* $tmp3012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3011, loopStart2718);
    panda$core$String* $tmp3014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3012, &$s3013);
    (($fn3015) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3014);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2722, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    panda$core$Object* $tmp3016 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3017 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3016)->type);
    if ($tmp3017.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp3018 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3019 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3018)->type);
    if ($tmp3019.value) {
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
    panda$core$String* loopStart3026;
    panda$core$String* loopEnd3028;
    panda$core$Bit $tmp3020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp3020.value);
    panda$core$Int64 $tmp3021 = panda$collections$Array$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3022 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3021, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3022.value);
    panda$core$Object* $tmp3023 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3024 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3025 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3023)->type, $tmp3024);
    PANDA_ASSERT($tmp3025.value);
    panda$core$String* $tmp3027 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3026 = $tmp3027;
    panda$core$String* $tmp3029 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3028 = $tmp3029;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3030 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3030->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3030->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3030, ((panda$core$String*) p_w->payload), loopEnd3028, loopStart3026);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3030));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3026, p_out);
    panda$core$Object* $tmp3033 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3034 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3033), p_out);
    panda$core$String* $tmp3035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3032, $tmp3034);
    panda$core$String* $tmp3037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3035, &$s3036);
    panda$core$String* $tmp3038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3037, loopEnd3028);
    panda$core$String* $tmp3040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3038, &$s3039);
    (($fn3041) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3040);
    panda$core$Object* $tmp3042 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3042), p_out);
    panda$core$String* $tmp3044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3043, loopStart3026);
    panda$core$String* $tmp3046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3044, &$s3045);
    (($fn3047) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3046);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3028, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3054;
    panda$core$String* loopEnd3056;
    panda$core$Bit $tmp3048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp3048.value);
    panda$core$Int64 $tmp3049 = panda$collections$Array$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3050 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3049, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3050.value);
    panda$core$Object* $tmp3051 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3052 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3053 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3051)->type, $tmp3052);
    PANDA_ASSERT($tmp3053.value);
    panda$core$String* $tmp3055 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3054 = $tmp3055;
    panda$core$String* $tmp3057 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3056 = $tmp3057;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3058 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3058->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3058->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3058, ((panda$core$String*) p_d->payload), loopEnd3056, loopStart3054);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3058));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3054, p_out);
    panda$core$Object* $tmp3060 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3060), p_out);
    panda$core$Object* $tmp3062 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3063 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3062), p_out);
    panda$core$String* $tmp3064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3061, $tmp3063);
    panda$core$String* $tmp3066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3064, &$s3065);
    panda$core$String* $tmp3067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3066, loopStart3054);
    panda$core$String* $tmp3069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3067, &$s3068);
    (($fn3070) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3069);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3056, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3074;
    panda$core$String* loopEnd3076;
    panda$core$Bit $tmp3071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp3071.value);
    panda$core$Int64 $tmp3072 = panda$collections$Array$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3072, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3073.value);
    panda$core$String* $tmp3075 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3074 = $tmp3075;
    panda$core$String* $tmp3077 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3076 = $tmp3077;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3078 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3078->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3078->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3078, ((panda$core$String*) p_l->payload), loopEnd3076, loopStart3074);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3078));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3074, p_out);
    (($fn3081) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3080);
    panda$core$Object* $tmp3082 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3082), p_out);
    (($fn3084) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3083);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3076, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v3085;
    switch (p_target->kind.value) {
        case 1016:
        {
            v3085 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp3087 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v3085->type);
            panda$core$String* $tmp3088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3086, $tmp3087);
            panda$core$String* $tmp3090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3088, &$s3089);
            panda$core$String* $tmp3091 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3085);
            panda$core$String* $tmp3092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3090, $tmp3091);
            panda$core$String* $tmp3094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3092, &$s3093);
            (($fn3095) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3094);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp3097 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3085);
                panda$core$String* $tmp3098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3096, $tmp3097);
                panda$core$String* $tmp3100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3098, &$s3099);
                panda$core$String* $tmp3101 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp3102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3100, $tmp3101);
                panda$core$String* $tmp3104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3102, &$s3103);
                (($fn3105) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3104);
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
    panda$collections$Iterator* decl$Iter3119;
    org$pandalanguage$pandac$IRNode* decl3131;
    panda$core$Bit $tmp3109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp3108 = $tmp3109.value;
    if ($tmp3108) goto $l3110;
    panda$core$Bit $tmp3111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp3108 = $tmp3111.value;
    $l3110:;
    panda$core$Bit $tmp3112 = { $tmp3108 };
    bool $tmp3107 = $tmp3112.value;
    if ($tmp3107) goto $l3113;
    panda$core$Bit $tmp3114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp3107 = $tmp3114.value;
    $l3113:;
    panda$core$Bit $tmp3115 = { $tmp3107 };
    bool $tmp3106 = $tmp3115.value;
    if ($tmp3106) goto $l3116;
    panda$core$Bit $tmp3117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp3106 = $tmp3117.value;
    $l3116:;
    panda$core$Bit $tmp3118 = { $tmp3106 };
    PANDA_ASSERT($tmp3118.value);
    {
        ITable* $tmp3120 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3120->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3120 = $tmp3120->next;
        }
        $fn3122 $tmp3121 = $tmp3120->methods[0];
        panda$collections$Iterator* $tmp3123 = $tmp3121(((panda$collections$Iterable*) p_v->children));
        decl$Iter3119 = $tmp3123;
        $l3124:;
        ITable* $tmp3126 = decl$Iter3119->$class->itable;
        while ($tmp3126->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3126 = $tmp3126->next;
        }
        $fn3128 $tmp3127 = $tmp3126->methods[0];
        panda$core$Bit $tmp3129 = $tmp3127(decl$Iter3119);
        panda$core$Bit $tmp3130 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3129);
        if (!$tmp3130.value) goto $l3125;
        {
            ITable* $tmp3132 = decl$Iter3119->$class->itable;
            while ($tmp3132->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3132 = $tmp3132->next;
            }
            $fn3134 $tmp3133 = $tmp3132->methods[1];
            panda$core$Object* $tmp3135 = $tmp3133(decl$Iter3119);
            decl3131 = ((org$pandalanguage$pandac$IRNode*) $tmp3135);
            panda$core$Bit $tmp3136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl3131->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp3136.value);
            panda$core$Int64 $tmp3137 = panda$collections$Array$get_count$R$panda$core$Int64(decl3131->children);
            panda$core$Bit $tmp3138 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3137, ((panda$core$Int64) { 1 }));
            if ($tmp3138.value) {
            {
                panda$core$Object* $tmp3139 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3131->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp3140 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3131->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3139), ((org$pandalanguage$pandac$IRNode*) $tmp3140), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp3141 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3131->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3141), NULL, p_out);
            }
            }
        }
        goto $l3124;
        $l3125:;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3145;
    panda$core$String* result3155;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp3142 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp3143 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp3142, p_out);
            return $tmp3143;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp3144 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp3144;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp3146 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3147 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3146), p_out);
            base3145 = $tmp3147;
            panda$core$String* $tmp3149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3148, base3145);
            panda$core$String* $tmp3151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3149, &$s3150);
            panda$core$String* $tmp3152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3151, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name);
            panda$core$String* $tmp3154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3152, &$s3153);
            return $tmp3154;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp3156 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3157 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3156), p_out);
            result3155 = $tmp3157;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) result3155));
            return result3155;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue3161;
    panda$core$String* value3164;
    panda$core$String* t3165;
    panda$core$Int64 op3168;
    panda$core$String* right3170;
    panda$core$Bit $tmp3158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp3158.value);
    panda$core$Int64 $tmp3159 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3159, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3160.value);
    panda$core$Object* $tmp3162 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3163 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3162), p_out);
    lvalue3161 = $tmp3163;
    panda$core$Object* $tmp3166 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3167 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3166)->type);
    t3165 = $tmp3167;
    op3168 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp3169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op3168, ((panda$core$Int64) { 73 }));
    if ($tmp3169.value) {
    {
        panda$core$Object* $tmp3171 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp3172 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3171), p_out);
        right3170 = $tmp3172;
        value3164 = right3170;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp3174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3173, lvalue3161);
    panda$core$String* $tmp3176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3174, &$s3175);
    panda$core$String* $tmp3177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3176, value3164);
    panda$core$String* $tmp3179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3177, &$s3178);
    (($fn3180) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3179);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $tmp3181 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3181, ((panda$core$Int64) { 1 }));
    if ($tmp3182.value) {
    {
        panda$core$Object* $tmp3184 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3185 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3184), p_out);
        panda$core$String* $tmp3186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3183, $tmp3185);
        panda$core$String* $tmp3188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3186, &$s3187);
        (($fn3189) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3188);
    }
    }
    else {
    {
        panda$core$Int64 $tmp3190 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp3191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3190, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp3191.value);
        (($fn3193) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3192);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3197;
    panda$core$Int64 $tmp3194 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp3195 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3194, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3195.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp3196 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3196);
    }
    }
    panda$core$Int64 $tmp3198 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3197, ((panda$core$Int64) { 0 }), $tmp3198, ((panda$core$Bit) { false }));
    int64_t $tmp3200 = $tmp3197.min.value;
    panda$core$Int64 i3199 = { $tmp3200 };
    int64_t $tmp3202 = $tmp3197.max.value;
    bool $tmp3203 = $tmp3197.inclusive.value;
    if ($tmp3203) goto $l3210; else goto $l3211;
    $l3210:;
    if ($tmp3200 <= $tmp3202) goto $l3204; else goto $l3206;
    $l3211:;
    if ($tmp3200 < $tmp3202) goto $l3204; else goto $l3206;
    $l3204:;
    {
        panda$core$Object* $tmp3213 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3199);
        bool $tmp3212 = ((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3213)->loopLabel != NULL }).value;
        if (!$tmp3212) goto $l3214;
        panda$core$Object* $tmp3215 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3199);
        panda$core$Bit $tmp3216 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3215)->loopLabel, p_name);
        $tmp3212 = $tmp3216.value;
        $l3214:;
        panda$core$Bit $tmp3217 = { $tmp3212 };
        if ($tmp3217.value) {
        {
            panda$core$Object* $tmp3218 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3199);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3218);
        }
        }
    }
    $l3207:;
    int64_t $tmp3220 = $tmp3202 - i3199.value;
    if ($tmp3203) goto $l3221; else goto $l3222;
    $l3221:;
    if ($tmp3220 >= 1) goto $l3219; else goto $l3206;
    $l3222:;
    if ($tmp3220 > 1) goto $l3219; else goto $l3206;
    $l3219:;
    i3199.value += 1;
    goto $l3204;
    $l3206:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3225;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3226 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc3225 = $tmp3226;
    panda$core$String* $tmp3228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3227, desc3225->breakLabel);
    panda$core$String* $tmp3230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3228, &$s3229);
    (($fn3231) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3230);
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3232;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3233 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc3232 = $tmp3233;
    panda$core$String* $tmp3235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3234, desc3232->continueLabel);
    panda$core$String* $tmp3237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3235, &$s3236);
    (($fn3238) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3237);
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp3239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp3239.value);
    panda$core$Int64 $tmp3241 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3241, ((panda$core$Int64) { 1 }));
    bool $tmp3240 = $tmp3242.value;
    if ($tmp3240) goto $l3243;
    panda$core$Int64 $tmp3244 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3244, ((panda$core$Int64) { 2 }));
    $tmp3240 = $tmp3245.value;
    $l3243:;
    panda$core$Bit $tmp3246 = { $tmp3240 };
    PANDA_ASSERT($tmp3246.value);
    panda$core$Object* $tmp3248 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3249 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3248), p_out);
    panda$core$String* $tmp3250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3247, $tmp3249);
    panda$core$String* $tmp3252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3250, &$s3251);
    (($fn3253) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3252);
}
void org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3262;
    org$pandalanguage$pandac$IRNode* w3277;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3280;
    panda$core$Object* $tmp3255 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3256 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3255), p_out);
    panda$core$String* $tmp3257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3254, $tmp3256);
    panda$core$String* $tmp3259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3257, &$s3258);
    (($fn3260) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3259);
    panda$core$Int64 $tmp3261 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3261;
    panda$core$Int64 $tmp3263 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3262, ((panda$core$Int64) { 1 }), $tmp3263, ((panda$core$Bit) { false }));
    int64_t $tmp3265 = $tmp3262.min.value;
    panda$core$Int64 i3264 = { $tmp3265 };
    int64_t $tmp3267 = $tmp3262.max.value;
    bool $tmp3268 = $tmp3262.inclusive.value;
    if ($tmp3268) goto $l3275; else goto $l3276;
    $l3275:;
    if ($tmp3265 <= $tmp3267) goto $l3269; else goto $l3271;
    $l3276:;
    if ($tmp3265 < $tmp3267) goto $l3269; else goto $l3271;
    $l3269:;
    {
        panda$core$Object* $tmp3278 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i3264);
        w3277 = ((org$pandalanguage$pandac$IRNode*) $tmp3278);
        panda$core$Bit $tmp3279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3277->kind, ((panda$core$Int64) { 1042 }));
        if ($tmp3279.value) {
        {
            panda$core$Int64 $tmp3281 = panda$collections$Array$get_count$R$panda$core$Int64(w3277->children);
            panda$core$Int64 $tmp3282 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3281, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3280, ((panda$core$Int64) { 0 }), $tmp3282, ((panda$core$Bit) { false }));
            int64_t $tmp3284 = $tmp3280.min.value;
            panda$core$Int64 j3283 = { $tmp3284 };
            int64_t $tmp3286 = $tmp3280.max.value;
            bool $tmp3287 = $tmp3280.inclusive.value;
            if ($tmp3287) goto $l3294; else goto $l3295;
            $l3294:;
            if ($tmp3284 <= $tmp3286) goto $l3288; else goto $l3290;
            $l3295:;
            if ($tmp3284 < $tmp3286) goto $l3288; else goto $l3290;
            $l3288:;
            {
                panda$core$Object* $tmp3297 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w3277->children, j3283);
                panda$core$UInt64 $tmp3298 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3297));
                panda$core$String* $tmp3299 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3296, ((panda$core$Object*) wrap_panda$core$UInt64($tmp3298)));
                panda$core$String* $tmp3301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3299, &$s3300);
                (($fn3302) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3301);
            }
            $l3291:;
            int64_t $tmp3304 = $tmp3286 - j3283.value;
            if ($tmp3287) goto $l3305; else goto $l3306;
            $l3305:;
            if ($tmp3304 >= 1) goto $l3303; else goto $l3290;
            $l3306:;
            if ($tmp3304 > 1) goto $l3303; else goto $l3290;
            $l3303:;
            j3283.value += 1;
            goto $l3288;
            $l3290:;
            panda$core$Int64 $tmp3309 = panda$collections$Array$get_count$R$panda$core$Int64(w3277->children);
            panda$core$Int64 $tmp3310 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3309, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp3311 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w3277->children, $tmp3310);
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3311), p_out);
            (($fn3313) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3312);
        }
        }
        else {
        {
            panda$core$Bit $tmp3314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3277->kind, ((panda$core$Int64) { 1043 }));
            PANDA_ASSERT($tmp3314.value);
            panda$core$Int64 $tmp3315 = panda$collections$Array$get_count$R$panda$core$Int64(w3277->children);
            panda$core$Bit $tmp3316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3315, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp3316.value);
            (($fn3318) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3317);
            panda$core$Object* $tmp3319 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w3277->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3319), p_out);
        }
        }
    }
    $l3272:;
    int64_t $tmp3321 = $tmp3267 - i3264.value;
    if ($tmp3268) goto $l3322; else goto $l3323;
    $l3322:;
    if ($tmp3321 >= 1) goto $l3320; else goto $l3271;
    $l3323:;
    if ($tmp3321 > 1) goto $l3320; else goto $l3271;
    $l3320:;
    i3264.value += 1;
    goto $l3269;
    $l3271:;
    panda$core$Int64 $tmp3326 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3326;
    (($fn3328) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3327);
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
    panda$core$String* result3329;
    org$pandalanguage$pandac$Type* $tmp3330 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp3331 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3330);
    result3329 = $tmp3331;
    panda$core$Bit $tmp3333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp3332 = $tmp3333.value;
    if (!$tmp3332) goto $l3334;
    panda$core$Bit $tmp3336 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result3329, &$s3335);
    panda$core$Bit $tmp3337 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3336);
    $tmp3332 = $tmp3337.value;
    $l3334:;
    panda$core$Bit $tmp3338 = { $tmp3332 };
    if ($tmp3338.value) {
    {
        panda$core$String* $tmp3340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3329, &$s3339);
        return $tmp3340;
    }
    }
    return result3329;
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator3354;
    panda$collections$Iterator* p$Iter3365;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3377;
    panda$io$MemoryOutputStream* bodyBuffer3400;
    panda$io$IndentedOutputStream* indentedBody3403;
    panda$collections$Iterator* s$Iter3406;
    org$pandalanguage$pandac$IRNode* s3418;
    panda$core$Object* $tmp3341 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3341)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s3342;
    (($fn3343) self->methodHeaderBuffer->$class->vtable[20])(self->methodHeaderBuffer);
    panda$core$String* $tmp3345 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp3346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3344, $tmp3345);
    panda$core$String* $tmp3348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3346, &$s3347);
    panda$core$String* $tmp3349 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp3350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3348, $tmp3349);
    panda$core$String* $tmp3352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3350, &$s3351);
    (($fn3353) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3352);
    separator3354 = &$s3355;
    panda$core$Bit $tmp3356 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp3357 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3356);
    if ($tmp3357.value) {
    {
        panda$core$String* $tmp3359 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp3360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3358, $tmp3359);
        panda$core$String* $tmp3362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3360, &$s3361);
        (($fn3363) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3362);
        separator3354 = &$s3364;
    }
    }
    {
        ITable* $tmp3366 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3366->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3366 = $tmp3366->next;
        }
        $fn3368 $tmp3367 = $tmp3366->methods[0];
        panda$collections$Iterator* $tmp3369 = $tmp3367(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3365 = $tmp3369;
        $l3370:;
        ITable* $tmp3372 = p$Iter3365->$class->itable;
        while ($tmp3372->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3372 = $tmp3372->next;
        }
        $fn3374 $tmp3373 = $tmp3372->methods[0];
        panda$core$Bit $tmp3375 = $tmp3373(p$Iter3365);
        panda$core$Bit $tmp3376 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3375);
        if (!$tmp3376.value) goto $l3371;
        {
            ITable* $tmp3378 = p$Iter3365->$class->itable;
            while ($tmp3378->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3378 = $tmp3378->next;
            }
            $fn3380 $tmp3379 = $tmp3378->methods[1];
            panda$core$Object* $tmp3381 = $tmp3379(p$Iter3365);
            p3377 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3381);
            panda$core$String* $tmp3383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3382, separator3354);
            panda$core$String* $tmp3385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3383, &$s3384);
            panda$core$String* $tmp3386 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p3377->type);
            panda$core$String* $tmp3387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3385, $tmp3386);
            panda$core$String* $tmp3389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3387, &$s3388);
            panda$core$String* $tmp3390 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p3377->name);
            panda$core$String* $tmp3391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3389, $tmp3390);
            panda$core$String* $tmp3393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3391, &$s3392);
            (($fn3394) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3393);
            separator3354 = &$s3395;
        }
        goto $l3370;
        $l3371:;
    }
    (($fn3397) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3396);
    panda$core$Int64 $tmp3398 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3398;
    panda$core$Bit $tmp3399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp3399.value);
    panda$io$MemoryOutputStream* $tmp3401 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp3401->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp3401->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp3401);
    bodyBuffer3400 = $tmp3401;
    panda$io$IndentedOutputStream* $tmp3404 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp3404->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3404->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3404, ((panda$io$OutputStream*) bodyBuffer3400));
    indentedBody3403 = $tmp3404;
    {
        ITable* $tmp3407 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp3407->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3407 = $tmp3407->next;
        }
        $fn3409 $tmp3408 = $tmp3407->methods[0];
        panda$collections$Iterator* $tmp3410 = $tmp3408(((panda$collections$Iterable*) p_body->children));
        s$Iter3406 = $tmp3410;
        $l3411:;
        ITable* $tmp3413 = s$Iter3406->$class->itable;
        while ($tmp3413->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3413 = $tmp3413->next;
        }
        $fn3415 $tmp3414 = $tmp3413->methods[0];
        panda$core$Bit $tmp3416 = $tmp3414(s$Iter3406);
        panda$core$Bit $tmp3417 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3416);
        if (!$tmp3417.value) goto $l3412;
        {
            ITable* $tmp3419 = s$Iter3406->$class->itable;
            while ($tmp3419->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3419 = $tmp3419->next;
            }
            $fn3421 $tmp3420 = $tmp3419->methods[1];
            panda$core$Object* $tmp3422 = $tmp3420(s$Iter3406);
            s3418 = ((org$pandalanguage$pandac$IRNode*) $tmp3422);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s3418, indentedBody3403);
        }
        goto $l3411;
        $l3412:;
    }
    panda$core$String* $tmp3424 = (($fn3423) self->methodHeaderBuffer->$class->vtable[0])(self->methodHeaderBuffer);
    (($fn3425) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3424);
    panda$core$String* $tmp3427 = (($fn3426) bodyBuffer3400->$class->vtable[0])(bodyBuffer3400);
    (($fn3428) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3427);
    panda$core$Int64 $tmp3429 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3429;
    (($fn3431) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3430);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path3438;
    PANDA_ASSERT(((panda$core$Bit) { self->currentClass == NULL }).value);
    self->currentClass = p_cl;
    panda$collections$Set$clear(self->imports);
    (($fn3432) self->strings->$class->vtable[20])(self->strings);
    (($fn3433) self->declarations->$class->vtable[20])(self->declarations);
    (($fn3434) self->types->$class->vtable[20])(self->types);
    (($fn3435) self->methodsBuffer->$class->vtable[20])(self->methodsBuffer);
    (($fn3436) self->wrapperShimsBuffer->$class->vtable[20])(self->wrapperShimsBuffer);
    (($fn3437) self->shimsBuffer->$class->vtable[20])(self->shimsBuffer);
    panda$collections$Set$clear(self->declared);
    panda$collections$Set$clear(self->writtenTypes);
    panda$collections$Set$clear(self->writtenWrappers);
    panda$collections$HashMap$clear(self->classConstants);
    panda$collections$IdentityMap$clear(self->variableNames);
    self->varCount = ((panda$core$Int64) { 0 });
    panda$collections$HashMap$clear(self->reusedValues);
    panda$collections$IdentityMap$clear(self->methodShims);
    panda$io$File* $tmp3440 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self->hCodeGen, p_cl, &$s3439);
    path3438 = $tmp3440;
    panda$io$File* $tmp3441 = panda$io$File$parent$R$panda$io$File$Q(path3438);
    panda$io$File$createDirectories($tmp3441);
    panda$io$IndentedOutputStream* $tmp3442 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp3442->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3442->refCount.value = 1;
    panda$io$OutputStream* $tmp3444 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path3438);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3442, $tmp3444);
    self->out = $tmp3442;
    org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Bit $tmp3445 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp3445.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
        panda$core$String* $tmp3447 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3446, $tmp3447);
        panda$core$String* $tmp3450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3448, &$s3449);
        panda$core$String* $tmp3451 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3450, $tmp3451);
        panda$core$String* $tmp3454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3452, &$s3453);
        panda$core$String* $tmp3456 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3455, $tmp3456);
        panda$core$String* $tmp3459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3457, &$s3458);
        panda$core$String* $tmp3460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3454, $tmp3459);
        (($fn3461) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3460);
        panda$core$String* $tmp3463 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3462, $tmp3463);
        panda$core$String* $tmp3466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3464, &$s3465);
        panda$core$String* $tmp3468 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3467, $tmp3468);
        panda$core$String* $tmp3471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3469, &$s3470);
        org$pandalanguage$pandac$Type* $tmp3472 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$Int64 $tmp3473 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3472);
        panda$core$String* $tmp3474 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3471, ((panda$core$Object*) wrap_panda$core$Int64($tmp3473)));
        panda$core$String* $tmp3476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3474, &$s3475);
        panda$core$String* $tmp3477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3466, $tmp3476);
        (($fn3478) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3477);
        panda$core$String* $tmp3481 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3480, $tmp3481);
        panda$core$String* $tmp3484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3482, &$s3483);
        panda$core$String* $tmp3485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3479, $tmp3484);
        (($fn3486) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3485);
        (($fn3488) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3487);
        (($fn3490) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3489);
        (($fn3492) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3491);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$finish(self);
    self->currentClass = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* self) {
    (($fn3493) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->shimsBuffer));
    (($fn3494) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->wrapperShimsBuffer));
    (($fn3495) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->types));
    (($fn3496) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->strings));
    (($fn3497) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->methodsBuffer));
    (($fn3498) ((panda$core$Object*) self->out->out)->$class->vtable[1])(((panda$core$Object*) self->out->out));
}

