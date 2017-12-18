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
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/CCodeGenerator/ClassConstant.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/CCodeGenerator/MethodShim.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/Variable/Storage.h"
#include "org/pandalanguage/pandac/CCodeGenerator/OpClass.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/core/Real64.h"
#include "panda/core/Panda.h"
#include "panda/core/Formattable.h"
#include "org/pandalanguage/pandac/CCodeGenerator/LoopDescriptor.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

org$pandalanguage$pandac$CCodeGenerator$class_type org$pandalanguage$pandac$CCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim, org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$OpClass, org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

typedef void (*$fn65)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn120)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn137)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn172)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn178)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn184)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn214)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn220)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn226)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn311)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn317)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn323)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn352)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn375)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn381)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn387)(panda$collections$Iterator*);
typedef void (*$fn395)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn432)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn438)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn467)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn475)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn520)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn525)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn546)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn554)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn563)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn566)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn572)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn595)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn625)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn633)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn673)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn678)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn699)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn707)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn710)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn719)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn725)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn731)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn760)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn788)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn794)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn800)(panda$collections$Iterator*);
typedef void (*$fn808)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn888)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn894)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn900)(panda$collections$Iterator*);
typedef void (*$fn908)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn926)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn982)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1000)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1021)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1066)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1076)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1089)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1105)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1115)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1128)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1173)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1178)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1191)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1243)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1260)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1293)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1301)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1309)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1312)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1319)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1336)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1349)(panda$collections$CollectionView*);
typedef void (*$fn1371)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1511)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1529)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1616)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1623)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1634)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1638)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1644)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1650)(panda$collections$Iterator*);
typedef void (*$fn1658)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1661)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1691)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1697)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1713)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1723)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1727)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1734)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1738)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1740)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1745)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1748)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1943)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1969)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1984)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1988)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2020)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2025)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2031)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2037)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2045)(panda$core$Formattable*, panda$core$String*);
typedef void (*$fn2052)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2057)(panda$collections$CollectionView*);
typedef void (*$fn2068)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2191)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2202)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2211)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2216)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2225)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2230)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2261)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2266)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2272)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2278)(panda$collections$Iterator*);
typedef void (*$fn2282)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2303)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2331)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2342)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2436)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2446)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2451)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2455)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2461)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2467)(panda$collections$Iterator*);
typedef void (*$fn2469)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2470)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2473)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2492)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2495)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2499)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2502)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2538)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2545)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2563)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2577)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2589)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2599)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2644)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2658)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2672)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2689)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2705)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2720)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2737)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2743)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2748)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2787)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2794)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2812)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2826)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2838)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2846)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2853)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2865)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2875)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2916)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2928)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2944)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2958)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2972)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2988)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3002)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3018)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3035)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3050)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3066)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3084)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3104)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3119)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3135)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3154)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3173)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3182)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3187)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3213)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3219)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3242)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3253)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3256)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3266)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3275)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3292)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3298)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3304)(panda$collections$Iterator*);
typedef void (*$fn3370)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3396)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3410)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3412)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3450)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3457)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3472)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3479)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3522)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3533)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3538)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3548)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3571)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3580)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3585)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3591)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3597)(panda$collections$Iterator*);
typedef void (*$fn3610)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3613)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3625)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3631)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3637)(panda$collections$Iterator*);
typedef void (*$fn3640)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3642)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3645)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3655)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3657)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3659)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3661)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3663)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3664)(panda$core$Object*);

