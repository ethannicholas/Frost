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
#include "panda/collections/Key.h"
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
typedef void (*$fn119)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn135)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn167)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn173)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn179)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn209)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn215)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn221)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn309)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn315)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn321)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn351)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn373)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn379)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn385)(panda$collections$Iterator*);
typedef void (*$fn393)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn431)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn438)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn466)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn474)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn519)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn525)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn546)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn554)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn563)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn566)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn571)(panda$io$MemoryOutputStream*);
typedef void (*$fn573)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn599)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn629)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn637)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn677)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn683)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn704)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn712)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn715)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn724)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn730)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn736)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn766)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn793)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn799)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn805)(panda$collections$Iterator*);
typedef void (*$fn813)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn896)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn902)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn908)(panda$collections$Iterator*);
typedef void (*$fn916)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn936)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn994)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1012)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1034)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1074)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1084)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1098)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1114)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1124)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1138)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1161)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1167)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1181)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1229)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1246)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1278)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1286)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1295)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1298)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1305)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1322)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1335)(panda$collections$CollectionView*);
typedef void (*$fn1357)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1496)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1514)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1602)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1610)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1622)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1626)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1632)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1638)(panda$collections$Iterator*);
typedef void (*$fn1647)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1650)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1883)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1909)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1925)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1930)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1956)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1961)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1967)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1973)(panda$collections$Iterator*);
typedef void (*$fn1978)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn1985)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1987)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Object* (*$fn1994)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1996)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Int64 (*$fn2001)(panda$collections$CollectionView*);
typedef void (*$fn2006)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2125)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2130)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2136)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2142)(panda$collections$Iterator*);
typedef void (*$fn2146)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2167)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2196)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2207)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2301)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2312)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2318)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2322)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2328)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2334)(panda$collections$Iterator*);
typedef void (*$fn2336)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2337)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2340)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2359)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2362)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2366)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2369)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2405)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2412)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2431)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2446)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2459)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2469)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2512)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2526)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2540)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2558)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2575)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2586)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2599)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2606)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2611)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2647)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2654)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2673)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2688)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2701)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2714)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2724)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2762)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2774)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2791)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2805)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2819)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2836)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2850)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2866)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2883)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2899)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2916)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2930)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2946)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2962)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2979)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2993)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3007)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3017)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3022)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3048)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3054)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3077)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3088)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3091)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3102)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3112)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3129)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3135)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3141)(panda$collections$Iterator*);
typedef void (*$fn3187)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3196)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3200)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3238)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3245)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3260)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3267)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3309)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3320)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3325)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3335)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3350)(panda$io$MemoryOutputStream*);
typedef void (*$fn3360)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3370)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3375)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3381)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3387)(panda$collections$Iterator*);
typedef void (*$fn3401)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3404)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3416)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3422)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3428)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3430)(panda$io$MemoryOutputStream*);
typedef void (*$fn3432)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3433)(panda$io$MemoryOutputStream*);
typedef void (*$fn3435)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3438)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3439)(panda$io$MemoryOutputStream*);
typedef void (*$fn3440)(panda$io$MemoryOutputStream*);
typedef void (*$fn3441)(panda$io$MemoryOutputStream*);
typedef void (*$fn3442)(panda$io$MemoryOutputStream*);
typedef void (*$fn3443)(panda$io$MemoryOutputStream*);
typedef void (*$fn3444)(panda$io$MemoryOutputStream*);
typedef void (*$fn3468)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3485)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3493)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3495)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3497)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3499)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3500)(panda$io$MemoryOutputStream*);
typedef void (*$fn3502)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3503)(panda$io$MemoryOutputStream*);
typedef panda$core$String* (*$fn3504)(panda$io$MemoryOutputStream*);
typedef void (*$fn3506)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3507)(panda$io$MemoryOutputStream*);
typedef panda$core$String* (*$fn3508)(panda$io$MemoryOutputStream*);
typedef void (*$fn3510)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3511)(panda$io$MemoryOutputStream*);
typedef panda$core$String* (*$fn3512)(panda$io$MemoryOutputStream*);
typedef void (*$fn3514)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3515)(panda$io$MemoryOutputStream*);
typedef panda$core$String* (*$fn3516)(panda$io$MemoryOutputStream*);
typedef void (*$fn3518)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3519)(panda$io$MemoryOutputStream*);
typedef void (*$fn3520)(panda$core$Object*);

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
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6C", 2, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3B", 2, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x38", 1, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x36", 2, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x33\x32", 2, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34", 2, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, NULL };
static panda$core$String $s266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x5F", 2, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7B\x20", 9, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6C\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x6E\x65\x78\x74\x3B\x20", 19, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x6D\x65\x74\x68\x6F\x64\x73\x5B", 14, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, NULL };
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6C\x65\x2A\x29\x20\x26", 11, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5, NULL };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, NULL };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70", 2, NULL };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70", 1, NULL };
static panda$core$String $s498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x72\x65\x73\x75\x6C\x74\x20\x3D\x20", 10, NULL };
static panda$core$String $s520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6C\x66", 5, NULL };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, NULL };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x73\x75\x6C\x74", 6, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6D", 12, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A", 9, NULL };
static panda$core$String $s588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, NULL };
static panda$core$String $s619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, NULL };
static panda$core$String $s678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6C\x66\x2D\x3E\x76\x61\x6C\x75\x65", 12, NULL };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, NULL };
static panda$core$String $s745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5F", 9, NULL };
static panda$core$String $s752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7B\x20", 9, NULL };
static panda$core$String $s761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6C\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B\x20", 21, NULL };
static panda$core$String $s763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x6D\x65\x74\x68\x6F\x64\x73\x5B", 14, NULL };
static panda$core$String $s769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, NULL };
static panda$core$String $s772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x26", 3, NULL };
static panda$core$String $s782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, NULL };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, NULL };
static panda$core$String $s814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6C\x65\x2A\x29\x20\x26", 11, NULL };
static panda$core$String $s816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, NULL };
static panda$core$String $s843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, NULL };
static panda$core$String $s849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, NULL };
static panda$core$String $s855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, NULL };
static panda$core$String $s860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, NULL };
static panda$core$String $s862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, NULL };
static panda$core$String $s872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74\x79\x70\x65\x20", 6, NULL };
static panda$core$String $s877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, NULL };
static panda$core$String $s881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20", 5, NULL };
static panda$core$String $s884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, NULL };
static panda$core$String $s892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, NULL };
static panda$core$String $s913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, NULL };
static panda$core$String $s918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, NULL };
static panda$core$String $s928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, NULL };
static panda$core$String $s929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, NULL };
static panda$core$String $s934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, NULL };
static panda$core$String $s951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, NULL };
static panda$core$String $s958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, NULL };
static panda$core$String $s960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74\x79\x70\x65\x20", 6, NULL };
static panda$core$String $s976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, NULL };
static panda$core$String $s980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20", 5, NULL };
static panda$core$String $s983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, NULL };
static panda$core$String $s990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B", 4, NULL };
static panda$core$String $s1036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x5F", 2, NULL };
static panda$core$String $s1038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, NULL };
static panda$core$String $s1067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, NULL };
static panda$core$String $s1069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, NULL };
static panda$core$String $s1079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s1082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, NULL };
static panda$core$String $s1091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, NULL };
static panda$core$String $s1107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, NULL };
static panda$core$String $s1109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s1119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s1122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, NULL };
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, NULL };
static panda$core$String $s1142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s1143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s1145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s1147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, NULL };
static panda$core$String $s1148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, NULL };
static panda$core$String $s1149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s1150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s1151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, NULL };
static panda$core$String $s1152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, NULL };
static panda$core$String $s1153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, NULL };
static panda$core$String $s1154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s1155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s1156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, NULL };
static panda$core$String $s1157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, NULL };
static panda$core$String $s1160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, NULL };
static panda$core$String $s1162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, NULL };
static panda$core$String $s1188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x3D\x20", 4, NULL };
static panda$core$String $s1191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, NULL };
static panda$core$String $s1197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, NULL };
static panda$core$String $s1199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20", 4, NULL };
static panda$core$String $s1202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, NULL };
static panda$core$String $s1255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, NULL };
static panda$core$String $s1262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x2D\x3E\x76\x74\x61\x62\x6C\x65\x5B", 17, NULL };
static panda$core$String $s1265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x29", 2, NULL };
static panda$core$String $s1271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x54\x61\x62\x6C\x65\x2A\x20", 8, NULL };
static panda$core$String $s1273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x2D\x3E\x69\x74\x61\x62\x6C\x65\x3B", 17, NULL };
static panda$core$String $s1279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28", 7, NULL };
static panda$core$String $s1281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x20\x21\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 33, NULL };
static panda$core$String $s1284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s1288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x6E\x65\x78\x74\x3B", 7, NULL };
static panda$core$String $s1297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s1344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x6D\x65\x74\x68\x6F\x64\x73\x5B", 10, NULL };
static panda$core$String $s1355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B", 2, NULL };
static panda$core$String $s1370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, NULL };
static panda$core$String $s1384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 9, NULL };
static panda$core$String $s1390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2A\x20", 9, NULL };
static panda$core$String $s1393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, NULL };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, NULL };
static panda$core$String $s1402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x2A", 2, NULL };
static panda$core$String $s1404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s1406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s1416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s1421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D", 7, NULL };
static panda$core$String $s1423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, NULL };
static panda$core$String $s1440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x72\x65\x61\x6C\x6C\x6F\x63\x28", 10, NULL };
static panda$core$String $s1446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2A\x20", 9, NULL };
static panda$core$String $s1452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, NULL };
static panda$core$String $s1464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s1466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2B\x20", 3, NULL };
static panda$core$String $s1469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29", 7, NULL };
static panda$core$String $s1473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s1477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s1489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 15, NULL };
static panda$core$String $s1491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s1494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, NULL };
static panda$core$String $s1497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s1507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 15, NULL };
static panda$core$String $s1509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s1512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, NULL };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x26", 2, NULL };
static panda$core$String $s1608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s1640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s1664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s1666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3F\x20", 11, NULL };
static panda$core$String $s1669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x4E\x55\x4C\x4C\x29", 8, NULL };
static panda$core$String $s1672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x77\x72\x61\x70\x5F", 7, NULL };
static panda$core$String $s1680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s1684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, NULL };
static panda$core$String $s1688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s1690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3F\x20", 11, NULL };
static panda$core$String $s1693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x4E\x55\x4C\x4C\x29", 8, NULL };
static panda$core$String $s1708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s1714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, NULL };
static panda$core$String $s1722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, NULL };
static panda$core$String $s1731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2D\x3E\x76\x61\x6C\x75\x65", 8, NULL };
static panda$core$String $s1740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s1742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C\x20\x3F\x20", 11, NULL };
static panda$core$String $s1745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x28", 4, NULL };
static panda$core$String $s1749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x30\x20\x7D\x29", 19, NULL };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20", 4, NULL };
static panda$core$String $s1757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x74\x72\x75\x65\x20\x7D\x29", 9, NULL };
static panda$core$String $s1759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, NULL };
static panda$core$String $s1765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29", 7, NULL };
static panda$core$String $s1770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, NULL };
static panda$core$String $s1776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s1818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8, NULL };
static panda$core$String $s1824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, NULL };
static panda$core$String $s1829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s1861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20", 4, NULL };
static panda$core$String $s1867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, NULL };
static panda$core$String $s1872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, NULL };
static panda$core$String $s1874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s1887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x28", 4, NULL };
static panda$core$String $s1901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, NULL };
static panda$core$String $s1903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x6C\x6C\x6F\x63\x28", 7, NULL };
static panda$core$String $s1906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s1917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 32, NULL };
static panda$core$String $s1923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x3B", 7, NULL };
static panda$core$String $s1926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x72\x65\x66\x43\x6F\x75\x6E\x74\x2E\x76\x61\x6C\x75\x65\x20\x3D\x20\x31\x3B", 21, NULL };
static panda$core$String $s1932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s1940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, NULL };
static panda$core$String $s1941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, NULL };
static panda$core$String $s1945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73", 2, NULL };
static panda$core$String $s1947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20", 25, NULL };
static panda$core$String $s1952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s1954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x63\x6C\x61\x73\x73\x2C\x20\x32\x2C\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x20\x22", 70, NULL };
static panda$core$String $s1977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C\x78", 2, NULL };
static panda$core$String $s1979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, NULL };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, NULL };
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22\x2C\x20", 3, NULL };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x4E\x55\x4C\x4C\x20\x7D\x3B", 9, NULL };
static panda$core$String $s2007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s2009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, NULL };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s2015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x73\x65\x6C\x66\x29", 7, NULL };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, NULL };
static panda$core$String $s2031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, NULL };
static panda$core$String $s2033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8, NULL };
static panda$core$String $s2035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x3D\x20\x4E\x55\x4C\x4C", 8, NULL };
static panda$core$String $s2039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, NULL };
static panda$core$String $s2041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, NULL };
static panda$core$String $s2056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, NULL };
static panda$core$String $s2057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8, NULL };
static panda$core$String $s2061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C", 8, NULL };
static panda$core$String $s2065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, NULL };
static panda$core$String $s2067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, NULL };
static panda$core$String $s2074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s2077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x66\x61\x6C\x73\x65\x20\x7D\x29", 23, NULL };
static panda$core$String $s2079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, NULL };
static panda$core$String $s2089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s2091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, NULL };
static panda$core$String $s2095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, NULL };
static panda$core$String $s2099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, NULL };
static panda$core$String $s2145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s2149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, NULL };
static panda$core$String $s2160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x32\x20", 7, NULL };
static panda$core$String $s2162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, NULL };
static panda$core$String $s2186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s2191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D\x20\x3D\x20", 10, NULL };
static panda$core$String $s2194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, NULL };
static panda$core$String $s2201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x72\x65\x65\x28", 5, NULL };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s2210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s2286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, NULL };
static panda$core$String $s2294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s2307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s2338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s2355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x7B", 9, NULL };
static panda$core$String $s2361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s2365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x6C\x73\x65\x20\x7B", 6, NULL };
static panda$core$String $s2368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s2382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, NULL };
static panda$core$String $s2421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6D\x69\x6E\x2E\x76\x61\x6C\x75\x65\x3B", 11, NULL };
static panda$core$String $s2434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s2444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, NULL };
static panda$core$String $s2449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6D\x61\x78\x2E\x76\x61\x6C\x75\x65\x3B", 11, NULL };
static panda$core$String $s2462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, NULL };
static panda$core$String $s2464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x69\x6E\x63\x6C\x75\x73\x69\x76\x65\x2E\x76\x61\x6C\x75\x65\x3B", 17, NULL };
static panda$core$String $s2485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, NULL };
static panda$core$String $s2487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s2489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, NULL };
static panda$core$String $s2492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, NULL };
static panda$core$String $s2495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, NULL };
static panda$core$String $s2500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x3D\x20", 4, NULL };
static panda$core$String $s2518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x20", 3, NULL };
static panda$core$String $s2532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x20", 3, NULL };
static panda$core$String $s2556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x3B", 7, NULL };
static panda$core$String $s2563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20\x31\x29\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x31\x29\x20\x67\x6F\x74\x6F\x20", 11, NULL };
static panda$core$String $s2594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2B\x3D\x20\x31\x3B", 12, NULL };
static panda$core$String $s2607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, NULL };
static panda$core$String $s2609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, NULL };
static panda$core$String $s2663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x61\x72\x74\x2E\x76\x61\x6C\x75\x65\x3B", 13, NULL };
static panda$core$String $s2676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s2686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, NULL };
static panda$core$String $s2691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x65\x6E\x64\x2E\x76\x61\x6C\x75\x65\x3B", 11, NULL };
static panda$core$String $s2704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x65\x70\x2E\x76\x61\x6C\x75\x65\x3B", 12, NULL };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, NULL };
static panda$core$String $s2719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x69\x6E\x63\x6C\x75\x73\x69\x76\x65\x2E\x76\x61\x6C\x75\x65\x3B", 17, NULL };
static panda$core$String $s2740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, NULL };
static panda$core$String $s2742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s2744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, NULL };
static panda$core$String $s2747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, NULL };
static panda$core$String $s2750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, NULL };
static panda$core$String $s2752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s2755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, NULL };
static panda$core$String $s2757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x30\x3B", 5, NULL };
static panda$core$String $s2763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, NULL };
static panda$core$String $s2764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x3D\x20", 4, NULL };
static panda$core$String $s2797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x20", 3, NULL };
static panda$core$String $s2811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, NULL };
static panda$core$String $s2842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, NULL };
static panda$core$String $s2858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x20", 3, NULL };
static panda$core$String $s2897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x3B", 7, NULL };
static panda$core$String $s2904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, NULL };
static panda$core$String $s2922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, NULL };
static panda$core$String $s2938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2D\x20", 9, NULL };
static panda$core$String $s2960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20\x2D", 5, NULL };
static panda$core$String $s2985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x2D", 4, NULL };
static panda$core$String $s2999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s3002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s3005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2B\x3D\x20", 10, NULL };
static panda$core$String $s3015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, NULL };
static panda$core$String $s3020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, NULL };
static panda$core$String $s3043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, NULL };
static panda$core$String $s3046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, NULL };
static panda$core$String $s3052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s3072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, NULL };
static panda$core$String $s3075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7B", 14, NULL };
static panda$core$String $s3090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s3093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s3110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, NULL };
static panda$core$String $s3160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s3185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, NULL };
static panda$core$String $s3194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x3B", 7, NULL };
static panda$core$String $s3234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, NULL };
static panda$core$String $s3236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, NULL };
static panda$core$String $s3243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x50\x41\x4E\x44\x41\x5F\x41\x53\x53\x45\x52\x54\x28", 13, NULL };
static panda$core$String $s3258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s3261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20\x28", 8, NULL };
static panda$core$String $s3265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x7B", 9, NULL };
static panda$core$String $s3303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x73\x65\x20", 5, NULL };
static panda$core$String $s3307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, NULL };
static panda$core$String $s3319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B\x3B", 6, NULL };
static panda$core$String $s3324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x61\x75\x6C\x74\x3A", 8, NULL };
static panda$core$String $s3334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s3346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s3349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, NULL };
static panda$core$String $s3351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s3362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, NULL };
static panda$core$String $s3371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70\x5F", 3, NULL };
static panda$core$String $s3399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s3437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s3446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x63", 2, NULL };
static panda$core$String $s3453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x77\x72\x61\x70\x5F", 15, NULL };
static panda$core$String $s3460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s3462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66\x29\x20\x7B", 8, NULL };
static panda$core$String $s3469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20", 4, NULL };
static panda$core$String $s3472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x72\x65\x73\x75\x6C\x74\x20\x3D\x20", 19, NULL };
static panda$core$String $s3474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s3477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 18, NULL };
static panda$core$String $s3482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s3486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x63\x6C\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20", 37, NULL };
static panda$core$String $s3487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s3490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x3B", 14, NULL };
static panda$core$String $s3494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x76\x61\x6C\x75\x65\x20\x3D\x20\x73\x65\x6C\x66\x3B", 25, NULL };
static panda$core$String $s3496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6E\x20\x72\x65\x73\x75\x6C\x74\x3B", 18, NULL };
static panda$core$String $s3498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };

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
        panda$core$String* $tmp118 = panda$core$MutableString$finish$R$panda$core$String(code80);
        (($fn119) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp118);
        return result75;
    }
    }
    panda$core$String* $tmp120 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self->hCodeGen, p_t);
    return $tmp120;
}
void org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->compiler = p_compiler;
    org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->hCodeGen, p_compiler);
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp121 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp121;
    panda$core$String* $tmp123 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s122, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp123, &$s124);
    return $tmp125;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp126 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp126;
    panda$core$String* $tmp128 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s127, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp128, &$s129);
    return $tmp130;
}
void org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s131, p_label);
    panda$core$String* $tmp134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp132, &$s133);
    (($fn135) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp134);
    self->currentBlock = p_label;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt) {
    switch (p_stmt->kind.value) {
        case 1000:
        {
            panda$core$Int64 $tmp136 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp136, ((panda$core$Int64) { 0 }));
            if ($tmp137.value) {
            {
                return ((panda$core$Bit) { false });
            }
            }
            panda$core$Int64 $tmp138 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Int64 $tmp139 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp138, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp140 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, $tmp139);
            panda$core$Bit $tmp141 = org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp140));
            return $tmp141;
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
    org$pandalanguage$pandac$ClassDecl* cl153;
    panda$core$Int64 result162;
    panda$collections$Iterator* f$Iter163;
    org$pandalanguage$pandac$FieldDecl* f176;
    panda$core$Int64 size182;
    panda$core$Int64 align184;
    PANDA_ASSERT(p_t->resolved.value);
    panda$core$Bit $tmp142 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_t);
    if ($tmp142.value) {
    {
        panda$core$Bit $tmp144 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s143);
        if ($tmp144.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        panda$core$Bit $tmp146 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s145);
        if ($tmp146.value) {
        {
            return ((panda$core$Int64) { 2 });
        }
        }
        panda$core$Bit $tmp148 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s147);
        if ($tmp148.value) {
        {
            return ((panda$core$Int64) { 4 });
        }
        }
        panda$core$Bit $tmp150 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s149);
        PANDA_ASSERT($tmp150.value);
        return ((panda$core$Int64) { 8 });
    }
    }
    org$pandalanguage$pandac$Type* $tmp151 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp152 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp151);
    if ($tmp152.value) {
    {
        return ((panda$core$Int64) { 1 });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp154 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl153 = $tmp154;
    PANDA_ASSERT(((panda$core$Bit) { cl153 != NULL }).value);
    panda$core$Bit $tmp156 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl153);
    panda$core$Bit $tmp157 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp156);
    bool $tmp155 = $tmp157.value;
    if ($tmp155) goto $l158;
    panda$core$Bit $tmp160 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl153)->name, &$s159);
    $tmp155 = $tmp160.value;
    $l158:;
    panda$core$Bit $tmp161 = { $tmp155 };
    if ($tmp161.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    result162 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp164 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl153);
        ITable* $tmp165 = ((panda$collections$Iterable*) $tmp164)->$class->itable;
        while ($tmp165->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp165 = $tmp165->next;
        }
        $fn167 $tmp166 = $tmp165->methods[0];
        panda$collections$Iterator* $tmp168 = $tmp166(((panda$collections$Iterable*) $tmp164));
        f$Iter163 = $tmp168;
        $l169:;
        ITable* $tmp171 = f$Iter163->$class->itable;
        while ($tmp171->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp171 = $tmp171->next;
        }
        $fn173 $tmp172 = $tmp171->methods[0];
        panda$core$Bit $tmp174 = $tmp172(f$Iter163);
        panda$core$Bit $tmp175 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp174);
        if (!$tmp175.value) goto $l170;
        {
            ITable* $tmp177 = f$Iter163->$class->itable;
            while ($tmp177->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp177 = $tmp177->next;
            }
            $fn179 $tmp178 = $tmp177->methods[1];
            panda$core$Object* $tmp180 = $tmp178(f$Iter163);
            f176 = ((org$pandalanguage$pandac$FieldDecl*) $tmp180);
            panda$core$Bit $tmp181 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f176->annotations);
            if ($tmp181.value) {
            {
                goto $l169;
            }
            }
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f176);
            panda$core$Int64 $tmp183 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f176->type);
            size182 = $tmp183;
            panda$core$Int64 $tmp185 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result162, size182);
            align184 = $tmp185;
            panda$core$Bit $tmp186 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align184, ((panda$core$Int64) { 0 }));
            if ($tmp186.value) {
            {
                panda$core$Int64 $tmp187 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size182, align184);
                panda$core$Int64 $tmp188 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result162, $tmp187);
                result162 = $tmp188;
            }
            }
            panda$core$Int64 $tmp189 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result162, size182);
            panda$core$Bit $tmp190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp189, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp190.value);
            panda$core$Int64 $tmp191 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result162, size182);
            result162 = $tmp191;
        }
        goto $l169;
        $l170:;
    }
    panda$core$Bit $tmp192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp192.value) {
    {
        panda$core$Int64 $tmp193 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result162, ((panda$core$Int64) { 1 }));
        result162 = $tmp193;
    }
    }
    return result162;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp194 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
    panda$core$Int64 $tmp195 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp194, ((panda$core$Int64) { 8 }));
    return $tmp195;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl196;
    panda$core$Int64 result202;
    panda$collections$Iterator* f$Iter205;
    org$pandalanguage$pandac$FieldDecl* f218;
    panda$core$Int64 size223;
    panda$core$Int64 align225;
    org$pandalanguage$pandac$ClassDecl* $tmp197 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl196 = $tmp197;
    bool $tmp198 = ((panda$core$Bit) { cl196 != NULL }).value;
    if (!$tmp198) goto $l199;
    panda$core$Bit $tmp200 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl196);
    $tmp198 = $tmp200.value;
    $l199:;
    panda$core$Bit $tmp201 = { $tmp198 };
    PANDA_ASSERT($tmp201.value);
    org$pandalanguage$pandac$Type* $tmp203 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$Int64 $tmp204 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp203);
    result202 = $tmp204;
    {
        panda$collections$ListView* $tmp206 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl196);
        ITable* $tmp207 = ((panda$collections$Iterable*) $tmp206)->$class->itable;
        while ($tmp207->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp207 = $tmp207->next;
        }
        $fn209 $tmp208 = $tmp207->methods[0];
        panda$collections$Iterator* $tmp210 = $tmp208(((panda$collections$Iterable*) $tmp206));
        f$Iter205 = $tmp210;
        $l211:;
        ITable* $tmp213 = f$Iter205->$class->itable;
        while ($tmp213->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp213 = $tmp213->next;
        }
        $fn215 $tmp214 = $tmp213->methods[0];
        panda$core$Bit $tmp216 = $tmp214(f$Iter205);
        panda$core$Bit $tmp217 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp216);
        if (!$tmp217.value) goto $l212;
        {
            ITable* $tmp219 = f$Iter205->$class->itable;
            while ($tmp219->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp219 = $tmp219->next;
            }
            $fn221 $tmp220 = $tmp219->methods[1];
            panda$core$Object* $tmp222 = $tmp220(f$Iter205);
            f218 = ((org$pandalanguage$pandac$FieldDecl*) $tmp222);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f218);
            panda$core$Int64 $tmp224 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f218->type);
            size223 = $tmp224;
            panda$core$Int64 $tmp226 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result202, size223);
            align225 = $tmp226;
            panda$core$Bit $tmp227 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align225, ((panda$core$Int64) { 0 }));
            if ($tmp227.value) {
            {
                panda$core$Int64 $tmp228 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size223, align225);
                panda$core$Int64 $tmp229 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result202, $tmp228);
                result202 = $tmp229;
            }
            }
            panda$core$Int64 $tmp230 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result202, size223);
            panda$core$Bit $tmp231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp230, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp231.value);
            panda$core$Int64 $tmp232 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result202, size223);
            result202 = $tmp232;
        }
        goto $l211;
        $l212:;
    }
    panda$core$Bit $tmp233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp233.value) {
    {
        panda$core$Int64 $tmp234 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result202, ((panda$core$Int64) { 1 }));
        result202 = $tmp234;
    }
    }
    return result202;
}
void org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp235 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp235.value) {
    {
        return;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp236 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    return $tmp236;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp237.value) {
    {
        panda$core$Object* $tmp238 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp239 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp238));
        return $tmp239;
    }
    }
    panda$core$String* $tmp241 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s240, $tmp241);
    panda$core$String* $tmp244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp242, &$s243);
    return $tmp244;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp245 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp245, &$s246);
    return $tmp247;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType248;
    panda$core$MutableString* result250;
    panda$core$Range$LTpanda$core$Int64$GT $tmp267;
    org$pandalanguage$pandac$Type* $tmp249 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedType248 = $tmp249;
    panda$core$MutableString* $tmp251 = (panda$core$MutableString*) malloc(40);
    $tmp251->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp251->refCount.value = 1;
    panda$core$MutableString$init($tmp251);
    result250 = $tmp251;
    panda$core$Int64 $tmp253 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType248->subtypes);
    panda$core$Int64 $tmp254 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp253, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp255 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType248->subtypes, $tmp254);
    panda$core$String* $tmp256 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp255));
    panda$core$MutableString$append$panda$core$String(result250, $tmp256);
    panda$core$MutableString$append$panda$core$String(result250, &$s257);
    panda$core$Bit $tmp258 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp258.value);
    panda$core$String* $tmp260 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s259, $tmp260);
    panda$core$String* $tmp263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp261, &$s262);
    panda$core$MutableString$append$panda$core$String(result250, $tmp263);
    panda$core$Bit $tmp264 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_m->owner);
    if ($tmp264.value) {
    {
        panda$core$MutableString$append$panda$core$String(result250, &$s265);
    }
    }
    panda$core$MutableString$append$panda$core$String(result250, &$s266);
    panda$core$Int64 $tmp268 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType248->subtypes);
    panda$core$Int64 $tmp269 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp268, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp267, ((panda$core$Int64) { 0 }), $tmp269, ((panda$core$Bit) { false }));
    int64_t $tmp271 = $tmp267.min.value;
    panda$core$Int64 i270 = { $tmp271 };
    int64_t $tmp273 = $tmp267.max.value;
    bool $tmp274 = $tmp267.inclusive.value;
    if ($tmp274) goto $l281; else goto $l282;
    $l281:;
    if ($tmp271 <= $tmp273) goto $l275; else goto $l277;
    $l282:;
    if ($tmp271 < $tmp273) goto $l275; else goto $l277;
    $l275:;
    {
        panda$core$MutableString$append$panda$core$String(result250, &$s283);
        panda$core$Object* $tmp284 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType248->subtypes, i270);
        panda$core$String* $tmp285 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp284));
        panda$core$MutableString$append$panda$core$String(result250, $tmp285);
    }
    $l278:;
    int64_t $tmp287 = $tmp273 - i270.value;
    if ($tmp274) goto $l288; else goto $l289;
    $l288:;
    if ($tmp287 >= 1) goto $l286; else goto $l277;
    $l289:;
    if ($tmp287 > 1) goto $l286; else goto $l277;
    $l286:;
    i270.value += 1;
    goto $l275;
    $l277:;
    panda$core$MutableString$append$panda$core$String(result250, &$s292);
    panda$core$String* $tmp293 = panda$core$MutableString$finish$R$panda$core$String(result250);
    return $tmp293;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp294.value);
    panda$core$Object* $tmp296 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp297 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp296));
    panda$core$String* $tmp298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s295, $tmp297);
    panda$core$String* $tmp300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp298, &$s299);
    return $tmp300;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces301;
    panda$core$String* previous304;
    panda$collections$Iterator* intfType$Iter306;
    org$pandalanguage$pandac$Type* intfType318;
    org$pandalanguage$pandac$ClassDecl* intf323;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC325;
    panda$collections$ListView* methods327;
    panda$core$String* name329;
    panda$core$MutableString* result339;
    panda$core$String* separator368;
    panda$collections$Iterator* m$Iter370;
    org$pandalanguage$pandac$MethodDecl* m382;
    org$pandalanguage$pandac$Type* $tmp302 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp303 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp302);
    interfaces301 = $tmp303;
    previous304 = &$s305;
    {
        ITable* $tmp307 = ((panda$collections$Iterable*) interfaces301)->$class->itable;
        while ($tmp307->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp307 = $tmp307->next;
        }
        $fn309 $tmp308 = $tmp307->methods[0];
        panda$collections$Iterator* $tmp310 = $tmp308(((panda$collections$Iterable*) interfaces301));
        intfType$Iter306 = $tmp310;
        $l311:;
        ITable* $tmp313 = intfType$Iter306->$class->itable;
        while ($tmp313->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp313 = $tmp313->next;
        }
        $fn315 $tmp314 = $tmp313->methods[0];
        panda$core$Bit $tmp316 = $tmp314(intfType$Iter306);
        panda$core$Bit $tmp317 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp316);
        if (!$tmp317.value) goto $l312;
        {
            ITable* $tmp319 = intfType$Iter306->$class->itable;
            while ($tmp319->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp319 = $tmp319->next;
            }
            $fn321 $tmp320 = $tmp319->methods[1];
            panda$core$Object* $tmp322 = $tmp320(intfType$Iter306);
            intfType318 = ((org$pandalanguage$pandac$Type*) $tmp322);
            org$pandalanguage$pandac$ClassDecl* $tmp324 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType318);
            intf323 = $tmp324;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp326 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf323);
            intfCC325 = $tmp326;
            panda$collections$ListView* $tmp328 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType318);
            methods327 = $tmp328;
            panda$core$String* $tmp331 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s330, $tmp331);
            panda$core$String* $tmp334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp332, &$s333);
            panda$core$String* $tmp335 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf323)->name);
            panda$core$String* $tmp336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp334, $tmp335);
            panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp336, &$s337);
            name329 = $tmp338;
            panda$core$MutableString* $tmp340 = (panda$core$MutableString*) malloc(40);
            $tmp340->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp340->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp343 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp344 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp343);
            panda$core$String* $tmp345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s342, $tmp344);
            panda$core$String* $tmp347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp345, &$s346);
            ITable* $tmp349 = ((panda$collections$CollectionView*) methods327)->$class->itable;
            while ($tmp349->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp349 = $tmp349->next;
            }
            $fn351 $tmp350 = $tmp349->methods[0];
            panda$core$Int64 $tmp352 = $tmp350(((panda$collections$CollectionView*) methods327));
            panda$core$String* $tmp353 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s348, ((panda$core$Object*) wrap_panda$core$Int64($tmp352)));
            panda$core$String* $tmp355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp353, &$s354);
            panda$core$String* $tmp356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp355, name329);
            panda$core$String* $tmp358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp356, &$s357);
            panda$core$String* $tmp359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp347, $tmp358);
            panda$core$String* $tmp361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s360, intfCC325->name);
            panda$core$String* $tmp363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp361, &$s362);
            panda$core$String* $tmp364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp363, previous304);
            panda$core$String* $tmp366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp364, &$s365);
            panda$core$String* $tmp367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp359, $tmp366);
            panda$core$MutableString$init$panda$core$String($tmp340, $tmp367);
            result339 = $tmp340;
            separator368 = &$s369;
            {
                ITable* $tmp371 = ((panda$collections$Iterable*) methods327)->$class->itable;
                while ($tmp371->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp371 = $tmp371->next;
                }
                $fn373 $tmp372 = $tmp371->methods[0];
                panda$collections$Iterator* $tmp374 = $tmp372(((panda$collections$Iterable*) methods327));
                m$Iter370 = $tmp374;
                $l375:;
                ITable* $tmp377 = m$Iter370->$class->itable;
                while ($tmp377->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp377 = $tmp377->next;
                }
                $fn379 $tmp378 = $tmp377->methods[0];
                panda$core$Bit $tmp380 = $tmp378(m$Iter370);
                panda$core$Bit $tmp381 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp380);
                if (!$tmp381.value) goto $l376;
                {
                    ITable* $tmp383 = m$Iter370->$class->itable;
                    while ($tmp383->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp383 = $tmp383->next;
                    }
                    $fn385 $tmp384 = $tmp383->methods[1];
                    panda$core$Object* $tmp386 = $tmp384(m$Iter370);
                    m382 = ((org$pandalanguage$pandac$MethodDecl*) $tmp386);
                    panda$core$MutableString$append$panda$core$String(result339, separator368);
                    separator368 = &$s387;
                    panda$core$Bit $tmp388 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m382->annotations);
                    if ($tmp388.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result339, &$s389);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp390 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m382);
                        panda$core$MutableString$append$panda$core$String(result339, $tmp390);
                    }
                    }
                }
                goto $l375;
                $l376:;
            }
            panda$core$MutableString$append$panda$core$String(result339, &$s391);
            panda$core$String* $tmp392 = panda$core$MutableString$finish$R$panda$core$String(result339);
            (($fn393) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp392);
            panda$core$String* $tmp395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s394, name329);
            panda$core$String* $tmp397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp395, &$s396);
            previous304 = $tmp397;
        }
        goto $l311;
        $l312:;
    }
    return previous304;
}
org$pandalanguage$pandac$CCodeGenerator$MethodShim* org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer398;
    panda$io$IndentedOutputStream* out401;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* found404;
    org$pandalanguage$pandac$Type* effectiveReturnType412;
    panda$core$String* resultName416;
    panda$core$MutableString* resultType420;
    panda$core$String* self_t432;
    panda$core$Range$LTpanda$core$Int64$GT $tmp440;
    panda$core$String* pType455;
    panda$collections$Array* casts477;
    panda$core$Range$LTpanda$core$Int64$GT $tmp480;
    panda$core$String* p495;
    panda$core$Range$LTpanda$core$Int64$GT $tmp526;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* result567;
    panda$io$MemoryOutputStream* $tmp399 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp399->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp399->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp399);
    outBuffer398 = $tmp399;
    panda$io$IndentedOutputStream* $tmp402 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp402->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp402->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp402, ((panda$io$OutputStream*) outBuffer398));
    out401 = $tmp402;
    panda$core$Object* $tmp405 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    found404 = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp405);
    if (((panda$core$Bit) { found404 != NULL }).value) {
    {
        return found404;
    }
    }
    panda$core$Bit $tmp406 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_effective);
    PANDA_ASSERT($tmp406.value);
    panda$core$Int64 $tmp407 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp408 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Int64 $tmp409 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp408, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp407, $tmp409);
    PANDA_ASSERT($tmp410.value);
    panda$core$Bit $tmp411 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_raw);
    PANDA_ASSERT($tmp411.value);
    panda$core$Int64 $tmp413 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp414 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp413, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp415 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, $tmp414);
    effectiveReturnType412 = ((org$pandalanguage$pandac$Type*) $tmp415);
    panda$core$String* $tmp417 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp417, &$s418);
    resultName416 = $tmp419;
    panda$core$MutableString* $tmp421 = (panda$core$MutableString*) malloc(40);
    $tmp421->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp421->refCount.value = 1;
    panda$core$String* $tmp423 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType412);
    panda$core$MutableString$init$panda$core$String($tmp421, $tmp423);
    resultType420 = $tmp421;
    panda$core$String* $tmp425 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s424, ((panda$core$Object*) resultType420));
    panda$core$String* $tmp427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp425, &$s426);
    panda$core$String* $tmp428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp427, resultName416);
    panda$core$String* $tmp430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp428, &$s429);
    (($fn431) ((panda$io$OutputStream*) out401)->$class->vtable[16])(((panda$io$OutputStream*) out401), $tmp430);
    panda$core$String* $tmp433 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t432 = $tmp433;
    panda$core$String* $tmp435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s434, self_t432);
    panda$core$String* $tmp437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp435, &$s436);
    (($fn438) ((panda$io$OutputStream*) out401)->$class->vtable[16])(((panda$io$OutputStream*) out401), $tmp437);
    panda$core$MutableString$append$panda$core$String(resultType420, &$s439);
    panda$core$MutableString$append$panda$core$String(resultType420, self_t432);
    panda$core$Int64 $tmp441 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp440, ((panda$core$Int64) { 0 }), $tmp441, ((panda$core$Bit) { false }));
    int64_t $tmp443 = $tmp440.min.value;
    panda$core$Int64 i442 = { $tmp443 };
    int64_t $tmp445 = $tmp440.max.value;
    bool $tmp446 = $tmp440.inclusive.value;
    if ($tmp446) goto $l453; else goto $l454;
    $l453:;
    if ($tmp443 <= $tmp445) goto $l447; else goto $l449;
    $l454:;
    if ($tmp443 < $tmp445) goto $l447; else goto $l449;
    $l447:;
    {
        panda$core$Object* $tmp456 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i442);
        panda$core$String* $tmp457 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp456));
        pType455 = $tmp457;
        panda$core$MutableString$append$panda$core$String(resultType420, &$s458);
        panda$core$MutableString$append$panda$core$String(resultType420, pType455);
        panda$core$String* $tmp460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s459, pType455);
        panda$core$String* $tmp462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp460, &$s461);
        panda$core$String* $tmp463 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp462, ((panda$core$Object*) wrap_panda$core$Int64(i442)));
        panda$core$String* $tmp465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp463, &$s464);
        (($fn466) ((panda$io$OutputStream*) out401)->$class->vtable[16])(((panda$io$OutputStream*) out401), $tmp465);
    }
    $l450:;
    int64_t $tmp468 = $tmp445 - i442.value;
    if ($tmp446) goto $l469; else goto $l470;
    $l469:;
    if ($tmp468 >= 1) goto $l467; else goto $l449;
    $l470:;
    if ($tmp468 > 1) goto $l467; else goto $l449;
    $l467:;
    i442.value += 1;
    goto $l447;
    $l449:;
    (($fn474) ((panda$io$OutputStream*) out401)->$class->vtable[19])(((panda$io$OutputStream*) out401), &$s473);
    panda$core$Int64 $tmp475 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(out401->level, ((panda$core$Int64) { 1 }));
    out401->level = $tmp475;
    panda$core$MutableString$append$panda$core$String(resultType420, &$s476);
    panda$collections$Array* $tmp478 = (panda$collections$Array*) malloc(40);
    $tmp478->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp478->refCount.value = 1;
    panda$collections$Array$init($tmp478);
    casts477 = $tmp478;
    panda$core$Int64 $tmp481 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp480, ((panda$core$Int64) { 0 }), $tmp481, ((panda$core$Bit) { false }));
    int64_t $tmp483 = $tmp480.min.value;
    panda$core$Int64 i482 = { $tmp483 };
    int64_t $tmp485 = $tmp480.max.value;
    bool $tmp486 = $tmp480.inclusive.value;
    if ($tmp486) goto $l493; else goto $l494;
    $l493:;
    if ($tmp483 <= $tmp485) goto $l487; else goto $l489;
    $l494:;
    if ($tmp483 < $tmp485) goto $l487; else goto $l489;
    $l487:;
    {
        panda$core$String* $tmp497 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s496, ((panda$core$Object*) wrap_panda$core$Int64(i482)));
        panda$core$String* $tmp499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp497, &$s498);
        p495 = $tmp499;
        panda$core$Object* $tmp500 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i482);
        panda$core$Object* $tmp501 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i482);
        panda$core$Bit $tmp502 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp500)->type, ((org$pandalanguage$pandac$Type*) $tmp501));
        if ($tmp502.value) {
        {
            panda$core$Object* $tmp503 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i482);
            panda$core$Object* $tmp504 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i482);
            panda$core$String* $tmp505 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p495, ((org$pandalanguage$pandac$Type*) $tmp503), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp504)->type, out401);
            panda$collections$Array$add$panda$collections$Array$T(casts477, ((panda$core$Object*) $tmp505));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts477, ((panda$core$Object*) p495));
        }
        }
    }
    $l490:;
    int64_t $tmp507 = $tmp485 - i482.value;
    if ($tmp486) goto $l508; else goto $l509;
    $l508:;
    if ($tmp507 >= 1) goto $l506; else goto $l489;
    $l509:;
    if ($tmp507 > 1) goto $l506; else goto $l489;
    $l506:;
    i482.value += 1;
    goto $l487;
    $l489:;
    org$pandalanguage$pandac$Type* $tmp512 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp513 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp512);
    if ($tmp513.value) {
    {
        panda$core$String* $tmp515 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
        panda$core$String* $tmp516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s514, $tmp515);
        panda$core$String* $tmp518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp516, &$s517);
        (($fn519) ((panda$io$OutputStream*) out401)->$class->vtable[16])(((panda$io$OutputStream*) out401), $tmp518);
    }
    }
    panda$core$String* $tmp521 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s520, $tmp521);
    panda$core$String* $tmp524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp522, &$s523);
    (($fn525) ((panda$io$OutputStream*) out401)->$class->vtable[16])(((panda$io$OutputStream*) out401), $tmp524);
    panda$core$Int64 $tmp527 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp526, ((panda$core$Int64) { 0 }), $tmp527, ((panda$core$Bit) { false }));
    int64_t $tmp529 = $tmp526.min.value;
    panda$core$Int64 i528 = { $tmp529 };
    int64_t $tmp531 = $tmp526.max.value;
    bool $tmp532 = $tmp526.inclusive.value;
    if ($tmp532) goto $l539; else goto $l540;
    $l539:;
    if ($tmp529 <= $tmp531) goto $l533; else goto $l535;
    $l540:;
    if ($tmp529 < $tmp531) goto $l533; else goto $l535;
    $l533:;
    {
        panda$core$Object* $tmp542 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts477, i528);
        panda$core$String* $tmp543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s541, ((panda$core$String*) $tmp542));
        panda$core$String* $tmp545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp543, &$s544);
        (($fn546) ((panda$io$OutputStream*) out401)->$class->vtable[16])(((panda$io$OutputStream*) out401), $tmp545);
    }
    $l536:;
    int64_t $tmp548 = $tmp531 - i528.value;
    if ($tmp532) goto $l549; else goto $l550;
    $l549:;
    if ($tmp548 >= 1) goto $l547; else goto $l535;
    $l550:;
    if ($tmp548 > 1) goto $l547; else goto $l535;
    $l547:;
    i528.value += 1;
    goto $l533;
    $l535:;
    (($fn554) ((panda$io$OutputStream*) out401)->$class->vtable[19])(((panda$io$OutputStream*) out401), &$s553);
    org$pandalanguage$pandac$Type* $tmp555 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp556 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp555);
    if ($tmp556.value) {
    {
        panda$core$String* $tmp559 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, &$s558, p_raw->returnType, effectiveReturnType412, out401);
        panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s557, $tmp559);
        panda$core$String* $tmp562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp560, &$s561);
        (($fn563) ((panda$io$OutputStream*) out401)->$class->vtable[19])(((panda$io$OutputStream*) out401), $tmp562);
    }
    }
    panda$core$Int64 $tmp564 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(out401->level, ((panda$core$Int64) { 1 }));
    out401->level = $tmp564;
    (($fn566) ((panda$io$OutputStream*) out401)->$class->vtable[19])(((panda$io$OutputStream*) out401), &$s565);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp568 = (org$pandalanguage$pandac$CCodeGenerator$MethodShim*) malloc(32);
    $tmp568->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$MethodShim$class;
    $tmp568->refCount.value = 1;
    panda$core$String* $tmp570 = panda$core$MutableString$finish$R$panda$core$String(resultType420);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp568, resultName416, $tmp570);
    result567 = $tmp568;
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result567));
    panda$core$String* $tmp572 = (($fn571) outBuffer398->$class->vtable[21])(outBuffer398);
    (($fn573) p_rawOut->$class->vtable[16])(p_rawOut, $tmp572);
    return result567;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* oldMethod575;
    panda$core$String* result576;
    panda$core$String* selfType582;
    org$pandalanguage$pandac$Type* actualMethodType600;
    org$pandalanguage$pandac$Type* inheritedMethodType602;
    panda$core$Range$LTpanda$core$Int64$GT $tmp604;
    panda$collections$Array* parameters639;
    panda$core$Range$LTpanda$core$Int64$GT $tmp642;
    panda$collections$Array* children667;
    org$pandalanguage$pandac$Position $tmp672;
    panda$core$Range$LTpanda$core$Int64$GT $tmp684;
    panda$core$Bit $tmp574 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp574.value);
    oldMethod575 = self->currentMethod;
    self->currentMethod = p_m;
    panda$core$String* $tmp578 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s577, $tmp578);
    panda$core$String* $tmp581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp579, &$s580);
    result576 = $tmp581;
    panda$core$String* $tmp584 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s583, $tmp584);
    panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp585, &$s586);
    selfType582 = $tmp587;
    panda$core$String* $tmp589 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s588, $tmp589);
    panda$core$String* $tmp592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp590, &$s591);
    panda$core$String* $tmp593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp592, result576);
    panda$core$String* $tmp595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp593, &$s594);
    panda$core$String* $tmp596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp595, selfType582);
    panda$core$String* $tmp598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp596, &$s597);
    (($fn599) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp598);
    org$pandalanguage$pandac$Type* $tmp601 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    actualMethodType600 = $tmp601;
    org$pandalanguage$pandac$Type* $tmp603 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedMethodType602 = $tmp603;
    panda$core$Int64 $tmp605 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp604, ((panda$core$Int64) { 0 }), $tmp605, ((panda$core$Bit) { false }));
    int64_t $tmp607 = $tmp604.min.value;
    panda$core$Int64 i606 = { $tmp607 };
    int64_t $tmp609 = $tmp604.max.value;
    bool $tmp610 = $tmp604.inclusive.value;
    if ($tmp610) goto $l617; else goto $l618;
    $l617:;
    if ($tmp607 <= $tmp609) goto $l611; else goto $l613;
    $l618:;
    if ($tmp607 < $tmp609) goto $l611; else goto $l613;
    $l611:;
    {
        panda$core$Object* $tmp620 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType602->subtypes, i606);
        panda$core$String* $tmp621 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp620));
        panda$core$String* $tmp622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s619, $tmp621);
        panda$core$String* $tmp624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp622, &$s623);
        panda$core$Object* $tmp625 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i606);
        panda$core$String* $tmp626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp624, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp625)->name);
        panda$core$String* $tmp628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp626, &$s627);
        (($fn629) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp628);
    }
    $l614:;
    int64_t $tmp631 = $tmp609 - i606.value;
    if ($tmp610) goto $l632; else goto $l633;
    $l632:;
    if ($tmp631 >= 1) goto $l630; else goto $l613;
    $l633:;
    if ($tmp631 > 1) goto $l630; else goto $l613;
    $l630:;
    i606.value += 1;
    goto $l611;
    $l613:;
    (($fn637) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s636);
    panda$core$Int64 $tmp638 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp638;
    panda$collections$Array* $tmp640 = (panda$collections$Array*) malloc(40);
    $tmp640->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp640->refCount.value = 1;
    panda$collections$Array$init($tmp640);
    parameters639 = $tmp640;
    panda$core$Int64 $tmp643 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp642, ((panda$core$Int64) { 0 }), $tmp643, ((panda$core$Bit) { false }));
    int64_t $tmp645 = $tmp642.min.value;
    panda$core$Int64 i644 = { $tmp645 };
    int64_t $tmp647 = $tmp642.max.value;
    bool $tmp648 = $tmp642.inclusive.value;
    if ($tmp648) goto $l655; else goto $l656;
    $l655:;
    if ($tmp645 <= $tmp647) goto $l649; else goto $l651;
    $l656:;
    if ($tmp645 < $tmp647) goto $l649; else goto $l651;
    $l649:;
    {
        panda$core$Object* $tmp657 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i644);
        panda$core$Object* $tmp658 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType602->subtypes, i644);
        panda$core$Object* $tmp659 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType600->subtypes, i644);
        panda$core$String* $tmp660 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp657)->name, ((org$pandalanguage$pandac$Type*) $tmp658), ((org$pandalanguage$pandac$Type*) $tmp659), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters639, ((panda$core$Object*) $tmp660));
    }
    $l652:;
    int64_t $tmp662 = $tmp647 - i644.value;
    if ($tmp648) goto $l663; else goto $l664;
    $l663:;
    if ($tmp662 >= 1) goto $l661; else goto $l651;
    $l664:;
    if ($tmp662 > 1) goto $l661; else goto $l651;
    $l661:;
    i644.value += 1;
    goto $l649;
    $l651:;
    panda$collections$Array* $tmp668 = (panda$collections$Array*) malloc(40);
    $tmp668->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp668->refCount.value = 1;
    panda$collections$Array$init($tmp668);
    children667 = $tmp668;
    org$pandalanguage$pandac$IRNode* $tmp670 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp670->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp670->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp672);
    org$pandalanguage$pandac$Type* $tmp673 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp670, ((panda$core$Int64) { 1025 }), $tmp672, $tmp673);
    panda$collections$Array$add$panda$collections$Array$T(children667, ((panda$core$Object*) $tmp670));
    org$pandalanguage$pandac$Type* $tmp674 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp675 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp674);
    if ($tmp675.value) {
    {
        (($fn677) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s676);
    }
    }
    panda$core$String* $tmp679 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s678, $tmp679);
    panda$core$String* $tmp682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp680, &$s681);
    (($fn683) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp682);
    panda$core$Int64 $tmp685 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp684, ((panda$core$Int64) { 0 }), $tmp685, ((panda$core$Bit) { false }));
    int64_t $tmp687 = $tmp684.min.value;
    panda$core$Int64 i686 = { $tmp687 };
    int64_t $tmp689 = $tmp684.max.value;
    bool $tmp690 = $tmp684.inclusive.value;
    if ($tmp690) goto $l697; else goto $l698;
    $l697:;
    if ($tmp687 <= $tmp689) goto $l691; else goto $l693;
    $l698:;
    if ($tmp687 < $tmp689) goto $l691; else goto $l693;
    $l691:;
    {
        panda$core$Object* $tmp700 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters639, i686);
        panda$core$String* $tmp701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s699, ((panda$core$String*) $tmp700));
        panda$core$String* $tmp703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp701, &$s702);
        (($fn704) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp703);
    }
    $l694:;
    int64_t $tmp706 = $tmp689 - i686.value;
    if ($tmp690) goto $l707; else goto $l708;
    $l707:;
    if ($tmp706 >= 1) goto $l705; else goto $l693;
    $l708:;
    if ($tmp706 > 1) goto $l705; else goto $l693;
    $l705:;
    i686.value += 1;
    goto $l691;
    $l693:;
    (($fn712) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s711);
    panda$core$Int64 $tmp713 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp713;
    (($fn715) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s714);
    self->currentMethod = oldMethod575;
    return result576;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces716;
    panda$core$String* previous719;
    panda$collections$Iterator* intfType$Iter721;
    org$pandalanguage$pandac$Type* intfType733;
    org$pandalanguage$pandac$ClassDecl* intf738;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC740;
    panda$collections$ListView* methods742;
    panda$core$String* name744;
    panda$core$MutableString* result754;
    panda$core$String* separator788;
    panda$collections$Iterator* m$Iter790;
    org$pandalanguage$pandac$MethodDecl* m802;
    org$pandalanguage$pandac$Type* $tmp717 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp718 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp717);
    interfaces716 = $tmp718;
    previous719 = &$s720;
    {
        ITable* $tmp722 = ((panda$collections$Iterable*) interfaces716)->$class->itable;
        while ($tmp722->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp722 = $tmp722->next;
        }
        $fn724 $tmp723 = $tmp722->methods[0];
        panda$collections$Iterator* $tmp725 = $tmp723(((panda$collections$Iterable*) interfaces716));
        intfType$Iter721 = $tmp725;
        $l726:;
        ITable* $tmp728 = intfType$Iter721->$class->itable;
        while ($tmp728->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp728 = $tmp728->next;
        }
        $fn730 $tmp729 = $tmp728->methods[0];
        panda$core$Bit $tmp731 = $tmp729(intfType$Iter721);
        panda$core$Bit $tmp732 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp731);
        if (!$tmp732.value) goto $l727;
        {
            ITable* $tmp734 = intfType$Iter721->$class->itable;
            while ($tmp734->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp734 = $tmp734->next;
            }
            $fn736 $tmp735 = $tmp734->methods[1];
            panda$core$Object* $tmp737 = $tmp735(intfType$Iter721);
            intfType733 = ((org$pandalanguage$pandac$Type*) $tmp737);
            org$pandalanguage$pandac$ClassDecl* $tmp739 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType733);
            intf738 = $tmp739;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp741 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf738);
            intfCC740 = $tmp741;
            panda$collections$ListView* $tmp743 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType733);
            methods742 = $tmp743;
            panda$core$String* $tmp746 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s745, $tmp746);
            panda$core$String* $tmp749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp747, &$s748);
            panda$core$String* $tmp750 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf738)->name);
            panda$core$String* $tmp751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp749, $tmp750);
            panda$core$String* $tmp753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp751, &$s752);
            name744 = $tmp753;
            panda$core$MutableString* $tmp755 = (panda$core$MutableString*) malloc(40);
            $tmp755->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp755->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp758 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp759 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp758);
            panda$core$String* $tmp760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s757, $tmp759);
            panda$core$String* $tmp762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp760, &$s761);
            ITable* $tmp764 = ((panda$collections$CollectionView*) methods742)->$class->itable;
            while ($tmp764->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp764 = $tmp764->next;
            }
            $fn766 $tmp765 = $tmp764->methods[0];
            panda$core$Int64 $tmp767 = $tmp765(((panda$collections$CollectionView*) methods742));
            panda$core$String* $tmp768 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s763, ((panda$core$Object*) wrap_panda$core$Int64($tmp767)));
            panda$core$String* $tmp770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp768, &$s769);
            panda$core$String* $tmp771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp770, name744);
            panda$core$String* $tmp773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp771, &$s772);
            panda$core$String* $tmp774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp762, $tmp773);
            org$pandalanguage$pandac$Type* $tmp776 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp777 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp776);
            panda$core$String* $tmp778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s775, $tmp777);
            panda$core$String* $tmp780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp778, &$s779);
            panda$core$String* $tmp781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp780, intfCC740->name);
            panda$core$String* $tmp783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp781, &$s782);
            panda$core$String* $tmp784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp783, previous719);
            panda$core$String* $tmp786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp784, &$s785);
            panda$core$String* $tmp787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp774, $tmp786);
            panda$core$MutableString$init$panda$core$String($tmp755, $tmp787);
            result754 = $tmp755;
            separator788 = &$s789;
            {
                ITable* $tmp791 = ((panda$collections$Iterable*) methods742)->$class->itable;
                while ($tmp791->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp791 = $tmp791->next;
                }
                $fn793 $tmp792 = $tmp791->methods[0];
                panda$collections$Iterator* $tmp794 = $tmp792(((panda$collections$Iterable*) methods742));
                m$Iter790 = $tmp794;
                $l795:;
                ITable* $tmp797 = m$Iter790->$class->itable;
                while ($tmp797->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp797 = $tmp797->next;
                }
                $fn799 $tmp798 = $tmp797->methods[0];
                panda$core$Bit $tmp800 = $tmp798(m$Iter790);
                panda$core$Bit $tmp801 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp800);
                if (!$tmp801.value) goto $l796;
                {
                    ITable* $tmp803 = m$Iter790->$class->itable;
                    while ($tmp803->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp803 = $tmp803->next;
                    }
                    $fn805 $tmp804 = $tmp803->methods[1];
                    panda$core$Object* $tmp806 = $tmp804(m$Iter790);
                    m802 = ((org$pandalanguage$pandac$MethodDecl*) $tmp806);
                    panda$core$MutableString$append$panda$core$String(result754, separator788);
                    separator788 = &$s807;
                    panda$core$Bit $tmp808 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m802->annotations);
                    if ($tmp808.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result754, &$s809);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp810 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m802, self->wrapperShims);
                        panda$core$MutableString$append$panda$core$String(result754, $tmp810);
                    }
                    }
                }
                goto $l795;
                $l796:;
            }
            panda$core$MutableString$append$panda$core$String(result754, &$s811);
            panda$core$String* $tmp812 = panda$core$MutableString$finish$R$panda$core$String(result754);
            (($fn813) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp812);
            panda$core$String* $tmp815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s814, name744);
            panda$core$String* $tmp817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp815, &$s816);
            previous719 = $tmp817;
        }
        goto $l726;
        $l727:;
    }
    return previous719;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $tmp818 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self->hCodeGen, p_m);
    return $tmp818;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result820;
    org$pandalanguage$pandac$Type* declared821;
    org$pandalanguage$pandac$Type* inherited824;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* shim827;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    panda$core$Bit $tmp819 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
    if ($tmp819.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp822 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp823 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp822);
    declared821 = $tmp823;
    org$pandalanguage$pandac$Type* $tmp825 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited824 = $tmp825;
    panda$core$Bit $tmp826 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared821, inherited824);
    if ($tmp826.value) {
    {
        org$pandalanguage$pandac$Type* $tmp828 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp829 = org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(self, p_m, $tmp828, ((panda$io$OutputStream*) self->shims));
        shim827 = $tmp829;
        result820 = shim827->name;
    }
    }
    else {
    {
        panda$core$String* $tmp830 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        result820 = $tmp830;
    }
    }
    return result820;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result831;
    panda$core$String* type833;
    panda$collections$ListView* vtable845;
    panda$core$String* superPtr856;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC857;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant865;
    panda$core$MutableString* code869;
    panda$core$String* separator891;
    panda$collections$Iterator* m$Iter893;
    org$pandalanguage$pandac$MethodDecl* m905;
    panda$core$Object* $tmp832 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result831 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp832);
    if (((panda$core$Bit) { result831 == NULL }).value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        panda$core$Bit $tmp834 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp834.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp835 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp835->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp835->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp838 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp839 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp838)->name);
            panda$core$String* $tmp840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s837, $tmp839);
            panda$core$String* $tmp842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp840, &$s841);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp835, $tmp842, &$s843);
            result831 = $tmp835;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result831));
            panda$core$Object* $tmp844 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
            return ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp844);
        }
        }
        panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) p_cl));
        panda$collections$ListView* $tmp846 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable845 = $tmp846;
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp847 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
        $tmp847->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
        $tmp847->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp850 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp851 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp850)->name);
        panda$core$String* $tmp852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s849, $tmp851);
        panda$core$String* $tmp854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp852, &$s853);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp847, $tmp854, &$s855);
        result831 = $tmp847;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result831));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp858 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp859 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp858);
            superCC857 = $tmp859;
            panda$core$String* $tmp861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s860, superCC857->name);
            panda$core$String* $tmp863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp861, &$s862);
            superPtr856 = $tmp863;
        }
        }
        else {
        {
            superPtr856 = &$s864;
        }
        }
        org$pandalanguage$pandac$Type* $tmp866 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp867 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp866);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp868 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp867);
        clConstant865 = $tmp868;
        panda$core$MutableString* $tmp870 = (panda$core$MutableString*) malloc(40);
        $tmp870->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp870->refCount.value = 1;
        panda$core$String* $tmp873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s872, result831->name);
        panda$core$String* $tmp875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp873, &$s874);
        panda$core$String* $tmp876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp875, result831->name);
        panda$core$String* $tmp878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp876, &$s877);
        panda$core$String* $tmp880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s879, clConstant865->name);
        panda$core$String* $tmp882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp880, &$s881);
        panda$core$String* $tmp883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp882, superPtr856);
        panda$core$String* $tmp885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp883, &$s884);
        panda$core$String* $tmp886 = org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp885, $tmp886);
        panda$core$String* $tmp889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp887, &$s888);
        panda$core$String* $tmp890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp878, $tmp889);
        panda$core$MutableString$init$panda$core$String($tmp870, $tmp890);
        code869 = $tmp870;
        separator891 = &$s892;
        {
            ITable* $tmp894 = ((panda$collections$Iterable*) vtable845)->$class->itable;
            while ($tmp894->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp894 = $tmp894->next;
            }
            $fn896 $tmp895 = $tmp894->methods[0];
            panda$collections$Iterator* $tmp897 = $tmp895(((panda$collections$Iterable*) vtable845));
            m$Iter893 = $tmp897;
            $l898:;
            ITable* $tmp900 = m$Iter893->$class->itable;
            while ($tmp900->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp900 = $tmp900->next;
            }
            $fn902 $tmp901 = $tmp900->methods[0];
            panda$core$Bit $tmp903 = $tmp901(m$Iter893);
            panda$core$Bit $tmp904 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp903);
            if (!$tmp904.value) goto $l899;
            {
                ITable* $tmp906 = m$Iter893->$class->itable;
                while ($tmp906->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp906 = $tmp906->next;
                }
                $fn908 $tmp907 = $tmp906->methods[1];
                panda$core$Object* $tmp909 = $tmp907(m$Iter893);
                m905 = ((org$pandalanguage$pandac$MethodDecl*) $tmp909);
                panda$core$MutableString$append$panda$core$String(code869, separator891);
                panda$core$Bit $tmp910 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m905->annotations);
                if ($tmp910.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code869, &$s911);
                }
                }
                else {
                {
                    panda$core$String* $tmp912 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m905);
                    panda$core$MutableString$append$panda$core$String(code869, $tmp912);
                }
                }
                separator891 = &$s913;
            }
            goto $l898;
            $l899:;
        }
        panda$core$MutableString$append$panda$core$String(code869, &$s914);
        panda$core$String* $tmp915 = panda$core$MutableString$finish$R$panda$core$String(code869);
        (($fn916) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp915);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    }
    }
    return result831;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name917;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result923;
    panda$core$String* type927;
    org$pandalanguage$pandac$ClassDecl* value939;
    panda$collections$ListView* valueVTable942;
    panda$collections$ListView* vtable952;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC954;
    panda$core$String* superCast957;
    panda$core$String* itable962;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant964;
    panda$core$MutableString* code968;
    panda$core$String* separator989;
    panda$core$Range$LTpanda$core$Int64$GT $tmp991;
    org$pandalanguage$pandac$MethodDecl* m1009;
    panda$core$String* methodName1014;
    panda$core$String* $tmp919 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s918, $tmp919);
    panda$core$String* $tmp922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp920, &$s921);
    name917 = $tmp922;
    panda$core$Object* $tmp924 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name917));
    result923 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp924);
    if (((panda$core$Bit) { result923 == NULL }).value) {
    {
        panda$core$Bit $tmp925 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp925.value) {
        {
            org$pandalanguage$pandac$Type* $tmp926 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp926);
            type927 = &$s928;
            panda$core$String* $tmp930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s929, name917);
            panda$core$String* $tmp932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp930, &$s931);
            panda$core$String* $tmp933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp932, type927);
            panda$core$String* $tmp935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp933, &$s934);
            (($fn936) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp935);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp937 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp937->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp937->refCount.value = 1;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp937, name917, type927);
            result923 = $tmp937;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp940 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp941 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp940);
            value939 = $tmp941;
            panda$collections$ListView* $tmp943 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value939);
            valueVTable942 = $tmp943;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp944 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp944->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp944->refCount.value = 1;
            panda$core$String* $tmp947 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s946, $tmp947);
            panda$core$String* $tmp950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp948, &$s949);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp944, $tmp950, &$s951);
            result923 = $tmp944;
            panda$collections$ListView* $tmp953 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable952 = $tmp953;
            org$pandalanguage$pandac$ClassDecl* $tmp955 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp956 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp955);
            superCC954 = $tmp956;
            panda$core$String* $tmp959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s958, superCC954->name);
            panda$core$String* $tmp961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp959, &$s960);
            superCast957 = $tmp961;
            panda$core$String* $tmp963 = org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable962 = $tmp963;
            org$pandalanguage$pandac$Type* $tmp965 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp966 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp965);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp967 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp966);
            clConstant964 = $tmp967;
            panda$core$MutableString* $tmp969 = (panda$core$MutableString*) malloc(40);
            $tmp969->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp969->refCount.value = 1;
            panda$core$String* $tmp972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s971, result923->name);
            panda$core$String* $tmp974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp972, &$s973);
            panda$core$String* $tmp975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp974, result923->name);
            panda$core$String* $tmp977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp975, &$s976);
            panda$core$String* $tmp979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s978, clConstant964->name);
            panda$core$String* $tmp981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp979, &$s980);
            panda$core$String* $tmp982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp981, superCast957);
            panda$core$String* $tmp984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp982, &$s983);
            panda$core$String* $tmp985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp984, itable962);
            panda$core$String* $tmp987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp985, &$s986);
            panda$core$String* $tmp988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp977, $tmp987);
            panda$core$MutableString$init$panda$core$String($tmp969, $tmp988);
            code968 = $tmp969;
            separator989 = &$s990;
            ITable* $tmp992 = ((panda$collections$CollectionView*) valueVTable942)->$class->itable;
            while ($tmp992->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp992 = $tmp992->next;
            }
            $fn994 $tmp993 = $tmp992->methods[0];
            panda$core$Int64 $tmp995 = $tmp993(((panda$collections$CollectionView*) valueVTable942));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp991, ((panda$core$Int64) { 0 }), $tmp995, ((panda$core$Bit) { false }));
            int64_t $tmp997 = $tmp991.min.value;
            panda$core$Int64 i996 = { $tmp997 };
            int64_t $tmp999 = $tmp991.max.value;
            bool $tmp1000 = $tmp991.inclusive.value;
            if ($tmp1000) goto $l1007; else goto $l1008;
            $l1007:;
            if ($tmp997 <= $tmp999) goto $l1001; else goto $l1003;
            $l1008:;
            if ($tmp997 < $tmp999) goto $l1001; else goto $l1003;
            $l1001:;
            {
                ITable* $tmp1010 = vtable952->$class->itable;
                while ($tmp1010->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1010 = $tmp1010->next;
                }
                $fn1012 $tmp1011 = $tmp1010->methods[0];
                panda$core$Object* $tmp1013 = $tmp1011(vtable952, i996);
                m1009 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1013);
                if (((panda$core$Bit) { ((panda$core$Object*) m1009->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp1015 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1009, self->wrapperShims);
                    methodName1014 = $tmp1015;
                }
                }
                else {
                {
                    panda$core$String* $tmp1016 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1009);
                    methodName1014 = $tmp1016;
                    panda$core$Bit $tmp1017 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1009->owner);
                    if ($tmp1017.value) {
                    {
                        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1009);
                    }
                    }
                }
                }
                panda$core$String* $tmp1019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1018, separator989);
                panda$core$String* $tmp1021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1019, &$s1020);
                panda$core$String* $tmp1022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1021, methodName1014);
                panda$core$String* $tmp1024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1022, &$s1023);
                panda$core$MutableString$append$panda$core$String(code968, $tmp1024);
                separator989 = &$s1025;
            }
            $l1004:;
            int64_t $tmp1027 = $tmp999 - i996.value;
            if ($tmp1000) goto $l1028; else goto $l1029;
            $l1028:;
            if ($tmp1027 >= 1) goto $l1026; else goto $l1003;
            $l1029:;
            if ($tmp1027 > 1) goto $l1026; else goto $l1003;
            $l1026:;
            i996.value += 1;
            goto $l1001;
            $l1003:;
            panda$core$MutableString$append$panda$core$String(code968, &$s1032);
            panda$core$String* $tmp1033 = panda$core$MutableString$finish$R$panda$core$String(code968);
            (($fn1034) ((panda$io$OutputStream*) self->types)->$class->vtable[16])(((panda$io$OutputStream*) self->types), $tmp1033);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name917), ((panda$core$Object*) result923));
    }
    }
    return result923;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$String* result1040;
    panda$core$Bit $tmp1035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1035.value) {
    {
        panda$core$String* $tmp1037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1036, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1037, &$s1038);
        return $tmp1039;
    }
    }
    panda$core$Object* $tmp1041 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1040 = ((panda$core$String*) $tmp1041);
    if (((panda$core$Bit) { result1040 == NULL }).value) {
    {
        panda$core$Int64 $tmp1042 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1042;
        panda$core$String* $tmp1044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1043, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1044, &$s1045);
        panda$core$String* $tmp1047 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1046, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        panda$core$String* $tmp1049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1047, &$s1048);
        result1040 = $tmp1049;
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1040));
    }
    }
    return result1040;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1050 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1050.value);
    panda$core$String* $tmp1052 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1051, $tmp1052);
    panda$core$String* $tmp1055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1053, &$s1054);
    panda$core$String* $tmp1056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1055, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1056, &$s1057);
    return $tmp1058;
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
    panda$core$String* result1059;
    panda$core$String* leftRef1061;
    panda$core$String* falseLabel1075;
    panda$core$String* rightRef1085;
    panda$core$String* $tmp1060 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1059 = $tmp1060;
    panda$core$String* $tmp1062 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1061 = $tmp1062;
    org$pandalanguage$pandac$Type* $tmp1063 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1064 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1063);
    if ($tmp1064.value) {
    {
        panda$core$String* $tmp1066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1061, &$s1065);
        leftRef1061 = $tmp1066;
    }
    }
    panda$core$String* $tmp1068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1067, result1059);
    panda$core$String* $tmp1070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1068, &$s1069);
    panda$core$String* $tmp1071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1070, leftRef1061);
    panda$core$String* $tmp1073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1071, &$s1072);
    (($fn1074) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1073);
    panda$core$String* $tmp1076 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel1075 = $tmp1076;
    panda$core$String* $tmp1078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1077, result1059);
    panda$core$String* $tmp1080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1078, &$s1079);
    panda$core$String* $tmp1081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1080, falseLabel1075);
    panda$core$String* $tmp1083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1081, &$s1082);
    (($fn1084) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1083);
    panda$core$String* $tmp1086 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1085 = $tmp1086;
    org$pandalanguage$pandac$Type* $tmp1087 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1088 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1087);
    if ($tmp1088.value) {
    {
        panda$core$String* $tmp1090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1085, &$s1089);
        rightRef1085 = $tmp1090;
    }
    }
    panda$core$String* $tmp1092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1091, result1059);
    panda$core$String* $tmp1094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1092, &$s1093);
    panda$core$String* $tmp1095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1094, rightRef1085);
    panda$core$String* $tmp1097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1095, &$s1096);
    (($fn1098) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1097);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel1075, p_out);
    return result1059;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1099;
    panda$core$String* leftRef1101;
    panda$core$String* trueLabel1115;
    panda$core$String* rightRef1125;
    panda$core$String* $tmp1100 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1099 = $tmp1100;
    panda$core$String* $tmp1102 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1101 = $tmp1102;
    org$pandalanguage$pandac$Type* $tmp1103 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1104 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1103);
    if ($tmp1104.value) {
    {
        panda$core$String* $tmp1106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1101, &$s1105);
        leftRef1101 = $tmp1106;
    }
    }
    panda$core$String* $tmp1108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1107, result1099);
    panda$core$String* $tmp1110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1108, &$s1109);
    panda$core$String* $tmp1111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1110, leftRef1101);
    panda$core$String* $tmp1113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1111, &$s1112);
    (($fn1114) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1113);
    panda$core$String* $tmp1116 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel1115 = $tmp1116;
    panda$core$String* $tmp1118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1117, result1099);
    panda$core$String* $tmp1120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1118, &$s1119);
    panda$core$String* $tmp1121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1120, trueLabel1115);
    panda$core$String* $tmp1123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1121, &$s1122);
    (($fn1124) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1123);
    panda$core$String* $tmp1126 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1125 = $tmp1126;
    org$pandalanguage$pandac$Type* $tmp1127 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1128 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1127);
    if ($tmp1128.value) {
    {
        panda$core$String* $tmp1130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1125, &$s1129);
        rightRef1125 = $tmp1130;
    }
    }
    panda$core$String* $tmp1132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1131, result1099);
    panda$core$String* $tmp1134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1132, &$s1133);
    panda$core$String* $tmp1135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1134, rightRef1125);
    panda$core$String* $tmp1137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1135, &$s1136);
    (($fn1138) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1137);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel1115, p_out);
    return result1099;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Int64 p_cl, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* cOp1139;
    panda$core$Bit logical1140;
    panda$core$String* result1158;
    logical1140 = ((panda$core$Bit) { false });
    switch (p_op.value) {
        case 51:
        {
            cOp1139 = &$s1141;
        }
        break;
        case 52:
        {
            cOp1139 = &$s1142;
        }
        break;
        case 53:
        {
            cOp1139 = &$s1143;
        }
        break;
        case 55:
        {
            cOp1139 = &$s1144;
        }
        break;
        case 54:
        {
            cOp1139 = &$s1145;
        }
        break;
        case 56:
        {
            cOp1139 = &$s1146;
        }
        break;
        case 72:
        {
            cOp1139 = &$s1147;
        }
        break;
        case 1:
        {
            cOp1139 = &$s1148;
        }
        break;
        case 67:
        {
            cOp1139 = &$s1149;
        }
        break;
        case 69:
        {
            cOp1139 = &$s1150;
        }
        break;
        case 70:
        case 71:
        {
            cOp1139 = &$s1151;
        }
        break;
        case 58:
        {
            cOp1139 = &$s1152;
            logical1140 = ((panda$core$Bit) { true });
        }
        break;
        case 59:
        {
            cOp1139 = &$s1153;
            logical1140 = ((panda$core$Bit) { true });
        }
        break;
        case 63:
        {
            cOp1139 = &$s1154;
            logical1140 = ((panda$core$Bit) { true });
        }
        break;
        case 62:
        {
            cOp1139 = &$s1155;
            logical1140 = ((panda$core$Bit) { true });
        }
        break;
        case 65:
        {
            cOp1139 = &$s1156;
            logical1140 = ((panda$core$Bit) { true });
        }
        break;
        case 64:
        {
            logical1140 = ((panda$core$Bit) { true });
            cOp1139 = &$s1157;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$String* $tmp1159 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1158 = $tmp1159;
    if (logical1140.value) {
    {
        (($fn1161) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s1160);
    }
    }
    else {
    {
        panda$core$String* $tmp1163 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp1164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1162, $tmp1163);
        panda$core$String* $tmp1166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1164, &$s1165);
        (($fn1167) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1166);
    }
    }
    panda$core$String* $tmp1169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1168, result1158);
    panda$core$String* $tmp1171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1169, &$s1170);
    panda$core$String* $tmp1172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1171, p_leftRef);
    panda$core$String* $tmp1174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1172, &$s1173);
    panda$core$String* $tmp1175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1174, cOp1139);
    panda$core$String* $tmp1177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1175, &$s1176);
    panda$core$String* $tmp1178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1177, p_rightRef);
    panda$core$String* $tmp1180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1178, &$s1179);
    (($fn1181) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1180);
    return result1158;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1182;
    panda$core$String* rightRef1184;
    panda$core$String* $tmp1183 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1182 = $tmp1183;
    panda$core$String* $tmp1185 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1184 = $tmp1185;
    panda$core$String* $tmp1187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1186, leftRef1182);
    panda$core$String* $tmp1189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1187, &$s1188);
    panda$core$String* $tmp1190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1189, rightRef1184);
    panda$core$String* $tmp1192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1190, &$s1191);
    return $tmp1192;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1193;
    panda$core$String* rightRef1195;
    panda$core$String* $tmp1194 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1193 = $tmp1194;
    panda$core$String* $tmp1196 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1195 = $tmp1196;
    panda$core$String* $tmp1198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1197, leftRef1193);
    panda$core$String* $tmp1200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1198, &$s1199);
    panda$core$String* $tmp1201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1200, rightRef1195);
    panda$core$String* $tmp1203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1201, &$s1202);
    return $tmp1203;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1209;
    panda$core$String* rightRef1211;
    panda$core$Bit $tmp1204 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, p_right->type);
    PANDA_ASSERT($tmp1204.value);
    switch (p_op.value) {
        case 66:
        {
            panda$core$String* $tmp1205 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1205;
        }
        break;
        case 68:
        {
            panda$core$String* $tmp1206 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1206;
        }
        break;
        case 60:
        {
            panda$core$String* $tmp1207 = org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1207;
        }
        break;
        case 61:
        {
            panda$core$String* $tmp1208 = org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1208;
        }
        break;
        default:
        {
            panda$core$String* $tmp1210 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1209 = $tmp1210;
            panda$core$String* $tmp1212 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1211 = $tmp1212;
            panda$core$Int64 $tmp1213 = org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_left->type);
            panda$core$String* $tmp1214 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1213, p_left->type, leftRef1209, p_op, rightRef1211, p_out);
            return $tmp1214;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp1215.value);
    panda$core$Int64 $tmp1216 = panda$collections$Array$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp1217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1216, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp1217.value);
    panda$core$Object* $tmp1218 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp1219 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1220 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1218), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp1219), p_out);
    return $tmp1220;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1221;
    panda$core$Int64 index1223;
    panda$collections$ListView* vtable1224;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1226;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1222 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1221 = $tmp1222;
    index1223 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1225 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1224 = $tmp1225;
    ITable* $tmp1227 = ((panda$collections$CollectionView*) vtable1224)->$class->itable;
    while ($tmp1227->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1227 = $tmp1227->next;
    }
    $fn1229 $tmp1228 = $tmp1227->methods[0];
    panda$core$Int64 $tmp1230 = $tmp1228(((panda$collections$CollectionView*) vtable1224));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1226, ((panda$core$Int64) { 0 }), $tmp1230, ((panda$core$Bit) { false }));
    int64_t $tmp1232 = $tmp1226.min.value;
    panda$core$Int64 i1231 = { $tmp1232 };
    int64_t $tmp1234 = $tmp1226.max.value;
    bool $tmp1235 = $tmp1226.inclusive.value;
    if ($tmp1235) goto $l1242; else goto $l1243;
    $l1242:;
    if ($tmp1232 <= $tmp1234) goto $l1236; else goto $l1238;
    $l1243:;
    if ($tmp1232 < $tmp1234) goto $l1236; else goto $l1238;
    $l1236:;
    {
        ITable* $tmp1244 = vtable1224->$class->itable;
        while ($tmp1244->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1244 = $tmp1244->next;
        }
        $fn1246 $tmp1245 = $tmp1244->methods[0];
        panda$core$Object* $tmp1247 = $tmp1245(vtable1224, i1231);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1247)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1223 = i1231;
            goto $l1238;
        }
        }
    }
    $l1239:;
    int64_t $tmp1249 = $tmp1234 - i1231.value;
    if ($tmp1235) goto $l1250; else goto $l1251;
    $l1250:;
    if ($tmp1249 >= 1) goto $l1248; else goto $l1238;
    $l1251:;
    if ($tmp1249 > 1) goto $l1248; else goto $l1238;
    $l1248:;
    i1231.value += 1;
    goto $l1236;
    $l1238:;
    panda$core$Bit $tmp1254 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1223, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1254.value);
    org$pandalanguage$pandac$Type* $tmp1256 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1257 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1256);
    panda$core$String* $tmp1258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1255, $tmp1257);
    panda$core$String* $tmp1260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1258, &$s1259);
    panda$core$String* $tmp1261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1260, p_target);
    panda$core$String* $tmp1263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1261, &$s1262);
    panda$core$String* $tmp1264 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1263, ((panda$core$Object*) wrap_panda$core$Int64(index1223)));
    panda$core$String* $tmp1266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1264, &$s1265);
    return $tmp1266;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1267;
    panda$core$String* itable1269;
    panda$core$Int64 index1299;
    panda$collections$ListView* vtable1300;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1302;
    panda$core$String* result1339;
    panda$core$String* methodType1341;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1268 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1267 = $tmp1268;
    panda$core$String* $tmp1270 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    itable1269 = $tmp1270;
    panda$core$String* $tmp1272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1271, itable1269);
    panda$core$String* $tmp1274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1272, &$s1273);
    panda$core$String* $tmp1275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1274, p_target);
    panda$core$String* $tmp1277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1275, &$s1276);
    (($fn1278) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1277);
    panda$core$String* $tmp1280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1279, itable1269);
    panda$core$String* $tmp1282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1280, &$s1281);
    panda$core$String* $tmp1283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1282, cc1267->name);
    panda$core$String* $tmp1285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1283, &$s1284);
    (($fn1286) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1285);
    panda$core$Int64 $tmp1287 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1287;
    panda$core$String* $tmp1289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1288, itable1269);
    panda$core$String* $tmp1291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1289, &$s1290);
    panda$core$String* $tmp1292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1291, itable1269);
    panda$core$String* $tmp1294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1292, &$s1293);
    (($fn1295) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1294);
    panda$core$Int64 $tmp1296 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1296;
    (($fn1298) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1297);
    index1299 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1301 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1300 = $tmp1301;
    ITable* $tmp1303 = ((panda$collections$CollectionView*) vtable1300)->$class->itable;
    while ($tmp1303->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1303 = $tmp1303->next;
    }
    $fn1305 $tmp1304 = $tmp1303->methods[0];
    panda$core$Int64 $tmp1306 = $tmp1304(((panda$collections$CollectionView*) vtable1300));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1302, ((panda$core$Int64) { 0 }), $tmp1306, ((panda$core$Bit) { false }));
    int64_t $tmp1308 = $tmp1302.min.value;
    panda$core$Int64 i1307 = { $tmp1308 };
    int64_t $tmp1310 = $tmp1302.max.value;
    bool $tmp1311 = $tmp1302.inclusive.value;
    if ($tmp1311) goto $l1318; else goto $l1319;
    $l1318:;
    if ($tmp1308 <= $tmp1310) goto $l1312; else goto $l1314;
    $l1319:;
    if ($tmp1308 < $tmp1310) goto $l1312; else goto $l1314;
    $l1312:;
    {
        ITable* $tmp1320 = vtable1300->$class->itable;
        while ($tmp1320->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1320 = $tmp1320->next;
        }
        $fn1322 $tmp1321 = $tmp1320->methods[0];
        panda$core$Object* $tmp1323 = $tmp1321(vtable1300, i1307);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1323)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1299 = i1307;
            goto $l1314;
        }
        }
    }
    $l1315:;
    int64_t $tmp1325 = $tmp1310 - i1307.value;
    if ($tmp1311) goto $l1326; else goto $l1327;
    $l1326:;
    if ($tmp1325 >= 1) goto $l1324; else goto $l1314;
    $l1327:;
    if ($tmp1325 > 1) goto $l1324; else goto $l1314;
    $l1324:;
    i1307.value += 1;
    goto $l1312;
    $l1314:;
    org$pandalanguage$pandac$Type* $tmp1330 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp1331 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1330);
    panda$collections$ListView* $tmp1332 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp1331);
    ITable* $tmp1333 = ((panda$collections$CollectionView*) $tmp1332)->$class->itable;
    while ($tmp1333->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1333 = $tmp1333->next;
    }
    $fn1335 $tmp1334 = $tmp1333->methods[0];
    panda$core$Int64 $tmp1336 = $tmp1334(((panda$collections$CollectionView*) $tmp1332));
    panda$core$Int64 $tmp1337 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index1299, $tmp1336);
    index1299 = $tmp1337;
    panda$core$Bit $tmp1338 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1299, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1338.value);
    panda$core$String* $tmp1340 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1339 = $tmp1340;
    org$pandalanguage$pandac$Type* $tmp1342 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1343 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1342);
    methodType1341 = $tmp1343;
    panda$core$String* $tmp1345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1344, methodType1341);
    panda$core$String* $tmp1347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1345, &$s1346);
    panda$core$String* $tmp1348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1347, result1339);
    panda$core$String* $tmp1350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1348, &$s1349);
    panda$core$String* $tmp1351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1350, itable1269);
    panda$core$String* $tmp1353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1351, &$s1352);
    panda$core$String* $tmp1354 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1353, ((panda$core$Object*) wrap_panda$core$Int64(index1299)));
    panda$core$String* $tmp1356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1354, &$s1355);
    (($fn1357) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1356);
    return result1339;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1359 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp1358 = $tmp1359.value;
    if (!$tmp1358) goto $l1360;
    panda$core$Bit $tmp1361 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp1358 = $tmp1361.value;
    $l1360:;
    panda$core$Bit $tmp1362 = { $tmp1358 };
    if ($tmp1362.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp1363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp1363.value) {
        {
            panda$core$String* $tmp1364 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1364;
        }
        }
        else {
        {
            panda$core$String* $tmp1365 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1365;
        }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp1366 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
        if ($tmp1366.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
        }
        }
        panda$core$String* $tmp1367 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp1367;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m1368;
    panda$core$String* $match$862_91369;
    panda$core$String* count1374;
    panda$core$Int64 elementSize1380;
    panda$core$String* ptr1399;
    panda$core$String* ptr1410;
    panda$core$String* index1413;
    panda$core$String* ptr1427;
    panda$core$String* count1430;
    panda$core$Int64 elementSize1436;
    panda$core$String* ptr1458;
    panda$core$String* offset1461;
    m1368 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$862_91369 = ((org$pandalanguage$pandac$Symbol*) m1368->value)->name;
        panda$core$Bit $tmp1371 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91369, &$s1370);
        if ($tmp1371.value) {
        {
            panda$core$Int64 $tmp1372 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1372, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1373.value);
            panda$core$Object* $tmp1375 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1376 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1375), p_out);
            count1374 = $tmp1376;
            org$pandalanguage$pandac$Type* $tmp1377 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1368);
            panda$core$Int64 $tmp1378 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1377->subtypes);
            panda$core$Bit $tmp1379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1378, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1379.value);
            org$pandalanguage$pandac$Type* $tmp1381 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1368);
            panda$core$Object* $tmp1382 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1381->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1383 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1382));
            elementSize1380 = $tmp1383;
            panda$core$String* $tmp1385 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1384, $tmp1385);
            panda$core$String* $tmp1388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1386, &$s1387);
            panda$core$String* $tmp1389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1388, count1374);
            panda$core$String* $tmp1391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1389, &$s1390);
            panda$core$String* $tmp1392 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1391, ((panda$core$Object*) wrap_panda$core$Int64(elementSize1380)));
            panda$core$String* $tmp1394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1392, &$s1393);
            return $tmp1394;
        }
        }
        else {
        panda$core$Bit $tmp1396 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91369, &$s1395);
        if ($tmp1396.value) {
        {
            panda$core$Int64 $tmp1397 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1397, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1398.value);
            panda$core$Object* $tmp1400 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1401 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1400), p_out);
            ptr1399 = $tmp1401;
            panda$core$String* $tmp1403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1402, ptr1399);
            panda$core$String* $tmp1405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1403, &$s1404);
            return $tmp1405;
        }
        }
        else {
        panda$core$Bit $tmp1407 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91369, &$s1406);
        if ($tmp1407.value) {
        {
            panda$core$Int64 $tmp1408 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1408, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1409.value);
            panda$core$Object* $tmp1411 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1412 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1411), p_out);
            ptr1410 = $tmp1412;
            panda$core$Object* $tmp1414 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1415 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1414), p_out);
            index1413 = $tmp1415;
            panda$core$String* $tmp1417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1416, ptr1410);
            panda$core$String* $tmp1419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1417, &$s1418);
            panda$core$String* $tmp1420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1419, index1413);
            panda$core$String* $tmp1422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1420, &$s1421);
            return $tmp1422;
        }
        }
        else {
        panda$core$Bit $tmp1424 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91369, &$s1423);
        if ($tmp1424.value) {
        {
            panda$core$Int64 $tmp1425 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1425, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1426.value);
            panda$core$Object* $tmp1428 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1429 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1428), p_out);
            ptr1427 = $tmp1429;
            panda$core$Object* $tmp1431 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1432 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1431), p_out);
            count1430 = $tmp1432;
            org$pandalanguage$pandac$Type* $tmp1433 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1368);
            panda$core$Int64 $tmp1434 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1433->subtypes);
            panda$core$Bit $tmp1435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1434, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1435.value);
            org$pandalanguage$pandac$Type* $tmp1437 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1368);
            panda$core$Object* $tmp1438 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1437->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1439 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1438));
            elementSize1436 = $tmp1439;
            panda$core$String* $tmp1441 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1440, $tmp1441);
            panda$core$String* $tmp1444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1442, &$s1443);
            panda$core$String* $tmp1445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1444, ptr1427);
            panda$core$String* $tmp1447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1445, &$s1446);
            panda$core$String* $tmp1448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1447, count1430);
            panda$core$String* $tmp1450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1448, &$s1449);
            panda$core$String* $tmp1451 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1450, ((panda$core$Object*) wrap_panda$core$Int64(elementSize1436)));
            panda$core$String* $tmp1453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1451, &$s1452);
            return $tmp1453;
        }
        }
        else {
        panda$core$Bit $tmp1455 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91369, &$s1454);
        if ($tmp1455.value) {
        {
            panda$core$Int64 $tmp1456 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1456, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1457.value);
            panda$core$Object* $tmp1459 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1460 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1459), p_out);
            ptr1458 = $tmp1460;
            panda$core$Object* $tmp1462 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1463 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1462), p_out);
            offset1461 = $tmp1463;
            panda$core$String* $tmp1465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1464, ptr1458);
            panda$core$String* $tmp1467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1465, &$s1466);
            panda$core$String* $tmp1468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1467, offset1461);
            panda$core$String* $tmp1470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1468, &$s1469);
            return $tmp1470;
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
    org$pandalanguage$pandac$MethodDecl* m1472;
    panda$core$String* bit1483;
    panda$core$String* result1487;
    panda$core$String* bit1501;
    panda$core$String* result1505;
    panda$collections$Array* args1515;
    org$pandalanguage$pandac$Type* actualMethodType1519;
    panda$core$String* actualResultType1520;
    panda$core$Bit isSuper1521;
    panda$core$Int64 offset1541;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1546;
    panda$core$String* arg1561;
    panda$core$String* target1582;
    panda$core$String* methodRef1586;
    panda$core$Bit indirect1588;
    panda$core$String* result1590;
    panda$core$String* separator1592;
    panda$core$String* indirectVar1594;
    panda$collections$Iterator* arg$Iter1623;
    panda$core$String* arg1635;
    panda$core$Bit $tmp1471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp1471.value);
    m1472 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp1474 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1472->owner)->name, &$s1473);
    if ($tmp1474.value) {
    {
        panda$core$String* $tmp1475 = org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp1475;
    }
    }
    panda$core$Bit $tmp1476 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1472->owner);
    if ($tmp1476.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1472);
    }
    }
    panda$core$Bit $tmp1478 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1472->owner)->name, &$s1477);
    if ($tmp1478.value) {
    {
        panda$core$Bit $tmp1480 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1472)->name, &$s1479);
        if ($tmp1480.value) {
        {
            panda$core$Int64 $tmp1481 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1481, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1482.value);
            panda$core$Object* $tmp1484 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1485 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1486 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1484), ((org$pandalanguage$pandac$IRNode*) $tmp1485), p_out);
            bit1483 = $tmp1486;
            panda$core$String* $tmp1488 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1487 = $tmp1488;
            panda$core$String* $tmp1490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1489, result1487);
            panda$core$String* $tmp1492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1490, &$s1491);
            panda$core$String* $tmp1493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1492, bit1483);
            panda$core$String* $tmp1495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1493, &$s1494);
            (($fn1496) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1495);
            return result1487;
        }
        }
        panda$core$Bit $tmp1498 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1472)->name, &$s1497);
        if ($tmp1498.value) {
        {
            panda$core$Int64 $tmp1499 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1499, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1500.value);
            panda$core$Object* $tmp1502 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1503 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1504 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1502), ((org$pandalanguage$pandac$IRNode*) $tmp1503), p_out);
            bit1501 = $tmp1504;
            panda$core$String* $tmp1506 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1505 = $tmp1506;
            panda$core$String* $tmp1508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1507, result1505);
            panda$core$String* $tmp1510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1508, &$s1509);
            panda$core$String* $tmp1511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1510, bit1501);
            panda$core$String* $tmp1513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1511, &$s1512);
            (($fn1514) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1513);
            return result1505;
        }
        }
    }
    }
    panda$collections$Array* $tmp1516 = (panda$collections$Array*) malloc(40);
    $tmp1516->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1516->refCount.value = 1;
    panda$core$Int64 $tmp1518 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp1516, $tmp1518);
    args1515 = $tmp1516;
    panda$core$Int64 $tmp1523 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp1524 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1523, ((panda$core$Int64) { 1 }));
    bool $tmp1522 = $tmp1524.value;
    if (!$tmp1522) goto $l1525;
    panda$core$Object* $tmp1526 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp1527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1526)->kind, ((panda$core$Int64) { 1024 }));
    $tmp1522 = $tmp1527.value;
    $l1525:;
    panda$core$Bit $tmp1528 = { $tmp1522 };
    isSuper1521 = $tmp1528;
    panda$core$Bit $tmp1530 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper1521);
    bool $tmp1529 = $tmp1530.value;
    if (!$tmp1529) goto $l1531;
    panda$core$Bit $tmp1532 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m1472);
    $tmp1529 = $tmp1532.value;
    $l1531:;
    panda$core$Bit $tmp1533 = { $tmp1529 };
    if ($tmp1533.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1534 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1472);
        actualMethodType1519 = $tmp1534;
        panda$core$Int64 $tmp1535 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1519->subtypes);
        panda$core$Int64 $tmp1536 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1535, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1537 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1519->subtypes, $tmp1536);
        panda$core$String* $tmp1538 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1537));
        actualResultType1520 = $tmp1538;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp1539 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1472);
        actualMethodType1519 = $tmp1539;
        panda$core$String* $tmp1540 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType1520 = $tmp1540;
    }
    }
    panda$core$Int64 $tmp1542 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp1543 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1519->subtypes);
    panda$core$Int64 $tmp1544 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1542, $tmp1543);
    panda$core$Int64 $tmp1545 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1544, ((panda$core$Int64) { 1 }));
    offset1541 = $tmp1545;
    panda$core$Int64 $tmp1547 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1546, ((panda$core$Int64) { 0 }), $tmp1547, ((panda$core$Bit) { false }));
    int64_t $tmp1549 = $tmp1546.min.value;
    panda$core$Int64 i1548 = { $tmp1549 };
    int64_t $tmp1551 = $tmp1546.max.value;
    bool $tmp1552 = $tmp1546.inclusive.value;
    if ($tmp1552) goto $l1559; else goto $l1560;
    $l1559:;
    if ($tmp1549 <= $tmp1551) goto $l1553; else goto $l1555;
    $l1560:;
    if ($tmp1549 < $tmp1551) goto $l1553; else goto $l1555;
    $l1553:;
    {
        panda$core$Object* $tmp1562 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1548);
        panda$core$String* $tmp1563 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1562), p_out);
        arg1561 = $tmp1563;
        panda$core$Bit $tmp1565 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i1548, offset1541);
        bool $tmp1564 = $tmp1565.value;
        if (!$tmp1564) goto $l1566;
        panda$core$Int64 $tmp1567 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1548, offset1541);
        panda$core$Object* $tmp1568 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1519->subtypes, $tmp1567);
        panda$core$Object* $tmp1569 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1548);
        panda$core$Bit $tmp1570 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1568), ((org$pandalanguage$pandac$IRNode*) $tmp1569)->type);
        $tmp1564 = $tmp1570.value;
        $l1566:;
        panda$core$Bit $tmp1571 = { $tmp1564 };
        if ($tmp1571.value) {
        {
            panda$core$Object* $tmp1572 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1548);
            panda$core$Int64 $tmp1573 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1548, offset1541);
            panda$core$Object* $tmp1574 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1519->subtypes, $tmp1573);
            panda$core$String* $tmp1575 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg1561, ((org$pandalanguage$pandac$IRNode*) $tmp1572)->type, ((org$pandalanguage$pandac$Type*) $tmp1574), p_out);
            arg1561 = $tmp1575;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args1515, ((panda$core$Object*) arg1561));
    }
    $l1556:;
    int64_t $tmp1577 = $tmp1551 - i1548.value;
    if ($tmp1552) goto $l1578; else goto $l1579;
    $l1578:;
    if ($tmp1577 >= 1) goto $l1576; else goto $l1555;
    $l1579:;
    if ($tmp1577 > 1) goto $l1576; else goto $l1555;
    $l1576:;
    i1548.value += 1;
    goto $l1553;
    $l1555:;
    panda$core$Int64 $tmp1583 = panda$collections$Array$get_count$R$panda$core$Int64(args1515);
    panda$core$Bit $tmp1584 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1583, ((panda$core$Int64) { 0 }));
    if ($tmp1584.value) {
    {
        panda$core$Object* $tmp1585 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args1515, ((panda$core$Int64) { 0 }));
        target1582 = ((panda$core$String*) $tmp1585);
    }
    }
    else {
    {
        target1582 = NULL;
    }
    }
    panda$core$String* $tmp1587 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target1582, m1472, isSuper1521, p_out);
    methodRef1586 = $tmp1587;
    panda$core$Bit $tmp1589 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m1472);
    indirect1588 = $tmp1589;
    panda$core$String* $tmp1591 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1590 = $tmp1591;
    separator1592 = &$s1593;
    if (indirect1588.value) {
    {
        panda$core$String* $tmp1596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1595, actualResultType1520);
        panda$core$String* $tmp1598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1596, &$s1597);
        panda$core$String* $tmp1599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1598, result1590);
        panda$core$String* $tmp1601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1599, &$s1600);
        (($fn1602) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1601);
        panda$core$String* $tmp1604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1603, methodRef1586);
        panda$core$String* $tmp1606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1604, &$s1605);
        panda$core$String* $tmp1607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1606, result1590);
        panda$core$String* $tmp1609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1607, &$s1608);
        (($fn1610) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1609);
        separator1592 = &$s1611;
    }
    }
    else {
    {
        panda$core$String* $tmp1613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1612, actualResultType1520);
        panda$core$String* $tmp1615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1613, &$s1614);
        panda$core$String* $tmp1616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1615, result1590);
        panda$core$String* $tmp1618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1616, &$s1617);
        panda$core$String* $tmp1619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1618, methodRef1586);
        panda$core$String* $tmp1621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1619, &$s1620);
        (($fn1622) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1621);
    }
    }
    {
        ITable* $tmp1624 = ((panda$collections$Iterable*) args1515)->$class->itable;
        while ($tmp1624->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1624 = $tmp1624->next;
        }
        $fn1626 $tmp1625 = $tmp1624->methods[0];
        panda$collections$Iterator* $tmp1627 = $tmp1625(((panda$collections$Iterable*) args1515));
        arg$Iter1623 = $tmp1627;
        $l1628:;
        ITable* $tmp1630 = arg$Iter1623->$class->itable;
        while ($tmp1630->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1630 = $tmp1630->next;
        }
        $fn1632 $tmp1631 = $tmp1630->methods[0];
        panda$core$Bit $tmp1633 = $tmp1631(arg$Iter1623);
        panda$core$Bit $tmp1634 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1633);
        if (!$tmp1634.value) goto $l1629;
        {
            ITable* $tmp1636 = arg$Iter1623->$class->itable;
            while ($tmp1636->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1636 = $tmp1636->next;
            }
            $fn1638 $tmp1637 = $tmp1636->methods[1];
            panda$core$Object* $tmp1639 = $tmp1637(arg$Iter1623);
            arg1635 = ((panda$core$String*) $tmp1639);
            panda$core$String* $tmp1641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1640, separator1592);
            panda$core$String* $tmp1643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1641, &$s1642);
            panda$core$String* $tmp1644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1643, arg1635);
            panda$core$String* $tmp1646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1644, &$s1645);
            (($fn1647) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1646);
            separator1592 = &$s1648;
        }
        goto $l1628;
        $l1629:;
    }
    (($fn1650) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1649);
    panda$core$String* $tmp1651 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp1652 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp1651, actualResultType1520);
    if ($tmp1652.value) {
    {
        panda$core$Int64 $tmp1653 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1519->subtypes);
        panda$core$Int64 $tmp1654 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1653, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1655 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1519->subtypes, $tmp1654);
        panda$core$String* $tmp1656 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result1590, ((org$pandalanguage$pandac$Type*) $tmp1655), p_call->type, p_out);
        return $tmp1656;
    }
    }
    return result1590;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* unwrapped1658;
    panda$core$String* nonNullValue1661;
    panda$core$String* wrapped1671;
    panda$core$Bit $tmp1657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1657.value) {
    {
        panda$core$Object* $tmp1659 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1660 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1659), p_out);
        unwrapped1658 = $tmp1660;
        panda$core$Object* $tmp1662 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1663 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped1658, ((org$pandalanguage$pandac$Type*) $tmp1662), p_dstType, p_out);
        nonNullValue1661 = $tmp1663;
        panda$core$String* $tmp1665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1664, p_value);
        panda$core$String* $tmp1667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1665, &$s1666);
        panda$core$String* $tmp1668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1667, nonNullValue1661);
        panda$core$String* $tmp1670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1668, &$s1669);
        return $tmp1670;
    }
    }
    panda$core$String* $tmp1673 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1672, $tmp1673);
    panda$core$String* $tmp1676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1674, &$s1675);
    org$pandalanguage$pandac$ClassDecl* $tmp1677 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    panda$core$String* $tmp1678 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1677)->name);
    panda$core$String* $tmp1679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1676, $tmp1678);
    panda$core$String* $tmp1681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1679, &$s1680);
    panda$core$String* $tmp1683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1682, p_value);
    panda$core$String* $tmp1685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1683, &$s1684);
    panda$core$String* $tmp1686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1681, $tmp1685);
    wrapped1671 = $tmp1686;
    panda$core$Bit $tmp1687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1687.value) {
    {
        panda$core$String* $tmp1689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1688, p_value);
        panda$core$String* $tmp1691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1689, &$s1690);
        panda$core$String* $tmp1692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1691, wrapped1671);
        panda$core$String* $tmp1694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1692, &$s1693);
        return $tmp1694;
    }
    }
    return wrapped1671;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field1698;
    org$pandalanguage$pandac$ClassDecl* cl1701;
    panda$core$String* base1704;
    panda$core$Bit $tmp1695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp1695.value);
    panda$core$Int64 $tmp1696 = panda$collections$Array$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp1697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1696, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1697.value);
    field1698 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$Bit $tmp1699 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field1698->annotations);
    if ($tmp1699.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field1698->value != NULL }).value);
        panda$core$String* $tmp1700 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field1698->value, p_out);
        return $tmp1700;
    }
    }
    panda$core$Object* $tmp1702 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp1703 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp1702)->type);
    cl1701 = $tmp1703;
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl1701);
    panda$core$Object* $tmp1705 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1706 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1705), p_out);
    base1704 = $tmp1706;
    PANDA_ASSERT(((panda$core$Bit) { cl1701 != NULL }).value);
    panda$core$Bit $tmp1707 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1701);
    if ($tmp1707.value) {
    {
        panda$core$String* $tmp1709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1708, base1704);
        panda$core$String* $tmp1711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1709, &$s1710);
        panda$core$String* $tmp1712 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1698)->name);
        panda$core$String* $tmp1713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1711, $tmp1712);
        panda$core$String* $tmp1715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1713, &$s1714);
        return $tmp1715;
    }
    }
    panda$core$String* $tmp1717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1716, base1704);
    panda$core$String* $tmp1719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1717, &$s1718);
    panda$core$String* $tmp1720 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1698)->name);
    panda$core$String* $tmp1721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1719, $tmp1720);
    panda$core$String* $tmp1723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1721, &$s1722);
    return $tmp1723;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1724;
    panda$core$String* wrapped1734;
    panda$core$String* nonNullValue1737;
    panda$core$String* $tmp1726 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1725, $tmp1726);
    panda$core$String* $tmp1729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1727, &$s1728);
    panda$core$String* $tmp1730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1729, p_value);
    panda$core$String* $tmp1732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1730, &$s1731);
    result1724 = $tmp1732;
    panda$core$Bit $tmp1733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1733.value) {
    {
        panda$core$Object* $tmp1735 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1736 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1735), p_out);
        wrapped1734 = $tmp1736;
        panda$core$Object* $tmp1738 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1739 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped1734, ((org$pandalanguage$pandac$Type*) $tmp1738), p_dstType, p_out);
        nonNullValue1737 = $tmp1739;
        panda$core$String* $tmp1741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1740, p_value);
        panda$core$String* $tmp1743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1741, &$s1742);
        panda$core$String* $tmp1744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1743, nonNullValue1737);
        panda$core$String* $tmp1746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1744, &$s1745);
        panda$core$String* $tmp1747 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp1748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1746, $tmp1747);
        panda$core$String* $tmp1750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1748, &$s1749);
        return $tmp1750;
    }
    }
    return result1724;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1752 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1751, $tmp1752);
    panda$core$String* $tmp1755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1753, &$s1754);
    panda$core$String* $tmp1756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1755, p_value);
    panda$core$String* $tmp1758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1756, &$s1757);
    return $tmp1758;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1760 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1759, $tmp1760);
    panda$core$String* $tmp1763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1761, &$s1762);
    panda$core$String* $tmp1764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1763, p_value);
    panda$core$String* $tmp1766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1764, &$s1765);
    return $tmp1766;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op1767;
    org$pandalanguage$pandac$ClassDecl* srcClass1778;
    org$pandalanguage$pandac$ClassDecl* targetClass1780;
    panda$core$String* srcType1819;
    panda$core$String* dstType1821;
    panda$core$Bit $tmp1768 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp1768.value) {
    {
        panda$core$Bit $tmp1769 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp1769.value);
        panda$core$String* $tmp1771 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
        panda$core$String* $tmp1772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1770, $tmp1771);
        panda$core$String* $tmp1774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1772, &$s1773);
        panda$core$String* $tmp1775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1774, p_value);
        panda$core$String* $tmp1777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1775, &$s1776);
        return $tmp1777;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1779 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass1778 = $tmp1779;
        PANDA_ASSERT(((panda$core$Bit) { srcClass1778 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp1781 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass1780 = $tmp1781;
        PANDA_ASSERT(((panda$core$Bit) { targetClass1780 != NULL }).value);
        panda$core$Bit $tmp1783 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1778);
        bool $tmp1782 = $tmp1783.value;
        if (!$tmp1782) goto $l1784;
        panda$core$Bit $tmp1785 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1780);
        panda$core$Bit $tmp1786 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1785);
        $tmp1782 = $tmp1786.value;
        $l1784:;
        panda$core$Bit $tmp1787 = { $tmp1782 };
        if ($tmp1787.value) {
        {
            panda$core$String* $tmp1788 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1788;
        }
        }
        else {
        panda$core$Bit $tmp1790 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1778);
        panda$core$Bit $tmp1791 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1790);
        bool $tmp1789 = $tmp1791.value;
        if (!$tmp1789) goto $l1792;
        panda$core$Bit $tmp1793 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1780);
        $tmp1789 = $tmp1793.value;
        $l1792:;
        panda$core$Bit $tmp1794 = { $tmp1789 };
        if ($tmp1794.value) {
        {
            panda$core$String* $tmp1795 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1795;
        }
        }
        else {
        panda$core$Bit $tmp1798 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1778);
        bool $tmp1797 = $tmp1798.value;
        if (!$tmp1797) goto $l1799;
        panda$core$Bit $tmp1800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1797 = $tmp1800.value;
        $l1799:;
        panda$core$Bit $tmp1801 = { $tmp1797 };
        bool $tmp1796 = $tmp1801.value;
        if (!$tmp1796) goto $l1802;
        panda$core$Object* $tmp1803 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1804 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1803), p_src);
        $tmp1796 = $tmp1804.value;
        $l1802:;
        panda$core$Bit $tmp1805 = { $tmp1796 };
        if ($tmp1805.value) {
        {
            panda$core$String* $tmp1806 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1806;
        }
        }
        else {
        panda$core$Bit $tmp1809 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1780);
        bool $tmp1808 = $tmp1809.value;
        if (!$tmp1808) goto $l1810;
        panda$core$Bit $tmp1811 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1808 = $tmp1811.value;
        $l1810:;
        panda$core$Bit $tmp1812 = { $tmp1808 };
        bool $tmp1807 = $tmp1812.value;
        if (!$tmp1807) goto $l1813;
        panda$core$Object* $tmp1814 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1815 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1814), p_target);
        $tmp1807 = $tmp1815.value;
        $l1813:;
        panda$core$Bit $tmp1816 = { $tmp1807 };
        if ($tmp1816.value) {
        {
            panda$core$String* $tmp1817 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1817;
        }
        }
        }
        }
        }
        op1767 = &$s1818;
    }
    }
    panda$core$String* $tmp1820 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType1819 = $tmp1820;
    panda$core$String* $tmp1822 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType1821 = $tmp1822;
    panda$core$Bit $tmp1823 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType1819, dstType1821);
    if ($tmp1823.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp1825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1824, dstType1821);
    panda$core$String* $tmp1827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1825, &$s1826);
    panda$core$String* $tmp1828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1827, p_value);
    panda$core$String* $tmp1830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1828, &$s1829);
    return $tmp1830;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base1834;
    panda$core$Bit $tmp1831 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp1831.value);
    panda$core$Int64 $tmp1832 = panda$collections$Array$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp1833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1832, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1833.value);
    panda$core$Object* $tmp1835 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1836 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1835), p_out);
    base1834 = $tmp1836;
    panda$core$Object* $tmp1837 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1838 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base1834, ((org$pandalanguage$pandac$IRNode*) $tmp1837)->type, p_cast->type, p_out);
    return $tmp1838;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl1842;
    panda$core$String* t1844;
    panda$core$String* value1857;
    panda$core$String* tmp1871;
    panda$core$String* result1889;
    panda$core$String* classPtr1910;
    panda$core$String* className1912;
    panda$core$Bit $tmp1839 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp1839.value);
    panda$core$Int64 $tmp1840 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp1841 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1840, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1841.value);
    org$pandalanguage$pandac$ClassDecl* $tmp1843 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl1842 = $tmp1843;
    PANDA_ASSERT(((panda$core$Bit) { cl1842 != NULL }).value);
    panda$core$String* $tmp1845 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t1844 = $tmp1845;
    panda$core$Bit $tmp1847 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    bool $tmp1846 = $tmp1847.value;
    if ($tmp1846) goto $l1848;
    org$pandalanguage$pandac$Type* $tmp1849 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1850 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp1849);
    $tmp1846 = $tmp1850.value;
    $l1848:;
    panda$core$Bit $tmp1851 = { $tmp1846 };
    if ($tmp1851.value) {
    {
        panda$core$Int64 $tmp1852 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp1853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1852, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp1853.value);
        panda$core$Object* $tmp1854 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp1855 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1854)->children);
        panda$core$Bit $tmp1856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1855, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp1856.value);
        panda$core$Object* $tmp1858 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp1859 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp1858)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1860 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1859), p_out);
        value1857 = $tmp1860;
        panda$core$String* $tmp1862 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        panda$core$String* $tmp1863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1861, $tmp1862);
        panda$core$String* $tmp1865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1863, &$s1864);
        panda$core$String* $tmp1866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1865, value1857);
        panda$core$String* $tmp1868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1866, &$s1867);
        return $tmp1868;
    }
    }
    panda$core$Bit $tmp1869 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1842);
    if ($tmp1869.value) {
    {
        panda$core$Int64 $tmp1870 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1870;
        panda$core$String* $tmp1873 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1872, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        panda$core$String* $tmp1875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1873, &$s1874);
        tmp1871 = $tmp1875;
        panda$core$String* $tmp1877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1876, t1844);
        panda$core$String* $tmp1879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1877, &$s1878);
        panda$core$String* $tmp1880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1879, tmp1871);
        panda$core$String* $tmp1882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1880, &$s1881);
        (($fn1883) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1882);
        panda$core$Object* $tmp1884 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1885, tmp1871);
        panda$core$String* $tmp1888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1886, &$s1887);
        org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp1884), $tmp1888, p_out);
        return tmp1871;
    }
    }
    panda$core$String* $tmp1890 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1889 = $tmp1890;
    panda$core$String* $tmp1892 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp1893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1891, $tmp1892);
    panda$core$String* $tmp1895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1893, &$s1894);
    panda$core$String* $tmp1896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1895, result1889);
    panda$core$String* $tmp1898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1896, &$s1897);
    panda$core$String* $tmp1899 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp1900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1898, $tmp1899);
    panda$core$String* $tmp1902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1900, &$s1901);
    panda$core$Int64 $tmp1904 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp1905 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1903, ((panda$core$Object*) wrap_panda$core$Int64($tmp1904)));
    panda$core$String* $tmp1907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1905, &$s1906);
    panda$core$String* $tmp1908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1902, $tmp1907);
    (($fn1909) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1908);
    panda$core$String* $tmp1911 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr1910 = $tmp1911;
    panda$core$Bit $tmp1913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    if ($tmp1913.value) {
    {
        panda$core$Object* $tmp1914 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1915 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1914));
        className1912 = $tmp1915;
    }
    }
    else {
    {
        panda$core$String* $tmp1916 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className1912 = $tmp1916;
    }
    }
    panda$core$String* $tmp1918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1917, result1889);
    panda$core$String* $tmp1920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1918, &$s1919);
    panda$core$String* $tmp1921 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) cl1842)->name);
    panda$core$String* $tmp1922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1920, $tmp1921);
    panda$core$String* $tmp1924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1922, &$s1923);
    (($fn1925) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1924);
    panda$core$String* $tmp1927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1926, result1889);
    panda$core$String* $tmp1929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1927, &$s1928);
    (($fn1930) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1929);
    panda$core$Object* $tmp1931 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1932, result1889);
    panda$core$String* $tmp1935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1933, &$s1934);
    org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp1931), $tmp1935, p_out);
    return result1889;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1936 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    return $tmp1936;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1938 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp1939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1937, $tmp1938);
    return $tmp1939;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s1940;
    }
    }
    return &$s1941;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1942 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    return $tmp1942;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1944;
    panda$collections$Iterator* raw$Iter1957;
    panda$core$Char8 raw1970;
    panda$core$UInt8 c1975;
    panda$core$Int64 $tmp1943 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp1943;
    panda$core$String* $tmp1946 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1945, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp1948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1946, &$s1947);
    result1944 = $tmp1948;
    org$pandalanguage$pandac$Type* $tmp1949 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1949);
    panda$core$String* $tmp1951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1950, result1944);
    panda$core$String* $tmp1953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1951, &$s1952);
    panda$core$String* $tmp1955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1953, &$s1954);
    (($fn1956) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp1955);
    {
        panda$collections$ListView* $tmp1958 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp1959 = ((panda$collections$Iterable*) $tmp1958)->$class->itable;
        while ($tmp1959->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1959 = $tmp1959->next;
        }
        $fn1961 $tmp1960 = $tmp1959->methods[0];
        panda$collections$Iterator* $tmp1962 = $tmp1960(((panda$collections$Iterable*) $tmp1958));
        raw$Iter1957 = $tmp1962;
        $l1963:;
        ITable* $tmp1965 = raw$Iter1957->$class->itable;
        while ($tmp1965->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1965 = $tmp1965->next;
        }
        $fn1967 $tmp1966 = $tmp1965->methods[0];
        panda$core$Bit $tmp1968 = $tmp1966(raw$Iter1957);
        panda$core$Bit $tmp1969 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1968);
        if (!$tmp1969.value) goto $l1964;
        {
            ITable* $tmp1971 = raw$Iter1957->$class->itable;
            while ($tmp1971->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1971 = $tmp1971->next;
            }
            $fn1973 $tmp1972 = $tmp1971->methods[1];
            panda$core$Object* $tmp1974 = $tmp1972(raw$Iter1957);
            raw1970 = ((panda$core$Char8$wrapper*) $tmp1974)->value;
            panda$core$UInt8 $tmp1976 = panda$core$Char8$convert$R$panda$core$UInt8(raw1970);
            c1975 = $tmp1976;
            (($fn1978) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), &$s1977);
            panda$collections$ListView* $tmp1980 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s1979);
            panda$core$UInt32 $tmp1981 = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(c1975, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp1982 = panda$core$UInt32$convert$R$panda$core$Int64($tmp1981);
            ITable* $tmp1983 = $tmp1980->$class->itable;
            while ($tmp1983->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1983 = $tmp1983->next;
            }
            $fn1985 $tmp1984 = $tmp1983->methods[0];
            panda$core$Object* $tmp1986 = $tmp1984($tmp1980, $tmp1982);
            (($fn1987) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp1986)->value)));
            panda$collections$ListView* $tmp1989 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s1988);
            panda$core$UInt32 $tmp1990 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(c1975, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp1991 = panda$core$UInt32$convert$R$panda$core$Int64($tmp1990);
            ITable* $tmp1992 = $tmp1989->$class->itable;
            while ($tmp1992->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1992 = $tmp1992->next;
            }
            $fn1994 $tmp1993 = $tmp1992->methods[0];
            panda$core$Object* $tmp1995 = $tmp1993($tmp1989, $tmp1991);
            (($fn1996) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp1995)->value)));
        }
        goto $l1963;
        $l1964:;
    }
    panda$collections$ListView* $tmp1998 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp1999 = ((panda$collections$CollectionView*) $tmp1998)->$class->itable;
    while ($tmp1999->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1999 = $tmp1999->next;
    }
    $fn2001 $tmp2000 = $tmp1999->methods[0];
    panda$core$Int64 $tmp2002 = $tmp2000(((panda$collections$CollectionView*) $tmp1998));
    panda$core$String* $tmp2003 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1997, ((panda$core$Object*) wrap_panda$core$Int64($tmp2002)));
    panda$core$String* $tmp2005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2003, &$s2004);
    (($fn2006) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp2005);
    panda$core$String* $tmp2008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2007, result1944);
    panda$core$String* $tmp2010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2008, &$s2009);
    return $tmp2010;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    return &$s2011;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2013 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp2014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2012, $tmp2013);
    panda$core$String* $tmp2016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2014, &$s2015);
    return $tmp2016;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2020;
    org$pandalanguage$pandac$ClassDecl* cl2023;
    panda$core$String* bit2026;
    panda$core$Bit $tmp2017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp2017.value);
    panda$core$Int64 $tmp2018 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp2019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2018, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2019.value);
    panda$core$Object* $tmp2021 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2022 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2021), p_out);
    value2020 = $tmp2022;
    panda$core$Object* $tmp2024 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2025 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2024)->type);
    cl2023 = $tmp2025;
    panda$core$Bit $tmp2027 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2023);
    if ($tmp2027.value) {
    {
        panda$core$Object* $tmp2028 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2029 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2028)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2029.value) {
        {
            bit2026 = &$s2030;
        }
        }
        else {
        {
            panda$core$String* $tmp2032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2031, value2020);
            panda$core$String* $tmp2034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2032, &$s2033);
            bit2026 = $tmp2034;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2035, value2020);
        panda$core$String* $tmp2038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2036, &$s2037);
        bit2026 = $tmp2038;
    }
    }
    panda$core$String* $tmp2040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2039, bit2026);
    panda$core$String* $tmp2042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2040, &$s2041);
    return $tmp2042;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2046;
    org$pandalanguage$pandac$ClassDecl* cl2049;
    panda$core$String* bit2052;
    panda$core$Bit $tmp2043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp2043.value);
    panda$core$Int64 $tmp2044 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp2045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2044, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2045.value);
    panda$core$Object* $tmp2047 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2048 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2047), p_out);
    value2046 = $tmp2048;
    panda$core$Object* $tmp2050 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2051 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2050)->type);
    cl2049 = $tmp2051;
    panda$core$Bit $tmp2053 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2049);
    if ($tmp2053.value) {
    {
        panda$core$Object* $tmp2054 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2055 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2054)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2055.value) {
        {
            bit2052 = &$s2056;
        }
        }
        else {
        {
            panda$core$String* $tmp2058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2057, value2046);
            panda$core$String* $tmp2060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2058, &$s2059);
            bit2052 = $tmp2060;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2061, value2046);
        panda$core$String* $tmp2064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2062, &$s2063);
        bit2052 = $tmp2064;
    }
    }
    panda$core$String* $tmp2066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2065, bit2052);
    panda$core$String* $tmp2068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2066, &$s2067);
    return $tmp2068;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2070;
    panda$core$Bit $tmp2069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp2069.value);
    panda$core$Object* $tmp2071 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2072 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp2071));
    cl2070 = $tmp2072;
    PANDA_ASSERT(((panda$core$Bit) { cl2070 != NULL }).value);
    panda$core$Bit $tmp2073 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2070);
    if ($tmp2073.value) {
    {
        panda$core$String* $tmp2075 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
        panda$core$String* $tmp2076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2074, $tmp2075);
        panda$core$String* $tmp2078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2076, &$s2077);
        return $tmp2078;
    }
    }
    else {
    {
        return &$s2079;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base2083;
    panda$core$String* result2086;
    panda$core$Bit $tmp2080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp2080.value);
    panda$core$Int64 $tmp2081 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp2082 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2081, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2082.value);
    panda$core$Object* $tmp2084 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2085 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2084), p_out);
    base2083 = $tmp2085;
    panda$core$String* $tmp2087 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2086 = $tmp2087;
    panda$core$Int64 $tmp2088 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp2088.value) {
        case 52:
        {
            panda$core$String* $tmp2090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2089, base2083);
            panda$core$String* $tmp2092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2090, &$s2091);
            return $tmp2092;
        }
        break;
        case 49:
        {
            panda$core$String* $tmp2094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2093, base2083);
            panda$core$String* $tmp2096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2094, &$s2095);
            return $tmp2096;
        }
        break;
        case 50:
        {
            panda$core$String* $tmp2098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2097, base2083);
            panda$core$String* $tmp2100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2098, &$s2099);
            return $tmp2100;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2113;
    panda$core$String* result2116;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp2101 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2101;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp2102 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2102;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp2103 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2103;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp2104 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2104;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp2105 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2105;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp2106 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2106;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp2107 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2107;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp2108 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp2108;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp2109 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2109;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp2110 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp2110;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp2111 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2111;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp2112 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2112;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp2114 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2115 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2114), p_out);
            value2113 = $tmp2115;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value2113));
            return value2113;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp2117 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result2116 = ((panda$core$String*) $tmp2117);
            PANDA_ASSERT(((panda$core$Bit) { result2116 != NULL }).value);
            return result2116;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp2118 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2118;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp2119 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2119;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp2120 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2120;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp2121 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2121;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2122 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2122;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter2127;
    org$pandalanguage$pandac$IRNode* s2139;
    panda$core$Bit $tmp2123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp2123.value);
    (($fn2125) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2124);
    panda$core$Int64 $tmp2126 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2126;
    {
        ITable* $tmp2128 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp2128->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2128 = $tmp2128->next;
        }
        $fn2130 $tmp2129 = $tmp2128->methods[0];
        panda$collections$Iterator* $tmp2131 = $tmp2129(((panda$collections$Iterable*) p_block->children));
        s$Iter2127 = $tmp2131;
        $l2132:;
        ITable* $tmp2134 = s$Iter2127->$class->itable;
        while ($tmp2134->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2134 = $tmp2134->next;
        }
        $fn2136 $tmp2135 = $tmp2134->methods[0];
        panda$core$Bit $tmp2137 = $tmp2135(s$Iter2127);
        panda$core$Bit $tmp2138 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2137);
        if (!$tmp2138.value) goto $l2133;
        {
            ITable* $tmp2140 = s$Iter2127->$class->itable;
            while ($tmp2140->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2140 = $tmp2140->next;
            }
            $fn2142 $tmp2141 = $tmp2140->methods[1];
            panda$core$Object* $tmp2143 = $tmp2141(s$Iter2127);
            s2139 = ((org$pandalanguage$pandac$IRNode*) $tmp2143);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2139, p_out);
        }
        goto $l2132;
        $l2133:;
    }
    panda$core$Int64 $tmp2144 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2144;
    (($fn2146) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2145);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2147;
    panda$core$String* $match$1286_92148;
    panda$core$String* ptr2153;
    panda$core$String* arg2156;
    panda$core$String* base2176;
    panda$core$String* index2179;
    panda$core$String* value2182;
    m2147 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$1286_92148 = ((org$pandalanguage$pandac$Symbol*) m2147->value)->name;
        panda$core$Bit $tmp2150 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1286_92148, &$s2149);
        if ($tmp2150.value) {
        {
            panda$core$Int64 $tmp2151 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2151, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2152.value);
            panda$core$Object* $tmp2154 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2155 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2154), p_out);
            ptr2153 = $tmp2155;
            panda$core$Object* $tmp2157 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2158 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2157));
            panda$core$String* $tmp2159 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2158, p_out);
            arg2156 = $tmp2159;
            panda$core$String* $tmp2161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2160, arg2156);
            panda$core$String* $tmp2163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2161, &$s2162);
            panda$core$String* $tmp2164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2163, ptr2153);
            panda$core$String* $tmp2166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2164, &$s2165);
            (($fn2167) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2166);
        }
        }
        else {
        panda$core$Bit $tmp2169 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1286_92148, &$s2168);
        if ($tmp2169.value) {
        {
            panda$core$Int64 $tmp2170 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2170, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp2171.value);
            panda$core$Object* $tmp2172 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2173 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2172));
            panda$core$Int64 $tmp2174 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2173->type->subtypes);
            panda$core$Bit $tmp2175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2174, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2175.value);
            panda$core$Object* $tmp2177 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2178 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2177), p_out);
            base2176 = $tmp2178;
            panda$core$Object* $tmp2180 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2181 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2180), p_out);
            index2179 = $tmp2181;
            panda$core$Object* $tmp2183 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2184 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2183));
            panda$core$String* $tmp2185 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2184, p_out);
            value2182 = $tmp2185;
            panda$core$String* $tmp2187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2186, base2176);
            panda$core$String* $tmp2189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2187, &$s2188);
            panda$core$String* $tmp2190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2189, index2179);
            panda$core$String* $tmp2192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2190, &$s2191);
            panda$core$String* $tmp2193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2192, value2182);
            panda$core$String* $tmp2195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2193, &$s2194);
            (($fn2196) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2195);
        }
        }
        else {
        panda$core$Bit $tmp2198 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1286_92148, &$s2197);
        if ($tmp2198.value) {
        {
            panda$core$Int64 $tmp2199 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2199, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2200.value);
            panda$core$Object* $tmp2202 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2203 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2202), p_out);
            panda$core$String* $tmp2204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2201, $tmp2203);
            panda$core$String* $tmp2206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2204, &$s2205);
            (($fn2207) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2206);
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
    org$pandalanguage$pandac$MethodDecl* m2209;
    org$pandalanguage$pandac$Type* actualMethodType2213;
    panda$core$String* actualResultType2214;
    panda$core$Bit isSuper2215;
    panda$collections$Array* args2235;
    panda$core$Int64 offset2238;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2243;
    panda$core$String* arg2258;
    panda$core$String* refTarget2279;
    panda$core$String* methodRef2283;
    panda$core$String* separator2285;
    panda$core$String* indirectVar2289;
    panda$core$String* resultType2292;
    panda$collections$Iterator* a$Iter2319;
    panda$core$String* a2331;
    panda$core$Bit $tmp2208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2208.value);
    m2209 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2211 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2209->owner)->name, &$s2210);
    if ($tmp2211.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    panda$core$Bit $tmp2212 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m2209->owner);
    if ($tmp2212.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2209);
    }
    }
    panda$core$Int64 $tmp2217 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2218 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2217, ((panda$core$Int64) { 1 }));
    bool $tmp2216 = $tmp2218.value;
    if (!$tmp2216) goto $l2219;
    panda$core$Object* $tmp2220 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2220)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2216 = $tmp2221.value;
    $l2219:;
    panda$core$Bit $tmp2222 = { $tmp2216 };
    isSuper2215 = $tmp2222;
    panda$core$Bit $tmp2224 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2215);
    bool $tmp2223 = $tmp2224.value;
    if (!$tmp2223) goto $l2225;
    panda$core$Bit $tmp2226 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2209);
    $tmp2223 = $tmp2226.value;
    $l2225:;
    panda$core$Bit $tmp2227 = { $tmp2223 };
    if ($tmp2227.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2228 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2209);
        actualMethodType2213 = $tmp2228;
        panda$core$Int64 $tmp2229 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2213->subtypes);
        panda$core$Int64 $tmp2230 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2229, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2231 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2213->subtypes, $tmp2230);
        panda$core$String* $tmp2232 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2231));
        actualResultType2214 = $tmp2232;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2233 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2209);
        actualMethodType2213 = $tmp2233;
        panda$core$String* $tmp2234 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2214 = $tmp2234;
    }
    }
    panda$collections$Array* $tmp2236 = (panda$collections$Array*) malloc(40);
    $tmp2236->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2236->refCount.value = 1;
    panda$collections$Array$init($tmp2236);
    args2235 = $tmp2236;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args2235, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2239 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2240 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2213->subtypes);
    panda$core$Int64 $tmp2241 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2239, $tmp2240);
    panda$core$Int64 $tmp2242 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2241, ((panda$core$Int64) { 1 }));
    offset2238 = $tmp2242;
    panda$core$Int64 $tmp2244 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2243, ((panda$core$Int64) { 0 }), $tmp2244, ((panda$core$Bit) { false }));
    int64_t $tmp2246 = $tmp2243.min.value;
    panda$core$Int64 i2245 = { $tmp2246 };
    int64_t $tmp2248 = $tmp2243.max.value;
    bool $tmp2249 = $tmp2243.inclusive.value;
    if ($tmp2249) goto $l2256; else goto $l2257;
    $l2256:;
    if ($tmp2246 <= $tmp2248) goto $l2250; else goto $l2252;
    $l2257:;
    if ($tmp2246 < $tmp2248) goto $l2250; else goto $l2252;
    $l2250:;
    {
        panda$core$Object* $tmp2259 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2245);
        panda$core$String* $tmp2260 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2259), p_out);
        arg2258 = $tmp2260;
        panda$core$Bit $tmp2262 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2245, offset2238);
        bool $tmp2261 = $tmp2262.value;
        if (!$tmp2261) goto $l2263;
        panda$core$Int64 $tmp2264 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2245, offset2238);
        panda$core$Object* $tmp2265 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2213->subtypes, $tmp2264);
        panda$core$Object* $tmp2266 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2245);
        panda$core$Bit $tmp2267 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2265), ((org$pandalanguage$pandac$IRNode*) $tmp2266)->type);
        $tmp2261 = $tmp2267.value;
        $l2263:;
        panda$core$Bit $tmp2268 = { $tmp2261 };
        if ($tmp2268.value) {
        {
            panda$core$Object* $tmp2269 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2245);
            panda$core$Int64 $tmp2270 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2245, offset2238);
            panda$core$Object* $tmp2271 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2213->subtypes, $tmp2270);
            panda$core$String* $tmp2272 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2258, ((org$pandalanguage$pandac$IRNode*) $tmp2269)->type, ((org$pandalanguage$pandac$Type*) $tmp2271), p_out);
            arg2258 = $tmp2272;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2235, ((panda$core$Object*) arg2258));
    }
    $l2253:;
    int64_t $tmp2274 = $tmp2248 - i2245.value;
    if ($tmp2249) goto $l2275; else goto $l2276;
    $l2275:;
    if ($tmp2274 >= 1) goto $l2273; else goto $l2252;
    $l2276:;
    if ($tmp2274 > 1) goto $l2273; else goto $l2252;
    $l2273:;
    i2245.value += 1;
    goto $l2250;
    $l2252:;
    panda$core$Int64 $tmp2280 = panda$collections$Array$get_count$R$panda$core$Int64(args2235);
    panda$core$Bit $tmp2281 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2280, ((panda$core$Int64) { 0 }));
    if ($tmp2281.value) {
    {
        panda$core$Object* $tmp2282 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2235, ((panda$core$Int64) { 0 }));
        refTarget2279 = ((panda$core$String*) $tmp2282);
    }
    }
    else {
    {
        refTarget2279 = NULL;
    }
    }
    panda$core$String* $tmp2284 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget2279, m2209, isSuper2215, p_out);
    methodRef2283 = $tmp2284;
    separator2285 = &$s2286;
    panda$core$Bit $tmp2287 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2209);
    if ($tmp2287.value) {
    {
        panda$core$Int64 $tmp2288 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2288;
        panda$core$String* $tmp2291 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2290, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        indirectVar2289 = $tmp2291;
        panda$core$String* $tmp2293 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType2292 = $tmp2293;
        panda$core$String* $tmp2295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2294, resultType2292);
        panda$core$String* $tmp2297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2295, &$s2296);
        panda$core$String* $tmp2298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2297, indirectVar2289);
        panda$core$String* $tmp2300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2298, &$s2299);
        (($fn2301) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2300);
        panda$core$String* $tmp2303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2302, methodRef2283);
        panda$core$String* $tmp2305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2303, &$s2304);
        panda$core$String* $tmp2306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2305, resultType2292);
        panda$core$String* $tmp2308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2306, &$s2307);
        panda$core$String* $tmp2309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2308, indirectVar2289);
        panda$core$String* $tmp2311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2309, &$s2310);
        (($fn2312) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2311);
        separator2285 = &$s2313;
    }
    }
    else {
    {
        panda$core$String* $tmp2315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2314, methodRef2283);
        panda$core$String* $tmp2317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2315, &$s2316);
        (($fn2318) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2317);
    }
    }
    {
        ITable* $tmp2320 = ((panda$collections$Iterable*) args2235)->$class->itable;
        while ($tmp2320->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2320 = $tmp2320->next;
        }
        $fn2322 $tmp2321 = $tmp2320->methods[0];
        panda$collections$Iterator* $tmp2323 = $tmp2321(((panda$collections$Iterable*) args2235));
        a$Iter2319 = $tmp2323;
        $l2324:;
        ITable* $tmp2326 = a$Iter2319->$class->itable;
        while ($tmp2326->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2326 = $tmp2326->next;
        }
        $fn2328 $tmp2327 = $tmp2326->methods[0];
        panda$core$Bit $tmp2329 = $tmp2327(a$Iter2319);
        panda$core$Bit $tmp2330 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2329);
        if (!$tmp2330.value) goto $l2325;
        {
            ITable* $tmp2332 = a$Iter2319->$class->itable;
            while ($tmp2332->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2332 = $tmp2332->next;
            }
            $fn2334 $tmp2333 = $tmp2332->methods[1];
            panda$core$Object* $tmp2335 = $tmp2333(a$Iter2319);
            a2331 = ((panda$core$String*) $tmp2335);
            (($fn2336) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2285);
            (($fn2337) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2331);
            separator2285 = &$s2338;
        }
        goto $l2324;
        $l2325:;
    }
    (($fn2340) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2339);
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test2352;
    panda$core$Bit $tmp2341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp2341.value);
    panda$core$Int64 $tmp2343 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2343, ((panda$core$Int64) { 2 }));
    bool $tmp2342 = $tmp2344.value;
    if ($tmp2342) goto $l2345;
    panda$core$Int64 $tmp2346 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2346, ((panda$core$Int64) { 3 }));
    $tmp2342 = $tmp2347.value;
    $l2345:;
    panda$core$Bit $tmp2348 = { $tmp2342 };
    PANDA_ASSERT($tmp2348.value);
    panda$core$Object* $tmp2349 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2350 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2351 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2349)->type, $tmp2350);
    PANDA_ASSERT($tmp2351.value);
    panda$core$Object* $tmp2353 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2354 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2353), p_out);
    test2352 = $tmp2354;
    panda$core$String* $tmp2356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2355, test2352);
    panda$core$String* $tmp2358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2356, &$s2357);
    (($fn2359) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2358);
    panda$core$Object* $tmp2360 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2360), p_out);
    (($fn2362) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2361);
    panda$core$Int64 $tmp2363 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2363, ((panda$core$Int64) { 3 }));
    if ($tmp2364.value) {
    {
        (($fn2366) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2365);
        panda$core$Object* $tmp2367 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2367), p_out);
        (($fn2369) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2368);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2373;
    panda$core$String* range2384;
    org$pandalanguage$pandac$IRNode* block2387;
    org$pandalanguage$pandac$Type* t2389;
    panda$core$String* llt2392;
    panda$core$String* indexType2394;
    org$pandalanguage$pandac$ClassDecl* cl2400;
    org$pandalanguage$pandac$FieldDecl* field2408;
    panda$core$String* numberType2414;
    panda$core$String* index2417;
    panda$core$String* start2419;
    panda$core$String* indexValuePtr2432;
    panda$core$String* end2447;
    panda$core$String* inclusive2460;
    panda$core$String* loopStart2470;
    panda$core$String* loopBody2472;
    panda$core$String* loopEnd2474;
    panda$core$String* loopTest2476;
    panda$core$String* forwardEntry2480;
    panda$core$String* backwardEntry2482;
    panda$core$String* signPrefix2484;
    panda$core$String* forwardEntryInclusive2496;
    panda$core$String* forwardEntryExclusive2498;
    panda$core$String* loopInc2541;
    panda$core$String* forwardDelta2543;
    panda$core$String* forwardInclusiveLabel2559;
    panda$core$String* forwardExclusiveLabel2561;
    panda$core$String* forwardExclusiveTest2587;
    panda$core$String* inc2600;
    panda$core$Bit $tmp2370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp2370.value);
    panda$core$Int64 $tmp2371 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp2372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2371, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2372.value);
    panda$core$Object* $tmp2374 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2373 = ((org$pandalanguage$pandac$IRNode*) $tmp2374);
    panda$core$Object* $tmp2375 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2375)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2376.value);
    panda$core$Object* $tmp2377 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2378 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp2377)->type->subtypes);
    panda$core$Bit $tmp2379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2378, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2379.value);
    panda$core$Object* $tmp2380 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2381 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2380)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2383 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2381))->name, &$s2382);
    PANDA_ASSERT($tmp2383.value);
    panda$core$Object* $tmp2385 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2386 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2385), p_out);
    range2384 = $tmp2386;
    panda$core$Object* $tmp2388 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2387 = ((org$pandalanguage$pandac$IRNode*) $tmp2388);
    panda$core$Object* $tmp2390 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2391 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2390)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2389 = ((org$pandalanguage$pandac$Type*) $tmp2391);
    panda$core$String* $tmp2393 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2389);
    llt2392 = $tmp2393;
    panda$core$Bit $tmp2395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2389->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2395.value) {
    {
        panda$core$Int64 $tmp2396 = panda$collections$Array$get_count$R$panda$core$Int64(t2389->subtypes);
        panda$core$Bit $tmp2397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2396, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2397.value);
        panda$core$Object* $tmp2398 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2389->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2399 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2398));
        indexType2394 = $tmp2399;
    }
    }
    else {
    {
        indexType2394 = llt2392;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2401 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2389);
    cl2400 = $tmp2401;
    PANDA_ASSERT(((panda$core$Bit) { cl2400 != NULL }).value);
    panda$collections$ListView* $tmp2402 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2400);
    ITable* $tmp2403 = ((panda$collections$CollectionView*) $tmp2402)->$class->itable;
    while ($tmp2403->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2403 = $tmp2403->next;
    }
    $fn2405 $tmp2404 = $tmp2403->methods[0];
    panda$core$Int64 $tmp2406 = $tmp2404(((panda$collections$CollectionView*) $tmp2402));
    panda$core$Bit $tmp2407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2406, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2407.value);
    panda$collections$ListView* $tmp2409 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2400);
    ITable* $tmp2410 = $tmp2409->$class->itable;
    while ($tmp2410->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2410 = $tmp2410->next;
    }
    $fn2412 $tmp2411 = $tmp2410->methods[0];
    panda$core$Object* $tmp2413 = $tmp2411($tmp2409, ((panda$core$Int64) { 0 }));
    field2408 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2413);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2408);
    panda$core$String* $tmp2415 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2408->type);
    numberType2414 = $tmp2415;
    panda$core$Bit $tmp2416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2373->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2416.value);
    panda$core$String* $tmp2418 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2373->payload));
    index2417 = $tmp2418;
    panda$core$String* $tmp2420 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2419 = $tmp2420;
    panda$core$String* $tmp2422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2421, numberType2414);
    panda$core$String* $tmp2424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2422, &$s2423);
    panda$core$String* $tmp2425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2424, start2419);
    panda$core$String* $tmp2427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2425, &$s2426);
    panda$core$String* $tmp2428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2427, range2384);
    panda$core$String* $tmp2430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2428, &$s2429);
    (($fn2431) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2430);
    panda$core$String* $tmp2433 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2432 = $tmp2433;
    org$pandalanguage$pandac$Type* $tmp2435 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2400);
    panda$core$String* $tmp2436 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2435);
    panda$core$String* $tmp2437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2434, $tmp2436);
    panda$core$String* $tmp2439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2437, &$s2438);
    panda$core$String* $tmp2440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2439, index2417);
    panda$core$String* $tmp2442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2440, &$s2441);
    panda$core$String* $tmp2443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2442, start2419);
    panda$core$String* $tmp2445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2443, &$s2444);
    (($fn2446) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2445);
    panda$core$String* $tmp2448 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2447 = $tmp2448;
    panda$core$String* $tmp2450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2449, numberType2414);
    panda$core$String* $tmp2452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2450, &$s2451);
    panda$core$String* $tmp2453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2452, end2447);
    panda$core$String* $tmp2455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2453, &$s2454);
    panda$core$String* $tmp2456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2455, range2384);
    panda$core$String* $tmp2458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2456, &$s2457);
    (($fn2459) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2458);
    panda$core$String* $tmp2461 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2460 = $tmp2461;
    panda$core$String* $tmp2463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2462, inclusive2460);
    panda$core$String* $tmp2465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2463, &$s2464);
    panda$core$String* $tmp2466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2465, range2384);
    panda$core$String* $tmp2468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2466, &$s2467);
    (($fn2469) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2468);
    panda$core$String* $tmp2471 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2470 = $tmp2471;
    panda$core$String* $tmp2473 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2472 = $tmp2473;
    panda$core$String* $tmp2475 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2474 = $tmp2475;
    panda$core$String* $tmp2477 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2476 = $tmp2477;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2478 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2478->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2478->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2478, ((panda$core$String*) p_f->payload), loopEnd2474, loopTest2476);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2478));
    panda$core$String* $tmp2481 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2480 = $tmp2481;
    panda$core$String* $tmp2483 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2482 = $tmp2483;
    panda$core$Bit $tmp2486 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2389)->name, &$s2485);
    if ($tmp2486.value) {
    {
        signPrefix2484 = &$s2487;
    }
    }
    else {
    {
        panda$core$Bit $tmp2490 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2389)->name, &$s2489);
        bool $tmp2488 = $tmp2490.value;
        if ($tmp2488) goto $l2491;
        panda$core$Bit $tmp2493 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2389)->name, &$s2492);
        $tmp2488 = $tmp2493.value;
        $l2491:;
        panda$core$Bit $tmp2494 = { $tmp2488 };
        PANDA_ASSERT($tmp2494.value);
        signPrefix2484 = &$s2495;
    }
    }
    panda$core$String* $tmp2497 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2496 = $tmp2497;
    panda$core$String* $tmp2499 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2498 = $tmp2499;
    panda$core$String* $tmp2501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2500, inclusive2460);
    panda$core$String* $tmp2503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2501, &$s2502);
    panda$core$String* $tmp2504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2503, forwardEntryInclusive2496);
    panda$core$String* $tmp2506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2504, &$s2505);
    panda$core$String* $tmp2508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2507, forwardEntryExclusive2498);
    panda$core$String* $tmp2510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2508, &$s2509);
    panda$core$String* $tmp2511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2506, $tmp2510);
    (($fn2512) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2511);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2496, p_out);
    panda$core$String* $tmp2514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2513, start2419);
    panda$core$String* $tmp2516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2514, &$s2515);
    panda$core$String* $tmp2517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2516, end2447);
    panda$core$String* $tmp2519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2517, &$s2518);
    panda$core$String* $tmp2520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2519, loopStart2470);
    panda$core$String* $tmp2522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2520, &$s2521);
    panda$core$String* $tmp2523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2522, loopEnd2474);
    panda$core$String* $tmp2525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2523, &$s2524);
    (($fn2526) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2525);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2498, p_out);
    panda$core$String* $tmp2528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2527, start2419);
    panda$core$String* $tmp2530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2528, &$s2529);
    panda$core$String* $tmp2531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2530, end2447);
    panda$core$String* $tmp2533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2531, &$s2532);
    panda$core$String* $tmp2534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2533, loopStart2470);
    panda$core$String* $tmp2536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2534, &$s2535);
    panda$core$String* $tmp2537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2536, loopEnd2474);
    panda$core$String* $tmp2539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2537, &$s2538);
    (($fn2540) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2539);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2470, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2387, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2476, p_out);
    panda$core$String* $tmp2542 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2541 = $tmp2542;
    panda$core$String* $tmp2544 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2543 = $tmp2544;
    panda$core$String* $tmp2546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2545, numberType2414);
    panda$core$String* $tmp2548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2546, &$s2547);
    panda$core$String* $tmp2549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2548, forwardDelta2543);
    panda$core$String* $tmp2551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2549, &$s2550);
    panda$core$String* $tmp2552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2551, end2447);
    panda$core$String* $tmp2554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2552, &$s2553);
    panda$core$String* $tmp2555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2554, index2417);
    panda$core$String* $tmp2557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2555, &$s2556);
    (($fn2558) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2557);
    panda$core$String* $tmp2560 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2559 = $tmp2560;
    panda$core$String* $tmp2562 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2561 = $tmp2562;
    panda$core$String* $tmp2564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2563, inclusive2460);
    panda$core$String* $tmp2566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2564, &$s2565);
    panda$core$String* $tmp2567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2566, forwardInclusiveLabel2559);
    panda$core$String* $tmp2569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2567, &$s2568);
    panda$core$String* $tmp2571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2570, forwardExclusiveLabel2561);
    panda$core$String* $tmp2573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2571, &$s2572);
    panda$core$String* $tmp2574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2569, $tmp2573);
    (($fn2575) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2574);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2559, p_out);
    panda$core$String* $tmp2577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2576, forwardDelta2543);
    panda$core$String* $tmp2579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2577, &$s2578);
    panda$core$String* $tmp2580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2579, loopInc2541);
    panda$core$String* $tmp2582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2580, &$s2581);
    panda$core$String* $tmp2583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2582, loopEnd2474);
    panda$core$String* $tmp2585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2583, &$s2584);
    (($fn2586) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2585);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2561, p_out);
    panda$core$String* $tmp2588 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2587 = $tmp2588;
    panda$core$String* $tmp2590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2589, forwardDelta2543);
    panda$core$String* $tmp2592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2590, &$s2591);
    panda$core$String* $tmp2593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2592, loopInc2541);
    panda$core$String* $tmp2595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2593, &$s2594);
    panda$core$String* $tmp2596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2595, loopEnd2474);
    panda$core$String* $tmp2598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2596, &$s2597);
    (($fn2599) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2598);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2541, p_out);
    panda$core$String* $tmp2601 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc2600 = $tmp2601;
    panda$core$String* $tmp2603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2602, index2417);
    panda$core$String* $tmp2605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2603, &$s2604);
    (($fn2606) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2605);
    panda$core$String* $tmp2608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2607, loopStart2470);
    panda$core$String* $tmp2610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2608, &$s2609);
    (($fn2611) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2610);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2474, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2615;
    panda$core$String* range2626;
    org$pandalanguage$pandac$IRNode* block2629;
    org$pandalanguage$pandac$Type* t2631;
    panda$core$String* llt2634;
    panda$core$String* indexType2636;
    org$pandalanguage$pandac$ClassDecl* cl2642;
    org$pandalanguage$pandac$FieldDecl* field2650;
    panda$core$String* numberType2656;
    panda$core$String* index2659;
    panda$core$String* start2661;
    panda$core$String* indexValuePtr2674;
    panda$core$String* end2689;
    panda$core$String* step2702;
    panda$core$String* inclusive2715;
    panda$core$String* loopStart2725;
    panda$core$String* loopBody2727;
    panda$core$String* loopEnd2729;
    panda$core$String* loopTest2731;
    panda$core$String* forwardEntry2735;
    panda$core$String* backwardEntry2737;
    panda$core$String* signPrefix2739;
    panda$core$String* direction2751;
    panda$core$String* forwardEntryInclusive2775;
    panda$core$String* forwardEntryExclusive2777;
    panda$core$String* backwardEntryInclusive2820;
    panda$core$String* backwardEntryExclusive2822;
    panda$core$String* backwardEntryExclusiveTest2851;
    panda$core$String* loopInc2867;
    panda$core$String* forwardLabel2869;
    panda$core$String* backwardLabel2871;
    panda$core$String* forwardDelta2884;
    panda$core$String* forwardInclusiveLabel2900;
    panda$core$String* forwardExclusiveLabel2902;
    panda$core$String* forwardExclusiveTest2931;
    panda$core$String* backwardDelta2947;
    panda$core$String* backwardInclusiveLabel2963;
    panda$core$String* backwardExclusiveLabel2965;
    panda$core$String* inc3008;
    panda$core$Bit $tmp2612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp2612.value);
    panda$core$Int64 $tmp2613 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp2614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2613, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2614.value);
    panda$core$Object* $tmp2616 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2615 = ((org$pandalanguage$pandac$IRNode*) $tmp2616);
    panda$core$Object* $tmp2617 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2617)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2618.value);
    panda$core$Object* $tmp2619 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2620 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp2619)->type->subtypes);
    panda$core$Bit $tmp2621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2620, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2621.value);
    panda$core$Object* $tmp2622 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2623 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2622)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2625 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2623))->name, &$s2624);
    PANDA_ASSERT($tmp2625.value);
    panda$core$Object* $tmp2627 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2628 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2627), p_out);
    range2626 = $tmp2628;
    panda$core$Object* $tmp2630 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2629 = ((org$pandalanguage$pandac$IRNode*) $tmp2630);
    panda$core$Object* $tmp2632 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2633 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2632)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2631 = ((org$pandalanguage$pandac$Type*) $tmp2633);
    panda$core$String* $tmp2635 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2631);
    llt2634 = $tmp2635;
    panda$core$Bit $tmp2637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2631->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2637.value) {
    {
        panda$core$Int64 $tmp2638 = panda$collections$Array$get_count$R$panda$core$Int64(t2631->subtypes);
        panda$core$Bit $tmp2639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2638, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2639.value);
        panda$core$Object* $tmp2640 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2631->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2641 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2640));
        indexType2636 = $tmp2641;
    }
    }
    else {
    {
        indexType2636 = llt2634;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2643 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2631);
    cl2642 = $tmp2643;
    PANDA_ASSERT(((panda$core$Bit) { cl2642 != NULL }).value);
    panda$collections$ListView* $tmp2644 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2642);
    ITable* $tmp2645 = ((panda$collections$CollectionView*) $tmp2644)->$class->itable;
    while ($tmp2645->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2645 = $tmp2645->next;
    }
    $fn2647 $tmp2646 = $tmp2645->methods[0];
    panda$core$Int64 $tmp2648 = $tmp2646(((panda$collections$CollectionView*) $tmp2644));
    panda$core$Bit $tmp2649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2648, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2649.value);
    panda$collections$ListView* $tmp2651 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2642);
    ITable* $tmp2652 = $tmp2651->$class->itable;
    while ($tmp2652->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2652 = $tmp2652->next;
    }
    $fn2654 $tmp2653 = $tmp2652->methods[0];
    panda$core$Object* $tmp2655 = $tmp2653($tmp2651, ((panda$core$Int64) { 0 }));
    field2650 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2655);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2650);
    panda$core$String* $tmp2657 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2650->type);
    numberType2656 = $tmp2657;
    panda$core$Bit $tmp2658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2615->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2658.value);
    panda$core$String* $tmp2660 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2615->payload));
    index2659 = $tmp2660;
    panda$core$String* $tmp2662 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2661 = $tmp2662;
    panda$core$String* $tmp2664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2663, numberType2656);
    panda$core$String* $tmp2666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2664, &$s2665);
    panda$core$String* $tmp2667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2666, start2661);
    panda$core$String* $tmp2669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2667, &$s2668);
    panda$core$String* $tmp2670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2669, range2626);
    panda$core$String* $tmp2672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2670, &$s2671);
    (($fn2673) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2672);
    panda$core$String* $tmp2675 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2674 = $tmp2675;
    org$pandalanguage$pandac$Type* $tmp2677 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2642);
    panda$core$String* $tmp2678 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2677);
    panda$core$String* $tmp2679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2676, $tmp2678);
    panda$core$String* $tmp2681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2679, &$s2680);
    panda$core$String* $tmp2682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2681, index2659);
    panda$core$String* $tmp2684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2682, &$s2683);
    panda$core$String* $tmp2685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2684, start2661);
    panda$core$String* $tmp2687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2685, &$s2686);
    (($fn2688) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2687);
    panda$core$String* $tmp2690 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2689 = $tmp2690;
    panda$core$String* $tmp2692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2691, numberType2656);
    panda$core$String* $tmp2694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2692, &$s2693);
    panda$core$String* $tmp2695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2694, end2689);
    panda$core$String* $tmp2697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2695, &$s2696);
    panda$core$String* $tmp2698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2697, range2626);
    panda$core$String* $tmp2700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2698, &$s2699);
    (($fn2701) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2700);
    panda$core$String* $tmp2703 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    step2702 = $tmp2703;
    panda$core$String* $tmp2705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2704, numberType2656);
    panda$core$String* $tmp2707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2705, &$s2706);
    panda$core$String* $tmp2708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2707, step2702);
    panda$core$String* $tmp2710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2708, &$s2709);
    panda$core$String* $tmp2711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2710, range2626);
    panda$core$String* $tmp2713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2711, &$s2712);
    (($fn2714) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2713);
    panda$core$String* $tmp2716 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2715 = $tmp2716;
    panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2717, inclusive2715);
    panda$core$String* $tmp2720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2718, &$s2719);
    panda$core$String* $tmp2721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2720, range2626);
    panda$core$String* $tmp2723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2721, &$s2722);
    (($fn2724) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2723);
    panda$core$String* $tmp2726 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2725 = $tmp2726;
    panda$core$String* $tmp2728 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2727 = $tmp2728;
    panda$core$String* $tmp2730 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2729 = $tmp2730;
    panda$core$String* $tmp2732 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2731 = $tmp2732;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2733 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2733->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2733->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2733, ((panda$core$String*) p_f->payload), loopEnd2729, loopTest2731);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2733));
    panda$core$String* $tmp2736 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2735 = $tmp2736;
    panda$core$String* $tmp2738 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2737 = $tmp2738;
    panda$core$Bit $tmp2741 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2631)->name, &$s2740);
    if ($tmp2741.value) {
    {
        signPrefix2739 = &$s2742;
    }
    }
    else {
    {
        panda$core$Bit $tmp2745 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2631)->name, &$s2744);
        bool $tmp2743 = $tmp2745.value;
        if ($tmp2743) goto $l2746;
        panda$core$Bit $tmp2748 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2631)->name, &$s2747);
        $tmp2743 = $tmp2748.value;
        $l2746:;
        panda$core$Bit $tmp2749 = { $tmp2743 };
        PANDA_ASSERT($tmp2749.value);
        signPrefix2739 = &$s2750;
    }
    }
    panda$core$Bit $tmp2753 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix2739, &$s2752);
    if ($tmp2753.value) {
    {
        panda$core$String* $tmp2754 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
        direction2751 = $tmp2754;
        panda$core$String* $tmp2756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2755, direction2751);
        panda$core$String* $tmp2758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2756, &$s2757);
        panda$core$String* $tmp2759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2758, step2702);
        panda$core$String* $tmp2761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2759, &$s2760);
        (($fn2762) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2761);
    }
    }
    else {
    {
        direction2751 = &$s2763;
    }
    }
    panda$core$String* $tmp2765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2764, direction2751);
    panda$core$String* $tmp2767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2765, &$s2766);
    panda$core$String* $tmp2768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2767, forwardEntry2735);
    panda$core$String* $tmp2770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2768, &$s2769);
    panda$core$String* $tmp2771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2770, backwardEntry2737);
    panda$core$String* $tmp2773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2771, &$s2772);
    (($fn2774) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2773);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry2735, p_out);
    panda$core$String* $tmp2776 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2775 = $tmp2776;
    panda$core$String* $tmp2778 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2777 = $tmp2778;
    panda$core$String* $tmp2780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2779, inclusive2715);
    panda$core$String* $tmp2782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2780, &$s2781);
    panda$core$String* $tmp2783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2782, forwardEntryInclusive2775);
    panda$core$String* $tmp2785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2783, &$s2784);
    panda$core$String* $tmp2787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2786, forwardEntryExclusive2777);
    panda$core$String* $tmp2789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2787, &$s2788);
    panda$core$String* $tmp2790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2785, $tmp2789);
    (($fn2791) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2790);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2775, p_out);
    panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2792, start2661);
    panda$core$String* $tmp2795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2793, &$s2794);
    panda$core$String* $tmp2796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2795, end2689);
    panda$core$String* $tmp2798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2796, &$s2797);
    panda$core$String* $tmp2799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2798, loopStart2725);
    panda$core$String* $tmp2801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2799, &$s2800);
    panda$core$String* $tmp2802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2801, loopEnd2729);
    panda$core$String* $tmp2804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2802, &$s2803);
    (($fn2805) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2804);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2777, p_out);
    panda$core$String* $tmp2807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2806, start2661);
    panda$core$String* $tmp2809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2807, &$s2808);
    panda$core$String* $tmp2810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2809, end2689);
    panda$core$String* $tmp2812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2810, &$s2811);
    panda$core$String* $tmp2813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2812, loopStart2725);
    panda$core$String* $tmp2815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2813, &$s2814);
    panda$core$String* $tmp2816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2815, loopEnd2729);
    panda$core$String* $tmp2818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2816, &$s2817);
    (($fn2819) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2818);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry2737, p_out);
    panda$core$String* $tmp2821 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive2820 = $tmp2821;
    panda$core$String* $tmp2823 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive2822 = $tmp2823;
    panda$core$String* $tmp2825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2824, inclusive2715);
    panda$core$String* $tmp2827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2825, &$s2826);
    panda$core$String* $tmp2828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2827, backwardEntryInclusive2820);
    panda$core$String* $tmp2830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2828, &$s2829);
    panda$core$String* $tmp2832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2831, backwardEntryExclusive2822);
    panda$core$String* $tmp2834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2832, &$s2833);
    panda$core$String* $tmp2835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2830, $tmp2834);
    (($fn2836) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2835);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive2820, p_out);
    panda$core$String* $tmp2838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2837, start2661);
    panda$core$String* $tmp2840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2838, &$s2839);
    panda$core$String* $tmp2841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2840, end2689);
    panda$core$String* $tmp2843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2841, &$s2842);
    panda$core$String* $tmp2844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2843, loopStart2725);
    panda$core$String* $tmp2846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2844, &$s2845);
    panda$core$String* $tmp2847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2846, loopEnd2729);
    panda$core$String* $tmp2849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2847, &$s2848);
    (($fn2850) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2849);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive2822, p_out);
    panda$core$String* $tmp2852 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest2851 = $tmp2852;
    panda$core$String* $tmp2854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2853, start2661);
    panda$core$String* $tmp2856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2854, &$s2855);
    panda$core$String* $tmp2857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2856, end2689);
    panda$core$String* $tmp2859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2857, &$s2858);
    panda$core$String* $tmp2860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2859, loopStart2725);
    panda$core$String* $tmp2862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2860, &$s2861);
    panda$core$String* $tmp2863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2862, loopEnd2729);
    panda$core$String* $tmp2865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2863, &$s2864);
    (($fn2866) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2865);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2725, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2629, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2731, p_out);
    panda$core$String* $tmp2868 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2867 = $tmp2868;
    panda$core$String* $tmp2870 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel2869 = $tmp2870;
    panda$core$String* $tmp2872 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel2871 = $tmp2872;
    panda$core$String* $tmp2874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2873, direction2751);
    panda$core$String* $tmp2876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2874, &$s2875);
    panda$core$String* $tmp2877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2876, forwardLabel2869);
    panda$core$String* $tmp2879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2877, &$s2878);
    panda$core$String* $tmp2880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2879, backwardLabel2871);
    panda$core$String* $tmp2882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2880, &$s2881);
    (($fn2883) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2882);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel2869, p_out);
    panda$core$String* $tmp2885 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2884 = $tmp2885;
    panda$core$String* $tmp2887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2886, numberType2656);
    panda$core$String* $tmp2889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2887, &$s2888);
    panda$core$String* $tmp2890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2889, forwardDelta2884);
    panda$core$String* $tmp2892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2890, &$s2891);
    panda$core$String* $tmp2893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2892, end2689);
    panda$core$String* $tmp2895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2893, &$s2894);
    panda$core$String* $tmp2896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2895, index2659);
    panda$core$String* $tmp2898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2896, &$s2897);
    (($fn2899) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2898);
    panda$core$String* $tmp2901 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2900 = $tmp2901;
    panda$core$String* $tmp2903 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2902 = $tmp2903;
    panda$core$String* $tmp2905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2904, inclusive2715);
    panda$core$String* $tmp2907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2905, &$s2906);
    panda$core$String* $tmp2908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2907, forwardInclusiveLabel2900);
    panda$core$String* $tmp2910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2908, &$s2909);
    panda$core$String* $tmp2912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2911, forwardExclusiveLabel2902);
    panda$core$String* $tmp2914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2912, &$s2913);
    panda$core$String* $tmp2915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2910, $tmp2914);
    (($fn2916) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2915);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2900, p_out);
    panda$core$String* $tmp2918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2917, forwardDelta2884);
    panda$core$String* $tmp2920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2918, &$s2919);
    panda$core$String* $tmp2921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2920, step2702);
    panda$core$String* $tmp2923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2921, &$s2922);
    panda$core$String* $tmp2924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2923, loopInc2867);
    panda$core$String* $tmp2926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2924, &$s2925);
    panda$core$String* $tmp2927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2926, loopEnd2729);
    panda$core$String* $tmp2929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2927, &$s2928);
    (($fn2930) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2929);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2902, p_out);
    panda$core$String* $tmp2932 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2931 = $tmp2932;
    panda$core$String* $tmp2934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2933, forwardDelta2884);
    panda$core$String* $tmp2936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2934, &$s2935);
    panda$core$String* $tmp2937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2936, step2702);
    panda$core$String* $tmp2939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2937, &$s2938);
    panda$core$String* $tmp2940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2939, loopInc2867);
    panda$core$String* $tmp2942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2940, &$s2941);
    panda$core$String* $tmp2943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2942, loopEnd2729);
    panda$core$String* $tmp2945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2943, &$s2944);
    (($fn2946) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2945);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel2871, p_out);
    panda$core$String* $tmp2948 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta2947 = $tmp2948;
    panda$core$String* $tmp2950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2949, numberType2656);
    panda$core$String* $tmp2952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2950, &$s2951);
    panda$core$String* $tmp2953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2952, backwardDelta2947);
    panda$core$String* $tmp2955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2953, &$s2954);
    panda$core$String* $tmp2956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2955, index2659);
    panda$core$String* $tmp2958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2956, &$s2957);
    panda$core$String* $tmp2959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2958, end2689);
    panda$core$String* $tmp2961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2959, &$s2960);
    (($fn2962) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2961);
    panda$core$String* $tmp2964 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel2963 = $tmp2964;
    panda$core$String* $tmp2966 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel2965 = $tmp2966;
    panda$core$String* $tmp2968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2967, inclusive2715);
    panda$core$String* $tmp2970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2968, &$s2969);
    panda$core$String* $tmp2971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2970, backwardInclusiveLabel2963);
    panda$core$String* $tmp2973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2971, &$s2972);
    panda$core$String* $tmp2975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2974, backwardExclusiveLabel2965);
    panda$core$String* $tmp2977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2975, &$s2976);
    panda$core$String* $tmp2978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2973, $tmp2977);
    (($fn2979) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2978);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel2963, p_out);
    panda$core$String* $tmp2981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2980, backwardDelta2947);
    panda$core$String* $tmp2983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2981, &$s2982);
    panda$core$String* $tmp2984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2983, step2702);
    panda$core$String* $tmp2986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2984, &$s2985);
    panda$core$String* $tmp2987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2986, loopInc2867);
    panda$core$String* $tmp2989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2987, &$s2988);
    panda$core$String* $tmp2990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2989, loopEnd2729);
    panda$core$String* $tmp2992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2990, &$s2991);
    (($fn2993) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2992);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel2965, p_out);
    panda$core$String* $tmp2995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2994, backwardDelta2947);
    panda$core$String* $tmp2997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2995, &$s2996);
    panda$core$String* $tmp2998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2997, step2702);
    panda$core$String* $tmp3000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2998, &$s2999);
    panda$core$String* $tmp3001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3000, loopInc2867);
    panda$core$String* $tmp3003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3001, &$s3002);
    panda$core$String* $tmp3004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3003, loopEnd2729);
    panda$core$String* $tmp3006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3004, &$s3005);
    (($fn3007) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3006);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2867, p_out);
    panda$core$String* $tmp3009 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc3008 = $tmp3009;
    panda$core$String* $tmp3011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3010, index2659);
    panda$core$String* $tmp3013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3011, &$s3012);
    panda$core$String* $tmp3014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3013, step2702);
    panda$core$String* $tmp3016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3014, &$s3015);
    (($fn3017) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3016);
    panda$core$String* $tmp3019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3018, loopStart2725);
    panda$core$String* $tmp3021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3019, &$s3020);
    (($fn3022) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3021);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2729, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    panda$core$Object* $tmp3023 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3024 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3023)->type);
    if ($tmp3024.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp3025 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3026 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3025)->type);
    if ($tmp3026.value) {
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
    panda$core$String* loopStart3033;
    panda$core$String* loopEnd3035;
    panda$core$Bit $tmp3027 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp3027.value);
    panda$core$Int64 $tmp3028 = panda$collections$Array$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3028, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3029.value);
    panda$core$Object* $tmp3030 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3031 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3032 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3030)->type, $tmp3031);
    PANDA_ASSERT($tmp3032.value);
    panda$core$String* $tmp3034 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3033 = $tmp3034;
    panda$core$String* $tmp3036 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3035 = $tmp3036;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3037 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3037->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3037->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3037, ((panda$core$String*) p_w->payload), loopEnd3035, loopStart3033);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3037));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3033, p_out);
    panda$core$Object* $tmp3040 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3041 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3040), p_out);
    panda$core$String* $tmp3042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3039, $tmp3041);
    panda$core$String* $tmp3044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3042, &$s3043);
    panda$core$String* $tmp3045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3044, loopEnd3035);
    panda$core$String* $tmp3047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3045, &$s3046);
    (($fn3048) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3047);
    panda$core$Object* $tmp3049 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3049), p_out);
    panda$core$String* $tmp3051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3050, loopStart3033);
    panda$core$String* $tmp3053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3051, &$s3052);
    (($fn3054) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3053);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3035, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3061;
    panda$core$String* loopEnd3063;
    panda$core$Bit $tmp3055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp3055.value);
    panda$core$Int64 $tmp3056 = panda$collections$Array$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3056, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3057.value);
    panda$core$Object* $tmp3058 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3059 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3060 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3058)->type, $tmp3059);
    PANDA_ASSERT($tmp3060.value);
    panda$core$String* $tmp3062 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3061 = $tmp3062;
    panda$core$String* $tmp3064 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3063 = $tmp3064;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3065 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3065->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3065->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3065, ((panda$core$String*) p_d->payload), loopEnd3063, loopStart3061);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3065));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3061, p_out);
    panda$core$Object* $tmp3067 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3067), p_out);
    panda$core$Object* $tmp3069 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3070 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3069), p_out);
    panda$core$String* $tmp3071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3068, $tmp3070);
    panda$core$String* $tmp3073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3071, &$s3072);
    panda$core$String* $tmp3074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3073, loopStart3061);
    panda$core$String* $tmp3076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3074, &$s3075);
    (($fn3077) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3076);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3063, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3081;
    panda$core$String* loopEnd3083;
    panda$core$Bit $tmp3078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp3078.value);
    panda$core$Int64 $tmp3079 = panda$collections$Array$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3079, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3080.value);
    panda$core$String* $tmp3082 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3081 = $tmp3082;
    panda$core$String* $tmp3084 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3083 = $tmp3084;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3085 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3085->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3085->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3085, ((panda$core$String*) p_l->payload), loopEnd3083, loopStart3081);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3085));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3081, p_out);
    (($fn3088) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3087);
    panda$core$Object* $tmp3089 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3089), p_out);
    (($fn3091) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3090);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3083, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v3092;
    switch (p_target->kind.value) {
        case 1016:
        {
            v3092 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp3094 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v3092->type);
            panda$core$String* $tmp3095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3093, $tmp3094);
            panda$core$String* $tmp3097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3095, &$s3096);
            panda$core$String* $tmp3098 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3092);
            panda$core$String* $tmp3099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3097, $tmp3098);
            panda$core$String* $tmp3101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3099, &$s3100);
            (($fn3102) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3101);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp3104 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3092);
                panda$core$String* $tmp3105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3103, $tmp3104);
                panda$core$String* $tmp3107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3105, &$s3106);
                panda$core$String* $tmp3108 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp3109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3107, $tmp3108);
                panda$core$String* $tmp3111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3109, &$s3110);
                (($fn3112) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3111);
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
    panda$collections$Iterator* decl$Iter3126;
    org$pandalanguage$pandac$IRNode* decl3138;
    panda$core$Bit $tmp3116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp3115 = $tmp3116.value;
    if ($tmp3115) goto $l3117;
    panda$core$Bit $tmp3118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp3115 = $tmp3118.value;
    $l3117:;
    panda$core$Bit $tmp3119 = { $tmp3115 };
    bool $tmp3114 = $tmp3119.value;
    if ($tmp3114) goto $l3120;
    panda$core$Bit $tmp3121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp3114 = $tmp3121.value;
    $l3120:;
    panda$core$Bit $tmp3122 = { $tmp3114 };
    bool $tmp3113 = $tmp3122.value;
    if ($tmp3113) goto $l3123;
    panda$core$Bit $tmp3124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp3113 = $tmp3124.value;
    $l3123:;
    panda$core$Bit $tmp3125 = { $tmp3113 };
    PANDA_ASSERT($tmp3125.value);
    {
        ITable* $tmp3127 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3127->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3127 = $tmp3127->next;
        }
        $fn3129 $tmp3128 = $tmp3127->methods[0];
        panda$collections$Iterator* $tmp3130 = $tmp3128(((panda$collections$Iterable*) p_v->children));
        decl$Iter3126 = $tmp3130;
        $l3131:;
        ITable* $tmp3133 = decl$Iter3126->$class->itable;
        while ($tmp3133->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3133 = $tmp3133->next;
        }
        $fn3135 $tmp3134 = $tmp3133->methods[0];
        panda$core$Bit $tmp3136 = $tmp3134(decl$Iter3126);
        panda$core$Bit $tmp3137 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3136);
        if (!$tmp3137.value) goto $l3132;
        {
            ITable* $tmp3139 = decl$Iter3126->$class->itable;
            while ($tmp3139->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3139 = $tmp3139->next;
            }
            $fn3141 $tmp3140 = $tmp3139->methods[1];
            panda$core$Object* $tmp3142 = $tmp3140(decl$Iter3126);
            decl3138 = ((org$pandalanguage$pandac$IRNode*) $tmp3142);
            panda$core$Bit $tmp3143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl3138->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp3143.value);
            panda$core$Int64 $tmp3144 = panda$collections$Array$get_count$R$panda$core$Int64(decl3138->children);
            panda$core$Bit $tmp3145 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3144, ((panda$core$Int64) { 1 }));
            if ($tmp3145.value) {
            {
                panda$core$Object* $tmp3146 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3138->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp3147 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3138->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3146), ((org$pandalanguage$pandac$IRNode*) $tmp3147), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp3148 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3138->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3148), NULL, p_out);
            }
            }
        }
        goto $l3131;
        $l3132:;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3152;
    panda$core$String* result3162;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp3149 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp3150 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp3149, p_out);
            return $tmp3150;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp3151 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp3151;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp3153 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3154 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3153), p_out);
            base3152 = $tmp3154;
            panda$core$String* $tmp3156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3155, base3152);
            panda$core$String* $tmp3158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3156, &$s3157);
            panda$core$String* $tmp3159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3158, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name);
            panda$core$String* $tmp3161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3159, &$s3160);
            return $tmp3161;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp3163 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3164 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3163), p_out);
            result3162 = $tmp3164;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) result3162));
            return result3162;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue3168;
    panda$core$String* value3171;
    panda$core$String* t3172;
    panda$core$Int64 op3175;
    panda$core$String* right3177;
    panda$core$Bit $tmp3165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp3165.value);
    panda$core$Int64 $tmp3166 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3166, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3167.value);
    panda$core$Object* $tmp3169 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3170 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3169), p_out);
    lvalue3168 = $tmp3170;
    panda$core$Object* $tmp3173 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3174 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3173)->type);
    t3172 = $tmp3174;
    op3175 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp3176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op3175, ((panda$core$Int64) { 73 }));
    if ($tmp3176.value) {
    {
        panda$core$Object* $tmp3178 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp3179 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3178), p_out);
        right3177 = $tmp3179;
        value3171 = right3177;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp3181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3180, lvalue3168);
    panda$core$String* $tmp3183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3181, &$s3182);
    panda$core$String* $tmp3184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3183, value3171);
    panda$core$String* $tmp3186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3184, &$s3185);
    (($fn3187) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3186);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $tmp3188 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3188, ((panda$core$Int64) { 1 }));
    if ($tmp3189.value) {
    {
        panda$core$Object* $tmp3191 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3192 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3191), p_out);
        panda$core$String* $tmp3193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3190, $tmp3192);
        panda$core$String* $tmp3195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3193, &$s3194);
        (($fn3196) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3195);
    }
    }
    else {
    {
        panda$core$Int64 $tmp3197 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp3198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3197, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp3198.value);
        (($fn3200) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3199);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3204;
    panda$core$Int64 $tmp3201 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp3202 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3201, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3202.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp3203 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3203);
    }
    }
    panda$core$Int64 $tmp3205 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3204, ((panda$core$Int64) { 0 }), $tmp3205, ((panda$core$Bit) { false }));
    int64_t $tmp3207 = $tmp3204.min.value;
    panda$core$Int64 i3206 = { $tmp3207 };
    int64_t $tmp3209 = $tmp3204.max.value;
    bool $tmp3210 = $tmp3204.inclusive.value;
    if ($tmp3210) goto $l3217; else goto $l3218;
    $l3217:;
    if ($tmp3207 <= $tmp3209) goto $l3211; else goto $l3213;
    $l3218:;
    if ($tmp3207 < $tmp3209) goto $l3211; else goto $l3213;
    $l3211:;
    {
        panda$core$Object* $tmp3220 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3206);
        bool $tmp3219 = ((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3220)->loopLabel != NULL }).value;
        if (!$tmp3219) goto $l3221;
        panda$core$Object* $tmp3222 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3206);
        panda$core$Bit $tmp3223 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3222)->loopLabel, p_name);
        $tmp3219 = $tmp3223.value;
        $l3221:;
        panda$core$Bit $tmp3224 = { $tmp3219 };
        if ($tmp3224.value) {
        {
            panda$core$Object* $tmp3225 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3206);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3225);
        }
        }
    }
    $l3214:;
    int64_t $tmp3227 = $tmp3209 - i3206.value;
    if ($tmp3210) goto $l3228; else goto $l3229;
    $l3228:;
    if ($tmp3227 >= 1) goto $l3226; else goto $l3213;
    $l3229:;
    if ($tmp3227 > 1) goto $l3226; else goto $l3213;
    $l3226:;
    i3206.value += 1;
    goto $l3211;
    $l3213:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3232;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3233 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc3232 = $tmp3233;
    panda$core$String* $tmp3235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3234, desc3232->breakLabel);
    panda$core$String* $tmp3237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3235, &$s3236);
    (($fn3238) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3237);
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3239;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3240 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc3239 = $tmp3240;
    panda$core$String* $tmp3242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3241, desc3239->continueLabel);
    panda$core$String* $tmp3244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3242, &$s3243);
    (($fn3245) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3244);
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp3246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp3246.value);
    panda$core$Int64 $tmp3248 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3248, ((panda$core$Int64) { 1 }));
    bool $tmp3247 = $tmp3249.value;
    if ($tmp3247) goto $l3250;
    panda$core$Int64 $tmp3251 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3251, ((panda$core$Int64) { 2 }));
    $tmp3247 = $tmp3252.value;
    $l3250:;
    panda$core$Bit $tmp3253 = { $tmp3247 };
    PANDA_ASSERT($tmp3253.value);
    panda$core$Object* $tmp3255 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3256 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3255), p_out);
    panda$core$String* $tmp3257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3254, $tmp3256);
    panda$core$String* $tmp3259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3257, &$s3258);
    (($fn3260) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3259);
}
void org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3269;
    org$pandalanguage$pandac$IRNode* w3284;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3287;
    panda$core$Object* $tmp3262 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3263 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3262), p_out);
    panda$core$String* $tmp3264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3261, $tmp3263);
    panda$core$String* $tmp3266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3264, &$s3265);
    (($fn3267) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3266);
    panda$core$Int64 $tmp3268 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3268;
    panda$core$Int64 $tmp3270 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3269, ((panda$core$Int64) { 1 }), $tmp3270, ((panda$core$Bit) { false }));
    int64_t $tmp3272 = $tmp3269.min.value;
    panda$core$Int64 i3271 = { $tmp3272 };
    int64_t $tmp3274 = $tmp3269.max.value;
    bool $tmp3275 = $tmp3269.inclusive.value;
    if ($tmp3275) goto $l3282; else goto $l3283;
    $l3282:;
    if ($tmp3272 <= $tmp3274) goto $l3276; else goto $l3278;
    $l3283:;
    if ($tmp3272 < $tmp3274) goto $l3276; else goto $l3278;
    $l3276:;
    {
        panda$core$Object* $tmp3285 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i3271);
        w3284 = ((org$pandalanguage$pandac$IRNode*) $tmp3285);
        panda$core$Bit $tmp3286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3284->kind, ((panda$core$Int64) { 1042 }));
        if ($tmp3286.value) {
        {
            panda$core$Int64 $tmp3288 = panda$collections$Array$get_count$R$panda$core$Int64(w3284->children);
            panda$core$Int64 $tmp3289 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3288, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3287, ((panda$core$Int64) { 0 }), $tmp3289, ((panda$core$Bit) { false }));
            int64_t $tmp3291 = $tmp3287.min.value;
            panda$core$Int64 j3290 = { $tmp3291 };
            int64_t $tmp3293 = $tmp3287.max.value;
            bool $tmp3294 = $tmp3287.inclusive.value;
            if ($tmp3294) goto $l3301; else goto $l3302;
            $l3301:;
            if ($tmp3291 <= $tmp3293) goto $l3295; else goto $l3297;
            $l3302:;
            if ($tmp3291 < $tmp3293) goto $l3295; else goto $l3297;
            $l3295:;
            {
                panda$core$Object* $tmp3304 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w3284->children, j3290);
                panda$core$UInt64 $tmp3305 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3304));
                panda$core$String* $tmp3306 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3303, ((panda$core$Object*) wrap_panda$core$UInt64($tmp3305)));
                panda$core$String* $tmp3308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3306, &$s3307);
                (($fn3309) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3308);
            }
            $l3298:;
            int64_t $tmp3311 = $tmp3293 - j3290.value;
            if ($tmp3294) goto $l3312; else goto $l3313;
            $l3312:;
            if ($tmp3311 >= 1) goto $l3310; else goto $l3297;
            $l3313:;
            if ($tmp3311 > 1) goto $l3310; else goto $l3297;
            $l3310:;
            j3290.value += 1;
            goto $l3295;
            $l3297:;
            panda$core$Int64 $tmp3316 = panda$collections$Array$get_count$R$panda$core$Int64(w3284->children);
            panda$core$Int64 $tmp3317 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3316, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp3318 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w3284->children, $tmp3317);
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3318), p_out);
            (($fn3320) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3319);
        }
        }
        else {
        {
            panda$core$Bit $tmp3321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3284->kind, ((panda$core$Int64) { 1043 }));
            PANDA_ASSERT($tmp3321.value);
            panda$core$Int64 $tmp3322 = panda$collections$Array$get_count$R$panda$core$Int64(w3284->children);
            panda$core$Bit $tmp3323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3322, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp3323.value);
            (($fn3325) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3324);
            panda$core$Object* $tmp3326 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w3284->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3326), p_out);
        }
        }
    }
    $l3279:;
    int64_t $tmp3328 = $tmp3274 - i3271.value;
    if ($tmp3275) goto $l3329; else goto $l3330;
    $l3329:;
    if ($tmp3328 >= 1) goto $l3327; else goto $l3278;
    $l3330:;
    if ($tmp3328 > 1) goto $l3327; else goto $l3278;
    $l3327:;
    i3271.value += 1;
    goto $l3276;
    $l3278:;
    panda$core$Int64 $tmp3333 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3333;
    (($fn3335) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3334);
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
    panda$core$String* result3336;
    org$pandalanguage$pandac$Type* $tmp3337 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp3338 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3337);
    result3336 = $tmp3338;
    panda$core$Bit $tmp3340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp3339 = $tmp3340.value;
    if (!$tmp3339) goto $l3341;
    panda$core$Bit $tmp3343 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result3336, &$s3342);
    panda$core$Bit $tmp3344 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3343);
    $tmp3339 = $tmp3344.value;
    $l3341:;
    panda$core$Bit $tmp3345 = { $tmp3339 };
    if ($tmp3345.value) {
    {
        panda$core$String* $tmp3347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3336, &$s3346);
        return $tmp3347;
    }
    }
    return result3336;
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator3361;
    panda$collections$Iterator* p$Iter3372;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3384;
    panda$io$MemoryOutputStream* bodyBuffer3407;
    panda$io$IndentedOutputStream* indentedBody3410;
    panda$collections$Iterator* s$Iter3413;
    org$pandalanguage$pandac$IRNode* s3425;
    panda$core$Object* $tmp3348 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3348)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s3349;
    (($fn3350) self->methodHeaderBuffer->$class->vtable[20])(self->methodHeaderBuffer);
    panda$core$String* $tmp3352 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp3353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3351, $tmp3352);
    panda$core$String* $tmp3355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3353, &$s3354);
    panda$core$String* $tmp3356 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp3357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3355, $tmp3356);
    panda$core$String* $tmp3359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3357, &$s3358);
    (($fn3360) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3359);
    separator3361 = &$s3362;
    panda$core$Bit $tmp3363 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp3364 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3363);
    if ($tmp3364.value) {
    {
        panda$core$String* $tmp3366 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp3367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3365, $tmp3366);
        panda$core$String* $tmp3369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3367, &$s3368);
        (($fn3370) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3369);
        separator3361 = &$s3371;
    }
    }
    {
        ITable* $tmp3373 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3373->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3373 = $tmp3373->next;
        }
        $fn3375 $tmp3374 = $tmp3373->methods[0];
        panda$collections$Iterator* $tmp3376 = $tmp3374(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3372 = $tmp3376;
        $l3377:;
        ITable* $tmp3379 = p$Iter3372->$class->itable;
        while ($tmp3379->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3379 = $tmp3379->next;
        }
        $fn3381 $tmp3380 = $tmp3379->methods[0];
        panda$core$Bit $tmp3382 = $tmp3380(p$Iter3372);
        panda$core$Bit $tmp3383 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3382);
        if (!$tmp3383.value) goto $l3378;
        {
            ITable* $tmp3385 = p$Iter3372->$class->itable;
            while ($tmp3385->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3385 = $tmp3385->next;
            }
            $fn3387 $tmp3386 = $tmp3385->methods[1];
            panda$core$Object* $tmp3388 = $tmp3386(p$Iter3372);
            p3384 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3388);
            panda$core$String* $tmp3390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3389, separator3361);
            panda$core$String* $tmp3392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3390, &$s3391);
            panda$core$String* $tmp3393 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p3384->type);
            panda$core$String* $tmp3394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3392, $tmp3393);
            panda$core$String* $tmp3396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3394, &$s3395);
            panda$core$String* $tmp3397 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p3384->name);
            panda$core$String* $tmp3398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3396, $tmp3397);
            panda$core$String* $tmp3400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3398, &$s3399);
            (($fn3401) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3400);
            separator3361 = &$s3402;
        }
        goto $l3377;
        $l3378:;
    }
    (($fn3404) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3403);
    panda$core$Int64 $tmp3405 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3405;
    panda$core$Bit $tmp3406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp3406.value);
    panda$io$MemoryOutputStream* $tmp3408 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp3408->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp3408->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp3408);
    bodyBuffer3407 = $tmp3408;
    panda$io$IndentedOutputStream* $tmp3411 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp3411->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3411->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3411, ((panda$io$OutputStream*) bodyBuffer3407));
    indentedBody3410 = $tmp3411;
    {
        ITable* $tmp3414 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp3414->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3414 = $tmp3414->next;
        }
        $fn3416 $tmp3415 = $tmp3414->methods[0];
        panda$collections$Iterator* $tmp3417 = $tmp3415(((panda$collections$Iterable*) p_body->children));
        s$Iter3413 = $tmp3417;
        $l3418:;
        ITable* $tmp3420 = s$Iter3413->$class->itable;
        while ($tmp3420->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3420 = $tmp3420->next;
        }
        $fn3422 $tmp3421 = $tmp3420->methods[0];
        panda$core$Bit $tmp3423 = $tmp3421(s$Iter3413);
        panda$core$Bit $tmp3424 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3423);
        if (!$tmp3424.value) goto $l3419;
        {
            ITable* $tmp3426 = s$Iter3413->$class->itable;
            while ($tmp3426->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3426 = $tmp3426->next;
            }
            $fn3428 $tmp3427 = $tmp3426->methods[1];
            panda$core$Object* $tmp3429 = $tmp3427(s$Iter3413);
            s3425 = ((org$pandalanguage$pandac$IRNode*) $tmp3429);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s3425, indentedBody3410);
        }
        goto $l3418;
        $l3419:;
    }
    panda$core$String* $tmp3431 = (($fn3430) self->methodHeaderBuffer->$class->vtable[21])(self->methodHeaderBuffer);
    (($fn3432) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3431);
    panda$core$String* $tmp3434 = (($fn3433) bodyBuffer3407->$class->vtable[21])(bodyBuffer3407);
    (($fn3435) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3434);
    panda$core$Int64 $tmp3436 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3436;
    (($fn3438) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3437);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path3445;
    PANDA_ASSERT(((panda$core$Bit) { self->currentClass == NULL }).value);
    self->currentClass = p_cl;
    panda$collections$Set$clear(self->imports);
    (($fn3439) self->strings->$class->vtable[20])(self->strings);
    (($fn3440) self->declarations->$class->vtable[20])(self->declarations);
    (($fn3441) self->types->$class->vtable[20])(self->types);
    (($fn3442) self->methodsBuffer->$class->vtable[20])(self->methodsBuffer);
    (($fn3443) self->wrapperShimsBuffer->$class->vtable[20])(self->wrapperShimsBuffer);
    (($fn3444) self->shimsBuffer->$class->vtable[20])(self->shimsBuffer);
    panda$collections$Set$clear(self->declared);
    panda$collections$Set$clear(self->writtenTypes);
    panda$collections$Set$clear(self->writtenWrappers);
    panda$collections$HashMap$clear(self->classConstants);
    panda$collections$IdentityMap$clear(self->variableNames);
    self->varCount = ((panda$core$Int64) { 0 });
    panda$collections$HashMap$clear(self->reusedValues);
    panda$collections$IdentityMap$clear(self->methodShims);
    panda$io$File* $tmp3447 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self->hCodeGen, p_cl, &$s3446);
    path3445 = $tmp3447;
    panda$io$File* $tmp3448 = panda$io$File$parent$R$panda$io$File$Q(path3445);
    panda$io$File$createDirectories($tmp3448);
    panda$io$IndentedOutputStream* $tmp3449 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp3449->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3449->refCount.value = 1;
    panda$io$OutputStream* $tmp3451 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path3445);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3449, $tmp3451);
    self->out = $tmp3449;
    org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Bit $tmp3452 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp3452.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
        panda$core$String* $tmp3454 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3453, $tmp3454);
        panda$core$String* $tmp3457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3455, &$s3456);
        panda$core$String* $tmp3458 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3457, $tmp3458);
        panda$core$String* $tmp3461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3459, &$s3460);
        panda$core$String* $tmp3463 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3462, $tmp3463);
        panda$core$String* $tmp3466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3464, &$s3465);
        panda$core$String* $tmp3467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3461, $tmp3466);
        (($fn3468) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3467);
        panda$core$String* $tmp3470 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3469, $tmp3470);
        panda$core$String* $tmp3473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3471, &$s3472);
        panda$core$String* $tmp3475 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3474, $tmp3475);
        panda$core$String* $tmp3478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3476, &$s3477);
        org$pandalanguage$pandac$Type* $tmp3479 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$Int64 $tmp3480 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3479);
        panda$core$String* $tmp3481 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3478, ((panda$core$Object*) wrap_panda$core$Int64($tmp3480)));
        panda$core$String* $tmp3483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3481, &$s3482);
        panda$core$String* $tmp3484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3473, $tmp3483);
        (($fn3485) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3484);
        panda$core$String* $tmp3488 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3487, $tmp3488);
        panda$core$String* $tmp3491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3489, &$s3490);
        panda$core$String* $tmp3492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3486, $tmp3491);
        (($fn3493) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3492);
        (($fn3495) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3494);
        (($fn3497) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3496);
        (($fn3499) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3498);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$finish(self);
    self->currentClass = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$String* $tmp3501 = (($fn3500) self->shimsBuffer->$class->vtable[21])(self->shimsBuffer);
    (($fn3502) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3501);
    (($fn3503) self->shimsBuffer->$class->vtable[20])(self->shimsBuffer);
    panda$core$String* $tmp3505 = (($fn3504) self->wrapperShimsBuffer->$class->vtable[21])(self->wrapperShimsBuffer);
    (($fn3506) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3505);
    (($fn3507) self->wrapperShimsBuffer->$class->vtable[20])(self->wrapperShimsBuffer);
    panda$core$String* $tmp3509 = (($fn3508) self->types->$class->vtable[21])(self->types);
    (($fn3510) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3509);
    (($fn3511) self->types->$class->vtable[20])(self->types);
    panda$core$String* $tmp3513 = (($fn3512) self->strings->$class->vtable[21])(self->strings);
    (($fn3514) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3513);
    (($fn3515) self->strings->$class->vtable[20])(self->strings);
    panda$core$String* $tmp3517 = (($fn3516) self->methodsBuffer->$class->vtable[21])(self->methodsBuffer);
    (($fn3518) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3517);
    (($fn3519) self->methodsBuffer->$class->vtable[20])(self->methodsBuffer);
    (($fn3520) ((panda$core$Object*) self->out->out)->$class->vtable[1])(((panda$core$Object*) self->out->out));
}