static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x66\x6e", 3, 1407949, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20", 8, 23394968824372186, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28\x2a", 3, 1360815, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x28", 2, 14382, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6c", 2, 13945, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x3b", 2, 16118, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x38", 1, 157, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x36", 2, 15204, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x33\x32", 2, 15402, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x5f", 2, 13932, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x6e\x65\x78\x74\x3b\x20", 19, -82469649542869656, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6d", 5, 14375831170, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70", 2, 13545, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70", 1, 213, NULL };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20", 10, -868402795326672399, NULL };
static panda$core$String $s523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6c\x66", 5, 14792042467, NULL };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x73\x75\x6c\x74", 6, 2270301397372, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6d", 12, -5595348649711353309, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2a", 9, 1496394141948660748, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6c\x66\x2d\x3e\x76\x61\x6c\x75\x65", 12, 3684417363826496863, NULL };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5f", 9, 1496394141948660801, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 21, 7276812015398014858, NULL };
static panda$core$String $s757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static panda$core$String $s764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x26", 3, 1451812, NULL };
static panda$core$String $s777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x31\x2c\x20", 5, 15122232102, NULL };
static panda$core$String $s876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x65\x78\x74\x65\x72\x6e\x61\x6c\x20\x67\x6c\x6f\x62\x61\x6c\x20", 19, 7395979908803736066, NULL };
static panda$core$String $s924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x31\x2c\x20", 5, 15122232102, NULL };
static panda$core$String $s971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d\x20\x7d\x3b", 4, 233187142, NULL };
static panda$core$String $s1023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s1071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s1074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s1110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s1113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s1135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s1147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s1159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s1161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s1163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s1169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s1172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x3d\x20", 4, 137658487, NULL };
static panda$core$String $s1201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3d\x20", 4, 137372859, NULL };
static panda$core$String $s1212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static panda$core$String $s1280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d\x29", 2, 19635, NULL };
static panda$core$String $s1286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static panda$core$String $s1288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static panda$core$String $s1294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static panda$core$String $s1296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, 318867264039102424, NULL };
static panda$core$String $s1299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s1304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static panda$core$String $s1311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static panda$core$String $s1369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s1384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6c\x6c\x6f\x63", 5, 20716344924, NULL };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x6d\x61\x6c\x6c\x6f\x63\x28", 9, 1541204091645718446, NULL };
static panda$core$String $s1404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s1417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x2a", 2, 14283, NULL };
static panda$core$String $s1419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d", 7, 157293860332681, NULL };
static panda$core$String $s1437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6c\x6c\x6f\x63", 7, 229298558774239, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x72\x65\x61\x6c\x6c\x6f\x63\x28", 10, 8088200864683738024, NULL };
static panda$core$String $s1460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6f\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s1484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s1494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s1512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s1608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x26", 2, 14279, NULL };
static panda$core$String $s1621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3f\x20", 11, -2797487400017487744, NULL };
static panda$core$String $s1680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x20\x4e\x55\x4c\x4c\x29", 8, 14321312880043979, NULL };
static panda$core$String $s1686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s1695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static panda$core$String $s1700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s1704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x61\x6c\x6c\x6f\x63\x28", 7, 223950062312973, NULL };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x63\x6c\x20\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20", 27, 7283889564528102738, NULL };
static panda$core$String $s1717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s1725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x72\x65\x66\x43\x6f\x75\x6e\x74\x20\x3d\x20\x31\x3b", 15, -7616502316629902533, NULL };
static panda$core$String $s1729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x76\x61\x6c\x75\x65\x20\x3d\x20", 10, -5658520382000078270, NULL };
static panda$core$String $s1732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s1743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c\x3b", 8, 14324497440495800, NULL };
static panda$core$String $s1747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2d\x3e\x76\x61\x6c\x75\x65", 8, 15272754413107790, NULL };
static panda$core$String $s1800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c\x20\x3f\x20", 11, 7728168270859090233, NULL };
static panda$core$String $s1805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x20\x28", 4, 137624963, NULL };
static panda$core$String $s1809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x30\x20\x7d\x29", 19, 3502995608209124108, NULL };
static panda$core$String $s1811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s1817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x74\x72\x75\x65\x20\x7d\x29", 9, 1573697403055851823, NULL };
static panda$core$String $s1819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8, 21448182697504497, NULL };
static panda$core$String $s1884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s1927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s1935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s1960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x61\x6c\x6c\x6f\x63\x28", 7, 223950062312973, NULL };
static panda$core$String $s1966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 32, -2435628749655888173, NULL };
static panda$core$String $s1982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s1986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x72\x65\x66\x43\x6f\x75\x6e\x74\x2e\x76\x61\x6c\x75\x65\x20\x3d\x20\x31\x3b", 21, 5666803292027080506, NULL };
static panda$core$String $s1991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x30", 2, 14895, NULL };
static panda$core$String $s2003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73", 2, 13952, NULL };
static panda$core$String $s2011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s2016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x24\x63\x6c\x61\x73\x73\x2c\x20\x32\x2c\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x68\x61\x72\x38\x2a\x29\x20\x22", 70, 2026475985823268269, NULL };
static panda$core$String $s2039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5c\x78", 2, 19613, NULL };
static panda$core$String $s2042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s2047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x3e\x32", 3, 1526261, NULL };
static panda$core$String $s2050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22\x2c\x20", 3, 1381611, NULL };
static panda$core$String $s2061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x4e\x55\x4c\x4c\x20\x7d\x3b", 9, 1573656756204980508, NULL };
static panda$core$String $s2069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x73\x65\x6c\x66\x29", 7, 151084256719941, NULL };
static panda$core$String $s2092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s2093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s2098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x3d\x20\x4e\x55\x4c\x4c", 8, 14324797439511602, NULL };
static panda$core$String $s2100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s2122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c", 8, 14295074875294774, NULL };
static panda$core$String $s2124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x66\x61\x6c\x73\x65\x20\x7d\x29", 23, 6429304196845160675, NULL };
static panda$core$String $s2138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s2149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7e", 1, 227, NULL };
static panda$core$String $s2161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s2197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s2281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 2213733, NULL };
static panda$core$String $s2296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6f\x72\x65\x32\x20", 7, 230519193382140, NULL };
static panda$core$String $s2298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s2323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d\x20\x3d\x20", 10, -3960675068764064938, NULL };
static panda$core$String $s2329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6f\x79", 7, 214439158056679, NULL };
static panda$core$String $s2336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x72\x65\x65\x28", 5, 21242756259, NULL };
static panda$core$String $s2340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s2431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s2444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s2494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s2501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s2555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6d\x69\x6e\x2e\x76\x61\x6c\x75\x65\x3b", 11, -3956212002962864875, NULL };
static panda$core$String $s2569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s2581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6d\x61\x78\x2e\x76\x61\x6c\x75\x65\x3b", 11, -4041768404061004273, NULL };
static panda$core$String $s2592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s2616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s2618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s2625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s2628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s2650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s2664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s2687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s2694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s2708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x3d\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 12, -550717230962542041, NULL };
static panda$core$String $s2714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s2725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s2728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 11, 2239307386318546122, NULL };
static panda$core$String $s2731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20\x31\x3b", 12, -4476855678279854640, NULL };
static panda$core$String $s2744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s2804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x73\x74\x61\x72\x74\x2e\x76\x61\x6c\x75\x65\x3b", 13, 3588086193908855763, NULL };
static panda$core$String $s2818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s2830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x65\x6e\x64\x2e\x76\x61\x6c\x75\x65\x3b", 11, 5794120589201096528, NULL };
static panda$core$String $s2857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x73\x74\x65\x70\x2e\x76\x61\x6c\x75\x65\x3b", 12, -1565217378717073995, NULL };
static panda$core$String $s2868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s2892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s2894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s2901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s2904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20\x30\x3b", 5, 13904243334, NULL };
static panda$core$String $s2917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s2950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s2964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s2994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s3010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s3048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s3055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s3075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s3095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2d\x20", 9, 1604554669253061197, NULL };
static panda$core$String $s3117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x3d\x20\x2d", 5, 13904537533, NULL };
static panda$core$String $s3144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20", 7, 170190169868549, NULL };
static panda$core$String $s3149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x28", 5, 21541863820, NULL };
static panda$core$String $s3157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s3160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20\x2d", 4, 137665772, NULL };
static panda$core$String $s3163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20", 7, 170190169868549, NULL };
static panda$core$String $s3168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20", 10, -3960675068826801088, NULL };
static panda$core$String $s3180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s3208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7b", 14, 1197661341919403142, NULL };
static panda$core$String $s3255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s3322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s3352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s3355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x28\x28", 5, 13903212206, NULL };
static panda$core$String $s3359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a\x29\x20", 3, 1462916, NULL };
static panda$core$String $s3361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x63\x68\x61\x72\x2a\x29\x20", 9, 1531222690101128410, NULL };
static panda$core$String $s3363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s3367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static panda$core$String $s3371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s3408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x3b", 7, 229300545255632, NULL };
static panda$core$String $s3446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x50\x41\x4e\x44\x41\x5f\x41\x53\x53\x45\x52\x54\x28", 13, 1703954053821868674, NULL };
static panda$core$String $s3470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s3473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20\x28", 8, 23285560238056031, NULL };
static panda$core$String $s3477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s3515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x73\x65\x20", 5, 20913202745, NULL };
static panda$core$String $s3520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s3532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x3b", 6, 2103477946177, NULL };
static panda$core$String $s3537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x61\x75\x6c\x74\x3a", 8, 21658216358330300, NULL };
static panda$core$String $s3547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s3565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s3581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70\x5f", 3, 1368140, NULL };
static panda$core$String $s3608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s3644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };

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
    panda$io$IndentedOutputStream* $tmp11 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp11->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp11->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp11, ((panda$io$OutputStream*) self->methodsBuffer));
    self->methods = $tmp11;
    panda$io$MemoryOutputStream* $tmp13 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp13->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp13->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp13);
    self->methodHeaderBuffer = $tmp13;
    panda$io$IndentedOutputStream* $tmp15 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp15->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp15->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp15, ((panda$io$OutputStream*) self->methodHeaderBuffer));
    self->methodHeader = $tmp15;
    panda$io$MemoryOutputStream* $tmp17 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp17->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp17->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp17);
    self->wrapperShimsBuffer = $tmp17;
    panda$io$IndentedOutputStream* $tmp19 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp19->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp19->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp19, ((panda$io$OutputStream*) self->wrapperShimsBuffer));
    self->wrapperShims = $tmp19;
    panda$io$MemoryOutputStream* $tmp21 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp21->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp21->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp21);
    self->shimsBuffer = $tmp21;
    panda$io$IndentedOutputStream* $tmp23 = (panda$io$IndentedOutputStream*) malloc(56);
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
    panda$io$IndentedOutputStream* $tmp45 = (panda$io$IndentedOutputStream*) malloc(56);
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
    panda$core$MutableString* code81;
    panda$core$String* separator91;
    panda$core$Range$LTpanda$core$Int64$GT $tmp93;
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
        panda$core$Int64$wrapper* $tmp77;
        $tmp77 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp77->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp77->refCount = 1;
        $tmp77->value = self->varCount;
        panda$core$String* $tmp78 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s76, ((panda$core$Object*) $tmp77));
        panda$core$String* $tmp80 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp78, &$s79);
        result75 = $tmp80;
        panda$core$MutableString* $tmp82 = (panda$core$MutableString*) malloc(48);
        $tmp82->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp82->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp82, &$s84);
        code81 = $tmp82;
        panda$core$Int64 $tmp85 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
        panda$core$Int64 $tmp86 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp85, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp87 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp86);
        panda$core$String* $tmp88 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp87));
        panda$core$MutableString$append$panda$core$String(code81, $tmp88);
        panda$core$MutableString$append$panda$core$String(code81, &$s89);
        panda$core$MutableString$append$panda$core$String(code81, result75);
        panda$core$MutableString$append$panda$core$String(code81, &$s90);
        separator91 = &$s92;
        panda$core$Int64 $tmp94 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
        panda$core$Int64 $tmp95 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp94, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp93, ((panda$core$Int64) { 0 }), $tmp95, ((panda$core$Bit) { false }));
        int64_t $tmp97 = $tmp93.min.value;
        panda$core$Int64 i96 = { $tmp97 };
        int64_t $tmp99 = $tmp93.max.value;
        bool $tmp100 = $tmp93.inclusive.value;
        if ($tmp100) goto $l107; else goto $l108;
        $l107:;
        if ($tmp97 <= $tmp99) goto $l101; else goto $l103;
        $l108:;
        if ($tmp97 < $tmp99) goto $l101; else goto $l103;
        $l101:;
        {
            panda$core$MutableString$append$panda$core$String(code81, separator91);
            panda$core$Object* $tmp109 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, i96);
            panda$core$String* $tmp110 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp109));
            panda$core$MutableString$append$panda$core$String(code81, $tmp110);
            separator91 = &$s111;
        }
        $l104:;
        int64_t $tmp113 = $tmp99 - i96.value;
        if ($tmp100) goto $l114; else goto $l115;
        $l114:;
        if ((uint64_t) $tmp113 >= 1) goto $l112; else goto $l103;
        $l115:;
        if ((uint64_t) $tmp113 > 1) goto $l112; else goto $l103;
        $l112:;
        i96.value += 1;
        goto $l101;
        $l103:;
        panda$core$MutableString$append$panda$core$String(code81, &$s118);
        panda$core$String* $tmp119 = panda$core$MutableString$finish$R$panda$core$String(code81);
        (($fn120) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp119);
        return result75;
    }
    }
    panda$core$String* $tmp121 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self->hCodeGen, p_t);
    return $tmp121;
}
void org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->compiler = p_compiler;
    org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->hCodeGen, p_compiler);
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp122 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp122;
    panda$core$Int64$wrapper* $tmp124;
    $tmp124 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp124->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp124->refCount = 1;
    $tmp124->value = self->varCount;
    panda$core$String* $tmp125 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s123, ((panda$core$Object*) $tmp124));
    panda$core$String* $tmp127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp125, &$s126);
    return $tmp127;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$Int64 $tmp128 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp128;
    panda$core$Int64$wrapper* $tmp130;
    $tmp130 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp130->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp130->refCount = 1;
    $tmp130->value = self->varCount;
    panda$core$String* $tmp131 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s129, ((panda$core$Object*) $tmp130));
    panda$core$String* $tmp133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp131, &$s132);
    return $tmp133;
}
void org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp134 = panda$core$String$convert$R$panda$core$String(p_label);
    panda$core$String* $tmp136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp134, &$s135);
    (($fn137) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp136);
    self->currentBlock = p_label;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt) {
    switch (p_stmt->kind.value) {
        case 1000:
        {
            bool $tmp138 = ((panda$core$Bit) { p_stmt->children == NULL }).value;
            if ($tmp138) goto $l139;
            panda$core$Int64 $tmp140 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp140, ((panda$core$Int64) { 0 }));
            $tmp138 = $tmp141.value;
            $l139:;
            panda$core$Bit $tmp142 = { $tmp138 };
            if ($tmp142.value) {
            {
                return ((panda$core$Bit) { false });
            }
            }
            panda$core$Int64 $tmp143 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Int64 $tmp144 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp143, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp145 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, $tmp144);
            panda$core$Bit $tmp146 = org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp145));
            return $tmp146;
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
    org$pandalanguage$pandac$ClassDecl* cl158;
    panda$core$Int64 result167;
    panda$collections$Iterator* f$Iter168;
    org$pandalanguage$pandac$FieldDecl* f181;
    panda$core$Int64 size187;
    panda$core$Int64 align189;
    PANDA_ASSERT(p_t->resolved.value);
    panda$core$Bit $tmp147 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_t);
    if ($tmp147.value) {
    {
        panda$core$Bit $tmp149 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s148);
        if ($tmp149.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        panda$core$Bit $tmp151 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s150);
        if ($tmp151.value) {
        {
            return ((panda$core$Int64) { 2 });
        }
        }
        panda$core$Bit $tmp153 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s152);
        if ($tmp153.value) {
        {
            return ((panda$core$Int64) { 4 });
        }
        }
        panda$core$Bit $tmp155 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s154);
        PANDA_ASSERT($tmp155.value);
        return ((panda$core$Int64) { 8 });
    }
    }
    org$pandalanguage$pandac$Type* $tmp156 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp157 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp156);
    if ($tmp157.value) {
    {
        return ((panda$core$Int64) { 1 });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp159 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl158 = $tmp159;
    PANDA_ASSERT(((panda$core$Bit) { cl158 != NULL }).value);
    panda$core$Bit $tmp161 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl158);
    panda$core$Bit $tmp162 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp161);
    bool $tmp160 = $tmp162.value;
    if ($tmp160) goto $l163;
    panda$core$Bit $tmp165 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl158)->name, &$s164);
    $tmp160 = $tmp165.value;
    $l163:;
    panda$core$Bit $tmp166 = { $tmp160 };
    if ($tmp166.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    result167 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp169 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl158);
        ITable* $tmp170 = ((panda$collections$Iterable*) $tmp169)->$class->itable;
        while ($tmp170->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp170 = $tmp170->next;
        }
        $fn172 $tmp171 = $tmp170->methods[0];
        panda$collections$Iterator* $tmp173 = $tmp171(((panda$collections$Iterable*) $tmp169));
        f$Iter168 = $tmp173;
        $l174:;
        ITable* $tmp176 = f$Iter168->$class->itable;
        while ($tmp176->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp176 = $tmp176->next;
        }
        $fn178 $tmp177 = $tmp176->methods[0];
        panda$core$Bit $tmp179 = $tmp177(f$Iter168);
        panda$core$Bit $tmp180 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp179);
        if (!$tmp180.value) goto $l175;
        {
            ITable* $tmp182 = f$Iter168->$class->itable;
            while ($tmp182->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp182 = $tmp182->next;
            }
            $fn184 $tmp183 = $tmp182->methods[1];
            panda$core$Object* $tmp185 = $tmp183(f$Iter168);
            f181 = ((org$pandalanguage$pandac$FieldDecl*) $tmp185);
            panda$core$Bit $tmp186 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f181->annotations);
            if ($tmp186.value) {
            {
                goto $l174;
            }
            }
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f181);
            panda$core$Int64 $tmp188 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f181->type);
            size187 = $tmp188;
            panda$core$Int64 $tmp190 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result167, size187);
            align189 = $tmp190;
            panda$core$Bit $tmp191 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align189, ((panda$core$Int64) { 0 }));
            if ($tmp191.value) {
            {
                panda$core$Int64 $tmp192 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size187, align189);
                panda$core$Int64 $tmp193 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result167, $tmp192);
                result167 = $tmp193;
            }
            }
            panda$core$Int64 $tmp194 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result167, size187);
            panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp194, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp195.value);
            panda$core$Int64 $tmp196 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result167, size187);
            result167 = $tmp196;
        }
        goto $l174;
        $l175:;
    }
    panda$core$Bit $tmp197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp197.value) {
    {
        panda$core$Int64 $tmp198 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result167, ((panda$core$Int64) { 1 }));
        result167 = $tmp198;
    }
    }
    return result167;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp199 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
    panda$core$Int64 $tmp200 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp199, ((panda$core$Int64) { 8 }));
    return $tmp200;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl201;
    panda$core$Int64 result207;
    panda$collections$Iterator* f$Iter210;
    org$pandalanguage$pandac$FieldDecl* f223;
    panda$core$Int64 size228;
    panda$core$Int64 align230;
    org$pandalanguage$pandac$ClassDecl* $tmp202 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl201 = $tmp202;
    bool $tmp203 = ((panda$core$Bit) { cl201 != NULL }).value;
    if (!$tmp203) goto $l204;
    panda$core$Bit $tmp205 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl201);
    $tmp203 = $tmp205.value;
    $l204:;
    panda$core$Bit $tmp206 = { $tmp203 };
    PANDA_ASSERT($tmp206.value);
    org$pandalanguage$pandac$Type* $tmp208 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$Int64 $tmp209 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp208);
    result207 = $tmp209;
    {
        panda$collections$ListView* $tmp211 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl201);
        ITable* $tmp212 = ((panda$collections$Iterable*) $tmp211)->$class->itable;
        while ($tmp212->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp212 = $tmp212->next;
        }
        $fn214 $tmp213 = $tmp212->methods[0];
        panda$collections$Iterator* $tmp215 = $tmp213(((panda$collections$Iterable*) $tmp211));
        f$Iter210 = $tmp215;
        $l216:;
        ITable* $tmp218 = f$Iter210->$class->itable;
        while ($tmp218->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp218 = $tmp218->next;
        }
        $fn220 $tmp219 = $tmp218->methods[0];
        panda$core$Bit $tmp221 = $tmp219(f$Iter210);
        panda$core$Bit $tmp222 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp221);
        if (!$tmp222.value) goto $l217;
        {
            ITable* $tmp224 = f$Iter210->$class->itable;
            while ($tmp224->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp224 = $tmp224->next;
            }
            $fn226 $tmp225 = $tmp224->methods[1];
            panda$core$Object* $tmp227 = $tmp225(f$Iter210);
            f223 = ((org$pandalanguage$pandac$FieldDecl*) $tmp227);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f223);
            panda$core$Int64 $tmp229 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f223->type);
            size228 = $tmp229;
            panda$core$Int64 $tmp231 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result207, size228);
            align230 = $tmp231;
            panda$core$Bit $tmp232 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align230, ((panda$core$Int64) { 0 }));
            if ($tmp232.value) {
            {
                panda$core$Int64 $tmp233 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size228, align230);
                panda$core$Int64 $tmp234 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result207, $tmp233);
                result207 = $tmp234;
            }
            }
            panda$core$Int64 $tmp235 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result207, size228);
            panda$core$Bit $tmp236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp235, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp236.value);
            panda$core$Int64 $tmp237 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result207, size228);
            result207 = $tmp237;
        }
        goto $l216;
        $l217:;
    }
    panda$core$Bit $tmp238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp238.value) {
    {
        panda$core$Int64 $tmp239 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result207, ((panda$core$Int64) { 1 }));
        result207 = $tmp239;
    }
    }
    return result207;
}
void org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp240 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp240.value) {
    {
        return;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp241 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    return $tmp241;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp242.value) {
    {
        panda$core$Object* $tmp243 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp244 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp243));
        return $tmp244;
    }
    }
    panda$core$String* $tmp245 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp246 = panda$core$String$convert$R$panda$core$String($tmp245);
    panda$core$String* $tmp248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp246, &$s247);
    return $tmp248;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp249 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp249, &$s250);
    return $tmp251;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType252;
    panda$core$MutableString* result254;
    panda$core$Char8 $tmp261;
    panda$core$Char8 $tmp269;
    panda$core$Range$LTpanda$core$Int64$GT $tmp270;
    org$pandalanguage$pandac$Type* $tmp253 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedType252 = $tmp253;
    panda$core$MutableString* $tmp255 = (panda$core$MutableString*) malloc(48);
    $tmp255->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp255->refCount.value = 1;
    panda$core$MutableString$init($tmp255);
    result254 = $tmp255;
    panda$core$Int64 $tmp257 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType252->subtypes);
    panda$core$Int64 $tmp258 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp257, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp259 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType252->subtypes, $tmp258);
    panda$core$String* $tmp260 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp259));
    panda$core$MutableString$append$panda$core$String(result254, $tmp260);
    panda$core$Char8$init$panda$core$UInt8(&$tmp261, ((panda$core$UInt8) { 40 }));
    panda$core$MutableString$append$panda$core$Char8(result254, $tmp261);
    panda$core$Bit $tmp262 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp262.value);
    panda$core$String* $tmp263 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp264 = panda$core$String$convert$R$panda$core$String($tmp263);
    panda$core$String* $tmp266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp264, &$s265);
    panda$core$MutableString$append$panda$core$String(result254, $tmp266);
    panda$core$Bit $tmp267 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_m->owner);
    if ($tmp267.value) {
    {
        panda$core$MutableString$append$panda$core$String(result254, &$s268);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp269, ((panda$core$UInt8) { 42 }));
    panda$core$MutableString$append$panda$core$Char8(result254, $tmp269);
    panda$core$Int64 $tmp271 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType252->subtypes);
    panda$core$Int64 $tmp272 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp271, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp270, ((panda$core$Int64) { 0 }), $tmp272, ((panda$core$Bit) { false }));
    int64_t $tmp274 = $tmp270.min.value;
    panda$core$Int64 i273 = { $tmp274 };
    int64_t $tmp276 = $tmp270.max.value;
    bool $tmp277 = $tmp270.inclusive.value;
    if ($tmp277) goto $l284; else goto $l285;
    $l284:;
    if ($tmp274 <= $tmp276) goto $l278; else goto $l280;
    $l285:;
    if ($tmp274 < $tmp276) goto $l278; else goto $l280;
    $l278:;
    {
        panda$core$MutableString$append$panda$core$String(result254, &$s286);
        panda$core$Object* $tmp287 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType252->subtypes, i273);
        panda$core$String* $tmp288 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp287));
        panda$core$MutableString$append$panda$core$String(result254, $tmp288);
    }
    $l281:;
    int64_t $tmp290 = $tmp276 - i273.value;
    if ($tmp277) goto $l291; else goto $l292;
    $l291:;
    if ((uint64_t) $tmp290 >= 1) goto $l289; else goto $l280;
    $l292:;
    if ((uint64_t) $tmp290 > 1) goto $l289; else goto $l280;
    $l289:;
    i273.value += 1;
    goto $l278;
    $l280:;
    panda$core$MutableString$append$panda$core$String(result254, &$s295);
    panda$core$String* $tmp296 = panda$core$MutableString$finish$R$panda$core$String(result254);
    return $tmp296;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp297.value);
    panda$core$Object* $tmp298 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp299 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp298));
    panda$core$String* $tmp300 = panda$core$String$convert$R$panda$core$String($tmp299);
    panda$core$String* $tmp302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp300, &$s301);
    return $tmp302;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces303;
    panda$core$String* previous306;
    panda$collections$Iterator* intfType$Iter308;
    org$pandalanguage$pandac$Type* intfType320;
    org$pandalanguage$pandac$ClassDecl* intf325;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC327;
    panda$collections$ListView* methods329;
    panda$core$String* name331;
    panda$core$MutableString* result340;
    panda$core$String* separator370;
    panda$collections$Iterator* m$Iter372;
    org$pandalanguage$pandac$MethodDecl* m384;
    org$pandalanguage$pandac$Type* $tmp304 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp305 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp304);
    interfaces303 = $tmp305;
    previous306 = &$s307;
    {
        ITable* $tmp309 = ((panda$collections$Iterable*) interfaces303)->$class->itable;
        while ($tmp309->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp309 = $tmp309->next;
        }
        $fn311 $tmp310 = $tmp309->methods[0];
        panda$collections$Iterator* $tmp312 = $tmp310(((panda$collections$Iterable*) interfaces303));
        intfType$Iter308 = $tmp312;
        $l313:;
        ITable* $tmp315 = intfType$Iter308->$class->itable;
        while ($tmp315->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp315 = $tmp315->next;
        }
        $fn317 $tmp316 = $tmp315->methods[0];
        panda$core$Bit $tmp318 = $tmp316(intfType$Iter308);
        panda$core$Bit $tmp319 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp318);
        if (!$tmp319.value) goto $l314;
        {
            ITable* $tmp321 = intfType$Iter308->$class->itable;
            while ($tmp321->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp321 = $tmp321->next;
            }
            $fn323 $tmp322 = $tmp321->methods[1];
            panda$core$Object* $tmp324 = $tmp322(intfType$Iter308);
            intfType320 = ((org$pandalanguage$pandac$Type*) $tmp324);
            org$pandalanguage$pandac$ClassDecl* $tmp326 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType320);
            intf325 = $tmp326;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp328 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf325);
            intfCC327 = $tmp328;
            panda$collections$ListView* $tmp330 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType320);
            methods329 = $tmp330;
            panda$core$String* $tmp332 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp333 = panda$core$String$convert$R$panda$core$String($tmp332);
            panda$core$String* $tmp335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp333, &$s334);
            panda$core$String* $tmp336 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf325)->name);
            panda$core$String* $tmp337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp335, $tmp336);
            panda$core$String* $tmp339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp337, &$s338);
            name331 = $tmp339;
            panda$core$MutableString* $tmp341 = (panda$core$MutableString*) malloc(48);
            $tmp341->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp341->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp344 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp345 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp344);
            panda$core$String* $tmp346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s343, $tmp345);
            panda$core$String* $tmp348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp346, &$s347);
            ITable* $tmp350 = ((panda$collections$CollectionView*) methods329)->$class->itable;
            while ($tmp350->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp350 = $tmp350->next;
            }
            $fn352 $tmp351 = $tmp350->methods[0];
            panda$core$Int64 $tmp353 = $tmp351(((panda$collections$CollectionView*) methods329));
            panda$core$Int64$wrapper* $tmp354;
            $tmp354 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp354->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp354->refCount = 1;
            $tmp354->value = $tmp353;
            panda$core$String* $tmp355 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s349, ((panda$core$Object*) $tmp354));
            panda$core$String* $tmp357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp355, &$s356);
            panda$core$String* $tmp358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp357, name331);
            panda$core$String* $tmp360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp358, &$s359);
            panda$core$String* $tmp361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp348, $tmp360);
            panda$core$String* $tmp363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s362, intfCC327->name);
            panda$core$String* $tmp365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp363, &$s364);
            panda$core$String* $tmp366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp365, previous306);
            panda$core$String* $tmp368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp366, &$s367);
            panda$core$String* $tmp369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp361, $tmp368);
            panda$core$MutableString$init$panda$core$String($tmp341, $tmp369);
            result340 = $tmp341;
            separator370 = &$s371;
            {
                ITable* $tmp373 = ((panda$collections$Iterable*) methods329)->$class->itable;
                while ($tmp373->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp373 = $tmp373->next;
                }
                $fn375 $tmp374 = $tmp373->methods[0];
                panda$collections$Iterator* $tmp376 = $tmp374(((panda$collections$Iterable*) methods329));
                m$Iter372 = $tmp376;
                $l377:;
                ITable* $tmp379 = m$Iter372->$class->itable;
                while ($tmp379->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp379 = $tmp379->next;
                }
                $fn381 $tmp380 = $tmp379->methods[0];
                panda$core$Bit $tmp382 = $tmp380(m$Iter372);
                panda$core$Bit $tmp383 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp382);
                if (!$tmp383.value) goto $l378;
                {
                    ITable* $tmp385 = m$Iter372->$class->itable;
                    while ($tmp385->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp385 = $tmp385->next;
                    }
                    $fn387 $tmp386 = $tmp385->methods[1];
                    panda$core$Object* $tmp388 = $tmp386(m$Iter372);
                    m384 = ((org$pandalanguage$pandac$MethodDecl*) $tmp388);
                    panda$core$MutableString$append$panda$core$String(result340, separator370);
                    separator370 = &$s389;
                    panda$core$Bit $tmp390 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m384->annotations);
                    if ($tmp390.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result340, &$s391);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp392 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m384);
                        panda$core$MutableString$append$panda$core$String(result340, $tmp392);
                    }
                    }
                }
                goto $l377;
                $l378:;
            }
            panda$core$MutableString$append$panda$core$String(result340, &$s393);
            panda$core$String* $tmp394 = panda$core$MutableString$finish$R$panda$core$String(result340);
            (($fn395) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp394);
            panda$core$String* $tmp397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s396, name331);
            panda$core$String* $tmp399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp397, &$s398);
            previous306 = $tmp399;
        }
        goto $l313;
        $l314:;
    }
    return previous306;
}
org$pandalanguage$pandac$CCodeGenerator$MethodShim* org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer400;
    panda$io$IndentedOutputStream* out403;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* found406;
    org$pandalanguage$pandac$Type* effectiveReturnType414;
    panda$core$String* resultName418;
    panda$core$MutableString* resultType422;
    panda$core$String* self_t433;
    panda$core$Char8 $tmp439;
    panda$core$Range$LTpanda$core$Int64$GT $tmp440;
    panda$core$String* pType455;
    panda$collections$Array* casts478;
    panda$core$Range$LTpanda$core$Int64$GT $tmp481;
    panda$core$String* p496;
    panda$core$Range$LTpanda$core$Int64$GT $tmp526;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* result567;
    panda$io$MemoryOutputStream* $tmp401 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp401->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp401->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp401);
    outBuffer400 = $tmp401;
    panda$io$IndentedOutputStream* $tmp404 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp404->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp404->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp404, ((panda$io$OutputStream*) outBuffer400));
    out403 = $tmp404;
    panda$core$Object* $tmp407 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    found406 = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp407);
    if (((panda$core$Bit) { found406 != NULL }).value) {
    {
        return found406;
    }
    }
    panda$core$Bit $tmp408 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_effective);
    PANDA_ASSERT($tmp408.value);
    panda$core$Int64 $tmp409 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp410 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Int64 $tmp411 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp410, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp409, $tmp411);
    PANDA_ASSERT($tmp412.value);
    panda$core$Bit $tmp413 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_raw);
    PANDA_ASSERT($tmp413.value);
    panda$core$Int64 $tmp415 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp416 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp415, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp417 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, $tmp416);
    effectiveReturnType414 = ((org$pandalanguage$pandac$Type*) $tmp417);
    panda$core$String* $tmp419 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp419, &$s420);
    resultName418 = $tmp421;
    panda$core$MutableString* $tmp423 = (panda$core$MutableString*) malloc(48);
    $tmp423->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp423->refCount.value = 1;
    panda$core$String* $tmp425 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType414);
    panda$core$MutableString$init$panda$core$String($tmp423, $tmp425);
    resultType422 = $tmp423;
    panda$core$String* $tmp426 = panda$core$MutableString$convert$R$panda$core$String(resultType422);
    panda$core$String* $tmp428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp426, &$s427);
    panda$core$String* $tmp429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp428, resultName418);
    panda$core$String* $tmp431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp429, &$s430);
    (($fn432) ((panda$io$OutputStream*) out403)->$class->vtable[16])(((panda$io$OutputStream*) out403), $tmp431);
    panda$core$String* $tmp434 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t433 = $tmp434;
    panda$core$String* $tmp435 = panda$core$String$convert$R$panda$core$String(self_t433);
    panda$core$String* $tmp437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp435, &$s436);
    (($fn438) ((panda$io$OutputStream*) out403)->$class->vtable[16])(((panda$io$OutputStream*) out403), $tmp437);
    panda$core$Char8$init$panda$core$UInt8(&$tmp439, ((panda$core$UInt8) { 40 }));
    panda$core$MutableString$append$panda$core$Char8(resultType422, $tmp439);
    panda$core$MutableString$append$panda$core$String(resultType422, self_t433);
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
        panda$core$MutableString$append$panda$core$String(resultType422, &$s458);
        panda$core$MutableString$append$panda$core$String(resultType422, pType455);
        panda$core$String* $tmp460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s459, pType455);
        panda$core$String* $tmp462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp460, &$s461);
        panda$core$Int64$wrapper* $tmp463;
        $tmp463 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp463->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp463->refCount = 1;
        $tmp463->value = i442;
        panda$core$String* $tmp464 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp462, ((panda$core$Object*) $tmp463));
        panda$core$String* $tmp466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp464, &$s465);
        (($fn467) ((panda$io$OutputStream*) out403)->$class->vtable[16])(((panda$io$OutputStream*) out403), $tmp466);
    }
    $l450:;
    int64_t $tmp469 = $tmp445 - i442.value;
    if ($tmp446) goto $l470; else goto $l471;
    $l470:;
    if ((uint64_t) $tmp469 >= 1) goto $l468; else goto $l449;
    $l471:;
    if ((uint64_t) $tmp469 > 1) goto $l468; else goto $l449;
    $l468:;
    i442.value += 1;
    goto $l447;
    $l449:;
    (($fn475) ((panda$io$OutputStream*) out403)->$class->vtable[19])(((panda$io$OutputStream*) out403), &$s474);
    panda$core$Int64 $tmp476 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(out403->level, ((panda$core$Int64) { 1 }));
    out403->level = $tmp476;
    panda$core$MutableString$append$panda$core$String(resultType422, &$s477);
    panda$collections$Array* $tmp479 = (panda$collections$Array*) malloc(40);
    $tmp479->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp479->refCount.value = 1;
    panda$collections$Array$init($tmp479);
    casts478 = $tmp479;
    panda$core$Int64 $tmp482 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp481, ((panda$core$Int64) { 0 }), $tmp482, ((panda$core$Bit) { false }));
    int64_t $tmp484 = $tmp481.min.value;
    panda$core$Int64 i483 = { $tmp484 };
    int64_t $tmp486 = $tmp481.max.value;
    bool $tmp487 = $tmp481.inclusive.value;
    if ($tmp487) goto $l494; else goto $l495;
    $l494:;
    if ($tmp484 <= $tmp486) goto $l488; else goto $l490;
    $l495:;
    if ($tmp484 < $tmp486) goto $l488; else goto $l490;
    $l488:;
    {
        panda$core$Int64$wrapper* $tmp498;
        $tmp498 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp498->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp498->refCount = 1;
        $tmp498->value = i483;
        panda$core$String* $tmp499 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s497, ((panda$core$Object*) $tmp498));
        panda$core$String* $tmp501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp499, &$s500);
        p496 = $tmp501;
        panda$core$Object* $tmp502 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i483);
        panda$core$Object* $tmp503 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i483);
        panda$core$Bit $tmp504 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp502)->type, ((org$pandalanguage$pandac$Type*) $tmp503));
        if ($tmp504.value) {
        {
            panda$core$Object* $tmp505 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i483);
            panda$core$Object* $tmp506 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i483);
            panda$core$String* $tmp507 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p496, ((org$pandalanguage$pandac$Type*) $tmp505), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp506)->type, out403);
            panda$collections$Array$add$panda$collections$Array$T(casts478, ((panda$core$Object*) $tmp507));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts478, ((panda$core$Object*) p496));
        }
        }
    }
    $l491:;
    int64_t $tmp509 = $tmp486 - i483.value;
    if ($tmp487) goto $l510; else goto $l511;
    $l510:;
    if ((uint64_t) $tmp509 >= 1) goto $l508; else goto $l490;
    $l511:;
    if ((uint64_t) $tmp509 > 1) goto $l508; else goto $l490;
    $l508:;
    i483.value += 1;
    goto $l488;
    $l490:;
    org$pandalanguage$pandac$Type* $tmp514 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp515 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp514);
    if ($tmp515.value) {
    {
        panda$core$String* $tmp516 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
        panda$core$String* $tmp517 = panda$core$String$convert$R$panda$core$String($tmp516);
        panda$core$String* $tmp519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp517, &$s518);
        (($fn520) ((panda$io$OutputStream*) out403)->$class->vtable[16])(((panda$io$OutputStream*) out403), $tmp519);
    }
    }
    panda$core$String* $tmp521 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp522 = panda$core$String$convert$R$panda$core$String($tmp521);
    panda$core$String* $tmp524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp522, &$s523);
    (($fn525) ((panda$io$OutputStream*) out403)->$class->vtable[16])(((panda$io$OutputStream*) out403), $tmp524);
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
        panda$core$Object* $tmp542 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts478, i528);
        panda$core$String* $tmp543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s541, ((panda$core$String*) $tmp542));
        panda$core$String* $tmp545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp543, &$s544);
        (($fn546) ((panda$io$OutputStream*) out403)->$class->vtable[16])(((panda$io$OutputStream*) out403), $tmp545);
    }
    $l536:;
    int64_t $tmp548 = $tmp531 - i528.value;
    if ($tmp532) goto $l549; else goto $l550;
    $l549:;
    if ((uint64_t) $tmp548 >= 1) goto $l547; else goto $l535;
    $l550:;
    if ((uint64_t) $tmp548 > 1) goto $l547; else goto $l535;
    $l547:;
    i528.value += 1;
    goto $l533;
    $l535:;
    (($fn554) ((panda$io$OutputStream*) out403)->$class->vtable[19])(((panda$io$OutputStream*) out403), &$s553);
    org$pandalanguage$pandac$Type* $tmp555 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp556 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp555);
    if ($tmp556.value) {
    {
        panda$core$String* $tmp559 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, &$s558, p_raw->returnType, effectiveReturnType414, out403);
        panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s557, $tmp559);
        panda$core$String* $tmp562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp560, &$s561);
        (($fn563) ((panda$io$OutputStream*) out403)->$class->vtable[19])(((panda$io$OutputStream*) out403), $tmp562);
    }
    }
    panda$core$Int64 $tmp564 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(out403->level, ((panda$core$Int64) { 1 }));
    out403->level = $tmp564;
    (($fn566) ((panda$io$OutputStream*) out403)->$class->vtable[19])(((panda$io$OutputStream*) out403), &$s565);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp568 = (org$pandalanguage$pandac$CCodeGenerator$MethodShim*) malloc(32);
    $tmp568->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$MethodShim$class;
    $tmp568->refCount.value = 1;
    panda$core$String* $tmp570 = panda$core$MutableString$finish$R$panda$core$String(resultType422);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp568, resultName418, $tmp570);
    result567 = $tmp568;
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result567));
    panda$core$String* $tmp571 = panda$io$MemoryOutputStream$finish$R$panda$core$String(outBuffer400);
    (($fn572) p_rawOut->$class->vtable[16])(p_rawOut, $tmp571);
    return result567;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* oldMethod574;
    panda$core$String* result575;
    panda$core$String* selfType580;
    org$pandalanguage$pandac$Type* actualMethodType596;
    org$pandalanguage$pandac$Type* inheritedMethodType598;
    panda$core$Range$LTpanda$core$Int64$GT $tmp600;
    panda$collections$Array* parameters635;
    panda$core$Range$LTpanda$core$Int64$GT $tmp638;
    panda$collections$Array* children663;
    org$pandalanguage$pandac$Position $tmp668;
    panda$core$Range$LTpanda$core$Int64$GT $tmp679;
    panda$core$Bit $tmp573 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp573.value);
    oldMethod574 = self->currentMethod;
    self->currentMethod = p_m;
    panda$core$String* $tmp576 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp577 = panda$core$String$convert$R$panda$core$String($tmp576);
    panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp577, &$s578);
    result575 = $tmp579;
    panda$core$String* $tmp581 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp582 = panda$core$String$convert$R$panda$core$String($tmp581);
    panda$core$String* $tmp584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp582, &$s583);
    selfType580 = $tmp584;
    panda$core$String* $tmp585 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp586 = panda$core$String$convert$R$panda$core$String($tmp585);
    panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp586, &$s587);
    panda$core$String* $tmp589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp588, result575);
    panda$core$String* $tmp591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp589, &$s590);
    panda$core$String* $tmp592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp591, selfType580);
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
    if ((uint64_t) $tmp627 >= 1) goto $l626; else goto $l609;
    $l629:;
    if ((uint64_t) $tmp627 > 1) goto $l626; else goto $l609;
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
    if ((uint64_t) $tmp658 >= 1) goto $l657; else goto $l647;
    $l660:;
    if ((uint64_t) $tmp658 > 1) goto $l657; else goto $l647;
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
    panda$core$String* $tmp674 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp675 = panda$core$String$convert$R$panda$core$String($tmp674);
    panda$core$String* $tmp677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp675, &$s676);
    (($fn678) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp677);
    panda$core$Int64 $tmp680 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp679, ((panda$core$Int64) { 0 }), $tmp680, ((panda$core$Bit) { false }));
    int64_t $tmp682 = $tmp679.min.value;
    panda$core$Int64 i681 = { $tmp682 };
    int64_t $tmp684 = $tmp679.max.value;
    bool $tmp685 = $tmp679.inclusive.value;
    if ($tmp685) goto $l692; else goto $l693;
    $l692:;
    if ($tmp682 <= $tmp684) goto $l686; else goto $l688;
    $l693:;
    if ($tmp682 < $tmp684) goto $l686; else goto $l688;
    $l686:;
    {
        panda$core$Object* $tmp695 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters635, i681);
        panda$core$String* $tmp696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s694, ((panda$core$String*) $tmp695));
        panda$core$String* $tmp698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp696, &$s697);
        (($fn699) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp698);
    }
    $l689:;
    int64_t $tmp701 = $tmp684 - i681.value;
    if ($tmp685) goto $l702; else goto $l703;
    $l702:;
    if ((uint64_t) $tmp701 >= 1) goto $l700; else goto $l688;
    $l703:;
    if ((uint64_t) $tmp701 > 1) goto $l700; else goto $l688;
    $l700:;
    i681.value += 1;
    goto $l686;
    $l688:;
    (($fn707) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s706);
    panda$core$Int64 $tmp708 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp708;
    (($fn710) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s709);
    self->currentMethod = oldMethod574;
    return result575;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces711;
    panda$core$String* previous714;
    panda$collections$Iterator* intfType$Iter716;
    org$pandalanguage$pandac$Type* intfType728;
    org$pandalanguage$pandac$ClassDecl* intf733;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC735;
    panda$collections$ListView* methods737;
    panda$core$String* name739;
    panda$core$MutableString* result748;
    panda$core$String* separator783;
    panda$collections$Iterator* m$Iter785;
    org$pandalanguage$pandac$MethodDecl* m797;
    org$pandalanguage$pandac$Type* $tmp712 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp713 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp712);
    interfaces711 = $tmp713;
    previous714 = &$s715;
    {
        ITable* $tmp717 = ((panda$collections$Iterable*) interfaces711)->$class->itable;
        while ($tmp717->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp717 = $tmp717->next;
        }
        $fn719 $tmp718 = $tmp717->methods[0];
        panda$collections$Iterator* $tmp720 = $tmp718(((panda$collections$Iterable*) interfaces711));
        intfType$Iter716 = $tmp720;
        $l721:;
        ITable* $tmp723 = intfType$Iter716->$class->itable;
        while ($tmp723->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp723 = $tmp723->next;
        }
        $fn725 $tmp724 = $tmp723->methods[0];
        panda$core$Bit $tmp726 = $tmp724(intfType$Iter716);
        panda$core$Bit $tmp727 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp726);
        if (!$tmp727.value) goto $l722;
        {
            ITable* $tmp729 = intfType$Iter716->$class->itable;
            while ($tmp729->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp729 = $tmp729->next;
            }
            $fn731 $tmp730 = $tmp729->methods[1];
            panda$core$Object* $tmp732 = $tmp730(intfType$Iter716);
            intfType728 = ((org$pandalanguage$pandac$Type*) $tmp732);
            org$pandalanguage$pandac$ClassDecl* $tmp734 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType728);
            intf733 = $tmp734;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp736 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf733);
            intfCC735 = $tmp736;
            panda$collections$ListView* $tmp738 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType728);
            methods737 = $tmp738;
            panda$core$String* $tmp740 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp741 = panda$core$String$convert$R$panda$core$String($tmp740);
            panda$core$String* $tmp743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp741, &$s742);
            panda$core$String* $tmp744 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf733)->name);
            panda$core$String* $tmp745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp743, $tmp744);
            panda$core$String* $tmp747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp745, &$s746);
            name739 = $tmp747;
            panda$core$MutableString* $tmp749 = (panda$core$MutableString*) malloc(48);
            $tmp749->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp749->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp752 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp753 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp752);
            panda$core$String* $tmp754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s751, $tmp753);
            panda$core$String* $tmp756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp754, &$s755);
            ITable* $tmp758 = ((panda$collections$CollectionView*) methods737)->$class->itable;
            while ($tmp758->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp758 = $tmp758->next;
            }
            $fn760 $tmp759 = $tmp758->methods[0];
            panda$core$Int64 $tmp761 = $tmp759(((panda$collections$CollectionView*) methods737));
            panda$core$Int64$wrapper* $tmp762;
            $tmp762 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp762->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp762->refCount = 1;
            $tmp762->value = $tmp761;
            panda$core$String* $tmp763 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s757, ((panda$core$Object*) $tmp762));
            panda$core$String* $tmp765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp763, &$s764);
            panda$core$String* $tmp766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp765, name739);
            panda$core$String* $tmp768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp766, &$s767);
            panda$core$String* $tmp769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp756, $tmp768);
            org$pandalanguage$pandac$Type* $tmp771 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp772 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp771);
            panda$core$String* $tmp773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s770, $tmp772);
            panda$core$String* $tmp775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp773, &$s774);
            panda$core$String* $tmp776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp775, intfCC735->name);
            panda$core$String* $tmp778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp776, &$s777);
            panda$core$String* $tmp779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp778, previous714);
            panda$core$String* $tmp781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp779, &$s780);
            panda$core$String* $tmp782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp769, $tmp781);
            panda$core$MutableString$init$panda$core$String($tmp749, $tmp782);
            result748 = $tmp749;
            separator783 = &$s784;
            {
                ITable* $tmp786 = ((panda$collections$Iterable*) methods737)->$class->itable;
                while ($tmp786->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp786 = $tmp786->next;
                }
                $fn788 $tmp787 = $tmp786->methods[0];
                panda$collections$Iterator* $tmp789 = $tmp787(((panda$collections$Iterable*) methods737));
                m$Iter785 = $tmp789;
                $l790:;
                ITable* $tmp792 = m$Iter785->$class->itable;
                while ($tmp792->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp792 = $tmp792->next;
                }
                $fn794 $tmp793 = $tmp792->methods[0];
                panda$core$Bit $tmp795 = $tmp793(m$Iter785);
                panda$core$Bit $tmp796 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp795);
                if (!$tmp796.value) goto $l791;
                {
                    ITable* $tmp798 = m$Iter785->$class->itable;
                    while ($tmp798->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp798 = $tmp798->next;
                    }
                    $fn800 $tmp799 = $tmp798->methods[1];
                    panda$core$Object* $tmp801 = $tmp799(m$Iter785);
                    m797 = ((org$pandalanguage$pandac$MethodDecl*) $tmp801);
                    panda$core$MutableString$append$panda$core$String(result748, separator783);
                    separator783 = &$s802;
                    panda$core$Bit $tmp803 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m797->annotations);
                    if ($tmp803.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result748, &$s804);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp805 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m797, self->wrapperShims);
                        panda$core$MutableString$append$panda$core$String(result748, $tmp805);
                    }
                    }
                }
                goto $l790;
                $l791:;
            }
            panda$core$MutableString$append$panda$core$String(result748, &$s806);
            panda$core$String* $tmp807 = panda$core$MutableString$finish$R$panda$core$String(result748);
            (($fn808) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp807);
            panda$core$String* $tmp810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s809, name739);
            panda$core$String* $tmp812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp810, &$s811);
            previous714 = $tmp812;
        }
        goto $l721;
        $l722:;
    }
    return previous714;
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
    panda$collections$ListView* vtable839;
    panda$core$String* superPtr849;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC850;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant858;
    panda$core$MutableString* code862;
    panda$core$String* separator883;
    panda$collections$Iterator* m$Iter885;
    org$pandalanguage$pandac$MethodDecl* m897;
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
            org$pandalanguage$pandac$Type* $tmp832 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp833 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp832)->name);
            panda$core$String* $tmp834 = panda$core$String$convert$R$panda$core$String($tmp833);
            panda$core$String* $tmp836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp834, &$s835);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp830, $tmp836, &$s837);
            result826 = $tmp830;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result826));
            panda$core$Object* $tmp838 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
            return ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp838);
        }
        }
        panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) p_cl));
        panda$collections$ListView* $tmp840 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable839 = $tmp840;
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp841 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
        $tmp841->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
        $tmp841->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp843 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp844 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp843)->name);
        panda$core$String* $tmp845 = panda$core$String$convert$R$panda$core$String($tmp844);
        panda$core$String* $tmp847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp845, &$s846);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp841, $tmp847, &$s848);
        result826 = $tmp841;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result826));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp851 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp852 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp851);
            superCC850 = $tmp852;
            panda$core$String* $tmp854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s853, superCC850->name);
            panda$core$String* $tmp856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp854, &$s855);
            superPtr849 = $tmp856;
        }
        }
        else {
        {
            superPtr849 = &$s857;
        }
        }
        org$pandalanguage$pandac$Type* $tmp859 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp860 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp859);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp861 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp860);
        clConstant858 = $tmp861;
        panda$core$MutableString* $tmp863 = (panda$core$MutableString*) malloc(48);
        $tmp863->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp863->refCount.value = 1;
        panda$core$String* $tmp865 = panda$core$String$convert$R$panda$core$String(result826->name);
        panda$core$String* $tmp867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp865, &$s866);
        panda$core$String* $tmp868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp867, result826->name);
        panda$core$String* $tmp870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp868, &$s869);
        panda$core$String* $tmp872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s871, clConstant858->name);
        panda$core$String* $tmp874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp872, &$s873);
        panda$core$String* $tmp875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp874, superPtr849);
        panda$core$String* $tmp877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp875, &$s876);
        panda$core$String* $tmp878 = org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp877, $tmp878);
        panda$core$String* $tmp881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp879, &$s880);
        panda$core$String* $tmp882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp870, $tmp881);
        panda$core$MutableString$init$panda$core$String($tmp863, $tmp882);
        code862 = $tmp863;
        separator883 = &$s884;
        {
            ITable* $tmp886 = ((panda$collections$Iterable*) vtable839)->$class->itable;
            while ($tmp886->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp886 = $tmp886->next;
            }
            $fn888 $tmp887 = $tmp886->methods[0];
            panda$collections$Iterator* $tmp889 = $tmp887(((panda$collections$Iterable*) vtable839));
            m$Iter885 = $tmp889;
            $l890:;
            ITable* $tmp892 = m$Iter885->$class->itable;
            while ($tmp892->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp892 = $tmp892->next;
            }
            $fn894 $tmp893 = $tmp892->methods[0];
            panda$core$Bit $tmp895 = $tmp893(m$Iter885);
            panda$core$Bit $tmp896 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp895);
            if (!$tmp896.value) goto $l891;
            {
                ITable* $tmp898 = m$Iter885->$class->itable;
                while ($tmp898->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp898 = $tmp898->next;
                }
                $fn900 $tmp899 = $tmp898->methods[1];
                panda$core$Object* $tmp901 = $tmp899(m$Iter885);
                m897 = ((org$pandalanguage$pandac$MethodDecl*) $tmp901);
                panda$core$MutableString$append$panda$core$String(code862, separator883);
                panda$core$Bit $tmp902 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m897->annotations);
                if ($tmp902.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code862, &$s903);
                }
                }
                else {
                {
                    panda$core$String* $tmp904 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m897);
                    panda$core$MutableString$append$panda$core$String(code862, $tmp904);
                }
                }
                separator883 = &$s905;
            }
            goto $l890;
            $l891:;
        }
        panda$core$MutableString$append$panda$core$String(code862, &$s906);
        panda$core$String* $tmp907 = panda$core$MutableString$finish$R$panda$core$String(code862);
        (($fn908) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp907);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    }
    }
    return result826;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name909;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result914;
    panda$core$String* type918;
    org$pandalanguage$pandac$ClassDecl* value929;
    panda$collections$ListView* valueVTable932;
    panda$collections$ListView* vtable941;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC943;
    panda$core$String* superCast946;
    panda$core$String* itable951;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant953;
    panda$core$MutableString* code957;
    panda$core$String* separator977;
    panda$core$Range$LTpanda$core$Int64$GT $tmp979;
    org$pandalanguage$pandac$MethodDecl* m997;
    panda$core$String* methodName1002;
    panda$core$String* $tmp910 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp911 = panda$core$String$convert$R$panda$core$String($tmp910);
    panda$core$String* $tmp913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp911, &$s912);
    name909 = $tmp913;
    panda$core$Object* $tmp915 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name909));
    result914 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp915);
    if (((panda$core$Bit) { result914 == NULL }).value) {
    {
        panda$core$Bit $tmp916 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp916.value) {
        {
            org$pandalanguage$pandac$Type* $tmp917 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp917);
            type918 = &$s919;
            panda$core$String* $tmp920 = panda$core$String$convert$R$panda$core$String(name909);
            panda$core$String* $tmp922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp920, &$s921);
            panda$core$String* $tmp923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp922, type918);
            panda$core$String* $tmp925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp923, &$s924);
            (($fn926) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp925);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp927 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp927->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp927->refCount.value = 1;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp927, name909, type918);
            result914 = $tmp927;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp930 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp931 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp930);
            value929 = $tmp931;
            panda$collections$ListView* $tmp933 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value929);
            valueVTable932 = $tmp933;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp934 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp934->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp934->refCount.value = 1;
            panda$core$String* $tmp936 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp937 = panda$core$String$convert$R$panda$core$String($tmp936);
            panda$core$String* $tmp939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp937, &$s938);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp934, $tmp939, &$s940);
            result914 = $tmp934;
            panda$collections$ListView* $tmp942 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable941 = $tmp942;
            org$pandalanguage$pandac$ClassDecl* $tmp944 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp945 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp944);
            superCC943 = $tmp945;
            panda$core$String* $tmp948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s947, superCC943->name);
            panda$core$String* $tmp950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp948, &$s949);
            superCast946 = $tmp950;
            panda$core$String* $tmp952 = org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable951 = $tmp952;
            org$pandalanguage$pandac$Type* $tmp954 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp955 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp954);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp956 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp955);
            clConstant953 = $tmp956;
            panda$core$MutableString* $tmp958 = (panda$core$MutableString*) malloc(48);
            $tmp958->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp958->refCount.value = 1;
            panda$core$String* $tmp960 = panda$core$String$convert$R$panda$core$String(result914->name);
            panda$core$String* $tmp962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp960, &$s961);
            panda$core$String* $tmp963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp962, result914->name);
            panda$core$String* $tmp965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp963, &$s964);
            panda$core$String* $tmp967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s966, clConstant953->name);
            panda$core$String* $tmp969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp967, &$s968);
            panda$core$String* $tmp970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp969, superCast946);
            panda$core$String* $tmp972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp970, &$s971);
            panda$core$String* $tmp973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp972, itable951);
            panda$core$String* $tmp975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp973, &$s974);
            panda$core$String* $tmp976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp965, $tmp975);
            panda$core$MutableString$init$panda$core$String($tmp958, $tmp976);
            code957 = $tmp958;
            separator977 = &$s978;
            ITable* $tmp980 = ((panda$collections$CollectionView*) valueVTable932)->$class->itable;
            while ($tmp980->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp980 = $tmp980->next;
            }
            $fn982 $tmp981 = $tmp980->methods[0];
            panda$core$Int64 $tmp983 = $tmp981(((panda$collections$CollectionView*) valueVTable932));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp979, ((panda$core$Int64) { 0 }), $tmp983, ((panda$core$Bit) { false }));
            int64_t $tmp985 = $tmp979.min.value;
            panda$core$Int64 i984 = { $tmp985 };
            int64_t $tmp987 = $tmp979.max.value;
            bool $tmp988 = $tmp979.inclusive.value;
            if ($tmp988) goto $l995; else goto $l996;
            $l995:;
            if ($tmp985 <= $tmp987) goto $l989; else goto $l991;
            $l996:;
            if ($tmp985 < $tmp987) goto $l989; else goto $l991;
            $l989:;
            {
                ITable* $tmp998 = vtable941->$class->itable;
                while ($tmp998->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp998 = $tmp998->next;
                }
                $fn1000 $tmp999 = $tmp998->methods[0];
                panda$core$Object* $tmp1001 = $tmp999(vtable941, i984);
                m997 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1001);
                if (((panda$core$Bit) { ((panda$core$Object*) m997->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp1003 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m997, self->wrapperShims);
                    methodName1002 = $tmp1003;
                }
                }
                else {
                {
                    panda$core$String* $tmp1004 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m997);
                    methodName1002 = $tmp1004;
                    panda$core$Bit $tmp1005 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m997->owner);
                    if ($tmp1005.value) {
                    {
                        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m997);
                    }
                    }
                }
                }
                panda$core$String* $tmp1006 = panda$core$String$convert$R$panda$core$String(separator977);
                panda$core$String* $tmp1008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1006, &$s1007);
                panda$core$String* $tmp1009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1008, methodName1002);
                panda$core$String* $tmp1011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1009, &$s1010);
                panda$core$MutableString$append$panda$core$String(code957, $tmp1011);
                separator977 = &$s1012;
            }
            $l992:;
            int64_t $tmp1014 = $tmp987 - i984.value;
            if ($tmp988) goto $l1015; else goto $l1016;
            $l1015:;
            if ((uint64_t) $tmp1014 >= 1) goto $l1013; else goto $l991;
            $l1016:;
            if ((uint64_t) $tmp1014 > 1) goto $l1013; else goto $l991;
            $l1013:;
            i984.value += 1;
            goto $l989;
            $l991:;
            panda$core$MutableString$append$panda$core$String(code957, &$s1019);
            panda$core$String* $tmp1020 = panda$core$MutableString$finish$R$panda$core$String(code957);
            (($fn1021) ((panda$io$OutputStream*) self->types)->$class->vtable[16])(((panda$io$OutputStream*) self->types), $tmp1020);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name909), ((panda$core$Object*) result914));
    }
    }
    return result914;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$String* result1027;
    panda$core$Bit $tmp1022 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage->$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp1022.value) {
    {
        panda$core$String* $tmp1024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1023, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1024, &$s1025);
        return $tmp1026;
    }
    }
    panda$core$Object* $tmp1028 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1027 = ((panda$core$String*) $tmp1028);
    if (((panda$core$Bit) { result1027 == NULL }).value) {
    {
        panda$core$Int64 $tmp1029 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1029;
        panda$core$String* $tmp1030 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1030, &$s1031);
        panda$core$Int64$wrapper* $tmp1033;
        $tmp1033 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp1033->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp1033->refCount = 1;
        $tmp1033->value = self->varCount;
        panda$core$String* $tmp1034 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1032, ((panda$core$Object*) $tmp1033));
        panda$core$String* $tmp1036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1034, &$s1035);
        result1027 = $tmp1036;
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1027));
    }
    }
    return result1027;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1037 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1037.value);
    panda$core$String* $tmp1038 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1039 = panda$core$String$convert$R$panda$core$String($tmp1038);
    panda$core$String* $tmp1041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1039, &$s1040);
    panda$core$String* $tmp1042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1041, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1042, &$s1043);
    return $tmp1044;
}
org$pandalanguage$pandac$CCodeGenerator$OpClass* org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$OpClass(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    switch (p_t->typeKind.value) {
        case 12:
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass* $tmp1045 = (org$pandalanguage$pandac$CCodeGenerator$OpClass*) malloc(24);
            $tmp1045->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$OpClass$class;
            $tmp1045->refCount.value = 1;
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64($tmp1045, ((panda$core$Int64) { 0 }));
            return $tmp1045;
        }
        break;
        case 13:
        case 19:
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass* $tmp1047 = (org$pandalanguage$pandac$CCodeGenerator$OpClass*) malloc(24);
            $tmp1047->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$OpClass$class;
            $tmp1047->refCount.value = 1;
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64($tmp1047, ((panda$core$Int64) { 1 }));
            return $tmp1047;
        }
        break;
        case 20:
        {
            org$pandalanguage$pandac$CCodeGenerator$OpClass* $tmp1049 = (org$pandalanguage$pandac$CCodeGenerator$OpClass*) malloc(24);
            $tmp1049->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$OpClass$class;
            $tmp1049->refCount.value = 1;
            org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64($tmp1049, ((panda$core$Int64) { 2 }));
            return $tmp1049;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1051;
    panda$core$String* leftRef1053;
    panda$core$String* falseLabel1067;
    panda$core$String* rightRef1077;
    panda$core$String* $tmp1052 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1051 = $tmp1052;
    panda$core$String* $tmp1054 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1053 = $tmp1054;
    org$pandalanguage$pandac$Type* $tmp1055 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1056 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1055);
    if ($tmp1056.value) {
    {
        panda$core$String* $tmp1058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1053, &$s1057);
        leftRef1053 = $tmp1058;
    }
    }
    panda$core$String* $tmp1060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1059, result1051);
    panda$core$String* $tmp1062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1060, &$s1061);
    panda$core$String* $tmp1063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1062, leftRef1053);
    panda$core$String* $tmp1065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1063, &$s1064);
    (($fn1066) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1065);
    panda$core$String* $tmp1068 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel1067 = $tmp1068;
    panda$core$String* $tmp1070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1069, result1051);
    panda$core$String* $tmp1072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1070, &$s1071);
    panda$core$String* $tmp1073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1072, falseLabel1067);
    panda$core$String* $tmp1075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1073, &$s1074);
    (($fn1076) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1075);
    panda$core$String* $tmp1078 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1077 = $tmp1078;
    org$pandalanguage$pandac$Type* $tmp1079 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1080 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1079);
    if ($tmp1080.value) {
    {
        panda$core$String* $tmp1082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1077, &$s1081);
        rightRef1077 = $tmp1082;
    }
    }
    panda$core$String* $tmp1083 = panda$core$String$convert$R$panda$core$String(result1051);
    panda$core$String* $tmp1085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1083, &$s1084);
    panda$core$String* $tmp1086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1085, rightRef1077);
    panda$core$String* $tmp1088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1086, &$s1087);
    (($fn1089) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1088);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel1067, p_out);
    return result1051;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1090;
    panda$core$String* leftRef1092;
    panda$core$String* trueLabel1106;
    panda$core$String* rightRef1116;
    panda$core$String* $tmp1091 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1090 = $tmp1091;
    panda$core$String* $tmp1093 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1092 = $tmp1093;
    org$pandalanguage$pandac$Type* $tmp1094 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1095 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1094);
    if ($tmp1095.value) {
    {
        panda$core$String* $tmp1097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1092, &$s1096);
        leftRef1092 = $tmp1097;
    }
    }
    panda$core$String* $tmp1099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1098, result1090);
    panda$core$String* $tmp1101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1099, &$s1100);
    panda$core$String* $tmp1102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1101, leftRef1092);
    panda$core$String* $tmp1104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1102, &$s1103);
    (($fn1105) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1104);
    panda$core$String* $tmp1107 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel1106 = $tmp1107;
    panda$core$String* $tmp1109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1108, result1090);
    panda$core$String* $tmp1111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1109, &$s1110);
    panda$core$String* $tmp1112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1111, trueLabel1106);
    panda$core$String* $tmp1114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1112, &$s1113);
    (($fn1115) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1114);
    panda$core$String* $tmp1117 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1116 = $tmp1117;
    org$pandalanguage$pandac$Type* $tmp1118 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1119 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1118);
    if ($tmp1119.value) {
    {
        panda$core$String* $tmp1121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1116, &$s1120);
        rightRef1116 = $tmp1121;
    }
    }
    panda$core$String* $tmp1122 = panda$core$String$convert$R$panda$core$String(result1090);
    panda$core$String* $tmp1124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1122, &$s1123);
    panda$core$String* $tmp1125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1124, rightRef1116);
    panda$core$String* $tmp1127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1125, &$s1126);
    (($fn1128) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1127);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel1106, p_out);
    return result1090;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, org$pandalanguage$pandac$parser$Token$Kind* p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* cOp1129;
    panda$core$Bit logical1130;
    org$pandalanguage$pandac$parser$Token$Kind* $match$708_91131;
    panda$core$String* result1170;
    logical1130 = ((panda$core$Bit) { false });
    {
        $match$708_91131 = p_op;
        panda$core$Bit $tmp1132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$708_91131->$rawValue, ((panda$core$Int64) { 51 }));
        if ($tmp1132.value) {
        {
            cOp1129 = &$s1133;
        }
        }
        else {
        panda$core$Bit $tmp1134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$708_91131->$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp1134.value) {
        {
            cOp1129 = &$s1135;
        }
        }
        else {
        panda$core$Bit $tmp1136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$708_91131->$rawValue, ((panda$core$Int64) { 53 }));
        if ($tmp1136.value) {
        {
            cOp1129 = &$s1137;
        }
        }
        else {
        panda$core$Bit $tmp1138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$708_91131->$rawValue, ((panda$core$Int64) { 55 }));
        if ($tmp1138.value) {
        {
            cOp1129 = &$s1139;
        }
        }
        else {
        panda$core$Bit $tmp1140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$708_91131->$rawValue, ((panda$core$Int64) { 54 }));
        if ($tmp1140.value) {
        {
            cOp1129 = &$s1141;
        }
        }
        else {
        panda$core$Bit $tmp1142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$708_91131->$rawValue, ((panda$core$Int64) { 56 }));
        if ($tmp1142.value) {
        {
            cOp1129 = &$s1143;
        }
        }
        else {
        panda$core$Bit $tmp1144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$708_91131->$rawValue, ((panda$core$Int64) { 72 }));
        if ($tmp1144.value) {
        {
            cOp1129 = &$s1145;
        }
        }
        else {
        panda$core$Bit $tmp1146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$708_91131->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1146.value) {
        {
            cOp1129 = &$s1147;
        }
        }
        else {
        panda$core$Bit $tmp1148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$708_91131->$rawValue, ((panda$core$Int64) { 67 }));
        if ($tmp1148.value) {
        {
            cOp1129 = &$s1149;
        }
        }
        else {
        panda$core$Bit $tmp1150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$708_91131->$rawValue, ((panda$core$Int64) { 69 }));
        if ($tmp1150.value) {
        {
            cOp1129 = &$s1151;
        }
        }
        else {
        panda$core$Bit $tmp1153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$708_91131->$rawValue, ((panda$core$Int64) { 70 }));
        bool $tmp1152 = $tmp1153.value;
        if ($tmp1152) goto $l1154;
        panda$core$Bit $tmp1155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$708_91131->$rawValue, ((panda$core$Int64) { 71 }));
        $tmp1152 = $tmp1155.value;
        $l1154:;
        panda$core$Bit $tmp1156 = { $tmp1152 };
        if ($tmp1156.value) {
        {
            cOp1129 = &$s1157;
        }
        }
        else {
        panda$core$Bit $tmp1158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$708_91131->$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp1158.value) {
        {
            cOp1129 = &$s1159;
            logical1130 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$708_91131->$rawValue, ((panda$core$Int64) { 59 }));
        if ($tmp1160.value) {
        {
            cOp1129 = &$s1161;
            logical1130 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$708_91131->$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp1162.value) {
        {
            cOp1129 = &$s1163;
            logical1130 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$708_91131->$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp1164.value) {
        {
            cOp1129 = &$s1165;
            logical1130 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$708_91131->$rawValue, ((panda$core$Int64) { 65 }));
        if ($tmp1166.value) {
        {
            cOp1129 = &$s1167;
            logical1130 = ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp1168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$708_91131->$rawValue, ((panda$core$Int64) { 64 }));
        if ($tmp1168.value) {
        {
            logical1130 = ((panda$core$Bit) { true });
            cOp1129 = &$s1169;
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
    panda$core$String* $tmp1171 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1170 = $tmp1171;
    if (logical1130.value) {
    {
        (($fn1173) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s1172);
    }
    }
    else {
    {
        panda$core$String* $tmp1174 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp1175 = panda$core$String$convert$R$panda$core$String($tmp1174);
        panda$core$String* $tmp1177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1175, &$s1176);
        (($fn1178) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1177);
    }
    }
    panda$core$String* $tmp1179 = panda$core$String$convert$R$panda$core$String(result1170);
    panda$core$String* $tmp1181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1179, &$s1180);
    panda$core$String* $tmp1182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1181, p_leftRef);
    panda$core$String* $tmp1184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1182, &$s1183);
    panda$core$String* $tmp1185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1184, cOp1129);
    panda$core$String* $tmp1187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1185, &$s1186);
    panda$core$String* $tmp1188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1187, p_rightRef);
    panda$core$String* $tmp1190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1188, &$s1189);
    (($fn1191) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1190);
    return result1170;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1192;
    panda$core$String* rightRef1194;
    panda$core$String* $tmp1193 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1192 = $tmp1193;
    panda$core$String* $tmp1195 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1194 = $tmp1195;
    panda$core$String* $tmp1197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1196, leftRef1192);
    panda$core$String* $tmp1199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1197, &$s1198);
    panda$core$String* $tmp1200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1199, rightRef1194);
    panda$core$String* $tmp1202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1200, &$s1201);
    return $tmp1202;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1203;
    panda$core$String* rightRef1205;
    panda$core$String* $tmp1204 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1203 = $tmp1204;
    panda$core$String* $tmp1206 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1205 = $tmp1206;
    panda$core$String* $tmp1208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1207, leftRef1203);
    panda$core$String* $tmp1210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1208, &$s1209);
    panda$core$String* $tmp1211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1210, rightRef1205);
    panda$core$String* $tmp1213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1211, &$s1212);
    return $tmp1213;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$parser$Token$Kind* p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$parser$Token$Kind* $match$778_91215;
    panda$core$String* leftRef1224;
    panda$core$String* rightRef1226;
    panda$core$Bit $tmp1214 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, p_right->type);
    PANDA_ASSERT($tmp1214.value);
    {
        $match$778_91215 = p_op;
        panda$core$Bit $tmp1216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$778_91215->$rawValue, ((panda$core$Int64) { 66 }));
        if ($tmp1216.value) {
        {
            panda$core$String* $tmp1217 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1217;
        }
        }
        else {
        panda$core$Bit $tmp1218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$778_91215->$rawValue, ((panda$core$Int64) { 68 }));
        if ($tmp1218.value) {
        {
            panda$core$String* $tmp1219 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1219;
        }
        }
        else {
        panda$core$Bit $tmp1220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$778_91215->$rawValue, ((panda$core$Int64) { 60 }));
        if ($tmp1220.value) {
        {
            panda$core$String* $tmp1221 = org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1221;
        }
        }
        else {
        panda$core$Bit $tmp1222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$778_91215->$rawValue, ((panda$core$Int64) { 61 }));
        if ($tmp1222.value) {
        {
            panda$core$String* $tmp1223 = org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1223;
        }
        }
        else {
        {
            panda$core$String* $tmp1225 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1224 = $tmp1225;
            panda$core$String* $tmp1227 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1226 = $tmp1227;
            panda$core$String* $tmp1228 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left->type, leftRef1224, p_op, rightRef1226, p_out);
            return $tmp1228;
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp1229.value);
    panda$core$Int64 $tmp1230 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp1231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1230, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp1231.value);
    panda$core$Object* $tmp1232 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp1233 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1234 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1232), ((org$pandalanguage$pandac$parser$Token$Kind*) p_b->payload), ((org$pandalanguage$pandac$IRNode*) $tmp1233), p_out);
    return $tmp1234;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1235;
    panda$core$Int64 index1237;
    panda$collections$ListView* vtable1238;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1240;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1236 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1235 = $tmp1236;
    index1237 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1239 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1238 = $tmp1239;
    ITable* $tmp1241 = ((panda$collections$CollectionView*) vtable1238)->$class->itable;
    while ($tmp1241->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1241 = $tmp1241->next;
    }
    $fn1243 $tmp1242 = $tmp1241->methods[0];
    panda$core$Int64 $tmp1244 = $tmp1242(((panda$collections$CollectionView*) vtable1238));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1240, ((panda$core$Int64) { 0 }), $tmp1244, ((panda$core$Bit) { false }));
    int64_t $tmp1246 = $tmp1240.min.value;
    panda$core$Int64 i1245 = { $tmp1246 };
    int64_t $tmp1248 = $tmp1240.max.value;
    bool $tmp1249 = $tmp1240.inclusive.value;
    if ($tmp1249) goto $l1256; else goto $l1257;
    $l1256:;
    if ($tmp1246 <= $tmp1248) goto $l1250; else goto $l1252;
    $l1257:;
    if ($tmp1246 < $tmp1248) goto $l1250; else goto $l1252;
    $l1250:;
    {
        ITable* $tmp1258 = vtable1238->$class->itable;
        while ($tmp1258->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1258 = $tmp1258->next;
        }
        $fn1260 $tmp1259 = $tmp1258->methods[0];
        panda$core$Object* $tmp1261 = $tmp1259(vtable1238, i1245);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1261)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1237 = i1245;
            goto $l1252;
        }
        }
    }
    $l1253:;
    int64_t $tmp1263 = $tmp1248 - i1245.value;
    if ($tmp1249) goto $l1264; else goto $l1265;
    $l1264:;
    if ((uint64_t) $tmp1263 >= 1) goto $l1262; else goto $l1252;
    $l1265:;
    if ((uint64_t) $tmp1263 > 1) goto $l1262; else goto $l1252;
    $l1262:;
    i1245.value += 1;
    goto $l1250;
    $l1252:;
    panda$core$Bit $tmp1268 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1237, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1268.value);
    org$pandalanguage$pandac$Type* $tmp1270 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1271 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1270);
    panda$core$String* $tmp1272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1269, $tmp1271);
    panda$core$String* $tmp1274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1272, &$s1273);
    panda$core$String* $tmp1275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1274, p_target);
    panda$core$String* $tmp1277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1275, &$s1276);
    panda$core$Int64$wrapper* $tmp1278;
    $tmp1278 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp1278->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1278->refCount = 1;
    $tmp1278->value = index1237;
    panda$core$String* $tmp1279 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1277, ((panda$core$Object*) $tmp1278));
    panda$core$String* $tmp1281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1279, &$s1280);
    return $tmp1281;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1282;
    panda$core$String* itable1284;
    panda$core$Int64 index1313;
    panda$collections$ListView* vtable1314;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1316;
    panda$core$String* result1353;
    panda$core$String* methodType1355;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1283 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1282 = $tmp1283;
    panda$core$String* $tmp1285 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    itable1284 = $tmp1285;
    panda$core$String* $tmp1287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1286, itable1284);
    panda$core$String* $tmp1289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1287, &$s1288);
    panda$core$String* $tmp1290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1289, p_target);
    panda$core$String* $tmp1292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1290, &$s1291);
    (($fn1293) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1292);
    panda$core$String* $tmp1295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1294, itable1284);
    panda$core$String* $tmp1297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1295, &$s1296);
    panda$core$String* $tmp1298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1297, cc1282->name);
    panda$core$String* $tmp1300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1298, &$s1299);
    (($fn1301) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1300);
    panda$core$Int64 $tmp1302 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1302;
    panda$core$String* $tmp1303 = panda$core$String$convert$R$panda$core$String(itable1284);
    panda$core$String* $tmp1305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1303, &$s1304);
    panda$core$String* $tmp1306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1305, itable1284);
    panda$core$String* $tmp1308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1306, &$s1307);
    (($fn1309) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1308);
    panda$core$Int64 $tmp1310 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1310;
    (($fn1312) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1311);
    index1313 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1315 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1314 = $tmp1315;
    ITable* $tmp1317 = ((panda$collections$CollectionView*) vtable1314)->$class->itable;
    while ($tmp1317->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1317 = $tmp1317->next;
    }
    $fn1319 $tmp1318 = $tmp1317->methods[0];
    panda$core$Int64 $tmp1320 = $tmp1318(((panda$collections$CollectionView*) vtable1314));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1316, ((panda$core$Int64) { 0 }), $tmp1320, ((panda$core$Bit) { false }));
    int64_t $tmp1322 = $tmp1316.min.value;
    panda$core$Int64 i1321 = { $tmp1322 };
    int64_t $tmp1324 = $tmp1316.max.value;
    bool $tmp1325 = $tmp1316.inclusive.value;
    if ($tmp1325) goto $l1332; else goto $l1333;
    $l1332:;
    if ($tmp1322 <= $tmp1324) goto $l1326; else goto $l1328;
    $l1333:;
    if ($tmp1322 < $tmp1324) goto $l1326; else goto $l1328;
    $l1326:;
    {
        ITable* $tmp1334 = vtable1314->$class->itable;
        while ($tmp1334->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1334 = $tmp1334->next;
        }
        $fn1336 $tmp1335 = $tmp1334->methods[0];
        panda$core$Object* $tmp1337 = $tmp1335(vtable1314, i1321);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1337)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1313 = i1321;
            goto $l1328;
        }
        }
    }
    $l1329:;
    int64_t $tmp1339 = $tmp1324 - i1321.value;
    if ($tmp1325) goto $l1340; else goto $l1341;
    $l1340:;
    if ((uint64_t) $tmp1339 >= 1) goto $l1338; else goto $l1328;
    $l1341:;
    if ((uint64_t) $tmp1339 > 1) goto $l1338; else goto $l1328;
    $l1338:;
    i1321.value += 1;
    goto $l1326;
    $l1328:;
    org$pandalanguage$pandac$Type* $tmp1344 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp1345 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1344);
    panda$collections$ListView* $tmp1346 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp1345);
    ITable* $tmp1347 = ((panda$collections$CollectionView*) $tmp1346)->$class->itable;
    while ($tmp1347->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1347 = $tmp1347->next;
    }
    $fn1349 $tmp1348 = $tmp1347->methods[0];
    panda$core$Int64 $tmp1350 = $tmp1348(((panda$collections$CollectionView*) $tmp1346));
    panda$core$Int64 $tmp1351 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index1313, $tmp1350);
    index1313 = $tmp1351;
    panda$core$Bit $tmp1352 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1313, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1352.value);
    panda$core$String* $tmp1354 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1353 = $tmp1354;
    org$pandalanguage$pandac$Type* $tmp1356 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1357 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1356);
    methodType1355 = $tmp1357;
    panda$core$String* $tmp1358 = panda$core$String$convert$R$panda$core$String(methodType1355);
    panda$core$String* $tmp1360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1358, &$s1359);
    panda$core$String* $tmp1361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1360, result1353);
    panda$core$String* $tmp1363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1361, &$s1362);
    panda$core$String* $tmp1364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1363, itable1284);
    panda$core$String* $tmp1366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1364, &$s1365);
    panda$core$Int64$wrapper* $tmp1367;
    $tmp1367 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp1367->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1367->refCount = 1;
    $tmp1367->value = index1313;
    panda$core$String* $tmp1368 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1366, ((panda$core$Object*) $tmp1367));
    panda$core$String* $tmp1370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1368, &$s1369);
    (($fn1371) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1370);
    return result1353;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1373 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp1372 = $tmp1373.value;
    if (!$tmp1372) goto $l1374;
    panda$core$Bit $tmp1375 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp1372 = $tmp1375.value;
    $l1374:;
    panda$core$Bit $tmp1376 = { $tmp1372 };
    if ($tmp1376.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp1377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1377.value) {
        {
            panda$core$String* $tmp1378 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1378;
        }
        }
        else {
        {
            panda$core$String* $tmp1379 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1379;
        }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp1380 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
        if ($tmp1380.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
        }
        }
        panda$core$String* $tmp1381 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp1381;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m1382;
    panda$core$String* $match$857_91383;
    panda$core$String* count1388;
    panda$core$Int64 elementSize1394;
    panda$core$String* ptr1414;
    panda$core$String* ptr1425;
    panda$core$String* index1428;
    panda$core$String* ptr1441;
    panda$core$String* count1444;
    panda$core$Int64 elementSize1450;
    panda$core$String* ptr1473;
    panda$core$String* offset1476;
    m1382 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$857_91383 = ((org$pandalanguage$pandac$Symbol*) m1382->value)->name;
        panda$core$Bit $tmp1385 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$857_91383, &$s1384);
        if ($tmp1385.value) {
        {
            panda$core$Int64 $tmp1386 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1386, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1387.value);
            panda$core$Object* $tmp1389 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1390 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1389), p_out);
            count1388 = $tmp1390;
            org$pandalanguage$pandac$Type* $tmp1391 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1382);
            panda$core$Int64 $tmp1392 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1391->subtypes);
            panda$core$Bit $tmp1393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1392, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1393.value);
            org$pandalanguage$pandac$Type* $tmp1395 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1382);
            panda$core$Object* $tmp1396 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1395->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1397 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1396));
            elementSize1394 = $tmp1397;
            panda$core$String* $tmp1399 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1398, $tmp1399);
            panda$core$String* $tmp1402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1400, &$s1401);
            panda$core$String* $tmp1403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1402, count1388);
            panda$core$String* $tmp1405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1403, &$s1404);
            panda$core$Int64$wrapper* $tmp1406;
            $tmp1406 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp1406->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1406->refCount = 1;
            $tmp1406->value = elementSize1394;
            panda$core$String* $tmp1407 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1405, ((panda$core$Object*) $tmp1406));
            panda$core$String* $tmp1409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1407, &$s1408);
            return $tmp1409;
        }
        }
        else {
        panda$core$Bit $tmp1411 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$857_91383, &$s1410);
        if ($tmp1411.value) {
        {
            panda$core$Int64 $tmp1412 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1412, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1413.value);
            panda$core$Object* $tmp1415 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1416 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1415), p_out);
            ptr1414 = $tmp1416;
            panda$core$String* $tmp1418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1417, ptr1414);
            panda$core$String* $tmp1420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1418, &$s1419);
            return $tmp1420;
        }
        }
        else {
        panda$core$Bit $tmp1422 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$857_91383, &$s1421);
        if ($tmp1422.value) {
        {
            panda$core$Int64 $tmp1423 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1423, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1424.value);
            panda$core$Object* $tmp1426 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1427 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1426), p_out);
            ptr1425 = $tmp1427;
            panda$core$Object* $tmp1429 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1430 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1429), p_out);
            index1428 = $tmp1430;
            panda$core$String* $tmp1431 = panda$core$String$convert$R$panda$core$String(ptr1425);
            panda$core$String* $tmp1433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1431, &$s1432);
            panda$core$String* $tmp1434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1433, index1428);
            panda$core$String* $tmp1436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1434, &$s1435);
            return $tmp1436;
        }
        }
        else {
        panda$core$Bit $tmp1438 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$857_91383, &$s1437);
        if ($tmp1438.value) {
        {
            panda$core$Int64 $tmp1439 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1439, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1440.value);
            panda$core$Object* $tmp1442 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1443 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1442), p_out);
            ptr1441 = $tmp1443;
            panda$core$Object* $tmp1445 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1446 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1445), p_out);
            count1444 = $tmp1446;
            org$pandalanguage$pandac$Type* $tmp1447 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1382);
            panda$core$Int64 $tmp1448 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1447->subtypes);
            panda$core$Bit $tmp1449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1448, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1449.value);
            org$pandalanguage$pandac$Type* $tmp1451 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1382);
            panda$core$Object* $tmp1452 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1451->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1453 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1452));
            elementSize1450 = $tmp1453;
            panda$core$String* $tmp1455 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1454, $tmp1455);
            panda$core$String* $tmp1458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1456, &$s1457);
            panda$core$String* $tmp1459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1458, ptr1441);
            panda$core$String* $tmp1461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1459, &$s1460);
            panda$core$String* $tmp1462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1461, count1444);
            panda$core$String* $tmp1464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1462, &$s1463);
            panda$core$Int64$wrapper* $tmp1465;
            $tmp1465 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp1465->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1465->refCount = 1;
            $tmp1465->value = elementSize1450;
            panda$core$String* $tmp1466 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1464, ((panda$core$Object*) $tmp1465));
            panda$core$String* $tmp1468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1466, &$s1467);
            return $tmp1468;
        }
        }
        else {
        panda$core$Bit $tmp1470 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$857_91383, &$s1469);
        if ($tmp1470.value) {
        {
            panda$core$Int64 $tmp1471 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1471, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1472.value);
            panda$core$Object* $tmp1474 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1475 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1474), p_out);
            ptr1473 = $tmp1475;
            panda$core$Object* $tmp1477 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1478 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1477), p_out);
            offset1476 = $tmp1478;
            panda$core$String* $tmp1480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1479, ptr1473);
            panda$core$String* $tmp1482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1480, &$s1481);
            panda$core$String* $tmp1483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1482, offset1476);
            panda$core$String* $tmp1485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1483, &$s1484);
            return $tmp1485;
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
    org$pandalanguage$pandac$MethodDecl* m1487;
    panda$core$String* bit1498;
    panda$core$String* result1502;
    panda$core$String* bit1516;
    panda$core$String* result1520;
    panda$collections$Array* args1530;
    org$pandalanguage$pandac$Type* actualMethodType1534;
    panda$core$String* actualResultType1535;
    panda$core$Bit isSuper1536;
    panda$core$Int64 offset1556;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1561;
    panda$core$String* arg1576;
    panda$core$String* target1597;
    panda$core$String* methodRef1601;
    panda$core$Bit indirect1603;
    panda$core$String* result1605;
    panda$core$String* separator1607;
    panda$core$String* indirectVar1609;
    panda$collections$Iterator* arg$Iter1635;
    panda$core$String* arg1647;
    panda$core$Bit $tmp1486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp1486.value);
    m1487 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp1489 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1487->owner)->name, &$s1488);
    if ($tmp1489.value) {
    {
        panda$core$String* $tmp1490 = org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp1490;
    }
    }
    panda$core$Bit $tmp1491 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1487->owner);
    if ($tmp1491.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1487);
    }
    }
    panda$core$Bit $tmp1493 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1487->owner)->name, &$s1492);
    if ($tmp1493.value) {
    {
        panda$core$Bit $tmp1495 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1487)->name, &$s1494);
        if ($tmp1495.value) {
        {
            panda$core$Int64 $tmp1496 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1496, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1497.value);
            panda$core$Object* $tmp1499 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1500 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1501 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1499), ((org$pandalanguage$pandac$IRNode*) $tmp1500), p_out);
            bit1498 = $tmp1501;
            panda$core$String* $tmp1503 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1502 = $tmp1503;
            panda$core$String* $tmp1505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1504, result1502);
            panda$core$String* $tmp1507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1505, &$s1506);
            panda$core$String* $tmp1508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1507, bit1498);
            panda$core$String* $tmp1510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1508, &$s1509);
            (($fn1511) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1510);
            return result1502;
        }
        }
        panda$core$Bit $tmp1513 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1487)->name, &$s1512);
        if ($tmp1513.value) {
        {
            panda$core$Int64 $tmp1514 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1514, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1515.value);
            panda$core$Object* $tmp1517 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1518 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1519 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1517), ((org$pandalanguage$pandac$IRNode*) $tmp1518), p_out);
            bit1516 = $tmp1519;
            panda$core$String* $tmp1521 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1520 = $tmp1521;
            panda$core$String* $tmp1523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1522, result1520);
            panda$core$String* $tmp1525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1523, &$s1524);
            panda$core$String* $tmp1526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1525, bit1516);
            panda$core$String* $tmp1528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1526, &$s1527);
            (($fn1529) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1528);
            return result1520;
        }
        }
    }
    }
    panda$collections$Array* $tmp1531 = (panda$collections$Array*) malloc(40);
    $tmp1531->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1531->refCount.value = 1;
    panda$core$Int64 $tmp1533 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp1531, $tmp1533);
    args1530 = $tmp1531;
    panda$core$Int64 $tmp1538 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp1539 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1538, ((panda$core$Int64) { 1 }));
    bool $tmp1537 = $tmp1539.value;
    if (!$tmp1537) goto $l1540;
    panda$core$Object* $tmp1541 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp1542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1541)->kind, ((panda$core$Int64) { 1024 }));
    $tmp1537 = $tmp1542.value;
    $l1540:;
    panda$core$Bit $tmp1543 = { $tmp1537 };
    isSuper1536 = $tmp1543;
    panda$core$Bit $tmp1545 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper1536);
    bool $tmp1544 = $tmp1545.value;
    if (!$tmp1544) goto $l1546;
    panda$core$Bit $tmp1547 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m1487);
    $tmp1544 = $tmp1547.value;
    $l1546:;
    panda$core$Bit $tmp1548 = { $tmp1544 };
    if ($tmp1548.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1549 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1487);
        actualMethodType1534 = $tmp1549;
        panda$core$Int64 $tmp1550 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1534->subtypes);
        panda$core$Int64 $tmp1551 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1550, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1552 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1534->subtypes, $tmp1551);
        panda$core$String* $tmp1553 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1552));
        actualResultType1535 = $tmp1553;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp1554 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1487);
        actualMethodType1534 = $tmp1554;
        panda$core$String* $tmp1555 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType1535 = $tmp1555;
    }
    }
    panda$core$Int64 $tmp1557 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp1558 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1534->subtypes);
    panda$core$Int64 $tmp1559 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1557, $tmp1558);
    panda$core$Int64 $tmp1560 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1559, ((panda$core$Int64) { 1 }));
    offset1556 = $tmp1560;
    panda$core$Int64 $tmp1562 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1561, ((panda$core$Int64) { 0 }), $tmp1562, ((panda$core$Bit) { false }));
    int64_t $tmp1564 = $tmp1561.min.value;
    panda$core$Int64 i1563 = { $tmp1564 };
    int64_t $tmp1566 = $tmp1561.max.value;
    bool $tmp1567 = $tmp1561.inclusive.value;
    if ($tmp1567) goto $l1574; else goto $l1575;
    $l1574:;
    if ($tmp1564 <= $tmp1566) goto $l1568; else goto $l1570;
    $l1575:;
    if ($tmp1564 < $tmp1566) goto $l1568; else goto $l1570;
    $l1568:;
    {
        panda$core$Object* $tmp1577 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i1563);
        panda$core$String* $tmp1578 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1577), p_out);
        arg1576 = $tmp1578;
        panda$core$Bit $tmp1580 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i1563, offset1556);
        bool $tmp1579 = $tmp1580.value;
        if (!$tmp1579) goto $l1581;
        panda$core$Int64 $tmp1582 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1563, offset1556);
        panda$core$Object* $tmp1583 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1534->subtypes, $tmp1582);
        panda$core$Object* $tmp1584 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i1563);
        panda$core$Bit $tmp1585 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1583), ((org$pandalanguage$pandac$IRNode*) $tmp1584)->type);
        $tmp1579 = $tmp1585.value;
        $l1581:;
        panda$core$Bit $tmp1586 = { $tmp1579 };
        if ($tmp1586.value) {
        {
            panda$core$Object* $tmp1587 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i1563);
            panda$core$Int64 $tmp1588 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1563, offset1556);
            panda$core$Object* $tmp1589 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1534->subtypes, $tmp1588);
            panda$core$String* $tmp1590 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg1576, ((org$pandalanguage$pandac$IRNode*) $tmp1587)->type, ((org$pandalanguage$pandac$Type*) $tmp1589), p_out);
            arg1576 = $tmp1590;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args1530, ((panda$core$Object*) arg1576));
    }
    $l1571:;
    int64_t $tmp1592 = $tmp1566 - i1563.value;
    if ($tmp1567) goto $l1593; else goto $l1594;
    $l1593:;
    if ((uint64_t) $tmp1592 >= 1) goto $l1591; else goto $l1570;
    $l1594:;
    if ((uint64_t) $tmp1592 > 1) goto $l1591; else goto $l1570;
    $l1591:;
    i1563.value += 1;
    goto $l1568;
    $l1570:;
    panda$core$Int64 $tmp1598 = panda$collections$Array$get_count$R$panda$core$Int64(args1530);
    panda$core$Bit $tmp1599 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1598, ((panda$core$Int64) { 0 }));
    if ($tmp1599.value) {
    {
        panda$core$Object* $tmp1600 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args1530, ((panda$core$Int64) { 0 }));
        target1597 = ((panda$core$String*) $tmp1600);
    }
    }
    else {
    {
        target1597 = NULL;
    }
    }
    panda$core$String* $tmp1602 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target1597, m1487, isSuper1536, p_out);
    methodRef1601 = $tmp1602;
    panda$core$Bit $tmp1604 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m1487);
    indirect1603 = $tmp1604;
    panda$core$String* $tmp1606 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1605 = $tmp1606;
    separator1607 = &$s1608;
    if (indirect1603.value) {
    {
        panda$core$String* $tmp1610 = panda$core$String$convert$R$panda$core$String(actualResultType1535);
        panda$core$String* $tmp1612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1610, &$s1611);
        panda$core$String* $tmp1613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1612, result1605);
        panda$core$String* $tmp1615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1613, &$s1614);
        (($fn1616) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1615);
        panda$core$String* $tmp1617 = panda$core$String$convert$R$panda$core$String(methodRef1601);
        panda$core$String* $tmp1619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1617, &$s1618);
        panda$core$String* $tmp1620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1619, result1605);
        panda$core$String* $tmp1622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1620, &$s1621);
        (($fn1623) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1622);
        separator1607 = &$s1624;
    }
    }
    else {
    {
        panda$core$String* $tmp1625 = panda$core$String$convert$R$panda$core$String(actualResultType1535);
        panda$core$String* $tmp1627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1625, &$s1626);
        panda$core$String* $tmp1628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1627, result1605);
        panda$core$String* $tmp1630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1628, &$s1629);
        panda$core$String* $tmp1631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1630, methodRef1601);
        panda$core$String* $tmp1633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1631, &$s1632);
        (($fn1634) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1633);
    }
    }
    {
        ITable* $tmp1636 = ((panda$collections$Iterable*) args1530)->$class->itable;
        while ($tmp1636->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1636 = $tmp1636->next;
        }
        $fn1638 $tmp1637 = $tmp1636->methods[0];
        panda$collections$Iterator* $tmp1639 = $tmp1637(((panda$collections$Iterable*) args1530));
        arg$Iter1635 = $tmp1639;
        $l1640:;
        ITable* $tmp1642 = arg$Iter1635->$class->itable;
        while ($tmp1642->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1642 = $tmp1642->next;
        }
        $fn1644 $tmp1643 = $tmp1642->methods[0];
        panda$core$Bit $tmp1645 = $tmp1643(arg$Iter1635);
        panda$core$Bit $tmp1646 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1645);
        if (!$tmp1646.value) goto $l1641;
        {
            ITable* $tmp1648 = arg$Iter1635->$class->itable;
            while ($tmp1648->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1648 = $tmp1648->next;
            }
            $fn1650 $tmp1649 = $tmp1648->methods[1];
            panda$core$Object* $tmp1651 = $tmp1649(arg$Iter1635);
            arg1647 = ((panda$core$String*) $tmp1651);
            panda$core$String* $tmp1652 = panda$core$String$convert$R$panda$core$String(separator1607);
            panda$core$String* $tmp1654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1652, &$s1653);
            panda$core$String* $tmp1655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1654, arg1647);
            panda$core$String* $tmp1657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1655, &$s1656);
            (($fn1658) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1657);
            separator1607 = &$s1659;
        }
        goto $l1640;
        $l1641:;
    }
    (($fn1661) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1660);
    panda$core$String* $tmp1662 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp1663 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp1662, actualResultType1535);
    if ($tmp1663.value) {
    {
        panda$core$Int64 $tmp1664 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1534->subtypes);
        panda$core$Int64 $tmp1665 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1664, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1666 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1534->subtypes, $tmp1665);
        panda$core$String* $tmp1667 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result1605, ((org$pandalanguage$pandac$Type*) $tmp1666), p_call->type, p_out);
        return $tmp1667;
    }
    }
    return result1605;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* unwrapped1669;
    panda$core$String* nonNullValue1672;
    panda$core$String* wrapped1682;
    panda$core$Bit $tmp1668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1668.value) {
    {
        panda$core$Object* $tmp1670 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1671 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1670), p_out);
        unwrapped1669 = $tmp1671;
        panda$core$Object* $tmp1673 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1674 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped1669, ((org$pandalanguage$pandac$Type*) $tmp1673), p_dstType, p_out);
        nonNullValue1672 = $tmp1674;
        panda$core$String* $tmp1676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1675, p_value);
        panda$core$String* $tmp1678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1676, &$s1677);
        panda$core$String* $tmp1679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1678, nonNullValue1672);
        panda$core$String* $tmp1681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1679, &$s1680);
        return $tmp1681;
    }
    }
    panda$core$String* $tmp1683 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    wrapped1682 = $tmp1683;
    panda$core$String* $tmp1684 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp1685 = panda$core$String$convert$R$panda$core$String($tmp1684);
    panda$core$String* $tmp1687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1685, &$s1686);
    panda$core$String* $tmp1688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1687, wrapped1682);
    panda$core$String* $tmp1690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1688, &$s1689);
    (($fn1691) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1690);
    panda$core$Bit $tmp1692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1692.value) {
    {
        panda$core$String* $tmp1694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1693, p_value);
        panda$core$String* $tmp1696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1694, &$s1695);
        (($fn1697) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1696);
        panda$core$Int64 $tmp1698 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1698;
    }
    }
    panda$core$String* $tmp1699 = panda$core$String$convert$R$panda$core$String(wrapped1682);
    panda$core$String* $tmp1701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1699, &$s1700);
    panda$core$String* $tmp1702 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp1703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1701, $tmp1702);
    panda$core$String* $tmp1705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1703, &$s1704);
    panda$core$Int64 $tmp1707 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_srcType);
    panda$core$Int64$wrapper* $tmp1708;
    $tmp1708 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp1708->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1708->refCount = 1;
    $tmp1708->value = $tmp1707;
    panda$core$String* $tmp1709 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1706, ((panda$core$Object*) $tmp1708));
    panda$core$String* $tmp1711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1709, &$s1710);
    panda$core$String* $tmp1712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1705, $tmp1711);
    (($fn1713) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1712);
    panda$core$String* $tmp1714 = panda$core$String$convert$R$panda$core$String(wrapped1682);
    panda$core$String* $tmp1716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1714, &$s1715);
    panda$core$String* $tmp1718 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_srcType)->name);
    panda$core$String* $tmp1719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1717, $tmp1718);
    panda$core$String* $tmp1721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1719, &$s1720);
    panda$core$String* $tmp1722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1716, $tmp1721);
    (($fn1723) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1722);
    panda$core$String* $tmp1724 = panda$core$String$convert$R$panda$core$String(wrapped1682);
    panda$core$String* $tmp1726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1724, &$s1725);
    (($fn1727) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1726);
    panda$core$String* $tmp1728 = panda$core$String$convert$R$panda$core$String(wrapped1682);
    panda$core$String* $tmp1730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1728, &$s1729);
    panda$core$String* $tmp1731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1730, p_value);
    panda$core$String* $tmp1733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1731, &$s1732);
    (($fn1734) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1733);
    panda$core$Bit $tmp1735 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1735.value) {
    {
        panda$core$Int64 $tmp1736 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1736;
        (($fn1738) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1737);
        (($fn1740) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1739);
        panda$core$Int64 $tmp1741 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1741;
        panda$core$String* $tmp1742 = panda$core$String$convert$R$panda$core$String(wrapped1682);
        panda$core$String* $tmp1744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1742, &$s1743);
        (($fn1745) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1744);
        panda$core$Int64 $tmp1746 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1746;
        (($fn1748) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1747);
    }
    }
    panda$core$String* $tmp1750 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1749, $tmp1750);
    panda$core$String* $tmp1753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1751, &$s1752);
    panda$core$String* $tmp1754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1753, wrapped1682);
    panda$core$String* $tmp1756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1754, &$s1755);
    return $tmp1756;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field1760;
    org$pandalanguage$pandac$ClassDecl* cl1763;
    panda$core$String* base1766;
    panda$core$Bit $tmp1757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp1757.value);
    panda$core$Int64 $tmp1758 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp1759 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1758, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1759.value);
    field1760 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$Bit $tmp1761 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field1760->annotations);
    if ($tmp1761.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field1760->value != NULL }).value);
        panda$core$String* $tmp1762 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field1760->value, p_out);
        return $tmp1762;
    }
    }
    panda$core$Object* $tmp1764 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp1765 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp1764)->type);
    cl1763 = $tmp1765;
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl1763);
    panda$core$Object* $tmp1767 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1768 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1767), p_out);
    base1766 = $tmp1768;
    PANDA_ASSERT(((panda$core$Bit) { cl1763 != NULL }).value);
    panda$core$Bit $tmp1769 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1763);
    if ($tmp1769.value) {
    {
        panda$core$String* $tmp1770 = panda$core$String$convert$R$panda$core$String(base1766);
        panda$core$String* $tmp1772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1770, &$s1771);
        panda$core$String* $tmp1773 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1760)->name);
        panda$core$String* $tmp1774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1772, $tmp1773);
        panda$core$String* $tmp1776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1774, &$s1775);
        return $tmp1776;
    }
    }
    panda$core$String* $tmp1777 = panda$core$String$convert$R$panda$core$String(base1766);
    panda$core$String* $tmp1779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1777, &$s1778);
    panda$core$String* $tmp1780 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1760)->name);
    panda$core$String* $tmp1781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1779, $tmp1780);
    panda$core$String* $tmp1783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1781, &$s1782);
    return $tmp1783;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1784;
    panda$core$String* wrapped1794;
    panda$core$String* nonNullValue1797;
    panda$core$String* $tmp1786 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1785, $tmp1786);
    panda$core$String* $tmp1789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1787, &$s1788);
    panda$core$String* $tmp1790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1789, p_value);
    panda$core$String* $tmp1792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1790, &$s1791);
    result1784 = $tmp1792;
    panda$core$Bit $tmp1793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1793.value) {
    {
        panda$core$Object* $tmp1795 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1796 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1795), p_out);
        wrapped1794 = $tmp1796;
        panda$core$Object* $tmp1798 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1799 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped1794, ((org$pandalanguage$pandac$Type*) $tmp1798), p_dstType, p_out);
        nonNullValue1797 = $tmp1799;
        panda$core$String* $tmp1801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1800, p_value);
        panda$core$String* $tmp1803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1801, &$s1802);
        panda$core$String* $tmp1804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1803, nonNullValue1797);
        panda$core$String* $tmp1806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1804, &$s1805);
        panda$core$String* $tmp1807 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp1808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1806, $tmp1807);
        panda$core$String* $tmp1810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1808, &$s1809);
        return $tmp1810;
    }
    }
    return result1784;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1812 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1811, $tmp1812);
    panda$core$String* $tmp1815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1813, &$s1814);
    panda$core$String* $tmp1816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1815, p_value);
    panda$core$String* $tmp1818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1816, &$s1817);
    return $tmp1818;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1820 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1819, $tmp1820);
    panda$core$String* $tmp1823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1821, &$s1822);
    panda$core$String* $tmp1824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1823, p_value);
    panda$core$String* $tmp1826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1824, &$s1825);
    return $tmp1826;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op1827;
    org$pandalanguage$pandac$ClassDecl* srcClass1838;
    org$pandalanguage$pandac$ClassDecl* targetClass1840;
    panda$core$String* srcType1879;
    panda$core$String* dstType1881;
    panda$core$Bit $tmp1828 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp1828.value) {
    {
        panda$core$Bit $tmp1829 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp1829.value);
        panda$core$String* $tmp1831 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
        panda$core$String* $tmp1832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1830, $tmp1831);
        panda$core$String* $tmp1834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1832, &$s1833);
        panda$core$String* $tmp1835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1834, p_value);
        panda$core$String* $tmp1837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1835, &$s1836);
        return $tmp1837;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1839 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass1838 = $tmp1839;
        PANDA_ASSERT(((panda$core$Bit) { srcClass1838 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp1841 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass1840 = $tmp1841;
        PANDA_ASSERT(((panda$core$Bit) { targetClass1840 != NULL }).value);
        panda$core$Bit $tmp1843 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1838);
        bool $tmp1842 = $tmp1843.value;
        if (!$tmp1842) goto $l1844;
        panda$core$Bit $tmp1845 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1840);
        panda$core$Bit $tmp1846 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1845);
        $tmp1842 = $tmp1846.value;
        $l1844:;
        panda$core$Bit $tmp1847 = { $tmp1842 };
        if ($tmp1847.value) {
        {
            panda$core$String* $tmp1848 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1848;
        }
        }
        else {
        panda$core$Bit $tmp1850 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1838);
        panda$core$Bit $tmp1851 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1850);
        bool $tmp1849 = $tmp1851.value;
        if (!$tmp1849) goto $l1852;
        panda$core$Bit $tmp1853 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1840);
        $tmp1849 = $tmp1853.value;
        $l1852:;
        panda$core$Bit $tmp1854 = { $tmp1849 };
        if ($tmp1854.value) {
        {
            panda$core$String* $tmp1855 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1855;
        }
        }
        else {
        panda$core$Bit $tmp1858 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1838);
        bool $tmp1857 = $tmp1858.value;
        if (!$tmp1857) goto $l1859;
        panda$core$Bit $tmp1860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1857 = $tmp1860.value;
        $l1859:;
        panda$core$Bit $tmp1861 = { $tmp1857 };
        bool $tmp1856 = $tmp1861.value;
        if (!$tmp1856) goto $l1862;
        panda$core$Object* $tmp1863 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1864 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1863), p_src);
        $tmp1856 = $tmp1864.value;
        $l1862:;
        panda$core$Bit $tmp1865 = { $tmp1856 };
        if ($tmp1865.value) {
        {
            panda$core$String* $tmp1866 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1866;
        }
        }
        else {
        panda$core$Bit $tmp1869 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1840);
        bool $tmp1868 = $tmp1869.value;
        if (!$tmp1868) goto $l1870;
        panda$core$Bit $tmp1871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1868 = $tmp1871.value;
        $l1870:;
        panda$core$Bit $tmp1872 = { $tmp1868 };
        bool $tmp1867 = $tmp1872.value;
        if (!$tmp1867) goto $l1873;
        panda$core$Object* $tmp1874 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1875 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1874), p_target);
        $tmp1867 = $tmp1875.value;
        $l1873:;
        panda$core$Bit $tmp1876 = { $tmp1867 };
        if ($tmp1876.value) {
        {
            panda$core$String* $tmp1877 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1877;
        }
        }
        }
        }
        }
        op1827 = &$s1878;
    }
    }
    panda$core$String* $tmp1880 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType1879 = $tmp1880;
    panda$core$String* $tmp1882 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType1881 = $tmp1882;
    panda$core$Bit $tmp1883 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType1879, dstType1881);
    if ($tmp1883.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp1885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1884, dstType1881);
    panda$core$String* $tmp1887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1885, &$s1886);
    panda$core$String* $tmp1888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1887, p_value);
    panda$core$String* $tmp1890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1888, &$s1889);
    return $tmp1890;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base1894;
    panda$core$Bit $tmp1891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp1891.value);
    panda$core$Int64 $tmp1892 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp1893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1892, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1893.value);
    panda$core$Object* $tmp1895 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1896 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1895), p_out);
    base1894 = $tmp1896;
    panda$core$Object* $tmp1897 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1898 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base1894, ((org$pandalanguage$pandac$IRNode*) $tmp1897)->type, p_cast->type, p_out);
    return $tmp1898;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl1902;
    panda$core$String* t1904;
    panda$core$String* value1917;
    panda$core$String* tmp1931;
    panda$core$String* result1949;
    panda$core$String* classPtr1970;
    panda$core$String* className1972;
    panda$core$Bit $tmp1899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp1899.value);
    panda$core$Int64 $tmp1900 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp1901 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1900, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1901.value);
    org$pandalanguage$pandac$ClassDecl* $tmp1903 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl1902 = $tmp1903;
    PANDA_ASSERT(((panda$core$Bit) { cl1902 != NULL }).value);
    panda$core$String* $tmp1905 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t1904 = $tmp1905;
    panda$core$Bit $tmp1907 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    bool $tmp1906 = $tmp1907.value;
    if ($tmp1906) goto $l1908;
    org$pandalanguage$pandac$Type* $tmp1909 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1910 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp1909);
    $tmp1906 = $tmp1910.value;
    $l1908:;
    panda$core$Bit $tmp1911 = { $tmp1906 };
    if ($tmp1911.value) {
    {
        panda$core$Int64 $tmp1912 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp1913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1912, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp1913.value);
        panda$core$Object* $tmp1914 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp1915 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1914)->children);
        panda$core$Bit $tmp1916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1915, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp1916.value);
        panda$core$Object* $tmp1918 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp1919 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp1918)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1920 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1919), p_out);
        value1917 = $tmp1920;
        panda$core$String* $tmp1922 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        panda$core$String* $tmp1923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1921, $tmp1922);
        panda$core$String* $tmp1925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1923, &$s1924);
        panda$core$String* $tmp1926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1925, value1917);
        panda$core$String* $tmp1928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1926, &$s1927);
        return $tmp1928;
    }
    }
    panda$core$Bit $tmp1929 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1902);
    if ($tmp1929.value) {
    {
        panda$core$Int64 $tmp1930 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1930;
        panda$core$Int64$wrapper* $tmp1933;
        $tmp1933 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp1933->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp1933->refCount = 1;
        $tmp1933->value = self->varCount;
        panda$core$String* $tmp1934 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1932, ((panda$core$Object*) $tmp1933));
        panda$core$String* $tmp1936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1934, &$s1935);
        tmp1931 = $tmp1936;
        panda$core$String* $tmp1937 = panda$core$String$convert$R$panda$core$String(t1904);
        panda$core$String* $tmp1939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1937, &$s1938);
        panda$core$String* $tmp1940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1939, tmp1931);
        panda$core$String* $tmp1942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1940, &$s1941);
        (($fn1943) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1942);
        panda$core$Object* $tmp1944 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1945, tmp1931);
        panda$core$String* $tmp1948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1946, &$s1947);
        org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp1944), $tmp1948, p_out);
        return tmp1931;
    }
    }
    panda$core$String* $tmp1950 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1949 = $tmp1950;
    panda$core$String* $tmp1951 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp1952 = panda$core$String$convert$R$panda$core$String($tmp1951);
    panda$core$String* $tmp1954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1952, &$s1953);
    panda$core$String* $tmp1955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1954, result1949);
    panda$core$String* $tmp1957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1955, &$s1956);
    panda$core$String* $tmp1958 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp1959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1957, $tmp1958);
    panda$core$String* $tmp1961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1959, &$s1960);
    panda$core$Int64 $tmp1963 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$Int64$wrapper* $tmp1964;
    $tmp1964 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp1964->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1964->refCount = 1;
    $tmp1964->value = $tmp1963;
    panda$core$String* $tmp1965 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1962, ((panda$core$Object*) $tmp1964));
    panda$core$String* $tmp1967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1965, &$s1966);
    panda$core$String* $tmp1968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1961, $tmp1967);
    (($fn1969) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1968);
    panda$core$String* $tmp1971 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr1970 = $tmp1971;
    panda$core$Bit $tmp1973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    if ($tmp1973.value) {
    {
        panda$core$Object* $tmp1974 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1975 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1974));
        className1972 = $tmp1975;
    }
    }
    else {
    {
        panda$core$String* $tmp1976 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className1972 = $tmp1976;
    }
    }
    panda$core$String* $tmp1977 = panda$core$String$convert$R$panda$core$String(result1949);
    panda$core$String* $tmp1979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1977, &$s1978);
    panda$core$String* $tmp1980 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) cl1902)->name);
    panda$core$String* $tmp1981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1979, $tmp1980);
    panda$core$String* $tmp1983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1981, &$s1982);
    (($fn1984) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1983);
    panda$core$String* $tmp1985 = panda$core$String$convert$R$panda$core$String(result1949);
    panda$core$String* $tmp1987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1985, &$s1986);
    (($fn1988) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1987);
    panda$core$Object* $tmp1989 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1990 = panda$core$String$convert$R$panda$core$String(result1949);
    panda$core$String* $tmp1992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1990, &$s1991);
    org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp1989), $tmp1992, p_out);
    return result1949;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1993 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    return $tmp1993;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1995 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp1996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1994, $tmp1995);
    return $tmp1996;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_real, panda$io$OutputStream* p_out) {
    panda$core$String* result1997;
    panda$core$Char8 $tmp1999;
    panda$core$String* $tmp1998 = panda$core$Real64$convert$R$panda$core$String(((panda$core$Real64$wrapper*) p_real->payload)->value);
    result1997 = $tmp1998;
    panda$core$Char8$init$panda$core$UInt8(&$tmp1999, ((panda$core$UInt8) { 46 }));
    panda$core$Bit $tmp2000 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(result1997, $tmp1999);
    if ($tmp2000.value) {
    {
        return result1997;
    }
    }
    panda$core$String* $tmp2002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1997, &$s2001);
    return $tmp2002;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s2003;
    }
    }
    return &$s2004;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2005 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    return $tmp2005;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result2007;
    panda$collections$Iterator* c$Iter2021;
    panda$core$Char8 c2034;
    panda$core$Int64 $tmp2006 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp2006;
    panda$core$Int64$wrapper* $tmp2009;
    $tmp2009 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp2009->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2009->refCount = 1;
    $tmp2009->value = self->varCount;
    panda$core$String* $tmp2010 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2008, ((panda$core$Object*) $tmp2009));
    panda$core$String* $tmp2012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2010, &$s2011);
    result2007 = $tmp2012;
    org$pandalanguage$pandac$Type* $tmp2013 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2013);
    panda$core$String* $tmp2015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2014, result2007);
    panda$core$String* $tmp2017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2015, &$s2016);
    panda$core$String* $tmp2019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2017, &$s2018);
    (($fn2020) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2019);
    {
        panda$collections$ListView* $tmp2022 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp2023 = ((panda$collections$Iterable*) $tmp2022)->$class->itable;
        while ($tmp2023->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2023 = $tmp2023->next;
        }
        $fn2025 $tmp2024 = $tmp2023->methods[0];
        panda$collections$Iterator* $tmp2026 = $tmp2024(((panda$collections$Iterable*) $tmp2022));
        c$Iter2021 = $tmp2026;
        $l2027:;
        ITable* $tmp2029 = c$Iter2021->$class->itable;
        while ($tmp2029->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2029 = $tmp2029->next;
        }
        $fn2031 $tmp2030 = $tmp2029->methods[0];
        panda$core$Bit $tmp2032 = $tmp2030(c$Iter2021);
        panda$core$Bit $tmp2033 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2032);
        if (!$tmp2033.value) goto $l2028;
        {
            ITable* $tmp2035 = c$Iter2021->$class->itable;
            while ($tmp2035->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2035 = $tmp2035->next;
            }
            $fn2037 $tmp2036 = $tmp2035->methods[1];
            panda$core$Object* $tmp2038 = $tmp2036(c$Iter2021);
            c2034 = ((panda$core$Char8$wrapper*) $tmp2038)->value;
            panda$core$UInt8 $tmp2040 = panda$core$Char8$convert$R$panda$core$UInt8(c2034);
            panda$core$UInt8$wrapper* $tmp2041;
            $tmp2041 = (panda$core$UInt8$wrapper*) malloc(13);
            $tmp2041->cl = (panda$core$Class*) &panda$core$UInt8$wrapperclass;
            $tmp2041->refCount = 1;
            $tmp2041->value = $tmp2040;
            ITable* $tmp2043 = ((panda$core$Formattable*) $tmp2041)->$class->itable;
            while ($tmp2043->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                $tmp2043 = $tmp2043->next;
            }
            $fn2045 $tmp2044 = $tmp2043->methods[0];
            panda$core$String* $tmp2046 = $tmp2044(((panda$core$Formattable*) $tmp2041), &$s2042);
            panda$core$String* $tmp2048 = panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String($tmp2046, &$s2047);
            panda$core$String* $tmp2049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2039, $tmp2048);
            panda$core$String* $tmp2051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2049, &$s2050);
            (($fn2052) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2051);
        }
        goto $l2027;
        $l2028:;
    }
    panda$collections$ListView* $tmp2054 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp2055 = ((panda$collections$CollectionView*) $tmp2054)->$class->itable;
    while ($tmp2055->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2055 = $tmp2055->next;
    }
    $fn2057 $tmp2056 = $tmp2055->methods[0];
    panda$core$Int64 $tmp2058 = $tmp2056(((panda$collections$CollectionView*) $tmp2054));
    panda$core$Int64$wrapper* $tmp2059;
    $tmp2059 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp2059->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2059->refCount = 1;
    $tmp2059->value = $tmp2058;
    panda$core$String* $tmp2060 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2053, ((panda$core$Object*) $tmp2059));
    panda$core$String* $tmp2062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2060, &$s2061);
    panda$core$Int64 $tmp2063 = panda$core$String$hash$R$panda$core$Int64(p_s);
    panda$core$Int64$wrapper* $tmp2064;
    $tmp2064 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp2064->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2064->refCount = 1;
    $tmp2064->value = $tmp2063;
    panda$core$String* $tmp2065 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2062, ((panda$core$Object*) $tmp2064));
    panda$core$String* $tmp2067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2065, &$s2066);
    (($fn2068) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp2067);
    panda$core$String* $tmp2070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2069, result2007);
    panda$core$String* $tmp2072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2070, &$s2071);
    return $tmp2072;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    return &$s2073;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2075 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp2076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2074, $tmp2075);
    panda$core$String* $tmp2078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2076, &$s2077);
    return $tmp2078;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2082;
    org$pandalanguage$pandac$ClassDecl* cl2085;
    panda$core$String* bit2088;
    panda$core$Bit $tmp2079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp2079.value);
    panda$core$Int64 $tmp2080 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp2081 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2080, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2081.value);
    panda$core$Object* $tmp2083 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2084 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2083), p_out);
    value2082 = $tmp2084;
    panda$core$Object* $tmp2086 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2087 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2086)->type);
    cl2085 = $tmp2087;
    panda$core$Bit $tmp2089 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2085);
    if ($tmp2089.value) {
    {
        panda$core$Object* $tmp2090 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2091 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2090)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2091.value) {
        {
            bit2088 = &$s2092;
        }
        }
        else {
        {
            panda$core$String* $tmp2094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2093, value2082);
            panda$core$String* $tmp2096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2094, &$s2095);
            bit2088 = $tmp2096;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2097 = panda$core$String$convert$R$panda$core$String(value2082);
        panda$core$String* $tmp2099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2097, &$s2098);
        bit2088 = $tmp2099;
    }
    }
    panda$core$String* $tmp2101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2100, bit2088);
    panda$core$String* $tmp2103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2101, &$s2102);
    return $tmp2103;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2107;
    org$pandalanguage$pandac$ClassDecl* cl2110;
    panda$core$String* bit2113;
    panda$core$Bit $tmp2104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp2104.value);
    panda$core$Int64 $tmp2105 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp2106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2105, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2106.value);
    panda$core$Object* $tmp2108 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2109 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2108), p_out);
    value2107 = $tmp2109;
    panda$core$Object* $tmp2111 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2112 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2111)->type);
    cl2110 = $tmp2112;
    panda$core$Bit $tmp2114 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2110);
    if ($tmp2114.value) {
    {
        panda$core$Object* $tmp2115 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2116 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2115)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2116.value) {
        {
            bit2113 = &$s2117;
        }
        }
        else {
        {
            panda$core$String* $tmp2118 = panda$core$String$convert$R$panda$core$String(value2107);
            panda$core$String* $tmp2120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2118, &$s2119);
            bit2113 = $tmp2120;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2121 = panda$core$String$convert$R$panda$core$String(value2107);
        panda$core$String* $tmp2123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2121, &$s2122);
        bit2113 = $tmp2123;
    }
    }
    panda$core$String* $tmp2125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2124, bit2113);
    panda$core$String* $tmp2127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2125, &$s2126);
    return $tmp2127;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2129;
    panda$core$Bit $tmp2128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp2128.value);
    panda$core$Object* $tmp2130 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2131 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp2130));
    cl2129 = $tmp2131;
    PANDA_ASSERT(((panda$core$Bit) { cl2129 != NULL }).value);
    panda$core$Bit $tmp2132 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2129);
    if ($tmp2132.value) {
    {
        panda$core$String* $tmp2134 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
        panda$core$String* $tmp2135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2133, $tmp2134);
        panda$core$String* $tmp2137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2135, &$s2136);
        return $tmp2137;
    }
    }
    else {
    {
        return &$s2138;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base2142;
    panda$core$String* result2145;
    org$pandalanguage$pandac$parser$Token$Kind* $match$1226_92147;
    panda$core$Bit $tmp2139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp2139.value);
    panda$core$Int64 $tmp2140 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp2141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2140, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2141.value);
    panda$core$Object* $tmp2143 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2144 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2143), p_out);
    base2142 = $tmp2144;
    panda$core$String* $tmp2146 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2145 = $tmp2146;
    {
        $match$1226_92147 = ((org$pandalanguage$pandac$parser$Token$Kind*) p_expr->payload);
        panda$core$Bit $tmp2148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1226_92147->$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp2148.value) {
        {
            panda$core$String* $tmp2150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2149, base2142);
            panda$core$String* $tmp2152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2150, &$s2151);
            return $tmp2152;
        }
        }
        else {
        panda$core$Bit $tmp2153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1226_92147->$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp2153.value) {
        {
            panda$core$String* $tmp2155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2154, base2142);
            panda$core$String* $tmp2157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2155, &$s2156);
            return $tmp2157;
        }
        }
        else {
        panda$core$Bit $tmp2158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1226_92147->$rawValue, ((panda$core$Int64) { 50 }));
        if ($tmp2158.value) {
        {
            panda$core$String* $tmp2160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2159, base2142);
            panda$core$String* $tmp2162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2160, &$s2161);
            return $tmp2162;
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
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_t, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test2172;
    panda$core$String* trueLabel2175;
    panda$core$String* falseLabel2177;
    panda$core$String* merge2179;
    panda$core$String* result2181;
    panda$core$Bit $tmp2163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->kind, ((panda$core$Int64) { 1044 }));
    PANDA_ASSERT($tmp2163.value);
    panda$core$Int64 $tmp2164 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
    panda$core$Bit $tmp2165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2164, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2165.value);
    panda$core$Object* $tmp2166 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2167 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2168 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2166)->type, $tmp2167);
    PANDA_ASSERT($tmp2168.value);
    panda$core$Object* $tmp2169 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2170 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp2171 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2169)->type, ((org$pandalanguage$pandac$IRNode*) $tmp2170)->type);
    PANDA_ASSERT($tmp2171.value);
    panda$core$Object* $tmp2173 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2174 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2173), p_out);
    test2172 = $tmp2174;
    panda$core$String* $tmp2176 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel2175 = $tmp2176;
    panda$core$String* $tmp2178 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel2177 = $tmp2178;
    panda$core$String* $tmp2180 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    merge2179 = $tmp2180;
    panda$core$String* $tmp2182 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2181 = $tmp2182;
    panda$core$Object* $tmp2183 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2184 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2183)->type);
    panda$core$String* $tmp2185 = panda$core$String$convert$R$panda$core$String($tmp2184);
    panda$core$String* $tmp2187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2185, &$s2186);
    panda$core$String* $tmp2188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2187, result2181);
    panda$core$String* $tmp2190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2188, &$s2189);
    (($fn2191) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2190);
    panda$core$String* $tmp2193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2192, test2172);
    panda$core$String* $tmp2195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2193, &$s2194);
    panda$core$String* $tmp2196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2195, trueLabel2175);
    panda$core$String* $tmp2198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2196, &$s2197);
    panda$core$String* $tmp2199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2198, falseLabel2177);
    panda$core$String* $tmp2201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2199, &$s2200);
    (($fn2202) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2201);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel2175, p_out);
    panda$core$String* $tmp2203 = panda$core$String$convert$R$panda$core$String(result2181);
    panda$core$String* $tmp2205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2203, &$s2204);
    panda$core$Object* $tmp2206 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2207 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2206), p_out);
    panda$core$String* $tmp2208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2205, $tmp2207);
    panda$core$String* $tmp2210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2208, &$s2209);
    (($fn2211) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2210);
    panda$core$String* $tmp2213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2212, merge2179);
    panda$core$String* $tmp2215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2213, &$s2214);
    (($fn2216) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2215);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel2177, p_out);
    panda$core$String* $tmp2217 = panda$core$String$convert$R$panda$core$String(result2181);
    panda$core$String* $tmp2219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2217, &$s2218);
    panda$core$Object* $tmp2220 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 2 }));
    panda$core$String* $tmp2221 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2220), p_out);
    panda$core$String* $tmp2222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2219, $tmp2221);
    panda$core$String* $tmp2224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2222, &$s2223);
    (($fn2225) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2224);
    panda$core$String* $tmp2227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2226, merge2179);
    panda$core$String* $tmp2229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2227, &$s2228);
    (($fn2230) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2229);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, merge2179, p_out);
    return result2181;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2231 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2231;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2245;
    panda$core$String* result2249;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp2232 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2232;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp2233 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2233;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp2234 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2234;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp2235 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2235;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp2236 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2236;
        }
        break;
        case 1045:
        {
            panda$core$String* $tmp2237 = org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, ((panda$io$OutputStream*) p_out));
            return $tmp2237;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp2238 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2238;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp2239 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2239;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp2240 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp2240;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp2241 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2241;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp2242 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp2242;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp2243 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2243;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp2244 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2244;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp2246 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2247 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2246), p_out);
            value2245 = $tmp2247;
            panda$core$UInt64$wrapper* $tmp2248;
            $tmp2248 = (panda$core$UInt64$wrapper*) malloc(24);
            $tmp2248->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
            $tmp2248->refCount = 1;
            $tmp2248->value = ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) $tmp2248), ((panda$core$Object*) value2245));
            return value2245;
        }
        break;
        case 1028:
        {
            panda$core$UInt64$wrapper* $tmp2250;
            $tmp2250 = (panda$core$UInt64$wrapper*) malloc(24);
            $tmp2250->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
            $tmp2250->refCount = 1;
            $tmp2250->value = ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
            panda$core$Object* $tmp2251 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) $tmp2250));
            result2249 = ((panda$core$String*) $tmp2251);
            PANDA_ASSERT(((panda$core$Bit) { result2249 != NULL }).value);
            return result2249;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp2252 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2252;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp2253 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2253;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp2254 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2254;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp2255 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2255;
        }
        break;
        case 1044:
        {
            panda$core$String* $tmp2256 = org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2256;
        }
        break;
        case 1047:
        {
            panda$core$String* $tmp2257 = org$pandalanguage$pandac$CCodeGenerator$getChoiceFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2257;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2258 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2258;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter2263;
    org$pandalanguage$pandac$IRNode* s2275;
    panda$core$Bit $tmp2259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp2259.value);
    (($fn2261) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2260);
    panda$core$Int64 $tmp2262 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2262;
    {
        ITable* $tmp2264 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp2264->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2264 = $tmp2264->next;
        }
        $fn2266 $tmp2265 = $tmp2264->methods[0];
        panda$collections$Iterator* $tmp2267 = $tmp2265(((panda$collections$Iterable*) p_block->children));
        s$Iter2263 = $tmp2267;
        $l2268:;
        ITable* $tmp2270 = s$Iter2263->$class->itable;
        while ($tmp2270->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2270 = $tmp2270->next;
        }
        $fn2272 $tmp2271 = $tmp2270->methods[0];
        panda$core$Bit $tmp2273 = $tmp2271(s$Iter2263);
        panda$core$Bit $tmp2274 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2273);
        if (!$tmp2274.value) goto $l2269;
        {
            ITable* $tmp2276 = s$Iter2263->$class->itable;
            while ($tmp2276->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2276 = $tmp2276->next;
            }
            $fn2278 $tmp2277 = $tmp2276->methods[1];
            panda$core$Object* $tmp2279 = $tmp2277(s$Iter2263);
            s2275 = ((org$pandalanguage$pandac$IRNode*) $tmp2279);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2275, p_out);
        }
        goto $l2268;
        $l2269:;
    }
    panda$core$Int64 $tmp2280 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2280;
    (($fn2282) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2281);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2283;
    panda$core$String* $match$1334_92284;
    panda$core$String* ptr2289;
    panda$core$String* arg2292;
    panda$core$String* base2312;
    panda$core$String* index2315;
    panda$core$String* value2318;
    m2283 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$1334_92284 = ((org$pandalanguage$pandac$Symbol*) m2283->value)->name;
        panda$core$Bit $tmp2286 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1334_92284, &$s2285);
        if ($tmp2286.value) {
        {
            panda$core$Int64 $tmp2287 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2287, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2288.value);
            panda$core$Object* $tmp2290 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2291 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2290), p_out);
            ptr2289 = $tmp2291;
            panda$core$Object* $tmp2293 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2294 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2293));
            panda$core$String* $tmp2295 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2294, p_out);
            arg2292 = $tmp2295;
            panda$core$String* $tmp2297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2296, arg2292);
            panda$core$String* $tmp2299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2297, &$s2298);
            panda$core$String* $tmp2300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2299, ptr2289);
            panda$core$String* $tmp2302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2300, &$s2301);
            (($fn2303) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2302);
        }
        }
        else {
        panda$core$Bit $tmp2305 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1334_92284, &$s2304);
        if ($tmp2305.value) {
        {
            panda$core$Int64 $tmp2306 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2306, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp2307.value);
            panda$core$Object* $tmp2308 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2309 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2308));
            panda$core$Int64 $tmp2310 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2309->type->subtypes);
            panda$core$Bit $tmp2311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2310, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2311.value);
            panda$core$Object* $tmp2313 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2314 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2313), p_out);
            base2312 = $tmp2314;
            panda$core$Object* $tmp2316 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2317 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2316), p_out);
            index2315 = $tmp2317;
            panda$core$Object* $tmp2319 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2320 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2319));
            panda$core$String* $tmp2321 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2320, p_out);
            value2318 = $tmp2321;
            panda$core$String* $tmp2322 = panda$core$String$convert$R$panda$core$String(base2312);
            panda$core$String* $tmp2324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2322, &$s2323);
            panda$core$String* $tmp2325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2324, index2315);
            panda$core$String* $tmp2327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2325, &$s2326);
            panda$core$String* $tmp2328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2327, value2318);
            panda$core$String* $tmp2330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2328, &$s2329);
            (($fn2331) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2330);
        }
        }
        else {
        panda$core$Bit $tmp2333 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1334_92284, &$s2332);
        if ($tmp2333.value) {
        {
            panda$core$Int64 $tmp2334 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2334, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2335.value);
            panda$core$Object* $tmp2337 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2338 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2337), p_out);
            panda$core$String* $tmp2339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2336, $tmp2338);
            panda$core$String* $tmp2341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2339, &$s2340);
            (($fn2342) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2341);
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
    org$pandalanguage$pandac$MethodDecl* m2344;
    org$pandalanguage$pandac$Type* actualMethodType2348;
    panda$core$String* actualResultType2349;
    panda$core$Bit isSuper2350;
    panda$collections$Array* args2370;
    panda$core$Int64 offset2373;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2378;
    panda$core$String* arg2393;
    panda$core$String* refTarget2414;
    panda$core$String* methodRef2418;
    panda$core$String* separator2420;
    panda$core$String* indirectVar2424;
    panda$core$String* resultType2428;
    panda$collections$Iterator* a$Iter2452;
    panda$core$String* a2464;
    panda$core$Bit $tmp2343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2343.value);
    m2344 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2346 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2344->owner)->name, &$s2345);
    if ($tmp2346.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    panda$core$Bit $tmp2347 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m2344->owner);
    if ($tmp2347.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2344);
    }
    }
    panda$core$Int64 $tmp2352 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2353 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2352, ((panda$core$Int64) { 1 }));
    bool $tmp2351 = $tmp2353.value;
    if (!$tmp2351) goto $l2354;
    panda$core$Object* $tmp2355 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2355)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2351 = $tmp2356.value;
    $l2354:;
    panda$core$Bit $tmp2357 = { $tmp2351 };
    isSuper2350 = $tmp2357;
    panda$core$Bit $tmp2359 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2350);
    bool $tmp2358 = $tmp2359.value;
    if (!$tmp2358) goto $l2360;
    panda$core$Bit $tmp2361 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2344);
    $tmp2358 = $tmp2361.value;
    $l2360:;
    panda$core$Bit $tmp2362 = { $tmp2358 };
    if ($tmp2362.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2363 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2344);
        actualMethodType2348 = $tmp2363;
        panda$core$Int64 $tmp2364 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2348->subtypes);
        panda$core$Int64 $tmp2365 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2364, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2366 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2348->subtypes, $tmp2365);
        panda$core$String* $tmp2367 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2366));
        actualResultType2349 = $tmp2367;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2368 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2344);
        actualMethodType2348 = $tmp2368;
        panda$core$String* $tmp2369 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2349 = $tmp2369;
    }
    }
    panda$collections$Array* $tmp2371 = (panda$collections$Array*) malloc(40);
    $tmp2371->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2371->refCount.value = 1;
    panda$collections$Array$init($tmp2371);
    args2370 = $tmp2371;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args2370, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2374 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2375 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2348->subtypes);
    panda$core$Int64 $tmp2376 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2374, $tmp2375);
    panda$core$Int64 $tmp2377 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2376, ((panda$core$Int64) { 1 }));
    offset2373 = $tmp2377;
    panda$core$Int64 $tmp2379 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2378, ((panda$core$Int64) { 0 }), $tmp2379, ((panda$core$Bit) { false }));
    int64_t $tmp2381 = $tmp2378.min.value;
    panda$core$Int64 i2380 = { $tmp2381 };
    int64_t $tmp2383 = $tmp2378.max.value;
    bool $tmp2384 = $tmp2378.inclusive.value;
    if ($tmp2384) goto $l2391; else goto $l2392;
    $l2391:;
    if ($tmp2381 <= $tmp2383) goto $l2385; else goto $l2387;
    $l2392:;
    if ($tmp2381 < $tmp2383) goto $l2385; else goto $l2387;
    $l2385:;
    {
        panda$core$Object* $tmp2394 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2380);
        panda$core$String* $tmp2395 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2394), p_out);
        arg2393 = $tmp2395;
        panda$core$Bit $tmp2397 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2380, offset2373);
        bool $tmp2396 = $tmp2397.value;
        if (!$tmp2396) goto $l2398;
        panda$core$Int64 $tmp2399 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2380, offset2373);
        panda$core$Object* $tmp2400 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2348->subtypes, $tmp2399);
        panda$core$Object* $tmp2401 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2380);
        panda$core$Bit $tmp2402 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2400), ((org$pandalanguage$pandac$IRNode*) $tmp2401)->type);
        $tmp2396 = $tmp2402.value;
        $l2398:;
        panda$core$Bit $tmp2403 = { $tmp2396 };
        if ($tmp2403.value) {
        {
            panda$core$Object* $tmp2404 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2380);
            panda$core$Int64 $tmp2405 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2380, offset2373);
            panda$core$Object* $tmp2406 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2348->subtypes, $tmp2405);
            panda$core$String* $tmp2407 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2393, ((org$pandalanguage$pandac$IRNode*) $tmp2404)->type, ((org$pandalanguage$pandac$Type*) $tmp2406), p_out);
            arg2393 = $tmp2407;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2370, ((panda$core$Object*) arg2393));
    }
    $l2388:;
    int64_t $tmp2409 = $tmp2383 - i2380.value;
    if ($tmp2384) goto $l2410; else goto $l2411;
    $l2410:;
    if ((uint64_t) $tmp2409 >= 1) goto $l2408; else goto $l2387;
    $l2411:;
    if ((uint64_t) $tmp2409 > 1) goto $l2408; else goto $l2387;
    $l2408:;
    i2380.value += 1;
    goto $l2385;
    $l2387:;
    panda$core$Int64 $tmp2415 = panda$collections$Array$get_count$R$panda$core$Int64(args2370);
    panda$core$Bit $tmp2416 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2415, ((panda$core$Int64) { 0 }));
    if ($tmp2416.value) {
    {
        panda$core$Object* $tmp2417 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2370, ((panda$core$Int64) { 0 }));
        refTarget2414 = ((panda$core$String*) $tmp2417);
    }
    }
    else {
    {
        refTarget2414 = NULL;
    }
    }
    panda$core$String* $tmp2419 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget2414, m2344, isSuper2350, p_out);
    methodRef2418 = $tmp2419;
    separator2420 = &$s2421;
    panda$core$Bit $tmp2422 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2344);
    if ($tmp2422.value) {
    {
        panda$core$Int64 $tmp2423 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2423;
        panda$core$Int64$wrapper* $tmp2426;
        $tmp2426 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp2426->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp2426->refCount = 1;
        $tmp2426->value = self->varCount;
        panda$core$String* $tmp2427 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2425, ((panda$core$Object*) $tmp2426));
        indirectVar2424 = $tmp2427;
        panda$core$String* $tmp2429 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType2428 = $tmp2429;
        panda$core$String* $tmp2430 = panda$core$String$convert$R$panda$core$String(resultType2428);
        panda$core$String* $tmp2432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2430, &$s2431);
        panda$core$String* $tmp2433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2432, indirectVar2424);
        panda$core$String* $tmp2435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2433, &$s2434);
        (($fn2436) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2435);
        panda$core$String* $tmp2437 = panda$core$String$convert$R$panda$core$String(methodRef2418);
        panda$core$String* $tmp2439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2437, &$s2438);
        panda$core$String* $tmp2440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2439, resultType2428);
        panda$core$String* $tmp2442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2440, &$s2441);
        panda$core$String* $tmp2443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2442, indirectVar2424);
        panda$core$String* $tmp2445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2443, &$s2444);
        (($fn2446) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2445);
        separator2420 = &$s2447;
    }
    }
    else {
    {
        panda$core$String* $tmp2448 = panda$core$String$convert$R$panda$core$String(methodRef2418);
        panda$core$String* $tmp2450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2448, &$s2449);
        (($fn2451) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2450);
    }
    }
    {
        ITable* $tmp2453 = ((panda$collections$Iterable*) args2370)->$class->itable;
        while ($tmp2453->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2453 = $tmp2453->next;
        }
        $fn2455 $tmp2454 = $tmp2453->methods[0];
        panda$collections$Iterator* $tmp2456 = $tmp2454(((panda$collections$Iterable*) args2370));
        a$Iter2452 = $tmp2456;
        $l2457:;
        ITable* $tmp2459 = a$Iter2452->$class->itable;
        while ($tmp2459->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2459 = $tmp2459->next;
        }
        $fn2461 $tmp2460 = $tmp2459->methods[0];
        panda$core$Bit $tmp2462 = $tmp2460(a$Iter2452);
        panda$core$Bit $tmp2463 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2462);
        if (!$tmp2463.value) goto $l2458;
        {
            ITable* $tmp2465 = a$Iter2452->$class->itable;
            while ($tmp2465->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2465 = $tmp2465->next;
            }
            $fn2467 $tmp2466 = $tmp2465->methods[1];
            panda$core$Object* $tmp2468 = $tmp2466(a$Iter2452);
            a2464 = ((panda$core$String*) $tmp2468);
            (($fn2469) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2420);
            (($fn2470) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2464);
            separator2420 = &$s2471;
        }
        goto $l2457;
        $l2458:;
    }
    (($fn2473) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2472);
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test2485;
    panda$core$Bit $tmp2474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp2474.value);
    panda$core$Int64 $tmp2476 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2476, ((panda$core$Int64) { 2 }));
    bool $tmp2475 = $tmp2477.value;
    if ($tmp2475) goto $l2478;
    panda$core$Int64 $tmp2479 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2479, ((panda$core$Int64) { 3 }));
    $tmp2475 = $tmp2480.value;
    $l2478:;
    panda$core$Bit $tmp2481 = { $tmp2475 };
    PANDA_ASSERT($tmp2481.value);
    panda$core$Object* $tmp2482 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2483 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2484 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2482)->type, $tmp2483);
    PANDA_ASSERT($tmp2484.value);
    panda$core$Object* $tmp2486 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2487 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2486), p_out);
    test2485 = $tmp2487;
    panda$core$String* $tmp2489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2488, test2485);
    panda$core$String* $tmp2491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2489, &$s2490);
    (($fn2492) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2491);
    panda$core$Object* $tmp2493 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2493), p_out);
    (($fn2495) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2494);
    panda$core$Int64 $tmp2496 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2496, ((panda$core$Int64) { 3 }));
    if ($tmp2497.value) {
    {
        (($fn2499) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2498);
        panda$core$Object* $tmp2500 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2500), p_out);
        (($fn2502) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2501);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2506;
    panda$core$String* range2517;
    org$pandalanguage$pandac$IRNode* block2520;
    org$pandalanguage$pandac$Type* t2522;
    panda$core$String* llt2525;
    panda$core$String* indexType2527;
    org$pandalanguage$pandac$ClassDecl* cl2533;
    org$pandalanguage$pandac$FieldDecl* field2541;
    panda$core$String* numberType2547;
    panda$core$String* index2550;
    panda$core$String* start2552;
    panda$core$String* indexValuePtr2564;
    panda$core$String* end2578;
    panda$core$String* inclusive2590;
    panda$core$String* loopStart2600;
    panda$core$String* loopBody2602;
    panda$core$String* loopEnd2604;
    panda$core$String* loopTest2606;
    panda$core$String* forwardEntry2610;
    panda$core$String* backwardEntry2612;
    panda$core$String* signPrefix2614;
    panda$core$String* unsigned2615;
    panda$core$String* forwardEntryInclusive2629;
    panda$core$String* forwardEntryExclusive2631;
    panda$core$String* loopInc2673;
    panda$core$String* forwardDelta2675;
    panda$core$String* forwardInclusiveLabel2690;
    panda$core$String* forwardExclusiveLabel2692;
    panda$core$String* forwardExclusiveTest2721;
    panda$core$String* inc2738;
    panda$core$Bit $tmp2503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp2503.value);
    panda$core$Int64 $tmp2504 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp2505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2504, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2505.value);
    panda$core$Object* $tmp2507 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2506 = ((org$pandalanguage$pandac$IRNode*) $tmp2507);
    panda$core$Object* $tmp2508 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2508)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2509.value);
    panda$core$Object* $tmp2510 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2511 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp2510)->type->subtypes);
    panda$core$Bit $tmp2512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2511, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2512.value);
    panda$core$Object* $tmp2513 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2514 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2513)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2516 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2514))->name, &$s2515);
    PANDA_ASSERT($tmp2516.value);
    panda$core$Object* $tmp2518 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2519 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2518), p_out);
    range2517 = $tmp2519;
    panda$core$Object* $tmp2521 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2520 = ((org$pandalanguage$pandac$IRNode*) $tmp2521);
    panda$core$Object* $tmp2523 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2524 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2523)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2522 = ((org$pandalanguage$pandac$Type*) $tmp2524);
    panda$core$String* $tmp2526 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2522);
    llt2525 = $tmp2526;
    panda$core$Bit $tmp2528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2522->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2528.value) {
    {
        panda$core$Int64 $tmp2529 = panda$collections$Array$get_count$R$panda$core$Int64(t2522->subtypes);
        panda$core$Bit $tmp2530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2529, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2530.value);
        panda$core$Object* $tmp2531 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2522->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2532 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2531));
        indexType2527 = $tmp2532;
    }
    }
    else {
    {
        indexType2527 = llt2525;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2534 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2522);
    cl2533 = $tmp2534;
    PANDA_ASSERT(((panda$core$Bit) { cl2533 != NULL }).value);
    panda$collections$ListView* $tmp2535 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2533);
    ITable* $tmp2536 = ((panda$collections$CollectionView*) $tmp2535)->$class->itable;
    while ($tmp2536->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2536 = $tmp2536->next;
    }
    $fn2538 $tmp2537 = $tmp2536->methods[0];
    panda$core$Int64 $tmp2539 = $tmp2537(((panda$collections$CollectionView*) $tmp2535));
    panda$core$Bit $tmp2540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2539, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2540.value);
    panda$collections$ListView* $tmp2542 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2533);
    ITable* $tmp2543 = $tmp2542->$class->itable;
    while ($tmp2543->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2543 = $tmp2543->next;
    }
    $fn2545 $tmp2544 = $tmp2543->methods[0];
    panda$core$Object* $tmp2546 = $tmp2544($tmp2542, ((panda$core$Int64) { 0 }));
    field2541 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2546);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2541);
    panda$core$String* $tmp2548 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2541->type);
    numberType2547 = $tmp2548;
    panda$core$Bit $tmp2549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2506->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2549.value);
    panda$core$String* $tmp2551 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2506->payload));
    index2550 = $tmp2551;
    panda$core$String* $tmp2553 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2552 = $tmp2553;
    panda$core$String* $tmp2554 = panda$core$String$convert$R$panda$core$String(numberType2547);
    panda$core$String* $tmp2556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2554, &$s2555);
    panda$core$String* $tmp2557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2556, start2552);
    panda$core$String* $tmp2559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2557, &$s2558);
    panda$core$String* $tmp2560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2559, range2517);
    panda$core$String* $tmp2562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2560, &$s2561);
    (($fn2563) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2562);
    panda$core$String* $tmp2565 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2564 = $tmp2565;
    org$pandalanguage$pandac$Type* $tmp2566 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2533);
    panda$core$String* $tmp2567 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2566);
    panda$core$String* $tmp2568 = panda$core$String$convert$R$panda$core$String($tmp2567);
    panda$core$String* $tmp2570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2568, &$s2569);
    panda$core$String* $tmp2571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2570, index2550);
    panda$core$String* $tmp2573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2571, &$s2572);
    panda$core$String* $tmp2574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2573, start2552);
    panda$core$String* $tmp2576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2574, &$s2575);
    (($fn2577) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2576);
    panda$core$String* $tmp2579 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2578 = $tmp2579;
    panda$core$String* $tmp2580 = panda$core$String$convert$R$panda$core$String(numberType2547);
    panda$core$String* $tmp2582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2580, &$s2581);
    panda$core$String* $tmp2583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2582, end2578);
    panda$core$String* $tmp2585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2583, &$s2584);
    panda$core$String* $tmp2586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2585, range2517);
    panda$core$String* $tmp2588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2586, &$s2587);
    (($fn2589) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2588);
    panda$core$String* $tmp2591 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2590 = $tmp2591;
    panda$core$String* $tmp2593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2592, inclusive2590);
    panda$core$String* $tmp2595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2593, &$s2594);
    panda$core$String* $tmp2596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2595, range2517);
    panda$core$String* $tmp2598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2596, &$s2597);
    (($fn2599) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2598);
    panda$core$String* $tmp2601 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2600 = $tmp2601;
    panda$core$String* $tmp2603 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2602 = $tmp2603;
    panda$core$String* $tmp2605 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2604 = $tmp2605;
    panda$core$String* $tmp2607 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2606 = $tmp2607;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2608 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2608->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2608->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2608, ((panda$core$String*) p_f->payload), loopEnd2604, loopTest2606);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2608));
    panda$core$String* $tmp2611 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2610 = $tmp2611;
    panda$core$String* $tmp2613 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2612 = $tmp2613;
    panda$core$Bit $tmp2617 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2522)->name, &$s2616);
    if ($tmp2617.value) {
    {
        signPrefix2614 = &$s2618;
        panda$core$String* $tmp2620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2619, numberType2547);
        unsigned2615 = $tmp2620;
    }
    }
    else {
    {
        panda$core$Bit $tmp2623 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2522)->name, &$s2622);
        bool $tmp2621 = $tmp2623.value;
        if ($tmp2621) goto $l2624;
        panda$core$Bit $tmp2626 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2522)->name, &$s2625);
        $tmp2621 = $tmp2626.value;
        $l2624:;
        panda$core$Bit $tmp2627 = { $tmp2621 };
        PANDA_ASSERT($tmp2627.value);
        signPrefix2614 = &$s2628;
        unsigned2615 = numberType2547;
    }
    }
    panda$core$String* $tmp2630 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2629 = $tmp2630;
    panda$core$String* $tmp2632 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2631 = $tmp2632;
    panda$core$String* $tmp2634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2633, inclusive2590);
    panda$core$String* $tmp2636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2634, &$s2635);
    panda$core$String* $tmp2637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2636, forwardEntryInclusive2629);
    panda$core$String* $tmp2639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2637, &$s2638);
    panda$core$String* $tmp2640 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive2631);
    panda$core$String* $tmp2642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2640, &$s2641);
    panda$core$String* $tmp2643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2639, $tmp2642);
    (($fn2644) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2643);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2629, p_out);
    panda$core$String* $tmp2646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2645, start2552);
    panda$core$String* $tmp2648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2646, &$s2647);
    panda$core$String* $tmp2649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2648, end2578);
    panda$core$String* $tmp2651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2649, &$s2650);
    panda$core$String* $tmp2652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2651, loopStart2600);
    panda$core$String* $tmp2654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2652, &$s2653);
    panda$core$String* $tmp2655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2654, loopEnd2604);
    panda$core$String* $tmp2657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2655, &$s2656);
    (($fn2658) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2657);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2631, p_out);
    panda$core$String* $tmp2660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2659, start2552);
    panda$core$String* $tmp2662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2660, &$s2661);
    panda$core$String* $tmp2663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2662, end2578);
    panda$core$String* $tmp2665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2663, &$s2664);
    panda$core$String* $tmp2666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2665, loopStart2600);
    panda$core$String* $tmp2668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2666, &$s2667);
    panda$core$String* $tmp2669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2668, loopEnd2604);
    panda$core$String* $tmp2671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2669, &$s2670);
    (($fn2672) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2671);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2600, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2520, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2606, p_out);
    panda$core$String* $tmp2674 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2673 = $tmp2674;
    panda$core$String* $tmp2676 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2675 = $tmp2676;
    panda$core$String* $tmp2677 = panda$core$String$convert$R$panda$core$String(numberType2547);
    panda$core$String* $tmp2679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2677, &$s2678);
    panda$core$String* $tmp2680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2679, forwardDelta2675);
    panda$core$String* $tmp2682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2680, &$s2681);
    panda$core$String* $tmp2683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2682, end2578);
    panda$core$String* $tmp2685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2683, &$s2684);
    panda$core$String* $tmp2686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2685, index2550);
    panda$core$String* $tmp2688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2686, &$s2687);
    (($fn2689) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2688);
    panda$core$String* $tmp2691 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2690 = $tmp2691;
    panda$core$String* $tmp2693 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2692 = $tmp2693;
    panda$core$String* $tmp2695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2694, inclusive2590);
    panda$core$String* $tmp2697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2695, &$s2696);
    panda$core$String* $tmp2698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2697, forwardInclusiveLabel2690);
    panda$core$String* $tmp2700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2698, &$s2699);
    panda$core$String* $tmp2701 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel2692);
    panda$core$String* $tmp2703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2701, &$s2702);
    panda$core$String* $tmp2704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2700, $tmp2703);
    (($fn2705) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2704);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2690, p_out);
    panda$core$String* $tmp2707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2706, unsigned2615);
    panda$core$String* $tmp2709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2707, &$s2708);
    panda$core$String* $tmp2710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2709, forwardDelta2675);
    panda$core$String* $tmp2712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2710, &$s2711);
    panda$core$String* $tmp2713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2712, loopInc2673);
    panda$core$String* $tmp2715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2713, &$s2714);
    panda$core$String* $tmp2716 = panda$core$String$convert$R$panda$core$String(loopEnd2604);
    panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2716, &$s2717);
    panda$core$String* $tmp2719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2715, $tmp2718);
    (($fn2720) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2719);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2692, p_out);
    panda$core$String* $tmp2722 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2721 = $tmp2722;
    panda$core$String* $tmp2724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2723, unsigned2615);
    panda$core$String* $tmp2726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2724, &$s2725);
    panda$core$String* $tmp2727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2726, forwardDelta2675);
    panda$core$String* $tmp2729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2727, &$s2728);
    panda$core$String* $tmp2730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2729, loopInc2673);
    panda$core$String* $tmp2732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2730, &$s2731);
    panda$core$String* $tmp2733 = panda$core$String$convert$R$panda$core$String(loopEnd2604);
    panda$core$String* $tmp2735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2733, &$s2734);
    panda$core$String* $tmp2736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2732, $tmp2735);
    (($fn2737) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2736);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2673, p_out);
    panda$core$String* $tmp2739 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc2738 = $tmp2739;
    panda$core$String* $tmp2740 = panda$core$String$convert$R$panda$core$String(index2550);
    panda$core$String* $tmp2742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2740, &$s2741);
    (($fn2743) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2742);
    panda$core$String* $tmp2745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2744, loopStart2600);
    panda$core$String* $tmp2747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2745, &$s2746);
    (($fn2748) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2747);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2604, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2752;
    panda$core$String* range2763;
    org$pandalanguage$pandac$IRNode* block2766;
    org$pandalanguage$pandac$Type* t2768;
    org$pandalanguage$pandac$Type* stepType2771;
    panda$core$String* llt2774;
    panda$core$String* indexType2776;
    org$pandalanguage$pandac$ClassDecl* cl2782;
    org$pandalanguage$pandac$FieldDecl* field2790;
    panda$core$String* numberType2796;
    panda$core$String* index2799;
    panda$core$String* start2801;
    panda$core$String* indexValuePtr2813;
    panda$core$String* end2827;
    panda$core$String* step2839;
    org$pandalanguage$pandac$ClassDecl* stepCl2841;
    org$pandalanguage$pandac$FieldDecl* stepField2849;
    panda$core$String* inclusive2866;
    panda$core$String* loopStart2876;
    panda$core$String* loopBody2878;
    panda$core$String* loopEnd2880;
    panda$core$String* loopTest2882;
    panda$core$String* forwardEntry2886;
    panda$core$String* backwardEntry2888;
    panda$core$String* unsigned2890;
    panda$core$String* signPrefix2891;
    panda$core$String* direction2905;
    panda$core$String* forwardEntryInclusive2929;
    panda$core$String* forwardEntryExclusive2931;
    panda$core$String* backwardEntryInclusive2973;
    panda$core$String* backwardEntryExclusive2975;
    panda$core$String* backwardEntryExclusiveTest3003;
    panda$core$String* loopInc3019;
    panda$core$String* forwardLabel3021;
    panda$core$String* backwardLabel3023;
    panda$core$String* forwardDelta3036;
    panda$core$String* forwardInclusiveLabel3051;
    panda$core$String* forwardExclusiveLabel3053;
    panda$core$String* forwardExclusiveTest3085;
    panda$core$String* backwardDelta3105;
    panda$core$String* backwardInclusiveLabel3120;
    panda$core$String* backwardExclusiveLabel3122;
    panda$core$String* inc3174;
    panda$core$Bit $tmp2749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp2749.value);
    panda$core$Int64 $tmp2750 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp2751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2750, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2751.value);
    panda$core$Object* $tmp2753 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2752 = ((org$pandalanguage$pandac$IRNode*) $tmp2753);
    panda$core$Object* $tmp2754 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2754)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2755.value);
    panda$core$Object* $tmp2756 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2757 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp2756)->type->subtypes);
    panda$core$Bit $tmp2758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2757, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2758.value);
    panda$core$Object* $tmp2759 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2760 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2759)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2762 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2760))->name, &$s2761);
    PANDA_ASSERT($tmp2762.value);
    panda$core$Object* $tmp2764 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2765 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2764), p_out);
    range2763 = $tmp2765;
    panda$core$Object* $tmp2767 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2766 = ((org$pandalanguage$pandac$IRNode*) $tmp2767);
    panda$core$Object* $tmp2769 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2770 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2769)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2768 = ((org$pandalanguage$pandac$Type*) $tmp2770);
    panda$core$Object* $tmp2772 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2773 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2772)->type->subtypes, ((panda$core$Int64) { 2 }));
    stepType2771 = ((org$pandalanguage$pandac$Type*) $tmp2773);
    panda$core$String* $tmp2775 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2768);
    llt2774 = $tmp2775;
    panda$core$Bit $tmp2777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2768->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2777.value) {
    {
        panda$core$Int64 $tmp2778 = panda$collections$Array$get_count$R$panda$core$Int64(t2768->subtypes);
        panda$core$Bit $tmp2779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2778, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2779.value);
        panda$core$Object* $tmp2780 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2768->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2781 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2780));
        indexType2776 = $tmp2781;
    }
    }
    else {
    {
        indexType2776 = llt2774;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2783 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2768);
    cl2782 = $tmp2783;
    PANDA_ASSERT(((panda$core$Bit) { cl2782 != NULL }).value);
    panda$collections$ListView* $tmp2784 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2782);
    ITable* $tmp2785 = ((panda$collections$CollectionView*) $tmp2784)->$class->itable;
    while ($tmp2785->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2785 = $tmp2785->next;
    }
    $fn2787 $tmp2786 = $tmp2785->methods[0];
    panda$core$Int64 $tmp2788 = $tmp2786(((panda$collections$CollectionView*) $tmp2784));
    panda$core$Bit $tmp2789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2788, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2789.value);
    panda$collections$ListView* $tmp2791 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2782);
    ITable* $tmp2792 = $tmp2791->$class->itable;
    while ($tmp2792->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2792 = $tmp2792->next;
    }
    $fn2794 $tmp2793 = $tmp2792->methods[0];
    panda$core$Object* $tmp2795 = $tmp2793($tmp2791, ((panda$core$Int64) { 0 }));
    field2790 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2795);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2790);
    panda$core$String* $tmp2797 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2790->type);
    numberType2796 = $tmp2797;
    panda$core$Bit $tmp2798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2752->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2798.value);
    panda$core$String* $tmp2800 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2752->payload));
    index2799 = $tmp2800;
    panda$core$String* $tmp2802 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2801 = $tmp2802;
    panda$core$String* $tmp2803 = panda$core$String$convert$R$panda$core$String(numberType2796);
    panda$core$String* $tmp2805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2803, &$s2804);
    panda$core$String* $tmp2806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2805, start2801);
    panda$core$String* $tmp2808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2806, &$s2807);
    panda$core$String* $tmp2809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2808, range2763);
    panda$core$String* $tmp2811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2809, &$s2810);
    (($fn2812) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2811);
    panda$core$String* $tmp2814 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2813 = $tmp2814;
    org$pandalanguage$pandac$Type* $tmp2815 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2782);
    panda$core$String* $tmp2816 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2815);
    panda$core$String* $tmp2817 = panda$core$String$convert$R$panda$core$String($tmp2816);
    panda$core$String* $tmp2819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2817, &$s2818);
    panda$core$String* $tmp2820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2819, index2799);
    panda$core$String* $tmp2822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2820, &$s2821);
    panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2822, start2801);
    panda$core$String* $tmp2825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2823, &$s2824);
    (($fn2826) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2825);
    panda$core$String* $tmp2828 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2827 = $tmp2828;
    panda$core$String* $tmp2829 = panda$core$String$convert$R$panda$core$String(numberType2796);
    panda$core$String* $tmp2831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2829, &$s2830);
    panda$core$String* $tmp2832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2831, end2827);
    panda$core$String* $tmp2834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2832, &$s2833);
    panda$core$String* $tmp2835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2834, range2763);
    panda$core$String* $tmp2837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2835, &$s2836);
    (($fn2838) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2837);
    panda$core$String* $tmp2840 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    step2839 = $tmp2840;
    org$pandalanguage$pandac$ClassDecl* $tmp2842 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, stepType2771);
    stepCl2841 = $tmp2842;
    PANDA_ASSERT(((panda$core$Bit) { stepCl2841 != NULL }).value);
    panda$collections$ListView* $tmp2843 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, stepCl2841);
    ITable* $tmp2844 = ((panda$collections$CollectionView*) $tmp2843)->$class->itable;
    while ($tmp2844->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2844 = $tmp2844->next;
    }
    $fn2846 $tmp2845 = $tmp2844->methods[0];
    panda$core$Int64 $tmp2847 = $tmp2845(((panda$collections$CollectionView*) $tmp2843));
    panda$core$Bit $tmp2848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2847, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2848.value);
    panda$collections$ListView* $tmp2850 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, stepCl2841);
    ITable* $tmp2851 = $tmp2850->$class->itable;
    while ($tmp2851->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2851 = $tmp2851->next;
    }
    $fn2853 $tmp2852 = $tmp2851->methods[0];
    panda$core$Object* $tmp2854 = $tmp2852($tmp2850, ((panda$core$Int64) { 0 }));
    stepField2849 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2854);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, stepField2849);
    panda$core$String* $tmp2855 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, stepField2849->type);
    panda$core$String* $tmp2856 = panda$core$String$convert$R$panda$core$String($tmp2855);
    panda$core$String* $tmp2858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2856, &$s2857);
    panda$core$String* $tmp2859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2858, step2839);
    panda$core$String* $tmp2861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2859, &$s2860);
    panda$core$String* $tmp2862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2861, range2763);
    panda$core$String* $tmp2864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2862, &$s2863);
    (($fn2865) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2864);
    panda$core$String* $tmp2867 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2866 = $tmp2867;
    panda$core$String* $tmp2869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2868, inclusive2866);
    panda$core$String* $tmp2871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2869, &$s2870);
    panda$core$String* $tmp2872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2871, range2763);
    panda$core$String* $tmp2874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2872, &$s2873);
    (($fn2875) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2874);
    panda$core$String* $tmp2877 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2876 = $tmp2877;
    panda$core$String* $tmp2879 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2878 = $tmp2879;
    panda$core$String* $tmp2881 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2880 = $tmp2881;
    panda$core$String* $tmp2883 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2882 = $tmp2883;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2884 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2884->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2884->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2884, ((panda$core$String*) p_f->payload), loopEnd2880, loopTest2882);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2884));
    panda$core$String* $tmp2887 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2886 = $tmp2887;
    panda$core$String* $tmp2889 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2888 = $tmp2889;
    panda$core$Bit $tmp2893 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2771)->name, &$s2892);
    if ($tmp2893.value) {
    {
        signPrefix2891 = &$s2894;
        panda$core$String* $tmp2896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2895, numberType2796);
        unsigned2890 = $tmp2896;
    }
    }
    else {
    {
        panda$core$Bit $tmp2899 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2771)->name, &$s2898);
        bool $tmp2897 = $tmp2899.value;
        if ($tmp2897) goto $l2900;
        panda$core$Bit $tmp2902 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2771)->name, &$s2901);
        $tmp2897 = $tmp2902.value;
        $l2900:;
        panda$core$Bit $tmp2903 = { $tmp2897 };
        PANDA_ASSERT($tmp2903.value);
        signPrefix2891 = &$s2904;
        unsigned2890 = numberType2796;
    }
    }
    panda$core$Bit $tmp2907 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix2891, &$s2906);
    if ($tmp2907.value) {
    {
        panda$core$String* $tmp2908 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
        direction2905 = $tmp2908;
        panda$core$String* $tmp2910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2909, direction2905);
        panda$core$String* $tmp2912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2910, &$s2911);
        panda$core$String* $tmp2913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2912, step2839);
        panda$core$String* $tmp2915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2913, &$s2914);
        (($fn2916) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2915);
    }
    }
    else {
    {
        direction2905 = &$s2917;
    }
    }
    panda$core$String* $tmp2919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2918, direction2905);
    panda$core$String* $tmp2921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2919, &$s2920);
    panda$core$String* $tmp2922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2921, forwardEntry2886);
    panda$core$String* $tmp2924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2922, &$s2923);
    panda$core$String* $tmp2925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2924, backwardEntry2888);
    panda$core$String* $tmp2927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2925, &$s2926);
    (($fn2928) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2927);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry2886, p_out);
    panda$core$String* $tmp2930 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2929 = $tmp2930;
    panda$core$String* $tmp2932 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2931 = $tmp2932;
    panda$core$String* $tmp2934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2933, inclusive2866);
    panda$core$String* $tmp2936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2934, &$s2935);
    panda$core$String* $tmp2937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2936, forwardEntryInclusive2929);
    panda$core$String* $tmp2939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2937, &$s2938);
    panda$core$String* $tmp2940 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive2931);
    panda$core$String* $tmp2942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2940, &$s2941);
    panda$core$String* $tmp2943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2939, $tmp2942);
    (($fn2944) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2943);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2929, p_out);
    panda$core$String* $tmp2946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2945, start2801);
    panda$core$String* $tmp2948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2946, &$s2947);
    panda$core$String* $tmp2949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2948, end2827);
    panda$core$String* $tmp2951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2949, &$s2950);
    panda$core$String* $tmp2952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2951, loopStart2876);
    panda$core$String* $tmp2954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2952, &$s2953);
    panda$core$String* $tmp2955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2954, loopEnd2880);
    panda$core$String* $tmp2957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2955, &$s2956);
    (($fn2958) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2957);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2931, p_out);
    panda$core$String* $tmp2960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2959, start2801);
    panda$core$String* $tmp2962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2960, &$s2961);
    panda$core$String* $tmp2963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2962, end2827);
    panda$core$String* $tmp2965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2963, &$s2964);
    panda$core$String* $tmp2966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2965, loopStart2876);
    panda$core$String* $tmp2968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2966, &$s2967);
    panda$core$String* $tmp2969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2968, loopEnd2880);
    panda$core$String* $tmp2971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2969, &$s2970);
    (($fn2972) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2971);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry2888, p_out);
    panda$core$String* $tmp2974 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive2973 = $tmp2974;
    panda$core$String* $tmp2976 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive2975 = $tmp2976;
    panda$core$String* $tmp2978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2977, inclusive2866);
    panda$core$String* $tmp2980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2978, &$s2979);
    panda$core$String* $tmp2981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2980, backwardEntryInclusive2973);
    panda$core$String* $tmp2983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2981, &$s2982);
    panda$core$String* $tmp2984 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusive2975);
    panda$core$String* $tmp2986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2984, &$s2985);
    panda$core$String* $tmp2987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2983, $tmp2986);
    (($fn2988) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2987);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive2973, p_out);
    panda$core$String* $tmp2990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2989, start2801);
    panda$core$String* $tmp2992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2990, &$s2991);
    panda$core$String* $tmp2993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2992, end2827);
    panda$core$String* $tmp2995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2993, &$s2994);
    panda$core$String* $tmp2996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2995, loopStart2876);
    panda$core$String* $tmp2998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2996, &$s2997);
    panda$core$String* $tmp2999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2998, loopEnd2880);
    panda$core$String* $tmp3001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2999, &$s3000);
    (($fn3002) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3001);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive2975, p_out);
    panda$core$String* $tmp3004 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest3003 = $tmp3004;
    panda$core$String* $tmp3006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3005, start2801);
    panda$core$String* $tmp3008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3006, &$s3007);
    panda$core$String* $tmp3009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3008, end2827);
    panda$core$String* $tmp3011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3009, &$s3010);
    panda$core$String* $tmp3012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3011, loopStart2876);
    panda$core$String* $tmp3014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3012, &$s3013);
    panda$core$String* $tmp3015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3014, loopEnd2880);
    panda$core$String* $tmp3017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3015, &$s3016);
    (($fn3018) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3017);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2876, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2766, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2882, p_out);
    panda$core$String* $tmp3020 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc3019 = $tmp3020;
    panda$core$String* $tmp3022 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel3021 = $tmp3022;
    panda$core$String* $tmp3024 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel3023 = $tmp3024;
    panda$core$String* $tmp3026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3025, direction2905);
    panda$core$String* $tmp3028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3026, &$s3027);
    panda$core$String* $tmp3029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3028, forwardLabel3021);
    panda$core$String* $tmp3031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3029, &$s3030);
    panda$core$String* $tmp3032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3031, backwardLabel3023);
    panda$core$String* $tmp3034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3032, &$s3033);
    (($fn3035) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3034);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel3021, p_out);
    panda$core$String* $tmp3037 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta3036 = $tmp3037;
    panda$core$String* $tmp3038 = panda$core$String$convert$R$panda$core$String(numberType2796);
    panda$core$String* $tmp3040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3038, &$s3039);
    panda$core$String* $tmp3041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3040, forwardDelta3036);
    panda$core$String* $tmp3043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3041, &$s3042);
    panda$core$String* $tmp3044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3043, end2827);
    panda$core$String* $tmp3046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3044, &$s3045);
    panda$core$String* $tmp3047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3046, index2799);
    panda$core$String* $tmp3049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3047, &$s3048);
    (($fn3050) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3049);
    panda$core$String* $tmp3052 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel3051 = $tmp3052;
    panda$core$String* $tmp3054 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel3053 = $tmp3054;
    panda$core$String* $tmp3056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3055, inclusive2866);
    panda$core$String* $tmp3058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3056, &$s3057);
    panda$core$String* $tmp3059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3058, forwardInclusiveLabel3051);
    panda$core$String* $tmp3061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3059, &$s3060);
    panda$core$String* $tmp3062 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel3053);
    panda$core$String* $tmp3064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3062, &$s3063);
    panda$core$String* $tmp3065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3061, $tmp3064);
    (($fn3066) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3065);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel3051, p_out);
    panda$core$String* $tmp3068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3067, unsigned2890);
    panda$core$String* $tmp3070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3068, &$s3069);
    panda$core$String* $tmp3071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3070, forwardDelta3036);
    panda$core$String* $tmp3073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3071, &$s3072);
    panda$core$String* $tmp3074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3073, step2839);
    panda$core$String* $tmp3076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3074, &$s3075);
    panda$core$String* $tmp3077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3076, loopInc3019);
    panda$core$String* $tmp3079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3077, &$s3078);
    panda$core$String* $tmp3080 = panda$core$String$convert$R$panda$core$String(loopEnd2880);
    panda$core$String* $tmp3082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3080, &$s3081);
    panda$core$String* $tmp3083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3079, $tmp3082);
    (($fn3084) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3083);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel3053, p_out);
    panda$core$String* $tmp3086 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest3085 = $tmp3086;
    panda$core$String* $tmp3088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3087, unsigned2890);
    panda$core$String* $tmp3090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3088, &$s3089);
    panda$core$String* $tmp3091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3090, forwardDelta3036);
    panda$core$String* $tmp3093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3091, &$s3092);
    panda$core$String* $tmp3094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3093, step2839);
    panda$core$String* $tmp3096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3094, &$s3095);
    panda$core$String* $tmp3097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3096, loopInc3019);
    panda$core$String* $tmp3099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3097, &$s3098);
    panda$core$String* $tmp3100 = panda$core$String$convert$R$panda$core$String(loopEnd2880);
    panda$core$String* $tmp3102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3100, &$s3101);
    panda$core$String* $tmp3103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3099, $tmp3102);
    (($fn3104) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3103);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel3023, p_out);
    panda$core$String* $tmp3106 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta3105 = $tmp3106;
    panda$core$String* $tmp3107 = panda$core$String$convert$R$panda$core$String(numberType2796);
    panda$core$String* $tmp3109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3107, &$s3108);
    panda$core$String* $tmp3110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3109, backwardDelta3105);
    panda$core$String* $tmp3112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3110, &$s3111);
    panda$core$String* $tmp3113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3112, index2799);
    panda$core$String* $tmp3115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3113, &$s3114);
    panda$core$String* $tmp3116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3115, end2827);
    panda$core$String* $tmp3118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3116, &$s3117);
    (($fn3119) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3118);
    panda$core$String* $tmp3121 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel3120 = $tmp3121;
    panda$core$String* $tmp3123 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel3122 = $tmp3123;
    panda$core$String* $tmp3125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3124, inclusive2866);
    panda$core$String* $tmp3127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3125, &$s3126);
    panda$core$String* $tmp3128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3127, backwardInclusiveLabel3120);
    panda$core$String* $tmp3130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3128, &$s3129);
    panda$core$String* $tmp3131 = panda$core$String$convert$R$panda$core$String(backwardExclusiveLabel3122);
    panda$core$String* $tmp3133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3131, &$s3132);
    panda$core$String* $tmp3134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3130, $tmp3133);
    (($fn3135) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3134);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel3120, p_out);
    panda$core$String* $tmp3137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3136, unsigned2890);
    panda$core$String* $tmp3139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3137, &$s3138);
    panda$core$String* $tmp3140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3139, backwardDelta3105);
    panda$core$String* $tmp3142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3140, &$s3141);
    panda$core$String* $tmp3143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3142, step2839);
    panda$core$String* $tmp3145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3143, &$s3144);
    panda$core$String* $tmp3146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3145, loopInc3019);
    panda$core$String* $tmp3148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3146, &$s3147);
    panda$core$String* $tmp3150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3149, loopEnd2880);
    panda$core$String* $tmp3152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3150, &$s3151);
    panda$core$String* $tmp3153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3148, $tmp3152);
    (($fn3154) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3153);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel3122, p_out);
    panda$core$String* $tmp3156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3155, unsigned2890);
    panda$core$String* $tmp3158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3156, &$s3157);
    panda$core$String* $tmp3159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3158, backwardDelta3105);
    panda$core$String* $tmp3161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3159, &$s3160);
    panda$core$String* $tmp3162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3161, step2839);
    panda$core$String* $tmp3164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3162, &$s3163);
    panda$core$String* $tmp3165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3164, loopInc3019);
    panda$core$String* $tmp3167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3165, &$s3166);
    panda$core$String* $tmp3169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3168, loopEnd2880);
    panda$core$String* $tmp3171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3169, &$s3170);
    panda$core$String* $tmp3172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3167, $tmp3171);
    (($fn3173) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3172);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc3019, p_out);
    panda$core$String* $tmp3175 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc3174 = $tmp3175;
    panda$core$String* $tmp3176 = panda$core$String$convert$R$panda$core$String(index2799);
    panda$core$String* $tmp3178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3176, &$s3177);
    panda$core$String* $tmp3179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3178, step2839);
    panda$core$String* $tmp3181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3179, &$s3180);
    (($fn3182) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3181);
    panda$core$String* $tmp3184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3183, loopStart2876);
    panda$core$String* $tmp3186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3184, &$s3185);
    (($fn3187) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3186);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2880, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    panda$core$Object* $tmp3188 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3189 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3188)->type);
    if ($tmp3189.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp3190 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3191 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3190)->type);
    if ($tmp3191.value) {
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
    panda$core$String* loopStart3198;
    panda$core$String* loopEnd3200;
    panda$core$Bit $tmp3192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp3192.value);
    panda$core$Int64 $tmp3193 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3193, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3194.value);
    panda$core$Object* $tmp3195 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3196 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3197 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3195)->type, $tmp3196);
    PANDA_ASSERT($tmp3197.value);
    panda$core$String* $tmp3199 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3198 = $tmp3199;
    panda$core$String* $tmp3201 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3200 = $tmp3201;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3202 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3202->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3202->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3202, ((panda$core$String*) p_w->payload), loopEnd3200, loopStart3198);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3202));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3198, p_out);
    panda$core$Object* $tmp3205 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3206 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3205), p_out);
    panda$core$String* $tmp3207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3204, $tmp3206);
    panda$core$String* $tmp3209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3207, &$s3208);
    panda$core$String* $tmp3210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3209, loopEnd3200);
    panda$core$String* $tmp3212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3210, &$s3211);
    (($fn3213) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3212);
    panda$core$Object* $tmp3214 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3214), p_out);
    panda$core$String* $tmp3216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3215, loopStart3198);
    panda$core$String* $tmp3218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3216, &$s3217);
    (($fn3219) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3218);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3200, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3226;
    panda$core$String* loopEnd3228;
    panda$core$Bit $tmp3220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp3220.value);
    panda$core$Int64 $tmp3221 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3221, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3222.value);
    panda$core$Object* $tmp3223 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3224 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3225 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3223)->type, $tmp3224);
    PANDA_ASSERT($tmp3225.value);
    panda$core$String* $tmp3227 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3226 = $tmp3227;
    panda$core$String* $tmp3229 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3228 = $tmp3229;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3230 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3230->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3230->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3230, ((panda$core$String*) p_d->payload), loopEnd3228, loopStart3226);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3230));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3226, p_out);
    panda$core$Object* $tmp3232 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3232), p_out);
    panda$core$Object* $tmp3234 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3235 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3234), p_out);
    panda$core$String* $tmp3236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3233, $tmp3235);
    panda$core$String* $tmp3238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3236, &$s3237);
    panda$core$String* $tmp3239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3238, loopStart3226);
    panda$core$String* $tmp3241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3239, &$s3240);
    (($fn3242) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3241);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3228, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3246;
    panda$core$String* loopEnd3248;
    panda$core$Bit $tmp3243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp3243.value);
    panda$core$Int64 $tmp3244 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3244, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3245.value);
    panda$core$String* $tmp3247 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3246 = $tmp3247;
    panda$core$String* $tmp3249 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3248 = $tmp3249;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3250 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3250->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3250->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3250, ((panda$core$String*) p_l->payload), loopEnd3248, loopStart3246);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3250));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3246, p_out);
    (($fn3253) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3252);
    panda$core$Object* $tmp3254 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3254), p_out);
    (($fn3256) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3255);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3248, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v3257;
    switch (p_target->kind.value) {
        case 1016:
        {
            v3257 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp3258 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v3257->type);
            panda$core$String* $tmp3259 = panda$core$String$convert$R$panda$core$String($tmp3258);
            panda$core$String* $tmp3261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3259, &$s3260);
            panda$core$String* $tmp3262 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3257);
            panda$core$String* $tmp3263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3261, $tmp3262);
            panda$core$String* $tmp3265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3263, &$s3264);
            (($fn3266) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3265);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp3267 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3257);
                panda$core$String* $tmp3268 = panda$core$String$convert$R$panda$core$String($tmp3267);
                panda$core$String* $tmp3270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3268, &$s3269);
                panda$core$String* $tmp3271 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp3272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3270, $tmp3271);
                panda$core$String* $tmp3274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3272, &$s3273);
                (($fn3275) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3274);
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
    panda$collections$Iterator* decl$Iter3289;
    org$pandalanguage$pandac$IRNode* decl3301;
    panda$core$Bit $tmp3279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp3278 = $tmp3279.value;
    if ($tmp3278) goto $l3280;
    panda$core$Bit $tmp3281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp3278 = $tmp3281.value;
    $l3280:;
    panda$core$Bit $tmp3282 = { $tmp3278 };
    bool $tmp3277 = $tmp3282.value;
    if ($tmp3277) goto $l3283;
    panda$core$Bit $tmp3284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp3277 = $tmp3284.value;
    $l3283:;
    panda$core$Bit $tmp3285 = { $tmp3277 };
    bool $tmp3276 = $tmp3285.value;
    if ($tmp3276) goto $l3286;
    panda$core$Bit $tmp3287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp3276 = $tmp3287.value;
    $l3286:;
    panda$core$Bit $tmp3288 = { $tmp3276 };
    PANDA_ASSERT($tmp3288.value);
    {
        ITable* $tmp3290 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3290->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3290 = $tmp3290->next;
        }
        $fn3292 $tmp3291 = $tmp3290->methods[0];
        panda$collections$Iterator* $tmp3293 = $tmp3291(((panda$collections$Iterable*) p_v->children));
        decl$Iter3289 = $tmp3293;
        $l3294:;
        ITable* $tmp3296 = decl$Iter3289->$class->itable;
        while ($tmp3296->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3296 = $tmp3296->next;
        }
        $fn3298 $tmp3297 = $tmp3296->methods[0];
        panda$core$Bit $tmp3299 = $tmp3297(decl$Iter3289);
        panda$core$Bit $tmp3300 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3299);
        if (!$tmp3300.value) goto $l3295;
        {
            ITable* $tmp3302 = decl$Iter3289->$class->itable;
            while ($tmp3302->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3302 = $tmp3302->next;
            }
            $fn3304 $tmp3303 = $tmp3302->methods[1];
            panda$core$Object* $tmp3305 = $tmp3303(decl$Iter3289);
            decl3301 = ((org$pandalanguage$pandac$IRNode*) $tmp3305);
            panda$core$Bit $tmp3306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl3301->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp3306.value);
            panda$core$Int64 $tmp3307 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(decl3301->children);
            panda$core$Bit $tmp3308 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3307, ((panda$core$Int64) { 1 }));
            if ($tmp3308.value) {
            {
                panda$core$Object* $tmp3309 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl3301->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp3310 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl3301->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3309), ((org$pandalanguage$pandac$IRNode*) $tmp3310), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp3311 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl3301->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3311), NULL, p_out);
            }
            }
        }
        goto $l3294;
        $l3295:;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3315;
    panda$core$String* result3324;
    org$pandalanguage$pandac$Pair* f3333;
    org$pandalanguage$pandac$ChoiceEntry* c3334;
    org$pandalanguage$pandac$FieldDecl* data3335;
    org$pandalanguage$pandac$IRNode* fieldRef3339;
    panda$core$String* base3342;
    panda$core$Int64 size3344;
    panda$core$Int64 offset3346;
    panda$core$String* result3348;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp3312 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp3313 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp3312, p_out);
            return $tmp3313;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp3314 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp3314;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp3316 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3317 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3316), p_out);
            base3315 = $tmp3317;
            panda$core$String* $tmp3318 = panda$core$String$convert$R$panda$core$String(base3315);
            panda$core$String* $tmp3320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3318, &$s3319);
            panda$core$String* $tmp3321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3320, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name);
            panda$core$String* $tmp3323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3321, &$s3322);
            return $tmp3323;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp3325 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3326 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3325), p_out);
            result3324 = $tmp3326;
            panda$core$UInt64$wrapper* $tmp3327;
            $tmp3327 = (panda$core$UInt64$wrapper*) malloc(24);
            $tmp3327->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
            $tmp3327->refCount = 1;
            $tmp3327->value = ((panda$core$UInt64$wrapper*) p_lvalue->payload)->value;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) $tmp3327), ((panda$core$Object*) result3324));
            return result3324;
        }
        break;
        case 1047:
        {
            bool $tmp3328 = ((panda$core$Bit) { p_lvalue->children != NULL }).value;
            if (!$tmp3328) goto $l3329;
            panda$core$Int64 $tmp3330 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_lvalue->children);
            panda$core$Bit $tmp3331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3330, ((panda$core$Int64) { 1 }));
            $tmp3328 = $tmp3331.value;
            $l3329:;
            panda$core$Bit $tmp3332 = { $tmp3328 };
            PANDA_ASSERT($tmp3332.value);
            f3333 = ((org$pandalanguage$pandac$Pair*) p_lvalue->payload);
            c3334 = ((org$pandalanguage$pandac$ChoiceEntry*) f3333->first);
            panda$core$Object* $tmp3336 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(c3334->owner->fields, ((panda$core$Int64) { 1 }));
            data3335 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3336);
            panda$core$Bit $tmp3338 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) data3335)->name, &$s3337);
            PANDA_ASSERT($tmp3338.value);
            org$pandalanguage$pandac$IRNode* $tmp3340 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3340->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3340->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3340, ((panda$core$Int64) { 1026 }), p_lvalue->position, data3335->type, ((panda$core$Object*) data3335), ((panda$collections$ListView*) p_lvalue->children));
            fieldRef3339 = $tmp3340;
            panda$core$String* $tmp3343 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, fieldRef3339, p_out);
            base3342 = $tmp3343;
            panda$core$Int64 $tmp3345 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, c3334->owner);
            size3344 = $tmp3345;
            panda$core$Int64 $tmp3347 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceFieldOffset$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64$R$panda$core$Int64(self->hCodeGen->llvmCodeGen, c3334, ((panda$core$Int64$wrapper*) f3333->second)->value);
            offset3346 = $tmp3347;
            panda$core$String* $tmp3349 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result3348 = $tmp3349;
            panda$core$String* $tmp3350 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp3351 = panda$core$String$convert$R$panda$core$String($tmp3350);
            panda$core$String* $tmp3353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3351, &$s3352);
            panda$core$String* $tmp3354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3353, result3348);
            panda$core$String* $tmp3356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3354, &$s3355);
            panda$core$String* $tmp3357 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp3358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3356, $tmp3357);
            panda$core$String* $tmp3360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3358, &$s3359);
            panda$core$String* $tmp3362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3361, base3342);
            panda$core$String* $tmp3364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3362, &$s3363);
            panda$core$Int64$wrapper* $tmp3365;
            $tmp3365 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp3365->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp3365->refCount = 1;
            $tmp3365->value = offset3346;
            panda$core$String* $tmp3366 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3364, ((panda$core$Object*) $tmp3365));
            panda$core$String* $tmp3368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3366, &$s3367);
            panda$core$String* $tmp3369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3360, $tmp3368);
            (($fn3370) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3369);
            panda$core$String* $tmp3372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3371, result3348);
            panda$core$String* $tmp3374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3372, &$s3373);
            return $tmp3374;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue3378;
    panda$core$String* value3381;
    panda$core$String* t3382;
    org$pandalanguage$pandac$parser$Token$Kind* op3385;
    panda$core$String* right3387;
    panda$core$Bit $tmp3375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp3375.value);
    panda$core$Int64 $tmp3376 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3376, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3377.value);
    panda$core$Object* $tmp3379 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3380 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3379), p_out);
    lvalue3378 = $tmp3380;
    panda$core$Object* $tmp3383 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3384 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3383)->type);
    t3382 = $tmp3384;
    op3385 = ((org$pandalanguage$pandac$parser$Token$Kind*) p_a->payload);
    panda$core$Bit $tmp3386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op3385->$rawValue, ((panda$core$Int64) { 73 }));
    if ($tmp3386.value) {
    {
        panda$core$Object* $tmp3388 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp3389 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3388), p_out);
        right3387 = $tmp3389;
        value3381 = right3387;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp3390 = panda$core$String$convert$R$panda$core$String(lvalue3378);
    panda$core$String* $tmp3392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3390, &$s3391);
    panda$core$String* $tmp3393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3392, value3381);
    panda$core$String* $tmp3395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3393, &$s3394);
    (($fn3396) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3395);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    bool $tmp3397 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp3397) goto $l3398;
    panda$core$Int64 $tmp3399 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3400 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3399, ((panda$core$Int64) { 0 }));
    $tmp3397 = $tmp3400.value;
    $l3398:;
    panda$core$Bit $tmp3401 = { $tmp3397 };
    if ($tmp3401.value) {
    {
        panda$core$Int64 $tmp3402 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp3403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3402, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3403.value);
        panda$core$Object* $tmp3405 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3406 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3405), p_out);
        panda$core$String* $tmp3407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3404, $tmp3406);
        panda$core$String* $tmp3409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3407, &$s3408);
        (($fn3410) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3409);
    }
    }
    else {
    {
        (($fn3412) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3411);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3416;
    panda$core$Int64 $tmp3413 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp3414 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3413, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3414.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp3415 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3415);
    }
    }
    panda$core$Int64 $tmp3417 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3416, ((panda$core$Int64) { 0 }), $tmp3417, ((panda$core$Bit) { false }));
    int64_t $tmp3419 = $tmp3416.min.value;
    panda$core$Int64 i3418 = { $tmp3419 };
    int64_t $tmp3421 = $tmp3416.max.value;
    bool $tmp3422 = $tmp3416.inclusive.value;
    if ($tmp3422) goto $l3429; else goto $l3430;
    $l3429:;
    if ($tmp3419 <= $tmp3421) goto $l3423; else goto $l3425;
    $l3430:;
    if ($tmp3419 < $tmp3421) goto $l3423; else goto $l3425;
    $l3423:;
    {
        panda$core$Object* $tmp3431 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3418);
        panda$core$Bit $tmp3435;
        if (((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3431)->loopLabel != NULL }).value) goto $l3432; else goto $l3433;
        $l3432:;
        panda$core$Bit $tmp3436 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3431)->loopLabel, p_name);
        $tmp3435 = $tmp3436;
        goto $l3434;
        $l3433:;
        $tmp3435 = ((panda$core$Bit) { false });
        goto $l3434;
        $l3434:;
        if ($tmp3435.value) {
        {
            panda$core$Object* $tmp3437 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3418);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3437);
        }
        }
    }
    $l3426:;
    int64_t $tmp3439 = $tmp3421 - i3418.value;
    if ($tmp3422) goto $l3440; else goto $l3441;
    $l3440:;
    if ((uint64_t) $tmp3439 >= 1) goto $l3438; else goto $l3425;
    $l3441:;
    if ((uint64_t) $tmp3439 > 1) goto $l3438; else goto $l3425;
    $l3438:;
    i3418.value += 1;
    goto $l3423;
    $l3425:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3444;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3445 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc3444 = $tmp3445;
    panda$core$String* $tmp3447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3446, desc3444->breakLabel);
    panda$core$String* $tmp3449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3447, &$s3448);
    (($fn3450) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3449);
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3451;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3452 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc3451 = $tmp3452;
    panda$core$String* $tmp3454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3453, desc3451->continueLabel);
    panda$core$String* $tmp3456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3454, &$s3455);
    (($fn3457) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3456);
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp3458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp3458.value);
    panda$core$Int64 $tmp3460 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3460, ((panda$core$Int64) { 1 }));
    bool $tmp3459 = $tmp3461.value;
    if ($tmp3459) goto $l3462;
    panda$core$Int64 $tmp3463 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3463, ((panda$core$Int64) { 2 }));
    $tmp3459 = $tmp3464.value;
    $l3462:;
    panda$core$Bit $tmp3465 = { $tmp3459 };
    PANDA_ASSERT($tmp3465.value);
    panda$core$Object* $tmp3467 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3468 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3467), p_out);
    panda$core$String* $tmp3469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3466, $tmp3468);
    panda$core$String* $tmp3471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3469, &$s3470);
    (($fn3472) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3471);
}
void org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3481;
    org$pandalanguage$pandac$IRNode* w3496;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3499;
    panda$core$Object* $tmp3474 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3475 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3474), p_out);
    panda$core$String* $tmp3476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3473, $tmp3475);
    panda$core$String* $tmp3478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3476, &$s3477);
    (($fn3479) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3478);
    panda$core$Int64 $tmp3480 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3480;
    panda$core$Int64 $tmp3482 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3481, ((panda$core$Int64) { 1 }), $tmp3482, ((panda$core$Bit) { false }));
    int64_t $tmp3484 = $tmp3481.min.value;
    panda$core$Int64 i3483 = { $tmp3484 };
    int64_t $tmp3486 = $tmp3481.max.value;
    bool $tmp3487 = $tmp3481.inclusive.value;
    if ($tmp3487) goto $l3494; else goto $l3495;
    $l3494:;
    if ($tmp3484 <= $tmp3486) goto $l3488; else goto $l3490;
    $l3495:;
    if ($tmp3484 < $tmp3486) goto $l3488; else goto $l3490;
    $l3488:;
    {
        panda$core$Object* $tmp3497 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i3483);
        w3496 = ((org$pandalanguage$pandac$IRNode*) $tmp3497);
        panda$core$Bit $tmp3498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3496->kind, ((panda$core$Int64) { 1042 }));
        if ($tmp3498.value) {
        {
            panda$core$Int64 $tmp3500 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w3496->children);
            panda$core$Int64 $tmp3501 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3500, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3499, ((panda$core$Int64) { 0 }), $tmp3501, ((panda$core$Bit) { false }));
            int64_t $tmp3503 = $tmp3499.min.value;
            panda$core$Int64 j3502 = { $tmp3503 };
            int64_t $tmp3505 = $tmp3499.max.value;
            bool $tmp3506 = $tmp3499.inclusive.value;
            if ($tmp3506) goto $l3513; else goto $l3514;
            $l3513:;
            if ($tmp3503 <= $tmp3505) goto $l3507; else goto $l3509;
            $l3514:;
            if ($tmp3503 < $tmp3505) goto $l3507; else goto $l3509;
            $l3507:;
            {
                panda$core$Object* $tmp3516 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w3496->children, j3502);
                panda$core$UInt64 $tmp3517 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3516));
                panda$core$UInt64$wrapper* $tmp3518;
                $tmp3518 = (panda$core$UInt64$wrapper*) malloc(24);
                $tmp3518->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
                $tmp3518->refCount = 1;
                $tmp3518->value = $tmp3517;
                panda$core$String* $tmp3519 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3515, ((panda$core$Object*) $tmp3518));
                panda$core$String* $tmp3521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3519, &$s3520);
                (($fn3522) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3521);
            }
            $l3510:;
            int64_t $tmp3524 = $tmp3505 - j3502.value;
            if ($tmp3506) goto $l3525; else goto $l3526;
            $l3525:;
            if ((uint64_t) $tmp3524 >= 1) goto $l3523; else goto $l3509;
            $l3526:;
            if ((uint64_t) $tmp3524 > 1) goto $l3523; else goto $l3509;
            $l3523:;
            j3502.value += 1;
            goto $l3507;
            $l3509:;
            panda$core$Int64 $tmp3529 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w3496->children);
            panda$core$Int64 $tmp3530 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3529, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp3531 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w3496->children, $tmp3530);
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3531), p_out);
            (($fn3533) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3532);
        }
        }
        else {
        {
            panda$core$Bit $tmp3534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3496->kind, ((panda$core$Int64) { 1043 }));
            PANDA_ASSERT($tmp3534.value);
            panda$core$Int64 $tmp3535 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w3496->children);
            panda$core$Bit $tmp3536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3535, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp3536.value);
            (($fn3538) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3537);
            panda$core$Object* $tmp3539 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w3496->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3539), p_out);
        }
        }
    }
    $l3491:;
    int64_t $tmp3541 = $tmp3486 - i3483.value;
    if ($tmp3487) goto $l3542; else goto $l3543;
    $l3542:;
    if ((uint64_t) $tmp3541 >= 1) goto $l3540; else goto $l3490;
    $l3543:;
    if ((uint64_t) $tmp3541 > 1) goto $l3540; else goto $l3490;
    $l3540:;
    i3483.value += 1;
    goto $l3488;
    $l3490:;
    panda$core$Int64 $tmp3546 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3546;
    (($fn3548) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3547);
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
    panda$core$String* result3549;
    org$pandalanguage$pandac$Type* $tmp3550 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp3551 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3550);
    result3549 = $tmp3551;
    panda$core$Bit $tmp3553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp3552 = $tmp3553.value;
    if (!$tmp3552) goto $l3554;
    panda$core$Bit $tmp3556 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result3549, &$s3555);
    panda$core$Bit $tmp3557 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3556);
    $tmp3552 = $tmp3557.value;
    $l3554:;
    panda$core$Bit $tmp3558 = { $tmp3552 };
    if ($tmp3558.value) {
    {
        panda$core$String* $tmp3560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3549, &$s3559);
        return $tmp3560;
    }
    }
    return result3549;
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator3572;
    panda$collections$Iterator* p$Iter3582;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3594;
    panda$io$MemoryOutputStream* bodyBuffer3616;
    panda$io$IndentedOutputStream* indentedBody3619;
    panda$collections$Iterator* s$Iter3622;
    org$pandalanguage$pandac$IRNode* s3634;
    panda$core$Object* $tmp3561 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3561)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s3562;
    panda$io$MemoryOutputStream$clear(self->methodHeaderBuffer);
    panda$core$String* $tmp3563 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp3564 = panda$core$String$convert$R$panda$core$String($tmp3563);
    panda$core$String* $tmp3566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3564, &$s3565);
    panda$core$String* $tmp3567 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp3568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3566, $tmp3567);
    panda$core$String* $tmp3570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3568, &$s3569);
    (($fn3571) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3570);
    separator3572 = &$s3573;
    panda$core$Bit $tmp3574 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp3575 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3574);
    if ($tmp3575.value) {
    {
        panda$core$String* $tmp3576 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp3577 = panda$core$String$convert$R$panda$core$String($tmp3576);
        panda$core$String* $tmp3579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3577, &$s3578);
        (($fn3580) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3579);
        separator3572 = &$s3581;
    }
    }
    {
        ITable* $tmp3583 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3583->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3583 = $tmp3583->next;
        }
        $fn3585 $tmp3584 = $tmp3583->methods[0];
        panda$collections$Iterator* $tmp3586 = $tmp3584(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3582 = $tmp3586;
        $l3587:;
        ITable* $tmp3589 = p$Iter3582->$class->itable;
        while ($tmp3589->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3589 = $tmp3589->next;
        }
        $fn3591 $tmp3590 = $tmp3589->methods[0];
        panda$core$Bit $tmp3592 = $tmp3590(p$Iter3582);
        panda$core$Bit $tmp3593 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3592);
        if (!$tmp3593.value) goto $l3588;
        {
            ITable* $tmp3595 = p$Iter3582->$class->itable;
            while ($tmp3595->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3595 = $tmp3595->next;
            }
            $fn3597 $tmp3596 = $tmp3595->methods[1];
            panda$core$Object* $tmp3598 = $tmp3596(p$Iter3582);
            p3594 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3598);
            panda$core$String* $tmp3599 = panda$core$String$convert$R$panda$core$String(separator3572);
            panda$core$String* $tmp3601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3599, &$s3600);
            panda$core$String* $tmp3602 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p3594->type);
            panda$core$String* $tmp3603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3601, $tmp3602);
            panda$core$String* $tmp3605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3603, &$s3604);
            panda$core$String* $tmp3606 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p3594->name);
            panda$core$String* $tmp3607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3605, $tmp3606);
            panda$core$String* $tmp3609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3607, &$s3608);
            (($fn3610) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3609);
            separator3572 = &$s3611;
        }
        goto $l3587;
        $l3588:;
    }
    (($fn3613) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3612);
    panda$core$Int64 $tmp3614 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3614;
    panda$core$Bit $tmp3615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp3615.value);
    panda$io$MemoryOutputStream* $tmp3617 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp3617->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp3617->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp3617);
    bodyBuffer3616 = $tmp3617;
    panda$io$IndentedOutputStream* $tmp3620 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp3620->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3620->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3620, ((panda$io$OutputStream*) bodyBuffer3616));
    indentedBody3619 = $tmp3620;
    {
        ITable* $tmp3623 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp3623->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3623 = $tmp3623->next;
        }
        $fn3625 $tmp3624 = $tmp3623->methods[0];
        panda$collections$Iterator* $tmp3626 = $tmp3624(((panda$collections$Iterable*) p_body->children));
        s$Iter3622 = $tmp3626;
        $l3627:;
        ITable* $tmp3629 = s$Iter3622->$class->itable;
        while ($tmp3629->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3629 = $tmp3629->next;
        }
        $fn3631 $tmp3630 = $tmp3629->methods[0];
        panda$core$Bit $tmp3632 = $tmp3630(s$Iter3622);
        panda$core$Bit $tmp3633 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3632);
        if (!$tmp3633.value) goto $l3628;
        {
            ITable* $tmp3635 = s$Iter3622->$class->itable;
            while ($tmp3635->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3635 = $tmp3635->next;
            }
            $fn3637 $tmp3636 = $tmp3635->methods[1];
            panda$core$Object* $tmp3638 = $tmp3636(s$Iter3622);
            s3634 = ((org$pandalanguage$pandac$IRNode*) $tmp3638);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s3634, indentedBody3619);
        }
        goto $l3627;
        $l3628:;
    }
    panda$core$String* $tmp3639 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeaderBuffer);
    (($fn3640) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3639);
    panda$core$String* $tmp3641 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer3616);
    (($fn3642) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3641);
    panda$core$Int64 $tmp3643 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3643;
    (($fn3645) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3644);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path3646;
    PANDA_ASSERT(((panda$core$Bit) { self->currentClass == NULL }).value);
    self->currentClass = p_cl;
    panda$collections$Set$clear(self->imports);
    panda$io$MemoryOutputStream$clear(self->strings);
    panda$io$MemoryOutputStream$clear(self->declarations);
    panda$io$MemoryOutputStream$clear(self->types);
    panda$io$MemoryOutputStream$clear(self->methodsBuffer);
    panda$io$MemoryOutputStream$clear(self->wrapperShimsBuffer);
    panda$io$MemoryOutputStream$clear(self->shimsBuffer);
    panda$collections$Set$clear(self->declared);
    panda$collections$Set$clear(self->writtenTypes);
    panda$collections$Set$clear(self->writtenWrappers);
    panda$collections$HashMap$clear(self->classConstants);
    panda$collections$IdentityMap$clear(self->variableNames);
    self->varCount = ((panda$core$Int64) { 0 });
    panda$collections$HashMap$clear(self->reusedValues);
    panda$collections$IdentityMap$clear(self->methodShims);
    panda$io$File* $tmp3648 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self->hCodeGen, p_cl, &$s3647);
    path3646 = $tmp3648;
    panda$io$File* $tmp3649 = panda$io$File$parent$R$panda$io$File$Q(path3646);
    panda$io$File$createDirectories($tmp3649);
    panda$io$IndentedOutputStream* $tmp3650 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp3650->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3650->refCount.value = 1;
    panda$io$OutputStream* $tmp3652 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path3646);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3650, $tmp3652);
    self->out = $tmp3650;
    org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Bit $tmp3653 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp3653.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$finish(self);
    self->currentClass = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$String* $tmp3654 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->shimsBuffer);
    (($fn3655) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3654);
    panda$io$MemoryOutputStream$clear(self->shimsBuffer);
    panda$core$String* $tmp3656 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->wrapperShimsBuffer);
    (($fn3657) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3656);
    panda$io$MemoryOutputStream$clear(self->wrapperShimsBuffer);
    panda$core$String* $tmp3658 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->types);
    (($fn3659) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3658);
    panda$io$MemoryOutputStream$clear(self->types);
    panda$core$String* $tmp3660 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->strings);
    (($fn3661) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3660);
    panda$io$MemoryOutputStream$clear(self->strings);
    panda$core$String* $tmp3662 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodsBuffer);
    (($fn3663) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3662);
    panda$io$MemoryOutputStream$clear(self->methodsBuffer);
    (($fn3664) ((panda$core$Object*) self->out->out)->$class->vtable[1])(((panda$core$Object*) self->out->out));
}

